#include <srts/stratego.h>
#include <srts/stratego-lib.h>
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
Symbol sym__9;
Symbol sym__10;
Symbol sym__11;
Symbol sym__12;
Symbol sym__13;
Symbol sym__14;
Symbol sym__15;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym_Cong_2;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Anno_2;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  init_constant_terms();
}
ATerm term_g_55;
ATerm term_y_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_f_54;
ATerm term_e_54;
ATerm term_x_53;
ATerm term_v_53;
ATerm term_u_53;
ATerm term_s_52;
ATerm term_r_52;
ATerm term_q_52;
ATerm term_k_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_z_51;
ATerm term_y_51;
ATerm term_x_51;
ATerm term_v_51;
ATerm term_u_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_i_51;
ATerm term_h_51;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_l_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_i_50;
ATerm term_c_50;
ATerm term_b_50;
ATerm term_a_50;
ATerm term_z_49;
ATerm term_s_49;
ATerm term_r_49;
ATerm term_p_49;
ATerm term_o_49;
ATerm term_n_49;
ATerm term_l_49;
ATerm term_k_49;
ATerm term_j_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_g_49;
ATerm term_y_48;
ATerm term_q_48;
ATerm term_k_48;
ATerm term_h_48;
ATerm term_t_47;
ATerm term_p_47;
ATerm term_l_47;
ATerm term_k_47;
ATerm term_z_46;
ATerm term_x_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_r_46;
ATerm term_o_46;
ATerm term_q_35;
ATerm term_c_33;
ATerm term_a_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_w_31;
ATerm term_s_31;
ATerm term_q_31;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_v_29;
ATerm term_u_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_u_28;
ATerm term_t_28;
ATerm term_q_28;
ATerm term_p_28;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_c_28;
ATerm term_b_28;
ATerm term_k_27;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_r_25;
ATerm term_a_23;
ATerm term_l_22;
ATerm term_e_22;
ATerm term_s_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_w_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_q_20;
void init_constant_terms (void)
{
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_25);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_25, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_25, term_a_26);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_25, term_b_26);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_25, term_c_26);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_d_26);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_26);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_28);
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_25, term_a_26);
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_25, term_n_28);
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
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_u_29));
  term_u_29 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_v_29));
  term_v_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_29);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_o_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_33);
  ATprotect(&(term_q_35));
  term_q_35 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_r_46));
  term_r_46 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_x_46));
  term_x_46 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_46);
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_l_47));
  term_l_47 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_47));
  term_p_47 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_48));
  term_k_48 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(sym__2, term_f_21, term_i_49);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_49);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_49));
  term_n_49 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(sym__2, term_o_49, term_q_20);
  ATprotect(&(term_r_49));
  term_r_49 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_49));
  term_s_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_50));
  term_a_50 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_50));
  term_b_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_50));
  term_l_50 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_51));
  term_h_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(sym__2, term_z_49, term_a_50);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(sym__2, term_u_51, term_q_20);
  ATprotect(&(term_x_51));
  term_x_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_y_51));
  term_y_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_51));
  term_z_51 = (ATerm) ATmakeAppl(sym__2, term_y_51, term_q_20);
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(sym__2, term_h_51, term_q_20);
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_u_53));
  term_u_53 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_53));
  term_v_53 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_53));
  term_x_53 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_54));
  term_f_54 = (ATerm) ATmakeAppl(sym__2, term_e_54, term_q_20);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_54));
  term_y_54 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_125 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm z_123 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm k_2 (ATerm);
