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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
ATerm term_g_16;
ATerm term_v_15;
ATerm term_k_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_v_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_d_14;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_j_13;
ATerm term_e_13;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_o_11;
ATerm term_g_11;
ATerm term_z_10;
ATerm term_p_10;
ATerm term_l_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
void init_constant_terms (void)
{
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATinsert(ATempty, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATinsert(ATempty, term_q_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_t_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATinsert(ATempty, term_c_10);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATinsert(ATempty, term_f_14);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_l_9, term_g_14);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_l_14, term_m_14);
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, (ATerm) ATempty);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm Hd_0 (ATerm);
ATerm spaste_1 (ATerm, ATerm w_66 (ATerm));
ATerm Rec_2 (ATerm, ATerm l_43 (ATerm), ATerm m_43 (ATerm));
ATerm SDef_3 (ATerm, ATerm p_43 (ATerm), ATerm q_43 (ATerm), ATerm r_43 (ATerm));
ATerm Let_2 (ATerm, ATerm n_43 (ATerm), ATerm o_43 (ATerm));
ATerm sboundin_3 (ATerm, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm SVar_1 (ATerm, ATerm k_43 (ATerm));
ATerm srename_0 (ATerm);
ATerm tpaste_1 (ATerm, ATerm s_66 (ATerm));
ATerm DynamicRules_1 (ATerm, ATerm e_42 (ATerm));
ATerm Scope_2 (ATerm, ATerm p_44 (ATerm), ATerm q_44 (ATerm));
ATerm tboundin_3 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm));
ATerm Bind4_0 (ATerm);
ATerm Add1_0 (ATerm);
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm b_55 (ATerm));
ATerm crush_3 (ATerm, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm m_50 (ATerm), ATerm n_50 (ATerm));
ATerm for_3 (ATerm, ATerm p_50 (ATerm), ATerm q_50 (ATerm), ATerm r_50 (ATerm));
ATerm HdMember_1 (ATerm, ATerm b_56 (ATerm));
ATerm diff_0 (ATerm);
ATerm free_vars_3 (ATerm, ATerm x_51 (ATerm), ATerm y_51 (ATerm), ATerm z_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm tvars_0 (ATerm);
ATerm Bind0_0 (ATerm);
ATerm Var_1 (ATerm, ATerm r_42 (ATerm));
ATerm DistBinding_2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)));
ATerm conc_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm));
ATerm zip_1 (ATerm, ATerm f_60 (ATerm));
ATerm new_0 (ATerm);
ATerm RnBinding_2 (ATerm, ATerm w_53 (ATerm), ATerm x_53 (ATerm, ATerm (ATerm)));
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm RnVar_1 (ATerm, ATerm k_53 (ATerm, ATerm (ATerm)));
ATerm all_dist_1 (ATerm, ATerm s_52 (ATerm));
ATerm env_alltd_1 (ATerm, ATerm x_52 (ATerm));
ATerm rename_4 (ATerm, ATerm y_53 (ATerm, ATerm (ATerm)), ATerm z_53 (ATerm), ATerm a_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_54 (ATerm, ATerm (ATerm)));
ATerm trename_0 (ATerm);
ATerm strename_0 (ATerm);
ATerm _2 (ATerm, ATerm h_34 (ATerm), ATerm i_34 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm t_49 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm s_49 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_58 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_46 (ATerm));
ATerm map_1 (ATerm, ATerm i_58 (ATerm));
ATerm reverse_1 (ATerm, ATerm g_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_46 (ATerm));
ATerm Program_1 (ATerm, ATerm x_39 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm y_39 (ATerm));
ATerm fetch_1 (ATerm, ATerm q_58 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_62 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_46 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_44 (ATerm), ATerm v_44 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_46 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_46 (ATerm));
ATerm iowrap_3 (ATerm, ATerm h_49 (ATerm), ATerm i_49 (ATerm), ATerm j_49 (ATerm));
ATerm iowrap_2 (ATerm, ATerm c_49 (ATerm), ATerm d_49 (ATerm));
ATerm iowrap_1 (ATerm, ATerm z_48 (ATerm));
ATerm rename_vars_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Hd_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL;
  v_1 = t;
  u_1 :
  if(((ATgetType(v_1) == AT_LIST) && ((ATermList) v_1 != ATempty)))
    {
      w_1 = ATgetFirst((ATermList) v_1);
      x_1 = (ATerm) ATgetNext((ATermList) v_1);
      t = not_null(w_1);
    }
  else
    _fail(t);
  return(t);
}
ATerm spaste_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm s_5 = t;
  int t_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_0 (ATerm t)
      {
        t = split_2(t, _id, w_66);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL,m_2 = NULL;
            h_2 = t;
            c_2 :
            if(match_cons(h_2, sym__2))
              {
                i_2 = ATgetArgument(h_2, 0);
                m_2 = ATgetArgument(h_2, 1);
                d_2 :
                if(match_cons(i_2, sym_SDef_3))
                  {
                    j_2 = ATgetArgument(i_2, 0);
                    k_2 = ATgetArgument(i_2, 1);
                    l_2 = ATgetArgument(i_2, 2);
                    t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(m_2), not_null(k_2), not_null(l_2));
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = zip_1(t, c_0);
        }
        return(t);
      }
      t = Let_2(t, b_0, _id);
      LocalPopChoice(t_5);
    }
  else
    {
      t = s_5;
      {
        ATerm u_5 = t;
        int y_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_0 (ATerm t)
            {
              t = split_2(t, _id, w_66);
              {
                ATerm k_0 (ATerm t)
                {
                  ATerm q_2 = NULL,r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL;
                  q_2 = t;
                  f_2 :
                  if(match_cons(q_2, sym__2))
                    {
                      r_2 = ATgetArgument(q_2, 0);
                      u_2 = ATgetArgument(q_2, 1);
                      g_2 :
                      if(match_cons(r_2, sym_VarDec_2))
                        {
                          s_2 = ATgetArgument(r_2, 0);
                          t_2 = ATgetArgument(r_2, 1);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(u_2), not_null(t_2));
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = zip_1(t, k_0);
              }
              return(t);
            }
            t = SDef_3(t, _id, e_0, _id);
            LocalPopChoice(y_5);
          }
        else
          {
            t = u_5;
            {
              ATerm l_0 (ATerm t)
              {
                t = w_66(t);
                t = Hd_0(t);
                return(t);
              }
              t = Rec_2(t, l_0, _id);
            }
          }
      }
    }
  return(t);
}
ATerm Rec_2 (ATerm t, ATerm l_43 (ATerm), ATerm m_43 (ATerm))
{
  ATerm e_3 = NULL,f_3 = NULL,g_3 = NULL;
  e_3 = t;
  d_3 :
  if(match_cons(e_3, sym_Rec_2))
    {
      f_3 = ATgetArgument(e_3, 0);
      g_3 = ATgetArgument(e_3, 1);
      {
        ATerm j_3 = NULL;
        t = not_null(f_3);
        {
          ATerm l_3 = NULL;
          t = l_43(t);
          {
            j_3 = t;
            {
              t = not_null(g_3);
              {
                t = m_43(t);
                {
                  l_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(j_3), not_null(l_3));
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
ATerm SDef_3 (ATerm t, ATerm p_43 (ATerm), ATerm q_43 (ATerm), ATerm r_43 (ATerm))
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  v_3 = t;
  u_3 :
  if(match_cons(v_3, sym_SDef_3))
    {
      w_3 = ATgetArgument(v_3, 0);
      x_3 = ATgetArgument(v_3, 1);
      y_3 = ATgetArgument(v_3, 2);
      {
        ATerm c_4 = NULL;
        t = not_null(w_3);
        {
          ATerm e_4 = NULL;
          t = p_43(t);
          {
            c_4 = t;
            {
              t = not_null(x_3);
              {
                ATerm g_4 = NULL;
                t = q_43(t);
                {
                  e_4 = t;
                  {
                    t = not_null(y_3);
                    {
                      t = r_43(t);
                      {
                        g_4 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(c_4), not_null(e_4), not_null(g_4));
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
ATerm Let_2 (ATerm t, ATerm n_43 (ATerm), ATerm o_43 (ATerm))
{
  ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
  q_4 = t;
  p_4 :
  if(match_cons(q_4, sym_Let_2))
    {
      r_4 = ATgetArgument(q_4, 0);
      s_4 = ATgetArgument(q_4, 1);
      {
        ATerm v_4 = NULL;
        t = not_null(r_4);
        {
          ATerm x_4 = NULL;
          t = n_43(t);
          {
            v_4 = t;
            {
              t = not_null(s_4);
              {
                t = o_43(t);
                {
                  x_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(v_4), not_null(x_4));
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
ATerm sboundin_3 (ATerm t, ATerm x_66 (ATerm), ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm z_5 = t;
  int a_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, x_66, x_66);
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
            t = SDef_3(t, z_66, z_66, x_66);
            LocalPopChoice(c_6);
          }
        else
          {
            t = b_6;
            t = Rec_2(t, z_66, x_66);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
  e_5 = t;
  d_5 :
  if(match_cons(e_5, sym_Rec_2))
    {
      f_5 = ATgetArgument(e_5, 0);
      g_5 = ATgetArgument(e_5, 1);
      t = (ATerm) ATinsert(ATempty, not_null(f_5));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym_SDef_3))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      r_5 = ATgetArgument(o_5, 2);
      {
        t = not_null(q_5);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL;
            v_5 = t;
            m_5 :
            if(match_cons(v_5, sym_VarDec_2))
              {
                w_5 = ATgetArgument(v_5, 0);
                x_5 = ATgetArgument(v_5, 1);
                t = not_null(w_5);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, m_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL;
  f_6 = t;
  e_6 :
  if(match_cons(f_6, sym_Let_2))
    {
      g_6 = ATgetArgument(f_6, 0);
      h_6 = ATgetArgument(f_6, 1);
      {
        t = not_null(g_6);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
            k_6 = t;
            d_6 :
            if(match_cons(k_6, sym_SDef_3))
              {
                l_6 = ATgetArgument(k_6, 0);
                m_6 = ATgetArgument(k_6, 1);
                n_6 = ATgetArgument(k_6, 2);
                t = not_null(l_6);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, n_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm SVar_1 (ATerm t, ATerm k_43 (ATerm))
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym_SVar_1))
    {
      x_6 = ATgetArgument(w_6, 0);
      {
        ATerm z_6 = NULL;
        t = not_null(x_6);
        {
          t = k_43(t);
          {
            z_6 = t;
            t = (ATerm) ATmakeAppl(sym_SVar_1, not_null(z_6));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm srename_0 (ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm i_6 = t;
    int j_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
        LocalPopChoice(j_6);
      }
    else
      {
        t = i_6;
        {
          ATerm o_6 = t;
          int p_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0(t);
              LocalPopChoice(p_6);
            }
          else
            {
              t = o_6;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4(t, SVar_1, o_0, sboundin_3, spaste_1);
  return(t);
}
ATerm tpaste_1 (ATerm t, ATerm s_66 (ATerm))
{
  t = Scope_2(t, s_66, _id);
  return(t);
}
ATerm DynamicRules_1 (ATerm t, ATerm e_42 (ATerm))
{
  ATerm g_7 = NULL,h_7 = NULL;
  g_7 = t;
  f_7 :
  if(match_cons(g_7, sym_DynamicRules_1))
    {
      h_7 = ATgetArgument(g_7, 0);
      {
        ATerm j_7 = NULL;
        t = not_null(h_7);
        {
          t = e_42(t);
          {
            j_7 = t;
            t = (ATerm) ATmakeAppl(sym_DynamicRules_1, not_null(j_7));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm p_44 (ATerm), ATerm q_44 (ATerm))
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  q_7 :
  if(match_cons(r_7, sym_Scope_2))
    {
      s_7 = ATgetArgument(r_7, 0);
      t_7 = ATgetArgument(r_7, 1);
      {
        ATerm w_7 = NULL;
        t = not_null(s_7);
        {
          ATerm y_7 = NULL;
          t = p_44(t);
          {
            w_7 = t;
            {
              t = not_null(t_7);
              {
                t = q_44(t);
                {
                  y_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_7), not_null(y_7));
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
ATerm tboundin_3 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm), ATerm v_66 (ATerm))
{
  ATerm q_6 = t;
  int r_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2(t, v_66, t_66);
      LocalPopChoice(r_6);
    }
  else
    {
      t = q_6;
      t = DynamicRules_1(t, t_66);
    }
  return(t);
}
ATerm Bind4_0 (ATerm t)
{
  ATerm f_8 = NULL,g_8 = NULL;
  f_8 = t;
  e_8 :
  if(match_cons(f_8, sym_DynamicRules_1))
    {
      g_8 = ATgetArgument(f_8, 0);
      {
        t = not_null(g_8);
        t = tvars_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Add1_0 (ATerm t)
{
  ATerm l_8 = NULL,m_8 = NULL;
  l_8 = t;
  k_8 :
  if(match_cons(l_8, sym_Var_1))
    {
      m_8 = ATgetArgument(l_8, 0);
      t = (ATerm) ATinsert(ATempty, not_null(m_8));
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL;
  r_8 = t;
  q_8 :
  if(match_cons(r_8, sym__2))
    {
      s_8 = ATgetArgument(r_8, 0);
      t_8 = ATgetArgument(r_8, 1);
      {
        t = not_null(s_8);
        {
          ATerm x_8 (ATerm t)
          {
            ATerm s_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(t_8);
                LocalPopChoice(t_6);
              }
            else
              {
                t = s_6;
                {
                  ATerm u_6 = t;
                  int y_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_0 (ATerm t)
                      {
                        t = not_null(t_8);
                        return(t);
                      }
                      t = HdMember_1(t, p_0);
                      t = x_8(t);
                      LocalPopChoice(y_6);
                    }
                  else
                    {
                      t = u_6;
                      t = Cons_2(t, _id, x_8);
                    }
                }
              }
            return(t);
          }
          t = x_8(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_54 (ATerm), ATerm a_55 (ATerm), ATerm b_55 (ATerm))
{
  ATerm a_7 = t;
  int b_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_54(t);
      LocalPopChoice(b_7);
    }
  else
    {
      t = a_7;
      {
        ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
        c_9 = t;
        b_9 :
        if(((ATgetType(c_9) == AT_LIST) && ((ATermList) c_9 != ATempty)))
          {
            d_9 = ATgetFirst((ATermList) c_9);
            e_9 = (ATerm) ATgetNext((ATermList) c_9);
            {
              ATerm h_9 = NULL,j_9 = NULL;
              ATerm c_7;
              c_7 = t;
              {
                ATerm i_9 = NULL;
                t = not_null(d_9);
                {
                  t = b_55(t);
                  {
                    i_9 = t;
                    if(((h_9 != NULL) && (h_9 != i_9)))
                      _fail(i_9);
                    else
                      h_9 = i_9;
                  }
                }
              }
              t = c_7;
              {
                ATerm k_9 = NULL;
                t = not_null(e_9);
                {
                  t = foldr_3(t, z_54, a_55, b_55);
                  {
                    k_9 = t;
                    if(((j_9 != NULL) && (j_9 != k_9)))
                      _fail(k_9);
                    else
                      j_9 = k_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_9), not_null(j_9));
                  t = a_55(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm m_56 (ATerm), ATerm n_56 (ATerm), ATerm o_56 (ATerm))
{
  ATerm s_9 = NULL;
  ATerm u_9 = NULL;
  s_9 = t;
  {
    ATerm v_9 = NULL;
    ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
    t = not_null(s_9);
    {
      v_9 = t;
      {
        t = SSL_explode_term(not_null(v_9));
        {
          x_9 = t;
          r_9 :
          if(match_cons(x_9, sym__2))
            {
              y_9 = ATgetArgument(x_9, 0);
              z_9 = ATgetArgument(x_9, 1);
              if(((u_9 != NULL) && (u_9 != z_9)))
                _fail(z_9);
              else
                u_9 = z_9;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(u_9);
      t = foldr_3(t, m_56, n_56, o_56);
    }
  }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  g_10 = t;
  e_10 :
  if(match_cons(g_10, sym__2))
    {
      h_10 = ATgetArgument(g_10, 0);
      i_10 = ATgetArgument(g_10, 1);
      f_10 :
      if(((ATgetType(i_10) == AT_LIST) && ((ATermList) i_10 != ATempty)))
        {
          j_10 = ATgetFirst((ATermList) i_10);
          k_10 = (ATerm) ATgetNext((ATermList) i_10);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_10)), not_null(j_10)), not_null(k_10));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL;
  j_11 = t;
  h_11 :
  if(((ATgetType(j_11) == AT_LIST) && ((ATermList) j_11 != ATempty)))
    {
      k_11 = ATgetFirst((ATermList) j_11);
      n_11 = (ATerm) ATgetNext((ATermList) j_11);
      i_11 :
      if(match_cons(k_11, sym__2))
        {
          l_11 = ATgetArgument(k_11, 0);
          m_11 = ATgetArgument(k_11, 1);
          {
            ATerm r_11 = NULL,s_11 = NULL,y_11 = NULL,l_12 = NULL;
            ATerm d_7;
            d_7 = t;
            {
              ATerm t_11 = NULL;
              ATerm v_11 = NULL,w_11 = NULL,x_11 = NULL;
              t = not_null(m_11);
              {
                t_11 = t;
                {
                  t = SSL_explode_term(not_null(t_11));
                  {
                    v_11 = t;
                    s_10 :
                    if(match_cons(v_11, sym__2))
                      {
                        w_11 = ATgetArgument(v_11, 0);
                        x_11 = ATgetArgument(v_11, 1);
                        {
                          if(((r_11 != NULL) && (r_11 != w_11)))
                            _fail(w_11);
                          else
                            r_11 = w_11;
                          if(((s_11 != NULL) && (s_11 != x_11)))
                            _fail(x_11);
                          else
                            s_11 = x_11;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = d_7;
            {
              ATerm e_7;
              e_7 = t;
              {
                ATerm g_12 = NULL;
                ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
                t = not_null(l_11);
                {
                  g_12 = t;
                  {
                    t = SSL_explode_term(not_null(g_12));
                    {
                      i_12 = t;
                      f_11 :
                      if(match_cons(i_12, sym__2))
                        {
                          j_12 = ATgetArgument(i_12, 0);
                          k_12 = ATgetArgument(i_12, 1);
                          {
                            if(((r_11 != NULL) && (r_11 != j_12)))
                              _fail(j_12);
                            else
                              r_11 = j_12;
                            if(((y_11 != NULL) && (y_11 != k_12)))
                              _fail(k_12);
                            else
                              y_11 = k_12;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = e_7;
              {
                ATerm m_12 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_11), not_null(s_11));
                {
                  t = zip_1(t, _id);
                  {
                    m_12 = t;
                    if(((l_12 != NULL) && (l_12 != m_12)))
                      _fail(m_12);
                    else
                      l_12 = m_12;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_12), not_null(n_11));
                  t = conc_0(t);
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL;
  z_12 = t;
  x_12 :
  if(((ATgetType(z_12) == AT_LIST) && ((ATermList) z_12 != ATempty)))
    {
      a_13 = ATgetFirst((ATermList) z_12);
      d_13 = (ATerm) ATgetNext((ATermList) z_12);
      y_12 :
      if(match_cons(a_13, sym__2))
        {
          b_13 = ATgetArgument(a_13, 0);
          c_13 = ATgetArgument(a_13, 1);
          {
            ATerm f_13 = NULL;
            if(((b_13 != NULL) && (b_13 != c_13)))
              _fail(c_13);
            else
              b_13 = c_13;
            {
              if(((f_13 != NULL) && (f_13 != d_13)))
                _fail(d_13);
              else
                f_13 = d_13;
              t = not_null(f_13);
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm m_50 (ATerm), ATerm n_50 (ATerm))
{
  ATerm h_13 (ATerm t)
  {
    ATerm i_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_50(t);
        LocalPopChoice(k_7);
      }
    else
      {
        t = i_7;
        {
          t = n_50(t);
          t = h_13(t);
        }
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm p_50 (ATerm), ATerm q_50 (ATerm), ATerm r_50 (ATerm))
{
  t = p_50(t);
  t = while_not_2(t, q_50, r_50);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL;
  l_13 = t;
  k_13 :
  if(((ATgetType(l_13) == AT_LIST) && ((ATermList) l_13 != ATempty)))
    {
      m_13 = ATgetFirst((ATermList) l_13);
      n_13 = (ATerm) ATgetNext((ATermList) l_13);
      {
        t = b_56(t);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm q_13 = NULL;
            q_13 = t;
            if(((m_13 != NULL) && (m_13 != q_13)))
              _fail(q_13);
            else
              m_13 = q_13;
            return(t);
          }
          t = fetch_1(t, q_0);
        }
        t = not_null(n_13);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_13 = NULL,x_13 = NULL,y_13 = NULL;
      w_13 = t;
      u_13 :
      if(match_cons(w_13, sym__2))
        {
          x_13 = ATgetArgument(w_13, 0);
          y_13 = ATgetArgument(w_13, 1);
          {
            t = not_null(x_13);
            {
              ATerm e_14 (ATerm t)
              {
                ATerm n_7 = t;
                int o_7 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(o_7);
                  }
                else
                  {
                    t = n_7;
                    {
                      ATerm p_7 = t;
                      int u_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm r_0 (ATerm t)
                          {
                            t = not_null(y_13);
                            return(t);
                          }
                          t = HdMember_1(t, r_0);
                          t = e_14(t);
                          LocalPopChoice(u_7);
                        }
                      else
                        {
                          t = p_7;
                          t = Cons_2(t, _id, e_14);
                        }
                    }
                  }
                return(t);
              }
              t = e_14(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm s_0 (ATerm t)
        {
          ATerm b_14 = NULL;
          b_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(b_14));
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          ATerm v_7 = t;
          int x_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_0 (ATerm t)
              {
                ATerm z_7 = t;
                int a_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(a_8);
                  }
                else
                  {
                    t = z_7;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, v_0);
              LocalPopChoice(x_7);
            }
          else
            {
              t = v_7;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, s_0, t_0, u_0);
      }
    }
  return(t);
}
ATerm free_vars_3 (ATerm t, ATerm x_51 (ATerm), ATerm y_51 (ATerm), ATerm z_51 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm j_14 (ATerm t)
  {
    ATerm b_8 = t;
    int c_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_51(t);
        LocalPopChoice(c_8);
      }
    else
      {
        t = b_8;
        {
          ATerm d_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_14 = NULL;
              ATerm i_8;
              i_8 = t;
              {
                ATerm i_14 = NULL;
                t = y_51(t);
                {
                  i_14 = t;
                  if(((h_14 != NULL) && (h_14 != i_14)))
                    _fail(i_14);
                  else
                    h_14 = i_14;
                }
              }
              t = i_8;
              {
                ATerm w_0 (ATerm t)
                {
                  ATerm y_0 (ATerm t)
                  {
                    t = not_null(h_14);
                    return(t);
                  }
                  t = split_2(t, j_14, y_0);
                  t = diff_0(t);
                  return(t);
                }
                ATerm x_0 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_51(t, w_0, j_14, x_0);
                {
                  ATerm z_0 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3(t, z_0, union_0, _id);
                }
              }
              LocalPopChoice(h_8);
            }
          else
            {
              t = d_8;
              {
                ATerm a_1 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3(t, a_1, union_0, j_14);
              }
            }
        }
      }
    return(t);
  }
  t = j_14(t);
  return(t);
}
ATerm tvars_0 (ATerm t)
{
  ATerm b_1 (ATerm t)
  {
    ATerm j_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = j_8;
        t = Bind4_0(t);
      }
    return(t);
  }
  t = free_vars_3(t, Add1_0, b_1, tboundin_3);
  return(t);
}
ATerm Bind0_0 (ATerm t)
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL;
  s_14 = t;
  n_14 :
  if(match_cons(s_14, sym_LRule_1))
    {
      t_14 = ATgetArgument(s_14, 0);
      o_14 :
      if(match_cons(t_14, sym_Rule_3))
        {
          p_14 = ATgetArgument(t_14, 0);
          q_14 = ATgetArgument(t_14, 1);
          r_14 = ATgetArgument(t_14, 2);
          {
            t = not_null(p_14);
            t = tvars_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(s_14, sym_Scope_2))
        {
          t_14 = ATgetArgument(s_14, 0);
          u_14 = ATgetArgument(s_14, 1);
          t = not_null(t_14);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Var_1 (ATerm t, ATerm r_42 (ATerm))
{
  ATerm r_15 = NULL,s_15 = NULL;
  r_15 = t;
  q_15 :
  if(match_cons(r_15, sym_Var_1))
    {
      s_15 = ATgetArgument(r_15, 0);
      {
        ATerm u_15 = NULL;
        t = not_null(s_15);
        {
          t = r_42(t);
          {
            u_15 = t;
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_15));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm DistBinding_2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)))
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  c_16 = t;
  b_16 :
  if(match_cons(c_16, sym__3))
    {
      d_16 = ATgetArgument(c_16, 0);
      e_16 = ATgetArgument(c_16, 1);
      f_16 = ATgetArgument(c_16, 2);
      {
        t = not_null(d_16);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm j_16 = NULL;
            j_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(f_16));
              t = q_53(t);
            }
            return(t);
          }
          ATerm d_1 (ATerm t)
          {
            ATerm l_16 = NULL;
            l_16 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(e_16));
              t = q_53(t);
            }
            return(t);
          }
          t = r_53(t, c_1, d_1, _id);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
  s_16 = t;
  r_16 :
  if(match_cons(s_16, sym__2))
    {
      t_16 = ATgetArgument(s_16, 0);
      u_16 = ATgetArgument(s_16, 1);
      {
        t = not_null(t_16);
        {
          ATerm e_1 (ATerm t)
          {
            t = not_null(u_16);
            return(t);
          }
          t = at_end_1(t, e_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
  a_17 = t;
  z_16 :
  if(match_cons(a_17, sym__2))
    {
      b_17 = ATgetArgument(a_17, 0);
      c_17 = ATgetArgument(a_17, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_17)), not_null(b_17));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL;
  k_17 = t;
  h_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      o_17 = ATgetArgument(k_17, 1);
      i_17 :
      if(((ATgetType(l_17) == AT_LIST) && ((ATermList) l_17 != ATempty)))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          n_17 = (ATerm) ATgetNext((ATermList) l_17);
          j_17 :
          if(((ATgetType(o_17) == AT_LIST) && ((ATermList) o_17 != ATempty)))
            {
              p_17 = ATgetFirst((ATermList) o_17);
              q_17 = (ATerm) ATgetNext((ATermList) o_17);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_17), not_null(p_17)), (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(q_17)));
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL;
  c_18 = t;
  x_17 :
  if(match_cons(c_18, sym__2))
    {
      d_18 = ATgetArgument(c_18, 0);
      e_18 = ATgetArgument(c_18, 1);
      y_17 :
      if(((ATermList) d_18 == ATempty))
        {
          z_17 :
          if(((ATermList) e_18 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm c_60 (ATerm), ATerm d_60 (ATerm))
{
  ATerm l_18 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_60(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          t = b_60(t);
          {
            t = _2(t, d_60, l_18);
            t = c_60(t);
          }
        }
      }
    return(t);
  }
  t = l_18(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_60 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_60);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm RnBinding_2 (ATerm t, ATerm w_53 (ATerm), ATerm x_53 (ATerm, ATerm (ATerm)))
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      d_19 = ATgetArgument(c_19, 0);
      e_19 = ATgetArgument(c_19, 1);
      {
        ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,r_19 = NULL;
        ATerm u_8;
        u_8 = t;
        {
          ATerm m_19 = NULL;
          t = not_null(d_19);
          {
            ATerm n_19 = NULL;
            t = w_53(t);
            {
              m_19 = t;
              {
                if(((j_19 != NULL) && (j_19 != m_19)))
                  _fail(m_19);
                else
                  j_19 = m_19;
                {
                  ATerm o_19 = NULL,q_19 = NULL;
                  t = map_1(t, new_0);
                  {
                    n_19 = t;
                    {
                      if(((k_19 != NULL) && (k_19 != n_19)))
                        _fail(n_19);
                      else
                        k_19 = n_19;
                      {
                        ATerm p_19 = NULL;
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_19), not_null(k_19));
                        {
                          t = zip_1(t, _id);
                          {
                            p_19 = t;
                            if(((o_19 != NULL) && (o_19 != p_19)))
                              _fail(p_19);
                            else
                              o_19 = p_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(o_19), not_null(e_19));
                          {
                            t = conc_0(t);
                            {
                              q_19 = t;
                              if(((l_19 != NULL) && (l_19 != q_19)))
                                _fail(q_19);
                              else
                                l_19 = q_19;
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
        t = u_8;
        {
          ATerm s_19 = NULL;
          t = not_null(d_19);
          {
            ATerm f_1 (ATerm t)
            {
              t = not_null(k_19);
              return(t);
            }
            t = x_53(t, f_1);
            {
              s_19 = t;
              if(((r_19 != NULL) && (r_19 != s_19)))
                _fail(s_19);
              else
                r_19 = s_19;
            }
          }
          t = (ATerm) ATmakeAppl(sym__3, not_null(r_19), not_null(e_19), not_null(l_19));
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Look2_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
  c_20 = t;
  a_20 :
  if(match_cons(c_20, sym__2))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      b_20 :
      if(((ATgetType(e_20) == AT_LIST) && ((ATermList) e_20 != ATempty)))
        {
          f_20 = ATgetFirst((ATermList) e_20);
          g_20 = (ATerm) ATgetNext((ATermList) e_20);
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(g_20));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Look1_0 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  o_20 = t;
  l_20 :
  if(match_cons(o_20, sym__2))
    {
      p_20 = ATgetArgument(o_20, 0);
      q_20 = ATgetArgument(o_20, 1);
      m_20 :
      if(((ATgetType(q_20) == AT_LIST) && ((ATermList) q_20 != ATempty)))
        {
          r_20 = ATgetFirst((ATermList) q_20);
          u_20 = (ATerm) ATgetNext((ATermList) q_20);
          n_20 :
          if(match_cons(r_20, sym__2))
            {
              s_20 = ATgetArgument(r_20, 0);
              t_20 = ATgetArgument(r_20, 1);
              {
                ATerm w_20 = NULL;
                if(((p_20 != NULL) && (p_20 != s_20)))
                  _fail(s_20);
                else
                  p_20 = s_20;
                {
                  if(((w_20 != NULL) && (w_20 != t_20)))
                    _fail(t_20);
                  else
                    w_20 = t_20;
                  t = not_null(w_20);
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm lookup_0 (ATerm t)
{
  ATerm v_8 = t;
  int w_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(w_8);
    }
  else
    {
      t = v_8;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm RnVar_1 (ATerm t, ATerm k_53 (ATerm, ATerm (ATerm)))
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(match_cons(b_21, sym__2))
    {
      c_21 = ATgetArgument(b_21, 0);
      d_21 = ATgetArgument(b_21, 1);
      {
        t = not_null(c_21);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              t = not_null(d_21);
              return(t);
            }
            t = split_2(t, _id, h_1);
            t = lookup_0(t);
            return(t);
          }
          t = k_53(t, g_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm all_dist_1 (ATerm t, ATerm s_52 (ATerm))
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym__2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        t = not_null(l_21);
        {
          ATerm i_1 (ATerm t)
          {
            ATerm p_21 = NULL;
            p_21 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(p_21), not_null(m_21));
              t = s_52(t);
            }
            return(t);
          }
          t = _all(t, i_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm env_alltd_1 (ATerm t, ATerm x_52 (ATerm))
{
  ATerm t_21 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_52(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = all_dist_1(t, t_21);
      }
    return(t);
  }
  t = t_21(t);
  return(t);
}
ATerm rename_4 (ATerm t, ATerm y_53 (ATerm, ATerm (ATerm)), ATerm z_53 (ATerm), ATerm a_54 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm b_54 (ATerm, ATerm (ATerm)))
{
  ATerm v_21 = NULL;
  v_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_21), (ATerm) ATempty);
    {
      ATerm y_21 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm a_9 = t;
          int f_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = RnVar_1(t, y_53);
              LocalPopChoice(f_9);
            }
          else
            {
              t = a_9;
              {
                t = RnBinding_2(t, z_53, b_54);
                t = DistBinding_2(t, y_21, a_54);
              }
            }
          return(t);
        }
        t = env_alltd_1(t, j_1);
        return(t);
      }
      t = y_21(t);
    }
  }
  return(t);
}
ATerm trename_0 (ATerm t)
{
  ATerm z_21 (ATerm t, ATerm a_22 (ATerm))
  {
    t = Scope_2(t, a_22, _id);
    return(t);
  }
  t = rename_4(t, Var_1, Bind0_0, tboundin_3, z_21);
  return(t);
}
ATerm strename_0 (ATerm t)
{
  t = trename_0(t);
  t = srename_0(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm h_34 (ATerm), ATerm i_34 (ATerm))
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL;
  f_22 = t;
  e_22 :
  if(match_cons(f_22, sym__2))
    {
      g_22 = ATgetArgument(f_22, 0);
      h_22 = ATgetArgument(f_22, 1);
      {
        ATerm k_22 = NULL;
        t = not_null(g_22);
        {
          ATerm m_22 = NULL;
          t = h_34(t);
          {
            k_22 = t;
            {
              t = not_null(h_22);
              {
                t = i_34(t);
                {
                  m_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(m_22));
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
  ATerm t_22 = NULL;
  ATerm g_9;
  g_9 = t;
  {
    ATerm k_1 (ATerm t)
    {
      ATerm v_22 = NULL,w_22 = NULL;
      v_22 = t;
      s_22 :
      if(match_cons(v_22, sym_Program_1))
        {
          w_22 = ATgetArgument(v_22, 0);
          if(((t_22 != NULL) && (t_22 != w_22)))
            _fail(w_22);
          else
            t_22 = w_22;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, k_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_o_9), not_null(t_22)), term_m_9));
      {
        t = printnl_0(t);
        {
          t = term_p_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = g_9;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_w_9;
  {
    t = printnl_0(t);
    {
      t = term_p_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL;
  ATerm l_1 (ATerm t)
  {
    ATerm m_1 (ATerm t)
    {
      ATerm a_10 = t;
      if((PushChoice() == 0))
        {
          ATerm n_1 (ATerm t)
          {
            ATerm i_23 = NULL;
            i_23 = t;
            b_23 :
            if(!(match_cons(i_23, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, n_1);
          PopChoice();
          _fail(t);
        }
      else
        t = a_10;
      return(t);
    }
    t = _2(t, m_1, _id);
    {
      ATerm o_1 (ATerm t)
      {
        ATerm p_1 (ATerm t)
        {
          ATerm j_23 = NULL,k_23 = NULL;
          j_23 = t;
          d_23 :
          if(match_cons(j_23, sym_Runtime_1))
            {
              k_23 = ATgetArgument(j_23, 0);
              if(((h_23 != NULL) && (h_23 != k_23)))
                _fail(k_23);
              else
                h_23 = k_23;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, p_1);
        return(t);
      }
      t = _2(t, o_1, _id);
      {
        ATerm q_1 (ATerm t)
        {
          ATerm r_1 (ATerm t)
          {
            ATerm l_23 = NULL,o_23 = NULL;
            l_23 = t;
            f_23 :
            if(match_cons(l_23, sym_Program_1))
              {
                o_23 = ATgetArgument(l_23, 0);
                if(((g_23 != NULL) && (g_23 != o_23)))
                  _fail(o_23);
                else
                  g_23 = o_23;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, r_1);
          return(t);
        }
        t = _2(t, q_1, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_d_10), not_null(h_23)), term_b_10), not_null(g_23)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, l_1);
  {
    t = term_l_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      t = SSL_WriteToTextFile(not_null(u_23), not_null(v_23));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
  m_24 = t;
  l_24 :
  if(match_cons(m_24, sym__2))
    {
      n_24 = ATgetArgument(m_24, 0);
      o_24 = ATgetArgument(m_24, 1);
      t = SSL_WriteToBinaryFile(not_null(n_24), not_null(o_24));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm w_24 = NULL;
  ATerm m_10;
  m_10 = t;
  {
    ATerm s_1 (ATerm t)
    {
      ATerm n_10 = t;
      int o_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_1 (ATerm t)
          {
            ATerm x_24 = NULL,y_24 = NULL;
            x_24 = t;
            t_24 :
            if(match_cons(x_24, sym_Output_1))
              {
                y_24 = ATgetArgument(x_24, 0);
                if(((w_24 != NULL) && (w_24 != y_24)))
                  _fail(y_24);
                else
                  w_24 = y_24;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, t_1);
          LocalPopChoice(o_10);
        }
      else
        {
          t = n_10;
          {
            ATerm z_24 = NULL;
            t = term_p_10;
            {
              z_24 = t;
              if(((w_24 != NULL) && (w_24 != z_24)))
                _fail(z_24);
              else
                w_24 = z_24;
            }
          }
        }
      return(t);
    }
    t = _2(t, s_1, _id);
  }
  t = m_10;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm z_1 (ATerm t)
      {
        t = not_null(w_24);
        return(t);
      }
      t = split_2(t, z_1, _id);
      return(t);
    }
    t = _2(t, _id, y_1);
    {
      ATerm q_10 = t;
      int r_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_2 (ATerm t)
          {
            ATerm b_2 (ATerm t)
            {
              ATerm a_25 = NULL;
              a_25 = t;
              v_24 :
              if(!(match_cons(a_25, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, b_2);
            return(t);
          }
          t = _2(t, a_2, WriteToBinaryFile_0);
          LocalPopChoice(r_10);
        }
      else
        {
          t = q_10;
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
ATerm apply_strategy_1 (ATerm t, ATerm t_49 (ATerm))
{
  ATerm i_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
  ATerm t_10;
  t_10 = t;
  t = dtime_0(t);
  t = t_10;
  {
    t = t_49(t);
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm j_25 = NULL;
        t = dtime_0(t);
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
      }
      t = u_10;
      {
        k_25 = t;
        h_25 :
        if(match_cons(k_25, sym__2))
          {
            l_25 = ATgetArgument(k_25, 0);
            m_25 = ATgetArgument(k_25, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_25)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_25))), not_null(m_25));
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
  ATerm s_25 = NULL;
  s_25 = t;
  t = SSL_ReadFromFile(not_null(s_25));
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm b_26 = NULL,d_26 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm c_26 = NULL;
    t = n_61(t);
    {
      c_26 = t;
      if(((b_26 != NULL) && (b_26 != c_26)))
        _fail(c_26);
      else
        b_26 = c_26;
    }
  }
  t = v_10;
  {
    ATerm e_26 = NULL;
    t = o_61(t);
    {
      e_26 = t;
      if(((d_26 != NULL) && (d_26 != e_26)))
        _fail(e_26);
      else
        d_26 = e_26;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_26), not_null(d_26));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm k_26 = NULL;
  ATerm w_10;
  w_10 = t;
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_2 (ATerm t)
        {
          ATerm n_26 = NULL,o_26 = NULL;
          n_26 = t;
          i_26 :
          if(match_cons(n_26, sym_Input_1))
            {
              o_26 = ATgetArgument(n_26, 0);
              if(((k_26 != NULL) && (k_26 != o_26)))
                _fail(o_26);
              else
                k_26 = o_26;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, e_2);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        {
          ATerm p_26 = NULL;
          t = term_z_10;
          {
            p_26 = t;
            if(((k_26 != NULL) && (k_26 != p_26)))
              _fail(p_26);
            else
              k_26 = p_26;
          }
        }
      }
  }
  t = w_10;
  {
    ATerm n_2 (ATerm t)
    {
      t = not_null(k_26);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_26 = NULL;
  x_26 = t;
  w_26 :
  if(!(match_cons(x_26, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm s_49 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(d_11);
            }
          else
            {
              t = c_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_2);
  t = s_49(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_table_create(not_null(a_27));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_27 = NULL;
  e_27 = t;
  {
    ATerm e_11;
    e_11 = t;
    {
      t = term_g_11;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_11, term_o_11, not_null(e_27));
          t = table_put_0(t);
        }
      }
    }
    t = e_11;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  m_27 = t;
  k_27 :
  if(match_string(m_27, "register-usage-info"))
    t = register_usage_1(t, j_0);
  else
    {
      if(((ATgetType(m_27) == AT_LIST) && ((ATermList) m_27 != ATempty)))
        {
          n_27 = ATgetFirst((ATermList) m_27);
          o_27 = (ATerm) ATgetNext((ATermList) m_27);
          l_27 :
          if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
            {
              p_27 = ATgetFirst((ATermList) o_27);
              q_27 = (ATerm) ATgetNext((ATermList) o_27);
              {
                ATerm u_27 = NULL;
                ATerm p_11;
                p_11 = t;
                {
                  t = not_null(n_27);
                  t = h_0(t);
                }
                t = p_11;
                {
                  ATerm v_27 = NULL;
                  t = not_null(p_27);
                  {
                    t = i_0(t);
                    {
                      v_27 = t;
                      if(((u_27 != NULL) && (u_27 != v_27)))
                        _fail(v_27);
                      else
                        u_27 = v_27;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_27)), not_null(u_27));
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
  ATerm q_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        ATerm o_28 = NULL;
        o_28 = t;
        b_28 :
        if(!(match_string(o_28, "-S")))
          {
            if(!(match_string(o_28, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        t = term_z_11;
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_a_12;
        return(t);
      }
      t = Option_3(t, p_2, v_2, w_2);
      LocalPopChoice(u_11);
    }
  else
    {
      t = q_11;
      {
        ATerm b_12 = t;
        int c_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              ATerm p_28 = NULL;
              p_28 = t;
              c_28 :
              if(!(match_string(p_28, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              t = term_d_12;
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_e_12;
              return(t);
            }
            t = Option_3(t, x_2, y_2, z_2);
            LocalPopChoice(c_12);
          }
        else
          {
            t = b_12;
            {
              ATerm f_12 = t;
              int h_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm q_28 = NULL;
                    q_28 = t;
                    d_28 :
                    if(!(match_string(q_28, "-v")))
                      {
                        if(!(match_string(q_28, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm b_3 (ATerm t)
                  {
                    t = term_n_12;
                    return(t);
                  }
                  ATerm c_3 (ATerm t)
                  {
                    t = term_o_12;
                    return(t);
                  }
                  t = Option_3(t, a_3, b_3, c_3);
                  LocalPopChoice(h_12);
                }
              else
                {
                  t = f_12;
                  {
                    ATerm p_12 = t;
                    int q_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_3 (ATerm t)
                        {
                          ATerm r_28 = NULL;
                          r_28 = t;
                          e_28 :
                          if(!(match_string(r_28, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm i_3 (ATerm t)
                        {
                          ATerm s_28 = NULL;
                          ATerm x_28 = NULL;
                          x_28 = t;
                          if(((s_28 != NULL) && (s_28 != x_28)))
                            _fail(x_28);
                          else
                            s_28 = x_28;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(s_28));
                          return(t);
                        }
                        ATerm k_3 (ATerm t)
                        {
                          t = term_r_12;
                          return(t);
                        }
                        t = ArgOption_3(t, h_3, i_3, k_3);
                        LocalPopChoice(q_12);
                      }
                    else
                      {
                        t = p_12;
                        {
                          ATerm s_12 = t;
                          int t_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_3 (ATerm t)
                              {
                                ATerm y_28 = NULL;
                                y_28 = t;
                                g_28 :
                                if(!(match_string(y_28, "-i")))
                                  {
                                    if(!(match_string(y_28, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_3 (ATerm t)
                              {
                                ATerm z_28 = NULL;
                                ATerm a_29 = NULL;
                                a_29 = t;
                                if(((z_28 != NULL) && (z_28 != a_29)))
                                  _fail(a_29);
                                else
                                  z_28 = a_29;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_28));
                                return(t);
                              }
                              ATerm o_3 (ATerm t)
                              {
                                t = term_u_12;
                                return(t);
                              }
                              t = ArgOption_3(t, m_3, n_3, o_3);
                              LocalPopChoice(t_12);
                            }
                          else
                            {
                              t = s_12;
                              {
                                ATerm v_12 = t;
                                int w_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_3 (ATerm t)
                                    {
                                      ATerm f_29 = NULL;
                                      f_29 = t;
                                      i_28 :
                                      if(!(match_string(f_29, "-o")))
                                        {
                                          if(!(match_string(f_29, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_3 (ATerm t)
                                    {
                                      ATerm g_29 = NULL;
                                      ATerm h_29 = NULL;
                                      h_29 = t;
                                      if(((g_29 != NULL) && (g_29 != h_29)))
                                        _fail(h_29);
                                      else
                                        g_29 = h_29;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_29));
                                      return(t);
                                    }
                                    ATerm r_3 (ATerm t)
                                    {
                                      t = term_e_13;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_3, q_3, r_3);
                                    LocalPopChoice(w_12);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm g_13 = t;
                                      int i_13 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_3 (ATerm t)
                                          {
                                            ATerm i_29 = NULL;
                                            i_29 = t;
                                            k_28 :
                                            if(!(match_string(i_29, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_3 (ATerm t)
                                          {
                                            t = term_j_13;
                                            return(t);
                                          }
                                          ATerm z_3 (ATerm t)
                                          {
                                            t = term_o_13;
                                            return(t);
                                          }
                                          t = Option_3(t, s_3, t_3, z_3);
                                          LocalPopChoice(i_13);
                                        }
                                      else
                                        {
                                          t = g_13;
                                          {
                                            ATerm a_4 (ATerm t)
                                            {
                                              ATerm j_29 = NULL;
                                              j_29 = t;
                                              l_28 :
                                              if(!(match_string(j_29, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm b_4 (ATerm t)
                                            {
                                              t = term_p_13;
                                              return(t);
                                            }
                                            ATerm d_4 (ATerm t)
                                            {
                                              t = term_r_13;
                                              return(t);
                                            }
                                            t = Option_3(t, a_4, b_4, d_4);
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
  ATerm q_29 = NULL;
  q_29 = t;
  t = SSL_table_destroy(not_null(q_29));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_29 = NULL;
  u_29 = t;
  t = SSL_exit(not_null(u_29));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_29 = NULL;
  y_29 = t;
  t = SSL_implode_string(not_null(y_29));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_58 (ATerm))
{
  ATerm b_30 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_30);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          t = Nil_0(t);
          t = w_58(t);
        }
      }
    return(t);
  }
  t = b_30(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_13);
    }
  else
    {
      t = v_13;
      {
        ATerm e_30 = NULL,f_30 = NULL,g_30 = NULL;
        e_30 = t;
        d_30 :
        if(((ATgetType(e_30) == AT_LIST) && ((ATermList) e_30 != ATempty)))
          {
            f_30 = ATgetFirst((ATermList) e_30);
            g_30 = (ATerm) ATgetNext((ATermList) e_30);
            {
              t = not_null(f_30);
              {
                ATerm f_4 (ATerm t)
                {
                  t = not_null(g_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_4);
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
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_explode_string(not_null(m_30));
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
ATerm long_description_1 (ATerm t, ATerm p_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_58 (ATerm))
{
  ATerm p_30 (ATerm t)
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        t = Cons_2(t, i_58, p_30);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  w_30 = t;
  t_30 :
  if(((ATgetType(w_30) == AT_LIST) && ((ATermList) w_30 != ATempty)))
    {
      u_30 = ATgetFirst((ATermList) w_30);
      v_30 = (ATerm) ATgetNext((ATermList) w_30);
      {
        t = not_null(v_30);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm z_30 = NULL;
            ATerm a_31 = NULL;
            t = g_0(t);
            {
              a_31 = t;
              if(((z_30 != NULL) && (z_30 != a_31)))
                _fail(a_31);
              else
                z_30 = a_31;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(z_30)), not_null(u_30));
            return(t);
          }
          t = reverse_1(t, h_4);
        }
      }
    }
  else
    {
      if(((ATermList) w_30 == ATempty))
        {
          {
            t = term_d_14;
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
  ATerm i_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, i_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_46 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_39 (ATerm))
{
  ATerm h_31 = NULL,i_31 = NULL;
  h_31 = t;
  g_31 :
  if(match_cons(h_31, sym_Program_1))
    {
      i_31 = ATgetArgument(h_31, 0);
      {
        ATerm k_31 = NULL;
        t = not_null(i_31);
        {
          t = x_39(t);
          {
            k_31 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_31));
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
  ATerm s_31 = NULL;
  ATerm j_4 (ATerm t)
  {
    ATerm k_4 (ATerm t)
    {
      ATerm t_31 = NULL;
      t_31 = t;
      if(((s_31 != NULL) && (s_31 != t_31)))
        _fail(t_31);
      else
        s_31 = t_31;
      return(t);
    }
    t = Program_1(t, k_4);
    return(t);
  }
  t = option_defined_1(t, j_4);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm u_31 = NULL;
      ATerm v_31 = NULL;
      t = term_d_14;
      {
        ATerm m_4 (ATerm t)
        {
          t = not_null(s_31);
          return(t);
        }
        t = short_description_1(t, m_4);
        {
          t = concat_strings_0(t);
          {
            v_31 = t;
            if(((u_31 != NULL) && (u_31 != v_31)))
              _fail(v_31);
            else
              u_31 = v_31;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATempty, not_null(u_31)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, l_4);
    {
      t = term_k_14;
      {
        t = printnl_0(t);
        {
          t = term_v_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm w_31 = NULL;
                  w_31 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_31)), term_w_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_4);
                {
                  ATerm o_4 (ATerm t)
                  {
                    ATerm y_31 = NULL;
                    ATerm z_31 = NULL;
                    t = term_d_14;
                    {
                      ATerm t_4 (ATerm t)
                      {
                        t = not_null(s_31);
                        return(t);
                      }
                      t = long_description_1(t, t_4);
                      {
                        t = concat_strings_0(t);
                        {
                          z_31 = t;
                          if(((y_31 != NULL) && (y_31 != z_31)))
                            _fail(z_31);
                          else
                            y_31 = z_31;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_31)), term_x_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_4);
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
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL;
  g_32 = t;
  f_32 :
  if(match_cons(g_32, sym__2))
    {
      h_32 = ATgetArgument(g_32, 0);
      i_32 = ATgetArgument(g_32, 1);
      {
        ATerm y_14;
        y_14 = t;
        t = SSL_printnl(not_null(h_32), not_null(i_32));
        t = y_14;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_39 (ATerm))
{
  ATerm p_32 = NULL,q_32 = NULL;
  p_32 = t;
  o_32 :
  if(match_cons(p_32, sym_Undefined_1))
    {
      q_32 = ATgetArgument(p_32, 0);
      {
        ATerm s_32 = NULL;
        t = not_null(q_32);
        {
          t = y_39(t);
          {
            s_32 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_32));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_58 (ATerm))
{
  ATerm w_32 (ATerm t)
  {
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_58, _id);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        t = Cons_2(t, _id, w_32);
      }
    return(t);
  }
  t = w_32(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_47 (ATerm))
{
  t = fetch_1(t, n_47);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  x_32 :
  if(!(match_cons(y_32, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_62 (ATerm))
{
  ATerm b_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_62(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = b_15;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
  c_33 = t;
  b_33 :
  if(match_cons(c_33, sym__2))
    {
      d_33 = ATgetArgument(c_33, 0);
      e_33 = ATgetArgument(c_33, 1);
      t = SSL_table_get(not_null(d_33), not_null(e_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym__3))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      n_34 = ATgetArgument(k_34, 2);
      {
        ATerm d_15;
        d_15 = t;
        {
          ATerm r_34 = NULL;
          ATerm s_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), not_null(m_34));
          {
            ATerm e_15 = t;
            int f_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_15);
              }
            else
              {
                t = e_15;
                t = (ATerm) ATempty;
              }
            {
              s_34 = t;
              if(((r_34 != NULL) && (r_34 != s_34)))
                _fail(s_34);
              else
                r_34 = s_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_34), not_null(m_34), (ATerm) ATinsert(CheckATermList(not_null(r_34)), not_null(n_34)));
            t = table_put_0(t);
          }
        }
        t = d_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_46 (ATerm))
{
  ATerm w_34 = NULL;
  ATerm x_34 = NULL;
  t = term_d_14;
  {
    t = t_46(t);
    {
      x_34 = t;
      if(((w_34 != NULL) && (w_34 != x_34)))
        _fail(x_34);
      else
        w_34 = x_34;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_14, term_m_14, not_null(w_34));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
  d_35 = t;
  c_35 :
  if(match_string(d_35, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(d_35) == AT_LIST) && ((ATermList) d_35 != ATempty)))
        {
          e_35 = ATgetFirst((ATermList) d_35);
          f_35 = (ATerm) ATgetNext((ATermList) d_35);
          {
            ATerm i_35 = NULL;
            ATerm g_15;
            g_15 = t;
            {
              t = not_null(e_35);
              t = a_0(t);
            }
            t = g_15;
            {
              ATerm j_35 = NULL;
              t = term_d_14;
              {
                t = d_0(t);
                {
                  j_35 = t;
                  if(((i_35 != NULL) && (i_35 != j_35)))
                    _fail(j_35);
                  else
                    i_35 = j_35;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(f_35)), not_null(i_35));
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
  ATerm u_4 (ATerm t)
  {
    ATerm o_35 = NULL;
    o_35 = t;
    n_35 :
    if(!(match_string(o_35, "--help")))
      {
        if(!(match_string(o_35, "-h")))
          {
            if(!(match_string(o_35, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_h_15;
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_i_15;
    return(t);
  }
  t = Option_3(t, u_4, w_4, y_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  q_35 :
  if(((ATgetType(r_35) == AT_LIST) && ((ATermList) r_35 != ATempty)))
    {
      s_35 = ATgetFirst((ATermList) r_35);
      t_35 = (ATerm) ATgetNext((ATermList) r_35);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_35)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_35)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_44 (ATerm), ATerm v_44 (ATerm))
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  a_36 :
  if(((ATgetType(b_36) == AT_LIST) && ((ATermList) b_36 != ATempty)))
    {
      c_36 = ATgetFirst((ATermList) b_36);
      d_36 = (ATerm) ATgetNext((ATermList) b_36);
      {
        ATerm g_36 = NULL;
        t = not_null(c_36);
        {
          ATerm i_36 = NULL;
          t = u_44(t);
          {
            g_36 = t;
            {
              t = not_null(d_36);
              {
                t = v_44(t);
                {
                  i_36 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_36)), not_null(g_36));
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
  ATerm o_36 = NULL;
  o_36 = t;
  n_36 :
  if(((ATermList) o_36 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_46 (ATerm))
{
  ATerm j_15;
  j_15 = t;
  {
    ATerm z_4 (ATerm t)
    {
      t = term_k_15;
      t = r_46(t);
      return(t);
    }
    t = try_1(t, z_4);
  }
  t = j_15;
  {
    ATerm a_5 (ATerm t)
    {
      ATerm q_36 = NULL;
      q_36 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_36));
      return(t);
    }
    ATerm b_5 (ATerm t)
    {
      ATerm l_15 = t;
      int m_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_15 = t;
          int o_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_15);
            }
          else
            {
              t = n_15;
              {
                t = r_46(t);
                t = Cons_2(t, _id, b_5);
              }
            }
          LocalPopChoice(m_15);
        }
      else
        {
          t = l_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_5, b_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  ATerm p_15;
  p_15 = t;
  {
    ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
    z_36 = t;
    v_36 :
    if(match_cons(z_36, sym__3))
      {
        a_37 = ATgetArgument(z_36, 0);
        b_37 = ATgetArgument(z_36, 1);
        c_37 = ATgetArgument(z_36, 2);
        {
          if(((w_36 != NULL) && (w_36 != a_37)))
            _fail(a_37);
          else
            w_36 = a_37;
          {
            if(((x_36 != NULL) && (x_36 != b_37)))
              _fail(b_37);
            else
              x_36 = b_37;
            {
              if(((y_36 != NULL) && (y_36 != c_37)))
                _fail(c_37);
              else
                y_36 = c_37;
              t = SSL_table_put(not_null(w_36), not_null(x_36), not_null(y_36));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = p_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_46 (ATerm))
{
  ATerm f_37 = NULL;
  ATerm t_15;
  t_15 = t;
  {
    t = term_v_15;
    t = table_put_0(t);
  }
  t = t_15;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_46(t);
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, c_5);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_10;
                t = exit_0(t);
              }
            }
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm i_5 (ATerm t)
              {
                ATerm j_5 (ATerm t)
                {
                  ATerm g_37 = NULL;
                  g_37 = t;
                  if(((f_37 != NULL) && (f_37 != g_37)))
                    _fail(g_37);
                  else
                    f_37 = g_37;
                  return(t);
                }
                t = Undefined_1(t, j_5);
                return(t);
              }
              t = option_defined_1(t, i_5);
              {
                ATerm a_16;
                a_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_37)), term_g_16));
                  t = printnl_0(t);
                }
                t = a_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_p_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_5);
      {
        ATerm h_16;
        h_16 = t;
        {
          t = term_l_14;
          t = table_destroy_0(t);
        }
        t = h_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm h_49 (ATerm), ATerm i_49 (ATerm), ATerm j_49 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm i_16 = t;
    int k_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_49(t);
        LocalPopChoice(k_16);
      }
    else
      {
        t = i_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_5);
  {
    t = store_options_0(t);
    {
      ATerm m_16 = t;
      int n_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, j_49);
          LocalPopChoice(n_16);
        }
      else
        {
          t = m_16;
          {
            ATerm o_16 = t;
            int p_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, h_49);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(p_16);
              }
            else
              {
                t = o_16;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm c_49 (ATerm), ATerm d_49 (ATerm))
{
  t = iowrap_3(t, c_49, d_49, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm z_48 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    t = _2(t, _id, z_48);
    return(t);
  }
  t = iowrap_2(t, l_5, _fail);
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
