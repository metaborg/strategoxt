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
ATerm term_o_26;
ATerm term_x_25;
ATerm term_u_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_q_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_w_20;
ATerm term_h_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_y_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_i_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_r_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_l_11;
ATerm term_a_10;
ATerm term_s_9;
ATerm term_q_9;
ATerm term_m_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
void init_constant_terms (void)
{
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("error: operator ", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("/", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" undefined ", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATinsert(ATempty, term_b_9);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("^", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("giving-up", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATinsert(ATempty, term_m_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("passing name of overloaded definition: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Wld_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym_Op_2, term_u_14, (ATerm) ATempty);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_ConstType_1, term_w_14);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATinsert(ATempty, term_x_14);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(sym_FunType_2, term_y_14, term_x_14);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("T", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("D", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Arities", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Definitions", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("d_0", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("e_0", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATinsert(ATempty, term_p_19);
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATinsert(ATempty, term_s_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_w_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATinsert(ATempty, term_c_20);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATinsert(ATempty, term_l_23);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_s_9, term_r_23);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_t_23, term_u_23);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym__3, term_t_23, term_u_23, (ATerm) ATempty);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
ATerm Rec_2 (ATerm, ATerm g_54 (ATerm), ATerm h_54 (ATerm));
ATerm SDef_3 (ATerm, ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm m_54 (ATerm));
ATerm Let_2 (ATerm, ATerm i_54 (ATerm), ATerm j_54 (ATerm));
ATerm sboundin_3 (ATerm, ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm v_76 (ATerm));
ATerm Bind3_0 (ATerm);
ATerm Bind2_0 (ATerm);
ATerm Bind1_0 (ATerm);
ATerm crush_3 (ATerm, ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm));
ATerm HdMember_p__2 (ATerm, ATerm w_62 (ATerm), ATerm x_62 (ATerm));
ATerm diff_1 (ATerm, ATerm b_63 (ATerm));
ATerm free_vars2_4 (ATerm, ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_67 (ATerm));
ATerm svars_arity_0 (ATerm);
ATerm Snd_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_61 (ATerm), ATerm y_61 (ATerm));
ATerm choices_0 (ATerm);
ATerm IsSVar_0 (ATerm);
ATerm Look2_0 (ATerm);
ATerm Look1_0 (ATerm);
ATerm lookup_0 (ATerm);
ATerm SubsVar_2 (ATerm, ATerm w_75 (ATerm), ATerm x_75 (ATerm));
ATerm alltd_1 (ATerm, ATerm w_74 (ATerm));
ATerm subs_args_0 (ATerm);
ATerm substitute_2 (ATerm, ATerm y_75 (ATerm), ATerm z_75 (ATerm));
ATerm substitute_1 (ATerm, ATerm a_76 (ATerm));
ATerm ssubs_0 (ATerm);
ATerm VarDec_2 (ATerm, ATerm n_54 (ATerm), ATerm o_54 (ATerm));
ATerm JoinDefs2_0 (ATerm);
ATerm JoinDefs1_0 (ATerm);
ATerm joindefs_0 (ATerm);
ATerm OverloadedDef_0 (ATerm);
ATerm Expl_0 (ATerm);
ATerm Mapp2_0 (ATerm);
ATerm Mapp1_0 (ATerm);
ATerm Mapp0_0 (ATerm);
ATerm Bapp2_0 (ATerm);
ATerm Bapp1_0 (ATerm);
ATerm Explode_2 (ATerm, ATerm h_52 (ATerm), ATerm i_52 (ATerm));
ATerm Op_2 (ATerm, ATerm q_53 (ATerm), ATerm r_53 (ATerm));
ATerm pat_td_1 (ATerm, ATerm q_79 (ATerm));
ATerm Bapp0_0 (ATerm);
ATerm HL_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm u_64 (ATerm), ATerm v_64 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_64 (ATerm));
ATerm Wld_0 (ATerm);
ATerm buildterm_0 (ATerm);
ATerm App_2 (ATerm, ATerm b_52 (ATerm), ATerm c_52 (ATerm));
ATerm Con_3 (ATerm, ATerm y_51 (ATerm), ATerm z_51 (ATerm), ATerm a_52 (ATerm));
ATerm pureterm_0 (ATerm);
ATerm RtoS_0 (ATerm);
ATerm Scope_2 (ATerm, ATerm k_55 (ATerm), ATerm l_55 (ATerm));
ATerm oncetd_1 (ATerm, ATerm i_74 (ATerm));
ATerm Rcon_0 (ATerm);
ATerm desugarRule_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm q_72 (ATerm));
ATerm desugar_0 (ATerm);
ATerm _0 (ATerm);
ATerm Ttl_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm Thd_0 (ATerm);
ATerm tuple_unzip_1 (ATerm, ATerm z_71 (ATerm));
ATerm MkDistApplication_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm copy_1 (ATerm, ATerm m_62 (ATerm));
ATerm new_0 (ATerm);
ATerm MkThreadApplication_0 (ATerm);
ATerm Zip1b_p__0 (ATerm);
ATerm zipr_1 (ATerm, ATerm e_70 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm DefineCongruence_0 (ATerm);
ATerm CongruenceDef_0 (ATerm);
ATerm get_definition_0 (ATerm);
ATerm GnUndefined_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm y_69 (ATerm), ATerm z_69 (ATerm));
ATerm zip_1 (ATerm, ATerm b_70 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm diff_0 (ATerm);
ATerm GnNextChangeGraph_3 (ATerm, ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm j_56 (ATerm));
ATerm GnExit_0 (ATerm);
ATerm GnInitRoots_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm for_3 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm graph_nodes_undef_roots_chgr_3 (ATerm, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm));
ATerm extract_needed_defs_0 (ATerm);
ATerm assert_1 (ATerm, ATerm b_56 (ATerm));
ATerm Arities_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm table_lookup_0 (ATerm);
ATerm rewrite_1 (ATerm, ATerm d_56 (ATerm));
ATerm Definitions_0 (ATerm);
ATerm sort_defs_0 (ATerm);
ATerm add_0 (ATerm);
ATerm length_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm v_62 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm));
ATerm definition_names_0 (ATerm);
ATerm all_defs_0 (ATerm);
ATerm Strategies_1 (ATerm, ATerm j_53 (ATerm));
ATerm Cons_2 (ATerm, ATerm p_55 (ATerm), ATerm q_55 (ATerm));
ATerm Specification_1 (ATerm, ATerm l_53 (ATerm));
ATerm _2 (ATerm, ATerm c_45 (ATerm), ATerm d_45 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm w_59 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_71 (ATerm), ATerm k_71 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm v_59 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_78 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm c_58 (ATerm));
ATerm map_1 (ATerm, ATerm r_77 (ATerm));
ATerm reverse_1 (ATerm, ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm b_58 (ATerm));
ATerm Program_1 (ATerm, ATerm r_50 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm s_50 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_59 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm b_72 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm g_58 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm e_58 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm d_58 (ATerm));
ATerm iowrap_3 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm m_59 (ATerm));
ATerm iowrap_2 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm));
ATerm iowrap_1 (ATerm, ATerm c_59 (ATerm));
ATerm extract_all_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Nil_0 (ATerm t)
{
  ATerm o_2 = NULL;
  o_2 = t;
  n_2 :
  if(((ATermList) o_2 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDef_0 (ATerm t)
{
  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym__2))
    {
      s_2 = ATgetArgument(r_2, 0);
      t_2 = ATgetArgument(r_2, 1);
      {
        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_c_9), not_null(t_2)), term_a_9), not_null(s_2)), term_z_8);
        t = error_0(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefMod_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL;
  a_3 = t;
  y_2 :
  if(match_cons(a_3, sym__2))
    {
      b_3 = ATgetArgument(a_3, 0);
      e_3 = ATgetArgument(a_3, 1);
      z_2 :
      if(match_cons(b_3, sym_Mod_2))
        {
          c_3 = ATgetArgument(b_3, 0);
          d_3 = ATgetArgument(b_3, 1);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(CheckATermList(term_c_9), not_null(e_3)), term_a_9), not_null(d_3)), term_d_9), not_null(c_3)), term_z_8);
            t = error_0(t);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm MissingDefs_0 (ATerm t)
{
  ATerm m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL;
  m_3 = t;
  k_3 :
  if(match_cons(m_3, sym__2))
    {
      n_3 = ATgetArgument(m_3, 0);
      o_3 = ATgetArgument(m_3, 1);
      l_3 :
      if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
        {
          p_3 = ATgetFirst((ATermList) o_3);
          q_3 = (ATerm) ATgetNext((ATermList) o_3);
          {
            t = (ATerm) ATinsert(CheckATermList(not_null(q_3)), not_null(p_3));
            {
              ATerm b_0 (ATerm t)
              {
                ATerm e_9 = t;
                int f_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = MissingDefMod_0(t);
                    LocalPopChoice(f_9);
                  }
                else
                  {
                    t = e_9;
                    t = MissingDef_0(t);
                  }
                return(t);
              }
              t = map_1(t, b_0);
            }
            t = not_null(n_3);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NoMissingDefs_0 (ATerm t)
{
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  y_3 = t;
  w_3 :
  if(match_cons(y_3, sym__2))
    {
      z_3 = ATgetArgument(y_3, 0);
      a_4 = ATgetArgument(y_3, 1);
      x_3 :
      if(((ATermList) a_4 == ATempty))
        {
          t = not_null(z_3);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm g_9;
  g_9 = t;
  {
    t = error_0(t);
    {
      t = term_j_9;
      t = exit_0(t);
    }
  }
  t = g_9;
  return(t);
}
ATerm giving_up_0 (ATerm t)
{
  t = term_q_9;
  t = fatal_error_0(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm r_9;
  r_9 = t;
  {
    ATerm e_4 = NULL;
    ATerm f_4 = NULL;
    f_4 = t;
    if(((e_4 != NULL) && (e_4 != f_4)))
      _fail(f_4);
    else
      e_4 = f_4;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, not_null(e_4));
      t = printnl_0(t);
    }
  }
  t = r_9;
  return(t);
}
ATerm DefinitionExists_0 (ATerm t)
{
  ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
  s_4 = t;
  q_4 :
  if(match_cons(s_4, sym__2))
    {
      t_4 = ATgetArgument(s_4, 0);
      u_4 = ATgetArgument(s_4, 1);
      r_4 :
      if(match_int(u_4, 0))
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,z_4 = NULL,a_5 = NULL;
              t = not_null(t_4);
              {
                t = Arities_0(t);
                {
                  w_4 = t;
                  l_4 :
                  if(((ATgetType(w_4) == AT_LIST) && ((ATermList) w_4 != ATempty)))
                    {
                      x_4 = ATgetFirst((ATermList) w_4);
                      y_4 = (ATerm) ATgetNext((ATermList) w_4);
                      m_4 :
                      if(((ATgetType(y_4) == AT_LIST) && ((ATermList) y_4 != ATempty)))
                        {
                          z_4 = ATgetFirst((ATermList) y_4);
                          a_5 = (ATerm) ATgetNext((ATermList) y_4);
                          {
                            ATerm z_9 = t;
                            if((PushChoice() == 0))
                              {
                                ATerm c_0 (ATerm t)
                                {
                                  ATerm b_5 = NULL;
                                  b_5 = t;
                                  k_4 :
                                  if(!(match_int(b_5, 0)))
                                    _fail(t);
                                  return(t);
                                }
                                t = fetch_1(t, c_0);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = z_9;
                            {
                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_4)), term_a_10);
                              {
                                t = error_0(t);
                                t = giving_up_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              }
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              {
                ATerm d_5 = NULL;
                ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
                t = not_null(t_4);
                {
                  t = Arities_0(t);
                  {
                    e_5 = t;
                    o_4 :
                    if(((ATgetType(e_5) == AT_LIST) && ((ATermList) e_5 != ATempty)))
                      {
                        f_5 = ATgetFirst((ATermList) e_5);
                        g_5 = (ATerm) ATgetNext((ATermList) e_5);
                        p_4 :
                        if(((ATermList) g_5 == ATempty))
                          {
                            {
                              if(((d_5 != NULL) && (d_5 != f_5)))
                                _fail(f_5);
                              else
                                d_5 = f_5;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
                                t = Definitions_0(t);
                              }
                            }
                          }
                        else
                          _fail(t);
                      }
                    else
                      _fail(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_4), not_null(d_5));
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
ATerm Rec_2 (ATerm t, ATerm g_54 (ATerm), ATerm h_54 (ATerm))
{
  ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL;
  p_5 = t;
  o_5 :
  if(match_cons(p_5, sym_Rec_2))
    {
      q_5 = ATgetArgument(p_5, 0);
      r_5 = ATgetArgument(p_5, 1);
      {
        ATerm u_5 = NULL;
        t = not_null(q_5);
        {
          ATerm w_5 = NULL;
          t = g_54(t);
          {
            u_5 = t;
            {
              t = not_null(r_5);
              {
                t = h_54(t);
                {
                  w_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Rec_2, not_null(u_5), not_null(w_5));
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
ATerm SDef_3 (ATerm t, ATerm k_54 (ATerm), ATerm l_54 (ATerm), ATerm m_54 (ATerm))
{
  ATerm g_6 = NULL,h_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  f_6 :
  if(match_cons(g_6, sym_SDef_3))
    {
      h_6 = ATgetArgument(g_6, 0);
      i_6 = ATgetArgument(g_6, 1);
      j_6 = ATgetArgument(g_6, 2);
      {
        ATerm n_6 = NULL;
        t = not_null(h_6);
        {
          ATerm p_6 = NULL;
          t = k_54(t);
          {
            n_6 = t;
            {
              t = not_null(i_6);
              {
                ATerm r_6 = NULL;
                t = l_54(t);
                {
                  p_6 = t;
                  {
                    t = not_null(j_6);
                    {
                      t = m_54(t);
                      {
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(n_6), not_null(p_6), not_null(r_6));
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
ATerm Let_2 (ATerm t, ATerm i_54 (ATerm), ATerm j_54 (ATerm))
{
  ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
  b_7 = t;
  a_7 :
  if(match_cons(b_7, sym_Let_2))
    {
      c_7 = ATgetArgument(b_7, 0);
      d_7 = ATgetArgument(b_7, 1);
      {
        ATerm g_7 = NULL;
        t = not_null(c_7);
        {
          ATerm i_7 = NULL;
          t = i_54(t);
          {
            g_7 = t;
            {
              t = not_null(d_7);
              {
                t = j_54(t);
                {
                  i_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Let_2, not_null(g_7), not_null(i_7));
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
ATerm sboundin_3 (ATerm t, ATerm t_76 (ATerm), ATerm u_76 (ATerm), ATerm v_76 (ATerm))
{
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2(t, t_76, t_76);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3(t, v_76, v_76, t_76);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = Rec_2(t, v_76, t_76);
          }
      }
    }
  return(t);
}
ATerm Bind3_0 (ATerm t)
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  p_7 = t;
  o_7 :
  if(match_cons(p_7, sym_Rec_2))
    {
      q_7 = ATgetArgument(p_7, 0);
      r_7 = ATgetArgument(p_7, 1);
      t = (ATerm) ATinsert(ATempty, not_null(q_7));
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind2_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_SDef_3))
    {
      a_8 = ATgetArgument(z_7, 0);
      b_8 = ATgetArgument(z_7, 1);
      c_8 = ATgetArgument(z_7, 2);
      {
        t = not_null(b_8);
        {
          ATerm l_0 (ATerm t)
          {
            ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
            g_8 = t;
            x_7 :
            if(match_cons(g_8, sym_VarDec_2))
              {
                h_8 = ATgetArgument(g_8, 0);
                i_8 = ATgetArgument(g_8, 1);
                t = not_null(h_8);
              }
            else
              _fail(t);
            return(t);
          }
          t = map_1(t, l_0);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bind1_0 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL,s_8 = NULL;
  q_8 = t;
  p_8 :
  if(match_cons(q_8, sym_Let_2))
    {
      r_8 = ATgetArgument(q_8, 0);
      s_8 = ATgetArgument(q_8, 1);
      {
        t = not_null(r_8);
        {
          ATerm m_0 (ATerm t)
          {
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL,y_8 = NULL;
            v_8 = t;
            o_8 :
            if(match_cons(v_8, sym_SDef_3))
              {
                w_8 = ATgetArgument(v_8, 0);
                x_8 = ATgetArgument(v_8, 1);
                y_8 = ATgetArgument(v_8, 2);
                t = not_null(w_8);
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
ATerm crush_3 (ATerm t, ATerm g_63 (ATerm), ATerm h_63 (ATerm), ATerm i_63 (ATerm))
{
  ATerm i_9 = NULL;
  ATerm k_9 = NULL;
  i_9 = t;
  {
    ATerm l_9 = NULL;
    ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
    t = not_null(i_9);
    {
      l_9 = t;
      {
        t = SSL_explode_term(not_null(l_9));
        {
          n_9 = t;
          h_9 :
          if(match_cons(n_9, sym__2))
            {
              o_9 = ATgetArgument(n_9, 0);
              p_9 = ATgetArgument(n_9, 1);
              if(((k_9 != NULL) && (k_9 != p_9)))
                _fail(p_9);
              else
                k_9 = p_9;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(k_9);
      t = foldr_3(t, g_63, h_63, i_63);
    }
  }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm w_62 (ATerm), ATerm x_62 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(((ATgetType(w_9) == AT_LIST) && ((ATermList) w_9 != ATempty)))
    {
      x_9 = ATgetFirst((ATermList) w_9);
      y_9 = (ATerm) ATgetNext((ATermList) w_9);
      {
        t = x_62(t);
        {
          ATerm n_0 (ATerm t)
          {
            ATerm b_10 = NULL;
            b_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_9), not_null(b_10));
              t = w_62(t);
            }
            return(t);
          }
          t = fetch_1(t, n_0);
        }
        t = not_null(y_9);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_1 (ATerm t, ATerm b_63 (ATerm))
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(match_cons(h_10, sym__2))
    {
      i_10 = ATgetArgument(h_10, 0);
      j_10 = ATgetArgument(h_10, 1);
      {
        t = not_null(i_10);
        {
          ATerm n_10 (ATerm t)
          {
            ATerm k_10 = t;
            int l_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                LocalPopChoice(l_10);
              }
            else
              {
                t = k_10;
                {
                  ATerm m_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_0 (ATerm t)
                      {
                        t = not_null(j_10);
                        return(t);
                      }
                      t = HdMember_p__2(t, b_63, o_0);
                      t = n_10(t);
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = m_10;
                      t = Cons_2(t, _id, n_10);
                    }
                }
              }
            return(t);
          }
          t = n_10(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars2_4 (ATerm t, ATerm m_67 (ATerm), ATerm n_67 (ATerm), ATerm o_67 (ATerm, ATerm (ATerm), ATerm (ATerm), ATerm (ATerm)), ATerm p_67 (ATerm))
{
  ATerm r_10 (ATerm t)
  {
    ATerm p_0 (ATerm t)
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_67(t);
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          t = (ATerm) ATempty;
        }
      return(t);
    }
    ATerm q_0 (ATerm t)
    {
      ATerm u_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_10 = NULL;
          ATerm b_11;
          b_11 = t;
          {
            ATerm q_10 = NULL;
            t = n_67(t);
            {
              q_10 = t;
              if(((p_10 != NULL) && (p_10 != q_10)))
                _fail(q_10);
              else
                p_10 = q_10;
            }
          }
          t = b_11;
          {
            ATerm r_0 (ATerm t)
            {
              ATerm t_0 (ATerm t)
              {
                t = not_null(p_10);
                return(t);
              }
              t = split_2(t, r_10, t_0);
              t = diff_1(t, p_67);
              return(t);
            }
            ATerm s_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = o_67(t, r_0, r_10, s_0);
            {
              ATerm u_0 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = crush_3(t, u_0, union_0, _id);
            }
          }
          LocalPopChoice(x_10);
        }
      else
        {
          t = u_10;
          {
            ATerm v_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = crush_3(t, v_0, union_0, r_10);
          }
        }
      return(t);
    }
    t = split_2(t, p_0, q_0);
    t = union_0(t);
    return(t);
  }
  t = r_10(t);
  return(t);
}
ATerm svars_arity_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm a_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
    a_11 = t;
    v_10 :
    if(match_cons(a_11, sym_Call_2))
      {
        g_11 = ATgetArgument(a_11, 0);
        i_11 = ATgetArgument(a_11, 1);
        w_10 :
        if(match_cons(g_11, sym_SVar_1))
          {
            h_11 = ATgetArgument(g_11, 0);
            {
              ATerm m_11 = NULL;
              ATerm q_11 = NULL;
              t = not_null(i_11);
              {
                t = length_0(t);
                {
                  q_11 = t;
                  if(((m_11 != NULL) && (m_11 != q_11)))
                    _fail(q_11);
                  else
                    m_11 = q_11;
                }
              }
              t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(m_11)));
            }
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    ATerm c_11 = t;
    int d_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0(t);
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
              t = Bind2_0(t);
              LocalPopChoice(f_11);
            }
          else
            {
              t = e_11;
              t = Bind3_0(t);
            }
        }
      }
    return(t);
  }
  ATerm y_0 (ATerm t)
  {
    ATerm r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL;
    r_11 = t;
    y_10 :
    if(match_cons(r_11, sym__2))
      {
        s_11 = ATgetArgument(r_11, 0);
        v_11 = ATgetArgument(r_11, 1);
        z_10 :
        if(match_cons(s_11, sym__2))
          {
            t_11 = ATgetArgument(s_11, 0);
            u_11 = ATgetArgument(s_11, 1);
            if(((t_11 != NULL) && (t_11 != v_11)))
              _fail(v_11);
            else
              t_11 = v_11;
          }
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  t = free_vars2_4(t, w_0, x_0, sboundin_3, y_0);
  return(t);
}
ATerm Snd_0 (ATerm t)
{
  ATerm l_13 = NULL;
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL;
  l_13 = t;
  {
    ATerm q_13 = NULL;
    ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
    t = not_null(l_13);
    {
      q_13 = t;
      {
        t = SSL_explode_term(not_null(q_13));
        {
          s_13 = t;
          h_13 :
          if(match_cons(s_13, sym__2))
            {
              t_13 = ATgetArgument(s_13, 0);
              u_13 = ATgetArgument(s_13, 1);
              i_13 :
              if(match_string(t_13, ""))
                {
                  j_13 :
                  if(((ATgetType(u_13) == AT_LIST) && ((ATermList) u_13 != ATempty)))
                    {
                      v_13 = ATgetFirst((ATermList) u_13);
                      w_13 = (ATerm) ATgetNext((ATermList) u_13);
                      k_13 :
                      if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
                        {
                          x_13 = ATgetFirst((ATermList) w_13);
                          y_13 = (ATerm) ATgetNext((ATermList) w_13);
                          {
                            if(((n_13 != NULL) && (n_13 != v_13)))
                              _fail(v_13);
                            else
                              n_13 = v_13;
                            {
                              if(((p_13 != NULL) && (p_13 != x_13)))
                                _fail(x_13);
                              else
                                p_13 = x_13;
                              if(((o_13 != NULL) && (o_13 != y_13)))
                                _fail(y_13);
                              else
                                o_13 = y_13;
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
            }
          else
            _fail(t);
        }
      }
    }
    t = not_null(p_13);
  }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_61 (ATerm), ATerm y_61 (ATerm))
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_61(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
        m_14 = t;
        l_14 :
        if(((ATgetType(m_14) == AT_LIST) && ((ATermList) m_14 != ATempty)))
          {
            n_14 = ATgetFirst((ATermList) m_14);
            o_14 = (ATerm) ATgetNext((ATermList) m_14);
            {
              ATerm r_14 = NULL;
              ATerm v_14 = NULL;
              t = not_null(o_14);
              {
                t = foldr_2(t, x_61, y_61);
                {
                  v_14 = t;
                  if(((r_14 != NULL) && (r_14 != v_14)))
                    _fail(v_14);
                  else
                    r_14 = v_14;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), not_null(r_14));
                t = y_61(t);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm choices_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = term_l_11;
    return(t);
  }
  ATerm a_1 (ATerm t)
  {
    ATerm a_15 = NULL,e_15 = NULL;
    ATerm n_11;
    n_11 = t;
    {
      ATerm d_15 = NULL;
      t = Fst_0(t);
      {
        d_15 = t;
        if(((a_15 != NULL) && (a_15 != d_15)))
          _fail(d_15);
        else
          a_15 = d_15;
      }
    }
    t = n_11;
    {
      ATerm f_15 = NULL;
      t = Snd_0(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(a_15), not_null(e_15));
    }
    return(t);
  }
  t = foldr_2(t, z_0, a_1);
  return(t);
}
ATerm IsSVar_0 (ATerm t)
{
  ATerm m_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  m_15 = t;
  j_15 :
  if(match_cons(m_15, sym_Call_2))
    {
      o_15 = ATgetArgument(m_15, 0);
      q_15 = ATgetArgument(m_15, 1);
      k_15 :
      if(match_cons(o_15, sym_SVar_1))
        {
          p_15 = ATgetArgument(o_15, 0);
          l_15 :
          if(((ATermList) q_15 == ATempty))
            {
              t = not_null(p_15);
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
ATerm Look2_0 (ATerm t)
{
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  w_15 = t;
  u_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      v_15 :
      if(((ATgetType(y_15) == AT_LIST) && ((ATermList) y_15 != ATempty)))
        {
          z_15 = ATgetFirst((ATermList) y_15);
          a_16 = (ATerm) ATgetNext((ATermList) y_15);
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(a_16));
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
  ATerm r_16 = NULL,s_16 = NULL,w_16 = NULL,x_16 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
  r_16 = t;
  f_16 :
  if(match_cons(r_16, sym__2))
    {
      s_16 = ATgetArgument(r_16, 0);
      w_16 = ATgetArgument(r_16, 1);
      p_16 :
      if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
        {
          x_16 = ATgetFirst((ATermList) w_16);
          i_17 = (ATerm) ATgetNext((ATermList) w_16);
          q_16 :
          if(match_cons(x_16, sym__2))
            {
              g_17 = ATgetArgument(x_16, 0);
              h_17 = ATgetArgument(x_16, 1);
              {
                ATerm k_17 = NULL;
                if(((s_16 != NULL) && (s_16 != g_17)))
                  _fail(g_17);
                else
                  s_16 = g_17;
                {
                  if(((k_17 != NULL) && (k_17 != h_17)))
                    _fail(h_17);
                  else
                    k_17 = h_17;
                  t = not_null(k_17);
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
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Look1_0(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      {
        t = Look2_0(t);
        t = lookup_0(t);
      }
    }
  return(t);
}
ATerm SubsVar_2 (ATerm t, ATerm w_75 (ATerm), ATerm x_75 (ATerm))
{
  ATerm q_17 = NULL;
  ATerm s_17 = NULL,t_17 = NULL;
  q_17 = t;
  {
    ATerm u_17 = NULL;
    t = not_null(q_17);
    {
      ATerm x_17 = NULL;
      t = w_75(t);
      {
        u_17 = t;
        {
          if(((s_17 != NULL) && (s_17 != u_17)))
            _fail(u_17);
          else
            s_17 = u_17;
          {
            t = x_75(t);
            {
              x_17 = t;
              if(((t_17 != NULL) && (t_17 != x_17)))
                _fail(x_17);
              else
                t_17 = x_17;
            }
          }
        }
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(s_17), not_null(t_17));
      t = lookup_0(t);
    }
  }
  return(t);
}
ATerm alltd_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm g_18 (ATerm t)
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_74(t);
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = _all(t, g_18);
      }
    return(t);
  }
  t = g_18(t);
  return(t);
}
ATerm subs_args_0 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL;
  l_18 = t;
  k_18 :
  if(match_cons(l_18, sym__2))
    {
      m_18 = ATgetArgument(l_18, 0);
      n_18 = ATgetArgument(l_18, 1);
      {
        ATerm q_18 = NULL;
        if(((q_18 != NULL) && (q_18 != n_18)))
          _fail(n_18);
        else
          q_18 = n_18;
      }
    }
  else
    {
      if(match_cons(l_18, sym__3))
        {
          m_18 = ATgetArgument(l_18, 0);
          n_18 = ATgetArgument(l_18, 1);
          o_18 = ATgetArgument(l_18, 2);
          {
            ATerm a_19 = NULL;
            ATerm b_19 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_18), not_null(n_18));
            {
              t = zip_1(t, _id);
              {
                b_19 = t;
                if(((a_19 != NULL) && (a_19 != b_19)))
                  _fail(b_19);
                else
                  a_19 = b_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_19), not_null(o_18));
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm substitute_2 (ATerm t, ATerm y_75 (ATerm), ATerm z_75 (ATerm))
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  t = subs_args_0(t);
  {
    h_19 = t;
    g_19 :
    if(match_cons(h_19, sym__2))
      {
        i_19 = ATgetArgument(h_19, 0);
        j_19 = ATgetArgument(h_19, 1);
        {
          t = not_null(j_19);
          {
            ATerm b_1 (ATerm t)
            {
              ATerm c_1 (ATerm t)
              {
                t = not_null(i_19);
                return(t);
              }
              t = SubsVar_2(t, y_75, c_1);
              t = z_75(t);
              return(t);
            }
            t = alltd_1(t, b_1);
          }
        }
      }
    else
      _fail(t);
  }
  return(t);
}
ATerm substitute_1 (ATerm t, ATerm a_76 (ATerm))
{
  t = substitute_2(t, a_76, _id);
  return(t);
}
ATerm ssubs_0 (ATerm t)
{
  t = substitute_1(t, IsSVar_0);
  return(t);
}
ATerm VarDec_2 (ATerm t, ATerm n_54 (ATerm), ATerm o_54 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  q_19 :
  if(match_cons(t_19, sym_VarDec_2))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      {
        ATerm z_19 = NULL;
        t = not_null(u_19);
        {
          ATerm b_20 = NULL;
          t = n_54(t);
          {
            z_19 = t;
            {
              t = not_null(v_19);
              {
                t = o_54(t);
                {
                  b_20 = t;
                  t = (ATerm) ATmakeAppl(sym_VarDec_2, not_null(z_19), not_null(b_20));
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
ATerm JoinDefs2_0 (ATerm t)
{
  ATerm u_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
  u_20 = t;
  s_20 :
  if(((ATgetType(u_20) == AT_LIST) && ((ATermList) u_20 != ATempty)))
    {
      z_20 = ATgetFirst((ATermList) u_20);
      d_21 = (ATerm) ATgetNext((ATermList) u_20);
      t_20 :
      if(match_cons(z_20, sym_SDef_3))
        {
          a_21 = ATgetArgument(z_20, 0);
          b_21 = ATgetArgument(z_20, 1);
          c_21 = ATgetArgument(z_20, 2);
          {
            ATerm i_21 = NULL,q_21 = NULL,r_21 = NULL,y_22 = NULL;
            ATerm y_11;
            y_11 = t;
            {
              ATerm s_21 = NULL;
              t = not_null(b_21);
              {
                ATerm j_22 = NULL;
                ATerm d_1 (ATerm t)
                {
                  t = VarDec_2(t, new_0, _id);
                  return(t);
                }
                t = map_1(t, d_1);
                {
                  s_21 = t;
                  {
                    if(((i_21 != NULL) && (i_21 != s_21)))
                      _fail(s_21);
                    else
                      i_21 = s_21;
                    {
                      t = not_null(i_21);
                      {
                        ATerm x_22 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
                          t_21 = t;
                          j_20 :
                          if(match_cons(t_21, sym_VarDec_2))
                            {
                              u_21 = ATgetArgument(t_21, 0);
                              v_21 = ATgetArgument(t_21, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(u_21)), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                          return(t);
                        }
                        t = map_1(t, e_1);
                        {
                          j_22 = t;
                          {
                            if(((q_21 != NULL) && (q_21 != j_22)))
                              _fail(j_22);
                            else
                              q_21 = j_22;
                            {
                              t = not_null(u_20);
                              {
                                ATerm f_1 (ATerm t)
                                {
                                  ATerm k_22 = NULL,l_22 = NULL,n_22 = NULL,o_22 = NULL;
                                  k_22 = t;
                                  p_20 :
                                  if(match_cons(k_22, sym_SDef_3))
                                    {
                                      l_22 = ATgetArgument(k_22, 0);
                                      n_22 = ATgetArgument(k_22, 1);
                                      o_22 = ATgetArgument(k_22, 2);
                                      {
                                        ATerm r_22 = NULL;
                                        ATerm w_22 = NULL;
                                        t = not_null(n_22);
                                        {
                                          ATerm g_1 (ATerm t)
                                          {
                                            ATerm s_22 = NULL,t_22 = NULL,u_22 = NULL;
                                            s_22 = t;
                                            n_20 :
                                            if(match_cons(s_22, sym_VarDec_2))
                                              {
                                                t_22 = ATgetArgument(s_22, 0);
                                                u_22 = ATgetArgument(s_22, 1);
                                                t = not_null(t_22);
                                              }
                                            else
                                              _fail(t);
                                            return(t);
                                          }
                                          t = map_1(t, g_1);
                                          {
                                            w_22 = t;
                                            if(((r_22 != NULL) && (r_22 != w_22)))
                                              _fail(w_22);
                                            else
                                              r_22 = w_22;
                                          }
                                        }
                                        {
                                          t = (ATerm) ATmakeAppl(sym__3, not_null(r_22), not_null(q_21), not_null(o_22));
                                          t = ssubs_0(t);
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = map_1(t, f_1);
                                {
                                  x_22 = t;
                                  if(((r_21 != NULL) && (r_21 != x_22)))
                                    _fail(x_22);
                                  else
                                    r_21 = x_22;
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
            t = y_11;
            {
              ATerm z_22 = NULL;
              t = not_null(r_21);
              {
                t = choices_0(t);
                {
                  z_22 = t;
                  if(((y_22 != NULL) && (y_22 != z_22)))
                    _fail(z_22);
                  else
                    y_22 = z_22;
                }
              }
              t = (ATerm) ATmakeAppl(sym_SDef_3, not_null(a_21), not_null(i_21), not_null(y_22));
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
ATerm JoinDefs1_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  m_23 :
  if(((ATgetType(o_23) == AT_LIST) && ((ATermList) o_23 != ATempty)))
    {
      p_23 = ATgetFirst((ATermList) o_23);
      q_23 = (ATerm) ATgetNext((ATermList) o_23);
      n_23 :
      if(((ATermList) q_23 == ATempty))
        {
          t = not_null(p_23);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm joindefs_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = JoinDefs1_0(t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = JoinDefs2_0(t);
    }
  return(t);
}
ATerm OverloadedDef_0 (ATerm t)
{
  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL;
  x_23 = t;
  v_23 :
  if(match_cons(x_23, sym__2))
    {
      y_23 = ATgetArgument(x_23, 0);
      b_24 = ATgetArgument(x_23, 1);
      w_23 :
      if(match_cons(y_23, sym__2))
        {
          z_23 = ATgetArgument(y_23, 0);
          a_24 = ATgetArgument(y_23, 1);
          {
            ATerm f_24 = NULL;
            ATerm g_24 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_23), not_null(a_24));
            {
              t = Definitions_0(t);
              {
                g_24 = t;
                if(((f_24 != NULL) && (f_24 != g_24)))
                  _fail(g_24);
                else
                  f_24 = g_24;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_24), not_null(b_24));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Expl_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym_ExplodeCong_2))
    {
      c_25 = ATgetArgument(b_25, 0);
      a_25 = ATgetArgument(b_25, 1);
      {
        ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL;
        ATerm j_25 = NULL;
        ATerm k_25 = NULL;
        t = new_0(t);
        {
          j_25 = t;
          {
            if(((f_25 != NULL) && (f_25 != j_25)))
              _fail(j_25);
            else
              f_25 = j_25;
            {
              ATerm l_25 = NULL;
              t = new_0(t);
              {
                k_25 = t;
                {
                  if(((g_25 != NULL) && (g_25 != k_25)))
                    _fail(k_25);
                  else
                    g_25 = k_25;
                  {
                    ATerm m_25 = NULL;
                    t = new_0(t);
                    {
                      l_25 = t;
                      {
                        if(((h_25 != NULL) && (h_25 != l_25)))
                          _fail(l_25);
                        else
                          h_25 = l_25;
                        {
                          t = new_0(t);
                          {
                            m_25 = t;
                            if(((i_25 != NULL) && (i_25 != m_25)))
                              _fail(m_25);
                            else
                              i_25 = m_25;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(i_25)), not_null(h_25)), not_null(g_25)), not_null(f_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(h_25)))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, not_null(c_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(f_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25))), (ATerm) ATmakeAppl(sym_BAM_3, not_null(a_25), (ATerm)ATmakeAppl(sym_Var_1, not_null(h_25)), (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))))), (ATerm) ATmakeAppl(sym_Prim_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(i_25))), (ATerm) ATmakeAppl(sym_Var_1, not_null(g_25)))))));
      }
    }
  else
    {
      if(match_cons(b_25, sym_Build_1))
        {
          c_25 = ATgetArgument(b_25, 0);
          {
            ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL;
            ATerm s_25 = NULL;
            ATerm w_25 = NULL;
            t = new_0(t);
            {
              s_25 = t;
              {
                if(((q_25 != NULL) && (q_25 != s_25)))
                  _fail(s_25);
                else
                  q_25 = s_25;
                {
                  t = not_null(c_25);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
                      t_25 = t;
                      s_24 :
                      if(match_cons(t_25, sym_Explode_2))
                        {
                          u_25 = ATgetArgument(t_25, 0);
                          v_25 = ATgetArgument(t_25, 1);
                          {
                            if(((o_25 != NULL) && (o_25 != u_25)))
                              _fail(u_25);
                            else
                              o_25 = u_25;
                            {
                              if(((p_25 != NULL) && (p_25 != v_25)))
                                _fail(v_25);
                              else
                                p_25 = v_25;
                              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25));
                            }
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                    {
                      w_25 = t;
                      if(((r_25 != NULL) && (r_25 != w_25)))
                        _fail(w_25);
                      else
                        r_25 = w_25;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_25)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Prim_2, term_b_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), not_null(o_25))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_25))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_25)))));
          }
        }
      else
        {
          if(match_cons(b_25, sym_Match_1))
            {
              c_25 = ATgetArgument(b_25, 0);
              {
                ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
                ATerm d_26 = NULL;
                ATerm e_26 = NULL;
                t = new_0(t);
                {
                  d_26 = t;
                  {
                    if(((a_26 != NULL) && (a_26 != d_26)))
                      _fail(d_26);
                    else
                      a_26 = d_26;
                    {
                      ATerm i_26 = NULL;
                      t = new_0(t);
                      {
                        e_26 = t;
                        {
                          if(((b_26 != NULL) && (b_26 != e_26)))
                            _fail(e_26);
                          else
                            b_26 = e_26;
                          {
                            t = not_null(c_25);
                            {
                              ATerm i_1 (ATerm t)
                              {
                                ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
                                f_26 = t;
                                x_24 :
                                if(match_cons(f_26, sym_Explode_2))
                                  {
                                    g_26 = ATgetArgument(f_26, 0);
                                    h_26 = ATgetArgument(f_26, 1);
                                    {
                                      if(((y_25 != NULL) && (y_25 != g_26)))
                                        _fail(g_26);
                                      else
                                        y_25 = g_26;
                                      {
                                        if(((z_25 != NULL) && (z_25 != h_26)))
                                          _fail(h_26);
                                        else
                                          z_25 = h_26;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_26));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = oncetd_1(t, i_1);
                              {
                                i_26 = t;
                                if(((c_26 != NULL) && (c_26 != i_26)))
                                  _fail(i_26);
                                else
                                  c_26 = i_26;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(c_26)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(b_26)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26))), (ATerm) ATmakeAppl(sym_Prim_2, term_c_12, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(b_26)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(a_26)), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_25)), not_null(y_25)))))));
              }
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm Mapp2_0 (ATerm t)
{
  ATerm i_27 = NULL,j_27 = NULL;
  i_27 = t;
  h_27 :
  if(match_cons(i_27, sym_Match_1))
    {
      j_27 = ATgetArgument(i_27, 0);
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
            ATerm o_27 = NULL;
            ATerm r_27 = NULL;
            t = new_0(t);
            {
              o_27 = t;
              {
                if(((m_27 != NULL) && (m_27 != o_27)))
                  _fail(o_27);
                else
                  m_27 = o_27;
                {
                  t = not_null(j_27);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm p_27 = NULL,q_27 = NULL;
                      p_27 = t;
                      c_27 :
                      if(match_cons(p_27, sym_RootApp_1))
                        {
                          q_27 = ATgetArgument(p_27, 0);
                          {
                            if(((l_27 != NULL) && (l_27 != q_27)))
                              _fail(q_27);
                            else
                              l_27 = q_27;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, j_1);
                    {
                      r_27 = t;
                      if(((n_27 != NULL) && (n_27 != r_27)))
                        _fail(r_27);
                      else
                        n_27 = r_27;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(m_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(n_27)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(m_27))), not_null(l_27))));
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            {
              ATerm t_27 = NULL,u_27 = NULL,v_27 = NULL;
              ATerm z_27 = NULL;
              t = not_null(j_27);
              {
                ATerm k_1 (ATerm t)
                {
                  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
                  w_27 = t;
                  f_27 :
                  if(match_cons(w_27, sym_App_2))
                    {
                      x_27 = ATgetArgument(w_27, 0);
                      y_27 = ATgetArgument(w_27, 1);
                      {
                        if(((t_27 != NULL) && (t_27 != x_27)))
                          _fail(x_27);
                        else
                          t_27 = x_27;
                        {
                          if(((u_27 != NULL) && (u_27 != y_27)))
                            _fail(y_27);
                          else
                            u_27 = y_27;
                          t = term_g_12;
                        }
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = pat_td_1(t, k_1);
                {
                  z_27 = t;
                  if(((v_27 != NULL) && (v_27 != z_27)))
                    _fail(z_27);
                  else
                    v_27 = z_27;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(v_27)), (ATerm) ATmakeAppl(sym_BA_2, not_null(t_27), not_null(u_27)));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp1_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,r_28 = NULL,s_28 = NULL;
  l_28 = t;
  j_28 :
  if(match_cons(l_28, sym_Match_1))
    {
      m_28 = ATgetArgument(l_28, 0);
      k_28 :
      if(match_cons(m_28, sym_RootApp_1))
        {
          r_28 = ATgetArgument(m_28, 0);
          t = not_null(r_28);
        }
      else
        {
          if(match_cons(m_28, sym_App_2))
            {
              r_28 = ATgetArgument(m_28, 0);
              s_28 = ATgetArgument(m_28, 1);
              t = (ATerm) ATmakeAppl(sym_BA_2, not_null(r_28), not_null(s_28));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Mapp0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL;
  k_29 = t;
  h_29 :
  if(match_cons(k_29, sym_Match_1))
    {
      l_29 = ATgetArgument(k_29, 0);
      {
        ATerm n_29 = NULL,o_29 = NULL;
        ATerm s_29 = NULL;
        t = not_null(l_29);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
            p_29 = t;
            e_29 :
            if(match_cons(p_29, sym_RootApp_1))
              {
                q_29 = ATgetArgument(p_29, 0);
                f_29 :
                if(match_cons(q_29, sym_Match_1))
                  {
                    r_29 = ATgetArgument(q_29, 0);
                    {
                      if(((n_29 != NULL) && (n_29 != r_29)))
                        _fail(r_29);
                      else
                        n_29 = r_29;
                      t = not_null(n_29);
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = pat_td_1(t, l_1);
          {
            s_29 = t;
            if(((o_29 != NULL) && (o_29 != s_29)))
              _fail(s_29);
            else
              o_29 = s_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Match_1, not_null(o_29));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp2_0 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL;
  h_30 = t;
  g_30 :
  if(match_cons(h_30, sym_Build_1))
    {
      i_30 = ATgetArgument(h_30, 0);
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
            ATerm n_30 = NULL;
            ATerm q_30 = NULL;
            t = new_0(t);
            {
              n_30 = t;
              {
                if(((l_30 != NULL) && (l_30 != n_30)))
                  _fail(n_30);
                else
                  l_30 = n_30;
                {
                  t = not_null(i_30);
                  {
                    ATerm m_1 (ATerm t)
                    {
                      ATerm o_30 = NULL,p_30 = NULL;
                      o_30 = t;
                      a_30 :
                      if(match_cons(o_30, sym_RootApp_1))
                        {
                          p_30 = ATgetArgument(o_30, 0);
                          {
                            if(((k_30 != NULL) && (k_30 != p_30)))
                              _fail(p_30);
                            else
                              k_30 = p_30;
                            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(l_30));
                          }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = pat_td_1(t, m_1);
                    {
                      q_30 = t;
                      if(((m_30 != NULL) && (m_30 != q_30)))
                        _fail(q_30);
                      else
                        m_30 = q_30;
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(l_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(k_30), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(l_30))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(m_30))));
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL;
              ATerm w_30 = NULL;
              ATerm a_31 = NULL;
              t = new_0(t);
              {
                w_30 = t;
                {
                  if(((u_30 != NULL) && (u_30 != w_30)))
                    _fail(w_30);
                  else
                    u_30 = w_30;
                  {
                    t = not_null(i_30);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL;
                        x_30 = t;
                        e_30 :
                        if(match_cons(x_30, sym_App_2))
                          {
                            y_30 = ATgetArgument(x_30, 0);
                            z_30 = ATgetArgument(x_30, 1);
                            {
                              if(((s_30 != NULL) && (s_30 != y_30)))
                                _fail(y_30);
                              else
                                s_30 = y_30;
                              {
                                if(((t_30 != NULL) && (t_30 != z_30)))
                                  _fail(z_30);
                                else
                                  t_30 = z_30;
                                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30));
                              }
                            }
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = pat_td_1(t, n_1);
                      {
                        a_31 = t;
                        if(((v_30 != NULL) && (v_30 != a_31)))
                          _fail(a_31);
                        else
                          v_30 = a_31;
                      }
                    }
                  }
                }
              }
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(u_30)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(s_30), not_null(t_30), (ATerm) ATmakeAppl(sym_Var_1, not_null(u_30)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(v_30))));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Bapp1_0 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL;
  n_31 = t;
  l_31 :
  if(match_cons(n_31, sym_Build_1))
    {
      o_31 = ATgetArgument(n_31, 0);
      m_31 :
      if(match_cons(o_31, sym_RootApp_1))
        {
          p_31 = ATgetArgument(o_31, 0);
          t = not_null(p_31);
        }
      else
        {
          if(match_cons(o_31, sym_App_2))
            {
              p_31 = ATgetArgument(o_31, 0);
              q_31 = ATgetArgument(o_31, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_31)), not_null(p_31));
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Explode_2 (ATerm t, ATerm h_52 (ATerm), ATerm i_52 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,j_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Explode_2))
    {
      g_32 = ATgetArgument(f_32, 0);
      j_32 = ATgetArgument(f_32, 1);
      {
        ATerm w_32 = NULL;
        t = not_null(g_32);
        {
          ATerm y_32 = NULL;
          t = h_52(t);
          {
            w_32 = t;
            {
              t = not_null(j_32);
              {
                t = i_52(t);
                {
                  y_32 = t;
                  t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(w_32), not_null(y_32));
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
ATerm Op_2 (ATerm t, ATerm q_53 (ATerm), ATerm r_53 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  h_33 :
  if(match_cons(t_33, sym_Op_2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      {
        ATerm y_33 = NULL;
        t = not_null(u_33);
        {
          ATerm d_34 = NULL;
          t = q_53(t);
          {
            y_33 = t;
            {
              t = not_null(v_33);
              {
                t = r_53(t);
                {
                  d_34 = t;
                  t = (ATerm) ATmakeAppl(sym_Op_2, not_null(y_33), not_null(d_34));
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
ATerm pat_td_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_79(t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              ATerm p_1 (ATerm t)
              {
                t = pat_td_1(t, q_79);
                return(t);
              }
              t = fetch_1(t, p_1);
              return(t);
            }
            t = Op_2(t, _id, o_1);
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = pat_td_1(t, q_79);
                    return(t);
                  }
                  t = Explode_2(t, _id, q_1);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm r_1 (ATerm t)
                    {
                      t = pat_td_1(t, q_79);
                      return(t);
                    }
                    t = Explode_2(t, r_1, _id);
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
  ATerm t_34 = NULL,u_34 = NULL;
  t_34 = t;
  s_34 :
  if(match_cons(t_34, sym_Build_1))
    {
      u_34 = ATgetArgument(t_34, 0);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_34 = NULL,x_34 = NULL;
            ATerm b_35 = NULL;
            t = not_null(u_34);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
                y_34 = t;
                l_34 :
                if(match_cons(y_34, sym_RootApp_1))
                  {
                    z_34 = ATgetArgument(y_34, 0);
                    m_34 :
                    if(match_cons(z_34, sym_Build_1))
                      {
                        a_35 = ATgetArgument(z_34, 0);
                        {
                          if(((w_34 != NULL) && (w_34 != a_35)))
                            _fail(a_35);
                          else
                            w_34 = a_35;
                          t = not_null(w_34);
                        }
                      }
                    else
                      _fail(t);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = pat_td_1(t, s_1);
              {
                b_35 = t;
                if(((x_34 != NULL) && (x_34 != b_35)))
                  _fail(b_35);
                else
                  x_34 = b_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym_Build_1, not_null(x_34));
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
              ATerm k_35 = NULL;
              t = not_null(u_34);
              {
                ATerm t_1 (ATerm t)
                {
                  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL,j_35 = NULL;
                  g_35 = t;
                  p_34 :
                  if(match_cons(g_35, sym_App_2))
                    {
                      h_35 = ATgetArgument(g_35, 0);
                      j_35 = ATgetArgument(g_35, 1);
                      q_34 :
                      if(match_cons(h_35, sym_Build_1))
                        {
                          i_35 = ATgetArgument(h_35, 0);
                          {
                            if(((e_35 != NULL) && (e_35 != i_35)))
                              _fail(i_35);
                            else
                              e_35 = i_35;
                            {
                              if(((d_35 != NULL) && (d_35 != j_35)))
                                _fail(j_35);
                              else
                                d_35 = j_35;
                              t = not_null(e_35);
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
                t = pat_td_1(t, t_1);
                {
                  k_35 = t;
                  if(((f_35 != NULL) && (f_35 != k_35)))
                    _fail(k_35);
                  else
                    f_35 = k_35;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Build_1, not_null(f_35));
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm HL_0 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  l_36 = t;
  d_36 :
  if(match_cons(l_36, sym_InfixApp_3))
    {
      m_36 = ATgetArgument(l_36, 0);
      i_36 = ATgetArgument(l_36, 1);
      h_36 = ATgetArgument(l_36, 2);
      t = (ATerm) ATmakeAppl(sym_App_2, not_null(i_36), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_36)), not_null(m_36))));
    }
  else
    {
      if(match_cons(l_36, sym_BAM_3))
        {
          m_36 = ATgetArgument(l_36, 0);
          i_36 = ATgetArgument(l_36, 1);
          h_36 = ATgetArgument(l_36, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, not_null(h_36))), not_null(m_36)), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_36))));
        }
      else
        {
          if(match_cons(l_36, sym_AM_2))
            {
              m_36 = ATgetArgument(l_36, 0);
              i_36 = ATgetArgument(l_36, 1);
              t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(m_36), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_36)));
            }
          else
            {
              if(match_cons(l_36, sym_MA_2))
                {
                  m_36 = ATgetArgument(l_36, 0);
                  i_36 = ATgetArgument(l_36, 1);
                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(m_36)), not_null(i_36));
                }
              else
                {
                  if(match_cons(l_36, sym_BA_2))
                    {
                      m_36 = ATgetArgument(l_36, 0);
                      i_36 = ATgetArgument(l_36, 1);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(i_36)), not_null(m_36));
                    }
                  else
                    {
                      if(match_cons(l_36, sym_Lets_2))
                        {
                          m_36 = ATgetArgument(l_36, 0);
                          i_36 = ATgetArgument(l_36, 1);
                          t = (ATerm) ATmakeAppl(sym_Let_2, not_null(m_36), not_null(i_36));
                        }
                      else
                        {
                          if(match_cons(l_36, sym_LChoices_1))
                            {
                              m_36 = ATgetArgument(l_36, 0);
                              e_36 :
                              if(((ATgetType(m_36) == AT_LIST) && ((ATermList) m_36 != ATempty)))
                                {
                                  j_36 = ATgetFirst((ATermList) m_36);
                                  k_36 = (ATerm) ATgetNext((ATermList) m_36);
                                  t = (ATerm) ATmakeAppl(sym_LChoice_2, not_null(j_36), (ATerm) ATmakeAppl(sym_LChoices_1, not_null(k_36)));
                                }
                              else
                                {
                                  if(((ATermList) m_36 == ATempty))
                                    {
                                      t = term_l_11;
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(l_36, sym_Choices_1))
                                {
                                  m_36 = ATgetArgument(l_36, 0);
                                  f_36 :
                                  if(((ATgetType(m_36) == AT_LIST) && ((ATermList) m_36 != ATempty)))
                                    {
                                      j_36 = ATgetFirst((ATermList) m_36);
                                      k_36 = (ATerm) ATgetNext((ATermList) m_36);
                                      t = (ATerm) ATmakeAppl(sym_Choice_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Choices_1, not_null(k_36)));
                                    }
                                  else
                                    {
                                      if(((ATermList) m_36 == ATempty))
                                        {
                                          t = term_l_11;
                                        }
                                      else
                                        _fail(t);
                                    }
                                }
                              else
                                {
                                  if(match_cons(l_36, sym_Seqs_1))
                                    {
                                      m_36 = ATgetArgument(l_36, 0);
                                      g_36 :
                                      if(((ATgetType(m_36) == AT_LIST) && ((ATermList) m_36 != ATempty)))
                                        {
                                          j_36 = ATgetFirst((ATermList) m_36);
                                          k_36 = (ATerm) ATgetNext((ATermList) m_36);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, not_null(j_36), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(k_36)));
                                        }
                                      else
                                        {
                                          if(((ATermList) m_36 == ATempty))
                                            {
                                              t = term_r_12;
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
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
ATerm repeat_2 (ATerm t, ATerm u_64 (ATerm), ATerm v_64 (ATerm))
{
  ATerm e_38 (ATerm t)
  {
    ATerm s_12 = t;
    int t_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_64(t);
        t = e_38(t);
        LocalPopChoice(t_12);
      }
    else
      {
        t = s_12;
        t = v_64(t);
      }
    return(t);
  }
  t = e_38(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_64 (ATerm))
{
  t = repeat_2(t, x_64, _id);
  return(t);
}
ATerm Wld_0 (ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  f_38 :
  if(!(match_cons(g_38, sym_Wld_0)))
    _fail(t);
  return(t);
}
ATerm buildterm_0 (ATerm t)
{
  ATerm u_12 = t;
  if((PushChoice() == 0))
    {
      ATerm u_1 (ATerm t)
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3(t, _id, _id, _id);
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            t = Wld_0(t);
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      PopChoice();
      _fail(t);
    }
  else
    t = u_12;
  return(t);
}
ATerm App_2 (ATerm t, ATerm b_52 (ATerm), ATerm c_52 (ATerm))
{
  ATerm t_38 = NULL,k_41 = NULL,l_41 = NULL;
  t_38 = t;
  s_38 :
  if(match_cons(t_38, sym_App_2))
    {
      k_41 = ATgetArgument(t_38, 0);
      l_41 = ATgetArgument(t_38, 1);
      {
        ATerm o_41 = NULL;
        t = not_null(k_41);
        {
          ATerm q_41 = NULL;
          t = b_52(t);
          {
            o_41 = t;
            {
              t = not_null(l_41);
              {
                t = c_52(t);
                {
                  q_41 = t;
                  t = (ATerm) ATmakeAppl(sym_App_2, not_null(o_41), not_null(q_41));
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
ATerm Con_3 (ATerm t, ATerm y_51 (ATerm), ATerm z_51 (ATerm), ATerm a_52 (ATerm))
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym_Con_3))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      i_45 = ATgetArgument(f_45, 2);
      {
        ATerm m_45 = NULL;
        t = not_null(g_45);
        {
          ATerm o_45 = NULL;
          t = y_51(t);
          {
            m_45 = t;
            {
              t = not_null(h_45);
              {
                ATerm q_45 = NULL;
                t = z_51(t);
                {
                  o_45 = t;
                  {
                    t = not_null(i_45);
                    {
                      t = a_52(t);
                      {
                        q_45 = t;
                        t = (ATerm) ATmakeAppl(sym_Con_3, not_null(m_45), not_null(o_45), not_null(q_45));
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
ATerm pureterm_0 (ATerm t)
{
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
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
      t = topdown_1(t, v_1);
      PopChoice();
      _fail(t);
    }
  else
    t = x_12;
  return(t);
}
ATerm RtoS_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL;
  a_46 = t;
  y_45 :
  if(match_cons(a_46, sym_SRule_1))
    {
      b_46 = ATgetArgument(a_46, 0);
      z_45 :
      if(match_cons(b_46, sym_StratRule_3))
        {
          c_46 = ATgetArgument(b_46, 0);
          d_46 = ATgetArgument(b_46, 1);
          e_46 = ATgetArgument(b_46, 2);
          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_46)), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_46))), not_null(c_46)));
        }
      else
        {
          if(match_cons(b_46, sym_Rule_3))
            {
              c_46 = ATgetArgument(b_46, 0);
              d_46 = ATgetArgument(b_46, 1);
              e_46 = ATgetArgument(b_46, 2);
              {
                t = not_null(c_46);
                {
                  t = pureterm_0(t);
                  {
                    t = not_null(d_46);
                    t = buildterm_0(t);
                  }
                }
                t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, not_null(d_46))), (ATerm) ATmakeAppl(sym_Where_1, not_null(e_46))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_46))));
              }
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm Scope_2 (ATerm t, ATerm k_55 (ATerm), ATerm l_55 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym_Scope_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      {
        ATerm w_46 = NULL;
        t = not_null(s_46);
        {
          ATerm y_46 = NULL;
          t = k_55(t);
          {
            w_46 = t;
            {
              t = not_null(t_46);
              {
                t = l_55(t);
                {
                  y_46 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, not_null(w_46), not_null(y_46));
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
ATerm oncetd_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm d_47 (ATerm t)
  {
    ATerm a_13 = t;
    int b_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_74(t);
        LocalPopChoice(b_13);
      }
    else
      {
        t = a_13;
        t = _one(t, d_47);
      }
    return(t);
  }
  t = d_47(t);
  return(t);
}
ATerm Rcon_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  s_47 = t;
  q_47 :
  if(match_cons(s_47, sym_SRule_1))
    {
      t_47 = ATgetArgument(s_47, 0);
      r_47 :
      if(match_cons(t_47, sym_Rule_3))
        {
          u_47 = ATgetArgument(t_47, 0);
          v_47 = ATgetArgument(t_47, 1);
          w_47 = ATgetArgument(t_47, 2);
          {
            ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL;
            ATerm i_48 = NULL;
            ATerm o_48 = NULL;
            t = new_0(t);
            {
              i_48 = t;
              {
                if(((f_48 != NULL) && (f_48 != i_48)))
                  _fail(i_48);
                else
                  f_48 = i_48;
                {
                  t = not_null(u_47);
                  {
                    ATerm w_48 = NULL;
                    ATerm w_1 (ATerm t)
                    {
                      ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL;
                      j_48 = t;
                      h_47 :
                      if(match_cons(j_48, sym_Con_3))
                        {
                          k_48 = ATgetArgument(j_48, 0);
                          m_48 = ATgetArgument(j_48, 1);
                          n_48 = ATgetArgument(j_48, 2);
                          i_47 :
                          if(match_cons(k_48, sym_Var_1))
                            {
                              l_48 = ATgetArgument(k_48, 0);
                              {
                                if(((e_48 != NULL) && (e_48 != l_48)))
                                  _fail(l_48);
                                else
                                  e_48 = l_48;
                                {
                                  if(((c_48 != NULL) && (c_48 != m_48)))
                                    _fail(m_48);
                                  else
                                    c_48 = m_48;
                                  {
                                    if(((a_48 != NULL) && (a_48 != n_48)))
                                      _fail(n_48);
                                    else
                                      a_48 = n_48;
                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(e_48));
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
                    t = oncetd_1(t, w_1);
                    {
                      o_48 = t;
                      {
                        if(((g_48 != NULL) && (g_48 != o_48)))
                          _fail(o_48);
                        else
                          g_48 = o_48;
                        {
                          t = not_null(v_47);
                          {
                            ATerm x_1 (ATerm t)
                            {
                              ATerm p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL;
                              p_48 = t;
                              l_47 :
                              if(match_cons(p_48, sym_Con_3))
                                {
                                  q_48 = ATgetArgument(p_48, 0);
                                  s_48 = ATgetArgument(p_48, 1);
                                  t_48 = ATgetArgument(p_48, 2);
                                  m_47 :
                                  if(match_cons(q_48, sym_Var_1))
                                    {
                                      r_48 = ATgetArgument(q_48, 0);
                                      n_47 :
                                      if(match_cons(t_48, sym_Call_2))
                                        {
                                          u_48 = ATgetArgument(t_48, 0);
                                          v_48 = ATgetArgument(t_48, 1);
                                          o_47 :
                                          if(((ATermList) v_48 == ATempty))
                                            {
                                              {
                                                if(((e_48 != NULL) && (e_48 != r_48)))
                                                  _fail(r_48);
                                                else
                                                  e_48 = r_48;
                                                {
                                                  if(((d_48 != NULL) && (d_48 != s_48)))
                                                    _fail(s_48);
                                                  else
                                                    d_48 = s_48;
                                                  {
                                                    if(((b_48 != NULL) && (b_48 != u_48)))
                                                      _fail(u_48);
                                                    else
                                                      b_48 = u_48;
                                                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(f_48));
                                                  }
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
                                }
                              else
                                _fail(t);
                              return(t);
                            }
                            t = oncetd_1(t, x_1);
                            {
                              w_48 = t;
                              if(((h_48 != NULL) && (h_48 != w_48)))
                                _fail(w_48);
                              else
                                h_48 = w_48;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(f_48)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_48), not_null(h_48), (ATerm) ATmakeAppl(sym_Seq_2, not_null(w_47), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, not_null(b_48), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(c_48), not_null(d_48), term_r_12)))), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_48)), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_48)))))));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm desugarRule_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0(t);
        t = desugarRule_0(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2(t, _id, desugarRule_0);
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              t = RtoS_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1(t, y_1);
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm e_49 (ATerm t)
  {
    t = q_72(t);
    t = _all(t, e_49);
    return(t);
  }
  t = e_49(t);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, desugarRule_0);
    {
      ATerm a_2 (ATerm t)
      {
        ATerm g_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = HL_0(t);
            LocalPopChoice(m_13);
          }
        else
          {
            t = g_13;
            {
              ATerm r_13 = t;
              int z_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_14 = t;
                  int b_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Bapp0_0(t);
                      LocalPopChoice(b_14);
                    }
                  else
                    {
                      t = a_14;
                      {
                        ATerm c_14 = t;
                        int d_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Bapp1_0(t);
                            LocalPopChoice(d_14);
                          }
                        else
                          {
                            t = c_14;
                            t = Bapp2_0(t);
                          }
                      }
                    }
                  LocalPopChoice(z_13);
                }
              else
                {
                  t = r_13;
                  {
                    ATerm e_14 = t;
                    int f_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_14 = t;
                        int h_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Mapp0_0(t);
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
                                  t = Mapp1_0(t);
                                  LocalPopChoice(j_14);
                                }
                              else
                                {
                                  t = i_14;
                                  t = Mapp2_0(t);
                                }
                            }
                          }
                        LocalPopChoice(f_14);
                      }
                    else
                      {
                        t = e_14;
                        t = Expl_0(t);
                      }
                  }
                }
            }
          }
        return(t);
      }
      t = repeat_1(t, a_2);
    }
    return(t);
  }
  t = topdown_1(t, z_1);
  return(t);
}
ATerm _0 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  f_49 :
  if(!(match_cons(g_49, sym__0)))
    _fail(t);
  return(t);
}
ATerm Ttl_0 (ATerm t)
{
  ATerm o_49 = NULL;
  ATerm q_49 = NULL,r_49 = NULL,z_49 = NULL;
  o_49 = t;
  {
    ATerm k_14;
    k_14 = t;
    {
      ATerm s_49 = NULL;
      ATerm u_49 = NULL,v_49 = NULL,w_49 = NULL,x_49 = NULL,y_49 = NULL;
      t = not_null(o_49);
      {
        s_49 = t;
        {
          t = SSL_explode_term(not_null(s_49));
          {
            u_49 = t;
            k_49 :
            if(match_cons(u_49, sym__2))
              {
                v_49 = ATgetArgument(u_49, 0);
                w_49 = ATgetArgument(u_49, 1);
                l_49 :
                if(match_string(v_49, ""))
                  {
                    m_49 :
                    if(((ATgetType(w_49) == AT_LIST) && ((ATermList) w_49 != ATempty)))
                      {
                        x_49 = ATgetFirst((ATermList) w_49);
                        y_49 = (ATerm) ATgetNext((ATermList) w_49);
                        {
                          if(((q_49 != NULL) && (q_49 != x_49)))
                            _fail(x_49);
                          else
                            q_49 = x_49;
                          if(((r_49 != NULL) && (r_49 != y_49)))
                            _fail(y_49);
                          else
                            r_49 = y_49;
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
          }
        }
      }
    }
    t = k_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(r_49));
      {
        z_49 = t;
        t = not_null(z_49);
      }
    }
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm l_50 = NULL;
  ATerm n_50 = NULL,o_50 = NULL;
  l_50 = t;
  {
    ATerm p_50 = NULL;
    ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL;
    t = not_null(l_50);
    {
      p_50 = t;
      {
        t = SSL_explode_term(not_null(p_50));
        {
          t_50 = t;
          i_50 :
          if(match_cons(t_50, sym__2))
            {
              u_50 = ATgetArgument(t_50, 0);
              v_50 = ATgetArgument(t_50, 1);
              j_50 :
              if(match_string(u_50, ""))
                {
                  k_50 :
                  if(((ATgetType(v_50) == AT_LIST) && ((ATermList) v_50 != ATempty)))
                    {
                      w_50 = ATgetFirst((ATermList) v_50);
                      x_50 = (ATerm) ATgetNext((ATermList) v_50);
                      {
                        if(((o_50 != NULL) && (o_50 != w_50)))
                          _fail(w_50);
                        else
                          o_50 = w_50;
                        if(((n_50 != NULL) && (n_50 != x_50)))
                          _fail(x_50);
                        else
                          n_50 = x_50;
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
        }
      }
    }
    t = not_null(o_50);
  }
  return(t);
}
ATerm Thd_0 (ATerm t)
{
  t = Fst_0(t);
  return(t);
}
ATerm tuple_unzip_1 (ATerm t, ATerm z_71 (ATerm))
{
  ATerm j_51 = NULL,l_51 = NULL;
  ATerm n_51 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_51 = NULL,h_51 = NULL;
        ATerm s_14;
        s_14 = t;
        {
          ATerm g_51 = NULL;
          t = map_1(t, Thd_0);
          {
            t = z_71(t);
            {
              g_51 = t;
              if(((f_51 != NULL) && (f_51 != g_51)))
                _fail(g_51);
              else
                f_51 = g_51;
            }
          }
        }
        t = s_14;
        {
          ATerm i_51 = NULL;
          t = map_1(t, Ttl_0);
          {
            t = n_51(t);
            {
              i_51 = t;
              if(((h_51 != NULL) && (h_51 != i_51)))
                _fail(i_51);
              else
                h_51 = i_51;
            }
          }
          t = (ATerm) ATinsert(CheckATermList(not_null(h_51)), not_null(f_51));
        }
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          t = map_1(t, _0);
          t = (ATerm) ATempty;
        }
      }
    return(t);
  }
  t = n_51(t);
  {
    ATerm t_14;
    t_14 = t;
    {
      ATerm k_51 = NULL;
      k_51 = t;
      if(((j_51 != NULL) && (j_51 != k_51)))
        _fail(k_51);
      else
        j_51 = k_51;
    }
    t = t_14;
    {
      t = SSL_mkterm((ATerm)ATmakeAppl(ATmakeSymbol("", 0, ATtrue)), not_null(j_51));
      {
        l_51 = t;
        t = not_null(l_51);
      }
    }
  }
  return(t);
}
ATerm MkDistApplication_0 (ATerm t)
{
  ATerm w_51 = NULL;
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  w_51 = t;
  {
    ATerm g_52 = NULL;
    ATerm j_52 = NULL;
    t = new_0(t);
    {
      g_52 = t;
      {
        if(((d_52 != NULL) && (d_52 != g_52)))
          _fail(g_52);
        else
          d_52 = g_52;
        {
          ATerm k_52 = NULL;
          t = new_0(t);
          {
            j_52 = t;
            {
              if(((e_52 != NULL) && (e_52 != j_52)))
                _fail(j_52);
              else
                e_52 = j_52;
              {
                t = new_0(t);
                {
                  k_52 = t;
                  if(((f_52 != NULL) && (f_52 != k_52)))
                    _fail(k_52);
                  else
                    f_52 = k_52;
                }
              }
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(d_52)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_51)), (ATerm) ATmakeAppl(sym_Var_1, not_null(e_52)))), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_52))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(d_52), term_z_14), not_null(e_52), (ATerm)ATmakeAppl(sym_Var_1, not_null(e_52)), not_null(f_52), (ATerm) ATmakeAppl(sym_Var_1, not_null(f_52)));
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  q_52 :
  if(match_cons(r_52, sym__2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(s_52), not_null(t_52));
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            t = SSL_subtr(not_null(s_52), not_null(t_52));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  y_52 :
  if(match_cons(z_52, sym__2))
    {
      a_53 = ATgetArgument(z_52, 0);
      b_53 = ATgetArgument(z_52, 1);
      {
        ATerm g_15;
        g_15 = t;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(a_53), not_null(b_53));
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = SSL_gtr(not_null(a_53), not_null(b_53));
            }
        }
        t = g_15;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm h_53 = NULL;
  ATerm n_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_53 = NULL,k_53 = NULL,m_53 = NULL;
      i_53 = t;
      g_53 :
      if(match_cons(i_53, sym__2))
        {
          k_53 = ATgetArgument(i_53, 0);
          m_53 = ATgetArgument(i_53, 1);
          {
            if(((h_53 != NULL) && (h_53 != k_53)))
              _fail(k_53);
            else
              h_53 = k_53;
            if(((h_53 != NULL) && (h_53 != m_53)))
              _fail(m_53);
            else
              h_53 = m_53;
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = n_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm copy_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm b_2 (ATerm t)
  {
    ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
    z_53 = t;
    p_53 :
    if(match_cons(z_53, sym__2))
      {
        a_54 = ATgetArgument(z_53, 0);
        b_54 = ATgetArgument(z_53, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(a_54), not_null(b_54), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,p_54 = NULL,q_54 = NULL;
    e_54 = t;
    t_53 :
    if(match_cons(e_54, sym__3))
      {
        f_54 = ATgetArgument(e_54, 0);
        p_54 = ATgetArgument(e_54, 1);
        q_54 = ATgetArgument(e_54, 2);
        u_53 :
        if(match_int(f_54, 0))
          t = not_null(q_54);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm d_2 (ATerm t)
  {
    ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
    t_54 = t;
    y_53 :
    if(match_cons(t_54, sym__3))
      {
        u_54 = ATgetArgument(t_54, 0);
        v_54 = ATgetArgument(t_54, 1);
        w_54 = ATgetArgument(t_54, 2);
        {
          ATerm a_55 = NULL,c_55 = NULL;
          ATerm s_15;
          s_15 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), term_j_9);
            t = geq_0(t);
          }
          t = s_15;
          {
            ATerm t_15;
            t_15 = t;
            {
              ATerm b_55 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_54), term_j_9);
              {
                t = subt_0(t);
                {
                  b_55 = t;
                  if(((a_55 != NULL) && (a_55 != b_55)))
                    _fail(b_55);
                  else
                    a_55 = b_55;
                }
              }
            }
            t = t_15;
            {
              ATerm d_55 = NULL;
              t = not_null(v_54);
              {
                t = m_62(t);
                {
                  d_55 = t;
                  if(((c_55 != NULL) && (c_55 != d_55)))
                    _fail(d_55);
                  else
                    c_55 = d_55;
                }
              }
              t = (ATerm) ATmakeAppl(sym__3, not_null(a_55), not_null(v_54), (ATerm) ATinsert(CheckATermList(not_null(w_54)), not_null(c_55)));
            }
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm MkThreadApplication_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym__2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      {
        ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
        ATerm a_56 = NULL;
        ATerm c_56 = NULL;
        t = new_0(t);
        {
          a_56 = t;
          {
            if(((x_55 != NULL) && (x_55 != a_56)))
              _fail(a_56);
            else
              x_55 = a_56;
            {
              ATerm e_56 = NULL;
              t = new_0(t);
              {
                c_56 = t;
                {
                  if(((y_55 != NULL) && (y_55 != c_56)))
                    _fail(c_56);
                  else
                    y_55 = c_56;
                  {
                    t = new_0(t);
                    {
                      e_56 = t;
                      if(((z_55 != NULL) && (z_55 != e_56)))
                        _fail(e_56);
                      else
                        z_55 = e_56;
                    }
                  }
                }
              }
            }
          }
        }
        t = (ATerm) ATmakeAppl(sym__6, (ATerm)ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, not_null(x_55)), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(t_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(y_55)))), (ATerm) ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(u_55))), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_55))))), (ATerm)ATmakeAppl(sym_VarDec_2, not_null(x_55), term_z_14), not_null(y_55), (ATerm)ATmakeAppl(sym_Var_1, not_null(y_55)), not_null(z_55), (ATerm) ATmakeAppl(sym_Var_1, not_null(z_55)));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip1b_p__0 (ATerm t)
{
  ATerm p_56 = NULL,t_56 = NULL,u_56 = NULL;
  p_56 = t;
  n_56 :
  if(match_cons(p_56, sym__2))
    {
      t_56 = ATgetArgument(p_56, 0);
      u_56 = ATgetArgument(p_56, 1);
      o_56 :
      if(((ATermList) u_56 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm zipr_1 (ATerm t, ATerm e_70 (ATerm))
{
  t = genzip_4(t, Zip1b_p__0, Zip2_0, Zip3_0, e_70);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(((ATgetType(y_56) == AT_LIST) && ((ATermList) y_56 != ATempty)))
    {
      z_56 = ATgetFirst((ATermList) y_56);
      a_57 = (ATerm) ATgetNext((ATermList) y_56);
      t = not_null(a_57);
    }
  else
    _fail(t);
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  f_57 :
  if(((ATgetType(h_57) == AT_LIST) && ((ATermList) h_57 != ATempty)))
    {
      i_57 = ATgetFirst((ATermList) h_57);
      j_57 = (ATerm) ATgetNext((ATermList) h_57);
      g_57 :
      if(((ATermList) j_57 == ATempty))
        {
          t = not_null(i_57);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm last_0 (ATerm t)
{
  ATerm b_16 = t;
  int c_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(c_16);
    }
  else
    {
      t = b_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm DefineCongruence_0 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL;
  ATerm u_60 (ATerm t)
  {
    ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,u_59 = NULL;
    ATerm d_16;
    d_16 = t;
    {
      ATerm b_59 = NULL,e_59 = NULL,h_59 = NULL,i_59 = NULL;
      ATerm d_59 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(o_58), term_j_9);
      {
        t = add_0(t);
        {
          d_59 = t;
          if(((b_59 != NULL) && (b_59 != d_59)))
            _fail(d_59);
          else
            b_59 = d_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_59), term_e_16);
        {
          t = copy_1(t, new_0);
          {
            e_59 = t;
            v_57 :
            if(((ATgetType(e_59) == AT_LIST) && ((ATermList) e_59 != ATempty)))
              {
                h_59 = ATgetFirst((ATermList) e_59);
                i_59 = (ATerm) ATgetNext((ATermList) e_59);
                {
                  ATerm j_59 = NULL;
                  if(((s_58 != NULL) && (s_58 != h_59)))
                    _fail(h_59);
                  else
                    s_58 = h_59;
                  {
                    if(((t_58 != NULL) && (t_58 != i_59)))
                      _fail(i_59);
                    else
                      t_58 = i_59;
                    {
                      t = not_null(t_58);
                      {
                        ATerm n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
                        t = last_0(t);
                        {
                          j_59 = t;
                          {
                            if(((r_58 != NULL) && (r_58 != j_59)))
                              _fail(j_59);
                            else
                              r_58 = j_59;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_58)), not_null(s_58)), not_null(t_58));
                              {
                                t = zipr_1(t, MkThreadApplication_0);
                                {
                                  t = tuple_unzip_1(t, _id);
                                  {
                                    n_59 = t;
                                    u_57 :
                                    if(match_cons(n_59, sym__6))
                                      {
                                        o_59 = ATgetArgument(n_59, 0);
                                        p_59 = ATgetArgument(n_59, 1);
                                        q_59 = ATgetArgument(n_59, 2);
                                        r_59 = ATgetArgument(n_59, 3);
                                        s_59 = ATgetArgument(n_59, 4);
                                        t_59 = ATgetArgument(n_59, 5);
                                        {
                                          if(((u_58 != NULL) && (u_58 != o_59)))
                                            _fail(o_59);
                                          else
                                            u_58 = o_59;
                                          {
                                            if(((v_58 != NULL) && (v_58 != p_59)))
                                              _fail(p_59);
                                            else
                                              v_58 = p_59;
                                            {
                                              if(((w_58 != NULL) && (w_58 != q_59)))
                                                _fail(q_59);
                                              else
                                                w_58 = q_59;
                                              {
                                                if(((x_58 != NULL) && (x_58 != r_59)))
                                                  _fail(r_59);
                                                else
                                                  x_58 = r_59;
                                                {
                                                  if(((y_58 != NULL) && (y_58 != s_59)))
                                                    _fail(s_59);
                                                  else
                                                    y_58 = s_59;
                                                  if(((z_58 != NULL) && (z_58 != t_59)))
                                                    _fail(t_59);
                                                  else
                                                    z_58 = t_59;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    else
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
            else
              _fail(t);
          }
        }
      }
    }
    t = d_16;
    {
      ATerm x_59 = NULL;
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_58)), not_null(w_58)), not_null(t_58));
      {
        t = concat_0(t);
        {
          x_59 = t;
          if(((u_59 != NULL) && (u_59 != x_59)))
            _fail(x_59);
          else
            u_59 = x_59;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), term_g_16), not_null(v_58), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(u_59)), not_null(s_58)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(s_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(x_58)))), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(r_58))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(z_58)))), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(u_58))))));
    }
    return(t);
  }
  ATerm v_60 (ATerm t)
  {
    ATerm z_59 = NULL;
    ATerm a_60 = NULL;
    t = new_0(t);
    {
      a_60 = t;
      if(((z_59 != NULL) && (z_59 != a_60)))
        _fail(a_60);
      else
        z_59 = a_60;
    }
    t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), term_g_16), (ATerm)ATempty, (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_59)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), (ATerm) ATempty))), (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_59))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), (ATerm) ATempty))), term_r_12))));
    return(t);
  }
  ATerm w_60 (ATerm t)
  {
    ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,s_60 = NULL;
    ATerm h_16;
    h_16 = t;
    {
      ATerm k_60 = NULL;
      ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL,p_60 = NULL,q_60 = NULL,r_60 = NULL;
      t = new_0(t);
      {
        k_60 = t;
        {
          if(((d_60 != NULL) && (d_60 != k_60)))
            _fail(k_60);
          else
            d_60 = k_60;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_58), (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60)));
            {
              t = copy_1(t, MkDistApplication_0);
              {
                t = tuple_unzip_1(t, _id);
                {
                  l_60 = t;
                  a_58 :
                  if(match_cons(l_60, sym__6))
                    {
                      m_60 = ATgetArgument(l_60, 0);
                      n_60 = ATgetArgument(l_60, 1);
                      o_60 = ATgetArgument(l_60, 2);
                      p_60 = ATgetArgument(l_60, 3);
                      q_60 = ATgetArgument(l_60, 4);
                      r_60 = ATgetArgument(l_60, 5);
                      {
                        if(((e_60 != NULL) && (e_60 != m_60)))
                          _fail(m_60);
                        else
                          e_60 = m_60;
                        {
                          if(((f_60 != NULL) && (f_60 != n_60)))
                            _fail(n_60);
                          else
                            f_60 = n_60;
                          {
                            if(((g_60 != NULL) && (g_60 != o_60)))
                              _fail(o_60);
                            else
                              g_60 = o_60;
                            {
                              if(((h_60 != NULL) && (h_60 != p_60)))
                                _fail(p_60);
                              else
                                h_60 = p_60;
                              {
                                if(((i_60 != NULL) && (i_60 != q_60)))
                                  _fail(q_60);
                                else
                                  i_60 = q_60;
                                if(((j_60 != NULL) && (j_60 != r_60)))
                                  _fail(r_60);
                                else
                                  j_60 = r_60;
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    _fail(t);
                }
              }
            }
          }
        }
      }
    }
    t = h_16;
    {
      ATerm t_60 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, not_null(g_60), not_null(i_60));
      {
        t = conc_0(t);
        {
          t_60 = t;
          if(((s_60 != NULL) && (s_60 != t_60)))
            _fail(t_60);
          else
            s_60 = t_60;
        }
      }
      t = (ATerm) ATmakeAppl(sym_SDef_3, (ATerm)ATmakeAppl(sym_Mod_2, not_null(m_58), term_i_16), not_null(f_60), (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(CheckATermList(not_null(s_60)), not_null(d_60)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, (ATerm)ATmakeAppl(sym_Op_2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(d_60))), (ATerm) ATmakeAppl(sym_Op_2, not_null(m_58), not_null(h_60)))), (ATerm)ATmakeAppl(sym_Op_2, not_null(m_58), not_null(j_60)), (ATerm) ATmakeAppl(sym_Seqs_1, not_null(e_60))))));
    }
    return(t);
  }
  l_58 = t;
  i_58 :
  if(match_cons(l_58, sym__3))
    {
      m_58 = ATgetArgument(l_58, 0);
      n_58 = ATgetArgument(l_58, 1);
      o_58 = ATgetArgument(l_58, 2);
      j_58 :
      if(match_string(n_58, "T"))
        {
          k_58 :
          if(match_int(o_58, 0))
            {
              ATerm j_16 = t;
              int k_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_60(t);
                  LocalPopChoice(k_16);
                }
              else
                {
                  t = j_16;
                  t = v_60(t);
                }
            }
          else
            t = u_60(t);
        }
      else
        {
          if(match_string(n_58, "D"))
            t = w_60(t);
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm CongruenceDef_0 (ATerm t)
{
  ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,q_61 = NULL,r_61 = NULL;
  l_61 = t;
  i_61 :
  if(match_cons(l_61, sym__2))
    {
      m_61 = ATgetArgument(l_61, 0);
      r_61 = ATgetArgument(l_61, 1);
      j_61 :
      if(match_cons(m_61, sym__2))
        {
          n_61 = ATgetArgument(m_61, 0);
          q_61 = ATgetArgument(m_61, 1);
          k_61 :
          if(match_cons(n_61, sym_Mod_2))
            {
              o_61 = ATgetArgument(n_61, 0);
              p_61 = ATgetArgument(n_61, 1);
              {
                ATerm w_61 = NULL;
                ATerm c_62 = NULL;
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_61), not_null(p_61), not_null(q_61));
                {
                  t = DefineCongruence_0(t);
                  {
                    t = desugar_0(t);
                    {
                      c_62 = t;
                      if(((w_61 != NULL) && (w_61 != c_62)))
                        _fail(c_62);
                      else
                        w_61 = c_62;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_61), not_null(r_61));
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
ATerm get_definition_0 (ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CongruenceDef_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        t = OverloadedDef_0(t);
        t = _2(t, joindefs_0, _id);
      }
    }
  return(t);
}
ATerm GnUndefined_0 (ATerm t)
{
  ATerm i_62 = NULL,j_62 = NULL,k_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
  i_62 = t;
  g_62 :
  if(match_cons(i_62, sym__5))
    {
      j_62 = ATgetArgument(i_62, 0);
      o_62 = ATgetArgument(i_62, 1);
      p_62 = ATgetArgument(i_62, 2);
      q_62 = ATgetArgument(i_62, 3);
      r_62 = ATgetArgument(i_62, 4);
      h_62 :
      if(((ATgetType(j_62) == AT_LIST) && ((ATermList) j_62 != ATempty)))
        {
          k_62 = ATgetFirst((ATermList) j_62);
          n_62 = (ATerm) ATgetNext((ATermList) j_62);
          t = (ATerm) ATmakeAppl(sym__5, not_null(n_62), not_null(o_62), not_null(p_62), not_null(q_62), (ATerm) ATinsert(CheckATermList(not_null(r_62)), not_null(k_62)));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm l_63 = NULL,m_63 = NULL,n_63 = NULL;
  l_63 = t;
  k_63 :
  if(match_cons(l_63, sym__2))
    {
      m_63 = ATgetArgument(l_63, 0);
      n_63 = ATgetArgument(l_63, 1);
      {
        t = not_null(m_63);
        {
          ATerm e_2 (ATerm t)
          {
            t = not_null(n_63);
            return(t);
          }
          t = at_end_1(t, e_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm u_63 = NULL,v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  u_63 = t;
  s_63 :
  if(match_cons(u_63, sym__2))
    {
      v_63 = ATgetArgument(u_63, 0);
      w_63 = ATgetArgument(u_63, 1);
      t_63 :
      if(((ATgetType(w_63) == AT_LIST) && ((ATermList) w_63 != ATempty)))
        {
          x_63 = ATgetFirst((ATermList) w_63);
          y_63 = (ATerm) ATgetNext((ATermList) w_63);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_63)), not_null(x_63)), not_null(y_63));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip3_0 (ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  f_64 = t;
  e_64 :
  if(match_cons(f_64, sym__2))
    {
      g_64 = ATgetArgument(f_64, 0);
      h_64 = ATgetArgument(f_64, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_64)), not_null(g_64));
    }
  else
    _fail(t);
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm p_64 = NULL,q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,y_64 = NULL,z_64 = NULL;
  p_64 = t;
  m_64 :
  if(match_cons(p_64, sym__2))
    {
      q_64 = ATgetArgument(p_64, 0);
      t_64 = ATgetArgument(p_64, 1);
      n_64 :
      if(((ATgetType(q_64) == AT_LIST) && ((ATermList) q_64 != ATempty)))
        {
          r_64 = ATgetFirst((ATermList) q_64);
          s_64 = (ATerm) ATgetNext((ATermList) q_64);
          o_64 :
          if(((ATgetType(t_64) == AT_LIST) && ((ATermList) t_64 != ATempty)))
            {
              y_64 = ATgetFirst((ATermList) t_64);
              z_64 = (ATerm) ATgetNext((ATermList) t_64);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_64), not_null(y_64)), (ATerm) ATmakeAppl(sym__2, not_null(s_64), not_null(z_64)));
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
  ATerm j_65 = NULL,k_65 = NULL,r_65 = NULL;
  j_65 = t;
  g_65 :
  if(match_cons(j_65, sym__2))
    {
      k_65 = ATgetArgument(j_65, 0);
      r_65 = ATgetArgument(j_65, 1);
      h_65 :
      if(((ATermList) k_65 == ATempty))
        {
          i_65 :
          if(((ATermList) r_65 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm w_69 (ATerm), ATerm x_69 (ATerm), ATerm y_69 (ATerm), ATerm z_69 (ATerm))
{
  ATerm t_65 (ATerm t)
  {
    ATerm n_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_69(t);
        LocalPopChoice(o_16);
      }
    else
      {
        t = n_16;
        {
          t = x_69(t);
          {
            t = _2(t, z_69, t_65);
            t = y_69(t);
          }
        }
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm b_70 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, b_70);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  e_66 = t;
  c_66 :
  if(((ATgetType(e_66) == AT_LIST) && ((ATermList) e_66 != ATempty)))
    {
      f_66 = ATgetFirst((ATermList) e_66);
      i_66 = (ATerm) ATgetNext((ATermList) e_66);
      d_66 :
      if(match_cons(f_66, sym__2))
        {
          g_66 = ATgetArgument(f_66, 0);
          h_66 = ATgetArgument(f_66, 1);
          {
            ATerm m_66 = NULL,n_66 = NULL,t_66 = NULL,z_66 = NULL;
            ATerm t_16;
            t_16 = t;
            {
              ATerm o_66 = NULL;
              ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
              t = not_null(h_66);
              {
                o_66 = t;
                {
                  t = SSL_explode_term(not_null(o_66));
                  {
                    q_66 = t;
                    x_65 :
                    if(match_cons(q_66, sym__2))
                      {
                        r_66 = ATgetArgument(q_66, 0);
                        s_66 = ATgetArgument(q_66, 1);
                        {
                          if(((m_66 != NULL) && (m_66 != r_66)))
                            _fail(r_66);
                          else
                            m_66 = r_66;
                          if(((n_66 != NULL) && (n_66 != s_66)))
                            _fail(s_66);
                          else
                            n_66 = s_66;
                        }
                      }
                    else
                      _fail(t);
                  }
                }
              }
            }
            t = t_16;
            {
              ATerm u_16;
              u_16 = t;
              {
                ATerm u_66 = NULL;
                ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
                t = not_null(g_66);
                {
                  u_66 = t;
                  {
                    t = SSL_explode_term(not_null(u_66));
                    {
                      w_66 = t;
                      a_66 :
                      if(match_cons(w_66, sym__2))
                        {
                          x_66 = ATgetArgument(w_66, 0);
                          y_66 = ATgetArgument(w_66, 1);
                          {
                            if(((m_66 != NULL) && (m_66 != x_66)))
                              _fail(x_66);
                            else
                              m_66 = x_66;
                            if(((t_66 != NULL) && (t_66 != y_66)))
                              _fail(y_66);
                            else
                              t_66 = y_66;
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
              t = u_16;
              {
                ATerm a_67 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_66), not_null(n_66));
                {
                  t = zip_1(t, _id);
                  {
                    a_67 = t;
                    if(((z_66 != NULL) && (z_66 != a_67)))
                      _fail(a_67);
                    else
                      z_66 = a_67;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_66), not_null(i_66));
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
  ATerm k_67 = NULL,l_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  k_67 = t;
  i_67 :
  if(((ATgetType(k_67) == AT_LIST) && ((ATermList) k_67 != ATempty)))
    {
      l_67 = ATgetFirst((ATermList) k_67);
      t_67 = (ATerm) ATgetNext((ATermList) k_67);
      j_67 :
      if(match_cons(l_67, sym__2))
        {
          r_67 = ATgetArgument(l_67, 0);
          s_67 = ATgetArgument(l_67, 1);
          {
            ATerm v_67 = NULL;
            if(((r_67 != NULL) && (r_67 != s_67)))
              _fail(s_67);
            else
              r_67 = s_67;
            {
              if(((v_67 != NULL) && (v_67 != t_67)))
                _fail(t_67);
              else
                v_67 = t_67;
              t = not_null(v_67);
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
ATerm diff_0 (ATerm t)
{
  ATerm v_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_68 = NULL,b_68 = NULL,c_68 = NULL;
      a_68 = t;
      y_67 :
      if(match_cons(a_68, sym__2))
        {
          b_68 = ATgetArgument(a_68, 0);
          c_68 = ATgetArgument(a_68, 1);
          {
            t = not_null(b_68);
            {
              ATerm i_68 (ATerm t)
              {
                ATerm z_16 = t;
                int a_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    LocalPopChoice(a_17);
                  }
                else
                  {
                    t = z_16;
                    {
                      ATerm b_17 = t;
                      int c_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_2 (ATerm t)
                          {
                            t = not_null(c_68);
                            return(t);
                          }
                          t = HdMember_1(t, f_2);
                          t = i_68(t);
                          LocalPopChoice(c_17);
                        }
                      else
                        {
                          t = b_17;
                          t = Cons_2(t, _id, i_68);
                        }
                    }
                  }
                return(t);
              }
              t = i_68(t);
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = v_16;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm f_68 = NULL;
          f_68 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(f_68));
          return(t);
        }
        ATerm h_2 (ATerm t)
        {
          t = _2(t, _id, Nil_0);
          return(t);
        }
        ATerm i_2 (ATerm t)
        {
          ATerm d_17 = t;
          int e_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 (ATerm t)
              {
                ATerm f_17 = t;
                int j_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = UfIdem_0(t);
                    LocalPopChoice(j_17);
                  }
                else
                  {
                    t = f_17;
                    t = UfDecompose_0(t);
                  }
                return(t);
              }
              t = _2(t, _id, j_2);
              LocalPopChoice(e_17);
            }
          else
            {
              t = d_17;
              t = UfShift_0(t);
            }
          return(t);
        }
        t = for_3(t, g_2, h_2, i_2);
      }
    }
  return(t);
}
ATerm GnNextChangeGraph_3 (ATerm t, ATerm h_56 (ATerm), ATerm i_56 (ATerm), ATerm j_56 (ATerm))
{
  ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL,b_69 = NULL;
  u_68 = t;
  s_68 :
  if(match_cons(u_68, sym__5))
    {
      v_68 = ATgetArgument(u_68, 0);
      y_68 = ATgetArgument(u_68, 1);
      z_68 = ATgetArgument(u_68, 2);
      a_69 = ATgetArgument(u_68, 3);
      b_69 = ATgetArgument(u_68, 4);
      t_68 :
      if(((ATgetType(v_68) == AT_LIST) && ((ATermList) v_68 != ATempty)))
        {
          w_68 = ATgetFirst((ATermList) v_68);
          x_68 = (ATerm) ATgetNext((ATermList) v_68);
          {
            ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,s_69 = NULL,u_69 = NULL,c_70 = NULL;
            ATerm l_17;
            l_17 = t;
            {
              ATerm m_69 = NULL,n_69 = NULL,o_69 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_68), not_null(z_68));
              {
                t = h_56(t);
                {
                  m_69 = t;
                  o_68 :
                  if(match_cons(m_69, sym__2))
                    {
                      n_69 = ATgetArgument(m_69, 0);
                      o_69 = ATgetArgument(m_69, 1);
                      {
                        ATerm q_69 = NULL;
                        if(((j_69 != NULL) && (j_69 != n_69)))
                          _fail(n_69);
                        else
                          j_69 = n_69;
                        {
                          if(((i_69 != NULL) && (i_69 != o_69)))
                            _fail(o_69);
                          else
                            i_69 = o_69;
                          {
                            t = not_null(j_69);
                            {
                              ATerm r_69 = NULL;
                              t = i_56(t);
                              {
                                q_69 = t;
                                {
                                  if(((k_69 != NULL) && (k_69 != q_69)))
                                    _fail(q_69);
                                  else
                                    k_69 = q_69;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(k_69), not_null(y_68));
                                    {
                                      t = diff_0(t);
                                      {
                                        r_69 = t;
                                        if(((l_69 != NULL) && (l_69 != r_69)))
                                          _fail(r_69);
                                        else
                                          l_69 = r_69;
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
                }
              }
            }
            t = l_17;
            {
              ATerm m_17;
              m_17 = t;
              {
                ATerm t_69 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_69), not_null(x_68));
                {
                  t = conc_0(t);
                  {
                    t_69 = t;
                    if(((s_69 != NULL) && (s_69 != t_69)))
                      _fail(t_69);
                    else
                      s_69 = t_69;
                  }
                }
              }
              t = m_17;
              {
                ATerm n_17;
                n_17 = t;
                {
                  ATerm v_69 = NULL;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_69), not_null(y_68));
                  {
                    t = conc_0(t);
                    {
                      v_69 = t;
                      if(((u_69 != NULL) && (u_69 != v_69)))
                        _fail(v_69);
                      else
                        u_69 = v_69;
                    }
                  }
                }
                t = n_17;
                {
                  ATerm d_70 = NULL;
                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_68), not_null(j_69), not_null(a_69));
                  {
                    t = j_56(t);
                    {
                      d_70 = t;
                      if(((c_70 != NULL) && (c_70 != d_70)))
                        _fail(d_70);
                      else
                        c_70 = d_70;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym__5, not_null(s_69), not_null(u_69), not_null(i_69), not_null(c_70), not_null(b_69));
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
ATerm GnExit_0 (ATerm t)
{
  ATerm p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL;
  p_70 = t;
  n_70 :
  if(match_cons(p_70, sym__5))
    {
      q_70 = ATgetArgument(p_70, 0);
      r_70 = ATgetArgument(p_70, 1);
      s_70 = ATgetArgument(p_70, 2);
      t_70 = ATgetArgument(p_70, 3);
      u_70 = ATgetArgument(p_70, 4);
      o_70 :
      if(((ATermList) q_70 == ATempty))
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_70), not_null(u_70));
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm GnInitRoots_0 (ATerm t)
{
  ATerm c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  c_71 = t;
  b_71 :
  if(match_cons(c_71, sym__3))
    {
      d_71 = ATgetArgument(c_71, 0);
      e_71 = ATgetArgument(c_71, 1);
      f_71 = ATgetArgument(c_71, 2);
      t = (ATerm) ATmakeAppl(sym__5, not_null(d_71), not_null(d_71), not_null(e_71), not_null(f_71), (ATerm) ATempty);
    }
  else
    _fail(t);
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm m_71 (ATerm t)
  {
    ATerm o_17 = t;
    int p_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_65(t);
        LocalPopChoice(p_17);
      }
    else
      {
        t = o_17;
        {
          t = m_65(t);
          t = m_71(t);
        }
      }
    return(t);
  }
  t = m_71(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm q_65 (ATerm))
{
  t = o_65(t);
  t = while_not_2(t, p_65, q_65);
  return(t);
}
ATerm graph_nodes_undef_roots_chgr_3 (ATerm t, ATerm q_56 (ATerm), ATerm r_56 (ATerm), ATerm s_56 (ATerm))
{
  ATerm k_2 (ATerm t)
  {
    ATerm r_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = GnNextChangeGraph_3(t, q_56, r_56, s_56);
        LocalPopChoice(v_17);
      }
    else
      {
        t = r_17;
        t = GnUndefined_0(t);
      }
    return(t);
  }
  t = for_3(t, GnInitRoots_0, GnExit_0, k_2);
  return(t);
}
ATerm extract_needed_defs_0 (ATerm t)
{
  ATerm l_2 (ATerm t)
  {
    t = svars_arity_0(t);
    {
      ATerm p_2 (ATerm t)
      {
        t = try_1(t, DefinitionExists_0);
        return(t);
      }
      t = map_1(t, p_2);
    }
    return(t);
  }
  ATerm m_2 (ATerm t)
  {
    ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL,s_71 = NULL;
    p_71 = t;
    o_71 :
    if(match_cons(p_71, sym__3))
      {
        q_71 = ATgetArgument(p_71, 0);
        r_71 = ATgetArgument(p_71, 1);
        s_71 = ATgetArgument(p_71, 2);
        t = (ATerm) ATinsert(CheckATermList(not_null(s_71)), not_null(r_71));
      }
    else
      _fail(t);
    return(t);
  }
  t = graph_nodes_undef_roots_chgr_3(t, get_definition_0, l_2, m_2);
  {
    ATerm w_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = NoMissingDefs_0(t);
        LocalPopChoice(y_17);
      }
    else
      {
        t = w_17;
        {
          t = MissingDefs_0(t);
          {
            t = term_j_9;
            t = exit_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL;
  e_72 = t;
  d_72 :
  if(match_cons(e_72, sym__2))
    {
      f_72 = ATgetArgument(e_72, 0);
      g_72 = ATgetArgument(e_72, 1);
      {
        ATerm j_72 = NULL,k_72 = NULL,l_72 = NULL;
        ATerm z_17;
        z_17 = t;
        {
          ATerm m_72 = NULL;
          ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL;
          t = b_56(t);
          {
            m_72 = t;
            {
              if(((j_72 != NULL) && (j_72 != m_72)))
                _fail(m_72);
              else
                j_72 = m_72;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(j_72), not_null(f_72), not_null(g_72));
                {
                  t = table_push_0(t);
                  {
                    ATerm a_18 = t;
                    int b_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), term_c_18);
                        t = table_get_0(t);
                        LocalPopChoice(b_18);
                      }
                    else
                      {
                        t = a_18;
                        t = term_d_18;
                      }
                    {
                      n_72 = t;
                      c_72 :
                      if(((ATgetType(n_72) == AT_LIST) && ((ATermList) n_72 != ATempty)))
                        {
                          o_72 = ATgetFirst((ATermList) n_72);
                          p_72 = (ATerm) ATgetNext((ATermList) n_72);
                          {
                            if(((k_72 != NULL) && (k_72 != o_72)))
                              _fail(o_72);
                            else
                              k_72 = o_72;
                            {
                              if(((l_72 != NULL) && (l_72 != p_72)))
                                _fail(p_72);
                              else
                                l_72 = p_72;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(j_72), term_c_18, (ATerm) ATinsert(CheckATermList(not_null(l_72)), (ATerm) ATinsert(CheckATermList(not_null(k_72)), not_null(f_72))));
                                t = table_put_0(t);
                              }
                            }
                          }
                        }
                      else
                        _fail(t);
                    }
                  }
                }
              }
            }
          }
        }
        t = z_17;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Arities_0 (ATerm t)
{
  ATerm z_72 = NULL;
  ATerm b_73 = NULL;
  z_72 = t;
  {
    ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL;
    t = (ATerm) ATmakeAppl(sym_Keys_1, not_null(z_72));
    {
      ATerm u_2 (ATerm t)
      {
        t = term_e_18;
        return(t);
      }
      t = rewrite_1(t, u_2);
      {
        c_73 = t;
        x_72 :
        if(match_cons(c_73, sym_Defined_2))
          {
            d_73 = ATgetArgument(c_73, 0);
            e_73 = ATgetArgument(c_73, 1);
            y_72 :
            if(match_string(d_73, "e_0"))
              {
                if(((b_73 != NULL) && (b_73 != e_73)))
                  _fail(e_73);
                else
                  b_73 = e_73;
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
    t = not_null(b_73);
  }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm j_73 = NULL,k_73 = NULL,l_73 = NULL;
  j_73 = t;
  i_73 :
  if(((ATgetType(j_73) == AT_LIST) && ((ATermList) j_73 != ATempty)))
    {
      k_73 = ATgetFirst((ATermList) j_73);
      l_73 = (ATerm) ATgetNext((ATermList) j_73);
      t = not_null(k_73);
    }
  else
    _fail(t);
  return(t);
}
ATerm table_lookup_0 (ATerm t)
{
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym__2))
    {
      s_73 = ATgetArgument(r_73, 0);
      t_73 = ATgetArgument(r_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_73), not_null(t_73));
        {
          t = table_get_0(t);
          t = Hd_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm rewrite_1 (ATerm t, ATerm d_56 (ATerm))
{
  ATerm z_73 = NULL;
  ATerm b_74 = NULL;
  z_73 = t;
  {
    ATerm c_74 = NULL;
    t = term_e_16;
    {
      t = d_56(t);
      {
        c_74 = t;
        if(((b_74 != NULL) && (b_74 != c_74)))
          _fail(c_74);
        else
          b_74 = c_74;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_74), not_null(z_73));
      t = table_lookup_0(t);
    }
  }
  return(t);
}
ATerm Definitions_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym__2))
    {
      n_74 = ATgetArgument(m_74, 0);
      o_74 = ATgetArgument(m_74, 1);
      {
        ATerm r_74 = NULL,s_74 = NULL;
        ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,y_74 = NULL;
        t = (ATerm) ATmakeAppl(sym_Keys_2, not_null(o_74), not_null(n_74));
        {
          ATerm v_2 (ATerm t)
          {
            t = term_f_18;
            return(t);
          }
          t = rewrite_1(t, v_2);
          {
            t_74 = t;
            h_74 :
            if(match_cons(t_74, sym_Defined_3))
              {
                u_74 = ATgetArgument(t_74, 0);
                v_74 = ATgetArgument(t_74, 1);
                y_74 = ATgetArgument(t_74, 2);
                k_74 :
                if(match_string(u_74, "d_0"))
                  {
                    if(((r_74 != NULL) && (r_74 != v_74)))
                      _fail(v_74);
                    else
                      r_74 = v_74;
                    if(((s_74 != NULL) && (s_74 != y_74)))
                      _fail(y_74);
                    else
                      s_74 = y_74;
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(s_74)), not_null(r_74));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm sort_defs_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm h_75 = NULL,i_75 = NULL,j_75 = NULL,k_75 = NULL;
    h_75 = t;
    g_75 :
    if(match_cons(h_75, sym_SDef_3))
      {
        i_75 = ATgetArgument(h_75, 0);
        j_75 = ATgetArgument(h_75, 1);
        k_75 = ATgetArgument(h_75, 2);
        {
          ATerm p_75 = NULL,q_75 = NULL,r_75 = NULL;
          ATerm h_18;
          h_18 = t;
          {
            ATerm s_75 = NULL;
            t = not_null(j_75);
            {
              ATerm t_75 = NULL;
              t = length_0(t);
              {
                s_75 = t;
                {
                  if(((q_75 != NULL) && (q_75 != s_75)))
                    _fail(s_75);
                  else
                    q_75 = s_75;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(i_75), not_null(q_75));
                    {
                      ATerm u_75 = NULL,b_76 = NULL;
                      ATerm i_18 = t;
                      int j_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Definitions_0(t);
                          LocalPopChoice(j_18);
                        }
                      else
                        {
                          t = i_18;
                          t = (ATerm) ATempty;
                        }
                      {
                        t_75 = t;
                        {
                          if(((p_75 != NULL) && (p_75 != t_75)))
                            _fail(t_75);
                          else
                            p_75 = t_75;
                          {
                            ATerm v_75 = NULL;
                            t = not_null(i_75);
                            {
                              ATerm p_18 = t;
                              int r_18 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Arities_0(t);
                                  LocalPopChoice(r_18);
                                }
                              else
                                {
                                  t = p_18;
                                  t = (ATerm) ATempty;
                                }
                              {
                                v_75 = t;
                                if(((u_75 != NULL) && (u_75 != v_75)))
                                  _fail(v_75);
                                else
                                  u_75 = v_75;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_75)), not_null(u_75));
                              {
                                t = union_0(t);
                                {
                                  b_76 = t;
                                  {
                                    if(((r_75 != NULL) && (r_75 != b_76)))
                                      _fail(b_76);
                                    else
                                      r_75 = b_76;
                                    {
                                      ATerm s_18;
                                      s_18 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_2, not_null(q_75), not_null(i_75)), (ATerm) ATmakeAppl(sym_Defined_3, term_t_18, not_null(h_75), not_null(p_75)));
                                        {
                                          ATerm x_2 (ATerm t)
                                          {
                                            t = term_f_18;
                                            return(t);
                                          }
                                          t = assert_1(t, x_2);
                                        }
                                      }
                                      t = s_18;
                                      {
                                        ATerm u_18;
                                        u_18 = t;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Keys_1, not_null(i_75)), (ATerm) ATmakeAppl(sym_Defined_2, term_v_18, not_null(r_75)));
                                          {
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = term_e_18;
                                              return(t);
                                            }
                                            t = assert_1(t, f_3);
                                          }
                                        }
                                        t = u_18;
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
          t = h_18;
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = map_1(t, w_2);
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  i_76 :
  if(match_cons(j_76, sym__2))
    {
      k_76 = ATgetArgument(j_76, 0);
      l_76 = ATgetArgument(j_76, 1);
      {
        ATerm w_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_76), not_null(l_76));
            LocalPopChoice(x_18);
          }
        else
          {
            t = w_18;
            t = SSL_addr(not_null(k_76), not_null(l_76));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = term_y_18;
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_j_9;
    return(t);
  }
  t = foldr_3(t, g_3, add_0, h_3);
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm v_62 (ATerm))
{
  ATerm s_76 = NULL,w_76 = NULL,x_76 = NULL;
  s_76 = t;
  r_76 :
  if(((ATgetType(s_76) == AT_LIST) && ((ATermList) s_76 != ATempty)))
    {
      w_76 = ATgetFirst((ATermList) s_76);
      x_76 = (ATerm) ATgetNext((ATermList) s_76);
      {
        t = v_62(t);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm a_77 = NULL;
            a_77 = t;
            if(((w_76 != NULL) && (w_76 != a_77)))
              _fail(a_77);
            else
              w_76 = a_77;
            return(t);
          }
          t = fetch_1(t, i_3);
        }
        t = not_null(x_76);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL;
  f_77 = t;
  e_77 :
  if(match_cons(f_77, sym__2))
    {
      g_77 = ATgetArgument(f_77, 0);
      h_77 = ATgetArgument(f_77, 1);
      {
        t = not_null(g_77);
        {
          ATerm l_77 (ATerm t)
          {
            ATerm z_18 = t;
            int c_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(h_77);
                LocalPopChoice(c_19);
              }
            else
              {
                t = z_18;
                {
                  ATerm d_19 = t;
                  int e_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = not_null(h_77);
                        return(t);
                      }
                      t = HdMember_1(t, j_3);
                      t = l_77(t);
                      LocalPopChoice(e_19);
                    }
                  else
                    {
                      t = d_19;
                      t = Cons_2(t, _id, l_77);
                    }
                }
              }
            return(t);
          }
          t = l_77(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_61 (ATerm), ATerm a_62 (ATerm), ATerm b_62 (ATerm))
{
  ATerm f_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_61(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = f_19;
      {
        ATerm q_77 = NULL,t_77 = NULL,u_77 = NULL;
        q_77 = t;
        p_77 :
        if(((ATgetType(q_77) == AT_LIST) && ((ATermList) q_77 != ATempty)))
          {
            t_77 = ATgetFirst((ATermList) q_77);
            u_77 = (ATerm) ATgetNext((ATermList) q_77);
            {
              ATerm x_77 = NULL,b_78 = NULL;
              ATerm l_19;
              l_19 = t;
              {
                ATerm y_77 = NULL;
                t = not_null(t_77);
                {
                  t = b_62(t);
                  {
                    y_77 = t;
                    if(((x_77 != NULL) && (x_77 != y_77)))
                      _fail(y_77);
                    else
                      x_77 = y_77;
                  }
                }
              }
              t = l_19;
              {
                ATerm c_78 = NULL;
                t = not_null(u_77);
                {
                  t = foldr_3(t, z_61, a_62, b_62);
                  {
                    c_78 = t;
                    if(((b_78 != NULL) && (b_78 != c_78)))
                      _fail(c_78);
                    else
                      b_78 = c_78;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_77), not_null(b_78));
                  t = a_62(t);
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
ATerm definition_names_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL;
    l_78 = t;
    k_78 :
    if(match_cons(l_78, sym_SDef_3))
      {
        m_78 = ATgetArgument(l_78, 0);
        n_78 = ATgetArgument(l_78, 1);
        o_78 = ATgetArgument(l_78, 2);
        {
          ATerm r_78 = NULL;
          ATerm s_78 = NULL;
          t = not_null(n_78);
          {
            t = length_0(t);
            {
              s_78 = t;
              if(((r_78 != NULL) && (r_78 != s_78)))
                _fail(s_78);
              else
                r_78 = s_78;
            }
          }
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym__2, not_null(m_78), not_null(r_78)));
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = foldr_3(t, r_3, union_0, s_3);
  return(t);
}
ATerm all_defs_0 (ATerm t)
{
  ATerm x_78 = NULL,z_78 = NULL;
  ATerm m_19;
  m_19 = t;
  {
    ATerm y_78 = NULL;
    t = definition_names_0(t);
    {
      y_78 = t;
      if(((x_78 != NULL) && (x_78 != y_78)))
        _fail(y_78);
      else
        x_78 = y_78;
    }
  }
  t = m_19;
  {
    ATerm a_79 = NULL;
    t = sort_defs_0(t);
    {
      a_79 = t;
      if(((z_78 != NULL) && (z_78 != a_79)))
        _fail(a_79);
      else
        z_78 = a_79;
    }
    {
      t = (ATerm) ATmakeAppl(sym__3, not_null(x_78), not_null(z_78), (ATerm) ATempty);
      t = extract_needed_defs_0(t);
    }
  }
  return(t);
}
ATerm Strategies_1 (ATerm t, ATerm j_53 (ATerm))
{
  ATerm h_79 = NULL,i_79 = NULL;
  h_79 = t;
  g_79 :
  if(match_cons(h_79, sym_Strategies_1))
    {
      i_79 = ATgetArgument(h_79, 0);
      {
        ATerm k_79 = NULL;
        t = not_null(i_79);
        {
          t = j_53(t);
          {
            k_79 = t;
            t = (ATerm) ATmakeAppl(sym_Strategies_1, not_null(k_79));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_55 (ATerm), ATerm q_55 (ATerm))
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL;
  u_79 = t;
  t_79 :
  if(((ATgetType(u_79) == AT_LIST) && ((ATermList) u_79 != ATempty)))
    {
      v_79 = ATgetFirst((ATermList) u_79);
      w_79 = (ATerm) ATgetNext((ATermList) u_79);
      {
        ATerm z_79 = NULL;
        t = not_null(v_79);
        {
          ATerm b_80 = NULL;
          t = p_55(t);
          {
            z_79 = t;
            {
              t = not_null(w_79);
              {
                t = q_55(t);
                {
                  b_80 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_80)), not_null(z_79));
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
ATerm Specification_1 (ATerm t, ATerm l_53 (ATerm))
{
  ATerm j_80 = NULL,k_80 = NULL;
  j_80 = t;
  i_80 :
  if(match_cons(j_80, sym_Specification_1))
    {
      k_80 = ATgetArgument(j_80, 0);
      {
        ATerm m_80 = NULL;
        t = not_null(k_80);
        {
          t = l_53(t);
          {
            m_80 = t;
            t = (ATerm) ATmakeAppl(sym_Specification_1, not_null(m_80));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm c_45 (ATerm), ATerm d_45 (ATerm))
{
  ATerm u_80 = NULL,v_80 = NULL,w_80 = NULL;
  u_80 = t;
  t_80 :
  if(match_cons(u_80, sym__2))
    {
      v_80 = ATgetArgument(u_80, 0);
      w_80 = ATgetArgument(u_80, 1);
      {
        ATerm z_80 = NULL;
        t = not_null(v_80);
        {
          ATerm b_81 = NULL;
          t = c_45(t);
          {
            z_80 = t;
            {
              t = not_null(w_80);
              {
                t = d_45(t);
                {
                  b_81 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_80), not_null(b_81));
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
  ATerm i_81 = NULL;
  ATerm n_19;
  n_19 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm j_81 = NULL,k_81 = NULL;
      j_81 = t;
      h_81 :
      if(match_cons(j_81, sym_Program_1))
        {
          k_81 = ATgetArgument(j_81, 0);
          if(((i_81 != NULL) && (i_81 != k_81)))
            _fail(k_81);
          else
            i_81 = k_81;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(CheckATermList(term_r_19), not_null(i_81)), term_o_19));
      {
        t = printnl_0(t);
        {
          t = term_j_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_19;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = term_x_19;
  {
    t = printnl_0(t);
    {
      t = term_j_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm r_81 = NULL,s_81 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm v_3 (ATerm t)
    {
      ATerm y_19 = t;
      if((PushChoice() == 0))
        {
          ATerm b_4 (ATerm t)
          {
            ATerm t_81 = NULL;
            t_81 = t;
            m_81 :
            if(!(match_cons(t_81, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, b_4);
          PopChoice();
          _fail(t);
        }
      else
        t = y_19;
      return(t);
    }
    t = _2(t, v_3, _id);
    {
      ATerm c_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          ATerm u_81 = NULL,v_81 = NULL;
          u_81 = t;
          o_81 :
          if(match_cons(u_81, sym_Runtime_1))
            {
              v_81 = ATgetArgument(u_81, 0);
              if(((s_81 != NULL) && (s_81 != v_81)))
                _fail(v_81);
              else
                s_81 = v_81;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, d_4);
        return(t);
      }
      t = _2(t, c_4, _id);
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm w_81 = NULL,x_81 = NULL;
            w_81 = t;
            q_81 :
            if(match_cons(w_81, sym_Program_1))
              {
                x_81 = ATgetArgument(w_81, 0);
                if(((r_81 != NULL) && (r_81 != x_81)))
                  _fail(x_81);
                else
                  r_81 = x_81;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, h_4);
          return(t);
        }
        t = _2(t, g_4, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATinsert(CheckATermList(term_d_20), not_null(s_81)), term_a_20), not_null(r_81)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, u_3);
  {
    t = term_y_18;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,e_82 = NULL;
  c_82 = t;
  b_82 :
  if(match_cons(c_82, sym__2))
    {
      d_82 = ATgetArgument(c_82, 0);
      e_82 = ATgetArgument(c_82, 1);
      t = SSL_WriteToTextFile(not_null(d_82), not_null(e_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_82 = NULL,l_82 = NULL,m_82 = NULL;
  k_82 = t;
  j_82 :
  if(match_cons(k_82, sym__2))
    {
      l_82 = ATgetArgument(k_82, 0);
      m_82 = ATgetArgument(k_82, 1);
      t = SSL_WriteToBinaryFile(not_null(l_82), not_null(m_82));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm u_82 = NULL;
  ATerm e_20;
  e_20 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm f_20 = t;
      int g_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_4 (ATerm t)
          {
            ATerm v_82 = NULL,w_82 = NULL;
            v_82 = t;
            r_82 :
            if(match_cons(v_82, sym_Output_1))
              {
                w_82 = ATgetArgument(v_82, 0);
                if(((u_82 != NULL) && (u_82 != w_82)))
                  _fail(w_82);
                else
                  u_82 = w_82;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, j_4);
          LocalPopChoice(g_20);
        }
      else
        {
          t = f_20;
          {
            ATerm x_82 = NULL;
            t = term_h_20;
            {
              x_82 = t;
              if(((u_82 != NULL) && (u_82 != x_82)))
                _fail(x_82);
              else
                u_82 = x_82;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_4, _id);
  }
  t = e_20;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm v_4 (ATerm t)
      {
        t = not_null(u_82);
        return(t);
      }
      t = split_2(t, v_4, _id);
      return(t);
    }
    t = _2(t, _id, n_4);
    {
      ATerm i_20 = t;
      int k_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
          {
            ATerm h_5 (ATerm t)
            {
              ATerm y_82 = NULL;
              y_82 = t;
              t_82 :
              if(!(match_cons(y_82, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, h_5);
            return(t);
          }
          t = _2(t, c_5, WriteToBinaryFile_0);
          LocalPopChoice(k_20);
        }
      else
        {
          t = i_20;
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
ATerm apply_strategy_1 (ATerm t, ATerm w_59 (ATerm))
{
  ATerm f_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL;
  ATerm l_20;
  l_20 = t;
  t = dtime_0(t);
  t = l_20;
  {
    t = w_59(t);
    {
      ATerm m_20;
      m_20 = t;
      {
        ATerm g_83 = NULL;
        t = dtime_0(t);
        {
          g_83 = t;
          if(((f_83 != NULL) && (f_83 != g_83)))
            _fail(g_83);
          else
            f_83 = g_83;
        }
      }
      t = m_20;
      {
        h_83 = t;
        e_83 :
        if(match_cons(h_83, sym__2))
          {
            i_83 = ATgetArgument(h_83, 0);
            j_83 = ATgetArgument(h_83, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_83)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(f_83))), not_null(j_83));
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
  ATerm p_83 = NULL;
  p_83 = t;
  t = SSL_ReadFromFile(not_null(p_83));
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_71 (ATerm), ATerm k_71 (ATerm))
{
  ATerm u_83 = NULL,w_83 = NULL;
  ATerm o_20;
  o_20 = t;
  {
    ATerm v_83 = NULL;
    t = j_71(t);
    {
      v_83 = t;
      if(((u_83 != NULL) && (u_83 != v_83)))
        _fail(v_83);
      else
        u_83 = v_83;
    }
  }
  t = o_20;
  {
    ATerm x_83 = NULL;
    t = k_71(t);
    {
      x_83 = t;
      if(((w_83 != NULL) && (w_83 != x_83)))
        _fail(x_83);
      else
        w_83 = x_83;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_83), not_null(w_83));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_84 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm r_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_5 (ATerm t)
        {
          ATerm e_84 = NULL,f_84 = NULL;
          e_84 = t;
          b_84 :
          if(match_cons(e_84, sym_Input_1))
            {
              f_84 = ATgetArgument(e_84, 0);
              if(((d_84 != NULL) && (d_84 != f_84)))
                _fail(f_84);
              else
                d_84 = f_84;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, i_5);
        LocalPopChoice(v_20);
      }
    else
      {
        t = r_20;
        {
          ATerm g_84 = NULL;
          t = term_w_20;
          {
            g_84 = t;
            if(((d_84 != NULL) && (d_84 != g_84)))
              _fail(g_84);
            else
              d_84 = g_84;
          }
        }
      }
  }
  t = q_20;
  {
    ATerm j_5 (ATerm t)
    {
      t = not_null(d_84);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_84 = NULL;
  k_84 = t;
  j_84 :
  if(!(match_cons(k_84, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm v_59 (ATerm))
{
  ATerm k_5 (ATerm t)
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        {
          ATerm e_21 = t;
          int f_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(f_21);
            }
          else
            {
              t = e_21;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, k_5);
  t = v_59(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm m_84 = NULL;
  m_84 = t;
  t = SSL_table_create(not_null(m_84));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm q_84 = NULL;
  q_84 = t;
  {
    ATerm g_21;
    g_21 = t;
    {
      t = term_h_21;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_21, term_j_21, not_null(q_84));
          t = table_put_0(t);
        }
      }
    }
    t = g_21;
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  y_84 = t;
  w_84 :
  if(match_string(y_84, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(y_84) == AT_LIST) && ((ATermList) y_84 != ATempty)))
        {
          z_84 = ATgetFirst((ATermList) y_84);
          a_85 = (ATerm) ATgetNext((ATermList) y_84);
          x_84 :
          if(((ATgetType(a_85) == AT_LIST) && ((ATermList) a_85 != ATempty)))
            {
              b_85 = ATgetFirst((ATermList) a_85);
              c_85 = (ATerm) ATgetNext((ATermList) a_85);
              {
                ATerm g_85 = NULL;
                ATerm k_21;
                k_21 = t;
                {
                  t = not_null(z_84);
                  t = i_0(t);
                }
                t = k_21;
                {
                  ATerm h_85 = NULL;
                  t = not_null(b_85);
                  {
                    t = j_0(t);
                    {
                      h_85 = t;
                      if(((g_85 != NULL) && (g_85 != h_85)))
                        _fail(h_85);
                      else
                        g_85 = h_85;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_85)), not_null(g_85));
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
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_5 (ATerm t)
      {
        ATerm w_85 = NULL;
        w_85 = t;
        l_85 :
        if(!(match_string(w_85, "-S")))
          {
            if(!(match_string(w_85, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm m_5 (ATerm t)
      {
        t = term_n_21;
        return(t);
      }
      ATerm n_5 (ATerm t)
      {
        t = term_o_21;
        return(t);
      }
      t = Option_3(t, l_5, m_5, n_5);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm p_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm x_85 = NULL;
              x_85 = t;
              m_85 :
              if(!(match_string(x_85, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm t_5 (ATerm t)
            {
              t = term_x_21;
              return(t);
            }
            ATerm v_5 (ATerm t)
            {
              t = term_y_21;
              return(t);
            }
            t = Option_3(t, s_5, t_5, v_5);
            LocalPopChoice(w_21);
          }
        else
          {
            t = p_21;
            {
              ATerm z_21 = t;
              int a_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_5 (ATerm t)
                  {
                    ATerm y_85 = NULL;
                    y_85 = t;
                    n_85 :
                    if(!(match_string(y_85, "-v")))
                      {
                        if(!(match_string(y_85, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm y_5 (ATerm t)
                  {
                    t = term_b_22;
                    return(t);
                  }
                  ATerm z_5 (ATerm t)
                  {
                    t = term_c_22;
                    return(t);
                  }
                  t = Option_3(t, x_5, y_5, z_5);
                  LocalPopChoice(a_22);
                }
              else
                {
                  t = z_21;
                  {
                    ATerm d_22 = t;
                    int e_22 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_6 (ATerm t)
                        {
                          ATerm z_85 = NULL;
                          z_85 = t;
                          o_85 :
                          if(!(match_string(z_85, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm b_6 (ATerm t)
                        {
                          ATerm a_86 = NULL;
                          ATerm b_86 = NULL;
                          b_86 = t;
                          if(((a_86 != NULL) && (a_86 != b_86)))
                            _fail(b_86);
                          else
                            a_86 = b_86;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_86));
                          return(t);
                        }
                        ATerm c_6 (ATerm t)
                        {
                          t = term_f_22;
                          return(t);
                        }
                        t = ArgOption_3(t, a_6, b_6, c_6);
                        LocalPopChoice(e_22);
                      }
                    else
                      {
                        t = d_22;
                        {
                          ATerm g_22 = t;
                          int h_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_6 (ATerm t)
                              {
                                ATerm c_86 = NULL;
                                c_86 = t;
                                q_85 :
                                if(!(match_string(c_86, "-i")))
                                  {
                                    if(!(match_string(c_86, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm e_6 (ATerm t)
                              {
                                ATerm d_86 = NULL;
                                ATerm e_86 = NULL;
                                e_86 = t;
                                if(((d_86 != NULL) && (d_86 != e_86)))
                                  _fail(e_86);
                                else
                                  d_86 = e_86;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_86));
                                return(t);
                              }
                              ATerm k_6 (ATerm t)
                              {
                                t = term_i_22;
                                return(t);
                              }
                              t = ArgOption_3(t, d_6, e_6, k_6);
                              LocalPopChoice(h_22);
                            }
                          else
                            {
                              t = g_22;
                              {
                                ATerm m_22 = t;
                                int p_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_6 (ATerm t)
                                    {
                                      ATerm f_86 = NULL;
                                      f_86 = t;
                                      s_85 :
                                      if(!(match_string(f_86, "-o")))
                                        {
                                          if(!(match_string(f_86, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_6 (ATerm t)
                                    {
                                      ATerm g_86 = NULL;
                                      ATerm h_86 = NULL;
                                      h_86 = t;
                                      if(((g_86 != NULL) && (g_86 != h_86)))
                                        _fail(h_86);
                                      else
                                        g_86 = h_86;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_86));
                                      return(t);
                                    }
                                    ATerm o_6 (ATerm t)
                                    {
                                      t = term_q_22;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, l_6, m_6, o_6);
                                    LocalPopChoice(p_22);
                                  }
                                else
                                  {
                                    t = m_22;
                                    {
                                      ATerm v_22 = t;
                                      int a_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm q_6 (ATerm t)
                                          {
                                            ATerm i_86 = NULL;
                                            i_86 = t;
                                            u_85 :
                                            if(!(match_string(i_86, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_6 (ATerm t)
                                          {
                                            t = term_b_23;
                                            return(t);
                                          }
                                          ATerm t_6 (ATerm t)
                                          {
                                            t = term_c_23;
                                            return(t);
                                          }
                                          t = Option_3(t, q_6, s_6, t_6);
                                          LocalPopChoice(a_23);
                                        }
                                      else
                                        {
                                          t = v_22;
                                          {
                                            ATerm u_6 (ATerm t)
                                            {
                                              ATerm j_86 = NULL;
                                              j_86 = t;
                                              v_85 :
                                              if(!(match_string(j_86, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm v_6 (ATerm t)
                                            {
                                              t = term_d_23;
                                              return(t);
                                            }
                                            ATerm w_6 (ATerm t)
                                            {
                                              t = term_e_23;
                                              return(t);
                                            }
                                            t = Option_3(t, u_6, v_6, w_6);
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
  ATerm o_86 = NULL;
  o_86 = t;
  t = SSL_table_destroy(not_null(o_86));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_86 = NULL;
  t_86 = t;
  t = SSL_exit(not_null(t_86));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_86 = NULL;
  x_86 = t;
  t = SSL_implode_string(not_null(x_86));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_78 (ATerm))
{
  ATerm b_87 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_87);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          t = Nil_0(t);
          t = f_78(t);
        }
      }
    return(t);
  }
  t = b_87(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm e_87 = NULL,f_87 = NULL,g_87 = NULL;
        e_87 = t;
        d_87 :
        if(((ATgetType(e_87) == AT_LIST) && ((ATermList) e_87 != ATempty)))
          {
            f_87 = ATgetFirst((ATermList) e_87);
            g_87 = (ATerm) ATgetNext((ATermList) e_87);
            {
              t = not_null(f_87);
              {
                ATerm x_6 (ATerm t)
                {
                  t = not_null(g_87);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, x_6);
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
  ATerm n_87 = NULL;
  n_87 = t;
  t = SSL_explode_string(not_null(n_87));
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
ATerm long_description_1 (ATerm t, ATerm c_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm q_87 (ATerm t)
  {
    ATerm j_23 = t;
    int k_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(k_23);
      }
    else
      {
        t = j_23;
        t = Cons_2(t, r_77, q_87);
      }
    return(t);
  }
  t = q_87(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm v_87 = NULL,w_87 = NULL,x_87 = NULL;
  x_87 = t;
  u_87 :
  if(((ATgetType(x_87) == AT_LIST) && ((ATermList) x_87 != ATempty)))
    {
      v_87 = ATgetFirst((ATermList) x_87);
      w_87 = (ATerm) ATgetNext((ATermList) x_87);
      {
        t = not_null(w_87);
        {
          ATerm y_6 (ATerm t)
          {
            ATerm a_88 = NULL;
            ATerm b_88 = NULL;
            t = h_0(t);
            {
              b_88 = t;
              if(((a_88 != NULL) && (a_88 != b_88)))
                _fail(b_88);
              else
                a_88 = b_88;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(a_88)), not_null(v_87));
            return(t);
          }
          t = reverse_1(t, y_6);
        }
      }
    }
  else
    {
      if(((ATermList) x_87 == ATempty))
        {
          {
            t = term_e_16;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm z_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, z_6);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm b_58 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_50 (ATerm))
{
  ATerm i_88 = NULL,j_88 = NULL;
  i_88 = t;
  h_88 :
  if(match_cons(i_88, sym_Program_1))
    {
      j_88 = ATgetArgument(i_88, 0);
      {
        ATerm l_88 = NULL;
        t = not_null(j_88);
        {
          t = r_50(t);
          {
            l_88 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_88));
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
  ATerm t_88 = NULL;
  ATerm e_7 (ATerm t)
  {
    ATerm f_7 (ATerm t)
    {
      ATerm u_88 = NULL;
      u_88 = t;
      if(((t_88 != NULL) && (t_88 != u_88)))
        _fail(u_88);
      else
        t_88 = u_88;
      return(t);
    }
    t = Program_1(t, f_7);
    return(t);
  }
  t = option_defined_1(t, e_7);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm v_88 = NULL;
      ATerm w_88 = NULL;
      t = term_e_16;
      {
        ATerm j_7 (ATerm t)
        {
          t = not_null(t_88);
          return(t);
        }
        t = short_description_1(t, j_7);
        {
          t = concat_strings_0(t);
          {
            w_88 = t;
            if(((v_88 != NULL) && (v_88 != w_88)))
              _fail(w_88);
            else
              v_88 = w_88;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATempty, not_null(v_88)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_7);
    {
      t = term_s_23;
      {
        t = printnl_0(t);
        {
          t = term_c_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_7 (ATerm t)
                {
                  ATerm x_88 = NULL;
                  x_88 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_88)), term_d_24));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_7);
                {
                  ATerm l_7 (ATerm t)
                  {
                    ATerm z_88 = NULL;
                    ATerm a_89 = NULL;
                    t = term_e_16;
                    {
                      ATerm m_7 (ATerm t)
                      {
                        t = not_null(t_88);
                        return(t);
                      }
                      t = long_description_1(t, m_7);
                      {
                        t = concat_strings_0(t);
                        {
                          a_89 = t;
                          if(((z_88 != NULL) && (z_88 != a_89)))
                            _fail(a_89);
                          else
                            z_88 = a_89;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_88)), term_e_24));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_7);
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
  ATerm l_89 = NULL,m_89 = NULL,n_89 = NULL;
  l_89 = t;
  k_89 :
  if(match_cons(l_89, sym__2))
    {
      m_89 = ATgetArgument(l_89, 0);
      n_89 = ATgetArgument(l_89, 1);
      {
        ATerm h_24;
        h_24 = t;
        t = SSL_printnl(not_null(m_89), not_null(n_89));
        t = h_24;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_50 (ATerm))
{
  ATerm u_89 = NULL,v_89 = NULL;
  u_89 = t;
  t_89 :
  if(match_cons(u_89, sym_Undefined_1))
    {
      v_89 = ATgetArgument(u_89, 0);
      {
        ATerm x_89 = NULL;
        t = not_null(v_89);
        {
          t = s_50(t);
          {
            x_89 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(x_89));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm b_90 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_77, _id);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = Cons_2(t, _id, b_90);
      }
    return(t);
  }
  t = b_90(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_59 (ATerm))
{
  t = fetch_1(t, a_59);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm d_90 = NULL;
  d_90 = t;
  c_90 :
  if(!(match_cons(d_90, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_72(t);
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_90 = NULL,i_90 = NULL,j_90 = NULL;
  h_90 = t;
  g_90 :
  if(match_cons(h_90, sym__2))
    {
      i_90 = ATgetArgument(h_90, 0);
      j_90 = ATgetArgument(h_90, 1);
      t = SSL_table_get(not_null(i_90), not_null(j_90));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL;
  q_90 = t;
  p_90 :
  if(match_cons(q_90, sym__3))
    {
      r_90 = ATgetArgument(q_90, 0);
      s_90 = ATgetArgument(q_90, 1);
      t_90 = ATgetArgument(q_90, 2);
      {
        ATerm m_24;
        m_24 = t;
        {
          ATerm x_90 = NULL;
          ATerm y_90 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_90), not_null(s_90));
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = (ATerm) ATempty;
              }
            {
              y_90 = t;
              if(((x_90 != NULL) && (x_90 != y_90)))
                _fail(y_90);
              else
                x_90 = y_90;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_90), not_null(s_90), (ATerm) ATinsert(CheckATermList(not_null(x_90)), not_null(t_90)));
            t = table_put_0(t);
          }
        }
        t = m_24;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm g_58 (ATerm))
{
  ATerm c_91 = NULL;
  ATerm d_91 = NULL;
  t = term_e_16;
  {
    t = g_58(t);
    {
      d_91 = t;
      if(((c_91 != NULL) && (c_91 != d_91)))
        _fail(d_91);
      else
        c_91 = d_91;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_t_23, term_u_23, not_null(c_91));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm j_91 = NULL,k_91 = NULL,l_91 = NULL;
  j_91 = t;
  i_91 :
  if(match_string(j_91, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(j_91) == AT_LIST) && ((ATermList) j_91 != ATempty)))
        {
          k_91 = ATgetFirst((ATermList) j_91);
          l_91 = (ATerm) ATgetNext((ATermList) j_91);
          {
            ATerm o_91 = NULL;
            ATerm p_24;
            p_24 = t;
            {
              t = not_null(k_91);
              t = a_0(t);
            }
            t = p_24;
            {
              ATerm p_91 = NULL;
              t = term_e_16;
              {
                t = f_0(t);
                {
                  p_91 = t;
                  if(((o_91 != NULL) && (o_91 != p_91)))
                    _fail(p_91);
                  else
                    o_91 = p_91;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_91)), not_null(o_91));
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
  ATerm n_7 (ATerm t)
  {
    ATerm u_91 = NULL;
    u_91 = t;
    t_91 :
    if(!(match_string(u_91, "--help")))
      {
        if(!(match_string(u_91, "-h")))
          {
            if(!(match_string(u_91, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    t = term_q_24;
    return(t);
  }
  ATerm t_7 (ATerm t)
  {
    t = term_r_24;
    return(t);
  }
  t = Option_3(t, n_7, s_7, t_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_91 = NULL,y_91 = NULL,z_91 = NULL;
  x_91 = t;
  w_91 :
  if(((ATgetType(x_91) == AT_LIST) && ((ATermList) x_91 != ATempty)))
    {
      y_91 = ATgetFirst((ATermList) x_91);
      z_91 = (ATerm) ATgetNext((ATermList) x_91);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_91)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_91)));
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm e_58 (ATerm))
{
  ATerm t_24;
  t_24 = t;
  {
    ATerm u_7 (ATerm t)
    {
      t = term_u_24;
      t = e_58(t);
      return(t);
    }
    t = try_1(t, u_7);
  }
  t = t_24;
  {
    ATerm v_7 (ATerm t)
    {
      ATerm e_92 = NULL;
      e_92 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(e_92));
      return(t);
    }
    ATerm w_7 (ATerm t)
    {
      ATerm v_24 = t;
      int w_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_24 = t;
          int d_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_25);
            }
          else
            {
              t = y_24;
              {
                t = e_58(t);
                t = Cons_2(t, _id, w_7);
              }
            }
          LocalPopChoice(w_24);
        }
      else
        {
          t = v_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_7, w_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL;
  ATerm e_25;
  e_25 = t;
  {
    ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
    n_92 = t;
    j_92 :
    if(match_cons(n_92, sym__3))
      {
        o_92 = ATgetArgument(n_92, 0);
        p_92 = ATgetArgument(n_92, 1);
        q_92 = ATgetArgument(n_92, 2);
        {
          if(((k_92 != NULL) && (k_92 != o_92)))
            _fail(o_92);
          else
            k_92 = o_92;
          {
            if(((l_92 != NULL) && (l_92 != p_92)))
              _fail(p_92);
            else
              l_92 = p_92;
            {
              if(((m_92 != NULL) && (m_92 != q_92)))
                _fail(q_92);
              else
                m_92 = q_92;
              t = SSL_table_put(not_null(k_92), not_null(l_92), not_null(m_92));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = e_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm d_58 (ATerm))
{
  ATerm t_92 = NULL;
  ATerm n_25;
  n_25 = t;
  {
    t = term_x_25;
    t = table_put_0(t);
  }
  t = n_25;
  {
    ATerm d_8 (ATerm t)
    {
      ATerm j_26 = t;
      int k_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_58(t);
          LocalPopChoice(k_26);
        }
      else
        {
          t = j_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_8);
    {
      ATerm e_8 (ATerm t)
      {
        ATerm l_26 = t;
        int m_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_18;
                t = exit_0(t);
              }
            }
            LocalPopChoice(m_26);
          }
        else
          {
            t = l_26;
            {
              ATerm f_8 (ATerm t)
              {
                ATerm j_8 (ATerm t)
                {
                  ATerm u_92 = NULL;
                  u_92 = t;
                  if(((t_92 != NULL) && (t_92 != u_92)))
                    _fail(u_92);
                  else
                    t_92 = u_92;
                  return(t);
                }
                t = Undefined_1(t, j_8);
                return(t);
              }
              t = option_defined_1(t, f_8);
              {
                ATerm n_26;
                n_26 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_92)), term_o_26));
                  t = printnl_0(t);
                }
                t = n_26;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_8);
      {
        ATerm p_26;
        p_26 = t;
        {
          t = term_t_23;
          t = table_destroy_0(t);
        }
        t = p_26;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm), ATerm m_59 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_59(t);
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, k_8);
  {
    t = store_options_0(t);
    {
      ATerm s_26 = t;
      int t_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, m_59);
          LocalPopChoice(t_26);
        }
      else
        {
          t = s_26;
          {
            ATerm u_26 = t;
            int v_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, k_59);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(v_26);
              }
            else
              {
                t = u_26;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm))
{
  t = iowrap_3(t, f_59, g_59, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm c_59 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    t = _2(t, _id, c_59);
    return(t);
  }
  t = iowrap_2(t, l_8, _fail);
  return(t);
}
ATerm extract_all_0 (ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    ATerm n_8 (ATerm t)
    {
      ATerm t_8 (ATerm t)
      {
        ATerm u_8 (ATerm t)
        {
          t = Strategies_1(t, all_defs_0);
          return(t);
        }
        t = Cons_2(t, u_8, Nil_0);
        return(t);
      }
      t = Cons_2(t, _id, t_8);
      return(t);
    }
    t = Specification_1(t, n_8);
    return(t);
  }
  t = iowrap_1(t, m_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = extract_all_0(t);
  return(t);
}
