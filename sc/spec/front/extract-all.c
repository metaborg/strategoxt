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
ATerm term_a_29;
ATerm term_s_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_x_27;
ATerm term_w_27;
ATerm term_v_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_q_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_m_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_z_19;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_c_9;
ATerm term_o_7;
ATerm term_f_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
void init_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_14);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("g_0", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("h_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_z_19);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_l_15);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_l_15);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_l_15);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_u_27);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm v_76 (ATerm), ATerm w_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm));
ATerm Let_2 (ATerm, ATerm x_76 (ATerm), ATerm y_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm g_89 (ATerm), ATerm h_89 (ATerm));
ATerm diff_1 (ATerm, ATerm l_89 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_94 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm s_102 (ATerm), ATerm t_102 (ATerm));
ATerm alltd_1 (ATerm, ATerm s_101 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm u_102 (ATerm), ATerm v_102 (ATerm));
ATerm substitute_1 (ATerm, ATerm w_102 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm c_77 (ATerm), ATerm d_77 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm c_78 (ATerm), ATerm d_78 (ATerm));
ATerm Explode_2 (ATerm, ATerm q_74 (ATerm), ATerm r_74 (ATerm));
ATerm Op_2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm pat_td_1 (ATerm, ATerm r_106 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm e_97 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_91 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm Con_3 (ATerm, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm z_77 (ATerm), ATerm a_78 (ATerm));
ATerm oncetd_1 (ATerm, ATerm e_101 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_99 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm x_98 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm u_88 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm c_97 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm));
ATerm zip_1 (ATerm, ATerm z_96 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_92 (ATerm), ATerm f_92 (ATerm));
ATerm for_3 (ATerm, ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm j_79 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm s_78 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm u_78 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm f_89 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm v_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm e_78 (ATerm), ATerm f_78 (ATerm));
ATerm Specification_1 (ATerm, ATerm x_75 (ATerm));
ATerm _2 (ATerm, ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_82 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_88 (ATerm), ATerm g_88 (ATerm));
ATerm crush_2 (ATerm, ATerm o_89 (ATerm), ATerm p_89 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_82 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_84 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_84 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_105 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_81 (ATerm));
ATerm map_1 (ATerm, ATerm n_104 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_81 (ATerm));
ATerm Program_1 (ATerm, ATerm t_72 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm u_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_104 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_82 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm z_98 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_81 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_81 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_81 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_83 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm c_3 = NULL;
  c_3 = t;
  b_3 :
  if(((ATermList) c_3 == ATempty))
    {
      {
        ATerm e_4 = NULL,h_5 = NULL;
        ATerm c_6;
        c_6 = t;
        {
          ATerm f_4 = NULL;
          t = SSLgetAnnotations(not_null(c_3));
          {
            f_4 = t;
            if(((e_4 != NULL) && (e_4 != f_4)))
              _fail(f_4);
            else
              e_4 = f_4;
          }
        }
        t = c_6;
        {
          ATerm i_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(e_4));
          {
            i_5 = t;
            if(((h_5 != NULL) && (h_5 != i_5)))
              _fail(i_5);
            else
              h_5 = i_5;
          }
          t = not_null(h_5);
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
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym__2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(g_6)), term_i_6), not_null(f_6)), term_h_6);
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
  ATerm n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL;
  n_6 = t;
  l_6 :
  if(match_cons(n_6, sym__2))
    {
      o_6 = ATgetArgument(n_6, 0);
      r_6 = ATgetArgument(n_6, 1);
      m_6 :
      if(match_cons(o_6, sym_Mod_2))
        {
          p_6 = ATgetArgument(o_6, 0);
          q_6 = ATgetArgument(o_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(r_6)), term_i_6), not_null(q_6)), term_k_6), not_null(p_6)), term_h_6);
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
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL;
  z_6 = t;
  x_6 :
  if(match_cons(z_6, sym__2))
    {
      a_7 = ATgetArgument(z_6, 0);
      b_7 = ATgetArgument(z_6, 1);
      y_6 :
      if(((ATgetType(b_7) == AT_LIST) && ((ATermList) b_7 != ATempty)))
        {
          c_7 = ATgetFirst((ATermList) b_7);
          d_7 = (ATerm) ATgetNext((ATermList) b_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(d_7)), not_null(c_7));
            {
              ATerm a_0 (ATerm t)
              {
                ATerm s_6 = t;
                int t_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(t_6);
                  }
                else
                  {
                    t = s_6;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, a_0);
            }
            t = not_null(a_7);
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
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL;
  l_7 = t;
  j_7 :
  if(match_cons(l_7, sym__2))
    {
      m_7 = ATgetArgument(l_7, 0);
      n_7 = ATgetArgument(l_7, 1);
      k_7 :
      if(((ATermList) n_7 == ATempty))
        {
          t = not_null(m_7);
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
  ATerm u_6;
  u_6 = t;
  {
    t = error_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  t = u_6;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_w_6);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm r_7 = NULL;
    ATerm s_7 = NULL;
    s_7 = t;
    if(((r_7 != NULL) && (r_7 != s_7)))
      _fail(s_7);
    else
      r_7 = s_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(r_7));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL,h_8 = NULL;
  f_8 = t;
  d_8 :
  if(match_cons(f_8, sym__2))
    {
      g_8 = ATgetArgument(f_8, 0);
      h_8 = ATgetArgument(f_8, 1);
      e_8 :
      if(match_int(h_8, 0))
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL,n_8 = NULL;
              t = not_null(g_8);
              {
                t = Arities_0(t);
                {
                  j_8 = t;
                  y_7 :
                  if(((ATgetType(j_8) == AT_LIST) && ((ATermList) j_8 != ATempty)))
                    {
                      k_8 = ATgetFirst((ATermList) j_8);
                      l_8 = (ATerm) ATgetNext((ATermList) j_8);
                      z_7 :
                      if(((ATgetType(l_8) == AT_LIST) && ((ATermList) l_8 != ATempty)))
                        {
                          m_8 = ATgetFirst((ATermList) l_8);
                          n_8 = (ATerm) ATgetNext((ATermList) l_8);
                          {
                            ATerm i_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm b_0 (ATerm t)
                                {
                                  ATerm o_8 = NULL;
                                  o_8 = t;
                                  x_7 :
                                  if(!(match_int(o_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, b_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = i_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_8)), term_o_7);
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
              LocalPopChoice(h_7);
            }
          else
            {
              t = g_7;
              {
                ATerm q_8 = NULL;
                ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
                t = not_null(g_8);
                {
                  t = Arities_0(t);
                  {
                    r_8 = t;
                    b_8 :
                    if(((ATgetType(r_8) == AT_LIST) && ((ATermList) r_8 != ATempty)))
                      {
                        s_8 = ATgetFirst((ATermList) r_8);
                        t_8 = (ATerm) ATgetNext((ATermList) r_8);
                        c_8 :
                        if(((ATermList) t_8 == ATempty))
                          {
                            {
                              if(((q_8 != NULL) && (q_8 != s_8)))
                                _fail(s_8);
                              else
                                q_8 = s_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(q_8));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_8), not_null(q_8));
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
ATerm Rec_2 (ATerm t, ATerm v_76 (ATerm), ATerm w_76 (ATerm))
{
  ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL;
  e_9 = t;
  d_9 :
  if(match_cons(e_9, sym_Rec_2))
    {
      f_9 = ATgetArgument(e_9, 0);
      g_9 = ATgetArgument(e_9, 1);
      {
        ATerm k_9 = NULL,m_9 = NULL;
        ATerm l_9 = NULL;
        t = SSLgetAnnotations(not_null(e_9));
        {
          l_9 = t;
          if(((k_9 != NULL) && (k_9 != l_9)))
            _fail(l_9);
          else
            k_9 = l_9;
        }
        {
          t = not_null(f_9);
          {
            ATerm o_9 = NULL;
            t = v_76(t);
            {
              m_9 = t;
              {
                t = not_null(g_9);
                {
                  ATerm q_9 = NULL;
                  t = w_76(t);
                  {
                    o_9 = t;
                    {
                      ATerm r_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(m_9), not_null(o_9)), not_null(k_9));
                      {
                        r_9 = t;
                        if(((q_9 != NULL) && (q_9 != r_9)))
                          _fail(r_9);
                        else
                          q_9 = r_9;
                      }
                      t = not_null(q_9);
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
ATerm SDef_3 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL;
  e_10 = t;
  d_10 :
  if(match_cons(e_10, sym_SDef_3))
    {
      f_10 = ATgetArgument(e_10, 0);
      g_10 = ATgetArgument(e_10, 1);
      h_10 = ATgetArgument(e_10, 2);
      {
        ATerm m_10 = NULL,o_10 = NULL;
        ATerm n_10 = NULL;
        t = SSLgetAnnotations(not_null(e_10));
        {
          n_10 = t;
          if(((m_10 != NULL) && (m_10 != n_10)))
            _fail(n_10);
          else
            m_10 = n_10;
        }
        {
          t = not_null(f_10);
          {
            ATerm q_10 = NULL;
            t = z_76(t);
            {
              o_10 = t;
              {
                t = not_null(g_10);
                {
                  ATerm s_10 = NULL;
                  t = a_77(t);
                  {
                    q_10 = t;
                    {
                      t = not_null(h_10);
                      {
                        ATerm u_10 = NULL;
                        t = b_77(t);
                        {
                          s_10 = t;
                          {
                            ATerm v_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(o_10), not_null(q_10), not_null(s_10)), not_null(m_10));
                            {
                              v_10 = t;
                              if(((u_10 != NULL) && (u_10 != v_10)))
                                _fail(v_10);
                              else
                                u_10 = v_10;
                            }
                            t = not_null(u_10);
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
ATerm Let_2 (ATerm t, ATerm x_76 (ATerm), ATerm y_76 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Let_2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        ATerm o_11 = NULL,q_11 = NULL;
        ATerm p_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          p_11 = t;
          if(((o_11 != NULL) && (o_11 != p_11)))
            _fail(p_11);
          else
            o_11 = p_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm s_11 = NULL;
            t = x_76(t);
            {
              q_11 = t;
              {
                t = not_null(k_11);
                {
                  ATerm u_11 = NULL;
                  t = y_76(t);
                  {
                    s_11 = t;
                    {
                      ATerm v_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(q_11), not_null(s_11)), not_null(o_11));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm p_103 (ATerm), ATerm q_103 (ATerm), ATerm r_103 (ATerm))
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, p_103, p_103);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, r_103, r_103, p_103);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = Rec_2(t, r_103, p_103);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_Rec_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(e_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL,p_12 = NULL,q_12 = NULL;
  n_12 = t;
  m_12 :
  if(match_cons(n_12, sym_SDef_3))
    {
      o_12 = ATgetArgument(n_12, 0);
      p_12 = ATgetArgument(n_12, 1);
      q_12 = ATgetArgument(n_12, 2);
      {
        t = not_null(p_12);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL;
            u_12 = t;
            l_12 :
            if(match_cons(u_12, sym_VarDec_2))
              {
                v_12 = ATgetArgument(u_12, 0);
                w_12 = ATgetArgument(u_12, 1);
                t = not_null(v_12);
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
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_Let_2))
    {
      f_13 = ATgetArgument(e_13, 0);
      g_13 = ATgetArgument(e_13, 1);
      {
        t = not_null(f_13);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL;
            j_13 = t;
            c_13 :
            if(match_cons(j_13, sym_SDef_3))
              {
                k_13 = ATgetArgument(j_13, 0);
                l_13 = ATgetArgument(j_13, 1);
                m_13 = ATgetArgument(j_13, 2);
                t = not_null(k_13);
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
ATerm crush_3 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm), ATerm s_89 (ATerm))
{
  ATerm w_13 = NULL;
  ATerm y_13 = NULL;
  w_13 = t;
  {
    ATerm z_13 = NULL;
    ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL;
    t = not_null(w_13);
    {
      z_13 = t;
      {
        t = SSL_explode_term(not_null(z_13));
        {
          b_14 = t;
          v_13 :
          if(match_cons(b_14, sym__2))
            {
              c_14 = ATgetArgument(b_14, 0);
              d_14 = ATgetArgument(b_14, 1);
              if(((y_13 != NULL) && (y_13 != d_14)))
                _fail(d_14);
              else
                y_13 = d_14;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_13);
      t = foldr_3(t, q_89, r_89, s_89);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_89 (ATerm), ATerm h_89 (ATerm))
{
  ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL;
  k_14 = t;
  j_14 :
  if(((ATgetType(k_14) == AT_LIST) && ((ATermList) k_14 != ATempty)))
    {
      l_14 = ATgetFirst((ATermList) k_14);
      m_14 = (ATerm) ATgetNext((ATermList) k_14);
      {
        t = h_89(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm p_14 = NULL;
            p_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_14), not_null(p_14));
              t = g_89(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(m_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm l_89 (ATerm))
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
          ATerm b_15 (ATerm t)
          {
            ATerm v_7 = t;
            int w_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(w_7);
              }
            else
              {
                t = v_7;
                {
                  ATerm a_8 = t;
                  int i_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(x_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_89, q_0);
                      t = b_15(t);
                      LocalPopChoice(i_8);
                    }
                  else
                    {
                      t = a_8;
                      t = Cons_2(t, _id, b_15);
                    }
                }
              }
            return(t);
          }
          t = b_15(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm g_94 (ATerm), ATerm h_94 (ATerm), ATerm i_94 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm j_94 (ATerm))
{
  ATerm f_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm p_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_94(t);
          LocalPopChoice(u_8);
        }
      else
        {
          t = p_8;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm s_0 (ATerm t)
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_15 = NULL;
          ATerm x_8;
          x_8 = t;
          {
            ATerm e_15 = NULL;
            t = h_94(t);
            {
              e_15 = t;
              if(((d_15 != NULL) && (d_15 != e_15)))
                _fail(e_15);
              else
                d_15 = e_15;
            }
          }
          t = x_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(d_15);
                return(t);
              }
              t = split_2(t, f_15, v_0);
              t = diff_1(t, j_94);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = i_94(t, t_0, f_15, u_0);
            {
              ATerm w_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, w_0, union_0, _id);
            }
          }
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, x_0, union_0, f_15);
          }
        }
      return(t);
    }
    t = split_2(t, r_0, s_0);
    t = union_0(t);
    return(t);
  }
  t = f_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL;
    o_15 = t;
    j_15 :
    if(match_cons(o_15, sym_Call_2))
      {
        p_15 = ATgetArgument(o_15, 0);
        r_15 = ATgetArgument(o_15, 1);
        k_15 :
        if(match_cons(p_15, sym_SVar_1))
          {
            q_15 = ATgetArgument(p_15, 0);
            {
              ATerm u_15 = NULL;
              ATerm v_15 = NULL;
              t = not_null(r_15);
              {
                t = length_0(t);
                {
                  v_15 = t;
                  if(((u_15 != NULL) && (u_15 != v_15)))
                    _fail(v_15);
                  else
                    u_15 = v_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(q_15), not_null(u_15)));
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
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
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
  ATerm a_1 (ATerm t)
  {
    ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
    w_15 = t;
    m_15 :
    if(match_cons(w_15, sym__2))
      {
        x_15 = ATgetArgument(w_15, 0);
        a_16 = ATgetArgument(w_15, 1);
        n_15 :
        if(match_cons(x_15, sym__2))
          {
            y_15 = ATgetArgument(x_15, 0);
            z_15 = ATgetArgument(x_15, 1);
            if(((y_15 != NULL) && (y_15 != a_16)))
              _fail(a_16);
            else
              y_15 = a_16;
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
  ATerm m_16 = NULL;
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  {
    ATerm r_16 = NULL;
    ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
    t = not_null(m_16);
    {
      r_16 = t;
      {
        t = SSL_explode_term(not_null(r_16));
        {
          t_16 = t;
          i_16 :
          if(match_cons(t_16, sym__2))
            {
              u_16 = ATgetArgument(t_16, 0);
              v_16 = ATgetArgument(t_16, 1);
              j_16 :
              if(match_string(u_16, ""))
                {
                  k_16 :
                  if(((ATgetType(v_16) == AT_LIST) && ((ATermList) v_16 != ATempty)))
                    {
                      w_16 = ATgetFirst((ATermList) v_16);
                      x_16 = (ATerm) ATgetNext((ATermList) v_16);
                      l_16 :
                      if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
                        {
                          y_16 = ATgetFirst((ATermList) x_16);
                          z_16 = (ATerm) ATgetNext((ATermList) x_16);
                          {
                            if(((o_16 != NULL) && (o_16 != w_16)))
                              _fail(w_16);
                            else
                              o_16 = w_16;
                            {
                              if(((q_16 != NULL) && (q_16 != y_16)))
                                _fail(y_16);
                              else
                                q_16 = y_16;
                              if(((p_16 != NULL) && (p_16 != z_16)))
                                _fail(z_16);
                              else
                                p_16 = z_16;
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
    t = not_null(q_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_c_9;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm f_17 = NULL,h_17 = NULL;
    ATerm h_9;
    h_9 = t;
    {
      ATerm g_17 = NULL;
      t = Fst_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
    t = h_9;
    {
      ATerm i_17 = NULL;
      t = Snd_0(t);
      {
        i_17 = t;
        if(((h_17 != NULL) && (h_17 != i_17)))
          _fail(i_17);
        else
          h_17 = i_17;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(f_17), not_null(h_17));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  p_17 = t;
  m_17 :
  if(match_cons(p_17, sym_Call_2))
    {
      q_17 = ATgetArgument(p_17, 0);
      s_17 = ATgetArgument(p_17, 1);
      n_17 :
      if(match_cons(q_17, sym_SVar_1))
        {
          r_17 = ATgetArgument(q_17, 0);
          o_17 :
          if(((ATermList) s_17 == ATempty))
            {
              t = not_null(r_17);
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
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  y_17 = t;
  w_17 :
  if(match_cons(y_17, sym__2))
    {
      z_17 = ATgetArgument(y_17, 0);
      a_18 = ATgetArgument(y_17, 1);
      x_17 :
      if(((ATgetType(a_18) == AT_LIST) && ((ATermList) a_18 != ATempty)))
        {
          b_18 = ATgetFirst((ATermList) a_18);
          c_18 = (ATerm) ATgetNext((ATermList) a_18);
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_17), not_null(c_18));
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
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL;
  k_18 = t;
  h_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      i_18 :
      if(((ATgetType(m_18) == AT_LIST) && ((ATermList) m_18 != ATempty)))
        {
          n_18 = ATgetFirst((ATermList) m_18);
          q_18 = (ATerm) ATgetNext((ATermList) m_18);
          j_18 :
          if(match_cons(n_18, sym__2))
            {
              o_18 = ATgetArgument(n_18, 0);
              p_18 = ATgetArgument(n_18, 1);
              {
                ATerm s_18 = NULL;
                if(((l_18 != NULL) && (l_18 != o_18)))
                  _fail(o_18);
                else
                  l_18 = o_18;
                {
                  if(((s_18 != NULL) && (s_18 != p_18)))
                    _fail(p_18);
                  else
                    s_18 = p_18;
                  t = not_null(s_18);
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
  ATerm i_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm s_102 (ATerm), ATerm t_102 (ATerm))
{
  ATerm y_18 = NULL;
  ATerm a_19 = NULL,b_19 = NULL;
  y_18 = t;
  {
    ATerm c_19 = NULL;
    t = not_null(y_18);
    {
      ATerm d_19 = NULL;
      t = s_102(t);
      {
        c_19 = t;
        {
          if(((a_19 != NULL) && (a_19 != c_19)))
            _fail(c_19);
          else
            a_19 = c_19;
          {
            t = t_102(t);
            {
              d_19 = t;
              if(((b_19 != NULL) && (b_19 != d_19)))
                _fail(d_19);
              else
                b_19 = d_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(b_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm s_101 (ATerm))
{
  ATerm h_19 (ATerm t)
  {
    ATerm n_9 = t;
    int p_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        LocalPopChoice(p_9);
      }
    else
      {
        t = n_9;
        t = _all(t, h_19);
      }
    return(t);
  }
  t = h_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  m_19 = t;
  l_19 :
  if(match_cons(m_19, sym__2))
    {
      n_19 = ATgetArgument(m_19, 0);
      o_19 = ATgetArgument(m_19, 1);
      {
        ATerm r_19 = NULL;
        if(((r_19 != NULL) && (r_19 != o_19)))
          _fail(o_19);
        else
          r_19 = o_19;
      }
    }
  else
    {
      if(match_cons(m_19, sym__3))
        {
          n_19 = ATgetArgument(m_19, 0);
          o_19 = ATgetArgument(m_19, 1);
          p_19 = ATgetArgument(m_19, 2);
          {
            ATerm x_19 = NULL;
            ATerm y_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(o_19));
            {
              t = zip_1(t, _id);
              {
                y_19 = t;
                if(((x_19 != NULL) && (x_19 != y_19)))
                  _fail(y_19);
                else
                  x_19 = y_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(p_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm u_102 (ATerm), ATerm v_102 (ATerm))
{
  ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
  t = subs_args_0(t);
  {
    e_20 = t;
    d_20 :
    if(match_cons(e_20, sym__2))
      {
        f_20 = ATgetArgument(e_20, 0);
        g_20 = ATgetArgument(e_20, 1);
        {
          t = not_null(g_20);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(f_20);
                return(t);
              }
              t = SubsVar_2(t, u_102, e_1);
              t = v_102(t);
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
ATerm substitute_1 (ATerm t, ATerm w_102 (ATerm))
{
  t = substitute_2(t, w_102, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL;
  q_20 = t;
  p_20 :
  if(match_cons(q_20, sym_VarDec_2))
    {
      r_20 = ATgetArgument(q_20, 0);
      s_20 = ATgetArgument(q_20, 1);
      {
        ATerm w_20 = NULL,y_20 = NULL;
        ATerm x_20 = NULL;
        t = SSLgetAnnotations(not_null(q_20));
        {
          x_20 = t;
          if(((w_20 != NULL) && (w_20 != x_20)))
            _fail(x_20);
          else
            w_20 = x_20;
        }
        {
          t = not_null(r_20);
          {
            ATerm a_21 = NULL;
            t = c_77(t);
            {
              y_20 = t;
              {
                t = not_null(s_20);
                {
                  ATerm c_21 = NULL;
                  t = d_77(t);
                  {
                    a_21 = t;
                    {
                      ATerm d_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(y_20), not_null(a_21)), not_null(w_20));
                      {
                        d_21 = t;
                        if(((c_21 != NULL) && (c_21 != d_21)))
                          _fail(d_21);
                        else
                          c_21 = d_21;
                      }
                      t = not_null(c_21);
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
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  x_21 = t;
  v_21 :
  if(((ATgetType(x_21) == AT_LIST) && ((ATermList) x_21 != ATempty)))
    {
      y_21 = ATgetFirst((ATermList) x_21);
      c_22 = (ATerm) ATgetNext((ATermList) x_21);
      w_21 :
      if(match_cons(y_21, sym_SDef_3))
        {
          z_21 = ATgetArgument(y_21, 0);
          a_22 = ATgetArgument(y_21, 1);
          b_22 = ATgetArgument(y_21, 2);
          {
            ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL,e_23 = NULL;
            ATerm s_9;
            s_9 = t;
            {
              ATerm k_22 = NULL;
              t = not_null(a_22);
              {
                ATerm q_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  k_22 = t;
                  {
                    if(((h_22 != NULL) && (h_22 != k_22)))
                      _fail(k_22);
                    else
                      h_22 = k_22;
                    {
                      t = not_null(h_22);
                      {
                        ATerm d_23 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm l_22 = NULL,m_22 = NULL,n_22 = NULL;
                          l_22 = t;
                          m_21 :
                          if(match_cons(l_22, sym_VarDec_2))
                            {
                              m_22 = ATgetArgument(l_22, 0);
                              n_22 = ATgetArgument(l_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(m_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          q_22 = t;
                          {
                            if(((i_22 != NULL) && (i_22 != q_22)))
                              _fail(q_22);
                            else
                              i_22 = q_22;
                            {
                              t = not_null(x_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
                                  r_22 = t;
                                  s_21 :
                                  if(match_cons(r_22, sym_SDef_3))
                                    {
                                      s_22 = ATgetArgument(r_22, 0);
                                      t_22 = ATgetArgument(r_22, 1);
                                      u_22 = ATgetArgument(r_22, 2);
                                      {
                                        ATerm x_22 = NULL;
                                        ATerm c_23 = NULL;
                                        t = not_null(t_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                                            y_22 = t;
                                            q_21 :
                                            if(match_cons(y_22, sym_VarDec_2))
                                              {
                                                z_22 = ATgetArgument(y_22, 0);
                                                a_23 = ATgetArgument(y_22, 1);
                                                t = not_null(z_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            c_23 = t;
                                            if(((x_22 != NULL) && (x_22 != c_23)))
                                              _fail(c_23);
                                            else
                                              x_22 = c_23;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(x_22), not_null(i_22), not_null(u_22));
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
                                t = map_1(t, h_1);
                                {
                                  d_23 = t;
                                  if(((j_22 != NULL) && (j_22 != d_23)))
                                    _fail(d_23);
                                  else
                                    j_22 = d_23;
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
            t = s_9;
            {
              ATerm f_23 = NULL;
              t = not_null(j_22);
              {
                t = choices_0(t);
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(z_21), not_null(h_22), not_null(e_23));
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
  ATerm s_23 = NULL,t_23 = NULL,u_23 = NULL;
  s_23 = t;
  q_23 :
  if(((ATgetType(s_23) == AT_LIST) && ((ATermList) s_23 != ATempty)))
    {
      t_23 = ATgetFirst((ATermList) s_23);
      u_23 = (ATerm) ATgetNext((ATermList) s_23);
      r_23 :
      if(((ATermList) u_23 == ATempty))
        {
          t = not_null(t_23);
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
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL;
  b_24 = t;
  z_23 :
  if(match_cons(b_24, sym__2))
    {
      c_24 = ATgetArgument(b_24, 0);
      f_24 = ATgetArgument(b_24, 1);
      a_24 :
      if(match_cons(c_24, sym__2))
        {
          d_24 = ATgetArgument(c_24, 0);
          e_24 = ATgetArgument(c_24, 1);
          {
            ATerm j_24 = NULL;
            ATerm k_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_24), not_null(e_24));
            {
              t = Definitions_0(t);
              {
                k_24 = t;
                if(((j_24 != NULL) && (j_24 != k_24)))
                  _fail(k_24);
                else
                  j_24 = k_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_24), not_null(f_24));
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
  ATerm e_25 = NULL,f_25 = NULL,g_25 = NULL;
  f_25 = t;
  d_25 :
  if(match_cons(f_25, sym_ExplodeCong_2))
    {
      g_25 = ATgetArgument(f_25, 0);
      e_25 = ATgetArgument(f_25, 1);
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
        ATerm n_25 = NULL;
        ATerm o_25 = NULL;
        t = new_0(t);
        {
          n_25 = t;
          {
            if(((j_25 != NULL) && (j_25 != n_25)))
              _fail(n_25);
            else
              j_25 = n_25;
            {
              ATerm p_25 = NULL;
              t = new_0(t);
              {
                o_25 = t;
                {
                  if(((k_25 != NULL) && (k_25 != o_25)))
                    _fail(o_25);
                  else
                    k_25 = o_25;
                  {
                    ATerm q_25 = NULL;
                    t = new_0(t);
                    {
                      p_25 = t;
                      {
                        if(((l_25 != NULL) && (l_25 != p_25)))
                          _fail(p_25);
                        else
                          l_25 = p_25;
                        {
                          t = new_0(t);
                          {
                            q_25 = t;
                            if(((m_25 != NULL) && (m_25 != q_25)))
                              _fail(q_25);
                            else
                              m_25 = q_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_25)), not_null(l_25)), not_null(k_25)), not_null(j_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(g_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(l_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))))));
      }
    }
  else
    {
      if(match_cons(f_25, sym_Build_1))
        {
          g_25 = ATgetArgument(f_25, 0);
          {
            ATerm s_25 = NULL,t_25 = NULL,u_25 = NULL,v_25 = NULL;
            ATerm w_25 = NULL;
            ATerm a_26 = NULL;
            t = new_0(t);
            {
              w_25 = t;
              {
                if(((u_25 != NULL) && (u_25 != w_25)))
                  _fail(w_25);
                else
                  u_25 = w_25;
                {
                  t = not_null(g_25);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
                      x_25 = t;
                      w_24 :
                      if(match_cons(x_25, sym_Explode_2))
                        {
                          y_25 = ATgetArgument(x_25, 0);
                          z_25 = ATgetArgument(x_25, 1);
                          {
                            if(((s_25 != NULL) && (s_25 != y_25)))
                              _fail(y_25);
                            else
                              s_25 = y_25;
                            {
                              if(((t_25 != NULL) && (t_25 != z_25)))
                                _fail(z_25);
                              else
                                t_25 = z_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25));
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
                      a_26 = t;
                      if(((v_25 != NULL) && (v_25 != a_26)))
                        _fail(a_26);
                      else
                        v_25 = a_26;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_25)), not_null(s_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_25)))));
          }
        }
      else
        {
          if(match_cons(f_25, sym_Match_1))
            {
              g_25 = ATgetArgument(f_25, 0);
              {
                ATerm c_26 = NULL,d_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL;
                ATerm n_26 = NULL;
                ATerm o_26 = NULL;
                t = new_0(t);
                {
                  n_26 = t;
                  {
                    if(((j_26 != NULL) && (j_26 != n_26)))
                      _fail(n_26);
                    else
                      j_26 = n_26;
                    {
                      ATerm v_26 = NULL;
                      t = new_0(t);
                      {
                        o_26 = t;
                        {
                          if(((k_26 != NULL) && (k_26 != o_26)))
                            _fail(o_26);
                          else
                            k_26 = o_26;
                          {
                            t = not_null(g_25);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm p_26 = NULL,t_26 = NULL,u_26 = NULL;
                                p_26 = t;
                                b_25 :
                                if(match_cons(p_26, sym_Explode_2))
                                  {
                                    t_26 = ATgetArgument(p_26, 0);
                                    u_26 = ATgetArgument(p_26, 1);
                                    {
                                      if(((c_26 != NULL) && (c_26 != t_26)))
                                        _fail(t_26);
                                      else
                                        c_26 = t_26;
                                      {
                                        if(((d_26 != NULL) && (d_26 != u_26)))
                                          _fail(u_26);
                                        else
                                          d_26 = u_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(j_26));
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
                                v_26 = t;
                                if(((l_26 != NULL) && (l_26 != v_26)))
                                  _fail(v_26);
                                else
                                  l_26 = v_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(j_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_26)), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_26)), not_null(c_26)))))));
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
  ATerm e_29 = NULL,m_29 = NULL;
  e_29 = t;
  d_29 :
  if(match_cons(e_29, sym_Match_1))
    {
      m_29 = ATgetArgument(e_29, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
            ATerm s_29 = NULL;
            ATerm w_29 = NULL;
            t = new_0(t);
            {
              s_29 = t;
              {
                if(((q_29 != NULL) && (q_29 != s_29)))
                  _fail(s_29);
                else
                  q_29 = s_29;
                {
                  t = not_null(m_29);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL;
                      t_29 = t;
                      t_28 :
                      if(match_cons(t_29, sym_Anno_2))
                        {
                          u_29 = ATgetArgument(t_29, 0);
                          v_29 = ATgetArgument(t_29, 1);
                          {
                            if(((o_29 != NULL) && (o_29 != u_29)))
                              _fail(u_29);
                            else
                              o_29 = u_29;
                            {
                              if(((p_29 != NULL) && (p_29 != v_29)))
                                _fail(v_29);
                              else
                                p_29 = v_29;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(q_29)), not_null(o_29));
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
                      w_29 = t;
                      if(((r_29 != NULL) && (r_29 != w_29)))
                        _fail(w_29);
                      else
                        r_29 = w_29;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(r_29)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_29)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(p_29))))));
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
                  ATerm y_29 = NULL,c_30 = NULL,d_30 = NULL;
                  ATerm e_30 = NULL;
                  ATerm h_30 = NULL;
                  t = new_0(t);
                  {
                    e_30 = t;
                    {
                      if(((c_30 != NULL) && (c_30 != e_30)))
                        _fail(e_30);
                      else
                        c_30 = e_30;
                      {
                        t = not_null(m_29);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm f_30 = NULL,g_30 = NULL;
                            f_30 = t;
                            x_28 :
                            if(match_cons(f_30, sym_RootApp_1))
                              {
                                g_30 = ATgetArgument(f_30, 0);
                                {
                                  if(((y_29 != NULL) && (y_29 != g_30)))
                                    _fail(g_30);
                                  else
                                    y_29 = g_30;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(c_30));
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
                            h_30 = t;
                            if(((d_30 != NULL) && (d_30 != h_30)))
                              _fail(h_30);
                            else
                              d_30 = h_30;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(c_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(d_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(c_30))), not_null(y_29))));
                  LocalPopChoice(c_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
                    ATerm p_30 = NULL;
                    ATerm t_30 = NULL;
                    t = new_0(t);
                    {
                      p_30 = t;
                      {
                        if(((n_30 != NULL) && (n_30 != p_30)))
                          _fail(p_30);
                        else
                          n_30 = p_30;
                        {
                          t = not_null(m_29);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
                              q_30 = t;
                              b_29 :
                              if(match_cons(q_30, sym_App_2))
                                {
                                  r_30 = ATgetArgument(q_30, 0);
                                  s_30 = ATgetArgument(q_30, 1);
                                  {
                                    if(((m_30 != NULL) && (m_30 != r_30)))
                                      _fail(r_30);
                                    else
                                      m_30 = r_30;
                                    {
                                      if(((l_30 != NULL) && (l_30 != s_30)))
                                        _fail(s_30);
                                      else
                                        l_30 = s_30;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_30));
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
                              t_30 = t;
                              if(((o_30 != NULL) && (o_30 != t_30)))
                                _fail(t_30);
                              else
                                o_30 = t_30;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(o_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(n_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(l_30)), not_null(m_30)))));
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
  ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL;
  l_31 = t;
  j_31 :
  if(match_cons(l_31, sym_Match_1))
    {
      m_31 = ATgetArgument(l_31, 0);
      k_31 :
      if(match_cons(m_31, sym_RootApp_1))
        {
          n_31 = ATgetArgument(m_31, 0);
          t = not_null(n_31);
        }
      else
        {
          if(match_cons(m_31, sym_App_2))
            {
              n_31 = ATgetArgument(m_31, 0);
              o_31 = ATgetArgument(m_31, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(n_31), not_null(o_31));
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
  ATerm a_32 = NULL,b_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_cons(a_32, sym_Match_1))
    {
      b_32 = ATgetArgument(a_32, 0);
      {
        ATerm d_32 = NULL,e_32 = NULL;
        ATerm q_32 = NULL;
        t = not_null(b_32);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm f_32 = NULL,g_32 = NULL,p_32 = NULL;
            f_32 = t;
            w_31 :
            if(match_cons(f_32, sym_RootApp_1))
              {
                g_32 = ATgetArgument(f_32, 0);
                x_31 :
                if(match_cons(g_32, sym_Match_1))
                  {
                    p_32 = ATgetArgument(g_32, 0);
                    {
                      if(((d_32 != NULL) && (d_32 != p_32)))
                        _fail(p_32);
                      else
                        d_32 = p_32;
                      t = not_null(d_32);
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
            q_32 = t;
            if(((e_32 != NULL) && (e_32 != q_32)))
              _fail(q_32);
            else
              e_32 = q_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(e_32));
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
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0(t);
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
            t = Mapp1_0(t);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            t = Mapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  t_33 :
  if(match_cons(a_34, sym_Build_1))
    {
      b_34 = ATgetArgument(a_34, 0);
      {
        ATerm p_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
            ATerm h_34 = NULL;
            ATerm m_34 = NULL;
            t = new_0(t);
            {
              h_34 = t;
              {
                if(((f_34 != NULL) && (f_34 != h_34)))
                  _fail(h_34);
                else
                  f_34 = h_34;
                {
                  t = not_null(b_34);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm i_34 = NULL,k_34 = NULL,l_34 = NULL;
                      i_34 = t;
                      b_33 :
                      if(match_cons(i_34, sym_Anno_2))
                        {
                          k_34 = ATgetArgument(i_34, 0);
                          l_34 = ATgetArgument(i_34, 1);
                          {
                            if(((d_34 != NULL) && (d_34 != k_34)))
                              _fail(k_34);
                            else
                              d_34 = k_34;
                            {
                              if(((e_34 != NULL) && (e_34 != l_34)))
                                _fail(l_34);
                              else
                                e_34 = l_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34));
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
                      m_34 = t;
                      if(((g_34 != NULL) && (g_34 != m_34)))
                        _fail(m_34);
                      else
                        g_34 = m_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_t_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_34)), not_null(d_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(f_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(g_34))));
            LocalPopChoice(r_10);
          }
        else
          {
            t = p_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
                  ATerm r_34 = NULL;
                  ATerm u_34 = NULL;
                  t = new_0(t);
                  {
                    r_34 = t;
                    {
                      if(((p_34 != NULL) && (p_34 != r_34)))
                        _fail(r_34);
                      else
                        p_34 = r_34;
                      {
                        t = not_null(b_34);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm s_34 = NULL,t_34 = NULL;
                            s_34 = t;
                            h_33 :
                            if(match_cons(s_34, sym_RootApp_1))
                              {
                                t_34 = ATgetArgument(s_34, 0);
                                {
                                  if(((o_34 != NULL) && (o_34 != t_34)))
                                    _fail(t_34);
                                  else
                                    o_34 = t_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_34));
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
                            u_34 = t;
                            if(((q_34 != NULL) && (q_34 != u_34)))
                              _fail(u_34);
                            else
                              q_34 = u_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(o_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_34))));
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
                    ATerm a_35 = NULL;
                    ATerm e_35 = NULL;
                    t = new_0(t);
                    {
                      a_35 = t;
                      {
                        if(((y_34 != NULL) && (y_34 != a_35)))
                          _fail(a_35);
                        else
                          y_34 = a_35;
                        {
                          t = not_null(b_34);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
                              b_35 = t;
                              l_33 :
                              if(match_cons(b_35, sym_App_2))
                                {
                                  c_35 = ATgetArgument(b_35, 0);
                                  d_35 = ATgetArgument(b_35, 1);
                                  {
                                    if(((w_34 != NULL) && (w_34 != c_35)))
                                      _fail(c_35);
                                    else
                                      w_34 = c_35;
                                    {
                                      if(((x_34 != NULL) && (x_34 != d_35)))
                                        _fail(d_35);
                                      else
                                        x_34 = d_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34));
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
                              e_35 = t;
                              if(((z_34 != NULL) && (z_34 != e_35)))
                                _fail(e_35);
                              else
                                z_34 = e_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_34), not_null(x_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(z_34))));
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
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL;
  v_35 = t;
  t_35 :
  if(match_cons(v_35, sym_Build_1))
    {
      w_35 = ATgetArgument(v_35, 0);
      u_35 :
      if(match_cons(w_35, sym_RootApp_1))
        {
          x_35 = ATgetArgument(w_35, 0);
          t = not_null(x_35);
        }
      else
        {
          if(match_cons(w_35, sym_App_2))
            {
              x_35 = ATgetArgument(w_35, 0);
              y_35 = ATgetArgument(w_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_35)), not_null(x_35));
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
ATerm Prim_2 (ATerm t, ATerm c_78 (ATerm), ATerm d_78 (ATerm))
{
  ATerm k_36 = NULL,n_36 = NULL,o_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_Prim_2))
    {
      n_36 = ATgetArgument(k_36, 0);
      o_36 = ATgetArgument(k_36, 1);
      {
        ATerm x_36 = NULL,z_36 = NULL;
        ATerm y_36 = NULL;
        t = SSLgetAnnotations(not_null(k_36));
        {
          y_36 = t;
          if(((x_36 != NULL) && (x_36 != y_36)))
            _fail(y_36);
          else
            x_36 = y_36;
        }
        {
          t = not_null(n_36);
          {
            ATerm b_37 = NULL;
            t = c_78(t);
            {
              z_36 = t;
              {
                t = not_null(o_36);
                {
                  ATerm d_37 = NULL;
                  t = d_78(t);
                  {
                    b_37 = t;
                    {
                      ATerm e_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(z_36), not_null(b_37)), not_null(x_36));
                      {
                        e_37 = t;
                        if(((d_37 != NULL) && (d_37 != e_37)))
                          _fail(e_37);
                        else
                          d_37 = e_37;
                      }
                      t = not_null(d_37);
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
ATerm Explode_2 (ATerm t, ATerm q_74 (ATerm), ATerm r_74 (ATerm))
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym_Explode_2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        ATerm a_38 = NULL,c_38 = NULL;
        ATerm b_38 = NULL;
        t = SSLgetAnnotations(not_null(u_37));
        {
          b_38 = t;
          if(((a_38 != NULL) && (a_38 != b_38)))
            _fail(b_38);
          else
            a_38 = b_38;
        }
        {
          t = not_null(v_37);
          {
            ATerm e_38 = NULL;
            t = q_74(t);
            {
              c_38 = t;
              {
                t = not_null(w_37);
                {
                  ATerm g_38 = NULL;
                  t = r_74(t);
                  {
                    e_38 = t;
                    {
                      ATerm j_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(c_38), not_null(e_38)), not_null(a_38));
                      {
                        j_38 = t;
                        if(((g_38 != NULL) && (g_38 != j_38)))
                          _fail(j_38);
                        else
                          g_38 = j_38;
                      }
                      t = not_null(g_38);
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
ATerm Op_2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  w_38 :
  if(match_cons(x_38, sym_Op_2))
    {
      y_38 = ATgetArgument(x_38, 0);
      z_38 = ATgetArgument(x_38, 1);
      {
        ATerm d_39 = NULL,f_39 = NULL;
        ATerm e_39 = NULL;
        t = SSLgetAnnotations(not_null(x_38));
        {
          e_39 = t;
          if(((d_39 != NULL) && (d_39 != e_39)))
            _fail(e_39);
          else
            d_39 = e_39;
        }
        {
          t = not_null(y_38);
          {
            ATerm h_39 = NULL;
            t = c_76(t);
            {
              f_39 = t;
              {
                t = not_null(z_38);
                {
                  ATerm j_39 = NULL;
                  t = d_76(t);
                  {
                    h_39 = t;
                    {
                      ATerm k_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(f_39), not_null(h_39)), not_null(d_39));
                      {
                        k_39 = t;
                        if(((j_39 != NULL) && (j_39 != k_39)))
                          _fail(k_39);
                        else
                          j_39 = k_39;
                      }
                      t = not_null(j_39);
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
ATerm pat_td_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_106(t);
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              ATerm t_1 (ATerm t)
              {
                t = pat_td_1(t, r_106);
                return(t);
              }
              t = fetch_1(t, t_1);
              return(t);
            }
            t = Op_2(t, _id, s_1);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_1 (ATerm t)
                  {
                    t = pat_td_1(t, r_106);
                    return(t);
                  }
                  t = Explode_2(t, _id, u_1);
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
                        ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1(t, r_106);
                          return(t);
                        }
                        t = Explode_2(t, v_1, _id);
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm w_1 (ATerm t)
                          {
                            ATerm x_1 (ATerm t)
                            {
                              t = pat_td_1(t, r_106);
                              return(t);
                            }
                            t = fetch_1(t, x_1);
                            return(t);
                          }
                          t = Prim_2(t, _id, w_1);
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
  ATerm f_40 = NULL,g_40 = NULL;
  f_40 = t;
  a_40 :
  if(match_cons(f_40, sym_Build_1))
    {
      g_40 = ATgetArgument(f_40, 0);
      {
        ATerm g_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_40 = NULL,j_40 = NULL;
            ATerm n_40 = NULL;
            t = not_null(g_40);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL;
                k_40 = t;
                t_39 :
                if(match_cons(k_40, sym_RootApp_1))
                  {
                    l_40 = ATgetArgument(k_40, 0);
                    u_39 :
                    if(match_cons(l_40, sym_Build_1))
                      {
                        m_40 = ATgetArgument(l_40, 0);
                        {
                          if(((i_40 != NULL) && (i_40 != m_40)))
                            _fail(m_40);
                          else
                            i_40 = m_40;
                          t = not_null(i_40);
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
                n_40 = t;
                if(((j_40 != NULL) && (j_40 != n_40)))
                  _fail(n_40);
                else
                  j_40 = n_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(j_40));
            LocalPopChoice(l_11);
          }
        else
          {
            t = g_11;
            {
              ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL;
              ATerm d_41 = NULL;
              t = not_null(g_40);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
                  z_40 = t;
                  x_39 :
                  if(match_cons(z_40, sym_App_2))
                    {
                      a_41 = ATgetArgument(z_40, 0);
                      c_41 = ATgetArgument(z_40, 1);
                      y_39 :
                      if(match_cons(a_41, sym_Build_1))
                        {
                          b_41 = ATgetArgument(a_41, 0);
                          {
                            if(((x_40 != NULL) && (x_40 != b_41)))
                              _fail(b_41);
                            else
                              x_40 = b_41;
                            {
                              if(((w_40 != NULL) && (w_40 != c_41)))
                                _fail(c_41);
                              else
                                w_40 = c_41;
                              t = not_null(x_40);
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
                t = pat_td_1(t, z_1);
                {
                  d_41 = t;
                  if(((y_40 != NULL) && (y_40 != d_41)))
                    _fail(d_41);
                  else
                    y_40 = d_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(y_40));
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
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
      {
        ATerm r_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = r_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL,v_42 = NULL;
  u_42 = t;
  j_42 :
  if(match_cons(u_42, sym_InfixApp_3))
    {
      v_42 = ATgetArgument(u_42, 0);
      r_42 = ATgetArgument(u_42, 1);
      q_42 = ATgetArgument(u_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_42)), not_null(v_42))));
    }
  else
    {
      if(match_cons(u_42, sym_BAM_3))
        {
          v_42 = ATgetArgument(u_42, 0);
          r_42 = ATgetArgument(u_42, 1);
          q_42 = ATgetArgument(u_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(q_42))), not_null(v_42)), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_42))));
        }
      else
        {
          if(match_cons(u_42, sym_AM_2))
            {
              v_42 = ATgetArgument(u_42, 0);
              r_42 = ATgetArgument(u_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(v_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(r_42)));
            }
          else
            {
              if(match_cons(u_42, sym_MA_2))
                {
                  v_42 = ATgetArgument(u_42, 0);
                  r_42 = ATgetArgument(u_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_42)), not_null(r_42));
                }
              else
                {
                  if(match_cons(u_42, sym_BA_2))
                    {
                      v_42 = ATgetArgument(u_42, 0);
                      r_42 = ATgetArgument(u_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_42)), not_null(v_42));
                    }
                  else
                    {
                      if(match_cons(u_42, sym_Lets_2))
                        {
                          v_42 = ATgetArgument(u_42, 0);
                          r_42 = ATgetArgument(u_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_42), not_null(r_42));
                        }
                      else
                        {
                          if(match_cons(u_42, sym_LChoices_1))
                            {
                              v_42 = ATgetArgument(u_42, 0);
                              k_42 :
                              if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                {
                                  s_42 = ATgetFirst((ATermList) v_42);
                                  t_42 = (ATerm) ATgetNext((ATermList) v_42);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(s_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(t_42)));
                                }
                              else
                                {
                                  if(((ATermList) v_42 == ATempty))
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
                              if(match_cons(u_42, sym_Choices_1))
                                {
                                  v_42 = ATgetArgument(u_42, 0);
                                  o_42 :
                                  if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                    {
                                      s_42 = ATgetFirst((ATermList) v_42);
                                      t_42 = (ATerm) ATgetNext((ATermList) v_42);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(s_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(t_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) v_42 == ATempty))
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
                                  if(match_cons(u_42, sym_Seqs_1))
                                    {
                                      v_42 = ATgetArgument(u_42, 0);
                                      p_42 :
                                      if(((ATgetType(v_42) == AT_LIST) && ((ATermList) v_42 != ATempty)))
                                        {
                                          s_42 = ATgetFirst((ATermList) v_42);
                                          t_42 = (ATerm) ATgetNext((ATermList) v_42);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(t_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) v_42 == ATempty))
                                            {
                                              t = term_w_11;
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
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
  g_44 = t;
  d_44 :
  if(match_cons(g_44, sym__2))
    {
      h_44 = ATgetArgument(g_44, 0);
      k_44 = ATgetArgument(g_44, 1);
      e_44 :
      if(match_cons(h_44, sym__2))
        {
          i_44 = ATgetArgument(h_44, 0);
          j_44 = ATgetArgument(h_44, 1);
          f_44 :
          if(match_cons(k_44, sym__2))
            {
              l_44 = ATgetArgument(k_44, 0);
              m_44 = ATgetArgument(k_44, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_44)), not_null(i_44)), (ATerm) ATinsert(CheckATermList(not_null(m_44)), not_null(j_44)));
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
  ATerm u_44 = NULL,v_44 = NULL,w_44 = NULL;
  u_44 = t;
  t_44 :
  if(((ATgetType(u_44) == AT_LIST) && ((ATermList) u_44 != ATempty)))
    {
      v_44 = ATgetFirst((ATermList) u_44);
      w_44 = (ATerm) ATgetNext((ATermList) u_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(v_44), not_null(w_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  b_45 :
  if(((ATermList) c_45 == ATempty))
    {
      t = term_x_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm e_97 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, e_97);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  ATerm o_45 (ATerm t)
  {
    ATerm l_45 = NULL;
    ATerm m_45 = NULL;
    t = not_null(i_45);
    {
      ATerm y_11 = t;
      if((PushChoice() == 0))
        {
          t = Var_1(t, _id);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = y_11;
        }
      {
        t = new_0(t);
        {
          m_45 = t;
          if(((l_45 != NULL) && (l_45 != m_45)))
            _fail(m_45);
          else
            l_45 = m_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(l_45)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_45))));
    return(t);
  }
  ATerm p_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(j_45))));
    return(t);
  }
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym_Var_1))
    {
      j_45 = ATgetArgument(i_45, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_45(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = p_45(t);
          }
      }
    }
  else
    {
      t = o_45(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_46 = NULL,b_46 = NULL;
  a_46 = t;
  z_45 :
  if(match_cons(a_46, sym_Var_1))
    {
      b_46 = ATgetArgument(a_46, 0);
      {
        ATerm b_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_46 = NULL,h_46 = NULL;
            ATerm g_46 = NULL;
            t = SSLgetAnnotations(not_null(a_46));
            {
              g_46 = t;
              if(((e_46 != NULL) && (e_46 != g_46)))
                _fail(g_46);
              else
                e_46 = g_46;
            }
            {
              t = not_null(b_46);
              {
                ATerm j_46 = NULL;
                t = o_0(t);
                {
                  h_46 = t;
                  {
                    ATerm k_46 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(h_46)), not_null(e_46));
                    {
                      k_46 = t;
                      if(((j_46 != NULL) && (j_46 != k_46)))
                        _fail(k_46);
                      else
                        j_46 = k_46;
                    }
                    t = not_null(j_46);
                  }
                }
              }
            }
            LocalPopChoice(g_12);
          }
        else
          {
            t = b_12;
            {
              ATerm n_46 = NULL,p_46 = NULL;
              ATerm o_46 = NULL;
              t = SSLgetAnnotations(not_null(a_46));
              {
                o_46 = t;
                if(((n_46 != NULL) && (n_46 != o_46)))
                  _fail(o_46);
                else
                  n_46 = o_46;
              }
              {
                t = not_null(b_46);
                {
                  ATerm r_46 = NULL;
                  t = o_0(t);
                  {
                    p_46 = t;
                    {
                      ATerm s_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(p_46)), not_null(n_46));
                      {
                        s_46 = t;
                        if(((r_46 != NULL) && (r_46 != s_46)))
                          _fail(s_46);
                        else
                          r_46 = s_46;
                      }
                      t = not_null(r_46);
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
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_Prim_2))
    {
      h_47 = ATgetArgument(g_47, 0);
      i_47 = ATgetArgument(g_47, 1);
      {
        ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
        ATerm o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL;
        t = not_null(i_47);
        {
          ATerm a_2 (ATerm t)
          {
            ATerm h_12 = t;
            if((PushChoice() == 0))
              {
                t = Var_1(t, _id);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = h_12;
              }
            return(t);
          }
          t = fetch_1(t, a_2);
          {
            t = not_null(i_47);
            {
              t = unzip_1(t, LiftPrimArg_0);
              {
                ATerm b_2 (ATerm t)
                {
                  t = unzip_1(t, _id);
                  return(t);
                }
                t = _2(t, concat_0, b_2);
                {
                  o_47 = t;
                  d_47 :
                  if(match_cons(o_47, sym__2))
                    {
                      p_47 = ATgetArgument(o_47, 0);
                      q_47 = ATgetArgument(o_47, 1);
                      e_47 :
                      if(match_cons(q_47, sym__2))
                        {
                          r_47 = ATgetArgument(q_47, 0);
                          s_47 = ATgetArgument(q_47, 1);
                          {
                            if(((l_47 != NULL) && (l_47 != p_47)))
                              _fail(p_47);
                            else
                              l_47 = p_47;
                            {
                              if(((m_47 != NULL) && (m_47 != r_47)))
                                _fail(r_47);
                              else
                                m_47 = r_47;
                              if(((n_47 != NULL) && (n_47 != s_47)))
                                _fail(s_47);
                              else
                                n_47 = s_47;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(l_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(m_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(h_47), not_null(n_47))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm n_91 (ATerm), ATerm o_91 (ATerm))
{
  ATerm v_47 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_91(t);
        t = v_47(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = o_91(t);
      }
    return(t);
  }
  t = v_47(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_91 (ATerm))
{
  t = repeat_2(t, q_91, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  d_48 :
  if(match_cons(e_48, sym_Wld_0))
    {
      ATerm g_48 = NULL,i_48 = NULL;
      ATerm k_12;
      k_12 = t;
      {
        ATerm h_48 = NULL;
        t = SSLgetAnnotations(not_null(e_48));
        {
          h_48 = t;
          if(((g_48 != NULL) && (g_48 != h_48)))
            _fail(h_48);
          else
            g_48 = h_48;
        }
      }
      t = k_12;
      {
        ATerm n_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(g_48));
        {
          n_48 = t;
          if(((i_48 != NULL) && (i_48 != n_48)))
            _fail(n_48);
          else
            i_48 = n_48;
        }
        t = not_null(i_48);
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
  ATerm r_12 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, c_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
ATerm App_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_App_2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      {
        ATerm l_49 = NULL,n_49 = NULL;
        ATerm m_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          m_49 = t;
          if(((l_49 != NULL) && (l_49 != m_49)))
            _fail(m_49);
          else
            l_49 = m_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm p_49 = NULL;
            t = k_74(t);
            {
              n_49 = t;
              {
                t = not_null(h_49);
                {
                  ATerm r_49 = NULL;
                  t = l_74(t);
                  {
                    p_49 = t;
                    {
                      ATerm s_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(n_49), not_null(p_49)), not_null(l_49));
                      {
                        s_49 = t;
                        if(((r_49 != NULL) && (r_49 != s_49)))
                          _fail(s_49);
                        else
                          r_49 = s_49;
                      }
                      t = not_null(r_49);
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
ATerm Con_3 (ATerm t, ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL;
  f_50 = t;
  e_50 :
  if(match_cons(f_50, sym_Con_3))
    {
      g_50 = ATgetArgument(f_50, 0);
      h_50 = ATgetArgument(f_50, 1);
      i_50 = ATgetArgument(f_50, 2);
      {
        ATerm n_50 = NULL,p_50 = NULL;
        ATerm o_50 = NULL;
        t = SSLgetAnnotations(not_null(f_50));
        {
          o_50 = t;
          if(((n_50 != NULL) && (n_50 != o_50)))
            _fail(o_50);
          else
            n_50 = o_50;
        }
        {
          t = not_null(g_50);
          {
            ATerm r_50 = NULL;
            t = h_74(t);
            {
              p_50 = t;
              {
                t = not_null(h_50);
                {
                  ATerm t_50 = NULL;
                  t = i_74(t);
                  {
                    r_50 = t;
                    {
                      t = not_null(i_50);
                      {
                        ATerm v_50 = NULL;
                        t = j_74(t);
                        {
                          t_50 = t;
                          {
                            ATerm w_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(p_50), not_null(r_50), not_null(t_50)), not_null(n_50));
                            {
                              w_50 = t;
                              if(((v_50 != NULL) && (v_50 != w_50)))
                                _fail(w_50);
                              else
                                v_50 = w_50;
                            }
                            t = not_null(v_50);
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
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm y_12 = t;
        int z_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(z_12);
          }
        else
          {
            t = y_12;
            t = App_2(t, _id, _id);
          }
        return(t);
      }
      t = topdown_1(t, d_2);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_12;
    }
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,p_51 = NULL,q_51 = NULL;
  h_51 = t;
  f_51 :
  if(match_cons(h_51, sym_SRule_1))
    {
      i_51 = ATgetArgument(h_51, 0);
      g_51 :
      if(match_cons(i_51, sym_StratRule_3))
        {
          j_51 = ATgetArgument(i_51, 0);
          p_51 = ATgetArgument(i_51, 1);
          q_51 = ATgetArgument(i_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_51)), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), not_null(j_51)));
        }
      else
        {
          if(match_cons(i_51, sym_Rule_3))
            {
              j_51 = ATgetArgument(i_51, 0);
              p_51 = ATgetArgument(i_51, 1);
              q_51 = ATgetArgument(i_51, 2);
              {
                t = not_null(j_51);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(p_51);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(p_51))), (ATerm) ATmakeAppl(sym_Where_1, not_null(q_51))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_51))));
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
ATerm Scope_2 (ATerm t, ATerm z_77 (ATerm), ATerm a_78 (ATerm))
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL;
  h_52 = t;
  g_52 :
  if(match_cons(h_52, sym_Scope_2))
    {
      i_52 = ATgetArgument(h_52, 0);
      j_52 = ATgetArgument(h_52, 1);
      {
        ATerm x_52 = NULL,z_52 = NULL;
        ATerm y_52 = NULL;
        t = SSLgetAnnotations(not_null(h_52));
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
        {
          t = not_null(i_52);
          {
            ATerm c_53 = NULL;
            t = z_77(t);
            {
              z_52 = t;
              {
                t = not_null(j_52);
                {
                  ATerm e_53 = NULL;
                  t = a_78(t);
                  {
                    c_53 = t;
                    {
                      ATerm f_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(z_52), not_null(c_53)), not_null(x_52));
                      {
                        f_53 = t;
                        if(((e_53 != NULL) && (e_53 != f_53)))
                          _fail(f_53);
                        else
                          e_53 = f_53;
                      }
                      t = not_null(e_53);
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
ATerm oncetd_1 (ATerm t, ATerm e_101 (ATerm))
{
  ATerm w_53 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_101(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = _one(t, w_53);
      }
    return(t);
  }
  t = w_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL;
  o_54 = t;
  m_54 :
  if(match_cons(o_54, sym_SRule_1))
    {
      p_54 = ATgetArgument(o_54, 0);
      n_54 :
      if(match_cons(p_54, sym_Rule_3))
        {
          q_54 = ATgetArgument(p_54, 0);
          r_54 = ATgetArgument(p_54, 1);
          s_54 = ATgetArgument(p_54, 2);
          {
            ATerm w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL;
            ATerm e_55 = NULL;
            ATerm k_55 = NULL;
            t = new_0(t);
            {
              e_55 = t;
              {
                if(((b_55 != NULL) && (b_55 != e_55)))
                  _fail(e_55);
                else
                  b_55 = e_55;
                {
                  t = not_null(q_54);
                  {
                    ATerm s_55 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,j_55 = NULL;
                      f_55 = t;
                      a_54 :
                      if(match_cons(f_55, sym_Con_3))
                        {
                          g_55 = ATgetArgument(f_55, 0);
                          i_55 = ATgetArgument(f_55, 1);
                          j_55 = ATgetArgument(f_55, 2);
                          e_54 :
                          if(match_cons(g_55, sym_Var_1))
                            {
                              h_55 = ATgetArgument(g_55, 0);
                              {
                                if(((a_55 != NULL) && (a_55 != h_55)))
                                  _fail(h_55);
                                else
                                  a_55 = h_55;
                                {
                                  if(((y_54 != NULL) && (y_54 != i_55)))
                                    _fail(i_55);
                                  else
                                    y_54 = i_55;
                                  {
                                    if(((w_54 != NULL) && (w_54 != j_55)))
                                      _fail(j_55);
                                    else
                                      w_54 = j_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_55));
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
                    t = oncetd_1(t, e_2);
                    {
                      k_55 = t;
                      {
                        if(((c_55 != NULL) && (c_55 != k_55)))
                          _fail(k_55);
                        else
                          c_55 = k_55;
                        {
                          t = not_null(r_54);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL,r_55 = NULL;
                              l_55 = t;
                              h_54 :
                              if(match_cons(l_55, sym_Con_3))
                                {
                                  m_55 = ATgetArgument(l_55, 0);
                                  o_55 = ATgetArgument(l_55, 1);
                                  p_55 = ATgetArgument(l_55, 2);
                                  i_54 :
                                  if(match_cons(m_55, sym_Var_1))
                                    {
                                      n_55 = ATgetArgument(m_55, 0);
                                      j_54 :
                                      if(match_cons(p_55, sym_Call_2))
                                        {
                                          q_55 = ATgetArgument(p_55, 0);
                                          r_55 = ATgetArgument(p_55, 1);
                                          k_54 :
                                          if(((ATermList) r_55 == ATempty))
                                            {
                                              {
                                                if(((a_55 != NULL) && (a_55 != n_55)))
                                                  _fail(n_55);
                                                else
                                                  a_55 = n_55;
                                                {
                                                  if(((z_54 != NULL) && (z_54 != o_55)))
                                                    _fail(o_55);
                                                  else
                                                    z_54 = o_55;
                                                  {
                                                    if(((x_54 != NULL) && (x_54 != q_55)))
                                                      _fail(q_55);
                                                    else
                                                      x_54 = q_55;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(b_55));
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
                            t = oncetd_1(t, f_2);
                            {
                              s_55 = t;
                              if(((d_55 != NULL) && (d_55 != s_55)))
                                _fail(s_55);
                              else
                                d_55 = s_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_55), not_null(d_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(s_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(x_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(y_54), not_null(z_54), term_w_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_55)), (ATerm) ATmakeAppl(sym_Var_1, not_null(b_55)))))));
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
  ATerm g_2 (ATerm t)
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(o_13);
            }
          else
            {
              t = n_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm o_99 (ATerm))
{
  t = o_99(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, o_99);
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
    t = try_1(t, desugarRule_0);
    {
      ATerm j_2 (ATerm t)
      {
        ATerm p_13 = t;
        int q_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0(t);
            LocalPopChoice(q_13);
          }
        else
          {
            t = p_13;
            {
              ATerm r_13 = t;
              int s_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0(t);
                  LocalPopChoice(s_13);
                }
              else
                {
                  t = r_13;
                  {
                    ATerm t_13 = t;
                    int u_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(u_13);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm x_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(a_14);
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
      t = repeat_1(t, j_2);
    }
    return(t);
  }
  t = topdown_1(t, i_2);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm e_56 = NULL;
  e_56 = t;
  d_56 :
  if(match_cons(e_56, sym__0))
    {
      ATerm g_56 = NULL,i_56 = NULL;
      ATerm e_14;
      e_14 = t;
      {
        ATerm h_56 = NULL;
        t = SSLgetAnnotations(not_null(e_56));
        {
          h_56 = t;
          if(((g_56 != NULL) && (g_56 != h_56)))
            _fail(h_56);
          else
            g_56 = h_56;
        }
      }
      t = e_14;
      {
        ATerm j_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(g_56));
        {
          j_56 = t;
          if(((i_56 != NULL) && (i_56 != j_56)))
            _fail(j_56);
          else
            i_56 = j_56;
        }
        t = not_null(i_56);
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
  ATerm v_56 = NULL;
  ATerm c_57 = NULL,d_57 = NULL,o_57 = NULL,q_57 = NULL;
  v_56 = t;
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm e_57 = NULL;
      ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
      t = not_null(v_56);
      {
        e_57 = t;
        {
          t = SSL_explode_term(not_null(e_57));
          {
            g_57 = t;
            q_56 :
            if(match_cons(g_57, sym__2))
              {
                h_57 = ATgetArgument(g_57, 0);
                i_57 = ATgetArgument(g_57, 1);
                r_56 :
                if(match_string(h_57, ""))
                  {
                    s_56 :
                    if(((ATgetType(i_57) == AT_LIST) && ((ATermList) i_57 != ATempty)))
                      {
                        j_57 = ATgetFirst((ATermList) i_57);
                        k_57 = (ATerm) ATgetNext((ATermList) i_57);
                        {
                          if(((c_57 != NULL) && (c_57 != j_57)))
                            _fail(j_57);
                          else
                            c_57 = j_57;
                          if(((d_57 != NULL) && (d_57 != k_57)))
                            _fail(k_57);
                          else
                            d_57 = k_57;
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
    t = f_14;
    {
      ATerm g_14;
      g_14 = t;
      {
        ATerm p_57 = NULL;
        t = term_x_9;
        {
          p_57 = t;
          if(((o_57 != NULL) && (o_57 != p_57)))
            _fail(p_57);
          else
            o_57 = p_57;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(o_57), not_null(d_57));
        {
          q_57 = t;
          t = not_null(q_57);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm h_58 = NULL;
  ATerm j_58 = NULL,k_58 = NULL;
  h_58 = t;
  {
    ATerm l_58 = NULL;
    ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,y_58 = NULL,z_58 = NULL;
    t = not_null(h_58);
    {
      l_58 = t;
      {
        t = SSL_explode_term(not_null(l_58));
        {
          n_58 = t;
          e_58 :
          if(match_cons(n_58, sym__2))
            {
              o_58 = ATgetArgument(n_58, 0);
              p_58 = ATgetArgument(n_58, 1);
              f_58 :
              if(match_string(o_58, ""))
                {
                  g_58 :
                  if(((ATgetType(p_58) == AT_LIST) && ((ATermList) p_58 != ATempty)))
                    {
                      y_58 = ATgetFirst((ATermList) p_58);
                      z_58 = (ATerm) ATgetNext((ATermList) p_58);
                      {
                        if(((k_58 != NULL) && (k_58 != y_58)))
                          _fail(y_58);
                        else
                          k_58 = y_58;
                        if(((j_58 != NULL) && (j_58 != z_58)))
                          _fail(z_58);
                        else
                          j_58 = z_58;
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
    t = not_null(k_58);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm g_63 = NULL,i_63 = NULL,k_63 = NULL;
  ATerm m_63 (ATerm t)
  {
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_61 = NULL,e_63 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm v_61 = NULL;
          t = map_1(t, Thd_0);
          {
            t = x_98(t);
            {
              v_61 = t;
              if(((u_61 != NULL) && (u_61 != v_61)))
                _fail(v_61);
              else
                u_61 = v_61;
            }
          }
        }
        t = n_14;
        {
          ATerm f_63 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = m_63(t);
            {
              f_63 = t;
              if(((e_63 != NULL) && (e_63 != f_63)))
                _fail(f_63);
              else
                e_63 = f_63;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(e_63)), not_null(u_61));
        }
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = m_63(t);
  {
    ATerm o_14;
    o_14 = t;
    {
      ATerm h_63 = NULL;
      h_63 = t;
      if(((g_63 != NULL) && (g_63 != h_63)))
        _fail(h_63);
      else
        g_63 = h_63;
    }
    t = o_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm j_63 = NULL;
        t = term_x_9;
        {
          j_63 = t;
          if(((i_63 != NULL) && (i_63 != j_63)))
            _fail(j_63);
          else
            i_63 = j_63;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(i_63), not_null(g_63));
        {
          k_63 = t;
          t = not_null(k_63);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm b_67 = NULL;
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  b_67 = t;
  {
    ATerm g_67 = NULL;
    ATerm h_67 = NULL;
    t = new_0(t);
    {
      g_67 = t;
      {
        if(((d_67 != NULL) && (d_67 != g_67)))
          _fail(g_67);
        else
          d_67 = g_67;
        {
          ATerm i_67 = NULL;
          t = new_0(t);
          {
            h_67 = t;
            {
              if(((e_67 != NULL) && (e_67 != h_67)))
                _fail(h_67);
              else
                e_67 = h_67;
              {
                t = new_0(t);
                {
                  i_67 = t;
                  if(((f_67 != NULL) && (f_67 != i_67)))
                    _fail(i_67);
                  else
                    f_67 = i_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_14), term_t_14)), not_null(e_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_67)), not_null(f_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  p_67 = t;
  o_67 :
  if(match_cons(p_67, sym__2))
    {
      q_67 = ATgetArgument(p_67, 0);
      r_67 = ATgetArgument(p_67, 1);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(q_67), not_null(r_67));
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = SSL_subtr(not_null(q_67), not_null(r_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm u_88 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL;
    e_68 = t;
    w_67 :
    if(match_cons(e_68, sym__2))
      {
        f_68 = ATgetArgument(e_68, 0);
        g_68 = ATgetArgument(e_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(f_68), not_null(g_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm j_68 = NULL,k_68 = NULL,l_68 = NULL,m_68 = NULL;
    j_68 = t;
    y_67 :
    if(match_cons(j_68, sym__3))
      {
        k_68 = ATgetArgument(j_68, 0);
        l_68 = ATgetArgument(j_68, 1);
        m_68 = ATgetArgument(j_68, 2);
        z_67 :
        if(match_int(k_68, 0))
          {
            t = not_null(m_68);
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
    ATerm p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
    p_68 = t;
    d_68 :
    if(match_cons(p_68, sym__3))
      {
        q_68 = ATgetArgument(p_68, 0);
        r_68 = ATgetArgument(p_68, 1);
        s_68 = ATgetArgument(p_68, 2);
        {
          ATerm w_68 = NULL,y_68 = NULL;
          ATerm a_15;
          a_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_68), term_v_6);
            t = geq_0(t);
          }
          t = a_15;
          {
            ATerm c_15;
            c_15 = t;
            {
              ATerm x_68 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_68), term_v_6);
              {
                t = subt_0(t);
                {
                  x_68 = t;
                  if(((w_68 != NULL) && (w_68 != x_68)))
                    _fail(x_68);
                  else
                    w_68 = x_68;
                }
              }
            }
            t = c_15;
            {
              ATerm z_68 = NULL;
              t = not_null(r_68);
              {
                t = u_88(t);
                {
                  z_68 = t;
                  if(((y_68 != NULL) && (y_68 != z_68)))
                    _fail(z_68);
                  else
                    y_68 = z_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(w_68), not_null(r_68), (ATerm) ATinsert(CheckATermList(not_null(s_68)), not_null(y_68)));
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
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  j_69 :
  if(match_cons(k_69, sym__2))
    {
      l_69 = ATgetArgument(k_69, 0);
      m_69 = ATgetArgument(k_69, 1);
      {
        ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
        ATerm s_69 = NULL;
        ATerm t_69 = NULL;
        t = new_0(t);
        {
          s_69 = t;
          {
            if(((p_69 != NULL) && (p_69 != s_69)))
              _fail(s_69);
            else
              p_69 = s_69;
            {
              ATerm u_69 = NULL;
              t = new_0(t);
              {
                t_69 = t;
                {
                  if(((q_69 != NULL) && (q_69 != t_69)))
                    _fail(t_69);
                  else
                    q_69 = t_69;
                  {
                    t = new_0(t);
                    {
                      u_69 = t;
                      if(((r_69 != NULL) && (r_69 != u_69)))
                        _fail(u_69);
                      else
                        r_69 = u_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(p_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(p_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_t_14), term_t_14)), not_null(q_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_69)), not_null(r_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_69)));
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
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  a_70 :
  if(match_cons(c_70, sym__2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      b_70 :
      if(((ATermList) e_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm c_97 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, c_97);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  i_70 = t;
  h_70 :
  if(((ATgetType(i_70) == AT_LIST) && ((ATermList) i_70 != ATempty)))
    {
      j_70 = ATgetFirst((ATermList) i_70);
      k_70 = (ATerm) ATgetNext((ATermList) i_70);
      t = not_null(k_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm r_70 = NULL,s_70 = NULL,t_70 = NULL;
  r_70 = t;
  p_70 :
  if(((ATgetType(r_70) == AT_LIST) && ((ATermList) r_70 != ATempty)))
    {
      s_70 = ATgetFirst((ATermList) r_70);
      t_70 = (ATerm) ATgetNext((ATermList) r_70);
      q_70 :
      if(((ATermList) t_70 == ATempty))
        {
          t = not_null(s_70);
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
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
  ATerm r_73 (ATerm t)
  {
    ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,r_72 = NULL;
    ATerm i_15;
    i_15 = t;
    {
      ATerm e_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
      ATerm f_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), term_v_6);
      {
        t = add_0(t);
        {
          f_72 = t;
          if(((e_72 != NULL) && (e_72 != f_72)))
            _fail(f_72);
          else
            e_72 = f_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_72), term_l_15);
        {
          t = copy_1(t, new_0);
          {
            g_72 = t;
            f_71 :
            if(((ATgetType(g_72) == AT_LIST) && ((ATermList) g_72 != ATempty)))
              {
                h_72 = ATgetFirst((ATermList) g_72);
                i_72 = (ATerm) ATgetNext((ATermList) g_72);
                {
                  ATerm j_72 = NULL;
                  if(((w_71 != NULL) && (w_71 != h_72)))
                    _fail(h_72);
                  else
                    w_71 = h_72;
                  {
                    if(((x_71 != NULL) && (x_71 != i_72)))
                      _fail(i_72);
                    else
                      x_71 = i_72;
                    {
                      t = not_null(x_71);
                      {
                        ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
                        t = last_0(t);
                        {
                          j_72 = t;
                          {
                            if(((v_71 != NULL) && (v_71 != j_72)))
                              _fail(j_72);
                            else
                              v_71 = j_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_71)), not_null(w_71)), not_null(x_71));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    k_72 = t;
                                    e_71 :
                                    if(match_cons(k_72, sym__6))
                                      {
                                        l_72 = ATgetArgument(k_72, 0);
                                        m_72 = ATgetArgument(k_72, 1);
                                        n_72 = ATgetArgument(k_72, 2);
                                        o_72 = ATgetArgument(k_72, 3);
                                        p_72 = ATgetArgument(k_72, 4);
                                        q_72 = ATgetArgument(k_72, 5);
                                        {
                                          if(((y_71 != NULL) && (y_71 != l_72)))
                                            _fail(l_72);
                                          else
                                            y_71 = l_72;
                                          {
                                            if(((z_71 != NULL) && (z_71 != m_72)))
                                              _fail(m_72);
                                            else
                                              z_71 = m_72;
                                            {
                                              if(((a_72 != NULL) && (a_72 != n_72)))
                                                _fail(n_72);
                                              else
                                                a_72 = n_72;
                                              {
                                                if(((b_72 != NULL) && (b_72 != o_72)))
                                                  _fail(o_72);
                                                else
                                                  b_72 = o_72;
                                                {
                                                  if(((c_72 != NULL) && (c_72 != p_72)))
                                                    _fail(p_72);
                                                  else
                                                    c_72 = p_72;
                                                  if(((d_72 != NULL) && (d_72 != q_72)))
                                                    _fail(q_72);
                                                  else
                                                    d_72 = q_72;
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
    t = i_15;
    {
      ATerm s_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_72)), not_null(a_72)), not_null(x_71));
      {
        t = concat_0(t);
        {
          s_72 = t;
          if(((r_72 != NULL) && (r_72 != s_72)))
            _fail(s_72);
          else
            r_72 = s_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(q_71), term_s_15), not_null(z_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(r_72)), not_null(w_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), not_null(b_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), not_null(d_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(y_71))))));
    }
    return(t);
  }
  ATerm s_73 (ATerm t)
  {
    ATerm w_72 = NULL;
    ATerm x_72 = NULL;
    t = new_0(t);
    {
      x_72 = t;
      if(((w_72 != NULL) && (w_72 != x_72)))
        _fail(x_72);
      else
        w_72 = x_72;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(q_71), term_s_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(w_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(w_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), (ATerm) ATempty))), term_w_11))));
    return(t);
  }
  ATerm t_73 (ATerm t)
  {
    ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,g_73 = NULL,p_73 = NULL;
    ATerm t_15;
    t_15 = t;
    {
      ATerm h_73 = NULL;
      ATerm i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL,o_73 = NULL;
      t = new_0(t);
      {
        h_73 = t;
        {
          if(((a_73 != NULL) && (a_73 != h_73)))
            _fail(h_73);
          else
            a_73 = h_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  i_73 = t;
                  k_71 :
                  if(match_cons(i_73, sym__6))
                    {
                      j_73 = ATgetArgument(i_73, 0);
                      k_73 = ATgetArgument(i_73, 1);
                      l_73 = ATgetArgument(i_73, 2);
                      m_73 = ATgetArgument(i_73, 3);
                      n_73 = ATgetArgument(i_73, 4);
                      o_73 = ATgetArgument(i_73, 5);
                      {
                        if(((b_73 != NULL) && (b_73 != j_73)))
                          _fail(j_73);
                        else
                          b_73 = j_73;
                        {
                          if(((c_73 != NULL) && (c_73 != k_73)))
                            _fail(k_73);
                          else
                            c_73 = k_73;
                          {
                            if(((d_73 != NULL) && (d_73 != l_73)))
                              _fail(l_73);
                            else
                              d_73 = l_73;
                            {
                              if(((e_73 != NULL) && (e_73 != m_73)))
                                _fail(m_73);
                              else
                                e_73 = m_73;
                              {
                                if(((f_73 != NULL) && (f_73 != n_73)))
                                  _fail(n_73);
                                else
                                  f_73 = n_73;
                                if(((g_73 != NULL) && (g_73 != o_73)))
                                  _fail(o_73);
                                else
                                  g_73 = o_73;
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
    t = t_15;
    {
      ATerm q_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(f_73));
      {
        t = conc_0(t);
        {
          q_73 = t;
          if(((p_73 != NULL) && (p_73 != q_73)))
            _fail(q_73);
          else
            p_73 = q_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(q_71), term_b_16), not_null(c_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(p_73)), not_null(a_73)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_73))), (ATerm) ATmakeAppl(sym_Op_2, not_null(q_71), not_null(e_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(q_71), not_null(g_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(b_73))))));
    }
    return(t);
  }
  p_71 = t;
  m_71 :
  if(match_cons(p_71, sym__3))
    {
      q_71 = ATgetArgument(p_71, 0);
      r_71 = ATgetArgument(p_71, 1);
      s_71 = ATgetArgument(p_71, 2);
      n_71 :
      if(match_string(r_71, "T"))
        {
          o_71 :
          if(match_int(s_71, 0))
            {
              ATerm c_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_73(t);
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = c_16;
                  t = s_73(t);
                }
            }
          else
            {
              t = r_73(t);
            }
        }
      else
        {
          if(match_string(r_71, "D"))
            {
              t = t_73(t);
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
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL,v_74 = NULL;
  n_74 = t;
  f_74 :
  if(match_cons(n_74, sym__2))
    {
      o_74 = ATgetArgument(n_74, 0);
      v_74 = ATgetArgument(n_74, 1);
      g_74 :
      if(match_cons(o_74, sym__2))
        {
          p_74 = ATgetArgument(o_74, 0);
          u_74 = ATgetArgument(o_74, 1);
          m_74 :
          if(match_cons(p_74, sym_Mod_2))
            {
              s_74 = ATgetArgument(p_74, 0);
              t_74 = ATgetArgument(p_74, 1);
              {
                ATerm a_75 = NULL;
                ATerm b_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(s_74), not_null(t_74), not_null(u_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      b_75 = t;
                      if(((a_75 != NULL) && (a_75 != b_75)))
                        _fail(b_75);
                      else
                        a_75 = b_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(a_75), not_null(v_74));
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
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  h_75 = t;
  f_75 :
  if(match_cons(h_75, sym__5))
    {
      i_75 = ATgetArgument(h_75, 0);
      l_75 = ATgetArgument(h_75, 1);
      m_75 = ATgetArgument(h_75, 2);
      n_75 = ATgetArgument(h_75, 3);
      o_75 = ATgetArgument(h_75, 4);
      g_75 :
      if(((ATgetType(i_75) == AT_LIST) && ((ATermList) i_75 != ATempty)))
        {
          j_75 = ATgetFirst((ATermList) i_75);
          k_75 = (ATerm) ATgetNext((ATermList) i_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(k_75), not_null(l_75), not_null(m_75), not_null(n_75), (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(j_75)));
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
  ATerm b_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL;
  b_76 = t;
  z_75 :
  if(match_cons(b_76, sym__2))
    {
      e_76 = ATgetArgument(b_76, 0);
      f_76 = ATgetArgument(b_76, 1);
      a_76 :
      if(((ATgetType(f_76) == AT_LIST) && ((ATermList) f_76 != ATempty)))
        {
          g_76 = ATgetFirst((ATermList) f_76);
          h_76 = (ATerm) ATgetNext((ATermList) f_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_76)), not_null(g_76)), not_null(h_76));
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
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL;
  o_76 = t;
  n_76 :
  if(match_cons(o_76, sym__2))
    {
      p_76 = ATgetArgument(o_76, 0);
      q_76 = ATgetArgument(o_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_76)), not_null(p_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL;
  h_77 = t;
  e_77 :
  if(match_cons(h_77, sym__2))
    {
      i_77 = ATgetArgument(h_77, 0);
      l_77 = ATgetArgument(h_77, 1);
      f_77 :
      if(((ATgetType(i_77) == AT_LIST) && ((ATermList) i_77 != ATempty)))
        {
          j_77 = ATgetFirst((ATermList) i_77);
          k_77 = (ATerm) ATgetNext((ATermList) i_77);
          g_77 :
          if(((ATgetType(l_77) == AT_LIST) && ((ATermList) l_77 != ATempty)))
            {
              m_77 = ATgetFirst((ATermList) l_77);
              n_77 = (ATerm) ATgetNext((ATermList) l_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(j_77), not_null(m_77)), (ATerm) ATmakeAppl(sym__2, not_null(k_77), not_null(n_77)));
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
  ATerm x_77 = NULL,y_77 = NULL,b_78 = NULL;
  x_77 = t;
  u_77 :
  if(match_cons(x_77, sym__2))
    {
      y_77 = ATgetArgument(x_77, 0);
      b_78 = ATgetArgument(x_77, 1);
      v_77 :
      if(((ATermList) y_77 == ATempty))
        {
          w_77 :
          if(((ATermList) b_78 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm))
{
  ATerm h_78 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_96(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        {
          t = v_96(t);
          {
            t = _2(t, x_96, h_78);
            t = w_96(t);
          }
        }
      }
    return(t);
  }
  t = h_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm z_96 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, z_96);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm t_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,b_79 = NULL;
  t_78 = t;
  q_78 :
  if(((ATgetType(t_78) == AT_LIST) && ((ATermList) t_78 != ATempty)))
    {
      v_78 = ATgetFirst((ATermList) t_78);
      b_79 = (ATerm) ATgetNext((ATermList) t_78);
      r_78 :
      if(match_cons(v_78, sym__2))
        {
          w_78 = ATgetArgument(v_78, 0);
          x_78 = ATgetArgument(v_78, 1);
          {
            ATerm f_79 = NULL,g_79 = NULL,p_79 = NULL,v_79 = NULL;
            ATerm n_16;
            n_16 = t;
            {
              ATerm k_79 = NULL;
              ATerm m_79 = NULL,n_79 = NULL,o_79 = NULL;
              t = not_null(x_78);
              {
                k_79 = t;
                {
                  t = SSL_explode_term(not_null(k_79));
                  {
                    m_79 = t;
                    l_78 :
                    if(match_cons(m_79, sym__2))
                      {
                        n_79 = ATgetArgument(m_79, 0);
                        o_79 = ATgetArgument(m_79, 1);
                        {
                          if(((f_79 != NULL) && (f_79 != n_79)))
                            _fail(n_79);
                          else
                            f_79 = n_79;
                          if(((g_79 != NULL) && (g_79 != o_79)))
                            _fail(o_79);
                          else
                            g_79 = o_79;
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
            t = n_16;
            {
              ATerm s_16;
              s_16 = t;
              {
                ATerm q_79 = NULL;
                ATerm s_79 = NULL,t_79 = NULL,u_79 = NULL;
                t = not_null(w_78);
                {
                  q_79 = t;
                  {
                    t = SSL_explode_term(not_null(q_79));
                    {
                      s_79 = t;
                      o_78 :
                      if(match_cons(s_79, sym__2))
                        {
                          t_79 = ATgetArgument(s_79, 0);
                          u_79 = ATgetArgument(s_79, 1);
                          {
                            if(((f_79 != NULL) && (f_79 != t_79)))
                              _fail(t_79);
                            else
                              f_79 = t_79;
                            if(((p_79 != NULL) && (p_79 != u_79)))
                              _fail(u_79);
                            else
                              p_79 = u_79;
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
              t = s_16;
              {
                ATerm w_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_79), not_null(g_79));
                {
                  t = zip_1(t, _id);
                  {
                    w_79 = t;
                    if(((v_79 != NULL) && (v_79 != w_79)))
                      _fail(w_79);
                    else
                      v_79 = w_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_79), not_null(b_79));
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
  ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
  g_80 = t;
  e_80 :
  if(((ATgetType(g_80) == AT_LIST) && ((ATermList) g_80 != ATempty)))
    {
      h_80 = ATgetFirst((ATermList) g_80);
      k_80 = (ATerm) ATgetNext((ATermList) g_80);
      f_80 :
      if(match_cons(h_80, sym__2))
        {
          i_80 = ATgetArgument(h_80, 0);
          j_80 = ATgetArgument(h_80, 1);
          {
            ATerm m_80 = NULL;
            if(((i_80 != NULL) && (i_80 != j_80)))
              _fail(j_80);
            else
              i_80 = j_80;
            {
              if(((m_80 != NULL) && (m_80 != k_80)))
                _fail(k_80);
              else
                m_80 = k_80;
              t = not_null(m_80);
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
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL;
      r_80 = t;
      p_80 :
      if(match_cons(r_80, sym__2))
        {
          s_80 = ATgetArgument(r_80, 0);
          t_80 = ATgetArgument(r_80, 1);
          {
            t = not_null(s_80);
            {
              ATerm z_80 (ATerm t)
              {
                ATerm c_17 = t;
                int d_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(d_17);
                  }
                else
                  {
                    t = c_17;
                    {
                      ATerm e_17 = t;
                      int j_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_2 (ATerm t)
                          {
                            t = not_null(t_80);
                            return(t);
                          }
                          t = HdMember_1(t, n_2);
                          t = z_80(t);
                          LocalPopChoice(j_17);
                        }
                      else
                        {
                          t = e_17;
                          t = Cons_2(t, _id, z_80);
                        }
                    }
                  }
                return(t);
              }
              t = z_80(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm o_2 (ATerm t)
        {
          ATerm w_80 = NULL;
          w_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(w_80));
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm q_2 (ATerm t)
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_2 (ATerm t)
              {
                ATerm t_17 = t;
                int u_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(u_17);
                  }
                else
                  {
                    t = t_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, r_2);
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, o_2, p_2, q_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm), ATerm a_79 (ATerm))
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
      if(((ATgetType(s_81) == AT_LIST) && ((ATermList) s_81 != ATempty)))
        {
          t_81 = ATgetFirst((ATermList) s_81);
          u_81 = (ATerm) ATgetNext((ATermList) s_81);
          {
            ATerm i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL,r_82 = NULL,t_82 = NULL,v_82 = NULL;
            ATerm v_17;
            v_17 = t;
            {
              ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(t_81), not_null(w_81));
              {
                t = y_78(t);
                {
                  m_82 = t;
                  l_81 :
                  if(match_cons(m_82, sym__2))
                    {
                      n_82 = ATgetArgument(m_82, 0);
                      o_82 = ATgetArgument(m_82, 1);
                      {
                        ATerm p_82 = NULL;
                        if(((j_82 != NULL) && (j_82 != n_82)))
                          _fail(n_82);
                        else
                          j_82 = n_82;
                        {
                          if(((i_82 != NULL) && (i_82 != o_82)))
                            _fail(o_82);
                          else
                            i_82 = o_82;
                          {
                            t = not_null(j_82);
                            {
                              ATerm q_82 = NULL;
                              t = z_78(t);
                              {
                                p_82 = t;
                                {
                                  if(((k_82 != NULL) && (k_82 != p_82)))
                                    _fail(p_82);
                                  else
                                    k_82 = p_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(v_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        q_82 = t;
                                        if(((l_82 != NULL) && (l_82 != q_82)))
                                          _fail(q_82);
                                        else
                                          l_82 = q_82;
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
            t = v_17;
            {
              ATerm d_18;
              d_18 = t;
              {
                ATerm s_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(u_81));
                {
                  t = conc_0(t);
                  {
                    s_82 = t;
                    if(((r_82 != NULL) && (r_82 != s_82)))
                      _fail(s_82);
                    else
                      r_82 = s_82;
                  }
                }
              }
              t = d_18;
              {
                ATerm e_18;
                e_18 = t;
                {
                  ATerm u_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_82), not_null(v_81));
                  {
                    t = conc_0(t);
                    {
                      u_82 = t;
                      if(((t_82 != NULL) && (t_82 != u_82)))
                        _fail(u_82);
                      else
                        t_82 = u_82;
                    }
                  }
                }
                t = e_18;
                {
                  ATerm w_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(t_81), not_null(j_82), not_null(x_81));
                  {
                    t = a_79(t);
                    {
                      w_82 = t;
                      if(((v_82 != NULL) && (v_82 != w_82)))
                        _fail(w_82);
                      else
                        v_82 = w_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(r_82), not_null(t_82), not_null(i_82), not_null(v_82), not_null(y_81));
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
  ATerm h_83 = NULL,j_83 = NULL,k_83 = NULL,q_83 = NULL,r_83 = NULL,s_83 = NULL;
  h_83 = t;
  f_83 :
  if(match_cons(h_83, sym__5))
    {
      j_83 = ATgetArgument(h_83, 0);
      k_83 = ATgetArgument(h_83, 1);
      q_83 = ATgetArgument(h_83, 2);
      r_83 = ATgetArgument(h_83, 3);
      s_83 = ATgetArgument(h_83, 4);
      g_83 :
      if(((ATermList) j_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_83), not_null(s_83));
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
  ATerm e_84 = NULL,g_84 = NULL,i_84 = NULL,j_84 = NULL;
  e_84 = t;
  d_84 :
  if(match_cons(e_84, sym__3))
    {
      g_84 = ATgetArgument(e_84, 0);
      i_84 = ATgetArgument(e_84, 1);
      j_84 = ATgetArgument(e_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(g_84), not_null(g_84), not_null(i_84), not_null(j_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_92 (ATerm), ATerm f_92 (ATerm))
{
  ATerm o_84 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_92(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        {
          t = f_92(t);
          t = o_84(t);
        }
      }
    return(t);
  }
  t = o_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_92 (ATerm), ATerm i_92 (ATerm), ATerm j_92 (ATerm))
{
  t = h_92(t);
  t = while_not_2(t, i_92, j_92);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm h_79 (ATerm), ATerm i_79 (ATerm), ATerm j_79 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, h_79, i_79, j_79);
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, s_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm v_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, v_2);
    }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm r_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL;
    r_84 = t;
    q_84 :
    if(match_cons(r_84, sym__3))
      {
        s_84 = ATgetArgument(r_84, 0);
        t_84 = ATgetArgument(r_84, 1);
        u_84 = ATgetArgument(r_84, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(u_84)), not_null(t_84));
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, t_2, u_2);
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
        {
          t = MissingDefs_0(t);
          {
            t = term_v_6;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL;
  e_85 = t;
  d_85 :
  if(match_cons(e_85, sym__2))
    {
      f_85 = ATgetArgument(e_85, 0);
      g_85 = ATgetArgument(e_85, 1);
      {
        ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm m_85 = NULL;
          ATerm n_85 = NULL,o_85 = NULL,p_85 = NULL;
          t = s_78(t);
          {
            m_85 = t;
            {
              if(((j_85 != NULL) && (j_85 != m_85)))
                _fail(m_85);
              else
                j_85 = m_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_85), not_null(f_85), not_null(g_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm x_18 = t;
                    int z_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_85), term_e_19);
                        t = table_get_0(t);
                        LocalPopChoice(z_18);
                      }
                    else
                      {
                        t = x_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_85 = t;
                      c_85 :
                      if(((ATgetType(n_85) == AT_LIST) && ((ATermList) n_85 != ATempty)))
                        {
                          o_85 = ATgetFirst((ATermList) n_85);
                          p_85 = (ATerm) ATgetNext((ATermList) n_85);
                          {
                            if(((k_85 != NULL) && (k_85 != o_85)))
                              _fail(o_85);
                            else
                              k_85 = o_85;
                            {
                              if(((l_85 != NULL) && (l_85 != p_85)))
                                _fail(p_85);
                              else
                                l_85 = p_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_85), term_e_19, (ATerm) ATinsert(CheckATermList(not_null(l_85)), (ATerm) ATinsert(CheckATermList(not_null(k_85)), not_null(f_85))));
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
        t = w_18;
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
  ATerm x_85 = NULL;
  ATerm z_85 = NULL;
  x_85 = t;
  {
    ATerm a_86 = NULL,b_86 = NULL,c_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(x_85));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        a_86 = t;
        v_85 :
        if(match_cons(a_86, sym_Defined_2))
          {
            b_86 = ATgetArgument(a_86, 0);
            c_86 = ATgetArgument(a_86, 1);
            w_85 :
            if(match_string(b_86, "h_0"))
              {
                if(((z_85 != NULL) && (z_85 != c_86)))
                  _fail(c_86);
                else
                  z_85 = c_86;
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
    t = not_null(z_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL,j_86 = NULL;
  h_86 = t;
  g_86 :
  if(((ATgetType(h_86) == AT_LIST) && ((ATermList) h_86 != ATempty)))
    {
      i_86 = ATgetFirst((ATermList) h_86);
      j_86 = (ATerm) ATgetNext((ATermList) h_86);
      t = not_null(i_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL;
  p_86 = t;
  o_86 :
  if(match_cons(p_86, sym__2))
    {
      q_86 = ATgetArgument(p_86, 0);
      r_86 = ATgetArgument(p_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_86), not_null(r_86));
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
ATerm rewrite_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm x_86 = NULL;
  ATerm z_86 = NULL;
  x_86 = t;
  {
    ATerm a_87 = NULL;
    t = term_l_15;
    {
      t = u_78(t);
      {
        a_87 = t;
        if(((z_86 != NULL) && (z_86 != a_87)))
          _fail(a_87);
        else
          z_86 = a_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_86), not_null(x_86));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym__2))
    {
      j_87 = ATgetArgument(i_87, 0);
      k_87 = ATgetArgument(i_87, 1);
      {
        ATerm n_87 = NULL,o_87 = NULL;
        ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(k_87), not_null(j_87));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_g_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            p_87 = t;
            f_87 :
            if(match_cons(p_87, sym_Defined_3))
              {
                q_87 = ATgetArgument(p_87, 0);
                r_87 = ATgetArgument(p_87, 1);
                s_87 = ATgetArgument(p_87, 2);
                g_87 :
                if(match_string(q_87, "g_0"))
                  {
                    if(((n_87 != NULL) && (n_87 != r_87)))
                      _fail(r_87);
                    else
                      n_87 = r_87;
                    if(((o_87 != NULL) && (o_87 != s_87)))
                      _fail(s_87);
                    else
                      o_87 = s_87;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(o_87)), not_null(n_87));
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
  ATerm y_2 (ATerm t)
  {
    ATerm b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
    b_88 = t;
    a_88 :
    if(match_cons(b_88, sym_SDef_3))
      {
        c_88 = ATgetArgument(b_88, 0);
        d_88 = ATgetArgument(b_88, 1);
        e_88 = ATgetArgument(b_88, 2);
        {
          ATerm o_88 = NULL,p_88 = NULL,q_88 = NULL;
          ATerm i_19;
          i_19 = t;
          {
            ATerm r_88 = NULL;
            t = not_null(d_88);
            {
              ATerm s_88 = NULL;
              t = length_0(t);
              {
                r_88 = t;
                {
                  if(((p_88 != NULL) && (p_88 != r_88)))
                    _fail(r_88);
                  else
                    p_88 = r_88;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(c_88), not_null(p_88));
                    {
                      ATerm v_88 = NULL,x_88 = NULL;
                      ATerm j_19 = t;
                      int k_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(k_19);
                        }
                      else
                        {
                          t = j_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        s_88 = t;
                        {
                          if(((o_88 != NULL) && (o_88 != s_88)))
                            _fail(s_88);
                          else
                            o_88 = s_88;
                          {
                            ATerm w_88 = NULL;
                            t = not_null(c_88);
                            {
                              ATerm q_19 = t;
                              int s_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(s_19);
                                }
                              else
                                {
                                  t = q_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                w_88 = t;
                                if(((v_88 != NULL) && (v_88 != w_88)))
                                  _fail(w_88);
                                else
                                  v_88 = w_88;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(p_88)), not_null(v_88));
                              {
                                t = union_0(t);
                                {
                                  x_88 = t;
                                  {
                                    if(((q_88 != NULL) && (q_88 != x_88)))
                                      _fail(x_88);
                                    else
                                      q_88 = x_88;
                                    {
                                      ATerm t_19;
                                      t_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(p_88), not_null(c_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_u_19, not_null(b_88), not_null(o_88)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_g_19;
                                            return(t);
                                          }
                                          t = assert_1(t, z_2);
                                        }
                                      }
                                      t = t_19;
                                      {
                                        ATerm v_19;
                                        v_19 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(c_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_w_19, not_null(q_88)));
                                          {
                                            ATerm a_3 (ATerm t)
                                            {
                                              t = term_f_19;
                                              return(t);
                                            }
                                            t = assert_1(t, a_3);
                                          }
                                        }
                                        t = v_19;
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
          t = i_19;
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, y_2);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm d_3 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = foldr_3(t, d_3, add_0, e_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm f_89 (ATerm))
{
  ATerm n_89 = NULL,t_89 = NULL,u_89 = NULL;
  n_89 = t;
  k_89 :
  if(((ATgetType(n_89) == AT_LIST) && ((ATermList) n_89 != ATempty)))
    {
      t_89 = ATgetFirst((ATermList) n_89);
      u_89 = (ATerm) ATgetNext((ATermList) n_89);
      {
        t = f_89(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm x_89 = NULL;
            x_89 = t;
            if(((t_89 != NULL) && (t_89 != x_89)))
              _fail(x_89);
            else
              t_89 = x_89;
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(u_89);
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
  ATerm c_90 = NULL,d_90 = NULL,e_90 = NULL;
  c_90 = t;
  b_90 :
  if(match_cons(c_90, sym__2))
    {
      d_90 = ATgetArgument(c_90, 0);
      e_90 = ATgetArgument(c_90, 1);
      {
        t = not_null(d_90);
        {
          ATerm i_90 (ATerm t)
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(e_90);
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
                {
                  ATerm c_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(e_90);
                        return(t);
                      }
                      t = HdMember_1(t, g_3);
                      t = i_90(t);
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = c_20;
                      t = Cons_2(t, _id, i_90);
                    }
                }
              }
            return(t);
          }
          t = i_90(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_88 (ATerm), ATerm i_88 (ATerm), ATerm j_88 (ATerm))
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_88(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
        n_90 = t;
        m_90 :
        if(((ATgetType(n_90) == AT_LIST) && ((ATermList) n_90 != ATempty)))
          {
            o_90 = ATgetFirst((ATermList) n_90);
            p_90 = (ATerm) ATgetNext((ATermList) n_90);
            {
              ATerm s_90 = NULL,u_90 = NULL;
              ATerm k_20;
              k_20 = t;
              {
                ATerm t_90 = NULL;
                t = not_null(o_90);
                {
                  t = j_88(t);
                  {
                    t_90 = t;
                    if(((s_90 != NULL) && (s_90 != t_90)))
                      _fail(t_90);
                    else
                      s_90 = t_90;
                  }
                }
              }
              t = k_20;
              {
                ATerm v_90 = NULL;
                t = not_null(p_90);
                {
                  t = foldr_3(t, h_88, i_88, j_88);
                  {
                    v_90 = t;
                    if(((u_90 != NULL) && (u_90 != v_90)))
                      _fail(v_90);
                    else
                      u_90 = v_90;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_90), not_null(u_90));
                  t = i_88(t);
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
  ATerm h_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm c_91 = NULL,d_91 = NULL,e_91 = NULL,f_91 = NULL;
    c_91 = t;
    b_91 :
    if(match_cons(c_91, sym_SDef_3))
      {
        d_91 = ATgetArgument(c_91, 0);
        e_91 = ATgetArgument(c_91, 1);
        f_91 = ATgetArgument(c_91, 2);
        {
          ATerm i_91 = NULL;
          ATerm j_91 = NULL;
          t = not_null(e_91);
          {
            t = length_0(t);
            {
              j_91 = t;
              if(((i_91 != NULL) && (i_91 != j_91)))
                _fail(j_91);
              else
                i_91 = j_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(d_91), not_null(i_91)));
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = foldr_3(t, h_3, union_0, i_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm s_91 = NULL,u_91 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm t_91 = NULL;
    t = definition_names_0(t);
    {
      t_91 = t;
      if(((s_91 != NULL) && (s_91 != t_91)))
        _fail(t_91);
      else
        s_91 = t_91;
    }
  }
  t = l_20;
  {
    ATerm v_91 = NULL;
    t = sort_defs_0(t);
    {
      v_91 = t;
      if(((u_91 != NULL) && (u_91 != v_91)))
        _fail(v_91);
      else
        u_91 = v_91;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(s_91), not_null(u_91), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm v_75 (ATerm))
{
  ATerm d_92 = NULL,k_92 = NULL;
  d_92 = t;
  c_92 :
  if(match_cons(d_92, sym_Strategies_1))
    {
      k_92 = ATgetArgument(d_92, 0);
      {
        ATerm n_92 = NULL,p_92 = NULL;
        ATerm o_92 = NULL;
        t = SSLgetAnnotations(not_null(d_92));
        {
          o_92 = t;
          if(((n_92 != NULL) && (n_92 != o_92)))
            _fail(o_92);
          else
            n_92 = o_92;
        }
        {
          t = not_null(k_92);
          {
            ATerm r_92 = NULL;
            t = v_75(t);
            {
              p_92 = t;
              {
                ATerm s_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(p_92)), not_null(n_92));
                {
                  s_92 = t;
                  if(((r_92 != NULL) && (r_92 != s_92)))
                    _fail(s_92);
                  else
                    r_92 = s_92;
                }
                t = not_null(r_92);
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
ATerm Cons_2 (ATerm t, ATerm e_78 (ATerm), ATerm f_78 (ATerm))
{
  ATerm d_93 = NULL,e_93 = NULL,f_93 = NULL;
  d_93 = t;
  c_93 :
  if(((ATgetType(d_93) == AT_LIST) && ((ATermList) d_93 != ATempty)))
    {
      e_93 = ATgetFirst((ATermList) d_93);
      f_93 = (ATerm) ATgetNext((ATermList) d_93);
      {
        ATerm j_93 = NULL,l_93 = NULL;
        ATerm k_93 = NULL;
        t = SSLgetAnnotations(not_null(d_93));
        {
          k_93 = t;
          if(((j_93 != NULL) && (j_93 != k_93)))
            _fail(k_93);
          else
            j_93 = k_93;
        }
        {
          t = not_null(e_93);
          {
            ATerm n_93 = NULL;
            t = e_78(t);
            {
              l_93 = t;
              {
                t = not_null(f_93);
                {
                  ATerm p_93 = NULL;
                  t = f_78(t);
                  {
                    n_93 = t;
                    {
                      ATerm q_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(n_93)), not_null(l_93)), not_null(j_93));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm b_94 = NULL,c_94 = NULL;
  b_94 = t;
  a_94 :
  if(match_cons(b_94, sym_Specification_1))
    {
      c_94 = ATgetArgument(b_94, 0);
      {
        ATerm f_94 = NULL,m_94 = NULL;
        ATerm l_94 = NULL;
        t = SSLgetAnnotations(not_null(b_94));
        {
          l_94 = t;
          if(((f_94 != NULL) && (f_94 != l_94)))
            _fail(l_94);
          else
            f_94 = l_94;
        }
        {
          t = not_null(c_94);
          {
            ATerm o_94 = NULL;
            t = x_75(t);
            {
              m_94 = t;
              {
                ATerm p_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(m_94)), not_null(f_94));
                {
                  p_94 = t;
                  if(((o_94 != NULL) && (o_94 != p_94)))
                    _fail(p_94);
                  else
                    o_94 = p_94;
                }
                t = not_null(o_94);
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
ATerm _2 (ATerm t, ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  ATerm a_95 = NULL,b_95 = NULL,c_95 = NULL;
  a_95 = t;
  z_94 :
  if(match_cons(a_95, sym__2))
    {
      b_95 = ATgetArgument(a_95, 0);
      c_95 = ATgetArgument(a_95, 1);
      {
        ATerm g_95 = NULL,i_95 = NULL;
        ATerm h_95 = NULL;
        t = SSLgetAnnotations(not_null(a_95));
        {
          h_95 = t;
          if(((g_95 != NULL) && (g_95 != h_95)))
            _fail(h_95);
          else
            g_95 = h_95;
        }
        {
          t = not_null(b_95);
          {
            ATerm k_95 = NULL;
            t = z_66(t);
            {
              i_95 = t;
              {
                t = not_null(c_95);
                {
                  ATerm m_95 = NULL;
                  t = a_67(t);
                  {
                    k_95 = t;
                    {
                      ATerm n_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(i_95), not_null(k_95)), not_null(g_95));
                      {
                        n_95 = t;
                        if(((m_95 != NULL) && (m_95 != n_95)))
                          _fail(n_95);
                        else
                          m_95 = n_95;
                      }
                      t = not_null(m_95);
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
  ATerm v_95 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm w_95 = NULL,x_95 = NULL;
      w_95 = t;
      u_95 :
      if(match_cons(w_95, sym_Program_1))
        {
          x_95 = ATgetArgument(w_95, 0);
          if(((v_95 != NULL) && (v_95 != x_95)))
            _fail(x_95);
          else
            v_95 = x_95;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_20), not_null(v_95)), term_n_20));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
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
  ATerm b_96 = NULL,c_96 = NULL,d_96 = NULL;
  b_96 = t;
  a_96 :
  if(match_cons(b_96, sym__2))
    {
      c_96 = ATgetArgument(b_96, 0);
      d_96 = ATgetArgument(b_96, 1);
      {
        ATerm t_20;
        t_20 = t;
        t = SSL_printnl(not_null(c_96), not_null(d_96));
        t = t_20;
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
  ATerm j_96 = NULL,k_96 = NULL,l_96 = NULL;
  j_96 = t;
  i_96 :
  if(match_cons(j_96, sym__2))
    {
      k_96 = ATgetArgument(j_96, 0);
      l_96 = ATgetArgument(j_96, 1);
      {
        t = not_null(k_96);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(l_96);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_84 (ATerm))
{
  ATerm u_20;
  u_20 = t;
  {
    ATerm s_96 = NULL,a_97 = NULL;
    ATerm v_20;
    v_20 = t;
    {
      ATerm t_96 = NULL;
      t = x_84(t);
      {
        t_96 = t;
        if(((s_96 != NULL) && (s_96 != t_96)))
          _fail(t_96);
        else
          s_96 = t_96;
      }
    }
    t = v_20;
    {
      ATerm b_97 = NULL;
      b_97 = t;
      if(((a_97 != NULL) && (a_97 != b_97)))
        _fail(b_97);
      else
        a_97 = b_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_97)), not_null(s_96)));
        t = printnl_0(t);
      }
    }
  }
  t = u_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_97 = NULL;
  h_97 = t;
  t = SSL_is_string(not_null(h_97));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm z_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = z_20;
      {
        ATerm e_21 = t;
        int f_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_3);
            LocalPopChoice(f_21);
          }
        else
          {
            t = e_21;
            {
              ATerm q_97 = NULL,r_97 = NULL,s_97 = NULL;
              q_97 = t;
              p_97 :
              if(match_cons(q_97, sym_Path_1))
                {
                  r_97 = ATgetArgument(q_97, 0);
                  t = not_null(r_97);
                }
              else
                {
                  if(match_cons(q_97, sym_Var_1))
                    {
                      r_97 = ATgetArgument(q_97, 0);
                      {
                        t = not_null(r_97);
                        {
                          ATerm g_21 = t;
                          int h_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_21);
                            }
                          else
                            {
                              t = g_21;
                              {
                                ATerm m_3 (ATerm t)
                                {
                                  t = term_i_21;
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
                      if(match_cons(q_97, sym_Prefix_2))
                        {
                          r_97 = ATgetArgument(q_97, 0);
                          s_97 = ATgetArgument(q_97, 1);
                          {
                            ATerm x_97 = NULL,z_97 = NULL;
                            ATerm j_21;
                            j_21 = t;
                            {
                              ATerm y_97 = NULL;
                              t = not_null(r_97);
                              {
                                t = eval_config_0(t);
                                {
                                  y_97 = t;
                                  if(((x_97 != NULL) && (x_97 != y_97)))
                                    _fail(y_97);
                                  else
                                    x_97 = y_97;
                                }
                              }
                            }
                            t = j_21;
                            {
                              ATerm a_98 = NULL;
                              t = not_null(s_97);
                              {
                                t = eval_config_0(t);
                                {
                                  a_98 = t;
                                  if(((z_97 != NULL) && (z_97 != a_98)))
                                    _fail(a_98);
                                  else
                                    z_97 = a_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_97), not_null(z_97));
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
  ATerm k_98 = NULL;
  k_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(k_98));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_21;
            l_21 = t;
            {
              ATerm m_98 = NULL;
              ATerm n_98 = NULL;
              n_98 = t;
              if(((m_98 != NULL) && (m_98 != n_98)))
                _fail(n_98);
              else
                m_98 = n_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(k_98), not_null(m_98));
                t = table_put_0(t);
              }
            }
            t = l_21;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm n_21;
    n_21 = t;
    {
      ATerm r_98 = NULL;
      ATerm s_98 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          s_98 = t;
          if(((r_98 != NULL) && (r_98 != s_98)))
            _fail(s_98);
          else
            r_98 = s_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_98), term_p_21);
        t = geq_0(t);
      }
    }
    t = n_21;
    t = h_82(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_r_21));
  {
    t = printnl_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm v_98 = NULL;
  v_98 = t;
  t = SSL_TicksToSeconds(not_null(v_98));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_99 = NULL,e_99 = NULL,f_99 = NULL;
  d_99 = t;
  c_99 :
  if(match_cons(d_99, sym__2))
    {
      e_99 = ATgetArgument(d_99, 0);
      f_99 = ATgetArgument(d_99, 1);
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_99), not_null(f_99));
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            t = SSL_addr(not_null(e_99), not_null(f_99));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_88 (ATerm), ATerm g_88 (ATerm))
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_88(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm m_99 = NULL,n_99 = NULL,p_99 = NULL;
        m_99 = t;
        l_99 :
        if(((ATgetType(m_99) == AT_LIST) && ((ATermList) m_99 != ATempty)))
          {
            n_99 = ATgetFirst((ATermList) m_99);
            p_99 = (ATerm) ATgetNext((ATermList) m_99);
            {
              ATerm s_99 = NULL;
              ATerm t_99 = NULL;
              t = not_null(p_99);
              {
                t = foldr_2(t, f_88, g_88);
                {
                  t_99 = t;
                  if(((s_99 != NULL) && (s_99 != t_99)))
                    _fail(t_99);
                  else
                    s_99 = t_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_99), not_null(s_99));
                t = g_88(t);
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
ATerm crush_2 (ATerm t, ATerm o_89 (ATerm), ATerm p_89 (ATerm))
{
  ATerm a_100 = NULL;
  ATerm c_100 = NULL;
  a_100 = t;
  {
    ATerm d_100 = NULL;
    ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL;
    t = not_null(a_100);
    {
      d_100 = t;
      {
        t = SSL_explode_term(not_null(d_100));
        {
          f_100 = t;
          z_99 :
          if(match_cons(f_100, sym__2))
            {
              g_100 = ATgetArgument(f_100, 0);
              h_100 = ATgetArgument(f_100, 1);
              if(((c_100 != NULL) && (c_100 != h_100)))
                _fail(h_100);
              else
                c_100 = h_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_100);
      t = foldr_2(t, o_89, p_89);
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
    ATerm p_3 (ATerm t)
    {
      t = term_z_19;
      return(t);
    }
    t = crush_2(t, p_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_100 = NULL,o_100 = NULL,p_100 = NULL;
  n_100 = t;
  m_100 :
  if(match_cons(n_100, sym__2))
    {
      o_100 = ATgetArgument(n_100, 0);
      p_100 = ATgetArgument(n_100, 1);
      {
        ATerm f_22;
        f_22 = t;
        {
          ATerm g_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_100), not_null(p_100));
              LocalPopChoice(o_22);
            }
          else
            {
              t = g_22;
              t = SSL_gtr(not_null(o_100), not_null(p_100));
            }
        }
        t = f_22;
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
  ATerm v_100 = NULL;
  ATerm p_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
      w_100 = t;
      u_100 :
      if(match_cons(w_100, sym__2))
        {
          x_100 = ATgetArgument(w_100, 0);
          y_100 = ATgetArgument(w_100, 1);
          {
            if(((v_100 != NULL) && (v_100 != x_100)))
              _fail(x_100);
            else
              v_100 = x_100;
            if(((v_100 != NULL) && (v_100 != y_100)))
              _fail(y_100);
            else
              v_100 = y_100;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(v_22);
    }
  else
    {
      t = p_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_82 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm w_22;
    w_22 = t;
    {
      ATerm b_101 = NULL;
      ATerm c_101 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          c_101 = t;
          if(((b_101 != NULL) && (b_101 != c_101)))
            _fail(c_101);
          else
            b_101 = c_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_101), term_v_6);
        t = geq_0(t);
      }
    }
    t = w_22;
    t = g_82(t);
    return(t);
  }
  t = try_1(t, q_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm i_101 = NULL,k_101 = NULL;
    ATerm b_23;
    b_23 = t;
    {
      ATerm j_101 = NULL;
      t = run_time_0(t);
      {
        j_101 = t;
        if(((i_101 != NULL) && (i_101 != j_101)))
          _fail(j_101);
        else
          i_101 = j_101;
      }
    }
    t = b_23;
    {
      ATerm l_101 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          l_101 = t;
          if(((k_101 != NULL) && (k_101 != l_101)))
            _fail(l_101);
          else
            k_101 = l_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(i_101)), term_h_23), not_null(k_101)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_3);
  {
    t = term_z_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_101 = NULL,r_101 = NULL,u_101 = NULL;
  q_101 = t;
  p_101 :
  if(match_cons(q_101, sym__2))
    {
      r_101 = ATgetArgument(q_101, 0);
      u_101 = ATgetArgument(q_101, 1);
      t = SSL_WriteToTextFile(not_null(r_101), not_null(u_101));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  a_102 = t;
  z_101 :
  if(match_cons(a_102, sym__2))
    {
      b_102 = ATgetArgument(a_102, 0);
      c_102 = ATgetArgument(a_102, 1);
      t = SSL_WriteToBinaryFile(not_null(b_102), not_null(c_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm k_102 = NULL;
  ATerm j_23;
  j_23 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_3 (ATerm t)
          {
            ATerm l_102 = NULL,m_102 = NULL;
            l_102 = t;
            h_102 :
            if(match_cons(l_102, sym_Output_1))
              {
                m_102 = ATgetArgument(l_102, 0);
                if(((k_102 != NULL) && (k_102 != m_102)))
                  _fail(m_102);
                else
                  k_102 = m_102;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_3);
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          {
            ATerm n_102 = NULL;
            t = term_m_23;
            {
              n_102 = t;
              if(((k_102 != NULL) && (k_102 != n_102)))
                _fail(n_102);
              else
                k_102 = n_102;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_3, _id);
  }
  t = j_23;
  {
    ATerm u_3 (ATerm t)
    {
      ATerm v_3 (ATerm t)
      {
        t = not_null(k_102);
        return(t);
      }
      t = split_2(t, v_3, _id);
      return(t);
    }
    t = _2(t, _id, u_3);
    {
      ATerm n_23 = t;
      int o_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_3 (ATerm t)
          {
            ATerm x_3 (ATerm t)
            {
              ATerm o_102 = NULL;
              o_102 = t;
              j_102 :
              if(!(match_cons(o_102, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_3);
            return(t);
          }
          t = _2(t, w_3, WriteToBinaryFile_0);
          LocalPopChoice(o_23);
        }
      else
        {
          t = n_23;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_84 (ATerm))
{
  ATerm z_102 = NULL,b_103 = NULL,c_103 = NULL,d_103 = NULL;
  ATerm p_23;
  p_23 = t;
  t = dtime_0(t);
  t = p_23;
  {
    t = h_84(t);
    {
      ATerm v_23;
      v_23 = t;
      {
        ATerm a_103 = NULL;
        t = dtime_0(t);
        {
          a_103 = t;
          if(((z_102 != NULL) && (z_102 != a_103)))
            _fail(a_103);
          else
            z_102 = a_103;
        }
      }
      t = v_23;
      {
        b_103 = t;
        y_102 :
        if(match_cons(b_103, sym__2))
          {
            c_103 = ATgetArgument(b_103, 0);
            d_103 = ATgetArgument(b_103, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_103)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(z_102))), not_null(d_103));
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
  ATerm j_103 = NULL;
  j_103 = t;
  t = SSL_ReadFromFile(not_null(j_103));
  return(t);
}
ATerm split_2 (ATerm t, ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm o_103 = NULL,t_103 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm s_103 = NULL;
    t = h_98(t);
    {
      s_103 = t;
      if(((o_103 != NULL) && (o_103 != s_103)))
        _fail(s_103);
      else
        o_103 = s_103;
    }
  }
  t = w_23;
  {
    ATerm u_103 = NULL;
    t = i_98(t);
    {
      u_103 = t;
      if(((t_103 != NULL) && (t_103 != u_103)))
        _fail(u_103);
      else
        t_103 = u_103;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_103), not_null(t_103));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_104 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm y_23 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm b_104 = NULL,c_104 = NULL;
          b_104 = t;
          y_103 :
          if(match_cons(b_104, sym_Input_1))
            {
              c_104 = ATgetArgument(b_104, 0);
              if(((a_104 != NULL) && (a_104 != c_104)))
                _fail(c_104);
              else
                a_104 = c_104;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_3);
        LocalPopChoice(g_24);
      }
    else
      {
        t = y_23;
        {
          ATerm d_104 = NULL;
          t = term_h_24;
          {
            d_104 = t;
            if(((a_104 != NULL) && (a_104 != d_104)))
              _fail(d_104);
            else
              a_104 = d_104;
          }
        }
      }
  }
  t = x_23;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(a_104);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_104 = NULL;
  k_104 = t;
  j_104 :
  if(match_cons(k_104, sym_Version_0))
    {
      ATerm m_104 = NULL,q_104 = NULL;
      ATerm i_24;
      i_24 = t;
      {
        ATerm p_104 = NULL;
        t = SSLgetAnnotations(not_null(k_104));
        {
          p_104 = t;
          if(((m_104 != NULL) && (m_104 != p_104)))
            _fail(p_104);
          else
            m_104 = p_104;
        }
      }
      t = i_24;
      {
        ATerm r_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_104));
        {
          r_104 = t;
          if(((q_104 != NULL) && (q_104 != r_104)))
            _fail(r_104);
          else
            q_104 = r_104;
        }
        t = not_null(q_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_84 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_4);
  t = f_84(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_104 = NULL;
  y_104 = t;
  t = SSL_table_create(not_null(y_104));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_105 = NULL;
  e_105 = t;
  {
    ATerm p_24;
    p_24 = t;
    {
      t = term_q_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_24, term_r_24, not_null(e_105));
          t = table_put_0(t);
        }
      }
    }
    t = p_24;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_105 = NULL;
  i_105 = t;
  t = SSL_string_to_int(not_null(i_105));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL,u_105 = NULL;
  q_105 = t;
  o_105 :
  if(match_string(q_105, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_105) == AT_LIST) && ((ATermList) q_105 != ATempty)))
        {
          r_105 = ATgetFirst((ATermList) q_105);
          s_105 = (ATerm) ATgetNext((ATermList) q_105);
          p_105 :
          if(((ATgetType(s_105) == AT_LIST) && ((ATermList) s_105 != ATempty)))
            {
              t_105 = ATgetFirst((ATermList) s_105);
              u_105 = (ATerm) ATgetNext((ATermList) s_105);
              {
                ATerm y_105 = NULL;
                ATerm s_24;
                s_24 = t;
                {
                  t = not_null(r_105);
                  t = l_0(t);
                }
                t = s_24;
                {
                  ATerm z_105 = NULL;
                  t = not_null(t_105);
                  {
                    t = m_0(t);
                    {
                      z_105 = t;
                      if(((y_105 != NULL) && (y_105 != z_105)))
                        _fail(z_105);
                      else
                        y_105 = z_105;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_105)), not_null(y_105));
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
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm t_106 = NULL;
        t_106 = t;
        d_106 :
        if(!(match_string(t_106, "-i")))
          {
            if(!(match_string(t_106, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm w_106 = NULL;
        ATerm v_24;
        v_24 = t;
        {
          ATerm u_106 = NULL;
          ATerm v_106 = NULL;
          v_106 = t;
          if(((u_106 != NULL) && (u_106 != v_106)))
            _fail(v_106);
          else
            u_106 = v_106;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_24, not_null(u_106));
            t = set_config_0(t);
          }
        }
        t = v_24;
        {
          ATerm x_106 = NULL;
          x_106 = t;
          if(((w_106 != NULL) && (w_106 != x_106)))
            _fail(x_106);
          else
            w_106 = x_106;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_106));
        }
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_y_24;
        return(t);
      }
      t = ArgOption_3(t, b_4, c_4, d_4);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm y_106 = NULL;
              y_106 = t;
              h_106 :
              if(!(match_string(y_106, "-o")))
                {
                  if(!(match_string(y_106, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              ATerm b_107 = NULL;
              ATerm c_25;
              c_25 = t;
              {
                ATerm z_106 = NULL;
                ATerm a_107 = NULL;
                a_107 = t;
                if(((z_106 != NULL) && (z_106 != a_107)))
                  _fail(a_107);
                else
                  z_106 = a_107;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(z_106));
                  t = set_config_0(t);
                }
              }
              t = c_25;
              {
                ATerm c_107 = NULL;
                c_107 = t;
                if(((b_107 != NULL) && (b_107 != c_107)))
                  _fail(c_107);
                else
                  b_107 = c_107;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_107));
              }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_i_25;
              return(t);
            }
            t = ArgOption_3(t, g_4, h_4, i_4);
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm r_25 = t;
              int b_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm d_107 = NULL;
                    d_107 = t;
                    k_106 :
                    if(!(match_string(d_107, "-S")))
                      {
                        if(!(match_string(d_107, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_4 (ATerm t)
                  {
                    t = term_e_26;
                    t = set_config_0(t);
                    t = term_f_26;
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_g_26;
                    return(t);
                  }
                  t = Option_3(t, j_4, k_4, l_4);
                  LocalPopChoice(b_26);
                }
              else
                {
                  t = r_25;
                  {
                    ATerm h_26 = t;
                    int i_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          ATerm e_107 = NULL;
                          e_107 = t;
                          l_106 :
                          if(!(match_string(e_107, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          ATerm h_107 = NULL;
                          ATerm m_26;
                          m_26 = t;
                          {
                            ATerm f_107 = NULL;
                            ATerm g_107 = NULL;
                            t = string_to_int_0(t);
                            {
                              g_107 = t;
                              if(((f_107 != NULL) && (f_107 != g_107)))
                                _fail(g_107);
                              else
                                f_107 = g_107;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(f_107));
                              t = set_config_0(t);
                            }
                          }
                          t = m_26;
                          {
                            ATerm i_107 = NULL;
                            i_107 = t;
                            if(((h_107 != NULL) && (h_107 != i_107)))
                              _fail(i_107);
                            else
                              h_107 = i_107;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_107));
                          }
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          t = term_q_26;
                          return(t);
                        }
                        t = ArgOption_3(t, m_4, n_4, o_4);
                        LocalPopChoice(i_26);
                      }
                    else
                      {
                        t = h_26;
                        {
                          ATerm r_26 = t;
                          int s_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm j_107 = NULL;
                                j_107 = t;
                                o_106 :
                                if(!(match_string(j_107, "-v")))
                                  {
                                    if(!(match_string(j_107, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm q_4 (ATerm t)
                              {
                                t = term_x_26;
                                t = set_config_0(t);
                                t = term_y_26;
                                return(t);
                              }
                              ATerm r_4 (ATerm t)
                              {
                                t = term_z_26;
                                return(t);
                              }
                              t = Option_3(t, p_4, q_4, r_4);
                              LocalPopChoice(s_26);
                            }
                          else
                            {
                              t = r_26;
                              {
                                ATerm a_27 = t;
                                int b_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_4 (ATerm t)
                                    {
                                      ATerm k_107 = NULL;
                                      k_107 = t;
                                      p_106 :
                                      if(!(match_string(k_107, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_4 (ATerm t)
                                    {
                                      t = term_d_27;
                                      t = set_config_0(t);
                                      t = term_e_27;
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_f_27;
                                      return(t);
                                    }
                                    t = Option_3(t, s_4, t_4, u_4);
                                    LocalPopChoice(b_27);
                                  }
                                else
                                  {
                                    t = a_27;
                                    {
                                      ATerm v_4 (ATerm t)
                                      {
                                        ATerm l_107 = NULL;
                                        l_107 = t;
                                        q_106 :
                                        if(!(match_string(l_107, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm w_4 (ATerm t)
                                      {
                                        t = term_h_27;
                                        t = set_config_0(t);
                                        t = term_i_27;
                                        return(t);
                                      }
                                      ATerm x_4 (ATerm t)
                                      {
                                        t = term_j_27;
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
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_107 = NULL;
  t_107 = t;
  t = SSL_table_destroy(not_null(t_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_107 = NULL;
  x_107 = t;
  t = SSL_exit(not_null(x_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_108 = NULL;
  b_108 = t;
  t = SSL_implode_string(not_null(b_108));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_105 (ATerm))
{
  ATerm e_108 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_108);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          t = Nil_0(t);
          t = b_105(t);
        }
      }
    return(t);
  }
  t = e_108(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm h_108 = NULL,i_108 = NULL,j_108 = NULL;
        h_108 = t;
        g_108 :
        if(((ATgetType(h_108) == AT_LIST) && ((ATermList) h_108 != ATempty)))
          {
            i_108 = ATgetFirst((ATermList) h_108);
            j_108 = (ATerm) ATgetNext((ATermList) h_108);
            {
              t = not_null(i_108);
              {
                ATerm y_4 (ATerm t)
                {
                  t = not_null(j_108);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_4);
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
  ATerm p_108 = NULL;
  p_108 = t;
  t = SSL_explode_string(not_null(p_108));
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
ATerm long_description_1 (ATerm t, ATerm g_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm n_104 (ATerm))
{
  ATerm s_108 (ATerm t)
  {
    ATerm o_27 = t;
    int p_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_27);
      }
    else
      {
        t = o_27;
        t = Cons_2(t, n_104, s_108);
      }
    return(t);
  }
  t = s_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm z_108 = NULL,a_109 = NULL,b_109 = NULL;
  b_109 = t;
  y_108 :
  if(((ATgetType(b_109) == AT_LIST) && ((ATermList) b_109 != ATempty)))
    {
      z_108 = ATgetFirst((ATermList) b_109);
      a_109 = (ATerm) ATgetNext((ATermList) b_109);
      {
        ATerm e_109 = NULL;
        t = not_null(a_109);
        {
          ATerm q_27;
          q_27 = t;
          {
            ATerm f_109 = NULL,h_109 = NULL,j_109 = NULL;
            ATerm r_27;
            r_27 = t;
            {
              ATerm g_109 = NULL;
              t = k_0(t);
              {
                g_109 = t;
                if(((f_109 != NULL) && (f_109 != g_109)))
                  _fail(g_109);
                else
                  f_109 = g_109;
              }
            }
            t = r_27;
            {
              ATerm i_109 = NULL;
              t = not_null(z_108);
              {
                t = j_0(t);
                {
                  i_109 = t;
                  if(((h_109 != NULL) && (h_109 != i_109)))
                    _fail(i_109);
                  else
                    h_109 = i_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_109)), not_null(h_109));
                {
                  j_109 = t;
                  if(((e_109 != NULL) && (e_109 != j_109)))
                    _fail(j_109);
                  else
                    e_109 = j_109;
                }
              }
            }
          }
          t = q_27;
          {
            ATerm z_4 (ATerm t)
            {
              t = not_null(e_109);
              return(t);
            }
            t = reverse_acc_2(t, j_0, z_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_109 == ATempty))
        {
          {
            t = term_l_15;
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
ATerm short_description_1 (ATerm t, ATerm f_81 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_72 (ATerm))
{
  ATerm u_109 = NULL,v_109 = NULL;
  u_109 = t;
  t_109 :
  if(match_cons(u_109, sym_Program_1))
    {
      v_109 = ATgetArgument(u_109, 0);
      {
        ATerm y_109 = NULL,a_110 = NULL;
        ATerm z_109 = NULL;
        t = SSLgetAnnotations(not_null(u_109));
        {
          z_109 = t;
          if(((y_109 != NULL) && (y_109 != z_109)))
            _fail(z_109);
          else
            y_109 = z_109;
        }
        {
          t = not_null(v_109);
          {
            ATerm c_110 = NULL;
            t = t_72(t);
            {
              a_110 = t;
              {
                ATerm d_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_110)), not_null(y_109));
                {
                  d_110 = t;
                  if(((c_110 != NULL) && (c_110 != d_110)))
                    _fail(d_110);
                  else
                    c_110 = d_110;
                }
                t = not_null(c_110);
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
  ATerm m_110 = NULL;
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm n_110 = NULL;
      n_110 = t;
      if(((m_110 != NULL) && (m_110 != n_110)))
        _fail(n_110);
      else
        m_110 = n_110;
      return(t);
    }
    t = Program_1(t, c_5);
    return(t);
  }
  t = option_defined_1(t, b_5);
  {
    ATerm d_5 (ATerm t)
    {
      ATerm o_110 = NULL;
      ATerm p_110 = NULL;
      t = term_l_15;
      {
        ATerm e_5 (ATerm t)
        {
          t = not_null(m_110);
          return(t);
        }
        t = short_description_1(t, e_5);
        {
          t = concat_strings_0(t);
          {
            p_110 = t;
            if(((o_110 != NULL) && (o_110 != p_110)))
              _fail(p_110);
            else
              o_110 = p_110;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(o_110)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_s_27));
      {
        t = printnl_0(t);
        {
          t = term_v_27;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm f_5 (ATerm t)
                {
                  ATerm q_110 = NULL;
                  q_110 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_110)), term_w_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, f_5);
                {
                  ATerm g_5 (ATerm t)
                  {
                    ATerm s_110 = NULL;
                    ATerm t_110 = NULL;
                    t = term_l_15;
                    {
                      ATerm j_5 (ATerm t)
                      {
                        t = not_null(m_110);
                        return(t);
                      }
                      t = long_description_1(t, j_5);
                      {
                        t = concat_strings_0(t);
                        {
                          t_110 = t;
                          if(((s_110 != NULL) && (s_110 != t_110)))
                            _fail(t_110);
                          else
                            s_110 = t_110;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_110)), term_x_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, g_5);
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
ATerm Undefined_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm d_111 = NULL,e_111 = NULL;
  d_111 = t;
  c_111 :
  if(match_cons(d_111, sym_Undefined_1))
    {
      e_111 = ATgetArgument(d_111, 0);
      {
        ATerm h_111 = NULL,j_111 = NULL;
        ATerm i_111 = NULL;
        t = SSLgetAnnotations(not_null(d_111));
        {
          i_111 = t;
          if(((h_111 != NULL) && (h_111 != i_111)))
            _fail(i_111);
          else
            h_111 = i_111;
        }
        {
          t = not_null(e_111);
          {
            ATerm l_111 = NULL;
            t = u_72(t);
            {
              j_111 = t;
              {
                ATerm m_111 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_111)), not_null(h_111));
                {
                  m_111 = t;
                  if(((l_111 != NULL) && (l_111 != m_111)))
                    _fail(m_111);
                  else
                    l_111 = m_111;
                }
                t = not_null(l_111);
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
ATerm fetch_1 (ATerm t, ATerm v_104 (ATerm))
{
  ATerm r_111 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_104, _id);
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = Cons_2(t, _id, r_111);
      }
    return(t);
  }
  t = r_111(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_82 (ATerm))
{
  t = fetch_1(t, e_82);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_111 = NULL;
  w_111 = t;
  v_111 :
  if(match_cons(w_111, sym_Help_0))
    {
      ATerm y_111 = NULL,a_112 = NULL;
      ATerm a_28;
      a_28 = t;
      {
        ATerm z_111 = NULL;
        t = SSLgetAnnotations(not_null(w_111));
        {
          z_111 = t;
          if(((y_111 != NULL) && (y_111 != z_111)))
            _fail(z_111);
          else
            y_111 = z_111;
        }
      }
      t = a_28;
      {
        ATerm b_112 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_111));
        {
          b_112 = t;
          if(((a_112 != NULL) && (a_112 != b_112)))
            _fail(b_112);
          else
            a_112 = b_112;
        }
        t = not_null(a_112);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_98(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_112 = NULL,i_112 = NULL,j_112 = NULL;
  h_112 = t;
  g_112 :
  if(match_cons(h_112, sym__2))
    {
      i_112 = ATgetArgument(h_112, 0);
      j_112 = ATgetArgument(h_112, 1);
      t = SSL_table_get(not_null(i_112), not_null(j_112));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL;
  q_112 = t;
  p_112 :
  if(match_cons(q_112, sym__3))
    {
      r_112 = ATgetArgument(q_112, 0);
      s_112 = ATgetArgument(q_112, 1);
      t_112 = ATgetArgument(q_112, 2);
      {
        ATerm d_28;
        d_28 = t;
        {
          ATerm x_112 = NULL;
          ATerm y_112 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_112), not_null(s_112));
          {
            ATerm e_28 = t;
            int f_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_28);
              }
            else
              {
                t = e_28;
                t = (ATerm) ATempty;
              }
            {
              y_112 = t;
              if(((x_112 != NULL) && (x_112 != y_112)))
                _fail(y_112);
              else
                x_112 = y_112;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_112), not_null(s_112), (ATerm) ATinsert(CheckATermList(not_null(x_112)), not_null(t_112)));
            t = table_put_0(t);
          }
        }
        t = d_28;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm c_113 = NULL;
  ATerm e_113 = NULL;
  t = term_l_15;
  {
    t = k_81(t);
    {
      e_113 = t;
      if(((c_113 != NULL) && (c_113 != e_113)))
        _fail(e_113);
      else
        c_113 = e_113;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, not_null(c_113));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm k_113 = NULL,l_113 = NULL,m_113 = NULL;
  k_113 = t;
  j_113 :
  if(match_string(k_113, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(k_113) == AT_LIST) && ((ATermList) k_113 != ATempty)))
        {
          l_113 = ATgetFirst((ATermList) k_113);
          m_113 = (ATerm) ATgetNext((ATermList) k_113);
          {
            ATerm p_113 = NULL;
            ATerm g_28;
            g_28 = t;
            {
              t = not_null(l_113);
              t = c_0(t);
            }
            t = g_28;
            {
              ATerm q_113 = NULL;
              t = term_l_15;
              {
                t = d_0(t);
                {
                  q_113 = t;
                  if(((p_113 != NULL) && (p_113 != q_113)))
                    _fail(q_113);
                  else
                    p_113 = q_113;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(m_113)), not_null(p_113));
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
  ATerm k_5 (ATerm t)
  {
    ATerm v_113 = NULL;
    v_113 = t;
    u_113 :
    if(!(match_string(v_113, "--help")))
      {
        if(!(match_string(v_113, "-h")))
          {
            if(!(match_string(v_113, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_h_28;
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_i_28;
    return(t);
  }
  t = Option_3(t, k_5, l_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_113 = NULL,z_113 = NULL,a_114 = NULL;
  y_113 = t;
  x_113 :
  if(((ATgetType(y_113) == AT_LIST) && ((ATermList) y_113 != ATempty)))
    {
      z_113 = ATgetFirst((ATermList) y_113);
      a_114 = (ATerm) ATgetNext((ATermList) y_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_114)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm g_114 = NULL,h_114 = NULL,i_114 = NULL;
  g_114 = t;
  f_114 :
  if(match_cons(g_114, sym__2))
    {
      h_114 = ATgetArgument(g_114, 0);
      i_114 = ATgetArgument(g_114, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(h_114), not_null(i_114));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm j_28;
  j_28 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_k_28;
      t = i_81(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = j_28;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm q_114 = NULL;
      ATerm l_28;
      l_28 = t;
      {
        ATerm o_114 = NULL;
        ATerm p_114 = NULL;
        p_114 = t;
        if(((o_114 != NULL) && (o_114 != p_114)))
          _fail(p_114);
        else
          o_114 = p_114;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(o_114));
          t = set_config_0(t);
        }
      }
      t = l_28;
      {
        ATerm r_114 = NULL;
        r_114 = t;
        if(((q_114 != NULL) && (q_114 != r_114)))
          _fail(r_114);
        else
          q_114 = r_114;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_114));
      }
      return(t);
    }
    ATerm p_5 (ATerm t)
    {
      ATerm m_28 = t;
      int n_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_28 = t;
          int p_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_28);
            }
          else
            {
              t = o_28;
              {
                t = i_81(t);
                t = Cons_2(t, _id, p_5);
              }
            }
          LocalPopChoice(n_28);
        }
      else
        {
          t = m_28;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_5, p_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_114 = NULL,y_114 = NULL,z_114 = NULL;
  ATerm q_28;
  q_28 = t;
  {
    ATerm a_115 = NULL,b_115 = NULL,c_115 = NULL,d_115 = NULL;
    a_115 = t;
    w_114 :
    if(match_cons(a_115, sym__3))
      {
        b_115 = ATgetArgument(a_115, 0);
        c_115 = ATgetArgument(a_115, 1);
        d_115 = ATgetArgument(a_115, 2);
        {
          if(((x_114 != NULL) && (x_114 != b_115)))
            _fail(b_115);
          else
            x_114 = b_115;
          {
            if(((y_114 != NULL) && (y_114 != c_115)))
              _fail(c_115);
            else
              y_114 = c_115;
            {
              if(((z_114 != NULL) && (z_114 != d_115)))
                _fail(d_115);
              else
                z_114 = d_115;
              t = SSL_table_put(not_null(x_114), not_null(y_114), not_null(z_114));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm g_115 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    t = term_s_28;
    t = table_put_0(t);
  }
  t = r_28;
  {
    ATerm q_5 (ATerm t)
    {
      ATerm u_28 = t;
      int v_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_81(t);
          LocalPopChoice(v_28);
        }
      else
        {
          t = u_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm w_28 = t;
        int y_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_z_19;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_28);
          }
        else
          {
            t = w_28;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm h_115 = NULL;
                  h_115 = t;
                  if(((g_115 != NULL) && (g_115 != h_115)))
                    _fail(h_115);
                  else
                    g_115 = h_115;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm z_28;
                z_28 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_115)), term_a_29));
                  t = printnl_0(t);
                }
                t = z_28;
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm c_29;
        c_29 = t;
        {
          t = term_t_27;
          t = table_destroy_0(t);
        }
        t = c_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_83 (ATerm), ATerm u_83 (ATerm), ATerm v_83 (ATerm), ATerm w_83 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm f_29 = t;
    int g_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_83(t);
        LocalPopChoice(g_29);
      }
    else
      {
        t = f_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_5);
  {
    t = store_options_0(t);
    {
      t = w_83(t);
      {
        ATerm h_29 = t;
        int i_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_83);
            LocalPopChoice(i_29);
          }
        else
          {
            t = h_29;
            {
              ATerm j_29 = t;
              int k_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, t_83);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(k_29);
                }
              else
                {
                  t = j_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm l_29;
      l_29 = t;
      {
        ATerm k_115 = NULL;
        ATerm l_115 = NULL;
        t = term_g_23;
        {
          t = get_config_0(t);
          {
            l_115 = t;
            if(((k_115 != NULL) && (k_115 != l_115)))
              _fail(l_115);
            else
              k_115 = l_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(k_115)));
          t = printnl_0(t);
        }
      }
      t = l_29;
      return(t);
    }
    t = if_verbose2_1(t, w_5);
    return(t);
  }
  t = iowrap_4(t, n_83, o_83, p_83, v_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  t = iowrap_3(t, l_83, m_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, i_83);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm z_5 (ATerm t)
    {
      ATerm a_6 (ATerm t)
      {
        ATerm b_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, b_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, a_6);
      return(t);
    }
    t = Specification_1(t, z_5);
    return(t);
  }
  t = iowrap_1(t, y_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
