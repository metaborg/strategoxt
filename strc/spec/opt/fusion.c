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
ATerm term_h_55;
ATerm term_r_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_t_53;
ATerm term_f_53;
ATerm term_e_53;
ATerm term_c_53;
ATerm term_x_52;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_k_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_d_52;
ATerm term_x_51;
ATerm term_w_51;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_z_50;
ATerm term_y_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_x_49;
ATerm term_w_49;
ATerm term_v_49;
ATerm term_u_49;
ATerm term_t_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_l_49;
ATerm term_g_49;
ATerm term_d_49;
ATerm term_u_48;
ATerm term_o_48;
ATerm term_k_48;
ATerm term_v_47;
ATerm term_s_47;
ATerm term_m_47;
ATerm term_l_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_b_47;
ATerm term_z_46;
ATerm term_y_46;
ATerm term_u_46;
ATerm term_r_35;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_w_31;
ATerm term_u_31;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_u_29;
ATerm term_t_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_k_27;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_t_25;
ATerm term_q_25;
ATerm term_z_22;
ATerm term_k_22;
ATerm term_y_21;
ATerm term_o_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_s_20;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_q_25));
  term_q_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_25);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_CallT_3, term_u_25, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_25, term_z_25);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_25, term_a_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_25, term_b_26);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym__2, term_f_26, term_e_26);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_m_26);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_27);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_25, term_z_25);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_v_25, term_n_28);
  ATprotect(&(term_p_28));
  term_p_28 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_q_28));
  term_q_28 = (ATerm) ATmakeAppl(sym__2, term_p_28, term_o_28);
  ATprotect(&(term_t_28));
  term_t_28 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_29);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_30);
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_30);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_33);
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_47);
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_48));
  term_u_48 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_p_49);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_49);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_49));
  term_u_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(sym__2, term_u_49, term_s_20);
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_49));
  term_x_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_50));
  term_z_50 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_51));
  term_w_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(sym__2, term_i_50, term_j_50);
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(sym__2, term_d_52, term_s_20);
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__2, term_k_52, term_s_20);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(sym__2, term_r_51, term_s_20);
  ATprotect(&(term_e_53));
  term_e_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(sym__2, term_a_54, term_s_20);
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_54));
  term_r_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_55));
  term_h_55 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm c_132 (ATerm), ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm r_130 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm d_8 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t);
