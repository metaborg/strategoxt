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
ATerm term_q_17;
ATerm term_e_17;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_e_16;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_y_10;
ATerm term_q_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_p_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_z_8;
ATerm term_s_8;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_j_7;
ATerm term_d_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_p_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_w_5;
ATerm term_u_5;
ATerm term_l_5;
void init_constant_terms (void)
{
  ATprotect(&(term_l_5));
  term_l_5 = (ATerm) ATmakeAppl(ATmakeSymbol("RenameVar", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("HoArg", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(95);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(112);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("_", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Undefined_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("f_0", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_t_6);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_6);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(sym__2, term_a_12, term_w_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_w_5);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_u_12, term_w_5);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_h_15, term_i_15);
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, (ATerm) ATempty);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Nil_0 (ATerm);
ATerm RenameVar_0 (ATerm);
ATerm RenameCall_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm m_86 (ATerm));
ATerm assert_1 (ATerm, ATerm a_63 (ATerm));
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm c_63 (ATerm));
ATerm HoArg_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm Cify_1 (ATerm, ATerm o_0 (ATerm));
ATerm escape_1 (ATerm, ATerm l_73 (ATerm, ATerm (ATerm)));
ATerm cify_0 (ATerm);
ATerm NameMod_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm));
ATerm length_0 (ATerm);
ATerm RenameSDef_0 (ATerm);
ATerm rename_sdefs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm f_60 (ATerm));
ATerm Cons_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm Specification_1 (ATerm, ATerm h_60 (ATerm));
ATerm _2 (ATerm, ATerm j_51 (ATerm), ATerm k_51 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm y_65 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_68 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_85 (ATerm), ATerm g_85 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_77 (ATerm), ATerm u_77 (ATerm));
ATerm crush_2 (ATerm, ATerm l_79 (ATerm), ATerm m_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm x_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_68 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_64 (ATerm));
ATerm map_1 (ATerm, ATerm s_81 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm h_82 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_64 (ATerm));
ATerm Program_1 (ATerm, ATerm d_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm b_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_65 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_64 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_64 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_67 (ATerm), ATerm x_67 (ATerm));
ATerm iowrap_1 (ATerm, ATerm t_67 (ATerm));
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
        ATerm k_5;
        k_5 = t;
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
        t = k_5;
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
            t = term_l_5;
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
                    ATerm n_5 = t;
                    int q_5 = stack_ptr;
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
                        LocalPopChoice(q_5);
                      }
                    else
                      {
                        t = n_5;
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
ATerm topdown_1 (ATerm t, ATerm m_86 (ATerm))
{
  t = m_86(t);
  {
    ATerm d_0 (ATerm t)
    {
      t = topdown_1(t, m_86);
      return(t);
    }
    t = _all(t, d_0);
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm a_63 (ATerm))
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
        ATerm r_5;
        r_5 = t;
        {
          ATerm n_4 = NULL;
          ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
          t = a_63(t);
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
                    ATerm s_5 = t;
                    int t_5 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_4), term_u_5);
                        t = table_get_0(t);
                        LocalPopChoice(t_5);
                      }
                    else
                      {
                        t = s_5;
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
                                t = (ATerm) ATmakeAppl(sym__3, not_null(k_4), term_u_5, (ATerm) ATinsert(CheckATermList(not_null(m_4)), (ATerm) ATinsert(CheckATermList(not_null(l_4)), not_null(g_4))));
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
        t = r_5;
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
ATerm rewrite_1 (ATerm t, ATerm c_63 (ATerm))
{
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    t = term_w_5;
    {
      t = c_63(t);
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
    ATerm a_6 = t;
    int c_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_6 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
        {
          ATerm g_0 (ATerm t)
          {
            t = term_h_6;
            return(t);
          }
          t = rewrite_1(t, g_0);
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
        t = term_w_5;
        LocalPopChoice(c_6);
      }
    else
      {
        t = a_6;
        {
          ATerm d_6 = NULL;
          ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
          t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_5));
          {
            ATerm h_0 (ATerm t)
            {
              t = term_h_6;
              return(t);
            }
            t = rewrite_1(t, h_0);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_7)), term_i_6), term_i_6);
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
              t = (ATerm) ATinsert(CheckATermList(not_null(e_7)), term_i_6);
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
                  t = (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(not_null(h_7)), term_i_6), term_j_6), term_i_6);
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
ATerm escape_1 (ATerm t, ATerm l_73 (ATerm, ATerm (ATerm)))
{
  t = explode_string_0(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm k_6 = t;
      int l_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_73(t, p_7);
          LocalPopChoice(l_6);
        }
      else
        {
          t = k_6;
          {
            ATerm n_6 = t;
            int o_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Cons_2(t, _id, p_7);
                LocalPopChoice(o_6);
              }
            else
              {
                t = n_6;
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
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_7)), term_p_6), not_null(t_7));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm v_77 (ATerm), ATerm w_77 (ATerm), ATerm x_77 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_77(t);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
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
              ATerm s_6;
              s_6 = t;
              {
                ATerm i_8 = NULL;
                t = not_null(d_8);
                {
                  t = x_77(t);
                  {
                    i_8 = t;
                    if(((h_8 != NULL) && (h_8 != i_8)))
                      _fail(i_8);
                    else
                      h_8 = i_8;
                  }
                }
              }
              t = s_6;
              {
                ATerm k_8 = NULL;
                t = not_null(e_8);
                {
                  t = foldr_3(t, v_77, w_77, x_77);
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
                  t = w_77(t);
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
    t = term_t_6;
    return(t);
  }
  ATerm q_0 (ATerm t)
  {
    t = term_u_6;
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
                ATerm a_7;
                a_7 = t;
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
                t = a_7;
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
                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_9)), term_d_7), not_null(e_9));
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
                            ATerm g_7;
                            g_7 = t;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(b_9), not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_j_7, not_null(c_9)));
                              {
                                ATerm r_0 (ATerm t)
                                {
                                  t = term_l_5;
                                  return(t);
                                }
                                t = assert_1(t, r_0);
                              }
                            }
                            t = g_7;
                            {
                              ATerm k_7 = t;
                              int l_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = not_null(v_8);
                                  {
                                    t = HoArg_0(t);
                                    {
                                      ATerm m_7;
                                      m_7 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), term_n_7);
                                        {
                                          ATerm s_0 (ATerm t)
                                          {
                                            t = term_h_6;
                                            return(t);
                                          }
                                          t = assert_1(t, s_0);
                                        }
                                      }
                                      t = m_7;
                                    }
                                  }
                                  LocalPopChoice(l_7);
                                }
                              else
                                {
                                  t = k_7;
                                  {
                                    ATerm o_7;
                                    o_7 = t;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(v_8)), (ATerm) ATmakeAppl(sym_Defined_2, term_q_7, not_null(c_9)));
                                      {
                                        ATerm t_0 (ATerm t)
                                        {
                                          t = term_h_6;
                                          return(t);
                                        }
                                        t = assert_1(t, t_0);
                                      }
                                    }
                                    t = o_7;
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
ATerm Strategies_1 (ATerm t, ATerm f_60 (ATerm))
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
            t = f_60(t);
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
ATerm Cons_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
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
            t = o_62(t);
            {
              v_10 = t;
              {
                t = not_null(p_10);
                {
                  ATerm z_10 = NULL;
                  t = p_62(t);
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
ATerm Specification_1 (ATerm t, ATerm h_60 (ATerm))
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
            t = h_60(t);
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
ATerm _2 (ATerm t, ATerm j_51 (ATerm), ATerm k_51 (ATerm))
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
            t = j_51(t);
            {
              n_12 = t;
              {
                t = not_null(h_12);
                {
                  ATerm r_12 = NULL;
                  t = k_51(t);
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
  ATerm v_7;
  v_7 = t;
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
      t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(a_13)), term_x_7));
      {
        t = printnl_0(t);
        {
          t = term_u_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_7;
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
        ATerm z_7;
        z_7 = t;
        t = SSL_printnl(not_null(h_13), not_null(i_13));
        t = z_7;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm r_13 = NULL;
  ATerm t_13 = NULL;
  r_13 = t;
  {
    ATerm u_13 = NULL;
    ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(r_13);
    {
      u_13 = t;
      {
        t = SSL_explode_term(not_null(u_13));
        {
          w_13 = t;
          p_13 :
          if(match_cons(w_13, sym__2))
            {
              x_13 = ATgetArgument(w_13, 0);
              y_13 = ATgetArgument(w_13, 1);
              q_13 :
              if(match_string(x_13, ""))
                {
                  if(((t_13 != NULL) && (t_13 != y_13)))
                    _fail(y_13);
                  else
                    t_13 = y_13;
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
      t = not_null(t_13);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym__2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        t = not_null(f_14);
        {
          ATerm x_0 (ATerm t)
          {
            t = not_null(g_14);
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
ATerm conc_0 (ATerm t)
{
  ATerm a_8 = t;
  int f_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_8);
    }
  else
    {
      t = a_8;
      t = conc_more_lists_0(t);
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
ATerm debug_1 (ATerm t, ATerm i_69 (ATerm))
{
  ATerm g_8;
  g_8 = t;
  {
    ATerm m_14 = NULL,o_14 = NULL;
    ATerm l_8;
    l_8 = t;
    {
      ATerm n_14 = NULL;
      t = i_69(t);
      {
        n_14 = t;
        if(((m_14 != NULL) && (m_14 != n_14)))
          _fail(n_14);
        else
          m_14 = n_14;
      }
    }
    t = l_8;
    {
      ATerm p_14 = NULL;
      p_14 = t;
      if(((o_14 != NULL) && (o_14 != p_14)))
        _fail(p_14);
      else
        o_14 = p_14;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_14)), not_null(m_14)));
        t = printnl_0(t);
      }
    }
  }
  t = g_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_14 = NULL;
  t_14 = t;
  t = SSL_is_string(not_null(t_14));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_8 = t;
  int n_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_8);
    }
  else
    {
      t = m_8;
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, y_0);
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            {
              ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL;
              c_15 = t;
              b_15 :
              if(match_cons(c_15, sym_Path_1))
                {
                  d_15 = ATgetArgument(c_15, 0);
                  t = not_null(d_15);
                }
              else
                {
                  if(match_cons(c_15, sym_Var_1))
                    {
                      d_15 = ATgetArgument(c_15, 0);
                      {
                        t = not_null(d_15);
                        {
                          ATerm q_8 = t;
                          int r_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_8);
                            }
                          else
                            {
                              t = q_8;
                              {
                                ATerm z_0 (ATerm t)
                                {
                                  t = term_s_8;
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
                      if(match_cons(c_15, sym_Prefix_2))
                        {
                          d_15 = ATgetArgument(c_15, 0);
                          e_15 = ATgetArgument(c_15, 1);
                          {
                            ATerm j_15 = NULL,l_15 = NULL;
                            ATerm y_8;
                            y_8 = t;
                            {
                              ATerm k_15 = NULL;
                              t = not_null(d_15);
                              {
                                t = eval_config_0(t);
                                {
                                  k_15 = t;
                                  if(((j_15 != NULL) && (j_15 != k_15)))
                                    _fail(k_15);
                                  else
                                    j_15 = k_15;
                                }
                              }
                            }
                            t = y_8;
                            {
                              ATerm m_15 = NULL;
                              t = not_null(e_15);
                              {
                                t = eval_config_0(t);
                                {
                                  m_15 = t;
                                  if(((l_15 != NULL) && (l_15 != m_15)))
                                    _fail(m_15);
                                  else
                                    l_15 = m_15;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_15), not_null(l_15));
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
  ATerm u_15 = NULL;
  u_15 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(u_15));
    {
      t = table_get_0(t);
      {
        ATerm a_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_9;
            a_9 = t;
            {
              ATerm w_15 = NULL;
              ATerm x_15 = NULL;
              x_15 = t;
              if(((w_15 != NULL) && (w_15 != x_15)))
                _fail(x_15);
              else
                w_15 = x_15;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(u_15), not_null(w_15));
                t = table_put_0(t);
              }
            }
            t = a_9;
          }
          return(t);
        }
        t = try_1(t, a_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm j_9;
    j_9 = t;
    {
      ATerm b_16 = NULL;
      ATerm c_16 = NULL;
      t = term_k_9;
      {
        t = get_config_0(t);
        {
          c_16 = t;
          if(((b_16 != NULL) && (b_16 != c_16)))
            _fail(c_16);
          else
            b_16 = c_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), term_l_9);
        t = geq_0(t);
      }
    }
    t = j_9;
    t = y_65(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      t = SSL_WriteToTextFile(not_null(h_16), not_null(i_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
  o_16 = t;
  n_16 :
  if(match_cons(o_16, sym__2))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      t = SSL_WriteToBinaryFile(not_null(p_16), not_null(q_16));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_16 = NULL;
  ATerm m_9;
  m_9 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm z_16 = NULL,a_17 = NULL;
            z_16 = t;
            v_16 :
            if(match_cons(z_16, sym_Output_1))
              {
                a_17 = ATgetArgument(z_16, 0);
                if(((y_16 != NULL) && (y_16 != a_17)))
                  _fail(a_17);
                else
                  y_16 = a_17;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, d_1);
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm b_17 = NULL;
            t = term_p_9;
            {
              b_17 = t;
              if(((y_16 != NULL) && (y_16 != b_17)))
                _fail(b_17);
              else
                y_16 = b_17;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = m_9;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(y_16);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm q_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm c_17 = NULL;
              c_17 = t;
              x_16 :
              if(!(match_cons(c_17, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(r_9);
        }
      else
        {
          t = q_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm i_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  ATerm v_9;
  v_9 = t;
  t = dtime_0(t);
  t = v_9;
  {
    t = s_68(t);
    {
      ATerm w_9;
      w_9 = t;
      {
        ATerm j_17 = NULL;
        t = dtime_0(t);
        {
          j_17 = t;
          if(((i_17 != NULL) && (i_17 != j_17)))
            _fail(j_17);
          else
            i_17 = j_17;
        }
      }
      t = w_9;
      {
        k_17 = t;
        h_17 :
        if(match_cons(k_17, sym__2))
          {
            l_17 = ATgetArgument(k_17, 0);
            m_17 = ATgetArgument(k_17, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_17)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_17))), not_null(m_17));
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
  ATerm s_17 = NULL;
  s_17 = t;
  t = SSL_ReadFromFile(not_null(s_17));
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_85 (ATerm), ATerm g_85 (ATerm))
{
  ATerm x_17 = NULL,z_17 = NULL;
  ATerm a_10;
  a_10 = t;
  {
    ATerm y_17 = NULL;
    t = f_85(t);
    {
      y_17 = t;
      if(((x_17 != NULL) && (x_17 != y_17)))
        _fail(y_17);
      else
        x_17 = y_17;
    }
  }
  t = a_10;
  {
    ATerm a_18 = NULL;
    t = g_85(t);
    {
      a_18 = t;
      if(((z_17 != NULL) && (z_17 != a_18)))
        _fail(a_18);
      else
        z_17 = a_18;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_17), not_null(z_17));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_18 = NULL;
  ATerm d_10;
  d_10 = t;
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_18 = NULL,i_18 = NULL;
          h_18 = t;
          e_18 :
          if(match_cons(h_18, sym_Input_1))
            {
              i_18 = ATgetArgument(h_18, 0);
              if(((g_18 != NULL) && (g_18 != i_18)))
                _fail(i_18);
              else
                g_18 = i_18;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, i_1);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm j_18 = NULL;
          t = term_g_10;
          {
            j_18 = t;
            if(((g_18 != NULL) && (g_18 != j_18)))
              _fail(j_18);
            else
              g_18 = j_18;
          }
        }
      }
  }
  t = d_10;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(g_18);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_18 = NULL;
  n_18 = t;
  t = SSL_string_to_int(not_null(n_18));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  v_18 = t;
  t_18 :
  if(match_string(v_18, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(v_18) == AT_LIST) && ((ATermList) v_18 != ATempty)))
        {
          w_18 = ATgetFirst((ATermList) v_18);
          x_18 = (ATerm) ATgetNext((ATermList) v_18);
          u_18 :
          if(((ATgetType(x_18) == AT_LIST) && ((ATermList) x_18 != ATempty)))
            {
              y_18 = ATgetFirst((ATermList) x_18);
              z_18 = (ATerm) ATgetNext((ATermList) x_18);
              {
                ATerm d_19 = NULL;
                ATerm h_10;
                h_10 = t;
                {
                  t = not_null(w_18);
                  t = l_0(t);
                }
                t = h_10;
                {
                  ATerm e_19 = NULL;
                  t = not_null(y_18);
                  {
                    t = m_0(t);
                    {
                      e_19 = t;
                      if(((d_19 != NULL) && (d_19 != e_19)))
                        _fail(e_19);
                      else
                        d_19 = e_19;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_18)), not_null(d_19));
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
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        ATerm x_19 = NULL;
        x_19 = t;
        i_19 :
        if(!(match_string(x_19, "-i")))
          {
            if(!(match_string(x_19, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm l_1 (ATerm t)
      {
        ATerm a_20 = NULL;
        ATerm k_10;
        k_10 = t;
        {
          ATerm y_19 = NULL;
          ATerm z_19 = NULL;
          z_19 = t;
          if(((y_19 != NULL) && (y_19 != z_19)))
            _fail(z_19);
          else
            y_19 = z_19;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_l_10, not_null(y_19));
            t = set_config_0(t);
          }
        }
        t = k_10;
        {
          ATerm b_20 = NULL;
          b_20 = t;
          if(((a_20 != NULL) && (a_20 != b_20)))
            _fail(b_20);
          else
            a_20 = b_20;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_20));
        }
        return(t);
      }
      ATerm m_1 (ATerm t)
      {
        t = term_q_10;
        return(t);
      }
      t = ArgOption_3(t, k_1, l_1, m_1);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              ATerm c_20 = NULL;
              c_20 = t;
              l_19 :
              if(!(match_string(c_20, "-o")))
                {
                  if(!(match_string(c_20, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm o_1 (ATerm t)
            {
              ATerm f_20 = NULL;
              ATerm w_10;
              w_10 = t;
              {
                ATerm d_20 = NULL;
                ATerm e_20 = NULL;
                e_20 = t;
                if(((d_20 != NULL) && (d_20 != e_20)))
                  _fail(e_20);
                else
                  d_20 = e_20;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_10, not_null(d_20));
                  t = set_config_0(t);
                }
              }
              t = w_10;
              {
                ATerm g_20 = NULL;
                g_20 = t;
                if(((f_20 != NULL) && (f_20 != g_20)))
                  _fail(g_20);
                else
                  f_20 = g_20;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(f_20));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_b_11;
              return(t);
            }
            t = ArgOption_3(t, n_1, o_1, r_1);
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
                  ATerm s_1 (ATerm t)
                  {
                    ATerm h_20 = NULL;
                    h_20 = t;
                    o_19 :
                    if(!(match_string(h_20, "-S")))
                      {
                        if(!(match_string(h_20, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm t_1 (ATerm t)
                  {
                    t = term_e_11;
                    t = set_config_0(t);
                    t = term_f_11;
                    return(t);
                  }
                  ATerm u_1 (ATerm t)
                  {
                    t = term_g_11;
                    return(t);
                  }
                  t = Option_3(t, s_1, t_1, u_1);
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
                        ATerm v_1 (ATerm t)
                        {
                          ATerm i_20 = NULL;
                          i_20 = t;
                          p_19 :
                          if(!(match_string(i_20, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm w_1 (ATerm t)
                        {
                          ATerm l_20 = NULL;
                          ATerm j_11;
                          j_11 = t;
                          {
                            ATerm j_20 = NULL;
                            ATerm k_20 = NULL;
                            t = string_to_int_0(t);
                            {
                              k_20 = t;
                              if(((j_20 != NULL) && (j_20 != k_20)))
                                _fail(k_20);
                              else
                                j_20 = k_20;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_k_9, not_null(j_20));
                              t = set_config_0(t);
                            }
                          }
                          t = j_11;
                          {
                            ATerm m_20 = NULL;
                            m_20 = t;
                            if(((l_20 != NULL) && (l_20 != m_20)))
                              _fail(m_20);
                            else
                              l_20 = m_20;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_20));
                          }
                          return(t);
                        }
                        ATerm x_1 (ATerm t)
                        {
                          t = term_n_11;
                          return(t);
                        }
                        t = ArgOption_3(t, v_1, w_1, x_1);
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = h_11;
                        {
                          ATerm o_11 = t;
                          int s_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_1 (ATerm t)
                              {
                                ATerm n_20 = NULL;
                                n_20 = t;
                                s_19 :
                                if(!(match_string(n_20, "-k")))
                                  {
                                    if(!(match_string(n_20, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm z_1 (ATerm t)
                              {
                                ATerm v_11;
                                v_11 = t;
                                {
                                  ATerm o_20 = NULL;
                                  ATerm p_20 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    p_20 = t;
                                    if(((o_20 != NULL) && (o_20 != p_20)))
                                      _fail(p_20);
                                    else
                                      o_20 = p_20;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_w_11, not_null(o_20));
                                    t = set_config_0(t);
                                  }
                                }
                                t = v_11;
                                return(t);
                              }
                              ATerm a_2 (ATerm t)
                              {
                                t = term_x_11;
                                return(t);
                              }
                              t = ArgOption_3(t, y_1, z_1, a_2);
                              LocalPopChoice(s_11);
                            }
                          else
                            {
                              t = o_11;
                              {
                                ATerm y_11 = t;
                                int z_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_2 (ATerm t)
                                    {
                                      ATerm q_20 = NULL;
                                      q_20 = t;
                                      u_19 :
                                      if(!(match_string(q_20, "-v")))
                                        {
                                          if(!(match_string(q_20, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm c_2 (ATerm t)
                                    {
                                      t = term_b_12;
                                      t = set_config_0(t);
                                      t = term_c_12;
                                      return(t);
                                    }
                                    ATerm d_2 (ATerm t)
                                    {
                                      t = term_d_12;
                                      return(t);
                                    }
                                    t = Option_3(t, b_2, c_2, d_2);
                                    LocalPopChoice(z_11);
                                  }
                                else
                                  {
                                    t = y_11;
                                    {
                                      ATerm i_12 = t;
                                      int j_12 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_2 (ATerm t)
                                          {
                                            ATerm r_20 = NULL;
                                            r_20 = t;
                                            v_19 :
                                            if(!(match_string(r_20, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm i_2 (ATerm t)
                                          {
                                            t = term_o_12;
                                            t = set_config_0(t);
                                            t = term_q_12;
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = term_t_12;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, i_2, j_2);
                                          LocalPopChoice(j_12);
                                        }
                                      else
                                        {
                                          t = i_12;
                                          {
                                            ATerm k_2 (ATerm t)
                                            {
                                              ATerm s_20 = NULL;
                                              s_20 = t;
                                              w_19 :
                                              if(!(match_string(s_20, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_2 (ATerm t)
                                            {
                                              t = term_v_12;
                                              t = set_config_0(t);
                                              t = term_w_12;
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_x_12;
                                              return(t);
                                            }
                                            t = Option_3(t, k_2, m_2, n_2);
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
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, term_y_12));
  {
    t = printnl_0(t);
    {
      t = term_u_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = SSL_TicksToSeconds(not_null(b_21));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_21), not_null(i_21));
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = SSL_addr(not_null(h_21), not_null(i_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_77 (ATerm), ATerm u_77 (ATerm))
{
  ATerm j_13 = t;
  int k_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_77(t);
      LocalPopChoice(k_13);
    }
  else
    {
      t = j_13;
      {
        ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
        v_21 = t;
        u_21 :
        if(((ATgetType(v_21) == AT_LIST) && ((ATermList) v_21 != ATempty)))
          {
            w_21 = ATgetFirst((ATermList) v_21);
            x_21 = (ATerm) ATgetNext((ATermList) v_21);
            {
              ATerm a_22 = NULL;
              ATerm b_22 = NULL;
              t = not_null(x_21);
              {
                t = foldr_2(t, t_77, u_77);
                {
                  b_22 = t;
                  if(((a_22 != NULL) && (a_22 != b_22)))
                    _fail(b_22);
                  else
                    a_22 = b_22;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_21), not_null(a_22));
                t = u_77(t);
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
ATerm crush_2 (ATerm t, ATerm l_79 (ATerm), ATerm m_79 (ATerm))
{
  ATerm i_22 = NULL;
  ATerm k_22 = NULL;
  i_22 = t;
  {
    ATerm l_22 = NULL;
    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
    t = not_null(i_22);
    {
      l_22 = t;
      {
        t = SSL_explode_term(not_null(l_22));
        {
          n_22 = t;
          h_22 :
          if(match_cons(n_22, sym__2))
            {
              o_22 = ATgetArgument(n_22, 0);
              p_22 = ATgetArgument(n_22, 1);
              if(((k_22 != NULL) && (k_22 != p_22)))
                _fail(p_22);
              else
                k_22 = p_22;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_22);
      t = foldr_2(t, l_79, m_79);
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
    ATerm o_2 (ATerm t)
    {
      t = term_t_6;
      return(t);
    }
    t = crush_2(t, o_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm v_22 = NULL,w_22 = NULL,e_23 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym__2))
    {
      w_22 = ATgetArgument(v_22, 0);
      e_23 = ATgetArgument(v_22, 1);
      {
        ATerm l_13;
        l_13 = t;
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(w_22), not_null(e_23));
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              t = SSL_gtr(not_null(w_22), not_null(e_23));
            }
        }
        t = l_13;
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
  ATerm k_23 = NULL;
  ATerm o_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_23 = NULL,m_23 = NULL,n_23 = NULL;
      l_23 = t;
      j_23 :
      if(match_cons(l_23, sym__2))
        {
          m_23 = ATgetArgument(l_23, 0);
          n_23 = ATgetArgument(l_23, 1);
          {
            if(((k_23 != NULL) && (k_23 != m_23)))
              _fail(m_23);
            else
              k_23 = m_23;
            if(((k_23 != NULL) && (k_23 != n_23)))
              _fail(n_23);
            else
              k_23 = n_23;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_13);
    }
  else
    {
      t = o_13;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm p_2 (ATerm t)
  {
    ATerm v_13;
    v_13 = t;
    {
      ATerm q_23 = NULL;
      ATerm r_23 = NULL;
      t = term_k_9;
      {
        t = get_config_0(t);
        {
          r_23 = t;
          if(((q_23 != NULL) && (q_23 != r_23)))
            _fail(r_23);
          else
            q_23 = r_23;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_23), term_u_6);
        t = geq_0(t);
      }
    }
    t = v_13;
    t = x_65(t);
    return(t);
  }
  t = try_1(t, p_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm y_23 = NULL,a_24 = NULL;
    ATerm z_13;
    z_13 = t;
    {
      ATerm z_23 = NULL;
      t = run_time_0(t);
      {
        z_23 = t;
        if(((y_23 != NULL) && (y_23 != z_23)))
          _fail(z_23);
        else
          y_23 = z_23;
      }
    }
    t = z_13;
    {
      ATerm b_24 = NULL;
      t = term_a_14;
      {
        t = get_config_0(t);
        {
          b_24 = t;
          if(((a_24 != NULL) && (a_24 != b_24)))
            _fail(b_24);
          else
            a_24 = b_24;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_14), not_null(y_23)), term_b_14), not_null(a_24)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_2);
  {
    t = term_t_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_Version_0))
    {
      ATerm m_24 = NULL,o_24 = NULL;
      ATerm h_14;
      h_14 = t;
      {
        ATerm n_24 = NULL;
        t = SSLgetAnnotations(not_null(k_24));
        {
          n_24 = t;
          if(((m_24 != NULL) && (m_24 != n_24)))
            _fail(n_24);
          else
            m_24 = n_24;
        }
      }
      t = h_14;
      {
        ATerm p_24 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_24));
        {
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
        }
        t = not_null(o_24);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm x_2 (ATerm t)
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        {
          ATerm k_14 = t;
          int l_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(l_14);
            }
          else
            {
              t = k_14;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_2);
  t = q_68(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_24 = NULL;
  v_24 = t;
  t = SSL_table_create(not_null(v_24));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_24 = NULL;
  z_24 = t;
  {
    ATerm q_14;
    q_14 = t;
    {
      t = term_r_14;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_14, term_s_14, not_null(z_24));
          t = table_put_0(t);
        }
      }
    }
    t = q_14;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_25 = NULL;
  d_25 = t;
  t = SSL_table_destroy(not_null(d_25));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_25 = NULL;
  h_25 = t;
  t = SSL_exit(not_null(h_25));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm r_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm k_25 (ATerm t)
  {
    ATerm u_14 = t;
    int v_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(v_14);
      }
    else
      {
        t = u_14;
        t = Cons_2(t, s_81, k_25);
      }
    return(t);
  }
  t = k_25(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  t_25 = t;
  q_25 :
  if(((ATgetType(t_25) == AT_LIST) && ((ATermList) t_25 != ATempty)))
    {
      r_25 = ATgetFirst((ATermList) t_25);
      s_25 = (ATerm) ATgetNext((ATermList) t_25);
      {
        ATerm w_25 = NULL;
        t = not_null(s_25);
        {
          ATerm w_14;
          w_14 = t;
          {
            ATerm x_25 = NULL,z_25 = NULL,b_26 = NULL;
            ATerm x_14;
            x_14 = t;
            {
              ATerm y_25 = NULL;
              t = k_0(t);
              {
                y_25 = t;
                if(((x_25 != NULL) && (x_25 != y_25)))
                  _fail(y_25);
                else
                  x_25 = y_25;
              }
            }
            t = x_14;
            {
              ATerm a_26 = NULL;
              t = not_null(r_25);
              {
                t = j_0(t);
                {
                  a_26 = t;
                  if(((z_25 != NULL) && (z_25 != a_26)))
                    _fail(a_26);
                  else
                    z_25 = a_26;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_25)), not_null(z_25));
                {
                  b_26 = t;
                  if(((w_25 != NULL) && (w_25 != b_26)))
                    _fail(b_26);
                  else
                    w_25 = b_26;
                }
              }
            }
          }
          t = w_14;
          {
            ATerm y_2 (ATerm t)
            {
              t = not_null(w_25);
              return(t);
            }
            t = reverse_acc_2(t, j_0, y_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_25 == ATempty))
        {
          {
            t = term_w_5;
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_3);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_26 = NULL;
  p_26 = t;
  t = SSL_implode_string(not_null(p_26));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm h_82 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_26);
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          t = Nil_0(t);
          t = h_82(t);
        }
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = a_15;
      {
        ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
        x_26 = t;
        u_26 :
        if(((ATgetType(x_26) == AT_LIST) && ((ATermList) x_26 != ATempty)))
          {
            y_26 = ATgetFirst((ATermList) x_26);
            z_26 = (ATerm) ATgetNext((ATermList) x_26);
            {
              t = not_null(y_26);
              {
                ATerm e_3 (ATerm t)
                {
                  t = not_null(z_26);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, e_3);
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
  ATerm f_27 = NULL;
  f_27 = t;
  t = SSL_explode_string(not_null(f_27));
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
ATerm short_description_1 (ATerm t, ATerm q_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_57 (ATerm))
{
  ATerm p_27 = NULL,q_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym_Program_1))
    {
      q_27 = ATgetArgument(p_27, 0);
      {
        ATerm t_27 = NULL,b_28 = NULL;
        ATerm u_27 = NULL;
        t = SSLgetAnnotations(not_null(p_27));
        {
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
        }
        {
          t = not_null(q_27);
          {
            ATerm j_28 = NULL;
            t = d_57(t);
            {
              b_28 = t;
              {
                ATerm k_28 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_28)), not_null(t_27));
                {
                  k_28 = t;
                  if(((j_28 != NULL) && (j_28 != k_28)))
                    _fail(k_28);
                  else
                    j_28 = k_28;
                }
                t = not_null(j_28);
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
  ATerm u_28 = NULL;
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm v_28 = NULL;
      v_28 = t;
      if(((u_28 != NULL) && (u_28 != v_28)))
        _fail(v_28);
      else
        u_28 = v_28;
      return(t);
    }
    t = Program_1(t, g_3);
    return(t);
  }
  t = option_defined_1(t, f_3);
  {
    ATerm h_3 (ATerm t)
    {
      ATerm w_28 = NULL;
      ATerm x_28 = NULL;
      t = term_w_5;
      {
        ATerm i_3 (ATerm t)
        {
          t = not_null(u_28);
          return(t);
        }
        t = short_description_1(t, i_3);
        {
          t = concat_strings_0(t);
          {
            x_28 = t;
            if(((w_28 != NULL) && (w_28 != x_28)))
              _fail(x_28);
            else
              w_28 = x_28;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, not_null(w_28)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATempty, term_g_15));
      {
        t = printnl_0(t);
        {
          t = term_n_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm p_3 (ATerm t)
                {
                  ATerm y_28 = NULL;
                  ATerm z_28 = NULL;
                  z_28 = t;
                  if(((y_28 != NULL) && (y_28 != z_28)))
                    _fail(z_28);
                  else
                    y_28 = z_28;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_28)), term_o_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, p_3);
                {
                  ATerm q_3 (ATerm t)
                  {
                    ATerm a_29 = NULL;
                    ATerm b_29 = NULL;
                    ATerm w_3 (ATerm t)
                    {
                      t = not_null(u_28);
                      return(t);
                    }
                    t = long_description_1(t, w_3);
                    {
                      b_29 = t;
                      if(((a_29 != NULL) && (a_29 != b_29)))
                        _fail(b_29);
                      else
                        a_29 = b_29;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATinsert(CheckATermList(not_null(a_29)), term_p_15));
                      t = printnl_0(t);
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
ATerm Undefined_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm l_29 = NULL,m_29 = NULL;
  l_29 = t;
  k_29 :
  if(match_cons(l_29, sym_Undefined_1))
    {
      m_29 = ATgetArgument(l_29, 0);
      {
        ATerm p_29 = NULL,r_29 = NULL;
        ATerm q_29 = NULL;
        t = SSLgetAnnotations(not_null(l_29));
        {
          q_29 = t;
          if(((p_29 != NULL) && (p_29 != q_29)))
            _fail(q_29);
          else
            p_29 = q_29;
        }
        {
          t = not_null(m_29);
          {
            ATerm t_29 = NULL;
            t = e_57(t);
            {
              r_29 = t;
              {
                ATerm u_29 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_29)), not_null(p_29));
                {
                  u_29 = t;
                  if(((t_29 != NULL) && (t_29 != u_29)))
                    _fail(u_29);
                  else
                    t_29 = u_29;
                }
                t = not_null(t_29);
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
ATerm fetch_1 (ATerm t, ATerm b_82 (ATerm))
{
  ATerm z_29 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, b_82, _id);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = Cons_2(t, _id, z_29);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_65 (ATerm))
{
  t = fetch_1(t, v_65);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_30 = NULL;
  e_30 = t;
  d_30 :
  if(match_cons(e_30, sym_Help_0))
    {
      ATerm g_30 = NULL,i_30 = NULL;
      ATerm s_15;
      s_15 = t;
      {
        ATerm h_30 = NULL;
        t = SSLgetAnnotations(not_null(e_30));
        {
          h_30 = t;
          if(((g_30 != NULL) && (g_30 != h_30)))
            _fail(h_30);
          else
            g_30 = h_30;
        }
      }
      t = s_15;
      {
        ATerm j_30 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_30));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm t_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_85(t);
      LocalPopChoice(v_15);
    }
  else
    {
      t = t_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      t = SSL_table_get(not_null(q_30), not_null(r_30));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  f_31 = t;
  z_30 :
  if(match_cons(f_31, sym__3))
    {
      g_31 = ATgetArgument(f_31, 0);
      h_31 = ATgetArgument(f_31, 1);
      i_31 = ATgetArgument(f_31, 2);
      {
        ATerm y_15;
        y_15 = t;
        {
          ATerm m_31 = NULL;
          ATerm n_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), not_null(h_31));
          {
            ATerm z_15 = t;
            int a_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_16);
              }
            else
              {
                t = z_15;
                t = (ATerm) ATempty;
              }
            {
              n_31 = t;
              if(((m_31 != NULL) && (m_31 != n_31)))
                _fail(n_31);
              else
                m_31 = n_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_31), not_null(h_31), (ATerm) ATinsert(CheckATermList(not_null(m_31)), not_null(i_31)));
            t = table_put_0(t);
          }
        }
        t = y_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm t_31 = NULL;
  ATerm u_31 = NULL;
  t = term_w_5;
  {
    t = v_64(t);
    {
      u_31 = t;
      if(((t_31 != NULL) && (t_31 != u_31)))
        _fail(u_31);
      else
        t_31 = u_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_15, term_i_15, not_null(t_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL;
  a_32 = t;
  z_31 :
  if(match_string(a_32, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(a_32) == AT_LIST) && ((ATermList) a_32 != ATempty)))
        {
          b_32 = ATgetFirst((ATermList) a_32);
          c_32 = (ATerm) ATgetNext((ATermList) a_32);
          {
            ATerm f_32 = NULL;
            ATerm d_16;
            d_16 = t;
            {
              t = not_null(b_32);
              t = a_0(t);
            }
            t = d_16;
            {
              ATerm g_32 = NULL;
              t = term_w_5;
              {
                t = b_0(t);
                {
                  g_32 = t;
                  if(((f_32 != NULL) && (f_32 != g_32)))
                    _fail(g_32);
                  else
                    f_32 = g_32;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_32)), not_null(f_32));
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
    ATerm l_32 = NULL;
    l_32 = t;
    k_32 :
    if(!(match_string(l_32, "--help")))
      {
        if(!(match_string(l_32, "-h")))
          {
            if(!(match_string(l_32, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_e_16;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_j_16;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,s_32 = NULL;
  o_32 = t;
  n_32 :
  if(((ATgetType(o_32) == AT_LIST) && ((ATermList) o_32 != ATempty)))
    {
      p_32 = ATgetFirst((ATermList) o_32);
      s_32 = (ATerm) ATgetNext((ATermList) o_32);
      t = (ATerm) ATinsert(CheckATermList(not_null(s_32)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_32)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,d_33 = NULL;
  z_32 = t;
  y_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      d_33 = ATgetArgument(z_32, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(a_33), not_null(d_33));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm k_16;
  k_16 = t;
  {
    ATerm a_4 (ATerm t)
    {
      t = term_l_16;
      t = t_64(t);
      return(t);
    }
    t = try_1(t, a_4);
  }
  t = k_16;
  {
    ATerm b_4 (ATerm t)
    {
      ATerm l_33 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm j_33 = NULL;
        ATerm k_33 = NULL;
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_14, not_null(j_33));
          t = set_config_0(t);
        }
      }
      t = m_16;
      {
        ATerm m_33 = NULL;
        m_33 = t;
        if(((l_33 != NULL) && (l_33 != m_33)))
          _fail(m_33);
        else
          l_33 = m_33;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_33));
      }
      return(t);
    }
    ATerm c_4 (ATerm t)
    {
      ATerm r_16 = t;
      int s_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(u_16);
            }
          else
            {
              t = t_16;
              {
                t = t_64(t);
                t = Cons_2(t, _id, c_4);
              }
            }
          LocalPopChoice(s_16);
        }
      else
        {
          t = r_16;
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
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
    v_33 = t;
    r_33 :
    if(match_cons(v_33, sym__3))
      {
        w_33 = ATgetArgument(v_33, 0);
        x_33 = ATgetArgument(v_33, 1);
        y_33 = ATgetArgument(v_33, 2);
        {
          if(((s_33 != NULL) && (s_33 != w_33)))
            _fail(w_33);
          else
            s_33 = w_33;
          {
            if(((t_33 != NULL) && (t_33 != x_33)))
              _fail(x_33);
            else
              t_33 = x_33;
            {
              if(((u_33 != NULL) && (u_33 != y_33)))
                _fail(y_33);
              else
                u_33 = y_33;
              t = SSL_table_put(not_null(s_33), not_null(t_33), not_null(u_33));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_16;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm b_34 = NULL;
  ATerm d_17;
  d_17 = t;
  {
    t = term_e_17;
    t = table_put_0(t);
  }
  t = d_17;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm f_17 = t;
      int g_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_64(t);
          LocalPopChoice(g_17);
        }
      else
        {
          t = f_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_4);
    {
      ATerm j_4 (ATerm t)
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_t_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm r_4 (ATerm t)
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm c_34 = NULL;
                  c_34 = t;
                  if(((b_34 != NULL) && (b_34 != c_34)))
                    _fail(c_34);
                  else
                    b_34 = c_34;
                  return(t);
                }
                t = Undefined_1(t, s_4);
                return(t);
              }
              t = option_defined_1(t, r_4);
              {
                ATerm p_17;
                p_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_34)), term_q_17));
                  t = printnl_0(t);
                }
                t = p_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_u_6;
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
        ATerm r_17;
        r_17 = t;
        {
          t = term_h_15;
          t = table_destroy_0(t);
        }
        t = r_17;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm n_67 (ATerm), ATerm o_67 (ATerm), ATerm p_67 (ATerm), ATerm q_67 (ATerm))
{
  t = parse_options_1(t, n_67);
  {
    t = store_options_0(t);
    {
      t = p_67(t);
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_67);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_67(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_68 (ATerm), ATerm f_68 (ATerm), ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_68(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, e_68);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, t_4, g_68, h_68, u_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_67 (ATerm), ATerm z_67 (ATerm), ATerm a_68 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm d_18;
      d_18 = t;
      {
        ATerm f_34 = NULL;
        ATerm g_34 = NULL;
        t = term_a_14;
        {
          t = get_config_0(t);
          {
            g_34 = t;
            if(((f_34 != NULL) && (f_34 != g_34)))
              _fail(g_34);
            else
              f_34 = g_34;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_w_7, (ATerm) ATinsert(ATempty, not_null(f_34)));
          t = printnl_0(t);
        }
      }
      t = d_18;
      return(t);
    }
    t = if_verbose2_1(t, a_5);
    return(t);
  }
  t = iowrap_4(t, y_67, z_67, a_68, z_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_67 (ATerm), ATerm x_67 (ATerm))
{
  t = iowrap_3(t, w_67, x_67, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = _2(t, _id, t_67);
    return(t);
  }
  t = iowrap_2(t, b_5, _fail);
  return(t);
}
ATerm rename_defs_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm h_5 (ATerm t)
    {
      ATerm i_5 (ATerm t)
      {
        ATerm j_5 (ATerm t)
        {
          t = Strategies_1(t, rename_sdefs_0);
          return(t);
        }
        t = Cons_2(t, j_5, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, i_5);
      return(t);
    }
    t = Specification_1(t, h_5);
    return(t);
  }
  t = iowrap_1(t, c_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_defs_0(t);
  return(t);
}
