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
Symbol sym_Include_1;
Symbol sym_Prefix_1;
Symbol sym_NoDependency_0;
Symbol sym_Dependency_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
  sym_Include_1 = ATmakeSymbol("Include", 1, ATfalse);
  ATprotectSymbol(sym_Include_1);
  sym_Prefix_1 = ATmakeSymbol("Prefix", 1, ATfalse);
  ATprotectSymbol(sym_Prefix_1);
  sym_NoDependency_0 = ATmakeSymbol("NoDependency", 0, ATfalse);
  ATprotectSymbol(sym_NoDependency_0);
  sym_Dependency_1 = ATmakeSymbol("Dependency", 1, ATfalse);
  ATprotectSymbol(sym_Dependency_1);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_c_20;
ATerm term_o_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_v_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_v_17;
ATerm term_s_17;
ATerm term_f_17;
ATerm term_z_16;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_o_16;
ATerm term_i_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_a_15;
ATerm term_t_14;
ATerm term_q_14;
ATerm term_n_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_m_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_x_9;
ATerm term_o_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_r_8;
ATerm term_p_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_j_8;
ATerm term_f_8;
ATerm term_d_8;
ATerm term_p_7;
void init_constant_terms (void)
{
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("rm", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-f", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym_Keys_0);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Prefix", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("pack-stratego", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse-mod", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-silent", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("parse error in ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("tree", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("module ", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" not found", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("list-cons", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("tuple-cons", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("dep", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" :", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" \\\n	", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-I dir] [-i file]", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-dep target | -nodep]", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(sym__2, term_d_16, term_e_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(sym__3, term_d_16, term_e_16, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_NoDependency_0);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("a_0", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
}
ATerm basename_1 (ATerm, ATerm f_56 (ATerm));
ATerm basename_0 (ATerm);
ATerm Imports_1 (ATerm, ATerm h_47 (ATerm));
ATerm flatten_stratego_0 (ATerm);
ATerm _2 (ATerm, ATerm y_36 (ATerm), ATerm z_36 (ATerm));
ATerm UnZip2_0 (ATerm);
ATerm UnZip3_0 (ATerm);
ATerm UnZip1_0 (ATerm);
ATerm unzip_0 (ATerm);
ATerm get_stratego_imports_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_56 (ATerm), ATerm y_56 (ATerm));
ATerm Tl_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm find_in_path_0 (ATerm);
ATerm guarantee_extension_1 (ATerm, ATerm h_56 (ATerm));
ATerm rm_files_0 (ATerm);
ATerm call_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm j_48 (ATerm));
ATerm Prefix_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm get_pid_0 (ATerm);
ATerm parse_mod_0 (ATerm);
ATerm get_module_1 (ATerm, ATerm h_71 (ATerm));
ATerm Fst_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm zip_1 (ATerm, ATerm h_62 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm n_59 (ATerm));
ATerm diff_0 (ATerm);
ATerm GnNext_3 (ATerm, ATerm o_48 (ATerm), ATerm p_48 (ATerm), ATerm q_48 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_70 (ATerm), ATerm m_70 (ATerm));
ATerm for_3 (ATerm, ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm));
ATerm graph_nodes_undef_roots_3 (ATerm, ATerm u_48 (ATerm), ATerm v_48 (ATerm), ATerm w_48 (ATerm));
ATerm graph_nodes_roots_3 (ATerm, ATerm j_49 (ATerm), ATerm k_49 (ATerm), ATerm l_49 (ATerm));
ATerm pack_stratego_1 (ATerm, ATerm g_71 (ATerm));
ATerm exit_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm f_65 (ATerm));
ATerm separate_by_1 (ATerm, ATerm g_65 (ATerm));
ATerm debug_1 (ATerm, ATerm a_55 (ATerm));
ATerm obsolete_1 (ATerm, ATerm h_55 (ATerm));
ATerm open_file_0 (ATerm);
ATerm add_extension_0 (ATerm);
ATerm create_dep_file_1 (ATerm, ATerm n_48 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_63 (ATerm));
ATerm option_defined_1 (ATerm, ATerm s_53 (ATerm));
ATerm try_1 (ATerm, ATerm r_70 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm filter_1 (ATerm, ATerm p_57 (ATerm));
ATerm list_1 (ATerm, ATerm r_63 (ATerm));
ATerm pack_modules_usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm n_54 (ATerm));
ATerm ArgOption_2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm Option_2 (ATerm, ATerm c_53 (ATerm), ATerm d_53 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_64 (ATerm));
ATerm concat_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_52 (ATerm));
ATerm map_1 (ATerm, ATerm p_63 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_52 (ATerm));
ATerm Program_1 (ATerm, ATerm m_47 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_47 (ATerm));
ATerm Help_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_52 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_52 (ATerm));
ATerm parse_options_1 (ATerm, ATerm v_52 (ATerm));
ATerm pack_module_options_0 (ATerm);
ATerm pack_modules_2 (ATerm, ATerm l_48 (ATerm, ATerm (ATerm)), ATerm m_48 (ATerm));
ATerm table_put_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm assert_1 (ATerm, ATerm h_48 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm get_path_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm v_47 (ATerm), ATerm w_47 (ATerm));
ATerm main_0 (ATerm);
ATerm basename_1 (ATerm t, ATerm f_56 (ATerm))
{
  t = explode_string_0(t);
  {
    ATerm b_0 (ATerm t)
    {
      ATerm c_1 = t;
      int j_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Cons_2(t, _id, b_0);
          LocalPopChoice(j_7);
        }
      else
        {
          t = c_1;
          {
            ATerm k_7 = t;
            int l_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_0 (ATerm t)
                {
                  ATerm a_1 = NULL;
                  a_1 = t;
                  y_0 :
                  if(!(match_int(a_1, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = Cons_2(t, d_0, _id);
                LocalPopChoice(l_7);
              }
            else
              {
                t = k_7;
                {
                  ATerm m_0 (ATerm t)
                  {
                    ATerm b_1 = NULL;
                    b_1 = t;
                    z_0 :
                    if(!(match_int(b_1, 46)))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = Cons_2(t, m_0, f_56);
                  t = (ATerm) ATempty;
                }
              }
          }
        }
      return(t);
    }
    t = try_1(t, b_0);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm basename_0 (ATerm t)
{
  t = basename_1(t, _id);
  return(t);
}
ATerm Imports_1 (ATerm t, ATerm h_47 (ATerm))
{
  ATerm g_1 = NULL,h_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym_Imports_1))
    {
      h_1 = ATgetArgument(g_1, 0);
      {
        ATerm j_1 = NULL;
        t = not_null(h_1);
        {
          t = h_47(t);
          {
            j_1 = t;
            t = (ATerm) ATmakeAppl(sym_Imports_1, not_null(j_1));
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
ATerm flatten_stratego_0 (ATerm t)
{
  ATerm t_1 = NULL;
  ATerm n_0 (ATerm t)
  {
    ATerm q_1 = NULL,r_1 = NULL;
    q_1 = t;
    o_1 :
    if(match_cons(q_1, sym_Specification_1))
      {
        r_1 = ATgetArgument(q_1, 0);
        {
          t = not_null(r_1);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm m_7 = t;
              if((PushChoice() == 0))
                {
                  t = Imports_1(t, _id);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = m_7;
                }
              return(t);
            }
            t = filter_1(t, o_0);
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = map_1(t, n_0);
  {
    t = concat_0(t);
    {
      t_1 = t;
      t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(t_1));
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_36 (ATerm), ATerm z_36 (ATerm))
{
  ATerm b_2 = NULL,c_2 = NULL,d_2 = NULL;
  b_2 = t;
  a_2 :
  if(match_cons(b_2, sym__2))
    {
      c_2 = ATgetArgument(b_2, 0);
      d_2 = ATgetArgument(b_2, 1);
      {
        ATerm g_2 = NULL;
        t = not_null(c_2);
        {
          ATerm i_2 = NULL;
          t = y_36(t);
          {
            g_2 = t;
            {
              t = not_null(d_2);
              {
                t = z_36(t);
                {
                  i_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_2), not_null(i_2));
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
ATerm UnZip2_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
  r_2 = t;
  o_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      v_2 = ATgetArgument(r_2, 1);
      p_2 :
      if(match_cons(s_2, sym__2))
        {
          t_2 = ATgetArgument(s_2, 0);
          u_2 = ATgetArgument(s_2, 1);
          q_2 :
          if(match_cons(v_2, sym__2))
            {
              w_2 = ATgetArgument(v_2, 0);
              x_2 = ATgetArgument(v_2, 1);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_2)), not_null(t_2)), (ATerm) ATinsert(CheckATermList(not_null(x_2)), not_null(u_2)));
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
  ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL;
  f_3 = t;
  e_3 :
  if(((ATgetType(f_3) == AT_LIST) && ((ATermList) f_3 != ATempty)))
    {
      g_3 = ATgetFirst((ATermList) f_3);
      h_3 = (ATerm) ATgetNext((ATermList) f_3);
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_3), not_null(h_3));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnZip1_0 (ATerm t)
{
  ATerm n_3 = NULL;
  n_3 = t;
  m_3 :
  if(((ATermList) n_3 == ATempty))
    {
      t = term_p_7;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unzip_0 (ATerm t)
{
  t = genzip_4(t, UnZip1_0, UnZip3_0, UnZip2_0, _id);
  return(t);
}
ATerm get_stratego_imports_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL;
  u_3 = t;
  s_3 :
  if(match_cons(u_3, sym__2))
    {
      v_3 = ATgetArgument(u_3, 0);
      w_3 = ATgetArgument(u_3, 1);
      t_3 :
      if(match_cons(w_3, sym_Specification_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            t = not_null(x_3);
            {
              ATerm p_0 (ATerm t)
              {
                ATerm z_3 = NULL,a_4 = NULL;
                z_3 = t;
                r_3 :
                if(match_cons(z_3, sym_Imports_1))
                  {
                    a_4 = ATgetArgument(z_3, 0);
                    t = not_null(a_4);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = filter_1(t, p_0);
              t = concat_0(t);
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
ATerm error_0 (ATerm t)
{
  ATerm c_8;
  c_8 = t;
  {
    ATerm f_4 = NULL;
    ATerm g_4 = NULL;
    g_4 = t;
    if(((f_4 != NULL) && (f_4 != g_4)))
      _fail(g_4);
    else
      f_4 = g_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, not_null(f_4));
      t = printnl_0(t);
    }
  }
  t = c_8;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_8;
  e_8 = t;
  {
    t = error_0(t);
    {
      t = term_f_8;
      t = exit_0(t);
    }
  }
  t = e_8;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm j_4 = NULL;
  j_4 = t;
  t = SSL_ReadFromFile(not_null(j_4));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_56 (ATerm), ATerm y_56 (ATerm))
{
  ATerm o_4 = NULL,q_4 = NULL;
  ATerm g_8;
  g_8 = t;
  {
    ATerm p_4 = NULL;
    t = x_56(t);
    {
      p_4 = t;
      if(((o_4 != NULL) && (o_4 != p_4)))
        _fail(p_4);
      else
        o_4 = p_4;
    }
  }
  t = g_8;
  {
    ATerm r_4 = NULL;
    t = y_56(t);
    {
      r_4 = t;
      if(((q_4 != NULL) && (q_4 != r_4)))
        _fail(r_4);
      else
        q_4 = r_4;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), not_null(q_4));
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
  w_4 = t;
  v_4 :
  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
    {
      x_4 = ATgetFirst((ATermList) w_4);
      y_4 = (ATerm) ATgetNext((ATermList) w_4);
      t = not_null(y_4);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm e_5 = NULL;
  ATerm g_5 = NULL;
  e_5 = t;
  {
    ATerm i_8;
    i_8 = t;
    {
      ATerm h_5 = NULL;
      t = term_j_8;
      {
        h_5 = t;
        if(((g_5 != NULL) && (g_5 != h_5)))
          _fail(h_5);
        else
          g_5 = h_5;
      }
    }
    t = i_8;
    {
      t = SSL_open_file(not_null(e_5), not_null(g_5));
      t = SSL_close_file(not_null(e_5));
    }
  }
  return(t);
}
ATerm find_in_path_0 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
  o_5 = t;
  n_5 :
  if(match_cons(o_5, sym__2))
    {
      p_5 = ATgetArgument(o_5, 0);
      q_5 = ATgetArgument(o_5, 1);
      {
        t = not_null(q_5);
        {
          ATerm y_5 (ATerm t)
          {
            ATerm k_8 = t;
            int l_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_5 = NULL,u_5 = NULL,v_5 = NULL;
                t_5 = t;
                m_5 :
                if(((ATgetType(t_5) == AT_LIST) && ((ATermList) t_5 != ATempty)))
                  {
                    u_5 = ATgetFirst((ATermList) t_5);
                    v_5 = (ATerm) ATgetNext((ATermList) t_5);
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_5)), term_m_8), not_null(u_5));
                      {
                        t = concat_strings_0(t);
                        t = file_exists_0(t);
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                LocalPopChoice(l_8);
              }
            else
              {
                t = k_8;
                {
                  t = Tl_0(t);
                  t = y_5(t);
                }
              }
            return(t);
          }
          t = y_5(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm guarantee_extension_1 (ATerm t, ATerm h_56 (ATerm))
{
  t = basename_0(t);
  {
    ATerm q_0 (ATerm t)
    {
      t = term_n_8;
      t = h_56(t);
      return(t);
    }
    t = split_2(t, _id, q_0);
    t = add_extension_0(t);
  }
  return(t);
}
ATerm rm_files_0 (ATerm t)
{
  ATerm b_6 = NULL;
  b_6 = t;
  {
    ATerm o_8;
    o_8 = t;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_8, (ATerm) ATinsert(CheckATermList(not_null(b_6)), term_r_8));
      t = call_0(t);
    }
    t = o_8;
  }
  return(t);
}
ATerm call_0 (ATerm t)
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym__2))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      t = SSL_call(not_null(h_6), not_null(i_6));
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
ATerm Hd_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  o_6 = t;
  n_6 :
  if(((ATgetType(o_6) == AT_LIST) && ((ATermList) o_6 != ATempty)))
    {
      p_6 = ATgetFirst((ATermList) o_6);
      q_6 = (ATerm) ATgetNext((ATermList) o_6);
      t = not_null(p_6);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  w_6 = t;
  v_6 :
  if(match_cons(w_6, sym__2))
    {
      x_6 = ATgetArgument(w_6, 0);
      y_6 = ATgetArgument(w_6, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(y_6));
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
ATerm rewrite_1 (ATerm t, ATerm j_48 (ATerm))
{
  ATerm e_7 = NULL;
  ATerm g_7 = NULL;
  e_7 = t;
  {
    ATerm h_7 = NULL;
    t = term_n_8;
    {
      t = j_48(t);
      {
        h_7 = t;
        if(((g_7 != NULL) && (g_7 != h_7)))
          _fail(h_7);
        else
          g_7 = h_7;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), not_null(e_7));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Prefix_0 (ATerm t)
{
  ATerm t_7 = NULL;
  t_7 = t;
  s_7 :
  if(match_cons(t_7, sym__0))
    {
      ATerm c_9 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_7 = NULL;
          ATerm v_7 = NULL,w_7 = NULL,x_7 = NULL;
          t = term_e_9;
          {
            ATerm r_0 (ATerm t)
            {
              t = term_f_9;
              return(t);
            }
            t = rewrite_1(t, r_0);
            {
              v_7 = t;
              n_7 :
              if(match_cons(v_7, sym_Defined_2))
                {
                  w_7 = ATgetArgument(v_7, 0);
                  x_7 = ATgetArgument(v_7, 1);
                  o_7 :
                  if(match_string(w_7, "e_0"))
                    {
                      if(((u_7 != NULL) && (u_7 != x_7)))
                        _fail(x_7);
                      else
                        u_7 = x_7;
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
          t = not_null(u_7);
          LocalPopChoice(d_9);
        }
      else
        {
          t = c_9;
          {
            ATerm y_7 = NULL;
            ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
            t = term_e_9;
            {
              ATerm s_0 (ATerm t)
              {
                t = term_f_9;
                return(t);
              }
              t = rewrite_1(t, s_0);
              {
                z_7 = t;
                q_7 :
                if(match_cons(z_7, sym_Defined_2))
                  {
                    a_8 = ATgetArgument(z_7, 0);
                    b_8 = ATgetArgument(z_7, 1);
                    r_7 :
                    if(match_string(a_8, "a_0"))
                      {
                        if(((y_7 != NULL) && (y_7 != b_8)))
                          _fail(b_8);
                        else
                          y_7 = b_8;
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
            t = not_null(y_7);
          }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_8 = NULL;
  h_8 = t;
  t = SSL_int_to_string(not_null(h_8));
  return(t);
}
ATerm get_pid_0 (ATerm t)
{
  t = SSL_get_pid();
  return(t);
}
ATerm parse_mod_0 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm s_8 = NULL,t_8 = NULL;
  q_8 = t;
  {
    ATerm u_8 = NULL,w_8 = NULL;
    ATerm v_8 = NULL;
    t = term_n_8;
    {
      t = get_pid_0(t);
      {
        t = int_to_string_0(t);
        {
          v_8 = t;
          if(((u_8 != NULL) && (u_8 != v_8)))
            _fail(v_8);
          else
            u_8 = v_8;
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_9, not_null(u_8));
      {
        ATerm x_8 = NULL,b_9 = NULL;
        t = conc_strings_0(t);
        {
          w_8 = t;
          {
            if(((t_8 != NULL) && (t_8 != w_8)))
              _fail(w_8);
            else
              t_8 = w_8;
            {
              ATerm y_8 = NULL,a_9 = NULL;
              ATerm z_8 = NULL;
              t = term_n_8;
              {
                t = Prefix_0(t);
                {
                  z_8 = t;
                  if(((y_8 != NULL) && (y_8 != z_8)))
                    _fail(z_8);
                  else
                    y_8 = z_8;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_8), term_h_9);
                {
                  t = conc_strings_0(t);
                  {
                    a_9 = t;
                    if(((x_8 != NULL) && (x_8 != a_9)))
                      _fail(a_9);
                    else
                      x_8 = a_9;
                  }
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(t_8)), term_o_9), not_null(q_8)), term_j_9), term_i_9));
                {
                  t = call_0(t);
                  {
                    t = not_null(t_8);
                    {
                      t = ReadFromFile_0(t);
                      {
                        b_9 = t;
                        {
                          if(((s_8 != NULL) && (s_8 != b_9)))
                            _fail(b_9);
                          else
                            s_8 = b_9;
                          {
                            t = (ATerm) ATinsert(ATempty, not_null(t_8));
                            t = rm_files_0(t);
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
    t = not_null(s_8);
  }
  return(t);
}
ATerm get_module_1 (ATerm t, ATerm h_71 (ATerm))
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_0 (ATerm t)
      {
        t = term_j_8;
        return(t);
      }
      t = guarantee_extension_1(t, t_0);
      {
        t = split_2(t, _id, h_71);
        {
          t = find_in_path_0(t);
          {
            ATerm r_9 = t;
            int s_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = split_2(t, _id, parse_mod_0);
                LocalPopChoice(s_9);
              }
            else
              {
                t = r_9;
                {
                  ATerm k_9 = NULL;
                  ATerm l_9 = NULL;
                  l_9 = t;
                  if(((k_9 != NULL) && (k_9 != l_9)))
                    _fail(l_9);
                  else
                    k_9 = l_9;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_9)), term_x_9);
                    t = fatal_error_0(t);
                  }
                }
              }
          }
        }
      }
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      {
        ATerm b_10 = t;
        int h_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_0 (ATerm t)
            {
              t = term_i_10;
              return(t);
            }
            t = guarantee_extension_1(t, u_0);
            {
              t = split_2(t, _id, h_71);
              {
                t = find_in_path_0(t);
                t = split_2(t, _id, ReadFromFile_0);
              }
            }
            LocalPopChoice(h_10);
          }
        else
          {
            t = b_10;
            {
              ATerm m_9 = NULL;
              ATerm n_9 = NULL;
              n_9 = t;
              if(((m_9 != NULL) && (m_9 != n_9)))
                _fail(n_9);
              else
                m_9 = n_9;
              {
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_10), not_null(m_9)), term_j_10);
                t = fatal_error_0(t);
              }
            }
          }
      }
    }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm w_9 = NULL;
  ATerm y_9 = NULL,z_9 = NULL;
  w_9 = t;
  {
    ATerm a_10 = NULL;
    ATerm c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL;
    t = not_null(w_9);
    {
      a_10 = t;
      {
        t = SSL_explode_term(not_null(a_10));
        {
          c_10 = t;
          t_9 :
          if(match_cons(c_10, sym__2))
            {
              d_10 = ATgetArgument(c_10, 0);
              e_10 = ATgetArgument(c_10, 1);
              u_9 :
              if(match_string(d_10, ""))
                {
                  v_9 :
                  if(((ATgetType(e_10) == AT_LIST) && ((ATermList) e_10 != ATempty)))
                    {
                      f_10 = ATgetFirst((ATermList) e_10);
                      g_10 = (ATerm) ATgetNext((ATermList) e_10);
                      {
                        if(((z_9 != NULL) && (z_9 != f_10)))
                          _fail(f_10);
                        else
                          z_9 = f_10;
                        if(((y_9 != NULL) && (y_9 != g_10)))
                          _fail(g_10);
                        else
                          y_9 = g_10;
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
    t = not_null(z_9);
  }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  n_10 = t;
  l_10 :
  if(match_cons(n_10, sym__5))
    {
      o_10 = ATgetArgument(n_10, 0);
      r_10 = ATgetArgument(n_10, 1);
      s_10 = ATgetArgument(n_10, 2);
      t_10 = ATgetArgument(n_10, 3);
      u_10 = ATgetArgument(n_10, 4);
      m_10 :
      if(((ATgetType(o_10) == AT_LIST) && ((ATermList) o_10 != ATempty)))
        {
          p_10 = ATgetFirst((ATermList) o_10);
          q_10 = (ATerm) ATgetNext((ATermList) o_10);
          t = (ATerm) ATmakeAppl(sym__5, not_null(q_10), not_null(r_10), not_null(s_10), not_null(t_10), (ATerm) ATinsert(CheckATermList(not_null(u_10)), not_null(p_10)));
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
ATerm conc_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  d_11 :
  if(match_cons(e_11, sym__2))
    {
      f_11 = ATgetArgument(e_11, 0);
      g_11 = ATgetArgument(e_11, 1);
      {
        t = not_null(f_11);
        {
          ATerm v_0 (ATerm t)
          {
            t = not_null(g_11);
            return(t);
          }
          t = at_end_1(t, v_0);
        }
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
  ATerm n_11 = NULL,o_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
  n_11 = t;
  l_11 :
  if(match_cons(n_11, sym__2))
    {
      o_11 = ATgetArgument(n_11, 0);
      u_11 = ATgetArgument(n_11, 1);
      m_11 :
      if(((ATgetType(u_11) == AT_LIST) && ((ATermList) u_11 != ATempty)))
        {
          v_11 = ATgetFirst((ATermList) u_11);
          w_11 = (ATerm) ATgetNext((ATermList) u_11);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(o_11)), not_null(v_11)), not_null(w_11));
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
  ATerm m_13 = NULL,n_13 = NULL,o_13 = NULL;
  m_13 = t;
  l_13 :
  if(match_cons(m_13, sym__2))
    {
      n_13 = ATgetArgument(m_13, 0);
      o_13 = ATgetArgument(m_13, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_13)), not_null(n_13));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL;
  i_14 = t;
  d_14 :
  if(match_cons(i_14, sym__2))
    {
      j_14 = ATgetArgument(i_14, 0);
      w_14 = ATgetArgument(i_14, 1);
      e_14 :
      if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
        {
          k_14 = ATgetFirst((ATermList) j_14);
          v_14 = (ATerm) ATgetNext((ATermList) j_14);
          h_14 :
          if(((ATgetType(w_14) == AT_LIST) && ((ATermList) w_14 != ATempty)))
            {
              x_14 = ATgetFirst((ATermList) w_14);
              y_14 = (ATerm) ATgetNext((ATermList) w_14);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(k_14), not_null(x_14)), (ATerm) ATmakeAppl(sym__2, not_null(v_14), not_null(y_14)));
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
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  f_15 :
  if(match_cons(i_15, sym__2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      g_15 :
      if(((ATermList) j_15 == ATempty))
        {
          h_15 :
          if(((ATermList) k_15 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm c_62 (ATerm), ATerm d_62 (ATerm), ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm m_15 (ATerm t)
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_62(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        {
          t = d_62(t);
          {
            t = _2(t, f_62, m_15);
            t = e_62(t);
          }
        }
      }
    return(t);
  }
  t = m_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm h_62 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, h_62);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL;
  x_15 = t;
  v_15 :
  if(((ATgetType(x_15) == AT_LIST) && ((ATermList) x_15 != ATempty)))
    {
      y_15 = ATgetFirst((ATermList) x_15);
      b_16 = (ATerm) ATgetNext((ATermList) x_15);
      w_15 :
      if(match_cons(y_15, sym__2))
        {
          z_15 = ATgetArgument(y_15, 0);
          a_16 = ATgetArgument(y_15, 1);
          {
            ATerm f_16 = NULL,g_16 = NULL,m_16 = NULL,s_16 = NULL;
            ATerm x_10;
            x_10 = t;
            {
              ATerm h_16 = NULL;
              ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
              t = not_null(a_16);
              {
                h_16 = t;
                {
                  t = SSL_explode_term(not_null(h_16));
                  {
                    j_16 = t;
                    q_15 :
                    if(match_cons(j_16, sym__2))
                      {
                        k_16 = ATgetArgument(j_16, 0);
                        l_16 = ATgetArgument(j_16, 1);
                        {
                          if(((f_16 != NULL) && (f_16 != k_16)))
                            _fail(k_16);
                          else
                            f_16 = k_16;
                          if(((g_16 != NULL) && (g_16 != l_16)))
                            _fail(l_16);
                          else
                            g_16 = l_16;
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
            t = x_10;
            {
              ATerm y_10;
              y_10 = t;
              {
                ATerm n_16 = NULL;
                ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL;
                t = not_null(z_15);
                {
                  n_16 = t;
                  {
                    t = SSL_explode_term(not_null(n_16));
                    {
                      p_16 = t;
                      t_15 :
                      if(match_cons(p_16, sym__2))
                        {
                          q_16 = ATgetArgument(p_16, 0);
                          r_16 = ATgetArgument(p_16, 1);
                          {
                            if(((f_16 != NULL) && (f_16 != q_16)))
                              _fail(q_16);
                            else
                              f_16 = q_16;
                            if(((m_16 != NULL) && (m_16 != r_16)))
                              _fail(r_16);
                            else
                              m_16 = r_16;
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
              t = y_10;
              {
                ATerm t_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(g_16));
                {
                  t = zip_1(t, _id);
                  {
                    t_16 = t;
                    if(((s_16 != NULL) && (s_16 != t_16)))
                      _fail(t_16);
                    else
                      s_16 = t_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), not_null(b_16));
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  j_17 = t;
  h_17 :
  if(((ATgetType(j_17) == AT_LIST) && ((ATermList) j_17 != ATempty)))
    {
      k_17 = ATgetFirst((ATermList) j_17);
      n_17 = (ATerm) ATgetNext((ATermList) j_17);
      i_17 :
      if(match_cons(k_17, sym__2))
        {
          l_17 = ATgetArgument(k_17, 0);
          m_17 = ATgetArgument(k_17, 1);
          {
            ATerm p_17 = NULL;
            if(((l_17 != NULL) && (l_17 != m_17)))
              _fail(m_17);
            else
              l_17 = m_17;
            {
              if(((p_17 != NULL) && (p_17 != n_17)))
                _fail(n_17);
              else
                p_17 = n_17;
              t = not_null(p_17);
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
ATerm HdMember_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL;
  x_17 = t;
  t_17 :
  if(((ATgetType(x_17) == AT_LIST) && ((ATermList) x_17 != ATempty)))
    {
      y_17 = ATgetFirst((ATermList) x_17);
      z_17 = (ATerm) ATgetNext((ATermList) x_17);
      {
        t = n_59(t);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm c_18 = NULL;
            c_18 = t;
            if(((y_17 != NULL) && (y_17 != c_18)))
              _fail(c_18);
            else
              y_17 = c_18;
            return(t);
          }
          t = fetch_1(t, w_0);
        }
        t = not_null(z_17);
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
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
      k_18 = t;
      i_18 :
      if(match_cons(k_18, sym__2))
        {
          l_18 = ATgetArgument(k_18, 0);
          m_18 = ATgetArgument(k_18, 1);
          {
            t = not_null(l_18);
            {
              ATerm w_18 (ATerm t)
              {
                ATerm b_11 = t;
                int c_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(c_11);
                  }
                else
                  {
                    t = b_11;
                    {
                      ATerm h_11 = t;
                      int i_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_0 (ATerm t)
                          {
                            t = not_null(m_18);
                            return(t);
                          }
                          t = HdMember_1(t, x_0);
                          t = w_18(t);
                          LocalPopChoice(i_11);
                        }
                      else
                        {
                          t = h_11;
                          t = Cons_2(t, _id, w_18);
                        }
                    }
                  }
                return(t);
              }
              t = w_18(t);
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm d_1 (ATerm t)
        {
          ATerm s_18 = NULL;
          s_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(s_18));
          return(t);
        }
        ATerm e_1 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_1 (ATerm t)
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_1 (ATerm t)
              {
                ATerm p_11 = t;
                int q_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(q_11);
                  }
                else
                  {
                    t = p_11;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, k_1);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, d_1, e_1, i_1);
      }
    }
  return(t);
}
ATerm GnNext_3 (ATerm t, ATerm o_48 (ATerm), ATerm p_48 (ATerm), ATerm q_48 (ATerm))
{
  ATerm h_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  h_19 = t;
  f_19 :
  if(match_cons(h_19, sym__5))
    {
      r_19 = ATgetArgument(h_19, 0);
      u_19 = ATgetArgument(h_19, 1);
      x_19 = ATgetArgument(h_19, 2);
      y_19 = ATgetArgument(h_19, 3);
      z_19 = ATgetArgument(h_19, 4);
      g_19 :
      if(((ATgetType(r_19) == AT_LIST) && ((ATermList) r_19 != ATempty)))
        {
          s_19 = ATgetFirst((ATermList) r_19);
          t_19 = (ATerm) ATgetNext((ATermList) r_19);
          {
            ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,p_20 = NULL,v_20 = NULL,z_20 = NULL;
            ATerm r_11;
            r_11 = t;
            {
              ATerm j_20 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(s_19), not_null(x_19));
              {
                ATerm k_20 = NULL;
                t = o_48(t);
                {
                  j_20 = t;
                  {
                    if(((g_20 != NULL) && (g_20 != j_20)))
                      _fail(j_20);
                    else
                      g_20 = j_20;
                    {
                      t = not_null(g_20);
                      {
                        ATerm l_20 = NULL;
                        t = p_48(t);
                        {
                          k_20 = t;
                          {
                            if(((h_20 != NULL) && (h_20 != k_20)))
                              _fail(k_20);
                            else
                              h_20 = k_20;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_20), not_null(u_19));
                              {
                                t = diff_0(t);
                                {
                                  l_20 = t;
                                  if(((i_20 != NULL) && (i_20 != l_20)))
                                    _fail(l_20);
                                  else
                                    i_20 = l_20;
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
            t = r_11;
            {
              ATerm s_11;
              s_11 = t;
              {
                ATerm u_20 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(t_19));
                {
                  t = conc_0(t);
                  {
                    u_20 = t;
                    if(((p_20 != NULL) && (p_20 != u_20)))
                      _fail(u_20);
                    else
                      p_20 = u_20;
                  }
                }
              }
              t = s_11;
              {
                ATerm t_11;
                t_11 = t;
                {
                  ATerm w_20 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_20), not_null(u_19));
                  {
                    t = conc_0(t);
                    {
                      w_20 = t;
                      if(((v_20 != NULL) && (v_20 != w_20)))
                        _fail(w_20);
                      else
                        v_20 = w_20;
                    }
                  }
                }
                t = t_11;
                {
                  ATerm a_21 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(s_19), not_null(g_20), not_null(y_19));
                  {
                    t = q_48(t);
                    {
                      a_21 = t;
                      if(((z_20 != NULL) && (z_20 != a_21)))
                        _fail(a_21);
                      else
                        z_20 = a_21;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(p_20), not_null(v_20), not_null(x_19), not_null(z_20), not_null(z_19));
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
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
  q_21 = t;
  o_21 :
  if(match_cons(q_21, sym__5))
    {
      r_21 = ATgetArgument(q_21, 0);
      s_21 = ATgetArgument(q_21, 1);
      t_21 = ATgetArgument(q_21, 2);
      u_21 = ATgetArgument(q_21, 3);
      v_21 = ATgetArgument(q_21, 4);
      p_21 :
      if(((ATermList) r_21 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_21), not_null(v_21));
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
  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym__3))
    {
      e_22 = ATgetArgument(d_22, 0);
      f_22 = ATgetArgument(d_22, 1);
      g_22 = ATgetArgument(d_22, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(e_22), not_null(e_22), not_null(f_22), not_null(g_22), (ATerm) ATempty);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_70 (ATerm), ATerm m_70 (ATerm))
{
  ATerm l_22 (ATerm t)
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_70(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        {
          t = m_70(t);
          t = l_22(t);
        }
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm q_70 (ATerm))
{
  t = o_70(t);
  t = while_not_2(t, p_70, q_70);
  return(t);
}
ATerm graph_nodes_undef_roots_3 (ATerm t, ATerm u_48 (ATerm), ATerm v_48 (ATerm), ATerm w_48 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNext_3(t, u_48, v_48, w_48);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, l_1);
  return(t);
}
ATerm graph_nodes_roots_3 (ATerm t, ATerm j_49 (ATerm), ATerm k_49 (ATerm), ATerm l_49 (ATerm))
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL;
  t = graph_nodes_undef_roots_3(t, j_49, k_49, l_49);
  {
    o_22 = t;
    n_22 :
    if(match_cons(o_22, sym__2))
      {
        p_22 = ATgetArgument(o_22, 0);
        q_22 = ATgetArgument(o_22, 1);
        t = not_null(p_22);
      }
    else
      {
        _fail(t);
      }
  }
  return(t);
}
ATerm pack_stratego_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm y_22 = NULL;
  y_22 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, not_null(y_22)), term_c_12), term_b_12), term_n_8, (ATerm) ATempty);
    {
      ATerm m_1 (ATerm t)
      {
        t = Fst_0(t);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm a_23 = NULL;
            ATerm c_23 = NULL;
            t = term_n_8;
            {
              t = g_71(t);
              {
                c_23 = t;
                if(((a_23 != NULL) && (a_23 != c_23)))
                  _fail(c_23);
                else
                  a_23 = c_23;
              }
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(a_23)), term_d_12);
            return(t);
          }
          t = get_module_1(t, p_1);
        }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm d_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL;
        d_23 = t;
        x_22 :
        if(match_cons(d_23, sym__3))
          {
            e_23 = ATgetArgument(d_23, 0);
            f_23 = ATgetArgument(d_23, 1);
            g_23 = ATgetArgument(d_23, 2);
            t = (ATerm) ATinsert(CheckATermList(not_null(g_23)), not_null(f_23));
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = graph_nodes_roots_3(t, m_1, get_stratego_imports_0, n_1);
      {
        t = unzip_0(t);
        t = _2(t, _id, flatten_stratego_0);
      }
    }
  }
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_23 = NULL;
  o_23 = t;
  t = SSL_exit(not_null(o_23));
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_23 = NULL,u_23 = NULL,v_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym__2))
    {
      u_23 = ATgetArgument(t_23, 0);
      v_23 = ATgetArgument(t_23, 1);
      {
        ATerm e_12;
        e_12 = t;
        t = SSL_printnl(not_null(u_23), not_null(v_23));
        t = e_12;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm close_file_0 (ATerm t)
{
  ATerm a_24 = NULL;
  a_24 = t;
  t = SSL_close_file(not_null(a_24));
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL;
  i_24 = t;
  h_24 :
  if(((ATgetType(i_24) == AT_LIST) && ((ATermList) i_24 != ATempty)))
    {
      j_24 = ATgetFirst((ATermList) i_24);
      k_24 = (ATerm) ATgetNext((ATermList) i_24);
      {
        ATerm n_24 = NULL;
        ATerm o_24 = NULL;
        t = term_n_8;
        {
          t = f_65(t);
          {
            o_24 = t;
            if(((n_24 != NULL) && (n_24 != o_24)))
              _fail(o_24);
            else
              n_24 = o_24;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_24)), not_null(j_24)), not_null(n_24));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm s_1 (ATerm t)
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_12);
            }
          else
            {
              t = h_12;
              {
                t = Cons_2(t, _id, s_1);
                t = Sep_1(t, g_65);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, s_1);
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm j_12;
  j_12 = t;
  {
    ATerm u_24 = NULL,w_24 = NULL;
    ATerm k_12;
    k_12 = t;
    {
      ATerm v_24 = NULL;
      t = a_55(t);
      {
        v_24 = t;
        if(((u_24 != NULL) && (u_24 != v_24)))
          _fail(v_24);
        else
          u_24 = v_24;
      }
    }
    t = k_12;
    {
      ATerm x_24 = NULL;
      x_24 = t;
      if(((w_24 != NULL) && (w_24 != x_24)))
        _fail(x_24);
      else
        w_24 = x_24;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_24)), not_null(u_24)));
        t = printnl_0(t);
      }
    }
  }
  t = j_12;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm h_55 (ATerm))
{
  ATerm l_12;
  l_12 = t;
  {
    t = h_55(t);
    {
      ATerm u_1 (ATerm t)
      {
        t = term_m_12;
        return(t);
      }
      t = debug_1(t, u_1);
    }
  }
  t = l_12;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL;
      g_25 = t;
      b_25 :
      if(match_cons(g_25, sym__2))
        {
          h_25 = ATgetArgument(g_25, 0);
          i_25 = ATgetArgument(g_25, 1);
          {
            if(((f_25 != NULL) && (f_25 != h_25)))
              _fail(h_25);
            else
              f_25 = h_25;
            {
              if(((e_25 != NULL) && (e_25 != i_25)))
                _fail(i_25);
              else
                e_25 = i_25;
              t = SSL_open_file(not_null(f_25), not_null(e_25));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        ATerm j_25 = NULL;
        ATerm k_25 = NULL;
        ATerm v_1 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = obsolete_1(t, v_1);
        {
          j_25 = t;
          {
            if(((f_25 != NULL) && (f_25 != j_25)))
              _fail(j_25);
            else
              f_25 = j_25;
            {
              ATerm q_12;
              q_12 = t;
              {
                ATerm l_25 = NULL;
                t = term_r_12;
                {
                  l_25 = t;
                  if(((k_25 != NULL) && (k_25 != l_25)))
                    _fail(l_25);
                  else
                    k_25 = l_25;
                }
              }
              t = q_12;
              t = SSL_open_file(not_null(f_25), not_null(k_25));
            }
          }
        }
      }
    }
  return(t);
}
ATerm add_extension_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym__2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(v_25)), term_d_12), not_null(u_25));
        t = concat_strings_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm create_dep_file_1 (ATerm t, ATerm n_48 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  e_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      {
        ATerm k_26 = NULL,l_26 = NULL;
        ATerm m_26 = NULL;
        t = not_null(g_26);
        {
          ATerm n_26 = NULL,p_26 = NULL;
          t = n_48(t);
          {
            m_26 = t;
            {
              if(((k_26 != NULL) && (k_26 != m_26)))
                _fail(m_26);
              else
                k_26 = m_26;
              {
                ATerm o_26 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), term_s_12);
                {
                  t = add_extension_0(t);
                  {
                    o_26 = t;
                    if(((n_26 != NULL) && (n_26 != o_26)))
                      _fail(o_26);
                    else
                      n_26 = o_26;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_26), term_r_12);
                  {
                    ATerm q_26 = NULL;
                    t = open_file_0(t);
                    {
                      p_26 = t;
                      {
                        if(((l_26 != NULL) && (l_26 != p_26)))
                          _fail(p_26);
                        else
                          l_26 = p_26;
                        {
                          ATerm r_26 = NULL;
                          t = (ATerm) ATinsert(CheckATermList(not_null(h_26)), term_t_12);
                          {
                            ATerm w_1 (ATerm t)
                            {
                              t = term_u_12;
                              return(t);
                            }
                            t = separate_by_1(t, w_1);
                            {
                              r_26 = t;
                              if(((q_26 != NULL) && (q_26 != r_26)))
                                _fail(r_26);
                              else
                                q_26 = r_26;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_26), (ATerm) ATinsert(CheckATermList(not_null(q_26)), not_null(k_26)));
                            {
                              t = printnl_0(t);
                              {
                                t = not_null(l_26);
                                t = close_file_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(h_26));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm x_63 (ATerm))
{
  ATerm x_26 (ATerm t)
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_63, _id);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
        t = Cons_2(t, _id, x_26);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm s_53 (ATerm))
{
  t = fetch_1(t, s_53);
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_70 (ATerm))
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_70(t);
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym__2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      t = SSL_WriteToTextFile(not_null(b_27), not_null(c_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym__2))
    {
      j_27 = ATgetArgument(i_27, 0);
      k_27 = ATgetArgument(i_27, 1);
      t = SSL_WriteToBinaryFile(not_null(j_27), not_null(k_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_57 (ATerm))
{
  ATerm z_12 = t;
  int a_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_13);
    }
  else
    {
      t = z_12;
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_1 (ATerm t)
            {
              t = filter_1(t, p_57);
              return(t);
            }
            t = Cons_2(t, p_57, x_1);
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm q_27 = NULL,r_27 = NULL,s_27 = NULL;
              q_27 = t;
              p_27 :
              if(((ATgetType(q_27) == AT_LIST) && ((ATermList) q_27 != ATempty)))
                {
                  r_27 = ATgetFirst((ATermList) q_27);
                  s_27 = (ATerm) ATgetNext((ATermList) q_27);
                  {
                    t = not_null(s_27);
                    t = filter_1(t, p_57);
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
  return(t);
}
ATerm list_1 (ATerm t, ATerm r_63 (ATerm))
{
  ATerm v_27 (ATerm t)
  {
    ATerm d_13 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(e_13);
      }
    else
      {
        t = d_13;
        t = Cons_2(t, r_63, v_27);
      }
    return(t);
  }
  t = v_27(t);
  return(t);
}
ATerm pack_modules_usage_0 (ATerm t)
{
  ATerm a_28 = NULL;
  ATerm y_1 (ATerm t)
  {
    ATerm b_28 = NULL,c_28 = NULL;
    b_28 = t;
    z_27 :
    if(match_cons(b_28, sym_Program_1))
      {
        c_28 = ATgetArgument(b_28, 0);
        if(((a_28 != NULL) && (a_28 != c_28)))
          _fail(c_28);
        else
          a_28 = c_28;
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = option_defined_1(t, y_1);
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_13), term_h_13), term_g_13), not_null(a_28)), term_f_13));
    {
      t = printnl_0(t);
      {
        t = term_f_8;
        t = exit_0(t);
      }
    }
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_28 = NULL;
  f_28 = t;
  e_28 :
  if(!(match_cons(f_28, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm z_1 (ATerm t)
  {
    ATerm j_13 = t;
    int k_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_13);
      }
    else
      {
        t = j_13;
        {
          ATerm p_13 = t;
          int q_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(q_13);
            }
          else
            {
              t = p_13;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, z_1);
  t = n_54(t);
  return(t);
}
ATerm ArgOption_2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = ArgOption_3(t, n_53, o_53, e_2);
  return(t);
}
ATerm Option_2 (ATerm t, ATerm c_53 (ATerm), ATerm d_53 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    t = term_r_13;
    return(t);
  }
  t = Option_3(t, c_53, d_53, f_2);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  l_28 = t;
  j_28 :
  if(match_string(l_28, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_28) == AT_LIST) && ((ATermList) l_28 != ATempty)))
        {
          m_28 = ATgetFirst((ATermList) l_28);
          n_28 = (ATerm) ATgetNext((ATermList) l_28);
          k_28 :
          if(((ATgetType(n_28) == AT_LIST) && ((ATermList) n_28 != ATempty)))
            {
              o_28 = ATgetFirst((ATermList) n_28);
              p_28 = (ATerm) ATgetNext((ATermList) n_28);
              {
                ATerm t_28 = NULL;
                ATerm s_13;
                s_13 = t;
                {
                  t = not_null(m_28);
                  t = j_0(t);
                }
                t = s_13;
                {
                  ATerm u_28 = NULL;
                  t = not_null(o_28);
                  {
                    t = k_0(t);
                    {
                      u_28 = t;
                      if(((t_28 != NULL) && (t_28 != u_28)))
                        _fail(u_28);
                      else
                        t_28 = u_28;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_28)), not_null(t_28));
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
  ATerm t_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm j_29 = NULL;
        j_29 = t;
        y_28 :
        if(!(match_string(j_29, "-S")))
          {
            if(!(match_string(j_29, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm j_2 (ATerm t)
      {
        t = term_v_13;
        return(t);
      }
      ATerm k_2 (ATerm t)
      {
        t = term_w_13;
        return(t);
      }
      t = Option_3(t, h_2, j_2, k_2);
      LocalPopChoice(u_13);
    }
  else
    {
      t = t_13;
      {
        ATerm x_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              ATerm k_29 = NULL;
              k_29 = t;
              z_28 :
              if(!(match_string(k_29, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_2 (ATerm t)
            {
              t = term_z_13;
              return(t);
            }
            ATerm n_2 (ATerm t)
            {
              t = term_a_14;
              return(t);
            }
            t = Option_3(t, l_2, m_2, n_2);
            LocalPopChoice(y_13);
          }
        else
          {
            t = x_13;
            {
              ATerm b_14 = t;
              int c_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_2 (ATerm t)
                  {
                    ATerm l_29 = NULL;
                    l_29 = t;
                    a_29 :
                    if(!(match_string(l_29, "-v")))
                      {
                        if(!(match_string(l_29, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm z_2 (ATerm t)
                  {
                    t = term_f_14;
                    return(t);
                  }
                  ATerm a_3 (ATerm t)
                  {
                    t = term_g_14;
                    return(t);
                  }
                  t = Option_3(t, y_2, z_2, a_3);
                  LocalPopChoice(c_14);
                }
              else
                {
                  t = b_14;
                  {
                    ATerm l_14 = t;
                    int m_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_3 (ATerm t)
                        {
                          ATerm m_29 = NULL;
                          m_29 = t;
                          b_29 :
                          if(!(match_string(m_29, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm c_3 (ATerm t)
                        {
                          ATerm n_29 = NULL;
                          ATerm o_29 = NULL;
                          o_29 = t;
                          if(((n_29 != NULL) && (n_29 != o_29)))
                            _fail(o_29);
                          else
                            n_29 = o_29;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(n_29));
                          return(t);
                        }
                        ATerm d_3 (ATerm t)
                        {
                          t = term_n_14;
                          return(t);
                        }
                        t = ArgOption_3(t, b_3, c_3, d_3);
                        LocalPopChoice(m_14);
                      }
                    else
                      {
                        t = l_14;
                        {
                          ATerm o_14 = t;
                          int p_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_3 (ATerm t)
                              {
                                ATerm p_29 = NULL;
                                p_29 = t;
                                d_29 :
                                if(!(match_string(p_29, "-i")))
                                  {
                                    if(!(match_string(p_29, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm j_3 (ATerm t)
                              {
                                ATerm q_29 = NULL;
                                ATerm r_29 = NULL;
                                r_29 = t;
                                if(((q_29 != NULL) && (q_29 != r_29)))
                                  _fail(r_29);
                                else
                                  q_29 = r_29;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_29));
                                return(t);
                              }
                              ATerm k_3 (ATerm t)
                              {
                                t = term_q_14;
                                return(t);
                              }
                              t = ArgOption_3(t, i_3, j_3, k_3);
                              LocalPopChoice(p_14);
                            }
                          else
                            {
                              t = o_14;
                              {
                                ATerm r_14 = t;
                                int s_14 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_3 (ATerm t)
                                    {
                                      ATerm s_29 = NULL;
                                      s_29 = t;
                                      f_29 :
                                      if(!(match_string(s_29, "-o")))
                                        {
                                          if(!(match_string(s_29, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm t_29 = NULL;
                                      ATerm u_29 = NULL;
                                      u_29 = t;
                                      if(((t_29 != NULL) && (t_29 != u_29)))
                                        _fail(u_29);
                                      else
                                        t_29 = u_29;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_29));
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = term_t_14;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_3, o_3, p_3);
                                    LocalPopChoice(s_14);
                                  }
                                else
                                  {
                                    t = r_14;
                                    {
                                      ATerm u_14 = t;
                                      int z_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_3 (ATerm t)
                                          {
                                            ATerm v_29 = NULL;
                                            v_29 = t;
                                            h_29 :
                                            if(!(match_string(v_29, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm y_3 (ATerm t)
                                          {
                                            t = term_a_15;
                                            return(t);
                                          }
                                          ATerm b_4 (ATerm t)
                                          {
                                            t = term_b_15;
                                            return(t);
                                          }
                                          t = Option_3(t, q_3, y_3, b_4);
                                          LocalPopChoice(z_14);
                                        }
                                      else
                                        {
                                          t = u_14;
                                          {
                                            ATerm c_4 (ATerm t)
                                            {
                                              ATerm w_29 = NULL;
                                              w_29 = t;
                                              i_29 :
                                              if(!(match_string(w_29, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_4 (ATerm t)
                                            {
                                              t = term_c_15;
                                              return(t);
                                            }
                                            ATerm e_4 (ATerm t)
                                            {
                                              t = term_d_15;
                                              return(t);
                                            }
                                            t = Option_3(t, c_4, d_4, e_4);
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
  ATerm b_30 = NULL;
  b_30 = t;
  t = SSL_table_destroy(not_null(b_30));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm e_30 (ATerm t)
  {
    ATerm e_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_30);
        LocalPopChoice(l_15);
      }
    else
      {
        t = e_15;
        {
          t = Nil_0(t);
          t = d_64(t);
        }
      }
    return(t);
  }
  t = e_30(t);
  return(t);
}
ATerm concat_0 (ATerm t)
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
        ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
        j_30 = t;
        i_30 :
        if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
          {
            k_30 = ATgetFirst((ATermList) j_30);
            l_30 = (ATerm) ATgetNext((ATermList) j_30);
            {
              t = not_null(k_30);
              {
                ATerm h_4 (ATerm t)
                {
                  t = not_null(l_30);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_4);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_63 (ATerm))
{
  ATerm s_30 (ATerm t)
  {
    ATerm p_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = p_15;
        t = Cons_2(t, p_63, s_30);
      }
    return(t);
  }
  t = s_30(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL;
  b_31 = t;
  y_30 :
  if(((ATgetType(b_31) == AT_LIST) && ((ATermList) b_31 != ATempty)))
    {
      z_30 = ATgetFirst((ATermList) b_31);
      a_31 = (ATerm) ATgetNext((ATermList) b_31);
      {
        ATerm e_31 = NULL;
        t = not_null(a_31);
        {
          ATerm s_15;
          s_15 = t;
          {
            ATerm f_31 = NULL,h_31 = NULL,j_31 = NULL;
            ATerm u_15;
            u_15 = t;
            {
              ATerm g_31 = NULL;
              t = i_0(t);
              {
                g_31 = t;
                if(((f_31 != NULL) && (f_31 != g_31)))
                  _fail(g_31);
                else
                  f_31 = g_31;
              }
            }
            t = u_15;
            {
              ATerm i_31 = NULL;
              t = not_null(z_30);
              {
                t = h_0(t);
                {
                  i_31 = t;
                  if(((h_31 != NULL) && (h_31 != i_31)))
                    _fail(i_31);
                  else
                    h_31 = i_31;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_31)), not_null(h_31));
                {
                  j_31 = t;
                  if(((e_31 != NULL) && (e_31 != j_31)))
                    _fail(j_31);
                  else
                    e_31 = j_31;
                }
              }
            }
          }
          t = s_15;
          {
            ATerm i_4 (ATerm t)
            {
              t = not_null(e_31);
              return(t);
            }
            t = reverse_acc_2(t, h_0, i_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_31 == ATempty))
        {
          {
            t = term_n_8;
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
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm t_52 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_47 (ATerm))
{
  ATerm s_31 = NULL,t_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_Program_1))
    {
      t_31 = ATgetArgument(s_31, 0);
      {
        ATerm v_31 = NULL;
        t = not_null(t_31);
        {
          t = m_47(t);
          {
            v_31 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_31));
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
  ATerm p_32 = NULL;
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm q_32 = NULL;
      q_32 = t;
      if(((p_32 != NULL) && (p_32 != q_32)))
        _fail(q_32);
      else
        p_32 = q_32;
      return(t);
    }
    t = Program_1(t, m_4);
    return(t);
  }
  t = option_defined_1(t, l_4);
  {
    ATerm n_4 (ATerm t)
    {
      ATerm r_32 = NULL;
      ATerm s_32 = NULL;
      t = term_n_8;
      {
        ATerm s_4 (ATerm t)
        {
          t = not_null(p_32);
          return(t);
        }
        t = short_description_1(t, s_4);
        {
          t = concat_strings_0(t);
          {
            s_32 = t;
            if(((r_32 != NULL) && (r_32 != s_32)))
              _fail(s_32);
            else
              r_32 = s_32;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATempty, not_null(r_32)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, n_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATempty, term_c_16));
      {
        t = printnl_0(t);
        {
          t = term_i_16;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm t_4 (ATerm t)
                {
                  ATerm t_32 = NULL;
                  t_32 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_32)), term_o_16));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, t_4);
                {
                  ATerm u_4 (ATerm t)
                  {
                    ATerm v_32 = NULL;
                    ATerm w_32 = NULL;
                    t = term_n_8;
                    {
                      ATerm z_4 (ATerm t)
                      {
                        t = not_null(p_32);
                        return(t);
                      }
                      t = long_description_1(t, z_4);
                      {
                        t = concat_strings_0(t);
                        {
                          w_32 = t;
                          if(((v_32 != NULL) && (v_32 != w_32)))
                            _fail(w_32);
                          else
                            v_32 = w_32;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_32)), term_u_16));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, u_4);
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
ATerm Undefined_1 (ATerm t, ATerm n_47 (ATerm))
{
  ATerm e_33 = NULL,f_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_Undefined_1))
    {
      f_33 = ATgetArgument(e_33, 0);
      {
        ATerm h_33 = NULL;
        t = not_null(f_33);
        {
          t = n_47(t);
          {
            h_33 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_33));
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
ATerm Help_0 (ATerm t)
{
  ATerm m_33 = NULL;
  m_33 = t;
  l_33 :
  if(!(match_cons(m_33, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_52 (ATerm))
{
  ATerm o_33 = NULL;
  ATerm p_33 = NULL;
  t = term_n_8;
  {
    t = y_52(t);
    {
      p_33 = t;
      if(((o_33 != NULL) && (o_33 != p_33)))
        _fail(p_33);
      else
        o_33 = p_33;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_d_16, term_e_16, not_null(o_33));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  u_33 :
  if(match_string(v_33, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(v_33) == AT_LIST) && ((ATermList) v_33 != ATempty)))
        {
          w_33 = ATgetFirst((ATermList) v_33);
          x_33 = (ATerm) ATgetNext((ATermList) v_33);
          {
            ATerm a_34 = NULL;
            ATerm v_16;
            v_16 = t;
            {
              t = not_null(w_33);
              t = c_0(t);
            }
            t = v_16;
            {
              ATerm b_34 = NULL;
              t = term_n_8;
              {
                t = f_0(t);
                {
                  b_34 = t;
                  if(((a_34 != NULL) && (a_34 != b_34)))
                    _fail(b_34);
                  else
                    a_34 = b_34;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_33)), not_null(a_34));
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
  ATerm a_5 (ATerm t)
  {
    ATerm g_34 = NULL;
    g_34 = t;
    f_34 :
    if(!(match_string(g_34, "--help")))
      {
        if(!(match_string(g_34, "-h")))
          {
            if(!(match_string(g_34, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_w_16;
    return(t);
  }
  ATerm c_5 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = Option_3(t, a_5, b_5, c_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
  j_34 = t;
  i_34 :
  if(((ATgetType(j_34) == AT_LIST) && ((ATermList) j_34 != ATempty)))
    {
      k_34 = ATgetFirst((ATermList) j_34);
      l_34 = (ATerm) ATgetNext((ATermList) j_34);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_34)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_34)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  p_34 :
  if(((ATermList) q_34 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm y_16;
  y_16 = t;
  {
    ATerm d_5 (ATerm t)
    {
      t = term_z_16;
      t = w_52(t);
      return(t);
    }
    t = try_1(t, d_5);
  }
  t = y_16;
  {
    ATerm f_5 (ATerm t)
    {
      ATerm w_34 = NULL;
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_34));
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
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
                t = w_52(t);
                t = Cons_2(t, _id, i_5);
              }
            }
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, f_5, i_5);
  }
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_52 (ATerm))
{
  ATerm b_35 = NULL;
  ATerm e_17;
  e_17 = t;
  {
    t = term_f_17;
    t = table_put_0(t);
  }
  t = e_17;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm g_17 = t;
      int o_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_52(t);
          LocalPopChoice(o_17);
        }
      else
        {
          t = g_17;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_5);
    {
      ATerm k_5 (ATerm t)
      {
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_s_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            {
              ATerm l_5 (ATerm t)
              {
                ATerm r_5 (ATerm t)
                {
                  ATerm c_35 = NULL;
                  c_35 = t;
                  if(((b_35 != NULL) && (b_35 != c_35)))
                    _fail(c_35);
                  else
                    b_35 = c_35;
                  return(t);
                }
                t = Undefined_1(t, r_5);
                return(t);
              }
              t = option_defined_1(t, l_5);
              {
                ATerm u_17;
                u_17 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_35)), term_v_17));
                  t = printnl_0(t);
                }
                t = u_17;
                {
                  t = system_usage_0(t);
                  {
                    t = term_f_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_5);
      {
        ATerm w_17;
        w_17 = t;
        {
          t = term_d_16;
          t = table_destroy_0(t);
        }
        t = w_17;
      }
    }
  }
  return(t);
}
ATerm pack_module_options_0 (ATerm t)
{
  ATerm s_5 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_5 (ATerm t)
              {
                ATerm u_35 = NULL;
                u_35 = t;
                e_35 :
                if(!(match_string(u_35, "-I")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_5 (ATerm t)
              {
                ATerm v_35 = NULL;
                v_35 = t;
                t = (ATerm) ATmakeAppl(sym_Include_1, not_null(v_35));
                return(t);
              }
              t = ArgOption_2(t, w_5, x_5);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              {
                ATerm f_18 = t;
                int g_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_5 (ATerm t)
                    {
                      ATerm x_35 = NULL;
                      x_35 = t;
                      j_35 :
                      if(!(match_string(x_35, "-nodep")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm a_6 (ATerm t)
                    {
                      t = term_h_18;
                      return(t);
                    }
                    t = Option_2(t, z_5, a_6);
                    LocalPopChoice(g_18);
                  }
                else
                  {
                    t = f_18;
                    {
                      ATerm j_18 = t;
                      int n_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm c_6 (ATerm t)
                          {
                            ATerm y_35 = NULL;
                            y_35 = t;
                            k_35 :
                            if(!(match_string(y_35, "-dep")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm d_6 (ATerm t)
                          {
                            ATerm z_35 = NULL;
                            z_35 = t;
                            t = (ATerm) ATmakeAppl(sym_Dependency_1, not_null(z_35));
                            return(t);
                          }
                          t = ArgOption_2(t, c_6, d_6);
                          LocalPopChoice(n_18);
                        }
                      else
                        {
                          t = j_18;
                          {
                            ATerm e_6 (ATerm t)
                            {
                              ATerm b_36 = NULL;
                              b_36 = t;
                              m_35 :
                              if(!(match_string(b_36, "--prefix")))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            ATerm j_6 (ATerm t)
                            {
                              ATerm c_36 = NULL;
                              c_36 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Defined_2, term_o_18, not_null(c_36)));
                                {
                                  ATerm k_6 (ATerm t)
                                  {
                                    t = term_f_9;
                                    return(t);
                                  }
                                  t = assert_1(t, k_6);
                                }
                                t = (ATerm) ATmakeAppl(sym_Prefix_1, not_null(c_36));
                              }
                              return(t);
                            }
                            t = ArgOption_2(t, e_6, j_6);
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
  t = parse_options_1(t, s_5);
  return(t);
}
ATerm pack_modules_2 (ATerm t, ATerm l_48 (ATerm, ATerm (ATerm)), ATerm m_48 (ATerm))
{
  ATerm n_37 = NULL;
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,y_37 = NULL;
  t = pack_module_options_0(t);
  {
    n_37 = t;
    {
      ATerm l_6 (ATerm t)
      {
        t = need_help_1(t, pack_modules_usage_0);
        return(t);
      }
      t = try_1(t, l_6);
      {
        ATerm m_6 (ATerm t)
        {
          ATerm r_6 (ATerm t)
          {
            ATerm t_37 = NULL,u_37 = NULL;
            t_37 = t;
            b_37 :
            if(match_cons(t_37, sym_Program_1))
              {
                u_37 = ATgetArgument(t_37, 0);
                if(((p_37 != NULL) && (p_37 != u_37)))
                  _fail(u_37);
                else
                  p_37 = u_37;
              }
            else
              {
                if(match_cons(t_37, sym_Input_1))
                  {
                    u_37 = ATgetArgument(t_37, 0);
                    if(((q_37 != NULL) && (q_37 != u_37)))
                      _fail(u_37);
                    else
                      q_37 = u_37;
                  }
                else
                  {
                    if(match_cons(t_37, sym_Output_1))
                      {
                        u_37 = ATgetArgument(t_37, 0);
                        if(((r_37 != NULL) && (r_37 != u_37)))
                          _fail(u_37);
                        else
                          r_37 = u_37;
                      }
                    else
                      {
                        if(match_cons(t_37, sym_Dependency_1))
                          {
                            u_37 = ATgetArgument(t_37, 0);
                            if(((s_37 != NULL) && (s_37 != u_37)))
                              _fail(u_37);
                            else
                              s_37 = u_37;
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
          t = try_1(t, r_6);
          return(t);
        }
        t = list_1(t, m_6);
        {
          ATerm a_38 = NULL;
          ATerm s_6 (ATerm t)
          {
            ATerm v_37 = NULL,w_37 = NULL;
            v_37 = t;
            d_37 :
            if(match_cons(v_37, sym_Include_1))
              {
                w_37 = ATgetArgument(v_37, 0);
                t = not_null(w_37);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = filter_1(t, s_6);
          {
            y_37 = t;
            {
              ATerm c_38 = NULL;
              ATerm p_18 = t;
              int q_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = not_null(q_37);
                  LocalPopChoice(q_18);
                }
              else
                {
                  t = p_18;
                  t = term_r_18;
                }
              {
                a_38 = t;
                {
                  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
                  ATerm t_18 = t;
                  int u_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(r_37);
                      LocalPopChoice(u_18);
                    }
                  else
                    {
                      t = t_18;
                      t = term_v_18;
                    }
                  {
                    c_38 = t;
                    {
                      t = not_null(a_38);
                      {
                        ATerm t_6 (ATerm t)
                        {
                          t = not_null(y_37);
                          return(t);
                        }
                        t = l_48(t, t_6);
                        {
                          e_38 = t;
                          m_37 :
                          if(match_cons(e_38, sym__2))
                            {
                              f_38 = ATgetArgument(e_38, 0);
                              g_38 = ATgetArgument(e_38, 1);
                              {
                                ATerm k_38 = NULL,n_38 = NULL;
                                t = not_null(n_37);
                                {
                                  ATerm x_18 = t;
                                  int y_18 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm u_6 (ATerm t)
                                      {
                                        ATerm j_38 = NULL;
                                        j_38 = t;
                                        i_37 :
                                        if(!(match_cons(j_38, sym_Binary_0)))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      t = option_defined_1(t, u_6);
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(g_38));
                                        t = WriteToBinaryFile_0(t);
                                      }
                                      LocalPopChoice(y_18);
                                    }
                                  else
                                    {
                                      t = x_18;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(g_38));
                                        t = WriteToTextFile_0(t);
                                      }
                                    }
                                  {
                                    ATerm z_6 (ATerm t)
                                    {
                                      ATerm m_38 = NULL;
                                      ATerm z_18 = t;
                                      int a_19 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = not_null(s_37);
                                          LocalPopChoice(a_19);
                                        }
                                      else
                                        {
                                          t = z_18;
                                          {
                                            ATerm b_19 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(n_37);
                                                {
                                                  ATerm a_7 (ATerm t)
                                                  {
                                                    ATerm l_38 = NULL;
                                                    l_38 = t;
                                                    j_37 :
                                                    if(!(match_cons(l_38, sym_NoDependency_0)))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  t = option_defined_1(t, a_7);
                                                }
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = b_19;
                                              }
                                            t = m_48(t);
                                          }
                                        }
                                      {
                                        m_38 = t;
                                        {
                                          if(((k_38 != NULL) && (k_38 != m_38)))
                                            _fail(m_38);
                                          else
                                            k_38 = m_38;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(c_38), not_null(f_38));
                                            {
                                              ATerm b_7 (ATerm t)
                                              {
                                                t = not_null(k_38);
                                                return(t);
                                              }
                                              t = create_dep_file_1(t, b_7);
                                            }
                                          }
                                        }
                                      }
                                      return(t);
                                    }
                                    t = try_1(t, z_6);
                                    {
                                      t = dtime_0(t);
                                      {
                                        n_38 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, term_d_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_19), not_null(n_38)), term_c_19), not_null(p_37)));
                                          {
                                            t = printnl_0(t);
                                            {
                                              t = term_s_17;
                                              t = exit_0(t);
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
ATerm table_put_0 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  ATerm e_19;
  e_19 = t;
  {
    ATerm g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL;
    g_39 = t;
    c_39 :
    if(match_cons(g_39, sym__3))
      {
        h_39 = ATgetArgument(g_39, 0);
        i_39 = ATgetArgument(g_39, 1);
        j_39 = ATgetArgument(g_39, 2);
        {
          if(((d_39 != NULL) && (d_39 != h_39)))
            _fail(h_39);
          else
            d_39 = h_39;
          {
            if(((e_39 != NULL) && (e_39 != i_39)))
              _fail(i_39);
            else
              e_39 = i_39;
            {
              if(((f_39 != NULL) && (f_39 != j_39)))
                _fail(j_39);
              else
                f_39 = j_39;
              t = SSL_table_put(not_null(d_39), not_null(e_39), not_null(f_39));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_19;
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym__2))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      t = SSL_table_get(not_null(o_39), not_null(p_39));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  w_39 = t;
  v_39 :
  if(match_cons(w_39, sym__3))
    {
      x_39 = ATgetArgument(w_39, 0);
      y_39 = ATgetArgument(w_39, 1);
      z_39 = ATgetArgument(w_39, 2);
      {
        ATerm i_19;
        i_19 = t;
        {
          ATerm d_40 = NULL;
          ATerm e_40 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(y_39));
          {
            ATerm j_19 = t;
            int k_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(k_19);
              }
            else
              {
                t = j_19;
                t = (ATerm) ATempty;
              }
            {
              e_40 = t;
              if(((d_40 != NULL) && (d_40 != e_40)))
                _fail(e_40);
              else
                d_40 = e_40;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_39), not_null(y_39), (ATerm) ATinsert(CheckATermList(not_null(d_40)), not_null(z_39)));
            t = table_put_0(t);
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
ATerm assert_1 (ATerm t, ATerm h_48 (ATerm))
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL;
  m_40 = t;
  l_40 :
  if(match_cons(m_40, sym__2))
    {
      n_40 = ATgetArgument(m_40, 0);
      o_40 = ATgetArgument(m_40, 1);
      {
        ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL;
        ATerm l_19;
        l_19 = t;
        {
          ATerm u_40 = NULL;
          ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
          t = h_48(t);
          {
            u_40 = t;
            {
              if(((r_40 != NULL) && (r_40 != u_40)))
                _fail(u_40);
              else
                r_40 = u_40;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(r_40), not_null(n_40), not_null(o_40));
                {
                  t = table_push_0(t);
                  {
                    ATerm m_19 = t;
                    int n_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_40), term_o_19);
                        t = table_get_0(t);
                        LocalPopChoice(n_19);
                      }
                    else
                      {
                        t = m_19;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      v_40 = t;
                      k_40 :
                      if(((ATgetType(v_40) == AT_LIST) && ((ATermList) v_40 != ATempty)))
                        {
                          w_40 = ATgetFirst((ATermList) v_40);
                          x_40 = (ATerm) ATgetNext((ATermList) v_40);
                          {
                            if(((s_40 != NULL) && (s_40 != w_40)))
                              _fail(w_40);
                            else
                              s_40 = w_40;
                            {
                              if(((t_40 != NULL) && (t_40 != x_40)))
                                _fail(x_40);
                              else
                                t_40 = x_40;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(r_40), term_o_19, (ATerm) ATinsert(CheckATermList(not_null(t_40)), (ATerm) ATinsert(CheckATermList(not_null(s_40)), not_null(n_40))));
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
        t = l_19;
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
  ATerm c_41 = NULL;
  c_41 = t;
  t = SSL_implode_string(not_null(c_41));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  t = SSL_explode_string(not_null(g_41));
  return(t);
}
ATerm get_path_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_41 (ATerm t)
        {
          ATerm v_19 = t;
          int w_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, l_41);
              LocalPopChoice(w_19);
            }
          else
            {
              t = v_19;
              {
                ATerm c_7 (ATerm t)
                {
                  ATerm k_41 = NULL;
                  k_41 = t;
                  j_41 :
                  if(!(match_int(k_41, 47)))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm d_7 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = Cons_2(t, c_7, d_7);
              }
            }
          return(t);
        }
        t = l_41(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        t = (ATerm) ATempty;
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm v_47 (ATerm), ATerm w_47 (ATerm))
{
  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL;
  q_41 = t;
  p_41 :
  if(((ATgetType(q_41) == AT_LIST) && ((ATermList) q_41 != ATempty)))
    {
      r_41 = ATgetFirst((ATermList) q_41);
      s_41 = (ATerm) ATgetNext((ATermList) q_41);
      {
        ATerm v_41 = NULL;
        t = not_null(r_41);
        {
          ATerm x_41 = NULL;
          t = v_47(t);
          {
            v_41 = t;
            {
              t = not_null(s_41);
              {
                t = w_47(t);
                {
                  x_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_41)), not_null(v_41));
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
ATerm main_0 (ATerm t)
{
  ATerm d_42 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm e_42 = NULL;
      t = get_path_0(t);
      {
        e_42 = t;
        if(((d_42 != NULL) && (d_42 != e_42)))
          _fail(e_42);
        else
          d_42 = e_42;
      }
      return(t);
    }
    t = Cons_2(t, f_7, _id);
    {
      ATerm b_20;
      b_20 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_9, (ATerm) ATmakeAppl(sym_Defined_2, term_c_20, not_null(d_42)));
        {
          ATerm i_7 (ATerm t)
          {
            t = term_f_9;
            return(t);
          }
          t = assert_1(t, i_7);
        }
      }
      t = b_20;
    }
  }
  t = a_20;
  t = pack_modules_2(t, pack_stratego_1, basename_0);
  return(t);
}