static ATerm z_11 (ATerm a_11, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm s_2 (ATerm t);
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
static ATerm u_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
static ATerm h_8 (ATerm k_69, ATerm l_69, ATerm m_69, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t);
static ATerm z_33 (ATerm z_32, ATerm a_33, ATerm t);
static ATerm d_34 (ATerm g_33, ATerm h_33, ATerm t);
ATerm Replace_0_0 (ATerm t);
static ATerm o_9 (ATerm n_41, ATerm o_41, ATerm t);
ATerm end_scope_1_0 (ATerm x_108 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm w_108 (ATerm), ATerm t);
ATerm scope_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm p_9 (ATerm t_24, ATerm s_24, ATerm u_24, ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t);
ATerm fuse_with_bottomup_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm x_99 (ATerm), ATerm t);
ATerm propagate_mark_0_0 (ATerm t);
ATerm Seq_2_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t);
static ATerm c_6 (ATerm t);
ATerm inline_rules_0_0 (ATerm t);
static ATerm d_6 (ATerm t);
static ATerm f_6 (ATerm t);
ATerm bottomup_to_var_0_0 (ATerm t);
static ATerm j_6 (ATerm t);
static ATerm k_6 (ATerm t);
ATerm seq_over_choice_0_0 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm w_9 (ATerm d_23, ATerm t);
ATerm alltd_1_0 (ATerm o_101 (ATerm), ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm w_6 (ATerm t);
static ATerm x_6 (ATerm t);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t);
static ATerm y_6 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm e_7 (ATerm t);
static ATerm h_7 (ATerm t);
ATerm check_that_innermost_is_innermost_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm w_99 (ATerm), ATerm t);
static ATerm m_7 (ATerm t);
static ATerm y_9 (ATerm i_58, ATerm h_58, ATerm t);
ATerm MatchBuildIdemVar_0_0 (ATerm t);
ATerm BuildMatchIdem_0_0 (ATerm t);
ATerm MatchIdem_0_0 (ATerm t);
ATerm BuildPrim_0_0 (ATerm t);
ATerm BuildBuild_0_0 (ATerm t);
static ATerm o_7 (ATerm t);
static ATerm p_7 (ATerm t);
static ATerm r_7 (ATerm t);
static ATerm s_7 (ATerm t);
static ATerm u_7 (ATerm t);
static ATerm v_7 (ATerm t);
static ATerm x_7 (ATerm t);
static ATerm y_7 (ATerm t);
ATerm BuildMatchFusion_0_0 (ATerm t);
ATerm MisMatch_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm a_101 (ATerm), ATerm t);
ATerm LetHoist_0_0 (ATerm t);
ATerm Idempotency_0_0 (ATerm t);
ATerm AssociateR_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm b_8 (ATerm t);
ATerm ElimFail_0_0 (ATerm t);
ATerm ElimId_0_0 (ATerm t);
ATerm Simplify_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t);
ATerm downup_1_0 (ATerm y_99 (ATerm), ATerm t);
ATerm genzip_4_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t);
static ATerm i_8 (ATerm t);
static ATerm j_8 (ATerm t);
static ATerm l_8 (ATerm t);
ATerm subs_args_0_0 (ATerm t);
ATerm substitute_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm t);
static ATerm n_8 (ATerm t);
static ATerm q_8 (ATerm t);
static ATerm r_8 (ATerm t);
static ATerm s_8 (ATerm t);
static ATerm u_8 (ATerm t);
static ATerm v_8 (ATerm t);
static ATerm e_10 (ATerm t);
static ATerm f_10 (ATerm t);
static ATerm i_10 (ATerm t);
static ATerm j_10 (ATerm t);
static ATerm l_10 (ATerm t);
static ATerm m_10 (ATerm t);
static ATerm n_10 (ATerm t);
static ATerm p_10 (ATerm t);
static ATerm q_10 (ATerm t);
static ATerm x_10 (ATerm t);
ATerm spaste_1_0 (ATerm p_131 (ATerm), ATerm t);
ATerm sboundin_3_0 (ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t);
static ATerm y_10 (ATerm t);
static ATerm j_11 (ATerm a_76, ATerm z_75, ATerm t);
ATerm SVar_1_0 (ATerm c_83 (ATerm), ATerm t);
static ATerm u_11 (ATerm b_128 (ATerm), ATerm c_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_67, ATerm g_67, ATerm f_67, ATerm t);
static ATerm c_13 (ATerm t);
static ATerm d_13 (ATerm t);
static ATerm e_13 (ATerm t);
static ATerm v_11 (ATerm v_127 (ATerm), ATerm w_127 (ATerm (ATerm), ATerm), ATerm z_66, ATerm c_67, ATerm t);
ATerm lookup_0_0 (ATerm t);
ATerm env_alltd_1_0 (ATerm l_120 (ATerm), ATerm t);
ATerm rename_4_0 (ATerm q_127 (ATerm (ATerm), ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_127 (ATerm (ATerm), ATerm), ATerm t);
static ATerm t_13 (ATerm t);
static ATerm u_13 (ATerm t);
static ATerm v_13 (ATerm t);
static ATerm w_13 (ATerm t);
static ATerm x_13 (ATerm t);
static ATerm y_13 (ATerm t);
static ATerm z_13 (ATerm t);
static ATerm a_14 (ATerm t);
ATerm tpaste_1_0 (ATerm l_131 (ATerm), ATerm t);
ATerm tboundin_3_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t);
static ATerm c_14 (ATerm t);
static ATerm d_14 (ATerm t);
static ATerm e_14 (ATerm t);
static ATerm h_14 (ATerm t);
ATerm tvars_0_0 (ATerm t);
static ATerm o_11 (ATerm g_114 (ATerm), ATerm k_49, ATerm j_49, ATerm t);
ATerm foldr_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t);
static ATerm p_11 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm o_49, ATerm n_49, ATerm t);
static ATerm q_11 (ATerm b_114 (ATerm), ATerm i_49, ATerm h_49, ATerm t);
ATerm at_end_1_0 (ATerm s_110 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm o_124 (ATerm g_124, ATerm t);
ATerm conc_0_0 (ATerm t);
static ATerm p_14 (ATerm t);
static ATerm q_14 (ATerm t);
static ATerm r_14 (ATerm t);
static ATerm s_11 (ATerm g_674, ATerm l_674, ATerm a_69, ATerm t);
ATerm while_not_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t);
static ATerm s_14 (ATerm t);
static ATerm t_14 (ATerm t);
static ATerm u_14 (ATerm t);
static ATerm u_126 (ATerm o_125, ATerm p_125, ATerm q_125, ATerm t);
static ATerm v_14 (ATerm t);
ATerm diff_0_0 (ATerm t);
static ATerm b_15 (ATerm t);
static ATerm c_15 (ATerm t);
static ATerm d_15 (ATerm t);
static ATerm e_15 (ATerm t);
static ATerm f_15 (ATerm t);
static ATerm i_15 (ATerm t);
static ATerm j_15 (ATerm t);
ATerm free_vars_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t);
static ATerm k_15 (ATerm t);
static ATerm m_15 (ATerm t);
static ATerm o_15 (ATerm t);
static ATerm p_15 (ATerm t);
ATerm Bind0_0_0 (ATerm t);
ATerm Var_1_0 (ATerm t_79 (ATerm), ATerm t);
static ATerm q_15 (ATerm t);
static ATerm r_15 (ATerm t);
static ATerm s_15 (ATerm t);
static ATerm v_15 (ATerm t);
static ATerm w_15 (ATerm t);
static ATerm y_15 (ATerm t);
static ATerm a_16 (ATerm t);
ATerm strename_0_0 (ATerm t);
static ATerm d_12 (ATerm t_41, ATerm u_41, ATerm t);
static ATerm c_16 (ATerm t);
static ATerm h_16 (ATerm t);
static ATerm i_16 (ATerm t);
static ATerm j_16 (ATerm t);
static ATerm k_16 (ATerm t);
static ATerm l_16 (ATerm t);
static ATerm n_16 (ATerm t);
static ATerm o_16 (ATerm t);
ATerm InlineStrat_0_0 (ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm p_16 (ATerm t);
static ATerm q_16 (ATerm t);
static ATerm s_16 (ATerm t);
static ATerm t_16 (ATerm t);
ATerm check_that_try_is_try_0_0 (ATerm t);
ATerm check_library_definitions_0_0 (ATerm t);
static ATerm e_12 (ATerm a_109 (ATerm), ATerm a_41, ATerm y_40, ATerm t);
static ATerm b_17 (ATerm t);
static ATerm f_12 (ATerm f_22, ATerm g_22, ATerm i_22, ATerm h_22, ATerm t);
ATerm map_1_0 (ATerm c_110 (ATerm), ATerm t);
ATerm Cons_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
static ATerm i_12 (ATerm i_32, ATerm j_32, ATerm t);
static ATerm j_12 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm l_12 (ATerm p_108 (ATerm), ATerm o_310, ATerm x_37, ATerm t);
static ATerm k_12 (ATerm n_37, ATerm o_37, ATerm t);
static ATerm d_17 (ATerm t);
static ATerm e_17 (ATerm t);
static ATerm f_17 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm t_122 (ATerm), ATerm t);
static ATerm w_138 (ATerm q_138, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm m_12 (ATerm v_37, ATerm t);
static ATerm n_12 (ATerm k_32, ATerm l_32, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_140 (ATerm g_139, ATerm t);
static ATerm i_140 (ATerm k_139, ATerm l_139, ATerm m_139, ATerm t);
static ATerm j_140 (ATerm u_139, ATerm v_139, ATerm w_139, ATerm t);
static ATerm o_12 (ATerm t);
static ATerm g_17 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_110 (ATerm), ATerm t);
static ATerm h_12 (ATerm c_31, ATerm d_31, ATerm t);
ATerm debug_1_0 (ATerm n_108 (ATerm), ATerm t);
static ATerm h_17 (ATerm t);
static ATerm i_17 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm j_17 (ATerm t);
static ATerm k_17 (ATerm t);
static ATerm l_17 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm n_17 (ATerm t);
static ATerm p_17 (ATerm t);
static ATerm r_17 (ATerm t);
static ATerm s_17 (ATerm t);
static ATerm u_17 (ATerm t);
static ATerm w_17 (ATerm t);
static ATerm c_18 (ATerm t);
static ATerm d_18 (ATerm t);
static ATerm e_18 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_12 (ATerm z_62, ATerm a_63, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm f_18 (ATerm t);
static ATerm l_18 (ATerm t);
static ATerm m_18 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_12 (ATerm i_41, ATerm j_41, ATerm h_41, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm n_18 (ATerm t);
static ATerm o_18 (ATerm t);
static ATerm p_18 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm p_12 (ATerm h_39, ATerm i_39, ATerm t);
ATerm foldr_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm q_18 (ATerm t);
static ATerm r_18 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm b_132 (ATerm), ATerm t);
static ATerm s_18 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_18 (ATerm t);
ATerm need_help_1_0 (ATerm r_123 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm r_12 (ATerm z_42, ATerm a_43, ATerm t);
static ATerm v_18 (ATerm t);
static ATerm w_18 (ATerm t);
static ATerm x_18 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_18 (ATerm t);
static ATerm z_18 (ATerm t);
static ATerm a_19 (ATerm t);
static ATerm b_19 (ATerm t);
static ATerm c_19 (ATerm t);
static ATerm d_19 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm w_126 (ATerm), ATerm t);
static ATerm f_19 (ATerm t);
static ATerm j_19 (ATerm t);
static ATerm k_19 (ATerm t);
static ATerm l_19 (ATerm t);
ATerm parse_options_1_0 (ATerm v_126 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm t);
static ATerm s_19 (ATerm t);
static ATerm x_19 (ATerm t);
static ATerm y_19 (ATerm t);
static ATerm b_20 (ATerm t);
static ATerm c_20 (ATerm t);
ATerm iowrap_3_0 (ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm t);
static ATerm g_20 (ATerm t);
static ATerm h_20 (ATerm t);
static ATerm i_20 (ATerm t);
static ATerm j_20 (ATerm t);
static ATerm k_20 (ATerm t);
static ATerm m_20 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_s_20;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_u_20;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_20), p_0), term_v_20);
  u_0 = t;
  t = SSL_printnl(t_0, u_0);
  t = term_y_20;
  r_0 = t;
  t = SSL_exit(r_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm c_132 (ATerm), ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    ATerm z_20 = t;
    int a_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_d_21;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_g_21);
        t = geq_0_0(t);
        t = w_0;
        t = c_132(t);
        LocalPopChoice(a_21);
      }
    else
      {
        t = z_20;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, d_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          f_1 = ATgetArgument(t, 0);
          {
            ATerm m_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
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
                    if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      o_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
                return(t);
              }
              t = oncetd_1_0(v_0, t);
            }
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_j_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_1)), not_null(m_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
          }
        }
      else
        {
          ATerm t_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              f_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_1;
          t = new_0_0(t);
          x_1 = t;
          t = new_0_0(t);
          z_1 = t;
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
                  if(((v_1 != NULL) && (v_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    v_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, x_1);
              return(t);
            }
            t = oncetd_1_0(x_0, t);
          }
          a_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))))), (ATerm)ATmakeAppl(sym_Var_1, x_1), (ATerm) ATmakeAppl(sym_Op_2, term_l_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_1)), not_null(t_1)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_21 = t;
    int n_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
        t = d_2;
        t = new_0_0(t);
        i_2 = t;
        t = e_2;
        {
          static ATerm b_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_2 = ATgetArgument(t, 0);
                if(((h_2 != NULL) && (h_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, i_2), g_2);
            return(t);
          }
          t = pat_td_1_0(b_1, t);
        }
        j_2 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_2))))));
        LocalPopChoice(n_21);
      }
    else
      {
        t = m_21;
        {
          ATerm p_21 = t;
          int q_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL;
              t = d_2;
              t = new_0_0(t);
              n_2 = t;
              t = e_2;
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_2);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
              }
              o_2 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), not_null(l_2))));
              LocalPopChoice(q_21);
            }
          else
            {
              t = p_21;
              {
                ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
                t = d_2;
                t = new_0_0(t);
                v_2 = t;
                t = e_2;
                {
                  static ATerm g_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_2 = ATgetArgument(t, 0);
                        if(((t_2 != NULL) && (t_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          t_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_2);
                    return(t);
                  }
                  t = pat_td_1_0(g_1, t);
                }
                w_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_2)), not_null(u_2)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm r_130 (ATerm), ATerm t)
{
  ATerm r_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_130(t);
      LocalPopChoice(t_21);
    }
  else
    {
      t = r_21;
      {
        ATerm e_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
        g_6 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm u_1 = NULL,b_2 = NULL,e_3 = NULL;
              t = SSLgetAnnotations(g_6);
              u_1 = t;
              t = i_6;
              {
                static ATerm h_1 (ATerm t)
                {
                  t = pat_td_1_0(r_130, t);
                  return(t);
                }
                t = fetch_1_0(h_1, t);
              }
              b_2 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, h_6, b_2);
              e_3 = t;
              t = SSLsetAnnotations(e_3, u_1);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_6 = ATgetArgument(t, 0);
                i_6 = ATgetArgument(t, 1);
                {
                  ATerm u_21 = t;
                  int v_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_2 = NULL,c_3 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(g_6);
                      z_2 = t;
                      t = i_6;
                      t = pat_td_1_0(r_130, t);
                      c_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_6, c_3);
                      f_3 = t;
                      t = SSLsetAnnotations(f_3, z_2);
                      LocalPopChoice(v_21);
                    }
                  else
                    {
                      t = u_21;
                      {
                        ATerm v_4 = NULL,g_5 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(g_6);
                        v_4 = t;
                        t = h_6;
                        t = pat_td_1_0(r_130, t);
                        g_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, g_5, i_6);
                        g_3 = t;
                        t = SSLsetAnnotations(g_3, v_4);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    h_6 = ATgetArgument(t, 0);
                    i_6 = ATgetArgument(t, 1);
                    e_6 = ATgetArgument(t, 2);
                    {
                      ATerm t_5 = NULL,y_5 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(g_6);
                      t_5 = t;
                      t = e_6;
                      {
                        static ATerm n_1 (ATerm t)
                        {
                          t = pat_td_1_0(r_130, t);
                          return(t);
                        }
                        t = fetch_1_0(n_1, t);
                      }
                      y_5 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, y_5);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, t_5);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_6 = ATgetArgument(t, 0);
                        i_6 = ATgetArgument(t, 1);
                        e_6 = ATgetArgument(t, 2);
                        {
                          ATerm z_6 = NULL,l_7 = NULL,i_3 = NULL;
                          t = SSLgetAnnotations(g_6);
                          z_6 = t;
                          t = e_6;
                          {
                            static ATerm p_1 (ATerm t)
                            {
                              t = pat_td_1_0(r_130, t);
                              return(t);
                            }
                            t = fetch_1_0(p_1, t);
                          }
                          l_7 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, h_6, i_6, l_7);
                          i_3 = t;
                          t = SSLsetAnnotations(i_3, z_6);
                        }
                      }
                    else
                      {
                        ATerm z_7 = NULL,c_8 = NULL,j_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_6 = ATgetArgument(t, 0);
                            i_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(g_6);
                        z_7 = t;
                        t = i_6;
                        t = pat_td_1_0(r_130, t);
                        c_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_6, c_8);
                        j_3 = t;
                        t = SSLsetAnnotations(j_3, z_7);
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
  ATerm s_6 = NULL,t_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,v_6 = NULL,a_7 = NULL,c_7 = NULL;
        t = s_6;
        t = new_0_0(t);
        a_7 = t;
        t = t_6;
        {
          static ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((u_6 != NULL) && (u_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_6 = ATgetArgument(t, 0);
                if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  v_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_7);
            return(t);
          }
          t = pat_td_1_0(s_1, t);
        }
        c_7 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_6)), not_null(u_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_7)))), (ATerm) ATmakeAppl(sym_Build_1, c_7)));
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        {
          ATerm b_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL;
              t = s_6;
              t = new_0_0(t);
              f_7 = t;
              t = t_6;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((d_7 != NULL) && (d_7 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        d_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_7);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              g_7 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_7)))), (ATerm) ATmakeAppl(sym_Build_1, g_7)));
              LocalPopChoice(d_22);
            }
          else
            {
              t = b_22;
              {
                ATerm j_7 = NULL,k_7 = NULL,n_7 = NULL,q_7 = NULL;
                t = s_6;
                t = new_0_0(t);
                n_7 = t;
                t = t_6;
                {
                  static ATerm y_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          j_7 = ATgetArgument(t, 0);
                        if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          k_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_7);
                    return(t);
                  }
                  t = pat_td_1_0(y_1, t);
                }
                q_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), not_null(k_7), (ATerm) ATmakeAppl(sym_Var_1, n_7))), (ATerm) ATmakeAppl(sym_Build_1, q_7)));
              }
            }
        }
      }
  }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm e_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_9 = NULL,u_9 = NULL,z_9 = NULL,q_3 = NULL;
      z_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          u_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_9);
      t_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, u_9);
      q_3 = t;
      t = SSLsetAnnotations(q_3, t_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm a_10 = NULL,d_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_10 = ATgetFirst((ATermList) t);
      d_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_10, d_10);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,k_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_22 = ATgetArgument(t, 0);
      if(match_cons(l_22, sym__2))
        {
          g_10 = ATgetArgument(l_22, 0);
          h_10 = ATgetArgument(l_22, 1);
        }
      else
        _fail(t);
      {
        ATerm m_22 = ATgetArgument(t, 1);
        if(match_cons(m_22, sym__2))
          {
            k_10 = ATgetArgument(m_22, 0);
            o_10 = ATgetArgument(m_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_10), g_10), (ATerm) ATinsert(CheckATermList(o_10), h_10));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_10 = ATgetFirst((ATermList) t);
      s_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_10, s_10);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_22 = ATgetArgument(t, 0);
      if(match_cons(p_22, sym__2))
        {
          t_10 = ATgetArgument(p_22, 0);
          u_10 = ATgetArgument(p_22, 1);
        }
      else
        _fail(t);
      {
        ATerm q_22 = ATgetArgument(t, 1);
        if(match_cons(q_22, sym__2))
          {
            v_10 = ATgetArgument(q_22, 0);
            w_10 = ATgetArgument(q_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_10), t_10), (ATerm) ATinsert(CheckATermList(w_10), u_10));
  return(t);
}
static ATerm d_8 (ATerm x_73, ATerm y_73, ATerm z_73, ATerm t)
{
  ATerm t_7 = NULL,w_7 = NULL,e_8 = NULL,g_8 = NULL,k_8 = NULL,o_8 = NULL,p_8 = NULL,t_8 = NULL,m_9 = NULL,r_3 = NULL;
  t = z_73;
  t = fetch_1_0(c_2, t);
  t = z_73;
  t = genzip_4_0(f_2, k_2, m_2, LiftPrimArg_0_0, t);
  m_9 = t;
  if(match_cons(t, sym__2))
    {
      k_8 = ATgetArgument(t, 0);
      o_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_9);
  g_8 = t;
  t = k_8;
  t = concat_0_0(t);
  p_8 = t;
  t = o_8;
  t = genzip_4_0(p_2, q_2, r_2, _id, t);
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_8, t_8);
  r_3 = t;
  t = SSLsetAnnotations(r_3, g_8);
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            w_7 = ATgetArgument(u_22, 0);
            e_8 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_7), (ATerm) ATmakeAppl(sym_CallT_3, x_73, y_73, e_8)));
  return(t);
}
static ATerm z_11 (ATerm a_11, ATerm t)
{
  ATerm c_11 = NULL;
  t = a_11;
  {
    ATerm w_22 = t;
    if((PushChoice() == 0))
      {
        ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,v_3 = NULL;
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
        v_3 = t;
        t = SSLsetAnnotations(v_3, d_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_22;
      }
  }
  t = new_0_0(t);
  c_11 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, c_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_11)))), (ATerm) ATmakeAppl(sym_Var_1, c_11)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm g_11 = NULL,k_11 = NULL;
  g_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_11 = ATgetArgument(t, 0);
      {
        ATerm x_22 = t;
        int y_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_11(g_11, t);
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_z_22, (ATerm) ATmakeAppl(sym_Var_1, k_11)));
          }
      }
    }
  else
    {
      t = z_11(g_11, t);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_23 = t;
  if((PushChoice() == 0))
    {
      ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,x_3 = NULL;
      h_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          g_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_9);
      f_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, g_9);
      x_3 = t;
      t = SSLsetAnnotations(x_3, f_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_23;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm i_9 = NULL,j_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_9 = ATgetFirst((ATermList) t);
      j_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_23 = ATgetArgument(t, 0);
      if(match_cons(e_23, sym__2))
        {
          k_9 = ATgetArgument(e_23, 0);
          l_9 = ATgetArgument(e_23, 1);
        }
      else
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(match_cons(f_23, sym__2))
          {
            n_9 = ATgetArgument(f_23, 0);
            q_9 = ATgetArgument(f_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_9), k_9), (ATerm) ATinsert(CheckATermList(q_9), l_9));
  return(t);
}
static ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_9 = NULL,s_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_9 = ATgetFirst((ATermList) t);
      s_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(match_cons(g_23, sym__2))
        {
          v_9 = ATgetArgument(g_23, 0);
          x_9 = ATgetArgument(g_23, 1);
        }
      else
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(match_cons(h_23, sym__2))
          {
            b_10 = ATgetArgument(h_23, 0);
            c_10 = ATgetArgument(h_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_10), v_9), (ATerm) ATinsert(CheckATermList(c_10), x_9));
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm i_23 = t;
  if((PushChoice() == 0))
    {
      ATerm y_11 = NULL,a_12 = NULL,b_12 = NULL,a_4 = NULL;
      b_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          a_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_12);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, a_12);
      a_4 = t;
      t = SSLsetAnnotations(a_4, y_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_23;
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm c_12 = NULL,g_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_12 = ATgetFirst((ATermList) t);
      g_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_12, g_12);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm q_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym__2))
        {
          q_12 = ATgetArgument(j_23, 0);
          y_12 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(match_cons(k_23, sym__2))
          {
            z_12 = ATgetArgument(k_23, 0);
            b_13 = ATgetArgument(k_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_12), q_12), (ATerm) ATinsert(CheckATermList(b_13), y_12));
  return(t);
}
static ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_k_22;
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_13, j_13);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(match_cons(l_23, sym__2))
        {
          l_13 = ATgetArgument(l_23, 0);
          n_13 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      {
        ATerm n_23 = ATgetArgument(t, 1);
        if(match_cons(n_23, sym__2))
          {
            o_13 = ATgetArgument(n_23, 0);
            q_13 = ATgetArgument(n_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_13), l_13), (ATerm) ATinsert(CheckATermList(q_13), n_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      v_16 = ATgetArgument(t, 2);
      {
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,z_3 = NULL;
        t = v_16;
        t = fetch_1_0(s_2, t);
        t = v_16;
        t = genzip_4_0(x_2, y_2, a_3, LiftPrimArg_0_0, t);
        e_9 = t;
        if(match_cons(t, sym__2))
          {
            a_9 = ATgetArgument(t, 0);
            b_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_9);
        z_8 = t;
        t = a_9;
        t = concat_0_0(t);
        c_9 = t;
        t = b_9;
        t = genzip_4_0(b_3, d_3, k_3, _id, t);
        d_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_9, d_9);
        z_3 = t;
        t = SSLsetAnnotations(z_3, z_8);
        if(match_cons(t, sym__2))
          {
            w_8 = ATgetArgument(t, 0);
            {
              ATerm o_23 = ATgetArgument(t, 1);
              if(match_cons(o_23, sym__2))
                {
                  x_8 = ATgetArgument(o_23, 0);
                  y_8 = ATgetArgument(o_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_8), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, y_16, y_8)));
      }
    }
  else
    {
      ATerm z_10 = NULL,h_11 = NULL,i_11 = NULL,l_11 = NULL,n_11 = NULL,r_11 = NULL,t_11 = NULL,w_11 = NULL,x_11 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_16 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_16;
      t = fetch_1_0(l_3, t);
      t = y_16;
      t = genzip_4_0(m_3, n_3, o_3, LiftPrimArg_0_0, t);
      x_11 = t;
      if(match_cons(t, sym__2))
        {
          n_11 = ATgetArgument(t, 0);
          r_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_11);
      l_11 = t;
      t = n_11;
      t = concat_0_0(t);
      t_11 = t;
      t = r_11;
      t = genzip_4_0(p_3, s_3, t_3, _id, t);
      w_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, t_11, w_11);
      b_4 = t;
      t = SSLsetAnnotations(b_4, l_11);
      if(match_cons(t, sym__2))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm p_23 = ATgetArgument(t, 1);
            if(match_cons(p_23, sym__2))
              {
                h_11 = ATgetArgument(p_23, 0);
                i_11 = ATgetArgument(p_23, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_10, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, h_11), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, (ATerm)ATempty, i_11)));
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Con_3))
    {
      y_17 = ATgetArgument(t, 0);
      z_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
      {
        ATerm f_14 = NULL,g_4 = NULL;
        t = SSLgetAnnotations(b_18);
        f_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, y_17, z_17, a_18);
        g_4 = t;
        t = SSLsetAnnotations(g_4, f_14);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = b_18;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_23;
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,m_19 = NULL,n_19 = NULL;
  h_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      m_19 = ATgetArgument(t, 0);
      n_19 = ATgetArgument(t, 1);
      g_19 = ATgetArgument(t, 2);
      {
        ATerm g_15 = NULL,j_4 = NULL;
        t = SSLgetAnnotations(h_19);
        g_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, m_19, n_19, g_19);
        j_4 = t;
        t = SSLsetAnnotations(j_4, g_15);
      }
    }
  else
    {
      ATerm u_16 = NULL,k_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          m_19 = ATgetArgument(t, 0);
          n_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(h_19);
      u_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, m_19, n_19);
      k_4 = t;
      t = SSLsetAnnotations(k_4, u_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm s_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm t_19 = NULL,w_19 = NULL,z_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      t_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_19;
  if(match_cons(t, sym_StratRule_3))
    {
      w_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
      a_20 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, z_19), (ATerm) ATmakeAppl(sym_Where_1, a_20)), w_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          w_19 = ATgetArgument(t, 0);
          z_19 = ATgetArgument(t, 1);
          a_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_19;
      t = pureterm_0_0(t);
      t = z_19;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, z_19)), (ATerm) ATmakeAppl(sym_Where_1, a_20)), (ATerm) ATmakeAppl(sym_Match_1, w_19)));
    }
  return(t);
}
static ATerm h_8 (ATerm k_69, ATerm l_69, ATerm m_69, ATerm t)
{
  ATerm l_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,t_20 = NULL;
  t = new_0_0(t);
  q_20 = t;
  t = k_69;
  {
    static ATerm y_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_23 = ATgetArgument(t, 0);
          if(match_cons(t_23, sym_Var_1))
            {
              if(((p_20 != NULL) && (p_20 != ATgetArgument(t_23, 0))))
                _fail(ATgetArgument(t_23, 0));
              else
                p_20 = ATgetArgument(t_23, 0);
            }
          else
            _fail(t);
          if(((n_20 != NULL) && (n_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            n_20 = ATgetArgument(t, 1);
          {
            ATerm u_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_20);
      return(t);
    }
    t = oncetd_1_0(y_3, t);
  }
  r_20 = t;
  t = l_69;
  {
    static ATerm c_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_23 = ATgetArgument(t, 0);
          if(match_cons(v_23, sym_Var_1))
            {
              if(((p_20 != NULL) && (p_20 != ATgetArgument(v_23, 0))))
                _fail(ATgetArgument(v_23, 0));
              else
                p_20 = ATgetArgument(v_23, 0);
            }
          else
            _fail(t);
          if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_20 = ATgetArgument(t, 1);
          {
            ATerm w_23 = ATgetArgument(t, 2);
            if(match_cons(w_23, sym_CallT_3))
              {
                if(((l_20 != NULL) && (l_20 != ATgetArgument(w_23, 0))))
                  _fail(ATgetArgument(w_23, 0));
                else
                  l_20 = ATgetArgument(w_23, 0);
                {
                  ATerm x_23 = ATgetArgument(w_23, 1);
                  if(((ATgetType(x_23) != AT_LIST) || !(ATisEmpty(x_23))))
                    _fail(t);
                }
                {
                  ATerm y_23 = ATgetArgument(w_23, 2);
                  if(((ATgetType(y_23) != AT_LIST) || !(ATisEmpty(y_23))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, q_20);
      return(t);
    }
    t = oncetd_1_0(c_4, t);
  }
  t_20 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_20), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, r_20, t_20, (ATerm) ATmakeAppl(sym_Seq_2, m_69, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(l_20), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(n_20), not_null(o_20), term_z_22))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_20)), (ATerm) ATmakeAppl(sym_Var_1, q_20))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_21 = NULL,a_22 = NULL,c_22 = NULL,j_22 = NULL,n_22 = NULL,v_22 = NULL;
          j_22 = t;
          if(match_cons(t, sym_SRule_1))
            {
              n_22 = ATgetArgument(t, 0);
              t = n_22;
              if(match_cons(t, sym_Rule_3))
                {
                  z_21 = ATgetArgument(t, 0);
                  a_22 = ATgetArgument(t, 1);
                  c_22 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_22;
              t = h_8(z_21, a_22, c_22, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm q_17 = NULL,t_17 = NULL,n_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  n_22 = ATgetArgument(t, 0);
                  v_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(j_22);
              q_17 = t;
              t = v_22;
              t = desugarRule_0_0(t);
              t_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, n_22, t_17);
              n_4 = t;
              t = SSLsetAnnotations(n_4, q_17);
            }
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(b_24);
    }
  else
    {
      t = z_23;
    }
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
    }
  t = repeat_2_0(e_4, _id, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm i_24 = t;
        int j_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_24 = NULL,x_24 = NULL,c_26 = NULL,d_26 = NULL;
            l_24 = t;
            if(match_cons(t, sym_CallT_3))
              {
                x_24 = ATgetArgument(t, 0);
                c_26 = ATgetArgument(t, 1);
                d_26 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = l_24;
            t = d_8(x_24, c_26, d_26, t);
            LocalPopChoice(j_24);
          }
        else
          {
            t = i_24;
            {
              ATerm k_24 = t;
              int m_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(m_24);
                }
              else
                {
                  t = k_24;
                  {
                    ATerm n_24 = t;
                    int p_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(p_24);
                      }
                    else
                      {
                        t = n_24;
                        {
                          ATerm q_24 = t;
                          int v_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_24 = t;
                              int y_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_26 = NULL,k_26 = NULL,l_26 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      i_26 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_26;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      k_26 = ATgetArgument(t, 0);
                                      t = k_26;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          k_26 = ATgetArgument(t, 0);
                                          l_26 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, k_26, l_26);
                                    }
                                  LocalPopChoice(y_24);
                                }
                              else
                                {
                                  t = w_24;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(v_24);
                            }
                          else
                            {
                              t = q_24;
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
static ATerm f_4 (ATerm t)
{
  ATerm c_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_21);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      {
        ATerm e_21 = NULL,f_21 = NULL,h_21 = NULL,i_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_21 = ATgetArgument(t, 0);
            t = e_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_21 = ATgetArgument(t, 0);
                f_21 = ATgetArgument(t, 1);
                h_21 = ATgetArgument(t, 2);
                i_21 = ATgetArgument(t, 3);
                t = h_21;
                t = map_1_0(i_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_21 = ATgetArgument(t, 0);
                    f_21 = ATgetArgument(t, 1);
                    h_21 = ATgetArgument(t, 2);
                    i_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = h_21;
                t = map_1_0(l_4, t);
              }
          }
      }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm s_21 = NULL;
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_21 = ATgetArgument(t, 0);
          {
            ATerm g_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_25);
      t = s_21;
    }
  else
    {
      t = d_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_21;
    }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm o_22 = NULL;
  ATerm h_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_22 = ATgetArgument(t, 0);
          {
            ATerm p_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_25);
      t = o_22;
    }
  else
    {
      t = h_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_22;
    }
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL,b_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  t_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      u_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_CallT_3))
    {
      v_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
      y_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_30;
  if(match_cons(t, sym_SVar_1))
    {
      w_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_30;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = x_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_30;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_30;
  if(match_cons(t, sym_Seq_2))
    {
      a_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_31;
  if(match_cons(t, sym_Match_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_31;
  if(match_cons(t, sym_Seq_2))
    {
      m_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_31;
  if(match_cons(t, sym_Where_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_31;
  if(match_cons(t, sym_Build_1))
    {
      p_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,q_19 = NULL,r_19 = NULL,u_19 = NULL,e_20 = NULL,f_20 = NULL;
        t = term_e_26;
        e_20 = t;
        t = term_f_26;
        f_20 = t;
        t = term_g_26;
        t = d_12(f_20, e_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm h_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) h_26) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_31, p_31);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, i_19, b_31, (ATerm) ATmakeAppl(sym__2, n_31, p_31));
        t = p_9(i_19, b_31, u_19, t);
        if(match_cons(t, sym__2))
          {
            q_19 = ATgetArgument(t, 0);
            r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, q_19), (ATerm) ATmakeAppl(sym_Build_1, r_19)));
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
        {
          ATerm w_20 = NULL,b_21 = NULL,b_23 = NULL,c_23 = NULL;
          t = term_e_26;
          b_23 = t;
          t = term_f_26;
          c_23 = t;
          t = term_g_26;
          t = d_12(c_23, b_23, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm j_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              w_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_31;
          t = free_vars_3_0(f_4, h_4, tboundin_3_0, t);
          {
            static ATerm o_4 (ATerm t)
            {
              static ATerm q_4 (ATerm t)
              {
                ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL;
                r_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, w_20, (ATerm) ATmakeAppl(sym_Var_1, r_22));
                s_22 = t;
                t = term_n_26;
                t_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, w_20, (ATerm) ATmakeAppl(sym_Var_1, r_22)), term_n_26);
                t = e_12(r_4, s_22, t_22, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_22);
                return(t);
              }
              t = map_1_0(q_4, t);
              t = (ATerm) ATmakeAppl(sym__2, n_31, p_31);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((b_21 != NULL) && (b_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    b_21 = ATgetArgument(t, 0);
                  {
                    ATerm o_26 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(m_4, o_4, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_31), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(b_21)), (ATerm) ATmakeAppl(sym_Build_1, p_31)));
        }
      }
  }
  return(t);
}
static ATerm z_33 (ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm m_23 = NULL;
  t = term_q_25;
  m_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, a_33);
  t = d_12(m_23, a_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm p_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_26) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = z_32;
  return(t);
}
static ATerm d_34 (ATerm g_33, ATerm h_33, ATerm t)
{
  ATerm r_23 = NULL;
  t = term_q_25;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_25, h_33);
  t = d_12(r_23, h_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_26) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = g_33;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm m_33 = NULL,r_33 = NULL,t_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_33;
  if(match_cons(t, sym_Var_1))
    {
      m_33 = ATgetArgument(t, 0);
      {
        ATerm u_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_24 = NULL;
            t = term_q_25;
            a_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_q_25, r_33);
            t = d_12(a_24, r_33, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm y_26 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_26) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, m_33);
            LocalPopChoice(w_26);
          }
        else
          {
            t = u_26;
            {
              ATerm z_26 = t;
              int a_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_33(t_33, r_33, t);
                  LocalPopChoice(a_27);
                }
              else
                {
                  t = z_26;
                  t = d_34(t_33, r_33, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm d_27 = t;
      int e_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_33(t_33, r_33, t);
          LocalPopChoice(e_27);
        }
      else
        {
          t = d_27;
          t = d_34(t_33, r_33, t);
        }
    }
  return(t);
}
static ATerm o_9 (ATerm n_41, ATerm o_41, ATerm t)
{
  ATerm g_34 = NULL,j_34 = NULL;
  j_34 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
        t = r_12(n_41, o_41, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_27 = ATgetFirst((ATermList) t);
            g_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_27);
        t = SSL_table_put(n_41, o_41, g_34);
        t = (ATerm) ATmakeAppl(sym__3, n_41, o_41, g_34);
      }
    else
      {
        t = f_27;
        t = SSL_table_remove(n_41, o_41);
        t = (ATerm) ATmakeAppl(sym__2, n_41, o_41);
      }
  }
  t = j_34;
  return(t);
}
ATerm end_scope_1_0 (ATerm x_108 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL;
  r_34 = t;
  t = x_108(t);
  q_34 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL;
        t = term_k_27;
        t_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_34, term_k_27);
        t = r_12(q_34, t_34, t);
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_34 = ATgetFirst((ATermList) t);
      m_34 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_27;
  s_34 = t;
  t = SSL_table_put(q_34, s_34, m_34);
  t = p_34;
  {
    static ATerm t_4 (ATerm t)
    {
      ATerm w_34 = NULL;
      w_34 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_34, w_34);
      t = o_9(q_34, w_34, t);
      return(t);
    }
    t = map_1_0(t_4, t);
  }
  t = r_34;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_103(t);
      t = e_103(t);
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = e_103(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_108 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  b_35 = t;
  t = w_108(t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, term_k_27);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_35 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            ATerm q_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_27;
        k_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_k_27);
        t = r_12(y_34, k_35, t);
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = (ATerm) ATempty;
      }
  }
  c_35 = t;
  t = term_k_27;
  d_35 = t;
  t = (ATerm) ATinsert(CheckATermList(c_35), (ATerm) ATempty);
  e_35 = t;
  t = SSL_table_put(y_34, d_35, e_35);
  t = b_35;
  return(t);
}
ATerm scope_2_0 (ATerm y_108 (ATerm), ATerm z_108 (ATerm), ATerm t)
{
  static ATerm u_4 (ATerm t)
  {
    t = end_scope_1_0(y_108, t);
    return(t);
  }
  t = begin_scope_1_0(y_108, t);
  t = restore_always_2_0(z_108, u_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm q_35 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_35);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_35 = ATgetArgument(t, 0);
            t = u_35;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                u_35 = ATgetArgument(t, 0);
                v_35 = ATgetArgument(t, 1);
                w_35 = ATgetArgument(t, 2);
                x_35 = ATgetArgument(t, 3);
                t = w_35;
                t = map_1_0(k_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    u_35 = ATgetArgument(t, 0);
                    v_35 = ATgetArgument(t, 1);
                    w_35 = ATgetArgument(t, 2);
                    x_35 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = w_35;
                t = map_1_0(l_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm j_36 = NULL;
  ATerm t_27 = t;
  int u_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_36 = ATgetArgument(t, 0);
          {
            ATerm v_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_27);
      t = j_36;
    }
  else
    {
      t = t_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_36;
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_36 = NULL;
  ATerm w_27 = t;
  int x_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_36 = ATgetArgument(t, 0);
          {
            ATerm y_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_27);
      t = v_36;
    }
  else
    {
      t = w_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_36 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_36;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm p_9 (ATerm t_24, ATerm s_24, ATerm u_24, ATerm t)
{
  ATerm p_35 = NULL;
  static ATerm f_5 (ATerm t)
  {
    t = s_24;
    t = free_vars_3_0(i_5, j_5, tboundin_3_0, t);
    {
      static ATerm m_5 (ATerm t)
      {
        ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
        z_36 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, t_24, (ATerm) ATmakeAppl(sym_Var_1, z_36));
        a_37 = t;
        t = term_a_28;
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, t_24, (ATerm) ATmakeAppl(sym_Var_1, z_36)), term_a_28);
        t = e_12(n_5, a_37, b_37, t);
        t = z_36;
        return(t);
      }
      t = map_1_0(m_5, t);
    }
    t = u_24;
    t = alltd_1_0(Replace_0_0, t);
    if(((p_35 != NULL) && (p_35 != t)))
      _fail(t);
    else
      p_35 = t;
    return(t);
  }
  t = scope_2_0(x_4, f_5, t);
  t = not_null(p_35);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm j_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_25);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      {
        ATerm l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            l_25 = ATgetArgument(t, 0);
            t = l_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                l_25 = ATgetArgument(t, 0);
                m_25 = ATgetArgument(t, 1);
                n_25 = ATgetArgument(t, 2);
                o_25 = ATgetArgument(t, 3);
                t = n_25;
                t = map_1_0(q_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    l_25 = ATgetArgument(t, 0);
                    m_25 = ATgetArgument(t, 1);
                    n_25 = ATgetArgument(t, 2);
                    o_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = n_25;
                t = map_1_0(r_5, t);
              }
          }
      }
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm w_25 = NULL;
  ATerm d_28 = t;
  int f_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_25 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_28);
      t = w_25;
    }
  else
    {
      t = d_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_25;
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_26 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_28);
      t = q_26;
    }
  else
    {
      t = i_28;
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
static ATerm s_5 (ATerm t)
{
  t = term_q_25;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = term_q_25;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,g_42 = NULL,h_42 = NULL,j_42 = NULL;
  r_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_41;
  if(match_cons(t, sym_CallT_3))
    {
      v_41 = ATgetArgument(t, 0);
      x_41 = ATgetArgument(t, 1);
      y_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_41;
  if(match_cons(t, sym_SVar_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_41;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = x_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_41;
  if(match_cons(t, sym_Seq_2))
    {
      a_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_42;
  if(match_cons(t, sym_Match_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_42;
  if(match_cons(t, sym_Build_1))
    {
      j_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,r_24 = NULL,z_24 = NULL,a_25 = NULL;
        t = term_o_28;
        z_24 = t;
        t = term_p_28;
        a_25 = t;
        t = term_q_28;
        t = d_12(a_25, z_24, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, o_24, g_42, j_42);
        t = p_9(o_24, g_42, j_42, t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_42), (ATerm) ATmakeAppl(sym_Build_1, r_24));
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          ATerm f_25 = NULL,i_25 = NULL,b_27 = NULL,c_27 = NULL;
          t = term_o_28;
          b_27 = t;
          t = term_p_28;
          c_27 = t;
          t = term_q_28;
          t = d_12(c_27, b_27, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm s_28 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_28) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              f_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = g_42;
          t = free_vars_3_0(o_5, p_5, tboundin_3_0, t);
          {
            static ATerm u_5 (ATerm t)
            {
              static ATerm v_5 (ATerm t)
              {
                ATerm t_26 = NULL,v_26 = NULL,x_26 = NULL;
                t_26 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, f_25, (ATerm) ATmakeAppl(sym_Var_1, t_26));
                v_26 = t;
                t = term_u_28;
                x_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, f_25, (ATerm) ATmakeAppl(sym_Var_1, t_26)), term_u_28);
                t = e_12(w_5, v_26, x_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_26);
                return(t);
              }
              t = map_1_0(v_5, t);
              t = j_42;
              t = alltd_1_0(Replace_0_0, t);
              if(((i_25 != NULL) && (i_25 != t)))
                _fail(t);
              else
                i_25 = t;
              return(t);
            }
            t = scope_2_0(s_5, u_5, t);
          }
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_42), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_25)));
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  static ATerm x_5 (ATerm t)
  {
    ATerm c_45 = NULL,e_45 = NULL,f_45 = NULL,h_45 = NULL,i_45 = NULL,k_45 = NULL,l_45 = NULL,n_45 = NULL,o_45 = NULL,s_45 = NULL,t_45 = NULL;
    t_45 = t;
    if(match_cons(t, sym_Seq_2))
      {
        c_45 = ATgetArgument(t, 0);
        n_45 = ATgetArgument(t, 1);
        t = c_45;
        if(match_cons(t, sym_Choice_2))
          {
            e_45 = ATgetArgument(t, 0);
            h_45 = ATgetArgument(t, 1);
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_28 = NULL,g_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, n_45);
                  e_28 = t;
                  t = term_y_28;
                  g_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_y_28, (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, n_45));
                  t = d_12(g_28, e_28, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm z_28 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) z_28) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, e_45, n_45), (ATerm) ATmakeAppl(sym_Seq_2, h_45, n_45));
                  t = bottomup_1_0(x_5, t);
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  t = t_45;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                e_45 = ATgetArgument(t, 0);
                h_45 = ATgetArgument(t, 1);
                {
                  ATerm a_29 = t;
                  int b_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_29 = NULL,l_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_29, n_45);
                      k_29 = t;
                      t = term_d_29;
                      l_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_d_29, (ATerm) ATmakeAppl(sym_Seq_2, term_c_29, n_45));
                      t = d_12(l_29, k_29, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm e_29 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, e_45, n_45), (ATerm) ATmakeAppl(sym_Seq_2, h_45, n_45));
                      t = bottomup_1_0(x_5, t);
                      LocalPopChoice(b_29);
                    }
                  else
                    {
                      t = a_29;
                      t = t_45;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    e_45 = ATgetArgument(t, 0);
                    h_45 = ATgetArgument(t, 1);
                    {
                      ATerm f_29 = t;
                      int g_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_46 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_45, n_45);
                          t = x_5(t);
                          l_46 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, e_45, l_46);
                          t = x_5(t);
                          LocalPopChoice(g_29);
                        }
                      else
                        {
                          t = f_29;
                          t = t_45;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        e_45 = ATgetArgument(t, 0);
                        h_45 = ATgetArgument(t, 1);
                        {
                          ATerm h_29 = t;
                          int i_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_46 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_45, n_45);
                              t = x_5(t);
                              v_46 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_45, v_46);
                              t = x_5(t);
                              LocalPopChoice(i_29);
                            }
                          else
                            {
                              t = h_29;
                              t = t_45;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            e_45 = ATgetArgument(t, 0);
                            {
                              ATerm j_29 = t;
                              int m_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm a_47 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, n_45, e_45);
                                  t = x_5(t);
                                  a_47 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, a_47);
                                  t = x_5(t);
                                  LocalPopChoice(m_29);
                                }
                              else
                                {
                                  t = j_29;
                                  t = t_45;
                                }
                            }
                          }
                        else
                          {
                            t = t_45;
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
            c_45 = ATgetArgument(t, 0);
            n_45 = ATgetArgument(t, 1);
            t = c_45;
            if(match_cons(t, sym_LChoice_2))
              {
                e_45 = ATgetArgument(t, 0);
                h_45 = ATgetArgument(t, 1);
                {
                  ATerm n_29 = t;
                  int o_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm j_47 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_45, n_45);
                      t = x_5(t);
                      j_47 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, e_45, j_47);
                      t = x_5(t);
                      LocalPopChoice(o_29);
                    }
                  else
                    {
                      t = n_29;
                      t = t_45;
                    }
                }
              }
            else
              {
                t = t_45;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                c_45 = ATgetArgument(t, 0);
                n_45 = ATgetArgument(t, 1);
                t = c_45;
                if(match_cons(t, sym_Choice_2))
                  {
                    e_45 = ATgetArgument(t, 0);
                    h_45 = ATgetArgument(t, 1);
                    {
                      ATerm p_29 = t;
                      int q_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_47 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, h_45, n_45);
                          t = x_5(t);
                          w_47 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, e_45, w_47);
                          t = x_5(t);
                          LocalPopChoice(q_29);
                        }
                      else
                        {
                          t = p_29;
                          t = t_45;
                        }
                    }
                  }
                else
                  {
                    t = t_45;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    c_45 = ATgetArgument(t, 0);
                    n_45 = ATgetArgument(t, 1);
                    t = n_45;
                    if(match_cons(t, sym_Op_2))
                      {
                        o_45 = ATgetArgument(t, 0);
                        s_45 = ATgetArgument(t, 1);
                        t = c_45;
                        if(match_cons(t, sym_CallT_3))
                          {
                            e_45 = ATgetArgument(t, 0);
                            h_45 = ATgetArgument(t, 1);
                            l_45 = ATgetArgument(t, 2);
                            t = l_45;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = h_45;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    i_45 = ATgetFirst((ATermList) t);
                                    k_45 = (ATerm) ATgetNext((ATermList) t);
                                    t = k_45;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = e_45;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            f_45 = ATgetArgument(t, 0);
                                            t = f_45;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm r_29 = t;
                                                int s_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm e_48 = NULL;
                                                    t = s_45;
                                                    {
                                                      static ATerm z_5 (ATerm t)
                                                      {
                                                        ATerm f_48 = NULL;
                                                        f_48 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, i_45), (ATerm) ATempty), f_48);
                                                        return(t);
                                                      }
                                                      t = map_1_0(z_5, t);
                                                    }
                                                    e_48 = t;
                                                    t = (ATerm) ATmakeAppl(sym_App_2, i_45, (ATerm) ATmakeAppl(sym_Op_2, o_45, e_48));
                                                    t = bottomup_1_0(x_5, t);
                                                    LocalPopChoice(s_29);
                                                  }
                                                else
                                                  {
                                                    t = r_29;
                                                    t = t_45;
                                                  }
                                              }
                                            else
                                              {
                                                t = t_45;
                                              }
                                          }
                                        else
                                          {
                                            t = t_45;
                                          }
                                      }
                                    else
                                      {
                                        t = t_45;
                                      }
                                  }
                                else
                                  {
                                    t = t_45;
                                  }
                              }
                            else
                              {
                                t = t_45;
                              }
                          }
                        else
                          {
                            t = t_45;
                          }
                      }
                    else
                      {
                        t = t_45;
                      }
                  }
                else
                  {
                    t = t_45;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(x_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_99 (ATerm), ATerm t)
{
  static ATerm a_6 (ATerm t)
  {
    t = bottomup_1_0(x_99, t);
    return(t);
  }
  t = SRTS_all(a_6, t);
  t = x_99(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  static ATerm b_6 (ATerm t)
  {
    ATerm f_50 = NULL,g_50 = NULL,m_50 = NULL,o_50 = NULL,q_50 = NULL;
    q_50 = t;
    if(match_cons(t, sym_Seq_2))
      {
        f_50 = ATgetArgument(t, 0);
        g_50 = ATgetArgument(t, 1);
        t = g_50;
        if(match_cons(t, sym_Choice_2))
          {
            m_50 = ATgetArgument(t, 0);
            o_50 = ATgetArgument(t, 1);
            {
              ATerm v_29 = t;
              int w_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_51 = NULL,g_51 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, m_50);
                  t = b_6(t);
                  f_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, o_50);
                  t = b_6(t);
                  g_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, f_51, g_51);
                  t = b_6(t);
                  LocalPopChoice(w_29);
                }
              else
                {
                  t = v_29;
                  t = q_50;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                m_50 = ATgetArgument(t, 0);
                o_50 = ATgetArgument(t, 1);
                {
                  ATerm x_29 = t;
                  int y_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm n_51 = NULL,o_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, m_50);
                      t = b_6(t);
                      n_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, o_50);
                      t = b_6(t);
                      o_51 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_51, o_51);
                      t = b_6(t);
                      LocalPopChoice(y_29);
                    }
                  else
                    {
                      t = x_29;
                      t = q_50;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    m_50 = ATgetArgument(t, 0);
                    o_50 = ATgetArgument(t, 1);
                    {
                      ATerm z_29 = t;
                      int a_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_51 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, f_50, o_50);
                          t = b_6(t);
                          y_51 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, m_50, y_51);
                          t = b_6(t);
                          LocalPopChoice(a_30);
                        }
                      else
                        {
                          t = z_29;
                          t = q_50;
                        }
                    }
                  }
                else
                  {
                    t = q_50;
                  }
              }
          }
      }
    else
      {
        t = q_50;
      }
    return(t);
  }
  t = bottomup_1_0(b_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm r_83 (ATerm), ATerm s_83 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL,m_52 = NULL,n_52 = NULL,p_4 = NULL;
  n_52 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_52 = ATgetArgument(t, 0);
      g_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_52);
  e_52 = t;
  t = f_52;
  t = r_83(t);
  h_52 = t;
  t = g_52;
  t = s_83(t);
  m_52 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, h_52, m_52);
  p_4 = t;
  t = SSLsetAnnotations(p_4, e_52);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm f_34 = NULL,h_34 = NULL,i_34 = NULL,d_5 = NULL;
  i_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_34);
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, h_34);
  d_5 = t;
  t = SSLsetAnnotations(d_5, f_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm c_30 = t;
  int d_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_30 = t;
      int f_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          LocalPopChoice(f_30);
        }
      else
        {
          t = e_30;
          {
            ATerm g_30 = t;
            int h_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm t_57 = NULL,u_57 = NULL,v_57 = NULL;
                t_57 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    u_57 = ATgetArgument(t, 0);
                    v_57 = ATgetArgument(t, 1);
                    {
                      ATerm b_30 = NULL,j_30 = NULL,o_30 = NULL,s_4 = NULL;
                      t = SSLgetAnnotations(t_57);
                      b_30 = t;
                      t = u_57;
                      t = inline_rules_0_0(t);
                      j_30 = t;
                      t = v_57;
                      t = inline_rules_0_0(t);
                      o_30 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, j_30, o_30);
                      s_4 = t;
                      t = SSLsetAnnotations(s_4, b_30);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        u_57 = ATgetArgument(t, 0);
                        v_57 = ATgetArgument(t, 1);
                        {
                          ATerm i_31 = NULL,s_31 = NULL,t_31 = NULL,w_4 = NULL;
                          t = SSLgetAnnotations(t_57);
                          i_31 = t;
                          t = u_57;
                          t = inline_rules_0_0(t);
                          s_31 = t;
                          t = v_57;
                          t = inline_rules_0_0(t);
                          t_31 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, s_31, t_31);
                          w_4 = t;
                          t = SSLsetAnnotations(w_4, i_31);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            u_57 = ATgetArgument(t, 0);
                            v_57 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm i_30 = t;
                          int k_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,b_5 = NULL,a_5 = NULL,z_4 = NULL,y_4 = NULL;
                              t = SSLgetAnnotations(t_57);
                              b_32 = t;
                              t = v_57;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  g_32 = ATgetArgument(t, 0);
                                  h_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(v_57);
                              f_32 = t;
                              t = g_32;
                              if(match_cons(t, sym_Match_1))
                                {
                                  s_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(g_32);
                              r_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, s_32);
                              y_4 = t;
                              t = SSLsetAnnotations(y_4, r_32);
                              t_32 = t;
                              t = h_32;
                              if(match_cons(t, sym_Build_1))
                                {
                                  o_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(h_32);
                              n_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_32);
                              z_4 = t;
                              t = SSLsetAnnotations(z_4, n_32);
                              p_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_32, p_32);
                              a_5 = t;
                              t = SSLsetAnnotations(a_5, f_32);
                              m_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, u_57, m_32);
                              b_5 = t;
                              t = SSLsetAnnotations(b_5, b_32);
                              LocalPopChoice(k_30);
                            }
                          else
                            {
                              t = i_30;
                              {
                                ATerm k_33 = NULL,p_33 = NULL,q_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,a_34 = NULL,b_34 = NULL,h_5 = NULL,e_5 = NULL,c_5 = NULL;
                                t = SSLgetAnnotations(t_57);
                                k_33 = t;
                                t = v_57;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    q_33 = ATgetArgument(t, 0);
                                    u_33 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(v_57);
                                p_33 = t;
                                t = q_33;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    a_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(q_33);
                                x_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, a_34);
                                c_5 = t;
                                t = SSLsetAnnotations(c_5, x_33);
                                b_34 = t;
                                t = u_33;
                                t = Seq_2_0(_id, c_6, t);
                                v_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, b_34, v_33);
                                e_5 = t;
                                t = SSLsetAnnotations(e_5, p_33);
                                w_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, u_57, w_33);
                                h_5 = t;
                                t = SSLsetAnnotations(h_5, k_33);
                              }
                            }
                        }
                      }
                  }
                LocalPopChoice(h_30);
              }
            else
              {
                t = g_30;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      LocalPopChoice(d_30);
    }
  else
    {
      t = c_30;
    }
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_p_28;
  return(t);
}
static ATerm f_6 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL,u_58 = NULL,v_58 = NULL;
  p_58 = t;
  t = term_o_28;
  u_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_l_30, p_58);
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, (ATerm) ATmakeAppl(sym_Defined_2, term_l_30, p_58));
  t = e_12(d_6, u_58, v_58, t);
  t = term_e_26;
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, p_58);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_26, (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, p_58));
  t = e_12(f_6, q_58, r_58, t);
  t = p_58;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  t = term_y_28;
  return(t);
}
static ATerm k_6 (ATerm t)
{
  t = term_d_29;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm b_59 = NULL,j_59 = NULL,l_59 = NULL,o_59 = NULL,s_59 = NULL;
  b_59 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, b_59);
  o_59 = t;
  t = term_p_30;
  s_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_28, b_59), term_p_30);
  t = e_12(j_6, o_59, s_59, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_c_29, b_59);
  j_59 = t;
  t = term_r_30;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_c_29, b_59), term_r_30);
  t = e_12(k_6, j_59, l_59, t);
  t = b_59;
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm t_60 = NULL,v_60 = NULL,z_60 = NULL;
  t_60 = t;
  t = term_u_20;
  v_60 = t;
  t = (ATerm) ATinsert(ATempty, term_s_30);
  z_60 = t;
  t = SSL_printnl(v_60, z_60);
  t = t_60;
  return(t);
}
static ATerm m_6 (ATerm t)
{
  ATerm e_31 = t;
  int f_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      LocalPopChoice(f_31);
    }
  else
    {
      t = e_31;
      {
        ATerm g_31 = t;
        int h_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            LocalPopChoice(h_31);
          }
        else
          {
            t = g_31;
            {
              ATerm d_61 = NULL,e_61 = NULL,f_61 = NULL,g_61 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  d_61 = ATgetArgument(t, 0);
                  f_61 = ATgetArgument(t, 1);
                  g_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = d_61;
              if(match_cons(t, sym_SVar_1))
                {
                  e_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_61;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = f_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_22;
            }
          }
      }
    }
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm j_31 = ATgetArgument(t, 0);
      if(match_cons(j_31, sym_SVar_1))
        {
          ATerm r_31 = ATgetArgument(j_31, 0);
          if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_31 = ATgetArgument(t, 1);
        if(((ATgetType(k_31) != AT_LIST) || !(ATisEmpty(k_31))))
          _fail(t);
      }
      {
        ATerm q_31 = ATgetArgument(t, 2);
        if(((ATgetType(q_31) != AT_LIST) || !(ATisEmpty(q_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm u_61 = NULL,v_61 = NULL,w_61 = NULL;
  u_61 = t;
  t = term_u_20;
  v_61 = t;
  t = (ATerm) ATinsert(ATempty, term_u_31);
  w_61 = t;
  t = SSL_printnl(v_61, w_61);
  t = u_61;
  return(t);
}
static ATerm w_9 (ATerm d_23, ATerm t)
{
  ATerm n_60 = NULL,o_60 = NULL;
  t = if_verbose2_1_0(l_6, t);
  t = new_0_0(t);
  o_60 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = d_23;
  t = inline_rules_0_0(t);
  n_60 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, o_60, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_v_25, n_60), (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_z_22))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(m_6, t);
  {
    ATerm v_31 = t;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        t = oncetd_1_0(n_6, t);
        l_61 = t;
        t = term_u_20;
        m_61 = t;
        t = (ATerm) ATinsert(ATempty, term_w_31);
        n_61 = t;
        t = SSL_printnl(m_61, n_61);
        t = l_61;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_31;
      }
  }
  t = desugar_0_0(t);
  t = if_verbose1_1_0(p_6, t);
  return(t);
}
ATerm alltd_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  static ATerm y_61 (ATerm t)
  {
    ATerm x_31 = t;
    int y_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_101(t);
        LocalPopChoice(y_31);
      }
    else
      {
        t = x_31;
        t = SRTS_all(y_61, t);
      }
    return(t);
  }
  t = y_61(t);
  return(t);
}
static ATerm q_6 (ATerm t)
{
  ATerm r_63 = NULL,s_63 = NULL,u_63 = NULL;
  r_63 = t;
  t = term_u_20;
  s_63 = t;
  t = (ATerm) ATinsert(ATempty, term_z_31);
  u_63 = t;
  t = SSL_printnl(s_63, u_63);
  t = r_63;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_a_32;
  return(t);
}
static ATerm x_6 (ATerm t)
{
  ATerm d_65 = NULL,f_65 = NULL,m_65 = NULL;
  d_65 = t;
  t = term_u_20;
  f_65 = t;
  t = (ATerm) ATinsert(ATempty, term_c_32);
  m_65 = t;
  t = SSL_printnl(f_65, m_65);
  t = d_65;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm p_63 = NULL,q_63 = NULL;
  q_63 = t;
  t = new_0_0(t);
  p_63 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_63), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = d_32;
        t = if_verbose2_1_0(q_6, t);
        _fail(t);
      }
  }
  {
    ATerm q_32 = t;
    int u_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_63 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL,r_64 = NULL,t_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL;
        v_63 = t;
        if(match_cons(t, sym_Seq_2))
          {
            d_64 = ATgetArgument(t, 0);
            r_64 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = d_64;
        if(match_cons(t, sym_All_1))
          {
            e_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_64;
        if(match_cons(t, sym_CallT_3))
          {
            f_64 = ATgetArgument(t, 0);
            h_64 = ATgetArgument(t, 1);
            q_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = f_64;
        if(match_cons(t, sym_SVar_1))
          {
            g_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = g_64;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = h_64;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_64 = ATgetFirst((ATermList) t);
            p_64 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_64;
        if(match_cons(t, sym_CallT_3))
          {
            j_64 = ATgetArgument(t, 0);
            n_64 = ATgetArgument(t, 1);
            o_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = j_64;
        if(match_cons(t, sym_SVar_1))
          {
            k_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_64;
        if(match_cons(t, sym_CallT_3))
          {
            t_64 = ATgetArgument(t, 0);
            y_64 = ATgetArgument(t, 1);
            z_64 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = t_64;
        if(match_cons(t, sym_SVar_1))
          {
            x_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = y_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_64;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = k_64;
        if((p_63 != t))
          {
            _fail(t);
          }
        t = x_64;
        if((k_64 != t))
          {
            _fail(t);
          }
        t = v_63;
        LocalPopChoice(u_32);
      }
    else
      {
        t = q_32;
        t = if_verbose1_1_0(r_6, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(x_6, t);
  t = q_63;
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm n_75 = NULL,o_75 = NULL,p_75 = NULL;
  n_75 = t;
  t = term_u_20;
  o_75 = t;
  t = (ATerm) ATinsert(ATempty, term_v_32);
  p_75 = t;
  t = SSL_printnl(o_75, p_75);
  t = n_75;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
static ATerm e_7 (ATerm t)
{
  t = term_w_32;
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm v_77 = NULL,w_77 = NULL,x_77 = NULL;
  v_77 = t;
  t = term_u_20;
  w_77 = t;
  t = (ATerm) ATinsert(ATempty, term_x_32);
  x_77 = t;
  t = SSL_printnl(w_77, x_77);
  t = v_77;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm g_75 = NULL,k_75 = NULL;
  k_75 = t;
  t = new_0_0(t);
  g_75 = t;
  {
    ATerm y_32 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_d_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_75), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(b_33);
      }
    else
      {
        t = y_32;
        t = if_verbose2_1_0(y_6, t);
        _fail(t);
      }
  }
  {
    ATerm e_33 = t;
    int f_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,w_75 = NULL,x_75 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL,r_77 = NULL;
        p_76 = t;
        if(match_cons(t, sym_CallT_3))
          {
            q_76 = ATgetArgument(t, 0);
            s_76 = ATgetArgument(t, 1);
            r_77 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = q_76;
        if(match_cons(t, sym_SVar_1))
          {
            r_76 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_76;
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
          _fail(t);
        t = s_76;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_76 = ATgetFirst((ATermList) t);
            q_77 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_76;
        if(match_cons(t, sym_CallT_3))
          {
            u_76 = ATgetArgument(t, 0);
            v_76 = ATgetArgument(t, 1);
            r_75 = ATgetArgument(t, 2);
            t = u_76;
            if(match_cons(t, sym_SVar_1))
              {
                q_75 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = q_75;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
              _fail(t);
            t = v_76;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_76 = ATgetFirst((ATermList) t);
                p_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_76;
            if(match_cons(t, sym_Seq_2))
              {
                x_76 = ATgetArgument(t, 0);
                e_77 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = x_76;
            if(match_cons(t, sym_CallT_3))
              {
                y_76 = ATgetArgument(t, 0);
                a_77 = ATgetArgument(t, 1);
                b_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = y_76;
            if(match_cons(t, sym_SVar_1))
              {
                z_76 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = b_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = e_77;
            if(match_cons(t, sym_CallT_3))
              {
                f_77 = ATgetArgument(t, 0);
                h_77 = ATgetArgument(t, 1);
                o_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = f_77;
            if(match_cons(t, sym_SVar_1))
              {
                g_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = g_77;
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
              _fail(t);
            t = h_77;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_77 = ATgetFirst((ATermList) t);
                n_77 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = i_77;
            if(match_cons(t, sym_CallT_3))
              {
                j_77 = ATgetArgument(t, 0);
                l_77 = ATgetArgument(t, 1);
                m_77 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = j_77;
            if(match_cons(t, sym_SVar_1))
              {
                k_77 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = l_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = m_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = n_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = o_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = p_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_75;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = q_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = r_77;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_76;
            if((g_75 != t))
              {
                _fail(t);
              }
            t = k_77;
            if((z_76 != t))
              {
                _fail(t);
              }
            t = p_76;
          }
        else
          {
            if(match_cons(t, sym_Rec_2))
              {
                u_76 = ATgetArgument(t, 0);
                v_76 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = v_76;
            if(match_cons(t, sym_CallT_3))
              {
                w_76 = ATgetArgument(t, 0);
                p_77 = ATgetArgument(t, 1);
                o_76 = ATgetArgument(t, 2);
                t = w_76;
                if(match_cons(t, sym_SVar_1))
                  {
                    x_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_76;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                  _fail(t);
                t = p_77;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    s_75 = ATgetFirst((ATermList) t);
                    n_76 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = s_75;
                if(match_cons(t, sym_Seq_2))
                  {
                    t_75 = ATgetArgument(t, 0);
                    c_76 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = t_75;
                if(match_cons(t, sym_CallT_3))
                  {
                    u_75 = ATgetArgument(t, 0);
                    x_75 = ATgetArgument(t, 1);
                    b_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = u_75;
                if(match_cons(t, sym_SVar_1))
                  {
                    w_75 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = x_75;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = c_76;
                if(match_cons(t, sym_CallT_3))
                  {
                    d_76 = ATgetArgument(t, 0);
                    f_76 = ATgetArgument(t, 1);
                    m_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = d_76;
                if(match_cons(t, sym_SVar_1))
                  {
                    e_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = e_76;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = f_76;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_76 = ATgetFirst((ATermList) t);
                    l_76 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = g_76;
                if(match_cons(t, sym_CallT_3))
                  {
                    h_76 = ATgetArgument(t, 0);
                    j_76 = ATgetArgument(t, 1);
                    k_76 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = h_76;
                if(match_cons(t, sym_SVar_1))
                  {
                    i_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = j_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_76;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = q_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = w_75;
                if((g_75 != t))
                  {
                    _fail(t);
                  }
                t = i_76;
                if((u_76 != t))
                  {
                    _fail(t);
                  }
                t = p_76;
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    w_76 = ATgetArgument(t, 0);
                    p_77 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_76;
                if(match_cons(t, sym_Seq_2))
                  {
                    x_76 = ATgetArgument(t, 0);
                    e_77 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_76;
                if(match_cons(t, sym_CallT_3))
                  {
                    y_76 = ATgetArgument(t, 0);
                    a_77 = ATgetArgument(t, 1);
                    b_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = y_76;
                if(match_cons(t, sym_SVar_1))
                  {
                    z_76 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = b_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    f_77 = ATgetArgument(t, 0);
                    h_77 = ATgetArgument(t, 1);
                    o_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = f_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    g_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = g_77;
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                  _fail(t);
                t = h_77;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    i_77 = ATgetFirst((ATermList) t);
                    n_77 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = i_77;
                if(match_cons(t, sym_CallT_3))
                  {
                    j_77 = ATgetArgument(t, 0);
                    l_77 = ATgetArgument(t, 1);
                    m_77 = ATgetArgument(t, 2);
                  }
                else
                  _fail(t);
                t = j_77;
                if(match_cons(t, sym_SVar_1))
                  {
                    k_77 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = l_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = n_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_77;
                if(!(match_cons(t, sym_Id_0)))
                  _fail(t);
                t = q_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = r_77;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_76;
                if((g_75 != t))
                  {
                    _fail(t);
                  }
                t = k_77;
                if((u_76 != t))
                  {
                    _fail(t);
                  }
                t = p_76;
              }
          }
        LocalPopChoice(f_33);
      }
    else
      {
        t = e_33;
        t = if_verbose1_1_0(b_7, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(h_7, t);
  t = k_75;
  return(t);
}
ATerm topdown_1_0 (ATerm w_99 (ATerm), ATerm t)
{
  static ATerm i_7 (ATerm t)
  {
    t = topdown_1_0(w_99, t);
    return(t);
  }
  t = w_99(t);
  t = SRTS_all(i_7, t);
  return(t);
}
static ATerm m_7 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm l_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      {
        ATerm z_77 = NULL,a_78 = NULL;
        z_77 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm n_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        a_78 = t;
        t = SSLgetAnnotations(z_77);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm o_33 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) o_33) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm s_33 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(s_33) != AT_LIST) || !(ATisEmpty(s_33))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = a_78;
      }
    }
  else
    {
      t = i_33;
      {
        ATerm y_33 = t;
        int c_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm e_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) e_34) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm k_34 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(c_34);
            _fail(t);
          }
        else
          {
            t = y_33;
          }
      }
    }
  return(t);
}
static ATerm y_9 (ATerm i_58, ATerm h_58, ATerm t)
{
  t = i_58;
  t = topdown_1_0(m_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, i_58);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm j_78 = NULL,k_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_78;
  if(match_cons(t, sym_Match_1))
    {
      n_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_78;
  if(match_cons(t, sym_Var_1))
    {
      o_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_78;
  if(match_cons(t, sym_Seq_2))
    {
      q_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
      t = q_78;
      if(match_cons(t, sym_Build_1))
        {
          r_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_78;
      if(match_cons(t, sym_Var_1))
        {
          j_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_78;
      if((o_78 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_78)), k_78);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          q_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_78;
      if(match_cons(t, sym_Var_1))
        {
          r_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_78;
      if((o_78 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_78));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_79 = ATgetArgument(t, 0);
      k_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_79;
  if(match_cons(t, sym_Build_1))
    {
      j_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_79;
  if(match_cons(t, sym_Seq_2))
    {
      l_79 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
      t = l_79;
      if(match_cons(t, sym_Match_1))
        {
          d_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_79;
      if((j_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_79), e_79);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          l_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_79;
      if((j_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, j_79);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm u_79 = NULL,x_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL,c_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_79 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_79;
  if(match_cons(t, sym_Match_1))
    {
      a_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_80;
  if(match_cons(t, sym_Seq_2))
    {
      c_80 = ATgetArgument(t, 0);
      x_79 = ATgetArgument(t, 1);
      t = c_80;
      if(match_cons(t, sym_Match_1))
        {
          u_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_79;
      if((a_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_80), x_79);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          c_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_80;
      if((a_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, a_80);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm q_80 = NULL,r_80 = NULL,s_80 = NULL,u_80 = NULL,w_80 = NULL,x_80 = NULL,a_81 = NULL,d_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_80 = ATgetArgument(t, 0);
      w_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_80;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_80;
  if(match_cons(t, sym_Seq_2))
    {
      x_80 = ATgetArgument(t, 0);
      a_81 = ATgetArgument(t, 1);
      t = x_80;
      if(match_cons(t, sym_PrimT_3))
        {
          q_80 = ATgetArgument(t, 0);
          r_80 = ATgetArgument(t, 1);
          s_80 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, q_80, r_80, s_80), a_81);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          x_80 = ATgetArgument(t, 0);
          a_81 = ATgetArgument(t, 1);
          d_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, x_80, a_81, d_81);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,f_82 = NULL,h_82 = NULL,i_82 = NULL;
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
      ATerm n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_82;
  if(match_cons(t, sym_Seq_2))
    {
      i_82 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
      t = i_82;
      if(match_cons(t, sym_Build_1))
        {
          c_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_82), d_82);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, i_82);
    }
  return(t);
}
static ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(((ATgetType(o_34) != AT_LIST) || !(ATisEmpty(o_34))))
        _fail(t);
      {
        ATerm u_34 = ATgetArgument(t, 1);
        if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_7 (ATerm t)
{
  ATerm v_83 = NULL,w_83 = NULL,y_83 = NULL,z_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(((ATgetType(v_34) == AT_LIST) && !(ATisEmpty(v_34))))
        {
          v_83 = ATgetFirst((ATermList) v_34);
          w_83 = (ATerm) ATgetNext((ATermList) v_34);
        }
      else
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            y_83 = ATgetFirst((ATermList) x_34);
            z_83 = (ATerm) ATgetNext((ATermList) x_34);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_83, y_83), (ATerm) ATmakeAppl(sym__2, w_83, z_83));
  return(t);
}
static ATerm r_7 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL;
  if(match_cons(t, sym__2))
    {
      a_84 = ATgetArgument(t, 0);
      b_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_84), a_84);
  return(t);
}
static ATerm s_7 (ATerm t)
{
  ATerm d_84 = NULL,e_84 = NULL;
  if(match_cons(t, sym__2))
    {
      d_84 = ATgetArgument(t, 0);
      e_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_84), (ATerm) ATmakeAppl(sym_Match_1, e_84));
  return(t);
}
static ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      if(((ATgetType(z_34) != AT_LIST) || !(ATisEmpty(z_34))))
        _fail(t);
      {
        ATerm f_35 = ATgetArgument(t, 1);
        if(((ATgetType(f_35) != AT_LIST) || !(ATisEmpty(f_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_7 (ATerm t)
{
  ATerm l_84 = NULL,o_84 = NULL,p_84 = NULL,q_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
        {
          l_84 = ATgetFirst((ATermList) g_35);
          o_84 = (ATerm) ATgetNext((ATermList) g_35);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
          {
            p_84 = ATgetFirst((ATermList) h_35);
            q_84 = (ATerm) ATgetNext((ATermList) h_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_84, p_84), (ATerm) ATmakeAppl(sym__2, o_84, q_84));
  return(t);
}
static ATerm x_7 (ATerm t)
{
  ATerm r_84 = NULL,s_84 = NULL;
  if(match_cons(t, sym__2))
    {
      r_84 = ATgetArgument(t, 0);
      s_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_84), r_84);
  return(t);
}
static ATerm y_7 (ATerm t)
{
  ATerm t_84 = NULL,w_84 = NULL;
  if(match_cons(t, sym__2))
    {
      t_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_84), (ATerm) ATmakeAppl(sym_Match_1, w_84));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,e_83 = NULL,f_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,l_83 = NULL,n_83 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_83 = ATgetArgument(t, 0);
      j_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_83;
  if(match_cons(t, sym_Build_1))
    {
      f_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_83;
  if(match_cons(t, sym_Op_2))
    {
      h_83 = ATgetArgument(t, 0);
      i_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_83;
  if(match_cons(t, sym_Seq_2))
    {
      k_83 = ATgetArgument(t, 0);
      b_83 = ATgetArgument(t, 1);
      {
        ATerm u_83 = NULL;
        t = k_83;
        if(match_cons(t, sym_Match_1))
          {
            l_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_83;
        if(match_cons(t, sym_Op_2))
          {
            z_82 = ATgetArgument(t, 0);
            a_83 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_82;
        if((h_83 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, i_83, a_83);
        t = genzip_4_0(o_7, p_7, r_7, s_7, t);
        u_83 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_83), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_83, i_83)), b_83));
      }
    }
  else
    {
      ATerm k_84 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          k_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_83;
      if(match_cons(t, sym_Op_2))
        {
          l_83 = ATgetArgument(t, 0);
          n_83 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_83;
      if((h_83 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, i_83, n_83);
      t = genzip_4_0(u_7, v_7, x_7, y_7, t);
      k_84 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, k_84), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_83, i_83)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm y_85 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,k_86 = NULL,l_86 = NULL,o_86 = NULL;
  f_86 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_86 = ATgetArgument(t, 0);
      k_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_86;
  if(match_cons(t, sym_Build_1))
    {
      h_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_86;
  if(match_cons(t, sym_Op_2))
    {
      i_86 = ATgetArgument(t, 0);
      {
        ATerm i_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_86;
  {
    ATerm j_35 = t;
    int l_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            l_86 = ATgetArgument(t, 0);
            {
              ATerm m_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(l_35);
        t = l_86;
        if(match_cons(t, sym_Match_1))
          {
            o_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_86;
        if(match_cons(t, sym_Op_2))
          {
            y_85 = ATgetArgument(t, 0);
            {
              ATerm n_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_86, y_85);
        {
          ATerm o_35 = t;
          if((PushChoice() == 0))
            {
              ATerm a_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  a_35 = ATgetArgument(t, 0);
                  if((a_35 != ATgetArgument(t, 1)))
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
              t = o_35;
            }
        }
        t = term_r_35;
      }
    else
      {
        t = j_35;
        if(match_cons(t, sym_Match_1))
          {
            l_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_86;
        if(match_cons(t, sym_Op_2))
          {
            o_86 = ATgetArgument(t, 0);
            {
              ATerm s_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_86, o_86);
        {
          ATerm t_35 = t;
          if((PushChoice() == 0))
            {
              ATerm y_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_35 = ATgetArgument(t, 0);
                  if((y_35 != ATgetArgument(t, 1)))
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
              t = t_35;
            }
        }
        t = term_r_35;
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_101 (ATerm), ATerm t)
{
  static ATerm s_86 (ATerm t)
  {
    ATerm z_35 = t;
    int a_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_101(t);
        LocalPopChoice(a_36);
      }
    else
      {
        t = z_35;
        t = SRTS_one(s_86, t);
      }
    return(t);
  }
  t = s_86(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL;
  r_87 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_87 = ATgetArgument(t, 0);
      z_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_87;
  if(match_cons(t, sym_Let_2))
    {
      a_88 = ATgetArgument(t, 0);
      c_88 = ATgetArgument(t, 1);
      {
        ATerm h_88 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, s_87, a_88);
        t = conc_0_0(t);
        h_88 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, h_88, c_88);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          a_88 = ATgetArgument(t, 0);
          c_88 = ATgetArgument(t, 1);
          d_88 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = s_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_87 = ATgetFirst((ATermList) t);
          y_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_87;
      if(match_cons(t, sym_SDefT_4))
        {
          u_87 = ATgetArgument(t, 0);
          v_87 = ATgetArgument(t, 1);
          w_87 = ATgetArgument(t, 2);
          x_87 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = v_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_88;
      if(match_cons(t, sym_SVar_1))
        {
          b_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_88;
      if((u_87 != t))
        {
          _fail(t);
        }
      t = x_87;
      {
        ATerm b_36 = t;
        if((PushChoice() == 0))
          {
            static ATerm a_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm c_36 = ATgetArgument(t, 0);
                  if(match_cons(c_36, sym_SVar_1))
                    {
                      if((u_87 != ATgetArgument(c_36, 0)))
                        {
                          _fail(ATgetArgument(c_36, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm d_36 = ATgetArgument(t, 1);
                    if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
                      _fail(t);
                  }
                  {
                    ATerm e_36 = ATgetArgument(t, 2);
                    if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(a_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_36;
          }
      }
      t = x_87;
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,x_88 = NULL,y_88 = NULL,a_89 = NULL,b_89 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      a_89 = ATgetArgument(t, 0);
      t = a_89;
      if(match_cons(t, sym_Seq_2))
        {
          y_88 = ATgetArgument(t, 0);
          t_88 = ATgetArgument(t, 1);
          t = y_88;
          if(match_cons(t, sym_Where_1))
            {
              s_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_88;
          if(match_cons(t, sym_Seq_2))
            {
              u_88 = ATgetArgument(t, 0);
              x_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_88;
          if(match_cons(t, sym_Build_1))
            {
              v_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, s_88, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_88), x_88)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              y_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, y_88);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          a_89 = ATgetArgument(t, 0);
          t = a_89;
          if(match_cons(t, sym_Test_1))
            {
              y_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, y_88);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              a_89 = ATgetArgument(t, 0);
              t = a_89;
              if(match_cons(t, sym_Not_1))
                {
                  y_88 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, y_88);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_89 = ATgetArgument(t, 0);
                  b_89 = ATgetArgument(t, 1);
                  t = b_89;
                  if((a_89 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      a_89 = ATgetArgument(t, 0);
                      b_89 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_89;
                  if((a_89 != t))
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
  ATerm u_89 = NULL,v_89 = NULL,z_89 = NULL,a_90 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      u_89 = ATgetArgument(t, 0);
      a_90 = ATgetArgument(t, 1);
      t = u_89;
      if(match_cons(t, sym_LChoice_2))
        {
          v_89 = ATgetArgument(t, 0);
          z_89 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, v_89, (ATerm) ATmakeAppl(sym_LChoice_2, z_89, a_90));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          u_89 = ATgetArgument(t, 0);
          a_90 = ATgetArgument(t, 1);
          t = u_89;
          if(match_cons(t, sym_Seq_2))
            {
              v_89 = ATgetArgument(t, 0);
              z_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, v_89, (ATerm) ATmakeAppl(sym_Seq_2, z_89, a_90));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              u_89 = ATgetArgument(t, 0);
              a_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_89;
          if(match_cons(t, sym_Choice_2))
            {
              v_89 = ATgetArgument(t, 0);
              z_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_89, (ATerm) ATmakeAppl(sym_Choice_2, z_89, a_90));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_90 = NULL,p_90 = NULL,q_90 = NULL,s_90 = NULL,t_90 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_90 = ATgetArgument(t, 0);
      t_90 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_90, t_90);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_90 = ATgetArgument(t, 0);
          t = s_90;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_90 = ATgetFirst((ATermList) t);
              p_90 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_90, (ATerm) ATmakeAppl(sym_LChoices_1, p_90));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_r_35;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_90 = ATgetArgument(t, 0);
              t = s_90;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_90 = ATgetFirst((ATermList) t);
                  p_90 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_90, (ATerm) ATmakeAppl(sym_Choices_1, p_90));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_r_35;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_90 = ATgetArgument(t, 0);
                  t = s_90;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_90 = ATgetFirst((ATermList) t);
                      p_90 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_90, (ATerm) ATmakeAppl(sym_Seqs_1, p_90));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_z_22;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      s_90 = ATgetArgument(t, 0);
                      t_90 = ATgetArgument(t, 1);
                      q_90 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, t_90, (ATerm) ATmakeAppl(sym_Op_2, term_l_21, (ATerm) ATinsert(ATinsert(ATempty, q_90), s_90)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          s_90 = ATgetArgument(t, 0);
                          t_90 = ATgetArgument(t, 1);
                          q_90 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_90)), s_90), (ATerm) ATmakeAppl(sym_Build_1, t_90)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              s_90 = ATgetArgument(t, 0);
                              t_90 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_90, (ATerm) ATmakeAppl(sym_Match_1, t_90));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  s_90 = ATgetArgument(t, 0);
                                  t_90 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_90), t_90);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      s_90 = ATgetArgument(t, 0);
                                      t_90 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_90), s_90);
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
static ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_92 = ATgetArgument(t, 0);
      t = x_92;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_r_35;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_92 = ATgetArgument(t, 0);
          t = x_92;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_z_22;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_92 = ATgetArgument(t, 0);
              y_92 = ATgetArgument(t, 1);
              t = x_92;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_r_35;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_92 = ATgetArgument(t, 0);
                  y_92 = ATgetArgument(t, 1);
                  t = y_92;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_r_35;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_92 = ATgetArgument(t, 0);
                      y_92 = ATgetArgument(t, 1);
                      t = y_92;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_r_35;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_92 = ATgetArgument(t, 0);
                          t = x_92;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_r_35;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_92 = ATgetArgument(t, 0);
                              t = x_92;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_r_35;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  x_92 = ATgetArgument(t, 0);
                                  y_92 = ATgetArgument(t, 1);
                                  t = y_92;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_r_35;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      x_92 = ATgetArgument(t, 0);
                                      y_92 = ATgetArgument(t, 1);
                                      t = y_92;
                                      t = fetch_1_0(b_8, t);
                                      t = term_r_35;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          x_92 = ATgetArgument(t, 0);
                                          y_92 = ATgetArgument(t, 1);
                                          t = y_92;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = x_92;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = y_92;
                                                }
                                              else
                                                {
                                                  t = x_92;
                                                }
                                            }
                                          else
                                            {
                                              t = x_92;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = y_92;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              x_92 = ATgetArgument(t, 0);
                                              y_92 = ATgetArgument(t, 1);
                                              t = y_92;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_92;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = y_92;
                                                    }
                                                  else
                                                    {
                                                      t = x_92;
                                                    }
                                                }
                                              else
                                                {
                                                  t = x_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = y_92;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  x_92 = ATgetArgument(t, 0);
                                                  t = x_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_r_35;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      x_92 = ATgetArgument(t, 0);
                                                      y_92 = ATgetArgument(t, 1);
                                                      z_92 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_92, y_92);
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
  ATerm s_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      u_94 = ATgetArgument(t, 0);
      t = u_94;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_z_22;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          u_94 = ATgetArgument(t, 0);
          t = u_94;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_r_35;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              u_94 = ATgetArgument(t, 0);
              s_94 = ATgetArgument(t, 1);
              t = s_94;
              if(match_cons(t, sym_Id_0))
                {
                  t = u_94;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = s_94;
                    }
                  else
                    {
                      t = u_94;
                    }
                }
              else
                {
                  t = u_94;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_94;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  u_94 = ATgetArgument(t, 0);
                  s_94 = ATgetArgument(t, 1);
                  t = u_94;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_z_22;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      u_94 = ATgetArgument(t, 0);
                      s_94 = ATgetArgument(t, 1);
                      t = s_94;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_z_22;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          u_94 = ATgetArgument(t, 0);
                          s_94 = ATgetArgument(t, 1);
                          t = s_94;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_z_22;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              u_94 = ATgetArgument(t, 0);
                              t = u_94;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_z_22;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  u_94 = ATgetArgument(t, 0);
                                  t = u_94;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_z_22;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      u_94 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = u_94;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_z_22;
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
  ATerm f_36 = t;
  int g_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      LocalPopChoice(g_36);
    }
  else
    {
      t = f_36;
      {
        ATerm h_36 = t;
        int i_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            LocalPopChoice(i_36);
          }
        else
          {
            t = h_36;
            {
              ATerm k_36 = t;
              int l_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(l_36);
                }
              else
                {
                  t = k_36;
                  {
                    ATerm m_36 = t;
                    int n_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        LocalPopChoice(n_36);
                      }
                    else
                      {
                        t = m_36;
                        {
                          ATerm o_36 = t;
                          int p_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              LocalPopChoice(p_36);
                            }
                          else
                            {
                              t = o_36;
                              {
                                ATerm q_36 = t;
                                int r_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_95 = NULL,v_95 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        s_95 = ATgetArgument(t, 0);
                                        v_95 = ATgetArgument(t, 1);
                                        t = s_95;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_95;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            s_95 = ATgetArgument(t, 0);
                                            v_95 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = s_95;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_95;
                                      }
                                    LocalPopChoice(r_36);
                                  }
                                else
                                  {
                                    t = q_36;
                                    {
                                      ATerm s_36 = t;
                                      int t_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          LocalPopChoice(t_36);
                                        }
                                      else
                                        {
                                          t = s_36;
                                          {
                                            ATerm u_36 = t;
                                            int w_36 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                LocalPopChoice(w_36);
                                              }
                                            else
                                              {
                                                t = u_36;
                                                {
                                                  ATerm x_36 = t;
                                                  int y_36 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      LocalPopChoice(y_36);
                                                    }
                                                  else
                                                    {
                                                      t = x_36;
                                                      {
                                                        ATerm c_37 = t;
                                                        int d_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            LocalPopChoice(d_37);
                                                          }
                                                        else
                                                          {
                                                            t = c_37;
                                                            {
                                                              ATerm e_37 = t;
                                                              int f_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  LocalPopChoice(f_37);
                                                                }
                                                              else
                                                                {
                                                                  t = e_37;
                                                                  {
                                                                    ATerm g_37 = t;
                                                                    int h_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        LocalPopChoice(h_37);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = g_37;
                                                                        {
                                                                          ATerm i_37 = t;
                                                                          int k_37 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              LocalPopChoice(k_37);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = i_37;
                                                                              {
                                                                                ATerm l_37 = t;
                                                                                int m_37 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    LocalPopChoice(m_37);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_37;
                                                                                    {
                                                                                      ATerm y_95 = NULL,a_96 = NULL,b_96 = NULL,c_96 = NULL;
                                                                                      a_96 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          b_96 = ATgetArgument(t, 0);
                                                                                          c_96 = ATgetArgument(t, 1);
                                                                                          t = b_96;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              y_95 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = a_96;
                                                                                          t = y_9(y_95, c_96, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              b_96 = ATgetArgument(t, 0);
                                                                                              c_96 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_96;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = c_96;
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
ATerm repeat_2_0 (ATerm a_107 (ATerm), ATerm b_107 (ATerm), ATerm t)
{
  static ATerm i_96 (ATerm t)
  {
    ATerm p_37 = t;
    int q_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_107(t);
        t = i_96(t);
        LocalPopChoice(q_37);
      }
    else
      {
        t = p_37;
        t = b_107(t);
      }
    return(t);
  }
  t = i_96(t);
  return(t);
}
ATerm downup_1_0 (ATerm y_99 (ATerm), ATerm t)
{
  t = y_99(t);
  {
    static ATerm f_8 (ATerm t)
    {
      t = downup_1_0(y_99, t);
      return(t);
    }
    t = SRTS_all(f_8, t);
  }
  t = y_99(t);
  return(t);
}
ATerm genzip_4_0 (ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm), ATerm i_112 (ATerm), ATerm t)
{
  static ATerm q_96 (ATerm t)
  {
    ATerm t_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_112(t);
        LocalPopChoice(w_37);
      }
    else
      {
        t = t_37;
        {
          ATerm j_96 = NULL,k_96 = NULL,m_96 = NULL,n_96 = NULL,o_96 = NULL,p_96 = NULL,o_6 = NULL;
          t = g_112(t);
          p_96 = t;
          if(match_cons(t, sym__2))
            {
              k_96 = ATgetArgument(t, 0);
              m_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_96);
          j_96 = t;
          t = k_96;
          t = i_112(t);
          n_96 = t;
          t = m_96;
          t = q_96(t);
          o_96 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_96, o_96);
          o_6 = t;
          t = SSLsetAnnotations(o_6, j_96);
          t = h_112(t);
        }
      }
    return(t);
  }
  t = q_96(t);
  return(t);
}
static ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      if(((ATgetType(y_37) != AT_LIST) || !(ATisEmpty(y_37))))
        _fail(t);
      {
        ATerm b_38 = ATgetArgument(t, 1);
        if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_8 (ATerm t)
{
  ATerm l_97 = NULL,m_97 = NULL,p_97 = NULL,q_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_38 = ATgetArgument(t, 0);
      if(((ATgetType(f_38) == AT_LIST) && !(ATisEmpty(f_38))))
        {
          l_97 = ATgetFirst((ATermList) f_38);
          m_97 = (ATerm) ATgetNext((ATermList) f_38);
        }
      else
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) == AT_LIST) && !(ATisEmpty(j_38))))
          {
            p_97 = ATgetFirst((ATermList) j_38);
            q_97 = (ATerm) ATgetNext((ATermList) j_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_97, p_97), (ATerm) ATmakeAppl(sym__2, m_97, q_97));
  return(t);
}
static ATerm l_8 (ATerm t)
{
  ATerm r_97 = NULL,s_97 = NULL;
  if(match_cons(t, sym__2))
    {
      r_97 = ATgetArgument(t, 0);
      s_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_97), r_97);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm y_96 = NULL,z_96 = NULL,a_97 = NULL,c_97 = NULL;
  y_96 = t;
  {
    ATerm l_38 = t;
    int p_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_38 = ATgetArgument(t, 0);
            ATerm r_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(p_38);
        t = y_96;
      }
    else
      {
        t = l_38;
        {
          ATerm k_97 = NULL;
          if(match_cons(t, sym__3))
            {
              z_96 = ATgetArgument(t, 0);
              a_97 = ATgetArgument(t, 1);
              c_97 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, z_96, a_97);
          t = genzip_4_0(i_8, j_8, l_8, _id, t);
          k_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_97, c_97);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm z_126 (ATerm), ATerm a_127 (ATerm), ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL;
  static ATerm m_8 (ATerm t)
  {
    ATerm j_37 = NULL;
    t = z_126(t);
    j_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_37, not_null(v_97));
    t = lookup_0_0(t);
    t = a_127(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((v_97 != NULL) && (v_97 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_97 = ATgetArgument(t, 0);
      u_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_97;
  t = alltd_1_0(m_8, t);
  return(t);
}
static ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_38 = ATgetArgument(t, 0);
      if(((ATgetType(s_38) != AT_LIST) || !(ATisEmpty(s_38))))
        _fail(t);
      {
        ATerm t_38 = ATgetArgument(t, 1);
        if(((ATgetType(t_38) != AT_LIST) || !(ATisEmpty(t_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_8 (ATerm t)
{
  ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL,g_38 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_38 = ATgetArgument(t, 0);
      if(((ATgetType(u_38) == AT_LIST) && !(ATisEmpty(u_38))))
        {
          c_38 = ATgetFirst((ATermList) u_38);
          d_38 = (ATerm) ATgetNext((ATermList) u_38);
        }
      else
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(((ATgetType(w_38) == AT_LIST) && !(ATisEmpty(w_38))))
          {
            e_38 = ATgetFirst((ATermList) w_38);
            g_38 = (ATerm) ATgetNext((ATermList) w_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_38, e_38), (ATerm) ATmakeAppl(sym__2, d_38, g_38));
  return(t);
}
static ATerm r_8 (ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL;
  if(match_cons(t, sym__2))
    {
      h_38 = ATgetArgument(t, 0);
      i_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_38), h_38);
  return(t);
}
static ATerm s_8 (ATerm t)
{
  ATerm k_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL,v_38 = NULL;
  if(match_cons(t, sym__2))
    {
      k_38 = ATgetArgument(t, 0);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_38;
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_38 = ATgetArgument(t, 0);
            m_38 = ATgetArgument(t, 1);
            n_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_38);
        t = (ATerm) ATmakeAppl(sym_SDef_3, v_38, m_38, n_38);
      }
    else
      {
        t = x_38;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm a_39 = ATgetArgument(t, 0);
            m_38 = ATgetArgument(t, 1);
            n_38 = ATgetArgument(t, 2);
            o_38 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_38, m_38, n_38, o_38);
      }
  }
  return(t);
}
static ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_39 = ATgetArgument(t, 0);
      if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
        _fail(t);
      {
        ATerm c_39 = ATgetArgument(t, 1);
        if(((ATgetType(c_39) != AT_LIST) || !(ATisEmpty(c_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_8 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,z_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_39 = ATgetArgument(t, 0);
      if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
        {
          v_40 = ATgetFirst((ATermList) d_39);
          w_40 = (ATerm) ATgetNext((ATermList) d_39);
        }
      else
        _fail(t);
      {
        ATerm e_39 = ATgetArgument(t, 1);
        if(((ATgetType(e_39) == AT_LIST) && !(ATisEmpty(e_39))))
          {
            x_40 = ATgetFirst((ATermList) e_39);
            z_40 = (ATerm) ATgetNext((ATermList) e_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_40, x_40), (ATerm) ATmakeAppl(sym__2, w_40, z_40));
  return(t);
}
static ATerm e_10 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL;
  if(match_cons(t, sym__2))
    {
      b_41 = ATgetArgument(t, 0);
      c_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_41), b_41);
  return(t);
}
static ATerm f_10 (ATerm t)
{
  ATerm m_41 = NULL,c_42 = NULL,d_42 = NULL;
  if(match_cons(t, sym__2))
    {
      m_41 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_41;
  {
    ATerm f_39 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_42);
      }
    else
      {
        t = f_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_39 = ATgetArgument(t, 0);
            c_42 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, d_42, c_42);
      }
  }
  return(t);
}
static ATerm i_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      if(((ATgetType(l_39) != AT_LIST) || !(ATisEmpty(l_39))))
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(((ATgetType(m_39) != AT_LIST) || !(ATisEmpty(m_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm j_10 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
        {
          f_43 = ATgetFirst((ATermList) n_39);
          g_43 = (ATerm) ATgetNext((ATermList) n_39);
        }
      else
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(((ATgetType(o_39) == AT_LIST) && !(ATisEmpty(o_39))))
          {
            h_43 = ATgetFirst((ATermList) o_39);
            i_43 = (ATerm) ATgetNext((ATermList) o_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_43, h_43), (ATerm) ATmakeAppl(sym__2, g_43, i_43));
  return(t);
}
static ATerm l_10 (ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL;
  if(match_cons(t, sym__2))
    {
      j_43 = ATgetArgument(t, 0);
      k_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_43), j_43);
  return(t);
}
static ATerm m_10 (ATerm t)
{
  ATerm m_43 = NULL,o_43 = NULL,p_43 = NULL;
  if(match_cons(t, sym__2))
    {
      m_43 = ATgetArgument(t, 0);
      p_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_43;
  {
    ATerm p_39 = t;
    int q_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_43);
      }
    else
      {
        t = p_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_39 = ATgetArgument(t, 0);
            o_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_43, o_43);
      }
  }
  return(t);
}
static ATerm n_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_39 = ATgetArgument(t, 0);
      if(((ATgetType(t_39) != AT_LIST) || !(ATisEmpty(t_39))))
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) != AT_LIST) || !(ATisEmpty(u_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_10 (ATerm t)
{
  ATerm x_44 = NULL,z_44 = NULL,a_45 = NULL,d_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          x_44 = ATgetFirst((ATermList) v_39);
          z_44 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      {
        ATerm w_39 = ATgetArgument(t, 1);
        if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
          {
            a_45 = ATgetFirst((ATermList) w_39);
            d_45 = (ATerm) ATgetNext((ATermList) w_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_44, a_45), (ATerm) ATmakeAppl(sym__2, z_44, d_45));
  return(t);
}
static ATerm q_10 (ATerm t)
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
static ATerm x_10 (ATerm t)
{
  ATerm p_45 = NULL,r_45 = NULL,v_45 = NULL;
  if(match_cons(t, sym__2))
    {
      p_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_45;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_45);
      }
    else
      {
        t = x_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            r_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, v_45, r_45);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm p_131 (ATerm), ATerm t)
{
  ATerm i_105 = NULL,j_105 = NULL,k_105 = NULL,l_105 = NULL,m_105 = NULL;
  k_105 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_105 = ATgetArgument(t, 0);
      m_105 = ATgetArgument(t, 1);
      {
        ATerm u_37 = NULL,z_37 = NULL,a_38 = NULL,t_12 = NULL;
        t = SSLgetAnnotations(k_105);
        u_37 = t;
        t = l_105;
        t = p_131(t);
        a_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_105, a_38);
        t = genzip_4_0(n_8, q_8, r_8, s_8, t);
        z_37 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, z_37, m_105);
        t_12 = t;
        t = SSLsetAnnotations(t_12, u_37);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_105 = ATgetArgument(t, 0);
          m_105 = ATgetArgument(t, 1);
          i_105 = ATgetArgument(t, 2);
          {
            ATerm g_40 = NULL,s_40 = NULL,t_40 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(k_105);
            g_40 = t;
            t = m_105;
            t = p_131(t);
            t_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_105, t_40);
            t = genzip_4_0(u_8, v_8, e_10, f_10, t);
            s_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, l_105, s_40, i_105);
            v_12 = t;
            t = SSLsetAnnotations(v_12, g_40);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_105 = ATgetArgument(t, 0);
              m_105 = ATgetArgument(t, 1);
              i_105 = ATgetArgument(t, 2);
              j_105 = ATgetArgument(t, 3);
              {
                ATerm v_42 = NULL,c_43 = NULL,d_43 = NULL,w_12 = NULL;
                t = SSLgetAnnotations(k_105);
                v_42 = t;
                t = m_105;
                t = p_131(t);
                d_43 = t;
                t = (ATerm) ATmakeAppl(sym__2, m_105, d_43);
                t = genzip_4_0(i_10, j_10, l_10, m_10, t);
                c_43 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, l_105, c_43, i_105, j_105);
                w_12 = t;
                t = SSLsetAnnotations(w_12, v_42);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  l_105 = ATgetArgument(t, 0);
                  m_105 = ATgetArgument(t, 1);
                  i_105 = ATgetArgument(t, 2);
                  j_105 = ATgetArgument(t, 3);
                  {
                    ATerm j_44 = NULL,q_44 = NULL,t_44 = NULL,x_12 = NULL;
                    t = SSLgetAnnotations(k_105);
                    j_44 = t;
                    t = m_105;
                    t = p_131(t);
                    t_44 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_105, t_44);
                    t = genzip_4_0(n_10, p_10, q_10, x_10, t);
                    q_44 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, l_105, q_44, i_105, j_105);
                    x_12 = t;
                    t = SSLsetAnnotations(x_12, j_44);
                  }
                }
              else
                {
                  ATerm m_46 = NULL,s_46 = NULL,a_13 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      l_105 = ATgetArgument(t, 0);
                      m_105 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(k_105);
                  m_46 = t;
                  t = l_105;
                  t = p_131(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_46 = ATgetFirst((ATermList) t);
                      {
                        ATerm b_40 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, s_46, m_105);
                  a_13 = t;
                  t = SSLsetAnnotations(a_13, m_46);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm q_131 (ATerm), ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL,q_109 = NULL,r_109 = NULL,s_109 = NULL;
  q_109 = t;
  if(match_cons(t, sym_Let_2))
    {
      r_109 = ATgetArgument(t, 0);
      s_109 = ATgetArgument(t, 1);
      {
        ATerm n_47 = NULL,q_47 = NULL,r_47 = NULL,h_13 = NULL;
        t = SSLgetAnnotations(q_109);
        n_47 = t;
        t = r_109;
        t = q_131(t);
        q_47 = t;
        t = s_109;
        t = q_131(t);
        r_47 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, q_47, r_47);
        h_13 = t;
        t = SSLsetAnnotations(h_13, n_47);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          r_109 = ATgetArgument(t, 0);
          s_109 = ATgetArgument(t, 1);
          o_109 = ATgetArgument(t, 2);
          {
            ATerm n_48 = NULL,t_48 = NULL,w_48 = NULL,x_48 = NULL,k_13 = NULL;
            t = SSLgetAnnotations(q_109);
            n_48 = t;
            t = r_109;
            t = s_131(t);
            t_48 = t;
            t = s_109;
            t = s_131(t);
            w_48 = t;
            t = o_109;
            t = q_131(t);
            x_48 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, t_48, w_48, x_48);
            k_13 = t;
            t = SSLsetAnnotations(k_13, n_48);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              r_109 = ATgetArgument(t, 0);
              s_109 = ATgetArgument(t, 1);
              o_109 = ATgetArgument(t, 2);
              p_109 = ATgetArgument(t, 3);
              {
                ATerm m_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL,d_50 = NULL,m_13 = NULL;
                t = SSLgetAnnotations(q_109);
                m_49 = t;
                t = r_109;
                t = s_131(t);
                a_50 = t;
                t = s_109;
                t = s_131(t);
                b_50 = t;
                t = o_109;
                t = s_131(t);
                c_50 = t;
                t = p_109;
                t = q_131(t);
                d_50 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_50, b_50, c_50, d_50);
                m_13 = t;
                t = SSLsetAnnotations(m_13, m_49);
              }
            }
          else
            {
              ATerm t_50 = NULL,w_50 = NULL,x_50 = NULL,p_13 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  r_109 = ATgetArgument(t, 0);
                  s_109 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(q_109);
              t_50 = t;
              t = r_109;
              t = s_131(t);
              w_50 = t;
              t = s_109;
              t = q_131(t);
              x_50 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, w_50, x_50);
              p_13 = t;
              t = SSLsetAnnotations(p_13, t_50);
            }
        }
    }
  return(t);
}
static ATerm y_10 (ATerm t)
{
  ATerm z_109 = NULL;
  ATerm c_40 = t;
  int d_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_109 = ATgetArgument(t, 0);
          {
            ATerm e_40 = ATgetArgument(t, 1);
          }
          {
            ATerm f_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_40);
      t = z_109;
    }
  else
    {
      t = c_40;
      if(match_cons(t, sym_SDefT_4))
        {
          z_109 = ATgetArgument(t, 0);
          {
            ATerm h_40 = ATgetArgument(t, 1);
          }
          {
            ATerm i_40 = ATgetArgument(t, 2);
          }
          {
            ATerm j_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = z_109;
    }
  return(t);
}
static ATerm j_11 (ATerm a_76, ATerm z_75, ATerm t)
{
  t = a_76;
  t = map_1_0(y_10, t);
  return(t);
}
ATerm SVar_1_0 (ATerm c_83 (ATerm), ATerm t)
{
  ATerm k_110 = NULL,p_110 = NULL,q_110 = NULL,v_110 = NULL,b_14 = NULL;
  v_110 = t;
  if(match_cons(t, sym_SVar_1))
    {
      p_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_110);
  k_110 = t;
  t = p_110;
  t = c_83(t);
  q_110 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, q_110);
  b_14 = t;
  t = SSLsetAnnotations(b_14, k_110);
  return(t);
}
static ATerm u_11 (ATerm b_128 (ATerm), ATerm c_128 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm h_67, ATerm g_67, ATerm f_67, ATerm t)
{
  static ATerm b_11 (ATerm t)
  {
    ATerm x_110 = NULL;
    x_110 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_110, f_67);
    t = b_128(t);
    return(t);
  }
  static ATerm m_11 (ATerm t)
  {
    ATerm a_111 = NULL;
    a_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, a_111, g_67);
    t = b_128(t);
    return(t);
  }
  t = h_67;
  t = c_128(b_11, m_11, _id, t);
  return(t);
}
static ATerm c_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_40 = ATgetArgument(t, 0);
      if(((ATgetType(k_40) != AT_LIST) || !(ATisEmpty(k_40))))
        _fail(t);
      {
        ATerm l_40 = ATgetArgument(t, 1);
        if(((ATgetType(l_40) != AT_LIST) || !(ATisEmpty(l_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_13 (ATerm t)
{
  ATerm k_111 = NULL,l_111 = NULL,m_111 = NULL,n_111 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_40 = ATgetArgument(t, 0);
      if(((ATgetType(m_40) == AT_LIST) && !(ATisEmpty(m_40))))
        {
          k_111 = ATgetFirst((ATermList) m_40);
          l_111 = (ATerm) ATgetNext((ATermList) m_40);
        }
      else
        _fail(t);
      {
        ATerm n_40 = ATgetArgument(t, 1);
        if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
          {
            m_111 = ATgetFirst((ATermList) n_40);
            n_111 = (ATerm) ATgetNext((ATermList) n_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_111, m_111), (ATerm) ATmakeAppl(sym__2, l_111, n_111));
  return(t);
}
static ATerm e_13 (ATerm t)
{
  ATerm o_111 = NULL,p_111 = NULL;
  if(match_cons(t, sym__2))
    {
      o_111 = ATgetArgument(t, 0);
      p_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_111), o_111);
  return(t);
}
static ATerm v_11 (ATerm v_127 (ATerm), ATerm w_127 (ATerm (ATerm), ATerm), ATerm z_66, ATerm c_67, ATerm t)
{
  ATerm e_111 = NULL,f_111 = NULL,g_111 = NULL,h_111 = NULL,j_111 = NULL;
  t = z_66;
  t = v_127(t);
  e_111 = t;
  t = map_1_0(new_0_0, t);
  f_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_111, f_111);
  t = genzip_4_0(c_13, d_13, e_13, _id, t);
  j_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_111, c_67);
  t = conc_0_0(t);
  g_111 = t;
  t = z_66;
  {
    static ATerm f_13 (ATerm t)
    {
      t = f_111;
      return(t);
    }
    t = w_127(f_13, t);
  }
  h_111 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_111, c_67, g_111);
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_111 = NULL,v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL;
  w_111 = t;
  if(match_cons(t, sym__2))
    {
      x_111 = ATgetArgument(t, 0);
      y_111 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_111;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_111 = ATgetFirst((ATermList) t);
      a_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_111;
  if(match_cons(t, sym__2))
    {
      u_111 = ATgetArgument(t, 0);
      v_111 = ATgetArgument(t, 1);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_111;
            if((x_111 != t))
              {
                _fail(t);
              }
            t = v_111;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = (ATerm) ATmakeAppl(sym__2, x_111, a_112);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_111, a_112);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm l_120 (ATerm), ATerm t)
{
  static ATerm j_113 (ATerm t)
  {
    ATerm q_40 = t;
    int r_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_120(t);
        LocalPopChoice(r_40);
      }
    else
      {
        t = q_40;
        {
          ATerm e_113 = NULL,f_113 = NULL,g_113 = NULL;
          static ATerm g_13 (ATerm t)
          {
            ATerm v_51 = NULL;
            v_51 = t;
            t = (ATerm) ATmakeAppl(sym__2, v_51, not_null(g_113));
            t = j_113(t);
            return(t);
          }
          e_113 = t;
          if(match_cons(t, sym__2))
            {
              f_113 = ATgetArgument(t, 0);
              if(((g_113 != NULL) && (g_113 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_113;
          t = SRTS_all(g_13, t);
        }
      }
    return(t);
  }
  t = j_113(t);
  return(t);
}
ATerm rename_4_0 (ATerm q_127 (ATerm (ATerm), ATerm), ATerm r_127 (ATerm), ATerm s_127 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t_127 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_113 = NULL;
  static ATerm e_114 (ATerm t)
  {
    static ATerm r_13 (ATerm t)
    {
      ATerm w_113 = NULL,x_113 = NULL,y_113 = NULL;
      w_113 = t;
      if(match_cons(t, sym__2))
        {
          x_113 = ATgetArgument(t, 0);
          y_113 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm u_40 = t;
        int d_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm s_13 (ATerm t)
            {
              ATerm d_114 = NULL;
              d_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, d_114, y_113);
              t = lookup_0_0(t);
              return(t);
            }
            t = x_113;
            t = q_127(s_13, t);
            LocalPopChoice(d_41);
          }
        else
          {
            t = u_40;
            {
              ATerm l_52 = NULL,o_52 = NULL,p_52 = NULL;
              t = w_113;
              t = v_11(r_127, t_127, x_113, y_113, t);
              if(match_cons(t, sym__3))
                {
                  l_52 = ATgetArgument(t, 0);
                  o_52 = ATgetArgument(t, 1);
                  p_52 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_11(e_114, s_127, l_52, o_52, p_52, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(r_13, t);
    return(t);
  }
  n_113 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_113, (ATerm) ATempty);
  t = e_114(t);
  return(t);
}
static ATerm t_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_41 = ATgetArgument(t, 0);
      if(((ATgetType(e_41) != AT_LIST) || !(ATisEmpty(e_41))))
        _fail(t);
      {
        ATerm f_41 = ATgetArgument(t, 1);
        if(((ATgetType(f_41) != AT_LIST) || !(ATisEmpty(f_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_13 (ATerm t)
{
  ATerm y_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_41 = ATgetArgument(t, 0);
      if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
        {
          y_54 = ATgetFirst((ATermList) g_41);
          a_55 = (ATerm) ATgetNext((ATermList) g_41);
        }
      else
        _fail(t);
      {
        ATerm k_41 = ATgetArgument(t, 1);
        if(((ATgetType(k_41) == AT_LIST) && !(ATisEmpty(k_41))))
          {
            b_55 = ATgetFirst((ATermList) k_41);
            c_55 = (ATerm) ATgetNext((ATermList) k_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_54, b_55), (ATerm) ATmakeAppl(sym__2, a_55, c_55));
  return(t);
}
static ATerm v_13 (ATerm t)
{
  ATerm d_55 = NULL,e_55 = NULL;
  if(match_cons(t, sym__2))
    {
      d_55 = ATgetArgument(t, 0);
      e_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_55), d_55);
  return(t);
}
static ATerm w_13 (ATerm t)
{
  ATerm j_55 = NULL,m_55 = NULL,n_55 = NULL;
  if(match_cons(t, sym__2))
    {
      j_55 = ATgetArgument(t, 0);
      n_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_55;
  {
    ATerm l_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_55);
      }
    else
      {
        t = l_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm b_42 = ATgetArgument(t, 0);
            m_55 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_55, m_55);
      }
  }
  return(t);
}
static ATerm x_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_42 = ATgetArgument(t, 0);
      if(((ATgetType(e_42) != AT_LIST) || !(ATisEmpty(e_42))))
        _fail(t);
      {
        ATerm f_42 = ATgetArgument(t, 1);
        if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_13 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_42 = ATgetArgument(t, 0);
      if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
        {
          u_56 = ATgetFirst((ATermList) i_42);
          v_56 = (ATerm) ATgetNext((ATermList) i_42);
        }
      else
        _fail(t);
      {
        ATerm k_42 = ATgetArgument(t, 1);
        if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
          {
            w_56 = ATgetFirst((ATermList) k_42);
            x_56 = (ATerm) ATgetNext((ATermList) k_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_56, w_56), (ATerm) ATmakeAppl(sym__2, v_56, x_56));
  return(t);
}
static ATerm z_13 (ATerm t)
{
  ATerm z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      z_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_57), z_56);
  return(t);
}
static ATerm a_14 (ATerm t)
{
  ATerm c_57 = NULL,e_57 = NULL,f_57 = NULL;
  if(match_cons(t, sym__2))
    {
      c_57 = ATgetArgument(t, 0);
      f_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_57;
  {
    ATerm l_42 = t;
    int m_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_57);
      }
    else
      {
        t = l_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_42 = ATgetArgument(t, 0);
            e_57 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, f_57, e_57);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm l_131 (ATerm), ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL,r_117 = NULL;
  n_117 = t;
  if(match_cons(t, sym_Scope_2))
    {
      o_117 = ATgetArgument(t, 0);
      p_117 = ATgetArgument(t, 1);
      {
        ATerm d_53 = NULL,k_53 = NULL,g_14 = NULL;
        t = SSLgetAnnotations(n_117);
        d_53 = t;
        t = o_117;
        t = l_131(t);
        k_53 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_53, p_117);
        g_14 = t;
        t = SSLsetAnnotations(g_14, d_53);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          o_117 = ATgetArgument(t, 0);
          p_117 = ATgetArgument(t, 1);
          q_117 = ATgetArgument(t, 2);
          r_117 = ATgetArgument(t, 3);
          {
            ATerm j_54 = NULL,u_54 = NULL,v_54 = NULL,n_14 = NULL;
            t = SSLgetAnnotations(n_117);
            j_54 = t;
            t = q_117;
            t = l_131(t);
            v_54 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_117, v_54);
            t = genzip_4_0(t_13, u_13, v_13, w_13, t);
            u_54 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_117, p_117, u_54, r_117);
            n_14 = t;
            t = SSLsetAnnotations(n_14, j_54);
          }
        }
      else
        {
          ATerm l_56 = NULL,r_56 = NULL,s_56 = NULL,o_14 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              o_117 = ATgetArgument(t, 0);
              p_117 = ATgetArgument(t, 1);
              q_117 = ATgetArgument(t, 2);
              r_117 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_117);
          l_56 = t;
          t = q_117;
          t = l_131(t);
          s_56 = t;
          t = (ATerm) ATmakeAppl(sym__2, q_117, s_56);
          t = genzip_4_0(x_13, y_13, z_13, a_14, t);
          r_56 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, o_117, p_117, r_56, r_117);
          o_14 = t;
          t = SSLsetAnnotations(o_14, l_56);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm t_119 = NULL,u_119 = NULL,v_119 = NULL,w_119 = NULL,x_119 = NULL;
  w_119 = t;
  if(match_cons(t, sym_Scope_2))
    {
      x_119 = ATgetArgument(t, 0);
      t_119 = ATgetArgument(t, 1);
      {
        ATerm c_58 = NULL,k_58 = NULL,m_58 = NULL,w_14 = NULL;
        t = SSLgetAnnotations(w_119);
        c_58 = t;
        t = x_119;
        t = o_131(t);
        k_58 = t;
        t = t_119;
        t = m_131(t);
        m_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_58, m_58);
        w_14 = t;
        t = SSLsetAnnotations(w_14, c_58);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          x_119 = ATgetArgument(t, 0);
          t_119 = ATgetArgument(t, 1);
          u_119 = ATgetArgument(t, 2);
          v_119 = ATgetArgument(t, 3);
          {
            ATerm d_59 = NULL,i_59 = NULL,k_59 = NULL,m_59 = NULL,n_59 = NULL,x_14 = NULL;
            t = SSLgetAnnotations(w_119);
            d_59 = t;
            t = x_119;
            t = o_131(t);
            i_59 = t;
            t = t_119;
            t = o_131(t);
            k_59 = t;
            t = u_119;
            t = o_131(t);
            m_59 = t;
            t = v_119;
            t = m_131(t);
            n_59 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, i_59, k_59, m_59, n_59);
            x_14 = t;
            t = SSLsetAnnotations(x_14, d_59);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              x_119 = ATgetArgument(t, 0);
              t_119 = ATgetArgument(t, 1);
              u_119 = ATgetArgument(t, 2);
              v_119 = ATgetArgument(t, 3);
              {
                ATerm b_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,y_14 = NULL;
                t = SSLgetAnnotations(w_119);
                b_60 = t;
                t = x_119;
                t = o_131(t);
                g_60 = t;
                t = t_119;
                t = o_131(t);
                h_60 = t;
                t = u_119;
                t = o_131(t);
                i_60 = t;
                t = v_119;
                t = m_131(t);
                j_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, g_60, h_60, i_60, j_60);
                y_14 = t;
                t = SSLsetAnnotations(y_14, b_60);
              }
            }
          else
            {
              ATerm x_60 = NULL,a_61 = NULL,z_14 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  x_119 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_119);
              x_60 = t;
              t = x_119;
              t = m_131(t);
              a_61 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, a_61);
              z_14 = t;
              t = SSLsetAnnotations(z_14, x_60);
            }
        }
    }
  return(t);
}
static ATerm c_14 (ATerm t)
{
  ATerm f_120 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_120);
  return(t);
}
static ATerm d_14 (ATerm t)
{
  ATerm p_42 = t;
  int q_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(q_42);
    }
  else
    {
      t = p_42;
      {
        ATerm h_120 = NULL,i_120 = NULL,j_120 = NULL,k_120 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_120 = ATgetArgument(t, 0);
            t = h_120;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_120 = ATgetArgument(t, 0);
                i_120 = ATgetArgument(t, 1);
                j_120 = ATgetArgument(t, 2);
                k_120 = ATgetArgument(t, 3);
                t = j_120;
                t = map_1_0(e_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_120 = ATgetArgument(t, 0);
                    i_120 = ATgetArgument(t, 1);
                    j_120 = ATgetArgument(t, 2);
                    k_120 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = j_120;
                t = map_1_0(h_14, t);
              }
          }
      }
    }
  return(t);
}
static ATerm e_14 (ATerm t)
{
  ATerm u_120 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_120 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = u_120;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_120 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_120;
    }
  return(t);
}
static ATerm h_14 (ATerm t)
{
  ATerm d_121 = NULL;
  ATerm u_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_121 = ATgetArgument(t, 0);
          {
            ATerm x_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_42);
      t = d_121;
    }
  else
    {
      t = u_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_121;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(c_14, d_14, tboundin_3_0, t);
  return(t);
}
static ATerm o_11 (ATerm g_114 (ATerm), ATerm k_49, ATerm j_49, ATerm t)
{
  static ATerm v_121 (ATerm t)
  {
    ATerm q_121 = NULL,r_121 = NULL,s_121 = NULL;
    q_121 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_49;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_121 = ATgetFirst((ATermList) t);
            s_121 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_42 = t;
          int b_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = q_121;
              {
                static ATerm i_14 (ATerm t)
                {
                  t = j_49;
                  return(t);
                }
                t = p_11(g_114, i_14, r_121, s_121, t);
              }
              t = v_121(t);
              LocalPopChoice(b_43);
            }
          else
            {
              t = y_42;
              {
                ATerm p_61 = NULL,s_61 = NULL,h_15 = NULL;
                t = SSLgetAnnotations(q_121);
                p_61 = t;
                t = s_121;
                t = v_121(t);
                s_61 = t;
                t = (ATerm) ATinsert(CheckATermList(s_61), r_121);
                h_15 = t;
                t = SSLsetAnnotations(h_15, p_61);
              }
            }
        }
      }
    return(t);
  }
  t = k_49;
  t = v_121(t);
  return(t);
}
ATerm foldr_3_0 (ATerm w_116 (ATerm), ATerm x_116 (ATerm), ATerm y_116 (ATerm), ATerm t)
{
  ATerm y_121 = NULL,z_121 = NULL,a_122 = NULL;
  y_121 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_121;
      t = w_116(t);
    }
  else
    {
      ATerm d_122 = NULL,e_122 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_121 = ATgetFirst((ATermList) t);
          a_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_121;
      t = y_116(t);
      d_122 = t;
      t = a_122;
      t = foldr_3_0(w_116, x_116, y_116, t);
      e_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_122, e_122);
      t = x_116(t);
    }
  return(t);
}
static ATerm p_11 (ATerm j_114 (ATerm), ATerm k_114 (ATerm), ATerm o_49, ATerm n_49, ATerm t)
{
  t = k_114(t);
  {
    static ATerm j_14 (ATerm t)
    {
      ATerm h_122 = NULL;
      h_122 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_49, h_122);
      t = j_114(t);
      return(t);
    }
    t = fetch_1_0(j_14, t);
  }
  t = n_49;
  return(t);
}
static ATerm q_11 (ATerm b_114 (ATerm), ATerm i_49, ATerm h_49, ATerm t)
{
  static ATerm y_122 (ATerm t)
  {
    ATerm s_122 = NULL,u_122 = NULL,v_122 = NULL;
    s_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_122;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_122 = ATgetFirst((ATermList) t);
            v_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm e_43 = t;
          int l_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_122;
              {
                static ATerm k_14 (ATerm t)
                {
                  t = h_49;
                  return(t);
                }
                t = p_11(b_114, k_14, u_122, v_122, t);
              }
              t = y_122(t);
              LocalPopChoice(l_43);
            }
          else
            {
              t = e_43;
              {
                ATerm e_62 = NULL,h_62 = NULL,l_15 = NULL;
                t = SSLgetAnnotations(s_122);
                e_62 = t;
                t = v_122;
                t = y_122(t);
                h_62 = t;
                t = (ATerm) ATinsert(CheckATermList(h_62), u_122);
                l_15 = t;
                t = SSLsetAnnotations(l_15, e_62);
              }
            }
        }
      }
    return(t);
  }
  t = i_49;
  t = y_122(t);
  return(t);
}
ATerm at_end_1_0 (ATerm s_110 (ATerm), ATerm t)
{
  static ATerm c_124 (ATerm t)
  {
    ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL;
    b_124 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_123 = ATgetFirst((ATermList) t);
        a_124 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm p_62 = NULL,s_62 = NULL,n_15 = NULL;
          t = SSLgetAnnotations(b_124);
          p_62 = t;
          t = a_124;
          t = c_124(t);
          s_62 = t;
          t = (ATerm) ATinsert(CheckATermList(s_62), z_123);
          n_15 = t;
          t = SSLsetAnnotations(n_15, p_62);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = b_124;
        t = s_110(t);
      }
    return(t);
  }
  t = c_124(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm b_123 = NULL,f_123 = NULL,g_123 = NULL;
  b_123 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_123;
    }
  else
    {
      static ATerm l_14 (ATerm t)
      {
        t = not_null(g_123);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_123 = ATgetFirst((ATermList) t);
          if(((g_123 != NULL) && (g_123 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            g_123 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_123;
      t = at_end_1_0(l_14, t);
    }
  return(t);
}
static ATerm o_124 (ATerm g_124, ATerm t)
{
  ATerm h_124 = NULL;
  t = SSL_explode_term(g_124);
  if(match_cons(t, sym__2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      h_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_124;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm j_124 = NULL,k_124 = NULL,l_124 = NULL;
  l_124 = t;
  if(match_cons(t, sym__2))
    {
      j_124 = ATgetArgument(t, 0);
      k_124 = ATgetArgument(t, 1);
      {
        ATerm q_43 = t;
        int r_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_14 (ATerm t)
            {
              t = k_124;
              return(t);
            }
            t = j_124;
            t = at_end_1_0(m_14, t);
            LocalPopChoice(r_43);
          }
        else
          {
            t = q_43;
            t = o_124(l_124, t);
          }
      }
    }
  else
    {
      t = o_124(l_124, t);
    }
  return(t);
}
static ATerm p_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
        _fail(t);
      {
        ATerm t_43 = ATgetArgument(t, 1);
        if(((ATgetType(t_43) != AT_LIST) || !(ATisEmpty(t_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_14 (ATerm t)
{
  ATerm v_124 = NULL,w_124 = NULL,x_124 = NULL,y_124 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_43 = ATgetArgument(t, 0);
      if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
        {
          v_124 = ATgetFirst((ATermList) u_43);
          w_124 = (ATerm) ATgetNext((ATermList) u_43);
        }
      else
        _fail(t);
      {
        ATerm v_43 = ATgetArgument(t, 1);
        if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
          {
            x_124 = ATgetFirst((ATermList) v_43);
            y_124 = (ATerm) ATgetNext((ATermList) v_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_124, x_124), (ATerm) ATmakeAppl(sym__2, w_124, y_124));
  return(t);
}
static ATerm r_14 (ATerm t)
{
  ATerm z_124 = NULL,a_125 = NULL;
  if(match_cons(t, sym__2))
    {
      z_124 = ATgetArgument(t, 0);
      a_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_125), z_124);
  return(t);
}
static ATerm s_11 (ATerm g_674, ATerm l_674, ATerm a_69, ATerm t)
{
  ATerm q_124 = NULL,r_124 = NULL,s_124 = NULL,t_124 = NULL;
  t = SSL_explode_term(l_674);
  if(match_cons(t, sym__2))
    {
      q_124 = ATgetArgument(t, 0);
      s_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_674);
  if(match_cons(t, sym__2))
    {
      if((q_124 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      r_124 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_124, s_124);
  t = genzip_4_0(p_14, q_14, r_14, _id, t);
  t_124 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_124, a_69);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t)
{
  static ATerm c_125 (ATerm t)
  {
    ATerm w_43 = t;
    int x_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_107(t);
        LocalPopChoice(x_43);
      }
    else
      {
        t = w_43;
        t = s_107(t);
        t = c_125(t);
      }
    return(t);
  }
  t = c_125(t);
  return(t);
}
ATerm for_3_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  t = u_107(t);
  t = while_not_2_0(v_107, w_107, t);
  return(t);
}
static ATerm s_14 (ATerm t)
{
  ATerm j_125 = NULL;
  j_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_125);
  return(t);
}
static ATerm t_14 (ATerm t)
{
  ATerm k_125 = NULL,l_125 = NULL,m_125 = NULL,n_125 = NULL,t_15 = NULL;
  n_125 = t;
  if(match_cons(t, sym__2))
    {
      l_125 = ATgetArgument(t, 0);
      m_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_125);
  k_125 = t;
  t = m_125;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_125, m_125);
  t_15 = t;
  t = SSLsetAnnotations(t_15, k_125);
  return(t);
}
static ATerm u_14 (ATerm t)
{
  ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL,k_126 = NULL;
  g_126 = t;
  if(match_cons(t, sym__2))
    {
      h_126 = ATgetArgument(t, 0);
      i_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_126 = ATgetFirst((ATermList) t);
      k_126 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_43 = t;
        int z_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_126(h_126, i_126, g_126, t);
            LocalPopChoice(z_43);
          }
        else
          {
            t = y_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_126), j_126), k_126);
          }
      }
    }
  else
    {
      t = u_126(h_126, i_126, g_126, t);
    }
  return(t);
}
static ATerm u_126 (ATerm o_125, ATerm p_125, ATerm q_125, ATerm t)
{
  ATerm r_125 = NULL,u_125 = NULL,u_15 = NULL,x_125 = NULL,y_125 = NULL,z_125 = NULL,a_126 = NULL;
  t = SSLgetAnnotations(q_125);
  r_125 = t;
  t = p_125;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_125 = ATgetFirst((ATermList) t);
      a_126 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_125;
  if(match_cons(t, sym__2))
    {
      y_125 = ATgetArgument(t, 0);
      z_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_125;
        if((y_125 != t))
          {
            _fail(t);
          }
        t = a_126;
        LocalPopChoice(b_44);
      }
    else
      {
        t = a_44;
        t = p_125;
        t = s_11(y_125, z_125, a_126, t);
      }
  }
  u_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_125, u_125);
  u_15 = t;
  t = SSLsetAnnotations(u_15, r_125);
  return(t);
}
static ATerm v_14 (ATerm t)
{
  ATerm t_126 = NULL;
  if(match_cons(t, sym__2))
    {
      t_126 = ATgetArgument(t, 0);
      if((t_126 != ATgetArgument(t, 1)))
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
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_14, t_14, u_14, t);
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      {
        ATerm o_126 = NULL,p_126 = NULL,q_126 = NULL;
        o_126 = t;
        if(match_cons(t, sym__2))
          {
            p_126 = ATgetArgument(t, 0);
            q_126 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_126;
        t = q_11(v_14, p_126, q_126, t);
      }
    }
  return(t);
}
static ATerm b_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm d_15 (ATerm t)
{
  ATerm e_63 = NULL,f_63 = NULL;
  if(match_cons(t, sym__2))
    {
      e_63 = ATgetArgument(t, 0);
      f_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(e_15, e_63, f_63, t);
  return(t);
}
static ATerm e_15 (ATerm t)
{
  ATerm g_63 = NULL;
  if(match_cons(t, sym__2))
    {
      g_63 = ATgetArgument(t, 0);
      if((g_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
static ATerm f_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm i_15 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL;
  if(match_cons(t, sym__2))
    {
      n_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(j_15, n_63, o_63, t);
  return(t);
}
static ATerm j_15 (ATerm t)
{
  ATerm t_63 = NULL;
  if(match_cons(t, sym__2))
    {
      t_63 = ATgetArgument(t, 0);
      if((t_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm i_129 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  static ATerm m_127 (ATerm t)
  {
    ATerm e_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_129(t);
        LocalPopChoice(f_44);
      }
    else
      {
        t = e_44;
        {
          ATerm g_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_126 = NULL,b_127 = NULL,x_62 = NULL,y_62 = NULL;
              y_126 = t;
              t = h_129(t);
              b_127 = t;
              t = y_126;
              {
                static ATerm a_15 (ATerm t)
                {
                  ATerm d_127 = NULL;
                  t = m_127(t);
                  d_127 = t;
                  t = (ATerm) ATmakeAppl(sym__2, d_127, b_127);
                  t = diff_0_0(t);
                  return(t);
                }
                t = i_129(a_15, m_127, b_15, t);
              }
              y_62 = t;
              t = SSL_explode_term(y_62);
              if(match_cons(t, sym__2))
                {
                  ATerm i_44 = ATgetArgument(t, 0);
                  x_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_62;
              t = foldr_3_0(c_15, d_15, _id, t);
              LocalPopChoice(h_44);
            }
          else
            {
              t = g_44;
              {
                ATerm i_63 = NULL,j_63 = NULL;
                j_63 = t;
                t = SSL_explode_term(j_63);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_44 = ATgetArgument(t, 0);
                    i_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_63;
                t = foldr_3_0(f_15, i_15, m_127, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_127(t);
  return(t);
}
static ATerm k_15 (ATerm t)
{
  ATerm k_128 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_128 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_128);
  return(t);
}
static ATerm m_15 (ATerm t)
{
  ATerm l_44 = t;
  int m_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_44);
    }
  else
    {
      t = l_44;
      {
        ATerm m_128 = NULL,n_128 = NULL,o_128 = NULL,p_128 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            m_128 = ATgetArgument(t, 0);
            t = m_128;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                m_128 = ATgetArgument(t, 0);
                n_128 = ATgetArgument(t, 1);
                o_128 = ATgetArgument(t, 2);
                p_128 = ATgetArgument(t, 3);
                t = o_128;
                t = map_1_0(o_15, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    m_128 = ATgetArgument(t, 0);
                    n_128 = ATgetArgument(t, 1);
                    o_128 = ATgetArgument(t, 2);
                    p_128 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = o_128;
                t = map_1_0(p_15, t);
              }
          }
      }
    }
  return(t);
}
static ATerm o_15 (ATerm t)
{
  ATerm x_128 = NULL;
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_128 = ATgetArgument(t, 0);
          {
            ATerm p_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_44);
      t = x_128;
    }
  else
    {
      t = n_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_128 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_128;
    }
  return(t);
}
static ATerm p_15 (ATerm t)
{
  ATerm k_129 = NULL;
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_129 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_44);
      t = k_129;
    }
  else
    {
      t = r_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_129;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm d_128 = NULL,h_128 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      h_128 = ATgetArgument(t, 0);
      t = h_128;
      if(match_cons(t, sym_Rule_3))
        {
          d_128 = ATgetArgument(t, 0);
          {
            ATerm v_44 = ATgetArgument(t, 1);
          }
          {
            ATerm w_44 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = d_128;
      t = free_vars_3_0(k_15, m_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          h_128 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = h_128;
    }
  return(t);
}
ATerm Var_1_0 (ATerm t_79 (ATerm), ATerm t)
{
  ATerm o_129 = NULL,p_129 = NULL,q_129 = NULL,r_129 = NULL,x_15 = NULL;
  r_129 = t;
  if(match_cons(t, sym_Var_1))
    {
      p_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_129);
  o_129 = t;
  t = p_129;
  t = t_79(t);
  q_129 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, q_129);
  x_15 = t;
  t = SSLsetAnnotations(x_15, o_129);
  return(t);
}
static ATerm q_15 (ATerm t)
{
  ATerm b_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      LocalPopChoice(m_45);
    }
  else
    {
      t = b_45;
      {
        ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            a_130 = ATgetArgument(t, 0);
            b_130 = ATgetArgument(t, 1);
            c_130 = ATgetArgument(t, 2);
            d_130 = ATgetArgument(t, 3);
            t = c_130;
            t = map_1_0(r_15, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                a_130 = ATgetArgument(t, 0);
                b_130 = ATgetArgument(t, 1);
                c_130 = ATgetArgument(t, 2);
                d_130 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = c_130;
            t = map_1_0(s_15, t);
          }
      }
    }
  return(t);
}
static ATerm r_15 (ATerm t)
{
  ATerm k_130 = NULL;
  ATerm q_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_130 = ATgetArgument(t, 0);
          {
            ATerm w_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_45);
      t = k_130;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_130;
    }
  return(t);
}
static ATerm s_15 (ATerm t)
{
  ATerm v_130 = NULL;
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_130 = ATgetArgument(t, 0);
          {
            ATerm z_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_45);
      t = v_130;
    }
  else
    {
      t = x_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_130;
    }
  return(t);
}
static ATerm v_15 (ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,c_131 = NULL;
  y_130 = t;
  if(match_cons(t, sym_Let_2))
    {
      z_130 = ATgetArgument(t, 0);
      a_131 = ATgetArgument(t, 1);
      t = y_130;
      t = j_11(z_130, a_131, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          z_130 = ATgetArgument(t, 0);
          a_131 = ATgetArgument(t, 1);
          b_131 = ATgetArgument(t, 2);
          t = a_131;
          t = map_1_0(w_15, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              z_130 = ATgetArgument(t, 0);
              a_131 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, z_130);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  z_130 = ATgetArgument(t, 0);
                  a_131 = ATgetArgument(t, 1);
                  b_131 = ATgetArgument(t, 2);
                  c_131 = ATgetArgument(t, 3);
                  t = a_131;
                  t = map_1_0(y_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      z_130 = ATgetArgument(t, 0);
                      a_131 = ATgetArgument(t, 1);
                      b_131 = ATgetArgument(t, 2);
                      c_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = a_131;
                  t = map_1_0(a_16, t);
                }
            }
        }
    }
  return(t);
}
static ATerm w_15 (ATerm t)
{
  ATerm k_131 = NULL;
  ATerm a_46 = t;
  int b_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_131 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_46);
      t = k_131;
    }
  else
    {
      t = a_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_131;
    }
  return(t);
}
static ATerm y_15 (ATerm t)
{
  ATerm f_132 = NULL;
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_132 = ATgetArgument(t, 0);
          {
            ATerm f_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_46);
      t = f_132;
    }
  else
    {
      t = d_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_132;
    }
  return(t);
}
static ATerm a_16 (ATerm t)
{
  ATerm o_132 = NULL;
  ATerm g_46 = t;
  int h_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_132 = ATgetArgument(t, 0);
          {
            ATerm i_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_46);
      t = o_132;
    }
  else
    {
      t = g_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_132 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_132;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, q_15, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, v_15, sboundin_3_0, spaste_1_0, t);
  return(t);
}
static ATerm d_12 (ATerm t_41, ATerm u_41, ATerm t)
{
  ATerm r_132 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, t_41, u_41);
  t = r_12(t_41, u_41, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_132 = ATgetFirst((ATermList) t);
      {
        ATerm j_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_132;
  return(t);
}
static ATerm c_16 (ATerm t)
{
  ATerm p_133 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      p_133 = ATgetArgument(t, 0);
      {
        ATerm k_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_133;
  return(t);
}
static ATerm h_16 (ATerm t)
{
  ATerm q_133 = NULL,s_133 = NULL,t_133 = NULL,u_133 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      s_133 = ATgetArgument(t, 0);
      u_133 = ATgetArgument(t, 1);
      q_133 = ATgetArgument(t, 2);
      t = s_133;
      if(match_cons(t, sym_SVar_1))
        {
          t_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_133;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          s_133 = ATgetArgument(t, 0);
          u_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = s_133;
      if(match_cons(t, sym_SVar_1))
        {
          t_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_133;
    }
  return(t);
}
static ATerm i_16 (ATerm t)
{
  ATerm y_133 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      y_133 = ATgetArgument(t, 0);
      {
        ATerm n_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = y_133;
  return(t);
}
static ATerm j_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_46 = ATgetArgument(t, 0);
      if(((ATgetType(o_46) != AT_LIST) || !(ATisEmpty(o_46))))
        _fail(t);
      {
        ATerm p_46 = ATgetArgument(t, 1);
        if(((ATgetType(p_46) != AT_LIST) || !(ATisEmpty(p_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_16 (ATerm t)
{
  ATerm z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_46 = ATgetArgument(t, 0);
      if(((ATgetType(q_46) == AT_LIST) && !(ATisEmpty(q_46))))
        {
          z_133 = ATgetFirst((ATermList) q_46);
          a_134 = (ATerm) ATgetNext((ATermList) q_46);
        }
      else
        _fail(t);
      {
        ATerm r_46 = ATgetArgument(t, 1);
        if(((ATgetType(r_46) == AT_LIST) && !(ATisEmpty(r_46))))
          {
            b_134 = ATgetFirst((ATermList) r_46);
            c_134 = (ATerm) ATgetNext((ATermList) r_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_133, b_134), (ATerm) ATmakeAppl(sym__2, a_134, c_134));
  return(t);
}
static ATerm l_16 (ATerm t)
{
  ATerm d_134 = NULL,e_134 = NULL;
  if(match_cons(t, sym__2))
    {
      d_134 = ATgetArgument(t, 0);
      e_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_134), d_134);
  return(t);
}
static ATerm n_16 (ATerm t)
{
  ATerm f_134 = NULL,g_134 = NULL;
  if(match_cons(t, sym__2))
    {
      f_134 = ATgetArgument(t, 0);
      g_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_134), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_134)));
  return(t);
}
static ATerm o_16 (ATerm t)
{
  t = repeat_2_0(Simplify_0_0, _id, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL,l_133 = NULL,n_133 = NULL,o_133 = NULL,w_63 = NULL,x_63 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_46 = ATgetArgument(t, 0);
      if(match_cons(t_46, sym_SVar_1))
        {
          e_133 = ATgetArgument(t_46, 0);
        }
      else
        _fail(t);
      g_133 = ATgetArgument(t, 1);
      k_133 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_133), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  w_63 = t;
  t = term_u_46;
  x_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_46, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_133), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = d_12(x_63, w_63, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_46) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      c_133 = ATgetArgument(t, 1);
      d_133 = ATgetArgument(t, 2);
      j_133 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_133, c_133, j_133, d_133);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((e_133 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_133 = ATgetArgument(t, 1);
      {
        ATerm x_46 = ATgetArgument(t, 2);
      }
      h_133 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_133;
  t = map_1_0(c_16, t);
  o_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, o_133, g_133, h_133);
  t = substitute_2_0(h_16, _id, t);
  i_133 = t;
  t = j_133;
  t = map_1_0(i_16, t);
  l_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_133, l_133);
  t = genzip_4_0(j_16, k_16, l_16, n_16, t);
  n_133 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_133, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_133), i_133));
  t = downup_1_0(o_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm p_16 (ATerm t)
{
  ATerm q_134 = NULL,r_134 = NULL,s_134 = NULL;
  q_134 = t;
  t = term_u_20;
  r_134 = t;
  t = (ATerm) ATinsert(ATempty, term_y_46);
  s_134 = t;
  t = SSL_printnl(r_134, s_134);
  t = q_134;
  return(t);
}
static ATerm q_16 (ATerm t)
{
  t = debug_1_0(s_16, t);
  return(t);
}
static ATerm s_16 (ATerm t)
{
  t = term_z_46;
  return(t);
}
static ATerm t_16 (ATerm t)
{
  ATerm a_135 = NULL,b_135 = NULL,c_135 = NULL;
  a_135 = t;
  t = term_u_20;
  b_135 = t;
  t = (ATerm) ATinsert(ATempty, term_b_47);
  c_135 = t;
  t = SSL_printnl(b_135, c_135);
  t = a_135;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL;
  p_134 = t;
  t = new_0_0(t);
  o_134 = t;
  {
    ATerm c_47 = t;
    int d_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_47, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_134), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        LocalPopChoice(d_47);
      }
    else
      {
        t = c_47;
        t = if_verbose2_1_0(p_16, t);
        _fail(t);
      }
  }
  {
    ATerm g_47 = t;
    int h_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL;
        t_134 = t;
        if(match_cons(t, sym_LChoice_2))
          {
            u_134 = ATgetArgument(t, 0);
            z_134 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = u_134;
        if(match_cons(t, sym_CallT_3))
          {
            v_134 = ATgetArgument(t, 0);
            x_134 = ATgetArgument(t, 1);
            y_134 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        t = v_134;
        if(match_cons(t, sym_SVar_1))
          {
            w_134 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = x_134;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_134;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = z_134;
        if(!(match_cons(t, sym_Id_0)))
          _fail(t);
        t = w_134;
        if((o_134 != t))
          {
            _fail(t);
          }
        t = t_134;
        LocalPopChoice(h_47);
      }
    else
      {
        t = g_47;
        t = if_verbose1_1_0(q_16, t);
        _fail(t);
      }
  }
  t = if_verbose2_1_0(t_16, t);
  t = p_134;
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
static ATerm e_12 (ATerm a_109 (ATerm), ATerm a_41, ATerm y_40, ATerm t)
{
  ATerm d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL,h_135 = NULL,i_135 = NULL;
  g_135 = t;
  t = a_109(t);
  d_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_135, a_41, y_40);
  t = s_12(d_135, a_41, y_40, t);
  {
    ATerm i_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_135 = NULL;
        t = term_k_27;
        j_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_135, term_k_27);
        t = r_12(d_135, j_135, t);
        LocalPopChoice(k_47);
      }
    else
      {
        t = i_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_135 = ATgetFirst((ATermList) t);
      f_135 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_k_27;
  h_135 = t;
  t = (ATerm) ATinsert(CheckATermList(f_135), (ATerm) ATinsert(CheckATermList(e_135), a_41));
  i_135 = t;
  t = SSL_table_put(d_135, h_135, i_135);
  t = g_135;
  return(t);
}
static ATerm b_17 (ATerm t)
{
  t = term_u_46;
  return(t);
}
static ATerm f_12 (ATerm f_22, ATerm g_22, ATerm i_22, ATerm h_22, ATerm t)
{
  ATerm k_135 = NULL,l_135 = NULL,m_135 = NULL;
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  l_135 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_l_47, g_22, h_22, i_22);
  m_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_22), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_l_47, g_22, h_22, i_22));
  t = e_12(b_17, l_135, m_135, t);
  t = k_135;
  return(t);
}
ATerm map_1_0 (ATerm c_110 (ATerm), ATerm t)
{
  static ATerm b_136 (ATerm t)
  {
    ATerm y_135 = NULL,z_135 = NULL,a_136 = NULL;
    y_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_135;
      }
    else
      {
        ATerm c_64 = NULL,s_64 = NULL,u_64 = NULL,z_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_135 = ATgetFirst((ATermList) t);
            a_136 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_135);
        c_64 = t;
        t = z_135;
        t = c_110(t);
        s_64 = t;
        t = a_136;
        t = b_136(t);
        u_64 = t;
        t = (ATerm) ATinsert(CheckATermList(u_64), s_64);
        z_15 = t;
        t = SSLsetAnnotations(z_15, c_64);
      }
    return(t);
  }
  t = b_136(t);
  return(t);
}
ATerm Cons_2_0 (ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  ATerm d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL,i_136 = NULL,b_16 = NULL;
  i_136 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_136 = ATgetFirst((ATermList) t);
      f_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_136);
  d_136 = t;
  t = e_136;
  t = n_97(t);
  g_136 = t;
  t = f_136;
  t = o_97(t);
  h_136 = t;
  t = (ATerm) ATinsert(CheckATermList(h_136), g_136);
  b_16 = t;
  t = SSLsetAnnotations(b_16, d_136);
  return(t);
}
static ATerm i_12 (ATerm i_32, ATerm j_32, ATerm t)
{
  ATerm j_136 = NULL;
  t = SSL_fputc(i_32, j_32);
  j_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_136);
  return(t);
}
static ATerm j_12 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm k_136 = NULL;
  t = SSL_write_term_to_stream_text(r_37, s_37);
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_136);
  return(t);
}
static ATerm l_12 (ATerm p_108 (ATerm), ATerm o_310, ATerm x_37, ATerm t)
{
  ATerm l_136 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_310, term_m_47);
  t = o_12(t);
  l_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_136, x_37);
  t = p_108(t);
  t = fclose_0_0(t);
  t = x_37;
  return(t);
}
static ATerm k_12 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm m_136 = NULL;
  t = SSL_write_term_to_stream_baf(n_37, o_37);
  m_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_136);
  return(t);
}
static ATerm d_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm e_17 (ATerm t)
{
  ATerm o_65 = NULL,p_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(match_cons(o_47, sym_Stream_1))
        {
          o_65 = ATgetArgument(o_47, 0);
        }
      else
        _fail(t);
      p_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(o_65, p_65, t);
  return(t);
}
static ATerm f_17 (ATerm t)
{
  ATerm a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_47 = ATgetArgument(t, 0);
      if(match_cons(p_47, sym_Stream_1))
        {
          d_66 = ATgetArgument(p_47, 0);
        }
      else
        _fail(t);
      e_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(d_66, e_66, t);
  a_66 = t;
  t = term_s_47;
  b_66 = t;
  t = a_66;
  if(match_cons(t, sym_Stream_1))
    {
      c_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_47, a_66);
  t = i_12(b_66, c_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_136 = NULL,r_136 = NULL,s_136 = NULL,t_136 = NULL,u_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,z_136 = NULL,a_137 = NULL,a_138 = NULL,b_138 = NULL,e_16 = NULL,d_16 = NULL;
  r_136 = t;
  if(match_cons(t, sym__2))
    {
      y_136 = ATgetArgument(t, 0);
      z_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_136);
  x_136 = t;
  t = y_136;
  {
    ATerm t_47 = t;
    int u_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm c_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((q_136 != NULL) && (q_136 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                q_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(c_17, t);
        LocalPopChoice(u_47);
      }
    else
      {
        t = t_47;
        t = term_v_47;
        q_136 = t;
      }
  }
  a_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_137, z_136);
  d_16 = t;
  t = SSLsetAnnotations(d_16, x_136);
  t = r_136;
  if(match_cons(t, sym__2))
    {
      t_136 = ATgetArgument(t, 0);
      u_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_136);
  s_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_136, (ATerm) ATmakeAppl(sym__2, not_null(q_136), u_136));
  e_16 = t;
  t = SSLsetAnnotations(e_16, s_136);
  w_136 = t;
  if(match_cons(t, sym__2))
    {
      a_138 = ATgetArgument(t, 0);
      b_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,n_65 = NULL,f_16 = NULL;
        t = SSLgetAnnotations(w_136);
        g_65 = t;
        t = a_138;
        t = fetch_1_0(d_17, t);
        j_65 = t;
        t = b_138;
        if(match_cons(t, sym__2))
          {
            l_65 = ATgetArgument(t, 0);
            n_65 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_12(e_17, l_65, n_65, t);
        k_65 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_65, k_65);
        f_16 = t;
        t = SSLsetAnnotations(f_16, g_65);
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        {
          ATerm u_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,g_16 = NULL;
          t = SSLgetAnnotations(w_136);
          u_65 = t;
          t = b_138;
          if(match_cons(t, sym__2))
            {
              y_65 = ATgetArgument(t, 0);
              z_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_12(f_17, y_65, z_65, t);
          x_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, a_138, x_65);
          g_16 = t;
          t = SSLsetAnnotations(g_16, u_65);
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
ATerm apply_strategy_1_0 (ATerm t_122 (ATerm), ATerm t)
{
  ATerm e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL;
  i_138 = t;
  t = dtime_0_0(t);
  t = i_138;
  t = t_122(t);
  h_138 = t;
  t = dtime_0_0(t);
  e_138 = t;
  t = h_138;
  if(match_cons(t, sym__2))
    {
      f_138 = ATgetArgument(t, 0);
      g_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_138), (ATerm) ATmakeAppl(sym_Runtime_1, e_138)), g_138);
  return(t);
}
static ATerm w_138 (ATerm q_138, ATerm t)
{
  t = SSL_fclose(q_138);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_138 = NULL,u_138 = NULL;
  u_138 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_138 = ATgetArgument(t, 0);
      {
        ATerm z_47 = t;
        int a_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_138);
            LocalPopChoice(a_48);
          }
        else
          {
            t = z_47;
            t = w_138(u_138, t);
          }
      }
    }
  else
    {
      t = w_138(u_138, t);
    }
  return(t);
}
static ATerm m_12 (ATerm v_37, ATerm t)
{
  t = SSL_read_term_from_stream(v_37);
  return(t);
}
static ATerm n_12 (ATerm k_32, ATerm l_32, ATerm t)
{
  ATerm x_138 = NULL;
  t = SSL_fopen(k_32, l_32);
  x_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_138);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_138 = NULL;
  t = SSL_stdin_stream();
  y_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_138);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_138 = NULL;
  t = SSL_stdout_stream();
  z_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_138);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_139 = NULL;
  t = SSL_stderr_stream();
  a_139 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_139);
  return(t);
}
static ATerm h_140 (ATerm g_139, ATerm t)
{
  ATerm h_139 = NULL;
  t = SSL_explode_term(g_139);
  if(match_cons(t, sym__2))
    {
      ATerm b_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_48 = ATgetArgument(t, 1);
        if(((ATgetType(c_48) == AT_LIST) && !(ATisEmpty(c_48))))
          {
            h_139 = ATgetFirst((ATermList) c_48);
            {
              ATerm d_48 = (ATerm) ATgetNext((ATermList) c_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_139;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_139;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_139;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_139;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_140 (ATerm k_139, ATerm l_139, ATerm m_139, ATerm t)
{
  ATerm n_139 = NULL,o_139 = NULL,p_139 = NULL,s_139 = NULL,m_16 = NULL;
  t = SSLgetAnnotations(m_139);
  p_139 = t;
  t = k_139;
  if(match_cons(t, sym_Path_1))
    {
      s_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_139, l_139);
  m_16 = t;
  t = SSLsetAnnotations(m_16, p_139);
  if(match_cons(t, sym__2))
    {
      n_139 = ATgetArgument(t, 0);
      o_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(n_139, o_139, t);
  return(t);
}
static ATerm j_140 (ATerm u_139, ATerm v_139, ATerm w_139, ATerm t)
{
  ATerm x_139 = NULL,y_139 = NULL,z_139 = NULL,c_140 = NULL,r_16 = NULL;
  t = SSLgetAnnotations(w_139);
  z_139 = t;
  t = SSL_is_string(u_139);
  c_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_140, v_139);
  r_16 = t;
  t = SSLsetAnnotations(r_16, z_139);
  if(match_cons(t, sym__2))
    {
      x_139 = ATgetArgument(t, 0);
      y_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(x_139, y_139, t);
  return(t);
}
static ATerm o_12 (ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL;
  e_140 = t;
  if(match_cons(t, sym__2))
    {
      f_140 = ATgetArgument(t, 0);
      g_140 = ATgetArgument(t, 1);
      {
        ATerm g_48 = t;
        int h_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_140(e_140, t);
            LocalPopChoice(h_48);
          }
        else
          {
            t = g_48;
            {
              ATerm i_48 = t;
              int j_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_140(f_140, g_140, e_140, t);
                  LocalPopChoice(j_48);
                }
              else
                {
                  t = i_48;
                  t = j_140(f_140, g_140, e_140, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_140(e_140, t);
    }
  return(t);
}
static ATerm g_17 (ATerm t)
{
  t = term_k_48;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_140 = NULL,l_140 = NULL,m_140 = NULL;
  ATerm l_48 = t;
  int m_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_140 = NULL;
      n_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_140, term_o_48);
      t = o_12(t);
      LocalPopChoice(m_48);
    }
  else
    {
      t = l_48;
      t = debug_1_0(g_17, t);
      _fail(t);
    }
  l_140 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_12(m_140, t);
  k_140 = t;
  t = l_140;
  t = fclose_0_0(t);
  t = k_140;
  return(t);
}
ATerm fetch_1_0 (ATerm m_110 (ATerm), ATerm t)
{
  static ATerm l_141 (ATerm t)
  {
    ATerm i_141 = NULL,j_141 = NULL,k_141 = NULL;
    i_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_141 = ATgetFirst((ATermList) t);
        k_141 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_48 = t;
      int q_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_66 = NULL,t_66 = NULL,z_16 = NULL;
          t = SSLgetAnnotations(i_141);
          q_66 = t;
          t = j_141;
          t = m_110(t);
          t_66 = t;
          t = (ATerm) ATinsert(CheckATermList(k_141), t_66);
          z_16 = t;
          t = SSLsetAnnotations(z_16, q_66);
          LocalPopChoice(q_48);
        }
      else
        {
          t = p_48;
          {
            ATerm d_67 = NULL,j_67 = NULL,a_17 = NULL;
            t = SSLgetAnnotations(i_141);
            d_67 = t;
            t = k_141;
            t = l_141(t);
            j_67 = t;
            t = (ATerm) ATinsert(CheckATermList(j_67), j_141);
            a_17 = t;
            t = SSLsetAnnotations(a_17, d_67);
          }
        }
    }
    return(t);
  }
  t = l_141(t);
  return(t);
}
static ATerm h_12 (ATerm c_31, ATerm d_31, ATerm t)
{
  t = SSL_strcat(c_31, d_31);
  return(t);
}
ATerm debug_1_0 (ATerm n_108 (ATerm), ATerm t)
{
  ATerm o_141 = NULL,p_141 = NULL,q_141 = NULL,r_141 = NULL;
  o_141 = t;
  t = n_108(t);
  p_141 = t;
  t = term_u_20;
  q_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_141), p_141);
  r_141 = t;
  t = SSL_printnl(q_141, r_141);
  t = o_141;
  return(t);
}
static ATerm h_17 (ATerm t)
{
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(s_48);
    }
  else
    {
      t = r_48;
    }
  return(t);
}
static ATerm i_17 (ATerm t)
{
  t = term_u_48;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_141 = NULL;
      y_141 = t;
      t = SSL_is_string(y_141);
      LocalPopChoice(y_48);
    }
  else
    {
      t = v_48;
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_17, t);
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            {
              ATerm e_142 = NULL,f_142 = NULL,g_142 = NULL;
              e_142 = t;
              if(match_cons(t, sym_Path_1))
                {
                  f_142 = ATgetArgument(t, 0);
                  t = f_142;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      f_142 = ATgetArgument(t, 0);
                      t = f_142;
                      {
                        ATerm b_49 = t;
                        int c_49 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(c_49);
                          }
                        else
                          {
                            t = b_49;
                            t = debug_1_0(i_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm k_142 = NULL,l_142 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          f_142 = ATgetArgument(t, 0);
                          g_142 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = f_142;
                      t = eval_config_0_0(t);
                      k_142 = t;
                      t = g_142;
                      t = eval_config_0_0(t);
                      l_142 = t;
                      t = (ATerm) ATmakeAppl(sym__2, k_142, l_142);
                      t = h_12(k_142, l_142, t);
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
  ATerm p_142 = NULL,q_142 = NULL;
  p_142 = t;
  t = term_d_49;
  q_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_49, p_142);
  t = r_12(q_142, p_142, t);
  {
    ATerm e_49 = t;
    int f_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_142 = NULL,s_142 = NULL;
        t = eval_config_0_0(t);
        r_142 = t;
        t = term_d_49;
        s_142 = t;
        t = SSL_table_put(s_142, p_142, r_142);
        t = r_142;
        LocalPopChoice(f_49);
      }
    else
      {
        t = e_49;
      }
  }
  return(t);
}
static ATerm j_17 (ATerm t)
{
  ATerm w_142 = NULL;
  w_142 = t;
  if(match_string(t, "-k"))
    {
      t = w_142;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_142;
    }
  return(t);
}
static ATerm k_17 (ATerm t)
{
  ATerm x_142 = NULL,y_142 = NULL,z_142 = NULL;
  x_142 = t;
  t = SSL_string_to_int(x_142);
  y_142 = t;
  t = term_g_49;
  z_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_49, y_142);
  t = u_12(z_142, y_142, t);
  t = x_142;
  return(t);
}
static ATerm l_17 (ATerm t)
{
  t = term_l_49;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
static ATerm n_17 (ATerm t)
{
  ATerm b_143 = NULL;
  b_143 = t;
  if(match_string(t, "-S"))
    {
      t = b_143;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_143;
    }
  return(t);
}
static ATerm p_17 (ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL;
  t = term_d_21;
  c_143 = t;
  t = term_p_49;
  d_143 = t;
  t = term_q_49;
  t = u_12(c_143, d_143, t);
  t = term_r_49;
  return(t);
}
static ATerm r_17 (ATerm t)
{
  t = term_s_49;
  return(t);
}
static ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_17 (ATerm t)
{
  ATerm e_143 = NULL,f_143 = NULL,g_143 = NULL;
  e_143 = t;
  t = SSL_string_to_int(e_143);
  f_143 = t;
  t = term_d_21;
  g_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, f_143);
  t = u_12(g_143, f_143, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_143);
  return(t);
}
static ATerm w_17 (ATerm t)
{
  t = term_t_49;
  return(t);
}
static ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_18 (ATerm t)
{
  ATerm h_143 = NULL,i_143 = NULL;
  t = term_u_49;
  h_143 = t;
  t = term_s_20;
  i_143 = t;
  t = term_v_49;
  t = u_12(h_143, i_143, t);
  t = term_w_49;
  return(t);
}
static ATerm e_18 (ATerm t)
{
  t = term_x_49;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_49 = t;
  int z_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_17, p_17, r_17, t);
      LocalPopChoice(z_49);
    }
  else
    {
      t = y_49;
      {
        ATerm e_50 = t;
        int h_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_17, u_17, w_17, t);
            LocalPopChoice(h_50);
          }
        else
          {
            t = e_50;
            t = Option_3_0(c_18, d_18, e_18, t);
          }
      }
    }
  return(t);
}
static ATerm u_12 (ATerm z_62, ATerm a_63, ATerm t)
{
  ATerm j_143 = NULL;
  t = term_d_49;
  j_143 = t;
  t = SSL_table_put(j_143, z_62, a_63);
  t = (ATerm) ATmakeAppl(sym__3, term_d_49, z_62, a_63);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_143 = NULL,p_143 = NULL,q_143 = NULL;
      t = term_s_20;
      t = e_0(t);
      o_143 = t;
      t = term_i_50;
      p_143 = t;
      t = term_j_50;
      q_143 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_50, term_j_50, o_143);
      t = s_12(p_143, q_143, o_143, t);
      _fail(t);
    }
  else
    {
      ATerm t_143 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_143 = ATgetFirst((ATermList) t);
          n_143 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_143;
      t = c_0(t);
      t = term_s_20;
      t = d_0(t);
      t_143 = t;
      t = (ATerm) ATinsert(CheckATermList(n_143), t_143);
    }
  return(t);
}
static ATerm f_18 (ATerm t)
{
  ATerm v_143 = NULL;
  v_143 = t;
  if(match_string(t, "-o"))
    {
      t = v_143;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_143;
    }
  return(t);
}
static ATerm l_18 (ATerm t)
{
  ATerm w_143 = NULL,x_143 = NULL;
  w_143 = t;
  t = term_k_50;
  x_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_50, w_143);
  t = u_12(x_143, w_143, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_143);
  return(t);
}
static ATerm m_18 (ATerm t)
{
  t = term_l_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_18, l_18, m_18, t);
  return(t);
}
static ATerm s_12 (ATerm i_41, ATerm j_41, ATerm h_41, ATerm t)
{
  ATerm z_143 = NULL,a_144 = NULL,b_144 = NULL;
  z_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, j_41);
  {
    ATerm n_50 = t;
    int p_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm r_50 = ATgetArgument(t, 0);
            ATerm s_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_41, j_41);
        t = r_12(i_41, j_41, t);
        LocalPopChoice(p_50);
      }
    else
      {
        t = n_50;
        t = (ATerm) ATempty;
      }
  }
  a_144 = t;
  t = (ATerm) ATinsert(CheckATermList(a_144), h_41);
  b_144 = t;
  t = SSL_table_put(i_41, j_41, b_144);
  t = z_143;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_144 = NULL,j_144 = NULL,k_144 = NULL,l_144 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_144 = NULL,n_144 = NULL,o_144 = NULL;
      t = term_s_20;
      t = n_0(t);
      m_144 = t;
      t = term_i_50;
      n_144 = t;
      t = term_j_50;
      o_144 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_i_50, term_j_50, m_144);
      t = s_12(n_144, o_144, m_144, t);
      _fail(t);
    }
  else
    {
      ATerm s_144 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_144 = ATgetFirst((ATermList) t);
          j_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_144;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_144 = ATgetFirst((ATermList) t);
          l_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_144;
      t = k_0(t);
      t = k_144;
      t = l_0(t);
      s_144 = t;
      t = (ATerm) ATinsert(CheckATermList(l_144), s_144);
    }
  return(t);
}
static ATerm n_18 (ATerm t)
{
  ATerm u_144 = NULL;
  u_144 = t;
  if(match_string(t, "-i"))
    {
      t = u_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_144;
    }
  return(t);
}
static ATerm o_18 (ATerm t)
{
  ATerm v_144 = NULL,w_144 = NULL;
  v_144 = t;
  t = term_u_50;
  w_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_50, v_144);
  t = u_12(w_144, v_144, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_144);
  return(t);
}
static ATerm p_18 (ATerm t)
{
  t = term_v_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_18, o_18, p_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_144 = NULL,y_144 = NULL,z_144 = NULL,a_145 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_20;
  t = whoami_0_0(t);
  x_144 = t;
  t = term_u_20;
  z_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_50), x_144);
  a_145 = t;
  t = SSL_printnl(z_144, a_145);
  t = term_y_20;
  y_144 = t;
  t = SSL_exit(y_144);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_z_50;
  t = get_config_0_0(t);
  return(t);
}
static ATerm p_12 (ATerm h_39, ATerm i_39, ATerm t)
{
  ATerm a_51 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_39, i_39);
      LocalPopChoice(b_51);
    }
  else
    {
      t = a_51;
      t = SSL_addr(h_39, i_39);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_116 (ATerm), ATerm v_116 (ATerm), ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL;
  c_145 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_145;
      t = u_116(t);
    }
  else
    {
      ATerm h_145 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_145 = ATgetFirst((ATermList) t);
          e_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_145;
      t = foldr_2_0(u_116, v_116, t);
      h_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_145, h_145);
      t = v_116(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm q_18 (ATerm t)
{
  t = term_p_49;
  return(t);
}
static ATerm r_18 (ATerm t)
{
  ATerm a_68 = NULL,b_68 = NULL;
  if(match_cons(t, sym__2))
    {
      a_68 = ATgetArgument(t, 0);
      b_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(a_68, b_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_145 = NULL,w_67 = NULL,x_67 = NULL;
  t = times_0_0(t);
  x_67 = t;
  t = SSL_explode_term(x_67);
  if(match_cons(t, sym__2))
    {
      ATerm c_51 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_67;
  t = foldr_2_0(q_18, r_18, t);
  k_145 = t;
  t = SSL_TicksToSeconds(k_145);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_145 = NULL,w_145 = NULL,x_145 = NULL;
  v_145 = t;
  if(match_cons(t, sym__2))
    {
      w_145 = ATgetArgument(t, 0);
      x_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_51 = t;
    int e_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_145;
        if((w_145 != t))
          {
            _fail(t);
          }
        t = v_145;
        LocalPopChoice(e_51);
      }
    else
      {
        t = d_51;
        t = (ATerm) ATmakeAppl(sym__2, w_145, x_145);
        {
          ATerm h_51 = t;
          int i_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_145, x_145);
              LocalPopChoice(i_51);
            }
          else
            {
              t = h_51;
              t = SSL_gtr(w_145, x_145);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_145, x_145);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm b_132 (ATerm), ATerm t)
{
  ATerm b_146 = NULL;
  b_146 = t;
  {
    ATerm j_51 = t;
    int k_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_146 = NULL;
        t = term_d_21;
        t = get_config_0_0(t);
        d_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_146, term_y_20);
        t = geq_0_0(t);
        t = b_146;
        t = b_132(t);
        LocalPopChoice(k_51);
      }
    else
      {
        t = j_51;
        t = b_146;
      }
  }
  return(t);
}
static ATerm s_18 (ATerm t)
{
  ATerm f_146 = NULL,g_146 = NULL,i_146 = NULL,j_146 = NULL;
  t = run_time_0_0(t);
  f_146 = t;
  t = term_s_20;
  t = whoami_0_0(t);
  g_146 = t;
  t = term_u_20;
  i_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_51), f_146), term_l_51), g_146);
  j_146 = t;
  t = SSL_printnl(i_146, j_146);
  t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_51), f_146), term_l_51), g_146));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_146 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_49;
  k_146 = t;
  t = SSL_exit(k_146);
  return(t);
}
static ATerm t_18 (ATerm t)
{
  ATerm s_146 = NULL,t_146 = NULL;
  t_146 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_146;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_146 = ATgetArgument(t, 0);
          {
            ATerm n_68 = NULL,m_17 = NULL;
            t = SSLgetAnnotations(t_146);
            n_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_146);
            m_17 = t;
            t = SSLsetAnnotations(m_17, n_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_146;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm r_123 (ATerm), ATerm t)
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_r_51;
      t = get_config_0_0(t);
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      t = fetch_1_0(t_18, t);
    }
  t = r_123(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_146 = NULL,x_146 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_146 = ATgetFirst((ATermList) t);
      x_146 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_147 = NULL,c_147 = NULL;
        static ATerm u_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_147)), not_null(c_147));
          return(t);
        }
        t = x_146;
        t = i_0(t);
        if(((b_147 != NULL) && (b_147 != t)))
          _fail(t);
        else
          b_147 = t;
        t = w_146;
        t = g_0(t);
        if(((c_147 != NULL) && (c_147 != t)))
          _fail(t);
        else
          c_147 = t;
        t = x_146;
        t = reverse_acc_2_0(g_0, u_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_20;
      t = i_0(t);
    }
  return(t);
}
static ATerm r_12 (ATerm z_42, ATerm a_43, ATerm t)
{
  t = SSL_table_get(z_42, a_43);
  return(t);
}
static ATerm v_18 (ATerm t)
{
  ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL,o_17 = NULL;
  i_147 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_147);
  g_147 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_147);
  o_17 = t;
  t = SSLsetAnnotations(o_17, g_147);
  return(t);
}
static ATerm w_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_18 (ATerm t)
{
  ATerm k_147 = NULL;
  k_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_147), term_s_51);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_147 = NULL,f_147 = NULL;
  ATerm t_51 = t;
  int u_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_z_50;
      t = get_config_0_0(t);
      LocalPopChoice(u_51);
    }
  else
    {
      t = t_51;
      t = fetch_1_0(v_18, t);
    }
  t = term_w_51;
  t = echo_0_0(t);
  t = term_i_50;
  e_147 = t;
  t = term_j_50;
  f_147 = t;
  t = term_x_51;
  t = r_12(e_147, f_147, t);
  t = reverse_acc_2_0(_id, w_18, t);
  t = map_1_0(x_18, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_147 = NULL,n_147 = NULL,o_147 = NULL;
  m_147 = t;
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_147;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_52 = ATgetFirst((ATermList) t);
                ATerm c_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_147;
          }
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
        t = (ATerm) ATinsert(ATempty, m_147);
      }
  }
  n_147 = t;
  t = term_v_47;
  o_147 = t;
  t = SSL_printnl(o_147, n_147);
  t = m_147;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_z_50;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_18 (ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL;
  t = term_d_52;
  s_147 = t;
  t = term_s_20;
  t_147 = t;
  t = term_i_52;
  t = u_12(s_147, t_147, t);
  return(t);
}
static ATerm a_19 (ATerm t)
{
  t = term_j_52;
  return(t);
}
static ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_19 (ATerm t)
{
  ATerm u_147 = NULL,v_147 = NULL,w_147 = NULL,x_147 = NULL;
  t = term_d_52;
  w_147 = t;
  t = term_s_20;
  x_147 = t;
  t = term_i_52;
  t = u_12(w_147, x_147, t);
  t = term_k_52;
  u_147 = t;
  t = term_s_20;
  v_147 = t;
  t = term_q_52;
  t = u_12(u_147, v_147, t);
  t = term_r_52;
  return(t);
}
static ATerm d_19 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_18, z_18, a_19, t);
      LocalPopChoice(u_52);
    }
  else
    {
      t = t_52;
      t = Option_3_0(b_19, c_19, d_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm c_148 = NULL,d_148 = NULL,e_148 = NULL,f_148 = NULL,h_148 = NULL,i_148 = NULL,v_17 = NULL;
  c_148 = t;
  {
    ATerm v_52 = t;
    int w_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_52;
        t = w_126(t);
        LocalPopChoice(w_52);
      }
    else
      {
        t = v_52;
      }
  }
  t = c_148;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_148 = ATgetFirst((ATermList) t);
      f_148 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_148);
  d_148 = t;
  t = term_z_50;
  i_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_50, e_148);
  t = u_12(i_148, e_148, t);
  t = f_148;
  {
    static ATerm s_148 (ATerm t)
    {
      ATerm y_52 = t;
      int z_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_53 = t;
          int b_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_148 = NULL;
              l_148 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_148;
              LocalPopChoice(b_53);
            }
          else
            {
              t = a_53;
              t = w_126(t);
              t = Cons_2_0(_id, s_148, t);
            }
          LocalPopChoice(z_52);
        }
      else
        {
          t = y_52;
          {
            ATerm o_148 = NULL,p_148 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                o_148 = ATgetFirst((ATermList) t);
                p_148 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(p_148), (ATerm) ATmakeAppl(sym_Undefined_1, o_148));
          }
        }
      return(t);
    }
    t = s_148(t);
  }
  h_148 = t;
  t = (ATerm) ATinsert(CheckATermList(h_148), (ATerm) ATmakeAppl(sym_Program_1, e_148));
  v_17 = t;
  t = SSLsetAnnotations(v_17, d_148);
  return(t);
}
static ATerm f_19 (ATerm t)
{
  ATerm e_149 = NULL;
  e_149 = t;
  if(match_string(t, "--help"))
    {
      t = e_149;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = e_149;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = e_149;
        }
    }
  return(t);
}
static ATerm j_19 (ATerm t)
{
  ATerm f_149 = NULL,g_149 = NULL;
  t = term_r_51;
  f_149 = t;
  t = term_s_20;
  g_149 = t;
  t = term_c_53;
  t = u_12(f_149, g_149, t);
  t = term_e_53;
  return(t);
}
static ATerm k_19 (ATerm t)
{
  t = term_f_53;
  return(t);
}
static ATerm l_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL,c_149 = NULL,d_149 = NULL;
  z_148 = t;
  t = term_i_50;
  b_149 = t;
  t = term_j_50;
  c_149 = t;
  t = (ATerm) ATempty;
  d_149 = t;
  t = SSL_table_put(b_149, c_149, d_149);
  t = z_148;
  {
    static ATerm e_19 (ATerm t)
    {
      ATerm g_53 = t;
      int h_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_126(t);
          LocalPopChoice(h_53);
        }
      else
        {
          t = g_53;
          {
            ATerm i_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_19, j_19, k_19, t);
                LocalPopChoice(j_53);
              }
            else
              {
                t = i_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_19, t);
  }
  {
    ATerm l_53 = t;
    int m_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_149 = NULL;
        n_149 = t;
        {
          ATerm n_53 = t;
          int o_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_68 = NULL;
              t = n_149;
              {
                ATerm p_53 = t;
                int q_53 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_r_51;
                    t = get_config_0_0(t);
                    LocalPopChoice(q_53);
                  }
                else
                  {
                    t = p_53;
                    t = fetch_1_0(l_19, t);
                  }
              }
              t = n_149;
              t = default_system_usage_0_0(t);
              t = term_p_49;
              u_68 = t;
              t = SSL_exit(u_68);
              LocalPopChoice(o_53);
            }
          else
            {
              t = n_53;
              {
                ATerm y_68 = NULL;
                t = term_d_52;
                t = get_config_0_0(t);
                t = n_149;
                t = default_system_about_0_0(t);
                t = term_p_49;
                y_68 = t;
                t = SSL_exit(y_68);
              }
            }
        }
        LocalPopChoice(m_53);
      }
    else
      {
        t = l_53;
        {
          ATerm r_53 = t;
          int s_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_149 = NULL,p_149 = NULL,q_149 = NULL;
              static ATerm o_19 (ATerm t)
              {
                ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL,x_17 = NULL;
                t_149 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_149 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_149);
                r_149 = t;
                t = s_149;
                if(((x_148 != NULL) && (x_148 != t)))
                  _fail(t);
                else
                  x_148 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_149);
                x_17 = t;
                t = SSLsetAnnotations(x_17, r_149);
                return(t);
              }
              t = fetch_1_0(o_19, t);
              t = term_u_20;
              p_149 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_148)), term_t_53);
              q_149 = t;
              t = SSL_printnl(p_149, q_149);
              t = (ATerm) ATmakeAppl(sym__2, term_u_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_148)), term_t_53));
              t = default_system_usage_0_0(t);
              t = term_y_20;
              o_149 = t;
              t = SSL_exit(o_149);
              LocalPopChoice(s_53);
            }
          else
            {
              t = r_53;
            }
        }
      }
  }
  y_148 = t;
  t = term_i_50;
  a_149 = t;
  t = SSL_table_destroy(a_149);
  t = y_148;
  return(t);
}
ATerm option_wrap_4_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm w_123 (ATerm), ATerm t)
{
  ATerm y_149 = NULL,z_149 = NULL,a_150 = NULL,b_150 = NULL;
  t = parse_options_1_0(t_123, t);
  y_149 = t;
  t = term_u_53;
  b_150 = t;
  t = SSL_table_create(b_150);
  t = term_u_53;
  z_149 = t;
  t = term_v_53;
  a_150 = t;
  t = SSL_table_put(z_149, a_150, y_149);
  t = y_149;
  t = v_123(t);
  {
    ATerm w_53 = t;
    int x_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(u_123, t);
        LocalPopChoice(x_53);
      }
    else
      {
        t = w_53;
        {
          ATerm y_53 = t;
          int z_53 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(z_53);
            }
          else
            {
              t = y_53;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_19 (ATerm t)
{
  t = if_verbose2_1_0(c_20, t);
  return(t);
}
static ATerm x_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_19 (ATerm t)
{
  ATerm c_150 = NULL,d_150 = NULL;
  t = term_a_54;
  c_150 = t;
  t = term_s_20;
  d_150 = t;
  t = term_b_54;
  t = u_12(c_150, d_150, t);
  t = term_c_54;
  return(t);
}
static ATerm b_20 (ATerm t)
{
  t = term_d_54;
  return(t);
}
static ATerm c_20 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL,h_150 = NULL;
  e_150 = t;
  t = term_z_50;
  t = get_config_0_0(t);
  f_150 = t;
  t = term_u_20;
  g_150 = t;
  t = (ATerm) ATinsert(ATempty, f_150);
  h_150 = t;
  t = SSL_printnl(g_150, h_150);
  t = e_150;
  return(t);
}
ATerm iowrap_3_0 (ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm e_123 (ATerm), ATerm t)
{
  static ATerm p_19 (ATerm t)
  {
    ATerm e_54 = t;
    int f_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_123(t);
        LocalPopChoice(f_54);
      }
    else
      {
        t = e_54;
        {
          ATerm g_54 = t;
          int h_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(h_54);
            }
          else
            {
              t = g_54;
              {
                ATerm i_54 = t;
                int k_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(k_54);
                  }
                else
                  {
                    t = i_54;
                    {
                      ATerm l_54 = t;
                      int m_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_19, y_19, b_20, t);
                          LocalPopChoice(m_54);
                        }
                      else
                        {
                          t = l_54;
                          {
                            ATerm n_54 = t;
                            int o_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(o_54);
                              }
                            else
                              {
                                t = n_54;
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
  static ATerm v_19 (ATerm t)
  {
    ATerm i_150 = NULL,j_150 = NULL,k_150 = NULL;
    j_150 = t;
    {
      ATerm p_54 = t;
      int q_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm d_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_150 != NULL) && (i_150 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_20, t);
          LocalPopChoice(q_54);
        }
      else
        {
          t = p_54;
          t = term_r_54;
          i_150 = t;
        }
    }
    t = not_null(i_150);
    t = ReadFromFile_0_0(t);
    k_150 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_150, k_150);
    t = apply_strategy_1_0(c_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(p_19, e_123, s_19, v_19, t);
  return(t);
}
static ATerm g_20 (ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL,q_150 = NULL,r_150 = NULL,k_18 = NULL;
  r_150 = t;
  if(match_cons(t, sym__2))
    {
      o_150 = ATgetArgument(t, 0);
      p_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_150);
  n_150 = t;
  t = p_150;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_151 = NULL,c_69 = NULL,e_69 = NULL,f_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,n_69 = NULL,o_69 = NULL,j_18 = NULL,i_18 = NULL,g_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            n_151 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_150);
        c_69 = t;
        t = n_151;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_69 = ATgetFirst((ATermList) t);
            g_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_151);
        e_69 = t;
        t = f_69;
        if(match_cons(t, sym_Signature_1))
          {
            n_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_69);
        j_69 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, n_69);
        g_18 = t;
        t = SSLsetAnnotations(g_18, j_69);
        o_69 = t;
        t = g_69;
        t = Cons_2_0(h_20, i_20, t);
        h_69 = t;
        t = (ATerm) ATinsert(CheckATermList(h_69), o_69);
        i_18 = t;
        t = SSLsetAnnotations(i_18, e_69);
        i_69 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, i_69);
        j_18 = t;
        t = SSLsetAnnotations(j_18, c_69);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(k_20, t);
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        t = if_verbose2_1_0(m_20, t);
      }
  }
  q_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_150, q_150);
  k_18 = t;
  t = SSLsetAnnotations(k_18, n_150);
  return(t);
}
static ATerm h_20 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,h_18 = NULL;
  s_69 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_69);
  p_69 = t;
  t = q_69;
  t = map_1_0(j_20, t);
  r_69 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, r_69);
  h_18 = t;
  t = SSLsetAnnotations(h_18, p_69);
  return(t);
}
static ATerm i_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
static ATerm j_20 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      t_69 = ATgetArgument(t, 0);
      u_69 = ATgetArgument(t, 1);
      v_69 = ATgetArgument(t, 2);
      w_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_12(t_69, u_69, v_69, w_69, t);
  return(t);
}
static ATerm k_20 (ATerm t)
{
  ATerm x_69 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_54 = ATgetArgument(t, 0);
      if(match_cons(w_54, sym_SVar_1))
        {
          ATerm f_55 = ATgetArgument(w_54, 0);
          if((ATgetSymbol((ATermAppl) f_55) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_54 = ATgetArgument(t, 1);
        if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
          {
            x_69 = ATgetFirst((ATermList) x_54);
            {
              ATerm g_55 = (ATerm) ATgetNext((ATermList) x_54);
              if(((ATgetType(g_55) != AT_LIST) || !(ATisEmpty(g_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm z_54 = ATgetArgument(t, 2);
        if(((ATgetType(z_54) != AT_LIST) || !(ATisEmpty(z_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_9(x_69, t);
  return(t);
}
static ATerm m_20 (ATerm t)
{
  ATerm o_151 = NULL,p_151 = NULL,q_151 = NULL;
  o_151 = t;
  t = term_u_20;
  p_151 = t;
  t = (ATerm) ATinsert(ATempty, term_h_55);
  q_151 = t;
  t = SSL_printnl(p_151, q_151);
  t = o_151;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_20, _fail, default_usage_0_0, t);
  return(t);
}
