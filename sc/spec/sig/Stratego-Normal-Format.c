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
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  init_constant_terms();
}
ATerm term_w_14;
ATerm term_c_14;
ATerm term_u_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_p_11;
ATerm term_m_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_g_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_o_6;
ATerm term_j_6;
ATerm term_g_4;
void init_constant_terms (void)
{
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_t_8);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_c_9);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_9);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym__2, term_k_9, term_t_8);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_x_9, term_t_8);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_f_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_z_12, term_t_8);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__3, term_e_12, term_f_12, (ATerm) ATempty);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm e_53 (ATerm), ATerm f_53 (ATerm));
ATerm Op_2 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm));
ATerm Var_1 (ATerm, ATerm n_0 (ATerm));
ATerm As_2 (ATerm, ATerm v_55 (ATerm), ATerm w_55 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm x_55 (ATerm));
ATerm Str_1 (ATerm, ATerm v_53 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm u_53 (ATerm));
ATerm Int_1 (ATerm, ATerm t_53 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm s_51 (ATerm), ATerm t_51 (ATerm));
ATerm Where_1 (ATerm, ATerm c_52 (ATerm));
ATerm Scope_2 (ATerm, ATerm a_52 (ATerm), ATerm b_52 (ATerm));
ATerm Build_1 (ATerm, ATerm x_51 (ATerm));
ATerm Match_1 (ATerm, ATerm w_51 (ATerm));
ATerm Thread_1 (ATerm, ATerm k_52 (ATerm));
ATerm All_1 (ATerm, ATerm j_52 (ATerm));
ATerm Some_1 (ATerm, ATerm m_0 (ATerm));
ATerm One_1 (ATerm, ATerm h_52 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_52 (ATerm), ATerm g_52 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm d_52 (ATerm), ATerm e_52 (ATerm));
ATerm Rec_2 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm));
ATerm SVar_1 (ATerm, ATerm b_53 (ATerm));
ATerm Call_2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm y_52 (ATerm), ATerm z_52 (ATerm));
ATerm GChoice_2 (ATerm, ATerm w_52 (ATerm), ATerm x_52 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm v_52 (ATerm));
ATerm LChoice_2 (ATerm, ATerm r_52 (ATerm), ATerm s_52 (ATerm));
ATerm Choice_2 (ATerm, ATerm p_52 (ATerm), ATerm q_52 (ATerm));
ATerm Seq_2 (ATerm, ATerm n_52 (ATerm), ATerm o_52 (ATerm));
ATerm Test_1 (ATerm, ATerm l_52 (ATerm));
ATerm Not_1 (ATerm, ATerm m_52 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm j_53 (ATerm), ATerm k_53 (ATerm));
ATerm Mod_2 (ATerm, ATerm q_54 (ATerm), ATerm r_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm q_69 (ATerm));
ATerm Strategies_1 (ATerm, ATerm k_54 (ATerm));
ATerm Specification_1 (ATerm, ATerm m_54 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm h_50 (ATerm), ATerm i_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_70 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_80 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_83 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm q_81 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_77 (ATerm), ATerm s_77 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm crush_2 (ATerm, ATerm a_75 (ATerm), ATerm b_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_83 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm m_85 (ATerm));
ATerm map_1 (ATerm, ATerm o_69 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm l_85 (ATerm));
ATerm Program_1 (ATerm, ATerm k_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm n_80 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_69 (ATerm));
ATerm option_defined_1 (ATerm, ATerm l_84 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm x_61 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm q_85 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_51 (ATerm), ATerm r_51 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm o_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm n_85 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_82 (ATerm), ATerm e_82 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_82 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm e_53 (ATerm), ATerm f_53 (ATerm))
{
  ATerm i_8 = NULL,a_10 = NULL,c_10 = NULL;
  i_8 = t;
  h_8 :
  if(match_cons(i_8, sym_Let_2))
    {
      a_10 = ATgetArgument(i_8, 0);
      c_10 = ATgetArgument(i_8, 1);
      {
        ATerm d_11 = NULL,j_11 = NULL;
        ATerm f_11 = NULL;
        t = SSLgetAnnotations(not_null(i_8));
        {
          f_11 = t;
          if(((d_11 != NULL) && (d_11 != f_11)))
            _fail(f_11);
          else
            d_11 = f_11;
        }
        {
          t = not_null(a_10);
          {
            ATerm l_11 = NULL;
            t = e_53(t);
            {
              j_11 = t;
              {
                t = not_null(c_10);
                {
                  ATerm n_11 = NULL;
                  t = f_53(t);
                  {
                    l_11 = t;
                    {
                      ATerm o_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(j_11), not_null(l_11)), not_null(d_11));
                      {
                        o_11 = t;
                        if(((n_11 != NULL) && (n_11 != o_11)))
                          _fail(o_11);
                        else
                          n_11 = o_11;
                      }
                      t = not_null(n_11);
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
ATerm Op_2 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm))
{
  ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL;
  a_12 = t;
  z_11 :
  if(match_cons(a_12, sym_Op_2))
    {
      b_12 = ATgetArgument(a_12, 0);
      c_12 = ATgetArgument(a_12, 1);
      {
        ATerm g_12 = NULL,i_12 = NULL;
        ATerm h_12 = NULL;
        t = SSLgetAnnotations(not_null(a_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        {
          t = not_null(b_12);
          {
            ATerm k_12 = NULL;
            t = w_53(t);
            {
              i_12 = t;
              {
                t = not_null(c_12);
                {
                  ATerm m_12 = NULL;
                  t = x_53(t);
                  {
                    k_12 = t;
                    {
                      ATerm n_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(i_12), not_null(k_12)), not_null(g_12));
                      {
                        n_12 = t;
                        if(((m_12 != NULL) && (m_12 != n_12)))
                          _fail(n_12);
                        else
                          m_12 = n_12;
                      }
                      t = not_null(m_12);
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
ATerm Var_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_Var_1))
    {
      d_13 = ATgetArgument(c_13, 0);
      {
        ATerm n_3 = t;
        int o_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_13 = NULL,i_13 = NULL;
            ATerm h_13 = NULL;
            t = SSLgetAnnotations(not_null(c_13));
            {
              h_13 = t;
              if(((g_13 != NULL) && (g_13 != h_13)))
                _fail(h_13);
              else
                g_13 = h_13;
            }
            {
              t = not_null(d_13);
              {
                ATerm k_13 = NULL;
                t = n_0(t);
                {
                  i_13 = t;
                  {
                    ATerm l_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(i_13)), not_null(g_13));
                    {
                      l_13 = t;
                      if(((k_13 != NULL) && (k_13 != l_13)))
                        _fail(l_13);
                      else
                        k_13 = l_13;
                    }
                    t = not_null(k_13);
                  }
                }
              }
            }
            LocalPopChoice(o_3);
          }
        else
          {
            t = n_3;
            {
              ATerm o_13 = NULL,q_13 = NULL;
              ATerm p_13 = NULL;
              t = SSLgetAnnotations(not_null(c_13));
              {
                p_13 = t;
                if(((o_13 != NULL) && (o_13 != p_13)))
                  _fail(p_13);
                else
                  o_13 = p_13;
              }
              {
                t = not_null(d_13);
                {
                  ATerm s_13 = NULL;
                  t = n_0(t);
                  {
                    q_13 = t;
                    {
                      ATerm t_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(q_13)), not_null(o_13));
                      {
                        t_13 = t;
                        if(((s_13 != NULL) && (s_13 != t_13)))
                          _fail(t_13);
                        else
                          s_13 = t_13;
                      }
                      t = not_null(s_13);
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
ATerm As_2 (ATerm t, ATerm v_55 (ATerm), ATerm w_55 (ATerm))
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_As_2))
    {
      j_14 = ATgetArgument(i_14, 0);
      k_14 = ATgetArgument(i_14, 1);
      {
        ATerm o_14 = NULL,q_14 = NULL;
        ATerm p_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          p_14 = t;
          if(((o_14 != NULL) && (o_14 != p_14)))
            _fail(p_14);
          else
            o_14 = p_14;
        }
        {
          t = not_null(j_14);
          {
            ATerm s_14 = NULL;
            t = v_55(t);
            {
              q_14 = t;
              {
                t = not_null(k_14);
                {
                  ATerm u_14 = NULL;
                  t = w_55(t);
                  {
                    s_14 = t;
                    {
                      ATerm v_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(q_14), not_null(s_14)), not_null(o_14));
                      {
                        v_14 = t;
                        if(((u_14 != NULL) && (u_14 != v_14)))
                          _fail(v_14);
                        else
                          u_14 = v_14;
                      }
                      t = not_null(u_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm x_55 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_BuildDefault_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = x_55(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
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
ATerm Str_1 (ATerm t, ATerm v_53 (ATerm))
{
  ATerm z_15 = NULL,a_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Str_1))
    {
      a_16 = ATgetArgument(z_15, 0);
      {
        ATerm d_16 = NULL,f_16 = NULL;
        ATerm e_16 = NULL;
        t = SSLgetAnnotations(not_null(z_15));
        {
          e_16 = t;
          if(((d_16 != NULL) && (d_16 != e_16)))
            _fail(e_16);
          else
            d_16 = e_16;
        }
        {
          t = not_null(a_16);
          {
            ATerm h_16 = NULL;
            t = v_53(t);
            {
              f_16 = t;
              {
                ATerm i_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(f_16)), not_null(d_16));
                {
                  i_16 = t;
                  if(((h_16 != NULL) && (h_16 != i_16)))
                    _fail(i_16);
                  else
                    h_16 = i_16;
                }
                t = not_null(h_16);
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
ATerm is_real_0 (ATerm t)
{
  ATerm o_16 = NULL;
  o_16 = t;
  t = SSL_is_real(not_null(o_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm u_53 (ATerm))
{
  ATerm w_16 = NULL,x_16 = NULL;
  w_16 = t;
  v_16 :
  if(match_cons(w_16, sym_Real_1))
    {
      x_16 = ATgetArgument(w_16, 0);
      {
        ATerm a_17 = NULL,c_17 = NULL;
        ATerm b_17 = NULL;
        t = SSLgetAnnotations(not_null(w_16));
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
        {
          t = not_null(x_16);
          {
            ATerm e_17 = NULL;
            t = u_53(t);
            {
              c_17 = t;
              {
                ATerm f_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(c_17)), not_null(a_17));
                {
                  f_17 = t;
                  if(((e_17 != NULL) && (e_17 != f_17)))
                    _fail(f_17);
                  else
                    e_17 = f_17;
                }
                t = not_null(e_17);
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
ATerm Int_1 (ATerm t, ATerm t_53 (ATerm))
{
  ATerm p_17 = NULL,q_17 = NULL;
  p_17 = t;
  o_17 :
  if(match_cons(p_17, sym_Int_1))
    {
      q_17 = ATgetArgument(p_17, 0);
      {
        ATerm t_17 = NULL,v_17 = NULL;
        ATerm u_17 = NULL;
        t = SSLgetAnnotations(not_null(p_17));
        {
          u_17 = t;
          if(((t_17 != NULL) && (t_17 != u_17)))
            _fail(u_17);
          else
            t_17 = u_17;
        }
        {
          t = not_null(q_17);
          {
            ATerm x_17 = NULL;
            t = t_53(t);
            {
              v_17 = t;
              {
                ATerm y_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(v_17)), not_null(t_17));
                {
                  y_17 = t;
                  if(((x_17 != NULL) && (x_17 != y_17)))
                    _fail(y_17);
                  else
                    x_17 = y_17;
                }
                t = not_null(x_17);
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
ATerm Wld_0 (ATerm t)
{
  ATerm h_18 = NULL;
  h_18 = t;
  g_18 :
  if(match_cons(h_18, sym_Wld_0))
    {
      ATerm j_18 = NULL,l_18 = NULL;
      ATerm p_3;
      p_3 = t;
      {
        ATerm k_18 = NULL;
        t = SSLgetAnnotations(not_null(h_18));
        {
          k_18 = t;
          if(((j_18 != NULL) && (j_18 != k_18)))
            _fail(k_18);
          else
            j_18 = k_18;
        }
      }
      t = p_3;
      {
        ATerm m_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(j_18));
        {
          m_18 = t;
          if(((l_18 != NULL) && (l_18 != m_18)))
            _fail(m_18);
          else
            l_18 = m_18;
        }
        t = not_null(l_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm q_3 = t;
  int r_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(r_3);
    }
  else
    {
      t = q_3;
      {
        ATerm s_3 = t;
        int t_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(t_3);
          }
        else
          {
            t = s_3;
            {
              ATerm u_3 = t;
              int v_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(v_3);
                }
              else
                {
                  t = u_3;
                  {
                    ATerm w_3 = t;
                    int x_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(x_3);
                      }
                    else
                      {
                        t = w_3;
                        {
                          ATerm y_3 = t;
                          int z_3 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(z_3);
                            }
                          else
                            {
                              t = y_3;
                              {
                                ATerm a_4 = t;
                                int b_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(b_4);
                                  }
                                else
                                  {
                                    t = a_4;
                                    {
                                      ATerm c_4 = t;
                                      int d_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          LocalPopChoice(d_4);
                                        }
                                      else
                                        {
                                          t = c_4;
                                          {
                                            ATerm e_4 = t;
                                            int f_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(f_4);
                                              }
                                            else
                                              {
                                                t = e_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_g_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, e_0);
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
    }
  return(t);
}
ATerm Prim_2 (ATerm t, ATerm s_51 (ATerm), ATerm t_51 (ATerm))
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL;
  x_18 = t;
  w_18 :
  if(match_cons(x_18, sym_Prim_2))
    {
      y_18 = ATgetArgument(x_18, 0);
      z_18 = ATgetArgument(x_18, 1);
      {
        ATerm d_19 = NULL,f_19 = NULL;
        ATerm e_19 = NULL;
        t = SSLgetAnnotations(not_null(x_18));
        {
          e_19 = t;
          if(((d_19 != NULL) && (d_19 != e_19)))
            _fail(e_19);
          else
            d_19 = e_19;
        }
        {
          t = not_null(y_18);
          {
            ATerm h_19 = NULL;
            t = s_51(t);
            {
              f_19 = t;
              {
                t = not_null(z_18);
                {
                  ATerm j_19 = NULL;
                  t = t_51(t);
                  {
                    h_19 = t;
                    {
                      ATerm k_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(f_19), not_null(h_19)), not_null(d_19));
                      {
                        k_19 = t;
                        if(((j_19 != NULL) && (j_19 != k_19)))
                          _fail(k_19);
                        else
                          j_19 = k_19;
                      }
                      t = not_null(j_19);
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
ATerm Where_1 (ATerm t, ATerm c_52 (ATerm))
{
  ATerm v_19 = NULL,w_19 = NULL;
  v_19 = t;
  u_19 :
  if(match_cons(v_19, sym_Where_1))
    {
      w_19 = ATgetArgument(v_19, 0);
      {
        ATerm z_19 = NULL,b_20 = NULL;
        ATerm a_20 = NULL;
        t = SSLgetAnnotations(not_null(v_19));
        {
          a_20 = t;
          if(((z_19 != NULL) && (z_19 != a_20)))
            _fail(a_20);
          else
            z_19 = a_20;
        }
        {
          t = not_null(w_19);
          {
            ATerm d_20 = NULL;
            t = c_52(t);
            {
              b_20 = t;
              {
                ATerm e_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(b_20)), not_null(z_19));
                {
                  e_20 = t;
                  if(((d_20 != NULL) && (d_20 != e_20)))
                    _fail(e_20);
                  else
                    d_20 = e_20;
                }
                t = not_null(d_20);
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
ATerm Scope_2 (ATerm t, ATerm a_52 (ATerm), ATerm b_52 (ATerm))
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL;
  p_20 = t;
  o_20 :
  if(match_cons(p_20, sym_Scope_2))
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
            t = a_52(t);
            {
              x_20 = t;
              {
                t = not_null(r_20);
                {
                  ATerm b_21 = NULL;
                  t = b_52(t);
                  {
                    z_20 = t;
                    {
                      ATerm c_21 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(x_20), not_null(z_20)), not_null(v_20));
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
ATerm Build_1 (ATerm t, ATerm x_51 (ATerm))
{
  ATerm n_21 = NULL,o_21 = NULL;
  n_21 = t;
  m_21 :
  if(match_cons(n_21, sym_Build_1))
    {
      o_21 = ATgetArgument(n_21, 0);
      {
        ATerm r_21 = NULL,t_21 = NULL;
        ATerm s_21 = NULL;
        t = SSLgetAnnotations(not_null(n_21));
        {
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
        }
        {
          t = not_null(o_21);
          {
            ATerm v_21 = NULL;
            t = x_51(t);
            {
              t_21 = t;
              {
                ATerm w_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(t_21)), not_null(r_21));
                {
                  w_21 = t;
                  if(((v_21 != NULL) && (v_21 != w_21)))
                    _fail(w_21);
                  else
                    v_21 = w_21;
                }
                t = not_null(v_21);
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
ATerm Match_1 (ATerm t, ATerm w_51 (ATerm))
{
  ATerm l_22 = NULL,m_22 = NULL;
  l_22 = t;
  k_22 :
  if(match_cons(l_22, sym_Match_1))
    {
      m_22 = ATgetArgument(l_22, 0);
      {
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = SSLgetAnnotations(not_null(l_22));
        {
          q_22 = t;
          if(((p_22 != NULL) && (p_22 != q_22)))
            _fail(q_22);
          else
            p_22 = q_22;
        }
        {
          t = not_null(m_22);
          {
            ATerm t_22 = NULL;
            t = w_51(t);
            {
              r_22 = t;
              {
                ATerm u_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(r_22)), not_null(p_22));
                {
                  u_22 = t;
                  if(((t_22 != NULL) && (t_22 != u_22)))
                    _fail(u_22);
                  else
                    t_22 = u_22;
                }
                t = not_null(t_22);
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
ATerm Thread_1 (ATerm t, ATerm k_52 (ATerm))
{
  ATerm h_23 = NULL,i_23 = NULL;
  h_23 = t;
  g_23 :
  if(match_cons(h_23, sym_Thread_1))
    {
      i_23 = ATgetArgument(h_23, 0);
      {
        ATerm l_23 = NULL,n_23 = NULL;
        ATerm m_23 = NULL;
        t = SSLgetAnnotations(not_null(h_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
        {
          t = not_null(i_23);
          {
            ATerm p_23 = NULL;
            t = k_52(t);
            {
              n_23 = t;
              {
                ATerm q_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(n_23)), not_null(l_23));
                {
                  q_23 = t;
                  if(((p_23 != NULL) && (p_23 != q_23)))
                    _fail(q_23);
                  else
                    p_23 = q_23;
                }
                t = not_null(p_23);
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
ATerm All_1 (ATerm t, ATerm j_52 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_All_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm e_24 = NULL,g_24 = NULL;
        ATerm f_24 = NULL;
        t = SSLgetAnnotations(not_null(a_24));
        {
          f_24 = t;
          if(((e_24 != NULL) && (e_24 != f_24)))
            _fail(f_24);
          else
            e_24 = f_24;
        }
        {
          t = not_null(b_24);
          {
            ATerm i_24 = NULL;
            t = j_52(t);
            {
              g_24 = t;
              {
                ATerm j_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(g_24)), not_null(e_24));
                {
                  j_24 = t;
                  if(((i_24 != NULL) && (i_24 != j_24)))
                    _fail(j_24);
                  else
                    i_24 = j_24;
                }
                t = not_null(i_24);
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
ATerm Some_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm x_24 = NULL,y_24 = NULL;
  x_24 = t;
  w_24 :
  if(match_cons(x_24, sym_Some_1))
    {
      y_24 = ATgetArgument(x_24, 0);
      {
        ATerm h_4 = t;
        int i_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = NULL,d_25 = NULL;
            ATerm c_25 = NULL;
            t = SSLgetAnnotations(not_null(x_24));
            {
              c_25 = t;
              if(((b_25 != NULL) && (b_25 != c_25)))
                _fail(c_25);
              else
                b_25 = c_25;
            }
            {
              t = not_null(y_24);
              {
                ATerm f_25 = NULL;
                t = m_0(t);
                {
                  d_25 = t;
                  {
                    ATerm g_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(d_25)), not_null(b_25));
                    {
                      g_25 = t;
                      if(((f_25 != NULL) && (f_25 != g_25)))
                        _fail(g_25);
                      else
                        f_25 = g_25;
                    }
                    t = not_null(f_25);
                  }
                }
              }
            }
            LocalPopChoice(i_4);
          }
        else
          {
            t = h_4;
            {
              ATerm j_25 = NULL,l_25 = NULL;
              ATerm k_25 = NULL;
              t = SSLgetAnnotations(not_null(x_24));
              {
                k_25 = t;
                if(((j_25 != NULL) && (j_25 != k_25)))
                  _fail(k_25);
                else
                  j_25 = k_25;
              }
              {
                t = not_null(y_24);
                {
                  ATerm n_25 = NULL;
                  t = m_0(t);
                  {
                    l_25 = t;
                    {
                      ATerm o_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(l_25)), not_null(j_25));
                      {
                        o_25 = t;
                        if(((n_25 != NULL) && (n_25 != o_25)))
                          _fail(o_25);
                        else
                          n_25 = o_25;
                      }
                      t = not_null(n_25);
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
ATerm One_1 (ATerm t, ATerm h_52 (ATerm))
{
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_One_1))
    {
      d_26 = ATgetArgument(c_26, 0);
      {
        ATerm g_26 = NULL,i_26 = NULL;
        ATerm h_26 = NULL;
        t = SSLgetAnnotations(not_null(c_26));
        {
          h_26 = t;
          if(((g_26 != NULL) && (g_26 != h_26)))
            _fail(h_26);
          else
            g_26 = h_26;
        }
        {
          t = not_null(d_26);
          {
            ATerm k_26 = NULL;
            t = h_52(t);
            {
              i_26 = t;
              {
                ATerm l_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(i_26)), not_null(g_26));
                {
                  l_26 = t;
                  if(((k_26 != NULL) && (k_26 != l_26)))
                    _fail(l_26);
                  else
                    k_26 = l_26;
                }
                t = not_null(k_26);
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
ATerm Cong_2 (ATerm t, ATerm f_52 (ATerm), ATerm g_52 (ATerm))
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym_Cong_2))
    {
      x_26 = ATgetArgument(w_26, 0);
      y_26 = ATgetArgument(w_26, 1);
      {
        ATerm c_27 = NULL,e_27 = NULL;
        ATerm d_27 = NULL;
        t = SSLgetAnnotations(not_null(w_26));
        {
          d_27 = t;
          if(((c_27 != NULL) && (c_27 != d_27)))
            _fail(d_27);
          else
            c_27 = d_27;
        }
        {
          t = not_null(x_26);
          {
            ATerm g_27 = NULL;
            t = f_52(t);
            {
              e_27 = t;
              {
                t = not_null(y_26);
                {
                  ATerm i_27 = NULL;
                  t = g_52(t);
                  {
                    g_27 = t;
                    {
                      ATerm j_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(e_27), not_null(g_27)), not_null(c_27));
                      {
                        j_27 = t;
                        if(((i_27 != NULL) && (i_27 != j_27)))
                          _fail(j_27);
                        else
                          i_27 = j_27;
                      }
                      t = not_null(i_27);
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
ATerm is_int_0 (ATerm t)
{
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_is_int(not_null(r_27));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm d_52 (ATerm), ATerm e_52 (ATerm))
{
  ATerm a_28 = NULL,b_28 = NULL,c_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_Path_2))
    {
      b_28 = ATgetArgument(a_28, 0);
      c_28 = ATgetArgument(a_28, 1);
      {
        ATerm g_28 = NULL,k_28 = NULL;
        ATerm h_28 = NULL;
        t = SSLgetAnnotations(not_null(a_28));
        {
          h_28 = t;
          if(((g_28 != NULL) && (g_28 != h_28)))
            _fail(h_28);
          else
            g_28 = h_28;
        }
        {
          t = not_null(b_28);
          {
            ATerm m_28 = NULL;
            t = d_52(t);
            {
              k_28 = t;
              {
                t = not_null(c_28);
                {
                  ATerm o_28 = NULL;
                  t = e_52(t);
                  {
                    m_28 = t;
                    {
                      ATerm p_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(k_28), not_null(m_28)), not_null(g_28));
                      {
                        p_28 = t;
                        if(((o_28 != NULL) && (o_28 != p_28)))
                          _fail(p_28);
                        else
                          o_28 = p_28;
                      }
                      t = not_null(o_28);
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
ATerm Rec_2 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm))
{
  ATerm b_29 = NULL,c_29 = NULL,d_29 = NULL;
  b_29 = t;
  a_29 :
  if(match_cons(b_29, sym_Rec_2))
    {
      c_29 = ATgetArgument(b_29, 0);
      d_29 = ATgetArgument(b_29, 1);
      {
        ATerm h_29 = NULL,j_29 = NULL;
        ATerm i_29 = NULL;
        t = SSLgetAnnotations(not_null(b_29));
        {
          i_29 = t;
          if(((h_29 != NULL) && (h_29 != i_29)))
            _fail(i_29);
          else
            h_29 = i_29;
        }
        {
          t = not_null(c_29);
          {
            ATerm l_29 = NULL;
            t = c_53(t);
            {
              j_29 = t;
              {
                t = not_null(d_29);
                {
                  ATerm n_29 = NULL;
                  t = d_53(t);
                  {
                    l_29 = t;
                    {
                      ATerm o_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(j_29), not_null(l_29)), not_null(h_29));
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
ATerm SVar_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm z_29 = NULL,a_30 = NULL;
  z_29 = t;
  y_29 :
  if(match_cons(z_29, sym_SVar_1))
    {
      a_30 = ATgetArgument(z_29, 0);
      {
        ATerm d_30 = NULL,f_30 = NULL;
        ATerm e_30 = NULL;
        t = SSLgetAnnotations(not_null(z_29));
        {
          e_30 = t;
          if(((d_30 != NULL) && (d_30 != e_30)))
            _fail(e_30);
          else
            d_30 = e_30;
        }
        {
          t = not_null(a_30);
          {
            ATerm h_30 = NULL;
            t = b_53(t);
            {
              f_30 = t;
              {
                ATerm i_30 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(f_30)), not_null(d_30));
                {
                  i_30 = t;
                  if(((h_30 != NULL) && (h_30 != i_30)))
                    _fail(i_30);
                  else
                    h_30 = i_30;
                }
                t = not_null(h_30);
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
ATerm Call_2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_Call_2))
    {
      u_30 = ATgetArgument(t_30, 0);
      v_30 = ATgetArgument(t_30, 1);
      {
        ATerm z_30 = NULL,b_31 = NULL;
        ATerm a_31 = NULL;
        t = SSLgetAnnotations(not_null(t_30));
        {
          a_31 = t;
          if(((z_30 != NULL) && (z_30 != a_31)))
            _fail(a_31);
          else
            z_30 = a_31;
        }
        {
          t = not_null(u_30);
          {
            ATerm d_31 = NULL;
            t = q_53(t);
            {
              b_31 = t;
              {
                t = not_null(v_30);
                {
                  ATerm f_31 = NULL;
                  t = r_53(t);
                  {
                    d_31 = t;
                    {
                      ATerm g_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(b_31), not_null(d_31)), not_null(z_30));
                      {
                        g_31 = t;
                        if(((f_31 != NULL) && (f_31 != g_31)))
                          _fail(g_31);
                        else
                          f_31 = g_31;
                      }
                      t = not_null(f_31);
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
ATerm LGChoice_2 (ATerm t, ATerm y_52 (ATerm), ATerm z_52 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_LGChoice_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm y_31 = NULL,a_32 = NULL;
        ATerm z_31 = NULL;
        t = SSLgetAnnotations(not_null(s_31));
        {
          z_31 = t;
          if(((y_31 != NULL) && (y_31 != z_31)))
            _fail(z_31);
          else
            y_31 = z_31;
        }
        {
          t = not_null(t_31);
          {
            ATerm c_32 = NULL;
            t = y_52(t);
            {
              a_32 = t;
              {
                t = not_null(u_31);
                {
                  ATerm e_32 = NULL;
                  t = z_52(t);
                  {
                    c_32 = t;
                    {
                      ATerm f_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(a_32), not_null(c_32)), not_null(y_31));
                      {
                        f_32 = t;
                        if(((e_32 != NULL) && (e_32 != f_32)))
                          _fail(f_32);
                        else
                          e_32 = f_32;
                      }
                      t = not_null(e_32);
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
ATerm GChoice_2 (ATerm t, ATerm w_52 (ATerm), ATerm x_52 (ATerm))
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL;
  r_32 = t;
  q_32 :
  if(match_cons(r_32, sym_GChoice_2))
    {
      s_32 = ATgetArgument(r_32, 0);
      t_32 = ATgetArgument(r_32, 1);
      {
        ATerm x_32 = NULL,z_32 = NULL;
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(r_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
        {
          t = not_null(s_32);
          {
            ATerm b_33 = NULL;
            t = w_52(t);
            {
              z_32 = t;
              {
                t = not_null(t_32);
                {
                  ATerm d_33 = NULL;
                  t = x_52(t);
                  {
                    b_33 = t;
                    {
                      ATerm e_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(z_32), not_null(b_33)), not_null(x_32));
                      {
                        e_33 = t;
                        if(((d_33 != NULL) && (d_33 != e_33)))
                          _fail(e_33);
                        else
                          d_33 = e_33;
                      }
                      t = not_null(d_33);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm t_52 (ATerm), ATerm u_52 (ATerm), ATerm v_52 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym_GuardedLChoice_3))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      u_33 = ATgetArgument(r_33, 2);
      {
        ATerm z_33 = NULL,b_34 = NULL;
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(r_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
        {
          t = not_null(s_33);
          {
            ATerm d_34 = NULL;
            t = t_52(t);
            {
              b_34 = t;
              {
                t = not_null(t_33);
                {
                  ATerm f_34 = NULL;
                  t = u_52(t);
                  {
                    d_34 = t;
                    {
                      t = not_null(u_33);
                      {
                        ATerm h_34 = NULL;
                        t = v_52(t);
                        {
                          f_34 = t;
                          {
                            ATerm i_34 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(b_34), not_null(d_34), not_null(f_34)), not_null(z_33));
                            {
                              i_34 = t;
                              if(((h_34 != NULL) && (h_34 != i_34)))
                                _fail(i_34);
                              else
                                h_34 = i_34;
                            }
                            t = not_null(h_34);
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
ATerm LChoice_2 (ATerm t, ATerm r_52 (ATerm), ATerm s_52 (ATerm))
{
  ATerm v_34 = NULL,z_34 = NULL,a_35 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_LChoice_2))
    {
      z_34 = ATgetArgument(v_34, 0);
      a_35 = ATgetArgument(v_34, 1);
      {
        ATerm e_35 = NULL,g_35 = NULL;
        ATerm f_35 = NULL;
        t = SSLgetAnnotations(not_null(v_34));
        {
          f_35 = t;
          if(((e_35 != NULL) && (e_35 != f_35)))
            _fail(f_35);
          else
            e_35 = f_35;
        }
        {
          t = not_null(z_34);
          {
            ATerm i_35 = NULL;
            t = r_52(t);
            {
              g_35 = t;
              {
                t = not_null(a_35);
                {
                  ATerm k_35 = NULL;
                  t = s_52(t);
                  {
                    i_35 = t;
                    {
                      ATerm l_35 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(g_35), not_null(i_35)), not_null(e_35));
                      {
                        l_35 = t;
                        if(((k_35 != NULL) && (k_35 != l_35)))
                          _fail(l_35);
                        else
                          k_35 = l_35;
                      }
                      t = not_null(k_35);
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
ATerm Choice_2 (ATerm t, ATerm p_52 (ATerm), ATerm q_52 (ATerm))
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym_Choice_2))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      {
        ATerm d_36 = NULL,f_36 = NULL;
        ATerm e_36 = NULL;
        t = SSLgetAnnotations(not_null(x_35));
        {
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
        }
        {
          t = not_null(y_35);
          {
            ATerm h_36 = NULL;
            t = p_52(t);
            {
              f_36 = t;
              {
                t = not_null(z_35);
                {
                  ATerm j_36 = NULL;
                  t = q_52(t);
                  {
                    h_36 = t;
                    {
                      ATerm k_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(f_36), not_null(h_36)), not_null(d_36));
                      {
                        k_36 = t;
                        if(((j_36 != NULL) && (j_36 != k_36)))
                          _fail(k_36);
                        else
                          j_36 = k_36;
                      }
                      t = not_null(j_36);
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
ATerm Seq_2 (ATerm t, ATerm n_52 (ATerm), ATerm o_52 (ATerm))
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL;
  a_37 = t;
  z_36 :
  if(match_cons(a_37, sym_Seq_2))
    {
      b_37 = ATgetArgument(a_37, 0);
      c_37 = ATgetArgument(a_37, 1);
      {
        ATerm g_37 = NULL,i_37 = NULL;
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(a_37));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
        {
          t = not_null(b_37);
          {
            ATerm k_37 = NULL;
            t = n_52(t);
            {
              i_37 = t;
              {
                t = not_null(c_37);
                {
                  ATerm m_37 = NULL;
                  t = o_52(t);
                  {
                    k_37 = t;
                    {
                      ATerm n_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(i_37), not_null(k_37)), not_null(g_37));
                      {
                        n_37 = t;
                        if(((m_37 != NULL) && (m_37 != n_37)))
                          _fail(n_37);
                        else
                          m_37 = n_37;
                      }
                      t = not_null(m_37);
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
ATerm Test_1 (ATerm t, ATerm l_52 (ATerm))
{
  ATerm b_38 = NULL,c_38 = NULL;
  b_38 = t;
  z_37 :
  if(match_cons(b_38, sym_Test_1))
    {
      c_38 = ATgetArgument(b_38, 0);
      {
        ATerm f_38 = NULL,h_38 = NULL;
        ATerm g_38 = NULL;
        t = SSLgetAnnotations(not_null(b_38));
        {
          g_38 = t;
          if(((f_38 != NULL) && (f_38 != g_38)))
            _fail(g_38);
          else
            f_38 = g_38;
        }
        {
          t = not_null(c_38);
          {
            ATerm j_38 = NULL;
            t = l_52(t);
            {
              h_38 = t;
              {
                ATerm k_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(h_38)), not_null(f_38));
                {
                  k_38 = t;
                  if(((j_38 != NULL) && (j_38 != k_38)))
                    _fail(k_38);
                  else
                    j_38 = k_38;
                }
                t = not_null(j_38);
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
ATerm Not_1 (ATerm t, ATerm m_52 (ATerm))
{
  ATerm v_38 = NULL,w_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym_Not_1))
    {
      w_38 = ATgetArgument(v_38, 0);
      {
        ATerm z_38 = NULL,b_39 = NULL;
        ATerm a_39 = NULL;
        t = SSLgetAnnotations(not_null(v_38));
        {
          a_39 = t;
          if(((z_38 != NULL) && (z_38 != a_39)))
            _fail(a_39);
          else
            z_38 = a_39;
        }
        {
          t = not_null(w_38);
          {
            ATerm d_39 = NULL;
            t = m_52(t);
            {
              b_39 = t;
              {
                ATerm e_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(b_39)), not_null(z_38));
                {
                  e_39 = t;
                  if(((d_39 != NULL) && (d_39 != e_39)))
                    _fail(e_39);
                  else
                    d_39 = e_39;
                }
                t = not_null(d_39);
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
ATerm Fail_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  u_39 :
  if(match_cons(v_39, sym_Fail_0))
    {
      ATerm x_39 = NULL,z_39 = NULL;
      ATerm j_4;
      j_4 = t;
      {
        ATerm y_39 = NULL;
        t = SSLgetAnnotations(not_null(v_39));
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
      }
      t = j_4;
      {
        ATerm a_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(x_39));
        {
          a_40 = t;
          if(((z_39 != NULL) && (z_39 != a_40)))
            _fail(a_40);
          else
            z_39 = a_40;
        }
        t = not_null(z_39);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm i_40 = NULL;
  i_40 = t;
  h_40 :
  if(match_cons(i_40, sym_Id_0))
    {
      ATerm k_40 = NULL,m_40 = NULL;
      ATerm k_4;
      k_4 = t;
      {
        ATerm l_40 = NULL;
        t = SSLgetAnnotations(not_null(i_40));
        {
          l_40 = t;
          if(((k_40 != NULL) && (k_40 != l_40)))
            _fail(l_40);
          else
            k_40 = l_40;
        }
      }
      t = k_4;
      {
        ATerm n_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(k_40));
        {
          n_40 = t;
          if(((m_40 != NULL) && (m_40 != n_40)))
            _fail(n_40);
          else
            m_40 = n_40;
        }
        t = not_null(m_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm l_4 = t;
  int m_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
      LocalPopChoice(m_4);
    }
  else
    {
      t = l_4;
      {
        ATerm n_4 = t;
        int o_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fail_0(t);
            LocalPopChoice(o_4);
          }
        else
          {
            t = n_4;
            {
              ATerm p_4 = t;
              int q_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(q_4);
                }
              else
                {
                  t = p_4;
                  {
                    ATerm r_4 = t;
                    int s_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(s_4);
                      }
                    else
                      {
                        t = r_4;
                        {
                          ATerm t_4 = t;
                          int u_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(u_4);
                            }
                          else
                            {
                              t = t_4;
                              {
                                ATerm v_4 = t;
                                int w_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
                                    LocalPopChoice(w_4);
                                  }
                                else
                                  {
                                    t = v_4;
                                    {
                                      ATerm x_4 = t;
                                      int y_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(y_4);
                                        }
                                      else
                                        {
                                          t = x_4;
                                          {
                                            ATerm z_4 = t;
                                            int a_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(a_5);
                                              }
                                            else
                                              {
                                                t = z_4;
                                                {
                                                  ATerm b_5 = t;
                                                  int c_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(c_5);
                                                    }
                                                  else
                                                    {
                                                      t = b_5;
                                                      {
                                                        ATerm d_5 = t;
                                                        int e_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                            LocalPopChoice(e_5);
                                                          }
                                                        else
                                                          {
                                                            t = d_5;
                                                            {
                                                              ATerm f_5 = t;
                                                              int g_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  ATerm f_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm h_5 = t;
                                                                      int i_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(i_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = h_5;
                                                                          t = Mod_2(t, is_string_0, is_string_0);
                                                                        }
                                                                      return(t);
                                                                    }
                                                                    t = SVar_1(t, p_0);
                                                                    return(t);
                                                                  }
                                                                  ATerm o_0 (ATerm t)
                                                                  {
                                                                    t = list_1(t, strategy_expression_0);
                                                                    return(t);
                                                                  }
                                                                  t = Call_2(t, f_0, o_0);
                                                                  LocalPopChoice(g_5);
                                                                }
                                                              else
                                                                {
                                                                  t = f_5;
                                                                  {
                                                                    ATerm j_5 = t;
                                                                    int k_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                        LocalPopChoice(k_5);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = j_5;
                                                                        {
                                                                          ATerm l_5 = t;
                                                                          int m_5 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
                                                                              LocalPopChoice(m_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = l_5;
                                                                              {
                                                                                ATerm n_5 = t;
                                                                                int o_5 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
                                                                                    LocalPopChoice(o_5);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_5;
                                                                                    {
                                                                                      ATerm p_5 = t;
                                                                                      int q_5 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = One_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(q_5);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_5;
                                                                                          {
                                                                                            ATerm r_5 = t;
                                                                                            int s_5 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = Some_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(s_5);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = r_5;
                                                                                                {
                                                                                                  ATerm t_5 = t;
                                                                                                  int u_5 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = All_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(u_5);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = t_5;
                                                                                                      {
                                                                                                        ATerm v_5 = t;
                                                                                                        int w_5 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(y_5);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = x_5;
                                                                                                                  {
                                                                                                                    ATerm z_5 = t;
                                                                                                                    int a_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(a_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = z_5;
                                                                                                                        {
                                                                                                                          ATerm b_6 = t;
                                                                                                                          int c_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(c_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = b_6;
                                                                                                                              {
                                                                                                                                ATerm d_6 = t;
                                                                                                                                int e_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(e_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = d_6;
                                                                                                                                    {
                                                                                                                                      ATerm f_6 = t;
                                                                                                                                      int g_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
                                                                                                                                          LocalPopChoice(g_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = f_6;
                                                                                                                                          {
                                                                                                                                            ATerm h_6 = t;
                                                                                                                                            int i_6 = stack_ptr;
                                                                                                                                            if((PushChoice() == 0))
                                                                                                                                              {
                                                                                                                                                ATerm t_0 (ATerm t)
                                                                                                                                                {
                                                                                                                                                  ATerm u_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = list_1(t, u_0);
                                                                                                                                                  return(t);
                                                                                                                                                }
                                                                                                                                                t = Let_2(t, t_0, strategy_expression_0);
                                                                                                                                                LocalPopChoice(i_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = h_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_j_6;
                                                                                                                                                    return(t);
                                                                                                                                                  }
                                                                                                                                                  t = debug_1(t, v_0);
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
          }
      }
    }
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm j_53 (ATerm), ATerm k_53 (ATerm))
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym_VarDec_2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(y_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(z_40);
          {
            ATerm i_41 = NULL;
            t = j_53(t);
            {
              g_41 = t;
              {
                t = not_null(a_41);
                {
                  ATerm k_41 = NULL;
                  t = k_53(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(g_41), not_null(i_41)), not_null(e_41));
                      {
                        l_41 = t;
                        if(((k_41 != NULL) && (k_41 != l_41)))
                          _fail(l_41);
                        else
                          k_41 = l_41;
                      }
                      t = not_null(k_41);
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
ATerm Mod_2 (ATerm t, ATerm q_54 (ATerm), ATerm r_54 (ATerm))
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
  x_41 = t;
  w_41 :
  if(match_cons(x_41, sym_Mod_2))
    {
      y_41 = ATgetArgument(x_41, 0);
      z_41 = ATgetArgument(x_41, 1);
      {
        ATerm d_42 = NULL,f_42 = NULL;
        ATerm e_42 = NULL;
        t = SSLgetAnnotations(not_null(x_41));
        {
          e_42 = t;
          if(((d_42 != NULL) && (d_42 != e_42)))
            _fail(e_42);
          else
            d_42 = e_42;
        }
        {
          t = not_null(y_41);
          {
            ATerm h_42 = NULL;
            t = q_54(t);
            {
              f_42 = t;
              {
                t = not_null(z_41);
                {
                  ATerm q_42 = NULL;
                  t = r_54(t);
                  {
                    h_42 = t;
                    {
                      ATerm r_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(f_42), not_null(h_42)), not_null(d_42));
                      {
                        r_42 = t;
                        if(((q_42 != NULL) && (q_42 != r_42)))
                          _fail(r_42);
                        else
                          q_42 = r_42;
                      }
                      t = not_null(q_42);
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
ATerm SDef_3 (ATerm t, ATerm g_53 (ATerm), ATerm h_53 (ATerm), ATerm i_53 (ATerm))
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  q_43 = t;
  p_43 :
  if(match_cons(q_43, sym_SDef_3))
    {
      r_43 = ATgetArgument(q_43, 0);
      s_43 = ATgetArgument(q_43, 1);
      t_43 = ATgetArgument(q_43, 2);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(q_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(r_43);
          {
            ATerm g_44 = NULL;
            t = g_53(t);
            {
              e_44 = t;
              {
                t = not_null(s_43);
                {
                  ATerm i_44 = NULL;
                  t = h_53(t);
                  {
                    g_44 = t;
                    {
                      t = not_null(t_43);
                      {
                        ATerm k_44 = NULL;
                        t = i_53(t);
                        {
                          i_44 = t;
                          {
                            ATerm l_44 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(e_44), not_null(g_44), not_null(i_44)), not_null(c_44));
                            {
                              l_44 = t;
                              if(((k_44 != NULL) && (k_44 != l_44)))
                                _fail(l_44);
                              else
                                k_44 = l_44;
                            }
                            t = not_null(k_44);
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
ATerm strategy_definition_0 (ATerm t)
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm m_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(n_6);
          }
        else
          {
            t = m_6;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm y_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, y_0);
        return(t);
      }
      t = SDef_3(t, w_0, x_0, strategy_expression_0);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_o_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm q_69 (ATerm))
{
  ATerm t_44 (ATerm t)
  {
    ATerm p_6 = t;
    int q_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(q_6);
      }
    else
      {
        t = p_6;
        t = Cons_2(t, q_69, t_44);
      }
    return(t);
  }
  t = t_44(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm k_54 (ATerm))
{
  ATerm z_44 = NULL,a_45 = NULL;
  z_44 = t;
  y_44 :
  if(match_cons(z_44, sym_Strategies_1))
    {
      a_45 = ATgetArgument(z_44, 0);
      {
        ATerm d_45 = NULL,f_45 = NULL;
        ATerm e_45 = NULL;
        t = SSLgetAnnotations(not_null(z_44));
        {
          e_45 = t;
          if(((d_45 != NULL) && (d_45 != e_45)))
            _fail(e_45);
          else
            d_45 = e_45;
        }
        {
          t = not_null(a_45);
          {
            ATerm h_45 = NULL;
            t = k_54(t);
            {
              f_45 = t;
              {
                ATerm i_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(f_45)), not_null(d_45));
                {
                  i_45 = t;
                  if(((h_45 != NULL) && (h_45 != i_45)))
                    _fail(i_45);
                  else
                    h_45 = i_45;
                }
                t = not_null(h_45);
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
ATerm Specification_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm v_45 = NULL,w_45 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym_Specification_1))
    {
      w_45 = ATgetArgument(v_45, 0);
      {
        ATerm z_45 = NULL,b_46 = NULL;
        ATerm a_46 = NULL;
        t = SSLgetAnnotations(not_null(v_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
        {
          t = not_null(w_45);
          {
            ATerm d_46 = NULL;
            t = m_54(t);
            {
              b_46 = t;
              {
                ATerm e_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(b_46)), not_null(z_45));
                {
                  e_46 = t;
                  if(((d_46 != NULL) && (d_46 != e_46)))
                    _fail(e_46);
                  else
                    d_46 = e_46;
                }
                t = not_null(d_46);
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
ATerm stratego_specification_0 (ATerm t)
{
  ATerm r_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, d_1);
            return(t);
          }
          t = Cons_2(t, c_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, b_1);
        return(t);
      }
      t = Specification_1(t, a_1);
      LocalPopChoice(s_6);
    }
  else
    {
      t = r_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_t_6;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_50 (ATerm), ATerm i_50 (ATerm))
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      {
        ATerm v_46 = NULL,x_46 = NULL;
        ATerm w_46 = NULL;
        t = SSLgetAnnotations(not_null(p_46));
        {
          w_46 = t;
          if(((v_46 != NULL) && (v_46 != w_46)))
            _fail(w_46);
          else
            v_46 = w_46;
        }
        {
          t = not_null(q_46);
          {
            ATerm z_46 = NULL;
            t = h_50(t);
            {
              x_46 = t;
              {
                t = not_null(r_46);
                {
                  ATerm i_47 = NULL;
                  t = i_50(t);
                  {
                    z_46 = t;
                    {
                      ATerm j_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(x_46), not_null(z_46)), not_null(v_46));
                      {
                        j_47 = t;
                        if(((i_47 != NULL) && (i_47 != j_47)))
                          _fail(j_47);
                        else
                          i_47 = j_47;
                      }
                      t = not_null(i_47);
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
  ATerm r_47 = NULL;
  ATerm u_6;
  u_6 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm s_47 = NULL,t_47 = NULL;
      s_47 = t;
      q_47 :
      if(match_cons(s_47, sym_Program_1))
        {
          t_47 = ATgetArgument(s_47, 0);
          if(((r_47 != NULL) && (r_47 != t_47)))
            _fail(t_47);
          else
            r_47 = t_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(r_47)), term_w_6));
      {
        t = printnl_0(t);
        {
          t = term_y_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_6;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm x_47 = NULL,y_47 = NULL,z_47 = NULL;
  x_47 = t;
  w_47 :
  if(match_cons(x_47, sym__2))
    {
      y_47 = ATgetArgument(x_47, 0);
      z_47 = ATgetArgument(x_47, 1);
      {
        ATerm z_6;
        z_6 = t;
        t = SSL_printnl(not_null(y_47), not_null(z_47));
        t = z_6;
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
  ATerm e_48 = NULL;
  e_48 = t;
  t = SSL_implode_string(not_null(e_48));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
        j_48 = t;
        i_48 :
        if(((ATgetType(j_48) == AT_LIST) && !(ATisEmpty(j_48))))
          {
            k_48 = ATgetFirst((ATermList) j_48);
            l_48 = (ATerm) ATgetNext((ATermList) j_48);
            {
              t = not_null(k_48);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(l_48);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_1);
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
  ATerm v_48 = NULL;
  ATerm x_48 = NULL;
  v_48 = t;
  {
    ATerm y_48 = NULL;
    ATerm a_49 = NULL,b_49 = NULL,c_49 = NULL;
    t = not_null(v_48);
    {
      y_48 = t;
      {
        t = SSL_explode_term(not_null(y_48));
        {
          a_49 = t;
          t_48 :
          if(match_cons(a_49, sym__2))
            {
              b_49 = ATgetArgument(a_49, 0);
              c_49 = ATgetArgument(a_49, 1);
              u_48 :
              if(match_string(b_49, ""))
                {
                  if(((x_48 != NULL) && (x_48 != c_49)))
                    _fail(c_49);
                  else
                    x_48 = c_49;
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
      t = not_null(x_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm g_49 (ATerm t)
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, g_49);
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          t = Nil_0(t);
          t = d_70(t);
        }
      }
    return(t);
  }
  t = g_49(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym__2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        t = not_null(k_49);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(l_49);
            return(t);
          }
          t = at_end_1(t, h_1);
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
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  t = SSL_explode_string(not_null(q_49));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm g_7 = t;
    int h_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(h_7);
      }
    else
      {
        t = g_7;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm i_7;
  i_7 = t;
  {
    ATerm v_49 = NULL,x_49 = NULL;
    ATerm j_7;
    j_7 = t;
    {
      ATerm w_49 = NULL;
      t = m_80(t);
      {
        w_49 = t;
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
      }
    }
    t = j_7;
    {
      ATerm y_49 = NULL;
      y_49 = t;
      if(((x_49 != NULL) && (x_49 != y_49)))
        _fail(y_49);
      else
        x_49 = y_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_49)), not_null(v_49)));
        t = printnl_0(t);
      }
    }
  }
  t = i_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_50 = NULL;
  c_50 = t;
  t = SSL_is_string(not_null(c_50));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        ATerm m_7 = t;
        int n_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              ATerm o_7 = t;
              int p_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(p_7);
                }
              else
                {
                  t = o_7;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, i_1);
            LocalPopChoice(n_7);
          }
        else
          {
            t = m_7;
            {
              ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
              n_50 = t;
              m_50 :
              if(match_cons(n_50, sym_Path_1))
                {
                  o_50 = ATgetArgument(n_50, 0);
                  t = not_null(o_50);
                }
              else
                {
                  if(match_cons(n_50, sym_Var_1))
                    {
                      o_50 = ATgetArgument(n_50, 0);
                      {
                        t = not_null(o_50);
                        {
                          ATerm q_7 = t;
                          int r_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(r_7);
                            }
                          else
                            {
                              t = q_7;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = term_s_7;
                                  return(t);
                                }
                                t = debug_1(t, j_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_50, sym_Prefix_2))
                        {
                          o_50 = ATgetArgument(n_50, 0);
                          p_50 = ATgetArgument(n_50, 1);
                          {
                            ATerm u_50 = NULL,w_50 = NULL;
                            ATerm t_7;
                            t_7 = t;
                            {
                              ATerm v_50 = NULL;
                              t = not_null(o_50);
                              {
                                t = eval_config_0(t);
                                {
                                  v_50 = t;
                                  if(((u_50 != NULL) && (u_50 != v_50)))
                                    _fail(v_50);
                                  else
                                    u_50 = v_50;
                                }
                              }
                            }
                            t = t_7;
                            {
                              ATerm x_50 = NULL;
                              t = not_null(p_50);
                              {
                                t = eval_config_0(t);
                                {
                                  x_50 = t;
                                  if(((w_50 != NULL) && (w_50 != x_50)))
                                    _fail(x_50);
                                  else
                                    w_50 = x_50;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_50), not_null(w_50));
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
  ATerm f_51 = NULL;
  f_51 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(f_51));
    {
      t = table_get_0(t);
      {
        ATerm v_7 = t;
        int w_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm x_7;
              x_7 = t;
              {
                ATerm h_51 = NULL;
                ATerm i_51 = NULL;
                i_51 = t;
                if(((h_51 != NULL) && (h_51 != i_51)))
                  _fail(i_51);
                else
                  h_51 = i_51;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_u_7, not_null(f_51), not_null(h_51));
                  t = table_put_0(t);
                }
              }
              t = x_7;
            }
            LocalPopChoice(w_7);
          }
        else
          {
            t = v_7;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_83 (ATerm))
{
  ATerm y_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_8;
      a_8 = t;
      {
        ATerm m_51 = NULL;
        ATerm n_51 = NULL;
        t = term_b_8;
        {
          t = get_config_0(t);
          {
            n_51 = t;
            if(((m_51 != NULL) && (m_51 != n_51)))
              _fail(n_51);
            else
              m_51 = n_51;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), term_c_8);
          t = geq_0(t);
        }
      }
      t = a_8;
      t = j_83(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = y_7;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm v_51 = NULL,y_51 = NULL,z_51 = NULL;
  v_51 = t;
  u_51 :
  if(match_cons(v_51, sym__2))
    {
      y_51 = ATgetArgument(v_51, 0);
      z_51 = ATgetArgument(v_51, 1);
      t = SSL_WriteToTextFile(not_null(y_51), not_null(z_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,s_53 = NULL;
  o_53 = t;
  n_53 :
  if(match_cons(o_53, sym__2))
    {
      p_53 = ATgetArgument(o_53, 0);
      s_53 = ATgetArgument(o_53, 1);
      t = SSL_WriteToBinaryFile(not_null(p_53), not_null(s_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm f_54 = NULL;
  ATerm d_8;
  d_8 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_1 (ATerm t)
          {
            ATerm g_54 = NULL,h_54 = NULL;
            g_54 = t;
            c_54 :
            if(match_cons(g_54, sym_Output_1))
              {
                h_54 = ATgetArgument(g_54, 0);
                if(((f_54 != NULL) && (f_54 != h_54)))
                  _fail(h_54);
                else
                  f_54 = h_54;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, l_1);
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          {
            ATerm i_54 = NULL;
            t = term_g_8;
            {
              i_54 = t;
              if(((f_54 != NULL) && (f_54 != i_54)))
                _fail(i_54);
              else
                f_54 = i_54;
            }
          }
        }
      return(t);
    }
    t = _2(t, k_1, _id);
  }
  t = d_8;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm n_1 (ATerm t)
      {
        t = not_null(f_54);
        return(t);
      }
      t = split_2(t, n_1, _id);
      return(t);
    }
    t = _2(t, _id, m_1);
    {
      ATerm j_8 = t;
      int k_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              ATerm j_54 = NULL;
              j_54 = t;
              e_54 :
              if(!(match_cons(j_54, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, p_1);
            return(t);
          }
          t = _2(t, o_1, WriteToBinaryFile_0);
          LocalPopChoice(k_8);
        }
      else
        {
          t = j_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm q_81 (ATerm))
{
  ATerm t_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL;
  ATerm l_8;
  l_8 = t;
  t = dtime_0(t);
  t = l_8;
  {
    t = q_81(t);
    {
      ATerm m_8;
      m_8 = t;
      {
        ATerm u_54 = NULL;
        t = dtime_0(t);
        {
          u_54 = t;
          if(((t_54 != NULL) && (t_54 != u_54)))
            _fail(u_54);
          else
            t_54 = u_54;
        }
      }
      t = m_8;
      {
        v_54 = t;
        s_54 :
        if(match_cons(v_54, sym__2))
          {
            w_54 = ATgetArgument(v_54, 0);
            x_54 = ATgetArgument(v_54, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_54)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_54))), not_null(x_54));
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
  ATerm d_55 = NULL;
  d_55 = t;
  t = SSL_ReadFromFile(not_null(d_55));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_77 (ATerm), ATerm s_77 (ATerm))
{
  ATerm i_55 = NULL,k_55 = NULL;
  ATerm n_8;
  n_8 = t;
  {
    ATerm j_55 = NULL;
    t = r_77(t);
    {
      j_55 = t;
      if(((i_55 != NULL) && (i_55 != j_55)))
        _fail(j_55);
      else
        i_55 = j_55;
    }
  }
  t = n_8;
  {
    ATerm l_55 = NULL;
    t = s_77(t);
    {
      l_55 = t;
      if(((k_55 != NULL) && (k_55 != l_55)))
        _fail(l_55);
      else
        k_55 = l_55;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_55), not_null(k_55));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_55 = NULL;
  ATerm o_8;
  o_8 = t;
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_1 (ATerm t)
        {
          ATerm s_55 = NULL,t_55 = NULL;
          s_55 = t;
          p_55 :
          if(match_cons(s_55, sym_Input_1))
            {
              t_55 = ATgetArgument(s_55, 0);
              if(((r_55 != NULL) && (r_55 != t_55)))
                _fail(t_55);
              else
                r_55 = t_55;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, q_1);
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        {
          ATerm u_55 = NULL;
          t = term_r_8;
          {
            u_55 = t;
            if(((r_55 != NULL) && (r_55 != u_55)))
              _fail(u_55);
            else
              r_55 = u_55;
          }
        }
      }
  }
  t = o_8;
  {
    ATerm r_1 (ATerm t)
    {
      t = not_null(r_55);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, r_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm b_56 = NULL;
    b_56 = t;
    a_56 :
    if(!(match_string(b_56, "-v")))
      {
        if(!(match_string(b_56, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = term_u_8;
    t = set_config_0(t);
    t = term_v_8;
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = term_w_8;
    return(t);
  }
  t = Option_3(t, s_1, t_1, u_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm e_56 = NULL;
    e_56 = t;
    c_56 :
    if(!(match_string(e_56, "-k")))
      {
        if(!(match_string(e_56, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm f_56 = NULL;
      ATerm g_56 = NULL;
      t = string_to_int_0(t);
      {
        g_56 = t;
        if(((f_56 != NULL) && (f_56 != g_56)))
          _fail(g_56);
        else
          f_56 = g_56;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(f_56));
        t = set_config_0(t);
      }
    }
    t = x_8;
    return(t);
  }
  ATerm x_1 (ATerm t)
  {
    t = term_z_8;
    return(t);
  }
  t = ArgOption_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm j_56 = NULL;
  j_56 = t;
  t = SSL_string_to_int(not_null(j_56));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm a_9 = t;
  int b_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm r_56 = NULL;
        r_56 = t;
        m_56 :
        if(!(match_string(r_56, "-S")))
          {
            if(!(match_string(r_56, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_1 (ATerm t)
      {
        t = term_d_9;
        t = set_config_0(t);
        t = term_e_9;
        return(t);
      }
      ATerm a_2 (ATerm t)
      {
        t = term_f_9;
        return(t);
      }
      t = Option_3(t, y_1, z_1, a_2);
      LocalPopChoice(b_9);
    }
  else
    {
      t = a_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm s_56 = NULL;
              s_56 = t;
              n_56 :
              if(!(match_string(s_56, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_2 (ATerm t)
            {
              ATerm v_56 = NULL;
              ATerm i_9;
              i_9 = t;
              {
                ATerm t_56 = NULL;
                ATerm u_56 = NULL;
                t = string_to_int_0(t);
                {
                  u_56 = t;
                  if(((t_56 != NULL) && (t_56 != u_56)))
                    _fail(u_56);
                  else
                    t_56 = u_56;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(t_56));
                  t = set_config_0(t);
                }
              }
              t = i_9;
              {
                ATerm w_56 = NULL;
                w_56 = t;
                if(((v_56 != NULL) && (v_56 != w_56)))
                  _fail(w_56);
                else
                  v_56 = w_56;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(v_56));
              }
              return(t);
            }
            ATerm d_2 (ATerm t)
            {
              t = term_j_9;
              return(t);
            }
            t = ArgOption_3(t, b_2, c_2, d_2);
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            {
              ATerm e_2 (ATerm t)
              {
                ATerm x_56 = NULL;
                x_56 = t;
                q_56 :
                if(!(match_string(x_56, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_2 (ATerm t)
              {
                t = term_l_9;
                t = set_config_0(t);
                t = term_m_9;
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                t = term_n_9;
                return(t);
              }
              t = Option_3(t, e_2, f_2, g_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm d_57 = NULL;
    d_57 = t;
    a_57 :
    if(!(match_string(d_57, "-o")))
      {
        if(!(match_string(d_57, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_2 (ATerm t)
  {
    ATerm g_57 = NULL;
    ATerm s_9;
    s_9 = t;
    {
      ATerm e_57 = NULL;
      ATerm f_57 = NULL;
      f_57 = t;
      if(((e_57 != NULL) && (e_57 != f_57)))
        _fail(f_57);
      else
        e_57 = f_57;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(e_57));
        t = set_config_0(t);
      }
    }
    t = s_9;
    {
      ATerm h_57 = NULL;
      h_57 = t;
      if(((g_57 != NULL) && (g_57 != h_57)))
        _fail(h_57);
      else
        g_57 = h_57;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_57));
    }
    return(t);
  }
  ATerm j_2 (ATerm t)
  {
    t = term_u_9;
    return(t);
  }
  t = ArgOption_3(t, h_2, i_2, j_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_9 = t;
  int w_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_9);
    }
  else
    {
      t = v_9;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm l_57 = NULL;
          l_57 = t;
          k_57 :
          if(!(match_string(l_57, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_2 (ATerm t)
        {
          t = term_y_9;
          t = set_config_0(t);
          t = term_z_9;
          return(t);
        }
        ATerm m_2 (ATerm t)
        {
          t = term_b_10;
          return(t);
        }
        t = Option_3(t, k_2, l_2, m_2);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL;
  r_57 = t;
  p_57 :
  if(match_string(r_57, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(r_57) == AT_LIST) && !(ATisEmpty(r_57))))
        {
          s_57 = ATgetFirst((ATermList) r_57);
          t_57 = (ATerm) ATgetNext((ATermList) r_57);
          q_57 :
          if(((ATgetType(t_57) == AT_LIST) && !(ATisEmpty(t_57))))
            {
              u_57 = ATgetFirst((ATermList) t_57);
              v_57 = (ATerm) ATgetNext((ATermList) t_57);
              {
                ATerm z_57 = NULL;
                ATerm d_10;
                d_10 = t;
                {
                  t = not_null(s_57);
                  t = j_0(t);
                }
                t = d_10;
                {
                  ATerm a_58 = NULL;
                  t = not_null(u_57);
                  {
                    t = k_0(t);
                    {
                      a_58 = t;
                      if(((z_57 != NULL) && (z_57 != a_58)))
                        _fail(a_58);
                      else
                        z_57 = a_58;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_57)), not_null(z_57));
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
  ATerm n_2 (ATerm t)
  {
    ATerm h_58 = NULL;
    h_58 = t;
    e_58 :
    if(!(match_string(h_58, "-i")))
      {
        if(!(match_string(h_58, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    ATerm k_58 = NULL;
    ATerm e_10;
    e_10 = t;
    {
      ATerm i_58 = NULL;
      ATerm j_58 = NULL;
      j_58 = t;
      if(((i_58 != NULL) && (i_58 != j_58)))
        _fail(j_58);
      else
        i_58 = j_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_10, not_null(i_58));
        t = set_config_0(t);
      }
    }
    t = e_10;
    {
      ATerm l_58 = NULL;
      l_58 = t;
      if(((k_58 != NULL) && (k_58 != l_58)))
        _fail(l_58);
      else
        k_58 = l_58;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_58));
    }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  t = ArgOption_3(t, n_2, o_2, p_2);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, term_l_10));
  {
    t = printnl_0(t);
    {
      t = term_y_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  t = SSL_TicksToSeconds(not_null(p_58));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_58), not_null(w_58));
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = SSL_addr(not_null(v_58), not_null(w_58));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm c_76 (ATerm), ATerm d_76 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_76(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
        d_59 = t;
        c_59 :
        if(((ATgetType(d_59) == AT_LIST) && !(ATisEmpty(d_59))))
          {
            e_59 = ATgetFirst((ATermList) d_59);
            f_59 = (ATerm) ATgetNext((ATermList) d_59);
            {
              ATerm i_59 = NULL;
              ATerm j_59 = NULL;
              t = not_null(f_59);
              {
                t = foldr_2(t, c_76, d_76);
                {
                  j_59 = t;
                  if(((i_59 != NULL) && (i_59 != j_59)))
                    _fail(j_59);
                  else
                    i_59 = j_59;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_59), not_null(i_59));
                t = d_76(t);
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
ATerm crush_2 (ATerm t, ATerm a_75 (ATerm), ATerm b_75 (ATerm))
{
  ATerm q_59 = NULL;
  ATerm s_59 = NULL;
  q_59 = t;
  {
    ATerm t_59 = NULL;
    ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
    t = not_null(q_59);
    {
      t_59 = t;
      {
        t = SSL_explode_term(not_null(t_59));
        {
          v_59 = t;
          p_59 :
          if(match_cons(v_59, sym__2))
            {
              w_59 = ATgetArgument(v_59, 0);
              x_59 = ATgetArgument(v_59, 1);
              if(((s_59 != NULL) && (s_59 != x_59)))
                _fail(x_59);
              else
                s_59 = x_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(s_59);
      t = foldr_2(t, a_75, b_75);
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
    ATerm q_2 (ATerm t)
    {
      t = term_c_9;
      return(t);
    }
    t = crush_2(t, q_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym__2))
    {
      e_60 = ATgetArgument(d_60, 0);
      f_60 = ATgetArgument(d_60, 1);
      {
        ATerm q_10;
        q_10 = t;
        {
          ATerm r_10 = t;
          int s_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_60), not_null(f_60));
              LocalPopChoice(s_10);
            }
          else
            {
              t = r_10;
              t = SSL_gtr(not_null(e_60), not_null(f_60));
            }
        }
        t = q_10;
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
  ATerm l_60 = NULL;
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_60 = NULL,n_60 = NULL,o_60 = NULL;
      m_60 = t;
      k_60 :
      if(match_cons(m_60, sym__2))
        {
          n_60 = ATgetArgument(m_60, 0);
          o_60 = ATgetArgument(m_60, 1);
          {
            if(((l_60 != NULL) && (l_60 != n_60)))
              _fail(n_60);
            else
              l_60 = n_60;
            if(((l_60 != NULL) && (l_60 != o_60)))
              _fail(o_60);
            else
              l_60 = o_60;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_83 (ATerm))
{
  ATerm v_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_10;
      x_10 = t;
      {
        ATerm r_60 = NULL;
        ATerm s_60 = NULL;
        t = term_b_8;
        {
          t = get_config_0(t);
          {
            s_60 = t;
            if(((r_60 != NULL) && (r_60 != s_60)))
              _fail(s_60);
            else
              r_60 = s_60;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_60), term_y_6);
          t = geq_0(t);
        }
      }
      t = x_10;
      t = i_83(t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = v_10;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm w_60 = NULL,y_60 = NULL;
    ATerm y_10;
    y_10 = t;
    {
      ATerm x_60 = NULL;
      t = run_time_0(t);
      {
        x_60 = t;
        if(((w_60 != NULL) && (w_60 != x_60)))
          _fail(x_60);
        else
          w_60 = x_60;
      }
    }
    t = y_10;
    {
      ATerm z_60 = NULL;
      t = term_z_10;
      {
        t = get_config_0(t);
        {
          z_60 = t;
          if(((y_60 != NULL) && (y_60 != z_60)))
            _fail(z_60);
          else
            y_60 = z_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_11), not_null(w_60)), term_a_11), not_null(y_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, r_2);
  {
    t = term_c_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_61 = NULL;
  g_61 = t;
  f_61 :
  if(match_cons(g_61, sym_Version_0))
    {
      ATerm i_61 = NULL,m_61 = NULL;
      ATerm c_11;
      c_11 = t;
      {
        ATerm j_61 = NULL;
        t = SSLgetAnnotations(not_null(g_61));
        {
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
        }
      }
      t = c_11;
      {
        ATerm n_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_61));
        {
          n_61 = t;
          if(((m_61 != NULL) && (m_61 != n_61)))
            _fail(n_61);
          else
            m_61 = n_61;
        }
        t = not_null(m_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_81 (ATerm))
{
  ATerm s_2 (ATerm t)
  {
    ATerm e_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = e_11;
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, s_2);
  t = o_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm s_61 = NULL;
  s_61 = t;
  t = SSL_table_create(not_null(s_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_61 = NULL;
  z_61 = t;
  {
    ATerm k_11;
    k_11 = t;
    {
      t = term_m_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_11, term_p_11, not_null(z_61));
          t = table_put_0(t);
        }
      }
    }
    t = k_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_62 = NULL;
  d_62 = t;
  t = SSL_table_destroy(not_null(d_62));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_62 = NULL;
  h_62 = t;
  t = SSL_exit(not_null(h_62));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  k_62 :
  if(((ATgetType(l_62) == AT_LIST) && ATisEmpty(l_62)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_62) == AT_LIST) && !(ATisEmpty(l_62))))
        {
          m_62 = ATgetFirst((ATermList) l_62);
          n_62 = (ATerm) ATgetNext((ATermList) l_62);
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
  ATerm q_11;
  q_11 = t;
  {
    ATerm q_62 = NULL;
    ATerm t_62 = NULL;
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        {
          ATerm r_62 = NULL;
          ATerm s_62 = NULL;
          s_62 = t;
          if(((r_62 != NULL) && (r_62 != s_62)))
            _fail(s_62);
          else
            r_62 = s_62;
          t = (ATerm) ATinsert(ATempty, not_null(r_62));
        }
      }
    {
      t_62 = t;
      if(((q_62 != NULL) && (q_62 != t_62)))
        _fail(t_62);
      else
        q_62 = t_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, not_null(q_62));
      t = printnl_0(t);
    }
  }
  t = q_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm m_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm w_62 (ATerm t)
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = Cons_2(t, o_69, w_62);
      }
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
  f_63 = t;
  c_63 :
  if(((ATgetType(f_63) == AT_LIST) && !(ATisEmpty(f_63))))
    {
      d_63 = ATgetFirst((ATermList) f_63);
      e_63 = (ATerm) ATgetNext((ATermList) f_63);
      {
        ATerm i_63 = NULL;
        t = not_null(e_63);
        {
          ATerm v_11;
          v_11 = t;
          {
            ATerm j_63 = NULL,l_63 = NULL,n_63 = NULL;
            ATerm w_11;
            w_11 = t;
            {
              ATerm k_63 = NULL;
              t = i_0(t);
              {
                k_63 = t;
                if(((j_63 != NULL) && (j_63 != k_63)))
                  _fail(k_63);
                else
                  j_63 = k_63;
              }
            }
            t = w_11;
            {
              ATerm m_63 = NULL;
              t = not_null(d_63);
              {
                t = h_0(t);
                {
                  m_63 = t;
                  if(((l_63 != NULL) && (l_63 != m_63)))
                    _fail(m_63);
                  else
                    l_63 = m_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_63)), not_null(l_63));
                {
                  n_63 = t;
                  if(((i_63 != NULL) && (i_63 != n_63)))
                    _fail(n_63);
                  else
                    i_63 = n_63;
                }
              }
            }
          }
          t = v_11;
          {
            ATerm t_2 (ATerm t)
            {
              t = not_null(i_63);
              return(t);
            }
            t = reverse_acc_2(t, h_0, t_2);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_63) == AT_LIST) && ATisEmpty(f_63)))
        {
          {
            t = term_t_8;
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
  ATerm u_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm l_85 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_61 (ATerm))
{
  ATerm y_63 = NULL,z_63 = NULL;
  y_63 = t;
  x_63 :
  if(match_cons(y_63, sym_Program_1))
    {
      z_63 = ATgetArgument(y_63, 0);
      {
        ATerm c_64 = NULL,e_64 = NULL;
        ATerm d_64 = NULL;
        t = SSLgetAnnotations(not_null(y_63));
        {
          d_64 = t;
          if(((c_64 != NULL) && (c_64 != d_64)))
            _fail(d_64);
          else
            c_64 = d_64;
        }
        {
          t = not_null(z_63);
          {
            ATerm g_64 = NULL;
            t = k_61(t);
            {
              e_64 = t;
              {
                ATerm h_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_64)), not_null(c_64));
                {
                  h_64 = t;
                  if(((g_64 != NULL) && (g_64 != h_64)))
                    _fail(h_64);
                  else
                    g_64 = h_64;
                }
                t = not_null(g_64);
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
  ATerm p_64 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_64 = NULL;
      t = term_z_10;
      {
        t = get_config_0(t);
        {
          q_64 = t;
          if(((p_64 != NULL) && (p_64 != q_64)))
            _fail(q_64);
          else
            p_64 = q_64;
        }
      }
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm r_64 = NULL;
            r_64 = t;
            if(((p_64 != NULL) && (p_64 != r_64)))
              _fail(r_64);
            else
              p_64 = r_64;
            return(t);
          }
          t = Program_1(t, w_2);
          return(t);
        }
        t = fetch_1(t, v_2);
      }
    }
  {
    t = term_d_12;
    {
      t = echo_0(t);
      {
        t = term_j_12;
        {
          t = table_get_0(t);
          {
            ATerm x_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_2);
            {
              ATerm y_2 (ATerm t)
              {
                ATerm s_64 = NULL;
                ATerm t_64 = NULL;
                t_64 = t;
                if(((s_64 != NULL) && (s_64 != t_64)))
                  _fail(t_64);
                else
                  s_64 = t_64;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_64)), term_l_12);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, y_2);
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
  ATerm o_12;
  o_12 = t;
  {
    ATerm y_64 = NULL;
    ATerm z_64 = NULL;
    z_64 = t;
    if(((y_64 != NULL) && (y_64 != z_64)))
      _fail(z_64);
    else
      y_64 = z_64;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(y_64)));
      t = printnl_0(t);
    }
  }
  t = o_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm n_80 (ATerm))
{
  ATerm p_12;
  p_12 = t;
  {
    t = n_80(t);
    t = debug_0(t);
  }
  t = p_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm g_65 = NULL,h_65 = NULL;
  g_65 = t;
  f_65 :
  if(match_cons(g_65, sym_Undefined_1))
    {
      h_65 = ATgetArgument(g_65, 0);
      {
        ATerm k_65 = NULL,m_65 = NULL;
        ATerm l_65 = NULL;
        t = SSLgetAnnotations(not_null(g_65));
        {
          l_65 = t;
          if(((k_65 != NULL) && (k_65 != l_65)))
            _fail(l_65);
          else
            k_65 = l_65;
        }
        {
          t = not_null(h_65);
          {
            ATerm o_65 = NULL;
            t = l_61(t);
            {
              m_65 = t;
              {
                ATerm p_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_65)), not_null(k_65));
                {
                  p_65 = t;
                  if(((o_65 != NULL) && (o_65 != p_65)))
                    _fail(p_65);
                  else
                    o_65 = p_65;
                }
                t = not_null(o_65);
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
ATerm fetch_1 (ATerm t, ATerm x_69 (ATerm))
{
  ATerm u_65 (ATerm t)
  {
    ATerm q_12 = t;
    int r_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_69, _id);
        LocalPopChoice(r_12);
      }
    else
      {
        t = q_12;
        t = Cons_2(t, _id, u_65);
      }
    return(t);
  }
  t = u_65(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm l_84 (ATerm))
{
  t = fetch_1(t, l_84);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_65 = NULL;
  z_65 = t;
  y_65 :
  if(match_cons(z_65, sym_Help_0))
    {
      ATerm b_66 = NULL,d_66 = NULL;
      ATerm s_12;
      s_12 = t;
      {
        ATerm c_66 = NULL;
        t = SSLgetAnnotations(not_null(z_65));
        {
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
        }
      }
      t = s_12;
      {
        ATerm e_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_66));
        {
          e_66 = t;
          if(((d_66 != NULL) && (d_66 != e_66)))
            _fail(e_66);
          else
            d_66 = e_66;
        }
        t = not_null(d_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_61 (ATerm))
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_61(t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_66 = NULL,l_66 = NULL,m_66 = NULL;
  k_66 = t;
  j_66 :
  if(match_cons(k_66, sym__2))
    {
      l_66 = ATgetArgument(k_66, 0);
      m_66 = ATgetArgument(k_66, 1);
      t = SSL_table_get(not_null(l_66), not_null(m_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL;
  t_66 = t;
  s_66 :
  if(match_cons(t_66, sym__3))
    {
      u_66 = ATgetArgument(t_66, 0);
      v_66 = ATgetArgument(t_66, 1);
      w_66 = ATgetArgument(t_66, 2);
      {
        ATerm v_12;
        v_12 = t;
        {
          ATerm a_67 = NULL;
          ATerm b_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_66), not_null(v_66));
          {
            ATerm w_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_12);
              }
            else
              {
                t = w_12;
                t = (ATerm) ATempty;
              }
            {
              b_67 = t;
              if(((a_67 != NULL) && (a_67 != b_67)))
                _fail(b_67);
              else
                a_67 = b_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_66), not_null(v_66), (ATerm) ATinsert(CheckATermList(not_null(a_67)), not_null(w_66)));
            t = table_put_0(t);
          }
        }
        t = v_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm f_67 = NULL;
  ATerm g_67 = NULL;
  t = term_t_8;
  {
    t = q_85(t);
    {
      g_67 = t;
      if(((f_67 != NULL) && (f_67 != g_67)))
        _fail(g_67);
      else
        f_67 = g_67;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_12, term_f_12, not_null(f_67));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
  m_67 = t;
  l_67 :
  if(match_string(m_67, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(m_67) == AT_LIST) && !(ATisEmpty(m_67))))
        {
          n_67 = ATgetFirst((ATermList) m_67);
          o_67 = (ATerm) ATgetNext((ATermList) m_67);
          {
            ATerm r_67 = NULL;
            ATerm y_12;
            y_12 = t;
            {
              t = not_null(n_67);
              t = a_0(t);
            }
            t = y_12;
            {
              ATerm s_67 = NULL;
              t = term_t_8;
              {
                t = d_0(t);
                {
                  s_67 = t;
                  if(((r_67 != NULL) && (r_67 != s_67)))
                    _fail(s_67);
                  else
                    r_67 = s_67;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(o_67)), not_null(r_67));
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
  ATerm z_2 (ATerm t)
  {
    ATerm x_67 = NULL;
    x_67 = t;
    w_67 :
    if(!(match_string(x_67, "--help")))
      {
        if(!(match_string(x_67, "-h")))
          {
            if(!(match_string(x_67, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_a_13;
    {
      t = set_config_0(t);
      t = term_e_13;
    }
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  t = Option_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
  a_68 = t;
  z_67 :
  if(((ATgetType(a_68) == AT_LIST) && !(ATisEmpty(a_68))))
    {
      b_68 = ATgetFirst((ATermList) a_68);
      c_68 = (ATerm) ATgetNext((ATermList) a_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_68)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_51 (ATerm), ATerm r_51 (ATerm))
{
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(((ATgetType(m_68) == AT_LIST) && !(ATisEmpty(m_68))))
    {
      n_68 = ATgetFirst((ATermList) m_68);
      o_68 = (ATerm) ATgetNext((ATermList) m_68);
      {
        ATerm s_68 = NULL,u_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(m_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(n_68);
          {
            ATerm w_68 = NULL;
            t = q_51(t);
            {
              u_68 = t;
              {
                t = not_null(o_68);
                {
                  ATerm y_68 = NULL;
                  t = r_51(t);
                  {
                    w_68 = t;
                    {
                      ATerm z_68 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_68)), not_null(u_68)), not_null(s_68));
                      {
                        z_68 = t;
                        if(((y_68 != NULL) && (y_68 != z_68)))
                          _fail(z_68);
                        else
                          y_68 = z_68;
                      }
                      t = not_null(y_68);
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
  ATerm j_69 = NULL;
  j_69 = t;
  i_69 :
  if(((ATgetType(j_69) == AT_LIST) && ATisEmpty(j_69)))
    {
      {
        ATerm l_69 = NULL,s_69 = NULL;
        ATerm j_13;
        j_13 = t;
        {
          ATerm n_69 = NULL;
          t = SSLgetAnnotations(not_null(j_69));
          {
            n_69 = t;
            if(((l_69 != NULL) && (l_69 != n_69)))
              _fail(n_69);
            else
              l_69 = n_69;
          }
        }
        t = j_13;
        {
          ATerm t_69 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_69));
          {
            t_69 = t;
            if(((s_69 != NULL) && (s_69 != t_69)))
              _fail(t_69);
            else
              s_69 = t_69;
          }
          t = not_null(s_69);
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
  ATerm b_70 = NULL,c_70 = NULL,f_70 = NULL;
  b_70 = t;
  a_70 :
  if(match_cons(b_70, sym__2))
    {
      c_70 = ATgetArgument(b_70, 0);
      f_70 = ATgetArgument(b_70, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_7, not_null(c_70), not_null(f_70));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm m_13;
  m_13 = t;
  {
    ATerm n_13 = t;
    int r_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_13;
        t = o_85(t);
        LocalPopChoice(r_13);
      }
    else
      {
        t = n_13;
        {
        }
      }
  }
  t = m_13;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm n_70 = NULL;
      ATerm v_13;
      v_13 = t;
      {
        ATerm l_70 = NULL;
        ATerm m_70 = NULL;
        m_70 = t;
        if(((l_70 != NULL) && (l_70 != m_70)))
          _fail(m_70);
        else
          l_70 = m_70;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(l_70));
          t = set_config_0(t);
        }
      }
      t = v_13;
      {
        ATerm o_70 = NULL;
        o_70 = t;
        if(((n_70 != NULL) && (n_70 != o_70)))
          _fail(o_70);
        else
          n_70 = o_70;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_70));
      }
      return(t);
    }
    ATerm d_3 (ATerm t)
    {
      ATerm w_13 = t;
      int x_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_13 = t;
          int z_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_13);
            }
          else
            {
              t = y_13;
              {
                t = o_85(t);
                t = Cons_2(t, _id, d_3);
              }
            }
          LocalPopChoice(x_13);
        }
      else
        {
          t = w_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_3, d_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm u_70 = NULL,v_70 = NULL,w_70 = NULL;
  ATerm a_14;
  a_14 = t;
  {
    ATerm x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
    x_70 = t;
    t_70 :
    if(match_cons(x_70, sym__3))
      {
        y_70 = ATgetArgument(x_70, 0);
        z_70 = ATgetArgument(x_70, 1);
        a_71 = ATgetArgument(x_70, 2);
        {
          if(((u_70 != NULL) && (u_70 != y_70)))
            _fail(y_70);
          else
            u_70 = y_70;
          {
            if(((v_70 != NULL) && (v_70 != z_70)))
              _fail(z_70);
            else
              v_70 = z_70;
            {
              if(((w_70 != NULL) && (w_70 != a_71)))
                _fail(a_71);
              else
                w_70 = a_71;
              t = SSL_table_put(not_null(u_70), not_null(v_70), not_null(w_70));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_14;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm n_85 (ATerm))
{
  ATerm d_71 = NULL;
  ATerm b_14;
  b_14 = t;
  {
    t = term_c_14;
    t = table_put_0(t);
  }
  t = b_14;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm d_14 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_85(t);
          LocalPopChoice(e_14);
        }
      else
        {
          t = d_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_3);
    {
      ATerm f_14 = t;
      int g_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_14;
          l_14 = t;
          {
            ATerm m_14 = t;
            int n_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_z_12;
                t = get_config_0(t);
                LocalPopChoice(n_14);
              }
            else
              {
                t = m_14;
                t = fetch_1(t, Help_0);
              }
          }
          t = l_14;
          {
            t = system_usage_0(t);
            {
              t = term_c_9;
              t = exit_0(t);
            }
          }
          LocalPopChoice(g_14);
        }
      else
        {
          t = f_14;
          {
            ATerm r_14 = t;
            int t_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_3 (ATerm t)
                {
                  ATerm g_3 (ATerm t)
                  {
                    ATerm e_71 = NULL;
                    e_71 = t;
                    if(((d_71 != NULL) && (d_71 != e_71)))
                      _fail(e_71);
                    else
                      d_71 = e_71;
                    return(t);
                  }
                  t = Undefined_1(t, g_3);
                  return(t);
                }
                t = fetch_1(t, f_3);
                {
                  ATerm h_3 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_71)), term_w_14);
                    return(t);
                  }
                  t = say_1(t, h_3);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(t_14);
              }
            else
              {
                t = r_14;
                {
                }
              }
          }
        }
      {
        ATerm x_14;
        x_14 = t;
        {
          t = term_e_12;
          t = table_destroy_0(t);
        }
        t = x_14;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm), ATerm w_81 (ATerm), ATerm x_81 (ATerm))
{
  t = parse_options_1(t, u_81);
  {
    t = store_options_0(t);
    {
      t = w_81(t);
      {
        ATerm y_14 = t;
        int z_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_81);
            LocalPopChoice(z_14);
          }
        else
          {
            t = y_14;
            {
              ATerm a_15 = t;
              int b_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_81(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_15);
                }
              else
                {
                  t = a_15;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_82 (ATerm), ATerm m_82 (ATerm), ATerm n_82 (ATerm), ATerm o_82 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_82(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_82);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, i_3, n_82, o_82, j_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_82 (ATerm), ATerm g_82 (ATerm), ATerm h_82 (ATerm))
{
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm e_15;
      e_15 = t;
      {
        ATerm h_71 = NULL;
        ATerm i_71 = NULL;
        t = term_z_10;
        {
          t = get_config_0(t);
          {
            i_71 = t;
            if(((h_71 != NULL) && (h_71 != i_71)))
              _fail(i_71);
            else
              h_71 = i_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATempty, not_null(h_71)));
          t = printnl_0(t);
        }
      }
      t = e_15;
      return(t);
    }
    t = if_verbose2_1(t, l_3);
    return(t);
  }
  t = iowrap_4(t, f_82, g_82, h_82, k_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_82 (ATerm), ATerm e_82 (ATerm))
{
  t = iowrap_3(t, d_82, e_82, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_82 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = _2(t, _id, a_82);
    return(t);
  }
  t = iowrap_2(t, m_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
