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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_b_14;
ATerm term_q_13;
ATerm term_j_13;
ATerm term_h_13;
ATerm term_f_13;
ATerm term_q_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_e_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_g_11;
ATerm term_d_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_n_9;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_j_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_z_7;
ATerm term_u_7;
ATerm term_l_7;
ATerm term_g_7;
ATerm term_h_4;
ATerm term_q_3;
void init_constant_terms (void)
{
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeAppl(ATmakeSymbol("not a term-expression: ", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-expression: ", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a strategy-definition: ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a stratego-specification: ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATinsert(ATempty, term_b_8);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATinsert(ATempty, term_e_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym__2, term_q_3, term_g_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATinsert(ATempty, term_n_8);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATinsert(ATempty, term_g_12);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_q_3, term_h_12);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_k_12);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, (ATerm) ATempty);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm debug_1 (ATerm, ATerm o_49 (ATerm));
ATerm Let_2 (ATerm, ATerm g_42 (ATerm), ATerm h_42 (ATerm));
ATerm Op_2 (ATerm, ATerm o_41 (ATerm), ATerm p_41 (ATerm));
ATerm Var_1 (ATerm, ATerm k_41 (ATerm));
ATerm As_2 (ATerm, ATerm a_40 (ATerm), ATerm b_40 (ATerm));
ATerm BuildDefault_1 (ATerm, ATerm c_40 (ATerm));
ATerm Str_1 (ATerm, ATerm n_41 (ATerm));
ATerm is_real_0 (ATerm);
ATerm Real_1 (ATerm, ATerm m_41 (ATerm));
ATerm Int_1 (ATerm, ATerm l_41 (ATerm));
ATerm Wld_0 (ATerm);
ATerm term_expression_0 (ATerm);
ATerm Prim_2 (ATerm, ATerm l_43 (ATerm), ATerm m_43 (ATerm));
ATerm Where_1 (ATerm, ATerm k_43 (ATerm));
ATerm Scope_2 (ATerm, ATerm i_43 (ATerm), ATerm j_43 (ATerm));
ATerm Build_1 (ATerm, ATerm f_43 (ATerm));
ATerm Match_1 (ATerm, ATerm e_43 (ATerm));
ATerm Thread_1 (ATerm, ATerm b_43 (ATerm));
ATerm All_1 (ATerm, ATerm a_43 (ATerm));
ATerm Some_1 (ATerm, ATerm k_0 (ATerm));
ATerm One_1 (ATerm, ATerm y_42 (ATerm));
ATerm Cong_2 (ATerm, ATerm w_42 (ATerm), ATerm x_42 (ATerm));
ATerm is_int_0 (ATerm);
ATerm Path_2 (ATerm, ATerm u_42 (ATerm), ATerm v_42 (ATerm));
ATerm Rec_2 (ATerm, ATerm e_42 (ATerm), ATerm f_42 (ATerm));
ATerm SVar_1 (ATerm, ATerm d_42 (ATerm));
ATerm Call_2 (ATerm, ATerm s_42 (ATerm), ATerm t_42 (ATerm));
ATerm LGChoice_2 (ATerm, ATerm a_42 (ATerm), ATerm b_42 (ATerm));
ATerm GChoice_2 (ATerm, ATerm y_41 (ATerm), ATerm z_41 (ATerm));
ATerm LChoice_2 (ATerm, ATerm w_41 (ATerm), ATerm x_41 (ATerm));
ATerm Choice_2 (ATerm, ATerm u_41 (ATerm), ATerm v_41 (ATerm));
ATerm Seq_2 (ATerm, ATerm s_41 (ATerm), ATerm t_41 (ATerm));
ATerm Test_1 (ATerm, ATerm q_41 (ATerm));
ATerm Not_1 (ATerm, ATerm r_41 (ATerm));
ATerm Fail_0 (ATerm);
ATerm Id_0 (ATerm);
ATerm strategy_expression_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm l_42 (ATerm), ATerm m_42 (ATerm));
ATerm Mod_2 (ATerm, ATerm q_40 (ATerm), ATerm r_40 (ATerm));
ATerm SDef_3 (ATerm, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm));
ATerm strategy_definition_0 (ATerm);
ATerm list_1 (ATerm, ATerm y_57 (ATerm));
ATerm Strategies_1 (ATerm, ATerm y_40 (ATerm));
ATerm Specification_1 (ATerm, ATerm a_41 (ATerm));
ATerm stratego_specification_0 (ATerm);
ATerm _2 (ATerm, ATerm a_33 (ATerm), ATerm b_33 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_48 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_51 (ATerm), ATerm l_51 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_48 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm k_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_46 (ATerm));
ATerm map_1 (ATerm, ATerm w_57 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_46 (ATerm));
ATerm Program_1 (ATerm, ATerm j_34 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm k_34 (ATerm));
ATerm fetch_1 (ATerm, ATerm e_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_64 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_47 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_47 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_47 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_48 (ATerm), ATerm d_48 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_47 (ATerm));
ATerm main_0 (ATerm);
ATerm debug_1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm o_3;
  o_3 = t;
  {
    ATerm y_4 = NULL,a_5 = NULL;
    ATerm p_3;
    p_3 = t;
    {
      ATerm z_4 = NULL;
      t = o_49(t);
      {
        z_4 = t;
        if(((y_4 != NULL) && (y_4 != z_4)))
          _fail(z_4);
        else
          y_4 = z_4;
      }
    }
    t = p_3;
    {
      ATerm b_5 = NULL;
      b_5 = t;
      if(((a_5 != NULL) && (a_5 != b_5)))
        _fail(b_5);
      else
        a_5 = b_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_5)), not_null(y_4)));
        t = printnl_0(t);
      }
    }
  }
  t = o_3;
  return(t);
}
ATerm Let_2 (ATerm t, ATerm g_42 (ATerm), ATerm h_42 (ATerm))
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL;
  i_5 = t;
  h_5 :
  if(match_cons(i_5, sym_Let_2))
    {
      j_5 = ATgetArgument(i_5, 0);
      k_5 = ATgetArgument(i_5, 1);
      {
        ATerm n_5 = NULL;
        t = not_null(j_5);
        {
          ATerm p_5 = NULL;
          t = g_42(t);
          {
            n_5 = t;
            {
              t = not_null(k_5);
              {
                t = h_42(t);
                {
                  p_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(n_5), not_null(p_5));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Op_2 (ATerm t, ATerm o_41 (ATerm), ATerm p_41 (ATerm))
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym_Op_2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      {
        ATerm d_6 = NULL;
        t = not_null(z_5);
        {
          ATerm f_6 = NULL;
          t = o_41(t);
          {
            d_6 = t;
            {
              t = not_null(a_6);
              {
                t = p_41(t);
                {
                  f_6 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(d_6), not_null(f_6));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Var_1 (ATerm t, ATerm k_41 (ATerm))
{
  ATerm n_6 = NULL,o_6 = NULL;
  n_6 = t;
  m_6 :
  if(match_cons(n_6, sym_Var_1))
    {
      o_6 = ATgetArgument(n_6, 0);
      {
        ATerm q_6 = NULL;
        t = not_null(o_6);
        {
          t = k_41(t);
          {
            q_6 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm As_2 (ATerm t, ATerm a_40 (ATerm), ATerm b_40 (ATerm))
{
  ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
  y_6 = t;
  x_6 :
  if(match_cons(y_6, sym_As_2))
    {
      z_6 = ATgetArgument(y_6, 0);
      a_7 = ATgetArgument(y_6, 1);
      {
        ATerm d_7 = NULL;
        t = not_null(z_6);
        {
          ATerm f_7 = NULL;
          t = a_40(t);
          {
            d_7 = t;
            {
              t = not_null(a_7);
              {
                t = b_40(t);
                {
                  f_7 = t;
                  t = (ATerm) ATmakeAppl(sym_As_2, not_null(d_7), not_null(f_7));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm BuildDefault_1 (ATerm t, ATerm c_40 (ATerm))
{
  ATerm n_7 = NULL,o_7 = NULL;
  n_7 = t;
  m_7 :
  if(match_cons(n_7, sym_BuildDefault_1))
    {
      o_7 = ATgetArgument(n_7, 0);
      {
        ATerm q_7 = NULL;
        t = not_null(o_7);
        {
          t = c_40(t);
          {
            q_7 = t;
            t = (ATerm) ATmakeAppl(sym_BuildDefault_1, not_null(q_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Str_1 (ATerm t, ATerm n_41 (ATerm))
{
  ATerm x_7 = NULL,y_7 = NULL;
  x_7 = t;
  w_7 :
  if(match_cons(x_7, sym_Str_1))
    {
      y_7 = ATgetArgument(x_7, 0);
      {
        ATerm a_8 = NULL;
        t = not_null(y_7);
        {
          t = n_41(t);
          {
            a_8 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, not_null(a_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_real_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  t = SSL_is_real(not_null(f_8));
  return(t);
}
ATerm Real_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_Real_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      {
        ATerm o_8 = NULL;
        t = not_null(m_8);
        {
          t = m_41(t);
          {
            o_8 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, not_null(o_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Int_1 (ATerm t, ATerm l_41 (ATerm))
{
  ATerm v_8 = NULL,w_8 = NULL;
  v_8 = t;
  u_8 :
  if(match_cons(v_8, sym_Int_1))
    {
      w_8 = ATgetArgument(v_8, 0);
      {
        ATerm y_8 = NULL;
        t = not_null(w_8);
        {
          t = l_41(t);
          {
            y_8 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, not_null(y_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm d_9 = NULL;
  d_9 = t;
  c_9 :
  if(!(match_cons(d_9, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm term_expression_0 (ATerm t)
{
  ATerm r_3 = t;
  int s_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Wld_0(t);
      LocalPopChoice(s_3);
    }
  else
    {
      t = r_3;
      {
        ATerm t_3 = t;
        int u_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Var_1(t, is_string_0);
            LocalPopChoice(u_3);
          }
        else
          {
            t = t_3;
            {
              ATerm v_3 = t;
              int w_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Int_1(t, is_int_0);
                  LocalPopChoice(w_3);
                }
              else
                {
                  t = v_3;
                  {
                    ATerm x_3 = t;
                    int y_3 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Real_1(t, is_real_0);
                        LocalPopChoice(y_3);
                      }
                    else
                      {
                        t = x_3;
                        {
                          ATerm z_3 = t;
                          int a_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Str_1(t, is_string_0);
                              LocalPopChoice(a_4);
                            }
                          else
                            {
                              t = z_3;
                              {
                                ATerm b_4 = t;
                                int c_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildDefault_1(t, term_expression_0);
                                    LocalPopChoice(c_4);
                                  }
                                else
                                  {
                                    t = b_4;
                                    {
                                      ATerm d_4 = t;
                                      int e_4 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_0 (ATerm t)
                                          {
                                            t = Var_1(t, is_string_0);
                                            return(t);
                                          }
                                          t = As_2(t, b_0, term_expression_0);
                                          LocalPopChoice(e_4);
                                        }
                                      else
                                        {
                                          t = d_4;
                                          {
                                            ATerm f_4 = t;
                                            int g_4 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm c_0 (ATerm t)
                                                {
                                                  t = list_1(t, term_expression_0);
                                                  return(t);
                                                }
                                                t = Op_2(t, is_string_0, c_0);
                                                LocalPopChoice(g_4);
                                              }
                                            else
                                              {
                                                t = f_4;
                                                {
                                                  ATerm e_0 (ATerm t)
                                                  {
                                                    t = term_h_4;
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
ATerm Prim_2 (ATerm t, ATerm l_43 (ATerm), ATerm m_43 (ATerm))
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_Prim_2))
    {
      k_9 = ATgetArgument(j_9, 0);
      l_9 = ATgetArgument(j_9, 1);
      {
        ATerm o_9 = NULL;
        t = not_null(k_9);
        {
          ATerm q_9 = NULL;
          t = l_43(t);
          {
            o_9 = t;
            {
              t = not_null(l_9);
              {
                t = m_43(t);
                {
                  q_9 = t;
                  t = (ATerm) ATmakeAppl(sym_Prim_2, not_null(o_9), not_null(q_9));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Where_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm y_9 = NULL,z_9 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym_Where_1))
    {
      z_9 = ATgetArgument(y_9, 0);
      {
        ATerm b_10 = NULL;
        t = not_null(z_9);
        {
          t = k_43(t);
          {
            b_10 = t;
            t = (ATerm) ATmakeAppl(sym_Where_1, not_null(b_10));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm i_43 (ATerm), ATerm j_43 (ATerm))
{
  ATerm j_10 = NULL,k_10 = NULL,l_10 = NULL;
  j_10 = t;
  i_10 :
  if(match_cons(j_10, sym_Scope_2))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      {
        ATerm o_10 = NULL;
        t = not_null(k_10);
        {
          ATerm q_10 = NULL;
          t = i_43(t);
          {
            o_10 = t;
            {
              t = not_null(l_10);
              {
                t = j_43(t);
                {
                  q_10 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(o_10), not_null(q_10));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Build_1 (ATerm t, ATerm f_43 (ATerm))
{
  ATerm y_10 = NULL,z_10 = NULL;
  y_10 = t;
  x_10 :
  if(match_cons(y_10, sym_Build_1))
    {
      z_10 = ATgetArgument(y_10, 0);
      {
        ATerm b_11 = NULL;
        t = not_null(z_10);
        {
          t = f_43(t);
          {
            b_11 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(b_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Match_1 (ATerm t, ATerm e_43 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_Match_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm l_11 = NULL;
        t = not_null(j_11);
        {
          t = e_43(t);
          {
            l_11 = t;
            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(l_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Thread_1 (ATerm t, ATerm b_43 (ATerm))
{
  ATerm s_11 = NULL,t_11 = NULL;
  s_11 = t;
  r_11 :
  if(match_cons(s_11, sym_Thread_1))
    {
      t_11 = ATgetArgument(s_11, 0);
      {
        ATerm v_11 = NULL;
        t = not_null(t_11);
        {
          t = b_43(t);
          {
            v_11 = t;
            t = (ATerm) ATmakeAppl(sym_Thread_1, not_null(v_11));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm All_1 (ATerm t, ATerm a_43 (ATerm))
{
  ATerm c_12 = NULL,d_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_All_1))
    {
      d_12 = ATgetArgument(c_12, 0);
      {
        ATerm f_12 = NULL;
        t = not_null(d_12);
        {
          t = a_43(t);
          {
            f_12 = t;
            t = (ATerm) ATmakeAppl(sym_All_1, not_null(f_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Some_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm o_12 = NULL,p_12 = NULL;
  o_12 = t;
  n_12 :
  if(match_cons(o_12, sym_Some_1))
    {
      p_12 = ATgetArgument(o_12, 0);
      {
        ATerm i_4 = t;
        int j_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_12 = NULL;
            t = not_null(p_12);
            {
              t = k_0(t);
              {
                r_12 = t;
                t = (ATerm) ATmakeAppl(sym_Some_1, not_null(r_12));
              }
            }
            LocalPopChoice(j_4);
          }
        else
          {
            t = i_4;
            {
              ATerm u_12 = NULL;
              t = not_null(p_12);
              {
                t = k_0(t);
                {
                  u_12 = t;
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(u_12));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm One_1 (ATerm t, ATerm y_42 (ATerm))
{
  ATerm d_13 = NULL,e_13 = NULL;
  d_13 = t;
  c_13 :
  if(match_cons(d_13, sym_One_1))
    {
      e_13 = ATgetArgument(d_13, 0);
      {
        ATerm g_13 = NULL;
        t = not_null(e_13);
        {
          t = y_42(t);
          {
            g_13 = t;
            t = (ATerm) ATmakeAppl(sym_One_1, not_null(g_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cong_2 (ATerm t, ATerm w_42 (ATerm), ATerm x_42 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  u_13 :
  if(match_cons(v_13, sym_Cong_2))
    {
      w_13 = ATgetArgument(v_13, 0);
      x_13 = ATgetArgument(v_13, 1);
      {
        ATerm a_14 = NULL;
        t = not_null(w_13);
        {
          ATerm c_14 = NULL;
          t = w_42(t);
          {
            a_14 = t;
            {
              t = not_null(x_13);
              {
                t = x_42(t);
                {
                  c_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Cong_2, not_null(a_14), not_null(c_14));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm l_14 = NULL;
  l_14 = t;
  t = SSL_is_int(not_null(l_14));
  return(t);
}
ATerm Path_2 (ATerm t, ATerm u_42 (ATerm), ATerm v_42 (ATerm))
{
  ATerm s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  r_14 :
  if(match_cons(s_14, sym_Path_2))
    {
      t_14 = ATgetArgument(s_14, 0);
      u_14 = ATgetArgument(s_14, 1);
      {
        ATerm x_14 = NULL;
        t = not_null(t_14);
        {
          ATerm a_15 = NULL;
          t = u_42(t);
          {
            x_14 = t;
            {
              t = not_null(u_14);
              {
                t = v_42(t);
                {
                  a_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Path_2, not_null(x_14), not_null(a_15));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm e_42 (ATerm), ATerm f_42 (ATerm))
{
  ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
  j_15 = t;
  i_15 :
  if(match_cons(j_15, sym_Rec_2))
    {
      k_15 = ATgetArgument(j_15, 0);
      l_15 = ATgetArgument(j_15, 1);
      {
        ATerm o_15 = NULL;
        t = not_null(k_15);
        {
          ATerm q_15 = NULL;
          t = e_42(t);
          {
            o_15 = t;
            {
              t = not_null(l_15);
              {
                t = f_42(t);
                {
                  q_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(o_15), not_null(q_15));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm d_42 (ATerm))
{
  ATerm s_16 = NULL,t_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym_SVar_1))
    {
      t_16 = ATgetArgument(s_16, 0);
      {
        ATerm v_16 = NULL;
        t = not_null(t_16);
        {
          t = d_42(t);
          {
            v_16 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(v_16));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Call_2 (ATerm t, ATerm s_42 (ATerm), ATerm t_42 (ATerm))
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
  d_17 = t;
  c_17 :
  if(match_cons(d_17, sym_Call_2))
    {
      e_17 = ATgetArgument(d_17, 0);
      f_17 = ATgetArgument(d_17, 1);
      {
        ATerm i_17 = NULL;
        t = not_null(e_17);
        {
          ATerm k_17 = NULL;
          t = s_42(t);
          {
            i_17 = t;
            {
              t = not_null(f_17);
              {
                t = t_42(t);
                {
                  k_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Call_2, not_null(i_17), not_null(k_17));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LGChoice_2 (ATerm t, ATerm a_42 (ATerm), ATerm b_42 (ATerm))
{
  ATerm t_17 = NULL,w_17 = NULL,x_17 = NULL;
  t_17 = t;
  s_17 :
  if(match_cons(t_17, sym_LGChoice_2))
    {
      w_17 = ATgetArgument(t_17, 0);
      x_17 = ATgetArgument(t_17, 1);
      {
        ATerm f_18 = NULL;
        t = not_null(w_17);
        {
          ATerm i_18 = NULL;
          t = a_42(t);
          {
            f_18 = t;
            {
              t = not_null(x_17);
              {
                t = b_42(t);
                {
                  i_18 = t;
                  t = (ATerm) ATmakeAppl(sym_LGChoice_2, not_null(f_18), not_null(i_18));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm GChoice_2 (ATerm t, ATerm y_41 (ATerm), ATerm z_41 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_GChoice_2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        ATerm x_18 = NULL;
        t = not_null(t_18);
        {
          ATerm z_18 = NULL;
          t = y_41(t);
          {
            x_18 = t;
            {
              t = not_null(u_18);
              {
                t = z_41(t);
                {
                  z_18 = t;
                  t = (ATerm) ATmakeAppl(sym_GChoice_2, not_null(x_18), not_null(z_18));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm LChoice_2 (ATerm t, ATerm w_41 (ATerm), ATerm x_41 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym_LChoice_2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      {
        ATerm n_19 = NULL;
        t = not_null(j_19);
        {
          ATerm p_19 = NULL;
          t = w_41(t);
          {
            n_19 = t;
            {
              t = not_null(k_19);
              {
                t = x_41(t);
                {
                  p_19 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(n_19), not_null(p_19));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Choice_2 (ATerm t, ATerm u_41 (ATerm), ATerm v_41 (ATerm))
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
  y_19 = t;
  x_19 :
  if(match_cons(y_19, sym_Choice_2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      {
        ATerm d_20 = NULL;
        t = not_null(z_19);
        {
          ATerm f_20 = NULL;
          t = u_41(t);
          {
            d_20 = t;
            {
              t = not_null(a_20);
              {
                t = v_41(t);
                {
                  f_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(d_20), not_null(f_20));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Seq_2 (ATerm t, ATerm s_41 (ATerm), ATerm t_41 (ATerm))
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
  o_20 = t;
  n_20 :
  if(match_cons(o_20, sym_Seq_2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      {
        ATerm t_20 = NULL;
        t = not_null(p_20);
        {
          ATerm v_20 = NULL;
          t = s_41(t);
          {
            t_20 = t;
            {
              t = not_null(q_20);
              {
                t = t_41(t);
                {
                  v_20 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(t_20), not_null(v_20));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Test_1 (ATerm t, ATerm q_41 (ATerm))
{
  ATerm g_21 = NULL,h_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym_Test_1))
    {
      h_21 = ATgetArgument(g_21, 0);
      {
        ATerm j_21 = NULL;
        t = not_null(h_21);
        {
          t = q_41(t);
          {
            j_21 = t;
            t = (ATerm) ATmakeAppl(sym_Test_1, not_null(j_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Not_1 (ATerm t, ATerm r_41 (ATerm))
{
  ATerm q_21 = NULL,r_21 = NULL;
  q_21 = t;
  p_21 :
  if(match_cons(q_21, sym_Not_1))
    {
      r_21 = ATgetArgument(q_21, 0);
      {
        ATerm t_21 = NULL;
        t = not_null(r_21);
        {
          t = r_41(t);
          {
            t_21 = t;
            t = (ATerm) ATmakeAppl(sym_Not_1, not_null(t_21));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Fail_0 (ATerm t)
{
  ATerm y_21 = NULL;
  y_21 = t;
  x_21 :
  if(!(match_cons(y_21, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm Id_0 (ATerm t)
{
  ATerm a_22 = NULL;
  a_22 = t;
  z_21 :
  if(!(match_cons(a_22, sym_Id_0)))
    _fail(t);
  return(t);
}
ATerm strategy_expression_0 (ATerm t)
{
  ATerm k_4 = t;
  int l_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Id_0(t);
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
            t = Fail_0(t);
            LocalPopChoice(n_4);
          }
        else
          {
            t = m_4;
            {
              ATerm o_4 = t;
              int p_4 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Not_1(t, strategy_expression_0);
                  LocalPopChoice(p_4);
                }
              else
                {
                  t = o_4;
                  {
                    ATerm q_4 = t;
                    int r_4 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Test_1(t, strategy_expression_0);
                        LocalPopChoice(r_4);
                      }
                    else
                      {
                        t = q_4;
                        {
                          ATerm s_4 = t;
                          int t_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Seq_2(t, strategy_expression_0, strategy_expression_0);
                              LocalPopChoice(t_4);
                            }
                          else
                            {
                              t = s_4;
                              {
                                ATerm u_4 = t;
                                int v_4 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Choice_2(t, strategy_expression_0, strategy_expression_0);
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
                                          t = LChoice_2(t, strategy_expression_0, strategy_expression_0);
                                          LocalPopChoice(x_4);
                                        }
                                      else
                                        {
                                          t = w_4;
                                          {
                                            ATerm c_5 = t;
                                            int d_5 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = GChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                LocalPopChoice(d_5);
                                              }
                                            else
                                              {
                                                t = c_5;
                                                {
                                                  ATerm e_5 = t;
                                                  int f_5 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = LGChoice_2(t, strategy_expression_0, strategy_expression_0);
                                                      LocalPopChoice(f_5);
                                                    }
                                                  else
                                                    {
                                                      t = e_5;
                                                      {
                                                        ATerm g_5 = t;
                                                        int l_5 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            ATerm l_0 (ATerm t)
                                                            {
                                                              ATerm n_0 (ATerm t)
                                                              {
                                                                ATerm m_5 = t;
                                                                int o_5 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = is_string_0(t);
                                                                    LocalPopChoice(o_5);
                                                                  }
                                                                else
                                                                  {
                                                                    t = m_5;
                                                                    t = Mod_2(t, is_string_0, is_string_0);
                                                                  }
                                                                return(t);
                                                              }
                                                              t = SVar_1(t, n_0);
                                                              return(t);
                                                            }
                                                            ATerm m_0 (ATerm t)
                                                            {
                                                              t = list_1(t, strategy_expression_0);
                                                              return(t);
                                                            }
                                                            t = Call_2(t, l_0, m_0);
                                                            LocalPopChoice(l_5);
                                                          }
                                                        else
                                                          {
                                                            t = g_5;
                                                            {
                                                              ATerm q_5 = t;
                                                              int r_5 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = Rec_2(t, is_string_0, strategy_expression_0);
                                                                  LocalPopChoice(r_5);
                                                                }
                                                              else
                                                                {
                                                                  t = q_5;
                                                                  {
                                                                    ATerm s_5 = t;
                                                                    int t_5 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = Path_2(t, is_int_0, strategy_expression_0);
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
                                                                              ATerm o_0 (ATerm t)
                                                                              {
                                                                                t = list_1(t, strategy_expression_0);
                                                                                return(t);
                                                                              }
                                                                              t = Cong_2(t, is_string_0, o_0);
                                                                              LocalPopChoice(v_5);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = u_5;
                                                                              {
                                                                                ATerm w_5 = t;
                                                                                int b_6 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = One_1(t, strategy_expression_0);
                                                                                    LocalPopChoice(b_6);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = w_5;
                                                                                    {
                                                                                      ATerm c_6 = t;
                                                                                      int e_6 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = Some_1(t, strategy_expression_0);
                                                                                          LocalPopChoice(e_6);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = c_6;
                                                                                          {
                                                                                            ATerm g_6 = t;
                                                                                            int h_6 = stack_ptr;
                                                                                            if((PushChoice() == 0))
                                                                                              {
                                                                                                t = All_1(t, strategy_expression_0);
                                                                                                LocalPopChoice(h_6);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = g_6;
                                                                                                {
                                                                                                  ATerm i_6 = t;
                                                                                                  int j_6 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = Thread_1(t, strategy_expression_0);
                                                                                                      LocalPopChoice(j_6);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = i_6;
                                                                                                      {
                                                                                                        ATerm k_6 = t;
                                                                                                        int l_6 = stack_ptr;
                                                                                                        if((PushChoice() == 0))
                                                                                                          {
                                                                                                            t = Match_1(t, term_expression_0);
                                                                                                            LocalPopChoice(l_6);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            t = k_6;
                                                                                                            {
                                                                                                              ATerm p_6 = t;
                                                                                                              int r_6 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = Build_1(t, term_expression_0);
                                                                                                                  LocalPopChoice(r_6);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = p_6;
                                                                                                                  {
                                                                                                                    ATerm s_6 = t;
                                                                                                                    int t_6 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        ATerm p_0 (ATerm t)
                                                                                                                        {
                                                                                                                          t = list_1(t, is_string_0);
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = Scope_2(t, p_0, strategy_expression_0);
                                                                                                                        LocalPopChoice(t_6);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = s_6;
                                                                                                                        {
                                                                                                                          ATerm u_6 = t;
                                                                                                                          int v_6 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = Where_1(t, strategy_expression_0);
                                                                                                                              LocalPopChoice(v_6);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = u_6;
                                                                                                                              {
                                                                                                                                ATerm w_6 = t;
                                                                                                                                int b_7 = stack_ptr;
                                                                                                                                if((PushChoice() == 0))
                                                                                                                                  {
                                                                                                                                    ATerm q_0 (ATerm t)
                                                                                                                                    {
                                                                                                                                      t = list_1(t, term_expression_0);
                                                                                                                                      return(t);
                                                                                                                                    }
                                                                                                                                    t = Prim_2(t, is_string_0, q_0);
                                                                                                                                    LocalPopChoice(b_7);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    t = w_6;
                                                                                                                                    {
                                                                                                                                      ATerm c_7 = t;
                                                                                                                                      int e_7 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          ATerm r_0 (ATerm t)
                                                                                                                                          {
                                                                                                                                            ATerm s_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = SDef_3(t, is_string_0, Nil_0, strategy_expression_0);
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = list_1(t, s_0);
                                                                                                                                            return(t);
                                                                                                                                          }
                                                                                                                                          t = Let_2(t, r_0, strategy_expression_0);
                                                                                                                                          LocalPopChoice(e_7);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = c_7;
                                                                                                                                          {
                                                                                                                                            ATerm t_0 (ATerm t)
                                                                                                                                            {
                                                                                                                                              t = term_g_7;
                                                                                                                                              return(t);
                                                                                                                                            }
                                                                                                                                            t = debug_1(t, t_0);
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
ATerm is_string_0 (ATerm t)
{
  ATerm d_22 = NULL;
  d_22 = t;
  t = SSL_is_string(not_null(d_22));
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm l_42 (ATerm), ATerm m_42 (ATerm))
{
  ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
  k_22 = t;
  j_22 :
  if(match_cons(k_22, sym_VarDec_2))
    {
      l_22 = ATgetArgument(k_22, 0);
      m_22 = ATgetArgument(k_22, 1);
      {
        ATerm p_22 = NULL;
        t = not_null(l_22);
        {
          ATerm r_22 = NULL;
          t = l_42(t);
          {
            p_22 = t;
            {
              t = not_null(m_22);
              {
                t = m_42(t);
                {
                  r_22 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(p_22), not_null(r_22));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mod_2 (ATerm t, ATerm q_40 (ATerm), ATerm r_40 (ATerm))
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym_Mod_2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      {
        ATerm f_23 = NULL;
        t = not_null(b_23);
        {
          ATerm h_23 = NULL;
          t = q_40(t);
          {
            f_23 = t;
            {
              t = not_null(c_23);
              {
                t = r_40(t);
                {
                  h_23 = t;
                  t = (ATerm) ATmakeAppl(sym_Mod_2, not_null(f_23), not_null(h_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SDef_3 (ATerm t, ATerm i_42 (ATerm), ATerm j_42 (ATerm), ATerm k_42 (ATerm))
{
  ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL;
  r_23 = t;
  q_23 :
  if(match_cons(r_23, sym_SDef_3))
    {
      s_23 = ATgetArgument(r_23, 0);
      t_23 = ATgetArgument(r_23, 1);
      u_23 = ATgetArgument(r_23, 2);
      {
        ATerm y_23 = NULL;
        t = not_null(s_23);
        {
          ATerm a_24 = NULL;
          t = i_42(t);
          {
            y_23 = t;
            {
              t = not_null(t_23);
              {
                ATerm c_24 = NULL;
                t = j_42(t);
                {
                  a_24 = t;
                  {
                    t = not_null(u_23);
                    {
                      t = k_42(t);
                      {
                        c_24 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(y_23), not_null(a_24), not_null(c_24));
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
    _fail(t);
  return(t);
}
ATerm strategy_definition_0 (ATerm t)
{
  ATerm h_7 = t;
  int i_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_0 (ATerm t)
      {
        ATerm j_7 = t;
        int k_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = is_string_0(t);
            LocalPopChoice(k_7);
          }
        else
          {
            t = j_7;
            t = Mod_2(t, is_string_0, is_string_0);
          }
        return(t);
      }
      ATerm v_0 (ATerm t)
      {
        ATerm w_0 (ATerm t)
        {
          t = VarDec_2(t, is_string_0, _id);
          return(t);
        }
        t = list_1(t, w_0);
        return(t);
      }
      t = SDef_3(t, u_0, v_0, strategy_expression_0);
      LocalPopChoice(i_7);
    }
  else
    {
      t = h_7;
      {
        ATerm x_0 (ATerm t)
        {
          t = term_l_7;
          return(t);
        }
        t = debug_1(t, x_0);
      }
    }
  return(t);
}
ATerm list_1 (ATerm t, ATerm y_57 (ATerm))
{
  ATerm i_24 (ATerm t)
  {
    ATerm p_7 = t;
    int r_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_7);
      }
    else
      {
        t = p_7;
        t = Cons_2(t, y_57, i_24);
      }
    return(t);
  }
  t = i_24(t);
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm y_40 (ATerm))
{
  ATerm m_24 = NULL,n_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym_Strategies_1))
    {
      n_24 = ATgetArgument(m_24, 0);
      {
        ATerm p_24 = NULL;
        t = not_null(n_24);
        {
          t = y_40(t);
          {
            p_24 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(p_24));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Specification_1 (ATerm t, ATerm a_41 (ATerm))
{
  ATerm w_24 = NULL,x_24 = NULL;
  w_24 = t;
  v_24 :
  if(match_cons(w_24, sym_Specification_1))
    {
      x_24 = ATgetArgument(w_24, 0);
      {
        ATerm z_24 = NULL;
        t = not_null(x_24);
        {
          t = a_41(t);
          {
            z_24 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(z_24));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm stratego_specification_0 (ATerm t)
{
  ATerm s_7 = t;
  int t_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          ATerm a_1 (ATerm t)
          {
            ATerm b_1 (ATerm t)
            {
              t = list_1(t, strategy_definition_0);
              return(t);
            }
            t = Strategies_1(t, b_1);
            return(t);
          }
          t = Cons_2(t, a_1, Nil_0);
          return(t);
        }
        t = Cons_2(t, _id, z_0);
        return(t);
      }
      t = Specification_1(t, y_0);
      LocalPopChoice(t_7);
    }
  else
    {
      t = s_7;
      {
        ATerm c_1 (ATerm t)
        {
          t = term_u_7;
          return(t);
        }
        t = debug_1(t, c_1);
      }
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_33 (ATerm), ATerm b_33 (ATerm))
{
  ATerm h_25 = NULL,i_25 = NULL,j_25 = NULL;
  h_25 = t;
  g_25 :
  if(match_cons(h_25, sym__2))
    {
      i_25 = ATgetArgument(h_25, 0);
      j_25 = ATgetArgument(h_25, 1);
      {
        ATerm m_25 = NULL;
        t = not_null(i_25);
        {
          ATerm o_25 = NULL;
          t = a_33(t);
          {
            m_25 = t;
            {
              t = not_null(j_25);
              {
                t = b_33(t);
                {
                  o_25 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_25), not_null(o_25));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_25 = NULL;
  ATerm v_7;
  v_7 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm w_25 = NULL,x_25 = NULL;
      w_25 = t;
      u_25 :
      if(match_cons(w_25, sym_Program_1))
        {
          x_25 = ATgetArgument(w_25, 0);
          if(((v_25 != NULL) && (v_25 != x_25)))
            _fail(x_25);
          else
            v_25 = x_25;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, d_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(CheckATermList(term_c_8), not_null(v_25)), term_z_7));
      {
        t = printnl_0(t);
        {
          t = term_d_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = v_7;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_h_8;
  {
    t = printnl_0(t);
    {
      t = term_d_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm i_8 = t;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm g_26 = NULL;
            g_26 = t;
            z_25 :
            if(!(match_cons(g_26, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_1);
          PopChoice();
          _fail(t);
        }
      else
        t = i_8;
      return(t);
    }
    t = _2(t, f_1, _id);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_26 = NULL,i_26 = NULL;
          h_26 = t;
          b_26 :
          if(match_cons(h_26, sym_Runtime_1))
            {
              i_26 = ATgetArgument(h_26, 0);
              if(((f_26 != NULL) && (f_26 != i_26)))
                _fail(i_26);
              else
                f_26 = i_26;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_1);
        return(t);
      }
      t = _2(t, h_1, _id);
      {
        ATerm j_1 (ATerm t)
        {
          ATerm k_1 (ATerm t)
          {
            ATerm j_26 = NULL,k_26 = NULL;
            j_26 = t;
            d_26 :
            if(match_cons(j_26, sym_Program_1))
              {
                k_26 = ATgetArgument(j_26, 0);
                if(((e_26 != NULL) && (e_26 != k_26)))
                  _fail(k_26);
                else
                  e_26 = k_26;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, k_1);
          return(t);
        }
        t = _2(t, j_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_p_8), not_null(f_26)), term_j_8), not_null(e_26)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, e_1);
  {
    t = term_q_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_26 = NULL,q_26 = NULL,r_26 = NULL;
  p_26 = t;
  o_26 :
  if(match_cons(p_26, sym__2))
    {
      q_26 = ATgetArgument(p_26, 0);
      r_26 = ATgetArgument(p_26, 1);
      t = SSL_WriteToTextFile(not_null(q_26), not_null(r_26));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      t = SSL_WriteToBinaryFile(not_null(y_26), not_null(z_26));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_27 = NULL;
  ATerm r_8;
  r_8 = t;
  {
    ATerm l_1 (ATerm t)
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_1 (ATerm t)
          {
            ATerm i_27 = NULL,j_27 = NULL;
            i_27 = t;
            e_27 :
            if(match_cons(i_27, sym_Output_1))
              {
                j_27 = ATgetArgument(i_27, 0);
                if(((h_27 != NULL) && (h_27 != j_27)))
                  _fail(j_27);
                else
                  h_27 = j_27;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, m_1);
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
          {
            ATerm k_27 = NULL;
            t = term_x_8;
            {
              k_27 = t;
              if(((h_27 != NULL) && (h_27 != k_27)))
                _fail(k_27);
              else
                h_27 = k_27;
            }
          }
        }
      return(t);
    }
    t = _2(t, l_1, _id);
  }
  t = r_8;
  {
    ATerm n_1 (ATerm t)
    {
      ATerm o_1 (ATerm t)
      {
        t = not_null(h_27);
        return(t);
      }
      t = split_2(t, o_1, _id);
      return(t);
    }
    t = _2(t, _id, n_1);
    {
      ATerm z_8 = t;
      int a_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm l_27 = NULL;
              l_27 = t;
              g_27 :
              if(!(match_cons(l_27, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, q_1);
            return(t);
          }
          t = _2(t, p_1, WriteToBinaryFile_0);
          LocalPopChoice(a_9);
        }
      else
        {
          t = z_8;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_48 (ATerm))
{
  ATerm r_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  ATerm b_9;
  b_9 = t;
  t = dtime_0(t);
  t = b_9;
  {
    t = t_48(t);
    {
      ATerm e_9;
      e_9 = t;
      {
        ATerm s_27 = NULL;
        t = dtime_0(t);
        {
          s_27 = t;
          if(((r_27 != NULL) && (r_27 != s_27)))
            _fail(s_27);
          else
            r_27 = s_27;
        }
      }
      t = e_9;
      {
        t_27 = t;
        q_27 :
        if(match_cons(t_27, sym__2))
          {
            u_27 = ATgetArgument(t_27, 0);
            v_27 = ATgetArgument(t_27, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(u_27)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(r_27))), not_null(v_27));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm b_28 = NULL;
  b_28 = t;
  t = SSL_ReadFromFile(not_null(b_28));
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_51 (ATerm), ATerm l_51 (ATerm))
{
  ATerm g_28 = NULL,i_28 = NULL;
  ATerm f_9;
  f_9 = t;
  {
    ATerm h_28 = NULL;
    t = k_51(t);
    {
      h_28 = t;
      if(((g_28 != NULL) && (g_28 != h_28)))
        _fail(h_28);
      else
        g_28 = h_28;
    }
  }
  t = f_9;
  {
    ATerm j_28 = NULL;
    t = l_51(t);
    {
      j_28 = t;
      if(((i_28 != NULL) && (i_28 != j_28)))
        _fail(j_28);
      else
        i_28 = j_28;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_28), not_null(i_28));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm p_28 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm h_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_1 (ATerm t)
        {
          ATerm q_28 = NULL,r_28 = NULL;
          q_28 = t;
          n_28 :
          if(match_cons(q_28, sym_Input_1))
            {
              r_28 = ATgetArgument(q_28, 0);
              if(((p_28 != NULL) && (p_28 != r_28)))
                _fail(r_28);
              else
                p_28 = r_28;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, r_1);
        LocalPopChoice(m_9);
      }
    else
      {
        t = h_9;
        {
          ATerm s_28 = NULL;
          t = term_n_9;
          {
            s_28 = t;
            if(((p_28 != NULL) && (p_28 != s_28)))
              _fail(s_28);
            else
              p_28 = s_28;
          }
        }
      }
  }
  t = g_9;
  {
    ATerm s_1 (ATerm t)
    {
      t = not_null(p_28);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm w_28 = NULL;
  w_28 = t;
  v_28 :
  if(!(match_cons(w_28, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_48 (ATerm))
{
  ATerm t_1 (ATerm t)
  {
    ATerm p_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = p_9;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_1);
  t = s_48(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_28 = NULL;
  y_28 = t;
  t = SSL_table_create(not_null(y_28));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_29 = NULL;
  c_29 = t;
  {
    ATerm u_9;
    u_9 = t;
    {
      t = term_v_9;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_9, term_w_9, not_null(c_29));
          t = table_put_0(t);
        }
      }
    }
    t = u_9;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL,o_29 = NULL;
  k_29 = t;
  i_29 :
  if(match_string(k_29, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(k_29) == AT_LIST) && ((ATermList) k_29 != ATempty)))
        {
          l_29 = ATgetFirst((ATermList) k_29);
          m_29 = (ATerm) ATgetNext((ATermList) k_29);
          j_29 :
          if(((ATgetType(m_29) == AT_LIST) && ((ATermList) m_29 != ATempty)))
            {
              n_29 = ATgetFirst((ATermList) m_29);
              o_29 = (ATerm) ATgetNext((ATermList) m_29);
              {
                ATerm s_29 = NULL;
                ATerm a_10;
                a_10 = t;
                {
                  t = not_null(l_29);
                  t = h_0(t);
                }
                t = a_10;
                {
                  ATerm t_29 = NULL;
                  t = not_null(n_29);
                  {
                    t = i_0(t);
                    {
                      t_29 = t;
                      if(((s_29 != NULL) && (s_29 != t_29)))
                        _fail(t_29);
                      else
                        s_29 = t_29;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_29)), not_null(s_29));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm i_30 = NULL;
        i_30 = t;
        x_29 :
        if(!(match_string(i_30, "-S")))
          {
            if(!(match_string(i_30, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_e_10;
        return(t);
      }
      ATerm w_1 (ATerm t)
      {
        t = term_f_10;
        return(t);
      }
      t = Option_3(t, u_1, v_1, w_1);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm g_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              ATerm j_30 = NULL;
              j_30 = t;
              y_29 :
              if(!(match_string(j_30, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_m_10;
              return(t);
            }
            ATerm z_1 (ATerm t)
            {
              t = term_n_10;
              return(t);
            }
            t = Option_3(t, x_1, y_1, z_1);
            LocalPopChoice(h_10);
          }
        else
          {
            t = g_10;
            {
              ATerm p_10 = t;
              int r_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_2 (ATerm t)
                  {
                    ATerm k_30 = NULL;
                    k_30 = t;
                    z_29 :
                    if(!(match_string(k_30, "-v")))
                      {
                        if(!(match_string(k_30, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_2 (ATerm t)
                  {
                    t = term_s_10;
                    return(t);
                  }
                  ATerm c_2 (ATerm t)
                  {
                    t = term_t_10;
                    return(t);
                  }
                  t = Option_3(t, a_2, b_2, c_2);
                  LocalPopChoice(r_10);
                }
              else
                {
                  t = p_10;
                  {
                    ATerm u_10 = t;
                    int v_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_2 (ATerm t)
                        {
                          ATerm l_30 = NULL;
                          l_30 = t;
                          a_30 :
                          if(!(match_string(l_30, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm e_2 (ATerm t)
                        {
                          ATerm m_30 = NULL;
                          ATerm n_30 = NULL;
                          n_30 = t;
                          if(((m_30 != NULL) && (m_30 != n_30)))
                            _fail(n_30);
                          else
                            m_30 = n_30;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(m_30));
                          return(t);
                        }
                        ATerm f_2 (ATerm t)
                        {
                          t = term_w_10;
                          return(t);
                        }
                        t = ArgOption_3(t, d_2, e_2, f_2);
                        LocalPopChoice(v_10);
                      }
                    else
                      {
                        t = u_10;
                        {
                          ATerm a_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_2 (ATerm t)
                              {
                                ATerm o_30 = NULL;
                                o_30 = t;
                                c_30 :
                                if(!(match_string(o_30, "-i")))
                                  {
                                    if(!(match_string(o_30, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm h_2 (ATerm t)
                              {
                                ATerm p_30 = NULL;
                                ATerm q_30 = NULL;
                                q_30 = t;
                                if(((p_30 != NULL) && (p_30 != q_30)))
                                  _fail(q_30);
                                else
                                  p_30 = q_30;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(p_30));
                                return(t);
                              }
                              ATerm i_2 (ATerm t)
                              {
                                t = term_d_11;
                                return(t);
                              }
                              t = ArgOption_3(t, g_2, h_2, i_2);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = a_11;
                              {
                                ATerm e_11 = t;
                                int f_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm j_2 (ATerm t)
                                    {
                                      ATerm r_30 = NULL;
                                      r_30 = t;
                                      e_30 :
                                      if(!(match_string(r_30, "-o")))
                                        {
                                          if(!(match_string(r_30, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm s_30 = NULL;
                                      ATerm t_30 = NULL;
                                      t_30 = t;
                                      if(((s_30 != NULL) && (s_30 != t_30)))
                                        _fail(t_30);
                                      else
                                        s_30 = t_30;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_30));
                                      return(t);
                                    }
                                    ATerm l_2 (ATerm t)
                                    {
                                      t = term_g_11;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, j_2, k_2, l_2);
                                    LocalPopChoice(f_11);
                                  }
                                else
                                  {
                                    t = e_11;
                                    {
                                      ATerm k_11 = t;
                                      int m_11 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm m_2 (ATerm t)
                                          {
                                            ATerm u_30 = NULL;
                                            u_30 = t;
                                            g_30 :
                                            if(!(match_string(u_30, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm n_2 (ATerm t)
                                          {
                                            t = term_n_11;
                                            return(t);
                                          }
                                          ATerm o_2 (ATerm t)
                                          {
                                            t = term_o_11;
                                            return(t);
                                          }
                                          t = Option_3(t, m_2, n_2, o_2);
                                          LocalPopChoice(m_11);
                                        }
                                      else
                                        {
                                          t = k_11;
                                          {
                                            ATerm p_2 (ATerm t)
                                            {
                                              ATerm v_30 = NULL;
                                              v_30 = t;
                                              h_30 :
                                              if(!(match_string(v_30, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm q_2 (ATerm t)
                                            {
                                              t = term_p_11;
                                              return(t);
                                            }
                                            ATerm r_2 (ATerm t)
                                            {
                                              t = term_q_11;
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  t = SSL_table_destroy(not_null(a_31));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  t = SSL_exit(not_null(e_31));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = SSL_implode_string(not_null(i_31));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm k_58 (ATerm))
{
  ATerm l_31 (ATerm t)
  {
    ATerm u_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_31);
        LocalPopChoice(w_11);
      }
    else
      {
        t = u_11;
        {
          t = Nil_0(t);
          t = k_58(t);
        }
      }
    return(t);
  }
  t = l_31(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      {
        ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL;
        o_31 = t;
        n_31 :
        if(((ATgetType(o_31) == AT_LIST) && ((ATermList) o_31 != ATempty)))
          {
            p_31 = ATgetFirst((ATermList) o_31);
            q_31 = (ATerm) ATgetNext((ATermList) o_31);
            {
              t = not_null(p_31);
              {
                ATerm s_2 (ATerm t)
                {
                  t = not_null(q_31);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_2);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_31 = NULL;
  y_31 = t;
  t = SSL_explode_string(not_null(y_31));
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
ATerm long_description_1 (ATerm t, ATerm z_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_57 (ATerm))
{
  ATerm b_32 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = Cons_2(t, w_57, b_32);
      }
    return(t);
  }
  t = b_32(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  k_32 = t;
  h_32 :
  if(((ATgetType(k_32) == AT_LIST) && ((ATermList) k_32 != ATempty)))
    {
      i_32 = ATgetFirst((ATermList) k_32);
      j_32 = (ATerm) ATgetNext((ATermList) k_32);
      {
        t = not_null(j_32);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm n_32 = NULL;
            ATerm o_32 = NULL;
            t = g_0(t);
            {
              o_32 = t;
              if(((n_32 != NULL) && (n_32 != o_32)))
                _fail(o_32);
              else
                n_32 = o_32;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(n_32)), not_null(i_32));
            return(t);
          }
          t = reverse_1(t, t_2);
        }
      }
    }
  else
    {
      if(((ATermList) k_32 == ATempty))
        {
          {
            t = term_e_12;
            t = g_0(t);
          }
        }
      else
        _fail(t);
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
  t = reverse_1(t, u_2);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm j_34 (ATerm))
{
  ATerm v_32 = NULL,w_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_Program_1))
    {
      w_32 = ATgetArgument(v_32, 0);
      {
        ATerm y_32 = NULL;
        t = not_null(w_32);
        {
          t = j_34(t);
          {
            y_32 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm i_33 = NULL;
  ATerm v_2 (ATerm t)
  {
    ATerm w_2 (ATerm t)
    {
      ATerm j_33 = NULL;
      j_33 = t;
      if(((i_33 != NULL) && (i_33 != j_33)))
        _fail(j_33);
      else
        i_33 = j_33;
      return(t);
    }
    t = Program_1(t, w_2);
    return(t);
  }
  t = option_defined_1(t, v_2);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm k_33 = NULL;
      ATerm l_33 = NULL;
      t = term_e_12;
      {
        ATerm y_2 (ATerm t)
        {
          t = not_null(i_33);
          return(t);
        }
        t = short_description_1(t, y_2);
        {
          t = concat_strings_0(t);
          {
            l_33 = t;
            if(((k_33 != NULL) && (k_33 != l_33)))
              _fail(l_33);
            else
              k_33 = l_33;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATempty, not_null(k_33)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, x_2);
    {
      t = term_i_12;
      {
        t = printnl_0(t);
        {
          t = term_l_12;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_2 (ATerm t)
                {
                  ATerm m_33 = NULL;
                  m_33 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_33)), term_m_12));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_2);
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm o_33 = NULL;
                    ATerm p_33 = NULL;
                    t = term_e_12;
                    {
                      ATerm b_3 (ATerm t)
                      {
                        t = not_null(i_33);
                        return(t);
                      }
                      t = long_description_1(t, b_3);
                      {
                        t = concat_strings_0(t);
                        {
                          p_33 = t;
                          if(((o_33 != NULL) && (o_33 != p_33)))
                            _fail(p_33);
                          else
                            o_33 = p_33;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_33)), term_q_12));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_3);
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
ATerm printnl_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm s_12;
        s_12 = t;
        t = SSL_printnl(not_null(x_33), not_null(y_33));
        t = s_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm k_34 (ATerm))
{
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym_Undefined_1))
    {
      g_34 = ATgetArgument(f_34, 0);
      {
        ATerm i_34 = NULL;
        t = not_null(g_34);
        {
          t = k_34(t);
          {
            i_34 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_34));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm o_34 (ATerm t)
  {
    ATerm t_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_58, _id);
        LocalPopChoice(v_12);
      }
    else
      {
        t = t_12;
        t = Cons_2(t, _id, o_34);
      }
    return(t);
  }
  t = o_34(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_47 (ATerm))
{
  t = fetch_1(t, x_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  p_34 :
  if(!(match_cons(q_34, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm v_64 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_64(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym__2))
    {
      u_34 = ATgetArgument(t_34, 0);
      v_34 = ATgetArgument(t_34, 1);
      t = SSL_table_get(not_null(u_34), not_null(v_34));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  c_35 = t;
  b_35 :
  if(match_cons(c_35, sym__3))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      f_35 = ATgetArgument(c_35, 2);
      {
        ATerm y_12;
        y_12 = t;
        {
          ATerm j_35 = NULL;
          ATerm k_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_35), not_null(e_35));
          {
            ATerm z_12 = t;
            int a_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(a_13);
              }
            else
              {
                t = z_12;
                t = (ATerm) ATempty;
              }
            {
              k_35 = t;
              if(((j_35 != NULL) && (j_35 != k_35)))
                _fail(k_35);
              else
                j_35 = k_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_35), not_null(e_35), (ATerm) ATinsert(CheckATermList(not_null(j_35)), not_null(f_35)));
            t = table_put_0(t);
          }
        }
        t = y_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_47 (ATerm))
{
  ATerm o_35 = NULL;
  ATerm p_35 = NULL;
  t = term_e_12;
  {
    t = d_47(t);
    {
      p_35 = t;
      if(((o_35 != NULL) && (o_35 != p_35)))
        _fail(p_35);
      else
        o_35 = p_35;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_j_12, term_k_12, not_null(o_35));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  u_35 :
  if(match_string(v_35, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(v_35) == AT_LIST) && ((ATermList) v_35 != ATempty)))
        {
          w_35 = ATgetFirst((ATermList) v_35);
          x_35 = (ATerm) ATgetNext((ATermList) v_35);
          {
            ATerm a_36 = NULL;
            ATerm b_13;
            b_13 = t;
            {
              t = not_null(w_35);
              t = a_0(t);
            }
            t = b_13;
            {
              ATerm b_36 = NULL;
              t = term_e_12;
              {
                t = d_0(t);
                {
                  b_36 = t;
                  if(((a_36 != NULL) && (a_36 != b_36)))
                    _fail(b_36);
                  else
                    a_36 = b_36;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_35)), not_null(a_36));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm g_36 = NULL;
    g_36 = t;
    f_36 :
    if(!(match_string(g_36, "--help")))
      {
        if(!(match_string(g_36, "-h")))
          {
            if(!(match_string(g_36, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_f_13;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_h_13;
    return(t);
  }
  t = Option_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  i_36 :
  if(((ATgetType(j_36) == AT_LIST) && ((ATermList) j_36 != ATempty)))
    {
      k_36 = ATgetFirst((ATermList) j_36);
      l_36 = (ATerm) ATgetNext((ATermList) j_36);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_36)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_36)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  s_36 :
  if(((ATgetType(t_36) == AT_LIST) && ((ATermList) t_36 != ATempty)))
    {
      u_36 = ATgetFirst((ATermList) t_36);
      v_36 = (ATerm) ATgetNext((ATermList) t_36);
      {
        ATerm y_36 = NULL;
        t = not_null(u_36);
        {
          ATerm a_37 = NULL;
          t = n_43(t);
          {
            y_36 = t;
            {
              t = not_null(v_36);
              {
                t = o_43(t);
                {
                  a_37 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), not_null(y_36));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm g_37 = NULL;
  g_37 = t;
  f_37 :
  if(((ATermList) g_37 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_47 (ATerm))
{
  ATerm i_13;
  i_13 = t;
  {
    ATerm f_3 (ATerm t)
    {
      t = term_j_13;
      t = b_47(t);
      return(t);
    }
    t = try_1(t, f_3);
  }
  t = i_13;
  {
    ATerm g_3 (ATerm t)
    {
      ATerm i_37 = NULL;
      i_37 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_37));
      return(t);
    }
    ATerm h_3 (ATerm t)
    {
      ATerm k_13 = t;
      int l_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_13 = t;
          int n_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_13);
            }
          else
            {
              t = m_13;
              {
                t = b_47(t);
                t = Cons_2(t, _id, h_3);
              }
            }
          LocalPopChoice(l_13);
        }
      else
        {
          t = k_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_3, h_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
  ATerm o_13;
  o_13 = t;
  {
    ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL;
    r_37 = t;
    n_37 :
    if(match_cons(r_37, sym__3))
      {
        s_37 = ATgetArgument(r_37, 0);
        t_37 = ATgetArgument(r_37, 1);
        u_37 = ATgetArgument(r_37, 2);
        {
          if(((o_37 != NULL) && (o_37 != s_37)))
            _fail(s_37);
          else
            o_37 = s_37;
          {
            if(((p_37 != NULL) && (p_37 != t_37)))
              _fail(t_37);
            else
              p_37 = t_37;
            {
              if(((q_37 != NULL) && (q_37 != u_37)))
                _fail(u_37);
              else
                q_37 = u_37;
              t = SSL_table_put(not_null(o_37), not_null(p_37), not_null(q_37));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = o_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_47 (ATerm))
{
  ATerm x_37 = NULL;
  ATerm p_13;
  p_13 = t;
  {
    t = term_q_13;
    t = table_put_0(t);
  }
  t = p_13;
  {
    ATerm i_3 (ATerm t)
    {
      ATerm r_13 = t;
      int s_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_47(t);
          LocalPopChoice(s_13);
        }
      else
        {
          t = r_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, i_3);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm t_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_q_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(y_13);
          }
        else
          {
            t = t_13;
            {
              ATerm k_3 (ATerm t)
              {
                ATerm l_3 (ATerm t)
                {
                  ATerm y_37 = NULL;
                  y_37 = t;
                  if(((x_37 != NULL) && (x_37 != y_37)))
                    _fail(y_37);
                  else
                    x_37 = y_37;
                  return(t);
                }
                t = Undefined_1(t, l_3);
                return(t);
              }
              t = option_defined_1(t, k_3);
              {
                ATerm z_13;
                z_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_3, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_b_14));
                  t = printnl_0(t);
                }
                t = z_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_3);
      {
        ATerm d_14;
        d_14 = t;
        {
          t = term_j_12;
          t = table_destroy_0(t);
        }
        t = d_14;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_48 (ATerm), ATerm i_48 (ATerm), ATerm j_48 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_48(t);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, m_3);
  {
    t = store_options_0(t);
    {
      ATerm g_14 = t;
      int h_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, j_48);
          LocalPopChoice(h_14);
        }
      else
        {
          t = g_14;
          {
            ATerm i_14 = t;
            int j_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, h_48);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(j_14);
              }
            else
              {
                t = i_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_48 (ATerm), ATerm d_48 (ATerm))
{
  t = iowrap_3(t, c_48, d_48, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_47 (ATerm))
{
  ATerm n_3 (ATerm t)
  {
    t = _2(t, _id, z_47);
    return(t);
  }
  t = iowrap_2(t, n_3, _fail);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, stratego_specification_0);
  return(t);
}
