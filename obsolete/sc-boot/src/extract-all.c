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
ATerm term_b_29;
ATerm term_t_28;
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
ATerm term_t_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_q_25;
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
ATerm term_s_21;
ATerm term_q_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_s_20;
ATerm term_n_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_h_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_x_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_g_9;
ATerm term_o_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_v_6;
ATerm term_r_6;
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
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(sym_Op_2, term_r_14, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_s_14);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_z_19);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym__2, term_w_26, term_r_15);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym__2, term_c_27, term_r_15);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym__2, term_g_27, term_r_15);
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
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(sym__3, term_t_27, term_u_27, (ATerm) ATempty);
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm n_76 (ATerm), ATerm o_76 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm));
ATerm Let_2 (ATerm, ATerm p_76 (ATerm), ATerm q_76 (ATerm));
ATerm sboundin_3 (ATerm, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm m_87 (ATerm), ATerm n_87 (ATerm));
ATerm diff_1 (ATerm, ATerm r_87 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_92 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm v_100 (ATerm), ATerm w_100 (ATerm));
ATerm alltd_1 (ATerm, ATerm v_99 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm x_100 (ATerm), ATerm y_100 (ATerm));
ATerm substitute_1 (ATerm, ATerm z_100 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm u_76 (ATerm), ATerm v_76 (ATerm));
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
ATerm Prim_2 (ATerm, ATerm u_77 (ATerm), ATerm v_77 (ATerm));
ATerm Explode_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm Op_2 (ATerm, ATerm u_75 (ATerm), ATerm v_75 (ATerm));
ATerm pat_td_1 (ATerm, ATerm u_104 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm Bapp_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_1 (ATerm, ATerm h_95 (ATerm));
ATerm LiftPrimArg_0 (ATerm);
ATerm Var_1 (ATerm, ATerm o_0 (ATerm));
ATerm LiftPrimArgs_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm repeat_1 (ATerm, ATerm t_89 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm c_74 (ATerm), ATerm d_74 (ATerm));
ATerm Con_3 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm oncetd_1 (ATerm, ATerm h_99 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm r_97 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm a_97 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm copy_1 (ATerm, ATerm b_87 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm f_95 (ATerm));
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
ATerm genzip_4 (ATerm, ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm zip_1 (ATerm, ATerm c_95 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm h_90 (ATerm), ATerm i_90 (ATerm));
ATerm for_3 (ATerm, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm k_78 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm m_78 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm l_87 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm n_75 (ATerm));
ATerm Cons_2 (ATerm, ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm Specification_1 (ATerm, ATerm p_75 (ATerm));
ATerm _2 (ATerm, ATerm r_66 (ATerm), ATerm s_66 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm o_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_81 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm));
ATerm crush_2 (ATerm, ATerm u_87 (ATerm), ATerm v_87 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_81 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_83 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_96 (ATerm), ATerm l_96 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_83 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_103 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_80 (ATerm));
ATerm map_1 (ATerm, ATerm q_102 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_80 (ATerm));
ATerm Program_1 (ATerm, ATerm l_72 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_72 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_102 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_81 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_97 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_81 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_80 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_80 (ATerm));
ATerm iowrap_4 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm));
ATerm iowrap_3 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_83 (ATerm), ATerm d_83 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_82 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm b_3 = NULL;
  b_3 = t;
  a_3 :
  if(((ATermList) b_3 == ATempty))
    {
      {
        ATerm d_4 = NULL,f_4 = NULL;
        ATerm g_6;
        g_6 = t;
        {
          ATerm e_4 = NULL;
          t = SSLgetAnnotations(not_null(b_3));
          {
            e_4 = t;
            if(((d_4 != NULL) && (d_4 != e_4)))
              _fail(e_4);
            else
              d_4 = e_4;
          }
        }
        t = g_6;
        {
          ATerm h_5 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_4));
          {
            h_5 = t;
            if(((f_4 != NULL) && (f_4 != h_5)))
              _fail(h_5);
            else
              f_4 = h_5;
          }
          t = not_null(f_4);
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
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL;
  d_6 = t;
  z_5 :
  if(match_cons(d_6, sym__2))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(f_6)), term_i_6), not_null(e_6)), term_h_6);
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
  ATerm m_6 = NULL,n_6 = NULL,o_6 = NULL,p_6 = NULL,q_6 = NULL;
  m_6 = t;
  k_6 :
  if(match_cons(m_6, sym__2))
    {
      n_6 = ATgetArgument(m_6, 0);
      q_6 = ATgetArgument(m_6, 1);
      l_6 :
      if(match_cons(n_6, sym_Mod_2))
        {
          o_6 = ATgetArgument(n_6, 0);
          p_6 = ATgetArgument(n_6, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_6), not_null(q_6)), term_i_6), not_null(p_6)), term_r_6), not_null(o_6)), term_h_6);
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
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL;
  y_6 = t;
  w_6 :
  if(match_cons(y_6, sym__2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      x_6 :
      if(((ATgetType(a_7) == AT_LIST) && ((ATermList) a_7 != ATempty)))
        {
          b_7 = ATgetFirst((ATermList) a_7);
          c_7 = (ATerm) ATgetNext((ATermList) a_7);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(c_7)), not_null(b_7));
            {
              ATerm c_0 (ATerm t)
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
              t = map_1(t, c_0);
            }
            t = not_null(z_6);
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
  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
  k_7 = t;
  i_7 :
  if(match_cons(k_7, sym__2))
    {
      l_7 = ATgetArgument(k_7, 0);
      m_7 = ATgetArgument(k_7, 1);
      j_7 :
      if(((ATermList) m_7 == ATempty))
        {
          t = not_null(l_7);
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
  t = (ATerm) ATinsert(ATempty, term_d_7);
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm e_7;
  e_7 = t;
  {
    ATerm q_7 = NULL;
    ATerm r_7 = NULL;
    r_7 = t;
    if(((q_7 != NULL) && (q_7 != r_7)))
      _fail(r_7);
    else
      q_7 = r_7;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, not_null(q_7));
      t = printnl_0(t);
    }
  }
  t = e_7;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  c_8 :
  if(match_cons(e_8, sym__2))
    {
      f_8 = ATgetArgument(e_8, 0);
      g_8 = ATgetArgument(e_8, 1);
      d_8 :
      if(match_int(g_8, 0))
        {
          ATerm g_7 = t;
          int h_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
              t = not_null(f_8);
              {
                t = Arities_0(t);
                {
                  i_8 = t;
                  x_7 :
                  if(((ATgetType(i_8) == AT_LIST) && ((ATermList) i_8 != ATempty)))
                    {
                      j_8 = ATgetFirst((ATermList) i_8);
                      k_8 = (ATerm) ATgetNext((ATermList) i_8);
                      y_7 :
                      if(((ATgetType(k_8) == AT_LIST) && ((ATermList) k_8 != ATempty)))
                        {
                          l_8 = ATgetFirst((ATermList) k_8);
                          m_8 = (ATerm) ATgetNext((ATermList) k_8);
                          {
                            ATerm n_7 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm d_0 (ATerm t)
                                {
                                  ATerm n_8 = NULL;
                                  n_8 = t;
                                  w_7 :
                                  if(!(match_int(n_8, 0)))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = fetch_1(t, d_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = n_7;
                              }
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_8)), term_o_7);
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
                ATerm p_8 = NULL;
                ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
                t = not_null(f_8);
                {
                  t = Arities_0(t);
                  {
                    q_8 = t;
                    a_8 :
                    if(((ATgetType(q_8) == AT_LIST) && ((ATermList) q_8 != ATempty)))
                      {
                        r_8 = ATgetFirst((ATermList) q_8);
                        s_8 = (ATerm) ATgetNext((ATermList) q_8);
                        b_8 :
                        if(((ATermList) s_8 == ATempty))
                          {
                            {
                              if(((p_8 != NULL) && (p_8 != r_8)))
                                _fail(r_8);
                              else
                                p_8 = r_8;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(p_8));
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
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(p_8));
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
ATerm Rec_2 (ATerm t, ATerm n_76 (ATerm), ATerm o_76 (ATerm))
{
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Rec_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        ATerm j_9 = NULL,l_9 = NULL;
        ATerm k_9 = NULL;
        t = SSLgetAnnotations(not_null(d_9));
        {
          k_9 = t;
          if(((j_9 != NULL) && (j_9 != k_9)))
            _fail(k_9);
          else
            j_9 = k_9;
        }
        {
          t = not_null(e_9);
          {
            ATerm n_9 = NULL;
            t = n_76(t);
            {
              l_9 = t;
              {
                t = not_null(f_9);
                {
                  ATerm p_9 = NULL;
                  t = o_76(t);
                  {
                    n_9 = t;
                    {
                      ATerm q_9 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_9), not_null(n_9)), not_null(j_9));
                      {
                        q_9 = t;
                        if(((p_9 != NULL) && (p_9 != q_9)))
                          _fail(q_9);
                        else
                          p_9 = q_9;
                      }
                      t = not_null(p_9);
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
ATerm SDef_3 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm), ATerm t_76 (ATerm))
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_SDef_3))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      g_10 = ATgetArgument(d_10, 2);
      {
        ATerm l_10 = NULL,n_10 = NULL;
        ATerm m_10 = NULL;
        t = SSLgetAnnotations(not_null(d_10));
        {
          m_10 = t;
          if(((l_10 != NULL) && (l_10 != m_10)))
            _fail(m_10);
          else
            l_10 = m_10;
        }
        {
          t = not_null(e_10);
          {
            ATerm p_10 = NULL;
            t = r_76(t);
            {
              n_10 = t;
              {
                t = not_null(f_10);
                {
                  ATerm r_10 = NULL;
                  t = s_76(t);
                  {
                    p_10 = t;
                    {
                      t = not_null(g_10);
                      {
                        ATerm t_10 = NULL;
                        t = t_76(t);
                        {
                          r_10 = t;
                          {
                            ATerm u_10 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_10), not_null(p_10), not_null(r_10)), not_null(l_10));
                            {
                              u_10 = t;
                              if(((t_10 != NULL) && (t_10 != u_10)))
                                _fail(u_10);
                              else
                                t_10 = u_10;
                            }
                            t = not_null(t_10);
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
ATerm Let_2 (ATerm t, ATerm p_76 (ATerm), ATerm q_76 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym_Let_2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(h_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(i_11);
          {
            ATerm r_11 = NULL;
            t = p_76(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = q_76(t);
                  {
                    r_11 = t;
                    {
                      ATerm u_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_11), not_null(r_11)), not_null(n_11));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sboundin_3 (ATerm t, ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm))
{
  ATerm p_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, s_101, s_101);
      LocalPopChoice(s_7);
    }
  else
    {
      t = p_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, u_101, u_101, s_101);
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = Rec_2(t, u_101, s_101);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_Rec_2))
    {
      d_12 = ATgetArgument(c_12, 0);
      e_12 = ATgetArgument(c_12, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL,p_12 = NULL;
  m_12 = t;
  l_12 :
  if(match_cons(m_12, sym_SDef_3))
    {
      n_12 = ATgetArgument(m_12, 0);
      o_12 = ATgetArgument(m_12, 1);
      p_12 = ATgetArgument(m_12, 2);
      {
        t = not_null(o_12);
        {
          ATerm g_0 (ATerm t)
          {
            ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
            t_12 = t;
            k_12 :
            if(match_cons(t_12, sym_VarDec_2))
              {
                u_12 = ATgetArgument(t_12, 0);
                v_12 = ATgetArgument(t_12, 1);
                t = not_null(u_12);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, g_0);
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
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_Let_2))
    {
      e_13 = ATgetArgument(d_13, 0);
      f_13 = ATgetArgument(d_13, 1);
      {
        t = not_null(e_13);
        {
          ATerm h_0 (ATerm t)
          {
            ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
            i_13 = t;
            b_13 :
            if(match_cons(i_13, sym_SDef_3))
              {
                j_13 = ATgetArgument(i_13, 0);
                k_13 = ATgetArgument(i_13, 1);
                l_13 = ATgetArgument(i_13, 2);
                t = not_null(j_13);
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
ATerm crush_3 (ATerm t, ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm))
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
      t = foldr_3(t, w_87, x_87, y_87);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm m_87 (ATerm), ATerm n_87 (ATerm))
{
  ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
  j_14 = t;
  i_14 :
  if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
    {
      k_14 = ATgetFirst((ATermList) j_14);
      l_14 = (ATerm) ATgetNext((ATermList) j_14);
      {
        t = n_87(t);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm o_14 = NULL;
            o_14 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_14), not_null(o_14));
              t = m_87(t);
            }
            return(t);
          }
          t = fetch_1(t, p_0);
        }
        t = not_null(l_14);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm r_87 (ATerm))
{
  ATerm u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t_14 :
  if(match_cons(u_14, sym__2))
    {
      v_14 = ATgetArgument(u_14, 0);
      w_14 = ATgetArgument(u_14, 1);
      {
        t = not_null(v_14);
        {
          ATerm a_15 (ATerm t)
          {
            ATerm v_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(z_7);
              }
            else
              {
                t = v_7;
                {
                  ATerm h_8 = t;
                  int o_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_0 (ATerm t)
                      {
                        t = not_null(w_14);
                        return(t);
                      }
                      t = HdMember_p__2(t, r_87, q_0);
                      t = a_15(t);
                      LocalPopChoice(o_8);
                    }
                  else
                    {
                      t = h_8;
                      t = Cons_2(t, _id, a_15);
                    }
                }
              }
            return(t);
          }
          t = a_15(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm l_92 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm m_92 (ATerm))
{
  ATerm e_15 (ATerm t)
  {
    ATerm r_0 (ATerm t)
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_92(t);
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
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
          ATerm c_15 = NULL;
          ATerm x_8;
          x_8 = t;
          {
            ATerm d_15 = NULL;
            t = k_92(t);
            {
              d_15 = t;
              if(((c_15 != NULL) && (c_15 != d_15)))
                _fail(d_15);
              else
                c_15 = d_15;
            }
          }
          t = x_8;
          {
            ATerm t_0 (ATerm t)
            {
              ATerm v_0 (ATerm t)
              {
                t = not_null(c_15);
                return(t);
              }
              t = split_2(t, e_15, v_0);
              t = diff_1(t, m_92);
              return(t);
            }
            ATerm u_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = l_92(t, t_0, e_15, u_0);
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
            t = crush_3(t, x_0, union_0, e_15);
          }
        }
      return(t);
    }
    t = split_2(t, r_0, s_0);
    t = union_0(t);
    return(t);
  }
  t = e_15(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
    n_15 = t;
    i_15 :
    if(match_cons(n_15, sym_Call_2))
      {
        o_15 = ATgetArgument(n_15, 0);
        q_15 = ATgetArgument(n_15, 1);
        j_15 :
        if(match_cons(o_15, sym_SVar_1))
          {
            p_15 = ATgetArgument(o_15, 0);
            {
              ATerm t_15 = NULL;
              ATerm u_15 = NULL;
              t = not_null(q_15);
              {
                t = length_0(t);
                {
                  u_15 = t;
                  if(((t_15 != NULL) && (t_15 != u_15)))
                    _fail(u_15);
                  else
                    t_15 = u_15;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(p_15), not_null(t_15)));
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
    ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL;
    v_15 = t;
    l_15 :
    if(match_cons(v_15, sym__2))
      {
        w_15 = ATgetArgument(v_15, 0);
        z_15 = ATgetArgument(v_15, 1);
        m_15 :
        if(match_cons(w_15, sym__2))
          {
            x_15 = ATgetArgument(w_15, 0);
            y_15 = ATgetArgument(w_15, 1);
            if(((x_15 != NULL) && (x_15 != z_15)))
              _fail(z_15);
            else
              x_15 = z_15;
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
  ATerm l_16 = NULL;
  ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
  l_16 = t;
  {
    ATerm q_16 = NULL;
    ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
    t = not_null(l_16);
    {
      q_16 = t;
      {
        t = SSL_explode_term(not_null(q_16));
        {
          s_16 = t;
          h_16 :
          if(match_cons(s_16, sym__2))
            {
              t_16 = ATgetArgument(s_16, 0);
              u_16 = ATgetArgument(s_16, 1);
              i_16 :
              if(match_string(t_16, ""))
                {
                  j_16 :
                  if(((ATgetType(u_16) == AT_LIST) && ((ATermList) u_16 != ATempty)))
                    {
                      v_16 = ATgetFirst((ATermList) u_16);
                      w_16 = (ATerm) ATgetNext((ATermList) u_16);
                      k_16 :
                      if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
                        {
                          x_16 = ATgetFirst((ATermList) w_16);
                          y_16 = (ATerm) ATgetNext((ATermList) w_16);
                          {
                            if(((n_16 != NULL) && (n_16 != v_16)))
                              _fail(v_16);
                            else
                              n_16 = v_16;
                            {
                              if(((p_16 != NULL) && (p_16 != x_16)))
                                _fail(x_16);
                              else
                                p_16 = x_16;
                              if(((o_16 != NULL) && (o_16 != y_16)))
                                _fail(y_16);
                              else
                                o_16 = y_16;
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
    t = not_null(p_16);
  }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    t = term_g_9;
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm e_17 = NULL,g_17 = NULL;
    ATerm h_9;
    h_9 = t;
    {
      ATerm f_17 = NULL;
      t = Fst_0(t);
      {
        f_17 = t;
        if(((e_17 != NULL) && (e_17 != f_17)))
          _fail(f_17);
        else
          e_17 = f_17;
      }
    }
    t = h_9;
    {
      ATerm h_17 = NULL;
      t = Snd_0(t);
      {
        h_17 = t;
        if(((g_17 != NULL) && (g_17 != h_17)))
          _fail(h_17);
        else
          g_17 = h_17;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(e_17), not_null(g_17));
    }
    return(t);
  }
  t = foldr_2(t, b_1, c_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  o_17 = t;
  l_17 :
  if(match_cons(o_17, sym_Call_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      r_17 = ATgetArgument(o_17, 1);
      m_17 :
      if(match_cons(p_17, sym_SVar_1))
        {
          q_17 = ATgetArgument(p_17, 0);
          n_17 :
          if(((ATermList) r_17 == ATempty))
            {
              t = not_null(q_17);
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
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  x_17 = t;
  v_17 :
  if(match_cons(x_17, sym__2))
    {
      y_17 = ATgetArgument(x_17, 0);
      z_17 = ATgetArgument(x_17, 1);
      w_17 :
      if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
        {
          a_18 = ATgetFirst((ATermList) z_17);
          b_18 = (ATerm) ATgetNext((ATermList) z_17);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_17), not_null(b_18));
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
  ATerm j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
  j_18 = t;
  g_18 :
  if(match_cons(j_18, sym__2))
    {
      k_18 = ATgetArgument(j_18, 0);
      l_18 = ATgetArgument(j_18, 1);
      h_18 :
      if(((ATgetType(l_18) == AT_LIST) && ((ATermList) l_18 != ATempty)))
        {
          m_18 = ATgetFirst((ATermList) l_18);
          p_18 = (ATerm) ATgetNext((ATermList) l_18);
          i_18 :
          if(match_cons(m_18, sym__2))
            {
              n_18 = ATgetArgument(m_18, 0);
              o_18 = ATgetArgument(m_18, 1);
              {
                ATerm r_18 = NULL;
                if(((k_18 != NULL) && (k_18 != n_18)))
                  _fail(n_18);
                else
                  k_18 = n_18;
                {
                  if(((r_18 != NULL) && (r_18 != o_18)))
                    _fail(o_18);
                  else
                    r_18 = o_18;
                  t = not_null(r_18);
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
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(m_9);
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
ATerm SubsVar_2 (ATerm t, ATerm v_100 (ATerm), ATerm w_100 (ATerm))
{
  ATerm x_18 = NULL;
  ATerm z_18 = NULL,a_19 = NULL;
  x_18 = t;
  {
    ATerm b_19 = NULL;
    t = not_null(x_18);
    {
      ATerm c_19 = NULL;
      t = v_100(t);
      {
        b_19 = t;
        {
          if(((z_18 != NULL) && (z_18 != b_19)))
            _fail(b_19);
          else
            z_18 = b_19;
          {
            t = w_100(t);
            {
              c_19 = t;
              if(((a_19 != NULL) && (a_19 != c_19)))
                _fail(c_19);
              else
                a_19 = c_19;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(z_18), not_null(a_19));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm g_19 (ATerm t)
  {
    ATerm o_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_99(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = o_9;
        t = _all(t, g_19);
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm q_19 = NULL;
        if(((q_19 != NULL) && (q_19 != n_19)))
          _fail(n_19);
        else
          q_19 = n_19;
      }
    }
  else
    {
      if(match_cons(l_19, sym__3))
        {
          m_19 = ATgetArgument(l_19, 0);
          n_19 = ATgetArgument(l_19, 1);
          o_19 = ATgetArgument(l_19, 2);
          {
            ATerm w_19 = NULL;
            ATerm x_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_19), not_null(n_19));
            {
              t = zip_1(t, _id);
              {
                x_19 = t;
                if(((w_19 != NULL) && (w_19 != x_19)))
                  _fail(x_19);
                else
                  w_19 = x_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), not_null(o_19));
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm x_100 (ATerm), ATerm y_100 (ATerm))
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL;
  t = subs_args_0(t);
  {
    d_20 = t;
    c_20 :
    if(match_cons(d_20, sym__2))
      {
        e_20 = ATgetArgument(d_20, 0);
        f_20 = ATgetArgument(d_20, 1);
        {
          t = not_null(f_20);
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                t = not_null(e_20);
                return(t);
              }
              t = SubsVar_2(t, x_100, e_1);
              t = y_100(t);
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
ATerm substitute_1 (ATerm t, ATerm z_100 (ATerm))
{
  t = substitute_2(t, z_100, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_VarDec_2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      {
        ATerm v_20 = NULL,x_20 = NULL;
        ATerm w_20 = NULL;
        t = SSLgetAnnotations(not_null(p_20));
        {
          w_20 = t;
          if(((v_20 != NULL) && (v_20 != w_20)))
            _fail(w_20);
          else
            v_20 = w_20;
        }
        {
          t = not_null(q_20);
          {
            ATerm z_20 = NULL;
            t = u_76(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = v_76(t);
                  {
                    z_20 = t;
                    {
                      ATerm c_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_20), not_null(z_20)), not_null(v_20));
                      {
                        c_21 = t;
                        if(((b_21 != NULL) && (b_21 != c_21)))
                          _fail(c_21);
                        else
                          b_21 = c_21;
                      }
                      t = not_null(b_21);
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
  ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
  w_21 = t;
  u_21 :
  if(((ATgetType(w_21) == AT_LIST) && ((ATermList) w_21 != ATempty)))
    {
      x_21 = ATgetFirst((ATermList) w_21);
      b_22 = (ATerm) ATgetNext((ATermList) w_21);
      v_21 :
      if(match_cons(x_21, sym_SDef_3))
        {
          y_21 = ATgetArgument(x_21, 0);
          z_21 = ATgetArgument(x_21, 1);
          a_22 = ATgetArgument(x_21, 2);
          {
            ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,d_23 = NULL;
            ATerm s_9;
            s_9 = t;
            {
              ATerm j_22 = NULL;
              t = not_null(z_21);
              {
                ATerm p_22 = NULL;
                ATerm f_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, f_1);
                {
                  j_22 = t;
                  {
                    if(((g_22 != NULL) && (g_22 != j_22)))
                      _fail(j_22);
                    else
                      g_22 = j_22;
                    {
                      t = not_null(g_22);
                      {
                        ATerm c_23 = NULL;
                        ATerm g_1 (ATerm t)
                        {
                          ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
                          k_22 = t;
                          l_21 :
                          if(match_cons(k_22, sym_VarDec_2))
                            {
                              l_22 = ATgetArgument(k_22, 0);
                              m_22 = ATgetArgument(k_22, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(l_22)), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        t = map_1(t, g_1);
                        {
                          p_22 = t;
                          {
                            if(((h_22 != NULL) && (h_22 != p_22)))
                              _fail(p_22);
                            else
                              h_22 = p_22;
                            {
                              t = not_null(w_21);
                              {
                                ATerm h_1 (ATerm t)
                                {
                                  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL;
                                  q_22 = t;
                                  r_21 :
                                  if(match_cons(q_22, sym_SDef_3))
                                    {
                                      r_22 = ATgetArgument(q_22, 0);
                                      s_22 = ATgetArgument(q_22, 1);
                                      t_22 = ATgetArgument(q_22, 2);
                                      {
                                        ATerm w_22 = NULL;
                                        ATerm b_23 = NULL;
                                        t = not_null(s_22);
                                        {
                                          ATerm i_1 (ATerm t)
                                          {
                                            ATerm x_22 = NULL,y_22 = NULL,z_22 = NULL;
                                            x_22 = t;
                                            p_21 :
                                            if(match_cons(x_22, sym_VarDec_2))
                                              {
                                                y_22 = ATgetArgument(x_22, 0);
                                                z_22 = ATgetArgument(x_22, 1);
                                                t = not_null(y_22);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          t = map_1(t, i_1);
                                          {
                                            b_23 = t;
                                            if(((w_22 != NULL) && (w_22 != b_23)))
                                              _fail(b_23);
                                            else
                                              w_22 = b_23;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(w_22), not_null(h_22), not_null(t_22));
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
                                  c_23 = t;
                                  if(((i_22 != NULL) && (i_22 != c_23)))
                                    _fail(c_23);
                                  else
                                    i_22 = c_23;
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
              ATerm e_23 = NULL;
              t = not_null(i_22);
              {
                t = choices_0(t);
                {
                  e_23 = t;
                  if(((d_23 != NULL) && (d_23 != e_23)))
                    _fail(e_23);
                  else
                    d_23 = e_23;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_21), not_null(g_22), not_null(d_23));
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
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
  r_23 = t;
  p_23 :
  if(((ATgetType(r_23) == AT_LIST) && ((ATermList) r_23 != ATempty)))
    {
      s_23 = ATgetFirst((ATermList) r_23);
      t_23 = (ATerm) ATgetNext((ATermList) r_23);
      q_23 :
      if(((ATermList) t_23 == ATempty))
        {
          t = not_null(s_23);
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
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  a_24 = t;
  y_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      e_24 = ATgetArgument(a_24, 1);
      z_23 :
      if(match_cons(b_24, sym__2))
        {
          c_24 = ATgetArgument(b_24, 0);
          d_24 = ATgetArgument(b_24, 1);
          {
            ATerm i_24 = NULL;
            ATerm j_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_24), not_null(d_24));
            {
              t = Definitions_0(t);
              {
                j_24 = t;
                if(((i_24 != NULL) && (i_24 != j_24)))
                  _fail(j_24);
                else
                  i_24 = j_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_24), not_null(e_24));
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
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL;
  e_25 = t;
  c_25 :
  if(match_cons(e_25, sym_ExplodeCong_2))
    {
      f_25 = ATgetArgument(e_25, 0);
      d_25 = ATgetArgument(e_25, 1);
      {
        ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL;
        ATerm m_25 = NULL;
        ATerm n_25 = NULL;
        t = new_0(t);
        {
          m_25 = t;
          {
            if(((i_25 != NULL) && (i_25 != m_25)))
              _fail(m_25);
            else
              i_25 = m_25;
            {
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
                          t = new_0(t);
                          {
                            p_25 = t;
                            if(((l_25 != NULL) && (l_25 != p_25)))
                              _fail(p_25);
                            else
                              l_25 = p_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_25)), not_null(k_25)), not_null(j_25)), not_null(i_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(f_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(d_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(k_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(j_25)))))));
      }
    }
  else
    {
      if(match_cons(e_25, sym_Build_1))
        {
          f_25 = ATgetArgument(e_25, 0);
          {
            ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
            ATerm v_25 = NULL;
            ATerm z_25 = NULL;
            t = new_0(t);
            {
              v_25 = t;
              {
                if(((t_25 != NULL) && (t_25 != v_25)))
                  _fail(v_25);
                else
                  t_25 = v_25;
                {
                  t = not_null(f_25);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm w_25 = NULL,x_25 = NULL,y_25 = NULL;
                      w_25 = t;
                      v_24 :
                      if(match_cons(w_25, sym_Explode_2))
                        {
                          x_25 = ATgetArgument(w_25, 0);
                          y_25 = ATgetArgument(w_25, 1);
                          {
                            if(((r_25 != NULL) && (r_25 != x_25)))
                              _fail(x_25);
                            else
                              r_25 = x_25;
                            {
                              if(((s_25 != NULL) && (s_25 != y_25)))
                                _fail(y_25);
                              else
                                s_25 = y_25;
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
                    t = oncetd_1(t, j_1);
                    {
                      z_25 = t;
                      if(((u_25 != NULL) && (u_25 != z_25)))
                        _fail(z_25);
                      else
                        u_25 = z_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(t_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_25)), not_null(r_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(u_25)))));
          }
        }
      else
        {
          if(match_cons(e_25, sym_Match_1))
            {
              f_25 = ATgetArgument(e_25, 0);
              {
                ATerm b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL;
                ATerm g_26 = NULL;
                ATerm h_26 = NULL;
                t = new_0(t);
                {
                  g_26 = t;
                  {
                    if(((d_26 != NULL) && (d_26 != g_26)))
                      _fail(g_26);
                    else
                      d_26 = g_26;
                    {
                      ATerm r_26 = NULL;
                      t = new_0(t);
                      {
                        h_26 = t;
                        {
                          if(((e_26 != NULL) && (e_26 != h_26)))
                            _fail(h_26);
                          else
                            e_26 = h_26;
                          {
                            t = not_null(f_25);
                            {
                              ATerm k_1 (ATerm t)
                              {
                                ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
                                n_26 = t;
                                a_25 :
                                if(match_cons(n_26, sym_Explode_2))
                                  {
                                    o_26 = ATgetArgument(n_26, 0);
                                    p_26 = ATgetArgument(n_26, 1);
                                    {
                                      if(((b_26 != NULL) && (b_26 != o_26)))
                                        _fail(o_26);
                                      else
                                        b_26 = o_26;
                                      {
                                        if(((c_26 != NULL) && (c_26 != p_26)))
                                          _fail(p_26);
                                        else
                                          c_26 = p_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(d_26));
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
                                r_26 = t;
                                if(((f_26 != NULL) && (f_26 != r_26)))
                                  _fail(r_26);
                                else
                                  f_26 = r_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(d_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(f_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_w_9, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_26)), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_26)), not_null(b_26)))))));
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
  ATerm d_29 = NULL,e_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym_Match_1))
    {
      e_29 = ATgetArgument(d_29, 0);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL,q_29 = NULL;
            ATerm r_29 = NULL;
            ATerm v_29 = NULL;
            t = new_0(t);
            {
              r_29 = t;
              {
                if(((i_29 != NULL) && (i_29 != r_29)))
                  _fail(r_29);
                else
                  i_29 = r_29;
                {
                  t = not_null(e_29);
                  {
                    ATerm l_1 (ATerm t)
                    {
                      ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
                      s_29 = t;
                      s_28 :
                      if(match_cons(s_29, sym_Anno_2))
                        {
                          t_29 = ATgetArgument(s_29, 0);
                          u_29 = ATgetArgument(s_29, 1);
                          {
                            if(((g_29 != NULL) && (g_29 != t_29)))
                              _fail(t_29);
                            else
                              g_29 = t_29;
                            {
                              if(((h_29 != NULL) && (h_29 != u_29)))
                                _fail(u_29);
                              else
                                h_29 = u_29;
                              t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(i_29)), not_null(g_29));
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
                      v_29 = t;
                      if(((q_29 != NULL) && (q_29 != v_29)))
                        _fail(v_29);
                      else
                        q_29 = v_29;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(i_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_a_10, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_29)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_29))))));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm b_10 = t;
              int h_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
                  ATerm a_30 = NULL;
                  ATerm g_30 = NULL;
                  t = new_0(t);
                  {
                    a_30 = t;
                    {
                      if(((y_29 != NULL) && (y_29 != a_30)))
                        _fail(a_30);
                      else
                        y_29 = a_30;
                      {
                        t = not_null(e_29);
                        {
                          ATerm m_1 (ATerm t)
                          {
                            ATerm b_30 = NULL,c_30 = NULL;
                            b_30 = t;
                            w_28 :
                            if(match_cons(b_30, sym_RootApp_1))
                              {
                                c_30 = ATgetArgument(b_30, 0);
                                {
                                  if(((x_29 != NULL) && (x_29 != c_30)))
                                    _fail(c_30);
                                  else
                                    x_29 = c_30;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(y_29));
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
                            g_30 = t;
                            if(((z_29 != NULL) && (z_29 != g_30)))
                              _fail(g_30);
                            else
                              z_29 = g_30;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(y_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(z_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(y_29))), not_null(x_29))));
                  LocalPopChoice(h_10);
                }
              else
                {
                  t = b_10;
                  {
                    ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,l_30 = NULL;
                    ATerm o_30 = NULL;
                    ATerm s_30 = NULL;
                    t = new_0(t);
                    {
                      o_30 = t;
                      {
                        if(((k_30 != NULL) && (k_30 != o_30)))
                          _fail(o_30);
                        else
                          k_30 = o_30;
                        {
                          t = not_null(e_29);
                          {
                            ATerm n_1 (ATerm t)
                            {
                              ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
                              p_30 = t;
                              a_29 :
                              if(match_cons(p_30, sym_App_2))
                                {
                                  q_30 = ATgetArgument(p_30, 0);
                                  r_30 = ATgetArgument(p_30, 1);
                                  {
                                    if(((j_30 != NULL) && (j_30 != q_30)))
                                      _fail(q_30);
                                    else
                                      j_30 = q_30;
                                    {
                                      if(((i_30 != NULL) && (i_30 != r_30)))
                                        _fail(r_30);
                                      else
                                        i_30 = r_30;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(k_30));
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
                              s_30 = t;
                              if(((l_30 != NULL) && (l_30 != s_30)))
                                _fail(s_30);
                              else
                                l_30 = s_30;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_30))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_30)), not_null(j_30)))));
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
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  i_31 :
  if(match_cons(k_31, sym_Match_1))
    {
      l_31 = ATgetArgument(k_31, 0);
      j_31 :
      if(match_cons(l_31, sym_RootApp_1))
        {
          m_31 = ATgetArgument(l_31, 0);
          t = not_null(m_31);
        }
      else
        {
          if(match_cons(l_31, sym_App_2))
            {
              m_31 = ATgetArgument(l_31, 0);
              n_31 = ATgetArgument(l_31, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(m_31), not_null(n_31));
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
  ATerm z_31 = NULL,a_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym_Match_1))
    {
      a_32 = ATgetArgument(z_31, 0);
      {
        ATerm c_32 = NULL,d_32 = NULL;
        ATerm h_32 = NULL;
        t = not_null(a_32);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
            e_32 = t;
            v_31 :
            if(match_cons(e_32, sym_RootApp_1))
              {
                f_32 = ATgetArgument(e_32, 0);
                w_31 :
                if(match_cons(f_32, sym_Match_1))
                  {
                    g_32 = ATgetArgument(f_32, 0);
                    {
                      if(((c_32 != NULL) && (c_32 != g_32)))
                        _fail(g_32);
                      else
                        c_32 = g_32;
                      t = not_null(c_32);
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
            h_32 = t;
            if(((d_32 != NULL) && (d_32 != h_32)))
              _fail(h_32);
            else
              d_32 = h_32;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(d_32));
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
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Mapp1_0(t);
            LocalPopChoice(o_10);
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
  ATerm n_33 = NULL,u_33 = NULL;
  n_33 = t;
  m_33 :
  if(match_cons(n_33, sym_Build_1))
    {
      u_33 = ATgetArgument(n_33, 0);
      {
        ATerm q_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
            ATerm g_34 = NULL;
            ATerm k_34 = NULL;
            t = new_0(t);
            {
              g_34 = t;
              {
                if(((e_34 != NULL) && (e_34 != g_34)))
                  _fail(g_34);
                else
                  e_34 = g_34;
                {
                  t = not_null(u_33);
                  {
                    ATerm p_1 (ATerm t)
                    {
                      ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL;
                      h_34 = t;
                      a_33 :
                      if(match_cons(h_34, sym_Anno_2))
                        {
                          i_34 = ATgetArgument(h_34, 0);
                          j_34 = ATgetArgument(h_34, 1);
                          {
                            if(((c_34 != NULL) && (c_34 != i_34)))
                              _fail(i_34);
                            else
                              c_34 = i_34;
                            {
                              if(((d_34 != NULL) && (d_34 != j_34)))
                                _fail(j_34);
                              else
                                d_34 = j_34;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_34));
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
                      k_34 = t;
                      if(((f_34 != NULL) && (f_34 != k_34)))
                        _fail(k_34);
                      else
                        f_34 = k_34;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(e_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_v_10, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_34)), not_null(c_34))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(e_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_34))));
            LocalPopChoice(s_10);
          }
        else
          {
            t = q_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
                  ATerm q_34 = NULL;
                  ATerm t_34 = NULL;
                  t = new_0(t);
                  {
                    q_34 = t;
                    {
                      if(((o_34 != NULL) && (o_34 != q_34)))
                        _fail(q_34);
                      else
                        o_34 = q_34;
                      {
                        t = not_null(u_33);
                        {
                          ATerm q_1 (ATerm t)
                          {
                            ATerm r_34 = NULL,s_34 = NULL;
                            r_34 = t;
                            e_33 :
                            if(match_cons(r_34, sym_RootApp_1))
                              {
                                s_34 = ATgetArgument(r_34, 0);
                                {
                                  if(((n_34 != NULL) && (n_34 != s_34)))
                                    _fail(s_34);
                                  else
                                    n_34 = s_34;
                                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34));
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
                            t_34 = t;
                            if(((p_34 != NULL) && (p_34 != t_34)))
                              _fail(t_34);
                            else
                              p_34 = t_34;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(o_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(n_34), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(o_34))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(p_34))));
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
                    ATerm z_34 = NULL;
                    ATerm d_35 = NULL;
                    t = new_0(t);
                    {
                      z_34 = t;
                      {
                        if(((x_34 != NULL) && (x_34 != z_34)))
                          _fail(z_34);
                        else
                          x_34 = z_34;
                        {
                          t = not_null(u_33);
                          {
                            ATerm r_1 (ATerm t)
                            {
                              ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
                              a_35 = t;
                              k_33 :
                              if(match_cons(a_35, sym_App_2))
                                {
                                  b_35 = ATgetArgument(a_35, 0);
                                  c_35 = ATgetArgument(a_35, 1);
                                  {
                                    if(((v_34 != NULL) && (v_34 != b_35)))
                                      _fail(b_35);
                                    else
                                      v_34 = b_35;
                                    {
                                      if(((w_34 != NULL) && (w_34 != c_35)))
                                        _fail(c_35);
                                      else
                                        w_34 = c_35;
                                      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_34));
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
                              d_35 = t;
                              if(((y_34 != NULL) && (y_34 != d_35)))
                                _fail(d_35);
                              else
                                y_34 = d_35;
                            }
                          }
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_34)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(v_34), not_null(w_34), (ATerm) ATmakeAppl(sym_Var_1, not_null(x_34)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_34))));
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
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
  u_35 = t;
  s_35 :
  if(match_cons(u_35, sym_Build_1))
    {
      v_35 = ATgetArgument(u_35, 0);
      t_35 :
      if(match_cons(v_35, sym_RootApp_1))
        {
          w_35 = ATgetArgument(v_35, 0);
          t = not_null(w_35);
        }
      else
        {
          if(match_cons(v_35, sym_App_2))
            {
              w_35 = ATgetArgument(v_35, 0);
              x_35 = ATgetArgument(v_35, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(x_35)), not_null(w_35));
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
ATerm Prim_2 (ATerm t, ATerm u_77 (ATerm), ATerm v_77 (ATerm))
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(match_cons(j_36, sym_Prim_2))
    {
      k_36 = ATgetArgument(j_36, 0);
      l_36 = ATgetArgument(j_36, 1);
      {
        ATerm r_36 = NULL,y_36 = NULL;
        ATerm s_36 = NULL;
        t = SSLgetAnnotations(not_null(j_36));
        {
          s_36 = t;
          if(((r_36 != NULL) && (r_36 != s_36)))
            _fail(s_36);
          else
            r_36 = s_36;
        }
        {
          t = not_null(k_36);
          {
            ATerm a_37 = NULL;
            t = u_77(t);
            {
              y_36 = t;
              {
                t = not_null(l_36);
                {
                  ATerm c_37 = NULL;
                  t = v_77(t);
                  {
                    a_37 = t;
                    {
                      ATerm d_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(y_36), not_null(a_37)), not_null(r_36));
                      {
                        d_37 = t;
                        if(((c_37 != NULL) && (c_37 != d_37)))
                          _fail(d_37);
                        else
                          c_37 = d_37;
                      }
                      t = not_null(c_37);
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
ATerm Explode_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
  t_37 = t;
  s_37 :
  if(match_cons(t_37, sym_Explode_2))
    {
      u_37 = ATgetArgument(t_37, 0);
      v_37 = ATgetArgument(t_37, 1);
      {
        ATerm z_37 = NULL,b_38 = NULL;
        ATerm a_38 = NULL;
        t = SSLgetAnnotations(not_null(t_37));
        {
          a_38 = t;
          if(((z_37 != NULL) && (z_37 != a_38)))
            _fail(a_38);
          else
            z_37 = a_38;
        }
        {
          t = not_null(u_37);
          {
            ATerm d_38 = NULL;
            t = i_74(t);
            {
              b_38 = t;
              {
                t = not_null(v_37);
                {
                  ATerm f_38 = NULL;
                  t = j_74(t);
                  {
                    d_38 = t;
                    {
                      ATerm g_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, not_null(b_38), not_null(d_38)), not_null(z_37));
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
ATerm Op_2 (ATerm t, ATerm u_75 (ATerm), ATerm v_75 (ATerm))
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  v_38 :
  if(match_cons(w_38, sym_Op_2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      {
        ATerm c_39 = NULL,e_39 = NULL;
        ATerm d_39 = NULL;
        t = SSLgetAnnotations(not_null(w_38));
        {
          d_39 = t;
          if(((c_39 != NULL) && (c_39 != d_39)))
            _fail(d_39);
          else
            c_39 = d_39;
        }
        {
          t = not_null(x_38);
          {
            ATerm g_39 = NULL;
            t = u_75(t);
            {
              e_39 = t;
              {
                t = not_null(y_38);
                {
                  ATerm i_39 = NULL;
                  t = v_75(t);
                  {
                    g_39 = t;
                    {
                      ATerm j_39 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_39), not_null(g_39)), not_null(c_39));
                      {
                        j_39 = t;
                        if(((i_39 != NULL) && (i_39 != j_39)))
                          _fail(j_39);
                        else
                          i_39 = j_39;
                      }
                      t = not_null(i_39);
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
ATerm pat_td_1 (ATerm t, ATerm u_104 (ATerm))
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_104(t);
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
                t = pat_td_1(t, u_104);
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
                    t = pat_td_1(t, u_104);
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
                          t = pat_td_1(t, u_104);
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
                              t = pat_td_1(t, u_104);
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
  ATerm a_40 = NULL,b_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Build_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      {
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_40 = NULL,i_40 = NULL;
            ATerm m_40 = NULL;
            t = not_null(b_40);
            {
              ATerm y_1 (ATerm t)
              {
                ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
                j_40 = t;
                s_39 :
                if(match_cons(j_40, sym_RootApp_1))
                  {
                    k_40 = ATgetArgument(j_40, 0);
                    t_39 :
                    if(match_cons(k_40, sym_Build_1))
                      {
                        l_40 = ATgetArgument(k_40, 0);
                        {
                          if(((h_40 != NULL) && (h_40 != l_40)))
                            _fail(l_40);
                          else
                            h_40 = l_40;
                          t = not_null(h_40);
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
                m_40 = t;
                if(((i_40 != NULL) && (i_40 != m_40)))
                  _fail(m_40);
                else
                  i_40 = m_40;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(i_40));
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
              ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
              ATerm c_41 = NULL;
              t = not_null(b_40);
              {
                ATerm z_1 (ATerm t)
                {
                  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
                  y_40 = t;
                  w_39 :
                  if(match_cons(y_40, sym_App_2))
                    {
                      z_40 = ATgetArgument(y_40, 0);
                      b_41 = ATgetArgument(y_40, 1);
                      x_39 :
                      if(match_cons(z_40, sym_Build_1))
                        {
                          a_41 = ATgetArgument(z_40, 0);
                          {
                            if(((p_40 != NULL) && (p_40 != a_41)))
                              _fail(a_41);
                            else
                              p_40 = a_41;
                            {
                              if(((o_40 != NULL) && (o_40 != b_41)))
                                _fail(b_41);
                              else
                                o_40 = b_41;
                              t = not_null(p_40);
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
                  c_41 = t;
                  if(((q_40 != NULL) && (q_40 != c_41)))
                    _fail(c_41);
                  else
                    q_40 = c_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(q_40));
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
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0(t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = m_11;
      {
        ATerm s_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bapp1_0(t);
            LocalPopChoice(v_11);
          }
        else
          {
            t = s_11;
            t = Bapp2_0(t);
          }
      }
    }
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm m_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,u_42 = NULL;
  t_42 = t;
  i_42 :
  if(match_cons(t_42, sym_InfixApp_3))
    {
      u_42 = ATgetArgument(t_42, 0);
      q_42 = ATgetArgument(t_42, 1);
      m_42 = ATgetArgument(t_42, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(q_42), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_42)), not_null(u_42))));
    }
  else
    {
      if(match_cons(t_42, sym_BAM_3))
        {
          u_42 = ATgetArgument(t_42, 0);
          q_42 = ATgetArgument(t_42, 1);
          m_42 = ATgetArgument(t_42, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(m_42))), not_null(u_42)), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_42))));
        }
      else
        {
          if(match_cons(t_42, sym_AM_2))
            {
              u_42 = ATgetArgument(t_42, 0);
              q_42 = ATgetArgument(t_42, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(u_42), (ATerm) ATmakeAppl(sym_Match_1, not_null(q_42)));
            }
          else
            {
              if(match_cons(t_42, sym_MA_2))
                {
                  u_42 = ATgetArgument(t_42, 0);
                  q_42 = ATgetArgument(t_42, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(u_42)), not_null(q_42));
                }
              else
                {
                  if(match_cons(t_42, sym_BA_2))
                    {
                      u_42 = ATgetArgument(t_42, 0);
                      q_42 = ATgetArgument(t_42, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_42)), not_null(u_42));
                    }
                  else
                    {
                      if(match_cons(t_42, sym_Lets_2))
                        {
                          u_42 = ATgetArgument(t_42, 0);
                          q_42 = ATgetArgument(t_42, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(u_42), not_null(q_42));
                        }
                      else
                        {
                          if(match_cons(t_42, sym_LChoices_1))
                            {
                              u_42 = ATgetArgument(t_42, 0);
                              j_42 :
                              if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                {
                                  r_42 = ATgetFirst((ATermList) u_42);
                                  s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(r_42), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(s_42)));
                                }
                              else
                                {
                                  if(((ATermList) u_42 == ATempty))
                                    {
                                      t = term_g_9;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(t_42, sym_Choices_1))
                                {
                                  u_42 = ATgetArgument(t_42, 0);
                                  k_42 :
                                  if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                    {
                                      r_42 = ATgetFirst((ATermList) u_42);
                                      s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Choices_1, not_null(s_42)));
                                    }
                                  else
                                    {
                                      if(((ATermList) u_42 == ATempty))
                                        {
                                          t = term_g_9;
                                        }
                                      else
                                        {
                                          _fail(t);
                                        }
                                    }
                                }
                              else
                                {
                                  if(match_cons(t_42, sym_Seqs_1))
                                    {
                                      u_42 = ATgetArgument(t_42, 0);
                                      l_42 :
                                      if(((ATgetType(u_42) == AT_LIST) && ((ATermList) u_42 != ATempty)))
                                        {
                                          r_42 = ATgetFirst((ATermList) u_42);
                                          s_42 = (ATerm) ATgetNext((ATermList) u_42);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_42), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(s_42)));
                                        }
                                      else
                                        {
                                          if(((ATermList) u_42 == ATempty))
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
  ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  f_44 = t;
  c_44 :
  if(match_cons(f_44, sym__2))
    {
      g_44 = ATgetArgument(f_44, 0);
      j_44 = ATgetArgument(f_44, 1);
      d_44 :
      if(match_cons(g_44, sym__2))
        {
          h_44 = ATgetArgument(g_44, 0);
          i_44 = ATgetArgument(g_44, 1);
          e_44 :
          if(match_cons(j_44, sym__2))
            {
              k_44 = ATgetArgument(j_44, 0);
              l_44 = ATgetArgument(j_44, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_44)), not_null(h_44)), (ATerm) ATinsert(CheckATermList(not_null(l_44)), not_null(i_44)));
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
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && ((ATermList) t_44 != ATempty)))
    {
      u_44 = ATgetFirst((ATermList) t_44);
      v_44 = (ATerm) ATgetNext((ATermList) t_44);
      t = (ATerm) ATmakeAppl(sym__2, not_null(u_44), not_null(v_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm b_45 = NULL;
  b_45 = t;
  a_45 :
  if(((ATermList) b_45 == ATempty))
    {
      t = term_x_11;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_1 (ATerm t, ATerm h_95 (ATerm))
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, h_95);
  return(t);
}
ATerm LiftPrimArg_0 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL;
  ATerm n_45 (ATerm t)
  {
    ATerm k_45 = NULL;
    ATerm l_45 = NULL;
    t = not_null(h_45);
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
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(k_45)), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(h_45)), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_45))))), (ATerm) ATmakeAppl(sym_Var_1, not_null(k_45))));
    return(t);
  }
  ATerm o_45 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_11, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_45))));
    return(t);
  }
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_Var_1))
    {
      i_45 = ATgetArgument(h_45, 0);
      {
        ATerm z_11 = t;
        int a_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_45(t);
            LocalPopChoice(a_12);
          }
        else
          {
            t = z_11;
            t = o_45(t);
          }
      }
    }
  else
    {
      t = n_45(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm z_45 = NULL,a_46 = NULL;
  z_45 = t;
  y_45 :
  if(match_cons(z_45, sym_Var_1))
    {
      a_46 = ATgetArgument(z_45, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
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
                ATerm i_46 = NULL;
                t = o_0(t);
                {
                  f_46 = t;
                  {
                    ATerm j_46 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(f_46)), not_null(d_46));
                    {
                      j_46 = t;
                      if(((i_46 != NULL) && (i_46 != j_46)))
                        _fail(j_46);
                      else
                        i_46 = j_46;
                    }
                    t = not_null(i_46);
                  }
                }
              }
            }
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm m_46 = NULL,o_46 = NULL;
              ATerm n_46 = NULL;
              t = SSLgetAnnotations(not_null(z_45));
              {
                n_46 = t;
                if(((m_46 != NULL) && (m_46 != n_46)))
                  _fail(n_46);
                else
                  m_46 = n_46;
              }
              {
                t = not_null(a_46);
                {
                  ATerm q_46 = NULL;
                  t = o_0(t);
                  {
                    o_46 = t;
                    {
                      ATerm r_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(o_46)), not_null(m_46));
                      {
                        r_46 = t;
                        if(((q_46 != NULL) && (q_46 != r_46)))
                          _fail(r_46);
                        else
                          q_46 = r_46;
                      }
                      t = not_null(q_46);
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
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL;
  f_47 = t;
  e_47 :
  if(match_cons(f_47, sym_Prim_2))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      {
        ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
        ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL,r_47 = NULL;
        t = not_null(h_47);
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
            t = not_null(h_47);
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
                  n_47 = t;
                  c_47 :
                  if(match_cons(n_47, sym__2))
                    {
                      o_47 = ATgetArgument(n_47, 0);
                      p_47 = ATgetArgument(n_47, 1);
                      d_47 :
                      if(match_cons(p_47, sym__2))
                        {
                          q_47 = ATgetArgument(p_47, 0);
                          r_47 = ATgetArgument(p_47, 1);
                          {
                            if(((k_47 != NULL) && (k_47 != o_47)))
                              _fail(o_47);
                            else
                              k_47 = o_47;
                            {
                              if(((l_47 != NULL) && (l_47 != q_47)))
                                _fail(q_47);
                              else
                                l_47 = q_47;
                              if(((m_47 != NULL) && (m_47 != r_47)))
                                _fail(r_47);
                              else
                                m_47 = r_47;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(k_47), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, not_null(l_47)), (ATerm) ATmakeAppl(sym_Prim_2, not_null(g_47), not_null(m_47))));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm u_47 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_89(t);
        t = u_47(t);
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = r_89(t);
      }
    return(t);
  }
  t = u_47(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm t_89 (ATerm))
{
  t = repeat_2(t, t_89, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  y_47 :
  if(match_cons(z_47, sym_Wld_0))
    {
      ATerm f_48 = NULL,h_48 = NULL;
      ATerm q_12;
      q_12 = t;
      {
        ATerm g_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          g_48 = t;
          if(((f_48 != NULL) && (f_48 != g_48)))
            _fail(g_48);
          else
            f_48 = g_48;
        }
      }
      t = q_12;
      {
        ATerm i_48 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_48));
        {
          i_48 = t;
          if(((h_48 != NULL) && (h_48 != i_48)))
            _fail(i_48);
          else
            h_48 = i_48;
        }
        t = not_null(h_48);
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
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(w_12);
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
ATerm App_2 (ATerm t, ATerm c_74 (ATerm), ATerm d_74 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym_App_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      {
        ATerm k_49 = NULL,m_49 = NULL;
        ATerm l_49 = NULL;
        t = SSLgetAnnotations(not_null(e_49));
        {
          l_49 = t;
          if(((k_49 != NULL) && (k_49 != l_49)))
            _fail(l_49);
          else
            k_49 = l_49;
        }
        {
          t = not_null(f_49);
          {
            ATerm o_49 = NULL;
            t = c_74(t);
            {
              m_49 = t;
              {
                t = not_null(g_49);
                {
                  ATerm q_49 = NULL;
                  t = d_74(t);
                  {
                    o_49 = t;
                    {
                      ATerm r_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, not_null(m_49), not_null(o_49)), not_null(k_49));
                      {
                        r_49 = t;
                        if(((q_49 != NULL) && (q_49 != r_49)))
                          _fail(r_49);
                        else
                          q_49 = r_49;
                      }
                      t = not_null(q_49);
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
ATerm Con_3 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm))
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym_Con_3))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      h_50 = ATgetArgument(e_50, 2);
      {
        ATerm m_50 = NULL,o_50 = NULL;
        ATerm n_50 = NULL;
        t = SSLgetAnnotations(not_null(e_50));
        {
          n_50 = t;
          if(((m_50 != NULL) && (m_50 != n_50)))
            _fail(n_50);
          else
            m_50 = n_50;
        }
        {
          t = not_null(f_50);
          {
            ATerm q_50 = NULL;
            t = z_73(t);
            {
              o_50 = t;
              {
                t = not_null(g_50);
                {
                  ATerm s_50 = NULL;
                  t = a_74(t);
                  {
                    q_50 = t;
                    {
                      t = not_null(h_50);
                      {
                        ATerm u_50 = NULL;
                        t = b_74(t);
                        {
                          s_50 = t;
                          {
                            ATerm v_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, not_null(o_50), not_null(q_50), not_null(s_50)), not_null(m_50));
                            {
                              v_50 = t;
                              if(((u_50 != NULL) && (u_50 != v_50)))
                                _fail(v_50);
                              else
                                u_50 = v_50;
                            }
                            t = not_null(u_50);
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
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
  g_51 = t;
  e_51 :
  if(match_cons(g_51, sym_SRule_1))
    {
      h_51 = ATgetArgument(g_51, 0);
      f_51 :
      if(match_cons(h_51, sym_StratRule_3))
        {
          i_51 = ATgetArgument(h_51, 0);
          j_51 = ATgetArgument(h_51, 1);
          k_51 = ATgetArgument(h_51, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_51)), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_51))), not_null(i_51)));
        }
      else
        {
          if(match_cons(h_51, sym_Rule_3))
            {
              i_51 = ATgetArgument(h_51, 0);
              j_51 = ATgetArgument(h_51, 1);
              k_51 = ATgetArgument(h_51, 2);
              {
                t = not_null(i_51);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(j_51);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(j_51))), (ATerm) ATmakeAppl(sym_Where_1, not_null(k_51))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_51))));
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
ATerm Scope_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  p_52 :
  if(match_cons(r_52, sym_Scope_2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      {
        ATerm x_52 = NULL,k_53 = NULL;
        ATerm y_52 = NULL;
        t = SSLgetAnnotations(not_null(r_52));
        {
          y_52 = t;
          if(((x_52 != NULL) && (x_52 != y_52)))
            _fail(y_52);
          else
            x_52 = y_52;
        }
        {
          t = not_null(s_52);
          {
            ATerm m_53 = NULL;
            t = r_77(t);
            {
              k_53 = t;
              {
                t = not_null(t_52);
                {
                  ATerm o_53 = NULL;
                  t = s_77(t);
                  {
                    m_53 = t;
                    {
                      ATerm p_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(k_53), not_null(m_53)), not_null(x_52));
                      {
                        p_53 = t;
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                      }
                      t = not_null(o_53);
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
ATerm oncetd_1 (ATerm t, ATerm h_99 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm a_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_99(t);
        LocalPopChoice(g_13);
      }
    else
      {
        t = a_13;
        t = _one(t, y_53);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  n_54 = t;
  l_54 :
  if(match_cons(n_54, sym_SRule_1))
    {
      o_54 = ATgetArgument(n_54, 0);
      m_54 :
      if(match_cons(o_54, sym_Rule_3))
        {
          p_54 = ATgetArgument(o_54, 0);
          q_54 = ATgetArgument(o_54, 1);
          r_54 = ATgetArgument(o_54, 2);
          {
            ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
            ATerm d_55 = NULL;
            ATerm j_55 = NULL;
            t = new_0(t);
            {
              d_55 = t;
              {
                if(((a_55 != NULL) && (a_55 != d_55)))
                  _fail(d_55);
                else
                  a_55 = d_55;
                {
                  t = not_null(p_54);
                  {
                    ATerm r_55 = NULL;
                    ATerm e_2 (ATerm t)
                    {
                      ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL;
                      e_55 = t;
                      c_54 :
                      if(match_cons(e_55, sym_Con_3))
                        {
                          f_55 = ATgetArgument(e_55, 0);
                          h_55 = ATgetArgument(e_55, 1);
                          i_55 = ATgetArgument(e_55, 2);
                          d_54 :
                          if(match_cons(f_55, sym_Var_1))
                            {
                              g_55 = ATgetArgument(f_55, 0);
                              {
                                if(((z_54 != NULL) && (z_54 != g_55)))
                                  _fail(g_55);
                                else
                                  z_54 = g_55;
                                {
                                  if(((x_54 != NULL) && (x_54 != h_55)))
                                    _fail(h_55);
                                  else
                                    x_54 = h_55;
                                  {
                                    if(((v_54 != NULL) && (v_54 != i_55)))
                                      _fail(i_55);
                                    else
                                      v_54 = i_55;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(z_54));
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
                      j_55 = t;
                      {
                        if(((b_55 != NULL) && (b_55 != j_55)))
                          _fail(j_55);
                        else
                          b_55 = j_55;
                        {
                          t = not_null(q_54);
                          {
                            ATerm f_2 (ATerm t)
                            {
                              ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
                              k_55 = t;
                              g_54 :
                              if(match_cons(k_55, sym_Con_3))
                                {
                                  l_55 = ATgetArgument(k_55, 0);
                                  n_55 = ATgetArgument(k_55, 1);
                                  o_55 = ATgetArgument(k_55, 2);
                                  h_54 :
                                  if(match_cons(l_55, sym_Var_1))
                                    {
                                      m_55 = ATgetArgument(l_55, 0);
                                      i_54 :
                                      if(match_cons(o_55, sym_Call_2))
                                        {
                                          p_55 = ATgetArgument(o_55, 0);
                                          q_55 = ATgetArgument(o_55, 1);
                                          j_54 :
                                          if(((ATermList) q_55 == ATempty))
                                            {
                                              {
                                                if(((z_54 != NULL) && (z_54 != m_55)))
                                                  _fail(m_55);
                                                else
                                                  z_54 = m_55;
                                                {
                                                  if(((y_54 != NULL) && (y_54 != n_55)))
                                                    _fail(n_55);
                                                  else
                                                    y_54 = n_55;
                                                  {
                                                    if(((w_54 != NULL) && (w_54 != p_55)))
                                                      _fail(p_55);
                                                    else
                                                      w_54 = p_55;
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
                              r_55 = t;
                              if(((c_55 != NULL) && (c_55 != r_55)))
                                _fail(r_55);
                              else
                                c_55 = r_55;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_55)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_55), not_null(c_55), (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_54), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(w_54), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(x_54), not_null(y_54), term_w_11)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(z_54)), (ATerm) ATmakeAppl(sym_Var_1, not_null(a_55)))))));
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
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(m_13);
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
ATerm topdown_1 (ATerm t, ATerm r_97 (ATerm))
{
  t = r_97(t);
  {
    ATerm h_2 (ATerm t)
    {
      t = topdown_1(t, r_97);
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
                    int w_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0(t);
                        LocalPopChoice(w_13);
                      }
                    else
                      {
                        t = t_13;
                        {
                          ATerm z_13 = t;
                          int d_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0(t);
                              LocalPopChoice(d_14);
                            }
                          else
                            {
                              t = z_13;
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
  ATerm d_56 = NULL;
  d_56 = t;
  c_56 :
  if(match_cons(d_56, sym__0))
    {
      ATerm f_56 = NULL,h_56 = NULL;
      ATerm e_14;
      e_14 = t;
      {
        ATerm g_56 = NULL;
        t = SSLgetAnnotations(not_null(d_56));
        {
          g_56 = t;
          if(((f_56 != NULL) && (f_56 != g_56)))
            _fail(g_56);
          else
            f_56 = g_56;
        }
      }
      t = e_14;
      {
        ATerm i_56 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__0), not_null(f_56));
        {
          i_56 = t;
          if(((h_56 != NULL) && (h_56 != i_56)))
            _fail(i_56);
          else
            h_56 = i_56;
        }
        t = not_null(h_56);
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
  ATerm c_57 = NULL;
  ATerm e_57 = NULL,f_57 = NULL,r_57 = NULL,t_57 = NULL;
  c_57 = t;
  {
    ATerm f_14;
    f_14 = t;
    {
      ATerm k_57 = NULL;
      ATerm m_57 = NULL,n_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
      t = not_null(c_57);
      {
        k_57 = t;
        {
          t = SSL_explode_term(not_null(k_57));
          {
            m_57 = t;
            u_56 :
            if(match_cons(m_57, sym__2))
              {
                n_57 = ATgetArgument(m_57, 0);
                o_57 = ATgetArgument(m_57, 1);
                v_56 :
                if(match_string(n_57, ""))
                  {
                    w_56 :
                    if(((ATgetType(o_57) == AT_LIST) && ((ATermList) o_57 != ATempty)))
                      {
                        p_57 = ATgetFirst((ATermList) o_57);
                        q_57 = (ATerm) ATgetNext((ATermList) o_57);
                        {
                          if(((e_57 != NULL) && (e_57 != p_57)))
                            _fail(p_57);
                          else
                            e_57 = p_57;
                          if(((f_57 != NULL) && (f_57 != q_57)))
                            _fail(q_57);
                          else
                            f_57 = q_57;
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
        ATerm s_57 = NULL;
        t = term_x_9;
        {
          s_57 = t;
          if(((r_57 != NULL) && (r_57 != s_57)))
            _fail(s_57);
          else
            r_57 = s_57;
        }
      }
      t = g_14;
      {
        t = SSL_mkterm(not_null(r_57), not_null(f_57));
        {
          t_57 = t;
          t = not_null(t_57);
        }
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm a_61 = NULL;
  ATerm c_61 = NULL,d_61 = NULL;
  a_61 = t;
  {
    ATerm e_61 = NULL;
    ATerm g_61 = NULL,h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
    t = not_null(a_61);
    {
      e_61 = t;
      {
        t = SSL_explode_term(not_null(e_61));
        {
          g_61 = t;
          l_58 :
          if(match_cons(g_61, sym__2))
            {
              h_61 = ATgetArgument(g_61, 0);
              i_61 = ATgetArgument(g_61, 1);
              m_58 :
              if(match_string(h_61, ""))
                {
                  z_60 :
                  if(((ATgetType(i_61) == AT_LIST) && ((ATermList) i_61 != ATempty)))
                    {
                      j_61 = ATgetFirst((ATermList) i_61);
                      k_61 = (ATerm) ATgetNext((ATermList) i_61);
                      {
                        if(((d_61 != NULL) && (d_61 != j_61)))
                          _fail(j_61);
                        else
                          d_61 = j_61;
                        if(((c_61 != NULL) && (c_61 != k_61)))
                          _fail(k_61);
                        else
                          c_61 = k_61;
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
    t = not_null(d_61);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm a_97 (ATerm))
{
  ATerm f_63 = NULL,h_63 = NULL,j_63 = NULL;
  ATerm l_63 (ATerm t)
  {
    ATerm h_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_63 = NULL,d_63 = NULL;
        ATerm n_14;
        n_14 = t;
        {
          ATerm c_63 = NULL;
          t = map_1(t, Thd_0);
          {
            t = a_97(t);
            {
              c_63 = t;
              if(((b_63 != NULL) && (b_63 != c_63)))
                _fail(c_63);
              else
                b_63 = c_63;
            }
          }
        }
        t = n_14;
        {
          ATerm e_63 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = l_63(t);
            {
              e_63 = t;
              if(((d_63 != NULL) && (d_63 != e_63)))
                _fail(e_63);
              else
                d_63 = e_63;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(d_63)), not_null(b_63));
        }
        LocalPopChoice(m_14);
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
  t = l_63(t);
  {
    ATerm p_14;
    p_14 = t;
    {
      ATerm g_63 = NULL;
      g_63 = t;
      if(((f_63 != NULL) && (f_63 != g_63)))
        _fail(g_63);
      else
        f_63 = g_63;
    }
    t = p_14;
    {
      ATerm q_14;
      q_14 = t;
      {
        ATerm i_63 = NULL;
        t = term_x_9;
        {
          i_63 = t;
          if(((h_63 != NULL) && (h_63 != i_63)))
            _fail(i_63);
          else
            h_63 = i_63;
        }
      }
      t = q_14;
      {
        t = SSL_mkterm(not_null(h_63), not_null(f_63));
        {
          j_63 = t;
          t = not_null(j_63);
        }
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm a_67 = NULL;
  ATerm c_67 = NULL,d_67 = NULL,e_67 = NULL;
  a_67 = t;
  {
    ATerm f_67 = NULL;
    ATerm g_67 = NULL;
    t = new_0(t);
    {
      f_67 = t;
      {
        if(((c_67 != NULL) && (c_67 != f_67)))
          _fail(f_67);
        else
          c_67 = f_67;
        {
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
                t = new_0(t);
                {
                  h_67 = t;
                  if(((e_67 != NULL) && (e_67 != h_67)))
                    _fail(h_67);
                  else
                    e_67 = h_67;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(c_67)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_67)), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_67)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_67), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(d_67), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_67)), not_null(e_67), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_67)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym__2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(p_67), not_null(q_67));
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            t = SSL_subtr(not_null(p_67), not_null(q_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
    d_68 = t;
    v_67 :
    if(match_cons(d_68, sym__2))
      {
        e_68 = ATgetArgument(d_68, 0);
        f_68 = ATgetArgument(d_68, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_68), not_null(f_68), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm l_2 (ATerm t)
  {
    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
    i_68 = t;
    x_67 :
    if(match_cons(i_68, sym__3))
      {
        j_68 = ATgetArgument(i_68, 0);
        k_68 = ATgetArgument(i_68, 1);
        l_68 = ATgetArgument(i_68, 2);
        y_67 :
        if(match_int(j_68, 0))
          {
            t = not_null(l_68);
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
    ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
    o_68 = t;
    c_68 :
    if(match_cons(o_68, sym__3))
      {
        p_68 = ATgetArgument(o_68, 0);
        q_68 = ATgetArgument(o_68, 1);
        r_68 = ATgetArgument(o_68, 2);
        {
          ATerm v_68 = NULL,x_68 = NULL;
          ATerm b_15;
          b_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), term_v_6);
            t = geq_0(t);
          }
          t = b_15;
          {
            ATerm f_15;
            f_15 = t;
            {
              ATerm w_68 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_68), term_v_6);
              {
                t = subt_0(t);
                {
                  w_68 = t;
                  if(((v_68 != NULL) && (v_68 != w_68)))
                    _fail(w_68);
                  else
                    v_68 = w_68;
                }
              }
            }
            t = f_15;
            {
              ATerm y_68 = NULL;
              t = not_null(q_68);
              {
                t = b_87(t);
                {
                  y_68 = t;
                  if(((x_68 != NULL) && (x_68 != y_68)))
                    _fail(y_68);
                  else
                    x_68 = y_68;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(v_68), not_null(q_68), (ATerm) ATinsert(CheckATermList(not_null(r_68)), not_null(x_68)));
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
  ATerm j_69 = NULL,k_69 = NULL,l_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym__2))
    {
      k_69 = ATgetArgument(j_69, 0);
      l_69 = ATgetArgument(j_69, 1);
      {
        ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
        ATerm r_69 = NULL;
        ATerm s_69 = NULL;
        t = new_0(t);
        {
          r_69 = t;
          {
            if(((o_69 != NULL) && (o_69 != r_69)))
              _fail(r_69);
            else
              o_69 = r_69;
            {
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
                    t = new_0(t);
                    {
                      t_69 = t;
                      if(((q_69 != NULL) && (q_69 != t_69)))
                        _fail(t_69);
                      else
                        q_69 = t_69;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(o_69)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(p_69)))), (ATerm) ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_69))), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(o_69), (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_x_14), term_x_14)), not_null(p_69), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_69)), not_null(q_69), (ATerm) ATmakeAppl(sym_Var_1, not_null(q_69)));
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
  ATerm b_70 = NULL,c_70 = NULL,d_70 = NULL;
  b_70 = t;
  z_69 :
  if(match_cons(b_70, sym__2))
    {
      c_70 = ATgetArgument(b_70, 0);
      d_70 = ATgetArgument(b_70, 1);
      a_70 :
      if(((ATermList) d_70 == ATempty))
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
ATerm zipr_1 (ATerm t, ATerm f_95 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, f_95);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL,j_70 = NULL;
  h_70 = t;
  g_70 :
  if(((ATgetType(h_70) == AT_LIST) && ((ATermList) h_70 != ATempty)))
    {
      i_70 = ATgetFirst((ATermList) h_70);
      j_70 = (ATerm) ATgetNext((ATermList) h_70);
      t = not_null(j_70);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm q_70 = NULL,r_70 = NULL,s_70 = NULL;
  q_70 = t;
  o_70 :
  if(((ATgetType(q_70) == AT_LIST) && ((ATermList) q_70 != ATempty)))
    {
      r_70 = ATgetFirst((ATermList) q_70);
      s_70 = (ATerm) ATgetNext((ATermList) q_70);
      p_70 :
      if(((ATermList) s_70 == ATempty))
        {
          t = not_null(r_70);
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
  ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
  ATerm q_73 (ATerm t)
  {
    ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,s_72 = NULL;
    ATerm k_15;
    k_15 = t;
    {
      ATerm d_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
      ATerm e_72 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(r_71), term_v_6);
      {
        t = add_0(t);
        {
          e_72 = t;
          if(((d_72 != NULL) && (d_72 != e_72)))
            _fail(e_72);
          else
            d_72 = e_72;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_72), term_r_15);
        {
          t = copy_1(t, new_0);
          {
            f_72 = t;
            e_71 :
            if(((ATgetType(f_72) == AT_LIST) && ((ATermList) f_72 != ATempty)))
              {
                g_72 = ATgetFirst((ATermList) f_72);
                h_72 = (ATerm) ATgetNext((ATermList) f_72);
                {
                  ATerm i_72 = NULL;
                  if(((v_71 != NULL) && (v_71 != g_72)))
                    _fail(g_72);
                  else
                    v_71 = g_72;
                  {
                    if(((w_71 != NULL) && (w_71 != h_72)))
                      _fail(h_72);
                    else
                      w_71 = h_72;
                    {
                      t = not_null(w_71);
                      {
                        ATerm j_72 = NULL,k_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL,r_72 = NULL;
                        t = last_0(t);
                        {
                          i_72 = t;
                          {
                            if(((u_71 != NULL) && (u_71 != i_72)))
                              _fail(i_72);
                            else
                              u_71 = i_72;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_71)), not_null(v_71)), not_null(w_71));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    j_72 = t;
                                    d_71 :
                                    if(match_cons(j_72, sym__6))
                                      {
                                        k_72 = ATgetArgument(j_72, 0);
                                        n_72 = ATgetArgument(j_72, 1);
                                        o_72 = ATgetArgument(j_72, 2);
                                        p_72 = ATgetArgument(j_72, 3);
                                        q_72 = ATgetArgument(j_72, 4);
                                        r_72 = ATgetArgument(j_72, 5);
                                        {
                                          if(((x_71 != NULL) && (x_71 != k_72)))
                                            _fail(k_72);
                                          else
                                            x_71 = k_72;
                                          {
                                            if(((y_71 != NULL) && (y_71 != n_72)))
                                              _fail(n_72);
                                            else
                                              y_71 = n_72;
                                            {
                                              if(((z_71 != NULL) && (z_71 != o_72)))
                                                _fail(o_72);
                                              else
                                                z_71 = o_72;
                                              {
                                                if(((a_72 != NULL) && (a_72 != p_72)))
                                                  _fail(p_72);
                                                else
                                                  a_72 = p_72;
                                                {
                                                  if(((b_72 != NULL) && (b_72 != q_72)))
                                                    _fail(q_72);
                                                  else
                                                    b_72 = q_72;
                                                  if(((c_72 != NULL) && (c_72 != r_72)))
                                                    _fail(r_72);
                                                  else
                                                    c_72 = r_72;
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
    t = k_15;
    {
      ATerm t_72 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_72)), not_null(z_71)), not_null(w_71));
      {
        t = concat_0(t);
        {
          t_72 = t;
          if(((s_72 != NULL) && (s_72 != t_72)))
            _fail(t_72);
          else
            s_72 = t_72;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_71), term_s_15), not_null(y_71), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_72)), not_null(v_71)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_71), not_null(a_72)))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_71))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_71), not_null(c_72)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(x_71))))));
    }
    return(t);
  }
  ATerm r_73 (ATerm t)
  {
    ATerm v_72 = NULL;
    ATerm w_72 = NULL;
    t = new_0(t);
    {
      w_72 = t;
      if(((v_72 != NULL) && (v_72 != w_72)))
        _fail(w_72);
      else
        v_72 = w_72;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_71), term_s_15), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(v_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_71), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(v_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_71), (ATerm) ATempty))), term_w_11))));
    return(t);
  }
  ATerm s_73 (ATerm t)
  {
    ATerm z_72 = NULL,a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL,f_73 = NULL,o_73 = NULL;
    ATerm a_16;
    a_16 = t;
    {
      ATerm g_73 = NULL;
      ATerm h_73 = NULL,i_73 = NULL,j_73 = NULL,k_73 = NULL,l_73 = NULL,m_73 = NULL,n_73 = NULL;
      t = new_0(t);
      {
        g_73 = t;
        {
          if(((z_72 != NULL) && (z_72 != g_73)))
            _fail(g_73);
          else
            z_72 = g_73;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_71), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  h_73 = t;
                  j_71 :
                  if(match_cons(h_73, sym__6))
                    {
                      i_73 = ATgetArgument(h_73, 0);
                      j_73 = ATgetArgument(h_73, 1);
                      k_73 = ATgetArgument(h_73, 2);
                      l_73 = ATgetArgument(h_73, 3);
                      m_73 = ATgetArgument(h_73, 4);
                      n_73 = ATgetArgument(h_73, 5);
                      {
                        if(((a_73 != NULL) && (a_73 != i_73)))
                          _fail(i_73);
                        else
                          a_73 = i_73;
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
                                if(((f_73 != NULL) && (f_73 != n_73)))
                                  _fail(n_73);
                                else
                                  f_73 = n_73;
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
    t = a_16;
    {
      ATerm p_73 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(c_73), not_null(e_73));
      {
        t = conc_0(t);
        {
          p_73 = t;
          if(((o_73 != NULL) && (o_73 != p_73)))
            _fail(p_73);
          else
            o_73 = p_73;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(p_71), term_b_16), not_null(b_73), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(o_73)), not_null(z_72)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_x_9, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_72))), (ATerm) ATmakeAppl(sym_Op_2, not_null(p_71), not_null(d_73)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(p_71), not_null(f_73)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(a_73))))));
    }
    return(t);
  }
  o_71 = t;
  l_71 :
  if(match_cons(o_71, sym__3))
    {
      p_71 = ATgetArgument(o_71, 0);
      q_71 = ATgetArgument(o_71, 1);
      r_71 = ATgetArgument(o_71, 2);
      m_71 :
      if(match_string(q_71, "T"))
        {
          n_71 :
          if(match_int(r_71, 0))
            {
              ATerm c_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_73(t);
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = c_16;
                  t = r_73(t);
                }
            }
          else
            {
              t = q_73(t);
            }
        }
      else
        {
          if(match_string(q_71, "D"))
            {
              t = s_73(t);
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
  ATerm o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL,u_74 = NULL;
  o_74 = t;
  l_74 :
  if(match_cons(o_74, sym__2))
    {
      p_74 = ATgetArgument(o_74, 0);
      u_74 = ATgetArgument(o_74, 1);
      m_74 :
      if(match_cons(p_74, sym__2))
        {
          q_74 = ATgetArgument(p_74, 0);
          t_74 = ATgetArgument(p_74, 1);
          n_74 :
          if(match_cons(q_74, sym_Mod_2))
            {
              r_74 = ATgetArgument(q_74, 0);
              s_74 = ATgetArgument(q_74, 1);
              {
                ATerm z_74 = NULL;
                ATerm a_75 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_74), not_null(s_74), not_null(t_74));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      a_75 = t;
                      if(((z_74 != NULL) && (z_74 != a_75)))
                        _fail(a_75);
                      else
                        z_74 = a_75;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_74), not_null(u_74));
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
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL,l_75 = NULL,m_75 = NULL,o_75 = NULL;
  g_75 = t;
  e_75 :
  if(match_cons(g_75, sym__5))
    {
      h_75 = ATgetArgument(g_75, 0);
      k_75 = ATgetArgument(g_75, 1);
      l_75 = ATgetArgument(g_75, 2);
      m_75 = ATgetArgument(g_75, 3);
      o_75 = ATgetArgument(g_75, 4);
      f_75 :
      if(((ATgetType(h_75) == AT_LIST) && ((ATermList) h_75 != ATempty)))
        {
          i_75 = ATgetFirst((ATermList) h_75);
          j_75 = (ATerm) ATgetNext((ATermList) h_75);
          t = (ATerm) ATmakeAppl(sym__5, not_null(j_75), not_null(k_75), not_null(l_75), not_null(m_75), (ATerm) ATinsert(CheckATermList(not_null(o_75)), not_null(i_75)));
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
  ATerm c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL;
  c_76 = t;
  a_76 :
  if(match_cons(c_76, sym__2))
    {
      d_76 = ATgetArgument(c_76, 0);
      e_76 = ATgetArgument(c_76, 1);
      b_76 :
      if(((ATgetType(e_76) == AT_LIST) && ((ATermList) e_76 != ATempty)))
        {
          f_76 = ATgetFirst((ATermList) e_76);
          g_76 = (ATerm) ATgetNext((ATermList) e_76);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_76)), not_null(f_76)), not_null(g_76));
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
  ATerm w_76 = NULL,x_76 = NULL,y_76 = NULL;
  w_76 = t;
  m_76 :
  if(match_cons(w_76, sym__2))
    {
      x_76 = ATgetArgument(w_76, 0);
      y_76 = ATgetArgument(w_76, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(y_76)), not_null(x_76));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL;
  g_77 = t;
  d_77 :
  if(match_cons(g_77, sym__2))
    {
      h_77 = ATgetArgument(g_77, 0);
      k_77 = ATgetArgument(g_77, 1);
      e_77 :
      if(((ATgetType(h_77) == AT_LIST) && ((ATermList) h_77 != ATempty)))
        {
          i_77 = ATgetFirst((ATermList) h_77);
          j_77 = (ATerm) ATgetNext((ATermList) h_77);
          f_77 :
          if(((ATgetType(k_77) == AT_LIST) && ((ATermList) k_77 != ATempty)))
            {
              l_77 = ATgetFirst((ATermList) k_77);
              m_77 = (ATerm) ATgetNext((ATermList) k_77);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_77), not_null(l_77)), (ATerm) ATmakeAppl(sym__2, not_null(j_77), not_null(m_77)));
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
  ATerm c_78 = NULL,d_78 = NULL,e_78 = NULL;
  c_78 = t;
  z_77 :
  if(match_cons(c_78, sym__2))
    {
      d_78 = ATgetArgument(c_78, 0);
      e_78 = ATgetArgument(c_78, 1);
      a_78 :
      if(((ATermList) d_78 == ATempty))
        {
          b_78 :
          if(((ATermList) e_78 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm x_94 (ATerm), ATerm y_94 (ATerm), ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm g_78 (ATerm t)
  {
    ATerm g_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_94(t);
        LocalPopChoice(m_16);
      }
    else
      {
        t = g_16;
        {
          t = y_94(t);
          {
            t = _2(t, a_95, g_78);
            t = z_94(t);
          }
        }
      }
    return(t);
  }
  t = g_78(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_95 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_95);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm w_78 = NULL,x_78 = NULL,y_78 = NULL,c_79 = NULL,d_79 = NULL;
  w_78 = t;
  u_78 :
  if(((ATgetType(w_78) == AT_LIST) && ((ATermList) w_78 != ATempty)))
    {
      x_78 = ATgetFirst((ATermList) w_78);
      d_79 = (ATerm) ATgetNext((ATermList) w_78);
      v_78 :
      if(match_cons(x_78, sym__2))
        {
          y_78 = ATgetArgument(x_78, 0);
          c_79 = ATgetArgument(x_78, 1);
          {
            ATerm h_79 = NULL,i_79 = NULL,o_79 = NULL,u_79 = NULL;
            ATerm r_16;
            r_16 = t;
            {
              ATerm j_79 = NULL;
              ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
              t = not_null(c_79);
              {
                j_79 = t;
                {
                  t = SSL_explode_term(not_null(j_79));
                  {
                    l_79 = t;
                    l_78 :
                    if(match_cons(l_79, sym__2))
                      {
                        m_79 = ATgetArgument(l_79, 0);
                        n_79 = ATgetArgument(l_79, 1);
                        {
                          if(((h_79 != NULL) && (h_79 != m_79)))
                            _fail(m_79);
                          else
                            h_79 = m_79;
                          if(((i_79 != NULL) && (i_79 != n_79)))
                            _fail(n_79);
                          else
                            i_79 = n_79;
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
            t = r_16;
            {
              ATerm z_16;
              z_16 = t;
              {
                ATerm p_79 = NULL;
                ATerm r_79 = NULL,s_79 = NULL,t_79 = NULL;
                t = not_null(y_78);
                {
                  p_79 = t;
                  {
                    t = SSL_explode_term(not_null(p_79));
                    {
                      r_79 = t;
                      p_78 :
                      if(match_cons(r_79, sym__2))
                        {
                          s_79 = ATgetArgument(r_79, 0);
                          t_79 = ATgetArgument(r_79, 1);
                          {
                            if(((h_79 != NULL) && (h_79 != s_79)))
                              _fail(s_79);
                            else
                              h_79 = s_79;
                            if(((o_79 != NULL) && (o_79 != t_79)))
                              _fail(t_79);
                            else
                              o_79 = t_79;
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
                ATerm v_79 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_79), not_null(i_79));
                {
                  t = zip_1(t, _id);
                  {
                    v_79 = t;
                    if(((u_79 != NULL) && (u_79 != v_79)))
                      _fail(v_79);
                    else
                      u_79 = v_79;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_79), not_null(d_79));
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
  ATerm f_80 = NULL,g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL;
  f_80 = t;
  d_80 :
  if(((ATgetType(f_80) == AT_LIST) && ((ATermList) f_80 != ATempty)))
    {
      g_80 = ATgetFirst((ATermList) f_80);
      j_80 = (ATerm) ATgetNext((ATermList) f_80);
      e_80 :
      if(match_cons(g_80, sym__2))
        {
          h_80 = ATgetArgument(g_80, 0);
          i_80 = ATgetArgument(g_80, 1);
          {
            ATerm l_80 = NULL;
            if(((h_80 != NULL) && (h_80 != i_80)))
              _fail(i_80);
            else
              h_80 = i_80;
            {
              if(((l_80 != NULL) && (l_80 != j_80)))
                _fail(j_80);
              else
                l_80 = j_80;
              t = not_null(l_80);
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
      ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL;
      q_80 = t;
      o_80 :
      if(match_cons(q_80, sym__2))
        {
          r_80 = ATgetArgument(q_80, 0);
          s_80 = ATgetArgument(q_80, 1);
          {
            t = not_null(r_80);
            {
              ATerm e_81 (ATerm t)
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
                      ATerm i_17 = t;
                      int j_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_2 (ATerm t)
                          {
                            t = not_null(s_80);
                            return(t);
                          }
                          t = HdMember_1(t, n_2);
                          t = e_81(t);
                          LocalPopChoice(j_17);
                        }
                      else
                        {
                          t = i_17;
                          t = Cons_2(t, _id, e_81);
                        }
                    }
                  }
                return(t);
              }
              t = e_81(t);
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
          ATerm v_80 = NULL;
          v_80 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(v_80));
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
          int s_17 = stack_ptr;
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
              LocalPopChoice(s_17);
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
ATerm GnNextChangeGraph_3 (ATerm t, ATerm q_78 (ATerm), ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL,u_81 = NULL,w_81 = NULL,z_81 = NULL,a_82 = NULL;
  q_81 = t;
  o_81 :
  if(match_cons(q_81, sym__5))
    {
      r_81 = ATgetArgument(q_81, 0);
      u_81 = ATgetArgument(q_81, 1);
      w_81 = ATgetArgument(q_81, 2);
      z_81 = ATgetArgument(q_81, 3);
      a_82 = ATgetArgument(q_81, 4);
      p_81 :
      if(((ATgetType(r_81) == AT_LIST) && ((ATermList) r_81 != ATempty)))
        {
          s_81 = ATgetFirst((ATermList) r_81);
          t_81 = (ATerm) ATgetNext((ATermList) r_81);
          {
            ATerm h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,q_82 = NULL,s_82 = NULL,u_82 = NULL;
            ATerm c_18;
            c_18 = t;
            {
              ATerm l_82 = NULL,m_82 = NULL,n_82 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_81), not_null(w_81));
              {
                t = q_78(t);
                {
                  l_82 = t;
                  k_81 :
                  if(match_cons(l_82, sym__2))
                    {
                      m_82 = ATgetArgument(l_82, 0);
                      n_82 = ATgetArgument(l_82, 1);
                      {
                        ATerm o_82 = NULL;
                        if(((i_82 != NULL) && (i_82 != m_82)))
                          _fail(m_82);
                        else
                          i_82 = m_82;
                        {
                          if(((h_82 != NULL) && (h_82 != n_82)))
                            _fail(n_82);
                          else
                            h_82 = n_82;
                          {
                            t = not_null(i_82);
                            {
                              ATerm p_82 = NULL;
                              t = r_78(t);
                              {
                                o_82 = t;
                                {
                                  if(((j_82 != NULL) && (j_82 != o_82)))
                                    _fail(o_82);
                                  else
                                    j_82 = o_82;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_82), not_null(u_81));
                                    {
                                      t = diff_0(t);
                                      {
                                        p_82 = t;
                                        if(((k_82 != NULL) && (k_82 != p_82)))
                                          _fail(p_82);
                                        else
                                          k_82 = p_82;
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
            t = c_18;
            {
              ATerm d_18;
              d_18 = t;
              {
                ATerm r_82 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(t_81));
                {
                  t = conc_0(t);
                  {
                    r_82 = t;
                    if(((q_82 != NULL) && (q_82 != r_82)))
                      _fail(r_82);
                    else
                      q_82 = r_82;
                  }
                }
              }
              t = d_18;
              {
                ATerm e_18;
                e_18 = t;
                {
                  ATerm t_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_82), not_null(u_81));
                  {
                    t = conc_0(t);
                    {
                      t_82 = t;
                      if(((s_82 != NULL) && (s_82 != t_82)))
                        _fail(t_82);
                      else
                        s_82 = t_82;
                    }
                  }
                }
                t = e_18;
                {
                  ATerm v_82 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_81), not_null(i_82), not_null(z_81));
                  {
                    t = s_78(t);
                    {
                      v_82 = t;
                      if(((u_82 != NULL) && (u_82 != v_82)))
                        _fail(v_82);
                      else
                        u_82 = v_82;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(q_82), not_null(s_82), not_null(h_82), not_null(u_82), not_null(a_82));
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
  ATerm q_83 = NULL,r_83 = NULL,s_83 = NULL,t_83 = NULL,u_83 = NULL,v_83 = NULL;
  q_83 = t;
  o_83 :
  if(match_cons(q_83, sym__5))
    {
      r_83 = ATgetArgument(q_83, 0);
      s_83 = ATgetArgument(q_83, 1);
      t_83 = ATgetArgument(q_83, 2);
      u_83 = ATgetArgument(q_83, 3);
      v_83 = ATgetArgument(q_83, 4);
      p_83 :
      if(((ATermList) r_83 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(v_83));
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
  ATerm f_84 = NULL,g_84 = NULL,h_84 = NULL,i_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_cons(f_84, sym__3))
    {
      g_84 = ATgetArgument(f_84, 0);
      h_84 = ATgetArgument(f_84, 1);
      i_84 = ATgetArgument(f_84, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(g_84), not_null(g_84), not_null(h_84), not_null(i_84), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm h_90 (ATerm), ATerm i_90 (ATerm))
{
  ATerm n_84 (ATerm t)
  {
    ATerm f_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_90(t);
        LocalPopChoice(q_18);
      }
    else
      {
        t = f_18;
        {
          t = i_90(t);
          t = n_84(t);
        }
      }
    return(t);
  }
  t = n_84(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm k_90 (ATerm), ATerm l_90 (ATerm), ATerm m_90 (ATerm))
{
  t = k_90(t);
  t = while_not_2(t, l_90, m_90);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm z_78 (ATerm), ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, z_78, a_79, b_79);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
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
ATerm assert_1 (ATerm t, ATerm k_78 (ATerm))
{
  ATerm d_85 = NULL,e_85 = NULL,f_85 = NULL;
  d_85 = t;
  c_85 :
  if(match_cons(d_85, sym__2))
    {
      e_85 = ATgetArgument(d_85, 0);
      f_85 = ATgetArgument(d_85, 1);
      {
        ATerm i_85 = NULL,j_85 = NULL,k_85 = NULL;
        ATerm w_18;
        w_18 = t;
        {
          ATerm l_85 = NULL;
          ATerm m_85 = NULL,n_85 = NULL,o_85 = NULL;
          t = k_78(t);
          {
            l_85 = t;
            {
              if(((i_85 != NULL) && (i_85 != l_85)))
                _fail(l_85);
              else
                i_85 = l_85;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(i_85), not_null(e_85), not_null(f_85));
                {
                  t = table_push_0(t);
                  {
                    ATerm y_18 = t;
                    int d_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(i_85), term_e_19);
                        t = table_get_0(t);
                        LocalPopChoice(d_19);
                      }
                    else
                      {
                        t = y_18;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      m_85 = t;
                      b_85 :
                      if(((ATgetType(m_85) == AT_LIST) && ((ATermList) m_85 != ATempty)))
                        {
                          n_85 = ATgetFirst((ATermList) m_85);
                          o_85 = (ATerm) ATgetNext((ATermList) m_85);
                          {
                            if(((j_85 != NULL) && (j_85 != n_85)))
                              _fail(n_85);
                            else
                              j_85 = n_85;
                            {
                              if(((k_85 != NULL) && (k_85 != o_85)))
                                _fail(o_85);
                              else
                                k_85 = o_85;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(i_85), term_e_19, (ATerm) ATinsert(CheckATermList(not_null(k_85)), (ATerm) ATinsert(CheckATermList(not_null(j_85)), not_null(e_85))));
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
  ATerm w_85 = NULL;
  ATerm y_85 = NULL;
  w_85 = t;
  {
    ATerm z_85 = NULL,a_86 = NULL,b_86 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(w_85));
    {
      ATerm w_2 (ATerm t)
      {
        t = term_f_19;
        return(t);
      }
      t = rewrite_1(t, w_2);
      {
        z_85 = t;
        u_85 :
        if(match_cons(z_85, sym_Defined_2))
          {
            a_86 = ATgetArgument(z_85, 0);
            b_86 = ATgetArgument(z_85, 1);
            v_85 :
            if(match_string(a_86, "f_0"))
              {
                if(((y_85 != NULL) && (y_85 != b_86)))
                  _fail(b_86);
                else
                  y_85 = b_86;
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
    t = not_null(y_85);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_86 = NULL,h_86 = NULL,i_86 = NULL;
  g_86 = t;
  f_86 :
  if(((ATgetType(g_86) == AT_LIST) && ((ATermList) g_86 != ATempty)))
    {
      h_86 = ATgetFirst((ATermList) g_86);
      i_86 = (ATerm) ATgetNext((ATermList) g_86);
      t = not_null(h_86);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm t_86 = NULL,u_86 = NULL,v_86 = NULL;
  t_86 = t;
  s_86 :
  if(match_cons(t_86, sym__2))
    {
      u_86 = ATgetArgument(t_86, 0);
      v_86 = ATgetArgument(t_86, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_86), not_null(v_86));
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
ATerm rewrite_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm d_87 = NULL;
  ATerm f_87 = NULL;
  d_87 = t;
  {
    ATerm g_87 = NULL;
    t = term_r_15;
    {
      t = m_78(t);
      {
        g_87 = t;
        if(((f_87 != NULL) && (f_87 != g_87)))
          _fail(g_87);
        else
          f_87 = g_87;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_87), not_null(d_87));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm a_88 = NULL,b_88 = NULL,c_88 = NULL;
  a_88 = t;
  z_87 :
  if(match_cons(a_88, sym__2))
    {
      b_88 = ATgetArgument(a_88, 0);
      c_88 = ATgetArgument(a_88, 1);
      {
        ATerm f_88 = NULL,g_88 = NULL;
        ATerm h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(c_88), not_null(b_88));
        {
          ATerm x_2 (ATerm t)
          {
            t = term_h_19;
            return(t);
          }
          t = rewrite_1(t, x_2);
          {
            h_88 = t;
            q_87 :
            if(match_cons(h_88, sym_Defined_3))
              {
                i_88 = ATgetArgument(h_88, 0);
                j_88 = ATgetArgument(h_88, 1);
                k_88 = ATgetArgument(h_88, 2);
                t_87 :
                if(match_string(i_88, "e_0"))
                  {
                    if(((f_88 != NULL) && (f_88 != j_88)))
                      _fail(j_88);
                    else
                      f_88 = j_88;
                    if(((g_88 != NULL) && (g_88 != k_88)))
                      _fail(k_88);
                    else
                      g_88 = k_88;
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
        t = (ATerm) ATinsert(CheckATermList(not_null(g_88)), not_null(f_88));
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
    ATerm t_88 = NULL,u_88 = NULL,v_88 = NULL,w_88 = NULL;
    t_88 = t;
    s_88 :
    if(match_cons(t_88, sym_SDef_3))
      {
        u_88 = ATgetArgument(t_88, 0);
        v_88 = ATgetArgument(t_88, 1);
        w_88 = ATgetArgument(t_88, 2);
        {
          ATerm b_89 = NULL,c_89 = NULL,d_89 = NULL;
          ATerm i_19;
          i_19 = t;
          {
            ATerm e_89 = NULL;
            t = not_null(v_88);
            {
              ATerm f_89 = NULL;
              t = length_0(t);
              {
                e_89 = t;
                {
                  if(((c_89 != NULL) && (c_89 != e_89)))
                    _fail(e_89);
                  else
                    c_89 = e_89;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_88), not_null(c_89));
                    {
                      ATerm g_89 = NULL,i_89 = NULL;
                      ATerm j_19 = t;
                      int p_19 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(p_19);
                        }
                      else
                        {
                          t = j_19;
                          t = (ATerm) ATempty;
                        }
                      {
                        f_89 = t;
                        {
                          if(((b_89 != NULL) && (b_89 != f_89)))
                            _fail(f_89);
                          else
                            b_89 = f_89;
                          {
                            ATerm h_89 = NULL;
                            t = not_null(u_88);
                            {
                              ATerm r_19 = t;
                              int s_19 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(s_19);
                                }
                              else
                                {
                                  t = r_19;
                                  t = (ATerm) ATempty;
                                }
                              {
                                h_89 = t;
                                if(((g_89 != NULL) && (g_89 != h_89)))
                                  _fail(h_89);
                                else
                                  g_89 = h_89;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(c_89)), not_null(g_89));
                              {
                                t = union_0(t);
                                {
                                  i_89 = t;
                                  {
                                    if(((d_89 != NULL) && (d_89 != i_89)))
                                      _fail(i_89);
                                    else
                                      d_89 = i_89;
                                    {
                                      ATerm t_19;
                                      t_19 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(c_89), not_null(u_88)), (ATerm) ATmakeAppl(sym_Defined_3, term_u_19, not_null(t_88), not_null(b_89)));
                                        {
                                          ATerm z_2 (ATerm t)
                                          {
                                            t = term_h_19;
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
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(u_88)), (ATerm) ATmakeAppl(sym_Defined_2, term_y_19, not_null(d_89)));
                                          {
                                            ATerm c_3 (ATerm t)
                                            {
                                              t = term_f_19;
                                              return(t);
                                            }
                                            t = assert_1(t, c_3);
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
ATerm HdMember_1 (ATerm t, ATerm l_87 (ATerm))
{
  ATerm v_89 = NULL,w_89 = NULL,x_89 = NULL;
  v_89 = t;
  u_89 :
  if(((ATgetType(v_89) == AT_LIST) && ((ATermList) v_89 != ATempty)))
    {
      w_89 = ATgetFirst((ATermList) v_89);
      x_89 = (ATerm) ATgetNext((ATermList) v_89);
      {
        t = l_87(t);
        {
          ATerm f_3 (ATerm t)
          {
            ATerm a_90 = NULL;
            a_90 = t;
            if(((w_89 != NULL) && (w_89 != a_90)))
              _fail(a_90);
            else
              w_89 = a_90;
            return(t);
          }
          t = fetch_1(t, f_3);
        }
        t = not_null(x_89);
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
  ATerm f_90 = NULL,g_90 = NULL,n_90 = NULL;
  f_90 = t;
  e_90 :
  if(match_cons(f_90, sym__2))
    {
      g_90 = ATgetArgument(f_90, 0);
      n_90 = ATgetArgument(f_90, 1);
      {
        t = not_null(g_90);
        {
          ATerm r_90 (ATerm t)
          {
            ATerm a_20 = t;
            int b_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(n_90);
                LocalPopChoice(b_20);
              }
            else
              {
                t = a_20;
                {
                  ATerm g_20 = t;
                  int h_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = not_null(n_90);
                        return(t);
                      }
                      t = HdMember_1(t, g_3);
                      t = r_90(t);
                      LocalPopChoice(h_20);
                    }
                  else
                    {
                      t = g_20;
                      t = Cons_2(t, _id, r_90);
                    }
                }
              }
            return(t);
          }
          t = r_90(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm o_86 (ATerm), ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_86(t);
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm w_90 = NULL,x_90 = NULL,y_90 = NULL;
        w_90 = t;
        v_90 :
        if(((ATgetType(w_90) == AT_LIST) && ((ATermList) w_90 != ATempty)))
          {
            x_90 = ATgetFirst((ATermList) w_90);
            y_90 = (ATerm) ATgetNext((ATermList) w_90);
            {
              ATerm b_91 = NULL,d_91 = NULL;
              ATerm k_20;
              k_20 = t;
              {
                ATerm c_91 = NULL;
                t = not_null(x_90);
                {
                  t = q_86(t);
                  {
                    c_91 = t;
                    if(((b_91 != NULL) && (b_91 != c_91)))
                      _fail(c_91);
                    else
                      b_91 = c_91;
                  }
                }
              }
              t = k_20;
              {
                ATerm e_91 = NULL;
                t = not_null(y_90);
                {
                  t = foldr_3(t, o_86, p_86, q_86);
                  {
                    e_91 = t;
                    if(((d_91 != NULL) && (d_91 != e_91)))
                      _fail(e_91);
                    else
                      d_91 = e_91;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_91), not_null(d_91));
                  t = p_86(t);
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
    ATerm l_91 = NULL,m_91 = NULL,n_91 = NULL,o_91 = NULL;
    l_91 = t;
    k_91 :
    if(match_cons(l_91, sym_SDef_3))
      {
        m_91 = ATgetArgument(l_91, 0);
        n_91 = ATgetArgument(l_91, 1);
        o_91 = ATgetArgument(l_91, 2);
        {
          ATerm r_91 = NULL;
          ATerm s_91 = NULL;
          t = not_null(n_91);
          {
            t = length_0(t);
            {
              s_91 = t;
              if(((r_91 != NULL) && (r_91 != s_91)))
                _fail(s_91);
              else
                r_91 = s_91;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_91), not_null(r_91)));
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
  ATerm x_91 = NULL,z_91 = NULL;
  ATerm l_20;
  l_20 = t;
  {
    ATerm y_91 = NULL;
    t = definition_names_0(t);
    {
      y_91 = t;
      if(((x_91 != NULL) && (x_91 != y_91)))
        _fail(y_91);
      else
        x_91 = y_91;
    }
  }
  t = l_20;
  {
    ATerm a_92 = NULL;
    t = sort_defs_0(t);
    {
      a_92 = t;
      if(((z_91 != NULL) && (z_91 != a_92)))
        _fail(a_92);
      else
        z_91 = a_92;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_91), not_null(z_91), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm i_92 = NULL,o_92 = NULL;
  i_92 = t;
  h_92 :
  if(match_cons(i_92, sym_Strategies_1))
    {
      o_92 = ATgetArgument(i_92, 0);
      {
        ATerm r_92 = NULL,t_92 = NULL;
        ATerm s_92 = NULL;
        t = SSLgetAnnotations(not_null(i_92));
        {
          s_92 = t;
          if(((r_92 != NULL) && (r_92 != s_92)))
            _fail(s_92);
          else
            r_92 = s_92;
        }
        {
          t = not_null(o_92);
          {
            ATerm v_92 = NULL;
            t = n_75(t);
            {
              t_92 = t;
              {
                ATerm w_92 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(t_92)), not_null(r_92));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  g_93 :
  if(((ATgetType(h_93) == AT_LIST) && ((ATermList) h_93 != ATempty)))
    {
      i_93 = ATgetFirst((ATermList) h_93);
      j_93 = (ATerm) ATgetNext((ATermList) h_93);
      {
        ATerm n_93 = NULL,p_93 = NULL;
        ATerm o_93 = NULL;
        t = SSLgetAnnotations(not_null(h_93));
        {
          o_93 = t;
          if(((n_93 != NULL) && (n_93 != o_93)))
            _fail(o_93);
          else
            n_93 = o_93;
        }
        {
          t = not_null(i_93);
          {
            ATerm r_93 = NULL;
            t = w_77(t);
            {
              p_93 = t;
              {
                t = not_null(j_93);
                {
                  ATerm t_93 = NULL;
                  t = x_77(t);
                  {
                    r_93 = t;
                    {
                      ATerm u_93 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(r_93)), not_null(p_93)), not_null(n_93));
                      {
                        u_93 = t;
                        if(((t_93 != NULL) && (t_93 != u_93)))
                          _fail(u_93);
                        else
                          t_93 = u_93;
                      }
                      t = not_null(t_93);
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
ATerm Specification_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm f_94 = NULL,g_94 = NULL;
  f_94 = t;
  e_94 :
  if(match_cons(f_94, sym_Specification_1))
    {
      g_94 = ATgetArgument(f_94, 0);
      {
        ATerm j_94 = NULL,l_94 = NULL;
        ATerm k_94 = NULL;
        t = SSLgetAnnotations(not_null(f_94));
        {
          k_94 = t;
          if(((j_94 != NULL) && (j_94 != k_94)))
            _fail(k_94);
          else
            j_94 = k_94;
        }
        {
          t = not_null(g_94);
          {
            ATerm n_94 = NULL;
            t = p_75(t);
            {
              l_94 = t;
              {
                ATerm o_94 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(l_94)), not_null(j_94));
                {
                  o_94 = t;
                  if(((n_94 != NULL) && (n_94 != o_94)))
                    _fail(o_94);
                  else
                    n_94 = o_94;
                }
                t = not_null(n_94);
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
ATerm _2 (ATerm t, ATerm r_66 (ATerm), ATerm s_66 (ATerm))
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  i_95 = t;
  g_95 :
  if(match_cons(i_95, sym__2))
    {
      j_95 = ATgetArgument(i_95, 0);
      k_95 = ATgetArgument(i_95, 1);
      {
        ATerm o_95 = NULL,q_95 = NULL;
        ATerm p_95 = NULL;
        t = SSLgetAnnotations(not_null(i_95));
        {
          p_95 = t;
          if(((o_95 != NULL) && (o_95 != p_95)))
            _fail(p_95);
          else
            o_95 = p_95;
        }
        {
          t = not_null(j_95);
          {
            ATerm s_95 = NULL;
            t = r_66(t);
            {
              q_95 = t;
              {
                t = not_null(k_95);
                {
                  ATerm u_95 = NULL;
                  t = s_66(t);
                  {
                    s_95 = t;
                    {
                      ATerm v_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(q_95), not_null(s_95)), not_null(o_95));
                      {
                        v_95 = t;
                        if(((u_95 != NULL) && (u_95 != v_95)))
                          _fail(v_95);
                        else
                          u_95 = v_95;
                      }
                      t = not_null(u_95);
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
  ATerm d_96 = NULL;
  ATerm m_20;
  m_20 = t;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm e_96 = NULL,f_96 = NULL;
      e_96 = t;
      c_96 :
      if(match_cons(e_96, sym_Program_1))
        {
          f_96 = ATgetArgument(e_96, 0);
          if(((d_96 != NULL) && (d_96 != f_96)))
            _fail(f_96);
          else
            d_96 = f_96;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, j_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_20), not_null(d_96)), term_n_20));
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
  ATerm j_96 = NULL,m_96 = NULL,n_96 = NULL;
  j_96 = t;
  i_96 :
  if(match_cons(j_96, sym__2))
    {
      m_96 = ATgetArgument(j_96, 0);
      n_96 = ATgetArgument(j_96, 1);
      {
        ATerm t_20;
        t_20 = t;
        t = SSL_printnl(not_null(m_96), not_null(n_96));
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
  ATerm t_96 = NULL,u_96 = NULL,v_96 = NULL;
  t_96 = t;
  s_96 :
  if(match_cons(t_96, sym__2))
    {
      u_96 = ATgetArgument(t_96, 0);
      v_96 = ATgetArgument(t_96, 1);
      {
        t = not_null(u_96);
        {
          ATerm k_3 (ATerm t)
          {
            t = not_null(v_96);
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
ATerm debug_1 (ATerm t, ATerm o_84 (ATerm))
{
  ATerm u_20;
  u_20 = t;
  {
    ATerm e_97 = NULL,g_97 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm f_97 = NULL;
      t = o_84(t);
      {
        f_97 = t;
        if(((e_97 != NULL) && (e_97 != f_97)))
          _fail(f_97);
        else
          e_97 = f_97;
      }
    }
    t = y_20;
    {
      ATerm h_97 = NULL;
      h_97 = t;
      if(((g_97 != NULL) && (g_97 != h_97)))
        _fail(h_97);
      else
        g_97 = h_97;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_97)), not_null(e_97)));
        t = printnl_0(t);
      }
    }
  }
  t = u_20;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_97 = NULL;
  l_97 = t;
  t = SSL_is_string(not_null(l_97));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_21 = t;
  int d_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(d_21);
    }
  else
    {
      t = a_21;
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
              ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
              v_97 = t;
              u_97 :
              if(match_cons(v_97, sym_Path_1))
                {
                  w_97 = ATgetArgument(v_97, 0);
                  t = not_null(w_97);
                }
              else
                {
                  if(match_cons(v_97, sym_Var_1))
                    {
                      w_97 = ATgetArgument(v_97, 0);
                      {
                        t = not_null(w_97);
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
                      if(match_cons(v_97, sym_Prefix_2))
                        {
                          w_97 = ATgetArgument(v_97, 0);
                          x_97 = ATgetArgument(v_97, 1);
                          {
                            ATerm c_98 = NULL,e_98 = NULL;
                            ATerm j_21;
                            j_21 = t;
                            {
                              ATerm d_98 = NULL;
                              t = not_null(w_97);
                              {
                                t = eval_config_0(t);
                                {
                                  d_98 = t;
                                  if(((c_98 != NULL) && (c_98 != d_98)))
                                    _fail(d_98);
                                  else
                                    c_98 = d_98;
                                }
                              }
                            }
                            t = j_21;
                            {
                              ATerm f_98 = NULL;
                              t = not_null(x_97);
                              {
                                t = eval_config_0(t);
                                {
                                  f_98 = t;
                                  if(((e_98 != NULL) && (e_98 != f_98)))
                                    _fail(f_98);
                                  else
                                    e_98 = f_98;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_98), not_null(e_98));
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
  ATerm n_98 = NULL;
  n_98 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_21, not_null(n_98));
    {
      t = table_get_0(t);
      {
        ATerm n_3 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm m_21;
            m_21 = t;
            {
              ATerm p_98 = NULL;
              ATerm q_98 = NULL;
              q_98 = t;
              if(((p_98 != NULL) && (p_98 != q_98)))
                _fail(q_98);
              else
                p_98 = q_98;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(n_98), not_null(p_98));
                t = table_put_0(t);
              }
            }
            t = m_21;
          }
          return(t);
        }
        t = try_1(t, n_3);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_81 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm n_21;
    n_21 = t;
    {
      ATerm u_98 = NULL;
      ATerm v_98 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          v_98 = t;
          if(((u_98 != NULL) && (u_98 != v_98)))
            _fail(v_98);
          else
            u_98 = v_98;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_98), term_q_21);
        t = geq_0(t);
      }
    }
    t = n_21;
    t = y_81(t);
    return(t);
  }
  t = try_1(t, o_3);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, term_s_21));
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
  ATerm y_98 = NULL;
  y_98 = t;
  t = SSL_TicksToSeconds(not_null(y_98));
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
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_99), not_null(f_99));
            LocalPopChoice(c_22);
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
ATerm foldr_2 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm))
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_86(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm o_99 = NULL,p_99 = NULL,q_99 = NULL;
        o_99 = t;
        n_99 :
        if(((ATgetType(o_99) == AT_LIST) && ((ATermList) o_99 != ATempty)))
          {
            p_99 = ATgetFirst((ATermList) o_99);
            q_99 = (ATerm) ATgetNext((ATermList) o_99);
            {
              ATerm t_99 = NULL;
              ATerm u_99 = NULL;
              t = not_null(q_99);
              {
                t = foldr_2(t, m_86, n_86);
                {
                  u_99 = t;
                  if(((t_99 != NULL) && (t_99 != u_99)))
                    _fail(u_99);
                  else
                    t_99 = u_99;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(p_99), not_null(t_99));
                t = n_86(t);
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
ATerm crush_2 (ATerm t, ATerm u_87 (ATerm), ATerm v_87 (ATerm))
{
  ATerm d_100 = NULL;
  ATerm f_100 = NULL;
  d_100 = t;
  {
    ATerm g_100 = NULL;
    ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL;
    t = not_null(d_100);
    {
      g_100 = t;
      {
        t = SSL_explode_term(not_null(g_100));
        {
          i_100 = t;
          c_100 :
          if(match_cons(i_100, sym__2))
            {
              j_100 = ATgetArgument(i_100, 0);
              k_100 = ATgetArgument(i_100, 1);
              if(((f_100 != NULL) && (f_100 != k_100)))
                _fail(k_100);
              else
                f_100 = k_100;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_100);
      t = foldr_2(t, u_87, v_87);
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
  ATerm q_100 = NULL,r_100 = NULL,s_100 = NULL;
  q_100 = t;
  p_100 :
  if(match_cons(q_100, sym__2))
    {
      r_100 = ATgetArgument(q_100, 0);
      s_100 = ATgetArgument(q_100, 1);
      {
        ATerm f_22;
        f_22 = t;
        {
          ATerm n_22 = t;
          int o_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_100), not_null(s_100));
              LocalPopChoice(o_22);
            }
          else
            {
              t = n_22;
              t = SSL_gtr(not_null(r_100), not_null(s_100));
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
  ATerm d_101 = NULL;
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_101 = NULL,f_101 = NULL,g_101 = NULL;
      e_101 = t;
      c_101 :
      if(match_cons(e_101, sym__2))
        {
          f_101 = ATgetArgument(e_101, 0);
          g_101 = ATgetArgument(e_101, 1);
          {
            if(((d_101 != NULL) && (d_101 != f_101)))
              _fail(f_101);
            else
              d_101 = f_101;
            if(((d_101 != NULL) && (d_101 != g_101)))
              _fail(g_101);
            else
              d_101 = g_101;
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
      t = u_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_81 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm a_23;
    a_23 = t;
    {
      ATerm j_101 = NULL;
      ATerm k_101 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          k_101 = t;
          if(((j_101 != NULL) && (j_101 != k_101)))
            _fail(k_101);
          else
            j_101 = k_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_101), term_v_6);
        t = geq_0(t);
      }
    }
    t = a_23;
    t = x_81(t);
    return(t);
  }
  t = try_1(t, q_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm o_101 = NULL,q_101 = NULL;
    ATerm f_23;
    f_23 = t;
    {
      ATerm p_101 = NULL;
      t = run_time_0(t);
      {
        p_101 = t;
        if(((o_101 != NULL) && (o_101 != p_101)))
          _fail(p_101);
        else
          o_101 = p_101;
      }
    }
    t = f_23;
    {
      ATerm r_101 = NULL;
      t = term_g_23;
      {
        t = get_config_0(t);
        {
          r_101 = t;
          if(((q_101 != NULL) && (q_101 != r_101)))
            _fail(r_101);
          else
            q_101 = r_101;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_23), not_null(o_101)), term_h_23), not_null(q_101)));
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
  ATerm z_101 = NULL,a_102 = NULL,b_102 = NULL;
  z_101 = t;
  y_101 :
  if(match_cons(z_101, sym__2))
    {
      a_102 = ATgetArgument(z_101, 0);
      b_102 = ATgetArgument(z_101, 1);
      t = SSL_WriteToTextFile(not_null(a_102), not_null(b_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm h_102 = NULL,i_102 = NULL,j_102 = NULL;
  h_102 = t;
  g_102 :
  if(match_cons(h_102, sym__2))
    {
      i_102 = ATgetArgument(h_102, 0);
      j_102 = ATgetArgument(h_102, 1);
      t = SSL_WriteToBinaryFile(not_null(i_102), not_null(j_102));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm t_102 = NULL;
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
            ATerm u_102 = NULL,v_102 = NULL;
            u_102 = t;
            o_102 :
            if(match_cons(u_102, sym_Output_1))
              {
                v_102 = ATgetArgument(u_102, 0);
                if(((t_102 != NULL) && (t_102 != v_102)))
                  _fail(v_102);
                else
                  t_102 = v_102;
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
            ATerm w_102 = NULL;
            t = term_m_23;
            {
              w_102 = t;
              if(((t_102 != NULL) && (t_102 != w_102)))
                _fail(w_102);
              else
                t_102 = w_102;
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
        t = not_null(t_102);
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
              ATerm x_102 = NULL;
              x_102 = t;
              s_102 :
              if(!(match_cons(x_102, sym_Binary_0)))
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
ATerm apply_strategy_1 (ATerm t, ATerm y_83 (ATerm))
{
  ATerm h_103 = NULL,j_103 = NULL,k_103 = NULL,l_103 = NULL;
  ATerm u_23;
  u_23 = t;
  t = dtime_0(t);
  t = u_23;
  {
    t = y_83(t);
    {
      ATerm v_23;
      v_23 = t;
      {
        ATerm i_103 = NULL;
        t = dtime_0(t);
        {
          i_103 = t;
          if(((h_103 != NULL) && (h_103 != i_103)))
            _fail(i_103);
          else
            h_103 = i_103;
        }
      }
      t = v_23;
      {
        j_103 = t;
        g_103 :
        if(match_cons(j_103, sym__2))
          {
            k_103 = ATgetArgument(j_103, 0);
            l_103 = ATgetArgument(j_103, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_103)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_103))), not_null(l_103));
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
  ATerm r_103 = NULL;
  r_103 = t;
  t = SSL_ReadFromFile(not_null(r_103));
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_96 (ATerm), ATerm l_96 (ATerm))
{
  ATerm w_103 = NULL,y_103 = NULL;
  ATerm w_23;
  w_23 = t;
  {
    ATerm x_103 = NULL;
    t = k_96(t);
    {
      x_103 = t;
      if(((w_103 != NULL) && (w_103 != x_103)))
        _fail(x_103);
      else
        w_103 = x_103;
    }
  }
  t = w_23;
  {
    ATerm z_103 = NULL;
    t = l_96(t);
    {
      z_103 = t;
      if(((y_103 != NULL) && (y_103 != z_103)))
        _fail(z_103);
      else
        y_103 = z_103;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_103), not_null(y_103));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_104 = NULL;
  ATerm x_23;
  x_23 = t;
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_3 (ATerm t)
        {
          ATerm g_104 = NULL,i_104 = NULL;
          g_104 = t;
          d_104 :
          if(match_cons(g_104, sym_Input_1))
            {
              i_104 = ATgetArgument(g_104, 0);
              if(((f_104 != NULL) && (f_104 != i_104)))
                _fail(i_104);
              else
                f_104 = i_104;
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
        t = f_24;
        {
          ATerm j_104 = NULL;
          t = term_h_24;
          {
            j_104 = t;
            if(((f_104 != NULL) && (f_104 != j_104)))
              _fail(j_104);
            else
              f_104 = j_104;
          }
        }
      }
  }
  t = x_23;
  {
    ATerm z_3 (ATerm t)
    {
      t = not_null(f_104);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_104 = NULL;
  q_104 = t;
  p_104 :
  if(match_cons(q_104, sym_Version_0))
    {
      ATerm s_104 = NULL,w_104 = NULL;
      ATerm k_24;
      k_24 = t;
      {
        ATerm t_104 = NULL;
        t = SSLgetAnnotations(not_null(q_104));
        {
          t_104 = t;
          if(((s_104 != NULL) && (s_104 != t_104)))
            _fail(t_104);
          else
            s_104 = t_104;
        }
      }
      t = k_24;
      {
        ATerm x_104 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_104));
        {
          x_104 = t;
          if(((w_104 != NULL) && (w_104 != x_104)))
            _fail(x_104);
          else
            w_104 = x_104;
        }
        t = not_null(w_104);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_83 (ATerm))
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
  t = w_83(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_105 = NULL;
  c_105 = t;
  t = SSL_table_create(not_null(c_105));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  {
    ATerm p_24;
    p_24 = t;
    {
      t = term_q_24;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_24, term_r_24, not_null(g_105));
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
  ATerm k_105 = NULL;
  k_105 = t;
  t = SSL_string_to_int(not_null(k_105));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm s_105 = NULL,t_105 = NULL,u_105 = NULL,v_105 = NULL,w_105 = NULL;
  s_105 = t;
  q_105 :
  if(match_string(s_105, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(s_105) == AT_LIST) && ((ATermList) s_105 != ATempty)))
        {
          t_105 = ATgetFirst((ATermList) s_105);
          u_105 = (ATerm) ATgetNext((ATermList) s_105);
          r_105 :
          if(((ATgetType(u_105) == AT_LIST) && ((ATermList) u_105 != ATempty)))
            {
              v_105 = ATgetFirst((ATermList) u_105);
              w_105 = (ATerm) ATgetNext((ATermList) u_105);
              {
                ATerm a_106 = NULL;
                ATerm s_24;
                s_24 = t;
                {
                  t = not_null(t_105);
                  t = l_0(t);
                }
                t = s_24;
                {
                  ATerm b_106 = NULL;
                  t = not_null(v_105);
                  {
                    t = m_0(t);
                    {
                      b_106 = t;
                      if(((a_106 != NULL) && (a_106 != b_106)))
                        _fail(b_106);
                      else
                        a_106 = b_106;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_105)), not_null(a_106));
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
        ATerm s_106 = NULL;
        s_106 = t;
        f_106 :
        if(!(match_string(s_106, "-i")))
          {
            if(!(match_string(s_106, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm v_106 = NULL;
        ATerm w_24;
        w_24 = t;
        {
          ATerm t_106 = NULL;
          ATerm u_106 = NULL;
          u_106 = t;
          if(((t_106 != NULL) && (t_106 != u_106)))
            _fail(u_106);
          else
            t_106 = u_106;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_x_24, not_null(t_106));
            t = set_config_0(t);
          }
        }
        t = w_24;
        {
          ATerm w_106 = NULL;
          w_106 = t;
          if(((v_106 != NULL) && (v_106 != w_106)))
            _fail(w_106);
          else
            v_106 = w_106;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(v_106));
        }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_y_24;
        return(t);
      }
      t = ArgOption_3(t, b_4, c_4, g_4);
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm z_24 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 (ATerm t)
            {
              ATerm x_106 = NULL;
              x_106 = t;
              i_106 :
              if(!(match_string(x_106, "-o")))
                {
                  if(!(match_string(x_106, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              ATerm a_107 = NULL;
              ATerm g_25;
              g_25 = t;
              {
                ATerm y_106 = NULL;
                ATerm z_106 = NULL;
                z_106 = t;
                if(((y_106 != NULL) && (y_106 != z_106)))
                  _fail(z_106);
                else
                  y_106 = z_106;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_h_25, not_null(y_106));
                  t = set_config_0(t);
                }
              }
              t = g_25;
              {
                ATerm b_107 = NULL;
                b_107 = t;
                if(((a_107 != NULL) && (a_107 != b_107)))
                  _fail(b_107);
                else
                  a_107 = b_107;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_107));
              }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              t = term_q_25;
              return(t);
            }
            t = ArgOption_3(t, h_4, i_4, j_4);
            LocalPopChoice(b_25);
          }
        else
          {
            t = z_24;
            {
              ATerm a_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm c_107 = NULL;
                    c_107 = t;
                    l_106 :
                    if(!(match_string(c_107, "-S")))
                      {
                        if(!(match_string(c_107, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_j_26;
                    t = set_config_0(t);
                    t = term_k_26;
                    return(t);
                  }
                  ATerm m_4 (ATerm t)
                  {
                    t = term_l_26;
                    return(t);
                  }
                  t = Option_3(t, k_4, l_4, m_4);
                  LocalPopChoice(i_26);
                }
              else
                {
                  t = a_26;
                  {
                    ATerm m_26 = t;
                    int q_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_4 (ATerm t)
                        {
                          ATerm d_107 = NULL;
                          d_107 = t;
                          m_106 :
                          if(!(match_string(d_107, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          ATerm g_107 = NULL;
                          ATerm s_26;
                          s_26 = t;
                          {
                            ATerm e_107 = NULL;
                            ATerm f_107 = NULL;
                            t = string_to_int_0(t);
                            {
                              f_107 = t;
                              if(((e_107 != NULL) && (e_107 != f_107)))
                                _fail(f_107);
                              else
                                e_107 = f_107;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(e_107));
                              t = set_config_0(t);
                            }
                          }
                          t = s_26;
                          {
                            ATerm h_107 = NULL;
                            h_107 = t;
                            if(((g_107 != NULL) && (g_107 != h_107)))
                              _fail(h_107);
                            else
                              g_107 = h_107;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(g_107));
                          }
                          return(t);
                        }
                        ATerm p_4 (ATerm t)
                        {
                          t = term_t_26;
                          return(t);
                        }
                        t = ArgOption_3(t, n_4, o_4, p_4);
                        LocalPopChoice(q_26);
                      }
                    else
                      {
                        t = m_26;
                        {
                          ATerm u_26 = t;
                          int v_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_4 (ATerm t)
                              {
                                ATerm i_107 = NULL;
                                i_107 = t;
                                p_106 :
                                if(!(match_string(i_107, "-v")))
                                  {
                                    if(!(match_string(i_107, "--version")))
                                      {
                                        _fail(t);
                                      }
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
                                t = term_z_26;
                                return(t);
                              }
                              t = Option_3(t, q_4, r_4, s_4);
                              LocalPopChoice(v_26);
                            }
                          else
                            {
                              t = u_26;
                              {
                                ATerm a_27 = t;
                                int b_27 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_4 (ATerm t)
                                    {
                                      ATerm j_107 = NULL;
                                      j_107 = t;
                                      q_106 :
                                      if(!(match_string(j_107, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_4 (ATerm t)
                                    {
                                      t = term_d_27;
                                      t = set_config_0(t);
                                      t = term_e_27;
                                      return(t);
                                    }
                                    ATerm v_4 (ATerm t)
                                    {
                                      t = term_f_27;
                                      return(t);
                                    }
                                    t = Option_3(t, t_4, u_4, v_4);
                                    LocalPopChoice(b_27);
                                  }
                                else
                                  {
                                    t = a_27;
                                    {
                                      ATerm w_4 (ATerm t)
                                      {
                                        ATerm k_107 = NULL;
                                        k_107 = t;
                                        r_106 :
                                        if(!(match_string(k_107, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm x_4 (ATerm t)
                                      {
                                        t = term_h_27;
                                        t = set_config_0(t);
                                        t = term_i_27;
                                        return(t);
                                      }
                                      ATerm y_4 (ATerm t)
                                      {
                                        t = term_j_27;
                                        return(t);
                                      }
                                      t = Option_3(t, w_4, x_4, y_4);
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
  ATerm s_107 = NULL;
  s_107 = t;
  t = SSL_table_destroy(not_null(s_107));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm w_107 = NULL;
  w_107 = t;
  t = SSL_exit(not_null(w_107));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_108 = NULL;
  a_108 = t;
  t = SSL_implode_string(not_null(a_108));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_103 (ATerm))
{
  ATerm d_108 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, d_108);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        {
          t = Nil_0(t);
          t = e_103(t);
        }
      }
    return(t);
  }
  t = d_108(t);
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
        ATerm g_108 = NULL,h_108 = NULL,i_108 = NULL;
        g_108 = t;
        f_108 :
        if(((ATgetType(g_108) == AT_LIST) && ((ATermList) g_108 != ATempty)))
          {
            h_108 = ATgetFirst((ATermList) g_108);
            i_108 = (ATerm) ATgetNext((ATermList) g_108);
            {
              t = not_null(h_108);
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(i_108);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_4);
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
  ATerm o_108 = NULL;
  o_108 = t;
  t = SSL_explode_string(not_null(o_108));
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
ATerm long_description_1 (ATerm t, ATerm x_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_102 (ATerm))
{
  ATerm r_108 (ATerm t)
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
        t = Cons_2(t, q_102, r_108);
      }
    return(t);
  }
  t = r_108(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_108 = NULL,z_108 = NULL,a_109 = NULL;
  a_109 = t;
  x_108 :
  if(((ATgetType(a_109) == AT_LIST) && ((ATermList) a_109 != ATempty)))
    {
      y_108 = ATgetFirst((ATermList) a_109);
      z_108 = (ATerm) ATgetNext((ATermList) a_109);
      {
        ATerm d_109 = NULL;
        t = not_null(z_108);
        {
          ATerm q_27;
          q_27 = t;
          {
            ATerm e_109 = NULL,g_109 = NULL,i_109 = NULL;
            ATerm r_27;
            r_27 = t;
            {
              ATerm f_109 = NULL;
              t = k_0(t);
              {
                f_109 = t;
                if(((e_109 != NULL) && (e_109 != f_109)))
                  _fail(f_109);
                else
                  e_109 = f_109;
              }
            }
            t = r_27;
            {
              ATerm h_109 = NULL;
              t = not_null(y_108);
              {
                t = j_0(t);
                {
                  h_109 = t;
                  if(((g_109 != NULL) && (g_109 != h_109)))
                    _fail(h_109);
                  else
                    g_109 = h_109;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_109)), not_null(g_109));
                {
                  i_109 = t;
                  if(((d_109 != NULL) && (d_109 != i_109)))
                    _fail(i_109);
                  else
                    d_109 = i_109;
                }
              }
            }
          }
          t = q_27;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(d_109);
              return(t);
            }
            t = reverse_acc_2(t, j_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) a_109 == ATempty))
        {
          {
            t = term_r_15;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_80 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_72 (ATerm))
{
  ATerm t_109 = NULL,u_109 = NULL;
  t_109 = t;
  s_109 :
  if(match_cons(t_109, sym_Program_1))
    {
      u_109 = ATgetArgument(t_109, 0);
      {
        ATerm x_109 = NULL,z_109 = NULL;
        ATerm y_109 = NULL;
        t = SSLgetAnnotations(not_null(t_109));
        {
          y_109 = t;
          if(((x_109 != NULL) && (x_109 != y_109)))
            _fail(y_109);
          else
            x_109 = y_109;
        }
        {
          t = not_null(u_109);
          {
            ATerm b_110 = NULL;
            t = l_72(t);
            {
              z_109 = t;
              {
                ATerm c_110 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_109)), not_null(x_109));
                {
                  c_110 = t;
                  if(((b_110 != NULL) && (b_110 != c_110)))
                    _fail(c_110);
                  else
                    b_110 = c_110;
                }
                t = not_null(b_110);
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
  ATerm l_110 = NULL;
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm m_110 = NULL;
      m_110 = t;
      if(((l_110 != NULL) && (l_110 != m_110)))
        _fail(m_110);
      else
        l_110 = m_110;
      return(t);
    }
    t = Program_1(t, d_5);
    return(t);
  }
  t = option_defined_1(t, c_5);
  {
    ATerm e_5 (ATerm t)
    {
      ATerm n_110 = NULL;
      ATerm o_110 = NULL;
      t = term_r_15;
      {
        ATerm f_5 (ATerm t)
        {
          t = not_null(l_110);
          return(t);
        }
        t = short_description_1(t, f_5);
        {
          t = concat_strings_0(t);
          {
            o_110 = t;
            if(((n_110 != NULL) && (n_110 != o_110)))
              _fail(o_110);
            else
              n_110 = o_110;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(n_110)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_5);
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
                ATerm g_5 (ATerm t)
                {
                  ATerm p_110 = NULL;
                  p_110 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_110)), term_w_27));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm r_110 = NULL;
                    ATerm s_110 = NULL;
                    t = term_r_15;
                    {
                      ATerm j_5 (ATerm t)
                      {
                        t = not_null(l_110);
                        return(t);
                      }
                      t = long_description_1(t, j_5);
                      {
                        t = concat_strings_0(t);
                        {
                          s_110 = t;
                          if(((r_110 != NULL) && (r_110 != s_110)))
                            _fail(s_110);
                          else
                            r_110 = s_110;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_110)), term_x_27));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_5);
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
ATerm Undefined_1 (ATerm t, ATerm m_72 (ATerm))
{
  ATerm c_111 = NULL,d_111 = NULL;
  c_111 = t;
  b_111 :
  if(match_cons(c_111, sym_Undefined_1))
    {
      d_111 = ATgetArgument(c_111, 0);
      {
        ATerm h_111 = NULL,j_111 = NULL;
        ATerm i_111 = NULL;
        t = SSLgetAnnotations(not_null(c_111));
        {
          i_111 = t;
          if(((h_111 != NULL) && (h_111 != i_111)))
            _fail(i_111);
          else
            h_111 = i_111;
        }
        {
          t = not_null(d_111);
          {
            ATerm l_111 = NULL;
            t = m_72(t);
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
ATerm fetch_1 (ATerm t, ATerm y_102 (ATerm))
{
  ATerm r_111 (ATerm t)
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_102, _id);
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
ATerm option_defined_1 (ATerm t, ATerm v_81 (ATerm))
{
  t = fetch_1(t, v_81);
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
ATerm try_1 (ATerm t, ATerm c_97 (ATerm))
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_97(t);
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
ATerm register_usage_1 (ATerm t, ATerm b_81 (ATerm))
{
  ATerm c_113 = NULL;
  ATerm d_113 = NULL;
  t = term_r_15;
  {
    t = b_81(t);
    {
      d_113 = t;
      if(((c_113 != NULL) && (c_113 != d_113)))
        _fail(d_113);
      else
        c_113 = d_113;
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
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_string(j_113, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(j_113) == AT_LIST) && ((ATermList) j_113 != ATempty)))
        {
          k_113 = ATgetFirst((ATermList) j_113);
          l_113 = (ATerm) ATgetNext((ATermList) j_113);
          {
            ATerm o_113 = NULL;
            ATerm g_28;
            g_28 = t;
            {
              t = not_null(k_113);
              t = a_0(t);
            }
            t = g_28;
            {
              ATerm p_113 = NULL;
              t = term_r_15;
              {
                t = b_0(t);
                {
                  p_113 = t;
                  if(((o_113 != NULL) && (o_113 != p_113)))
                    _fail(p_113);
                  else
                    o_113 = p_113;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_113)), not_null(o_113));
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
    ATerm u_113 = NULL;
    u_113 = t;
    t_113 :
    if(!(match_string(u_113, "--help")))
      {
        if(!(match_string(u_113, "-h")))
          {
            if(!(match_string(u_113, "-?")))
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
  ATerm x_113 = NULL,y_113 = NULL,z_113 = NULL;
  x_113 = t;
  w_113 :
  if(((ATgetType(x_113) == AT_LIST) && ((ATermList) x_113 != ATempty)))
    {
      y_113 = ATgetFirst((ATermList) x_113);
      z_113 = (ATerm) ATgetNext((ATermList) x_113);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_113)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_113)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm f_114 = NULL,g_114 = NULL,h_114 = NULL;
  f_114 = t;
  e_114 :
  if(match_cons(f_114, sym__2))
    {
      g_114 = ATgetArgument(f_114, 0);
      h_114 = ATgetArgument(f_114, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_21, not_null(g_114), not_null(h_114));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm j_28;
  j_28 = t;
  {
    ATerm n_5 (ATerm t)
    {
      t = term_k_28;
      t = z_80(t);
      return(t);
    }
    t = try_1(t, n_5);
  }
  t = j_28;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_114 = NULL;
      ATerm l_28;
      l_28 = t;
      {
        ATerm n_114 = NULL;
        ATerm o_114 = NULL;
        o_114 = t;
        if(((n_114 != NULL) && (n_114 != o_114)))
          _fail(o_114);
        else
          n_114 = o_114;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_23, not_null(n_114));
          t = set_config_0(t);
        }
      }
      t = l_28;
      {
        ATerm q_114 = NULL;
        q_114 = t;
        if(((p_114 != NULL) && (p_114 != q_114)))
          _fail(q_114);
        else
          p_114 = q_114;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_114));
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
                t = z_80(t);
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
  ATerm w_114 = NULL,x_114 = NULL,y_114 = NULL;
  ATerm q_28;
  q_28 = t;
  {
    ATerm z_114 = NULL,a_115 = NULL,b_115 = NULL,c_115 = NULL;
    z_114 = t;
    v_114 :
    if(match_cons(z_114, sym__3))
      {
        a_115 = ATgetArgument(z_114, 0);
        b_115 = ATgetArgument(z_114, 1);
        c_115 = ATgetArgument(z_114, 2);
        {
          if(((w_114 != NULL) && (w_114 != a_115)))
            _fail(a_115);
          else
            w_114 = a_115;
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
              t = SSL_table_put(not_null(w_114), not_null(x_114), not_null(y_114));
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
ATerm parse_options_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm f_115 = NULL;
  ATerm r_28;
  r_28 = t;
  {
    t = term_t_28;
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
          t = y_80(t);
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
        ATerm x_28 = t;
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
            t = x_28;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm g_115 = NULL;
                  g_115 = t;
                  if(((f_115 != NULL) && (f_115 != g_115)))
                    _fail(g_115);
                  else
                    f_115 = g_115;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_115)), term_b_29));
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
        ATerm f_29;
        f_29 = t;
        {
          t = term_t_27;
          t = table_destroy_0(t);
        }
        t = f_29;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm), ATerm m_83 (ATerm), ATerm n_83 (ATerm))
{
  ATerm u_5 (ATerm t)
  {
    ATerm j_29 = t;
    int k_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_83(t);
        LocalPopChoice(k_29);
      }
    else
      {
        t = j_29;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_5);
  {
    t = store_options_0(t);
    {
      t = n_83(t);
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_83);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm n_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, k_83);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(o_29);
                }
              else
                {
                  t = n_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm), ATerm g_83 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm w_5 (ATerm t)
    {
      ATerm p_29;
      p_29 = t;
      {
        ATerm j_115 = NULL;
        ATerm k_115 = NULL;
        t = term_g_23;
        {
          t = get_config_0(t);
          {
            k_115 = t;
            if(((j_115 != NULL) && (j_115 != k_115)))
              _fail(k_115);
            else
              j_115 = k_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_7, (ATerm) ATinsert(ATempty, not_null(j_115)));
          t = printnl_0(t);
        }
      }
      t = p_29;
      return(t);
    }
    t = if_verbose2_1(t, w_5);
    return(t);
  }
  t = iowrap_4(t, e_83, f_83, g_83, v_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_83 (ATerm), ATerm d_83 (ATerm))
{
  t = iowrap_3(t, c_83, d_83, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    t = _2(t, _id, z_82);
    return(t);
  }
  t = iowrap_2(t, x_5, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        ATerm c_6 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, c_6, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, b_6);
      return(t);
    }
    t = Specification_1(t, a_6);
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
