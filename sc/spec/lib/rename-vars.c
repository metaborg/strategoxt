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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
ATerm term_g_18;
ATerm term_a_18;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_p_15;
ATerm term_p_14;
ATerm term_o_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_v_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_f_11;
ATerm term_r_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_s_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_h_9;
ATerm term_z_8;
ATerm term_x_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
void init_constant_terms (void)
{
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_h_9, term_s_9);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_9);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_o_13);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_o_13);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_o_13);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_w_15);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, (ATerm) ATempty);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm y_86 (ATerm));
ATerm Rec_2 (ATerm, ATerm b_59 (ATerm), ATerm c_59 (ATerm));
ATerm SDef_3 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm Let_2 (ATerm, ATerm d_59 (ATerm), ATerm e_59 (ATerm));
ATerm sboundin_3 (ATerm, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm a_59 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm u_86 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm r_57 (ATerm));
ATerm Scope_2 (ATerm, ATerm f_60 (ATerm), ATerm g_60 (ATerm));
ATerm tboundin_3 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm));
ATerm crush_3 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm for_3 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm HdMember_1 (ATerm, ATerm q_75 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm m_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm));
ATerm zip_1 (ATerm, ATerm j_80 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm j_73 (ATerm), ATerm k_73 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm x_72 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm c_72 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm h_72 (ATerm));
ATerm rename_4 (ATerm, ATerm l_73 (ATerm, ATerm (ATerm)), ATerm m_73 (ATerm), ATerm n_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_73 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm f_49 (ATerm), ATerm g_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_67 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_60 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_74 (ATerm), ATerm l_74 (ATerm));
ATerm crush_2 (ATerm, ATerm z_75 (ATerm), ATerm a_76 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_60 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm c_69 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_81 (ATerm), ATerm s_81 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm a_69 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_64 (ATerm));
ATerm map_1 (ATerm, ATerm g_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_64 (ATerm));
ATerm Program_1 (ATerm, ATerm v_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_65 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm j_82 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_65 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_60 (ATerm), ATerm l_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_64 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_64 (ATerm));
ATerm iowrap_4 (ATerm, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm));
ATerm iowrap_3 (ATerm, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm));
ATerm iowrap_2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm iowrap_1 (ATerm, ATerm d_68 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm f_3 = NULL,g_3 = NULL,r_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && ((ATermList) f_3 != ATempty)))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      r_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = not_null(g_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm y_86 (ATerm))
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_0 (ATerm t)
      {
        t = split_2(t, _id, y_86);
        {
          ATerm b_0 (ATerm t)
          {
            ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL;
            e_4 = t;
            z_3 :
            if(match_cons(e_4, sym__2))
              {
                f_4 = ATgetArgument(e_4, 0);
                j_4 = ATgetArgument(e_4, 1);
                a_4 :
                if(match_cons(f_4, sym_SDef_3))
                  {
                    g_4 = ATgetArgument(f_4, 0);
                    h_4 = ATgetArgument(f_4, 1);
                    i_4 = ATgetArgument(f_4, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(j_4), not_null(h_4), not_null(i_4));
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
          t = zip_1(t, b_0);
        }
        return(t);
      }
      t = Let_2(t, a_0, _id);
      LocalPopChoice(l_4);
    }
  else
    {
      t = k_4;
      {
        ATerm m_4 = t;
        int s_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, y_86);
              {
                ATerm f_0 (ATerm t)
                {
                  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
                  n_4 = t;
                  c_4 :
                  if(match_cons(n_4, sym__2))
                    {
                      o_4 = ATgetArgument(n_4, 0);
                      r_4 = ATgetArgument(n_4, 1);
                      d_4 :
                      if(match_cons(o_4, sym_VarDec_2))
                        {
                          p_4 = ATgetArgument(o_4, 0);
                          q_4 = ATgetArgument(o_4, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(r_4), not_null(q_4));
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
                t = zip_1(t, f_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(s_4);
          }
        else
          {
            t = m_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = y_86(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, n_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm b_59 (ATerm), ATerm c_59 (ATerm))
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym_Rec_2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm j_5 = NULL,l_5 = NULL;
        ATerm k_5 = NULL;
        t = SSLgetAnnotations(not_null(d_5));
        {
          k_5 = t;
          if(((j_5 != NULL) && (j_5 != k_5)))
            _fail(k_5);
          else
            j_5 = k_5;
        }
        {
          t = not_null(e_5);
          {
            ATerm n_5 = NULL;
            t = b_59(t);
            {
              l_5 = t;
              {
                t = not_null(f_5);
                {
                  ATerm p_5 = NULL;
                  t = c_59(t);
                  {
                    n_5 = t;
                    {
                      ATerm q_5 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, not_null(l_5), not_null(n_5)), not_null(j_5));
                      {
                        q_5 = t;
                        if(((p_5 != NULL) && (p_5 != q_5)))
                          _fail(q_5);
                        else
                          p_5 = q_5;
                      }
                      t = not_null(p_5);
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
ATerm SDef_3 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL;
  d_6 = t;
  c_6 :
  if(match_cons(d_6, sym_SDef_3))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      g_6 = ATgetArgument(d_6, 2);
      {
        ATerm l_6 = NULL,n_6 = NULL;
        ATerm m_6 = NULL;
        t = SSLgetAnnotations(not_null(d_6));
        {
          m_6 = t;
          if(((l_6 != NULL) && (l_6 != m_6)))
            _fail(m_6);
          else
            l_6 = m_6;
        }
        {
          t = not_null(e_6);
          {
            ATerm p_6 = NULL;
            t = f_59(t);
            {
              n_6 = t;
              {
                t = not_null(f_6);
                {
                  ATerm r_6 = NULL;
                  t = g_59(t);
                  {
                    p_6 = t;
                    {
                      t = not_null(g_6);
                      {
                        ATerm t_6 = NULL;
                        t = h_59(t);
                        {
                          r_6 = t;
                          {
                            ATerm u_6 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, not_null(n_6), not_null(p_6), not_null(r_6)), not_null(l_6));
                            {
                              u_6 = t;
                              if(((t_6 != NULL) && (t_6 != u_6)))
                                _fail(u_6);
                              else
                                t_6 = u_6;
                            }
                            t = not_null(t_6);
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
ATerm Let_2 (ATerm t, ATerm d_59 (ATerm), ATerm e_59 (ATerm))
{
  ATerm h_7 = NULL,i_7 = NULL,j_7 = NULL;
  h_7 = t;
  g_7 :
  if(match_cons(h_7, sym_Let_2))
    {
      i_7 = ATgetArgument(h_7, 0);
      j_7 = ATgetArgument(h_7, 1);
      {
        ATerm n_7 = NULL,p_7 = NULL;
        ATerm o_7 = NULL;
        t = SSLgetAnnotations(not_null(h_7));
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
        {
          t = not_null(i_7);
          {
            ATerm r_7 = NULL;
            t = d_59(t);
            {
              p_7 = t;
              {
                t = not_null(j_7);
                {
                  ATerm t_7 = NULL;
                  t = e_59(t);
                  {
                    r_7 = t;
                    {
                      ATerm u_7 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, not_null(p_7), not_null(r_7)), not_null(n_7));
                      {
                        u_7 = t;
                        if(((t_7 != NULL) && (t_7 != u_7)))
                          _fail(u_7);
                        else
                          t_7 = u_7;
                      }
                      t = not_null(t_7);
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
ATerm sboundin_3 (ATerm t, ATerm z_86 (ATerm), ATerm a_87 (ATerm), ATerm b_87 (ATerm))
{
  ATerm t_4 = t;
  int u_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, z_86, z_86);
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
            t = SDef_3(t, b_87, b_87, z_86);
            LocalPopChoice(w_4);
          }
        else
          {
            t = v_4;
            t = Rec_2(t, b_87, z_86);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
  c_8 = t;
  b_8 :
  if(match_cons(c_8, sym_Rec_2))
    {
      d_8 = ATgetArgument(c_8, 0);
      e_8 = ATgetArgument(c_8, 1);
      t = (ATerm) ATinsert(ATempty, not_null(d_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
  m_8 = t;
  l_8 :
  if(match_cons(m_8, sym_SDef_3))
    {
      n_8 = ATgetArgument(m_8, 0);
      o_8 = ATgetArgument(m_8, 1);
      p_8 = ATgetArgument(m_8, 2);
      {
        t = not_null(o_8);
        {
          ATerm o_0 (ATerm t)
          {
            ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL;
            t_8 = t;
            k_8 :
            if(match_cons(t_8, sym_VarDec_2))
              {
                u_8 = ATgetArgument(t_8, 0);
                v_8 = ATgetArgument(t_8, 1);
                t = not_null(u_8);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, o_0);
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
  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL;
  d_9 = t;
  c_9 :
  if(match_cons(d_9, sym_Let_2))
    {
      e_9 = ATgetArgument(d_9, 0);
      f_9 = ATgetArgument(d_9, 1);
      {
        t = not_null(e_9);
        {
          ATerm p_0 (ATerm t)
          {
            ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL;
            i_9 = t;
            b_9 :
            if(match_cons(i_9, sym_SDef_3))
              {
                j_9 = ATgetArgument(i_9, 0);
                k_9 = ATgetArgument(i_9, 1);
                l_9 = ATgetArgument(i_9, 2);
                t = not_null(j_9);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = map_1(t, p_0);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm a_59 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_SVar_1))
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
            t = a_59(t);
            {
              c_10 = t;
              {
                ATerm f_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, not_null(c_10)), not_null(a_10));
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
ATerm srename_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    ATerm x_4 = t;
    int y_4 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(a_5);
            }
          else
            {
              t = z_4;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm u_86 (ATerm))
{
  t = Scope_2(t, u_86, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm r_57 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_DynamicRules_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm x_10 = NULL;
            t = r_57(t);
            {
              v_10 = t;
              {
                ATerm y_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, not_null(v_10)), not_null(t_10));
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
                t = not_null(x_10);
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
ATerm Scope_2 (ATerm t, ATerm f_60 (ATerm), ATerm g_60 (ATerm))
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  j_11 = t;
  i_11 :
  if(match_cons(j_11, sym_Scope_2))
    {
      k_11 = ATgetArgument(j_11, 0);
      l_11 = ATgetArgument(j_11, 1);
      {
        ATerm p_11 = NULL,r_11 = NULL;
        ATerm q_11 = NULL;
        t = SSLgetAnnotations(not_null(j_11));
        {
          q_11 = t;
          if(((p_11 != NULL) && (p_11 != q_11)))
            _fail(q_11);
          else
            p_11 = q_11;
        }
        {
          t = not_null(k_11);
          {
            ATerm t_11 = NULL;
            t = f_60(t);
            {
              r_11 = t;
              {
                t = not_null(l_11);
                {
                  ATerm v_11 = NULL;
                  t = g_60(t);
                  {
                    t_11 = t;
                    {
                      ATerm w_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, not_null(r_11), not_null(t_11)), not_null(p_11));
                      {
                        w_11 = t;
                        if(((v_11 != NULL) && (v_11 != w_11)))
                          _fail(w_11);
                        else
                          v_11 = w_11;
                      }
                      t = not_null(v_11);
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
ATerm tboundin_3 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm), ATerm x_86 (ATerm))
{
  ATerm b_5 = t;
  int g_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, x_86, v_86);
      LocalPopChoice(g_5);
    }
  else
    {
      t = b_5;
      t = DynamicRules_1(t, v_86);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  e_12 = t;
  d_12 :
  if(match_cons(e_12, sym_DynamicRules_1))
    {
      f_12 = ATgetArgument(e_12, 0);
      {
        t = not_null(f_12);
        t = tvars_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm k_12 = NULL,l_12 = NULL;
  k_12 = t;
  j_12 :
  if(match_cons(k_12, sym_Var_1))
    {
      l_12 = ATgetArgument(k_12, 0);
      t = (ATerm) ATinsert(ATempty, not_null(l_12));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        t = not_null(r_12);
        {
          ATerm w_12 (ATerm t)
          {
            ATerm h_5 = t;
            int i_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_12);
                LocalPopChoice(i_5);
              }
            else
              {
                t = h_5;
                {
                  ATerm m_5 = t;
                  int o_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(s_12);
                        return(t);
                      }
                      t = HdMember_1(t, r_0);
                      t = w_12(t);
                      LocalPopChoice(o_5);
                    }
                  else
                    {
                      t = m_5;
                      t = Cons_2(t, _id, w_12);
                    }
                }
              }
            return(t);
          }
          t = w_12(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm m_74 (ATerm), ATerm n_74 (ATerm), ATerm o_74 (ATerm))
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_74(t);
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      {
        ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
        b_13 = t;
        a_13 :
        if(((ATgetType(b_13) == AT_LIST) && ((ATermList) b_13 != ATempty)))
          {
            c_13 = ATgetFirst((ATermList) b_13);
            d_13 = (ATerm) ATgetNext((ATermList) b_13);
            {
              ATerm g_13 = NULL,i_13 = NULL;
              ATerm t_5;
              t_5 = t;
              {
                ATerm h_13 = NULL;
                t = not_null(c_13);
                {
                  t = o_74(t);
                  {
                    h_13 = t;
                    if(((g_13 != NULL) && (g_13 != h_13)))
                      _fail(h_13);
                    else
                      g_13 = h_13;
                  }
                }
              }
              t = t_5;
              {
                ATerm j_13 = NULL;
                t = not_null(d_13);
                {
                  t = foldr_3(t, m_74, n_74, o_74);
                  {
                    j_13 = t;
                    if(((i_13 != NULL) && (i_13 != j_13)))
                      _fail(j_13);
                    else
                      i_13 = j_13;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), not_null(i_13));
                  t = n_74(t);
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
ATerm crush_3 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm), ATerm d_76 (ATerm))
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
          q_13 :
          if(match_cons(w_13, sym__2))
            {
              x_13 = ATgetArgument(w_13, 0);
              y_13 = ATgetArgument(w_13, 1);
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
      }
    }
    {
      t = not_null(t_13);
      t = foldr_3(t, b_76, c_76, d_76);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  f_14 = t;
  d_14 :
  if(match_cons(f_14, sym__2))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      e_14 :
      if(((ATgetType(h_14) == AT_LIST) && ((ATermList) h_14 != ATempty)))
        {
          i_14 = ATgetFirst((ATermList) h_14);
          j_14 = (ATerm) ATgetNext((ATermList) h_14);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_14)), not_null(i_14)), not_null(j_14));
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
ATerm UfDecompose_0 (ATerm t)
{
  ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  y_14 = t;
  w_14 :
  if(((ATgetType(y_14) == AT_LIST) && ((ATermList) y_14 != ATempty)))
    {
      z_14 = ATgetFirst((ATermList) y_14);
      c_15 = (ATerm) ATgetNext((ATermList) y_14);
      x_14 :
      if(match_cons(z_14, sym__2))
        {
          a_15 = ATgetArgument(z_14, 0);
          b_15 = ATgetArgument(z_14, 1);
          {
            ATerm g_15 = NULL,h_15 = NULL,n_15 = NULL,t_15 = NULL;
            ATerm u_5;
            u_5 = t;
            {
              ATerm i_15 = NULL;
              ATerm k_15 = NULL,l_15 = NULL,m_15 = NULL;
              t = not_null(b_15);
              {
                i_15 = t;
                {
                  t = SSL_explode_term(not_null(i_15));
                  {
                    k_15 = t;
                    r_14 :
                    if(match_cons(k_15, sym__2))
                      {
                        l_15 = ATgetArgument(k_15, 0);
                        m_15 = ATgetArgument(k_15, 1);
                        {
                          if(((g_15 != NULL) && (g_15 != l_15)))
                            _fail(l_15);
                          else
                            g_15 = l_15;
                          if(((h_15 != NULL) && (h_15 != m_15)))
                            _fail(m_15);
                          else
                            h_15 = m_15;
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
            t = u_5;
            {
              ATerm v_5;
              v_5 = t;
              {
                ATerm o_15 = NULL;
                ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
                t = not_null(a_15);
                {
                  o_15 = t;
                  {
                    t = SSL_explode_term(not_null(o_15));
                    {
                      q_15 = t;
                      u_14 :
                      if(match_cons(q_15, sym__2))
                        {
                          r_15 = ATgetArgument(q_15, 0);
                          s_15 = ATgetArgument(q_15, 1);
                          {
                            if(((g_15 != NULL) && (g_15 != r_15)))
                              _fail(r_15);
                            else
                              g_15 = r_15;
                            if(((n_15 != NULL) && (n_15 != s_15)))
                              _fail(s_15);
                            else
                              n_15 = s_15;
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
              t = v_5;
              {
                ATerm u_15 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_15), not_null(h_15));
                {
                  t = zip_1(t, _id);
                  {
                    u_15 = t;
                    if(((t_15 != NULL) && (t_15 != u_15)))
                      _fail(u_15);
                    else
                      t_15 = u_15;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(c_15));
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
  ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
  e_16 = t;
  c_16 :
  if(((ATgetType(e_16) == AT_LIST) && ((ATermList) e_16 != ATempty)))
    {
      f_16 = ATgetFirst((ATermList) e_16);
      i_16 = (ATerm) ATgetNext((ATermList) e_16);
      d_16 :
      if(match_cons(f_16, sym__2))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          {
            ATerm k_16 = NULL;
            if(((g_16 != NULL) && (g_16 != h_16)))
              _fail(h_16);
            else
              g_16 = h_16;
            {
              if(((k_16 != NULL) && (k_16 != i_16)))
                _fail(i_16);
              else
                k_16 = i_16;
              t = not_null(k_16);
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
ATerm while_not_2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm m_16 (ATerm t)
  {
    ATerm w_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_69(t);
        LocalPopChoice(x_5);
      }
    else
      {
        t = w_5;
        {
          t = w_69(t);
          t = m_16(t);
        }
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  t = y_69(t);
  t = while_not_2(t, z_69, a_70);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(((ATgetType(q_16) == AT_LIST) && ((ATermList) q_16 != ATempty)))
    {
      r_16 = ATgetFirst((ATermList) q_16);
      s_16 = (ATerm) ATgetNext((ATermList) q_16);
      {
        t = q_75(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm v_16 = NULL;
            v_16 = t;
            if(((r_16 != NULL) && (r_16 != v_16)))
              _fail(v_16);
            else
              r_16 = v_16;
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(s_16);
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
  ATerm y_5 = t;
  int z_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL;
      b_17 = t;
      z_16 :
      if(match_cons(b_17, sym__2))
        {
          c_17 = ATgetArgument(b_17, 0);
          d_17 = ATgetArgument(b_17, 1);
          {
            t = not_null(c_17);
            {
              ATerm j_17 (ATerm t)
              {
                ATerm a_6 = t;
                int b_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(b_6);
                  }
                else
                  {
                    t = a_6;
                    {
                      ATerm h_6 = t;
                      int i_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_0 (ATerm t)
                          {
                            t = not_null(d_17);
                            return(t);
                          }
                          t = HdMember_1(t, t_0);
                          t = j_17(t);
                          LocalPopChoice(i_6);
                        }
                      else
                        {
                          t = h_6;
                          t = Cons_2(t, _id, j_17);
                        }
                    }
                  }
                return(t);
              }
              t = j_17(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_5);
    }
  else
    {
      t = y_5;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm g_17 = NULL;
          g_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(g_17));
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm j_6 = t;
          int k_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 (ATerm t)
              {
                ATerm o_6 = t;
                int q_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_6);
                  }
                else
                  {
                    t = o_6;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_0);
              LocalPopChoice(k_6);
            }
          else
            {
              t = j_6;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_0, v_0, w_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm h_71 (ATerm), ATerm i_71 (ATerm), ATerm j_71 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm o_17 (ATerm t)
  {
    ATerm s_6 = t;
    int v_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_71(t);
        LocalPopChoice(v_6);
      }
    else
      {
        t = s_6;
        {
          ATerm w_6 = t;
          int x_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_17 = NULL;
              ATerm y_6;
              y_6 = t;
              {
                ATerm n_17 = NULL;
                t = i_71(t);
                {
                  n_17 = t;
                  if(((m_17 != NULL) && (m_17 != n_17)))
                    _fail(n_17);
                  else
                    m_17 = n_17;
                }
              }
              t = y_6;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(m_17);
                    return(t);
                  }
                  t = split_2(t, o_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = j_71(t, y_0, o_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_1, union_0, _id);
                }
              }
              LocalPopChoice(x_6);
            }
          else
            {
              t = w_6;
              {
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_1, union_0, o_17);
              }
            }
        }
      }
    return(t);
  }
  t = o_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  s_17 :
  if(match_cons(x_17, sym_LRule_1))
    {
      y_17 = ATgetArgument(x_17, 0);
      t_17 :
      if(match_cons(y_17, sym_Rule_3))
        {
          u_17 = ATgetArgument(y_17, 0);
          v_17 = ATgetArgument(y_17, 1);
          w_17 = ATgetArgument(y_17, 2);
          {
            t = not_null(u_17);
            t = tvars_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(x_17, sym_Scope_2))
        {
          y_17 = ATgetArgument(x_17, 0);
          z_17 = ATgetArgument(x_17, 1);
          t = not_null(y_17);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm q_18 = NULL,r_18 = NULL;
  q_18 = t;
  p_18 :
  if(match_cons(q_18, sym_Var_1))
    {
      r_18 = ATgetArgument(q_18, 0);
      {
        ATerm b_7 = t;
        int c_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_18 = NULL,w_18 = NULL;
            ATerm v_18 = NULL;
            t = SSLgetAnnotations(not_null(q_18));
            {
              v_18 = t;
              if(((u_18 != NULL) && (u_18 != v_18)))
                _fail(v_18);
              else
                u_18 = v_18;
            }
            {
              t = not_null(r_18);
              {
                ATerm y_18 = NULL;
                t = m_0(t);
                {
                  w_18 = t;
                  {
                    ATerm z_18 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(w_18)), not_null(u_18));
                    {
                      z_18 = t;
                      if(((y_18 != NULL) && (y_18 != z_18)))
                        _fail(z_18);
                      else
                        y_18 = z_18;
                    }
                    t = not_null(y_18);
                  }
                }
              }
            }
            LocalPopChoice(c_7);
          }
        else
          {
            t = b_7;
            {
              ATerm c_19 = NULL,e_19 = NULL;
              ATerm d_19 = NULL;
              t = SSLgetAnnotations(not_null(q_18));
              {
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
              }
              {
                t = not_null(r_18);
                {
                  ATerm g_19 = NULL;
                  t = m_0(t);
                  {
                    e_19 = t;
                    {
                      ATerm h_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(e_19)), not_null(c_19));
                      {
                        h_19 = t;
                        if(((g_19 != NULL) && (g_19 != h_19)))
                          _fail(h_19);
                        else
                          g_19 = h_19;
                      }
                      t = not_null(g_19);
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
ATerm DistBinding_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm u_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  u_19 = t;
  t_19 :
  if(match_cons(u_19, sym__3))
    {
      v_19 = ATgetArgument(u_19, 0);
      w_19 = ATgetArgument(u_19, 1);
      x_19 = ATgetArgument(u_19, 2);
      {
        t = not_null(v_19);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm b_20 = NULL;
            b_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_20), not_null(x_19));
              t = d_73(t);
            }
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            ATerm d_20 = NULL;
            d_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(w_19));
              t = d_73(t);
            }
            return(t);
          }
          t = e_73(t, e_1, f_1, _id);
        }
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
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  j_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_20)), not_null(l_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL;
  v_20 = t;
  r_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      z_20 = ATgetArgument(v_20, 1);
      s_20 :
      if(((ATgetType(w_20) == AT_LIST) && ((ATermList) w_20 != ATempty)))
        {
          x_20 = ATgetFirst((ATermList) w_20);
          y_20 = (ATerm) ATgetNext((ATermList) w_20);
          u_20 :
          if(((ATgetType(z_20) == AT_LIST) && ((ATermList) z_20 != ATempty)))
            {
              a_21 = ATgetFirst((ATermList) z_20);
              b_21 = (ATerm) ATgetNext((ATermList) z_20);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_20), not_null(a_21)), (ATerm) ATmakeAppl(sym__2, not_null(y_20), not_null(b_21)));
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
  ATerm l_21 = NULL,m_21 = NULL,n_21 = NULL;
  l_21 = t;
  i_21 :
  if(match_cons(l_21, sym__2))
    {
      m_21 = ATgetArgument(l_21, 0);
      n_21 = ATgetArgument(l_21, 1);
      j_21 :
      if(((ATermList) m_21 == ATempty))
        {
          k_21 :
          if(((ATermList) n_21 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm), ATerm h_80 (ATerm))
{
  ATerm p_21 (ATerm t)
  {
    ATerm d_7 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_80(t);
        LocalPopChoice(e_7);
      }
    else
      {
        t = d_7;
        {
          t = f_80(t);
          {
            t = _2(t, h_80, p_21);
            t = g_80(t);
          }
        }
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm j_80 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, j_80);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm j_73 (ATerm), ATerm k_73 (ATerm, ATerm (ATerm)))
{
  ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
  x_21 = t;
  w_21 :
  if(match_cons(x_21, sym__2))
    {
      y_21 = ATgetArgument(x_21, 0);
      z_21 = ATgetArgument(x_21, 1);
      {
        ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL,k_22 = NULL;
        ATerm f_7;
        f_7 = t;
        {
          ATerm f_22 = NULL;
          t = not_null(y_21);
          {
            ATerm g_22 = NULL;
            t = j_73(t);
            {
              f_22 = t;
              {
                if(((c_22 != NULL) && (c_22 != f_22)))
                  _fail(f_22);
                else
                  c_22 = f_22;
                {
                  ATerm h_22 = NULL,j_22 = NULL;
                  t = map_1(t, new_0);
                  {
                    g_22 = t;
                    {
                      if(((d_22 != NULL) && (d_22 != g_22)))
                        _fail(g_22);
                      else
                        d_22 = g_22;
                      {
                        ATerm i_22 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_22), not_null(d_22));
                        {
                          t = zip_1(t, _id);
                          {
                            i_22 = t;
                            if(((h_22 != NULL) && (h_22 != i_22)))
                              _fail(i_22);
                            else
                              h_22 = i_22;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(z_21));
                          {
                            t = conc_0(t);
                            {
                              j_22 = t;
                              if(((e_22 != NULL) && (e_22 != j_22)))
                                _fail(j_22);
                              else
                                e_22 = j_22;
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
        t = f_7;
        {
          ATerm l_22 = NULL;
          t = not_null(y_21);
          {
            ATerm g_1 (ATerm t)
            {
              t = not_null(d_22);
              return(t);
            }
            t = k_73(t, g_1);
            {
              l_22 = t;
              if(((k_22 != NULL) && (k_22 != l_22)))
                _fail(l_22);
              else
                k_22 = l_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(k_22), not_null(z_21), not_null(e_22));
        }
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
  ATerm v_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL;
  v_22 = t;
  t_22 :
  if(match_cons(v_22, sym__2))
    {
      y_22 = ATgetArgument(v_22, 0);
      z_22 = ATgetArgument(v_22, 1);
      u_22 :
      if(((ATgetType(z_22) == AT_LIST) && ((ATermList) z_22 != ATempty)))
        {
          a_23 = ATgetFirst((ATermList) z_22);
          b_23 = (ATerm) ATgetNext((ATermList) z_22);
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(b_23));
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
  ATerm y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL,e_24 = NULL;
  y_23 = t;
  v_23 :
  if(match_cons(y_23, sym__2))
    {
      z_23 = ATgetArgument(y_23, 0);
      a_24 = ATgetArgument(y_23, 1);
      w_23 :
      if(((ATgetType(a_24) == AT_LIST) && ((ATermList) a_24 != ATempty)))
        {
          b_24 = ATgetFirst((ATermList) a_24);
          e_24 = (ATerm) ATgetNext((ATermList) a_24);
          x_23 :
          if(match_cons(b_24, sym__2))
            {
              c_24 = ATgetArgument(b_24, 0);
              d_24 = ATgetArgument(b_24, 1);
              {
                ATerm g_24 = NULL;
                if(((z_23 != NULL) && (z_23 != c_24)))
                  _fail(c_24);
                else
                  z_23 = c_24;
                {
                  if(((g_24 != NULL) && (g_24 != d_24)))
                    _fail(d_24);
                  else
                    g_24 = d_24;
                  t = not_null(g_24);
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
  ATerm k_7 = t;
  int l_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(l_7);
    }
  else
    {
      t = k_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm x_72 (ATerm, ATerm (ATerm)))
{
  ATerm l_24 = NULL,m_24 = NULL,n_24 = NULL;
  l_24 = t;
  k_24 :
  if(match_cons(l_24, sym__2))
    {
      m_24 = ATgetArgument(l_24, 0);
      n_24 = ATgetArgument(l_24, 1);
      {
        t = not_null(m_24);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(n_24);
              return(t);
            }
            t = split_2(t, _id, i_1);
            t = lookup_0(t);
            return(t);
          }
          t = x_72(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm c_72 (ATerm))
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  u_24 = t;
  t_24 :
  if(match_cons(u_24, sym__2))
    {
      v_24 = ATgetArgument(u_24, 0);
      w_24 = ATgetArgument(u_24, 1);
      {
        t = not_null(v_24);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm z_24 = NULL;
            z_24 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(z_24), not_null(w_24));
              t = c_72(t);
            }
            return(t);
          }
          t = _all(t, j_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm d_25 (ATerm t)
  {
    ATerm m_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_72(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = m_7;
        t = all_dist_1(t, d_25);
      }
    return(t);
  }
  t = d_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm l_73 (ATerm, ATerm (ATerm)), ATerm m_73 (ATerm), ATerm n_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm o_73 (ATerm, ATerm (ATerm)))
{
  ATerm f_25 = NULL;
  f_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_25), (ATerm) ATempty);
    {
      ATerm i_25 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm s_7 = t;
          int v_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, l_73);
              LocalPopChoice(v_7);
            }
          else
            {
              t = s_7;
              {
                t = RnBinding_2(t, m_73, o_73);
                t = DistBinding_2(t, i_25, n_73);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_1);
        return(t);
      }
      t = i_25(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm j_25 (ATerm t, ATerm k_25 (ATerm))
  {
    t = Scope_2(t, k_25, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, j_25);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm f_49 (ATerm), ATerm g_49 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym__2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      {
        ATerm x_25 = NULL,h_26 = NULL;
        ATerm y_25 = NULL;
        t = SSLgetAnnotations(not_null(r_25));
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
        {
          t = not_null(s_25);
          {
            ATerm j_26 = NULL;
            t = f_49(t);
            {
              h_26 = t;
              {
                t = not_null(t_25);
                {
                  ATerm o_26 = NULL;
                  t = g_49(t);
                  {
                    j_26 = t;
                    {
                      ATerm p_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_26), not_null(j_26)), not_null(x_25));
                      {
                        p_26 = t;
                        if(((o_26 != NULL) && (o_26 != p_26)))
                          _fail(p_26);
                        else
                          o_26 = p_26;
                      }
                      t = not_null(o_26);
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
  ATerm x_26 = NULL;
  ATerm w_7;
  w_7 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm y_26 = NULL,z_26 = NULL;
      y_26 = t;
      w_26 :
      if(match_cons(y_26, sym_Program_1))
        {
          z_26 = ATgetArgument(y_26, 0);
          if(((x_26 != NULL) && (x_26 != z_26)))
            _fail(z_26);
          else
            x_26 = z_26;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), not_null(x_26)), term_y_7));
      {
        t = printnl_0(t);
        {
          t = term_a_8;
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
  ATerm d_27 = NULL,e_27 = NULL,f_27 = NULL;
  d_27 = t;
  c_27 :
  if(match_cons(d_27, sym__2))
    {
      e_27 = ATgetArgument(d_27, 0);
      f_27 = ATgetArgument(d_27, 1);
      {
        ATerm f_8;
        f_8 = t;
        t = SSL_printnl(not_null(e_27), not_null(f_27));
        t = f_8;
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
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  k_27 :
  if(match_cons(l_27, sym__2))
    {
      m_27 = ATgetArgument(l_27, 0);
      n_27 = ATgetArgument(l_27, 1);
      {
        t = not_null(m_27);
        {
          ATerm m_1 (ATerm t)
          {
            t = not_null(n_27);
            return(t);
          }
          t = at_end_1(t, m_1);
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
ATerm debug_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm g_8;
  g_8 = t;
  {
    ATerm t_27 = NULL,v_27 = NULL;
    ATerm h_8;
    h_8 = t;
    {
      ATerm u_27 = NULL;
      t = n_67(t);
      {
        u_27 = t;
        if(((t_27 != NULL) && (t_27 != u_27)))
          _fail(u_27);
        else
          t_27 = u_27;
      }
    }
    t = h_8;
    {
      ATerm w_27 = NULL;
      w_27 = t;
      if(((v_27 != NULL) && (v_27 != w_27)))
        _fail(w_27);
      else
        v_27 = w_27;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_27)), not_null(t_27)));
        t = printnl_0(t);
      }
    }
  }
  t = g_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_28 = NULL;
  h_28 = t;
  t = SSL_is_string(not_null(h_28));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_1);
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
              q_28 = t;
              p_28 :
              if(match_cons(q_28, sym_Path_1))
                {
                  r_28 = ATgetArgument(q_28, 0);
                  t = not_null(r_28);
                }
              else
                {
                  if(match_cons(q_28, sym_Var_1))
                    {
                      r_28 = ATgetArgument(q_28, 0);
                      {
                        t = not_null(r_28);
                        {
                          ATerm s_8 = t;
                          int w_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_8);
                            }
                          else
                            {
                              t = s_8;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = term_x_8;
                                  return(t);
                                }
                                t = debug_1(t, o_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_28, sym_Prefix_2))
                        {
                          r_28 = ATgetArgument(q_28, 0);
                          s_28 = ATgetArgument(q_28, 1);
                          {
                            ATerm a_29 = NULL,c_29 = NULL;
                            ATerm y_8;
                            y_8 = t;
                            {
                              ATerm b_29 = NULL;
                              t = not_null(r_28);
                              {
                                t = eval_config_0(t);
                                {
                                  b_29 = t;
                                  if(((a_29 != NULL) && (a_29 != b_29)))
                                    _fail(b_29);
                                  else
                                    a_29 = b_29;
                                }
                              }
                            }
                            t = y_8;
                            {
                              ATerm d_29 = NULL;
                              t = not_null(s_28);
                              {
                                t = eval_config_0(t);
                                {
                                  d_29 = t;
                                  if(((c_29 != NULL) && (c_29 != d_29)))
                                    _fail(d_29);
                                  else
                                    c_29 = d_29;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(a_29), not_null(c_29));
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
  ATerm l_29 = NULL;
  l_29 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_8, not_null(l_29));
    {
      t = table_get_0(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm a_9;
            a_9 = t;
            {
              ATerm n_29 = NULL;
              ATerm o_29 = NULL;
              o_29 = t;
              if(((n_29 != NULL) && (n_29 != o_29)))
                _fail(o_29);
              else
                n_29 = o_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(l_29), not_null(n_29));
                t = table_put_0(t);
              }
            }
            t = a_9;
          }
          return(t);
        }
        t = try_1(t, p_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_60 (ATerm))
{
  ATerm q_1 (ATerm t)
  {
    ATerm g_9;
    g_9 = t;
    {
      ATerm s_29 = NULL;
      ATerm t_29 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          t_29 = t;
          if(((s_29 != NULL) && (s_29 != t_29)))
            _fail(t_29);
          else
            s_29 = t_29;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_29), term_m_9);
        t = geq_0(t);
      }
    }
    t = g_9;
    t = r_60(t);
    return(t);
  }
  t = try_1(t, q_1);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, term_n_9));
  {
    t = printnl_0(t);
    {
      t = term_a_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_29 = NULL;
  w_29 = t;
  t = SSL_TicksToSeconds(not_null(w_29));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
  b_30 = t;
  a_30 :
  if(match_cons(b_30, sym__2))
    {
      c_30 = ATgetArgument(b_30, 0);
      d_30 = ATgetArgument(b_30, 1);
      {
        ATerm o_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_30), not_null(d_30));
            LocalPopChoice(p_9);
          }
        else
          {
            t = o_9;
            t = SSL_addr(not_null(c_30), not_null(d_30));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_74 (ATerm), ATerm l_74 (ATerm))
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_74(t);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
        m_30 = t;
        l_30 :
        if(((ATgetType(m_30) == AT_LIST) && ((ATermList) m_30 != ATempty)))
          {
            n_30 = ATgetFirst((ATermList) m_30);
            o_30 = (ATerm) ATgetNext((ATermList) m_30);
            {
              ATerm r_30 = NULL;
              ATerm s_30 = NULL;
              t = not_null(o_30);
              {
                t = foldr_2(t, k_74, l_74);
                {
                  s_30 = t;
                  if(((r_30 != NULL) && (r_30 != s_30)))
                    _fail(s_30);
                  else
                    r_30 = s_30;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_30), not_null(r_30));
                t = l_74(t);
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
ATerm crush_2 (ATerm t, ATerm z_75 (ATerm), ATerm a_76 (ATerm))
{
  ATerm z_30 = NULL;
  ATerm b_31 = NULL;
  z_30 = t;
  {
    ATerm c_31 = NULL;
    ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL;
    t = not_null(z_30);
    {
      c_31 = t;
      {
        t = SSL_explode_term(not_null(c_31));
        {
          g_31 = t;
          y_30 :
          if(match_cons(g_31, sym__2))
            {
              h_31 = ATgetArgument(g_31, 0);
              i_31 = ATgetArgument(g_31, 1);
              if(((b_31 != NULL) && (b_31 != i_31)))
                _fail(i_31);
              else
                b_31 = i_31;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_31);
      t = foldr_2(t, z_75, a_76);
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
    ATerm r_1 (ATerm t)
    {
      t = term_s_9;
      return(t);
    }
    t = crush_2(t, r_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL;
  q_31 = t;
  p_31 :
  if(match_cons(q_31, sym__2))
    {
      r_31 = ATgetArgument(q_31, 0);
      s_31 = ATgetArgument(q_31, 1);
      {
        ATerm t_9;
        t_9 = t;
        {
          ATerm u_9 = t;
          int y_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_31), not_null(s_31));
              LocalPopChoice(y_9);
            }
          else
            {
              t = u_9;
              t = SSL_gtr(not_null(r_31), not_null(s_31));
            }
        }
        t = t_9;
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
  ATerm y_31 = NULL;
  ATerm z_9 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
      z_31 = t;
      x_31 :
      if(match_cons(z_31, sym__2))
        {
          a_32 = ATgetArgument(z_31, 0);
          b_32 = ATgetArgument(z_31, 1);
          {
            if(((y_31 != NULL) && (y_31 != a_32)))
              _fail(a_32);
            else
              y_31 = a_32;
            if(((y_31 != NULL) && (y_31 != b_32)))
              _fail(b_32);
            else
              y_31 = b_32;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_10);
    }
  else
    {
      t = z_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_60 (ATerm))
{
  ATerm s_1 (ATerm t)
  {
    ATerm g_10;
    g_10 = t;
    {
      ATerm g_32 = NULL;
      ATerm h_32 = NULL;
      t = term_h_9;
      {
        t = get_config_0(t);
        {
          h_32 = t;
          if(((g_32 != NULL) && (g_32 != h_32)))
            _fail(h_32);
          else
            g_32 = h_32;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_32), term_a_8);
        t = geq_0(t);
      }
    }
    t = g_10;
    t = q_60(t);
    return(t);
  }
  t = try_1(t, s_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm r_32 = NULL,z_32 = NULL;
    ATerm h_10;
    h_10 = t;
    {
      ATerm y_32 = NULL;
      t = run_time_0(t);
      {
        y_32 = t;
        if(((r_32 != NULL) && (r_32 != y_32)))
          _fail(y_32);
        else
          r_32 = y_32;
      }
    }
    t = h_10;
    {
      ATerm a_33 = NULL;
      t = term_i_10;
      {
        t = get_config_0(t);
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_10), not_null(r_32)), term_j_10), not_null(z_32)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, t_1);
  {
    t = term_s_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  e_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      t = SSL_WriteToTextFile(not_null(j_33), not_null(k_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL;
  q_33 = t;
  p_33 :
  if(match_cons(q_33, sym__2))
    {
      r_33 = ATgetArgument(q_33, 0);
      s_33 = ATgetArgument(q_33, 1);
      t = SSL_WriteToBinaryFile(not_null(r_33), not_null(s_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_34 = NULL;
  ATerm l_10;
  l_10 = t;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm b_34 = NULL,c_34 = NULL;
            b_34 = t;
            x_33 :
            if(match_cons(b_34, sym_Output_1))
              {
                c_34 = ATgetArgument(b_34, 0);
                if(((a_34 != NULL) && (a_34 != c_34)))
                  _fail(c_34);
                else
                  a_34 = c_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, v_1);
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm d_34 = NULL;
            t = term_r_10;
            {
              d_34 = t;
              if(((a_34 != NULL) && (a_34 != d_34)))
                _fail(d_34);
              else
                a_34 = d_34;
            }
          }
        }
      return(t);
    }
    t = _2(t, u_1, _id);
  }
  t = l_10;
  {
    ATerm w_1 (ATerm t)
    {
      ATerm x_1 (ATerm t)
      {
        t = not_null(a_34);
        return(t);
      }
      t = split_2(t, x_1, _id);
      return(t);
    }
    t = _2(t, _id, w_1);
    {
      ATerm s_10 = t;
      int w_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_1 (ATerm t)
          {
            ATerm z_1 (ATerm t)
            {
              ATerm e_34 = NULL;
              e_34 = t;
              z_33 :
              if(!(match_cons(e_34, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, z_1);
            return(t);
          }
          t = _2(t, y_1, WriteToBinaryFile_0);
          LocalPopChoice(w_10);
        }
      else
        {
          t = s_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm c_69 (ATerm))
{
  ATerm k_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  ATerm z_10;
  z_10 = t;
  t = dtime_0(t);
  t = z_10;
  {
    t = c_69(t);
    {
      ATerm a_11;
      a_11 = t;
      {
        ATerm l_34 = NULL;
        t = dtime_0(t);
        {
          l_34 = t;
          if(((k_34 != NULL) && (k_34 != l_34)))
            _fail(l_34);
          else
            k_34 = l_34;
        }
      }
      t = a_11;
      {
        m_34 = t;
        j_34 :
        if(match_cons(m_34, sym__2))
          {
            n_34 = ATgetArgument(m_34, 0);
            o_34 = ATgetArgument(m_34, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_34)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_34))), not_null(o_34));
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
  ATerm u_34 = NULL;
  u_34 = t;
  t = SSL_ReadFromFile(not_null(u_34));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_81 (ATerm), ATerm s_81 (ATerm))
{
  ATerm z_34 = NULL,b_35 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm a_35 = NULL;
    t = r_81(t);
    {
      a_35 = t;
      if(((z_34 != NULL) && (z_34 != a_35)))
        _fail(a_35);
      else
        z_34 = a_35;
    }
  }
  t = b_11;
  {
    ATerm c_35 = NULL;
    t = s_81(t);
    {
      c_35 = t;
      if(((b_35 != NULL) && (b_35 != c_35)))
        _fail(c_35);
      else
        b_35 = c_35;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), not_null(b_35));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm i_35 = NULL;
  ATerm c_11;
  c_11 = t;
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_2 (ATerm t)
        {
          ATerm j_35 = NULL,k_35 = NULL;
          j_35 = t;
          g_35 :
          if(match_cons(j_35, sym_Input_1))
            {
              k_35 = ATgetArgument(j_35, 0);
              if(((i_35 != NULL) && (i_35 != k_35)))
                _fail(k_35);
              else
                i_35 = k_35;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, a_2);
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        {
          ATerm l_35 = NULL;
          t = term_f_11;
          {
            l_35 = t;
            if(((i_35 != NULL) && (i_35 != l_35)))
              _fail(l_35);
            else
              i_35 = l_35;
          }
        }
      }
  }
  t = c_11;
  {
    ATerm b_2 (ATerm t)
    {
      t = not_null(i_35);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  r_35 :
  if(match_cons(s_35, sym_Version_0))
    {
      ATerm u_35 = NULL,w_35 = NULL;
      ATerm g_11;
      g_11 = t;
      {
        ATerm v_35 = NULL;
        t = SSLgetAnnotations(not_null(s_35));
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
      }
      t = g_11;
      {
        ATerm x_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_35));
        {
          x_35 = t;
          if(((w_35 != NULL) && (w_35 != x_35)))
            _fail(x_35);
          else
            w_35 = x_35;
        }
        t = not_null(w_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm a_69 (ATerm))
{
  ATerm c_2 (ATerm t)
  {
    ATerm h_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = h_11;
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_2);
  t = a_69(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  t = SSL_table_create(not_null(c_36));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  {
    ATerm s_11;
    s_11 = t;
    {
      t = term_u_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_11, term_x_11, not_null(g_36));
          t = table_put_0(t);
        }
      }
    }
    t = s_11;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  t = SSL_string_to_int(not_null(k_36));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,x_36 = NULL;
  s_36 = t;
  q_36 :
  if(match_string(s_36, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_36) == AT_LIST) && ((ATermList) s_36 != ATempty)))
        {
          t_36 = ATgetFirst((ATermList) s_36);
          u_36 = (ATerm) ATgetNext((ATermList) s_36);
          r_36 :
          if(((ATgetType(u_36) == AT_LIST) && ((ATermList) u_36 != ATempty)))
            {
              v_36 = ATgetFirst((ATermList) u_36);
              x_36 = (ATerm) ATgetNext((ATermList) u_36);
              {
                ATerm e_37 = NULL;
                ATerm y_11;
                y_11 = t;
                {
                  t = not_null(t_36);
                  t = j_0(t);
                }
                t = y_11;
                {
                  ATerm f_37 = NULL;
                  t = not_null(v_36);
                  {
                    t = k_0(t);
                    {
                      f_37 = t;
                      if(((e_37 != NULL) && (e_37 != f_37)))
                        _fail(f_37);
                      else
                        e_37 = f_37;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_36)), not_null(e_37));
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
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm y_37 = NULL;
        y_37 = t;
        j_37 :
        if(!(match_string(y_37, "-i")))
          {
            if(!(match_string(y_37, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm e_2 (ATerm t)
      {
        ATerm m_38 = NULL;
        ATerm b_12;
        b_12 = t;
        {
          ATerm z_37 = NULL;
          ATerm f_38 = NULL;
          f_38 = t;
          if(((z_37 != NULL) && (z_37 != f_38)))
            _fail(f_38);
          else
            z_37 = f_38;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_12, not_null(z_37));
            t = set_config_0(t);
          }
        }
        t = b_12;
        {
          ATerm n_38 = NULL;
          n_38 = t;
          if(((m_38 != NULL) && (m_38 != n_38)))
            _fail(n_38);
          else
            m_38 = n_38;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(m_38));
        }
        return(t);
      }
      ATerm f_2 (ATerm t)
      {
        t = term_g_12;
        return(t);
      }
      t = ArgOption_3(t, d_2, e_2, f_2);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_2 (ATerm t)
            {
              ATerm o_38 = NULL;
              o_38 = t;
              m_37 :
              if(!(match_string(o_38, "-o")))
                {
                  if(!(match_string(o_38, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm h_2 (ATerm t)
            {
              ATerm r_38 = NULL;
              ATerm m_12;
              m_12 = t;
              {
                ATerm p_38 = NULL;
                ATerm q_38 = NULL;
                q_38 = t;
                if(((p_38 != NULL) && (p_38 != q_38)))
                  _fail(q_38);
                else
                  p_38 = q_38;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_12, not_null(p_38));
                  t = set_config_0(t);
                }
              }
              t = m_12;
              {
                ATerm s_38 = NULL;
                s_38 = t;
                if(((r_38 != NULL) && (r_38 != s_38)))
                  _fail(s_38);
                else
                  r_38 = s_38;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(r_38));
              }
              return(t);
            }
            ATerm i_2 (ATerm t)
            {
              t = term_o_12;
              return(t);
            }
            t = ArgOption_3(t, g_2, h_2, i_2);
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm t_12 = t;
              int u_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_2 (ATerm t)
                  {
                    ATerm t_38 = NULL;
                    t_38 = t;
                    r_37 :
                    if(!(match_string(t_38, "-S")))
                      {
                        if(!(match_string(t_38, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_2 (ATerm t)
                  {
                    t = term_v_12;
                    t = set_config_0(t);
                    t = term_x_12;
                    return(t);
                  }
                  ATerm l_2 (ATerm t)
                  {
                    t = term_y_12;
                    return(t);
                  }
                  t = Option_3(t, j_2, k_2, l_2);
                  LocalPopChoice(u_12);
                }
              else
                {
                  t = t_12;
                  {
                    ATerm z_12 = t;
                    int e_13 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_2 (ATerm t)
                        {
                          ATerm u_38 = NULL;
                          u_38 = t;
                          s_37 :
                          if(!(match_string(u_38, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm n_2 (ATerm t)
                        {
                          ATerm x_38 = NULL;
                          ATerm f_13;
                          f_13 = t;
                          {
                            ATerm v_38 = NULL;
                            ATerm w_38 = NULL;
                            t = string_to_int_0(t);
                            {
                              w_38 = t;
                              if(((v_38 != NULL) && (v_38 != w_38)))
                                _fail(w_38);
                              else
                                v_38 = w_38;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_h_9, not_null(v_38));
                              t = set_config_0(t);
                            }
                          }
                          t = f_13;
                          {
                            ATerm y_38 = NULL;
                            y_38 = t;
                            if(((x_38 != NULL) && (x_38 != y_38)))
                              _fail(y_38);
                            else
                              x_38 = y_38;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(x_38));
                          }
                          return(t);
                        }
                        ATerm o_2 (ATerm t)
                        {
                          t = term_k_13;
                          return(t);
                        }
                        t = ArgOption_3(t, m_2, n_2, o_2);
                        LocalPopChoice(e_13);
                      }
                    else
                      {
                        t = z_12;
                        {
                          ATerm l_13 = t;
                          int m_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_2 (ATerm t)
                              {
                                ATerm z_38 = NULL;
                                z_38 = t;
                                v_37 :
                                if(!(match_string(z_38, "-v")))
                                  {
                                    if(!(match_string(z_38, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm q_2 (ATerm t)
                              {
                                t = term_p_13;
                                t = set_config_0(t);
                                t = term_s_13;
                                return(t);
                              }
                              ATerm r_2 (ATerm t)
                              {
                                t = term_v_13;
                                return(t);
                              }
                              t = Option_3(t, p_2, q_2, r_2);
                              LocalPopChoice(m_13);
                            }
                          else
                            {
                              t = l_13;
                              {
                                ATerm z_13 = t;
                                int a_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_2 (ATerm t)
                                    {
                                      ATerm a_39 = NULL;
                                      a_39 = t;
                                      w_37 :
                                      if(!(match_string(a_39, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      t = term_c_14;
                                      t = set_config_0(t);
                                      t = term_k_14;
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = term_l_14;
                                      return(t);
                                    }
                                    t = Option_3(t, s_2, t_2, u_2);
                                    LocalPopChoice(a_14);
                                  }
                                else
                                  {
                                    t = z_13;
                                    {
                                      ATerm v_2 (ATerm t)
                                      {
                                        ATerm f_39 = NULL;
                                        f_39 = t;
                                        x_37 :
                                        if(!(match_string(f_39, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm w_2 (ATerm t)
                                      {
                                        t = term_n_14;
                                        t = set_config_0(t);
                                        t = term_o_14;
                                        return(t);
                                      }
                                      ATerm x_2 (ATerm t)
                                      {
                                        t = term_p_14;
                                        return(t);
                                      }
                                      t = Option_3(t, v_2, w_2, x_2);
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
  ATerm n_39 = NULL;
  n_39 = t;
  t = SSL_table_destroy(not_null(n_39));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_39 = NULL;
  r_39 = t;
  t = SSL_exit(not_null(r_39));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_39 = NULL;
  v_39 = t;
  t = SSL_implode_string(not_null(v_39));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm y_39 (ATerm t)
  {
    ATerm q_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_39);
        LocalPopChoice(s_14);
      }
    else
      {
        t = q_14;
        {
          t = Nil_0(t);
          t = u_78(t);
        }
      }
    return(t);
  }
  t = y_39(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = t_14;
      {
        ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
        f_40 = t;
        e_40 :
        if(((ATgetType(f_40) == AT_LIST) && ((ATermList) f_40 != ATempty)))
          {
            g_40 = ATgetFirst((ATermList) f_40);
            h_40 = (ATerm) ATgetNext((ATermList) f_40);
            {
              t = not_null(g_40);
              {
                ATerm y_2 (ATerm t)
                {
                  t = not_null(h_40);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_2);
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
  ATerm n_40 = NULL;
  n_40 = t;
  t = SSL_explode_string(not_null(n_40));
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
ATerm long_description_1 (ATerm t, ATerm x_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm g_78 (ATerm))
{
  ATerm s_40 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = Cons_2(t, g_78, s_40);
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  h_41 = t;
  e_41 :
  if(((ATgetType(h_41) == AT_LIST) && ((ATermList) h_41 != ATempty)))
    {
      f_41 = ATgetFirst((ATermList) h_41);
      g_41 = (ATerm) ATgetNext((ATermList) h_41);
      {
        ATerm k_41 = NULL;
        t = not_null(g_41);
        {
          ATerm f_15;
          f_15 = t;
          {
            ATerm l_41 = NULL,n_41 = NULL,p_41 = NULL;
            ATerm j_15;
            j_15 = t;
            {
              ATerm m_41 = NULL;
              t = i_0(t);
              {
                m_41 = t;
                if(((l_41 != NULL) && (l_41 != m_41)))
                  _fail(m_41);
                else
                  l_41 = m_41;
              }
            }
            t = j_15;
            {
              ATerm o_41 = NULL;
              t = not_null(f_41);
              {
                t = h_0(t);
                {
                  o_41 = t;
                  if(((n_41 != NULL) && (n_41 != o_41)))
                    _fail(o_41);
                  else
                    n_41 = o_41;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(n_41));
                {
                  p_41 = t;
                  if(((k_41 != NULL) && (k_41 != p_41)))
                    _fail(p_41);
                  else
                    k_41 = p_41;
                }
              }
            }
          }
          t = f_15;
          {
            ATerm z_2 (ATerm t)
            {
              t = not_null(k_41);
              return(t);
            }
            t = reverse_acc_2(t, h_0, z_2);
          }
        }
      }
    }
  else
    {
      if(((ATermList) h_41 == ATempty))
        {
          {
            t = term_o_13;
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
  ATerm a_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_64 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm a_42 = NULL,b_42 = NULL;
  a_42 = t;
  z_41 :
  if(match_cons(a_42, sym_Program_1))
    {
      b_42 = ATgetArgument(a_42, 0);
      {
        ATerm g_42 = NULL,i_42 = NULL;
        ATerm h_42 = NULL;
        t = SSLgetAnnotations(not_null(a_42));
        {
          h_42 = t;
          if(((g_42 != NULL) && (g_42 != h_42)))
            _fail(h_42);
          else
            g_42 = h_42;
        }
        {
          t = not_null(b_42);
          {
            ATerm k_42 = NULL;
            t = v_50(t);
            {
              i_42 = t;
              {
                ATerm l_42 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_42)), not_null(g_42));
                {
                  l_42 = t;
                  if(((k_42 != NULL) && (k_42 != l_42)))
                    _fail(l_42);
                  else
                    k_42 = l_42;
                }
                t = not_null(k_42);
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
  ATerm x_42 = NULL;
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm y_42 = NULL;
      y_42 = t;
      if(((x_42 != NULL) && (x_42 != y_42)))
        _fail(y_42);
      else
        x_42 = y_42;
      return(t);
    }
    t = Program_1(t, c_3);
    return(t);
  }
  t = option_defined_1(t, b_3);
  {
    ATerm d_3 (ATerm t)
    {
      ATerm z_42 = NULL;
      ATerm a_43 = NULL;
      t = term_o_13;
      {
        ATerm h_3 (ATerm t)
        {
          t = not_null(x_42);
          return(t);
        }
        t = short_description_1(t, h_3);
        {
          t = concat_strings_0(t);
          {
            a_43 = t;
            if(((z_42 != NULL) && (z_42 != a_43)))
              _fail(a_43);
            else
              z_42 = a_43;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(z_42)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, d_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, term_p_15));
      {
        t = printnl_0(t);
        {
          t = term_x_15;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_3 (ATerm t)
                {
                  ATerm f_43 = NULL;
                  f_43 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_43)), term_y_15));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_3);
                {
                  ATerm j_3 (ATerm t)
                  {
                    ATerm h_43 = NULL;
                    ATerm i_43 = NULL;
                    t = term_o_13;
                    {
                      ATerm k_3 (ATerm t)
                      {
                        t = not_null(x_42);
                        return(t);
                      }
                      t = long_description_1(t, k_3);
                      {
                        t = concat_strings_0(t);
                        {
                          i_43 = t;
                          if(((h_43 != NULL) && (h_43 != i_43)))
                            _fail(i_43);
                          else
                            h_43 = i_43;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_43)), term_z_15));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_3);
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
ATerm Undefined_1 (ATerm t, ATerm w_50 (ATerm))
{
  ATerm y_43 = NULL,z_43 = NULL;
  y_43 = t;
  x_43 :
  if(match_cons(y_43, sym_Undefined_1))
    {
      z_43 = ATgetArgument(y_43, 0);
      {
        ATerm c_44 = NULL,e_44 = NULL;
        ATerm d_44 = NULL;
        t = SSLgetAnnotations(not_null(y_43));
        {
          d_44 = t;
          if(((c_44 != NULL) && (c_44 != d_44)))
            _fail(d_44);
          else
            c_44 = d_44;
        }
        {
          t = not_null(z_43);
          {
            ATerm g_44 = NULL;
            t = w_50(t);
            {
              e_44 = t;
              {
                ATerm h_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_44)), not_null(c_44));
                {
                  h_44 = t;
                  if(((g_44 != NULL) && (g_44 != h_44)))
                    _fail(h_44);
                  else
                    g_44 = h_44;
                }
                t = not_null(g_44);
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
ATerm fetch_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm m_44 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_78, _id);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = Cons_2(t, _id, m_44);
      }
    return(t);
  }
  t = m_44(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_65 (ATerm))
{
  t = fetch_1(t, v_65);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm r_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym_Help_0))
    {
      ATerm t_44 = NULL,v_44 = NULL;
      ATerm j_16;
      j_16 = t;
      {
        ATerm u_44 = NULL;
        t = SSLgetAnnotations(not_null(r_44));
        {
          u_44 = t;
          if(((t_44 != NULL) && (t_44 != u_44)))
            _fail(u_44);
          else
            t_44 = u_44;
        }
      }
      t = j_16;
      {
        ATerm w_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(t_44));
        {
          w_44 = t;
          if(((v_44 != NULL) && (v_44 != w_44)))
            _fail(w_44);
          else
            v_44 = w_44;
        }
        t = not_null(v_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm j_82 (ATerm))
{
  ATerm l_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_82(t);
      LocalPopChoice(n_16);
    }
  else
    {
      t = l_16;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym__2))
    {
      d_45 = ATgetArgument(c_45, 0);
      e_45 = ATgetArgument(c_45, 1);
      t = SSL_table_get(not_null(d_45), not_null(e_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL;
  l_45 = t;
  k_45 :
  if(match_cons(l_45, sym__3))
    {
      m_45 = ATgetArgument(l_45, 0);
      n_45 = ATgetArgument(l_45, 1);
      o_45 = ATgetArgument(l_45, 2);
      {
        ATerm o_16;
        o_16 = t;
        {
          ATerm s_45 = NULL;
          ATerm t_45 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_45), not_null(n_45));
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = (ATerm) ATempty;
              }
            {
              t_45 = t;
              if(((s_45 != NULL) && (s_45 != t_45)))
                _fail(t_45);
              else
                s_45 = t_45;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_45), not_null(n_45), (ATerm) ATinsert(CheckATermList(not_null(s_45)), not_null(o_45)));
            t = table_put_0(t);
          }
        }
        t = o_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm x_45 = NULL;
  ATerm y_45 = NULL;
  t = term_o_13;
  {
    t = b_65(t);
    {
      y_45 = t;
      if(((x_45 != NULL) && (x_45 != y_45)))
        _fail(y_45);
      else
        x_45 = y_45;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_15, term_w_15, not_null(x_45));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL;
  e_46 = t;
  d_46 :
  if(match_string(e_46, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_46) == AT_LIST) && ((ATermList) e_46 != ATempty)))
        {
          f_46 = ATgetFirst((ATermList) e_46);
          g_46 = (ATerm) ATgetNext((ATermList) e_46);
          {
            ATerm j_46 = NULL;
            ATerm w_16;
            w_16 = t;
            {
              t = not_null(f_46);
              t = c_0(t);
            }
            t = w_16;
            {
              ATerm k_46 = NULL;
              t = term_o_13;
              {
                t = d_0(t);
                {
                  k_46 = t;
                  if(((j_46 != NULL) && (j_46 != k_46)))
                    _fail(k_46);
                  else
                    j_46 = k_46;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_46)), not_null(j_46));
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
  ATerm l_3 (ATerm t)
  {
    ATerm p_46 = NULL;
    p_46 = t;
    o_46 :
    if(!(match_string(p_46, "--help")))
      {
        if(!(match_string(p_46, "-h")))
          {
            if(!(match_string(p_46, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_y_16;
    return(t);
  }
  t = Option_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL;
  s_46 = t;
  r_46 :
  if(((ATgetType(s_46) == AT_LIST) && ((ATermList) s_46 != ATempty)))
    {
      t_46 = ATgetFirst((ATermList) s_46);
      u_46 = (ATerm) ATgetNext((ATermList) s_46);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_46)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_46)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_60 (ATerm), ATerm l_60 (ATerm))
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  d_47 :
  if(((ATgetType(e_47) == AT_LIST) && ((ATermList) e_47 != ATempty)))
    {
      f_47 = ATgetFirst((ATermList) e_47);
      g_47 = (ATerm) ATgetNext((ATermList) e_47);
      {
        ATerm k_47 = NULL,m_47 = NULL;
        ATerm l_47 = NULL;
        t = SSLgetAnnotations(not_null(e_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        {
          t = not_null(f_47);
          {
            ATerm o_47 = NULL;
            t = k_60(t);
            {
              m_47 = t;
              {
                t = not_null(g_47);
                {
                  ATerm q_47 = NULL;
                  t = l_60(t);
                  {
                    o_47 = t;
                    {
                      ATerm r_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_47)), not_null(m_47)), not_null(k_47));
                      {
                        r_47 = t;
                        if(((q_47 != NULL) && (q_47 != r_47)))
                          _fail(r_47);
                        else
                          q_47 = r_47;
                      }
                      t = not_null(q_47);
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
  ATerm c_48 = NULL;
  c_48 = t;
  b_48 :
  if(((ATermList) c_48 == ATempty))
    {
      {
        ATerm b_49 = NULL,d_49 = NULL;
        ATerm a_17;
        a_17 = t;
        {
          ATerm c_49 = NULL;
          t = SSLgetAnnotations(not_null(c_48));
          {
            c_49 = t;
            if(((b_49 != NULL) && (b_49 != c_49)))
              _fail(c_49);
            else
              b_49 = c_49;
          }
        }
        t = a_17;
        {
          ATerm e_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_49));
          {
            e_49 = t;
            if(((d_49 != NULL) && (d_49 != e_49)))
              _fail(e_49);
            else
              d_49 = e_49;
          }
          t = not_null(d_49);
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
  ATerm m_49 = NULL,n_49 = NULL,o_49 = NULL;
  m_49 = t;
  l_49 :
  if(match_cons(m_49, sym__2))
    {
      n_49 = ATgetArgument(m_49, 0);
      o_49 = ATgetArgument(m_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_8, not_null(n_49), not_null(o_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_64 (ATerm))
{
  ATerm e_17;
  e_17 = t;
  {
    ATerm o_3 (ATerm t)
    {
      t = term_f_17;
      t = z_64(t);
      return(t);
    }
    t = try_1(t, o_3);
  }
  t = e_17;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm w_49 = NULL;
      ATerm h_17;
      h_17 = t;
      {
        ATerm u_49 = NULL;
        ATerm v_49 = NULL;
        v_49 = t;
        if(((u_49 != NULL) && (u_49 != v_49)))
          _fail(v_49);
        else
          u_49 = v_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_10, not_null(u_49));
          t = set_config_0(t);
        }
      }
      t = h_17;
      {
        ATerm x_49 = NULL;
        x_49 = t;
        if(((w_49 != NULL) && (w_49 != x_49)))
          _fail(x_49);
        else
          w_49 = x_49;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_49));
      }
      return(t);
    }
    ATerm q_3 (ATerm t)
    {
      ATerm i_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(p_17);
            }
          else
            {
              t = l_17;
              {
                t = z_64(t);
                t = Cons_2(t, _id, q_3);
              }
            }
          LocalPopChoice(k_17);
        }
      else
        {
          t = i_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_3, q_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  ATerm q_17;
  q_17 = t;
  {
    ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
    g_50 = t;
    c_50 :
    if(match_cons(g_50, sym__3))
      {
        h_50 = ATgetArgument(g_50, 0);
        i_50 = ATgetArgument(g_50, 1);
        j_50 = ATgetArgument(g_50, 2);
        {
          if(((d_50 != NULL) && (d_50 != h_50)))
            _fail(h_50);
          else
            d_50 = h_50;
          {
            if(((e_50 != NULL) && (e_50 != i_50)))
              _fail(i_50);
            else
              e_50 = i_50;
            {
              if(((f_50 != NULL) && (f_50 != j_50)))
                _fail(j_50);
              else
                f_50 = j_50;
              t = SSL_table_put(not_null(d_50), not_null(e_50), not_null(f_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = q_17;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_64 (ATerm))
{
  ATerm m_50 = NULL;
  ATerm r_17;
  r_17 = t;
  {
    t = term_a_18;
    t = table_put_0(t);
  }
  t = r_17;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm b_18 = t;
      int c_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_64(t);
          LocalPopChoice(c_18);
        }
      else
        {
          t = b_18;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, s_3);
    {
      ATerm t_3 (ATerm t)
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            {
              ATerm u_3 (ATerm t)
              {
                ATerm v_3 (ATerm t)
                {
                  ATerm n_50 = NULL;
                  n_50 = t;
                  if(((m_50 != NULL) && (m_50 != n_50)))
                    _fail(n_50);
                  else
                    m_50 = n_50;
                  return(t);
                }
                t = Undefined_1(t, v_3);
                return(t);
              }
              t = option_defined_1(t, u_3);
              {
                ATerm f_18;
                f_18 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_50)), term_g_18));
                  t = printnl_0(t);
                }
                t = f_18;
                {
                  t = system_usage_0(t);
                  {
                    t = term_a_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, t_3);
      {
        ATerm h_18;
        h_18 = t;
        {
          t = term_v_15;
          t = table_destroy_0(t);
        }
        t = h_18;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm o_68 (ATerm), ATerm p_68 (ATerm), ATerm q_68 (ATerm), ATerm r_68 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_68(t);
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, w_3);
  {
    t = store_options_0(t);
    {
      t = r_68(t);
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, q_68);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm m_18 = t;
              int n_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, o_68);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(n_18);
                }
              else
                {
                  t = m_18;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm i_68 (ATerm), ATerm j_68 (ATerm), ATerm k_68 (ATerm))
{
  ATerm x_3 (ATerm t)
  {
    ATerm y_3 (ATerm t)
    {
      ATerm o_18;
      o_18 = t;
      {
        ATerm q_50 = NULL;
        ATerm r_50 = NULL;
        t = term_i_10;
        {
          t = get_config_0(t);
          {
            r_50 = t;
            if(((q_50 != NULL) && (q_50 != r_50)))
              _fail(r_50);
            else
              q_50 = r_50;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_7, (ATerm) ATinsert(ATempty, not_null(q_50)));
          t = printnl_0(t);
        }
      }
      t = o_18;
      return(t);
    }
    t = if_verbose2_1(t, y_3);
    return(t);
  }
  t = iowrap_4(t, i_68, j_68, k_68, x_3);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  t = iowrap_3(t, g_68, h_68, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm d_68 (ATerm))
{
  ATerm b_4 (ATerm t)
  {
    t = _2(t, _id, d_68);
    return(t);
  }
  t = iowrap_2(t, b_4, _fail);
  return(t);
}
ATerm rename_vars_0 (ATerm t)
{
  t = iowrap_1(t, strename_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = rename_vars_0(t);
  return(t);
}