ATerm m_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm d_8 (ATerm h_71, ATerm i_71, ATerm j_71, ATerm);
ATerm z_11 (ATerm a_11, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm k_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm u_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm h_8 (ATerm u_66, ATerm v_66, ATerm w_66, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm r_4 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm c_34 (ATerm b_33, ATerm h_33, ATerm);
ATerm d_34 (ATerm k_33, ATerm n_33, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm o_9 (ATerm r_36, ATerm s_36, ATerm);
ATerm end_scope_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm r_107 (ATerm), ATerm);
ATerm scope_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm x_4 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm n_5 (ATerm);
ATerm p_9 (ATerm u_22, ATerm t_22, ATerm v_22, ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm w_5 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm i_95 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Seq_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm d_6 (ATerm);
ATerm f_6 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm p_6 (ATerm);
ATerm w_9 (ATerm e_21, ATerm);
ATerm alltd_1_0 (ATerm z_96 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm w_6 (ATerm);
ATerm x_6 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm h_7 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm topdown_1_0 (ATerm h_95 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm y_9 (ATerm a_45, ATerm z_44, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm o_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm u_7 (ATerm);
ATerm v_7 (ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm l_96 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm o_108 (ATerm), ATerm);
ATerm downup_1_0 (ATerm j_95 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm);
ATerm i_8 (ATerm);
ATerm j_8 (ATerm);
ATerm l_8 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm u_8 (ATerm);
ATerm v_8 (ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm i_10 (ATerm);
ATerm j_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm x_10 (ATerm);
ATerm spaste_1_0 (ATerm x_124 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm);
ATerm y_10 (ATerm);
ATerm j_11 (ATerm k_73, ATerm j_73, ATerm);
ATerm SVar_1_0 (ATerm e_85 (ATerm), ATerm);
ATerm u_11 (ATerm k_122 (ATerm), ATerm l_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_64, ATerm u_64, ATerm t_64, ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm v_11 (ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm n_64, ATerm q_64, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm rename_4_0 (ATerm z_121 (ATerm (ATerm), ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_122 (ATerm (ATerm), ATerm), ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm y_13 (ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm tpaste_1_0 (ATerm t_124 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm h_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm o_11 (ATerm v_103 (ATerm), ATerm s_30, ATerm r_30, ATerm);
ATerm foldr_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm p_11 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm w_30, ATerm v_30, ATerm);
ATerm q_11 (ATerm q_103 (ATerm), ATerm q_30, ATerm p_30, ATerm);
ATerm at_end_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm r_125 (ATerm h_125, ATerm);
ATerm conc_0_0 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm s_11 (ATerm t_656, ATerm y_656, ATerm o_66, ATerm);
ATerm while_not_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm);
ATerm for_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm u_14 (ATerm);
ATerm z_127 (ATerm s_126, ATerm t_126, ATerm u_126, ATerm);
ATerm v_14 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm free_vars_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm k_15 (ATerm);
ATerm m_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm y_15 (ATerm);
ATerm a_16 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm d_12 (ATerm z_36, ATerm a_37, ATerm);
ATerm c_16 (ATerm);
ATerm h_16 (ATerm);
ATerm i_16 (ATerm);
ATerm j_16 (ATerm);
ATerm k_16 (ATerm);
ATerm l_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm e_12 (ATerm v_107 (ATerm), ATerm a_36, ATerm x_35, ATerm);
ATerm b_17 (ATerm);
ATerm f_12 (ATerm g_20, ATerm h_20, ATerm j_20, ATerm i_20, ATerm);
ATerm map_1_0 (ATerm r_99 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm);
ATerm i_12 (ATerm m_54, ATerm n_54, ATerm);
ATerm j_12 (ATerm a_58, ATerm b_58, ATerm);
ATerm l_12 (ATerm q_115 (ATerm), ATerm a_527, ATerm e_58, ATerm);
ATerm k_12 (ATerm w_57, ATerm x_57, ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_117 (ATerm), ATerm);
ATerm u_138 (ATerm o_138, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm m_12 (ATerm c_58, ATerm);
ATerm n_12 (ATerm o_54, ATerm p_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_140 (ATerm e_139, ATerm);
ATerm g_140 (ATerm i_139, ATerm j_139, ATerm k_139, ATerm);
ATerm h_140 (ATerm s_139, ATerm t_139, ATerm u_139, ATerm);
ATerm o_12 (ATerm);
ATerm g_17 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_100 (ATerm), ATerm);
ATerm h_12 (ATerm e_52, ATerm f_52, ATerm);
ATerm debug_1_0 (ATerm o_115 (ATerm), ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_17 (ATerm);
ATerm p_17 (ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm u_17 (ATerm);
ATerm w_17 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_12 (ATerm n_60, ATerm o_60, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm f_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_12 (ATerm k_36, ATerm l_36, ATerm j_36, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm p_18 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm p_12 (ATerm h_34, ATerm i_34, ATerm);
ATerm foldr_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_125 (ATerm), ATerm);
ATerm s_18 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm t_18 (ATerm);
ATerm need_help_1_0 (ATerm a_118 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm r_12 (ATerm l_38, ATerm m_38, ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_121 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm j_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm parse_options_1_0 (ATerm e_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm);
ATerm s_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm iowrap_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,p_0 = NULL,r_0 = NULL,t_0 = NULL,u_0 = NULL;
  a_0 = t;
  t = term_q_20;
  t = whoami_0_0(t);
  p_0 = t;
  t = term_s_20;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_20), p_0), term_t_20);
  u_0 = t;
  t = SSL_printnl(t_0, u_0);
  t = term_w_20;
  r_0 = t;
  t = SSL_exit(r_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_125 (ATerm), ATerm t)
{
  ATerm w_0 = NULL;
  w_0 = t;
  {
    ATerm x_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_f_21;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_g_21);
        t = geq_0_0(t);
        t = w_0;
        t = k_125(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = x_20;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, f_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, d_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
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
              ATerm v_0 (ATerm t)
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
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_1)), not_null(m_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
            }
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
            ATerm x_0 (ATerm t)
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
            a_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_j_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))))), (ATerm)ATmakeAppl(sym_Var_1, x_1), (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_1)), not_null(t_1)))))));
          }
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
    ATerm n_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_2 = NULL,h_2 = NULL,i_2 = NULL,j_2 = NULL;
        t = d_2;
        t = new_0_0(t);
        i_2 = t;
        t = e_2;
        {
          ATerm b_1 (ATerm t)
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
          j_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_s_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_2))))));
        }
        ;
        LocalPopChoice(o_21);
      }
    else
      {
        t = n_21;
        {
          ATerm u_21 = t;
          int v_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_2 = NULL,n_2 = NULL,o_2 = NULL;
              t = d_2;
              t = new_0_0(t);
              n_2 = t;
              t = e_2;
              {
                ATerm c_1 (ATerm t)
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
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), not_null(l_2))));
              }
              ;
              LocalPopChoice(v_21);
            }
          else
            {
              t = u_21;
              {
                ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
                t = d_2;
                t = new_0_0(t);
                v_2 = t;
                t = e_2;
                {
                  ATerm g_1 (ATerm t)
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
                  w_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, v_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(t_2)), not_null(u_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm z_123 (ATerm), ATerm t)
{
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_123(t);
      ;
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
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
                ATerm h_1 (ATerm t)
                {
                  t = pat_td_1_0(z_123, t);
                  return(t);
                }
                t = fetch_1_0(h_1, t);
                b_2 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, h_6, b_2);
                e_3 = t;
                t = SSLsetAnnotations(e_3, u_1);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                h_6 = ATgetArgument(t, 0);
                i_6 = ATgetArgument(t, 1);
                {
                  ATerm z_21 = t;
                  int a_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_2 = NULL,c_3 = NULL,f_3 = NULL;
                      t = SSLgetAnnotations(g_6);
                      z_2 = t;
                      t = i_6;
                      t = pat_td_1_0(z_123, t);
                      c_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_6, c_3);
                      f_3 = t;
                      t = SSLsetAnnotations(f_3, z_2);
                      ;
                      LocalPopChoice(a_22);
                    }
                  else
                    {
                      t = z_21;
                      {
                        ATerm v_4 = NULL,g_5 = NULL,g_3 = NULL;
                        t = SSLgetAnnotations(g_6);
                        v_4 = t;
                        t = h_6;
                        t = pat_td_1_0(z_123, t);
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
                        ATerm n_1 (ATerm t)
                        {
                          t = pat_td_1_0(z_123, t);
                          return(t);
                        }
                        t = fetch_1_0(n_1, t);
                        y_5 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, y_5);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, t_5);
                      }
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
                            ATerm p_1 (ATerm t)
                            {
                              t = pat_td_1_0(z_123, t);
                              return(t);
                            }
                            t = fetch_1_0(p_1, t);
                            l_7 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, h_6, i_6, l_7);
                            i_3 = t;
                            t = SSLsetAnnotations(i_3, z_6);
                          }
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
                        t = pat_td_1_0(z_123, t);
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
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,v_6 = NULL,a_7 = NULL,c_7 = NULL;
        t = s_6;
        t = new_0_0(t);
        a_7 = t;
        t = t_6;
        {
          ATerm s_1 (ATerm t)
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
          c_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_e_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_6)), not_null(u_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_7)))), (ATerm) ATmakeAppl(sym_Build_1, c_7)));
        }
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
        {
          ATerm h_22 = t;
          int j_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL,f_7 = NULL,g_7 = NULL;
              t = s_6;
              t = new_0_0(t);
              f_7 = t;
              t = t_6;
              {
                ATerm w_1 (ATerm t)
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
                g_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(d_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_7)))), (ATerm) ATmakeAppl(sym_Build_1, g_7)));
              }
              ;
              LocalPopChoice(j_22);
            }
          else
            {
              t = h_22;
              {
                ATerm j_7 = NULL,k_7 = NULL,n_7 = NULL,q_7 = NULL;
                t = s_6;
                t = new_0_0(t);
                n_7 = t;
                t = t_6;
                {
                  ATerm y_1 (ATerm t)
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
                  q_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), not_null(k_7), (ATerm) ATmakeAppl(sym_Var_1, n_7))), (ATerm) ATmakeAppl(sym_Build_1, q_7)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm k_22 = t;
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
      t = k_22;
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm k_2 (ATerm t)
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
ATerm m_2 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,k_10 = NULL,o_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_22 = ATgetArgument(t, 0);
      if(match_cons(m_22, sym__2))
        {
          g_10 = ATgetArgument(m_22, 0);
          h_10 = ATgetArgument(m_22, 1);
        }
      else
        _fail(t);
      {
        ATerm n_22 = ATgetArgument(t, 1);
        if(match_cons(n_22, sym__2))
          {
            k_10 = ATgetArgument(n_22, 0);
            o_10 = ATgetArgument(n_22, 1);
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
ATerm p_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm q_2 (ATerm t)
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
ATerm r_2 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_22 = ATgetArgument(t, 0);
      if(match_cons(q_22, sym__2))
        {
          t_10 = ATgetArgument(q_22, 0);
          u_10 = ATgetArgument(q_22, 1);
        }
      else
        _fail(t);
      {
        ATerm r_22 = ATgetArgument(t, 1);
        if(match_cons(r_22, sym__2))
          {
            v_10 = ATgetArgument(r_22, 0);
            w_10 = ATgetArgument(r_22, 1);
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
ATerm d_8 (ATerm h_71, ATerm i_71, ATerm j_71, ATerm t)
{
  ATerm t_7 = NULL,w_7 = NULL,e_8 = NULL,g_8 = NULL,k_8 = NULL,o_8 = NULL,p_8 = NULL,t_8 = NULL,m_9 = NULL,r_3 = NULL;
  t = j_71;
  t = fetch_1_0(c_2, t);
  t = j_71;
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
        ATerm s_22 = ATgetArgument(t, 1);
        if(match_cons(s_22, sym__2))
          {
            w_7 = ATgetArgument(s_22, 0);
            e_8 = ATgetArgument(s_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_7), (ATerm) ATmakeAppl(sym_CallT_3, h_71, i_71, e_8)));
  return(t);
}
ATerm z_11 (ATerm a_11, ATerm t)
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
    t = new_0_0(t);
    c_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, c_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_11)))), (ATerm) ATmakeAppl(sym_Var_1, c_11)));
  }
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
            ;
            LocalPopChoice(y_22);
          }
        else
          {
            t = x_22;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_a_23, (ATerm) ATmakeAppl(sym_Var_1, k_11)));
          }
      }
    }
  else
    {
      t = z_11(g_11, t);
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm b_23 = t;
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
      t = b_23;
    }
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm y_2 (ATerm t)
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
ATerm a_3 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL,n_9 = NULL,q_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym__2))
        {
          k_9 = ATgetArgument(c_23, 0);
          l_9 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      {
        ATerm d_23 = ATgetArgument(t, 1);
        if(match_cons(d_23, sym__2))
          {
            n_9 = ATgetArgument(d_23, 0);
            q_9 = ATgetArgument(d_23, 1);
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
ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm d_3 (ATerm t)
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
ATerm k_3 (ATerm t)
{
  ATerm v_9 = NULL,x_9 = NULL,b_10 = NULL,c_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym__2))
        {
          v_9 = ATgetArgument(f_23, 0);
          x_9 = ATgetArgument(f_23, 1);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(match_cons(g_23, sym__2))
          {
            b_10 = ATgetArgument(g_23, 0);
            c_10 = ATgetArgument(g_23, 1);
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
ATerm l_3 (ATerm t)
{
  ATerm h_23 = t;
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
      t = h_23;
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm n_3 (ATerm t)
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
ATerm o_3 (ATerm t)
{
  ATerm q_12 = NULL,y_12 = NULL,z_12 = NULL,b_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_23 = ATgetArgument(t, 0);
      if(match_cons(i_23, sym__2))
        {
          q_12 = ATgetArgument(i_23, 0);
          y_12 = ATgetArgument(i_23, 1);
        }
      else
        _fail(t);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(match_cons(j_23, sym__2))
          {
            z_12 = ATgetArgument(j_23, 0);
            b_13 = ATgetArgument(j_23, 1);
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
ATerm p_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_l_22;
  return(t);
}
ATerm s_3 (ATerm t)
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
ATerm t_3 (ATerm t)
{
  ATerm l_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_23 = ATgetArgument(t, 0);
      if(match_cons(k_23, sym__2))
        {
          l_13 = ATgetArgument(k_23, 0);
          n_13 = ATgetArgument(k_23, 1);
        }
      else
        _fail(t);
      {
        ATerm l_23 = ATgetArgument(t, 1);
        if(match_cons(l_23, sym__2))
          {
            o_13 = ATgetArgument(l_23, 0);
            q_13 = ATgetArgument(l_23, 1);
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
              ATerm m_23 = ATgetArgument(t, 1);
              if(match_cons(m_23, sym__2))
                {
                  x_8 = ATgetArgument(m_23, 0);
                  y_8 = ATgetArgument(m_23, 1);
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
            ATerm n_23 = ATgetArgument(t, 1);
            if(match_cons(n_23, sym__2))
              {
                h_11 = ATgetArgument(n_23, 0);
                i_11 = ATgetArgument(n_23, 1);
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
ATerm u_3 (ATerm t)
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
  ATerm o_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(u_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_23;
    }
  return(t);
}
ATerm w_3 (ATerm t)
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
  ATerm p_23 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_23;
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
ATerm h_8 (ATerm u_66, ATerm v_66, ATerm w_66, ATerm t)
{
  ATerm i_21 = NULL,l_21 = NULL,m_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL,w_21 = NULL;
  t = new_0_0(t);
  q_21 = t;
  t = u_66;
  {
    ATerm y_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm r_23 = ATgetArgument(t, 0);
          if(match_cons(r_23, sym_Var_1))
            {
              if(((p_21 != NULL) && (p_21 != ATgetArgument(r_23, 0))))
                _fail(ATgetArgument(r_23, 0));
              else
                p_21 = ATgetArgument(r_23, 0);
            }
          else
            _fail(t);
          if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            l_21 = ATgetArgument(t, 1);
          {
            ATerm s_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, p_21);
      return(t);
    }
    t = oncetd_1_0(y_3, t);
    t_21 = t;
    t = v_66;
    {
      ATerm c_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm t_23 = ATgetArgument(t, 0);
            if(match_cons(t_23, sym_Var_1))
              {
                if(((p_21 != NULL) && (p_21 != ATgetArgument(t_23, 0))))
                  _fail(ATgetArgument(t_23, 0));
                else
                  p_21 = ATgetArgument(t_23, 0);
              }
            else
              _fail(t);
            if(((m_21 != NULL) && (m_21 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              m_21 = ATgetArgument(t, 1);
            {
              ATerm u_23 = ATgetArgument(t, 2);
              if(match_cons(u_23, sym_CallT_3))
                {
                  if(((i_21 != NULL) && (i_21 != ATgetArgument(u_23, 0))))
                    _fail(ATgetArgument(u_23, 0));
                  else
                    i_21 = ATgetArgument(u_23, 0);
                  {
                    ATerm v_23 = ATgetArgument(u_23, 1);
                    if(((ATgetType(v_23) != AT_LIST) || !(ATisEmpty(v_23))))
                      _fail(t);
                  }
                  {
                    ATerm w_23 = ATgetArgument(u_23, 2);
                    if(((ATgetType(w_23) != AT_LIST) || !(ATisEmpty(w_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, q_21);
        return(t);
      }
      t = oncetd_1_0(c_4, t);
      w_21 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_21), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, t_21, w_21, (ATerm) ATmakeAppl(sym_Seq_2, w_66, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(i_21), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(l_21), not_null(m_21), term_a_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_21)), (ATerm) ATmakeAppl(sym_Var_1, q_21))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
          a_24 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_24 = ATgetArgument(t, 0);
              t = b_24;
              if(match_cons(t, sym_Rule_3))
                {
                  x_23 = ATgetArgument(t, 0);
                  y_23 = ATgetArgument(t, 1);
                  z_23 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_24;
              t = h_8(x_23, y_23, z_23, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm q_17 = NULL,t_17 = NULL,n_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_24 = ATgetArgument(t, 0);
                  c_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_24);
              q_17 = t;
              t = c_24;
              t = desugarRule_0_0(t);
              t_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_24, t_17);
              n_4 = t;
              t = SSLsetAnnotations(n_4, q_17);
            }
          ;
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
    }
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
    }
  t = repeat_1_0(e_4, t);
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm l_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL,g_26 = NULL;
            n_25 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_25 = ATgetArgument(t, 0);
                p_25 = ATgetArgument(t, 1);
                g_26 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_25;
            t = d_8(o_25, p_25, g_26, t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = l_24;
            {
              ATerm o_24 = t;
              int p_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm r_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = r_24;
                        {
                          ATerm t_24 = t;
                          int u_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm x_24 = t;
                              int y_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      n_26 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = n_26;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      o_26 = ATgetArgument(t, 0);
                                      t = o_26;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          o_26 = ATgetArgument(t, 0);
                                          p_26 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, o_26, p_26);
                                    }
                                  ;
                                  LocalPopChoice(y_24);
                                }
                              else
                                {
                                  t = x_24;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(u_24);
                            }
                          else
                            {
                              t = t_24;
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
ATerm f_4 (ATerm t)
{
  ATerm y_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      y_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, y_20);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm a_21 = NULL,b_21 = NULL,c_21 = NULL,d_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            a_21 = ATgetArgument(t, 0);
            t = a_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                a_21 = ATgetArgument(t, 0);
                b_21 = ATgetArgument(t, 1);
                c_21 = ATgetArgument(t, 2);
                d_21 = ATgetArgument(t, 3);
                t = c_21;
                t = map_1_0(i_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    a_21 = ATgetArgument(t, 0);
                    b_21 = ATgetArgument(t, 1);
                    c_21 = ATgetArgument(t, 2);
                    d_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = c_21;
                t = map_1_0(l_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm r_21 = NULL;
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_21 = ATgetArgument(t, 0);
          {
            ATerm f_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_25);
      t = r_21;
    }
  else
    {
      t = c_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_21;
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm c_22 = NULL;
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_22 = ATgetArgument(t, 0);
          {
            ATerm q_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_25);
      t = c_22;
    }
  else
    {
      t = h_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_22;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,j_32 = NULL;
  j_31 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_31 = ATgetArgument(t, 0);
      y_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_31;
  if(match_cons(t, sym_CallT_3))
    {
      m_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
      p_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = m_31;
  if(match_cons(t, sym_SVar_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_31;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = o_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_31;
  if(match_cons(t, sym_Seq_2))
    {
      z_31 = ATgetArgument(t, 0);
      f_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_31;
  if(match_cons(t, sym_Match_1))
    {
      a_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_32;
  if(match_cons(t, sym_Seq_2))
    {
      g_32 = ATgetArgument(t, 0);
      i_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_32;
  if(match_cons(t, sym_Where_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_32;
  if(match_cons(t, sym_Build_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,q_19 = NULL,r_19 = NULL,u_19 = NULL,e_20 = NULL,f_20 = NULL;
        t = term_d_26;
        e_20 = t;
        t = term_e_26;
        f_20 = t;
        t = term_f_26;
        t = d_12(f_20, e_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm i_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_32, j_32);
        u_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, i_19, a_32, (ATerm) ATmakeAppl(sym__2, h_32, j_32));
        t = p_9(i_19, a_32, u_19, t);
        if(match_cons(t, sym__2))
          {
            q_19 = ATgetArgument(t, 0);
            r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, q_19), (ATerm) ATmakeAppl(sym_Build_1, r_19)));
        ;
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
          ATerm r_20 = NULL,v_20 = NULL,o_22 = NULL,p_22 = NULL;
          t = term_d_26;
          o_22 = t;
          t = term_e_26;
          p_22 = t;
          t = term_f_26;
          t = d_12(p_22, o_22, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm j_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) j_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              r_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_32;
          t = free_vars_3_0(f_4, h_4, tboundin_3_0, t);
          {
            ATerm o_4 (ATerm t)
            {
              ATerm q_4 (ATerm t)
              {
                ATerm f_22 = NULL,g_22 = NULL,i_22 = NULL;
                f_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, r_20, (ATerm) ATmakeAppl(sym_Var_1, f_22));
                g_22 = t;
                t = term_l_26;
                i_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, r_20, (ATerm) ATmakeAppl(sym_Var_1, f_22)), term_l_26);
                t = e_12(r_4, g_22, i_22, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, f_22);
                return(t);
              }
              t = map_1_0(q_4, t);
              t = (ATerm) ATmakeAppl(sym__2, h_32, j_32);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_20 = ATgetArgument(t, 0);
                  {
                    ATerm m_26 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(m_4, o_4, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(v_20)), (ATerm) ATmakeAppl(sym_Build_1, j_32)));
          }
        }
      }
  }
  return(t);
}
ATerm c_34 (ATerm b_33, ATerm h_33, ATerm t)
{
  ATerm z_22 = NULL;
  t = term_r_25;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, h_33);
  t = d_12(z_22, h_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm q_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_26) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = b_33;
  return(t);
}
ATerm d_34 (ATerm k_33, ATerm n_33, ATerm t)
{
  ATerm e_23 = NULL;
  t = term_r_25;
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_25, n_33);
  t = d_12(e_23, n_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_26) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = k_33;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,w_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_33;
  if(match_cons(t, sym_Var_1))
    {
      r_33 = ATgetArgument(t, 0);
      {
        ATerm t_26 = t;
        int x_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_23 = NULL;
            t = term_r_25;
            q_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_r_25, s_33);
            t = d_12(q_23, s_33, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm y_26 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) y_26) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_33);
            ;
            LocalPopChoice(x_26);
          }
        else
          {
            t = t_26;
            {
              ATerm z_26 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_34(w_33, s_33, t);
                  ;
                  LocalPopChoice(c_27);
                }
              else
                {
                  t = z_26;
                  t = d_34(w_33, s_33, t);
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
          t = c_34(w_33, s_33, t);
          ;
          LocalPopChoice(e_27);
        }
      else
        {
          t = d_27;
          t = d_34(w_33, s_33, t);
        }
    }
  return(t);
}
ATerm o_9 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL;
  l_34 = t;
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
        t = r_12(r_36, s_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm h_27 = ATgetFirst((ATermList) t);
            k_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(g_27);
        t = SSL_table_put(r_36, s_36, k_34);
        t = (ATerm) ATmakeAppl(sym__3, r_36, s_36, k_34);
      }
    else
      {
        t = f_27;
        t = SSL_table_remove(r_36, s_36);
        t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
      }
    t = l_34;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,t_34 = NULL;
  q_34 = t;
  t = s_107(t);
  p_34 = t;
  {
    ATerm i_27 = t;
    int j_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_34 = NULL;
        t = term_k_27;
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, term_k_27);
        t = r_12(p_34, u_34, t);
        ;
        LocalPopChoice(j_27);
      }
    else
      {
        t = i_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_34 = ATgetFirst((ATermList) t);
        n_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_27;
    t_34 = t;
    t = SSL_table_put(p_34, t_34, n_34);
    t = o_34;
    {
      ATerm t_4 (ATerm t)
      {
        ATerm w_34 = NULL;
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, w_34);
        t = o_9(p_34, w_34, t);
        return(t);
      }
      t = map_1_0(t_4, t);
      t = q_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm o_98 (ATerm), ATerm p_98 (ATerm), ATerm t)
{
  ATerm l_27 = t;
  int m_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_98(t);
      t = p_98(t);
      ;
      LocalPopChoice(m_27);
    }
  else
    {
      t = l_27;
      t = p_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,b_35 = NULL,d_35 = NULL,j_35 = NULL,t_35 = NULL;
  b_35 = t;
  t = r_107(t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, term_k_27);
  {
    ATerm n_27 = t;
    int o_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            ATerm q_27 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_k_27;
        o_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_k_27);
        t = r_12(y_34, o_36, t);
        ;
        LocalPopChoice(o_27);
      }
    else
      {
        t = n_27;
        t = (ATerm) ATempty;
      }
    d_35 = t;
    t = term_k_27;
    j_35 = t;
    t = (ATerm) ATinsert(CheckATermList(d_35), (ATerm) ATempty);
    t_35 = t;
    t = SSL_table_put(y_34, j_35, t_35);
    t = b_35;
  }
  return(t);
}
ATerm scope_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = end_scope_1_0(t_107, t);
    return(t);
  }
  t = begin_scope_1_0(t_107, t);
  t = restore_always_2_0(u_107, u_4, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm c_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, c_37);
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm r_27 = t;
  int s_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(s_27);
    }
  else
    {
      t = r_27;
      {
        ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL,k_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            e_37 = ATgetArgument(t, 0);
            t = e_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                e_37 = ATgetArgument(t, 0);
                f_37 = ATgetArgument(t, 1);
                g_37 = ATgetArgument(t, 2);
                k_37 = ATgetArgument(t, 3);
                t = g_37;
                t = map_1_0(k_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_37 = ATgetArgument(t, 0);
                    f_37 = ATgetArgument(t, 1);
                    g_37 = ATgetArgument(t, 2);
                    k_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_37;
                t = map_1_0(l_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  ATerm w_37 = NULL;
  ATerm t_27 = t;
  int w_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_37 = ATgetArgument(t, 0);
          {
            ATerm x_27 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_27);
      t = w_37;
    }
  else
    {
      t = t_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_37;
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm g_38 = NULL;
  ATerm y_27 = t;
  int z_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_38 = ATgetArgument(t, 0);
          {
            ATerm a_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_27);
      t = g_38;
    }
  else
    {
      t = y_27;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_38;
    }
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm p_9 (ATerm u_22, ATerm t_22, ATerm v_22, ATerm t)
{
  ATerm x_36 = NULL;
  ATerm f_5 (ATerm t)
  {
    t = t_22;
    t = free_vars_3_0(i_5, j_5, tboundin_3_0, t);
    {
      ATerm m_5 (ATerm t)
      {
        ATerm k_38 = NULL,n_38 = NULL,o_38 = NULL;
        k_38 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, u_22, (ATerm) ATmakeAppl(sym_Var_1, k_38));
        n_38 = t;
        t = term_c_28;
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, u_22, (ATerm) ATmakeAppl(sym_Var_1, k_38)), term_c_28);
        t = e_12(n_5, n_38, o_38, t);
        t = k_38;
        return(t);
      }
      t = map_1_0(m_5, t);
      t = v_22;
      t = alltd_1_0(Replace_0_0, t);
      if(((x_36 != NULL) && (x_36 != t)))
        _fail(t);
      else
        x_36 = t;
    }
    return(t);
  }
  t = scope_2_0(x_4, f_5, t);
  t = not_null(x_36);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm g_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_25);
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm d_28 = t;
  int e_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_28);
    }
  else
    {
      t = d_28;
      {
        ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_25 = ATgetArgument(t, 0);
            t = j_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_25 = ATgetArgument(t, 0);
                k_25 = ATgetArgument(t, 1);
                l_25 = ATgetArgument(t, 2);
                m_25 = ATgetArgument(t, 3);
                t = l_25;
                t = map_1_0(q_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_25 = ATgetArgument(t, 0);
                    k_25 = ATgetArgument(t, 1);
                    l_25 = ATgetArgument(t, 2);
                    m_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_25;
                t = map_1_0(r_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_25 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      t = x_25;
    }
  else
    {
      t = f_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_25;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm h_26 = NULL;
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_26 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_28);
      t = h_26;
    }
  else
    {
      t = i_28;
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
ATerm s_5 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_r_25;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  s_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      t_41 = ATgetArgument(t, 0);
      c_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_41;
  if(match_cons(t, sym_CallT_3))
    {
      w_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      z_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_41;
  if(match_cons(t, sym_SVar_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_41;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = y_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_42;
  if(match_cons(t, sym_Seq_2))
    {
      d_42 = ATgetArgument(t, 0);
      f_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_42;
  if(match_cons(t, sym_Match_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_42;
  if(match_cons(t, sym_Build_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_24 = NULL,q_24 = NULL,v_24 = NULL,w_24 = NULL;
        t = term_o_28;
        v_24 = t;
        t = term_p_28;
        w_24 = t;
        t = term_q_28;
        t = d_12(w_24, v_24, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_28) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            m_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, m_24, e_42, g_42);
        t = p_9(m_24, e_42, g_42, t);
        q_24 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_42), (ATerm) ATmakeAppl(sym_Build_1, q_24));
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          ATerm b_25 = NULL,e_25 = NULL,a_27 = NULL,b_27 = NULL;
          t = term_o_28;
          a_27 = t;
          t = term_p_28;
          b_27 = t;
          t = term_q_28;
          t = d_12(b_27, a_27, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm s_28 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) s_28) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              b_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = e_42;
          t = free_vars_3_0(o_5, p_5, tboundin_3_0, t);
          {
            ATerm u_5 (ATerm t)
            {
              ATerm v_5 (ATerm t)
              {
                ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
                u_26 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, b_25, (ATerm) ATmakeAppl(sym_Var_1, u_26));
                v_26 = t;
                t = term_u_28;
                w_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_25, (ATerm) ATmakeAppl(sym_Var_1, u_26)), term_u_28);
                t = e_12(w_5, v_26, w_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_26);
                return(t);
              }
              t = map_1_0(v_5, t);
              t = g_42;
              t = alltd_1_0(Replace_0_0, t);
              if(((e_25 != NULL) && (e_25 != t)))
                _fail(t);
              else
                e_25 = t;
              return(t);
            }
            t = scope_2_0(s_5, u_5, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_42), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_25)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm m_45 = NULL,n_45 = NULL,u_45 = NULL,b_46 = NULL,d_46 = NULL,g_46 = NULL,k_46 = NULL,y_46 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
    d_47 = t;
    if(match_cons(t, sym_Seq_2))
      {
        m_45 = ATgetArgument(t, 0);
        y_46 = ATgetArgument(t, 1);
        t = m_45;
        if(match_cons(t, sym_Choice_2))
          {
            n_45 = ATgetArgument(t, 0);
            b_46 = ATgetArgument(t, 1);
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_27 = NULL,v_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, y_46);
                  u_27 = t;
                  t = term_y_28;
                  v_27 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_y_28, (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, y_46));
                  t = d_12(v_27, u_27, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm b_29 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) b_29) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, n_45, y_46), (ATerm) ATmakeAppl(sym_Seq_2, b_46, y_46));
                  t = bottomup_1_0(x_5, t);
                  ;
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  t = d_47;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                n_45 = ATgetArgument(t, 0);
                b_46 = ATgetArgument(t, 1);
                {
                  ATerm c_29 = t;
                  int d_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_28 = NULL,a_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_e_29, y_46);
                      z_28 = t;
                      t = term_f_29;
                      a_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_f_29, (ATerm) ATmakeAppl(sym_Seq_2, term_e_29, y_46));
                      t = d_12(a_29, z_28, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm g_29 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) g_29) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, n_45, y_46), (ATerm) ATmakeAppl(sym_Seq_2, b_46, y_46));
                      t = bottomup_1_0(x_5, t);
                      ;
                      LocalPopChoice(d_29);
                    }
                  else
                    {
                      t = c_29;
                      t = d_47;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    n_45 = ATgetArgument(t, 0);
                    b_46 = ATgetArgument(t, 1);
                    {
                      ATerm h_29 = t;
                      int i_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_47 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, b_46, y_46);
                          t = x_5(t);
                          m_47 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, n_45, m_47);
                          t = x_5(t);
                          ;
                          LocalPopChoice(i_29);
                        }
                      else
                        {
                          t = h_29;
                          t = d_47;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        n_45 = ATgetArgument(t, 0);
                        b_46 = ATgetArgument(t, 1);
                        {
                          ATerm j_29 = t;
                          int k_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_47 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, b_46, y_46);
                              t = x_5(t);
                              r_47 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, n_45, r_47);
                              t = x_5(t);
                              ;
                              LocalPopChoice(k_29);
                            }
                          else
                            {
                              t = j_29;
                              t = d_47;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            n_45 = ATgetArgument(t, 0);
                            {
                              ATerm l_29 = t;
                              int n_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm w_47 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, y_46, n_45);
                                  t = x_5(t);
                                  w_47 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, w_47);
                                  t = x_5(t);
                                  ;
                                  LocalPopChoice(n_29);
                                }
                              else
                                {
                                  t = l_29;
                                  t = d_47;
                                }
                            }
                          }
                        else
                          {
                            t = d_47;
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
            m_45 = ATgetArgument(t, 0);
            y_46 = ATgetArgument(t, 1);
            t = m_45;
            if(match_cons(t, sym_LChoice_2))
              {
                n_45 = ATgetArgument(t, 0);
                b_46 = ATgetArgument(t, 1);
                {
                  ATerm o_29 = t;
                  int p_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, b_46, y_46);
                      t = x_5(t);
                      f_48 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, n_45, f_48);
                      t = x_5(t);
                      ;
                      LocalPopChoice(p_29);
                    }
                  else
                    {
                      t = o_29;
                      t = d_47;
                    }
                }
              }
            else
              {
                t = d_47;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                m_45 = ATgetArgument(t, 0);
                y_46 = ATgetArgument(t, 1);
                t = m_45;
                if(match_cons(t, sym_Choice_2))
                  {
                    n_45 = ATgetArgument(t, 0);
                    b_46 = ATgetArgument(t, 1);
                    {
                      ATerm q_29 = t;
                      int r_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_48 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, b_46, y_46);
                          t = x_5(t);
                          o_48 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, n_45, o_48);
                          t = x_5(t);
                          ;
                          LocalPopChoice(r_29);
                        }
                      else
                        {
                          t = q_29;
                          t = d_47;
                        }
                    }
                  }
                else
                  {
                    t = d_47;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    m_45 = ATgetArgument(t, 0);
                    y_46 = ATgetArgument(t, 1);
                    t = y_46;
                    if(match_cons(t, sym_Op_2))
                      {
                        b_47 = ATgetArgument(t, 0);
                        c_47 = ATgetArgument(t, 1);
                        t = m_45;
                        if(match_cons(t, sym_CallT_3))
                          {
                            n_45 = ATgetArgument(t, 0);
                            b_46 = ATgetArgument(t, 1);
                            k_46 = ATgetArgument(t, 2);
                            t = k_46;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = b_46;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    d_46 = ATgetFirst((ATermList) t);
                                    g_46 = (ATerm) ATgetNext((ATermList) t);
                                    t = g_46;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = n_45;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            u_45 = ATgetArgument(t, 0);
                                            t = u_45;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm s_29 = t;
                                                int t_29 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_49 = NULL;
                                                    t = c_47;
                                                    {
                                                      ATerm z_5 (ATerm t)
                                                      {
                                                        ATerm m_49 = NULL;
                                                        m_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, d_46), (ATerm) ATempty), m_49);
                                                        return(t);
                                                      }
                                                      t = map_1_0(z_5, t);
                                                      d_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_App_2, d_46, (ATerm) ATmakeAppl(sym_Op_2, b_47, d_49));
                                                      t = bottomup_1_0(x_5, t);
                                                    }
                                                    ;
                                                    LocalPopChoice(t_29);
                                                  }
                                                else
                                                  {
                                                    t = s_29;
                                                    t = d_47;
                                                  }
                                              }
                                            else
                                              {
                                                t = d_47;
                                              }
                                          }
                                        else
                                          {
                                            t = d_47;
                                          }
                                      }
                                    else
                                      {
                                        t = d_47;
                                      }
                                  }
                                else
                                  {
                                    t = d_47;
                                  }
                              }
                            else
                              {
                                t = d_47;
                              }
                          }
                        else
                          {
                            t = d_47;
                          }
                      }
                    else
                      {
                        t = d_47;
                      }
                  }
                else
                  {
                    t = d_47;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(x_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm i_95 (ATerm), ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = bottomup_1_0(i_95, t);
    return(t);
  }
  t = SRTS_all(a_6, t);
  t = i_95(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    ATerm y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL;
    c_51 = t;
    if(match_cons(t, sym_Seq_2))
      {
        y_50 = ATgetArgument(t, 0);
        z_50 = ATgetArgument(t, 1);
        t = z_50;
        if(match_cons(t, sym_Choice_2))
          {
            a_51 = ATgetArgument(t, 0);
            b_51 = ATgetArgument(t, 1);
            {
              ATerm w_29 = t;
              int x_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_51 = NULL,k_51 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, a_51);
                  t = b_6(t);
                  j_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, b_51);
                  t = b_6(t);
                  k_51 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_51, k_51);
                  t = b_6(t);
                  ;
                  LocalPopChoice(x_29);
                }
              else
                {
                  t = w_29;
                  t = c_51;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                a_51 = ATgetArgument(t, 0);
                b_51 = ATgetArgument(t, 1);
                {
                  ATerm y_29 = t;
                  int b_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_52 = NULL,d_52 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, a_51);
                      t = b_6(t);
                      c_52 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, b_51);
                      t = b_6(t);
                      d_52 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, c_52, d_52);
                      t = b_6(t);
                      ;
                      LocalPopChoice(b_30);
                    }
                  else
                    {
                      t = y_29;
                      t = c_51;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    a_51 = ATgetArgument(t, 0);
                    b_51 = ATgetArgument(t, 1);
                    {
                      ATerm c_30 = t;
                      int d_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm m_52 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, y_50, b_51);
                          t = b_6(t);
                          m_52 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, a_51, m_52);
                          t = b_6(t);
                          ;
                          LocalPopChoice(d_30);
                        }
                      else
                        {
                          t = c_30;
                          t = c_51;
                        }
                    }
                  }
                else
                  {
                    t = c_51;
                  }
              }
          }
      }
    else
      {
        t = c_51;
      }
    return(t);
  }
  t = bottomup_1_0(b_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm t_85 (ATerm), ATerm u_85 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,v_52 = NULL,w_52 = NULL,z_52 = NULL,e_53 = NULL,f_53 = NULL,p_4 = NULL;
  f_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_52 = ATgetArgument(t, 0);
      w_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_53);
  t_52 = t;
  t = v_52;
  t = t_85(t);
  z_52 = t;
  t = w_52;
  t = u_85(t);
  e_53 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, z_52, e_53);
  p_4 = t;
  t = SSLsetAnnotations(p_4, t_52);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL,d_5 = NULL;
  g_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      f_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_34);
  e_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, f_34);
  d_5 = t;
  t = SSLsetAnnotations(d_5, e_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm e_30 = t;
  int f_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_30 = t;
      int h_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(h_30);
        }
      else
        {
          t = g_30;
          {
            ATerm i_30 = t;
            int j_30 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_57 = NULL,l_57 = NULL,s_57 = NULL;
                k_57 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    l_57 = ATgetArgument(t, 0);
                    s_57 = ATgetArgument(t, 1);
                    {
                      ATerm m_29 = NULL,z_29 = NULL,a_30 = NULL,s_4 = NULL;
                      t = SSLgetAnnotations(k_57);
                      m_29 = t;
                      t = l_57;
                      t = inline_rules_0_0(t);
                      z_29 = t;
                      t = s_57;
                      t = inline_rules_0_0(t);
                      a_30 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, z_29, a_30);
                      s_4 = t;
                      t = SSLsetAnnotations(s_4, m_29);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        l_57 = ATgetArgument(t, 0);
                        s_57 = ATgetArgument(t, 1);
                        {
                          ATerm z_30 = NULL,c_31 = NULL,d_31 = NULL,w_4 = NULL;
                          t = SSLgetAnnotations(k_57);
                          z_30 = t;
                          t = l_57;
                          t = inline_rules_0_0(t);
                          c_31 = t;
                          t = s_57;
                          t = inline_rules_0_0(t);
                          d_31 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, c_31, d_31);
                          w_4 = t;
                          t = SSLsetAnnotations(w_4, z_30);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            l_57 = ATgetArgument(t, 0);
                            s_57 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm k_30 = t;
                          int l_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_31 = NULL,x_31 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,b_5 = NULL,a_5 = NULL,z_4 = NULL,y_4 = NULL;
                              t = SSLgetAnnotations(k_57);
                              u_31 = t;
                              t = s_57;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  b_32 = ATgetArgument(t, 0);
                                  c_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(s_57);
                              x_31 = t;
                              t = b_32;
                              if(match_cons(t, sym_Match_1))
                                {
                                  p_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(b_32);
                              o_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, p_32);
                              y_4 = t;
                              t = SSLsetAnnotations(y_4, o_32);
                              q_32 = t;
                              t = c_32;
                              if(match_cons(t, sym_Build_1))
                                {
                                  m_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(c_32);
                              e_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, m_32);
                              z_4 = t;
                              t = SSLsetAnnotations(z_4, e_32);
                              n_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_32, n_32);
                              a_5 = t;
                              t = SSLsetAnnotations(a_5, x_31);
                              d_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, l_57, d_32);
                              b_5 = t;
                              t = SSLsetAnnotations(b_5, u_31);
                              ;
                              LocalPopChoice(l_30);
                            }
                          else
                            {
                              t = k_30;
                              {
                                ATerm d_33 = NULL,g_33 = NULL,l_33 = NULL,m_33 = NULL,p_33 = NULL,t_33 = NULL,u_33 = NULL,x_33 = NULL,y_33 = NULL,h_5 = NULL,e_5 = NULL,c_5 = NULL;
                                t = SSLgetAnnotations(k_57);
                                d_33 = t;
                                t = s_57;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    l_33 = ATgetArgument(t, 0);
                                    m_33 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_57);
                                g_33 = t;
                                t = l_33;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    x_33 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(l_33);
                                u_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, x_33);
                                c_5 = t;
                                t = SSLsetAnnotations(c_5, u_33);
                                y_33 = t;
                                t = m_33;
                                t = Seq_2_0(_id, c_6, t);
                                p_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, y_33, p_33);
                                e_5 = t;
                                t = SSLsetAnnotations(e_5, g_33);
                                t_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, l_57, t_33);
                                h_5 = t;
                                t = SSLsetAnnotations(h_5, d_33);
                              }
                            }
                        }
                      }
                  }
                ;
                LocalPopChoice(j_30);
              }
            else
              {
                t = i_30;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(f_30);
    }
  else
    {
      t = e_30;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = term_p_28;
  return(t);
}
ATerm f_6 (ATerm t)
{
  t = term_e_26;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,m_59 = NULL;
  f_59 = t;
  t = term_o_28;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, f_59);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_28, (ATerm) ATmakeAppl(sym_Defined_2, term_m_30, f_59));
  t = e_12(d_6, i_59, m_59, t);
  t = term_d_26;
  g_59 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_n_30, f_59);
  h_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, (ATerm) ATmakeAppl(sym_Defined_2, term_n_30, f_59));
  t = e_12(f_6, g_59, h_59, t);
  t = f_59;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_y_28;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_f_29;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL,v_59 = NULL,y_59 = NULL;
  p_59 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_28, p_59);
  v_59 = t;
  t = term_t_30;
  y_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_28, p_59), term_t_30);
  t = e_12(j_6, v_59, y_59, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_e_29, p_59);
  q_59 = t;
  t = term_x_30;
  r_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_e_29, p_59), term_x_30);
  t = e_12(k_6, q_59, r_59, t);
  t = p_59;
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm s_60 = NULL,b_61 = NULL,c_61 = NULL;
  s_60 = t;
  t = term_s_20;
  b_61 = t;
  t = (ATerm) ATinsert(ATempty, term_y_30);
  c_61 = t;
  t = SSL_printnl(b_61, c_61);
  t = s_60;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm a_31 = t;
  int b_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(b_31);
    }
  else
    {
      t = a_31;
      {
        ATerm e_31 = t;
        int f_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(f_31);
          }
        else
          {
            t = e_31;
            {
              ATerm i_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  i_61 = ATgetArgument(t, 0);
                  m_61 = ATgetArgument(t, 1);
                  n_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_61;
              if(match_cons(t, sym_SVar_1))
                {
                  l_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = l_61;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = m_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_a_23;
            }
          }
      }
    }
  return(t);
}
ATerm n_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(match_cons(g_31, sym_SVar_1))
        {
          ATerm l_31 = ATgetArgument(g_31, 0);
          if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(((ATgetType(h_31) != AT_LIST) || !(ATisEmpty(h_31))))
          _fail(t);
      }
      {
        ATerm i_31 = ATgetArgument(t, 2);
        if(((ATgetType(i_31) != AT_LIST) || !(ATisEmpty(i_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm v_61 = NULL,w_61 = NULL,d_62 = NULL;
  v_61 = t;
  t = term_s_20;
  w_61 = t;
  t = (ATerm) ATinsert(ATempty, term_q_31);
  d_62 = t;
  t = SSL_printnl(w_61, d_62);
  t = v_61;
  return(t);
}
ATerm w_9 (ATerm e_21, ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  t = if_verbose2_1_0(l_6, t);
  t = new_0_0(t);
  q_60 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = e_21;
  t = inline_rules_0_0(t);
  p_60 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, q_60, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_w_25, p_60), (ATerm) ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_60), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_a_23))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(m_6, t);
  {
    ATerm r_31 = t;
    if((PushChoice() == 0))
      {
        ATerm o_61 = NULL,p_61 = NULL,u_61 = NULL;
        t = oncetd_1_0(n_6, t);
        o_61 = t;
        t = term_s_20;
        p_61 = t;
        t = (ATerm) ATinsert(ATempty, term_s_31);
        u_61 = t;
        t = SSL_printnl(p_61, u_61);
        t = o_61;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_31;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(p_6, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm z_96 (ATerm), ATerm t)
{
  ATerm e_62 (ATerm t)
  {
    ATerm t_31 = t;
    int v_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_96(t);
        ;
        LocalPopChoice(v_31);
      }
    else
      {
        t = t_31;
        t = SRTS_all(e_62, t);
      }
    return(t);
  }
  t = e_62(t);
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm s_63 = NULL,t_63 = NULL,u_63 = NULL;
  s_63 = t;
  t = term_s_20;
  t_63 = t;
  t = (ATerm) ATinsert(ATempty, term_w_31);
  u_63 = t;
  t = SSL_printnl(t_63, u_63);
  t = s_63;
  return(t);
}
ATerm r_6 (ATerm t)
{
  t = debug_1_0(w_6, t);
  return(t);
}
ATerm w_6 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  t = term_s_20;
  t_65 = t;
  t = (ATerm) ATinsert(ATempty, term_l_32);
  u_65 = t;
  t = SSL_printnl(t_65, u_65);
  t = s_65;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm g_63 = NULL,i_63 = NULL;
  i_63 = t;
  t = new_0_0(t);
  g_63 = t;
  {
    ATerm r_32 = t;
    int s_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_63), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(s_32);
      }
    else
      {
        t = r_32;
        t = if_verbose2_1_0(q_6, t);
        _fail(t);
      }
    {
      ATerm t_32 = t;
      int u_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_63 = NULL,z_63 = NULL,c_64 = NULL,d_64 = NULL,h_64 = NULL,i_64 = NULL,a_65 = NULL,b_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,q_65 = NULL,r_65 = NULL;
          w_63 = t;
          if(match_cons(t, sym_Seq_2))
            {
              z_63 = ATgetArgument(t, 0);
              l_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_63;
          if(match_cons(t, sym_All_1))
            {
              c_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_64;
          if(match_cons(t, sym_CallT_3))
            {
              d_64 = ATgetArgument(t, 0);
              i_64 = ATgetArgument(t, 1);
              k_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = d_64;
          if(match_cons(t, sym_SVar_1))
            {
              h_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_64;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = i_64;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_65 = ATgetFirst((ATermList) t);
              j_65 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_65;
          if(match_cons(t, sym_CallT_3))
            {
              b_65 = ATgetArgument(t, 0);
              h_65 = ATgetArgument(t, 1);
              i_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_65;
          if(match_cons(t, sym_SVar_1))
            {
              g_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = h_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_65;
          if(match_cons(t, sym_CallT_3))
            {
              m_65 = ATgetArgument(t, 0);
              q_65 = ATgetArgument(t, 1);
              r_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = m_65;
          if(match_cons(t, sym_SVar_1))
            {
              n_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = r_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_65;
          if((g_63 != t))
            {
              _fail(t);
            }
          t = n_65;
          if((g_65 != t))
            {
              _fail(t);
            }
          t = w_63;
          ;
          LocalPopChoice(u_32);
        }
      else
        {
          t = t_32;
          t = if_verbose1_1_0(r_6, t);
          _fail(t);
        }
      t = if_verbose2_1_0(x_6, t);
      t = i_63;
    }
  }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm d_75 = NULL,i_75 = NULL,j_75 = NULL;
  d_75 = t;
  t = term_s_20;
  i_75 = t;
  t = (ATerm) ATinsert(ATempty, term_v_32);
  j_75 = t;
  t = SSL_printnl(i_75, j_75);
  t = d_75;
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = debug_1_0(e_7, t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_w_32;
  return(t);
}
ATerm h_7 (ATerm t)
{
  ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
  n_77 = t;
  t = term_s_20;
  o_77 = t;
  t = (ATerm) ATinsert(ATempty, term_x_32);
  p_77 = t;
  t = SSL_printnl(o_77, p_77);
  t = n_77;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm x_74 = NULL,b_75 = NULL;
  b_75 = t;
  t = new_0_0(t);
  x_74 = t;
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_c_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_74), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        t = if_verbose2_1_0(y_6, t);
        _fail(t);
      }
    {
      ATerm e_33 = t;
      int f_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_75 = NULL,o_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL;
          k_76 = t;
          if(match_cons(t, sym_CallT_3))
            {
              l_76 = ATgetArgument(t, 0);
              n_76 = ATgetArgument(t, 1);
              k_77 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = l_76;
          if(match_cons(t, sym_SVar_1))
            {
              m_76 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_76;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = n_76;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_76 = ATgetFirst((ATermList) t);
              j_77 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_76;
          if(match_cons(t, sym_CallT_3))
            {
              p_76 = ATgetArgument(t, 0);
              q_76 = ATgetArgument(t, 1);
              o_75 = ATgetArgument(t, 2);
              t = p_76;
              if(match_cons(t, sym_SVar_1))
                {
                  k_75 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_75;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = q_76;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_76 = ATgetFirst((ATermList) t);
                  i_77 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = r_76;
              if(match_cons(t, sym_Seq_2))
                {
                  s_76 = ATgetArgument(t, 0);
                  x_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = s_76;
              if(match_cons(t, sym_CallT_3))
                {
                  t_76 = ATgetArgument(t, 0);
                  v_76 = ATgetArgument(t, 1);
                  w_76 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = t_76;
              if(match_cons(t, sym_SVar_1))
                {
                  u_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = v_76;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_76;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_76;
              if(match_cons(t, sym_CallT_3))
                {
                  y_76 = ATgetArgument(t, 0);
                  a_77 = ATgetArgument(t, 1);
                  h_77 = ATgetArgument(t, 2);
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
              t = z_76;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = a_77;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_77 = ATgetFirst((ATermList) t);
                  g_77 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_77;
              if(match_cons(t, sym_CallT_3))
                {
                  c_77 = ATgetArgument(t, 0);
                  e_77 = ATgetArgument(t, 1);
                  f_77 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_77;
              if(match_cons(t, sym_SVar_1))
                {
                  d_77 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_75;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_77;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_76;
              if((x_74 != t))
                {
                  _fail(t);
                }
              t = d_77;
              if((u_76 != t))
                {
                  _fail(t);
                }
              t = k_76;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  p_76 = ATgetArgument(t, 0);
                  q_76 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_76;
              if(match_cons(t, sym_CallT_3))
                {
                  r_76 = ATgetArgument(t, 0);
                  i_77 = ATgetArgument(t, 1);
                  j_76 = ATgetArgument(t, 2);
                  t = r_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      s_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_76;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = i_77;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_75 = ATgetFirst((ATermList) t);
                      i_76 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_75;
                  if(match_cons(t, sym_Seq_2))
                    {
                      s_75 = ATgetArgument(t, 0);
                      x_75 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_75;
                  if(match_cons(t, sym_CallT_3))
                    {
                      t_75 = ATgetArgument(t, 0);
                      v_75 = ATgetArgument(t, 1);
                      w_75 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = t_75;
                  if(match_cons(t, sym_SVar_1))
                    {
                      u_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_75;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_75;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_75;
                  if(match_cons(t, sym_CallT_3))
                    {
                      y_75 = ATgetArgument(t, 0);
                      a_76 = ATgetArgument(t, 1);
                      h_76 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = y_75;
                  if(match_cons(t, sym_SVar_1))
                    {
                      z_75 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_75;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = a_76;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_76 = ATgetFirst((ATermList) t);
                      g_76 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = b_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      c_76 = ATgetArgument(t, 0);
                      e_76 = ATgetArgument(t, 1);
                      f_76 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = c_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_76;
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
                  t = j_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_75;
                  if((x_74 != t))
                    {
                      _fail(t);
                    }
                  t = d_76;
                  if((p_76 != t))
                    {
                      _fail(t);
                    }
                  t = k_76;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      r_76 = ATgetArgument(t, 0);
                      i_77 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_76;
                  if(match_cons(t, sym_Seq_2))
                    {
                      s_76 = ATgetArgument(t, 0);
                      x_76 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = s_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      t_76 = ATgetArgument(t, 0);
                      v_76 = ATgetArgument(t, 1);
                      w_76 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = t_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      u_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = v_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      y_76 = ATgetArgument(t, 0);
                      a_77 = ATgetArgument(t, 1);
                      h_77 = ATgetArgument(t, 2);
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
                  t = z_76;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = a_77;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_77 = ATgetFirst((ATermList) t);
                      g_77 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = b_77;
                  if(match_cons(t, sym_CallT_3))
                    {
                      c_77 = ATgetArgument(t, 0);
                      e_77 = ATgetArgument(t, 1);
                      f_77 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = c_77;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_77;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = j_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_76;
                  if((x_74 != t))
                    {
                      _fail(t);
                    }
                  t = d_77;
                  if((p_76 != t))
                    {
                      _fail(t);
                    }
                  t = k_76;
                }
            }
          ;
          LocalPopChoice(f_33);
        }
      else
        {
          t = e_33;
          t = if_verbose1_1_0(b_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(h_7, t);
      t = b_75;
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  ATerm i_7 (ATerm t)
  {
    t = topdown_1_0(h_95, t);
    return(t);
  }
  t = h_95(t);
  t = SRTS_all(i_7, t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm i_33 = t;
  int j_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm o_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(j_33);
      {
        ATerm r_77 = NULL,s_77 = NULL;
        r_77 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm q_33 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        s_77 = t;
        t = SSLgetAnnotations(r_77);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm v_33 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) v_33) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm z_33 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(z_33) != AT_LIST) || !(ATisEmpty(z_33))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = s_77;
      }
    }
  else
    {
      t = i_33;
      {
        ATerm a_34 = t;
        int b_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm j_34 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_34) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm m_34 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_34);
            _fail(t);
          }
        else
          {
            t = a_34;
          }
      }
    }
  return(t);
}
ATerm y_9 (ATerm a_45, ATerm z_44, ATerm t)
{
  t = a_45;
  t = topdown_1_0(m_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, a_45);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm f_78 = NULL,g_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_78 = ATgetArgument(t, 0);
      l_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_78;
  if(match_cons(t, sym_Match_1))
    {
      j_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_78;
  if(match_cons(t, sym_Var_1))
    {
      k_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_78;
  if(match_cons(t, sym_Seq_2))
    {
      m_78 = ATgetArgument(t, 0);
      g_78 = ATgetArgument(t, 1);
      t = m_78;
      if(match_cons(t, sym_Build_1))
        {
          n_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_78;
      if(match_cons(t, sym_Var_1))
        {
          f_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_78;
      if((k_78 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_78)), g_78);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_78;
      if(match_cons(t, sym_Var_1))
        {
          n_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_78;
      if((k_78 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_78));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm z_78 = NULL,a_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_79 = ATgetArgument(t, 0);
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_79;
  if(match_cons(t, sym_Build_1))
    {
      f_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_79;
  if(match_cons(t, sym_Seq_2))
    {
      h_79 = ATgetArgument(t, 0);
      a_79 = ATgetArgument(t, 1);
      t = h_79;
      if(match_cons(t, sym_Match_1))
        {
          z_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_78;
      if((f_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_79), a_79);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          h_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_79;
      if((f_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, f_79);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm p_79 = NULL,s_79 = NULL,u_79 = NULL,v_79 = NULL,c_80 = NULL,d_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      u_79 = ATgetArgument(t, 0);
      c_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_79;
  if(match_cons(t, sym_Match_1))
    {
      v_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_80;
  if(match_cons(t, sym_Seq_2))
    {
      d_80 = ATgetArgument(t, 0);
      s_79 = ATgetArgument(t, 1);
      t = d_80;
      if(match_cons(t, sym_Match_1))
        {
          p_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_79;
      if((v_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, v_79), s_79);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          d_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_80;
      if((v_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, v_79);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,x_80 = NULL,f_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      x_80 = ATgetArgument(t, 0);
      f_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_80;
  if(match_cons(t, sym_Build_1))
    {
      ATerm r_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_81;
  if(match_cons(t, sym_Seq_2))
    {
      h_81 = ATgetArgument(t, 0);
      i_81 = ATgetArgument(t, 1);
      t = h_81;
      if(match_cons(t, sym_PrimT_3))
        {
          s_80 = ATgetArgument(t, 0);
          t_80 = ATgetArgument(t, 1);
          u_80 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_80, t_80, u_80), i_81);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          h_81 = ATgetArgument(t, 0);
          i_81 = ATgetArgument(t, 1);
          j_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, h_81, i_81, j_81);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm c_82 = NULL,d_82 = NULL,g_82 = NULL,k_82 = NULL,m_82 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_82;
  if(match_cons(t, sym_Build_1))
    {
      ATerm s_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_Seq_2))
    {
      m_82 = ATgetArgument(t, 0);
      d_82 = ATgetArgument(t, 1);
      t = m_82;
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
          m_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, m_82);
    }
  return(t);
}
ATerm o_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_34 = ATgetArgument(t, 0);
      if(((ATgetType(v_34) != AT_LIST) || !(ATisEmpty(v_34))))
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) != AT_LIST) || !(ATisEmpty(x_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm y_83 = NULL,z_83 = NULL,a_84 = NULL,d_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_34 = ATgetArgument(t, 0);
      if(((ATgetType(z_34) == AT_LIST) && !(ATisEmpty(z_34))))
        {
          y_83 = ATgetFirst((ATermList) z_34);
          z_83 = (ATerm) ATgetNext((ATermList) z_34);
        }
      else
        _fail(t);
      {
        ATerm a_35 = ATgetArgument(t, 1);
        if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
          {
            a_84 = ATgetFirst((ATermList) a_35);
            d_84 = (ATerm) ATgetNext((ATermList) a_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_83, a_84), (ATerm) ATmakeAppl(sym__2, z_83, d_84));
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm e_84 = NULL,f_84 = NULL;
  if(match_cons(t, sym__2))
    {
      e_84 = ATgetArgument(t, 0);
      f_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_84), e_84);
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm g_84 = NULL,j_84 = NULL;
  if(match_cons(t, sym__2))
    {
      g_84 = ATgetArgument(t, 0);
      j_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_84), (ATerm) ATmakeAppl(sym_Match_1, j_84));
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_35 = ATgetArgument(t, 0);
      if(((ATgetType(e_35) != AT_LIST) || !(ATisEmpty(e_35))))
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
ATerm v_7 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,s_84 = NULL,t_84 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_35 = ATgetArgument(t, 0);
      if(((ATgetType(g_35) == AT_LIST) && !(ATisEmpty(g_35))))
        {
          o_84 = ATgetFirst((ATermList) g_35);
          p_84 = (ATerm) ATgetNext((ATermList) g_35);
        }
      else
        _fail(t);
      {
        ATerm h_35 = ATgetArgument(t, 1);
        if(((ATgetType(h_35) == AT_LIST) && !(ATisEmpty(h_35))))
          {
            s_84 = ATgetFirst((ATermList) h_35);
            t_84 = (ATerm) ATgetNext((ATermList) h_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_84, s_84), (ATerm) ATmakeAppl(sym__2, p_84, t_84));
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm u_84 = NULL,v_84 = NULL;
  if(match_cons(t, sym__2))
    {
      u_84 = ATgetArgument(t, 0);
      v_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_84), u_84);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm w_84 = NULL,x_84 = NULL;
  if(match_cons(t, sym__2))
    {
      w_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_84), (ATerm) ATmakeAppl(sym_Match_1, x_84));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_82 = NULL,a_83 = NULL,b_83 = NULL,e_83 = NULL,f_83 = NULL,h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL,p_83 = NULL,q_83 = NULL;
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
        ATerm x_83 = NULL;
        t = k_83;
        if(match_cons(t, sym_Match_1))
          {
            p_83 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = p_83;
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
        x_83 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_83), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_83, i_83)), b_83));
      }
    }
  else
    {
      ATerm n_84 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          k_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_83;
      if(match_cons(t, sym_Op_2))
        {
          p_83 = ATgetArgument(t, 0);
          q_83 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_83;
      if((h_83 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, i_83, q_83);
      t = genzip_4_0(u_7, v_7, x_7, y_7, t);
      n_84 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_84), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_83, i_83)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm a_86 = NULL,f_86 = NULL,g_86 = NULL,h_86 = NULL,i_86 = NULL,k_86 = NULL,l_86 = NULL,m_86 = NULL;
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
    ATerm k_35 = t;
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
            m_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_86;
        if(match_cons(t, sym_Op_2))
          {
            a_86 = ATgetArgument(t, 0);
            {
              ATerm o_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_86, a_86);
        {
          ATerm p_35 = t;
          if((PushChoice() == 0))
            {
              ATerm c_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_35 = ATgetArgument(t, 0);
                  if((c_35 != ATgetArgument(t, 1)))
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
              t = p_35;
            }
          t = term_q_35;
        }
      }
    else
      {
        t = k_35;
        if(match_cons(t, sym_Match_1))
          {
            l_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_86;
        if(match_cons(t, sym_Op_2))
          {
            m_86 = ATgetArgument(t, 0);
            {
              ATerm r_35 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_86, m_86);
        {
          ATerm s_35 = t;
          if((PushChoice() == 0))
            {
              ATerm n_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  n_35 = ATgetArgument(t, 0);
                  if((n_35 != ATgetArgument(t, 1)))
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
              t = s_35;
            }
          t = term_q_35;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  ATerm q_86 (ATerm t)
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_96(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = SRTS_one(q_86, t);
      }
    return(t);
  }
  t = q_86(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm p_87 = NULL,q_87 = NULL,r_87 = NULL,s_87 = NULL,t_87 = NULL,u_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,z_87 = NULL,a_88 = NULL,b_88 = NULL;
  p_87 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_87 = ATgetArgument(t, 0);
      x_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_87;
  if(match_cons(t, sym_Let_2))
    {
      y_87 = ATgetArgument(t, 0);
      a_88 = ATgetArgument(t, 1);
      {
        ATerm f_88 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, q_87, y_87);
        t = conc_0_0(t);
        f_88 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_88, a_88);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          y_87 = ATgetArgument(t, 0);
          a_88 = ATgetArgument(t, 1);
          b_88 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_87;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_87 = ATgetFirst((ATermList) t);
          w_87 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_87;
      if(match_cons(t, sym_SDefT_4))
        {
          s_87 = ATgetArgument(t, 0);
          t_87 = ATgetArgument(t, 1);
          u_87 = ATgetArgument(t, 2);
          v_87 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = t_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = w_87;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_87;
      if(match_cons(t, sym_SVar_1))
        {
          z_87 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_87;
      if((s_87 != t))
        {
          _fail(t);
        }
      t = v_87;
      {
        ATerm w_35 = t;
        if((PushChoice() == 0))
          {
            ATerm a_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm y_35 = ATgetArgument(t, 0);
                  if(match_cons(y_35, sym_SVar_1))
                    {
                      if((s_87 != ATgetArgument(y_35, 0)))
                        {
                          _fail(ATgetArgument(y_35, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm z_35 = ATgetArgument(t, 1);
                    if(((ATgetType(z_35) != AT_LIST) || !(ATisEmpty(z_35))))
                      _fail(t);
                  }
                  {
                    ATerm b_36 = ATgetArgument(t, 2);
                    if(((ATgetType(b_36) != AT_LIST) || !(ATisEmpty(b_36))))
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
            t = w_35;
          }
        t = v_87;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm o_88 = NULL,p_88 = NULL,s_88 = NULL,t_88 = NULL,u_88 = NULL,v_88 = NULL,y_88 = NULL,z_88 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      y_88 = ATgetArgument(t, 0);
      t = y_88;
      if(match_cons(t, sym_Seq_2))
        {
          v_88 = ATgetArgument(t, 0);
          p_88 = ATgetArgument(t, 1);
          t = v_88;
          if(match_cons(t, sym_Where_1))
            {
              o_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_88;
          if(match_cons(t, sym_Seq_2))
            {
              s_88 = ATgetArgument(t, 0);
              u_88 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_88;
          if(match_cons(t, sym_Build_1))
            {
              t_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, o_88, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_88), u_88)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              v_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, v_88);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          y_88 = ATgetArgument(t, 0);
          t = y_88;
          if(match_cons(t, sym_Test_1))
            {
              v_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, v_88);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              y_88 = ATgetArgument(t, 0);
              t = y_88;
              if(match_cons(t, sym_Not_1))
                {
                  v_88 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, v_88);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  y_88 = ATgetArgument(t, 0);
                  z_88 = ATgetArgument(t, 1);
                  t = z_88;
                  if((y_88 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      y_88 = ATgetArgument(t, 0);
                      z_88 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_88;
                  if((y_88 != t))
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
  ATerm p_89 = NULL,r_89 = NULL,s_89 = NULL,v_89 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      p_89 = ATgetArgument(t, 0);
      v_89 = ATgetArgument(t, 1);
      t = p_89;
      if(match_cons(t, sym_LChoice_2))
        {
          r_89 = ATgetArgument(t, 0);
          s_89 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, r_89, (ATerm) ATmakeAppl(sym_LChoice_2, s_89, v_89));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          p_89 = ATgetArgument(t, 0);
          v_89 = ATgetArgument(t, 1);
          t = p_89;
          if(match_cons(t, sym_Seq_2))
            {
              r_89 = ATgetArgument(t, 0);
              s_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, r_89, (ATerm) ATmakeAppl(sym_Seq_2, s_89, v_89));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              p_89 = ATgetArgument(t, 0);
              v_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_89;
          if(match_cons(t, sym_Choice_2))
            {
              r_89 = ATgetArgument(t, 0);
              s_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, r_89, (ATerm) ATmakeAppl(sym_Choice_2, s_89, v_89));
        }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,q_90 = NULL,r_90 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_90 = ATgetArgument(t, 0);
      r_90 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_90, r_90);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_90 = ATgetArgument(t, 0);
          t = q_90;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_90 = ATgetFirst((ATermList) t);
              n_90 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_90, (ATerm) ATmakeAppl(sym_LChoices_1, n_90));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_35;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_90 = ATgetArgument(t, 0);
              t = q_90;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_90 = ATgetFirst((ATermList) t);
                  n_90 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_90, (ATerm) ATmakeAppl(sym_Choices_1, n_90));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_35;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_90 = ATgetArgument(t, 0);
                  t = q_90;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_90 = ATgetFirst((ATermList) t);
                      n_90 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_90, (ATerm) ATmakeAppl(sym_Seqs_1, n_90));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_a_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      q_90 = ATgetArgument(t, 0);
                      r_90 = ATgetArgument(t, 1);
                      o_90 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, r_90, (ATerm) ATmakeAppl(sym_Op_2, term_k_21, (ATerm) ATinsert(ATinsert(ATempty, o_90), q_90)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          q_90 = ATgetArgument(t, 0);
                          r_90 = ATgetArgument(t, 1);
                          o_90 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_90)), q_90), (ATerm) ATmakeAppl(sym_Build_1, r_90)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              q_90 = ATgetArgument(t, 0);
                              r_90 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, q_90, (ATerm) ATmakeAppl(sym_Match_1, r_90));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  q_90 = ATgetArgument(t, 0);
                                  r_90 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_90), r_90);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      q_90 = ATgetArgument(t, 0);
                                      r_90 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_90), q_90);
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
ATerm b_8 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm q_92 = NULL,w_92 = NULL,x_92 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      q_92 = ATgetArgument(t, 0);
      t = q_92;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_q_35;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          q_92 = ATgetArgument(t, 0);
          t = q_92;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_a_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              q_92 = ATgetArgument(t, 0);
              w_92 = ATgetArgument(t, 1);
              t = q_92;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_q_35;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  q_92 = ATgetArgument(t, 0);
                  w_92 = ATgetArgument(t, 1);
                  t = w_92;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_q_35;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_92 = ATgetArgument(t, 0);
                      w_92 = ATgetArgument(t, 1);
                      t = w_92;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_q_35;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          q_92 = ATgetArgument(t, 0);
                          t = q_92;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_q_35;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              q_92 = ATgetArgument(t, 0);
                              t = q_92;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_q_35;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  q_92 = ATgetArgument(t, 0);
                                  w_92 = ATgetArgument(t, 1);
                                  t = w_92;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_q_35;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      q_92 = ATgetArgument(t, 0);
                                      w_92 = ATgetArgument(t, 1);
                                      t = w_92;
                                      t = fetch_1_0(b_8, t);
                                      t = term_q_35;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          q_92 = ATgetArgument(t, 0);
                                          w_92 = ATgetArgument(t, 1);
                                          t = w_92;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = q_92;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = w_92;
                                                }
                                              else
                                                {
                                                  t = q_92;
                                                }
                                            }
                                          else
                                            {
                                              t = q_92;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = w_92;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              q_92 = ATgetArgument(t, 0);
                                              w_92 = ATgetArgument(t, 1);
                                              t = w_92;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = q_92;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = w_92;
                                                    }
                                                  else
                                                    {
                                                      t = q_92;
                                                    }
                                                }
                                              else
                                                {
                                                  t = q_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = w_92;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  q_92 = ATgetArgument(t, 0);
                                                  t = q_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_q_35;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      q_92 = ATgetArgument(t, 0);
                                                      w_92 = ATgetArgument(t, 1);
                                                      x_92 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = x_92;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, q_92, w_92);
                                                }
                                            }
                                        }
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
  ATerm q_94 = NULL,s_94 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      s_94 = ATgetArgument(t, 0);
      t = s_94;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_a_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          s_94 = ATgetArgument(t, 0);
          t = s_94;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_35;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              s_94 = ATgetArgument(t, 0);
              q_94 = ATgetArgument(t, 1);
              t = q_94;
              if(match_cons(t, sym_Id_0))
                {
                  t = s_94;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = q_94;
                    }
                  else
                    {
                      t = s_94;
                    }
                }
              else
                {
                  t = s_94;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = q_94;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_94 = ATgetArgument(t, 0);
                  q_94 = ATgetArgument(t, 1);
                  t = s_94;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_a_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      s_94 = ATgetArgument(t, 0);
                      q_94 = ATgetArgument(t, 1);
                      t = q_94;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_a_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          s_94 = ATgetArgument(t, 0);
                          q_94 = ATgetArgument(t, 1);
                          t = q_94;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_a_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              s_94 = ATgetArgument(t, 0);
                              t = s_94;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_a_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  s_94 = ATgetArgument(t, 0);
                                  t = s_94;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_a_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      s_94 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = s_94;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_a_23;
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
  ATerm c_36 = t;
  int d_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(d_36);
    }
  else
    {
      t = c_36;
      {
        ATerm e_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_36);
          }
        else
          {
            t = e_36;
            {
              ATerm h_36 = t;
              int i_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_36);
                }
              else
                {
                  t = h_36;
                  {
                    ATerm m_36 = t;
                    int n_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(n_36);
                      }
                    else
                      {
                        t = m_36;
                        {
                          ATerm p_36 = t;
                          int q_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(q_36);
                            }
                          else
                            {
                              t = p_36;
                              {
                                ATerm t_36 = t;
                                int u_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_95 = NULL,v_95 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_95 = ATgetArgument(t, 0);
                                        v_95 = ATgetArgument(t, 1);
                                        t = u_95;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_95;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_95 = ATgetArgument(t, 0);
                                            v_95 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_95;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_95;
                                      }
                                    ;
                                    LocalPopChoice(u_36);
                                  }
                                else
                                  {
                                    t = t_36;
                                    {
                                      ATerm w_36 = t;
                                      int y_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_36);
                                        }
                                      else
                                        {
                                          t = w_36;
                                          {
                                            ATerm d_37 = t;
                                            int i_37 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(i_37);
                                              }
                                            else
                                              {
                                                t = d_37;
                                                {
                                                  ATerm l_37 = t;
                                                  int m_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(m_37);
                                                    }
                                                  else
                                                    {
                                                      t = l_37;
                                                      {
                                                        ATerm p_37 = t;
                                                        int q_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(q_37);
                                                          }
                                                        else
                                                          {
                                                            t = p_37;
                                                            {
                                                              ATerm r_37 = t;
                                                              int s_37 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(s_37);
                                                                }
                                                              else
                                                                {
                                                                  t = r_37;
                                                                  {
                                                                    ATerm t_37 = t;
                                                                    int x_37 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(x_37);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = t_37;
                                                                        {
                                                                          ATerm y_37 = t;
                                                                          int a_38 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(a_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = y_37;
                                                                              {
                                                                                ATerm b_38 = t;
                                                                                int c_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(c_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_38;
                                                                                    {
                                                                                      ATerm a_96 = NULL,b_96 = NULL,c_96 = NULL,d_96 = NULL;
                                                                                      b_96 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          c_96 = ATgetArgument(t, 0);
                                                                                          d_96 = ATgetArgument(t, 1);
                                                                                          t = c_96;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              a_96 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = b_96;
                                                                                          t = y_9(a_96, d_96, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              c_96 = ATgetArgument(t, 0);
                                                                                              d_96 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = c_96;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = d_96;
                                                                                        }
                                                                                    }
                                                                                  }
                                                                              }
                                                                            }
                                                                        }
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm repeat_1_0 (ATerm o_108 (ATerm), ATerm t)
{
  ATerm p_96 (ATerm t)
  {
    ATerm d_38 = t;
    int e_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_108(t);
        t = p_96(t);
        ;
        LocalPopChoice(e_38);
      }
    else
      {
        t = d_38;
      }
    return(t);
  }
  t = p_96(t);
  return(t);
}
ATerm downup_1_0 (ATerm j_95 (ATerm), ATerm t)
{
  t = j_95(t);
  {
    ATerm f_8 (ATerm t)
    {
      t = downup_1_0(j_95, t);
      return(t);
    }
    t = SRTS_all(f_8, t);
    t = j_95(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm w_101 (ATerm), ATerm x_101 (ATerm), ATerm t)
{
  ATerm x_96 (ATerm t)
  {
    ATerm f_38 = t;
    int h_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_101(t);
        ;
        LocalPopChoice(h_38);
      }
    else
      {
        t = f_38;
        {
          ATerm q_96 = NULL,r_96 = NULL,t_96 = NULL,u_96 = NULL,v_96 = NULL,w_96 = NULL,o_6 = NULL;
          t = v_101(t);
          w_96 = t;
          if(match_cons(t, sym__2))
            {
              r_96 = ATgetArgument(t, 0);
              t_96 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(w_96);
          q_96 = t;
          t = r_96;
          t = x_101(t);
          u_96 = t;
          t = t_96;
          t = x_96(t);
          v_96 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_96, v_96);
          o_6 = t;
          t = SSLsetAnnotations(o_6, q_96);
          t = w_101(t);
        }
      }
    return(t);
  }
  t = x_96(t);
  return(t);
}
ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_38 = ATgetArgument(t, 0);
      if(((ATgetType(i_38) != AT_LIST) || !(ATisEmpty(i_38))))
        _fail(t);
      {
        ATerm j_38 = ATgetArgument(t, 1);
        if(((ATgetType(j_38) != AT_LIST) || !(ATisEmpty(j_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_38 = ATgetArgument(t, 0);
      if(((ATgetType(q_38) == AT_LIST) && !(ATisEmpty(q_38))))
        {
          u_97 = ATgetFirst((ATermList) q_38);
          v_97 = (ATerm) ATgetNext((ATermList) q_38);
        }
      else
        _fail(t);
      {
        ATerm v_38 = ATgetArgument(t, 1);
        if(((ATgetType(v_38) == AT_LIST) && !(ATisEmpty(v_38))))
          {
            w_97 = ATgetFirst((ATermList) v_38);
            x_97 = (ATerm) ATgetNext((ATermList) v_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_97, w_97), (ATerm) ATmakeAppl(sym__2, v_97, x_97));
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm y_97 = NULL,z_97 = NULL;
  if(match_cons(t, sym__2))
    {
      y_97 = ATgetArgument(t, 0);
      z_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_97), y_97);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_97 = NULL,i_97 = NULL,j_97 = NULL,l_97 = NULL;
  h_97 = t;
  {
    ATerm w_38 = t;
    int x_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_38 = ATgetArgument(t, 0);
            ATerm z_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(x_38);
        t = h_97;
      }
    else
      {
        t = w_38;
        {
          ATerm t_97 = NULL;
          if(match_cons(t, sym__3))
            {
              i_97 = ATgetArgument(t, 0);
              j_97 = ATgetArgument(t, 1);
              l_97 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_97, j_97);
          t = genzip_4_0(i_8, j_8, l_8, _id, t);
          t_97 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_97, l_97);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_121 (ATerm), ATerm j_121 (ATerm), ATerm t)
{
  ATerm b_98 = NULL,c_98 = NULL;
  ATerm m_8 (ATerm t)
  {
    ATerm f_36 = NULL;
    t = i_121(t);
    f_36 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_36, not_null(c_98));
    t = lookup_0_0(t);
    t = j_121(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((c_98 != NULL) && (c_98 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_98 = ATgetArgument(t, 0);
      b_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_98;
  t = alltd_1_0(m_8, t);
  return(t);
}
ATerm n_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_39 = ATgetArgument(t, 0);
      if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
        _fail(t);
      {
        ATerm b_39 = ATgetArgument(t, 1);
        if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm j_37 = NULL,n_37 = NULL,o_37 = NULL,u_37 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_39 = ATgetArgument(t, 0);
      if(((ATgetType(c_39) == AT_LIST) && !(ATisEmpty(c_39))))
        {
          j_37 = ATgetFirst((ATermList) c_39);
          n_37 = (ATerm) ATgetNext((ATermList) c_39);
        }
      else
        _fail(t);
      {
        ATerm d_39 = ATgetArgument(t, 1);
        if(((ATgetType(d_39) == AT_LIST) && !(ATisEmpty(d_39))))
          {
            o_37 = ATgetFirst((ATermList) d_39);
            u_37 = (ATerm) ATgetNext((ATermList) d_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_37, o_37), (ATerm) ATmakeAppl(sym__2, n_37, u_37));
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm v_37 = NULL,z_37 = NULL;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      z_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_37), v_37);
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm p_38 = NULL,r_38 = NULL,s_38 = NULL,t_38 = NULL,u_38 = NULL;
  if(match_cons(t, sym__2))
    {
      p_38 = ATgetArgument(t, 0);
      u_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_38;
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm g_39 = ATgetArgument(t, 0);
            r_38 = ATgetArgument(t, 1);
            s_38 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(f_39);
        t = (ATerm) ATmakeAppl(sym_SDef_3, u_38, r_38, s_38);
      }
    else
      {
        t = e_39;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm h_39 = ATgetArgument(t, 0);
            r_38 = ATgetArgument(t, 1);
            s_38 = ATgetArgument(t, 2);
            t_38 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, u_38, r_38, s_38, t_38);
      }
  }
  return(t);
}
ATerm u_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_39 = ATgetArgument(t, 0);
      if(((ATgetType(i_39) != AT_LIST) || !(ATisEmpty(i_39))))
        _fail(t);
      {
        ATerm j_39 = ATgetArgument(t, 1);
        if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_39 = ATgetArgument(t, 0);
      if(((ATgetType(k_39) == AT_LIST) && !(ATisEmpty(k_39))))
        {
          n_40 = ATgetFirst((ATermList) k_39);
          o_40 = (ATerm) ATgetNext((ATermList) k_39);
        }
      else
        _fail(t);
      {
        ATerm l_39 = ATgetArgument(t, 1);
        if(((ATgetType(l_39) == AT_LIST) && !(ATisEmpty(l_39))))
          {
            p_40 = ATgetFirst((ATermList) l_39);
            q_40 = (ATerm) ATgetNext((ATermList) l_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_40, p_40), (ATerm) ATmakeAppl(sym__2, o_40, q_40));
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL;
  if(match_cons(t, sym__2))
    {
      z_40 = ATgetArgument(t, 0);
      a_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_41), z_40);
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm h_41 = NULL,j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      h_41 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_41;
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(n_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_41);
      }
    else
      {
        t = m_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_39 = ATgetArgument(t, 0);
            j_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_41, j_41);
      }
  }
  return(t);
}
ATerm i_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_39 = ATgetArgument(t, 0);
      if(((ATgetType(r_39) != AT_LIST) || !(ATisEmpty(r_39))))
        _fail(t);
      {
        ATerm s_39 = ATgetArgument(t, 1);
        if(((ATgetType(s_39) != AT_LIST) || !(ATisEmpty(s_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_10 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_39 = ATgetArgument(t, 0);
      if(((ATgetType(t_39) == AT_LIST) && !(ATisEmpty(t_39))))
        {
          y_42 = ATgetFirst((ATermList) t_39);
          z_42 = (ATerm) ATgetNext((ATermList) t_39);
        }
      else
        _fail(t);
      {
        ATerm u_39 = ATgetArgument(t, 1);
        if(((ATgetType(u_39) == AT_LIST) && !(ATisEmpty(u_39))))
          {
            a_43 = ATgetFirst((ATermList) u_39);
            b_43 = (ATerm) ATgetNext((ATermList) u_39);
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
ATerm l_10 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  if(match_cons(t, sym__2))
    {
      c_43 = ATgetArgument(t, 0);
      d_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_43), c_43);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm f_43 = NULL,h_43 = NULL,i_43 = NULL;
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_43;
  {
    ATerm v_39 = t;
    int w_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_43);
      }
    else
      {
        t = v_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_39 = ATgetArgument(t, 0);
            h_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_43, h_43);
      }
  }
  return(t);
}
ATerm n_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_39 = ATgetArgument(t, 0);
      if(((ATgetType(z_39) != AT_LIST) || !(ATisEmpty(z_39))))
        _fail(t);
      {
        ATerm a_40 = ATgetArgument(t, 1);
        if(((ATgetType(a_40) != AT_LIST) || !(ATisEmpty(a_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      if(((ATgetType(c_40) == AT_LIST) && !(ATisEmpty(c_40))))
        {
          e_44 = ATgetFirst((ATermList) c_40);
          f_44 = (ATerm) ATgetNext((ATermList) c_40);
        }
      else
        _fail(t);
      {
        ATerm d_40 = ATgetArgument(t, 1);
        if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
          {
            g_44 = ATgetFirst((ATermList) d_40);
            h_44 = (ATerm) ATgetNext((ATermList) d_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_44, g_44), (ATerm) ATmakeAppl(sym__2, f_44, h_44));
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_44), i_44);
  return(t);
}
ATerm x_10 (ATerm t)
{
  ATerm l_44 = NULL,n_44 = NULL,o_44 = NULL;
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      o_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_44;
  {
    ATerm e_40 = t;
    int f_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(f_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_44);
      }
    else
      {
        t = e_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_40 = ATgetArgument(t, 0);
            n_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_44, n_44);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm f_106 = NULL,g_106 = NULL,h_106 = NULL,i_106 = NULL,o_106 = NULL;
  h_106 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_106 = ATgetArgument(t, 0);
      o_106 = ATgetArgument(t, 1);
      {
        ATerm v_36 = NULL,b_37 = NULL,h_37 = NULL,t_12 = NULL;
        t = SSLgetAnnotations(h_106);
        v_36 = t;
        t = i_106;
        t = x_124(t);
        h_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_106, h_37);
        t = genzip_4_0(n_8, q_8, r_8, s_8, t);
        b_37 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, b_37, o_106);
        t_12 = t;
        t = SSLsetAnnotations(t_12, v_36);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_106 = ATgetArgument(t, 0);
          o_106 = ATgetArgument(t, 1);
          f_106 = ATgetArgument(t, 2);
          {
            ATerm o_39 = NULL,b_40 = NULL,l_40 = NULL,v_12 = NULL;
            t = SSLgetAnnotations(h_106);
            o_39 = t;
            t = o_106;
            t = x_124(t);
            l_40 = t;
            t = (ATerm) ATmakeAppl(sym__2, o_106, l_40);
            t = genzip_4_0(u_8, v_8, e_10, f_10, t);
            b_40 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, i_106, b_40, f_106);
            v_12 = t;
            t = SSLsetAnnotations(v_12, o_39);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_106 = ATgetArgument(t, 0);
              o_106 = ATgetArgument(t, 1);
              f_106 = ATgetArgument(t, 2);
              g_106 = ATgetArgument(t, 3);
              {
                ATerm q_42 = NULL,v_42 = NULL,w_42 = NULL,w_12 = NULL;
                t = SSLgetAnnotations(h_106);
                q_42 = t;
                t = o_106;
                t = x_124(t);
                w_42 = t;
                t = (ATerm) ATmakeAppl(sym__2, o_106, w_42);
                t = genzip_4_0(i_10, j_10, l_10, m_10, t);
                v_42 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_106, v_42, f_106, g_106);
                w_12 = t;
                t = SSLsetAnnotations(w_12, q_42);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  i_106 = ATgetArgument(t, 0);
                  o_106 = ATgetArgument(t, 1);
                  f_106 = ATgetArgument(t, 2);
                  g_106 = ATgetArgument(t, 3);
                  {
                    ATerm w_43 = NULL,b_44 = NULL,c_44 = NULL,x_12 = NULL;
                    t = SSLgetAnnotations(h_106);
                    w_43 = t;
                    t = o_106;
                    t = x_124(t);
                    c_44 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_106, c_44);
                    t = genzip_4_0(n_10, p_10, q_10, x_10, t);
                    b_44 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_106, b_44, f_106, g_106);
                    x_12 = t;
                    t = SSLsetAnnotations(x_12, w_43);
                  }
                }
              else
                {
                  ATerm s_45 = NULL,w_45 = NULL,a_13 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      i_106 = ATgetArgument(t, 0);
                      o_106 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_106);
                  s_45 = t;
                  t = i_106;
                  t = x_124(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_45 = ATgetFirst((ATermList) t);
                      {
                        ATerm i_40 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, w_45, o_106);
                  a_13 = t;
                  t = SSLsetAnnotations(a_13, s_45);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm n_110 = NULL,o_110 = NULL,p_110 = NULL,q_110 = NULL,r_110 = NULL;
  p_110 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_110 = ATgetArgument(t, 0);
      r_110 = ATgetArgument(t, 1);
      {
        ATerm h_46 = NULL,l_46 = NULL,m_46 = NULL,h_13 = NULL;
        t = SSLgetAnnotations(p_110);
        h_46 = t;
        t = q_110;
        t = y_124(t);
        l_46 = t;
        t = r_110;
        t = y_124(t);
        m_46 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, l_46, m_46);
        h_13 = t;
        t = SSLsetAnnotations(h_13, h_46);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          q_110 = ATgetArgument(t, 0);
          r_110 = ATgetArgument(t, 1);
          n_110 = ATgetArgument(t, 2);
          {
            ATerm v_46 = NULL,a_47 = NULL,f_47 = NULL,g_47 = NULL,k_13 = NULL;
            t = SSLgetAnnotations(p_110);
            v_46 = t;
            t = q_110;
            t = a_125(t);
            a_47 = t;
            t = r_110;
            t = a_125(t);
            f_47 = t;
            t = n_110;
            t = y_124(t);
            g_47 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_47, f_47, g_47);
            k_13 = t;
            t = SSLsetAnnotations(k_13, v_46);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              q_110 = ATgetArgument(t, 0);
              r_110 = ATgetArgument(t, 1);
              n_110 = ATgetArgument(t, 2);
              o_110 = ATgetArgument(t, 3);
              {
                ATerm s_48 = NULL,b_49 = NULL,c_49 = NULL,e_49 = NULL,f_49 = NULL,m_13 = NULL;
                t = SSLgetAnnotations(p_110);
                s_48 = t;
                t = q_110;
                t = a_125(t);
                b_49 = t;
                t = r_110;
                t = a_125(t);
                c_49 = t;
                t = n_110;
                t = a_125(t);
                e_49 = t;
                t = o_110;
                t = y_124(t);
                f_49 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_49, c_49, e_49, f_49);
                m_13 = t;
                t = SSLsetAnnotations(m_13, s_48);
              }
            }
          else
            {
              ATerm q_49 = NULL,t_49 = NULL,u_49 = NULL,p_13 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  q_110 = ATgetArgument(t, 0);
                  r_110 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(p_110);
              q_49 = t;
              t = q_110;
              t = a_125(t);
              t_49 = t;
              t = r_110;
              t = y_124(t);
              u_49 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, t_49, u_49);
              p_13 = t;
              t = SSLsetAnnotations(p_13, q_49);
            }
        }
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm y_110 = NULL;
  ATerm j_40 = t;
  int k_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_110 = ATgetArgument(t, 0);
          {
            ATerm m_40 = ATgetArgument(t, 1);
          }
          {
            ATerm r_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_40);
      t = y_110;
    }
  else
    {
      t = j_40;
      if(match_cons(t, sym_SDefT_4))
        {
          y_110 = ATgetArgument(t, 0);
          {
            ATerm s_40 = ATgetArgument(t, 1);
          }
          {
            ATerm t_40 = ATgetArgument(t, 2);
          }
          {
            ATerm u_40 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = y_110;
    }
  return(t);
}
ATerm j_11 (ATerm k_73, ATerm j_73, ATerm t)
{
  t = k_73;
  t = map_1_0(y_10, t);
  return(t);
}
ATerm SVar_1_0 (ATerm e_85 (ATerm), ATerm t)
{
  ATerm i_111 = NULL,j_111 = NULL,o_111 = NULL,p_111 = NULL,b_14 = NULL;
  p_111 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_111 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_111);
  i_111 = t;
  t = j_111;
  t = e_85(t);
  o_111 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_111);
  b_14 = t;
  t = SSLsetAnnotations(b_14, i_111);
  return(t);
}
ATerm u_11 (ATerm k_122 (ATerm), ATerm l_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm v_64, ATerm u_64, ATerm t_64, ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm t_111 = NULL;
    t_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_111, t_64);
    t = k_122(t);
    return(t);
  }
  ATerm m_11 (ATerm t)
  {
    ATerm u_111 = NULL;
    u_111 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_111, u_64);
    t = k_122(t);
    return(t);
  }
  t = v_64;
  t = l_122(b_11, m_11, _id, t);
  return(t);
}
ATerm c_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_40 = ATgetArgument(t, 0);
      if(((ATgetType(v_40) != AT_LIST) || !(ATisEmpty(v_40))))
        _fail(t);
      {
        ATerm w_40 = ATgetArgument(t, 1);
        if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_13 (ATerm t)
{
  ATerm e_112 = NULL,f_112 = NULL,g_112 = NULL,h_112 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
        {
          e_112 = ATgetFirst((ATermList) x_40);
          f_112 = (ATerm) ATgetNext((ATermList) x_40);
        }
      else
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
          {
            g_112 = ATgetFirst((ATermList) y_40);
            h_112 = (ATerm) ATgetNext((ATermList) y_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_112, g_112), (ATerm) ATmakeAppl(sym__2, f_112, h_112));
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm i_112 = NULL,j_112 = NULL;
  if(match_cons(t, sym__2))
    {
      i_112 = ATgetArgument(t, 0);
      j_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_112), i_112);
  return(t);
}
ATerm v_11 (ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm), ATerm n_64, ATerm q_64, ATerm t)
{
  ATerm y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL,d_112 = NULL;
  t = n_64;
  t = e_122(t);
  y_111 = t;
  t = map_1_0(new_0_0, t);
  z_111 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_111, z_111);
  t = genzip_4_0(c_13, d_13, e_13, _id, t);
  d_112 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_112, q_64);
  t = conc_0_0(t);
  a_112 = t;
  t = n_64;
  {
    ATerm f_13 (ATerm t)
    {
      t = z_111;
      return(t);
    }
    t = f_122(f_13, t);
    b_112 = t;
    t = (ATerm) ATmakeAppl(sym__3, b_112, q_64, a_112);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL,r_112 = NULL,s_112 = NULL,t_112 = NULL,u_112 = NULL;
  q_112 = t;
  if(match_cons(t, sym__2))
    {
      r_112 = ATgetArgument(t, 0);
      s_112 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_112;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_112 = ATgetFirst((ATermList) t);
      u_112 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_112;
  if(match_cons(t, sym__2))
    {
      o_112 = ATgetArgument(t, 0);
      p_112 = ATgetArgument(t, 1);
      {
        ATerm b_41 = t;
        int c_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_112;
            if((r_112 != t))
              {
                _fail(t);
              }
            t = p_112;
            ;
            LocalPopChoice(c_41);
          }
        else
          {
            t = b_41;
            t = (ATerm) ATmakeAppl(sym__2, r_112, u_112);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_112, u_112);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm y_113 (ATerm t)
  {
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_111(t);
        ;
        LocalPopChoice(e_41);
      }
    else
      {
        t = d_41;
        {
          ATerm t_113 = NULL,w_113 = NULL,x_113 = NULL;
          ATerm g_13 (ATerm t)
          {
            ATerm f_50 = NULL;
            f_50 = t;
            t = (ATerm) ATmakeAppl(sym__2, f_50, not_null(x_113));
            t = y_113(t);
            return(t);
          }
          t_113 = t;
          if(match_cons(t, sym__2))
            {
              w_113 = ATgetArgument(t, 0);
              if(((x_113 != NULL) && (x_113 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                x_113 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_113;
          t = SRTS_all(g_13, t);
        }
      }
    return(t);
  }
  t = y_113(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_121 (ATerm (ATerm), ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_122 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm c_114 = NULL;
  ATerm r_114 (ATerm t)
  {
    ATerm r_13 (ATerm t)
    {
      ATerm l_114 = NULL,m_114 = NULL,n_114 = NULL;
      l_114 = t;
      if(match_cons(t, sym__2))
        {
          m_114 = ATgetArgument(t, 0);
          n_114 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_13 (ATerm t)
            {
              ATerm q_114 = NULL;
              q_114 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_114, n_114);
              t = lookup_0_0(t);
              return(t);
            }
            t = m_114;
            t = z_121(s_13, t);
            ;
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm x_50 = NULL,f_51 = NULL,g_51 = NULL;
              t = l_114;
              t = v_11(a_122, c_122, m_114, n_114, t);
              if(match_cons(t, sym__3))
                {
                  x_50 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                  g_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = u_11(r_114, b_122, x_50, f_51, g_51, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(r_13, t);
    return(t);
  }
  c_114 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_114, (ATerm) ATempty);
  t = r_114(t);
  return(t);
}
ATerm t_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_41 = ATgetArgument(t, 0);
      if(((ATgetType(i_41) != AT_LIST) || !(ATisEmpty(i_41))))
        _fail(t);
      {
        ATerm l_41 = ATgetArgument(t, 1);
        if(((ATgetType(l_41) != AT_LIST) || !(ATisEmpty(l_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
        {
          k_53 = ATgetFirst((ATermList) m_41);
          l_53 = (ATerm) ATgetNext((ATermList) m_41);
        }
      else
        _fail(t);
      {
        ATerm n_41 = ATgetArgument(t, 1);
        if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
          {
            m_53 = ATgetFirst((ATermList) n_41);
            n_53 = (ATerm) ATgetNext((ATermList) n_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_53, m_53), (ATerm) ATmakeAppl(sym__2, l_53, n_53));
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm o_53 = NULL,t_53 = NULL;
  if(match_cons(t, sym__2))
    {
      o_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_53), o_53);
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm w_53 = NULL,z_53 = NULL,a_54 = NULL;
  if(match_cons(t, sym__2))
    {
      w_53 = ATgetArgument(t, 0);
      a_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_53;
  {
    ATerm o_41 = t;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_54);
      }
    else
      {
        t = o_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm r_41 = ATgetArgument(t, 0);
            z_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_54, z_53);
      }
  }
  return(t);
}
ATerm x_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm u_41 = ATgetArgument(t, 0);
      if(((ATgetType(u_41) != AT_LIST) || !(ATisEmpty(u_41))))
        _fail(t);
      {
        ATerm v_41 = ATgetArgument(t, 1);
        if(((ATgetType(v_41) != AT_LIST) || !(ATisEmpty(v_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_13 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,i_56 = NULL,j_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_42 = ATgetArgument(t, 0);
      if(((ATgetType(a_42) == AT_LIST) && !(ATisEmpty(a_42))))
        {
          y_55 = ATgetFirst((ATermList) a_42);
          z_55 = (ATerm) ATgetNext((ATermList) a_42);
        }
      else
        _fail(t);
      {
        ATerm b_42 = ATgetArgument(t, 1);
        if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
          {
            i_56 = ATgetFirst((ATermList) b_42);
            j_56 = (ATerm) ATgetNext((ATermList) b_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_55, i_56), (ATerm) ATmakeAppl(sym__2, z_55, j_56));
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm p_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym__2))
    {
      p_56 = ATgetArgument(t, 0);
      r_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_56), p_56);
  return(t);
}
ATerm a_14 (ATerm t)
{
  ATerm t_56 = NULL,v_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__2))
    {
      t_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_56;
  {
    ATerm h_42 = t;
    int i_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_56);
      }
    else
      {
        t = h_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            v_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_56, v_56);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm t_124 (ATerm), ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL,t_117 = NULL,u_117 = NULL,v_117 = NULL;
  r_117 = t;
  if(match_cons(t, sym_Scope_2))
    {
      s_117 = ATgetArgument(t, 0);
      t_117 = ATgetArgument(t, 1);
      {
        ATerm t_51 = NULL,w_51 = NULL,g_14 = NULL;
        t = SSLgetAnnotations(r_117);
        t_51 = t;
        t = s_117;
        t = t_124(t);
        w_51 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_51, t_117);
        g_14 = t;
        t = SSLsetAnnotations(g_14, t_51);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          s_117 = ATgetArgument(t, 0);
          t_117 = ATgetArgument(t, 1);
          u_117 = ATgetArgument(t, 2);
          v_117 = ATgetArgument(t, 3);
          {
            ATerm a_53 = NULL,h_53 = NULL,i_53 = NULL,n_14 = NULL;
            t = SSLgetAnnotations(r_117);
            a_53 = t;
            t = u_117;
            t = t_124(t);
            i_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_117, i_53);
            t = genzip_4_0(t_13, u_13, v_13, w_13, t);
            h_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_117, t_117, h_53, v_117);
            n_14 = t;
            t = SSLsetAnnotations(n_14, a_53);
          }
        }
      else
        {
          ATerm j_55 = NULL,v_55 = NULL,w_55 = NULL,o_14 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              s_117 = ATgetArgument(t, 0);
              t_117 = ATgetArgument(t, 1);
              u_117 = ATgetArgument(t, 2);
              v_117 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(r_117);
          j_55 = t;
          t = u_117;
          t = t_124(t);
          w_55 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_117, w_55);
          t = genzip_4_0(x_13, y_13, z_13, a_14, t);
          v_55 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, s_117, t_117, v_55, v_117);
          o_14 = t;
          t = SSLsetAnnotations(o_14, j_55);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm w_124 (ATerm), ATerm t)
{
  ATerm c_120 = NULL,d_120 = NULL,e_120 = NULL,f_120 = NULL,g_120 = NULL;
  f_120 = t;
  if(match_cons(t, sym_Scope_2))
    {
      g_120 = ATgetArgument(t, 0);
      c_120 = ATgetArgument(t, 1);
      {
        ATerm v_57 = NULL,d_58 = NULL,f_58 = NULL,w_14 = NULL;
        t = SSLgetAnnotations(f_120);
        v_57 = t;
        t = g_120;
        t = w_124(t);
        d_58 = t;
        t = c_120;
        t = u_124(t);
        f_58 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, d_58, f_58);
        w_14 = t;
        t = SSLsetAnnotations(w_14, v_57);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          g_120 = ATgetArgument(t, 0);
          c_120 = ATgetArgument(t, 1);
          d_120 = ATgetArgument(t, 2);
          e_120 = ATgetArgument(t, 3);
          {
            ATerm q_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,x_14 = NULL;
            t = SSLgetAnnotations(f_120);
            q_58 = t;
            t = g_120;
            t = w_124(t);
            w_58 = t;
            t = c_120;
            t = w_124(t);
            x_58 = t;
            t = d_120;
            t = w_124(t);
            y_58 = t;
            t = e_120;
            t = u_124(t);
            z_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_58, x_58, y_58, z_58);
            x_14 = t;
            t = SSLsetAnnotations(x_14, q_58);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              g_120 = ATgetArgument(t, 0);
              c_120 = ATgetArgument(t, 1);
              d_120 = ATgetArgument(t, 2);
              e_120 = ATgetArgument(t, 3);
              {
                ATerm a_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,y_14 = NULL;
                t = SSLgetAnnotations(f_120);
                a_60 = t;
                t = g_120;
                t = w_124(t);
                f_60 = t;
                t = c_120;
                t = w_124(t);
                g_60 = t;
                t = d_120;
                t = w_124(t);
                h_60 = t;
                t = e_120;
                t = u_124(t);
                i_60 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, f_60, g_60, h_60, i_60);
                y_14 = t;
                t = SSLsetAnnotations(y_14, a_60);
              }
            }
          else
            {
              ATerm x_60 = NULL,z_60 = NULL,z_14 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  g_120 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(f_120);
              x_60 = t;
              t = g_120;
              t = u_124(t);
              z_60 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, z_60);
              z_14 = t;
              t = SSLsetAnnotations(z_14, x_60);
            }
        }
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm o_120 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_120 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_120);
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm l_42 = t;
  int m_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_42);
    }
  else
    {
      t = l_42;
      {
        ATerm q_120 = NULL,r_120 = NULL,s_120 = NULL,t_120 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_120 = ATgetArgument(t, 0);
            t = q_120;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                q_120 = ATgetArgument(t, 0);
                r_120 = ATgetArgument(t, 1);
                s_120 = ATgetArgument(t, 2);
                t_120 = ATgetArgument(t, 3);
                t = s_120;
                t = map_1_0(e_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    q_120 = ATgetArgument(t, 0);
                    r_120 = ATgetArgument(t, 1);
                    s_120 = ATgetArgument(t, 2);
                    t_120 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = s_120;
                t = map_1_0(h_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm b_121 = NULL;
  ATerm n_42 = t;
  int o_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_121 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_42);
      t = b_121;
    }
  else
    {
      t = n_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_121;
    }
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm o_121 = NULL;
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_121 = ATgetArgument(t, 0);
          {
            ATerm t_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_42);
      t = o_121;
    }
  else
    {
      t = r_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_121 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_121;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(c_14, d_14, tboundin_3_0, t);
  return(t);
}
ATerm o_11 (ATerm v_103 (ATerm), ATerm s_30, ATerm r_30, ATerm t)
{
  ATerm r_122 (ATerm t)
  {
    ATerm m_122 = NULL,n_122 = NULL,o_122 = NULL;
    m_122 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_122 = ATgetFirst((ATermList) t);
            o_122 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm u_42 = t;
          int x_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_122;
              {
                ATerm i_14 (ATerm t)
                {
                  t = r_30;
                  return(t);
                }
                t = p_11(v_103, i_14, n_122, o_122, t);
                t = r_122(t);
              }
              ;
              LocalPopChoice(x_42);
            }
          else
            {
              t = u_42;
              {
                ATerm k_61 = NULL,s_61 = NULL,h_15 = NULL;
                t = SSLgetAnnotations(m_122);
                k_61 = t;
                t = o_122;
                t = r_122(t);
                s_61 = t;
                t = (ATerm) ATinsert(CheckATermList(s_61), n_122);
                h_15 = t;
                t = SSLsetAnnotations(h_15, k_61);
              }
            }
        }
      }
    return(t);
  }
  t = s_30;
  t = r_122(t);
  return(t);
}
ATerm foldr_3_0 (ATerm l_106 (ATerm), ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL;
  u_122 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_122;
      t = l_106(t);
    }
  else
    {
      ATerm z_122 = NULL,a_123 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_122 = ATgetFirst((ATermList) t);
          w_122 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_122;
      t = n_106(t);
      z_122 = t;
      t = w_122;
      t = foldr_3_0(l_106, m_106, n_106, t);
      a_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_122, a_123);
      t = m_106(t);
    }
  return(t);
}
ATerm p_11 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm w_30, ATerm v_30, ATerm t)
{
  t = z_103(t);
  {
    ATerm j_14 (ATerm t)
    {
      ATerm d_123 = NULL;
      d_123 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_30, d_123);
      t = y_103(t);
      return(t);
    }
    t = fetch_1_0(j_14, t);
    t = v_30;
  }
  return(t);
}
ATerm q_11 (ATerm q_103 (ATerm), ATerm q_30, ATerm p_30, ATerm t)
{
  ATerm x_123 (ATerm t)
  {
    ATerm o_123 = NULL,t_123 = NULL,u_123 = NULL;
    o_123 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_123;
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
          ATerm e_43 = t;
          int g_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_123;
              {
                ATerm k_14 (ATerm t)
                {
                  t = p_30;
                  return(t);
                }
                t = p_11(q_103, k_14, t_123, u_123, t);
                t = x_123(t);
              }
              ;
              LocalPopChoice(g_43);
            }
          else
            {
              t = e_43;
              {
                ATerm f_62 = NULL,i_62 = NULL,l_15 = NULL;
                t = SSLgetAnnotations(o_123);
                f_62 = t;
                t = u_123;
                t = x_123(t);
                i_62 = t;
                t = (ATerm) ATinsert(CheckATermList(i_62), t_123);
                l_15 = t;
                t = SSLsetAnnotations(l_15, f_62);
              }
            }
        }
      }
    return(t);
  }
  t = q_30;
  t = x_123(t);
  return(t);
}
ATerm at_end_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm d_125 (ATerm t)
  {
    ATerm s_124 = NULL,b_125 = NULL,c_125 = NULL;
    c_125 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_124 = ATgetFirst((ATermList) t);
        b_125 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_62 = NULL,t_62 = NULL,n_15 = NULL;
          t = SSLgetAnnotations(c_125);
          q_62 = t;
          t = b_125;
          t = d_125(t);
          t_62 = t;
          t = (ATerm) ATinsert(CheckATermList(t_62), s_124);
          n_15 = t;
          t = SSLsetAnnotations(n_15, q_62);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_125;
        t = h_100(t);
      }
    return(t);
  }
  t = d_125(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_124 = NULL,d_124 = NULL,e_124 = NULL;
  c_124 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_124;
    }
  else
    {
      ATerm l_14 (ATerm t)
      {
        t = not_null(e_124);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_124 = ATgetFirst((ATermList) t);
          if(((e_124 != NULL) && (e_124 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            e_124 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_124;
      t = at_end_1_0(l_14, t);
    }
  return(t);
}
ATerm r_125 (ATerm h_125, ATerm t)
{
  ATerm i_125 = NULL;
  t = SSL_explode_term(h_125);
  if(match_cons(t, sym__2))
    {
      ATerm j_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_125;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm m_125 = NULL,n_125 = NULL,o_125 = NULL;
  o_125 = t;
  if(match_cons(t, sym__2))
    {
      m_125 = ATgetArgument(t, 0);
      n_125 = ATgetArgument(t, 1);
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_14 (ATerm t)
            {
              t = n_125;
              return(t);
            }
            t = m_125;
            t = at_end_1_0(m_14, t);
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            t = r_125(o_125, t);
          }
      }
    }
  else
    {
      t = r_125(o_125, t);
    }
  return(t);
}
ATerm p_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_43 = ATgetArgument(t, 0);
      if(((ATgetType(m_43) != AT_LIST) || !(ATisEmpty(m_43))))
        _fail(t);
      {
        ATerm n_43 = ATgetArgument(t, 1);
        if(((ATgetType(n_43) != AT_LIST) || !(ATisEmpty(n_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm y_125 = NULL,z_125 = NULL,a_126 = NULL,b_126 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_43 = ATgetArgument(t, 0);
      if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
        {
          y_125 = ATgetFirst((ATermList) o_43);
          z_125 = (ATerm) ATgetNext((ATermList) o_43);
        }
      else
        _fail(t);
      {
        ATerm p_43 = ATgetArgument(t, 1);
        if(((ATgetType(p_43) == AT_LIST) && !(ATisEmpty(p_43))))
          {
            a_126 = ATgetFirst((ATermList) p_43);
            b_126 = (ATerm) ATgetNext((ATermList) p_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_125, a_126), (ATerm) ATmakeAppl(sym__2, z_125, b_126));
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm c_126 = NULL,d_126 = NULL;
  if(match_cons(t, sym__2))
    {
      c_126 = ATgetArgument(t, 0);
      d_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_126), c_126);
  return(t);
}
ATerm s_11 (ATerm t_656, ATerm y_656, ATerm o_66, ATerm t)
{
  ATerm t_125 = NULL,u_125 = NULL,v_125 = NULL,w_125 = NULL;
  t = SSL_explode_term(y_656);
  if(match_cons(t, sym__2))
    {
      t_125 = ATgetArgument(t, 0);
      v_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(t_656);
  if(match_cons(t, sym__2))
    {
      if((t_125 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_125 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_125, v_125);
  t = genzip_4_0(p_14, q_14, r_14, _id, t);
  w_125 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_125, o_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm t)
{
  ATerm f_126 (ATerm t)
  {
    ATerm q_43 = t;
    int r_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_109(t);
        ;
        LocalPopChoice(r_43);
      }
    else
      {
        t = q_43;
        t = e_109(t);
        t = f_126(t);
      }
    return(t);
  }
  t = f_126(t);
  return(t);
}
ATerm for_3_0 (ATerm g_109 (ATerm), ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  t = g_109(t);
  t = while_not_2_0(h_109, i_109, t);
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm m_126 = NULL;
  m_126 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, m_126);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm n_126 = NULL,o_126 = NULL,q_126 = NULL,r_126 = NULL,t_15 = NULL;
  r_126 = t;
  if(match_cons(t, sym__2))
    {
      o_126 = ATgetArgument(t, 0);
      q_126 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_126);
  n_126 = t;
  t = q_126;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_126, q_126);
  t_15 = t;
  t = SSLsetAnnotations(t_15, n_126);
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm l_127 = NULL,m_127 = NULL,n_127 = NULL,o_127 = NULL,p_127 = NULL;
  l_127 = t;
  if(match_cons(t, sym__2))
    {
      m_127 = ATgetArgument(t, 0);
      n_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_127;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_127 = ATgetFirst((ATermList) t);
      p_127 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = z_127(m_127, n_127, l_127, t);
            ;
            LocalPopChoice(t_43);
          }
        else
          {
            t = s_43;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_127), o_127), p_127);
          }
      }
    }
  else
    {
      t = z_127(m_127, n_127, l_127, t);
    }
  return(t);
}
ATerm z_127 (ATerm s_126, ATerm t_126, ATerm u_126, ATerm t)
{
  ATerm v_126 = NULL,y_126 = NULL,u_15 = NULL,b_127 = NULL,c_127 = NULL,d_127 = NULL,e_127 = NULL;
  t = SSLgetAnnotations(u_126);
  v_126 = t;
  t = t_126;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_127 = ATgetFirst((ATermList) t);
      e_127 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_127;
  if(match_cons(t, sym__2))
    {
      c_127 = ATgetArgument(t, 0);
      d_127 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_43 = t;
    int v_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_127;
        if((c_127 != t))
          {
            _fail(t);
          }
        t = e_127;
        ;
        LocalPopChoice(v_43);
      }
    else
      {
        t = u_43;
        t = t_126;
        t = s_11(c_127, d_127, e_127, t);
      }
    y_126 = t;
    t = (ATerm) ATmakeAppl(sym__2, s_126, y_126);
    u_15 = t;
    t = SSLsetAnnotations(u_15, v_126);
  }
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm y_127 = NULL;
  if(match_cons(t, sym__2))
    {
      y_127 = ATgetArgument(t, 0);
      if((y_127 != ATgetArgument(t, 1)))
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
  ATerm x_43 = t;
  int y_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(s_14, t_14, u_14, t);
      ;
      LocalPopChoice(y_43);
    }
  else
    {
      t = x_43;
      {
        ATerm t_127 = NULL,u_127 = NULL,v_127 = NULL;
        t_127 = t;
        if(match_cons(t, sym__2))
          {
            u_127 = ATgetArgument(t, 0);
            v_127 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_127;
        t = q_11(v_14, u_127, v_127, t);
      }
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm d_63 = NULL,e_63 = NULL;
  if(match_cons(t, sym__2))
    {
      d_63 = ATgetArgument(t, 0);
      e_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(e_15, d_63, e_63, t);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm f_63 = NULL;
  if(match_cons(t, sym__2))
    {
      f_63 = ATgetArgument(t, 0);
      if((f_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm f_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  if(match_cons(t, sym__2))
    {
      o_63 = ATgetArgument(t, 0);
      p_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_11(j_15, o_63, p_63, t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm q_63 = NULL;
  if(match_cons(t, sym__2))
    {
      q_63 = ATgetArgument(t, 0);
      if((q_63 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_123 (ATerm), ATerm q_123 (ATerm), ATerm r_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm n_128 (ATerm t)
  {
    ATerm z_43 = t;
    int a_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_123(t);
        ;
        LocalPopChoice(a_44);
      }
    else
      {
        t = z_43;
        {
          ATerm d_44 = t;
          int k_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_128 = NULL,c_128 = NULL,y_62 = NULL,z_62 = NULL;
              b_128 = t;
              t = q_123(t);
              c_128 = t;
              t = b_128;
              {
                ATerm a_15 (ATerm t)
                {
                  ATerm e_128 = NULL;
                  t = n_128(t);
                  e_128 = t;
                  t = (ATerm) ATmakeAppl(sym__2, e_128, c_128);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_123(a_15, n_128, b_15, t);
                z_62 = t;
                t = SSL_explode_term(z_62);
                if(match_cons(t, sym__2))
                  {
                    ATerm m_44 = ATgetArgument(t, 0);
                    y_62 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_62;
                t = foldr_3_0(c_15, d_15, _id, t);
              }
              ;
              LocalPopChoice(k_44);
            }
          else
            {
              t = d_44;
              {
                ATerm j_63 = NULL,k_63 = NULL;
                k_63 = t;
                t = SSL_explode_term(k_63);
                if(match_cons(t, sym__2))
                  {
                    ATerm p_44 = ATgetArgument(t, 0);
                    j_63 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_63;
                t = foldr_3_0(f_15, i_15, n_128, t);
              }
            }
        }
      }
    return(t);
  }
  t = n_128(t);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm a_129 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_129 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_129);
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm q_44 = t;
  int r_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(r_44);
    }
  else
    {
      t = q_44;
      {
        ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL,f_129 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_129 = ATgetArgument(t, 0);
            t = c_129;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_129 = ATgetArgument(t, 0);
                d_129 = ATgetArgument(t, 1);
                e_129 = ATgetArgument(t, 2);
                f_129 = ATgetArgument(t, 3);
                t = e_129;
                t = map_1_0(o_15, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_129 = ATgetArgument(t, 0);
                    d_129 = ATgetArgument(t, 1);
                    e_129 = ATgetArgument(t, 2);
                    f_129 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = e_129;
                t = map_1_0(p_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm n_129 = NULL;
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_129 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_44);
      t = n_129;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_129;
    }
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm w_129 = NULL;
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_129 = ATgetArgument(t, 0);
          {
            ATerm x_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_44);
      t = w_129;
    }
  else
    {
      t = v_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_129 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_129;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm t_128 = NULL,x_128 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      x_128 = ATgetArgument(t, 0);
      t = x_128;
      if(match_cons(t, sym_Rule_3))
        {
          t_128 = ATgetArgument(t, 0);
          {
            ATerm y_44 = ATgetArgument(t, 1);
          }
          {
            ATerm b_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = t_128;
      t = free_vars_3_0(k_15, m_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          x_128 = ATgetArgument(t, 0);
          {
            ATerm c_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = x_128;
    }
  return(t);
}
ATerm Var_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL,d_130 = NULL,x_15 = NULL;
  d_130 = t;
  if(match_cons(t, sym_Var_1))
    {
      b_130 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_130);
  a_130 = t;
  t = b_130;
  t = v_81(t);
  c_130 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, c_130);
  x_15 = t;
  t = SSLsetAnnotations(x_15, a_130);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm d_45 = t;
  int e_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_45);
    }
  else
    {
      t = d_45;
      {
        ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL,p_130 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            m_130 = ATgetArgument(t, 0);
            n_130 = ATgetArgument(t, 1);
            o_130 = ATgetArgument(t, 2);
            p_130 = ATgetArgument(t, 3);
            t = o_130;
            t = map_1_0(r_15, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                m_130 = ATgetArgument(t, 0);
                n_130 = ATgetArgument(t, 1);
                o_130 = ATgetArgument(t, 2);
                p_130 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = o_130;
            t = map_1_0(s_15, t);
          }
      }
    }
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm w_130 = NULL;
  ATerm f_45 = t;
  int g_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_130 = ATgetArgument(t, 0);
          {
            ATerm h_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_45);
      t = w_130;
    }
  else
    {
      t = f_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_130 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_130;
    }
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm f_131 = NULL;
  ATerm i_45 = t;
  int j_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_131 = ATgetArgument(t, 0);
          {
            ATerm k_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_45);
      t = f_131;
    }
  else
    {
      t = i_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_131;
    }
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm i_131 = NULL,j_131 = NULL,k_131 = NULL,l_131 = NULL,m_131 = NULL;
  i_131 = t;
  if(match_cons(t, sym_Let_2))
    {
      j_131 = ATgetArgument(t, 0);
      k_131 = ATgetArgument(t, 1);
      t = i_131;
      t = j_11(j_131, k_131, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          j_131 = ATgetArgument(t, 0);
          k_131 = ATgetArgument(t, 1);
          l_131 = ATgetArgument(t, 2);
          t = k_131;
          t = map_1_0(w_15, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              j_131 = ATgetArgument(t, 0);
              k_131 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, j_131);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  j_131 = ATgetArgument(t, 0);
                  k_131 = ATgetArgument(t, 1);
                  l_131 = ATgetArgument(t, 2);
                  m_131 = ATgetArgument(t, 3);
                  t = k_131;
                  t = map_1_0(y_15, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      j_131 = ATgetArgument(t, 0);
                      k_131 = ATgetArgument(t, 1);
                      l_131 = ATgetArgument(t, 2);
                      m_131 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = k_131;
                  t = map_1_0(a_16, t);
                }
            }
        }
    }
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm u_131 = NULL;
  ATerm l_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_131 = ATgetArgument(t, 0);
          {
            ATerm p_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_45);
      t = u_131;
    }
  else
    {
      t = l_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_131 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_131;
    }
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm f_132 = NULL;
  ATerm q_45 = t;
  int r_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_132 = ATgetArgument(t, 0);
          {
            ATerm t_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_45);
      t = f_132;
    }
  else
    {
      t = q_45;
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
ATerm a_16 (ATerm t)
{
  ATerm o_132 = NULL;
  ATerm v_45 = t;
  int x_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_132 = ATgetArgument(t, 0);
          {
            ATerm y_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_45);
      t = o_132;
    }
  else
    {
      t = v_45;
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
ATerm d_12 (ATerm z_36, ATerm a_37, ATerm t)
{
  ATerm r_132 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_36, a_37);
  t = r_12(z_36, a_37, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_132 = ATgetFirst((ATermList) t);
      {
        ATerm z_45 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_132;
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm o_133 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      o_133 = ATgetArgument(t, 0);
      {
        ATerm a_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = o_133;
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm p_133 = NULL,r_133 = NULL,s_133 = NULL,t_133 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      r_133 = ATgetArgument(t, 0);
      t_133 = ATgetArgument(t, 1);
      p_133 = ATgetArgument(t, 2);
      t = r_133;
      if(match_cons(t, sym_SVar_1))
        {
          s_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_133;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          r_133 = ATgetArgument(t, 0);
          t_133 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_133;
      if(match_cons(t, sym_SVar_1))
        {
          s_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_133;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_133;
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm x_133 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_133 = ATgetArgument(t, 0);
      {
        ATerm c_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_133;
  return(t);
}
ATerm j_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_46 = ATgetArgument(t, 0);
      if(((ATgetType(e_46) != AT_LIST) || !(ATisEmpty(e_46))))
        _fail(t);
      {
        ATerm f_46 = ATgetArgument(t, 1);
        if(((ATgetType(f_46) != AT_LIST) || !(ATisEmpty(f_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_16 (ATerm t)
{
  ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL,b_134 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      if(((ATgetType(i_46) == AT_LIST) && !(ATisEmpty(i_46))))
        {
          y_133 = ATgetFirst((ATermList) i_46);
          z_133 = (ATerm) ATgetNext((ATermList) i_46);
        }
      else
        _fail(t);
      {
        ATerm j_46 = ATgetArgument(t, 1);
        if(((ATgetType(j_46) == AT_LIST) && !(ATisEmpty(j_46))))
          {
            a_134 = ATgetFirst((ATermList) j_46);
            b_134 = (ATerm) ATgetNext((ATermList) j_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_133, a_134), (ATerm) ATmakeAppl(sym__2, z_133, b_134));
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL;
  if(match_cons(t, sym__2))
    {
      c_134 = ATgetArgument(t, 0);
      d_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_134), c_134);
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm e_134 = NULL,f_134 = NULL;
  if(match_cons(t, sym__2))
    {
      e_134 = ATgetArgument(t, 0);
      f_134 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_134), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_134)));
  return(t);
}
ATerm o_16 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm b_133 = NULL,c_133 = NULL,d_133 = NULL,e_133 = NULL,f_133 = NULL,g_133 = NULL,h_133 = NULL,i_133 = NULL,j_133 = NULL,k_133 = NULL,m_133 = NULL,n_133 = NULL,r_63 = NULL,v_63 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm n_46 = ATgetArgument(t, 0);
      if(match_cons(n_46, sym_SVar_1))
        {
          d_133 = ATgetArgument(n_46, 0);
        }
      else
        _fail(t);
      f_133 = ATgetArgument(t, 1);
      j_133 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_133), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  r_63 = t;
  t = term_o_46;
  v_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_46, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, d_133), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = d_12(v_63, r_63, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm p_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_46) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      b_133 = ATgetArgument(t, 1);
      c_133 = ATgetArgument(t, 2);
      i_133 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_133, b_133, i_133, c_133);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((d_133 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      e_133 = ATgetArgument(t, 1);
      {
        ATerm q_46 = ATgetArgument(t, 2);
      }
      g_133 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = e_133;
  t = map_1_0(c_16, t);
  n_133 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_133, f_133, g_133);
  t = substitute_2_0(h_16, _id, t);
  h_133 = t;
  t = i_133;
  t = map_1_0(i_16, t);
  k_133 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_133, k_133);
  t = genzip_4_0(j_16, k_16, l_16, n_16, t);
  m_133 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, k_133, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_133), h_133));
  t = downup_1_0(o_16, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm o_134 = NULL,p_134 = NULL,q_134 = NULL;
  o_134 = t;
  t = term_s_20;
  p_134 = t;
  t = (ATerm) ATinsert(ATempty, term_r_46);
  q_134 = t;
  t = SSL_printnl(p_134, q_134);
  t = o_134;
  return(t);
}
ATerm q_16 (ATerm t)
{
  t = debug_1_0(s_16, t);
  return(t);
}
ATerm s_16 (ATerm t)
{
  t = term_s_46;
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm y_134 = NULL,z_134 = NULL,a_135 = NULL;
  y_134 = t;
  t = term_s_20;
  z_134 = t;
  t = (ATerm) ATinsert(ATempty, term_t_46);
  a_135 = t;
  t = SSL_printnl(z_134, a_135);
  t = y_134;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm m_134 = NULL,n_134 = NULL;
  n_134 = t;
  t = new_0_0(t);
  m_134 = t;
  {
    ATerm u_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_46, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_134), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(w_46);
      }
    else
      {
        t = u_46;
        t = if_verbose2_1_0(p_16, t);
        _fail(t);
      }
    {
      ATerm e_47 = t;
      int h_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_134 = NULL,s_134 = NULL,t_134 = NULL,u_134 = NULL,v_134 = NULL,w_134 = NULL,x_134 = NULL;
          r_134 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              s_134 = ATgetArgument(t, 0);
              x_134 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_134;
          if(match_cons(t, sym_CallT_3))
            {
              t_134 = ATgetArgument(t, 0);
              v_134 = ATgetArgument(t, 1);
              w_134 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = t_134;
          if(match_cons(t, sym_SVar_1))
            {
              u_134 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_134;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_134;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_134;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = u_134;
          if((m_134 != t))
            {
              _fail(t);
            }
          t = r_134;
          ;
          LocalPopChoice(h_47);
        }
      else
        {
          t = e_47;
          t = if_verbose1_1_0(q_16, t);
          _fail(t);
        }
      t = if_verbose2_1_0(t_16, t);
      t = n_134;
    }
  }
  return(t);
}
ATerm check_library_definitions_0_0 (ATerm t)
{
  t = check_that_try_is_try_0_0(t);
  t = check_that_innermost_is_innermost_0_0(t);
  t = check_that_bottomup_is_bottomup_0_0(t);
  return(t);
}
ATerm e_12 (ATerm v_107 (ATerm), ATerm a_36, ATerm x_35, ATerm t)
{
  ATerm b_135 = NULL,c_135 = NULL,d_135 = NULL,e_135 = NULL,f_135 = NULL,g_135 = NULL;
  e_135 = t;
  t = v_107(t);
  b_135 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_135, a_36, x_35);
  t = s_12(b_135, a_36, x_35, t);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_135 = NULL;
        t = term_k_27;
        h_135 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_135, term_k_27);
        t = r_12(b_135, h_135, t);
        ;
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_135 = ATgetFirst((ATermList) t);
        d_135 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_k_27;
    f_135 = t;
    t = (ATerm) ATinsert(CheckATermList(d_135), (ATerm) ATinsert(CheckATermList(c_135), a_36));
    g_135 = t;
    t = SSL_table_put(b_135, f_135, g_135);
    t = e_135;
  }
  return(t);
}
ATerm b_17 (ATerm t)
{
  t = term_o_46;
  return(t);
}
ATerm f_12 (ATerm g_20, ATerm h_20, ATerm j_20, ATerm i_20, ATerm t)
{
  ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL;
  i_135 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_20), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  j_135 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_k_47, h_20, i_20, j_20);
  k_135 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_20), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_k_47, h_20, i_20, j_20));
  t = e_12(b_17, j_135, k_135, t);
  t = i_135;
  return(t);
}
ATerm map_1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm z_135 (ATerm t)
  {
    ATerm w_135 = NULL,x_135 = NULL,y_135 = NULL;
    w_135 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_135;
      }
    else
      {
        ATerm e_64 = NULL,j_64 = NULL,k_64 = NULL,z_15 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_135 = ATgetFirst((ATermList) t);
            y_135 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_135);
        e_64 = t;
        t = x_135;
        t = r_99(t);
        j_64 = t;
        t = y_135;
        t = z_135(t);
        k_64 = t;
        t = (ATerm) ATinsert(CheckATermList(k_64), j_64);
        z_15 = t;
        t = SSLsetAnnotations(z_15, e_64);
      }
    return(t);
  }
  t = z_135(t);
  return(t);
}
ATerm Cons_2_0 (ATerm o_80 (ATerm), ATerm p_80 (ATerm), ATerm t)
{
  ATerm b_136 = NULL,c_136 = NULL,d_136 = NULL,e_136 = NULL,f_136 = NULL,g_136 = NULL,b_16 = NULL;
  g_136 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_136 = ATgetFirst((ATermList) t);
      d_136 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_136);
  b_136 = t;
  t = c_136;
  t = o_80(t);
  e_136 = t;
  t = d_136;
  t = p_80(t);
  f_136 = t;
  t = (ATerm) ATinsert(CheckATermList(f_136), e_136);
  b_16 = t;
  t = SSLsetAnnotations(b_16, b_136);
  return(t);
}
ATerm i_12 (ATerm m_54, ATerm n_54, ATerm t)
{
  ATerm h_136 = NULL;
  t = SSL_fputc(m_54, n_54);
  h_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_136);
  return(t);
}
ATerm j_12 (ATerm a_58, ATerm b_58, ATerm t)
{
  ATerm i_136 = NULL;
  t = SSL_write_term_to_stream_text(a_58, b_58);
  i_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_136);
  return(t);
}
ATerm l_12 (ATerm q_115 (ATerm), ATerm a_527, ATerm e_58, ATerm t)
{
  ATerm j_136 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, a_527, term_l_47);
  t = o_12(t);
  j_136 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_136, e_58);
  t = q_115(t);
  t = fclose_0_0(t);
  t = e_58;
  return(t);
}
ATerm k_12 (ATerm w_57, ATerm x_57, ATerm t)
{
  ATerm k_136 = NULL;
  t = SSL_write_term_to_stream_baf(w_57, x_57);
  k_136 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_136);
  return(t);
}
ATerm d_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm f_65 = NULL,o_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_47 = ATgetArgument(t, 0);
      if(match_cons(n_47, sym_Stream_1))
        {
          f_65 = ATgetArgument(n_47, 0);
        }
      else
        _fail(t);
      o_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(f_65, o_65, t);
  return(t);
}
ATerm f_17 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(match_cons(o_47, sym_Stream_1))
        {
          h_66 = ATgetArgument(o_47, 0);
        }
      else
        _fail(t);
      i_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(h_66, i_66, t);
  e_66 = t;
  t = term_p_47;
  f_66 = t;
  t = e_66;
  if(match_cons(t, sym_Stream_1))
    {
      g_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_47, e_66);
  t = i_12(f_66, g_66, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm o_136 = NULL,p_136 = NULL,q_136 = NULL,r_136 = NULL,s_136 = NULL,u_136 = NULL,v_136 = NULL,w_136 = NULL,x_136 = NULL,y_136 = NULL,y_137 = NULL,z_137 = NULL,e_16 = NULL,d_16 = NULL;
  p_136 = t;
  if(match_cons(t, sym__2))
    {
      w_136 = ATgetArgument(t, 0);
      x_136 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_136);
  v_136 = t;
  t = w_136;
  {
    ATerm q_47 = t;
    int s_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((o_136 != NULL) && (o_136 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                o_136 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(c_17, t);
        ;
        LocalPopChoice(s_47);
      }
    else
      {
        t = q_47;
        t = term_t_47;
        o_136 = t;
      }
    y_136 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_136, x_136);
    d_16 = t;
    t = SSLsetAnnotations(d_16, v_136);
    t = p_136;
    if(match_cons(t, sym__2))
      {
        r_136 = ATgetArgument(t, 0);
        s_136 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_136);
    q_136 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_136, (ATerm) ATmakeAppl(sym__2, not_null(o_136), s_136));
    e_16 = t;
    t = SSLsetAnnotations(e_16, q_136);
    u_136 = t;
    if(match_cons(t, sym__2))
      {
        y_137 = ATgetArgument(t, 0);
        z_137 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm u_47 = t;
      int v_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_64 = NULL,z_64 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_16 = NULL;
          t = SSLgetAnnotations(u_136);
          w_64 = t;
          t = y_137;
          t = fetch_1_0(d_17, t);
          z_64 = t;
          t = z_137;
          if(match_cons(t, sym__2))
            {
              d_65 = ATgetArgument(t, 0);
              e_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_12(e_17, d_65, e_65, t);
          c_65 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_64, c_65);
          f_16 = t;
          t = SSLsetAnnotations(f_16, w_64);
          ;
          LocalPopChoice(v_47);
        }
      else
        {
          t = u_47;
          {
            ATerm y_65 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,g_16 = NULL;
            t = SSLgetAnnotations(u_136);
            y_65 = t;
            t = z_137;
            if(match_cons(t, sym__2))
              {
                c_66 = ATgetArgument(t, 0);
                d_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_12(f_17, c_66, d_66, t);
            b_66 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_137, b_66);
            g_16 = t;
            t = SSLsetAnnotations(g_16, y_65);
          }
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
ATerm apply_strategy_1_0 (ATerm c_117 (ATerm), ATerm t)
{
  ATerm c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL;
  g_138 = t;
  t = dtime_0_0(t);
  t = g_138;
  t = c_117(t);
  f_138 = t;
  t = dtime_0_0(t);
  c_138 = t;
  t = f_138;
  if(match_cons(t, sym__2))
    {
      d_138 = ATgetArgument(t, 0);
      e_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_138), (ATerm) ATmakeAppl(sym_Runtime_1, c_138)), e_138);
  return(t);
}
ATerm u_138 (ATerm o_138, ATerm t)
{
  t = SSL_fclose(o_138);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_138 = NULL,s_138 = NULL;
  s_138 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_138 = ATgetArgument(t, 0);
      {
        ATerm x_47 = t;
        int y_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_138);
            ;
            LocalPopChoice(y_47);
          }
        else
          {
            t = x_47;
            t = u_138(s_138, t);
          }
      }
    }
  else
    {
      t = u_138(s_138, t);
    }
  return(t);
}
ATerm m_12 (ATerm c_58, ATerm t)
{
  t = SSL_read_term_from_stream(c_58);
  return(t);
}
ATerm n_12 (ATerm o_54, ATerm p_54, ATerm t)
{
  ATerm v_138 = NULL;
  t = SSL_fopen(o_54, p_54);
  v_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_138);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_138 = NULL;
  t = SSL_stdin_stream();
  w_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_138);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_138 = NULL;
  t = SSL_stdout_stream();
  x_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_138);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_138 = NULL;
  t = SSL_stderr_stream();
  y_138 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_138);
  return(t);
}
ATerm f_140 (ATerm e_139, ATerm t)
{
  ATerm f_139 = NULL;
  t = SSL_explode_term(e_139);
  if(match_cons(t, sym__2))
    {
      ATerm z_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_47) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_48 = ATgetArgument(t, 1);
        if(((ATgetType(a_48) == AT_LIST) && !(ATisEmpty(a_48))))
          {
            f_139 = ATgetFirst((ATermList) a_48);
            {
              ATerm b_48 = (ATerm) ATgetNext((ATermList) a_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_139;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_139;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_139;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_139;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_140 (ATerm i_139, ATerm j_139, ATerm k_139, ATerm t)
{
  ATerm l_139 = NULL,m_139 = NULL,n_139 = NULL,q_139 = NULL,m_16 = NULL;
  t = SSLgetAnnotations(k_139);
  n_139 = t;
  t = i_139;
  if(match_cons(t, sym_Path_1))
    {
      q_139 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_139, j_139);
  m_16 = t;
  t = SSLsetAnnotations(m_16, n_139);
  if(match_cons(t, sym__2))
    {
      l_139 = ATgetArgument(t, 0);
      m_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(l_139, m_139, t);
  return(t);
}
ATerm h_140 (ATerm s_139, ATerm t_139, ATerm u_139, ATerm t)
{
  ATerm v_139 = NULL,w_139 = NULL,x_139 = NULL,a_140 = NULL,r_16 = NULL;
  t = SSLgetAnnotations(u_139);
  x_139 = t;
  t = SSL_is_string(s_139);
  a_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_140, t_139);
  r_16 = t;
  t = SSLsetAnnotations(r_16, x_139);
  if(match_cons(t, sym__2))
    {
      v_139 = ATgetArgument(t, 0);
      w_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_12(v_139, w_139, t);
  return(t);
}
ATerm o_12 (ATerm t)
{
  ATerm c_140 = NULL,d_140 = NULL,e_140 = NULL;
  c_140 = t;
  if(match_cons(t, sym__2))
    {
      d_140 = ATgetArgument(t, 0);
      e_140 = ATgetArgument(t, 1);
      {
        ATerm c_48 = t;
        int d_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_140(c_140, t);
            ;
            LocalPopChoice(d_48);
          }
        else
          {
            t = c_48;
            {
              ATerm e_48 = t;
              int g_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_140(d_140, e_140, c_140, t);
                  ;
                  LocalPopChoice(g_48);
                }
              else
                {
                  t = e_48;
                  t = h_140(d_140, e_140, c_140, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_140(c_140, t);
    }
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = term_h_48;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_140 = NULL,j_140 = NULL,k_140 = NULL;
  ATerm i_48 = t;
  int j_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_140 = NULL;
      l_140 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_140, term_k_48);
      t = o_12(t);
      ;
      LocalPopChoice(j_48);
    }
  else
    {
      t = i_48;
      t = debug_1_0(g_17, t);
      _fail(t);
    }
  j_140 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_140 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_12(k_140, t);
  i_140 = t;
  t = j_140;
  t = fclose_0_0(t);
  t = i_140;
  return(t);
}
ATerm fetch_1_0 (ATerm b_100 (ATerm), ATerm t)
{
  ATerm j_141 (ATerm t)
  {
    ATerm g_141 = NULL,h_141 = NULL,i_141 = NULL;
    g_141 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_141 = ATgetFirst((ATermList) t);
        i_141 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_48 = t;
      int m_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_66 = NULL,b_67 = NULL,z_16 = NULL;
          t = SSLgetAnnotations(g_141);
          y_66 = t;
          t = h_141;
          t = b_100(t);
          b_67 = t;
          t = (ATerm) ATinsert(CheckATermList(i_141), b_67);
          z_16 = t;
          t = SSLsetAnnotations(z_16, y_66);
          ;
          LocalPopChoice(m_48);
        }
      else
        {
          t = l_48;
          {
            ATerm j_67 = NULL,m_67 = NULL,a_17 = NULL;
            t = SSLgetAnnotations(g_141);
            j_67 = t;
            t = i_141;
            t = j_141(t);
            m_67 = t;
            t = (ATerm) ATinsert(CheckATermList(m_67), h_141);
            a_17 = t;
            t = SSLsetAnnotations(a_17, j_67);
          }
        }
    }
    return(t);
  }
  t = j_141(t);
  return(t);
}
ATerm h_12 (ATerm e_52, ATerm f_52, ATerm t)
{
  t = SSL_strcat(e_52, f_52);
  return(t);
}
ATerm debug_1_0 (ATerm o_115 (ATerm), ATerm t)
{
  ATerm m_141 = NULL,n_141 = NULL,o_141 = NULL,p_141 = NULL;
  m_141 = t;
  t = o_115(t);
  n_141 = t;
  t = term_s_20;
  o_141 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_141), n_141);
  p_141 = t;
  t = SSL_printnl(o_141, p_141);
  t = m_141;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm n_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_48);
    }
  else
    {
      t = n_48;
    }
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_q_48;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_48 = t;
  int t_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_141 = NULL;
      w_141 = t;
      t = SSL_is_string(w_141);
      ;
      LocalPopChoice(t_48);
    }
  else
    {
      t = r_48;
      {
        ATerm u_48 = t;
        int v_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(h_17, t);
            ;
            LocalPopChoice(v_48);
          }
        else
          {
            t = u_48;
            {
              ATerm c_142 = NULL,d_142 = NULL,e_142 = NULL;
              c_142 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_142 = ATgetArgument(t, 0);
                  t = d_142;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_142 = ATgetArgument(t, 0);
                      t = d_142;
                      {
                        ATerm w_48 = t;
                        int x_48 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_48);
                          }
                        else
                          {
                            t = w_48;
                            t = debug_1_0(i_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_142 = NULL,j_142 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_142 = ATgetArgument(t, 0);
                          e_142 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_142;
                      t = eval_config_0_0(t);
                      i_142 = t;
                      t = e_142;
                      t = eval_config_0_0(t);
                      j_142 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_142, j_142);
                      t = h_12(i_142, j_142, t);
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
  ATerm n_142 = NULL,o_142 = NULL;
  n_142 = t;
  t = term_y_48;
  o_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_48, n_142);
  t = r_12(o_142, n_142, t);
  {
    ATerm z_48 = t;
    int a_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_142 = NULL,q_142 = NULL;
        t = eval_config_0_0(t);
        p_142 = t;
        t = term_y_48;
        q_142 = t;
        t = SSL_table_put(q_142, n_142, p_142);
        t = p_142;
        ;
        LocalPopChoice(a_49);
      }
    else
      {
        t = z_48;
      }
  }
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm u_142 = NULL;
  u_142 = t;
  if(match_string(t, "-k"))
    {
      t = u_142;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_142;
    }
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm v_142 = NULL,w_142 = NULL,x_142 = NULL;
  v_142 = t;
  t = SSL_string_to_int(v_142);
  w_142 = t;
  t = term_g_49;
  x_142 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_49, w_142);
  t = u_12(x_142, w_142, t);
  t = v_142;
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_h_49;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm z_142 = NULL;
  z_142 = t;
  if(match_string(t, "-S"))
    {
      t = z_142;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_142;
    }
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm a_143 = NULL,b_143 = NULL;
  t = term_f_21;
  a_143 = t;
  t = term_i_49;
  b_143 = t;
  t = term_j_49;
  t = u_12(a_143, b_143, t);
  t = term_k_49;
  return(t);
}
ATerm r_17 (ATerm t)
{
  t = term_l_49;
  return(t);
}
ATerm s_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_17 (ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL,e_143 = NULL;
  c_143 = t;
  t = SSL_string_to_int(c_143);
  d_143 = t;
  t = term_f_21;
  e_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_21, d_143);
  t = u_12(e_143, d_143, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_143);
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_n_49;
  return(t);
}
ATerm c_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm f_143 = NULL,g_143 = NULL;
  t = term_o_49;
  f_143 = t;
  t = term_q_20;
  g_143 = t;
  t = term_p_49;
  t = u_12(f_143, g_143, t);
  t = term_r_49;
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = term_s_49;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm v_49 = t;
  int w_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_17, p_17, r_17, t);
      ;
      LocalPopChoice(w_49);
    }
  else
    {
      t = v_49;
      {
        ATerm x_49 = t;
        int y_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(s_17, u_17, w_17, t);
            ;
            LocalPopChoice(y_49);
          }
        else
          {
            t = x_49;
            t = Option_3_0(c_18, d_18, e_18, t);
          }
      }
    }
  return(t);
}
ATerm u_12 (ATerm n_60, ATerm o_60, ATerm t)
{
  ATerm h_143 = NULL;
  t = term_y_48;
  h_143 = t;
  t = SSL_table_put(h_143, n_60, o_60);
  t = (ATerm) ATmakeAppl(sym__3, term_y_48, n_60, o_60);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_143 = NULL,l_143 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL;
      t = term_q_20;
      t = e_0(t);
      m_143 = t;
      t = term_z_49;
      n_143 = t;
      t = term_a_50;
      o_143 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_49, term_a_50, m_143);
      t = s_12(n_143, o_143, m_143, t);
      _fail(t);
    }
  else
    {
      ATerm r_143 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_143 = ATgetFirst((ATermList) t);
          l_143 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_143;
      t = c_0(t);
      t = term_q_20;
      t = d_0(t);
      r_143 = t;
      t = (ATerm) ATinsert(CheckATermList(l_143), r_143);
    }
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm t_143 = NULL;
  t_143 = t;
  if(match_string(t, "-o"))
    {
      t = t_143;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_143;
    }
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm u_143 = NULL,v_143 = NULL;
  u_143 = t;
  t = term_b_50;
  v_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_50, u_143);
  t = u_12(v_143, u_143, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_143);
  return(t);
}
ATerm m_18 (ATerm t)
{
  t = term_c_50;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_18, l_18, m_18, t);
  return(t);
}
ATerm s_12 (ATerm k_36, ATerm l_36, ATerm j_36, ATerm t)
{
  ATerm x_143 = NULL,y_143 = NULL,z_143 = NULL;
  x_143 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
  {
    ATerm d_50 = t;
    int e_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_50 = ATgetArgument(t, 0);
            ATerm h_50 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        t = r_12(k_36, l_36, t);
        ;
        LocalPopChoice(e_50);
      }
    else
      {
        t = d_50;
        t = (ATerm) ATempty;
      }
    y_143 = t;
    t = (ATerm) ATinsert(CheckATermList(y_143), j_36);
    z_143 = t;
    t = SSL_table_put(k_36, l_36, z_143);
    t = x_143;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,j_144 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_144 = NULL,l_144 = NULL,m_144 = NULL;
      t = term_q_20;
      t = n_0(t);
      k_144 = t;
      t = term_z_49;
      l_144 = t;
      t = term_a_50;
      m_144 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_49, term_a_50, k_144);
      t = s_12(l_144, m_144, k_144, t);
      _fail(t);
    }
  else
    {
      ATerm q_144 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_144 = ATgetFirst((ATermList) t);
          h_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_144;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_144 = ATgetFirst((ATermList) t);
          j_144 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_144;
      t = k_0(t);
      t = i_144;
      t = l_0(t);
      q_144 = t;
      t = (ATerm) ATinsert(CheckATermList(j_144), q_144);
    }
  return(t);
}
ATerm n_18 (ATerm t)
{
  ATerm s_144 = NULL;
  s_144 = t;
  if(match_string(t, "-i"))
    {
      t = s_144;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_144;
    }
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm t_144 = NULL,u_144 = NULL;
  t_144 = t;
  t = term_i_50;
  u_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_50, t_144);
  t = u_12(u_144, t_144, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_144);
  return(t);
}
ATerm p_18 (ATerm t)
{
  t = term_j_50;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_18, o_18, p_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_144 = NULL,w_144 = NULL,x_144 = NULL,y_144 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_20;
  t = whoami_0_0(t);
  v_144 = t;
  t = term_s_20;
  x_144 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_50), v_144);
  y_144 = t;
  t = SSL_printnl(x_144, y_144);
  t = term_w_20;
  w_144 = t;
  t = SSL_exit(w_144);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_50;
  t = get_config_0_0(t);
  return(t);
}
ATerm p_12 (ATerm h_34, ATerm i_34, ATerm t)
{
  ATerm m_50 = t;
  int n_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_34, i_34);
      ;
      LocalPopChoice(n_50);
    }
  else
    {
      t = m_50;
      t = SSL_addr(h_34, i_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm t)
{
  ATerm a_145 = NULL,b_145 = NULL,c_145 = NULL;
  a_145 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_145;
      t = j_106(t);
    }
  else
    {
      ATerm f_145 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_145 = ATgetFirst((ATermList) t);
          c_145 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_145;
      t = foldr_2_0(j_106, k_106, t);
      f_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_145, f_145);
      t = k_106(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_i_49;
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL;
  if(match_cons(t, sym__2))
    {
      d_68 = ATgetArgument(t, 0);
      e_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(d_68, e_68, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm i_145 = NULL,z_67 = NULL,a_68 = NULL;
  t = times_0_0(t);
  a_68 = t;
  t = SSL_explode_term(a_68);
  if(match_cons(t, sym__2))
    {
      ATerm o_50 = ATgetArgument(t, 0);
      z_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_67;
  t = foldr_2_0(q_18, r_18, t);
  i_145 = t;
  t = SSL_TicksToSeconds(i_145);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm t_145 = NULL,u_145 = NULL,v_145 = NULL;
  t_145 = t;
  if(match_cons(t, sym__2))
    {
      u_145 = ATgetArgument(t, 0);
      v_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_50 = t;
    int q_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_145;
        if((u_145 != t))
          {
            _fail(t);
          }
        t = t_145;
        ;
        LocalPopChoice(q_50);
      }
    else
      {
        t = p_50;
        t = (ATerm) ATmakeAppl(sym__2, u_145, v_145);
        {
          ATerm r_50 = t;
          int s_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(u_145, v_145);
              ;
              LocalPopChoice(s_50);
            }
          else
            {
              t = r_50;
              t = SSL_gtr(u_145, v_145);
            }
          t = (ATerm) ATmakeAppl(sym__2, u_145, v_145);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_125 (ATerm), ATerm t)
{
  ATerm z_145 = NULL;
  z_145 = t;
  {
    ATerm t_50 = t;
    int u_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_146 = NULL;
        t = term_f_21;
        t = get_config_0_0(t);
        b_146 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_146, term_w_20);
        t = geq_0_0(t);
        t = z_145;
        t = j_125(t);
        ;
        LocalPopChoice(u_50);
      }
    else
      {
        t = t_50;
        t = z_145;
      }
  }
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm d_146 = NULL,e_146 = NULL,g_146 = NULL,h_146 = NULL;
  t = run_time_0_0(t);
  d_146 = t;
  t = term_q_20;
  t = whoami_0_0(t);
  e_146 = t;
  t = term_s_20;
  g_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_50), d_146), term_v_50), e_146);
  h_146 = t;
  t = SSL_printnl(g_146, h_146);
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_50), d_146), term_v_50), e_146));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(s_18, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_146 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_49;
  i_146 = t;
  t = SSL_exit(i_146);
  return(t);
}
ATerm t_18 (ATerm t)
{
  ATerm q_146 = NULL,r_146 = NULL;
  r_146 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_146;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_146 = ATgetArgument(t, 0);
          {
            ATerm q_68 = NULL,m_17 = NULL;
            t = SSLgetAnnotations(r_146);
            q_68 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_146);
            m_17 = t;
            t = SSLsetAnnotations(m_17, q_68);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_146;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_118 (ATerm), ATerm t)
{
  ATerm d_51 = t;
  int e_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_51;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_51);
    }
  else
    {
      t = d_51;
      t = fetch_1_0(t_18, t);
    }
  t = a_118(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_146 = NULL,v_146 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_146 = ATgetFirst((ATermList) t);
      v_146 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_146 = NULL,a_147 = NULL;
        ATerm u_18 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_146)), not_null(a_147));
          return(t);
        }
        t = v_146;
        t = i_0(t);
        if(((z_146 != NULL) && (z_146 != t)))
          _fail(t);
        else
          z_146 = t;
        t = u_146;
        t = g_0(t);
        if(((a_147 != NULL) && (a_147 != t)))
          _fail(t);
        else
          a_147 = t;
        t = v_146;
        t = reverse_acc_2_0(g_0, u_18, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_q_20;
      t = i_0(t);
    }
  return(t);
}
ATerm r_12 (ATerm l_38, ATerm m_38, ATerm t)
{
  t = SSL_table_get(l_38, m_38);
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm e_147 = NULL,f_147 = NULL,g_147 = NULL,o_17 = NULL;
  g_147 = t;
  if(match_cons(t, sym_Program_1))
    {
      f_147 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_147);
  e_147 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, f_147);
  o_17 = t;
  t = SSLsetAnnotations(o_17, e_147);
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm i_147 = NULL;
  i_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_147), term_i_51);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_147 = NULL,d_147 = NULL;
  ATerm l_51 = t;
  int m_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_50;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(m_51);
    }
  else
    {
      t = l_51;
      t = fetch_1_0(v_18, t);
    }
  t = term_n_51;
  t = echo_0_0(t);
  t = term_z_49;
  c_147 = t;
  t = term_a_50;
  d_147 = t;
  t = term_o_51;
  t = r_12(c_147, d_147, t);
  t = reverse_acc_2_0(_id, w_18, t);
  t = map_1_0(x_18, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_147 = NULL,l_147 = NULL,m_147 = NULL;
  k_147 = t;
  {
    ATerm p_51 = t;
    int q_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_147;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_51 = ATgetFirst((ATermList) t);
                ATerm s_51 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_147;
          }
        ;
        LocalPopChoice(q_51);
      }
    else
      {
        t = p_51;
        t = (ATerm) ATinsert(ATempty, k_147);
      }
    l_147 = t;
    t = term_t_47;
    m_147 = t;
    t = SSL_printnl(m_147, l_147);
    t = k_147;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_50;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm y_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm q_147 = NULL,r_147 = NULL;
  t = term_u_51;
  q_147 = t;
  t = term_q_20;
  r_147 = t;
  t = term_v_51;
  t = u_12(q_147, r_147, t);
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_x_51;
  return(t);
}
ATerm b_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_19 (ATerm t)
{
  ATerm s_147 = NULL,t_147 = NULL,u_147 = NULL,v_147 = NULL;
  t = term_u_51;
  u_147 = t;
  t = term_q_20;
  v_147 = t;
  t = term_v_51;
  t = u_12(u_147, v_147, t);
  t = term_y_51;
  s_147 = t;
  t = term_q_20;
  t_147 = t;
  t = term_z_51;
  t = u_12(s_147, t_147, t);
  t = term_a_52;
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_b_52;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_18, z_18, a_19, t);
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = g_52;
      t = Option_3_0(b_19, c_19, d_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_121 (ATerm), ATerm t)
{
  ATerm a_148 = NULL,b_148 = NULL,c_148 = NULL,d_148 = NULL,f_148 = NULL,g_148 = NULL,v_17 = NULL;
  a_148 = t;
  {
    ATerm i_52 = t;
    int j_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_k_52;
        t = f_121(t);
        ;
        LocalPopChoice(j_52);
      }
    else
      {
        t = i_52;
      }
    t = a_148;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_148 = ATgetFirst((ATermList) t);
        d_148 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_148);
    b_148 = t;
    t = term_l_50;
    g_148 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_l_50, c_148);
    t = u_12(g_148, c_148, t);
    t = d_148;
    {
      ATerm q_148 (ATerm t)
      {
        ATerm l_52 = t;
        int n_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_52 = t;
            int p_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_148 = NULL;
                j_148 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = j_148;
                ;
                LocalPopChoice(p_52);
              }
            else
              {
                t = o_52;
                t = f_121(t);
                t = Cons_2_0(_id, q_148, t);
              }
            ;
            LocalPopChoice(n_52);
          }
        else
          {
            t = l_52;
            {
              ATerm m_148 = NULL,n_148 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_148 = ATgetFirst((ATermList) t);
                  n_148 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_148), (ATerm) ATmakeAppl(sym_Undefined_1, m_148));
            }
          }
        return(t);
      }
      t = q_148(t);
      f_148 = t;
      t = (ATerm) ATinsert(CheckATermList(f_148), (ATerm) ATmakeAppl(sym_Program_1, c_148));
      v_17 = t;
      t = SSLsetAnnotations(v_17, b_148);
    }
  }
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm c_149 = NULL;
  c_149 = t;
  if(match_string(t, "--help"))
    {
      t = c_149;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_149;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_149;
        }
    }
  return(t);
}
ATerm j_19 (ATerm t)
{
  ATerm d_149 = NULL,e_149 = NULL;
  t = term_h_51;
  d_149 = t;
  t = term_q_20;
  e_149 = t;
  t = term_q_52;
  t = u_12(d_149, e_149, t);
  t = term_r_52;
  return(t);
}
ATerm k_19 (ATerm t)
{
  t = term_s_52;
  return(t);
}
ATerm l_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL,y_148 = NULL,z_148 = NULL,a_149 = NULL,b_149 = NULL;
  x_148 = t;
  t = term_z_49;
  z_148 = t;
  t = term_a_50;
  a_149 = t;
  t = (ATerm) ATempty;
  b_149 = t;
  t = SSL_table_put(z_148, a_149, b_149);
  t = x_148;
  {
    ATerm e_19 (ATerm t)
    {
      ATerm u_52 = t;
      int x_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_121(t);
          ;
          LocalPopChoice(x_52);
        }
      else
        {
          t = u_52;
          {
            ATerm y_52 = t;
            int b_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_19, j_19, k_19, t);
                ;
                LocalPopChoice(b_53);
              }
            else
              {
                t = y_52;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_19, t);
    {
      ATerm c_53 = t;
      int d_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_149 = NULL;
          l_149 = t;
          {
            ATerm g_53 = t;
            int j_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_68 = NULL;
                t = l_149;
                {
                  ATerm p_53 = t;
                  int q_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_51;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_53);
                    }
                  else
                    {
                      t = p_53;
                      t = fetch_1_0(l_19, t);
                    }
                  t = l_149;
                  t = default_system_usage_0_0(t);
                  t = term_i_49;
                  x_68 = t;
                  t = SSL_exit(x_68);
                }
                ;
                LocalPopChoice(j_53);
              }
            else
              {
                t = g_53;
                {
                  ATerm b_69 = NULL;
                  t = term_u_51;
                  t = get_config_0_0(t);
                  t = l_149;
                  t = default_system_about_0_0(t);
                  t = term_i_49;
                  b_69 = t;
                  t = SSL_exit(b_69);
                }
              }
          }
          ;
          LocalPopChoice(d_53);
        }
      else
        {
          t = c_53;
          {
            ATerm r_53 = t;
            int s_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_149 = NULL,n_149 = NULL,o_149 = NULL;
                ATerm o_19 (ATerm t)
                {
                  ATerm p_149 = NULL,q_149 = NULL,r_149 = NULL,x_17 = NULL;
                  r_149 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      q_149 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(r_149);
                  p_149 = t;
                  t = q_149;
                  if(((v_148 != NULL) && (v_148 != t)))
                    _fail(t);
                  else
                    v_148 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, q_149);
                  x_17 = t;
                  t = SSLsetAnnotations(x_17, p_149);
                  return(t);
                }
                t = fetch_1_0(o_19, t);
                t = term_s_20;
                n_149 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_148)), term_u_53);
                o_149 = t;
                t = SSL_printnl(n_149, o_149);
                t = (ATerm) ATmakeAppl(sym__2, term_s_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_148)), term_u_53));
                t = default_system_usage_0_0(t);
                t = term_w_20;
                m_149 = t;
                t = SSL_exit(m_149);
                ;
                LocalPopChoice(s_53);
              }
            else
              {
                t = r_53;
              }
          }
        }
      w_148 = t;
      t = term_z_49;
      y_148 = t;
      t = SSL_table_destroy(y_148);
      t = w_148;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm e_118 (ATerm), ATerm f_118 (ATerm), ATerm t)
{
  ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL,z_149 = NULL;
  t = parse_options_1_0(c_118, t);
  w_149 = t;
  t = term_v_53;
  z_149 = t;
  t = SSL_table_create(z_149);
  t = term_v_53;
  x_149 = t;
  t = term_x_53;
  y_149 = t;
  t = SSL_table_put(x_149, y_149, w_149);
  t = w_149;
  t = e_118(t);
  {
    ATerm y_53 = t;
    int b_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_118, t);
        ;
        LocalPopChoice(b_54);
      }
    else
      {
        t = y_53;
        {
          ATerm c_54 = t;
          int d_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_118(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(d_54);
            }
          else
            {
              t = c_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = if_verbose2_1_0(c_20, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  ATerm a_150 = NULL,b_150 = NULL;
  t = term_e_54;
  a_150 = t;
  t = term_q_20;
  b_150 = t;
  t = term_f_54;
  t = u_12(a_150, b_150, t);
  t = term_g_54;
  return(t);
}
ATerm b_20 (ATerm t)
{
  t = term_h_54;
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm c_150 = NULL,d_150 = NULL,e_150 = NULL,f_150 = NULL;
  c_150 = t;
  t = term_l_50;
  t = get_config_0_0(t);
  d_150 = t;
  t = term_s_20;
  e_150 = t;
  t = (ATerm) ATinsert(ATempty, d_150);
  f_150 = t;
  t = SSL_printnl(e_150, f_150);
  t = c_150;
  return(t);
}
ATerm iowrap_3_0 (ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t)
{
  ATerm p_19 (ATerm t)
  {
    ATerm i_54 = t;
    int j_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_117(t);
        ;
        LocalPopChoice(j_54);
      }
    else
      {
        t = i_54;
        {
          ATerm k_54 = t;
          int l_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(l_54);
            }
          else
            {
              t = k_54;
              {
                ATerm q_54 = t;
                int r_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(r_54);
                  }
                else
                  {
                    t = q_54;
                    {
                      ATerm s_54 = t;
                      int t_54 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(x_19, y_19, b_20, t);
                          ;
                          LocalPopChoice(t_54);
                        }
                      else
                        {
                          t = s_54;
                          {
                            ATerm u_54 = t;
                            int v_54 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(v_54);
                              }
                            else
                              {
                                t = u_54;
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
  ATerm v_19 (ATerm t)
  {
    ATerm g_150 = NULL,h_150 = NULL,i_150 = NULL;
    h_150 = t;
    {
      ATerm w_54 = t;
      int x_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_150 != NULL) && (g_150 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_150 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(d_20, t);
          ;
          LocalPopChoice(x_54);
        }
      else
        {
          t = w_54;
          t = term_y_54;
          g_150 = t;
        }
      t = not_null(g_150);
      t = ReadFromFile_0_0(t);
      i_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_150, i_150);
      t = apply_strategy_1_0(l_117, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(p_19, n_117, s_19, v_19, t);
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm l_150 = NULL,m_150 = NULL,n_150 = NULL,o_150 = NULL,p_150 = NULL,k_18 = NULL;
  p_150 = t;
  if(match_cons(t, sym__2))
    {
      m_150 = ATgetArgument(t, 0);
      n_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_150);
  l_150 = t;
  t = n_150;
  {
    ATerm z_54 = t;
    int a_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_151 = NULL,e_69 = NULL,g_69 = NULL,h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,j_18 = NULL,i_18 = NULL,g_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            l_151 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_150);
        e_69 = t;
        t = l_151;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_69 = ATgetFirst((ATermList) t);
            i_69 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_151);
        g_69 = t;
        t = h_69;
        if(match_cons(t, sym_Signature_1))
          {
            m_69 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_69);
        l_69 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, m_69);
        g_18 = t;
        t = SSLsetAnnotations(g_18, l_69);
        n_69 = t;
        t = i_69;
        t = Cons_2_0(l_20, m_20, t);
        j_69 = t;
        t = (ATerm) ATinsert(CheckATermList(j_69), n_69);
        i_18 = t;
        t = SSLsetAnnotations(i_18, g_69);
        k_69 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, k_69);
        j_18 = t;
        t = SSLsetAnnotations(j_18, e_69);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(o_20, t);
        ;
        LocalPopChoice(a_55);
      }
    else
      {
        t = z_54;
        t = if_verbose2_1_0(p_20, t);
      }
    o_150 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_150, o_150);
    k_18 = t;
    t = SSLsetAnnotations(k_18, l_150);
  }
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,h_18 = NULL;
  r_69 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      p_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_69);
  o_69 = t;
  t = p_69;
  t = map_1_0(n_20, t);
  q_69 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, q_69);
  h_18 = t;
  t = SSLsetAnnotations(h_18, o_69);
  return(t);
}
ATerm m_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      s_69 = ATgetArgument(t, 0);
      t_69 = ATgetArgument(t, 1);
      u_69 = ATgetArgument(t, 2);
      v_69 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = f_12(s_69, t_69, u_69, v_69, t);
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm w_69 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm b_55 = ATgetArgument(t, 0);
      if(match_cons(b_55, sym_SVar_1))
        {
          ATerm e_55 = ATgetArgument(b_55, 0);
          if((ATgetSymbol((ATermAppl) e_55) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm c_55 = ATgetArgument(t, 1);
        if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
          {
            w_69 = ATgetFirst((ATermList) c_55);
            {
              ATerm f_55 = (ATerm) ATgetNext((ATermList) c_55);
              if(((ATgetType(f_55) != AT_LIST) || !(ATisEmpty(f_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm d_55 = ATgetArgument(t, 2);
        if(((ATgetType(d_55) != AT_LIST) || !(ATisEmpty(d_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_9(w_69, t);
  return(t);
}
ATerm p_20 (ATerm t)
{
  ATerm m_151 = NULL,n_151 = NULL,o_151 = NULL;
  m_151 = t;
  t = term_s_20;
  n_151 = t;
  t = (ATerm) ATinsert(ATempty, term_g_55);
  o_151 = t;
  t = SSL_printnl(n_151, o_151);
  t = m_151;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_20, _fail, default_usage_0_0, t);
  return(t);
}
