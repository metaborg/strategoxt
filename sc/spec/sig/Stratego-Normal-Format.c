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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
Symbol sym_OpDecl_2;
Symbol sym_Sorts_1;
Symbol sym_Constructors_1;
Symbol sym_NoKind_0;
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
ATerm term_p_14;
ATerm term_z_13;
ATerm term_r_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_b_13;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_f_12;
ATerm term_b_12;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_o_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_t_8;
ATerm term_k_8;
ATerm term_d_8;
ATerm term_b_8;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_b_7;
ATerm term_w_6;
ATerm term_r_6;
ATerm term_o_4;
void init_constant_terms (void)
{
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym__2, term_b_8, term_h_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_h_9);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_x_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_x_9);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_h_12);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_x_9);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__3, term_f_12, term_h_12, (ATerm) ATempty);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Let_2 (ATerm, ATerm p_58 (ATerm), ATerm q_58 (ATerm));
ATerm Op_2 (ATerm, ATerm u_57 (ATerm), ATerm v_57 (ATerm));
ATerm Var_1 (ATerm, ATerm l_0 (ATerm));
ATerm As_2 (ATerm, ATerm a_56 (ATerm), ATerm b_56 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_56 (ATerm));
ATerm Str_1 (ATerm, ATerm t_57 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm s_57 (ATerm));
ATerm Int_1 (ATerm, ATerm r_57 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm u_59 (ATerm), ATerm v_59 (ATerm));
ATerm Where_1 (ATerm, ATerm t_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm r_59 (ATerm), ATerm s_59 (ATerm));
ATerm Build_1 (ATerm, ATerm o_59 (ATerm));
ATerm Match_1 (ATerm, ATerm n_59 (ATerm));
ATerm Thread_1 (ATerm, ATerm k_59 (ATerm));
ATerm All_1 (ATerm, ATerm j_59 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm h_59 (ATerm));
ATerm Cong_2 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm Rec_2 (ATerm, ATerm n_58 (ATerm), ATerm o_58 (ATerm));
ATerm SVar_1 (ATerm, ATerm m_58 (ATerm));
ATerm Call_2 (ATerm, ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm j_58 (ATerm), ATerm k_58 (ATerm));
ATerm GChoice_2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm GuardedLChoice_3 (ATerm, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm));
ATerm LChoice_2 (ATerm, ATerm c_58 (ATerm), ATerm d_58 (ATerm));
ATerm Choice_2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm Seq_2 (ATerm, ATerm y_57 (ATerm), ATerm z_57 (ATerm));
ATerm Test_1 (ATerm, ATerm w_57 (ATerm));
ATerm Not_1 (ATerm, ATerm x_57 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm));
ATerm Mod_2 (ATerm, ATerm w_56 (ATerm), ATerm x_56 (ATerm));
ATerm SDef_3 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm i_78 (ATerm));
ATerm Strategies_1 (ATerm, ATerm e_57 (ATerm));
ATerm Specification_1 (ATerm, ATerm g_57 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm o_48 (ATerm), ATerm p_48 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm v_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_68 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm t_65 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_67 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_71 (ATerm), ATerm f_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm crush_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm s_65 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_67 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_63 (ATerm));
ATerm map_1 (ATerm, ATerm g_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_63 (ATerm));
ATerm Program_1 (ATerm, ATerm c_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm q_68 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm p_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_65 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm a_87 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_64 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_59 (ATerm), ATerm x_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_63 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_67 (ATerm));
ATerm main_0 (ATerm);
ATerm Let_2 (ATerm t, ATerm p_58 (ATerm), ATerm q_58 (ATerm))
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
  g_8 = t;
  c_8 :
  if(match_cons(g_8, sym_Let_2))
    {
      h_8 = ATgetArgument(g_8, 0);
      i_8 = ATgetArgument(g_8, 1);
      {
        ATerm q_10 = NULL,s_10 = NULL;
        ATerm r_10 = NULL;
        t = SSLgetAnnotations(not_null(g_8));
        {
          r_10 = t;
          if(((q_10 != NULL) && (q_10 != r_10)))
            _fail(r_10);
          else
            q_10 = r_10;
        }
        {
          t = not_null(h_8);
          {
            ATerm e_11 = NULL;
            t = p_58(t);
            {
              s_10 = t;
              {
                t = not_null(i_8);
                {
                  ATerm j_11 = NULL;
                  t = q_58(t);
                  {
                    e_11 = t;
                    {
                      ATerm k_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(s_10), not_null(e_11)), not_null(q_10));
                      {
                        k_11 = t;
                        if(((j_11 != NULL) && (j_11 != k_11)))
                          _fail(k_11);
                        else
                          j_11 = k_11;
                      }
                      t = not_null(j_11);
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
ATerm Op_2 (ATerm t, ATerm u_57 (ATerm), ATerm v_57 (ATerm))
{
  ATerm w_11 = NULL,x_11 = NULL,y_11 = NULL;
  w_11 = t;
  v_11 :
  if(match_cons(w_11, sym_Op_2))
    {
      x_11 = ATgetArgument(w_11, 0);
      y_11 = ATgetArgument(w_11, 1);
      {
        ATerm c_12 = NULL,e_12 = NULL;
        ATerm d_12 = NULL;
        t = SSLgetAnnotations(not_null(w_11));
        {
          d_12 = t;
          if(((c_12 != NULL) && (c_12 != d_12)))
            _fail(d_12);
          else
            c_12 = d_12;
        }
        {
          t = not_null(x_11);
          {
            ATerm g_12 = NULL;
            t = u_57(t);
            {
              e_12 = t;
              {
                t = not_null(y_11);
                {
                  ATerm i_12 = NULL;
                  t = v_57(t);
                  {
                    g_12 = t;
                    {
                      ATerm j_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, not_null(e_12), not_null(g_12)), not_null(c_12));
                      {
                        j_12 = t;
                        if(((i_12 != NULL) && (i_12 != j_12)))
                          _fail(j_12);
                        else
                          i_12 = j_12;
                      }
                      t = not_null(i_12);
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
ATerm Var_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_Var_1))
    {
      z_12 = ATgetArgument(y_12, 0);
      {
        ATerm v_3 = t;
        int w_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_13 = NULL,e_13 = NULL;
            ATerm d_13 = NULL;
            t = SSLgetAnnotations(not_null(y_12));
            {
              d_13 = t;
              if(((c_13 != NULL) && (c_13 != d_13)))
                _fail(d_13);
              else
                c_13 = d_13;
            }
            {
              t = not_null(z_12);
              {
                ATerm g_13 = NULL;
                t = l_0(t);
                {
                  e_13 = t;
                  {
                    ATerm h_13 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_13)), not_null(c_13));
                    {
                      h_13 = t;
                      if(((g_13 != NULL) && (g_13 != h_13)))
                        _fail(h_13);
                      else
                        g_13 = h_13;
                    }
                    t = not_null(g_13);
                  }
                }
              }
            }
            LocalPopChoice(w_3);
          }
        else
          {
            t = v_3;
            {
              ATerm k_13 = NULL,m_13 = NULL;
              ATerm l_13 = NULL;
              t = SSLgetAnnotations(not_null(y_12));
              {
                l_13 = t;
                if(((k_13 != NULL) && (k_13 != l_13)))
                  _fail(l_13);
                else
                  k_13 = l_13;
              }
              {
                t = not_null(z_12);
                {
                  ATerm o_13 = NULL;
                  t = l_0(t);
                  {
                    m_13 = t;
                    {
                      ATerm p_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_13)), not_null(k_13));
                      {
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                      }
                      t = not_null(o_13);
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
ATerm As_2 (ATerm t, ATerm a_56 (ATerm), ATerm b_56 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  e_14 = t;
  d_14 :
  if(match_cons(e_14, sym_As_2))
    {
      f_14 = ATgetArgument(e_14, 0);
      g_14 = ATgetArgument(e_14, 1);
      {
        ATerm k_14 = NULL,m_14 = NULL;
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(e_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
        {
          t = not_null(f_14);
          {
            ATerm o_14 = NULL;
            t = a_56(t);
            {
              m_14 = t;
              {
                t = not_null(g_14);
                {
                  ATerm q_14 = NULL;
                  t = b_56(t);
                  {
                    o_14 = t;
                    {
                      ATerm r_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, not_null(m_14), not_null(o_14)), not_null(k_14));
                      {
                        r_14 = t;
                        if(((q_14 != NULL) && (q_14 != r_14)))
                          _fail(r_14);
                        else
                          q_14 = r_14;
                      }
                      t = not_null(q_14);
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
ATerm BuildDefault_1 (ATerm t, ATerm c_56 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_BuildDefault_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      {
        ATerm g_15 = NULL,i_15 = NULL;
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
        {
          t = not_null(d_15);
          {
            ATerm k_15 = NULL;
            t = c_56(t);
            {
              i_15 = t;
              {
                ATerm l_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_BuildDefault_1, not_null(i_15)), not_null(g_15));
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
                t = not_null(k_15);
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
ATerm Str_1 (ATerm t, ATerm t_57 (ATerm))
{
  ATerm v_15 = NULL,w_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_Str_1))
    {
      w_15 = ATgetArgument(v_15, 0);
      {
        ATerm z_15 = NULL,b_16 = NULL;
        ATerm a_16 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        {
          t = not_null(w_15);
          {
            ATerm d_16 = NULL;
            t = t_57(t);
            {
              b_16 = t;
              {
                ATerm e_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Str_1, not_null(b_16)), not_null(z_15));
                {
                  e_16 = t;
                  if(((d_16 != NULL) && (d_16 != e_16)))
                    _fail(e_16);
                  else
                    d_16 = e_16;
                }
                t = not_null(d_16);
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
  ATerm k_16 = NULL;
  k_16 = t;
  t = SSL_is_real(not_null(k_16));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm s_57 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_Real_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm w_16 = NULL,y_16 = NULL;
        ATerm x_16 = NULL;
        t = SSLgetAnnotations(not_null(s_16));
        {
          x_16 = t;
          if(((w_16 != NULL) && (w_16 != x_16)))
            _fail(x_16);
          else
            w_16 = x_16;
        }
        {
          t = not_null(t_16);
          {
            ATerm a_17 = NULL;
            t = s_57(t);
            {
              y_16 = t;
              {
                ATerm b_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Real_1, not_null(y_16)), not_null(w_16));
                {
                  b_17 = t;
                  if(((a_17 != NULL) && (a_17 != b_17)))
                    _fail(b_17);
                  else
                    a_17 = b_17;
                }
                t = not_null(a_17);
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
ATerm Int_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm l_17 = NULL,m_17 = NULL;
  l_17 = t;
  k_17 :
  if(match_cons(l_17, sym_Int_1))
    {
      m_17 = ATgetArgument(l_17, 0);
      {
        ATerm p_17 = NULL,r_17 = NULL;
        ATerm q_17 = NULL;
        t = SSLgetAnnotations(not_null(l_17));
        {
          q_17 = t;
          if(((p_17 != NULL) && (p_17 != q_17)))
            _fail(q_17);
          else
            p_17 = q_17;
        }
        {
          t = not_null(m_17);
          {
            ATerm t_17 = NULL;
            t = r_57(t);
            {
              r_17 = t;
              {
                ATerm u_17 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Int_1, not_null(r_17)), not_null(p_17));
                {
                  u_17 = t;
                  if(((t_17 != NULL) && (t_17 != u_17)))
                    _fail(u_17);
                  else
                    t_17 = u_17;
                }
                t = not_null(t_17);
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
  ATerm d_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Wld_0))
    {
      ATerm f_18 = NULL,h_18 = NULL;
      ATerm x_3;
      x_3 = t;
      {
        ATerm g_18 = NULL;
        t = SSLgetAnnotations(not_null(d_18));
        {
          g_18 = t;
          if(((f_18 != NULL) && (f_18 != g_18)))
            _fail(g_18);
          else
            f_18 = g_18;
        }
      }
      t = x_3;
      {
        ATerm i_18 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Wld_0), not_null(f_18));
        {
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
        }
        t = not_null(h_18);
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
  ATerm y_3 = t;
  int z_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
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
            t = Var_1(t, is_string_0);
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
                  t = Int_1(t, is_int_0);
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
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(f_4);
                      }
                    else
                      {
                        t = e_4;
                        {
                          ATerm g_4 = t;
                          int h_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(h_4);
                            }
                          else
                            {
                              t = g_4;
                              {
                                ATerm i_4 = t;
                                int j_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(j_4);
                                  }
                                else
                                  {
                                    t = i_4;
                                    {
                                      ATerm k_4 = t;
                                      int l_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm c_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, c_0, term_expression_0);
                                          LocalPopChoice(l_4);
                                        }
                                      else
                                        {
                                          t = k_4;
                                          {
                                            ATerm m_4 = t;
                                            int n_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm d_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, d_0);
                                                LocalPopChoice(n_4);
                                              }
                                            else
                                              {
                                                t = m_4;
                                                {
                                                  ATerm m_0 (ATerm t)
                                                  {
                                                    t = term_o_4;
                                                    return(t);
                                                  }
                                                  t = debug_1(t, m_0);
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
ATerm Prim_2 (ATerm t, ATerm u_59 (ATerm), ATerm v_59 (ATerm))
{
  ATerm t_18 = NULL,u_18 = NULL,v_18 = NULL;
  t_18 = t;
  s_18 :
  if(match_cons(t_18, sym_Prim_2))
    {
      u_18 = ATgetArgument(t_18, 0);
      v_18 = ATgetArgument(t_18, 1);
      {
        ATerm z_18 = NULL,b_19 = NULL;
        ATerm a_19 = NULL;
        t = SSLgetAnnotations(not_null(t_18));
        {
          a_19 = t;
          if(((z_18 != NULL) && (z_18 != a_19)))
            _fail(a_19);
          else
            z_18 = a_19;
        }
        {
          t = not_null(u_18);
          {
            ATerm d_19 = NULL;
            t = u_59(t);
            {
              b_19 = t;
              {
                t = not_null(v_18);
                {
                  ATerm f_19 = NULL;
                  t = v_59(t);
                  {
                    d_19 = t;
                    {
                      ATerm g_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Prim_2, not_null(b_19), not_null(d_19)), not_null(z_18));
                      {
                        g_19 = t;
                        if(((f_19 != NULL) && (f_19 != g_19)))
                          _fail(g_19);
                        else
                          f_19 = g_19;
                      }
                      t = not_null(f_19);
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
ATerm Where_1 (ATerm t, ATerm t_59 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_cons(r_19, sym_Where_1))
    {
      s_19 = ATgetArgument(r_19, 0);
      {
        ATerm v_19 = NULL,x_19 = NULL;
        ATerm w_19 = NULL;
        t = SSLgetAnnotations(not_null(r_19));
        {
          w_19 = t;
          if(((v_19 != NULL) && (v_19 != w_19)))
            _fail(w_19);
          else
            v_19 = w_19;
        }
        {
          t = not_null(s_19);
          {
            ATerm z_19 = NULL;
            t = t_59(t);
            {
              x_19 = t;
              {
                ATerm a_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Where_1, not_null(x_19)), not_null(v_19));
                {
                  a_20 = t;
                  if(((z_19 != NULL) && (z_19 != a_20)))
                    _fail(a_20);
                  else
                    z_19 = a_20;
                }
                t = not_null(z_19);
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
ATerm Scope_2 (ATerm t, ATerm r_59 (ATerm), ATerm s_59 (ATerm))
{
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym_Scope_2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      {
        ATerm r_20 = NULL,t_20 = NULL;
        ATerm s_20 = NULL;
        t = SSLgetAnnotations(not_null(l_20));
        {
          s_20 = t;
          if(((r_20 != NULL) && (r_20 != s_20)))
            _fail(s_20);
          else
            r_20 = s_20;
        }
        {
          t = not_null(m_20);
          {
            ATerm v_20 = NULL;
            t = r_59(t);
            {
              t_20 = t;
              {
                t = not_null(n_20);
                {
                  ATerm x_20 = NULL;
                  t = s_59(t);
                  {
                    v_20 = t;
                    {
                      ATerm y_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(t_20), not_null(v_20)), not_null(r_20));
                      {
                        y_20 = t;
                        if(((x_20 != NULL) && (x_20 != y_20)))
                          _fail(y_20);
                        else
                          x_20 = y_20;
                      }
                      t = not_null(x_20);
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
ATerm Build_1 (ATerm t, ATerm o_59 (ATerm))
{
  ATerm j_21 = NULL,k_21 = NULL;
  j_21 = t;
  i_21 :
  if(match_cons(j_21, sym_Build_1))
    {
      k_21 = ATgetArgument(j_21, 0);
      {
        ATerm n_21 = NULL,p_21 = NULL;
        ATerm o_21 = NULL;
        t = SSLgetAnnotations(not_null(j_21));
        {
          o_21 = t;
          if(((n_21 != NULL) && (n_21 != o_21)))
            _fail(o_21);
          else
            n_21 = o_21;
        }
        {
          t = not_null(k_21);
          {
            ATerm r_21 = NULL;
            t = o_59(t);
            {
              p_21 = t;
              {
                ATerm s_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, not_null(p_21)), not_null(n_21));
                {
                  s_21 = t;
                  if(((r_21 != NULL) && (r_21 != s_21)))
                    _fail(s_21);
                  else
                    r_21 = s_21;
                }
                t = not_null(r_21);
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
ATerm Match_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm c_22 = NULL,d_22 = NULL;
  c_22 = t;
  b_22 :
  if(match_cons(c_22, sym_Match_1))
    {
      d_22 = ATgetArgument(c_22, 0);
      {
        ATerm g_22 = NULL,i_22 = NULL;
        ATerm h_22 = NULL;
        t = SSLgetAnnotations(not_null(c_22));
        {
          h_22 = t;
          if(((g_22 != NULL) && (g_22 != h_22)))
            _fail(h_22);
          else
            g_22 = h_22;
        }
        {
          t = not_null(d_22);
          {
            ATerm k_22 = NULL;
            t = n_59(t);
            {
              i_22 = t;
              {
                ATerm l_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, not_null(i_22)), not_null(g_22));
                {
                  l_22 = t;
                  if(((k_22 != NULL) && (k_22 != l_22)))
                    _fail(l_22);
                  else
                    k_22 = l_22;
                }
                t = not_null(k_22);
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
ATerm Thread_1 (ATerm t, ATerm k_59 (ATerm))
{
  ATerm v_22 = NULL,w_22 = NULL;
  v_22 = t;
  u_22 :
  if(match_cons(v_22, sym_Thread_1))
    {
      w_22 = ATgetArgument(v_22, 0);
      {
        ATerm z_22 = NULL,b_23 = NULL;
        ATerm a_23 = NULL;
        t = SSLgetAnnotations(not_null(v_22));
        {
          a_23 = t;
          if(((z_22 != NULL) && (z_22 != a_23)))
            _fail(a_23);
          else
            z_22 = a_23;
        }
        {
          t = not_null(w_22);
          {
            ATerm k_23 = NULL;
            t = k_59(t);
            {
              b_23 = t;
              {
                ATerm l_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Thread_1, not_null(b_23)), not_null(z_22));
                {
                  l_23 = t;
                  if(((k_23 != NULL) && (k_23 != l_23)))
                    _fail(l_23);
                  else
                    k_23 = l_23;
                }
                t = not_null(k_23);
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
ATerm All_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm v_23 = NULL,w_23 = NULL;
  v_23 = t;
  u_23 :
  if(match_cons(v_23, sym_All_1))
    {
      w_23 = ATgetArgument(v_23, 0);
      {
        ATerm z_23 = NULL,e_24 = NULL;
        ATerm a_24 = NULL;
        t = SSLgetAnnotations(not_null(v_23));
        {
          a_24 = t;
          if(((z_23 != NULL) && (z_23 != a_24)))
            _fail(a_24);
          else
            z_23 = a_24;
        }
        {
          t = not_null(w_23);
          {
            ATerm g_24 = NULL;
            t = j_59(t);
            {
              e_24 = t;
              {
                ATerm h_24 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_All_1, not_null(e_24)), not_null(z_23));
                {
                  h_24 = t;
                  if(((g_24 != NULL) && (g_24 != h_24)))
                    _fail(h_24);
                  else
                    g_24 = h_24;
                }
                t = not_null(g_24);
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
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm v_24 = NULL,w_24 = NULL;
  v_24 = t;
  u_24 :
  if(match_cons(v_24, sym_Some_1))
    {
      w_24 = ATgetArgument(v_24, 0);
      {
        ATerm p_4 = t;
        int q_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_25 = NULL,c_25 = NULL;
            ATerm b_25 = NULL;
            t = SSLgetAnnotations(not_null(v_24));
            {
              b_25 = t;
              if(((a_25 != NULL) && (a_25 != b_25)))
                _fail(b_25);
              else
                a_25 = b_25;
            }
            {
              t = not_null(w_24);
              {
                ATerm e_25 = NULL;
                t = k_0(t);
                {
                  c_25 = t;
                  {
                    ATerm f_25 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(c_25)), not_null(a_25));
                    {
                      f_25 = t;
                      if(((e_25 != NULL) && (e_25 != f_25)))
                        _fail(f_25);
                      else
                        e_25 = f_25;
                    }
                    t = not_null(e_25);
                  }
                }
              }
            }
            LocalPopChoice(q_4);
          }
        else
          {
            t = p_4;
            {
              ATerm i_25 = NULL,k_25 = NULL;
              ATerm j_25 = NULL;
              t = SSLgetAnnotations(not_null(v_24));
              {
                j_25 = t;
                if(((i_25 != NULL) && (i_25 != j_25)))
                  _fail(j_25);
                else
                  i_25 = j_25;
              }
              {
                t = not_null(w_24);
                {
                  ATerm m_25 = NULL;
                  t = k_0(t);
                  {
                    k_25 = t;
                    {
                      ATerm n_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Some_1, not_null(k_25)), not_null(i_25));
                      {
                        n_25 = t;
                        if(((m_25 != NULL) && (m_25 != n_25)))
                          _fail(n_25);
                        else
                          m_25 = n_25;
                      }
                      t = not_null(m_25);
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
ATerm One_1 (ATerm t, ATerm h_59 (ATerm))
{
  ATerm b_26 = NULL,c_26 = NULL;
  b_26 = t;
  a_26 :
  if(match_cons(b_26, sym_One_1))
    {
      c_26 = ATgetArgument(b_26, 0);
      {
        ATerm f_26 = NULL,h_26 = NULL;
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(b_26));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
        {
          t = not_null(c_26);
          {
            ATerm j_26 = NULL;
            t = h_59(t);
            {
              h_26 = t;
              {
                ATerm k_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_One_1, not_null(h_26)), not_null(f_26));
                {
                  k_26 = t;
                  if(((j_26 != NULL) && (j_26 != k_26)))
                    _fail(k_26);
                  else
                    j_26 = k_26;
                }
                t = not_null(j_26);
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
ATerm Cong_2 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  d_27 :
  if(match_cons(e_27, sym_Cong_2))
    {
      f_27 = ATgetArgument(e_27, 0);
      g_27 = ATgetArgument(e_27, 1);
      {
        ATerm k_27 = NULL,m_27 = NULL;
        ATerm l_27 = NULL;
        t = SSLgetAnnotations(not_null(e_27));
        {
          l_27 = t;
          if(((k_27 != NULL) && (k_27 != l_27)))
            _fail(l_27);
          else
            k_27 = l_27;
        }
        {
          t = not_null(f_27);
          {
            ATerm o_27 = NULL;
            t = f_59(t);
            {
              m_27 = t;
              {
                t = not_null(g_27);
                {
                  ATerm q_27 = NULL;
                  t = g_59(t);
                  {
                    o_27 = t;
                    {
                      ATerm r_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Cong_2, not_null(m_27), not_null(o_27)), not_null(k_27));
                      {
                        r_27 = t;
                        if(((q_27 != NULL) && (q_27 != r_27)))
                          _fail(r_27);
                        else
                          q_27 = r_27;
                      }
                      t = not_null(q_27);
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
  ATerm a_28 = NULL;
  a_28 = t;
  t = SSL_is_int(not_null(a_28));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  w_28 = t;
  u_28 :
  if(match_cons(w_28, sym_Path_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      y_28 = ATgetArgument(w_28, 1);
      {
        ATerm c_29 = NULL,e_29 = NULL;
        ATerm d_29 = NULL;
        t = SSLgetAnnotations(not_null(w_28));
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
        {
          t = not_null(x_28);
          {
            ATerm g_29 = NULL;
            t = d_59(t);
            {
              e_29 = t;
              {
                t = not_null(y_28);
                {
                  ATerm i_29 = NULL;
                  t = e_59(t);
                  {
                    g_29 = t;
                    {
                      ATerm j_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Path_2, not_null(e_29), not_null(g_29)), not_null(c_29));
                      {
                        j_29 = t;
                        if(((i_29 != NULL) && (i_29 != j_29)))
                          _fail(j_29);
                        else
                          i_29 = j_29;
                      }
                      t = not_null(i_29);
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
ATerm Rec_2 (ATerm t, ATerm n_58 (ATerm), ATerm o_58 (ATerm))
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL;
  v_29 = t;
  u_29 :
  if(match_cons(v_29, sym_Rec_2))
    {
      w_29 = ATgetArgument(v_29, 0);
      x_29 = ATgetArgument(v_29, 1);
      {
        ATerm b_30 = NULL,d_30 = NULL;
        ATerm c_30 = NULL;
        t = SSLgetAnnotations(not_null(v_29));
        {
          c_30 = t;
          if(((b_30 != NULL) && (b_30 != c_30)))
            _fail(c_30);
          else
            b_30 = c_30;
        }
        {
          t = not_null(w_29);
          {
            ATerm f_30 = NULL;
            t = n_58(t);
            {
              d_30 = t;
              {
                t = not_null(x_29);
                {
                  ATerm h_30 = NULL;
                  t = o_58(t);
                  {
                    f_30 = t;
                    {
                      ATerm i_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(d_30), not_null(f_30)), not_null(b_30));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm m_58 (ATerm))
{
  ATerm t_30 = NULL,u_30 = NULL;
  t_30 = t;
  s_30 :
  if(match_cons(t_30, sym_SVar_1))
    {
      u_30 = ATgetArgument(t_30, 0);
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
            ATerm i_31 = NULL;
            t = m_58(t);
            {
              b_31 = t;
              {
                ATerm k_31 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(b_31)), not_null(z_30));
                {
                  k_31 = t;
                  if(((i_31 != NULL) && (i_31 != k_31)))
                    _fail(k_31);
                  else
                    i_31 = k_31;
                }
                t = not_null(i_31);
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
ATerm Call_2 (ATerm t, ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym_Call_2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      {
        ATerm b_32 = NULL,d_32 = NULL;
        ATerm c_32 = NULL;
        t = SSLgetAnnotations(not_null(v_31));
        {
          c_32 = t;
          if(((b_32 != NULL) && (b_32 != c_32)))
            _fail(c_32);
          else
            b_32 = c_32;
        }
        {
          t = not_null(w_31);
          {
            ATerm f_32 = NULL;
            t = b_59(t);
            {
              d_32 = t;
              {
                t = not_null(x_31);
                {
                  ATerm k_32 = NULL;
                  t = c_59(t);
                  {
                    f_32 = t;
                    {
                      ATerm l_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Call_2, not_null(d_32), not_null(f_32)), not_null(b_32));
                      {
                        l_32 = t;
                        if(((k_32 != NULL) && (k_32 != l_32)))
                          _fail(l_32);
                        else
                          k_32 = l_32;
                      }
                      t = not_null(k_32);
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
ATerm LGChoice_2 (ATerm t, ATerm j_58 (ATerm), ATerm k_58 (ATerm))
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
  x_32 = t;
  w_32 :
  if(match_cons(x_32, sym_LGChoice_2))
    {
      y_32 = ATgetArgument(x_32, 0);
      z_32 = ATgetArgument(x_32, 1);
      {
        ATerm d_33 = NULL,f_33 = NULL;
        ATerm e_33 = NULL;
        t = SSLgetAnnotations(not_null(x_32));
        {
          e_33 = t;
          if(((d_33 != NULL) && (d_33 != e_33)))
            _fail(e_33);
          else
            d_33 = e_33;
        }
        {
          t = not_null(y_32);
          {
            ATerm j_33 = NULL;
            t = j_58(t);
            {
              f_33 = t;
              {
                t = not_null(z_32);
                {
                  ATerm l_33 = NULL;
                  t = k_58(t);
                  {
                    j_33 = t;
                    {
                      ATerm m_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LGChoice_2, not_null(f_33), not_null(j_33)), not_null(d_33));
                      {
                        m_33 = t;
                        if(((l_33 != NULL) && (l_33 != m_33)))
                          _fail(m_33);
                        else
                          l_33 = m_33;
                      }
                      t = not_null(l_33);
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
ATerm GChoice_2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym_GChoice_2))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      {
        ATerm g_34 = NULL,i_34 = NULL;
        ATerm h_34 = NULL;
        t = SSLgetAnnotations(not_null(a_34));
        {
          h_34 = t;
          if(((g_34 != NULL) && (g_34 != h_34)))
            _fail(h_34);
          else
            g_34 = h_34;
        }
        {
          t = not_null(b_34);
          {
            ATerm k_34 = NULL;
            t = h_58(t);
            {
              i_34 = t;
              {
                t = not_null(c_34);
                {
                  ATerm m_34 = NULL;
                  t = i_58(t);
                  {
                    k_34 = t;
                    {
                      ATerm n_34 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GChoice_2, not_null(i_34), not_null(k_34)), not_null(g_34));
                      {
                        n_34 = t;
                        if(((m_34 != NULL) && (m_34 != n_34)))
                          _fail(n_34);
                        else
                          m_34 = n_34;
                      }
                      t = not_null(m_34);
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
ATerm GuardedLChoice_3 (ATerm t, ATerm e_58 (ATerm), ATerm f_58 (ATerm), ATerm g_58 (ATerm))
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym_GuardedLChoice_3))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      d_35 = ATgetArgument(a_35, 2);
      {
        ATerm l_35 = NULL,n_35 = NULL;
        ATerm m_35 = NULL;
        t = SSLgetAnnotations(not_null(a_35));
        {
          m_35 = t;
          if(((l_35 != NULL) && (l_35 != m_35)))
            _fail(m_35);
          else
            l_35 = m_35;
        }
        {
          t = not_null(b_35);
          {
            ATerm p_35 = NULL;
            t = e_58(t);
            {
              n_35 = t;
              {
                t = not_null(c_35);
                {
                  ATerm r_35 = NULL;
                  t = f_58(t);
                  {
                    p_35 = t;
                    {
                      t = not_null(d_35);
                      {
                        ATerm t_35 = NULL;
                        t = g_58(t);
                        {
                          r_35 = t;
                          {
                            ATerm u_35 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_GuardedLChoice_3, not_null(n_35), not_null(p_35), not_null(r_35)), not_null(l_35));
                            {
                              u_35 = t;
                              if(((t_35 != NULL) && (t_35 != u_35)))
                                _fail(u_35);
                              else
                                t_35 = u_35;
                            }
                            t = not_null(t_35);
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
ATerm LChoice_2 (ATerm t, ATerm c_58 (ATerm), ATerm d_58 (ATerm))
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
  h_36 = t;
  g_36 :
  if(match_cons(h_36, sym_LChoice_2))
    {
      i_36 = ATgetArgument(h_36, 0);
      j_36 = ATgetArgument(h_36, 1);
      {
        ATerm n_36 = NULL,p_36 = NULL;
        ATerm o_36 = NULL;
        t = SSLgetAnnotations(not_null(h_36));
        {
          o_36 = t;
          if(((n_36 != NULL) && (n_36 != o_36)))
            _fail(o_36);
          else
            n_36 = o_36;
        }
        {
          t = not_null(i_36);
          {
            ATerm r_36 = NULL;
            t = c_58(t);
            {
              p_36 = t;
              {
                t = not_null(j_36);
                {
                  ATerm t_36 = NULL;
                  t = d_58(t);
                  {
                    r_36 = t;
                    {
                      ATerm u_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, not_null(p_36), not_null(r_36)), not_null(n_36));
                      {
                        u_36 = t;
                        if(((t_36 != NULL) && (t_36 != u_36)))
                          _fail(u_36);
                        else
                          t_36 = u_36;
                      }
                      t = not_null(t_36);
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
ATerm Choice_2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Choice_2))
    {
      h_37 = ATgetArgument(g_37, 0);
      i_37 = ATgetArgument(g_37, 1);
      {
        ATerm m_37 = NULL,o_37 = NULL;
        ATerm n_37 = NULL;
        t = SSLgetAnnotations(not_null(g_37));
        {
          n_37 = t;
          if(((m_37 != NULL) && (m_37 != n_37)))
            _fail(n_37);
          else
            m_37 = n_37;
        }
        {
          t = not_null(h_37);
          {
            ATerm q_37 = NULL;
            t = a_58(t);
            {
              o_37 = t;
              {
                t = not_null(i_37);
                {
                  ATerm s_37 = NULL;
                  t = b_58(t);
                  {
                    q_37 = t;
                    {
                      ATerm t_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, not_null(o_37), not_null(q_37)), not_null(m_37));
                      {
                        t_37 = t;
                        if(((s_37 != NULL) && (s_37 != t_37)))
                          _fail(t_37);
                        else
                          s_37 = t_37;
                      }
                      t = not_null(s_37);
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
ATerm Seq_2 (ATerm t, ATerm y_57 (ATerm), ATerm z_57 (ATerm))
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Seq_2))
    {
      g_38 = ATgetArgument(f_38, 0);
      h_38 = ATgetArgument(f_38, 1);
      {
        ATerm l_38 = NULL,n_38 = NULL;
        ATerm m_38 = NULL;
        t = SSLgetAnnotations(not_null(f_38));
        {
          m_38 = t;
          if(((l_38 != NULL) && (l_38 != m_38)))
            _fail(m_38);
          else
            l_38 = m_38;
        }
        {
          t = not_null(g_38);
          {
            ATerm p_38 = NULL;
            t = y_57(t);
            {
              n_38 = t;
              {
                t = not_null(h_38);
                {
                  ATerm r_38 = NULL;
                  t = z_57(t);
                  {
                    p_38 = t;
                    {
                      ATerm s_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, not_null(n_38), not_null(p_38)), not_null(l_38));
                      {
                        s_38 = t;
                        if(((r_38 != NULL) && (r_38 != s_38)))
                          _fail(s_38);
                        else
                          r_38 = s_38;
                      }
                      t = not_null(r_38);
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
ATerm Test_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm d_39 = NULL,e_39 = NULL;
  d_39 = t;
  c_39 :
  if(match_cons(d_39, sym_Test_1))
    {
      e_39 = ATgetArgument(d_39, 0);
      {
        ATerm h_39 = NULL,j_39 = NULL;
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(d_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        {
          t = not_null(e_39);
          {
            ATerm l_39 = NULL;
            t = w_57(t);
            {
              j_39 = t;
              {
                ATerm m_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Test_1, not_null(j_39)), not_null(h_39));
                {
                  m_39 = t;
                  if(((l_39 != NULL) && (l_39 != m_39)))
                    _fail(m_39);
                  else
                    l_39 = m_39;
                }
                t = not_null(l_39);
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
ATerm Not_1 (ATerm t, ATerm x_57 (ATerm))
{
  ATerm w_39 = NULL,x_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym_Not_1))
    {
      x_39 = ATgetArgument(w_39, 0);
      {
        ATerm a_40 = NULL,c_40 = NULL;
        ATerm b_40 = NULL;
        t = SSLgetAnnotations(not_null(w_39));
        {
          b_40 = t;
          if(((a_40 != NULL) && (a_40 != b_40)))
            _fail(b_40);
          else
            a_40 = b_40;
        }
        {
          t = not_null(x_39);
          {
            ATerm e_40 = NULL;
            t = x_57(t);
            {
              c_40 = t;
              {
                ATerm h_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Not_1, not_null(c_40)), not_null(a_40));
                {
                  h_40 = t;
                  if(((e_40 != NULL) && (e_40 != h_40)))
                    _fail(h_40);
                  else
                    e_40 = h_40;
                }
                t = not_null(e_40);
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
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Fail_0))
    {
      ATerm s_40 = NULL,u_40 = NULL;
      ATerm r_4;
      r_4 = t;
      {
        ATerm t_40 = NULL;
        t = SSLgetAnnotations(not_null(q_40));
        {
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
        }
      }
      t = r_4;
      {
        ATerm v_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Fail_0), not_null(s_40));
        {
          v_40 = t;
          if(((u_40 != NULL) && (u_40 != v_40)))
            _fail(v_40);
          else
            u_40 = v_40;
        }
        t = not_null(u_40);
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
  ATerm d_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_Id_0))
    {
      ATerm f_41 = NULL,h_41 = NULL;
      ATerm s_4;
      s_4 = t;
      {
        ATerm g_41 = NULL;
        t = SSLgetAnnotations(not_null(d_41));
        {
          g_41 = t;
          if(((f_41 != NULL) && (f_41 != g_41)))
            _fail(g_41);
          else
            f_41 = g_41;
        }
      }
      t = s_4;
      {
        ATerm i_41 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Id_0), not_null(f_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
        t = not_null(h_41);
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
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
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
                  t = Not_1(t, strategy_expression_0);
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
                        t = Test_1(t, strategy_expression_0);
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
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
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
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(g_5);
                                        }
                                      else
                                        {
                                          t = f_5;
                                          {
                                            ATerm h_5 = t;
                                            int i_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GuardedLChoice_3(t, strategy_expression_0, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(i_5);
                                              }
                                            else
                                              {
                                                t = h_5;
                                                {
                                                  ATerm j_5 = t;
                                                  int k_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                            t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
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
                                                                  ATerm n_0 (ATerm t)
                                                                  {
                                                                    ATerm p_0 (ATerm t)
                                                                    {
                                                                      ATerm p_5 = t;
                                                                      int q_5 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = is_string_0(t);
                                                                          LocalPopChoice(q_5);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_5;
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
                                                                  t = Call_2(t, n_0, o_0);
                                                                  LocalPopChoice(o_5);
                                                                }
                                                              else
                                                                {
                                                                  t = n_5;
                                                                  {
                                                                    ATerm r_5 = t;
                                                                    int s_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Rec_2(t, is_string_0, strategy_expression_0);
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
                                                                              t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                                    ATerm q_0 (ATerm t)
                                                                                    {
                                                                                      t = list_1(t, strategy_expression_0);
                                                                                      return(t);
                                                                                    }
                                                                                    t = Cong_2(t, is_string_0, q_0);
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
                                                                                          t = One_1(t, strategy_expression_0);
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
                                                                                                t = Some_1(t, strategy_expression_0);
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
                                                                                                      t = All_1(t, strategy_expression_0);
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
                                                                                                            t = Thread_1(t, strategy_expression_0);
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
                                                                                                                  t = Match_1(t, term_expression_0);
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
                                                                                                                        t = Build_1(t, term_expression_0);
                                                                                                                        LocalPopChoice(i_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = h_6;
                                                                                                                        {
                                                                                                                          ATerm j_6 = t;
                                                                                                                          int k_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              ATerm r_0 (ATerm t)
                                                                                                                              {
                                                                                                                                t = list_1(t, is_string_0);
                                                                                                                                return(t);
                                                                                                                              }
                                                                                                                              t = Scope_2(t, r_0, strategy_expression_0);
                                                                                                                              LocalPopChoice(k_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = j_6;
                                                                                                                              {
                                                                                                                                ATerm l_6 = t;
                                                                                                                                int m_6 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    t = Where_1(t, strategy_expression_0);
                                                                                                                                    LocalPopChoice(m_6);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = l_6;
                                                                                                                                    {
                                                                                                                                      ATerm n_6 = t;
                                                                                                                                      int o_6 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm s_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            t = list_1(t, term_expression_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Prim_2(t, is_string_0, s_0);
                                                                                                                                          LocalPopChoice(o_6);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = n_6;
                                                                                                                                          {
                                                                                                                                            ATerm p_6 = t;
                                                                                                                                            int q_6 = stack_ptr;
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
                                                                                                                                                LocalPopChoice(q_6);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                t = p_6;
                                                                                                                                                {
                                                                                                                                                  ATerm v_0 (ATerm t)
                                                                                                                                                  {
                                                                                                                                                    t = term_r_6;
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
ATerm VarDec_2 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm))
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  s_41 :
  if(match_cons(t_41, sym_VarDec_2))
    {
      u_41 = ATgetArgument(t_41, 0);
      v_41 = ATgetArgument(t_41, 1);
      {
        ATerm a_42 = NULL,c_42 = NULL;
        ATerm b_42 = NULL;
        t = SSLgetAnnotations(not_null(t_41));
        {
          b_42 = t;
          if(((a_42 != NULL) && (a_42 != b_42)))
            _fail(b_42);
          else
            a_42 = b_42;
        }
        {
          t = not_null(u_41);
          {
            ATerm e_42 = NULL;
            t = u_58(t);
            {
              c_42 = t;
              {
                t = not_null(v_41);
                {
                  ATerm g_42 = NULL;
                  t = v_58(t);
                  {
                    e_42 = t;
                    {
                      ATerm h_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VarDec_2, not_null(c_42), not_null(e_42)), not_null(a_42));
                      {
                        h_42 = t;
                        if(((g_42 != NULL) && (g_42 != h_42)))
                          _fail(h_42);
                        else
                          g_42 = h_42;
                      }
                      t = not_null(g_42);
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
ATerm Mod_2 (ATerm t, ATerm w_56 (ATerm), ATerm x_56 (ATerm))
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  s_42 :
  if(match_cons(t_42, sym_Mod_2))
    {
      u_42 = ATgetArgument(t_42, 0);
      v_42 = ATgetArgument(t_42, 1);
      {
        ATerm z_42 = NULL,b_43 = NULL;
        ATerm a_43 = NULL;
        t = SSLgetAnnotations(not_null(t_42));
        {
          a_43 = t;
          if(((z_42 != NULL) && (z_42 != a_43)))
            _fail(a_43);
          else
            z_42 = a_43;
        }
        {
          t = not_null(u_42);
          {
            ATerm d_43 = NULL;
            t = w_56(t);
            {
              b_43 = t;
              {
                t = not_null(v_42);
                {
                  ATerm f_43 = NULL;
                  t = x_56(t);
                  {
                    d_43 = t;
                    {
                      ATerm g_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Mod_2, not_null(b_43), not_null(d_43)), not_null(z_42));
                      {
                        g_43 = t;
                        if(((f_43 != NULL) && (f_43 != g_43)))
                          _fail(g_43);
                        else
                          f_43 = g_43;
                      }
                      t = not_null(f_43);
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
ATerm SDef_3 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm), ATerm t_58 (ATerm))
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_SDef_3))
    {
      u_43 = ATgetArgument(t_43, 0);
      v_43 = ATgetArgument(t_43, 1);
      w_43 = ATgetArgument(t_43, 2);
      {
        ATerm b_44 = NULL,d_44 = NULL;
        ATerm c_44 = NULL;
        t = SSLgetAnnotations(not_null(t_43));
        {
          c_44 = t;
          if(((b_44 != NULL) && (b_44 != c_44)))
            _fail(c_44);
          else
            b_44 = c_44;
        }
        {
          t = not_null(u_43);
          {
            ATerm f_44 = NULL;
            t = r_58(t);
            {
              d_44 = t;
              {
                t = not_null(v_43);
                {
                  ATerm h_44 = NULL;
                  t = s_58(t);
                  {
                    f_44 = t;
                    {
                      t = not_null(w_43);
                      {
                        ATerm j_44 = NULL;
                        t = t_58(t);
                        {
                          h_44 = t;
                          {
                            ATerm k_44 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(d_44), not_null(f_44), not_null(h_44)), not_null(b_44));
                            {
                              k_44 = t;
                              if(((j_44 != NULL) && (j_44 != k_44)))
                                _fail(k_44);
                              else
                                j_44 = k_44;
                            }
                            t = not_null(j_44);
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
  ATerm s_6 = t;
  int t_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 (ATerm t)
      {
        ATerm u_6 = t;
        int v_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(v_6);
          }
        else
          {
            t = u_6;
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
      LocalPopChoice(t_6);
    }
  else
    {
      t = s_6;
      {
        ATerm z_0 (ATerm t)
        {
          t = term_w_6;
          return(t);
        }
        t = debug_1(t, z_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm r_44 (ATerm t)
  {
    ATerm x_6 = t;
    int y_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_6);
      }
    else
      {
        t = x_6;
        t = Cons_2(t, i_78, r_44);
      }
    return(t);
  }
  t = r_44(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm e_57 (ATerm))
{
  ATerm x_44 = NULL,y_44 = NULL;
  x_44 = t;
  w_44 :
  if(match_cons(x_44, sym_Strategies_1))
    {
      y_44 = ATgetArgument(x_44, 0);
      {
        ATerm b_45 = NULL,d_45 = NULL;
        ATerm c_45 = NULL;
        t = SSLgetAnnotations(not_null(x_44));
        {
          c_45 = t;
          if(((b_45 != NULL) && (b_45 != c_45)))
            _fail(c_45);
          else
            b_45 = c_45;
        }
        {
          t = not_null(y_44);
          {
            ATerm f_45 = NULL;
            t = e_57(t);
            {
              d_45 = t;
              {
                ATerm g_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, not_null(d_45)), not_null(b_45));
                {
                  g_45 = t;
                  if(((f_45 != NULL) && (f_45 != g_45)))
                    _fail(g_45);
                  else
                    f_45 = g_45;
                }
                t = not_null(f_45);
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
ATerm Specification_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm q_45 = NULL,r_45 = NULL;
  q_45 = t;
  p_45 :
  if(match_cons(q_45, sym_Specification_1))
    {
      r_45 = ATgetArgument(q_45, 0);
      {
        ATerm u_45 = NULL,w_45 = NULL;
        ATerm v_45 = NULL;
        t = SSLgetAnnotations(not_null(q_45));
        {
          v_45 = t;
          if(((u_45 != NULL) && (u_45 != v_45)))
            _fail(v_45);
          else
            u_45 = v_45;
        }
        {
          t = not_null(r_45);
          {
            ATerm y_45 = NULL;
            t = g_57(t);
            {
              w_45 = t;
              {
                ATerm z_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, not_null(w_45)), not_null(u_45));
                {
                  z_45 = t;
                  if(((y_45 != NULL) && (y_45 != z_45)))
                    _fail(z_45);
                  else
                    y_45 = z_45;
                }
                t = not_null(y_45);
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
  ATerm z_6 = t;
  int a_7 = stack_ptr;
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
      LocalPopChoice(a_7);
    }
  else
    {
      t = z_6;
      {
        ATerm e_1 (ATerm t)
        {
          t = term_b_7;
          return(t);
        }
        t = debug_1(t, e_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm o_48 (ATerm), ATerm p_48 (ATerm))
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
  k_46 = t;
  j_46 :
  if(match_cons(k_46, sym__2))
    {
      l_46 = ATgetArgument(k_46, 0);
      m_46 = ATgetArgument(k_46, 1);
      {
        ATerm q_46 = NULL,s_46 = NULL;
        ATerm r_46 = NULL;
        t = SSLgetAnnotations(not_null(k_46));
        {
          r_46 = t;
          if(((q_46 != NULL) && (q_46 != r_46)))
            _fail(r_46);
          else
            q_46 = r_46;
        }
        {
          t = not_null(l_46);
          {
            ATerm u_46 = NULL;
            t = o_48(t);
            {
              s_46 = t;
              {
                t = not_null(m_46);
                {
                  ATerm z_46 = NULL;
                  t = p_48(t);
                  {
                    u_46 = t;
                    {
                      ATerm a_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_46), not_null(u_46)), not_null(q_46));
                      {
                        a_47 = t;
                        if(((z_46 != NULL) && (z_46 != a_47)))
                          _fail(a_47);
                        else
                          z_46 = a_47;
                      }
                      t = not_null(z_46);
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
  ATerm n_47 = NULL;
  ATerm c_7;
  c_7 = t;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm o_47 = NULL,p_47 = NULL;
      o_47 = t;
      m_47 :
      if(match_cons(o_47, sym_Program_1))
        {
          p_47 = ATgetArgument(o_47, 0);
          if(((n_47 != NULL) && (n_47 != p_47)))
            _fail(p_47);
          else
            n_47 = p_47;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(n_47)), term_e_7));
      {
        t = printnl_0(t);
        {
          t = term_g_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym__2))
    {
      u_47 = ATgetArgument(t_47, 0);
      v_47 = ATgetArgument(t_47, 1);
      {
        ATerm h_7;
        h_7 = t;
        t = SSL_printnl(not_null(u_47), not_null(v_47));
        t = h_7;
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
  ATerm a_48 = NULL;
  a_48 = t;
  t = SSL_implode_string(not_null(a_48));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_7 = t;
  int j_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_7);
    }
  else
    {
      t = i_7;
      {
        ATerm f_48 = NULL,g_48 = NULL,h_48 = NULL;
        f_48 = t;
        e_48 :
        if(((ATgetType(f_48) == AT_LIST) && ((ATermList) f_48 != ATempty)))
          {
            g_48 = ATgetFirst((ATermList) f_48);
            h_48 = (ATerm) ATgetNext((ATermList) f_48);
            {
              t = not_null(g_48);
              {
                ATerm g_1 (ATerm t)
                {
                  t = not_null(h_48);
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
  ATerm t_48 = NULL;
  ATerm v_48 = NULL;
  t_48 = t;
  {
    ATerm w_48 = NULL;
    ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
    t = not_null(t_48);
    {
      w_48 = t;
      {
        t = SSL_explode_term(not_null(w_48));
        {
          y_48 = t;
          r_48 :
          if(match_cons(y_48, sym__2))
            {
              z_48 = ATgetArgument(y_48, 0);
              a_49 = ATgetArgument(y_48, 1);
              s_48 :
              if(match_string(z_48, ""))
                {
                  if(((v_48 != NULL) && (v_48 != a_49)))
                    _fail(a_49);
                  else
                    v_48 = a_49;
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
      t = not_null(v_48);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm e_49 (ATerm t)
  {
    ATerm k_7 = t;
    int l_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_49);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          t = Nil_0(t);
          t = v_78(t);
        }
      }
    return(t);
  }
  t = e_49(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_49 = NULL,i_49 = NULL,j_49 = NULL;
  h_49 = t;
  g_49 :
  if(match_cons(h_49, sym__2))
    {
      i_49 = ATgetArgument(h_49, 0);
      j_49 = ATgetArgument(h_49, 1);
      {
        t = not_null(i_49);
        {
          ATerm h_1 (ATerm t)
          {
            t = not_null(j_49);
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
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm o_49 = NULL;
  o_49 = t;
  t = SSL_explode_string(not_null(o_49));
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
ATerm debug_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm o_7;
  o_7 = t;
  {
    ATerm t_49 = NULL,v_49 = NULL;
    ATerm p_7;
    p_7 = t;
    {
      ATerm u_49 = NULL;
      t = p_68(t);
      {
        u_49 = t;
        if(((t_49 != NULL) && (t_49 != u_49)))
          _fail(u_49);
        else
          t_49 = u_49;
      }
    }
    t = p_7;
    {
      ATerm w_49 = NULL;
      w_49 = t;
      if(((v_49 != NULL) && (v_49 != w_49)))
        _fail(w_49);
      else
        v_49 = w_49;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_49)), not_null(t_49)));
        t = printnl_0(t);
      }
    }
  }
  t = o_7;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm a_50 = NULL;
  a_50 = t;
  t = SSL_is_string(not_null(a_50));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_1);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
              l_50 = t;
              k_50 :
              if(match_cons(l_50, sym_Path_1))
                {
                  m_50 = ATgetArgument(l_50, 0);
                  t = not_null(m_50);
                }
              else
                {
                  if(match_cons(l_50, sym_Var_1))
                    {
                      m_50 = ATgetArgument(l_50, 0);
                      {
                        t = not_null(m_50);
                        {
                          ATerm u_7 = t;
                          int v_7 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(v_7);
                            }
                          else
                            {
                              t = u_7;
                              {
                                ATerm j_1 (ATerm t)
                                {
                                  t = term_w_7;
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
                      if(match_cons(l_50, sym_Prefix_2))
                        {
                          m_50 = ATgetArgument(l_50, 0);
                          n_50 = ATgetArgument(l_50, 1);
                          {
                            ATerm s_50 = NULL,u_50 = NULL;
                            ATerm x_7;
                            x_7 = t;
                            {
                              ATerm t_50 = NULL;
                              t = not_null(m_50);
                              {
                                t = eval_config_0(t);
                                {
                                  t_50 = t;
                                  if(((s_50 != NULL) && (s_50 != t_50)))
                                    _fail(t_50);
                                  else
                                    s_50 = t_50;
                                }
                              }
                            }
                            t = x_7;
                            {
                              ATerm v_50 = NULL;
                              t = not_null(n_50);
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
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_50), not_null(u_50));
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
  ATerm d_51 = NULL;
  d_51 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_7, not_null(d_51));
    {
      t = table_get_0(t);
      {
        ATerm k_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm z_7;
            z_7 = t;
            {
              ATerm f_51 = NULL;
              ATerm g_51 = NULL;
              g_51 = t;
              if(((f_51 != NULL) && (f_51 != g_51)))
                _fail(g_51);
              else
                f_51 = g_51;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_7, not_null(d_51), not_null(f_51));
                t = table_put_0(t);
              }
            }
            t = z_7;
          }
          return(t);
        }
        t = try_1(t, k_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm t_65 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm a_8;
    a_8 = t;
    {
      ATerm k_51 = NULL;
      ATerm l_51 = NULL;
      t = term_b_8;
      {
        t = get_config_0(t);
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_51), term_d_8);
        t = geq_0(t);
      }
    }
    t = a_8;
    t = t_65(t);
    return(t);
  }
  t = try_1(t, l_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym__2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      t = SSL_WriteToTextFile(not_null(q_51), not_null(r_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  w_51 :
  if(match_cons(x_51, sym__2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      t = SSL_WriteToBinaryFile(not_null(y_51), not_null(z_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_52 = NULL;
  ATerm e_8;
  e_8 = t;
  {
    ATerm m_1 (ATerm t)
    {
      ATerm f_8 = t;
      int j_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm i_52 = NULL,j_52 = NULL;
            i_52 = t;
            e_52 :
            if(match_cons(i_52, sym_Output_1))
              {
                j_52 = ATgetArgument(i_52, 0);
                if(((h_52 != NULL) && (h_52 != j_52)))
                  _fail(j_52);
                else
                  h_52 = j_52;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, n_1);
          LocalPopChoice(j_8);
        }
      else
        {
          t = f_8;
          {
            ATerm k_52 = NULL;
            t = term_k_8;
            {
              k_52 = t;
              if(((h_52 != NULL) && (h_52 != k_52)))
                _fail(k_52);
              else
                h_52 = k_52;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_1, _id);
  }
  t = e_8;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm p_1 (ATerm t)
      {
        t = not_null(h_52);
        return(t);
      }
      t = split_2(t, p_1, _id);
      return(t);
    }
    t = _2(t, _id, o_1);
    {
      ATerm l_8 = t;
      int m_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_1 (ATerm t)
          {
            ATerm r_1 (ATerm t)
            {
              ATerm l_52 = NULL;
              l_52 = t;
              g_52 :
              if(!(match_cons(l_52, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, r_1);
            return(t);
          }
          t = _2(t, q_1, WriteToBinaryFile_0);
          LocalPopChoice(m_8);
        }
      else
        {
          t = l_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_67 (ATerm))
{
  ATerm r_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL;
  ATerm n_8;
  n_8 = t;
  t = dtime_0(t);
  t = n_8;
  {
    t = z_67(t);
    {
      ATerm o_8;
      o_8 = t;
      {
        ATerm s_52 = NULL;
        t = dtime_0(t);
        {
          s_52 = t;
          if(((r_52 != NULL) && (r_52 != s_52)))
            _fail(s_52);
          else
            r_52 = s_52;
        }
      }
      t = o_8;
      {
        t_52 = t;
        q_52 :
        if(match_cons(t_52, sym__2))
          {
            u_52 = ATgetArgument(t_52, 0);
            v_52 = ATgetArgument(t_52, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_52))), not_null(v_52));
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
  ATerm b_53 = NULL;
  b_53 = t;
  t = SSL_ReadFromFile(not_null(b_53));
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_71 (ATerm), ATerm f_71 (ATerm))
{
  ATerm g_53 = NULL,i_53 = NULL;
  ATerm p_8;
  p_8 = t;
  {
    ATerm h_53 = NULL;
    t = e_71(t);
    {
      h_53 = t;
      if(((g_53 != NULL) && (g_53 != h_53)))
        _fail(h_53);
      else
        g_53 = h_53;
    }
  }
  t = p_8;
  {
    ATerm j_53 = NULL;
    t = f_71(t);
    {
      j_53 = t;
      if(((i_53 != NULL) && (i_53 != j_53)))
        _fail(j_53);
      else
        i_53 = j_53;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_53), not_null(i_53));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_53 = NULL;
  ATerm q_8;
  q_8 = t;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 (ATerm t)
        {
          ATerm q_53 = NULL,r_53 = NULL;
          q_53 = t;
          n_53 :
          if(match_cons(q_53, sym_Input_1))
            {
              r_53 = ATgetArgument(q_53, 0);
              if(((p_53 != NULL) && (p_53 != r_53)))
                _fail(r_53);
              else
                p_53 = r_53;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, s_1);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        {
          ATerm s_53 = NULL;
          t = term_t_8;
          {
            s_53 = t;
            if(((p_53 != NULL) && (p_53 != s_53)))
              _fail(s_53);
            else
              p_53 = s_53;
          }
        }
      }
  }
  t = q_8;
  {
    ATerm t_1 (ATerm t)
    {
      t = not_null(p_53);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, t_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm w_53 = NULL;
  w_53 = t;
  t = SSL_string_to_int(not_null(w_53));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  e_54 = t;
  c_54 :
  if(match_string(e_54, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(e_54) == AT_LIST) && ((ATermList) e_54 != ATempty)))
        {
          f_54 = ATgetFirst((ATermList) e_54);
          g_54 = (ATerm) ATgetNext((ATermList) e_54);
          d_54 :
          if(((ATgetType(g_54) == AT_LIST) && ((ATermList) g_54 != ATempty)))
            {
              h_54 = ATgetFirst((ATermList) g_54);
              i_54 = (ATerm) ATgetNext((ATermList) g_54);
              {
                ATerm m_54 = NULL;
                ATerm u_8;
                u_8 = t;
                {
                  t = not_null(f_54);
                  t = h_0(t);
                }
                t = u_8;
                {
                  ATerm n_54 = NULL;
                  t = not_null(h_54);
                  {
                    t = i_0(t);
                    {
                      n_54 = t;
                      if(((m_54 != NULL) && (m_54 != n_54)))
                        _fail(n_54);
                      else
                        m_54 = n_54;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_54)), not_null(m_54));
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
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm g_55 = NULL;
        g_55 = t;
        r_54 :
        if(!(match_string(g_55, "-i")))
          {
            if(!(match_string(g_55, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        ATerm j_55 = NULL;
        ATerm x_8;
        x_8 = t;
        {
          ATerm h_55 = NULL;
          ATerm i_55 = NULL;
          i_55 = t;
          if(((h_55 != NULL) && (h_55 != i_55)))
            _fail(i_55);
          else
            h_55 = i_55;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(h_55));
            t = set_config_0(t);
          }
        }
        t = x_8;
        {
          ATerm k_55 = NULL;
          k_55 = t;
          if(((j_55 != NULL) && (j_55 != k_55)))
            _fail(k_55);
          else
            j_55 = k_55;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_55));
        }
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_z_8;
        return(t);
      }
      t = ArgOption_3(t, u_1, v_1, w_1);
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm l_55 = NULL;
              l_55 = t;
              u_54 :
              if(!(match_string(l_55, "-o")))
                {
                  if(!(match_string(l_55, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm o_55 = NULL;
              ATerm c_9;
              c_9 = t;
              {
                ATerm m_55 = NULL;
                ATerm n_55 = NULL;
                n_55 = t;
                if(((m_55 != NULL) && (m_55 != n_55)))
                  _fail(n_55);
                else
                  m_55 = n_55;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_9, not_null(m_55));
                  t = set_config_0(t);
                }
              }
              t = c_9;
              {
                ATerm p_55 = NULL;
                p_55 = t;
                if(((o_55 != NULL) && (o_55 != p_55)))
                  _fail(p_55);
                else
                  o_55 = p_55;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(o_55));
              }
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_e_9;
              return(t);
            }
            t = ArgOption_3(t, x_1, y_1, z_1);
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm q_55 = NULL;
                    q_55 = t;
                    x_54 :
                    if(!(match_string(q_55, "-S")))
                      {
                        if(!(match_string(q_55, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = term_i_9;
                    t = set_config_0(t);
                    t = term_j_9;
                    return(t);
                  }
                  ATerm c_2 (ATerm t)
                  {
                    t = term_k_9;
                    return(t);
                  }
                  t = Option_3(t, a_2, b_2, c_2);
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                  {
                    ATerm l_9 = t;
                    int m_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_2 (ATerm t)
                        {
                          ATerm r_55 = NULL;
                          r_55 = t;
                          y_54 :
                          if(!(match_string(r_55, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          ATerm u_55 = NULL;
                          ATerm n_9;
                          n_9 = t;
                          {
                            ATerm s_55 = NULL;
                            ATerm t_55 = NULL;
                            t = string_to_int_0(t);
                            {
                              t_55 = t;
                              if(((s_55 != NULL) && (s_55 != t_55)))
                                _fail(t_55);
                              else
                                s_55 = t_55;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_b_8, not_null(s_55));
                              t = set_config_0(t);
                            }
                          }
                          t = n_9;
                          {
                            ATerm v_55 = NULL;
                            v_55 = t;
                            if(((u_55 != NULL) && (u_55 != v_55)))
                              _fail(v_55);
                            else
                              u_55 = v_55;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(u_55));
                          }
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = term_o_9;
                          return(t);
                        }
                        t = ArgOption_3(t, d_2, e_2, f_2);
                        LocalPopChoice(m_9);
                      }
                    else
                      {
                        t = l_9;
                        {
                          ATerm p_9 = t;
                          int q_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm w_55 = NULL;
                                w_55 = t;
                                b_55 :
                                if(!(match_string(w_55, "-k")))
                                  {
                                    if(!(match_string(w_55, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                ATerm r_9;
                                r_9 = t;
                                {
                                  ATerm x_55 = NULL;
                                  ATerm y_55 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    y_55 = t;
                                    if(((x_55 != NULL) && (x_55 != y_55)))
                                      _fail(y_55);
                                    else
                                      x_55 = y_55;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(x_55));
                                    t = set_config_0(t);
                                  }
                                }
                                t = r_9;
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = term_t_9;
                                return(t);
                              }
                              t = ArgOption_3(t, g_2, h_2, i_2);
                              LocalPopChoice(q_9);
                            }
                          else
                            {
                              t = p_9;
                              {
                                ATerm u_9 = t;
                                int v_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm z_55 = NULL;
                                      z_55 = t;
                                      d_55 :
                                      if(!(match_string(z_55, "-v")))
                                        {
                                          if(!(match_string(z_55, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      t = term_y_9;
                                      t = set_config_0(t);
                                      t = term_z_9;
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = term_a_10;
                                      return(t);
                                    }
                                    t = Option_3(t, j_2, k_2, l_2);
                                    LocalPopChoice(v_9);
                                  }
                                else
                                  {
                                    t = u_9;
                                    {
                                      ATerm b_10 = t;
                                      int c_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm d_56 = NULL;
                                            d_56 = t;
                                            e_55 :
                                            if(!(match_string(d_56, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm n_2 (ATerm t)
                                          {
                                            t = term_e_10;
                                            t = set_config_0(t);
                                            t = term_f_10;
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = term_g_10;
                                            return(t);
                                          }
                                          t = Option_3(t, m_2, n_2, o_2);
                                          LocalPopChoice(c_10);
                                        }
                                      else
                                        {
                                          t = b_10;
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm e_56 = NULL;
                                              e_56 = t;
                                              f_55 :
                                              if(!(match_string(e_56, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = term_i_10;
                                              t = set_config_0(t);
                                              t = term_j_10;
                                              return(t);
                                            }
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = term_k_10;
                                              return(t);
                                            }
                                            t = Option_3(t, p_2, q_2, r_2);
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
  t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, term_l_10));
  {
    t = printnl_0(t);
    {
      t = term_g_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm n_56 = NULL;
  n_56 = t;
  t = SSL_TicksToSeconds(not_null(n_56));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL;
  s_56 = t;
  r_56 :
  if(match_cons(s_56, sym__2))
    {
      t_56 = ATgetArgument(s_56, 0);
      u_56 = ATgetArgument(s_56, 1);
      {
        ATerm m_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(t_56), not_null(u_56));
            LocalPopChoice(n_10);
          }
        else
          {
            t = m_10;
            t = SSL_addr(not_null(t_56), not_null(u_56));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_72(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      {
        ATerm d_57 = NULL,f_57 = NULL,h_57 = NULL;
        d_57 = t;
        c_57 :
        if(((ATgetType(d_57) == AT_LIST) && ((ATermList) d_57 != ATempty)))
          {
            f_57 = ATgetFirst((ATermList) d_57);
            h_57 = (ATerm) ATgetNext((ATermList) d_57);
            {
              ATerm k_57 = NULL;
              ATerm l_57 = NULL;
              t = not_null(h_57);
              {
                t = foldr_2(t, q_72, r_72);
                {
                  l_57 = t;
                  if(((k_57 != NULL) && (k_57 != l_57)))
                    _fail(l_57);
                  else
                    k_57 = l_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_57), not_null(k_57));
                t = r_72(t);
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
ATerm crush_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm w_58 = NULL;
  ATerm y_58 = NULL;
  w_58 = t;
  {
    ATerm z_58 = NULL;
    ATerm i_59 = NULL,l_59 = NULL,m_59 = NULL;
    t = not_null(w_58);
    {
      z_58 = t;
      {
        t = SSL_explode_term(not_null(z_58));
        {
          i_59 = t;
          l_58 :
          if(match_cons(i_59, sym__2))
            {
              l_59 = ATgetArgument(i_59, 0);
              m_59 = ATgetArgument(i_59, 1);
              if(((y_58 != NULL) && (y_58 != m_59)))
                _fail(m_59);
              else
                y_58 = m_59;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_58);
      t = foldr_2(t, i_74, j_74);
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
    ATerm s_2 (ATerm t)
    {
      t = term_h_9;
      return(t);
    }
    t = crush_2(t, s_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL;
  b_60 = t;
  a_60 :
  if(match_cons(b_60, sym__2))
    {
      c_60 = ATgetArgument(b_60, 0);
      d_60 = ATgetArgument(b_60, 1);
      {
        ATerm t_10;
        t_10 = t;
        {
          ATerm u_10 = t;
          int v_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_60), not_null(d_60));
              LocalPopChoice(v_10);
            }
          else
            {
              t = u_10;
              t = SSL_gtr(not_null(c_60), not_null(d_60));
            }
        }
        t = t_10;
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
  ATerm j_60 = NULL;
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_60 = NULL,l_60 = NULL,m_60 = NULL;
      k_60 = t;
      i_60 :
      if(match_cons(k_60, sym__2))
        {
          l_60 = ATgetArgument(k_60, 0);
          m_60 = ATgetArgument(k_60, 1);
          {
            if(((j_60 != NULL) && (j_60 != l_60)))
              _fail(l_60);
            else
              j_60 = l_60;
            if(((j_60 != NULL) && (j_60 != m_60)))
              _fail(m_60);
            else
              j_60 = m_60;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm s_65 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm p_60 = NULL;
      ATerm q_60 = NULL;
      t = term_b_8;
      {
        t = get_config_0(t);
        {
          q_60 = t;
          if(((p_60 != NULL) && (p_60 != q_60)))
            _fail(q_60);
          else
            p_60 = q_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_60), term_g_7);
        t = geq_0(t);
      }
    }
    t = y_10;
    t = s_65(t);
    return(t);
  }
  t = try_1(t, t_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm u_60 = NULL,w_60 = NULL;
    ATerm z_10;
    z_10 = t;
    {
      ATerm v_60 = NULL;
      t = run_time_0(t);
      {
        v_60 = t;
        if(((u_60 != NULL) && (u_60 != v_60)))
          _fail(v_60);
        else
          u_60 = v_60;
      }
    }
    t = z_10;
    {
      ATerm x_60 = NULL;
      t = term_a_11;
      {
        t = get_config_0(t);
        {
          x_60 = t;
          if(((w_60 != NULL) && (w_60 != x_60)))
            _fail(x_60);
          else
            w_60 = x_60;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_11), not_null(u_60)), term_b_11), not_null(w_60)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_2);
  {
    t = term_h_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  d_61 :
  if(match_cons(e_61, sym_Version_0))
    {
      ATerm g_61 = NULL,i_61 = NULL;
      ATerm d_11;
      d_11 = t;
      {
        ATerm h_61 = NULL;
        t = SSLgetAnnotations(not_null(e_61));
        {
          h_61 = t;
          if(((g_61 != NULL) && (g_61 != h_61)))
            _fail(h_61);
          else
            g_61 = h_61;
        }
      }
      t = d_11;
      {
        ATerm j_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_61));
        {
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
        }
        t = not_null(i_61);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_67 (ATerm))
{
  ATerm v_2 (ATerm t)
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
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
  t = option_defined_1(t, v_2);
  t = x_67(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm o_61 = NULL;
  o_61 = t;
  t = SSL_table_create(not_null(o_61));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_61 = NULL;
  s_61 = t;
  {
    ATerm l_11;
    l_11 = t;
    {
      t = term_m_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_11, term_n_11, not_null(s_61));
          t = table_put_0(t);
        }
      }
    }
    t = l_11;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_61 = NULL;
  w_61 = t;
  t = SSL_table_destroy(not_null(w_61));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_62 = NULL;
  a_62 = t;
  t = SSL_exit(not_null(a_62));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  d_62 :
  if(((ATermList) e_62 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
        {
          f_62 = ATgetFirst((ATermList) e_62);
          g_62 = (ATerm) ATgetNext((ATermList) e_62);
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
  ATerm o_11;
  o_11 = t;
  {
    ATerm j_62 = NULL;
    ATerm m_62 = NULL;
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        {
          ATerm k_62 = NULL;
          ATerm l_62 = NULL;
          l_62 = t;
          if(((k_62 != NULL) && (k_62 != l_62)))
            _fail(l_62);
          else
            k_62 = l_62;
          t = (ATerm) ATinsert(ATempty, not_null(k_62));
        }
      }
    {
      m_62 = t;
      if(((j_62 != NULL) && (j_62 != m_62)))
        _fail(m_62);
      else
        j_62 = m_62;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(j_62));
      t = printnl_0(t);
    }
  }
  t = o_11;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm y_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm p_62 (ATerm t)
  {
    ATerm r_11 = t;
    int s_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(s_11);
      }
    else
      {
        t = r_11;
        t = Cons_2(t, g_78, p_62);
      }
    return(t);
  }
  t = p_62(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_62 = NULL,x_62 = NULL,y_62 = NULL;
  y_62 = t;
  v_62 :
  if(((ATgetType(y_62) == AT_LIST) && ((ATermList) y_62 != ATempty)))
    {
      w_62 = ATgetFirst((ATermList) y_62);
      x_62 = (ATerm) ATgetNext((ATermList) y_62);
      {
        ATerm b_63 = NULL;
        t = not_null(x_62);
        {
          ATerm t_11;
          t_11 = t;
          {
            ATerm c_63 = NULL,e_63 = NULL,g_63 = NULL;
            ATerm u_11;
            u_11 = t;
            {
              ATerm d_63 = NULL;
              t = g_0(t);
              {
                d_63 = t;
                if(((c_63 != NULL) && (c_63 != d_63)))
                  _fail(d_63);
                else
                  c_63 = d_63;
              }
            }
            t = u_11;
            {
              ATerm f_63 = NULL;
              t = not_null(w_62);
              {
                t = f_0(t);
                {
                  f_63 = t;
                  if(((e_63 != NULL) && (e_63 != f_63)))
                    _fail(f_63);
                  else
                    e_63 = f_63;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_63)), not_null(e_63));
                {
                  g_63 = t;
                  if(((b_63 != NULL) && (b_63 != g_63)))
                    _fail(g_63);
                  else
                    b_63 = g_63;
                }
              }
            }
          }
          t = t_11;
          {
            ATerm w_2 (ATerm t)
            {
              t = not_null(b_63);
              return(t);
            }
            t = reverse_acc_2(t, f_0, w_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_62 == ATempty))
        {
          {
            t = term_x_9;
            t = g_0(t);
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
ATerm short_description_1 (ATerm t, ATerm x_63 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_50 (ATerm))
{
  ATerm r_63 = NULL,s_63 = NULL;
  r_63 = t;
  q_63 :
  if(match_cons(r_63, sym_Program_1))
    {
      s_63 = ATgetArgument(r_63, 0);
      {
        ATerm v_63 = NULL,d_64 = NULL;
        ATerm w_63 = NULL;
        t = SSLgetAnnotations(not_null(r_63));
        {
          w_63 = t;
          if(((v_63 != NULL) && (v_63 != w_63)))
            _fail(w_63);
          else
            v_63 = w_63;
        }
        {
          t = not_null(s_63);
          {
            ATerm f_64 = NULL;
            t = c_50(t);
            {
              d_64 = t;
              {
                ATerm g_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(d_64)), not_null(v_63));
                {
                  g_64 = t;
                  if(((f_64 != NULL) && (f_64 != g_64)))
                    _fail(g_64);
                  else
                    f_64 = g_64;
                }
                t = not_null(f_64);
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
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_64 = NULL;
      t = term_a_11;
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
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm y_2 (ATerm t)
        {
          ATerm z_2 (ATerm t)
          {
            ATerm r_64 = NULL;
            r_64 = t;
            if(((p_64 != NULL) && (p_64 != r_64)))
              _fail(r_64);
            else
              p_64 = r_64;
            return(t);
          }
          t = Program_1(t, z_2);
          return(t);
        }
        t = option_defined_1(t, y_2);
      }
    }
  {
    ATerm a_3 (ATerm t)
    {
      ATerm b_3 (ATerm t)
      {
        t = not_null(p_64);
        return(t);
      }
      t = short_description_1(t, b_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, a_3);
    {
      t = term_b_12;
      {
        t = echo_0(t);
        {
          t = term_k_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm c_3 (ATerm t)
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
                t = map_1(t, c_3);
                {
                  ATerm d_3 (ATerm t)
                  {
                    ATerm u_64 = NULL;
                    ATerm v_64 = NULL;
                    ATerm e_3 (ATerm t)
                    {
                      t = not_null(p_64);
                      return(t);
                    }
                    t = long_description_1(t, e_3);
                    {
                      v_64 = t;
                      if(((u_64 != NULL) && (u_64 != v_64)))
                        _fail(v_64);
                      else
                        u_64 = v_64;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(u_64)), term_m_12);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, d_3);
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
  ATerm n_12;
  n_12 = t;
  {
    ATerm b_65 = NULL;
    ATerm d_65 = NULL;
    d_65 = t;
    if(((b_65 != NULL) && (b_65 != d_65)))
      _fail(d_65);
    else
      b_65 = d_65;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(b_65)));
      t = printnl_0(t);
    }
  }
  t = n_12;
  return(t);
}
ATerm say_1 (ATerm t, ATerm q_68 (ATerm))
{
  ATerm o_12;
  o_12 = t;
  {
    t = q_68(t);
    t = debug_0(t);
  }
  t = o_12;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_50 (ATerm))
{
  ATerm k_65 = NULL,l_65 = NULL;
  k_65 = t;
  j_65 :
  if(match_cons(k_65, sym_Undefined_1))
    {
      l_65 = ATgetArgument(k_65, 0);
      {
        ATerm o_65 = NULL,q_65 = NULL;
        ATerm p_65 = NULL;
        t = SSLgetAnnotations(not_null(k_65));
        {
          p_65 = t;
          if(((o_65 != NULL) && (o_65 != p_65)))
            _fail(p_65);
          else
            o_65 = p_65;
        }
        {
          t = not_null(l_65);
          {
            ATerm u_65 = NULL;
            t = d_50(t);
            {
              q_65 = t;
              {
                ATerm v_65 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(q_65)), not_null(o_65));
                {
                  v_65 = t;
                  if(((u_65 != NULL) && (u_65 != v_65)))
                    _fail(v_65);
                  else
                    u_65 = v_65;
                }
                t = not_null(u_65);
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
ATerm fetch_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm a_66 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, p_78, _id);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, _id, a_66);
      }
    return(t);
  }
  t = a_66(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_65 (ATerm))
{
  t = fetch_1(t, c_65);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  e_66 :
  if(match_cons(f_66, sym_Help_0))
    {
      ATerm h_66 = NULL,j_66 = NULL;
      ATerm r_12;
      r_12 = t;
      {
        ATerm i_66 = NULL;
        t = SSLgetAnnotations(not_null(f_66));
        {
          i_66 = t;
          if(((h_66 != NULL) && (h_66 != i_66)))
            _fail(i_66);
          else
            h_66 = i_66;
        }
      }
      t = r_12;
      {
        ATerm k_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_66));
        {
          k_66 = t;
          if(((j_66 != NULL) && (j_66 != k_66)))
            _fail(k_66);
          else
            j_66 = k_66;
        }
        t = not_null(j_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_87(t);
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym__2))
    {
      r_66 = ATgetArgument(q_66, 0);
      s_66 = ATgetArgument(q_66, 1);
      t = SSL_table_get(not_null(r_66), not_null(s_66));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,p_67 = NULL,q_67 = NULL;
  j_67 = t;
  i_67 :
  if(match_cons(j_67, sym__3))
    {
      k_67 = ATgetArgument(j_67, 0);
      p_67 = ATgetArgument(j_67, 1);
      q_67 = ATgetArgument(j_67, 2);
      {
        ATerm u_12;
        u_12 = t;
        {
          ATerm u_67 = NULL;
          ATerm v_67 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_67), not_null(p_67));
          {
            ATerm v_12 = t;
            int w_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_12);
              }
            else
              {
                t = v_12;
                t = (ATerm) ATempty;
              }
            {
              v_67 = t;
              if(((u_67 != NULL) && (u_67 != v_67)))
                _fail(v_67);
              else
                u_67 = v_67;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_67), not_null(p_67), (ATerm) ATinsert(CheckATermList(not_null(u_67)), not_null(q_67)));
            t = table_put_0(t);
          }
        }
        t = u_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm b_68 = NULL;
  ATerm c_68 = NULL;
  t = term_x_9;
  {
    t = c_64(t);
    {
      c_68 = t;
      if(((b_68 != NULL) && (b_68 != c_68)))
        _fail(c_68);
      else
        b_68 = c_68;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_12, term_h_12, not_null(b_68));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
  i_68 = t;
  h_68 :
  if(match_string(i_68, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(i_68) == AT_LIST) && ((ATermList) i_68 != ATempty)))
        {
          j_68 = ATgetFirst((ATermList) i_68);
          k_68 = (ATerm) ATgetNext((ATermList) i_68);
          {
            ATerm n_68 = NULL;
            ATerm a_13;
            a_13 = t;
            {
              t = not_null(j_68);
              t = a_0(t);
            }
            t = a_13;
            {
              ATerm o_68 = NULL;
              t = term_x_9;
              {
                t = b_0(t);
                {
                  o_68 = t;
                  if(((n_68 != NULL) && (n_68 != o_68)))
                    _fail(o_68);
                  else
                    n_68 = o_68;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_68)), not_null(n_68));
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
  ATerm f_3 (ATerm t)
  {
    ATerm v_68 = NULL;
    v_68 = t;
    u_68 :
    if(!(match_string(v_68, "--help")))
      {
        if(!(match_string(v_68, "-h")))
          {
            if(!(match_string(v_68, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_f_13;
    {
      t = set_config_0(t);
      t = term_i_13;
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_j_13;
    return(t);
  }
  t = Option_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm y_68 = NULL,z_68 = NULL,a_69 = NULL;
  y_68 = t;
  x_68 :
  if(((ATgetType(y_68) == AT_LIST) && ((ATermList) y_68 != ATempty)))
    {
      z_68 = ATgetFirst((ATermList) y_68);
      a_69 = (ATerm) ATgetNext((ATermList) y_68);
      t = (ATerm) ATinsert(CheckATermList(not_null(a_69)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(z_68)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_59 (ATerm), ATerm x_59 (ATerm))
{
  ATerm k_69 = NULL,l_69 = NULL,m_69 = NULL;
  k_69 = t;
  j_69 :
  if(((ATgetType(k_69) == AT_LIST) && ((ATermList) k_69 != ATempty)))
    {
      l_69 = ATgetFirst((ATermList) k_69);
      m_69 = (ATerm) ATgetNext((ATermList) k_69);
      {
        ATerm q_69 = NULL,s_69 = NULL;
        ATerm r_69 = NULL;
        t = SSLgetAnnotations(not_null(k_69));
        {
          r_69 = t;
          if(((q_69 != NULL) && (q_69 != r_69)))
            _fail(r_69);
          else
            q_69 = r_69;
        }
        {
          t = not_null(l_69);
          {
            ATerm u_69 = NULL;
            t = w_59(t);
            {
              s_69 = t;
              {
                t = not_null(m_69);
                {
                  ATerm w_69 = NULL;
                  t = x_59(t);
                  {
                    u_69 = t;
                    {
                      ATerm x_69 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(u_69)), not_null(s_69)), not_null(q_69));
                      {
                        x_69 = t;
                        if(((w_69 != NULL) && (w_69 != x_69)))
                          _fail(x_69);
                        else
                          w_69 = x_69;
                      }
                      t = not_null(w_69);
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
  ATerm h_70 = NULL;
  h_70 = t;
  g_70 :
  if(((ATermList) h_70 == ATempty))
    {
      {
        ATerm j_70 = NULL,l_70 = NULL;
        ATerm n_13;
        n_13 = t;
        {
          ATerm k_70 = NULL;
          t = SSLgetAnnotations(not_null(h_70));
          {
            k_70 = t;
            if(((j_70 != NULL) && (j_70 != k_70)))
              _fail(k_70);
            else
              j_70 = k_70;
          }
        }
        t = n_13;
        {
          ATerm m_70 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_70));
          {
            m_70 = t;
            if(((l_70 != NULL) && (l_70 != m_70)))
              _fail(m_70);
            else
              l_70 = m_70;
          }
          t = not_null(l_70);
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
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL;
  s_70 = t;
  r_70 :
  if(match_cons(s_70, sym__2))
    {
      t_70 = ATgetArgument(s_70, 0);
      u_70 = ATgetArgument(s_70, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_y_7, not_null(t_70), not_null(u_70));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_64 (ATerm))
{
  ATerm q_13;
  q_13 = t;
  {
    ATerm i_3 (ATerm t)
    {
      t = term_r_13;
      t = a_64(t);
      return(t);
    }
    t = try_1(t, i_3);
  }
  t = q_13;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm c_71 = NULL;
      ATerm s_13;
      s_13 = t;
      {
        ATerm a_71 = NULL;
        ATerm b_71 = NULL;
        b_71 = t;
        if(((a_71 != NULL) && (a_71 != b_71)))
          _fail(b_71);
        else
          a_71 = b_71;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_11, not_null(a_71));
          t = set_config_0(t);
        }
      }
      t = s_13;
      {
        ATerm d_71 = NULL;
        d_71 = t;
        if(((c_71 != NULL) && (c_71 != d_71)))
          _fail(d_71);
        else
          c_71 = d_71;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_71));
      }
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
              {
                t = a_64(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(u_13);
        }
      else
        {
          t = t_13;
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
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  ATerm x_13;
  x_13 = t;
  {
    ATerm o_71 = NULL,p_71 = NULL,q_71 = NULL,r_71 = NULL;
    o_71 = t;
    k_71 :
    if(match_cons(o_71, sym__3))
      {
        p_71 = ATgetArgument(o_71, 0);
        q_71 = ATgetArgument(o_71, 1);
        r_71 = ATgetArgument(o_71, 2);
        {
          if(((l_71 != NULL) && (l_71 != p_71)))
            _fail(p_71);
          else
            l_71 = p_71;
          {
            if(((m_71 != NULL) && (m_71 != q_71)))
              _fail(q_71);
            else
              m_71 = q_71;
            {
              if(((n_71 != NULL) && (n_71 != r_71)))
                _fail(r_71);
              else
                n_71 = r_71;
              t = SSL_table_put(not_null(l_71), not_null(m_71), not_null(n_71));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = x_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm u_71 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    t = term_z_13;
    t = table_put_0(t);
  }
  t = y_13;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm a_14 = t;
      int b_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_63(t);
          LocalPopChoice(b_14);
        }
      else
        {
          t = a_14;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm m_3 (ATerm t)
      {
        ATerm c_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_14;
            i_14 = t;
            {
              ATerm j_14 = t;
              int n_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_b_13;
                  t = get_config_0(t);
                  LocalPopChoice(n_14);
                }
              else
                {
                  t = j_14;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = i_14;
            {
              t = system_usage_0(t);
              {
                t = term_h_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_14);
          }
        else
          {
            t = c_14;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm o_3 (ATerm t)
                {
                  ATerm v_71 = NULL;
                  v_71 = t;
                  if(((u_71 != NULL) && (u_71 != v_71)))
                    _fail(v_71);
                  else
                    u_71 = v_71;
                  return(t);
                }
                t = Undefined_1(t, o_3);
                return(t);
              }
              t = option_defined_1(t, n_3);
              {
                ATerm p_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_71)), term_p_14);
                  return(t);
                }
                t = say_1(t, p_3);
                {
                  t = system_usage_0(t);
                  {
                    t = term_g_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, m_3);
      {
        ATerm s_14;
        s_14 = t;
        {
          t = term_f_12;
          t = table_destroy_0(t);
        }
        t = s_14;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_66 (ATerm), ATerm v_66 (ATerm), ATerm w_66 (ATerm), ATerm x_66 (ATerm))
{
  t = parse_options_1(t, u_66);
  {
    t = store_options_0(t);
    {
      t = w_66(t);
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_66);
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm v_14 = t;
              int w_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_66(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_14);
                }
              else
                {
                  t = v_14;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_67 (ATerm), ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm))
{
  ATerm q_3 (ATerm t)
  {
    ATerm x_14 = t;
    int y_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_67(t);
        LocalPopChoice(y_14);
      }
    else
      {
        t = x_14;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, l_67);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, q_3, n_67, o_67, r_3);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm h_67 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm t_3 (ATerm t)
    {
      ATerm z_14;
      z_14 = t;
      {
        ATerm y_71 = NULL;
        ATerm z_71 = NULL;
        t = term_a_11;
        {
          t = get_config_0(t);
          {
            z_71 = t;
            if(((y_71 != NULL) && (y_71 != z_71)))
              _fail(z_71);
            else
              y_71 = z_71;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_7, (ATerm) ATinsert(ATempty, not_null(y_71)));
          t = printnl_0(t);
        }
      }
      t = z_14;
      return(t);
    }
    t = if_verbose2_1(t, t_3);
    return(t);
  }
  t = iowrap_4(t, f_67, g_67, h_67, s_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  t = iowrap_3(t, d_67, e_67, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    t = _2(t, _id, a_67);
    return(t);
  }
  t = iowrap_2(t, u_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
