#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Signature_1;
Symbol sym_Specification_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Con_3;
Symbol sym_StratRule_3;
Symbol sym_Rule_3;
Symbol sym_RDefT_4;
Symbol sym_DynamicRules_1;
Symbol sym_OverrideDynamicRules_1;
Symbol sym_LRule_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_AM_2;
Symbol sym_Fail_0;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Let_2;
Symbol sym_Call_2;
Symbol sym_CallT_3;
Symbol sym_Match_1;
Symbol sym_Build_1;
Symbol sym_Scope_2;
Symbol sym_BA_2;
Symbol sym_Seq_2;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Rec_2;
Symbol sym_Not_1;
Symbol sym_Where_1;
Symbol sym_Test_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_Some_1;
Symbol sym_One_1;
Symbol sym_All_1;
Symbol sym_ExplodeCong_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_Some_1;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Scopes_0;
Symbol sym__0;
Symbol sym__1;
Symbol sym__2;
Symbol sym__3;
Symbol sym__4;
Symbol sym__5;
Symbol sym__6;
Symbol sym__7;
Symbol sym__8;
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Signature_1 = ATmakeSymbol("Signature", 1, ATfalse);
  ATprotectSymbol(sym_Signature_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Wld_0 = ATmakeSymbol("Wld", 0, ATfalse);
  ATprotectSymbol(sym_Wld_0);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Explode_2 = ATmakeSymbol("Explode", 2, ATfalse);
  ATprotectSymbol(sym_Explode_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_App_2 = ATmakeSymbol("App", 2, ATfalse);
  ATprotectSymbol(sym_App_2);
  sym_RootApp_1 = ATmakeSymbol("RootApp", 1, ATfalse);
  ATprotectSymbol(sym_RootApp_1);
  sym_As_2 = ATmakeSymbol("As", 2, ATfalse);
  ATprotectSymbol(sym_As_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_DynamicRules_1 = ATmakeSymbol("DynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_DynamicRules_1);
  sym_OverrideDynamicRules_1 = ATmakeSymbol("OverrideDynamicRules", 1, ATfalse);
  ATprotectSymbol(sym_OverrideDynamicRules_1);
  sym_LRule_1 = ATmakeSymbol("LRule", 1, ATfalse);
  ATprotectSymbol(sym_LRule_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_Fail_0 = ATmakeSymbol("Fail", 0, ATfalse);
  ATprotectSymbol(sym_Fail_0);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Let_2 = ATmakeSymbol("Let", 2, ATfalse);
  ATprotectSymbol(sym_Let_2);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_Build_1 = ATmakeSymbol("Build", 1, ATfalse);
  ATprotectSymbol(sym_Build_1);
  sym_Scope_2 = ATmakeSymbol("Scope", 2, ATfalse);
  ATprotectSymbol(sym_Scope_2);
  sym_BA_2 = ATmakeSymbol("BA", 2, ATfalse);
  ATprotectSymbol(sym_BA_2);
  sym_Seq_2 = ATmakeSymbol("Seq", 2, ATfalse);
  ATprotectSymbol(sym_Seq_2);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Rec_2 = ATmakeSymbol("Rec", 2, ATfalse);
  ATprotectSymbol(sym_Rec_2);
  sym_Not_1 = ATmakeSymbol("Not", 1, ATfalse);
  ATprotectSymbol(sym_Not_1);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Test_1 = ATmakeSymbol("Test", 1, ATfalse);
  ATprotectSymbol(sym_Test_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_One_1 = ATmakeSymbol("One", 1, ATfalse);
  ATprotectSymbol(sym_One_1);
  sym_All_1 = ATmakeSymbol("All", 1, ATfalse);
  ATprotectSymbol(sym_All_1);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Stream_1 = ATmakeSymbol("Stream", 1, ATfalse);
  ATprotectSymbol(sym_Stream_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym__9 = ATmakeSymbol("", 9, ATfalse);
  ATprotectSymbol(sym__9);
  sym__10 = ATmakeSymbol("", 10, ATfalse);
  ATprotectSymbol(sym__10);
  sym__11 = ATmakeSymbol("", 11, ATfalse);
  ATprotectSymbol(sym__11);
  sym__12 = ATmakeSymbol("", 12, ATfalse);
  ATprotectSymbol(sym__12);
  sym__13 = ATmakeSymbol("", 13, ATfalse);
  ATprotectSymbol(sym__13);
  sym__14 = ATmakeSymbol("", 14, ATfalse);
  ATprotectSymbol(sym__14);
  sym__15 = ATmakeSymbol("", 15, ATfalse);
  ATprotectSymbol(sym__15);
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Cong_2 = ATmakeSymbol("Cong", 2, ATfalse);
  ATprotectSymbol(sym_Cong_2);
  sym_InfixApp_3 = ATmakeSymbol("InfixApp", 3, ATfalse);
  ATprotectSymbol(sym_InfixApp_3);
  sym_MA_2 = ATmakeSymbol("MA", 2, ATfalse);
  ATprotectSymbol(sym_MA_2);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
}
ATerm term_j_56;
ATerm term_b_56;
ATerm term_o_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_j_55;
ATerm term_c_55;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_y_53;
ATerm term_t_53;
ATerm term_s_53;
ATerm term_r_53;
ATerm term_q_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_y_52;
ATerm term_x_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_l_52;
ATerm term_h_52;
ATerm term_w_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_s_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_e_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_x_50;
ATerm term_l_50;
ATerm term_g_50;
ATerm term_u_49;
ATerm term_b_49;
ATerm term_y_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_m_48;
ATerm term_k_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_c_48;
ATerm term_i_36;
ATerm term_l_34;
ATerm term_k_34;
ATerm term_b_34;
ATerm term_q_33;
ATerm term_o_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_c_33;
ATerm term_y_32;
ATerm term_u_32;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_o_31;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_k_28;
ATerm term_i_28;
ATerm term_r_27;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_r_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_f_23;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_m_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_z_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_CallT_3, term_g_26, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_26, term_l_26);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_26, term_m_26);
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_26, term_n_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(sym__2, term_p_26, term_o_26);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_26);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_28);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_26, term_l_26);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_26, term_y_28);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_a_29, term_z_28);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_29);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_30);
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_31);
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_31);
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_l_34));
  term_l_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_34);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_48);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(sym__2, term_g_21, term_c_51);
  ATprotect(&(term_e_51));
  term_e_51 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_51);
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym__2, term_j_51, term_z_20);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_52));
  term_h_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_52));
  term_y_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(sym__2, term_s_51, term_u_51);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(sym__2, term_n_53, term_z_20);
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_53));
  term_q_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_53));
  term_r_53 = (ATerm) ATmakeAppl(sym__2, term_q_53, term_z_20);
  ATprotect(&(term_s_53));
  term_s_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(sym__2, term_c_53, term_z_20);
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(sym__2, term_j_55, term_z_20);
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_55));
  term_o_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_56));
  term_b_56 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_56));
  term_j_56 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm j_132 (ATerm), ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm y_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm o_8 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm t);
