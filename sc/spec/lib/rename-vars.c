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
ATerm term_u_19;
ATerm term_f_19;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_g_17;
ATerm term_f_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_v_13;
ATerm term_s_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_i_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_s_11;
ATerm term_o_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_a_11;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_r_9;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
void init_constant_terms (void)
{
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_y_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_11);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_z_12);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_z_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_z_12);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_e_17, term_f_17);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_z_12);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym__3, term_e_17, term_f_17, (ATerm) ATempty);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm s_89 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm r_60 (ATerm));
ATerm Let_2 (ATerm, ATerm n_60 (ATerm), ATerm o_60 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_60 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm o_89 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm b_59 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm tboundin_3 (ATerm, ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_1 (ATerm, ATerm i_78 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm crush_3 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_72 (ATerm), ATerm j_72 (ATerm));
ATerm for_3 (ATerm, ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm g_78 (ATerm), ATerm h_78 (ATerm));
ATerm diff_1 (ATerm, ATerm l_78 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm k_0 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm));
ATerm zip_1 (ATerm, ATerm c_83 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm m_75 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm r_74 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm w_74 (ATerm));
ATerm rename_4 (ATerm, ATerm a_76 (ATerm, ATerm (ATerm)), ATerm b_76 (ATerm), ATerm c_76 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_76 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm m_50 (ATerm), ATerm n_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_81 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_69 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm p_62 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm p_71 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm));
ATerm crush_2 (ATerm, ATerm r_78 (ATerm), ATerm s_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm o_62 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_71 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm v_66 (ATerm));
ATerm map_1 (ATerm, ATerm y_80 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm u_66 (ATerm));
ATerm Program_1 (ATerm, ATerm c_52 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_69 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_52 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_81 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_67 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm d_85 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm z_66 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_61 (ATerm), ATerm v_61 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm x_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm w_66 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_70 (ATerm), ATerm u_70 (ATerm));
ATerm iowrap_1 (ATerm, ATerm q_70 (ATerm));
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
ATerm spaste_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm u_4 = t;
  int v_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        t = split_2(t, _id, s_89);
        {
          ATerm d_0 (ATerm t)
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
          t = zip_1(t, d_0);
        }
        return(t);
      }
      t = Let_2(t, c_0, _id);
      LocalPopChoice(v_4);
    }
  else
    {
      t = u_4;
      {
        ATerm w_4 = t;
        int x_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_0 (ATerm t)
            {
              t = split_2(t, _id, s_89);
              {
                ATerm m_0 (ATerm t)
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
                t = zip_1(t, m_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, l_0, _id);
            LocalPopChoice(x_4);
          }
        else
          {
            t = w_4;
            {
              ATerm n_0 (ATerm t)
              {
                t = s_89(t);
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
ATerm Rec_2 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm))
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
            t = l_60(t);
            {
              l_5 = t;
              {
                t = not_null(f_5);
                {
                  ATerm p_5 = NULL;
                  t = m_60(t);
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
ATerm SDef_3 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm), ATerm r_60 (ATerm))
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
            t = p_60(t);
            {
              n_6 = t;
              {
                t = not_null(f_6);
                {
                  ATerm r_6 = NULL;
                  t = q_60(t);
                  {
                    p_6 = t;
                    {
                      t = not_null(g_6);
                      {
                        ATerm t_6 = NULL;
                        t = r_60(t);
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
ATerm Let_2 (ATerm t, ATerm n_60 (ATerm), ATerm o_60 (ATerm))
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
            t = n_60(t);
            {
              p_7 = t;
              {
                t = not_null(j_7);
                {
                  ATerm t_7 = NULL;
                  t = o_60(t);
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
ATerm sboundin_3 (ATerm t, ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm v_89 (ATerm))
{
  ATerm y_4 = t;
  int z_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_89, t_89);
      LocalPopChoice(z_4);
    }
  else
    {
      t = y_4;
      {
        ATerm a_5 = t;
        int b_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_89, v_89, t_89);
            LocalPopChoice(b_5);
          }
        else
          {
            t = a_5;
            t = Rec_2(t, v_89, t_89);
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
ATerm SVar_1 (ATerm t, ATerm k_60 (ATerm))
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
            t = k_60(t);
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
    ATerm g_5 = t;
    int h_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(h_5);
      }
    else
      {
        t = g_5;
        {
          ATerm i_5 = t;
          int m_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(m_5);
            }
          else
            {
              t = i_5;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, q_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm o_89 (ATerm))
{
  t = Scope_2(t, o_89, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm b_59 (ATerm))
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
            t = b_59(t);
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
ATerm Scope_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm))
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
            t = p_61(t);
            {
              r_11 = t;
              {
                t = not_null(l_11);
                {
                  ATerm v_11 = NULL;
                  t = q_61(t);
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
ATerm tboundin_3 (ATerm t, ATerm p_89 (ATerm), ATerm q_89 (ATerm), ATerm r_89 (ATerm))
{
  ATerm o_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, r_89, p_89);
      LocalPopChoice(r_5);
    }
  else
    {
      t = o_5;
      t = DynamicRules_1(t, p_89);
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
ATerm union_1 (ATerm t, ATerm i_78 (ATerm))
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
            ATerm s_5 = t;
            int t_5 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(s_12);
                LocalPopChoice(t_5);
              }
            else
              {
                t = s_5;
                {
                  ATerm u_5 = t;
                  int v_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_0 (ATerm t)
                      {
                        t = not_null(s_12);
                        return(t);
                      }
                      t = HdMember_p__2(t, i_78, r_0);
                      t = w_12(t);
                      LocalPopChoice(v_5);
                    }
                  else
                    {
                      t = u_5;
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
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm w_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = b_77(t);
      LocalPopChoice(x_5);
    }
  else
    {
      t = w_5;
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
              ATerm y_5;
              y_5 = t;
              {
                ATerm h_13 = NULL;
                t = not_null(c_13);
                {
                  t = d_77(t);
                  {
                    h_13 = t;
                    if(((g_13 != NULL) && (g_13 != h_13)))
                      _fail(h_13);
                    else
                      g_13 = h_13;
                  }
                }
              }
              t = y_5;
              {
                ATerm j_13 = NULL;
                t = not_null(d_13);
                {
                  t = foldr_3(t, b_77, c_77, d_77);
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
                  t = c_77(t);
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
ATerm crush_3 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm), ATerm v_78 (ATerm))
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
      t = foldr_3(t, t_78, u_78, v_78);
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
            ATerm z_5;
            z_5 = t;
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
            t = z_5;
            {
              ATerm a_6;
              a_6 = t;
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
              t = a_6;
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
ATerm while_not_2 (ATerm t, ATerm i_72 (ATerm), ATerm j_72 (ATerm))
{
  ATerm m_16 (ATerm t)
  {
    ATerm b_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_72(t);
        LocalPopChoice(h_6);
      }
    else
      {
        t = b_6;
        {
          t = j_72(t);
          t = m_16(t);
        }
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  t = l_72(t);
  t = while_not_2(t, m_72, n_72);
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
  p_16 = t;
  o_16 :
  if(match_cons(p_16, sym__2))
    {
      q_16 = ATgetArgument(p_16, 0);
      r_16 = ATgetArgument(p_16, 1);
      if(((q_16 != NULL) && (q_16 != r_16)))
        _fail(r_16);
      else
        q_16 = r_16;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm g_78 (ATerm), ATerm h_78 (ATerm))
{
  ATerm x_16 = NULL,y_16 = NULL,z_16 = NULL;
  x_16 = t;
  w_16 :
  if(((ATgetType(x_16) == AT_LIST) && ((ATermList) x_16 != ATempty)))
    {
      y_16 = ATgetFirst((ATermList) x_16);
      z_16 = (ATerm) ATgetNext((ATermList) x_16);
      {
        t = h_78(t);
        {
          ATerm s_0 (ATerm t)
          {
            ATerm c_17 = NULL;
            c_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(c_17));
              t = g_78(t);
            }
            return(t);
          }
          t = fetch_1(t, s_0);
        }
        t = not_null(z_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm diff_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym__2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        t = not_null(j_17);
        {
          ATerm o_17 (ATerm t)
          {
            ATerm i_6 = t;
            int j_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(j_6);
              }
            else
              {
                t = i_6;
                {
                  ATerm k_6 = t;
                  int o_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_0 (ATerm t)
                      {
                        t = not_null(k_17);
                        return(t);
                      }
                      t = HdMember_p__2(t, l_78, t_0);
                      t = o_17(t);
                      LocalPopChoice(o_6);
                    }
                  else
                    {
                      t = k_6;
                      t = Cons_2(t, _id, o_17);
                    }
                }
              }
            return(t);
          }
          t = o_17(t);
        }
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
  ATerm q_6 = t;
  int s_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = diff_1(t, eq_0);
      LocalPopChoice(s_6);
    }
  else
    {
      t = q_6;
      {
        ATerm u_0 (ATerm t)
        {
          ATerm q_17 = NULL;
          q_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(q_17));
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm w_0 (ATerm t)
        {
          ATerm v_6 = t;
          int w_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_0 (ATerm t)
              {
                ATerm x_6 = t;
                int y_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(y_6);
                  }
                else
                  {
                    t = x_6;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, x_0);
              LocalPopChoice(w_6);
            }
          else
            {
              t = v_6;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, u_0, v_0, w_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm y_73 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm w_17 (ATerm t)
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_73(t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        {
          ATerm b_7 = t;
          int c_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_17 = NULL;
              ATerm d_7;
              d_7 = t;
              {
                ATerm v_17 = NULL;
                t = x_73(t);
                {
                  v_17 = t;
                  if(((u_17 != NULL) && (u_17 != v_17)))
                    _fail(v_17);
                  else
                    u_17 = v_17;
                }
              }
              t = d_7;
              {
                ATerm y_0 (ATerm t)
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = not_null(u_17);
                    return(t);
                  }
                  t = split_2(t, w_17, a_1);
                  t = diff_0(t);
                  return(t);
                }
                ATerm z_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = y_73(t, y_0, w_17, z_0);
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, b_1, union_0, _id);
                }
              }
              LocalPopChoice(c_7);
            }
          else
            {
              t = b_7;
              {
                ATerm c_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, c_1, union_0, w_17);
              }
            }
        }
      }
    return(t);
  }
  t = w_17(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_7 = t;
    int f_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(f_7);
      }
    else
      {
        t = e_7;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, d_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL,h_18 = NULL;
  f_18 = t;
  a_18 :
  if(match_cons(f_18, sym_LRule_1))
    {
      g_18 = ATgetArgument(f_18, 0);
      b_18 :
      if(match_cons(g_18, sym_Rule_3))
        {
          c_18 = ATgetArgument(g_18, 0);
          d_18 = ATgetArgument(g_18, 1);
          e_18 = ATgetArgument(g_18, 2);
          {
            t = not_null(c_18);
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
      if(match_cons(f_18, sym_Scope_2))
        {
          g_18 = ATgetArgument(f_18, 0);
          h_18 = ATgetArgument(f_18, 1);
          t = not_null(g_18);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm y_18 = NULL,z_18 = NULL;
  y_18 = t;
  x_18 :
  if(match_cons(y_18, sym_Var_1))
    {
      z_18 = ATgetArgument(y_18, 0);
      {
        ATerm k_7 = t;
        int l_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_19 = NULL,e_19 = NULL;
            ATerm d_19 = NULL;
            t = SSLgetAnnotations(not_null(y_18));
            {
              d_19 = t;
              if(((c_19 != NULL) && (c_19 != d_19)))
                _fail(d_19);
              else
                c_19 = d_19;
            }
            {
              t = not_null(z_18);
              {
                ATerm g_19 = NULL;
                t = k_0(t);
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
            LocalPopChoice(l_7);
          }
        else
          {
            t = k_7;
            {
              ATerm k_19 = NULL,m_19 = NULL;
              ATerm l_19 = NULL;
              t = SSLgetAnnotations(not_null(y_18));
              {
                l_19 = t;
                if(((k_19 != NULL) && (k_19 != l_19)))
                  _fail(l_19);
                else
                  k_19 = l_19;
              }
              {
                t = not_null(z_18);
                {
                  ATerm o_19 = NULL;
                  t = k_0(t);
                  {
                    m_19 = t;
                    {
                      ATerm p_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, not_null(m_19)), not_null(k_19));
                      {
                        p_19 = t;
                        if(((o_19 != NULL) && (o_19 != p_19)))
                          _fail(p_19);
                        else
                          o_19 = p_19;
                      }
                      t = not_null(o_19);
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
ATerm DistBinding_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym__3))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      f_20 = ATgetArgument(c_20, 2);
      {
        t = not_null(d_20);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm j_20 = NULL;
            j_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_20), not_null(f_20));
              t = s_75(t);
            }
            return(t);
          }
          ATerm f_1 (ATerm t)
          {
            ATerm l_20 = NULL;
            l_20 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), not_null(e_20));
              t = s_75(t);
            }
            return(t);
          }
          t = t_75(t, e_1, f_1, _id);
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
  ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL;
  s_20 = t;
  r_20 :
  if(match_cons(s_20, sym__2))
    {
      t_20 = ATgetArgument(s_20, 0);
      u_20 = ATgetArgument(s_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(t_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  d_21 = t;
  z_20 :
  if(match_cons(d_21, sym__2))
    {
      e_21 = ATgetArgument(d_21, 0);
      h_21 = ATgetArgument(d_21, 1);
      a_21 :
      if(((ATgetType(e_21) == AT_LIST) && ((ATermList) e_21 != ATempty)))
        {
          f_21 = ATgetFirst((ATermList) e_21);
          g_21 = (ATerm) ATgetNext((ATermList) e_21);
          b_21 :
          if(((ATgetType(h_21) == AT_LIST) && ((ATermList) h_21 != ATempty)))
            {
              i_21 = ATgetFirst((ATermList) h_21);
              j_21 = (ATerm) ATgetNext((ATermList) h_21);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(f_21), not_null(i_21)), (ATerm) ATmakeAppl(sym__2, not_null(g_21), not_null(j_21)));
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
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  q_21 :
  if(match_cons(t_21, sym__2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      r_21 :
      if(((ATermList) u_21 == ATempty))
        {
          s_21 :
          if(((ATermList) v_21 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm x_82 (ATerm), ATerm y_82 (ATerm), ATerm z_82 (ATerm), ATerm a_83 (ATerm))
{
  ATerm x_21 (ATerm t)
  {
    ATerm m_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_82(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = m_7;
        {
          t = y_82(t);
          {
            t = _2(t, a_83, x_21);
            t = z_82(t);
          }
        }
      }
    return(t);
  }
  t = x_21(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm c_83 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, c_83);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm, ATerm (ATerm)))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL,s_22 = NULL;
        ATerm s_7;
        s_7 = t;
        {
          ATerm n_22 = NULL;
          t = not_null(g_22);
          {
            ATerm o_22 = NULL;
            t = y_75(t);
            {
              n_22 = t;
              {
                if(((k_22 != NULL) && (k_22 != n_22)))
                  _fail(n_22);
                else
                  k_22 = n_22;
                {
                  ATerm p_22 = NULL,r_22 = NULL;
                  t = map_1(t, new_0);
                  {
                    o_22 = t;
                    {
                      if(((l_22 != NULL) && (l_22 != o_22)))
                        _fail(o_22);
                      else
                        l_22 = o_22;
                      {
                        ATerm q_22 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(l_22));
                        {
                          t = zip_1(t, _id);
                          {
                            q_22 = t;
                            if(((p_22 != NULL) && (p_22 != q_22)))
                              _fail(q_22);
                            else
                              p_22 = q_22;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_22), not_null(h_22));
                          {
                            t = conc_0(t);
                            {
                              r_22 = t;
                              if(((m_22 != NULL) && (m_22 != r_22)))
                                _fail(r_22);
                              else
                                m_22 = r_22;
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
        t = s_7;
        {
          ATerm t_22 = NULL;
          t = not_null(g_22);
          {
            ATerm g_1 (ATerm t)
            {
              t = not_null(l_22);
              return(t);
            }
            t = z_75(t, g_1);
            {
              t_22 = t;
              if(((s_22 != NULL) && (s_22 != t_22)))
                _fail(t_22);
              else
                s_22 = t_22;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(s_22), not_null(h_22), not_null(m_22));
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
  ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL;
  d_23 = t;
  b_23 :
  if(match_cons(d_23, sym__2))
    {
      e_23 = ATgetArgument(d_23, 0);
      f_23 = ATgetArgument(d_23, 1);
      c_23 :
      if(((ATgetType(f_23) == AT_LIST) && ((ATermList) f_23 != ATempty)))
        {
          g_23 = ATgetFirst((ATermList) f_23);
          h_23 = (ATerm) ATgetNext((ATermList) f_23);
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(h_23));
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
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL;
  r_23 = t;
  o_23 :
  if(match_cons(r_23, sym__2))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      p_23 :
      if(((ATgetType(t_23) == AT_LIST) && ((ATermList) t_23 != ATempty)))
        {
          u_23 = ATgetFirst((ATermList) t_23);
          m_24 = (ATerm) ATgetNext((ATermList) t_23);
          q_23 :
          if(match_cons(u_23, sym__2))
            {
              k_24 = ATgetArgument(u_23, 0);
              l_24 = ATgetArgument(u_23, 1);
              {
                ATerm o_24 = NULL;
                if(((s_23 != NULL) && (s_23 != k_24)))
                  _fail(k_24);
                else
                  s_23 = k_24;
                {
                  if(((o_24 != NULL) && (o_24 != l_24)))
                    _fail(l_24);
                  else
                    o_24 = l_24;
                  t = not_null(o_24);
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
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm m_75 (ATerm, ATerm (ATerm)))
{
  ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
  t_24 = t;
  s_24 :
  if(match_cons(t_24, sym__2))
    {
      u_24 = ATgetArgument(t_24, 0);
      v_24 = ATgetArgument(t_24, 1);
      {
        t = not_null(u_24);
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              t = not_null(v_24);
              return(t);
            }
            t = split_2(t, _id, i_1);
            t = lookup_0(t);
            return(t);
          }
          t = m_75(t, h_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  b_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      {
        t = not_null(d_25);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm h_25 = NULL;
            h_25 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_25), not_null(e_25));
              t = r_74(t);
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
ATerm env_alltd_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm l_25 (ATerm t)
  {
    ATerm x_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_74(t);
        LocalPopChoice(y_7);
      }
    else
      {
        t = x_7;
        t = all_dist_1(t, l_25);
      }
    return(t);
  }
  t = l_25(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm a_76 (ATerm, ATerm (ATerm)), ATerm b_76 (ATerm), ATerm c_76 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm d_76 (ATerm, ATerm (ATerm)))
{
  ATerm n_25 = NULL;
  n_25 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_25), (ATerm) ATempty);
    {
      ATerm q_25 (ATerm t)
      {
        ATerm k_1 (ATerm t)
        {
          ATerm z_7 = t;
          int a_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, a_76);
              LocalPopChoice(a_8);
            }
          else
            {
              t = z_7;
              {
                t = RnBinding_2(t, b_76, d_76);
                t = DistBinding_2(t, q_25, c_76);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, k_1);
        return(t);
      }
      t = q_25(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm r_25 (ATerm t, ATerm s_25 (ATerm))
  {
    t = Scope_2(t, s_25, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, r_25);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm m_50 (ATerm), ATerm n_50 (ATerm))
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym__2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm f_26 = NULL,h_26 = NULL;
        ATerm g_26 = NULL;
        t = SSLgetAnnotations(not_null(z_25));
        {
          g_26 = t;
          if(((f_26 != NULL) && (f_26 != g_26)))
            _fail(g_26);
          else
            f_26 = g_26;
        }
        {
          t = not_null(a_26);
          {
            ATerm j_26 = NULL;
            t = m_50(t);
            {
              h_26 = t;
              {
                t = not_null(b_26);
                {
                  ATerm l_26 = NULL;
                  t = n_50(t);
                  {
                    j_26 = t;
                    {
                      ATerm t_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_26), not_null(j_26)), not_null(f_26));
                      {
                        t_26 = t;
                        if(((l_26 != NULL) && (l_26 != t_26)))
                          _fail(t_26);
                        else
                          l_26 = t_26;
                      }
                      t = not_null(l_26);
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
  ATerm e_27 = NULL;
  ATerm f_8;
  f_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm f_27 = NULL,g_27 = NULL;
      f_27 = t;
      a_27 :
      if(match_cons(f_27, sym_Program_1))
        {
          g_27 = ATgetArgument(f_27, 0);
          if(((e_27 != NULL) && (e_27 != g_27)))
            _fail(g_27);
          else
            e_27 = g_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, l_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), not_null(e_27)), term_h_8));
      {
        t = printnl_0(t);
        {
          t = term_j_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_8;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm q_8;
        q_8 = t;
        t = SSL_printnl(not_null(l_27), not_null(m_27));
        t = q_8;
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
  ATerm r_27 = NULL;
  r_27 = t;
  t = SSL_implode_string(not_null(r_27));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      {
        ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
        w_27 = t;
        v_27 :
        if(((ATgetType(w_27) == AT_LIST) && ((ATermList) w_27 != ATempty)))
          {
            x_27 = ATgetFirst((ATermList) w_27);
            y_27 = (ATerm) ATgetNext((ATermList) w_27);
            {
              t = not_null(x_27);
              {
                ATerm m_1 (ATerm t)
                {
                  t = not_null(y_27);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm i_28 = NULL;
  ATerm k_28 = NULL;
  i_28 = t;
  {
    ATerm l_28 = NULL;
    ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
    t = not_null(i_28);
    {
      l_28 = t;
      {
        t = SSL_explode_term(not_null(l_28));
        {
          n_28 = t;
          g_28 :
          if(match_cons(n_28, sym__2))
            {
              o_28 = ATgetArgument(n_28, 0);
              p_28 = ATgetArgument(n_28, 1);
              h_28 :
              if(match_string(o_28, ""))
                {
                  if(((k_28 != NULL) && (k_28 != p_28)))
                    _fail(p_28);
                  else
                    k_28 = p_28;
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
      t = not_null(k_28);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_81 (ATerm))
{
  ATerm a_29 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_29);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        {
          t = Nil_0(t);
          t = n_81(t);
        }
      }
    return(t);
  }
  t = a_29(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym__2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      {
        t = not_null(e_29);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(f_29);
            return(t);
          }
          t = at_end_1(t, n_1);
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
  ATerm y_8 = t;
  int z_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(z_8);
    }
  else
    {
      t = y_8;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm k_29 = NULL;
  k_29 = t;
  t = SSL_explode_string(not_null(k_29));
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
ATerm debug_1 (ATerm t, ATerm u_69 (ATerm))
{
  ATerm a_9;
  a_9 = t;
  {
    ATerm s_29 = NULL,u_29 = NULL;
    ATerm g_9;
    g_9 = t;
    {
      ATerm t_29 = NULL;
      t = u_69(t);
      {
        t_29 = t;
        if(((s_29 != NULL) && (s_29 != t_29)))
          _fail(t_29);
        else
          s_29 = t_29;
      }
    }
    t = g_9;
    {
      ATerm v_29 = NULL;
      v_29 = t;
      if(((u_29 != NULL) && (u_29 != v_29)))
        _fail(v_29);
      else
        u_29 = v_29;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_29)), not_null(s_29)));
        t = printnl_0(t);
      }
    }
  }
  t = a_9;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = SSL_is_string(not_null(z_29));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = h_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, o_1);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
              i_30 = t;
              h_30 :
              if(match_cons(i_30, sym_Path_1))
                {
                  j_30 = ATgetArgument(i_30, 0);
                  t = not_null(j_30);
                }
              else
                {
                  if(match_cons(i_30, sym_Var_1))
                    {
                      j_30 = ATgetArgument(i_30, 0);
                      {
                        t = not_null(j_30);
                        {
                          ATerm p_9 = t;
                          int q_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(q_9);
                            }
                          else
                            {
                              t = p_9;
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = term_r_9;
                                  return(t);
                                }
                                t = debug_1(t, p_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_30, sym_Prefix_2))
                        {
                          j_30 = ATgetArgument(i_30, 0);
                          k_30 = ATgetArgument(i_30, 1);
                          {
                            ATerm p_30 = NULL,r_30 = NULL;
                            ATerm s_9;
                            s_9 = t;
                            {
                              ATerm q_30 = NULL;
                              t = not_null(j_30);
                              {
                                t = eval_config_0(t);
                                {
                                  q_30 = t;
                                  if(((p_30 != NULL) && (p_30 != q_30)))
                                    _fail(q_30);
                                  else
                                    p_30 = q_30;
                                }
                              }
                            }
                            t = s_9;
                            {
                              ATerm s_30 = NULL;
                              t = not_null(k_30);
                              {
                                t = eval_config_0(t);
                                {
                                  s_30 = t;
                                  if(((r_30 != NULL) && (r_30 != s_30)))
                                    _fail(s_30);
                                  else
                                    r_30 = s_30;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(p_30), not_null(r_30));
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
  ATerm a_31 = NULL;
  a_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_9, not_null(a_31));
    {
      t = table_get_0(t);
      {
        ATerm q_1 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_9;
            u_9 = t;
            {
              ATerm e_31 = NULL;
              ATerm f_31 = NULL;
              f_31 = t;
              if(((e_31 != NULL) && (e_31 != f_31)))
                _fail(f_31);
              else
                e_31 = f_31;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_9, not_null(a_31), not_null(e_31));
                t = table_put_0(t);
              }
            }
            t = u_9;
          }
          return(t);
        }
        t = try_1(t, q_1);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm p_62 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm j_31 = NULL;
      ATerm k_31 = NULL;
      t = term_z_9;
      {
        t = get_config_0(t);
        {
          k_31 = t;
          if(((j_31 != NULL) && (j_31 != k_31)))
            _fail(k_31);
          else
            j_31 = k_31;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_31), term_d_10);
        t = geq_0(t);
      }
    }
    t = y_9;
    t = p_62(t);
    return(t);
  }
  t = try_1(t, r_1);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
  o_31 = t;
  n_31 :
  if(match_cons(o_31, sym__2))
    {
      p_31 = ATgetArgument(o_31, 0);
      q_31 = ATgetArgument(o_31, 1);
      t = SSL_WriteToTextFile(not_null(p_31), not_null(q_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym__2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      t = SSL_WriteToBinaryFile(not_null(x_31), not_null(y_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm j_32 = NULL;
  ATerm g_10;
  g_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm h_10 = t;
      int i_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm k_32 = NULL,l_32 = NULL;
            k_32 = t;
            f_32 :
            if(match_cons(k_32, sym_Output_1))
              {
                l_32 = ATgetArgument(k_32, 0);
                if(((j_32 != NULL) && (j_32 != l_32)))
                  _fail(l_32);
                else
                  j_32 = l_32;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, t_1);
          LocalPopChoice(i_10);
        }
      else
        {
          t = h_10;
          {
            ATerm m_32 = NULL;
            t = term_j_10;
            {
              m_32 = t;
              if(((j_32 != NULL) && (j_32 != m_32)))
                _fail(m_32);
              else
                j_32 = m_32;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = g_10;
  {
    ATerm u_1 (ATerm t)
    {
      ATerm v_1 (ATerm t)
      {
        t = not_null(j_32);
        return(t);
      }
      t = split_2(t, v_1, _id);
      return(t);
    }
    t = _2(t, _id, u_1);
    {
      ATerm k_10 = t;
      int l_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm o_32 = NULL;
              o_32 = t;
              i_32 :
              if(!(match_cons(o_32, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_1);
            return(t);
          }
          t = _2(t, w_1, WriteToBinaryFile_0);
          LocalPopChoice(l_10);
        }
      else
        {
          t = k_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm u_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL;
  ATerm m_10;
  m_10 = t;
  t = dtime_0(t);
  t = m_10;
  {
    t = p_71(t);
    {
      ATerm n_10;
      n_10 = t;
      {
        ATerm v_32 = NULL;
        t = dtime_0(t);
        {
          v_32 = t;
          if(((u_32 != NULL) && (u_32 != v_32)))
            _fail(v_32);
          else
            u_32 = v_32;
        }
      }
      t = n_10;
      {
        w_32 = t;
        t_32 :
        if(match_cons(w_32, sym__2))
          {
            x_32 = ATgetArgument(w_32, 0);
            y_32 = ATgetArgument(w_32, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_32)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(u_32))), not_null(y_32));
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
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_ReadFromFile(not_null(e_33));
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm j_33 = NULL,n_33 = NULL;
  ATerm r_10;
  r_10 = t;
  {
    ATerm k_33 = NULL;
    t = l_84(t);
    {
      k_33 = t;
      if(((j_33 != NULL) && (j_33 != k_33)))
        _fail(k_33);
      else
        j_33 = k_33;
    }
  }
  t = r_10;
  {
    ATerm o_33 = NULL;
    t = m_84(t);
    {
      o_33 = t;
      if(((n_33 != NULL) && (n_33 != o_33)))
        _fail(o_33);
      else
        n_33 = o_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_33), not_null(n_33));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_34 = NULL;
  ATerm s_10;
  s_10 = t;
  {
    ATerm w_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 (ATerm t)
        {
          ATerm k_34 = NULL,l_34 = NULL;
          k_34 = t;
          y_33 :
          if(match_cons(k_34, sym_Input_1))
            {
              l_34 = ATgetArgument(k_34, 0);
              if(((j_34 != NULL) && (j_34 != l_34)))
                _fail(l_34);
              else
                j_34 = l_34;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, y_1);
        LocalPopChoice(z_10);
      }
    else
      {
        t = w_10;
        {
          ATerm m_34 = NULL;
          t = term_a_11;
          {
            m_34 = t;
            if(((j_34 != NULL) && (j_34 != m_34)))
              _fail(m_34);
            else
              j_34 = m_34;
          }
        }
      }
  }
  t = s_10;
  {
    ATerm z_1 (ATerm t)
    {
      t = not_null(j_34);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_1);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = SSL_string_to_int(not_null(q_34));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  y_34 = t;
  w_34 :
  if(match_string(y_34, "register-usage-info"))
    {
      t = register_usage_1(t, j_0);
    }
  else
    {
      if(((ATgetType(y_34) == AT_LIST) && ((ATermList) y_34 != ATempty)))
        {
          z_34 = ATgetFirst((ATermList) y_34);
          a_35 = (ATerm) ATgetNext((ATermList) y_34);
          x_34 :
          if(((ATgetType(a_35) == AT_LIST) && ((ATermList) a_35 != ATempty)))
            {
              b_35 = ATgetFirst((ATermList) a_35);
              c_35 = (ATerm) ATgetNext((ATermList) a_35);
              {
                ATerm g_35 = NULL;
                ATerm b_11;
                b_11 = t;
                {
                  t = not_null(z_34);
                  t = h_0(t);
                }
                t = b_11;
                {
                  ATerm h_35 = NULL;
                  t = not_null(b_35);
                  {
                    t = i_0(t);
                    {
                      h_35 = t;
                      if(((g_35 != NULL) && (g_35 != h_35)))
                        _fail(h_35);
                      else
                        g_35 = h_35;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_35)), not_null(g_35));
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
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_2 (ATerm t)
      {
        ATerm a_36 = NULL;
        a_36 = t;
        l_35 :
        if(!(match_string(a_36, "-i")))
          {
            if(!(match_string(a_36, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_2 (ATerm t)
      {
        ATerm d_36 = NULL;
        ATerm e_11;
        e_11 = t;
        {
          ATerm b_36 = NULL;
          ATerm c_36 = NULL;
          c_36 = t;
          if(((b_36 != NULL) && (b_36 != c_36)))
            _fail(c_36);
          else
            b_36 = c_36;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_f_11, not_null(b_36));
            t = set_config_0(t);
          }
        }
        t = e_11;
        {
          ATerm e_36 = NULL;
          e_36 = t;
          if(((d_36 != NULL) && (d_36 != e_36)))
            _fail(e_36);
          else
            d_36 = e_36;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_36));
        }
        return(t);
      }
      ATerm c_2 (ATerm t)
      {
        t = term_g_11;
        return(t);
      }
      t = ArgOption_3(t, a_2, b_2, c_2);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm h_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              ATerm f_36 = NULL;
              f_36 = t;
              o_35 :
              if(!(match_string(f_36, "-o")))
                {
                  if(!(match_string(f_36, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm i_36 = NULL;
              ATerm n_11;
              n_11 = t;
              {
                ATerm g_36 = NULL;
                ATerm h_36 = NULL;
                h_36 = t;
                if(((g_36 != NULL) && (g_36 != h_36)))
                  _fail(h_36);
                else
                  g_36 = h_36;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(g_36));
                  t = set_config_0(t);
                }
              }
              t = n_11;
              {
                ATerm j_36 = NULL;
                j_36 = t;
                if(((i_36 != NULL) && (i_36 != j_36)))
                  _fail(j_36);
                else
                  i_36 = j_36;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(i_36));
              }
              return(t);
            }
            ATerm f_2 (ATerm t)
            {
              t = term_s_11;
              return(t);
            }
            t = ArgOption_3(t, d_2, e_2, f_2);
            LocalPopChoice(m_11);
          }
        else
          {
            t = h_11;
            {
              ATerm u_11 = t;
              int x_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm k_36 = NULL;
                    k_36 = t;
                    r_35 :
                    if(!(match_string(k_36, "-S")))
                      {
                        if(!(match_string(k_36, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm h_2 (ATerm t)
                  {
                    t = term_z_11;
                    t = set_config_0(t);
                    t = term_a_12;
                    return(t);
                  }
                  ATerm i_2 (ATerm t)
                  {
                    t = term_b_12;
                    return(t);
                  }
                  t = Option_3(t, g_2, h_2, i_2);
                  LocalPopChoice(x_11);
                }
              else
                {
                  t = u_11;
                  {
                    ATerm c_12 = t;
                    int g_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_2 (ATerm t)
                        {
                          ATerm l_36 = NULL;
                          l_36 = t;
                          s_35 :
                          if(!(match_string(l_36, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm k_2 (ATerm t)
                        {
                          ATerm o_36 = NULL;
                          ATerm h_12;
                          h_12 = t;
                          {
                            ATerm m_36 = NULL;
                            ATerm n_36 = NULL;
                            t = string_to_int_0(t);
                            {
                              n_36 = t;
                              if(((m_36 != NULL) && (m_36 != n_36)))
                                _fail(n_36);
                              else
                                m_36 = n_36;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_z_9, not_null(m_36));
                              t = set_config_0(t);
                            }
                          }
                          t = h_12;
                          {
                            ATerm p_36 = NULL;
                            p_36 = t;
                            if(((o_36 != NULL) && (o_36 != p_36)))
                              _fail(p_36);
                            else
                              o_36 = p_36;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_36));
                          }
                          return(t);
                        }
                        ATerm l_2 (ATerm t)
                        {
                          t = term_i_12;
                          return(t);
                        }
                        t = ArgOption_3(t, j_2, k_2, l_2);
                        LocalPopChoice(g_12);
                      }
                    else
                      {
                        t = c_12;
                        {
                          ATerm m_12 = t;
                          int n_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_2 (ATerm t)
                              {
                                ATerm q_36 = NULL;
                                q_36 = t;
                                v_35 :
                                if(!(match_string(q_36, "-k")))
                                  {
                                    if(!(match_string(q_36, "--keep")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm n_2 (ATerm t)
                              {
                                ATerm o_12;
                                o_12 = t;
                                {
                                  ATerm r_36 = NULL;
                                  ATerm s_36 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    s_36 = t;
                                    if(((r_36 != NULL) && (r_36 != s_36)))
                                      _fail(s_36);
                                    else
                                      r_36 = s_36;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_t_12, not_null(r_36));
                                    t = set_config_0(t);
                                  }
                                }
                                t = o_12;
                                return(t);
                              }
                              ATerm o_2 (ATerm t)
                              {
                                t = term_u_12;
                                return(t);
                              }
                              t = ArgOption_3(t, m_2, n_2, o_2);
                              LocalPopChoice(n_12);
                            }
                          else
                            {
                              t = m_12;
                              {
                                ATerm v_12 = t;
                                int x_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm t_36 = NULL;
                                      t_36 = t;
                                      x_35 :
                                      if(!(match_string(t_36, "-v")))
                                        {
                                          if(!(match_string(t_36, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm q_2 (ATerm t)
                                    {
                                      t = term_e_13;
                                      t = set_config_0(t);
                                      t = term_f_13;
                                      return(t);
                                    }
                                    ATerm r_2 (ATerm t)
                                    {
                                      t = term_k_13;
                                      return(t);
                                    }
                                    t = Option_3(t, p_2, q_2, r_2);
                                    LocalPopChoice(x_12);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm l_13 = t;
                                      int m_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_2 (ATerm t)
                                          {
                                            ATerm u_36 = NULL;
                                            u_36 = t;
                                            y_35 :
                                            if(!(match_string(u_36, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm t_2 (ATerm t)
                                          {
                                            t = term_o_13;
                                            t = set_config_0(t);
                                            t = term_p_13;
                                            return(t);
                                          }
                                          ATerm u_2 (ATerm t)
                                          {
                                            t = term_s_13;
                                            return(t);
                                          }
                                          t = Option_3(t, s_2, t_2, u_2);
                                          LocalPopChoice(m_13);
                                        }
                                      else
                                        {
                                          t = l_13;
                                          {
                                            ATerm v_2 (ATerm t)
                                            {
                                              ATerm v_36 = NULL;
                                              v_36 = t;
                                              z_35 :
                                              if(!(match_string(v_36, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm w_2 (ATerm t)
                                            {
                                              t = term_z_13;
                                              t = set_config_0(t);
                                              t = term_a_14;
                                              return(t);
                                            }
                                            ATerm x_2 (ATerm t)
                                            {
                                              t = term_b_14;
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
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, term_c_14));
  {
    t = printnl_0(t);
    {
      t = term_j_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  t = SSL_TicksToSeconds(not_null(e_37));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
  j_37 = t;
  i_37 :
  if(match_cons(j_37, sym__2))
    {
      k_37 = ATgetArgument(j_37, 0);
      l_37 = ATgetArgument(j_37, 1);
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_37), not_null(l_37));
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = SSL_addr(not_null(k_37), not_null(l_37));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm))
{
  ATerm m_14 = t;
  int n_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_76(t);
      LocalPopChoice(n_14);
    }
  else
    {
      t = m_14;
      {
        ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL;
        s_37 = t;
        r_37 :
        if(((ATgetType(s_37) == AT_LIST) && ((ATermList) s_37 != ATempty)))
          {
            t_37 = ATgetFirst((ATermList) s_37);
            u_37 = (ATerm) ATgetNext((ATermList) s_37);
            {
              ATerm x_37 = NULL;
              ATerm y_37 = NULL;
              t = not_null(u_37);
              {
                t = foldr_2(t, z_76, a_77);
                {
                  y_37 = t;
                  if(((x_37 != NULL) && (x_37 != y_37)))
                    _fail(y_37);
                  else
                    x_37 = y_37;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), not_null(x_37));
                t = a_77(t);
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
ATerm crush_2 (ATerm t, ATerm r_78 (ATerm), ATerm s_78 (ATerm))
{
  ATerm j_38 = NULL;
  ATerm l_38 = NULL;
  j_38 = t;
  {
    ATerm m_38 = NULL;
    ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
    t = not_null(j_38);
    {
      m_38 = t;
      {
        t = SSL_explode_term(not_null(m_38));
        {
          o_38 = t;
          i_38 :
          if(match_cons(o_38, sym__2))
            {
              p_38 = ATgetArgument(o_38, 0);
              q_38 = ATgetArgument(o_38, 1);
              if(((l_38 != NULL) && (l_38 != q_38)))
                _fail(q_38);
              else
                l_38 = q_38;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_38);
      t = foldr_2(t, r_78, s_78);
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
    ATerm y_2 (ATerm t)
    {
      t = term_y_11;
      return(t);
    }
    t = crush_2(t, y_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  x_38 :
  if(match_cons(y_38, sym__2))
    {
      z_38 = ATgetArgument(y_38, 0);
      a_39 = ATgetArgument(y_38, 1);
      {
        ATerm o_14;
        o_14 = t;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_38), not_null(a_39));
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              t = SSL_gtr(not_null(z_38), not_null(a_39));
            }
        }
        t = o_14;
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
  ATerm r_39 = NULL;
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL;
      s_39 = t;
      q_39 :
      if(match_cons(s_39, sym__2))
        {
          t_39 = ATgetArgument(s_39, 0);
          u_39 = ATgetArgument(s_39, 1);
          {
            if(((r_39 != NULL) && (r_39 != t_39)))
              _fail(t_39);
            else
              r_39 = t_39;
            if(((r_39 != NULL) && (r_39 != u_39)))
              _fail(u_39);
            else
              r_39 = u_39;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm o_62 (ATerm))
{
  ATerm z_2 (ATerm t)
  {
    ATerm v_14;
    v_14 = t;
    {
      ATerm x_39 = NULL;
      ATerm y_39 = NULL;
      t = term_z_9;
      {
        t = get_config_0(t);
        {
          y_39 = t;
          if(((x_39 != NULL) && (x_39 != y_39)))
            _fail(y_39);
          else
            x_39 = y_39;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), term_j_8);
        t = geq_0(t);
      }
    }
    t = v_14;
    t = o_62(t);
    return(t);
  }
  t = try_1(t, z_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm a_3 (ATerm t)
  {
    ATerm c_40 = NULL,i_40 = NULL;
    ATerm d_15;
    d_15 = t;
    {
      ATerm d_40 = NULL;
      t = run_time_0(t);
      {
        d_40 = t;
        if(((c_40 != NULL) && (c_40 != d_40)))
          _fail(d_40);
        else
          c_40 = d_40;
      }
    }
    t = d_15;
    {
      ATerm j_40 = NULL;
      t = term_e_15;
      {
        t = get_config_0(t);
        {
          j_40 = t;
          if(((i_40 != NULL) && (i_40 != j_40)))
            _fail(j_40);
          else
            i_40 = j_40;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_15), not_null(c_40)), term_f_15), not_null(i_40)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, a_3);
  {
    t = term_y_11;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(match_cons(q_40, sym_Version_0))
    {
      ATerm s_40 = NULL,u_40 = NULL;
      ATerm p_15;
      p_15 = t;
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
      t = p_15;
      {
        ATerm v_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_40));
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
ATerm need_help_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm b_3 (ATerm t)
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, b_3);
  t = n_71(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  t = SSL_table_create(not_null(a_41));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  {
    ATerm z_15;
    z_15 = t;
    {
      t = term_a_16;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_a_16, term_b_16, not_null(i_41));
          t = table_put_0(t);
        }
      }
    }
    t = z_15;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_41 = NULL;
  m_41 = t;
  t = SSL_table_destroy(not_null(m_41));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  t = SSL_exit(not_null(q_41));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_42 = NULL,e_42 = NULL,f_42 = NULL;
  b_42 = t;
  a_42 :
  if(((ATermList) b_42 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_42) == AT_LIST) && ((ATermList) b_42 != ATempty)))
        {
          e_42 = ATgetFirst((ATermList) b_42);
          f_42 = (ATerm) ATgetNext((ATermList) b_42);
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
  ATerm j_16;
  j_16 = t;
  {
    ATerm i_42 = NULL;
    ATerm l_42 = NULL;
    ATerm l_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(n_16);
      }
    else
      {
        t = l_16;
        {
          ATerm j_42 = NULL;
          ATerm k_42 = NULL;
          k_42 = t;
          if(((j_42 != NULL) && (j_42 != k_42)))
            _fail(k_42);
          else
            j_42 = k_42;
          t = (ATerm) ATinsert(ATempty, not_null(j_42));
        }
      }
    {
      l_42 = t;
      if(((i_42 != NULL) && (i_42 != l_42)))
        _fail(l_42);
      else
        i_42 = l_42;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(i_42));
      t = printnl_0(t);
    }
  }
  t = j_16;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm v_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm o_42 (ATerm t)
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = Cons_2(t, y_80, o_42);
      }
    return(t);
  }
  t = o_42(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  x_42 = t;
  u_42 :
  if(((ATgetType(x_42) == AT_LIST) && ((ATermList) x_42 != ATempty)))
    {
      v_42 = ATgetFirst((ATermList) x_42);
      w_42 = (ATerm) ATgetNext((ATermList) x_42);
      {
        ATerm a_43 = NULL;
        t = not_null(w_42);
        {
          ATerm u_16;
          u_16 = t;
          {
            ATerm b_43 = NULL,d_43 = NULL,f_43 = NULL;
            ATerm v_16;
            v_16 = t;
            {
              ATerm c_43 = NULL;
              t = g_0(t);
              {
                c_43 = t;
                if(((b_43 != NULL) && (b_43 != c_43)))
                  _fail(c_43);
                else
                  b_43 = c_43;
              }
            }
            t = v_16;
            {
              ATerm e_43 = NULL;
              t = not_null(v_42);
              {
                t = f_0(t);
                {
                  e_43 = t;
                  if(((d_43 != NULL) && (d_43 != e_43)))
                    _fail(e_43);
                  else
                    d_43 = e_43;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_43)), not_null(d_43));
                {
                  f_43 = t;
                  if(((a_43 != NULL) && (a_43 != f_43)))
                    _fail(f_43);
                  else
                    a_43 = f_43;
                }
              }
            }
          }
          t = u_16;
          {
            ATerm c_3 (ATerm t)
            {
              t = not_null(a_43);
              return(t);
            }
            t = reverse_acc_2(t, f_0, c_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) x_42 == ATempty))
        {
          {
            t = term_z_12;
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
  ATerm d_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm u_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_52 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL;
  s_43 = t;
  r_43 :
  if(match_cons(s_43, sym_Program_1))
    {
      t_43 = ATgetArgument(s_43, 0);
      {
        ATerm z_43 = NULL,b_44 = NULL;
        ATerm a_44 = NULL;
        t = SSLgetAnnotations(not_null(s_43));
        {
          a_44 = t;
          if(((z_43 != NULL) && (z_43 != a_44)))
            _fail(a_44);
          else
            z_43 = a_44;
        }
        {
          t = not_null(t_43);
          {
            ATerm d_44 = NULL;
            t = c_52(t);
            {
              b_44 = t;
              {
                ATerm j_44 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_44)), not_null(z_43));
                {
                  j_44 = t;
                  if(((d_44 != NULL) && (d_44 != j_44)))
                    _fail(j_44);
                  else
                    d_44 = j_44;
                }
                t = not_null(d_44);
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
  ATerm w_44 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_44 = NULL;
      t = term_e_15;
      {
        t = get_config_0(t);
        {
          z_44 = t;
          if(((w_44 != NULL) && (w_44 != z_44)))
            _fail(z_44);
          else
            w_44 = z_44;
        }
      }
      LocalPopChoice(b_17);
    }
  else
    {
      t = a_17;
      {
        ATerm h_3 (ATerm t)
        {
          ATerm i_3 (ATerm t)
          {
            ATerm a_45 = NULL;
            a_45 = t;
            if(((w_44 != NULL) && (w_44 != a_45)))
              _fail(a_45);
            else
              w_44 = a_45;
            return(t);
          }
          t = Program_1(t, i_3);
          return(t);
        }
        t = option_defined_1(t, h_3);
      }
    }
  {
    ATerm j_3 (ATerm t)
    {
      ATerm k_3 (ATerm t)
      {
        t = not_null(w_44);
        return(t);
      }
      t = short_description_1(t, k_3);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, j_3);
    {
      t = term_d_17;
      {
        t = echo_0(t);
        {
          t = term_g_17;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm b_45 = NULL;
                  ATerm c_45 = NULL;
                  c_45 = t;
                  if(((b_45 != NULL) && (b_45 != c_45)))
                    _fail(c_45);
                  else
                    b_45 = c_45;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_45)), term_l_17);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, l_3);
                {
                  ATerm m_3 (ATerm t)
                  {
                    ATerm d_45 = NULL;
                    ATerm e_45 = NULL;
                    ATerm n_3 (ATerm t)
                    {
                      t = not_null(w_44);
                      return(t);
                    }
                    t = long_description_1(t, n_3);
                    {
                      e_45 = t;
                      if(((d_45 != NULL) && (d_45 != e_45)))
                        _fail(e_45);
                      else
                        d_45 = e_45;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(d_45)), term_m_17);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, m_3);
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
  ATerm n_17;
  n_17 = t;
  {
    ATerm k_45 = NULL;
    ATerm l_45 = NULL;
    l_45 = t;
    if(((k_45 != NULL) && (k_45 != l_45)))
      _fail(l_45);
    else
      k_45 = l_45;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(k_45)));
      t = printnl_0(t);
    }
  }
  t = n_17;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_69 (ATerm))
{
  ATerm p_17;
  p_17 = t;
  {
    t = v_69(t);
    t = debug_0(t);
  }
  t = p_17;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_52 (ATerm))
{
  ATerm s_45 = NULL,t_45 = NULL;
  s_45 = t;
  r_45 :
  if(match_cons(s_45, sym_Undefined_1))
    {
      t_45 = ATgetArgument(s_45, 0);
      {
        ATerm w_45 = NULL,y_45 = NULL;
        ATerm x_45 = NULL;
        t = SSLgetAnnotations(not_null(s_45));
        {
          x_45 = t;
          if(((w_45 != NULL) && (w_45 != x_45)))
            _fail(x_45);
          else
            w_45 = x_45;
        }
        {
          t = not_null(t_45);
          {
            ATerm a_46 = NULL;
            t = d_52(t);
            {
              y_45 = t;
              {
                ATerm b_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_45)), not_null(w_45));
                {
                  b_46 = t;
                  if(((a_46 != NULL) && (a_46 != b_46)))
                    _fail(b_46);
                  else
                    a_46 = b_46;
                }
                t = not_null(a_46);
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
ATerm fetch_1 (ATerm t, ATerm h_81 (ATerm))
{
  ATerm g_46 (ATerm t)
  {
    ATerm r_17 = t;
    int s_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_81, _id);
        LocalPopChoice(s_17);
      }
    else
      {
        t = r_17;
        t = Cons_2(t, _id, g_46);
      }
    return(t);
  }
  t = g_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_67 (ATerm))
{
  t = fetch_1(t, z_67);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm l_46 = NULL;
  l_46 = t;
  k_46 :
  if(match_cons(l_46, sym_Help_0))
    {
      ATerm n_46 = NULL,p_46 = NULL;
      ATerm t_17;
      t_17 = t;
      {
        ATerm o_46 = NULL;
        t = SSLgetAnnotations(not_null(l_46));
        {
          o_46 = t;
          if(((n_46 != NULL) && (n_46 != o_46)))
            _fail(o_46);
          else
            n_46 = o_46;
        }
      }
      t = t_17;
      {
        ATerm q_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(n_46));
        {
          q_46 = t;
          if(((p_46 != NULL) && (p_46 != q_46)))
            _fail(q_46);
          else
            p_46 = q_46;
        }
        t = not_null(p_46);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm d_85 (ATerm))
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_85(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  v_46 :
  if(match_cons(w_46, sym__2))
    {
      x_46 = ATgetArgument(w_46, 0);
      y_46 = ATgetArgument(w_46, 1);
      t = SSL_table_get(not_null(x_46), not_null(y_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL;
  f_47 = t;
  e_47 :
  if(match_cons(f_47, sym__3))
    {
      g_47 = ATgetArgument(f_47, 0);
      h_47 = ATgetArgument(f_47, 1);
      i_47 = ATgetArgument(f_47, 2);
      {
        ATerm z_17;
        z_17 = t;
        {
          ATerm m_47 = NULL;
          ATerm n_47 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_47), not_null(h_47));
          {
            ATerm i_18 = t;
            int j_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_18);
              }
            else
              {
                t = i_18;
                t = (ATerm) ATempty;
              }
            {
              n_47 = t;
              if(((m_47 != NULL) && (m_47 != n_47)))
                _fail(n_47);
              else
                m_47 = n_47;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(g_47), not_null(h_47), (ATerm) ATinsert(CheckATermList(not_null(m_47)), not_null(i_47)));
            t = table_put_0(t);
          }
        }
        t = z_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm z_66 (ATerm))
{
  ATerm r_47 = NULL;
  ATerm s_47 = NULL;
  t = term_z_12;
  {
    t = z_66(t);
    {
      s_47 = t;
      if(((r_47 != NULL) && (r_47 != s_47)))
        _fail(s_47);
      else
        r_47 = s_47;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_17, term_f_17, not_null(r_47));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm y_47 = NULL,z_47 = NULL,a_48 = NULL;
  y_47 = t;
  x_47 :
  if(match_string(y_47, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(y_47) == AT_LIST) && ((ATermList) y_47 != ATempty)))
        {
          z_47 = ATgetFirst((ATermList) y_47);
          a_48 = (ATerm) ATgetNext((ATermList) y_47);
          {
            ATerm d_48 = NULL;
            ATerm k_18;
            k_18 = t;
            {
              t = not_null(z_47);
              t = a_0(t);
            }
            t = k_18;
            {
              ATerm e_48 = NULL;
              t = term_z_12;
              {
                t = b_0(t);
                {
                  e_48 = t;
                  if(((d_48 != NULL) && (d_48 != e_48)))
                    _fail(e_48);
                  else
                    d_48 = e_48;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(a_48)), not_null(d_48));
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
  ATerm o_3 (ATerm t)
  {
    ATerm j_48 = NULL;
    j_48 = t;
    i_48 :
    if(!(match_string(j_48, "--help")))
      {
        if(!(match_string(j_48, "-h")))
          {
            if(!(match_string(j_48, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_m_18;
    {
      t = set_config_0(t);
      t = term_n_18;
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_o_18;
    return(t);
  }
  t = Option_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
  m_48 = t;
  l_48 :
  if(((ATgetType(m_48) == AT_LIST) && ((ATermList) m_48 != ATempty)))
    {
      n_48 = ATgetFirst((ATermList) m_48);
      o_48 = (ATerm) ATgetNext((ATermList) m_48);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_48)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_48)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_61 (ATerm), ATerm v_61 (ATerm))
{
  ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
  z_48 = t;
  y_48 :
  if(((ATgetType(z_48) == AT_LIST) && ((ATermList) z_48 != ATempty)))
    {
      a_49 = ATgetFirst((ATermList) z_48);
      b_49 = (ATerm) ATgetNext((ATermList) z_48);
      {
        ATerm g_49 = NULL,i_49 = NULL;
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(z_48));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
        {
          t = not_null(a_49);
          {
            ATerm k_49 = NULL;
            t = u_61(t);
            {
              i_49 = t;
              {
                t = not_null(b_49);
                {
                  ATerm j_50 = NULL;
                  t = v_61(t);
                  {
                    k_49 = t;
                    {
                      ATerm k_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_49)), not_null(i_49)), not_null(g_49));
                      {
                        k_50 = t;
                        if(((j_50 != NULL) && (j_50 != k_50)))
                          _fail(k_50);
                        else
                          j_50 = k_50;
                      }
                      t = not_null(j_50);
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
  ATerm w_50 = NULL;
  w_50 = t;
  v_50 :
  if(((ATermList) w_50 == ATempty))
    {
      {
        ATerm y_50 = NULL,a_51 = NULL;
        ATerm p_18;
        p_18 = t;
        {
          ATerm z_50 = NULL;
          t = SSLgetAnnotations(not_null(w_50));
          {
            z_50 = t;
            if(((y_50 != NULL) && (y_50 != z_50)))
              _fail(z_50);
            else
              y_50 = z_50;
          }
        }
        t = p_18;
        {
          ATerm b_51 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_50));
          {
            b_51 = t;
            if(((a_51 != NULL) && (a_51 != b_51)))
              _fail(b_51);
            else
              a_51 = b_51;
          }
          t = not_null(a_51);
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
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  g_51 :
  if(match_cons(h_51, sym__2))
    {
      i_51 = ATgetArgument(h_51, 0);
      j_51 = ATgetArgument(h_51, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_9, not_null(i_51), not_null(j_51));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm x_66 (ATerm))
{
  ATerm q_18;
  q_18 = t;
  {
    ATerm s_3 (ATerm t)
    {
      t = term_r_18;
      t = x_66(t);
      return(t);
    }
    t = try_1(t, s_3);
  }
  t = q_18;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm r_51 = NULL;
      ATerm s_18;
      s_18 = t;
      {
        ATerm p_51 = NULL;
        ATerm q_51 = NULL;
        q_51 = t;
        if(((p_51 != NULL) && (p_51 != q_51)))
          _fail(q_51);
        else
          p_51 = q_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_e_15, not_null(p_51));
          t = set_config_0(t);
        }
      }
      t = s_18;
      {
        ATerm s_51 = NULL;
        s_51 = t;
        if(((r_51 != NULL) && (r_51 != s_51)))
          _fail(s_51);
        else
          r_51 = s_51;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_51));
      }
      return(t);
    }
    ATerm u_3 (ATerm t)
    {
      ATerm t_18 = t;
      int u_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_18 = t;
          int w_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_18);
            }
          else
            {
              t = v_18;
              {
                t = x_66(t);
                t = Cons_2(t, _id, u_3);
              }
            }
          LocalPopChoice(u_18);
        }
      else
        {
          t = t_18;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_3, u_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm y_51 = NULL,z_51 = NULL,a_52 = NULL;
  ATerm a_19;
  a_19 = t;
  {
    ATerm b_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL;
    b_52 = t;
    x_51 :
    if(match_cons(b_52, sym__3))
      {
        e_52 = ATgetArgument(b_52, 0);
        f_52 = ATgetArgument(b_52, 1);
        g_52 = ATgetArgument(b_52, 2);
        {
          if(((y_51 != NULL) && (y_51 != e_52)))
            _fail(e_52);
          else
            y_51 = e_52;
          {
            if(((z_51 != NULL) && (z_51 != f_52)))
              _fail(f_52);
            else
              z_51 = f_52;
            {
              if(((a_52 != NULL) && (a_52 != g_52)))
                _fail(g_52);
              else
                a_52 = g_52;
              t = SSL_table_put(not_null(y_51), not_null(z_51), not_null(a_52));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm j_52 = NULL;
  ATerm b_19;
  b_19 = t;
  {
    t = term_f_19;
    t = table_put_0(t);
  }
  t = b_19;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_66(t);
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_3);
    {
      ATerm w_3 (ATerm t)
      {
        ATerm n_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_19;
            r_19 = t;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_l_18;
                  t = get_config_0(t);
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = r_19;
            {
              t = system_usage_0(t);
              {
                t = term_y_11;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_19);
          }
        else
          {
            t = n_19;
            {
              ATerm x_3 (ATerm t)
              {
                ATerm y_3 (ATerm t)
                {
                  ATerm k_52 = NULL;
                  k_52 = t;
                  if(((j_52 != NULL) && (j_52 != k_52)))
                    _fail(k_52);
                  else
                    j_52 = k_52;
                  return(t);
                }
                t = Undefined_1(t, y_3);
                return(t);
              }
              t = option_defined_1(t, x_3);
              {
                ATerm b_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_52)), term_u_19);
                  return(t);
                }
                t = say_1(t, b_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, w_3);
      {
        ATerm v_19;
        v_19 = t;
        {
          t = term_e_17;
          t = table_destroy_0(t);
        }
        t = v_19;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_70 (ATerm), ATerm l_70 (ATerm), ATerm m_70 (ATerm), ATerm n_70 (ATerm))
{
  t = parse_options_1(t, k_70);
  {
    t = store_options_0(t);
    {
      t = m_70(t);
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_70);
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            {
              ATerm y_19 = t;
              int z_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_70(t);
                  t = report_success_0(t);
                  LocalPopChoice(z_19);
                }
              else
                {
                  t = y_19;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_71 (ATerm), ATerm c_71 (ATerm), ATerm d_71 (ATerm), ATerm e_71 (ATerm))
{
  ATerm k_4 (ATerm t)
  {
    ATerm a_20 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_71(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = a_20;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_71);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, k_4, d_71, e_71, l_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_70 (ATerm), ATerm w_70 (ATerm), ATerm x_70 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm s_4 (ATerm t)
    {
      ATerm h_20;
      h_20 = t;
      {
        ATerm n_52 = NULL;
        ATerm o_52 = NULL;
        t = term_e_15;
        {
          t = get_config_0(t);
          {
            o_52 = t;
            if(((n_52 != NULL) && (n_52 != o_52)))
              _fail(o_52);
            else
              n_52 = o_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_8, (ATerm) ATinsert(ATempty, not_null(n_52)));
          t = printnl_0(t);
        }
      }
      t = h_20;
      return(t);
    }
    t = if_verbose2_1(t, s_4);
    return(t);
  }
  t = iowrap_4(t, v_70, w_70, x_70, m_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_70 (ATerm), ATerm u_70 (ATerm))
{
  t = iowrap_3(t, t_70, u_70, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm q_70 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = _2(t, _id, q_70);
    return(t);
  }
  t = iowrap_2(t, t_4, _fail);
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