static ATerm j_11 (ATerm v_10, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm s_8 (ATerm q_69, ATerm r_69, ATerm s_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm v_33 (ATerm v_32, ATerm w_32, ATerm t);
static ATerm w_33 (ATerm b_33, ATerm d_33, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm b_10 (ATerm r_41, ATerm s_41, ATerm t);
ATerm end_scope_1_0 (ATerm e_109 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm d_109 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm c_10 (ATerm t_24, ATerm s_24, ATerm u_24, ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm z_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm e_100 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm j_10 (ATerm d_23, ATerm t);
ATerm alltd_1_0 (ATerm v_101 (ATerm), ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm a_7 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm k_7 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_100 (ATerm), ATerm t);
static ATerm n_7 (ATerm t);
static ATerm l_10 (ATerm o_58, ATerm n_58, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm t_7 (ATerm t);
static ATerm w_7 (ATerm t);
static ATerm z_7 (ATerm t);
static ATerm d_8 (ATerm t);
static ATerm e_8 (ATerm t);
static ATerm f_8 (ATerm t);
static ATerm h_8 (ATerm t);
static ATerm i_8 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_101 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm f_100 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t);
static ATerm r_8 (ATerm t);
static ATerm t_8 (ATerm t);
static ATerm u_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm g_127 (ATerm), ATerm h_127 (ATerm), ATerm t);
static ATerm x_8 (ATerm t);
static ATerm y_8 (ATerm t);
static ATerm c_9 (ATerm t);
static ATerm d_9 (ATerm t);
static ATerm e_9 (ATerm t);
static ATerm h_9 (ATerm t);
static ATerm o_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm r_10 (ATerm t);
static ATerm s_10 (ATerm t);
static ATerm t_10 (ATerm t);
static ATerm u_10 (ATerm t);
static ATerm w_10 (ATerm t);
static ATerm x_10 (ATerm t);
static ATerm y_10 (ATerm t);
ATerm spaste_1_0 (ATerm w_131 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t);
static ATerm z_10 (ATerm t);
static ATerm w_11 (ATerm g_76, ATerm f_76, ATerm t);
ATerm SVar_1_0 (ATerm j_83 (ATerm), ATerm t);
static ATerm g_12 (ATerm i_128 (ATerm), ATerm j_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_67, ATerm m_67, ATerm l_67, ATerm t);
static ATerm y_11 (ATerm t);
static ATerm l_12 (ATerm t);
static ATerm m_12 (ATerm t);
static ATerm h_12 (ATerm c_128 (ATerm), ATerm d_128 (ATerm (ATerm), ATerm), ATerm f_67, ATerm i_67, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm s_120 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm x_127 (ATerm (ATerm), ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_128 (ATerm (ATerm), ATerm), ATerm t);
static ATerm m_13 (ATerm t);
static ATerm o_13 (ATerm t);
static ATerm q_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm b_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
ATerm tpaste_1_0 (ATerm s_131 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t);
static ATerm f_14 (ATerm t);
static ATerm g_14 (ATerm t);
static ATerm h_14 (ATerm t);
static ATerm m_14 (ATerm t);
static ATerm n_14 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
ATerm Bind4_0_0 (ATerm t);
static ATerm a_12 (ATerm n_114 (ATerm), ATerm o_49, ATerm n_49, ATerm t);
ATerm foldr_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
static ATerm b_12 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_49, ATerm r_49, ATerm t);
static ATerm c_12 (ATerm i_114 (ATerm), ATerm m_49, ATerm l_49, ATerm t);
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_126 (ATerm e_126, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm y_14 (ATerm t);
static ATerm z_14 (ATerm t);
static ATerm a_15 (ATerm t);
static ATerm e_12 (ATerm r_676, ATerm w_676, ATerm g_69, ATerm t);
ATerm while_not_2_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t);
static ATerm b_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm h_129 (ATerm q_127, ATerm r_127, ATerm s_127, ATerm t);
static ATerm f_15 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm h_15 (ATerm t);
static ATerm j_15 (ATerm t);
static ATerm l_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
ATerm free_vars_3_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm t_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm x_15 (ATerm t);
static ATerm z_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm a_80 (ATerm), ATerm t);
static ATerm a_16 (ATerm t);
static ATerm b_16 (ATerm t);
static ATerm c_16 (ATerm t);
static ATerm d_16 (ATerm t);
static ATerm e_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm n_12 (ATerm x_41, ATerm y_41, ATerm t);
static ATerm l_16 (ATerm t);
static ATerm m_16 (ATerm t);
static ATerm t_16 (ATerm t);
static ATerm u_16 (ATerm t);
static ATerm v_16 (ATerm t);
static ATerm w_16 (ATerm t);
static ATerm x_16 (ATerm t);
static ATerm y_16 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm z_16 (ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm o_12 (ATerm h_109 (ATerm), ATerm e_41, ATerm c_41, ATerm t);
static ATerm h_17 (ATerm t);
static ATerm p_12 (ATerm f_22, ATerm g_22, ATerm i_22, ATerm h_22, ATerm t);
ATerm map_1_0 (ATerm j_110 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t);
static ATerm s_12 (ATerm j_32, ATerm k_32, ATerm t);
static ATerm t_12 (ATerm v_37, ATerm y_37, ATerm t);
static ATerm v_12 (ATerm w_108 (ATerm), ATerm f_312, ATerm d_38, ATerm t);
static ATerm u_12 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm k_17 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm o_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm a_123 (ATerm), ATerm t);
static ATerm t_140 (ATerm n_140, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_12 (ATerm z_37, ATerm t);
static ATerm y_12 (ATerm l_32, ATerm m_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_142 (ATerm d_141, ATerm t);
static ATerm f_142 (ATerm h_141, ATerm i_141, ATerm j_141, ATerm t);
static ATerm g_142 (ATerm r_141, ATerm s_141, ATerm t_141, ATerm t);
static ATerm a_13 (ATerm t);
static ATerm p_17 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm t_110 (ATerm), ATerm t);
static ATerm r_12 (ATerm c_31, ATerm d_31, ATerm t);
ATerm debug_1_0 (ATerm u_108 (ATerm), ATerm t);
static ATerm q_17 (ATerm t);
static ATerm u_17 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm v_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm x_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm z_17 (ATerm t);
static ATerm a_18 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
static ATerm g_18 (ATerm t);
static ATerm m_18 (ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_13 (ATerm f_63, ATerm g_63, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm p_18 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_13 (ATerm m_41, ATerm n_41, ATerm l_41, ATerm t);
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t);
static ATerm s_18 (ATerm t);
static ATerm t_18 (ATerm t);
static ATerm u_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_13 (ATerm l_39, ATerm n_39, ATerm t);
ATerm foldr_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_132 (ATerm), ATerm t);
static ATerm x_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_18 (ATerm t);
ATerm need_help_1_0 (ATerm y_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_13 (ATerm d_43, ATerm e_43, ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm g_19 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm h_19 (ATerm t);
static ATerm i_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
static ATerm m_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm d_127 (ATerm), ATerm t);
static ATerm t_19 (ATerm t);
static ATerm u_19 (ATerm t);
static ATerm v_19 (ATerm t);
static ATerm y_19 (ATerm t);
ATerm parse_options_1_0 (ATerm c_127 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t);
static ATerm b_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm o_20 (ATerm t);
ATerm iowrap_3_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm t);
static ATerm s_20 (ATerm t);
static ATerm t_20 (ATerm t);
static ATerm u_20 (ATerm t);
static ATerm v_20 (ATerm t);
static ATerm x_20 (ATerm t);
static ATerm y_20 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,m_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_z_20;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_a_21;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_21), b_0), term_b_21);
  u_0 = t;
  t = SSL_printnl(m_0, u_0);
  t = term_d_21;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm j_132 (ATerm), ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    ATerm e_21 = t;
    int f_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_g_21;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_m_21);
        t = geq_0_0(t);
        t = w_0;
        t = j_132(t);
        LocalPopChoice(f_21);
      }
    else
      {
        t = e_21;
        t = w_0;
      }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,f_1 = NULL;
  e_1 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      f_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
        t = e_1;
        t = new_0_0(t);
        i_1 = t;
        t = new_0_0(t);
        j_1 = t;
        t = new_0_0(t);
        k_1 = t;
        t = new_0_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, d_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_p_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_1 = ATgetArgument(t, 0);
          {
            ATerm m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL;
            t = e_1;
            t = new_0_0(t);
            q_1 = t;
            t = f_1;
            {
              static ATerm v_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((m_1 != NULL) && (m_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      m_1 = ATgetArgument(t, 0);
                    if(((n_1 != NULL) && (n_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      n_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
                return(t);
              }
              t = oncetd_1_0(v_0, t);
            }
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_1)), not_null(m_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
          }
        }
      else
        {
          ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,x_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_1;
          t = new_0_0(t);
          v_1 = t;
          t = new_0_0(t);
          w_1 = t;
          t = f_1;
          {
            static ATerm x_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((t_1 != NULL) && (t_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    t_1 = ATgetArgument(t, 0);
                  if(((u_1 != NULL) && (u_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    u_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, v_1);
              return(t);
            }
            t = oncetd_1_0(x_0, t);
          }
          x_1 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, w_1))))), (ATerm)ATmakeAppl(sym_Var_1, v_1), (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(t_1)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm a_2 = NULL,c_2 = NULL;
  a_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
        t = a_2;
        t = new_0_0(t);
        h_2 = t;
        t = c_2;
        {
          static ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((f_2 != NULL) && (f_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_2 = ATgetArgument(t, 0);
                if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, h_2), f_2);
            return(t);
          }
          t = pat_td_1_0(b_1, t);
        }
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_2))))));
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        {
          ATerm a_22 = t;
          int c_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
              t = a_2;
              t = new_0_0(t);
              m_2 = t;
              t = c_2;
              {
                static ATerm c_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_2 != NULL) && (l_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_2);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
              }
              n_2 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_2)), not_null(l_2))));
              LocalPopChoice(c_22);
            }
          else
            {
              t = a_22;
              {
                ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,s_2 = NULL;
                t = a_2;
                t = new_0_0(t);
                r_2 = t;
                t = c_2;
                {
                  static ATerm g_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_2 = ATgetArgument(t, 0);
                        if(((p_2 != NULL) && (p_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          p_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_2);
                    return(t);
                  }
                  t = pat_td_1_0(g_1, t);
                }
                s_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(p_2)), not_null(q_2)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = y_130(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
      {
        ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL,p_5 = NULL;
        n_5 = t;
        if(match_cons(t, sym_Op_2))
          {
            o_5 = ATgetArgument(t, 0);
            p_5 = ATgetArgument(t, 1);
            {
              ATerm y_1 = NULL,d_2 = NULL,e_3 = NULL;
              t = SSLgetAnnotations(n_5);
              y_1 = t;
              t = p_5;
              {
                static ATerm h_1 (ATerm t)
                {
                  t = pat_td_1_0(y_130, t);
                  return(t);
                }
                t = fetch_1_0(h_1, t);
              }
              d_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, o_5, d_2);
              e_3 = t;
              t = SSLsetAnnotations(e_3, y_1);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                o_5 = ATgetArgument(t, 0);
                p_5 = ATgetArgument(t, 1);
                {
                  ATerm j_22 = t;
                  int k_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_2 = NULL,c_3 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(n_5);
                      z_2 = t;
                      t = p_5;
                      t = pat_td_1_0(y_130, t);
                      c_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, o_5, c_3);
                      f_3 = t;
                      t = SSLsetAnnotations(f_3, z_2);
                      LocalPopChoice(k_22);
                    }
                  else
                    {
                      t = j_22;
                      {
                        ATerm g_5 = NULL,r_5 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(n_5);
                        g_5 = t;
                        t = o_5;
                        t = pat_td_1_0(y_130, t);
                        r_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, r_5, p_5);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, g_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    o_5 = ATgetArgument(t, 0);
                    p_5 = ATgetArgument(t, 1);
                    m_5 = ATgetArgument(t, 2);
                    {
                      ATerm e_6 = NULL,i_6 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(n_5);
                      e_6 = t;
                      t = m_5;
                      {
                        static ATerm o_1 (ATerm t)
                        {
                          t = pat_td_1_0(y_130, t);
                          return(t);
                        }
                        t = fetch_1_0(o_1, t);
                      }
                      i_6 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, o_5, p_5, i_6);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, e_6);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        o_5 = ATgetArgument(t, 0);
                        p_5 = ATgetArgument(t, 1);
                        m_5 = ATgetArgument(t, 2);
                        {
                          ATerm j_7 = NULL,s_7 = NULL,i_3 = NULL;
                          t = SSLgetAnnotations(n_5);
                          j_7 = t;
                          t = m_5;
                          {
                            static ATerm p_1 (ATerm t)
                            {
                              t = pat_td_1_0(y_130, t);
                              return(t);
                            }
                            t = fetch_1_0(p_1, t);
                          }
                          s_7 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, o_5, p_5, s_7);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, j_7);
                        }
                      }
                    else
                      {
                        ATerm j_8 = NULL,m_8 = NULL,j_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            o_5 = ATgetArgument(t, 0);
                            p_5 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(n_5);
                        j_8 = t;
                        t = p_5;
                        t = pat_td_1_0(y_130, t);
                        m_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, o_5, m_8);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, j_8);
                      }
                  }
              }
          }
      }
    }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm p_6 = NULL,r_6 = NULL;
  p_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      r_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 = NULL,t_6 = NULL,x_6 = NULL,y_6 = NULL;
        t = p_6;
        t = new_0_0(t);
        x_6 = t;
        t = r_6;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_6 != NULL) && (s_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_6 = ATgetArgument(t, 0);
                if(((t_6 != NULL) && (t_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_6);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        y_6 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_6)), not_null(s_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_6)))), (ATerm) ATmakeAppl(sym_Build_1, y_6)));
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_6 = NULL,c_7 = NULL,d_7 = NULL;
              t = p_6;
              t = new_0_0(t);
              c_7 = t;
              t = r_6;
              {
                static ATerm z_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((z_6 != NULL) && (z_6 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        z_6 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_7);
                  return(t);
                }
                t = pat_td_1_0(z_1, t);
              }
              d_7 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(z_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_7)))), (ATerm) ATmakeAppl(sym_Build_1, d_7)));
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              {
                ATerm e_7 = NULL,f_7 = NULL,i_7 = NULL,l_7 = NULL;
                t = p_6;
                t = new_0_0(t);
                i_7 = t;
                t = r_6;
                {
                  static ATerm b_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((e_7 != NULL) && (e_7 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          e_7 = ATgetArgument(t, 0);
                        if(((f_7 != NULL) && (f_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_7);
                    return(t);
                  }
                  t = pat_td_1_0(b_2, t);
                }
                l_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(e_7), not_null(f_7), (ATerm) ATmakeAppl(sym_Var_1, i_7))), (ATerm) ATmakeAppl(sym_Build_1, l_7)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm q_22 = t;
  if((PushChoice() == 0))
    {
      ATerm b_8 = NULL,c_8 = NULL,g_8 = NULL,q_3 = NULL;
      g_8 = t;
      if(match_cons(t, sym_Var_1))
        {
          c_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_8);
      b_8 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, c_8);
      q_3 = t;
      t = SSLsetAnnotations(q_3, b_8);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_22;
    }
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm n_8 = NULL,q_8 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_8 = ATgetFirst((ATermList) t);
      q_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_8, q_8);
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm v_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(match_cons(t_22, sym__2))
        {
          v_8 = ATgetArgument(t_22, 0);
          z_8 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            a_9 = ATgetArgument(u_22, 0);
            b_9 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_9), v_8), (ATerm) ATinsert(CheckATermList(b_9), z_8));
  return(t);
}
static ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm f_9 = NULL,g_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_9 = ATgetFirst((ATermList) t);
      g_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_9, g_9);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm z_9 = NULL,f_10 = NULL,g_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(match_cons(v_22, sym__2))
        {
          z_9 = ATgetArgument(v_22, 0);
          f_10 = ATgetArgument(v_22, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(match_cons(w_22, sym__2))
          {
            g_10 = ATgetArgument(w_22, 0);
            k_10 = ATgetArgument(w_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_10), z_9), (ATerm) ATinsert(CheckATermList(k_10), f_10));
  return(t);
}
static ATerm o_8 (ATerm d_74, ATerm e_74, ATerm f_74, ATerm t)
{
  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL,y_7 = NULL,a_8 = NULL,r_3 = NULL;
  t = f_74;
  t = fetch_1_0(e_2, t);
  t = f_74;
  t = genzip_4_0(j_2, k_2, o_2, LiftPrimArg_0_0, t);
  a_8 = t;
  if(match_cons(t, sym__2))
    {
      u_7 = ATgetArgument(t, 0);
      v_7 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_8);
  r_7 = t;
  t = u_7;
  t = concat_0_0(t);
  x_7 = t;
  t = v_7;
  t = genzip_4_0(t_2, u_2, v_2, _id, t);
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_7, y_7);
  r_3 = t;
  t = SSLsetAnnotations(r_3, r_7);
  if(match_cons(t, sym__2))
    {
      o_7 = ATgetArgument(t, 0);
      {
        ATerm x_22 = ATgetArgument(t, 1);
        if(match_cons(x_22, sym__2))
          {
            p_7 = ATgetArgument(x_22, 0);
            q_7 = ATgetArgument(x_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, o_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_7), (ATerm) ATmakeAppl(sym_CallT_3, d_74, e_74, q_7)));
  return(t);
}
static ATerm j_11 (ATerm v_10, ATerm t)
{
  ATerm a_11 = NULL;
  t = v_10;
  {
    ATerm b_23 = t;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,u_3 = NULL;
        f_11 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_11);
        d_11 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_11);
        u_3 = t;
        t = SSLsetAnnotations(u_3, d_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_23;
      }
  }
  t = new_0_0(t);
  a_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, a_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_10), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_11)))), (ATerm) ATmakeAppl(sym_Var_1, a_11)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_11 = ATgetArgument(t, 0);
      {
        ATerm c_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_11(g_11, t);
            LocalPopChoice(e_23);
          }
        else
          {
            t = c_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_f_23, (ATerm) ATmakeAppl(sym_Var_1, h_11)));
          }
      }
    }
  else
    {
      t = j_11(g_11, t);
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm i_23 = t;
  if((PushChoice() == 0))
    {
      ATerm r_9 = NULL,s_9 = NULL,t_9 = NULL,w_3 = NULL;
      t_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          s_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_9);
      r_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, s_9);
      w_3 = t;
      t = SSLsetAnnotations(w_3, r_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_9 = NULL,v_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_9 = ATgetFirst((ATermList) t);
      v_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_9, v_9);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL,a_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym__2))
        {
          w_9 = ATgetArgument(j_23, 0);
          x_9 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(match_cons(k_23, sym__2))
          {
            y_9 = ATgetArgument(k_23, 0);
            a_10 = ATgetArgument(k_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_9), w_9), (ATerm) ATinsert(CheckATermList(a_10), x_9));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_10 = ATgetFirst((ATermList) t);
      e_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_10, e_10);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,m_10 = NULL,n_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(match_cons(l_23, sym__2))
        {
          h_10 = ATgetArgument(l_23, 0);
          i_10 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(match_cons(m_23, sym__2))
          {
            m_10 = ATgetArgument(m_23, 0);
            n_10 = ATgetArgument(m_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_10), h_10), (ATerm) ATinsert(CheckATermList(n_10), i_10));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm o_23 = t;
  if((PushChoice() == 0))
    {
      ATerm z_11 = NULL,d_12 = NULL,f_12 = NULL,y_3 = NULL;
      f_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          d_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_12);
      z_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, d_12);
      y_3 = t;
      t = SSLsetAnnotations(y_3, z_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_12 = ATgetFirst((ATermList) t);
      j_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_12, j_12);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm k_12 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_23 = ATgetArgument(t, 0);
      if(match_cons(p_23, sym__2))
        {
          k_12 = ATgetArgument(p_23, 0);
          k_13 = ATgetArgument(p_23, 1);
        }
      else
        _fail(t);
      {
        ATerm r_23 = ATgetArgument(t, 1);
        if(match_cons(r_23, sym__2))
          {
            l_13 = ATgetArgument(r_23, 0);
            n_13 = ATgetArgument(r_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_13), k_12), (ATerm) ATinsert(CheckATermList(n_13), k_13));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_r_22;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_13 = ATgetFirst((ATermList) t);
      v_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_13, v_13);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm x_13 = NULL,z_13 = NULL,a_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(match_cons(s_23, sym__2))
        {
          x_13 = ATgetArgument(s_23, 0);
          z_13 = ATgetArgument(s_23, 1);
        }
      else
        _fail(t);
      {
        ATerm t_23 = ATgetArgument(t, 1);
        if(match_cons(t_23, sym__2))
          {
            a_14 = ATgetArgument(t_23, 0);
            c_14 = ATgetArgument(t_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_14), x_13), (ATerm) ATinsert(CheckATermList(c_14), z_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      p_16 = ATgetArgument(t, 2);
      {
        ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL,x_3 = NULL;
        t = p_16;
        t = fetch_1_0(w_2, t);
        t = p_16;
        t = genzip_4_0(x_2, y_2, a_3, LiftPrimArg_0_0, t);
        q_9 = t;
        if(match_cons(t, sym__2))
          {
            m_9 = ATgetArgument(t, 0);
            n_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_9);
        l_9 = t;
        t = m_9;
        t = concat_0_0(t);
        o_9 = t;
        t = n_9;
        t = genzip_4_0(b_3, d_3, k_3, _id, t);
        p_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
        x_3 = t;
        t = SSLsetAnnotations(x_3, l_9);
        if(match_cons(t, sym__2))
          {
            i_9 = ATgetArgument(t, 0);
            {
              ATerm u_23 = ATgetArgument(t, 1);
              if(match_cons(u_23, sym__2))
                {
                  j_9 = ATgetArgument(u_23, 0);
                  k_9 = ATgetArgument(u_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_9), (ATerm) ATmakeAppl(sym_PrimT_3, r_16, s_16, k_9)));
      }
    }
  else
    {
      ATerm c_11 = NULL,k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,t_11 = NULL,u_11 = NULL,x_11 = NULL,z_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          r_16 = ATgetArgument(t, 0);
          s_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_16;
      t = fetch_1_0(l_3, t);
      t = s_16;
      t = genzip_4_0(m_3, n_3, o_3, LiftPrimArg_0_0, t);
      x_11 = t;
      if(match_cons(t, sym__2))
        {
          n_11 = ATgetArgument(t, 0);
          o_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_11);
      m_11 = t;
      t = n_11;
      t = concat_0_0(t);
      t_11 = t;
      t = o_11;
      t = genzip_4_0(p_3, s_3, t_3, _id, t);
      u_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, u_11);
      z_3 = t;
      t = SSLsetAnnotations(z_3, m_11);
      if(match_cons(t, sym__2))
        {
          c_11 = ATgetArgument(t, 0);
          {
            ATerm v_23 = ATgetArgument(t, 1);
            if(match_cons(v_23, sym__2))
              {
                k_11 = ATgetArgument(v_23, 0);
                l_11 = ATgetArgument(v_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, c_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_11), (ATerm) ATmakeAppl(sym_PrimT_3, r_16, (ATerm)ATempty, l_11)));
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  t_17 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_17 = ATgetArgument(t, 0);
      r_17 = ATgetArgument(t, 1);
      s_17 = ATgetArgument(t, 2);
      {
        ATerm s_14 = NULL,f_4 = NULL;
        t = SSLgetAnnotations(t_17);
        s_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_17, r_17, s_17);
        f_4 = t;
        t = SSLsetAnnotations(f_4, s_14);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = t_17;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm x_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
      c_19 = ATgetArgument(t, 2);
      {
        ATerm s_15 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(d_19);
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, e_19, f_19, c_19);
        h_4 = t;
        t = SSLsetAnnotations(h_4, s_15);
      }
    }
  else
    {
      ATerm a_17 = NULL,j_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          e_19 = ATgetArgument(t, 0);
          f_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_19);
      a_17 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, e_19, f_19);
      j_4 = t;
      t = SSLsetAnnotations(j_4, a_17);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm y_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(a_4, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_19;
  if(match_cons(t, sym_StratRule_3))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
      r_19 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_19), (ATerm) ATmakeAppl(sym_Where_1, r_19)), p_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          p_19 = ATgetArgument(t, 0);
          q_19 = ATgetArgument(t, 1);
          r_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_19;
      t = pureterm_0_0(t);
      t = q_19;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, q_19)), (ATerm) ATmakeAppl(sym_Where_1, r_19)), (ATerm) ATmakeAppl(sym_Match_1, p_19)));
    }
  return(t);
}
static ATerm s_8 (ATerm q_69, ATerm r_69, ATerm s_69, ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL,f_20 = NULL,i_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
  t = new_0_0(t);
  l_20 = t;
  t = q_69;
  {
    static ATerm b_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm z_23 = ATgetArgument(t, 0);
          if(match_cons(z_23, sym_Var_1))
            {
              if(((i_20 != NULL) && (i_20 != ATgetArgument(z_23, 0))))
                _fail(ATgetArgument(z_23, 0));
              else
                i_20 = ATgetArgument(z_23, 0);
            }
          else
            _fail(t);
          if(((e_20 != NULL) && (e_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_20 = ATgetArgument(t, 1);
          {
            ATerm d_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, i_20);
      return(t);
    }
    t = oncetd_1_0(b_4, t);
  }
  m_20 = t;
  t = r_69;
  {
    static ATerm c_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm e_24 = ATgetArgument(t, 0);
          if(match_cons(e_24, sym_Var_1))
            {
              if(((i_20 != NULL) && (i_20 != ATgetArgument(e_24, 0))))
                _fail(ATgetArgument(e_24, 0));
              else
                i_20 = ATgetArgument(e_24, 0);
            }
          else
            _fail(t);
          if(((f_20 != NULL) && (f_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_20 = ATgetArgument(t, 1);
          {
            ATerm g_24 = ATgetArgument(t, 2);
            if(match_cons(g_24, sym_CallT_3))
              {
                if(((d_20 != NULL) && (d_20 != ATgetArgument(g_24, 0))))
                  _fail(ATgetArgument(g_24, 0));
                else
                  d_20 = ATgetArgument(g_24, 0);
                {
                  ATerm h_24 = ATgetArgument(g_24, 1);
                  if(((ATgetType(h_24) != AT_LIST) || !(ATisEmpty(h_24))))
                    _fail(t);
                }
                {
                  ATerm i_24 = ATgetArgument(g_24, 2);
                  if(((ATgetType(i_24) != AT_LIST) || !(ATisEmpty(i_24))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, l_20);
      return(t);
    }
    t = oncetd_1_0(c_4, t);
  }
  n_20 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_20), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, m_20, n_20, (ATerm) ATmakeAppl(sym_Seq_2, s_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(d_20), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_20), not_null(f_20), term_f_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_20)), (ATerm) ATmakeAppl(sym_Var_1, l_20))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24 = t;
      int m_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,s_21 = NULL;
          k_21 = t;
          if(match_cons(t, sym_SRule_1))
            {
              l_21 = ATgetArgument(t, 0);
              t = l_21;
              if(match_cons(t, sym_Rule_3))
                {
                  h_21 = ATgetArgument(t, 0);
                  i_21 = ATgetArgument(t, 1);
                  j_21 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = k_21;
              t = s_8(h_21, i_21, j_21, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm y_17 = NULL,b_18 = NULL,m_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  l_21 = ATgetArgument(t, 0);
                  s_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_21);
              y_17 = t;
              t = s_21;
              t = desugarRule_0_0(t);
              b_18 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, l_21, b_18);
              m_4 = t;
              t = SSLsetAnnotations(m_4, y_17);
            }
          LocalPopChoice(m_24);
        }
      else
        {
          t = l_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
    }
  t = repeat_2_0(e_4, _id, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm r_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
            w_23 = t;
            if(match_cons(t, sym_CallT_3))
              {
                a_24 = ATgetArgument(t, 0);
                b_24 = ATgetArgument(t, 1);
                c_24 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = w_23;
            t = o_8(a_24, b_24, c_24, t);
            LocalPopChoice(w_24);
          }
        else
          {
            t = r_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  {
                    ATerm a_25 = t;
                    int c_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(c_25);
                      }
                    else
                      {
                        t = a_25;
                        {
                          ATerm d_25 = t;
                          int e_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_25 = t;
                              int i_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_25 = NULL,x_25 = NULL,y_25 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_25 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_25;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      x_25 = ATgetArgument(t, 0);
                                      t = x_25;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          x_25 = ATgetArgument(t, 0);
                                          y_25 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, x_25, y_25);
                                    }
                                  LocalPopChoice(i_25);
                                }
                              else
                                {
                                  t = h_25;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(e_25);
                            }
                          else
                            {
                              t = d_25;
                              t = Expl_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(d_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm o_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_21);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm q_21 = NULL,r_21 = NULL,t_21 = NULL,u_21 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  q_21 = ATgetArgument(t, 0);
                  r_21 = ATgetArgument(t, 1);
                  t_21 = ATgetArgument(t, 2);
                  u_21 = ATgetArgument(t, 3);
                  t = t_21;
                  t = map_1_0(k_4, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_21 = ATgetArgument(t, 0);
                      r_21 = ATgetArgument(t, 1);
                      t_21 = ATgetArgument(t, 2);
                      u_21 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_21;
                  t = map_1_0(l_4, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm b_22 = NULL;
  ATerm q_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_22 = ATgetArgument(t, 0);
          {
            ATerm w_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_25);
      t = b_22;
    }
  else
    {
      t = q_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_22;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm s_22 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_22 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = s_22;
    }
  else
    {
      t = z_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_22;
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_30;
  if(match_cons(t, sym_CallT_3))
    {
      q_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
      u_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_30;
  if(match_cons(t, sym_SVar_1))
    {
      r_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_30;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = t_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = u_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = v_30;
  if(match_cons(t, sym_Seq_2))
    {
      w_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_30;
  if(match_cons(t, sym_Match_1))
    {
      x_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_30;
  if(match_cons(t, sym_Seq_2))
    {
      i_31 = ATgetArgument(t, 0);
      k_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_31;
  if(match_cons(t, sym_Where_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_31;
  if(match_cons(t, sym_Build_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_19 = NULL,w_19 = NULL,x_19 = NULL,g_20 = NULL,p_20 = NULL,q_20 = NULL;
        t = term_o_26;
        p_20 = t;
        t = term_p_26;
        q_20 = t;
        t = term_r_26;
        t = n_12(q_20, p_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_26) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            n_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_31, l_31);
        g_20 = t;
        t = (ATerm) ATmakeAppl(sym__3, n_19, x_30, (ATerm) ATmakeAppl(sym__2, j_31, l_31));
        t = c_10(n_19, x_30, g_20, t);
        if(match_cons(t, sym__2))
          {
            w_19 = ATgetArgument(t, 0);
            x_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, w_19), (ATerm) ATmakeAppl(sym_Build_1, x_19)));
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
        {
          ATerm w_20 = NULL,n_21 = NULL,g_23 = NULL,h_23 = NULL;
          t = term_o_26;
          g_23 = t;
          t = term_p_26;
          h_23 = t;
          t = term_r_26;
          t = n_12(h_23, g_23, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm w_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              w_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_30;
          t = free_vars_3_0(g_4, i_4, tboundin_3_0, t);
          {
            static ATerm p_4 (ATerm t)
            {
              static ATerm s_4 (ATerm t)
              {
                ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                y_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, w_20, (ATerm) ATmakeAppl(sym_Var_1, y_22));
                z_22 = t;
                t = term_y_26;
                a_23 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, w_20, (ATerm) ATmakeAppl(sym_Var_1, y_22)), term_y_26);
                t = o_12(b_5, z_22, a_23, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, y_22);
                return(t);
              }
              t = map_1_0(s_4, t);
              t = (ATerm) ATmakeAppl(sym__2, j_31, l_31);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((n_21 != NULL) && (n_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    n_21 = ATgetArgument(t, 0);
                  {
                    ATerm b_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(n_4, p_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_30), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(n_21)), (ATerm) ATmakeAppl(sym_Build_1, l_31)));
        }
      }
  }
  return(t);
}
static ATerm v_33 (ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm n_23 = NULL;
  t = term_c_26;
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, w_32);
  t = n_12(n_23, w_32, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm c_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_27) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = v_32;
  return(t);
}
static ATerm w_33 (ATerm b_33, ATerm d_33, ATerm t)
{
  ATerm q_23 = NULL;
  t = term_c_26;
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_26, d_33);
  t = n_12(q_23, d_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm d_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_27) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = b_33;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,p_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm e_27 = ATgetArgument(t, 0);
      p_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_33;
  if(match_cons(t, sym_Var_1))
    {
      i_33 = ATgetArgument(t, 0);
      {
        ATerm f_27 = t;
        int g_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_24 = NULL;
            t = term_c_26;
            f_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_c_26, j_33);
            t = n_12(f_24, j_33, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm h_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) h_27) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, i_33);
            LocalPopChoice(g_27);
          }
        else
          {
            t = f_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_33(p_33, j_33, t);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  t = w_33(p_33, j_33, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm k_27 = t;
      int l_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_33(p_33, j_33, t);
          LocalPopChoice(l_27);
        }
      else
        {
          t = k_27;
          t = w_33(p_33, j_33, t);
        }
    }
  return(t);
}
static ATerm b_10 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm a_34 = NULL,d_34 = NULL;
  d_34 = t;
  {
    ATerm m_27 = t;
    int n_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_41, s_41);
        t = d_13(r_41, s_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_27 = ATgetFirst((ATermList) t);
            a_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(n_27);
        t = SSL_table_put(r_41, s_41, a_34);
        t = (ATerm) ATmakeAppl(sym__3, r_41, s_41, a_34);
      }
    else
      {
        t = m_27;
        t = SSL_table_remove(r_41, s_41);
        t = (ATerm) ATmakeAppl(sym__2, r_41, s_41);
      }
  }
  t = d_34;
  return(t);
}
ATerm end_scope_1_0 (ATerm e_109 (ATerm), ATerm t)
{
  ATerm g_34 = NULL,j_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  n_34 = t;
  t = e_109(t);
  m_34 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL;
        t = term_r_27;
        p_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_34, term_r_27);
        t = d_13(m_34, p_34, t);
        LocalPopChoice(q_27);
      }
    else
      {
        t = p_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_34 = ATgetFirst((ATermList) t);
      g_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_27;
  o_34 = t;
  t = SSL_table_put(m_34, o_34, g_34);
  t = j_34;
  {
    static ATerm c_5 (ATerm t)
    {
      ATerm q_34 = NULL;
      q_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_34, q_34);
      t = b_10(m_34, q_34, t);
      return(t);
    }
    t = map_1_0(c_5, t);
  }
  t = n_34;
  return(t);
}
ATerm restore_always_2_0 (ATerm k_103 (ATerm), ATerm l_103 (ATerm), ATerm t)
{
  ATerm s_27 = t;
  int t_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_103(t);
      t = l_103(t);
      LocalPopChoice(t_27);
    }
  else
    {
      t = s_27;
      t = l_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm d_109 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL;
  v_34 = t;
  t = d_109(t);
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_34, term_r_27);
  {
    ATerm u_27 = t;
    int v_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_27 = ATgetArgument(t, 0);
            ATerm x_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_r_27;
        g_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_34, term_r_27);
        t = d_13(u_34, g_35, t);
        LocalPopChoice(v_27);
      }
    else
      {
        t = u_27;
        t = (ATerm) ATempty;
      }
  }
  y_34 = t;
  t = term_r_27;
  z_34 = t;
  t = (ATerm) ATinsert(CheckATermList(y_34), (ATerm) ATempty);
  a_35 = t;
  t = SSL_table_put(u_34, z_34, a_35);
  t = v_34;
  return(t);
}
ATerm scope_2_0 (ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  static ATerm d_5 (ATerm t)
  {
    t = end_scope_1_0(f_109, t);
    return(t);
  }
  t = begin_scope_1_0(f_109, t);
  t = restore_always_2_0(g_109, d_5, t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm m_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_35);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_27);
    }
  else
    {
      t = y_27;
      {
        ATerm a_28 = t;
        int b_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_28);
          }
        else
          {
            t = a_28;
            {
              ATerm o_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_35 = ATgetArgument(t, 0);
                  r_35 = ATgetArgument(t, 1);
                  s_35 = ATgetArgument(t, 2);
                  t_35 = ATgetArgument(t, 3);
                  t = s_35;
                  t = map_1_0(j_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_35 = ATgetArgument(t, 0);
                      r_35 = ATgetArgument(t, 1);
                      s_35 = ATgetArgument(t, 2);
                      t_35 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = s_35;
                  t = map_1_0(k_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm e_36 = NULL;
  ATerm c_28 = t;
  int d_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_36 = ATgetArgument(t, 0);
          {
            ATerm e_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_28);
      t = e_36;
    }
  else
    {
      t = c_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_36;
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm q_36 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_36 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      t = q_36;
    }
  else
    {
      t = f_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_36;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm c_10 (ATerm t_24, ATerm s_24, ATerm u_24, ATerm t)
{
  ATerm l_35 = NULL;
  static ATerm f_5 (ATerm t)
  {
    t = s_24;
    t = free_vars_3_0(h_5, i_5, tboundin_3_0, t);
    {
      static ATerm l_5 (ATerm t)
      {
        ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
        u_36 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, t_24, (ATerm) ATmakeAppl(sym_Var_1, u_36));
        v_36 = t;
        t = term_k_28;
        w_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, t_24, (ATerm) ATmakeAppl(sym_Var_1, u_36)), term_k_28);
        t = o_12(q_5, v_36, w_36, t);
        t = u_36;
        return(t);
      }
      t = map_1_0(l_5, t);
    }
    t = u_24;
    t = alltd_1_0(Replace_0_0, t);
    if(((l_35 != NULL) && (l_35 != t)))
      _fail(t);
    else
      l_35 = t;
    return(t);
  }
  t = scope_2_0(e_5, f_5, t);
  t = not_null(l_35);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm p_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_25);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      {
        ATerm o_28 = t;
        int p_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(p_28);
          }
        else
          {
            t = o_28;
            {
              ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  r_25 = ATgetArgument(t, 0);
                  s_25 = ATgetArgument(t, 1);
                  t_25 = ATgetArgument(t, 2);
                  u_25 = ATgetArgument(t, 3);
                  t = t_25;
                  t = map_1_0(u_5, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      r_25 = ATgetArgument(t, 0);
                      s_25 = ATgetArgument(t, 1);
                      t_25 = ATgetArgument(t, 2);
                      u_25 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = t_25;
                  t = map_1_0(v_5, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm h_26 = NULL;
  ATerm q_28 = t;
  int r_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_26 = ATgetArgument(t, 0);
          {
            ATerm s_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_28);
      t = h_26;
    }
  else
    {
      t = q_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_26;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_26 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = q_26;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_26;
    }
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_c_26;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,o_41 = NULL,p_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_40 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_40 = ATgetArgument(t, 0);
      o_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_40;
  if(match_cons(t, sym_CallT_3))
    {
      v_40 = ATgetArgument(t, 0);
      i_41 = ATgetArgument(t, 1);
      j_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_40;
  if(match_cons(t, sym_SVar_1))
    {
      h_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_41;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = i_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = j_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_41;
  if(match_cons(t, sym_Seq_2))
    {
      p_41 = ATgetArgument(t, 0);
      u_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_41;
  if(match_cons(t, sym_Match_1))
    {
      t_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_41;
  if(match_cons(t, sym_Build_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_28 = t;
    int x_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_24 = NULL,z_24 = NULL,f_25 = NULL,g_25 = NULL;
        t = term_z_28;
        f_25 = t;
        t = term_a_29;
        g_25 = t;
        t = term_b_29;
        t = n_12(g_25, f_25, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            v_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, v_24, t_41, v_41);
        t = c_10(v_24, t_41, v_41, t);
        z_24 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_41), (ATerm) ATmakeAppl(sym_Build_1, z_24));
        LocalPopChoice(x_28);
      }
    else
      {
        t = w_28;
        {
          ATerm l_25 = NULL,o_25 = NULL,z_26 = NULL,a_27 = NULL;
          t = term_z_28;
          z_26 = t;
          t = term_a_29;
          a_27 = t;
          t = term_b_29;
          t = n_12(a_27, z_26, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_29) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              l_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_41;
          t = free_vars_3_0(s_5, t_5, tboundin_3_0, t);
          {
            static ATerm x_5 (ATerm t)
            {
              static ATerm y_5 (ATerm t)
              {
                ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
                t_26 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, l_25, (ATerm) ATmakeAppl(sym_Var_1, t_26));
                u_26 = t;
                t = term_f_29;
                v_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, l_25, (ATerm) ATmakeAppl(sym_Var_1, t_26)), term_f_29);
                t = o_12(z_5, u_26, v_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_26);
                return(t);
              }
              t = map_1_0(y_5, t);
              t = v_41;
              t = alltd_1_0(Replace_0_0, t);
              if(((o_25 != NULL) && (o_25 != t)))
                _fail(t);
              else
                o_25 = t;
              return(t);
            }
            t = scope_2_0(w_5, x_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_41), (ATerm) ATmakeAppl(sym_Build_1, not_null(o_25)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm a_6 (ATerm t)
  {
    ATerm s_44 = NULL,u_44 = NULL,v_44 = NULL,x_44 = NULL,y_44 = NULL,c_45 = NULL,e_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,k_45 = NULL;
    k_45 = t;
    if(match_cons(t, sym_Seq_2))
      {
        s_44 = ATgetArgument(t, 0);
        f_45 = ATgetArgument(t, 1);
        t = s_44;
        if(match_cons(t, sym_Choice_2))
          {
            u_44 = ATgetArgument(t, 0);
            x_44 = ATgetArgument(t, 1);
            {
              ATerm g_29 = t;
              int h_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_28 = NULL,l_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_i_29, f_45);
                  j_28 = t;
                  t = term_j_29;
                  l_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_j_29, (ATerm) ATmakeAppl(sym_Seq_2, term_i_29, f_45));
                  t = n_12(l_28, j_28, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm k_29 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, u_44, f_45), (ATerm) ATmakeAppl(sym_Seq_2, x_44, f_45));
                  t = bottomup_1_0(a_6, t);
                  LocalPopChoice(h_29);
                }
              else
                {
                  t = g_29;
                  t = k_45;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                u_44 = ATgetArgument(t, 0);
                x_44 = ATgetArgument(t, 1);
                {
                  ATerm l_29 = t;
                  int o_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_29 = NULL,n_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, f_45);
                      m_29 = t;
                      t = term_q_29;
                      n_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_q_29, (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, f_45));
                      t = n_12(n_29, m_29, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm r_29 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, u_44, f_45), (ATerm) ATmakeAppl(sym_Seq_2, x_44, f_45));
                      t = bottomup_1_0(a_6, t);
                      LocalPopChoice(o_29);
                    }
                  else
                    {
                      t = l_29;
                      t = k_45;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    u_44 = ATgetArgument(t, 0);
                    x_44 = ATgetArgument(t, 1);
                    {
                      ATerm s_29 = t;
                      int t_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm z_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, f_45);
                          t = a_6(t);
                          z_45 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, u_44, z_45);
                          t = a_6(t);
                          LocalPopChoice(t_29);
                        }
                      else
                        {
                          t = s_29;
                          t = k_45;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        u_44 = ATgetArgument(t, 0);
                        x_44 = ATgetArgument(t, 1);
                        {
                          ATerm u_29 = t;
                          int v_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_46 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, f_45);
                              t = a_6(t);
                              l_46 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, u_44, l_46);
                              t = a_6(t);
                              LocalPopChoice(v_29);
                            }
                          else
                            {
                              t = u_29;
                              t = k_45;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            u_44 = ATgetArgument(t, 0);
                            {
                              ATerm w_29 = t;
                              int x_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm u_46 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, f_45, u_44);
                                  t = a_6(t);
                                  u_46 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, u_46);
                                  t = a_6(t);
                                  LocalPopChoice(x_29);
                                }
                              else
                                {
                                  t = w_29;
                                  t = k_45;
                                }
                            }
                          }
                        else
                          {
                            t = k_45;
                          }
                      }
                  }
              }
          }
      }
    else
      {
        if(match_cons(t, sym_LChoice_2))
          {
            s_44 = ATgetArgument(t, 0);
            f_45 = ATgetArgument(t, 1);
            t = s_44;
            if(match_cons(t, sym_LChoice_2))
              {
                u_44 = ATgetArgument(t, 0);
                x_44 = ATgetArgument(t, 1);
                {
                  ATerm y_29 = t;
                  int z_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_47 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_44, f_45);
                      t = a_6(t);
                      e_47 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, u_44, e_47);
                      t = a_6(t);
                      LocalPopChoice(z_29);
                    }
                  else
                    {
                      t = y_29;
                      t = k_45;
                    }
                }
              }
            else
              {
                t = k_45;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                s_44 = ATgetArgument(t, 0);
                f_45 = ATgetArgument(t, 1);
                t = s_44;
                if(match_cons(t, sym_Choice_2))
                  {
                    u_44 = ATgetArgument(t, 0);
                    x_44 = ATgetArgument(t, 1);
                    {
                      ATerm a_30 = t;
                      int b_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm k_47 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, x_44, f_45);
                          t = a_6(t);
                          k_47 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, u_44, k_47);
                          t = a_6(t);
                          LocalPopChoice(b_30);
                        }
                      else
                        {
                          t = a_30;
                          t = k_45;
                        }
                    }
                  }
                else
                  {
                    t = k_45;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    s_44 = ATgetArgument(t, 0);
                    f_45 = ATgetArgument(t, 1);
                    t = f_45;
                    if(match_cons(t, sym_Op_2))
                      {
                        h_45 = ATgetArgument(t, 0);
                        i_45 = ATgetArgument(t, 1);
                        t = s_44;
                        if(match_cons(t, sym_CallT_3))
                          {
                            u_44 = ATgetArgument(t, 0);
                            x_44 = ATgetArgument(t, 1);
                            e_45 = ATgetArgument(t, 2);
                            t = e_45;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = x_44;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    y_44 = ATgetFirst((ATermList) t);
                                    c_45 = (ATerm) ATgetNext((ATermList) t);
                                    t = c_45;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = u_44;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            v_44 = ATgetArgument(t, 0);
                                            t = v_44;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm d_30 = t;
                                                int e_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm w_47 = NULL;
                                                    t = i_45;
                                                    {
                                                      static ATerm b_6 (ATerm t)
                                                      {
                                                        ATerm z_47 = NULL;
                                                        z_47 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, y_44), (ATerm) ATempty), z_47);
                                                        return(t);
                                                      }
                                                      t = map_1_0(b_6, t);
                                                    }
                                                    w_47 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, y_44, (ATerm) ATmakeAppl(sym_Op_2, h_45, w_47));
                                                    t = bottomup_1_0(a_6, t);
                                                    LocalPopChoice(e_30);
                                                  }
                                                else
                                                  {
                                                    t = d_30;
                                                    t = k_45;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_45;
                                              }
                                          }
                                        else
                                          {
                                            t = k_45;
                                          }
                                      }
                                    else
                                      {
                                        t = k_45;
                                      }
                                  }
                                else
                                  {
                                    t = k_45;
                                  }
                              }
                            else
                              {
                                t = k_45;
                              }
                          }
                        else
                          {
                            t = k_45;
                          }
                      }
                    else
                      {
                        t = k_45;
                      }
                  }
                else
                  {
                    t = k_45;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(a_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  static ATerm c_6 (ATerm t)
  {
    t = bottomup_1_0(e_100, t);
    return(t);
  }
  t = SRTS_all(c_6, t);
  t = e_100(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm d_6 (ATerm t)
  {
    ATerm x_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL;
    d_50 = t;
    if(match_cons(t, sym_Seq_2))
      {
        x_49 = ATgetArgument(t, 0);
        a_50 = ATgetArgument(t, 1);
        t = a_50;
        if(match_cons(t, sym_Choice_2))
          {
            b_50 = ATgetArgument(t, 0);
            c_50 = ATgetArgument(t, 1);
            {
              ATerm h_30 = t;
              int i_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_50 = NULL,w_50 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, b_50);
                  t = d_6(t);
                  n_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, c_50);
                  t = d_6(t);
                  w_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_50, w_50);
                  t = d_6(t);
                  LocalPopChoice(i_30);
                }
              else
                {
                  t = h_30;
                  t = d_50;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                b_50 = ATgetArgument(t, 0);
                c_50 = ATgetArgument(t, 1);
                {
                  ATerm j_30 = t;
                  int m_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_51 = NULL,g_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, b_50);
                      t = d_6(t);
                      f_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, c_50);
                      t = d_6(t);
                      g_51 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, f_51, g_51);
                      t = d_6(t);
                      LocalPopChoice(m_30);
                    }
                  else
                    {
                      t = j_30;
                      t = d_50;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    b_50 = ATgetArgument(t, 0);
                    c_50 = ATgetArgument(t, 1);
                    {
                      ATerm n_30 = t;
                      int s_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, x_49, c_50);
                          t = d_6(t);
                          n_51 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, b_50, n_51);
                          t = d_6(t);
                          LocalPopChoice(s_30);
                        }
                      else
                        {
                          t = n_30;
                          t = d_50;
                        }
                    }
                  }
                else
                  {
                    t = d_50;
                  }
              }
          }
      }
    else
      {
        t = d_50;
      }
    return(t);
  }
  t = bottomup_1_0(d_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm t)
{
  ATerm x_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,o_4 = NULL;
  d_52 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_51 = ATgetArgument(t, 0);
      a_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_52);
  x_51 = t;
  t = z_51;
  t = y_83(t);
  b_52 = t;
  t = a_52;
  t = z_83(t);
  c_52 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, b_52, c_52);
  o_4 = t;
  t = SSLsetAnnotations(o_4, x_51);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,h_34 = NULL,y_4 = NULL;
  h_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_34);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, f_34);
  y_4 = t;
  t = SSLsetAnnotations(y_4, e_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 = t;
      int e_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(e_31);
        }
      else
        {
          t = b_31;
          {
            ATerm f_31 = t;
            int h_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_57 = NULL,s_57 = NULL,t_57 = NULL;
                r_57 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    s_57 = ATgetArgument(t, 0);
                    t_57 = ATgetArgument(t, 1);
                    {
                      ATerm c_30 = NULL,k_30 = NULL,l_30 = NULL,q_4 = NULL;
                      t = SSLgetAnnotations(r_57);
                      c_30 = t;
                      t = s_57;
                      t = inline_rules_0_0(t);
                      k_30 = t;
                      t = t_57;
                      t = inline_rules_0_0(t);
                      l_30 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, k_30, l_30);
                      q_4 = t;
                      t = SSLsetAnnotations(q_4, c_30);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        s_57 = ATgetArgument(t, 0);
                        t_57 = ATgetArgument(t, 1);
                        {
                          ATerm g_31 = NULL,p_31 = NULL,q_31 = NULL,r_4 = NULL;
                          t = SSLgetAnnotations(r_57);
                          g_31 = t;
                          t = s_57;
                          t = inline_rules_0_0(t);
                          p_31 = t;
                          t = t_57;
                          t = inline_rules_0_0(t);
                          q_31 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, p_31, q_31);
                          r_4 = t;
                          t = SSLsetAnnotations(r_4, g_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            s_57 = ATgetArgument(t, 0);
                            t_57 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm m_31 = t;
                          int n_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm y_31 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,i_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,w_4 = NULL,v_4 = NULL,u_4 = NULL,t_4 = NULL;
                              t = SSLgetAnnotations(r_57);
                              y_31 = t;
                              t = t_57;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  e_32 = ATgetArgument(t, 0);
                                  f_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(t_57);
                              d_32 = t;
                              t = e_32;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_32);
                              p_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, q_32);
                              t_4 = t;
                              t = SSLsetAnnotations(t_4, p_32);
                              r_32 = t;
                              t = f_32;
                              if(match_cons(t, sym_Build_1))
                                {
                                  n_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(f_32);
                              i_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, n_32);
                              u_4 = t;
                              t = SSLsetAnnotations(u_4, i_32);
                              o_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_32, o_32);
                              v_4 = t;
                              t = SSLsetAnnotations(v_4, d_32);
                              g_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, s_57, g_32);
                              w_4 = t;
                              t = SSLsetAnnotations(w_4, y_31);
                              LocalPopChoice(n_31);
                            }
                          else
                            {
                              t = m_31;
                              {
                                ATerm k_33 = NULL,n_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_5 = NULL,z_4 = NULL,x_4 = NULL;
                                t = SSLgetAnnotations(r_57);
                                k_33 = t;
                                t = t_57;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    r_33 = ATgetArgument(t, 0);
                                    s_33 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(t_57);
                                n_33 = t;
                                t = r_33;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    y_33 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(r_33);
                                x_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, y_33);
                                x_4 = t;
                                t = SSLsetAnnotations(x_4, x_33);
                                z_33 = t;
                                t = s_33;
                                t = Seq_2_0(_id, f_6, t);
                                t_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, z_33, t_33);
                                z_4 = t;
                                t = SSLsetAnnotations(z_4, n_33);
                                u_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, s_57, u_33);
                                a_5 = t;
                                t = SSLsetAnnotations(a_5, k_33);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(h_31);
              }
            else
              {
                t = f_31;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_a_29;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm e_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,p_58 = NULL;
  e_58 = t;
  t = term_z_28;
  j_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, e_58);
  p_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATmakeAppl(sym_Defined_2, term_o_31, e_58));
  t = o_12(g_6, j_58, p_58, t);
  t = term_o_26;
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_r_31, e_58);
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_26, (ATerm) ATmakeAppl(sym_Defined_2, term_r_31, e_58));
  t = o_12(h_6, h_58, i_58, t);
  t = e_58;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_j_29;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,u_58 = NULL,w_58 = NULL,x_58 = NULL;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_i_29, s_58);
  w_58 = t;
  t = term_t_31;
  x_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_29, s_58), term_t_31);
  t = o_12(j_6, w_58, x_58, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, s_58);
  t_58 = t;
  t = term_v_31;
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_p_29, s_58), term_v_31);
  t = o_12(k_6, t_58, u_58, t);
  t = s_58;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
  o_60 = t;
  t = term_a_21;
  p_60 = t;
  t = (ATerm) ATinsert(ATempty, term_w_31);
  q_60 = t;
  t = SSL_printnl(p_60, q_60);
  t = o_60;
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm x_31 = t;
  int z_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(z_31);
    }
  else
    {
      t = x_31;
      {
        ATerm a_32 = t;
        int b_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(b_32);
          }
        else
          {
            t = a_32;
            {
              ATerm s_60 = NULL,w_60 = NULL,x_60 = NULL,z_60 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  s_60 = ATgetArgument(t, 0);
                  x_60 = ATgetArgument(t, 1);
                  z_60 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_60;
              if(match_cons(t, sym_SVar_1))
                {
                  w_60 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_60;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = x_60;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_60;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_f_23;
            }
          }
      }
    }
  return(t);
}
static ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_32 = ATgetArgument(t, 0);
      if(match_cons(c_32, sym_SVar_1))
        {
          ATerm t_32 = ATgetArgument(c_32, 0);
          if((ATgetSymbol((ATermAppl) t_32) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_32 = ATgetArgument(t, 1);
        if(((ATgetType(h_32) != AT_LIST) || !(ATisEmpty(h_32))))
          _fail(t);
      }
      {
        ATerm s_32 = ATgetArgument(t, 2);
        if(((ATgetType(s_32) != AT_LIST) || !(ATisEmpty(s_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  i_61 = t;
  t = term_a_21;
  j_61 = t;
  t = (ATerm) ATinsert(ATempty, term_u_32);
  k_61 = t;
  t = SSL_printnl(j_61, k_61);
  t = i_61;
  return(t);
}
static ATerm j_10 (ATerm d_23, ATerm t)
{
  ATerm u_59 = NULL,y_59 = NULL;
  t = if_verbose2_1_0(m_6, t);
  t = new_0_0(t);
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = d_23;
  t = inline_rules_0_0(t);
  u_59 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, y_59, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_26, u_59), (ATerm) ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_f_23))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(n_6, t);
  {
    ATerm x_32 = t;
    if((PushChoice() == 0))
      {
        ATerm d_61 = NULL,g_61 = NULL,h_61 = NULL;
        t = oncetd_1_0(o_6, t);
        d_61 = t;
        t = term_a_21;
        g_61 = t;
        t = (ATerm) ATinsert(ATempty, term_y_32);
        h_61 = t;
        t = SSL_printnl(g_61, h_61);
        t = d_61;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_32;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(q_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm v_101 (ATerm), ATerm t)
{
  static ATerm p_61 (ATerm t)
  {
    ATerm z_32 = t;
    int a_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_101(t);
        LocalPopChoice(a_33);
      }
    else
      {
        t = z_32;
        t = SRTS_all(p_61, t);
      }
    return(t);
  }
  t = p_61(t);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  ATerm u_62 = NULL,d_63 = NULL,e_63 = NULL;
  u_62 = t;
  t = term_a_21;
  d_63 = t;
  t = (ATerm) ATinsert(ATempty, term_c_33);
  e_63 = t;
  t = SSL_printnl(d_63, e_63);
  t = u_62;
  return(t);
}
static ATerm v_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_e_33;
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,w_64 = NULL;
  u_64 = t;
  t = term_a_21;
  v_64 = t;
  t = (ATerm) ATinsert(ATempty, term_f_33);
  w_64 = t;
  t = SSL_printnl(v_64, w_64);
  t = u_64;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm r_62 = NULL,s_62 = NULL;
  s_62 = t;
  t = new_0_0(t);
  r_62 = t;
  {
    ATerm g_33 = t;
    int h_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_62), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(h_33);
      }
    else
      {
        t = g_33;
        t = if_verbose2_1_0(u_6, t);
        _fail(t);
      }
  }
  {
    ATerm l_33 = t;
    int m_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_63 = NULL,j_63 = NULL,l_63 = NULL,m_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,q_64 = NULL;
        h_63 = t;
        if(match_cons(t, sym_Seq_2))
          {
            j_63 = ATgetArgument(t, 0);
            l_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_63;
        if(match_cons(t, sym_All_1))
          {
            l_63 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_63;
        if(match_cons(t, sym_CallT_3))
          {
            m_63 = ATgetArgument(t, 0);
            b_64 = ATgetArgument(t, 1);
            k_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_63;
        if(match_cons(t, sym_SVar_1))
          {
            a_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = a_64;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = b_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_64 = ATgetFirst((ATermList) t);
            h_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_64;
        if(match_cons(t, sym_CallT_3))
          {
            d_64 = ATgetArgument(t, 0);
            f_64 = ATgetArgument(t, 1);
            g_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = d_64;
        if(match_cons(t, sym_SVar_1))
          {
            e_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_64;
        if(match_cons(t, sym_CallT_3))
          {
            m_64 = ATgetArgument(t, 0);
            o_64 = ATgetArgument(t, 1);
            q_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = m_64;
        if(match_cons(t, sym_SVar_1))
          {
            n_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = e_64;
        if((r_62 != t))
          {
            _fail(t);
          }
        t = n_64;
        if((e_64 != t))
          {
            _fail(t);
          }
        t = h_63;
        LocalPopChoice(m_33);
      }
    else
      {
        t = l_33;
        t = if_verbose1_1_0(v_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(a_7, t);
  t = s_62;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  ATerm e_72 = NULL,k_72 = NULL,u_72 = NULL;
  e_72 = t;
  t = term_a_21;
  k_72 = t;
  t = (ATerm) ATinsert(ATempty, term_o_33);
  u_72 = t;
  t = SSL_printnl(k_72, u_72);
  t = e_72;
  return(t);
}
static ATerm g_7 (ATerm t)
{
  t = debug_1_0(h_7, t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  t = term_q_33;
  return(t);
}
static ATerm k_7 (ATerm t)
{
  ATerm q_78 = NULL,s_78 = NULL,v_78 = NULL;
  q_78 = t;
  t = term_a_21;
  s_78 = t;
  t = (ATerm) ATinsert(ATempty, term_b_34);
  v_78 = t;
  t = SSL_printnl(s_78, v_78);
  t = q_78;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm x_71 = NULL,c_72 = NULL;
  c_72 = t;
  t = new_0_0(t);
  x_71 = t;
  {
    ATerm c_34 = t;
    int i_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_34, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_71), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(i_34);
      }
    else
      {
        t = c_34;
        t = if_verbose2_1_0(b_7, t);
        _fail(t);
      }
  }
  {
    ATerm r_34 = t;
    int s_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_72 = NULL,w_72 = NULL,i_73 = NULL,z_74 = NULL,l_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,y_75 = NULL,a_76 = NULL,c_76 = NULL,d_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,o_76 = NULL,r_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,n_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,u_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,z_77 = NULL,a_78 = NULL,c_78 = NULL,f_78 = NULL;
        l_76 = t;
        if(match_cons(t, sym_CallT_3))
          {
            o_76 = ATgetArgument(t, 0);
            t_76 = ATgetArgument(t, 1);
            f_78 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = o_76;
        if(match_cons(t, sym_SVar_1))
          {
            r_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_76;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = t_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_76 = ATgetFirst((ATermList) t);
            c_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = u_76;
        if(match_cons(t, sym_CallT_3))
          {
            v_76 = ATgetArgument(t, 0);
            b_77 = ATgetArgument(t, 1);
            w_72 = ATgetArgument(t, 2);
            t = v_76;
            if(match_cons(t, sym_SVar_1))
              {
                v_72 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = v_72;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = b_77;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_77 = ATgetFirst((ATermList) t);
                a_78 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_77;
            if(match_cons(t, sym_Seq_2))
              {
                d_77 = ATgetArgument(t, 0);
                n_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_77;
            if(match_cons(t, sym_CallT_3))
              {
                e_77 = ATgetArgument(t, 0);
                g_77 = ATgetArgument(t, 1);
                h_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = e_77;
            if(match_cons(t, sym_SVar_1))
              {
                f_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = h_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_77;
            if(match_cons(t, sym_CallT_3))
              {
                p_77 = ATgetArgument(t, 0);
                r_77 = ATgetArgument(t, 1);
                z_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_77;
            if(match_cons(t, sym_SVar_1))
              {
                q_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_77;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = r_77;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_77 = ATgetFirst((ATermList) t);
                y_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_77;
            if(match_cons(t, sym_CallT_3))
              {
                t_77 = ATgetArgument(t, 0);
                w_77 = ATgetArgument(t, 1);
                x_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = t_77;
            if(match_cons(t, sym_SVar_1))
              {
                u_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_78;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = w_72;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = c_78;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_78;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = f_77;
            if((x_71 != t))
              {
                _fail(t);
              }
            t = u_77;
            if((f_77 != t))
              {
                _fail(t);
              }
            t = l_76;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                v_76 = ATgetArgument(t, 0);
                b_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = b_77;
            if(match_cons(t, sym_CallT_3))
              {
                c_77 = ATgetArgument(t, 0);
                a_78 = ATgetArgument(t, 1);
                k_76 = ATgetArgument(t, 2);
                t = c_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    d_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = d_77;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = a_78;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_73 = ATgetFirst((ATermList) t);
                    j_76 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_73;
                if(match_cons(t, sym_Seq_2))
                  {
                    z_74 = ATgetArgument(t, 0);
                    r_75 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_74;
                if(match_cons(t, sym_CallT_3))
                  {
                    l_75 = ATgetArgument(t, 0);
                    p_75 = ATgetArgument(t, 1);
                    q_75 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = l_75;
                if(match_cons(t, sym_SVar_1))
                  {
                    o_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = p_75;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_75;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_75;
                if(match_cons(t, sym_CallT_3))
                  {
                    s_75 = ATgetArgument(t, 0);
                    u_75 = ATgetArgument(t, 1);
                    i_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = s_75;
                if(match_cons(t, sym_SVar_1))
                  {
                    t_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_75;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = u_75;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    v_75 = ATgetFirst((ATermList) t);
                    h_76 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = v_75;
                if(match_cons(t, sym_CallT_3))
                  {
                    y_75 = ATgetArgument(t, 0);
                    c_76 = ATgetArgument(t, 1);
                    d_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_75;
                if(match_cons(t, sym_SVar_1))
                  {
                    a_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = c_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = d_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = i_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_75;
                if((x_71 != t))
                  {
                    _fail(t);
                  }
                t = a_76;
                if((v_76 != t))
                  {
                    _fail(t);
                  }
                t = l_76;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    c_77 = ATgetArgument(t, 0);
                    a_78 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_77;
                if(match_cons(t, sym_Seq_2))
                  {
                    d_77 = ATgetArgument(t, 0);
                    n_77 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = d_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    e_77 = ATgetArgument(t, 0);
                    g_77 = ATgetArgument(t, 1);
                    h_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = e_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    f_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = h_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    p_77 = ATgetArgument(t, 0);
                    r_77 = ATgetArgument(t, 1);
                    z_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = p_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    q_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = q_77;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = r_77;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_77 = ATgetFirst((ATermList) t);
                    y_77 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    t_77 = ATgetArgument(t, 0);
                    w_77 = ATgetArgument(t, 1);
                    x_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = t_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    u_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = w_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = x_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = y_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = a_78;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = c_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_78;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_77;
                if((x_71 != t))
                  {
                    _fail(t);
                  }
                t = u_77;
                if((v_76 != t))
                  {
                    _fail(t);
                  }
                t = l_76;
              }
          }
        LocalPopChoice(s_34);
      }
    else
      {
        t = r_34;
        t = if_verbose1_1_0(g_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(k_7, t);
  t = c_72;
  return(t);
}
ATerm topdown_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  static ATerm m_7 (ATerm t)
  {
    t = topdown_1_0(d_100, t);
    return(t);
  }
  t = d_100(t);
  t = SRTS_all(m_7, t);
  return(t);
}
static ATerm n_7 (ATerm t)
{
  ATerm t_34 = t;
  int w_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm x_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(w_34);
      {
        ATerm y_78 = NULL,b_79 = NULL;
        y_78 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm b_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        b_79 = t;
        t = SSLgetAnnotations(y_78);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_35 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) c_35) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm e_35 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(e_35) != AT_LIST) || !(ATisEmpty(e_35))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = b_79;
      }
    }
  else
    {
      t = t_34;
      {
        ATerm f_35 = t;
        int h_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm i_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) i_35) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm j_35 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(h_35);
            _fail(t);
          }
        else
          {
            t = f_35;
          }
      }
    }
  return(t);
}
static ATerm l_10 (ATerm o_58, ATerm n_58, ATerm t)
{
  t = o_58;
  t = topdown_1_0(n_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, o_58);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,g_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_80 = ATgetArgument(t, 0);
      e_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_80;
  if(match_cons(t, sym_Match_1))
    {
      c_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_80;
  if(match_cons(t, sym_Var_1))
    {
      d_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_80;
  if(match_cons(t, sym_Seq_2))
    {
      f_80 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
      t = f_80;
      if(match_cons(t, sym_Build_1))
        {
          g_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_80;
      if(match_cons(t, sym_Var_1))
        {
          r_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_79;
      if((d_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_80)), s_79);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_80;
      if(match_cons(t, sym_Var_1))
        {
          g_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_80;
      if((d_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_80));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm r_80 = NULL,s_80 = NULL,v_80 = NULL,x_80 = NULL,y_80 = NULL,a_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      v_80 = ATgetArgument(t, 0);
      y_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_80;
  if(match_cons(t, sym_Build_1))
    {
      x_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_80;
  if(match_cons(t, sym_Seq_2))
    {
      a_81 = ATgetArgument(t, 0);
      s_80 = ATgetArgument(t, 1);
      t = a_81;
      if(match_cons(t, sym_Match_1))
        {
          r_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_80;
      if((x_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_80), s_80);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          a_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_81;
      if((x_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, x_80);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm n_81 = NULL,o_81 = NULL,q_81 = NULL,r_81 = NULL,s_81 = NULL,t_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      q_81 = ATgetArgument(t, 0);
      s_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_81;
  if(match_cons(t, sym_Match_1))
    {
      r_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_81;
  if(match_cons(t, sym_Seq_2))
    {
      t_81 = ATgetArgument(t, 0);
      o_81 = ATgetArgument(t, 1);
      t = t_81;
      if(match_cons(t, sym_Match_1))
        {
          n_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_81;
      if((r_81 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_81), o_81);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          t_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_81;
      if((r_81 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, r_81);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm b_82 = NULL,c_82 = NULL,d_82 = NULL,f_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_82 = ATgetArgument(t, 0);
      h_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_82;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_82;
  if(match_cons(t, sym_Seq_2))
    {
      i_82 = ATgetArgument(t, 0);
      j_82 = ATgetArgument(t, 1);
      t = i_82;
      if(match_cons(t, sym_PrimT_3))
        {
          b_82 = ATgetArgument(t, 0);
          c_82 = ATgetArgument(t, 1);
          d_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, b_82, c_82, d_82), j_82);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          i_82 = ATgetArgument(t, 0);
          j_82 = ATgetArgument(t, 1);
          k_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_82, j_82, k_82);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm w_82 = NULL,y_82 = NULL,a_83 = NULL,g_83 = NULL,h_83 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      a_83 = ATgetArgument(t, 0);
      g_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_83;
  if(match_cons(t, sym_Build_1))
    {
      ATerm n_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_83;
  if(match_cons(t, sym_Seq_2))
    {
      h_83 = ATgetArgument(t, 0);
      y_82 = ATgetArgument(t, 1);
      t = h_83;
      if(match_cons(t, sym_Build_1))
        {
          w_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_82), y_82);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          h_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, h_83);
    }
  return(t);
}
static ATerm t_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_35 = ATgetArgument(t, 0);
      if(((ATgetType(p_35) != AT_LIST) || !(ATisEmpty(p_35))))
        _fail(t);
      {
        ATerm q_35 = ATgetArgument(t, 1);
        if(((ATgetType(q_35) != AT_LIST) || !(ATisEmpty(q_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_7 (ATerm t)
{
  ATerm s_84 = NULL,t_84 = NULL,u_84 = NULL,x_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_35 = ATgetArgument(t, 0);
      if(((ATgetType(u_35) == AT_LIST) && !(ATisEmpty(u_35))))
        {
          s_84 = ATgetFirst((ATermList) u_35);
          t_84 = (ATerm) ATgetNext((ATermList) u_35);
        }
      else
        _fail(t);
      {
        ATerm v_35 = ATgetArgument(t, 1);
        if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
          {
            u_84 = ATgetFirst((ATermList) v_35);
            x_84 = (ATerm) ATgetNext((ATermList) v_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_84, u_84), (ATerm) ATmakeAppl(sym__2, t_84, x_84));
  return(t);
}
static ATerm z_7 (ATerm t)
{
  ATerm y_84 = NULL,z_84 = NULL;
  if(match_cons(t, sym__2))
    {
      y_84 = ATgetArgument(t, 0);
      z_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_84), y_84);
  return(t);
}
static ATerm d_8 (ATerm t)
{
  ATerm a_85 = NULL,b_85 = NULL;
  if(match_cons(t, sym__2))
    {
      a_85 = ATgetArgument(t, 0);
      b_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_85), (ATerm) ATmakeAppl(sym_Match_1, b_85));
  return(t);
}
static ATerm e_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      if(((ATgetType(x_35) != AT_LIST) || !(ATisEmpty(x_35))))
        _fail(t);
      {
        ATerm y_35 = ATgetArgument(t, 1);
        if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm f_8 (ATerm t)
{
  ATerm k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_35 = ATgetArgument(t, 0);
      if(((ATgetType(z_35) == AT_LIST) && !(ATisEmpty(z_35))))
        {
          k_85 = ATgetFirst((ATermList) z_35);
          l_85 = (ATerm) ATgetNext((ATermList) z_35);
        }
      else
        _fail(t);
      {
        ATerm a_36 = ATgetArgument(t, 1);
        if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
          {
            m_85 = ATgetFirst((ATermList) a_36);
            n_85 = (ATerm) ATgetNext((ATermList) a_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_85, m_85), (ATerm) ATmakeAppl(sym__2, l_85, n_85));
  return(t);
}
static ATerm h_8 (ATerm t)
{
  ATerm o_85 = NULL,p_85 = NULL;
  if(match_cons(t, sym__2))
    {
      o_85 = ATgetArgument(t, 0);
      p_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_85), o_85);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  ATerm s_85 = NULL,t_85 = NULL;
  if(match_cons(t, sym__2))
    {
      s_85 = ATgetArgument(t, 0);
      t_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_85), (ATerm) ATmakeAppl(sym_Match_1, t_85));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_83 = NULL,u_83 = NULL,v_83 = NULL,b_84 = NULL,c_84 = NULL,d_84 = NULL,e_84 = NULL,f_84 = NULL,h_84 = NULL,i_84 = NULL,m_84 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      b_84 = ATgetArgument(t, 0);
      f_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_84;
  if(match_cons(t, sym_Build_1))
    {
      c_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_84;
  if(match_cons(t, sym_Op_2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_84;
  if(match_cons(t, sym_Seq_2))
    {
      h_84 = ATgetArgument(t, 0);
      v_83 = ATgetArgument(t, 1);
      {
        ATerm r_84 = NULL;
        t = h_84;
        if(match_cons(t, sym_Match_1))
          {
            i_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = i_84;
        if(match_cons(t, sym_Op_2))
          {
            t_83 = ATgetArgument(t, 0);
            u_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_83;
        if((d_84 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, e_84, u_83);
        t = genzip_4_0(t_7, w_7, z_7, d_8, t);
        r_84 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_84), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_84, e_84)), v_83));
      }
    }
  else
    {
      ATerm j_85 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          h_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_84;
      if(match_cons(t, sym_Op_2))
        {
          i_84 = ATgetArgument(t, 0);
          m_84 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_84;
      if((d_84 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, e_84, m_84);
      t = genzip_4_0(e_8, f_8, h_8, i_8, t);
      j_85 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_85), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, d_84, e_84)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm u_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,d_87 = NULL,e_87 = NULL,f_87 = NULL;
  y_86 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_86 = ATgetArgument(t, 0);
      d_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_86;
  if(match_cons(t, sym_Build_1))
    {
      a_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_87;
  if(match_cons(t, sym_Op_2))
    {
      b_87 = ATgetArgument(t, 0);
      {
        ATerm b_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_87;
  {
    ATerm c_36 = t;
    int d_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            e_87 = ATgetArgument(t, 0);
            {
              ATerm f_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(d_36);
        t = e_87;
        if(match_cons(t, sym_Match_1))
          {
            f_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = f_87;
        if(match_cons(t, sym_Op_2))
          {
            u_86 = ATgetArgument(t, 0);
            {
              ATerm g_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_87, u_86);
        {
          ATerm h_36 = t;
          if((PushChoice() == 0))
            {
              ATerm d_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  d_35 = ATgetArgument(t, 0);
                  if((d_35 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_36;
            }
        }
        t = term_i_36;
      }
    else
      {
        t = c_36;
        if(match_cons(t, sym_Match_1))
          {
            e_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_87;
        if(match_cons(t, sym_Op_2))
          {
            f_87 = ATgetArgument(t, 0);
            {
              ATerm j_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_87, f_87);
        {
          ATerm k_36 = t;
          if((PushChoice() == 0))
            {
              ATerm w_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_35 = ATgetArgument(t, 0);
                  if((w_35 != ATgetArgument(t, 1)))
                    {
                      _fail(ATgetArgument(t, 1));
                    }
                }
              else
                _fail(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_36;
            }
        }
        t = term_i_36;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_101 (ATerm), ATerm t)
{
  static ATerm j_87 (ATerm t)
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_101(t);
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = SRTS_one(j_87, t);
      }
    return(t);
  }
  t = j_87(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm e_88 = NULL,f_88 = NULL,g_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL,p_88 = NULL,q_88 = NULL,r_88 = NULL,s_88 = NULL,t_88 = NULL;
  e_88 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_88 = ATgetArgument(t, 0);
      p_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_88;
  if(match_cons(t, sym_Let_2))
    {
      q_88 = ATgetArgument(t, 0);
      s_88 = ATgetArgument(t, 1);
      {
        ATerm x_88 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, f_88, q_88);
        t = conc_0_0(t);
        x_88 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, x_88, s_88);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          q_88 = ATgetArgument(t, 0);
          s_88 = ATgetArgument(t, 1);
          t_88 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_88 = ATgetFirst((ATermList) t);
          m_88 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_88;
      if(match_cons(t, sym_SDefT_4))
        {
          i_88 = ATgetArgument(t, 0);
          j_88 = ATgetArgument(t, 1);
          k_88 = ATgetArgument(t, 2);
          l_88 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = j_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_88;
      if(match_cons(t, sym_SVar_1))
        {
          r_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_88;
      if((i_88 != t))
        {
          _fail(t);
        }
      t = l_88;
      {
        ATerm n_36 = t;
        if((PushChoice() == 0))
          {
            static ATerm k_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm o_36 = ATgetArgument(t, 0);
                  if(match_cons(o_36, sym_SVar_1))
                    {
                      if((i_88 != ATgetArgument(o_36, 0)))
                        {
                          _fail(ATgetArgument(o_36, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_36 = ATgetArgument(t, 1);
                    if(((ATgetType(p_36) != AT_LIST) || !(ATisEmpty(p_36))))
                      _fail(t);
                  }
                  {
                    ATerm r_36 = ATgetArgument(t, 2);
                    if(((ATgetType(r_36) != AT_LIST) || !(ATisEmpty(r_36))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(k_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_36;
          }
      }
      t = l_88;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL,r_89 = NULL,t_89 = NULL,u_89 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_89 = ATgetArgument(t, 0);
      t = t_89;
      if(match_cons(t, sym_Seq_2))
        {
          r_89 = ATgetArgument(t, 0);
          n_89 = ATgetArgument(t, 1);
          t = r_89;
          if(match_cons(t, sym_Where_1))
            {
              m_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_89;
          if(match_cons(t, sym_Seq_2))
            {
              o_89 = ATgetArgument(t, 0);
              q_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_89;
          if(match_cons(t, sym_Build_1))
            {
              p_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, m_89, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_89), q_89)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_89);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_89 = ATgetArgument(t, 0);
          t = t_89;
          if(match_cons(t, sym_Test_1))
            {
              r_89 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_89);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_89 = ATgetArgument(t, 0);
              t = t_89;
              if(match_cons(t, sym_Not_1))
                {
                  r_89 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_89);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_89 = ATgetArgument(t, 0);
                  u_89 = ATgetArgument(t, 1);
                  t = u_89;
                  if((t_89 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_89 = ATgetArgument(t, 0);
                      u_89 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_89;
                  if((t_89 != t))
                    {
                      _fail(t);
                    }
                }
            }
        }
    }
  return(t);
}
ATerm AssociateR_0_0 (ATerm t)
{
  ATerm i_90 = NULL,j_90 = NULL,k_90 = NULL,l_90 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      i_90 = ATgetArgument(t, 0);
      l_90 = ATgetArgument(t, 1);
      t = i_90;
      if(match_cons(t, sym_LChoice_2))
        {
          j_90 = ATgetArgument(t, 0);
          k_90 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, j_90, (ATerm) ATmakeAppl(sym_LChoice_2, k_90, l_90));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          i_90 = ATgetArgument(t, 0);
          l_90 = ATgetArgument(t, 1);
          t = i_90;
          if(match_cons(t, sym_Seq_2))
            {
              j_90 = ATgetArgument(t, 0);
              k_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, j_90, (ATerm) ATmakeAppl(sym_Seq_2, k_90, l_90));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              i_90 = ATgetArgument(t, 0);
              l_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_90;
          if(match_cons(t, sym_Choice_2))
            {
              j_90 = ATgetArgument(t, 0);
              k_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, j_90, (ATerm) ATmakeAppl(sym_Choice_2, k_90, l_90));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm d_91 = NULL,g_91 = NULL,h_91 = NULL,j_91 = NULL,k_91 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      j_91 = ATgetArgument(t, 0);
      k_91 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, j_91, k_91);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          j_91 = ATgetArgument(t, 0);
          t = j_91;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_91 = ATgetFirst((ATermList) t);
              g_91 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, d_91, (ATerm) ATmakeAppl(sym_LChoices_1, g_91));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_i_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              j_91 = ATgetArgument(t, 0);
              t = j_91;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  d_91 = ATgetFirst((ATermList) t);
                  g_91 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, d_91, (ATerm) ATmakeAppl(sym_Choices_1, g_91));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_i_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  j_91 = ATgetArgument(t, 0);
                  t = j_91;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      d_91 = ATgetFirst((ATermList) t);
                      g_91 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_91, (ATerm) ATmakeAppl(sym_Seqs_1, g_91));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_f_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      j_91 = ATgetArgument(t, 0);
                      k_91 = ATgetArgument(t, 1);
                      h_91 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, k_91, (ATerm) ATmakeAppl(sym_Op_2, term_w_21, (ATerm) ATinsert(ATinsert(ATempty, h_91), j_91)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          j_91 = ATgetArgument(t, 0);
                          k_91 = ATgetArgument(t, 1);
                          h_91 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, h_91)), j_91), (ATerm) ATmakeAppl(sym_Build_1, k_91)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              j_91 = ATgetArgument(t, 0);
                              k_91 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, j_91, (ATerm) ATmakeAppl(sym_Match_1, k_91));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  j_91 = ATgetArgument(t, 0);
                                  k_91 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_91), k_91);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      j_91 = ATgetArgument(t, 0);
                                      k_91 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_91), j_91);
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
static ATerm l_8 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,a_94 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      w_93 = ATgetArgument(t, 0);
      t = w_93;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_i_36;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          w_93 = ATgetArgument(t, 0);
          t = w_93;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_f_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              w_93 = ATgetArgument(t, 0);
              x_93 = ATgetArgument(t, 1);
              t = w_93;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_i_36;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  w_93 = ATgetArgument(t, 0);
                  x_93 = ATgetArgument(t, 1);
                  t = x_93;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_i_36;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      w_93 = ATgetArgument(t, 0);
                      x_93 = ATgetArgument(t, 1);
                      t = x_93;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_i_36;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          w_93 = ATgetArgument(t, 0);
                          t = w_93;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_i_36;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              w_93 = ATgetArgument(t, 0);
                              t = w_93;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_i_36;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  w_93 = ATgetArgument(t, 0);
                                  x_93 = ATgetArgument(t, 1);
                                  t = x_93;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_i_36;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      w_93 = ATgetArgument(t, 0);
                                      x_93 = ATgetArgument(t, 1);
                                      t = x_93;
                                      t = fetch_1_0(l_8, t);
                                      t = term_i_36;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          w_93 = ATgetArgument(t, 0);
                                          x_93 = ATgetArgument(t, 1);
                                          t = x_93;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = w_93;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_93;
                                                }
                                              else
                                                {
                                                  t = w_93;
                                                }
                                            }
                                          else
                                            {
                                              t = w_93;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = x_93;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              w_93 = ATgetArgument(t, 0);
                                              x_93 = ATgetArgument(t, 1);
                                              t = x_93;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_93;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = x_93;
                                                    }
                                                  else
                                                    {
                                                      t = w_93;
                                                    }
                                                }
                                              else
                                                {
                                                  t = w_93;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = x_93;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  w_93 = ATgetArgument(t, 0);
                                                  t = w_93;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_i_36;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      w_93 = ATgetArgument(t, 0);
                                                      x_93 = ATgetArgument(t, 1);
                                                      a_94 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = a_94;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, w_93, x_93);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm p_95 = NULL,t_95 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      t_95 = ATgetArgument(t, 0);
      t = t_95;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_f_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          t_95 = ATgetArgument(t, 0);
          t = t_95;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_i_36;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              t_95 = ATgetArgument(t, 0);
              p_95 = ATgetArgument(t, 1);
              t = p_95;
              if(match_cons(t, sym_Id_0))
                {
                  t = t_95;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = p_95;
                    }
                  else
                    {
                      t = t_95;
                    }
                }
              else
                {
                  t = t_95;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = p_95;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_95 = ATgetArgument(t, 0);
                  p_95 = ATgetArgument(t, 1);
                  t = t_95;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_f_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      t_95 = ATgetArgument(t, 0);
                      p_95 = ATgetArgument(t, 1);
                      t = p_95;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_f_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          t_95 = ATgetArgument(t, 0);
                          p_95 = ATgetArgument(t, 1);
                          t = p_95;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_f_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              t_95 = ATgetArgument(t, 0);
                              t = t_95;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_f_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  t_95 = ATgetArgument(t, 0);
                                  t = t_95;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_f_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      t_95 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_95;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_f_23;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm s_36 = t;
  int t_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(t_36);
    }
  else
    {
      t = s_36;
      {
        ATerm x_36 = t;
        int y_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(y_36);
          }
        else
          {
            t = x_36;
            {
              ATerm z_36 = t;
              int a_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(a_37);
                }
              else
                {
                  t = z_36;
                  {
                    ATerm b_37 = t;
                    int c_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(c_37);
                      }
                    else
                      {
                        t = b_37;
                        {
                          ATerm d_37 = t;
                          int e_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(e_37);
                            }
                          else
                            {
                              t = d_37;
                              {
                                ATerm g_37 = t;
                                int h_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm l_96 = NULL,n_96 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        l_96 = ATgetArgument(t, 0);
                                        n_96 = ATgetArgument(t, 1);
                                        t = l_96;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = n_96;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            l_96 = ATgetArgument(t, 0);
                                            n_96 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = l_96;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = n_96;
                                      }
                                    LocalPopChoice(h_37);
                                  }
                                else
                                  {
                                    t = g_37;
                                    {
                                      ATerm i_37 = t;
                                      int j_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(j_37);
                                        }
                                      else
                                        {
                                          t = i_37;
                                          {
                                            ATerm k_37 = t;
                                            int l_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(l_37);
                                              }
                                            else
                                              {
                                                t = k_37;
                                                {
                                                  ATerm n_37 = t;
                                                  int o_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(o_37);
                                                    }
                                                  else
                                                    {
                                                      t = n_37;
                                                      {
                                                        ATerm t_37 = t;
                                                        int u_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(u_37);
                                                          }
                                                        else
                                                          {
                                                            t = t_37;
                                                            {
                                                              ATerm w_37 = t;
                                                              int b_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(b_38);
                                                                }
                                                              else
                                                                {
                                                                  t = w_37;
                                                                  {
                                                                    ATerm h_38 = t;
                                                                    int j_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(j_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = h_38;
                                                                        {
                                                                          ATerm m_38 = t;
                                                                          int n_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(n_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = m_38;
                                                                              {
                                                                                ATerm o_38 = t;
                                                                                int p_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(p_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_38;
                                                                                    {
                                                                                      ATerm u_96 = NULL,v_96 = NULL,w_96 = NULL,x_96 = NULL;
                                                                                      v_96 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          w_96 = ATgetArgument(t, 0);
                                                                                          x_96 = ATgetArgument(t, 1);
                                                                                          t = w_96;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              u_96 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = v_96;
                                                                                          t = l_10(u_96, x_96, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              w_96 = ATgetArgument(t, 0);
                                                                                              x_96 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = w_96;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = x_96;
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
ATerm repeat_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  static ATerm b_97 (ATerm t)
  {
    ATerm q_38 = t;
    int r_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_107(t);
        t = b_97(t);
        LocalPopChoice(r_38);
      }
    else
      {
        t = q_38;
        t = i_107(t);
      }
    return(t);
  }
  t = b_97(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  t = f_100(t);
  {
    static ATerm p_8 (ATerm t)
    {
      t = downup_1_0(f_100, t);
      return(t);
    }
    t = SRTS_all(p_8, t);
  }
  t = f_100(t);
  return(t);
}
ATerm genzip_4_0 (ATerm m_112 (ATerm), ATerm n_112 (ATerm), ATerm o_112 (ATerm), ATerm p_112 (ATerm), ATerm t)
{
  static ATerm l_97 (ATerm t)
  {
    ATerm s_38 = t;
    int t_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_112(t);
        LocalPopChoice(t_38);
      }
    else
      {
        t = s_38;
        {
          ATerm c_97 = NULL,d_97 = NULL,e_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,l_6 = NULL;
          t = n_112(t);
          j_97 = t;
          if(match_cons(t, sym__2))
            {
              d_97 = ATgetArgument(t, 0);
              e_97 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_97);
          c_97 = t;
          t = d_97;
          t = p_112(t);
          h_97 = t;
          t = e_97;
          t = l_97(t);
          i_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_97, i_97);
          l_6 = t;
          t = SSLsetAnnotations(l_6, c_97);
          t = o_112(t);
        }
      }
    return(t);
  }
  t = l_97(t);
  return(t);
}
static ATerm r_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_38 = ATgetArgument(t, 0);
      if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
        _fail(t);
      {
        ATerm x_38 = ATgetArgument(t, 1);
        if(((ATgetType(x_38) != AT_LIST) || !(ATisEmpty(x_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_8 (ATerm t)
{
  ATerm f_98 = NULL,g_98 = NULL,h_98 = NULL,i_98 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_38 = ATgetArgument(t, 0);
      if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
        {
          f_98 = ATgetFirst((ATermList) y_38);
          g_98 = (ATerm) ATgetNext((ATermList) y_38);
        }
      else
        _fail(t);
      {
        ATerm z_38 = ATgetArgument(t, 1);
        if(((ATgetType(z_38) == AT_LIST) && !(ATisEmpty(z_38))))
          {
            h_98 = ATgetFirst((ATermList) z_38);
            i_98 = (ATerm) ATgetNext((ATermList) z_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_98, h_98), (ATerm) ATmakeAppl(sym__2, g_98, i_98));
  return(t);
}
static ATerm u_8 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL;
  if(match_cons(t, sym__2))
    {
      j_98 = ATgetArgument(t, 0);
      k_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_98), j_98);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_97 = NULL,t_97 = NULL,w_97 = NULL,x_97 = NULL;
  r_97 = t;
  {
    ATerm a_39 = t;
    int b_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_39 = ATgetArgument(t, 0);
            ATerm d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(b_39);
        t = r_97;
      }
    else
      {
        t = a_39;
        {
          ATerm d_98 = NULL;
          if(match_cons(t, sym__3))
            {
              t_97 = ATgetArgument(t, 0);
              w_97 = ATgetArgument(t, 1);
              x_97 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, t_97, w_97);
          t = genzip_4_0(r_8, t_8, u_8, _id, t);
          d_98 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_98, x_97);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_127 (ATerm), ATerm h_127 (ATerm), ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  static ATerm w_8 (ATerm t)
  {
    ATerm f_37 = NULL;
    t = g_127(t);
    f_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_37, not_null(n_98));
    t = lookup_0_0(t);
    t = h_127(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((n_98 != NULL) && (n_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        n_98 = ATgetArgument(t, 0);
      m_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_98;
  t = alltd_1_0(w_8, t);
  return(t);
}
static ATerm x_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_39 = ATgetArgument(t, 0);
      if(((ATgetType(e_39) != AT_LIST) || !(ATisEmpty(e_39))))
        _fail(t);
      {
        ATerm f_39 = ATgetArgument(t, 1);
        if(((ATgetType(f_39) != AT_LIST) || !(ATisEmpty(f_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_8 (ATerm t)
{
  ATerm x_37 = NULL,a_38 = NULL,c_38 = NULL,e_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          x_37 = ATgetFirst((ATermList) g_39);
          a_38 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      {
        ATerm h_39 = ATgetArgument(t, 1);
        if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
          {
            c_38 = ATgetFirst((ATermList) h_39);
            e_38 = (ATerm) ATgetNext((ATermList) h_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_37, c_38), (ATerm) ATmakeAppl(sym__2, a_38, e_38));
  return(t);
}
static ATerm c_9 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym__2))
    {
      f_38 = ATgetArgument(t, 0);
      g_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_38), f_38);
  return(t);
}
static ATerm d_9 (ATerm t)
{
  ATerm i_38 = NULL,k_38 = NULL,l_38 = NULL,u_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      i_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_38;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm k_39 = ATgetArgument(t, 0);
            k_38 = ATgetArgument(t, 1);
            l_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(j_39);
        t = (ATerm) ATmakeAppl(sym_SDef_3, v_38, k_38, l_38);
      }
    else
      {
        t = i_39;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm m_39 = ATgetArgument(t, 0);
            k_38 = ATgetArgument(t, 1);
            l_38 = ATgetArgument(t, 2);
            u_38 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_38, k_38, l_38, u_38);
      }
  }
  return(t);
}
static ATerm e_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
        _fail(t);
      {
        ATerm p_39 = ATgetArgument(t, 1);
        if(((ATgetType(p_39) != AT_LIST) || !(ATisEmpty(p_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm h_9 (ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,d_41 = NULL,f_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_39 = ATgetArgument(t, 0);
      if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
        {
          a_41 = ATgetFirst((ATermList) q_39);
          b_41 = (ATerm) ATgetNext((ATermList) q_39);
        }
      else
        _fail(t);
      {
        ATerm r_39 = ATgetArgument(t, 1);
        if(((ATgetType(r_39) == AT_LIST) && !(ATisEmpty(r_39))))
          {
            d_41 = ATgetFirst((ATermList) r_39);
            f_41 = (ATerm) ATgetNext((ATermList) r_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_41, d_41), (ATerm) ATmakeAppl(sym__2, b_41, f_41));
  return(t);
}
static ATerm o_10 (ATerm t)
{
  ATerm g_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      g_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_41), g_41);
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm w_41 = NULL,a_42 = NULL,b_42 = NULL;
  if(match_cons(t, sym__2))
    {
      w_41 = ATgetArgument(t, 0);
      b_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_41;
  {
    ATerm s_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_42);
      }
    else
      {
        t = s_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_39 = ATgetArgument(t, 0);
            a_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_42, a_42);
      }
  }
  return(t);
}
static ATerm q_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_39 = ATgetArgument(t, 0);
      if(((ATgetType(w_39) != AT_LIST) || !(ATisEmpty(w_39))))
        _fail(t);
      {
        ATerm x_39 = ATgetArgument(t, 1);
        if(((ATgetType(x_39) != AT_LIST) || !(ATisEmpty(x_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_10 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_39 = ATgetArgument(t, 0);
      if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
        {
          y_42 = ATgetFirst((ATermList) y_39);
          z_42 = (ATerm) ATgetNext((ATermList) y_39);
        }
      else
        _fail(t);
      {
        ATerm z_39 = ATgetArgument(t, 1);
        if(((ATgetType(z_39) == AT_LIST) && !(ATisEmpty(z_39))))
          {
            a_43 = ATgetFirst((ATermList) z_39);
            b_43 = (ATerm) ATgetNext((ATermList) z_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_42, a_43), (ATerm) ATmakeAppl(sym__2, z_42, b_43));
  return(t);
}
static ATerm s_10 (ATerm t)
{
  ATerm c_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_43), c_43);
  return(t);
}
static ATerm t_10 (ATerm t)
{
  ATerm h_43 = NULL,j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_43;
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm c_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_43);
      }
    else
      {
        t = a_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_40 = ATgetArgument(t, 0);
            j_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_43, j_43);
      }
  }
  return(t);
}
static ATerm u_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) != AT_LIST) || !(ATisEmpty(f_40))))
        _fail(t);
      {
        ATerm g_40 = ATgetArgument(t, 1);
        if(((ATgetType(g_40) != AT_LIST) || !(ATisEmpty(g_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm w_10 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,d_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_40 = ATgetArgument(t, 0);
      if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
        {
          z_44 = ATgetFirst((ATermList) h_40);
          a_45 = (ATerm) ATgetNext((ATermList) h_40);
        }
      else
        _fail(t);
      {
        ATerm i_40 = ATgetArgument(t, 1);
        if(((ATgetType(i_40) == AT_LIST) && !(ATisEmpty(i_40))))
          {
            b_45 = ATgetFirst((ATermList) i_40);
            d_45 = (ATerm) ATgetNext((ATermList) i_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_44, b_45), (ATerm) ATmakeAppl(sym__2, a_45, d_45));
  return(t);
}
static ATerm x_10 (ATerm t)
{
  ATerm g_45 = NULL,j_45 = NULL;
  if(match_cons(t, sym__2))
    {
      g_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_45), g_45);
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm n_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_45;
  {
    ATerm j_40 = t;
    int k_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm l_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(k_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_45);
      }
    else
      {
        t = j_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm m_40 = ATgetArgument(t, 0);
            s_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_45, s_45);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm w_131 (ATerm), ATerm t)
{
  ATerm e_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL,j_106 = NULL;
  h_106 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_106 = ATgetArgument(t, 0);
      j_106 = ATgetArgument(t, 1);
      {
        ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL,p_11 = NULL;
        t = SSLgetAnnotations(h_106);
        m_37 = t;
        t = i_106;
        t = w_131(t);
        q_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_106, q_37);
        t = genzip_4_0(x_8, y_8, c_9, d_9, t);
        p_37 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, p_37, j_106);
        p_11 = t;
        t = SSLsetAnnotations(p_11, m_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_106 = ATgetArgument(t, 0);
          j_106 = ATgetArgument(t, 1);
          e_106 = ATgetArgument(t, 2);
          {
            ATerm e_40 = NULL,x_40 = NULL,y_40 = NULL,q_11 = NULL;
            t = SSLgetAnnotations(h_106);
            e_40 = t;
            t = j_106;
            t = w_131(t);
            y_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_106, y_40);
            t = genzip_4_0(e_9, h_9, o_10, p_10, t);
            x_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, i_106, x_40, e_106);
            q_11 = t;
            t = SSLsetAnnotations(q_11, e_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_106 = ATgetArgument(t, 0);
              j_106 = ATgetArgument(t, 1);
              e_106 = ATgetArgument(t, 2);
              g_106 = ATgetArgument(t, 3);
              {
                ATerm q_42 = NULL,v_42 = NULL,w_42 = NULL,r_11 = NULL;
                t = SSLgetAnnotations(h_106);
                q_42 = t;
                t = j_106;
                t = w_131(t);
                w_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, j_106, w_42);
                t = genzip_4_0(q_10, r_10, s_10, t_10, t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_106, v_42, e_106, g_106);
                r_11 = t;
                t = SSLsetAnnotations(r_11, q_42);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  i_106 = ATgetArgument(t, 0);
                  j_106 = ATgetArgument(t, 1);
                  e_106 = ATgetArgument(t, 2);
                  g_106 = ATgetArgument(t, 3);
                  {
                    ATerm i_44 = NULL,q_44 = NULL,t_44 = NULL,s_11 = NULL;
                    t = SSLgetAnnotations(h_106);
                    i_44 = t;
                    t = j_106;
                    t = w_131(t);
                    t_44 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_106, t_44);
                    t = genzip_4_0(u_10, w_10, x_10, y_10, t);
                    q_44 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_106, q_44, e_106, g_106);
                    s_11 = t;
                    t = SSLsetAnnotations(s_11, i_44);
                  }
                }
              else
                {
                  ATerm m_46 = NULL,q_46 = NULL,v_11 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_106 = ATgetArgument(t, 0);
                      j_106 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_106);
                  m_46 = t;
                  t = i_106;
                  t = w_131(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_46 = ATgetFirst((ATermList) t);
                      {
                        ATerm n_40 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, q_46, j_106);
                  v_11 = t;
                  t = SSLsetAnnotations(v_11, m_46);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm x_131 (ATerm), ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t)
{
  ATerm l_110 = NULL,m_110 = NULL,n_110 = NULL,o_110 = NULL,p_110 = NULL;
  n_110 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_110 = ATgetArgument(t, 0);
      p_110 = ATgetArgument(t, 1);
      {
        ATerm r_47 = NULL,u_47 = NULL,x_47 = NULL,z_12 = NULL;
        t = SSLgetAnnotations(n_110);
        r_47 = t;
        t = o_110;
        t = x_131(t);
        u_47 = t;
        t = p_110;
        t = x_131(t);
        x_47 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, u_47, x_47);
        z_12 = t;
        t = SSLsetAnnotations(z_12, r_47);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_110 = ATgetArgument(t, 0);
          p_110 = ATgetArgument(t, 1);
          l_110 = ATgetArgument(t, 2);
          {
            ATerm l_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,c_13 = NULL;
            t = SSLgetAnnotations(n_110);
            l_48 = t;
            t = o_110;
            t = z_131(t);
            t_48 = t;
            t = p_110;
            t = z_131(t);
            u_48 = t;
            t = l_110;
            t = x_131(t);
            v_48 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_48, u_48, v_48);
            c_13 = t;
            t = SSLsetAnnotations(c_13, l_48);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_110 = ATgetArgument(t, 0);
              p_110 = ATgetArgument(t, 1);
              l_110 = ATgetArgument(t, 2);
              m_110 = ATgetArgument(t, 3);
              {
                ATerm g_49 = NULL,v_49 = NULL,w_49 = NULL,y_49 = NULL,z_49 = NULL,f_13 = NULL;
                t = SSLgetAnnotations(n_110);
                g_49 = t;
                t = o_110;
                t = z_131(t);
                v_49 = t;
                t = p_110;
                t = z_131(t);
                w_49 = t;
                t = l_110;
                t = z_131(t);
                y_49 = t;
                t = m_110;
                t = x_131(t);
                z_49 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_49, w_49, y_49, z_49);
                f_13 = t;
                t = SSLsetAnnotations(f_13, g_49);
              }
            }
          else
            {
              ATerm r_50 = NULL,u_50 = NULL,v_50 = NULL,h_13 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  o_110 = ATgetArgument(t, 0);
                  p_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(n_110);
              r_50 = t;
              t = o_110;
              t = z_131(t);
              u_50 = t;
              t = p_110;
              t = x_131(t);
              v_50 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, u_50, v_50);
              h_13 = t;
              t = SSLsetAnnotations(h_13, r_50);
            }
        }
    }
  return(t);
}
static ATerm z_10 (ATerm t)
{
  ATerm y_110 = NULL;
  ATerm o_40 = t;
  int p_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_110 = ATgetArgument(t, 0);
          {
            ATerm q_40 = ATgetArgument(t, 1);
          }
          {
            ATerm r_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_40);
      t = y_110;
    }
  else
    {
      t = o_40;
      if(match_cons(t, sym_SDefT_4))
        {
          y_110 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
          {
            ATerm w_40 = ATgetArgument(t, 2);
          }
          {
            ATerm z_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_110;
    }
  return(t);
}
static ATerm w_11 (ATerm g_76, ATerm f_76, ATerm t)
{
  t = g_76;
  t = map_1_0(z_10, t);
  return(t);
}
ATerm SVar_1_0 (ATerm j_83 (ATerm), ATerm t)
{
  ATerm g_111 = NULL,h_111 = NULL,i_111 = NULL,j_111 = NULL,p_13 = NULL;
  j_111 = t;
  if(match_cons(t, sym_SVar_1))
    {
      h_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_111);
  g_111 = t;
  t = h_111;
  t = j_83(t);
  i_111 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, i_111);
  p_13 = t;
  t = SSLsetAnnotations(p_13, g_111);
  return(t);
}
static ATerm g_12 (ATerm i_128 (ATerm), ATerm j_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm n_67, ATerm m_67, ATerm l_67, ATerm t)
{
  static ATerm b_11 (ATerm t)
  {
    ATerm l_111 = NULL;
    l_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_111, l_67);
    t = i_128(t);
    return(t);
  }
  static ATerm i_11 (ATerm t)
  {
    ATerm m_111 = NULL;
    m_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_111, m_67);
    t = i_128(t);
    return(t);
  }
  t = n_67;
  t = j_128(b_11, i_11, _id, t);
  return(t);
}
static ATerm y_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_41 = ATgetArgument(t, 0);
      if(((ATgetType(q_41) != AT_LIST) || !(ATisEmpty(q_41))))
        _fail(t);
      {
        ATerm z_41 = ATgetArgument(t, 1);
        if(((ATgetType(z_41) != AT_LIST) || !(ATisEmpty(z_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_12 (ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
        {
          v_111 = ATgetFirst((ATermList) c_42);
          w_111 = (ATerm) ATgetNext((ATermList) c_42);
        }
      else
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
          {
            x_111 = ATgetFirst((ATermList) d_42);
            y_111 = (ATerm) ATgetNext((ATermList) d_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_111, x_111), (ATerm) ATmakeAppl(sym__2, w_111, y_111));
  return(t);
}
static ATerm m_12 (ATerm t)
{
  ATerm f_112 = NULL,g_112 = NULL;
  if(match_cons(t, sym__2))
    {
      f_112 = ATgetArgument(t, 0);
      g_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_112), f_112);
  return(t);
}
static ATerm h_12 (ATerm c_128 (ATerm), ATerm d_128 (ATerm (ATerm), ATerm), ATerm f_67, ATerm i_67, ATerm t)
{
  ATerm p_111 = NULL,q_111 = NULL,r_111 = NULL,s_111 = NULL,u_111 = NULL;
  t = f_67;
  t = c_128(t);
  p_111 = t;
  t = map_1_0(new_0_0, t);
  q_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_111, q_111);
  t = genzip_4_0(y_11, l_12, m_12, _id, t);
  u_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_111, i_67);
  t = conc_0_0(t);
  r_111 = t;
  t = f_67;
  {
    static ATerm q_12 (ATerm t)
    {
      t = q_111;
      return(t);
    }
    t = d_128(q_12, t);
  }
  s_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, s_111, i_67, r_111);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm r_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL,w_112 = NULL,x_112 = NULL,y_112 = NULL;
  u_112 = t;
  if(match_cons(t, sym__2))
    {
      v_112 = ATgetArgument(t, 0);
      w_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_112 = ATgetFirst((ATermList) t);
      y_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_112;
  if(match_cons(t, sym__2))
    {
      r_112 = ATgetArgument(t, 0);
      t_112 = ATgetArgument(t, 1);
      {
        ATerm e_42 = t;
        int f_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_112;
            if((v_112 != t))
              {
                _fail(t);
              }
            t = t_112;
            LocalPopChoice(f_42);
          }
        else
          {
            t = e_42;
            t = (ATerm) ATmakeAppl(sym__2, v_112, y_112);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_112, y_112);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm s_120 (ATerm), ATerm t)
{
  static ATerm u_113 (ATerm t)
  {
    ATerm g_42 = t;
    int h_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_120(t);
        LocalPopChoice(h_42);
      }
    else
      {
        t = g_42;
        {
          ATerm r_113 = NULL,s_113 = NULL,t_113 = NULL;
          static ATerm w_12 (ATerm t)
          {
            ATerm t_51 = NULL;
            t_51 = t;
            t = (ATerm) ATmakeAppl(sym__2, t_51, not_null(t_113));
            t = u_113(t);
            return(t);
          }
          r_113 = t;
          if(match_cons(t, sym__2))
            {
              s_113 = ATgetArgument(t, 0);
              if(((t_113 != NULL) && (t_113 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                t_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_113;
          t = SRTS_all(w_12, t);
        }
      }
    return(t);
  }
  t = u_113(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_127 (ATerm (ATerm), ATerm), ATerm y_127 (ATerm), ATerm z_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_128 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_113 = NULL;
  static ATerm t_114 (ATerm t)
  {
    static ATerm i_13 (ATerm t)
    {
      ATerm h_114 = NULL,k_114 = NULL,l_114 = NULL;
      h_114 = t;
      if(match_cons(t, sym__2))
        {
          k_114 = ATgetArgument(t, 0);
          l_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm j_13 (ATerm t)
            {
              ATerm s_114 = NULL;
              s_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, s_114, l_114);
              t = lookup_0_0(t);
              return(t);
            }
            t = k_114;
            t = x_127(j_13, t);
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm i_52 = NULL,j_52 = NULL,k_52 = NULL;
              t = h_114;
              t = h_12(y_127, a_128, k_114, l_114, t);
              if(match_cons(t, sym__3))
                {
                  i_52 = ATgetArgument(t, 0);
                  j_52 = ATgetArgument(t, 1);
                  k_52 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_12(t_114, z_127, i_52, j_52, k_52, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(i_13, t);
    return(t);
  }
  y_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_113, (ATerm) ATempty);
  t = t_114(t);
  return(t);
}
static ATerm m_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(((ATgetType(k_42) != AT_LIST) || !(ATisEmpty(k_42))))
        _fail(t);
      {
        ATerm l_42 = ATgetArgument(t, 1);
        if(((ATgetType(l_42) != AT_LIST) || !(ATisEmpty(l_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm o_13 (ATerm t)
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_42 = ATgetArgument(t, 0);
      if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
        {
          x_54 = ATgetFirst((ATermList) m_42);
          y_54 = (ATerm) ATgetNext((ATermList) m_42);
        }
      else
        _fail(t);
      {
        ATerm n_42 = ATgetArgument(t, 1);
        if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
          {
            z_54 = ATgetFirst((ATermList) n_42);
            a_55 = (ATerm) ATgetNext((ATermList) n_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_54, z_54), (ATerm) ATmakeAppl(sym__2, y_54, a_55));
  return(t);
}
static ATerm q_13 (ATerm t)
{
  ATerm b_55 = NULL,e_55 = NULL;
  if(match_cons(t, sym__2))
    {
      b_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_55), b_55);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm i_55 = NULL,k_55 = NULL,l_55 = NULL;
  if(match_cons(t, sym__2))
    {
      i_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_55;
  {
    ATerm o_42 = t;
    int p_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_55);
      }
    else
      {
        t = o_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_42 = ATgetArgument(t, 0);
            k_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_55, k_55);
      }
  }
  return(t);
}
static ATerm y_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_42 = ATgetArgument(t, 0);
      if(((ATgetType(t_42) != AT_LIST) || !(ATisEmpty(t_42))))
        _fail(t);
      {
        ATerm u_42 = ATgetArgument(t, 1);
        if(((ATgetType(u_42) != AT_LIST) || !(ATisEmpty(u_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_14 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL,u_56 = NULL,w_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_42 = ATgetArgument(t, 0);
      if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
        {
          s_56 = ATgetFirst((ATermList) x_42);
          t_56 = (ATerm) ATgetNext((ATermList) x_42);
        }
      else
        _fail(t);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
          {
            u_56 = ATgetFirst((ATermList) g_43);
            w_56 = (ATerm) ATgetNext((ATermList) g_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_56, u_56), (ATerm) ATmakeAppl(sym__2, t_56, w_56));
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__2))
    {
      x_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_56), x_56);
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm a_57 = NULL,c_57 = NULL,d_57 = NULL;
  if(match_cons(t, sym__2))
    {
      a_57 = ATgetArgument(t, 0);
      d_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_57;
  {
    ATerm i_43 = t;
    int l_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm m_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(l_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_57);
      }
    else
      {
        t = i_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm n_43 = ATgetArgument(t, 0);
            c_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_57, c_57);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm s_131 (ATerm), ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL,b_118 = NULL,c_118 = NULL;
  y_117 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_117 = ATgetArgument(t, 0);
      a_118 = ATgetArgument(t, 1);
      {
        ATerm b_53 = NULL,k_53 = NULL,r_13 = NULL;
        t = SSLgetAnnotations(y_117);
        b_53 = t;
        t = z_117;
        t = s_131(t);
        k_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_53, a_118);
        r_13 = t;
        t = SSLsetAnnotations(r_13, b_53);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          z_117 = ATgetArgument(t, 0);
          a_118 = ATgetArgument(t, 1);
          b_118 = ATgetArgument(t, 2);
          c_118 = ATgetArgument(t, 3);
          {
            ATerm i_54 = NULL,s_54 = NULL,t_54 = NULL,s_13 = NULL;
            t = SSLgetAnnotations(y_117);
            i_54 = t;
            t = b_118;
            t = s_131(t);
            t_54 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_118, t_54);
            t = genzip_4_0(m_13, o_13, q_13, w_13, t);
            s_54 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_117, a_118, s_54, c_118);
            s_13 = t;
            t = SSLsetAnnotations(s_13, i_54);
          }
        }
      else
        {
          ATerm k_56 = NULL,p_56 = NULL,q_56 = NULL,t_13 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              z_117 = ATgetArgument(t, 0);
              a_118 = ATgetArgument(t, 1);
              b_118 = ATgetArgument(t, 2);
              c_118 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(y_117);
          k_56 = t;
          t = b_118;
          t = s_131(t);
          q_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_118, q_56);
          t = genzip_4_0(y_13, b_14, d_14, e_14, t);
          p_56 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, z_117, a_118, p_56, c_118);
          t_13 = t;
          t = SSLsetAnnotations(t_13, k_56);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm t_131 (ATerm), ATerm u_131 (ATerm), ATerm v_131 (ATerm), ATerm t)
{
  ATerm l_120 = NULL,m_120 = NULL,n_120 = NULL,o_120 = NULL,p_120 = NULL;
  o_120 = t;
  if(match_cons(t, sym_Scope_2))
    {
      p_120 = ATgetArgument(t, 0);
      l_120 = ATgetArgument(t, 1);
      {
        ATerm c_58 = NULL,g_58 = NULL,k_58 = NULL,i_14 = NULL;
        t = SSLgetAnnotations(o_120);
        c_58 = t;
        t = p_120;
        t = v_131(t);
        g_58 = t;
        t = l_120;
        t = t_131(t);
        k_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, g_58, k_58);
        i_14 = t;
        t = SSLsetAnnotations(i_14, c_58);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          p_120 = ATgetArgument(t, 0);
          l_120 = ATgetArgument(t, 1);
          m_120 = ATgetArgument(t, 2);
          n_120 = ATgetArgument(t, 3);
          {
            ATerm c_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(o_120);
            c_59 = t;
            t = p_120;
            t = v_131(t);
            h_59 = t;
            t = l_120;
            t = v_131(t);
            i_59 = t;
            t = m_120;
            t = v_131(t);
            j_59 = t;
            t = n_120;
            t = t_131(t);
            k_59 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_59, i_59, j_59, k_59);
            j_14 = t;
            t = SSLsetAnnotations(j_14, c_59);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              p_120 = ATgetArgument(t, 0);
              l_120 = ATgetArgument(t, 1);
              m_120 = ATgetArgument(t, 2);
              n_120 = ATgetArgument(t, 3);
              {
                ATerm x_59 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,k_14 = NULL;
                t = SSLgetAnnotations(o_120);
                x_59 = t;
                t = p_120;
                t = v_131(t);
                d_60 = t;
                t = l_120;
                t = v_131(t);
                e_60 = t;
                t = m_120;
                t = v_131(t);
                f_60 = t;
                t = n_120;
                t = t_131(t);
                g_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, d_60, e_60, f_60, g_60);
                k_14 = t;
                t = SSLsetAnnotations(k_14, x_59);
              }
            }
          else
            {
              if(match_cons(t, sym_DynamicRules_1))
                {
                  p_120 = ATgetArgument(t, 0);
                  {
                    ATerm v_60 = NULL,a_61 = NULL,l_14 = NULL;
                    t = SSLgetAnnotations(o_120);
                    v_60 = t;
                    t = p_120;
                    t = t_131(t);
                    a_61 = t;
                    t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_61);
                    l_14 = t;
                    t = SSLsetAnnotations(l_14, v_60);
                  }
                }
              else
                {
                  ATerm m_61 = NULL,o_61 = NULL,o_14 = NULL;
                  if(match_cons(t, sym_OverrideDynamicRules_1))
                    {
                      p_120 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_120);
                  m_61 = t;
                  t = p_120;
                  t = t_131(t);
                  o_61 = t;
                  t = (ATerm) ATmakeAppl(sym_OverrideDynamicRules_1, o_61);
                  o_14 = t;
                  t = SSLsetAnnotations(o_14, m_61);
                }
            }
        }
    }
  return(t);
}
static ATerm f_14 (ATerm t)
{
  ATerm h_121 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_121 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_121);
  return(t);
}
static ATerm g_14 (ATerm t)
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            {
              ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL,m_121 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  j_121 = ATgetArgument(t, 0);
                  k_121 = ATgetArgument(t, 1);
                  l_121 = ATgetArgument(t, 2);
                  m_121 = ATgetArgument(t, 3);
                  t = l_121;
                  t = map_1_0(h_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_121 = ATgetArgument(t, 0);
                      k_121 = ATgetArgument(t, 1);
                      l_121 = ATgetArgument(t, 2);
                      m_121 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = l_121;
                  t = map_1_0(m_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm t_121 = NULL;
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_121 = ATgetArgument(t, 0);
          {
            ATerm u_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_43);
      t = t_121;
    }
  else
    {
      t = s_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_121;
    }
  return(t);
}
static ATerm m_14 (ATerm t)
{
  ATerm c_122 = NULL;
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_122 = ATgetArgument(t, 0);
          {
            ATerm x_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = c_122;
    }
  else
    {
      t = v_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_122;
    }
  return(t);
}
static ATerm n_14 (ATerm t)
{
  ATerm g_122 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_122 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_122);
  return(t);
}
static ATerm p_14 (ATerm t)
{
  ATerm y_43 = t;
  int z_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(z_43);
    }
  else
    {
      t = y_43;
      {
        ATerm a_44 = t;
        int b_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(b_44);
          }
        else
          {
            t = a_44;
            {
              ATerm i_122 = NULL,j_122 = NULL,k_122 = NULL,l_122 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  i_122 = ATgetArgument(t, 0);
                  j_122 = ATgetArgument(t, 1);
                  k_122 = ATgetArgument(t, 2);
                  l_122 = ATgetArgument(t, 3);
                  t = k_122;
                  t = map_1_0(q_14, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_122 = ATgetArgument(t, 0);
                      j_122 = ATgetArgument(t, 1);
                      k_122 = ATgetArgument(t, 2);
                      l_122 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_122;
                  t = map_1_0(r_14, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm s_122 = NULL;
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_122 = ATgetArgument(t, 0);
          {
            ATerm e_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_44);
      t = s_122;
    }
  else
    {
      t = c_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_122 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_122;
    }
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm c_123 = NULL;
  ATerm f_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_123 = ATgetArgument(t, 0);
          {
            ATerm h_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_44);
      t = c_123;
    }
  else
    {
      t = f_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_123 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_123;
    }
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm f_121 = NULL;
  if(match_cons(t, sym_OverrideDynamicRules_1))
    {
      f_121 = ATgetArgument(t, 0);
      t = f_121;
      t = free_vars_3_0(f_14, g_14, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_DynamicRules_1))
        {
          f_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_121;
      t = free_vars_3_0(n_14, p_14, tboundin_3_0, t);
    }
  return(t);
}
static ATerm a_12 (ATerm n_114 (ATerm), ATerm o_49, ATerm n_49, ATerm t)
{
  static ATerm x_123 (ATerm t)
  {
    ATerm s_123 = NULL,t_123 = NULL,u_123 = NULL;
    s_123 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_49;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_123 = ATgetFirst((ATermList) t);
            u_123 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_123;
              {
                static ATerm t_14 (ATerm t)
                {
                  t = n_49;
                  return(t);
                }
                t = b_12(n_114, t_14, t_123, u_123, t);
              }
              t = x_123(t);
              LocalPopChoice(k_44);
            }
          else
            {
              t = j_44;
              {
                ATerm w_61 = NULL,z_61 = NULL,c_15 = NULL;
                t = SSLgetAnnotations(s_123);
                w_61 = t;
                t = u_123;
                t = x_123(t);
                z_61 = t;
                t = (ATerm) ATinsert(CheckATermList(z_61), t_123);
                c_15 = t;
                t = SSLsetAnnotations(c_15, w_61);
              }
            }
        }
      }
    return(t);
  }
  t = o_49;
  t = x_123(t);
  return(t);
}
ATerm foldr_3_0 (ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
  f_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_124;
      t = d_117(t);
    }
  else
    {
      ATerm k_124 = NULL,l_124 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_124 = ATgetFirst((ATermList) t);
          h_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_124;
      t = f_117(t);
      k_124 = t;
      t = h_124;
      t = foldr_3_0(d_117, e_117, f_117, t);
      l_124 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_124, l_124);
      t = e_117(t);
    }
  return(t);
}
static ATerm b_12 (ATerm q_114 (ATerm), ATerm r_114 (ATerm), ATerm s_49, ATerm r_49, ATerm t)
{
  t = r_114(t);
  {
    static ATerm u_14 (ATerm t)
    {
      ATerm o_124 = NULL;
      o_124 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_49, o_124);
      t = q_114(t);
      return(t);
    }
    t = fetch_1_0(u_14, t);
  }
  t = r_49;
  return(t);
}
static ATerm c_12 (ATerm i_114 (ATerm), ATerm m_49, ATerm l_49, ATerm t)
{
  static ATerm e_125 (ATerm t)
  {
    ATerm z_124 = NULL,a_125 = NULL,b_125 = NULL;
    z_124 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_124;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_125 = ATgetFirst((ATermList) t);
            b_125 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm l_44 = t;
          int m_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_124;
              {
                static ATerm v_14 (ATerm t)
                {
                  t = l_49;
                  return(t);
                }
                t = b_12(i_114, v_14, a_125, b_125, t);
              }
              t = e_125(t);
              LocalPopChoice(m_44);
            }
          else
            {
              t = l_44;
              {
                ATerm h_62 = NULL,k_62 = NULL,i_15 = NULL;
                t = SSLgetAnnotations(z_124);
                h_62 = t;
                t = b_125;
                t = e_125(t);
                k_62 = t;
                t = (ATerm) ATinsert(CheckATermList(k_62), a_125);
                i_15 = t;
                t = SSLsetAnnotations(i_15, h_62);
              }
            }
        }
      }
    return(t);
  }
  t = m_49;
  t = e_125(t);
  return(t);
}
ATerm at_end_1_0 (ATerm z_110 (ATerm), ATerm t)
{
  static ATerm a_126 (ATerm t)
  {
    ATerm x_125 = NULL,y_125 = NULL,z_125 = NULL;
    z_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_125 = ATgetFirst((ATermList) t);
        y_125 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm v_62 = NULL,y_62 = NULL,k_15 = NULL;
          t = SSLgetAnnotations(z_125);
          v_62 = t;
          t = y_125;
          t = a_126(t);
          y_62 = t;
          t = (ATerm) ATinsert(CheckATermList(y_62), x_125);
          k_15 = t;
          t = SSLsetAnnotations(k_15, v_62);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_125;
        t = z_110(t);
      }
    return(t);
  }
  t = a_126(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm h_125 = NULL,i_125 = NULL,j_125 = NULL;
  h_125 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_125;
    }
  else
    {
      static ATerm w_14 (ATerm t)
      {
        t = not_null(j_125);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_125 = ATgetFirst((ATermList) t);
          if(((j_125 != NULL) && (j_125 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            j_125 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_125;
      t = at_end_1_0(w_14, t);
    }
  return(t);
}
static ATerm m_126 (ATerm e_126, ATerm t)
{
  ATerm f_126 = NULL;
  t = SSL_explode_term(e_126);
  if(match_cons(t, sym__2))
    {
      ATerm n_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_126;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_126 = NULL,i_126 = NULL,j_126 = NULL;
  j_126 = t;
  if(match_cons(t, sym__2))
    {
      h_126 = ATgetArgument(t, 0);
      i_126 = ATgetArgument(t, 1);
      {
        ATerm o_44 = t;
        int p_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm x_14 (ATerm t)
            {
              t = i_126;
              return(t);
            }
            t = h_126;
            t = at_end_1_0(x_14, t);
            LocalPopChoice(p_44);
          }
        else
          {
            t = o_44;
            t = m_126(j_126, t);
          }
      }
    }
  else
    {
      t = m_126(j_126, t);
    }
  return(t);
}
static ATerm y_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_44 = ATgetArgument(t, 0);
      if(((ATgetType(r_44) != AT_LIST) || !(ATisEmpty(r_44))))
        _fail(t);
      {
        ATerm w_44 = ATgetArgument(t, 1);
        if(((ATgetType(w_44) != AT_LIST) || !(ATisEmpty(w_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm z_14 (ATerm t)
{
  ATerm t_126 = NULL,u_126 = NULL,v_126 = NULL,w_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_45 = ATgetArgument(t, 0);
      if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
        {
          t_126 = ATgetFirst((ATermList) l_45);
          u_126 = (ATerm) ATgetNext((ATermList) l_45);
        }
      else
        _fail(t);
      {
        ATerm m_45 = ATgetArgument(t, 1);
        if(((ATgetType(m_45) == AT_LIST) && !(ATisEmpty(m_45))))
          {
            v_126 = ATgetFirst((ATermList) m_45);
            w_126 = (ATerm) ATgetNext((ATermList) m_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_126, v_126), (ATerm) ATmakeAppl(sym__2, u_126, w_126));
  return(t);
}
static ATerm a_15 (ATerm t)
{
  ATerm x_126 = NULL,y_126 = NULL;
  if(match_cons(t, sym__2))
    {
      x_126 = ATgetArgument(t, 0);
      y_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_126), x_126);
  return(t);
}
static ATerm e_12 (ATerm r_676, ATerm w_676, ATerm g_69, ATerm t)
{
  ATerm o_126 = NULL,p_126 = NULL,q_126 = NULL,r_126 = NULL;
  t = SSL_explode_term(w_676);
  if(match_cons(t, sym__2))
    {
      o_126 = ATgetArgument(t, 0);
      q_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(r_676);
  if(match_cons(t, sym__2))
    {
      if((o_126 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_126, q_126);
  t = genzip_4_0(y_14, z_14, a_15, _id, t);
  r_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_126, g_69);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  static ATerm a_127 (ATerm t)
  {
    ATerm o_45 = t;
    int p_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_107(t);
        LocalPopChoice(p_45);
      }
    else
      {
        t = o_45;
        t = z_107(t);
        t = a_127(t);
      }
    return(t);
  }
  t = a_127(t);
  return(t);
}
ATerm for_3_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  t = b_108(t);
  t = while_not_2_0(c_108, d_108, t);
  return(t);
}
static ATerm b_15 (ATerm t)
{
  ATerm l_127 = NULL;
  l_127 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, l_127);
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL,m_15 = NULL;
  p_127 = t;
  if(match_cons(t, sym__2))
    {
      n_127 = ATgetArgument(t, 0);
      o_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_127);
  m_127 = t;
  t = o_127;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_127, o_127);
  m_15 = t;
  t = SSLsetAnnotations(m_15, m_127);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm t_128 = NULL,u_128 = NULL,v_128 = NULL,w_128 = NULL,x_128 = NULL;
  t_128 = t;
  if(match_cons(t, sym__2))
    {
      u_128 = ATgetArgument(t, 0);
      v_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_128;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_128 = ATgetFirst((ATermList) t);
      x_128 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_45 = t;
        int r_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_129(u_128, v_128, t_128, t);
            LocalPopChoice(r_45);
          }
        else
          {
            t = q_45;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_128), w_128), x_128);
          }
      }
    }
  else
    {
      t = h_129(u_128, v_128, t_128, t);
    }
  return(t);
}
static ATerm h_129 (ATerm q_127, ATerm r_127, ATerm s_127, ATerm t)
{
  ATerm t_127 = NULL,f_128 = NULL,n_15 = NULL,k_128 = NULL,l_128 = NULL,m_128 = NULL,n_128 = NULL;
  t = SSLgetAnnotations(s_127);
  t_127 = t;
  t = r_127;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_128 = ATgetFirst((ATermList) t);
      n_128 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_128;
  if(match_cons(t, sym__2))
    {
      l_128 = ATgetArgument(t, 0);
      m_128 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_128;
        if((l_128 != t))
          {
            _fail(t);
          }
        t = n_128;
        LocalPopChoice(v_45);
      }
    else
      {
        t = u_45;
        t = r_127;
        t = e_12(l_128, m_128, n_128, t);
      }
  }
  f_128 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_127, f_128);
  n_15 = t;
  t = SSLsetAnnotations(n_15, t_127);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  ATerm g_129 = NULL;
  if(match_cons(t, sym__2))
    {
      g_129 = ATgetArgument(t, 0);
      if((g_129 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm w_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(b_15, d_15, e_15, t);
      LocalPopChoice(x_45);
    }
  else
    {
      t = w_45;
      {
        ATerm b_129 = NULL,c_129 = NULL,d_129 = NULL;
        b_129 = t;
        if(match_cons(t, sym__2))
          {
            c_129 = ATgetArgument(t, 0);
            d_129 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_129;
        t = c_12(f_15, c_129, d_129, t);
      }
    }
  return(t);
}
static ATerm h_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm l_15 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  if(match_cons(t, sym__2))
    {
      q_63 = ATgetArgument(t, 0);
      r_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(o_15, q_63, r_63, t);
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm s_63 = NULL;
  if(match_cons(t, sym__2))
    {
      s_63 = ATgetArgument(t, 0);
      if((s_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm z_63 = NULL,i_64 = NULL;
  if(match_cons(t, sym__2))
    {
      z_63 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_12(r_15, z_63, i_64, t);
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm j_64 = NULL;
  if(match_cons(t, sym__2))
    {
      j_64 = ATgetArgument(t, 0);
      if((j_64 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm z_129 (ATerm t)
  {
    ATerm y_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_129(t);
        LocalPopChoice(a_46);
      }
    else
      {
        t = y_45;
        {
          ATerm b_46 = t;
          int c_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_129 = NULL,k_129 = NULL,i_63 = NULL,k_63 = NULL;
              j_129 = t;
              t = o_129(t);
              k_129 = t;
              t = j_129;
              {
                static ATerm g_15 (ATerm t)
                {
                  ATerm m_129 = NULL;
                  t = z_129(t);
                  m_129 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_129, k_129);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_129(g_15, z_129, h_15, t);
              }
              k_63 = t;
              t = SSL_explode_term(k_63);
              if(match_cons(t, sym__2))
                {
                  ATerm d_46 = ATgetArgument(t, 0);
                  i_63 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = i_63;
              t = foldr_3_0(j_15, l_15, _id, t);
              LocalPopChoice(c_46);
            }
          else
            {
              t = b_46;
              {
                ATerm u_63 = NULL,v_63 = NULL;
                v_63 = t;
                t = SSL_explode_term(v_63);
                if(match_cons(t, sym__2))
                  {
                    ATerm e_46 = ATgetArgument(t, 0);
                    u_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = u_63;
                t = foldr_3_0(p_15, q_15, z_129, t);
              }
            }
        }
      }
    return(t);
  }
  t = z_129(t);
  return(t);
}
static ATerm t_15 (ATerm t)
{
  ATerm m_130 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      m_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, m_130);
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm f_46 = t;
  int g_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(g_46);
    }
  else
    {
      t = f_46;
      {
        ATerm h_46 = t;
        int i_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Bind4_0_0(t);
            LocalPopChoice(i_46);
          }
        else
          {
            t = h_46;
            {
              ATerm o_130 = NULL,p_130 = NULL,q_130 = NULL,r_130 = NULL;
              if(match_cons(t, sym_SDefT_4))
                {
                  o_130 = ATgetArgument(t, 0);
                  p_130 = ATgetArgument(t, 1);
                  q_130 = ATgetArgument(t, 2);
                  r_130 = ATgetArgument(t, 3);
                  t = q_130;
                  t = map_1_0(x_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      o_130 = ATgetArgument(t, 0);
                      p_130 = ATgetArgument(t, 1);
                      q_130 = ATgetArgument(t, 2);
                      r_130 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = q_130;
                  t = map_1_0(z_15, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm x_15 (ATerm t)
{
  ATerm a_131 = NULL;
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_131 = ATgetArgument(t, 0);
          {
            ATerm n_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = a_131;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_131;
    }
  return(t);
}
static ATerm z_15 (ATerm t)
{
  ATerm j_131 = NULL;
  ATerm o_46 = t;
  int p_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_131 = ATgetArgument(t, 0);
          {
            ATerm r_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_46);
      t = j_131;
    }
  else
    {
      t = o_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_131;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm f_130 = NULL,j_130 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      j_130 = ATgetArgument(t, 0);
      t = j_130;
      if(match_cons(t, sym_Rule_3))
        {
          f_130 = ATgetArgument(t, 0);
          {
            ATerm s_46 = ATgetArgument(t, 1);
          }
          {
            ATerm t_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = f_130;
      t = free_vars_3_0(t_15, v_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          j_130 = ATgetArgument(t, 0);
          {
            ATerm v_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = j_130;
    }
  return(t);
}
ATerm Var_1_0 (ATerm a_80 (ATerm), ATerm t)
{
  ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,u_15 = NULL;
  q_131 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_131 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_131);
  n_131 = t;
  t = o_131;
  t = a_80(t);
  p_131 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_131);
  u_15 = t;
  t = SSLsetAnnotations(u_15, n_131);
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm w_46 = t;
  int x_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(x_46);
    }
  else
    {
      t = w_46;
      {
        ATerm h_132 = NULL,k_132 = NULL,l_132 = NULL,m_132 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            h_132 = ATgetArgument(t, 0);
            k_132 = ATgetArgument(t, 1);
            l_132 = ATgetArgument(t, 2);
            m_132 = ATgetArgument(t, 3);
            t = l_132;
            t = map_1_0(b_16, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                h_132 = ATgetArgument(t, 0);
                k_132 = ATgetArgument(t, 1);
                l_132 = ATgetArgument(t, 2);
                m_132 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = l_132;
            t = map_1_0(c_16, t);
          }
      }
    }
  return(t);
}
static ATerm b_16 (ATerm t)
{
  ATerm t_132 = NULL;
  ATerm y_46 = t;
  int z_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_132 = ATgetArgument(t, 0);
          {
            ATerm a_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_46);
      t = t_132;
    }
  else
    {
      t = y_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_132;
    }
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm c_133 = NULL;
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_133 = ATgetArgument(t, 0);
          {
            ATerm d_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_47);
      t = c_133;
    }
  else
    {
      t = b_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_133;
    }
  return(t);
}
static ATerm d_16 (ATerm t)
{
  ATerm f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL,j_133 = NULL;
  f_133 = t;
  if(match_cons(t, sym_Let_2))
    {
      g_133 = ATgetArgument(t, 0);
      h_133 = ATgetArgument(t, 1);
      t = f_133;
      t = w_11(g_133, h_133, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_133 = ATgetArgument(t, 0);
          h_133 = ATgetArgument(t, 1);
          i_133 = ATgetArgument(t, 2);
          t = h_133;
          t = map_1_0(e_16, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              g_133 = ATgetArgument(t, 0);
              h_133 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, g_133);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  g_133 = ATgetArgument(t, 0);
                  h_133 = ATgetArgument(t, 1);
                  i_133 = ATgetArgument(t, 2);
                  j_133 = ATgetArgument(t, 3);
                  t = h_133;
                  t = map_1_0(j_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      g_133 = ATgetArgument(t, 0);
                      h_133 = ATgetArgument(t, 1);
                      i_133 = ATgetArgument(t, 2);
                      j_133 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = h_133;
                  t = map_1_0(k_16, t);
                }
            }
        }
    }
  return(t);
}
static ATerm e_16 (ATerm t)
{
  ATerm r_133 = NULL;
  ATerm f_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_133 = ATgetArgument(t, 0);
          {
            ATerm h_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_47);
      t = r_133;
    }
  else
    {
      t = f_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_133;
    }
  return(t);
}
static ATerm j_16 (ATerm t)
{
  ATerm c_134 = NULL;
  ATerm i_47 = t;
  int j_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_134 = ATgetArgument(t, 0);
          {
            ATerm l_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_47);
      t = c_134;
    }
  else
    {
      t = i_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_134;
    }
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm l_134 = NULL;
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_134 = ATgetArgument(t, 0);
          {
            ATerm o_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_47);
      t = l_134;
    }
  else
    {
      t = m_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_134;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, a_16, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, d_16, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm n_12 (ATerm x_41, ATerm y_41, ATerm t)
{
  ATerm o_134 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, x_41, y_41);
  t = d_13(x_41, y_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_134 = ATgetFirst((ATermList) t);
      {
        ATerm p_47 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_134;
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm m_135 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      m_135 = ATgetArgument(t, 0);
      {
        ATerm q_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_135;
  return(t);
}
static ATerm m_16 (ATerm t)
{
  ATerm n_135 = NULL,p_135 = NULL,q_135 = NULL,r_135 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      p_135 = ATgetArgument(t, 0);
      r_135 = ATgetArgument(t, 1);
      n_135 = ATgetArgument(t, 2);
      t = p_135;
      if(match_cons(t, sym_SVar_1))
        {
          q_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_135;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          p_135 = ATgetArgument(t, 0);
          r_135 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_135;
      if(match_cons(t, sym_SVar_1))
        {
          q_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_135;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_135;
    }
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm v_135 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      v_135 = ATgetArgument(t, 0);
      {
        ATerm s_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = v_135;
  return(t);
}
static ATerm u_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_47 = ATgetArgument(t, 0);
      if(((ATgetType(t_47) != AT_LIST) || !(ATisEmpty(t_47))))
        _fail(t);
      {
        ATerm v_47 = ATgetArgument(t, 1);
        if(((ATgetType(v_47) != AT_LIST) || !(ATisEmpty(v_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_16 (ATerm t)
{
  ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL,z_135 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_47 = ATgetArgument(t, 0);
      if(((ATgetType(y_47) == AT_LIST) && !(ATisEmpty(y_47))))
        {
          w_135 = ATgetFirst((ATermList) y_47);
          x_135 = (ATerm) ATgetNext((ATermList) y_47);
        }
      else
        _fail(t);
      {
        ATerm a_48 = ATgetArgument(t, 1);
        if(((ATgetType(a_48) == AT_LIST) && !(ATisEmpty(a_48))))
          {
            y_135 = ATgetFirst((ATermList) a_48);
            z_135 = (ATerm) ATgetNext((ATermList) a_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_135, y_135), (ATerm) ATmakeAppl(sym__2, x_135, z_135));
  return(t);
}
static ATerm w_16 (ATerm t)
{
  ATerm a_136 = NULL,b_136 = NULL;
  if(match_cons(t, sym__2))
    {
      a_136 = ATgetArgument(t, 0);
      b_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_136), a_136);
  return(t);
}
static ATerm x_16 (ATerm t)
{
  ATerm c_136 = NULL,d_136 = NULL;
  if(match_cons(t, sym__2))
    {
      c_136 = ATgetArgument(t, 0);
      d_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_136), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_136)));
  return(t);
}
static ATerm y_16 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL,k_135 = NULL,l_135 = NULL,p_64 = NULL,r_64 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm b_48 = ATgetArgument(t, 0);
      if(match_cons(b_48, sym_SVar_1))
        {
          b_135 = ATgetArgument(b_48, 0);
        }
      else
        _fail(t);
      d_135 = ATgetArgument(t, 1);
      h_135 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_135), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  p_64 = t;
  t = term_c_48;
  r_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_48, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_135), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = n_12(r_64, p_64, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm d_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_48) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      z_134 = ATgetArgument(t, 1);
      a_135 = ATgetArgument(t, 2);
      g_135 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, b_135, z_134, g_135, a_135);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((b_135 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      c_135 = ATgetArgument(t, 1);
      {
        ATerm e_48 = ATgetArgument(t, 2);
      }
      e_135 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = c_135;
  t = map_1_0(l_16, t);
  l_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_135, d_135, e_135);
  t = substitute_2_0(m_16, _id, t);
  f_135 = t;
  t = g_135;
  t = map_1_0(t_16, t);
  i_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_135, i_135);
  t = genzip_4_0(u_16, v_16, w_16, x_16, t);
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, i_135, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_135), f_135));
  t = downup_1_0(y_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm z_16 (ATerm t)
{
  ATerm n_136 = NULL,o_136 = NULL,p_136 = NULL;
  n_136 = t;
  t = term_a_21;
  o_136 = t;
  t = (ATerm) ATinsert(ATempty, term_f_48);
  p_136 = t;
  t = SSL_printnl(o_136, p_136);
  t = n_136;
  return(t);
}
static ATerm d_17 (ATerm t)
{
  t = debug_1_0(e_17, t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  t = term_g_48;
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL;
  x_136 = t;
  t = term_a_21;
  y_136 = t;
  t = (ATerm) ATinsert(ATempty, term_h_48);
  z_136 = t;
  t = SSL_printnl(y_136, z_136);
  t = x_136;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm l_136 = NULL,m_136 = NULL;
  m_136 = t;
  t = new_0_0(t);
  l_136 = t;
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_136), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = if_verbose2_1_0(z_16, t);
        _fail(t);
      }
  }
  {
    ATerm n_48 = t;
    int o_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL,t_136 = NULL,u_136 = NULL,v_136 = NULL,w_136 = NULL;
        q_136 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            r_136 = ATgetArgument(t, 0);
            w_136 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_136;
        if(match_cons(t, sym_CallT_3))
          {
            s_136 = ATgetArgument(t, 0);
            u_136 = ATgetArgument(t, 1);
            v_136 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = s_136;
        if(match_cons(t, sym_SVar_1))
          {
            t_136 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = u_136;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = v_136;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = w_136;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = t_136;
        if((l_136 != t))
          {
            _fail(t);
          }
        t = q_136;
        LocalPopChoice(o_48);
      }
    else
      {
        t = n_48;
        t = if_verbose1_1_0(d_17, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(f_17, t);
  t = m_136;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm o_12 (ATerm h_109 (ATerm), ATerm e_41, ATerm c_41, ATerm t)
{
  ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL,e_137 = NULL,f_137 = NULL;
  d_137 = t;
  t = h_109(t);
  a_137 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_137, e_41, c_41);
  t = e_13(a_137, e_41, c_41, t);
  {
    ATerm p_48 = t;
    int q_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_137 = NULL;
        t = term_r_27;
        g_137 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_137, term_r_27);
        t = d_13(a_137, g_137, t);
        LocalPopChoice(q_48);
      }
    else
      {
        t = p_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_137 = ATgetFirst((ATermList) t);
      c_137 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_r_27;
  e_137 = t;
  t = (ATerm) ATinsert(CheckATermList(c_137), (ATerm) ATinsert(CheckATermList(b_137), e_41));
  f_137 = t;
  t = SSL_table_put(a_137, e_137, f_137);
  t = d_137;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  t = term_c_48;
  return(t);
}
static ATerm p_12 (ATerm f_22, ATerm g_22, ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL;
  h_137 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  i_137 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_r_48, g_22, h_22, i_22);
  j_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_r_48, g_22, h_22, i_22));
  t = o_12(h_17, i_137, j_137, t);
  t = h_137;
  return(t);
}
ATerm map_1_0 (ATerm j_110 (ATerm), ATerm t)
{
  static ATerm y_137 (ATerm t)
  {
    ATerm v_137 = NULL,w_137 = NULL,x_137 = NULL;
    v_137 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_137;
      }
    else
      {
        ATerm z_64 = NULL,c_65 = NULL,d_65 = NULL,w_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_137 = ATgetFirst((ATermList) t);
            x_137 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_137);
        z_64 = t;
        t = w_137;
        t = j_110(t);
        c_65 = t;
        t = x_137;
        t = y_137(t);
        d_65 = t;
        t = (ATerm) ATinsert(CheckATermList(d_65), c_65);
        w_15 = t;
        t = SSLsetAnnotations(w_15, z_64);
      }
    return(t);
  }
  t = y_137(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_97 (ATerm), ATerm v_97 (ATerm), ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,y_15 = NULL;
  f_138 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_138 = ATgetFirst((ATermList) t);
      c_138 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_138);
  a_138 = t;
  t = b_138;
  t = u_97(t);
  d_138 = t;
  t = c_138;
  t = v_97(t);
  e_138 = t;
  t = (ATerm) ATinsert(CheckATermList(e_138), d_138);
  y_15 = t;
  t = SSLsetAnnotations(y_15, a_138);
  return(t);
}
static ATerm s_12 (ATerm j_32, ATerm k_32, ATerm t)
{
  ATerm g_138 = NULL;
  t = SSL_fputc(j_32, k_32);
  g_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_138);
  return(t);
}
static ATerm t_12 (ATerm v_37, ATerm y_37, ATerm t)
{
  ATerm h_138 = NULL;
  t = SSL_write_term_to_stream_text(v_37, y_37);
  h_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_138);
  return(t);
}
static ATerm v_12 (ATerm w_108 (ATerm), ATerm f_312, ATerm d_38, ATerm t)
{
  ATerm i_138 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_312, term_s_48);
  t = a_13(t);
  i_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_138, d_38);
  t = w_108(t);
  t = fclose_0_0(t);
  t = d_38;
  return(t);
}
static ATerm u_12 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm j_138 = NULL;
  t = SSL_write_term_to_stream_baf(r_37, s_37);
  j_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_138);
  return(t);
}
static ATerm k_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm r_65 = NULL,s_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_48 = ATgetArgument(t, 0);
      if(match_cons(w_48, sym_Stream_1))
        {
          r_65 = ATgetArgument(w_48, 0);
        }
      else
        _fail(t);
      s_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_12(r_65, s_65, t);
  return(t);
}
static ATerm o_17 (ATerm t)
{
  ATerm d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_48 = ATgetArgument(t, 0);
      if(match_cons(x_48, sym_Stream_1))
        {
          g_66 = ATgetArgument(x_48, 0);
        }
      else
        _fail(t);
      h_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(g_66, h_66, t);
  d_66 = t;
  t = term_y_48;
  e_66 = t;
  t = d_66;
  if(match_cons(t, sym_Stream_1))
    {
      f_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_48, d_66);
  t = s_12(e_66, f_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL,p_138 = NULL,q_138 = NULL,r_138 = NULL,t_138 = NULL,u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL,x_139 = NULL,y_139 = NULL,g_16 = NULL,f_16 = NULL;
  o_138 = t;
  if(match_cons(t, sym__2))
    {
      v_138 = ATgetArgument(t, 0);
      w_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_138);
  u_138 = t;
  t = v_138;
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm i_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((n_138 != NULL) && (n_138 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                n_138 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(i_17, t);
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
        t = term_b_49;
        n_138 = t;
      }
  }
  x_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_138, w_138);
  f_16 = t;
  t = SSLsetAnnotations(f_16, u_138);
  t = o_138;
  if(match_cons(t, sym__2))
    {
      q_138 = ATgetArgument(t, 0);
      r_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_138);
  p_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_138, (ATerm) ATmakeAppl(sym__2, not_null(n_138), r_138));
  g_16 = t;
  t = SSLsetAnnotations(g_16, p_138);
  t_138 = t;
  if(match_cons(t, sym__2))
    {
      x_139 = ATgetArgument(t, 0);
      y_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_49 = t;
    int d_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,h_16 = NULL;
        t = SSLgetAnnotations(t_138);
        k_65 = t;
        t = x_139;
        t = fetch_1_0(k_17, t);
        n_65 = t;
        t = y_139;
        if(match_cons(t, sym__2))
          {
            p_65 = ATgetArgument(t, 0);
            q_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_12(n_17, p_65, q_65, t);
        o_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_65, o_65);
        h_16 = t;
        t = SSLsetAnnotations(h_16, k_65);
        LocalPopChoice(d_49);
      }
    else
      {
        t = c_49;
        {
          ATerm x_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,i_16 = NULL;
          t = SSLgetAnnotations(t_138);
          x_65 = t;
          t = y_139;
          if(match_cons(t, sym__2))
            {
              b_66 = ATgetArgument(t, 0);
              c_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_12(o_17, b_66, c_66, t);
          a_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_139, a_66);
          i_16 = t;
          t = SSLsetAnnotations(i_16, x_65);
        }
      }
  }
  return(t);
}
ATerm dtime_0_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm b_140 = NULL,c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL;
  f_140 = t;
  t = dtime_0_0(t);
  t = f_140;
  t = a_123(t);
  e_140 = t;
  t = dtime_0_0(t);
  b_140 = t;
  t = e_140;
  if(match_cons(t, sym__2))
    {
      c_140 = ATgetArgument(t, 0);
      d_140 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_140), (ATerm) ATmakeAppl(sym_Runtime_1, b_140)), d_140);
  return(t);
}
static ATerm t_140 (ATerm n_140, ATerm t)
{
  t = SSL_fclose(n_140);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm q_140 = NULL,r_140 = NULL;
  r_140 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_140 = ATgetArgument(t, 0);
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(q_140);
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            t = t_140(r_140, t);
          }
      }
    }
  else
    {
      t = t_140(r_140, t);
    }
  return(t);
}
static ATerm x_12 (ATerm z_37, ATerm t)
{
  t = SSL_read_term_from_stream(z_37);
  return(t);
}
static ATerm y_12 (ATerm l_32, ATerm m_32, ATerm t)
{
  ATerm u_140 = NULL;
  t = SSL_fopen(l_32, m_32);
  u_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_140);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm v_140 = NULL;
  t = SSL_stdin_stream();
  v_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_140);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm w_140 = NULL;
  t = SSL_stdout_stream();
  w_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_140);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm x_140 = NULL;
  t = SSL_stderr_stream();
  x_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_140);
  return(t);
}
static ATerm e_142 (ATerm d_141, ATerm t)
{
  ATerm e_141 = NULL;
  t = SSL_explode_term(d_141);
  if(match_cons(t, sym__2))
    {
      ATerm h_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_49 = ATgetArgument(t, 1);
        if(((ATgetType(i_49) == AT_LIST) && !(ATisEmpty(i_49))))
          {
            e_141 = ATgetFirst((ATermList) i_49);
            {
              ATerm j_49 = (ATerm) ATgetNext((ATermList) i_49);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = e_141;
  if(match_cons(t, sym_stderr_0))
    {
      t = e_141;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = e_141;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = e_141;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_142 (ATerm h_141, ATerm i_141, ATerm j_141, ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,p_141 = NULL,n_16 = NULL;
  t = SSLgetAnnotations(j_141);
  m_141 = t;
  t = h_141;
  if(match_cons(t, sym_Path_1))
    {
      p_141 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_141, i_141);
  n_16 = t;
  t = SSLsetAnnotations(n_16, m_141);
  if(match_cons(t, sym__2))
    {
      k_141 = ATgetArgument(t, 0);
      l_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(k_141, l_141, t);
  return(t);
}
static ATerm g_142 (ATerm r_141, ATerm s_141, ATerm t_141, ATerm t)
{
  ATerm u_141 = NULL,v_141 = NULL,w_141 = NULL,z_141 = NULL,o_16 = NULL;
  t = SSLgetAnnotations(t_141);
  w_141 = t;
  t = SSL_is_string(r_141);
  z_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_141, s_141);
  o_16 = t;
  t = SSLsetAnnotations(o_16, w_141);
  if(match_cons(t, sym__2))
    {
      u_141 = ATgetArgument(t, 0);
      v_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_12(u_141, v_141, t);
  return(t);
}
static ATerm a_13 (ATerm t)
{
  ATerm b_142 = NULL,c_142 = NULL,d_142 = NULL;
  b_142 = t;
  if(match_cons(t, sym__2))
    {
      c_142 = ATgetArgument(t, 0);
      d_142 = ATgetArgument(t, 1);
      {
        ATerm k_49 = t;
        int p_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_142(b_142, t);
            LocalPopChoice(p_49);
          }
        else
          {
            t = k_49;
            {
              ATerm q_49 = t;
              int t_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_142(c_142, d_142, b_142, t);
                  LocalPopChoice(t_49);
                }
              else
                {
                  t = q_49;
                  t = g_142(c_142, d_142, b_142, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_142(b_142, t);
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  t = term_u_49;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_142 = NULL,i_142 = NULL,j_142 = NULL;
  ATerm e_50 = t;
  int f_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_142 = NULL;
      k_142 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_142, term_g_50);
      t = a_13(t);
      LocalPopChoice(f_50);
    }
  else
    {
      t = e_50;
      t = debug_1_0(p_17, t);
      _fail(t);
    }
  i_142 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_142 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_12(j_142, t);
  h_142 = t;
  t = i_142;
  t = fclose_0_0(t);
  t = h_142;
  return(t);
}
ATerm fetch_1_0 (ATerm t_110 (ATerm), ATerm t)
{
  static ATerm i_143 (ATerm t)
  {
    ATerm f_143 = NULL,g_143 = NULL,h_143 = NULL;
    f_143 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_143 = ATgetFirst((ATermList) t);
        h_143 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_50 = t;
      int i_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_66 = NULL,w_66 = NULL,b_17 = NULL;
          t = SSLgetAnnotations(f_143);
          t_66 = t;
          t = g_143;
          t = t_110(t);
          w_66 = t;
          t = (ATerm) ATinsert(CheckATermList(h_143), w_66);
          b_17 = t;
          t = SSLsetAnnotations(b_17, t_66);
          LocalPopChoice(i_50);
        }
      else
        {
          t = h_50;
          {
            ATerm e_67 = NULL,j_67 = NULL,c_17 = NULL;
            t = SSLgetAnnotations(f_143);
            e_67 = t;
            t = h_143;
            t = i_143(t);
            j_67 = t;
            t = (ATerm) ATinsert(CheckATermList(j_67), g_143);
            c_17 = t;
            t = SSLsetAnnotations(c_17, e_67);
          }
        }
    }
    return(t);
  }
  t = i_143(t);
  return(t);
}
static ATerm r_12 (ATerm c_31, ATerm d_31, ATerm t)
{
  t = SSL_strcat(c_31, d_31);
  return(t);
}
ATerm debug_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm l_143 = NULL,m_143 = NULL,n_143 = NULL,o_143 = NULL;
  l_143 = t;
  t = u_108(t);
  m_143 = t;
  t = term_a_21;
  n_143 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_143), m_143);
  o_143 = t;
  t = SSL_printnl(n_143, o_143);
  t = l_143;
  return(t);
}
static ATerm q_17 (ATerm t)
{
  ATerm j_50 = t;
  int k_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_50);
    }
  else
    {
      t = j_50;
    }
  return(t);
}
static ATerm u_17 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_50 = t;
  int o_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_143 = NULL;
      v_143 = t;
      t = SSL_is_string(v_143);
      LocalPopChoice(o_50);
    }
  else
    {
      t = m_50;
      {
        ATerm p_50 = t;
        int q_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_17, t);
            LocalPopChoice(q_50);
          }
        else
          {
            t = p_50;
            {
              ATerm b_144 = NULL,c_144 = NULL,d_144 = NULL;
              b_144 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_144 = ATgetArgument(t, 0);
                  t = c_144;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_144 = ATgetArgument(t, 0);
                      t = c_144;
                      {
                        ATerm s_50 = t;
                        int t_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(t_50);
                          }
                        else
                          {
                            t = s_50;
                            t = debug_1_0(u_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_144 = NULL,i_144 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_144 = ATgetArgument(t, 0);
                          d_144 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_144;
                      t = eval_config_0_0(t);
                      h_144 = t;
                      t = d_144;
                      t = eval_config_0_0(t);
                      i_144 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_144, i_144);
                      t = r_12(h_144, i_144, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_144 = NULL,n_144 = NULL;
  m_144 = t;
  t = term_x_50;
  n_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_50, m_144);
  t = d_13(n_144, m_144, t);
  {
    ATerm y_50 = t;
    int z_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_144 = NULL,p_144 = NULL;
        t = eval_config_0_0(t);
        o_144 = t;
        t = term_x_50;
        p_144 = t;
        t = SSL_table_put(p_144, m_144, o_144);
        t = o_144;
        LocalPopChoice(z_50);
      }
    else
      {
        t = y_50;
      }
  }
  return(t);
}
static ATerm v_17 (ATerm t)
{
  ATerm t_144 = NULL;
  t_144 = t;
  if(match_string(t, "-k"))
    {
      t = t_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_144;
    }
  return(t);
}
static ATerm w_17 (ATerm t)
{
  ATerm u_144 = NULL,v_144 = NULL,w_144 = NULL;
  u_144 = t;
  t = SSL_string_to_int(u_144);
  v_144 = t;
  t = term_a_51;
  w_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_51, v_144);
  t = g_13(w_144, v_144, t);
  t = u_144;
  return(t);
}
static ATerm x_17 (ATerm t)
{
  t = term_b_51;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_17, w_17, x_17, t);
  return(t);
}
static ATerm z_17 (ATerm t)
{
  ATerm y_144 = NULL;
  y_144 = t;
  if(match_string(t, "-S"))
    {
      t = y_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_144;
    }
  return(t);
}
static ATerm a_18 (ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL;
  t = term_g_21;
  z_144 = t;
  t = term_c_51;
  a_145 = t;
  t = term_d_51;
  t = g_13(z_144, a_145, t);
  t = term_e_51;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  t = term_h_51;
  return(t);
}
static ATerm d_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_18 (ATerm t)
{
  ATerm b_145 = NULL,c_145 = NULL,d_145 = NULL;
  b_145 = t;
  t = SSL_string_to_int(b_145);
  c_145 = t;
  t = term_g_21;
  d_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_21, c_145);
  t = g_13(d_145, c_145, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_145);
  return(t);
}
static ATerm g_18 (ATerm t)
{
  t = term_i_51;
  return(t);
}
static ATerm m_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm e_145 = NULL,f_145 = NULL;
  t = term_j_51;
  e_145 = t;
  t = term_z_20;
  f_145 = t;
  t = term_k_51;
  t = g_13(e_145, f_145, t);
  t = term_l_51;
  return(t);
}
static ATerm o_18 (ATerm t)
{
  t = term_m_51;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_51 = t;
  int p_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_17, a_18, c_18, t);
      LocalPopChoice(p_51);
    }
  else
    {
      t = o_51;
      {
        ATerm q_51 = t;
        int r_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_18, e_18, g_18, t);
            LocalPopChoice(r_51);
          }
        else
          {
            t = q_51;
            t = Option_3_0(m_18, n_18, o_18, t);
          }
      }
    }
  return(t);
}
static ATerm g_13 (ATerm f_63, ATerm g_63, ATerm t)
{
  ATerm g_145 = NULL;
  t = term_x_50;
  g_145 = t;
  t = SSL_table_put(g_145, f_63, g_63);
  t = (ATerm) ATmakeAppl(sym__3, term_x_50, f_63, g_63);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm j_145 = NULL,k_145 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_145 = NULL,m_145 = NULL,n_145 = NULL;
      t = term_z_20;
      t = i_0(t);
      l_145 = t;
      t = term_s_51;
      m_145 = t;
      t = term_u_51;
      n_145 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_51, term_u_51, l_145);
      t = e_13(m_145, n_145, l_145, t);
      _fail(t);
    }
  else
    {
      ATerm q_145 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_145 = ATgetFirst((ATermList) t);
          k_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_145;
      t = d_0(t);
      t = term_z_20;
      t = g_0(t);
      q_145 = t;
      t = (ATerm) ATinsert(CheckATermList(k_145), q_145);
    }
  return(t);
}
static ATerm p_18 (ATerm t)
{
  ATerm s_145 = NULL;
  s_145 = t;
  if(match_string(t, "-o"))
    {
      t = s_145;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_145;
    }
  return(t);
}
static ATerm q_18 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL;
  t_145 = t;
  t = term_v_51;
  u_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_51, t_145);
  t = g_13(u_145, t_145, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_145);
  return(t);
}
static ATerm r_18 (ATerm t)
{
  t = term_w_51;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_18, q_18, r_18, t);
  return(t);
}
static ATerm e_13 (ATerm m_41, ATerm n_41, ATerm l_41, ATerm t)
{
  ATerm w_145 = NULL,x_145 = NULL,y_145 = NULL;
  w_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
  {
    ATerm y_51 = t;
    int e_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_52 = ATgetArgument(t, 0);
            ATerm g_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_41, n_41);
        t = d_13(m_41, n_41, t);
        LocalPopChoice(e_52);
      }
    else
      {
        t = y_51;
        t = (ATerm) ATempty;
      }
  }
  x_145 = t;
  t = (ATerm) ATinsert(CheckATermList(x_145), l_41);
  y_145 = t;
  t = SSL_table_put(m_41, n_41, y_145);
  t = w_145;
  return(t);
}
ATerm ArgOption_3_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t_0 (ATerm), ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,h_146 = NULL,i_146 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_146 = NULL,k_146 = NULL,l_146 = NULL;
      t = term_z_20;
      t = t_0(t);
      j_146 = t;
      t = term_s_51;
      k_146 = t;
      t = term_u_51;
      l_146 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_51, term_u_51, j_146);
      t = e_13(k_146, l_146, j_146, t);
      _fail(t);
    }
  else
    {
      ATerm p_146 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_146 = ATgetFirst((ATermList) t);
          g_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_146;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_146 = ATgetFirst((ATermList) t);
          i_146 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_146;
      t = p_0(t);
      t = h_146;
      t = r_0(t);
      p_146 = t;
      t = (ATerm) ATinsert(CheckATermList(i_146), p_146);
    }
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm r_146 = NULL;
  r_146 = t;
  if(match_string(t, "-i"))
    {
      t = r_146;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = r_146;
    }
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm s_146 = NULL,t_146 = NULL;
  s_146 = t;
  t = term_h_52;
  t_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_52, s_146);
  t = g_13(t_146, s_146, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, s_146);
  return(t);
}
static ATerm u_18 (ATerm t)
{
  t = term_l_52;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_18, t_18, u_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL,x_146 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_20;
  t = whoami_0_0(t);
  u_146 = t;
  t = term_a_21;
  w_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_52), u_146);
  x_146 = t;
  t = SSL_printnl(w_146, x_146);
  t = term_d_21;
  v_146 = t;
  t = SSL_exit(v_146);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_52;
  t = get_config_0_0(t);
  return(t);
}
static ATerm b_13 (ATerm l_39, ATerm n_39, ATerm t)
{
  ATerm o_52 = t;
  int p_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_39, n_39);
      LocalPopChoice(p_52);
    }
  else
    {
      t = o_52;
      t = SSL_addr(l_39, n_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_117 (ATerm), ATerm c_117 (ATerm), ATerm t)
{
  ATerm z_146 = NULL,a_147 = NULL,b_147 = NULL;
  z_146 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_146;
      t = b_117(t);
    }
  else
    {
      ATerm e_147 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_147 = ATgetFirst((ATermList) t);
          b_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_147;
      t = foldr_2_0(b_117, c_117, t);
      e_147 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_147, e_147);
      t = c_117(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_18 (ATerm t)
{
  t = term_c_51;
  return(t);
}
static ATerm w_18 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_13(d_68, e_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm h_147 = NULL,z_67 = NULL,a_68 = NULL;
  t = times_0_0(t);
  a_68 = t;
  t = SSL_explode_term(a_68);
  if(match_cons(t, sym__2))
    {
      ATerm q_52 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_67;
  t = foldr_2_0(v_18, w_18, t);
  h_147 = t;
  t = SSL_TicksToSeconds(h_147);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL;
  s_147 = t;
  if(match_cons(t, sym__2))
    {
      t_147 = ATgetArgument(t, 0);
      u_147 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_52 = t;
    int s_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_147;
        if((t_147 != t))
          {
            _fail(t);
          }
        t = s_147;
        LocalPopChoice(s_52);
      }
    else
      {
        t = r_52;
        t = (ATerm) ATmakeAppl(sym__2, t_147, u_147);
        {
          ATerm t_52 = t;
          int u_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_147, u_147);
              LocalPopChoice(u_52);
            }
          else
            {
              t = t_52;
              t = SSL_gtr(t_147, u_147);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, t_147, u_147);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_132 (ATerm), ATerm t)
{
  ATerm y_147 = NULL;
  y_147 = t;
  {
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_148 = NULL;
        t = term_g_21;
        t = get_config_0_0(t);
        a_148 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_148, term_d_21);
        t = geq_0_0(t);
        t = y_147;
        t = i_132(t);
        LocalPopChoice(w_52);
      }
    else
      {
        t = v_52;
        t = y_147;
      }
  }
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,f_148 = NULL,g_148 = NULL;
  t = run_time_0_0(t);
  c_148 = t;
  t = term_z_20;
  t = whoami_0_0(t);
  d_148 = t;
  t = term_a_21;
  f_148 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_52), c_148), term_x_52), d_148);
  g_148 = t;
  t = SSL_printnl(f_148, g_148);
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_52), c_148), term_x_52), d_148));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_148 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_51;
  h_148 = t;
  t = SSL_exit(h_148);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  ATerm p_148 = NULL,q_148 = NULL;
  q_148 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = q_148;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          p_148 = ATgetArgument(t, 0);
          {
            ATerm q_68 = NULL,g_17 = NULL;
            t = SSLgetAnnotations(q_148);
            q_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, p_148);
            g_17 = t;
            t = SSLsetAnnotations(g_17, q_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = q_148;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_123 (ATerm), ATerm t)
{
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_53;
      t = get_config_0_0(t);
      LocalPopChoice(a_53);
    }
  else
    {
      t = z_52;
      t = fetch_1_0(y_18, t);
    }
  t = y_123(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_148 = ATgetFirst((ATermList) t);
      u_148 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_148 = NULL,z_148 = NULL;
        static ATerm z_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_148)), not_null(z_148));
          return(t);
        }
        t = u_148;
        t = n_0(t);
        if(((y_148 != NULL) && (y_148 != t)))
          _fail(t);
        else
          y_148 = t;
        t = t_148;
        t = k_0(t);
        if(((z_148 != NULL) && (z_148 != t)))
          _fail(t);
        else
          z_148 = t;
        t = u_148;
        t = reverse_acc_2_0(k_0, z_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_20;
      t = n_0(t);
    }
  return(t);
}
static ATerm d_13 (ATerm d_43, ATerm e_43, ATerm t)
{
  t = SSL_table_get(d_43, e_43);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  ATerm d_149 = NULL,e_149 = NULL,f_149 = NULL,j_17 = NULL;
  f_149 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_149 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_149);
  d_149 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_149);
  j_17 = t;
  t = SSLsetAnnotations(j_17, d_149);
  return(t);
}
static ATerm b_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm g_19 (ATerm t)
{
  ATerm h_149 = NULL;
  h_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_149), term_d_53);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_149 = NULL,c_149 = NULL;
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_52;
      t = get_config_0_0(t);
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      t = fetch_1_0(a_19, t);
    }
  t = term_g_53;
  t = echo_0_0(t);
  t = term_s_51;
  b_149 = t;
  t = term_u_51;
  c_149 = t;
  t = term_h_53;
  t = d_13(b_149, c_149, t);
  t = reverse_acc_2_0(_id, b_19, t);
  t = map_1_0(g_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_149 = NULL,k_149 = NULL,l_149 = NULL;
  j_149 = t;
  {
    ATerm i_53 = t;
    int j_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_149;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_53 = ATgetFirst((ATermList) t);
                ATerm m_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_149;
          }
        LocalPopChoice(j_53);
      }
    else
      {
        t = i_53;
        t = (ATerm) ATinsert(ATempty, j_149);
      }
  }
  k_149 = t;
  t = term_b_49;
  l_149 = t;
  t = SSL_printnl(l_149, k_149);
  t = j_149;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_52;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm h_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_19 (ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL;
  t = term_n_53;
  p_149 = t;
  t = term_z_20;
  q_149 = t;
  t = term_o_53;
  t = g_13(p_149, q_149, t);
  return(t);
}
static ATerm j_19 (ATerm t)
{
  t = term_p_53;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_19 (ATerm t)
{
  ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL;
  t = term_n_53;
  t_149 = t;
  t = term_z_20;
  u_149 = t;
  t = term_o_53;
  t = g_13(t_149, u_149, t);
  t = term_q_53;
  r_149 = t;
  t = term_z_20;
  s_149 = t;
  t = term_r_53;
  t = g_13(r_149, s_149, t);
  t = term_s_53;
  return(t);
}
static ATerm m_19 (ATerm t)
{
  t = term_t_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_53 = t;
  int v_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_19, i_19, j_19, t);
      LocalPopChoice(v_53);
    }
  else
    {
      t = u_53;
      t = Option_3_0(k_19, l_19, m_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_127 (ATerm), ATerm t)
{
  ATerm z_149 = NULL,a_150 = NULL,b_150 = NULL,c_150 = NULL,e_150 = NULL,f_150 = NULL,l_17 = NULL;
  z_149 = t;
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_53;
        t = d_127(t);
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
      }
  }
  t = z_149;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_150 = ATgetFirst((ATermList) t);
      c_150 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_149);
  a_150 = t;
  t = term_n_52;
  f_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_52, b_150);
  t = g_13(f_150, b_150, t);
  t = c_150;
  {
    static ATerm p_150 (ATerm t)
    {
      ATerm z_53 = t;
      int a_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_54 = t;
          int c_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_150 = NULL;
              i_150 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_150;
              LocalPopChoice(c_54);
            }
          else
            {
              t = b_54;
              t = d_127(t);
              t = Cons_2_0(_id, p_150, t);
            }
          LocalPopChoice(a_54);
        }
      else
        {
          t = z_53;
          {
            ATerm l_150 = NULL,m_150 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                l_150 = ATgetFirst((ATermList) t);
                m_150 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(m_150), (ATerm) ATmakeAppl(sym_Undefined_1, l_150));
          }
        }
      return(t);
    }
    t = p_150(t);
  }
  e_150 = t;
  t = (ATerm) ATinsert(CheckATermList(e_150), (ATerm) ATmakeAppl(sym_Program_1, b_150));
  l_17 = t;
  t = SSLsetAnnotations(l_17, a_150);
  return(t);
}
static ATerm t_19 (ATerm t)
{
  ATerm b_151 = NULL;
  b_151 = t;
  if(match_string(t, "--help"))
    {
      t = b_151;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_151;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_151;
        }
    }
  return(t);
}
static ATerm u_19 (ATerm t)
{
  ATerm c_151 = NULL,d_151 = NULL;
  t = term_c_53;
  c_151 = t;
  t = term_z_20;
  d_151 = t;
  t = term_d_54;
  t = g_13(c_151, d_151, t);
  t = term_e_54;
  return(t);
}
static ATerm v_19 (ATerm t)
{
  t = term_f_54;
  return(t);
}
static ATerm y_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_127 (ATerm), ATerm t)
{
  ATerm u_150 = NULL,v_150 = NULL,w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL,a_151 = NULL;
  w_150 = t;
  t = term_s_51;
  y_150 = t;
  t = term_u_51;
  z_150 = t;
  t = (ATerm) ATempty;
  a_151 = t;
  t = SSL_table_put(y_150, z_150, a_151);
  t = w_150;
  {
    static ATerm s_19 (ATerm t)
    {
      ATerm g_54 = t;
      int h_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_127(t);
          LocalPopChoice(h_54);
        }
      else
        {
          t = g_54;
          {
            ATerm j_54 = t;
            int k_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(t_19, u_19, v_19, t);
                LocalPopChoice(k_54);
              }
            else
              {
                t = j_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(s_19, t);
  }
  {
    ATerm l_54 = t;
    int m_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_151 = NULL;
        k_151 = t;
        {
          ATerm n_54 = t;
          int o_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_68 = NULL;
              t = k_151;
              {
                ATerm p_54 = t;
                int q_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_c_53;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_54);
                  }
                else
                  {
                    t = p_54;
                    t = fetch_1_0(y_19, t);
                  }
              }
              t = k_151;
              t = default_system_usage_0_0(t);
              t = term_c_51;
              x_68 = t;
              t = SSL_exit(x_68);
              LocalPopChoice(o_54);
            }
          else
            {
              t = n_54;
              {
                ATerm b_69 = NULL;
                t = term_n_53;
                t = get_config_0_0(t);
                t = k_151;
                t = default_system_about_0_0(t);
                t = term_c_51;
                b_69 = t;
                t = SSL_exit(b_69);
              }
            }
        }
        LocalPopChoice(m_54);
      }
    else
      {
        t = l_54;
        {
          ATerm r_54 = t;
          int u_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_151 = NULL,m_151 = NULL,n_151 = NULL;
              static ATerm z_19 (ATerm t)
              {
                ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL,f_18 = NULL;
                q_151 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_151 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_151);
                o_151 = t;
                t = p_151;
                if(((u_150 != NULL) && (u_150 != t)))
                  _fail(t);
                else
                  u_150 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_151);
                f_18 = t;
                t = SSLsetAnnotations(f_18, o_151);
                return(t);
              }
              t = fetch_1_0(z_19, t);
              t = term_a_21;
              m_151 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_150)), term_v_54);
              n_151 = t;
              t = SSL_printnl(m_151, n_151);
              t = (ATerm) ATmakeAppl(sym__2, term_a_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_150)), term_v_54));
              t = default_system_usage_0_0(t);
              t = term_d_21;
              l_151 = t;
              t = SSL_exit(l_151);
              LocalPopChoice(u_54);
            }
          else
            {
              t = r_54;
            }
        }
      }
  }
  v_150 = t;
  t = term_s_51;
  x_150 = t;
  t = SSL_table_destroy(x_150);
  t = v_150;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_124 (ATerm), ATerm b_124 (ATerm), ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL,x_151 = NULL,y_151 = NULL;
  t = parse_options_1_0(a_124, t);
  v_151 = t;
  t = term_w_54;
  y_151 = t;
  t = SSL_table_create(y_151);
  t = term_w_54;
  w_151 = t;
  t = term_c_55;
  x_151 = t;
  t = SSL_table_put(w_151, x_151, v_151);
  t = v_151;
  t = c_124(t);
  {
    ATerm d_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_124, t);
        LocalPopChoice(f_55);
      }
    else
      {
        t = d_55;
        {
          ATerm g_55 = t;
          int h_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_124(t);
              t = report_success_0_0(t);
              LocalPopChoice(h_55);
            }
          else
            {
              t = g_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = if_verbose2_1_0(o_20, t);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm z_151 = NULL,a_152 = NULL;
  t = term_j_55;
  z_151 = t;
  t = term_z_20;
  a_152 = t;
  t = term_m_55;
  t = g_13(z_151, a_152, t);
  t = term_n_55;
  return(t);
}
static ATerm k_20 (ATerm t)
{
  t = term_o_55;
  return(t);
}
static ATerm o_20 (ATerm t)
{
  ATerm b_152 = NULL,c_152 = NULL,d_152 = NULL,e_152 = NULL;
  b_152 = t;
  t = term_n_52;
  t = get_config_0_0(t);
  c_152 = t;
  t = term_a_21;
  d_152 = t;
  t = (ATerm) ATinsert(ATempty, c_152);
  e_152 = t;
  t = SSL_printnl(d_152, e_152);
  t = b_152;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_123 (ATerm), ATerm k_123 (ATerm), ATerm l_123 (ATerm), ATerm t)
{
  static ATerm a_20 (ATerm t)
  {
    ATerm p_55 = t;
    int q_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_123(t);
        LocalPopChoice(q_55);
      }
    else
      {
        t = p_55;
        {
          ATerm r_55 = t;
          int s_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_55);
            }
          else
            {
              t = r_55;
              {
                ATerm t_55 = t;
                int u_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_55);
                  }
                else
                  {
                    t = t_55;
                    {
                      ATerm v_55 = t;
                      int w_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(h_20, j_20, k_20, t);
                          LocalPopChoice(w_55);
                        }
                      else
                        {
                          t = v_55;
                          {
                            ATerm x_55 = t;
                            int y_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_55);
                              }
                            else
                              {
                                t = x_55;
                                t = keep_option_0_0(t);
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
  static ATerm c_20 (ATerm t)
  {
    ATerm f_152 = NULL,g_152 = NULL,h_152 = NULL;
    g_152 = t;
    {
      ATerm z_55 = t;
      int a_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm r_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_152 != NULL) && (f_152 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_152 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(r_20, t);
          LocalPopChoice(a_56);
        }
      else
        {
          t = z_55;
          t = term_b_56;
          f_152 = t;
        }
    }
    t = not_null(f_152);
    t = ReadFromFile_0_0(t);
    h_152 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_152, h_152);
    t = apply_strategy_1_0(j_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(a_20, l_123, b_20, c_20, t);
  return(t);
}
static ATerm s_20 (ATerm t)
{
  ATerm k_152 = NULL,l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL,l_18 = NULL;
  o_152 = t;
  if(match_cons(t, sym__2))
    {
      l_152 = ATgetArgument(t, 0);
      m_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_152);
  k_152 = t;
  t = m_152;
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_153 = NULL,e_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,k_18 = NULL,j_18 = NULL,h_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            k_153 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_152);
        e_69 = t;
        t = k_153;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_69 = ATgetFirst((ATermList) t);
            j_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_153);
        h_69 = t;
        t = i_69;
        if(match_cons(t, sym_Signature_1))
          {
            n_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_69);
        m_69 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, n_69);
        h_18 = t;
        t = SSLsetAnnotations(h_18, m_69);
        o_69 = t;
        t = j_69;
        t = Cons_2_0(t_20, u_20, t);
        k_69 = t;
        t = (ATerm) ATinsert(CheckATermList(k_69), o_69);
        j_18 = t;
        t = SSLsetAnnotations(j_18, h_69);
        l_69 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, l_69);
        k_18 = t;
        t = SSLsetAnnotations(k_18, e_69);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(x_20, t);
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        t = if_verbose2_1_0(y_20, t);
      }
  }
  n_152 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_152, n_152);
  l_18 = t;
  t = SSLsetAnnotations(l_18, k_152);
  return(t);
}
static ATerm t_20 (ATerm t)
{
  ATerm p_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,i_18 = NULL;
  v_69 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_69);
  p_69 = t;
  t = t_69;
  t = map_1_0(v_20, t);
  u_69 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_69);
  i_18 = t;
  t = SSLsetAnnotations(i_18, p_69);
  return(t);
}
static ATerm u_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm v_20 (ATerm t)
{
  ATerm w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_69 = ATgetArgument(t, 0);
      x_69 = ATgetArgument(t, 1);
      y_69 = ATgetArgument(t, 2);
      z_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_12(w_69, x_69, y_69, z_69, t);
  return(t);
}
static ATerm x_20 (ATerm t)
{
  ATerm a_70 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm e_56 = ATgetArgument(t, 0);
      if(match_cons(e_56, sym_SVar_1))
        {
          ATerm h_56 = ATgetArgument(e_56, 0);
          if((ATgetSymbol((ATermAppl) h_56) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_56 = ATgetArgument(t, 1);
        if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
          {
            a_70 = ATgetFirst((ATermList) f_56);
            {
              ATerm i_56 = (ATerm) ATgetNext((ATermList) f_56);
              if(((ATgetType(i_56) != AT_LIST) || !(ATisEmpty(i_56))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm g_56 = ATgetArgument(t, 2);
        if(((ATgetType(g_56) != AT_LIST) || !(ATisEmpty(g_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = j_10(a_70, t);
  return(t);
}
static ATerm y_20 (ATerm t)
{
  ATerm l_153 = NULL,m_153 = NULL,n_153 = NULL;
  l_153 = t;
  t = term_a_21;
  m_153 = t;
  t = (ATerm) ATinsert(ATempty, term_j_56);
  n_153 = t;
  t = SSL_printnl(m_153, n_153);
  t = l_153;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_20, _fail, default_usage_0_0, t);
  return(t);
}
