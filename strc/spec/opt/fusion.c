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
Symbol sym_ConstType_1;
Symbol sym_FunType_2;
Symbol sym_Sort_2;
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
  sym_ConstType_1 = ATmakeSymbol("ConstType", 1, ATfalse);
  ATprotectSymbol(sym_ConstType_1);
  sym_FunType_2 = ATmakeSymbol("FunType", 2, ATfalse);
  ATprotectSymbol(sym_FunType_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
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
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_e_56;
ATerm term_r_55;
ATerm term_d_55;
ATerm term_c_55;
ATerm term_b_55;
ATerm term_a_55;
ATerm term_v_54;
ATerm term_u_54;
ATerm term_t_54;
ATerm term_b_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_t_53;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_h_53;
ATerm term_g_53;
ATerm term_f_53;
ATerm term_t_52;
ATerm term_s_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_l_52;
ATerm term_i_52;
ATerm term_s_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_i_51;
ATerm term_d_51;
ATerm term_x_50;
ATerm term_w_50;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_i_50;
ATerm term_h_50;
ATerm term_g_50;
ATerm term_d_50;
ATerm term_t_49;
ATerm term_o_49;
ATerm term_j_49;
ATerm term_v_48;
ATerm term_s_48;
ATerm term_m_48;
ATerm term_l_48;
ATerm term_g_48;
ATerm term_d_48;
ATerm term_z_47;
ATerm term_y_47;
ATerm term_x_47;
ATerm term_u_47;
ATerm term_n_37;
ATerm term_m_37;
ATerm term_l_37;
ATerm term_g_36;
ATerm term_f_34;
ATerm term_w_33;
ATerm term_n_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_v_32;
ATerm term_t_32;
ATerm term_l_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_d_31;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_b_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_m_28;
ATerm term_l_28;
ATerm term_u_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_w_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_p_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_d_26;
ATerm term_l_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_f_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_n_21;
void init_constant_terms (void)
{
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_26);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_26, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_26, term_m_26);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_26, term_n_26);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_26, term_p_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(sym__2, term_u_26, term_t_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_27);
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_28);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_26, term_m_26);
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_26, term_x_28);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(sym__2, term_z_28, term_y_28);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_29);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_30);
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_f_31);
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_j_31);
  ATprotect(&(term_l_31));
  term_l_31 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_f_34));
  term_f_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_33);
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_37));
  term_m_37 = (ATerm) ATmakeAppl(sym_Sort_2, term_l_37, (ATerm) ATempty);
  ATprotect(&(term_n_37));
  term_n_37 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_37);
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_y_47));
  term_y_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_48);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_48));
  term_v_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_49));
  term_j_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_o_49));
  term_o_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_49));
  term_t_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_d_50));
  term_d_50 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__2, term_x_21, term_i_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_50);
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(sym__2, term_u_50, term_n_21);
  ATprotect(&(term_w_50));
  term_w_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_50));
  term_x_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_51));
  term_i_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_51));
  term_s_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_52));
  term_l_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_52));
  term_s_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(sym__2, term_d_51, term_i_51);
  ATprotect(&(term_f_53));
  term_f_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeAppl(sym__2, term_f_53, term_n_21);
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_l_53, term_n_21);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_53));
  term_t_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(sym__2, term_o_52, term_n_21);
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_54));
  term_b_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_54));
  term_t_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym__2, term_a_55, term_n_21);
  ATprotect(&(term_c_55));
  term_c_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_55));
  term_d_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm o_125 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm d_124 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm d_2 (ATerm);
ATerm g_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm h_8 (ATerm a_71, ATerm b_71, ATerm c_71, ATerm);
ATerm k_11 (ATerm b_11, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm w_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm l_8 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm v_4 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm z_33 (ATerm d_33, ATerm e_33, ATerm);
ATerm c_34 (ATerm h_33, ATerm m_33, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm s_9 (ATerm j_36, ATerm k_36, ATerm);
ATerm end_scope_1_0 (ATerm w_107 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm v_107 (ATerm), ATerm);
ATerm scope_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm o_5 (ATerm);
ATerm t_9 (ATerm n_22, ATerm m_22, ATerm o_22, ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm w_5 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm m_95 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Seq_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm);
ATerm e_6 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm g_6 (ATerm);
ATerm j_6 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm r_6 (ATerm);
ATerm a_10 (ATerm x_20, ATerm);
ATerm alltd_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm t_6 (ATerm);
ATerm x_6 (ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm topdown_1_0 (ATerm l_95 (ATerm), ATerm);
ATerm q_7 (ATerm);
ATerm c_10 (ATerm t_44, ATerm s_44, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm w_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm p_96 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm j_8 (ATerm);
ATerm m_8 (ATerm);
ATerm n_8 (ATerm);
ATerm p_8 (ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm u_8 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm s_108 (ATerm), ATerm);
ATerm downup_1_0 (ATerm n_95 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm);
ATerm w_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm);
ATerm j_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm c_11 (ATerm);
ATerm j_11 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm m_12 (ATerm);
ATerm z_12 (ATerm);
ATerm spaste_1_0 (ATerm b_125 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm);
ATerm j_13 (ATerm);
ATerm p_11 (ATerm v_73, ATerm u_73, ATerm);
ATerm SVar_1_0 (ATerm p_85 (ATerm), ATerm);
ATerm a_12 (ATerm o_122 (ATerm), ATerm p_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_64, ATerm n_64, ATerm m_64, ATerm);
ATerm o_13 (ATerm);
ATerm q_13 (ATerm);
ATerm u_13 (ATerm);
ATerm b_12 (ATerm i_122 (ATerm), ATerm j_122 (ATerm (ATerm), ATerm), ATerm g_64, ATerm j_64, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm o_111 (ATerm), ATerm);
ATerm rename_4_0 (ATerm d_122 (ATerm (ATerm), ATerm), ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_122 (ATerm (ATerm), ATerm), ATerm);
ATerm b_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm i_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm tpaste_1_0 (ATerm x_124 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm u_11 (ATerm z_103 (ATerm), ATerm l_30, ATerm k_30, ATerm);
ATerm foldr_3_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm);
ATerm v_11 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm p_30, ATerm o_30, ATerm);
ATerm w_11 (ATerm u_103 (ATerm), ATerm j_30, ATerm i_30, ATerm);
ATerm at_end_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_130 (ATerm w_129, ATerm);
ATerm conc_0_0 (ATerm);
ATerm y_14 (ATerm);
ATerm z_14 (ATerm);
ATerm a_15 (ATerm);
ATerm y_11 (ATerm e_657, ATerm j_657, ATerm h_66, ATerm);
ATerm while_not_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm k_132 (ATerm e_131, ATerm f_131, ATerm g_131, ATerm);
ATerm k_15 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm r_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm free_vars_3_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm z_15 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm g_82 (ATerm), ATerm);
ATerm c_16 (ATerm);
ATerm d_16 (ATerm);
ATerm f_16 (ATerm);
ATerm h_16 (ATerm);
ATerm j_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm j_12 (ATerm r_36, ATerm s_36, ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm u_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm d_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm k_12 (ATerm z_107 (ATerm), ATerm s_35, ATerm q_35, ATerm);
ATerm i_17 (ATerm);
ATerm l_12 (ATerm z_19, ATerm a_20, ATerm c_20, ATerm b_20, ATerm);
ATerm map_1_0 (ATerm v_99 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm);
ATerm o_12 (ATerm f_54, ATerm g_54, ATerm);
ATerm p_12 (ATerm t_57, ATerm u_57, ATerm);
ATerm r_12 (ATerm u_115 (ATerm), ATerm l_527, ATerm x_57, ATerm);
ATerm q_12 (ATerm p_57, ATerm q_57, ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm p_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm f_143 (ATerm z_142, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm s_12 (ATerm v_57, ATerm);
ATerm t_12 (ATerm h_54, ATerm i_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm q_144 (ATerm p_143, ATerm);
ATerm r_144 (ATerm t_143, ATerm u_143, ATerm v_143, ATerm);
ATerm s_144 (ATerm d_144, ATerm e_144, ATerm f_144, ATerm);
ATerm u_12 (ATerm);
ATerm q_17 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm n_12 (ATerm x_51, ATerm y_51, ATerm);
ATerm debug_1_0 (ATerm s_115 (ATerm), ATerm);
ATerm r_17 (ATerm);
ATerm s_17 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm a_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm i_18 (ATerm);
ATerm k_18 (ATerm);
ATerm m_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm a_13 (ATerm g_60, ATerm h_60, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm y_12 (ATerm d_36, ATerm e_36, ATerm c_36, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm z_18 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm v_12 (ATerm a_34, ATerm b_34, ATerm);
ATerm foldr_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm n_125 (ATerm), ATerm);
ATerm c_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm d_19 (ATerm);
ATerm need_help_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm x_12 (ATerm e_38, ATerm f_38, ATerm);
ATerm g_19 (ATerm);
ATerm h_19 (ATerm);
ATerm j_19 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm s_19 (ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm j_121 (ATerm), ATerm);
ATerm f_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm k_20 (ATerm);
ATerm parse_options_1_0 (ATerm i_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm);
ATerm n_20 (ATerm);
ATerm p_20 (ATerm);
ATerm q_20 (ATerm);
ATerm r_20 (ATerm);
ATerm t_20 (ATerm);
ATerm iowrap_3_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm);
ATerm v_20 (ATerm);
ATerm z_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm k_21 (ATerm);
ATerm l_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_n_21;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_o_21;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_21), c_0), term_r_21);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_t_21;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_125 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL;
        t = term_x_21;
        t = get_config_0_0(t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_y_21);
        t = geq_0_0(t);
        t = x_0;
        t = o_125(t);
        ;
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = x_0;
      }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm e_1 = NULL,f_1 = NULL,g_1 = NULL;
  f_1 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      g_1 = ATgetArgument(t, 0);
      e_1 = ATgetArgument(t, 1);
      {
        ATerm j_1 = NULL,k_1 = NULL,l_1 = NULL,m_1 = NULL;
        t = f_1;
        t = new_0_0(t);
        j_1 = t;
        t = new_0_0(t);
        k_1 = t;
        t = new_0_0(t);
        l_1 = t;
        t = new_0_0(t);
        m_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_1), l_1), k_1), j_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_1), (ATerm) ATmakeAppl(sym_Var_1, l_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_1, (ATerm)ATmakeAppl(sym_Var_1, j_1), (ATerm) ATmakeAppl(sym_Var_1, k_1)), (ATerm) ATmakeAppl(sym_BAM_3, e_1, (ATerm)ATmakeAppl(sym_Var_1, l_1), (ATerm) ATmakeAppl(sym_Var_1, m_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_z_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_1)), (ATerm) ATmakeAppl(sym_Var_1, k_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_1 = ATgetArgument(t, 0);
          {
            ATerm n_1 = NULL,p_1 = NULL,r_1 = NULL,s_1 = NULL;
            t = f_1;
            t = new_0_0(t);
            r_1 = t;
            t = g_1;
            {
              ATerm w_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((n_1 != NULL) && (n_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      n_1 = ATgetArgument(t, 0);
                    if(((p_1 != NULL) && (p_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_1);
                return(t);
              }
              t = oncetd_1_0(w_0, t);
              s_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_1)), not_null(n_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Build_1, s_1))));
            }
          }
        }
      else
        {
          ATerm u_1 = NULL,w_1 = NULL,y_1 = NULL,a_2 = NULL,b_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_1;
          t = new_0_0(t);
          y_1 = t;
          t = new_0_0(t);
          a_2 = t;
          t = g_1;
          {
            ATerm z_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((u_1 != NULL) && (u_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    u_1 = ATgetArgument(t, 0);
                  if(((w_1 != NULL) && (w_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, y_1);
              return(t);
            }
            t = oncetd_1_0(z_0, t);
            b_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_2)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_2))))), (ATerm)ATmakeAppl(sym_Var_1, y_1), (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_1)), not_null(u_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  e_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
        t = e_2;
        t = new_0_0(t);
        j_2 = t;
        t = f_2;
        {
          ATerm c_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_2 != NULL) && (h_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_2 = ATgetArgument(t, 0);
                if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, j_2), h_2);
            return(t);
          }
          t = pat_td_1_0(c_1, t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_2))))));
        }
        ;
        LocalPopChoice(e_22);
      }
    else
      {
        t = c_22;
        {
          ATerm g_22 = t;
          int k_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,o_2 = NULL,p_2 = NULL;
              t = e_2;
              t = new_0_0(t);
              o_2 = t;
              t = f_2;
              {
                ATerm d_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((m_2 != NULL) && (m_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        m_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, o_2);
                  return(t);
                }
                t = pat_td_1_0(d_1, t);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, o_2)), not_null(m_2))));
              }
              ;
              LocalPopChoice(k_22);
            }
          else
            {
              t = g_22;
              {
                ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
                t = e_2;
                t = new_0_0(t);
                w_2 = t;
                t = f_2;
                {
                  ATerm h_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          v_2 = ATgetArgument(t, 0);
                        if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          u_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_2);
                    return(t);
                  }
                  t = pat_td_1_0(h_1, t);
                  x_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(u_2)), not_null(v_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm d_124 (ATerm), ATerm t)
{
  ATerm l_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_124(t);
      ;
      LocalPopChoice(p_22);
    }
  else
    {
      t = l_22;
      {
        ATerm z_5 = NULL,f_6 = NULL,h_6 = NULL,i_6 = NULL;
        f_6 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm v_1 = NULL,c_2 = NULL,f_3 = NULL;
              t = SSLgetAnnotations(f_6);
              v_1 = t;
              t = i_6;
              {
                ATerm i_1 (ATerm t)
                {
                  t = pat_td_1_0(d_124, t);
                  return(t);
                }
                t = fetch_1_0(i_1, t);
                c_2 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, h_6, c_2);
                f_3 = t;
                t = SSLsetAnnotations(f_3, v_1);
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
                  ATerm q_22 = t;
                  int r_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_3 = NULL,d_3 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(f_6);
                      a_3 = t;
                      t = i_6;
                      t = pat_td_1_0(d_124, t);
                      d_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, h_6, d_3);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, a_3);
                      ;
                      LocalPopChoice(r_22);
                    }
                  else
                    {
                      t = q_22;
                      {
                        ATerm z_4 = NULL,k_5 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(f_6);
                        z_4 = t;
                        t = h_6;
                        t = pat_td_1_0(d_124, t);
                        k_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, k_5, i_6);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, z_4);
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
                    z_5 = ATgetArgument(t, 2);
                    {
                      ATerm x_5 = NULL,c_6 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(f_6);
                      x_5 = t;
                      t = z_5;
                      {
                        ATerm o_1 (ATerm t)
                        {
                          t = pat_td_1_0(d_124, t);
                          return(t);
                        }
                        t = fetch_1_0(o_1, t);
                        c_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, h_6, i_6, c_6);
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, x_5);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_6 = ATgetArgument(t, 0);
                        i_6 = ATgetArgument(t, 1);
                        z_5 = ATgetArgument(t, 2);
                        {
                          ATerm d_7 = NULL,p_7 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(f_6);
                          d_7 = t;
                          t = z_5;
                          {
                            ATerm q_1 (ATerm t)
                            {
                              t = pat_td_1_0(d_124, t);
                              return(t);
                            }
                            t = fetch_1_0(q_1, t);
                            p_7 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, h_6, i_6, p_7);
                            j_3 = t;
                            t = SSLsetAnnotations(j_3, d_7);
                          }
                        }
                      }
                    else
                      {
                        ATerm d_8 = NULL,g_8 = NULL,k_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            h_6 = ATgetArgument(t, 0);
                            i_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_6);
                        d_8 = t;
                        t = i_6;
                        t = pat_td_1_0(d_124, t);
                        g_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, h_6, g_8);
                        k_3 = t;
                        t = SSLsetAnnotations(k_3, d_8);
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
  ATerm s_6 = NULL,u_6 = NULL;
  s_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_22 = t;
    int v_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 = NULL,w_6 = NULL,y_6 = NULL,z_6 = NULL;
        t = s_6;
        t = new_0_0(t);
        y_6 = t;
        t = u_6;
        {
          ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  v_6 = ATgetArgument(t, 0);
                if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  w_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, y_6);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          z_6 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, y_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_6)), not_null(v_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_6)))), (ATerm) ATmakeAppl(sym_Build_1, z_6)));
        }
        ;
        LocalPopChoice(v_22);
      }
    else
      {
        t = u_22;
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_7 = NULL,g_7 = NULL,h_7 = NULL;
              t = s_6;
              t = new_0_0(t);
              g_7 = t;
              t = u_6;
              {
                ATerm x_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((c_7 != NULL) && (c_7 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        c_7 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
                  return(t);
                }
                t = pat_td_1_0(x_1, t);
                h_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_7)))), (ATerm) ATmakeAppl(sym_Build_1, h_7)));
              }
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              {
                ATerm i_7 = NULL,j_7 = NULL,n_7 = NULL,o_7 = NULL;
                t = s_6;
                t = new_0_0(t);
                n_7 = t;
                t = u_6;
                {
                  ATerm z_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_7 != NULL) && (i_7 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_7 = ATgetArgument(t, 0);
                        if(((j_7 != NULL) && (j_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_7);
                    return(t);
                  }
                  t = pat_td_1_0(z_1, t);
                  o_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_7), not_null(j_7), (ATerm) ATmakeAppl(sym_Var_1, n_7))), (ATerm) ATmakeAppl(sym_Build_1, o_7)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm z_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_8 = NULL,x_8 = NULL,q_9 = NULL,r_3 = NULL;
      q_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_9);
      t_8 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_8);
      r_3 = t;
      t = SSLsetAnnotations(r_3, t_8);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_22;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_9 = ATgetFirst((ATermList) t);
      y_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_9, y_9);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,h_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_23 = ATgetArgument(t, 0);
      if(match_cons(c_23, sym__2))
        {
          d_10 = ATgetArgument(c_23, 0);
          e_10 = ATgetArgument(c_23, 1);
        }
      else
        _fail(t);
      {
        ATerm e_23 = ATgetArgument(t, 1);
        if(match_cons(e_23, sym__2))
          {
            h_10 = ATgetArgument(e_23, 0);
            k_10 = ATgetArgument(e_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_10), d_10), (ATerm) ATinsert(CheckATermList(k_10), e_10));
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm l_10 = NULL,o_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_10 = ATgetFirst((ATermList) t);
      o_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_10, o_10);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym__2))
        {
          s_10 = ATgetArgument(f_23, 0);
          v_10 = ATgetArgument(f_23, 1);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(match_cons(g_23, sym__2))
          {
            w_10 = ATgetArgument(g_23, 0);
            x_10 = ATgetArgument(g_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_10), s_10), (ATerm) ATinsert(CheckATermList(x_10), v_10));
  return(t);
}
ATerm h_8 (ATerm a_71, ATerm b_71, ATerm c_71, ATerm t)
{
  ATerm r_7 = NULL,u_7 = NULL,v_7 = NULL,x_7 = NULL,a_8 = NULL,i_8 = NULL,k_8 = NULL,o_8 = NULL,s_8 = NULL,s_3 = NULL;
  t = c_71;
  t = fetch_1_0(d_2, t);
  t = c_71;
  t = genzip_4_0(g_2, l_2, n_2, LiftPrimArg_0_0, t);
  s_8 = t;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      i_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_8);
  x_7 = t;
  t = a_8;
  t = concat_0_0(t);
  k_8 = t;
  t = i_8;
  t = genzip_4_0(q_2, r_2, s_2, _id, t);
  o_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, o_8);
  s_3 = t;
  t = SSLsetAnnotations(s_3, x_7);
  if(match_cons(t, sym__2))
    {
      r_7 = ATgetArgument(t, 0);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(match_cons(h_23, sym__2))
          {
            u_7 = ATgetArgument(h_23, 0);
            v_7 = ATgetArgument(h_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, r_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_7), (ATerm) ATmakeAppl(sym_CallT_3, a_71, b_71, v_7)));
  return(t);
}
ATerm k_11 (ATerm b_11, ATerm t)
{
  ATerm d_11 = NULL;
  t = b_11;
  {
    ATerm i_23 = t;
    if((PushChoice() == 0))
      {
        ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,v_3 = NULL;
        g_11 = t;
        if(match_cons(t, sym_Var_1))
          {
            f_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(g_11);
        e_11 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, f_11);
        v_3 = t;
        t = SSLsetAnnotations(v_3, e_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_23;
      }
    t = new_0_0(t);
    d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_11)))), (ATerm) ATmakeAppl(sym_Var_1, d_11)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_11 = NULL,i_11 = NULL;
  h_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_11 = ATgetArgument(t, 0);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_11(h_11, t);
            ;
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_l_23, (ATerm) ATmakeAppl(sym_Var_1, i_11)));
          }
      }
    }
  else
    {
      t = k_11(h_11, t);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm m_23 = t;
  if((PushChoice() == 0))
    {
      ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,x_3 = NULL;
      l_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          k_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_9);
      j_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, k_9);
      x_3 = t;
      t = SSLsetAnnotations(x_3, j_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_23;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm m_9 = NULL,n_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_9 = ATgetFirst((ATermList) t);
      n_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_9, n_9);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL,r_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_23 = ATgetArgument(t, 0);
      if(match_cons(o_23, sym__2))
        {
          o_9 = ATgetArgument(o_23, 0);
          p_9 = ATgetArgument(o_23, 1);
        }
      else
        _fail(t);
      {
        ATerm p_23 = ATgetArgument(t, 1);
        if(match_cons(p_23, sym__2))
          {
            r_9 = ATgetArgument(p_23, 0);
            u_9 = ATgetArgument(p_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_9), o_9), (ATerm) ATinsert(CheckATermList(u_9), p_9));
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm v_9 = NULL,w_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_9 = ATgetFirst((ATermList) t);
      w_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_9, w_9);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm z_9 = NULL,b_10 = NULL,f_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if(match_cons(q_23, sym__2))
        {
          z_9 = ATgetArgument(q_23, 0);
          b_10 = ATgetArgument(q_23, 1);
        }
      else
        _fail(t);
      {
        ATerm r_23 = ATgetArgument(t, 1);
        if(match_cons(r_23, sym__2))
          {
            f_10 = ATgetArgument(r_23, 0);
            g_10 = ATgetArgument(r_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_10), z_9), (ATerm) ATinsert(CheckATermList(g_10), b_10));
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm s_23 = t;
  if((PushChoice() == 0))
    {
      ATerm x_11 = NULL,z_11 = NULL,c_12 = NULL,a_4 = NULL;
      c_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          z_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_12);
      x_11 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, z_11);
      a_4 = t;
      t = SSLsetAnnotations(a_4, x_11);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_23;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_12 = ATgetFirst((ATermList) t);
      e_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_12, e_12);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm f_12 = NULL,c_13 = NULL,d_13 = NULL,f_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_23 = ATgetArgument(t, 0);
      if(match_cons(t_23, sym__2))
        {
          f_12 = ATgetArgument(t_23, 0);
          c_13 = ATgetArgument(t_23, 1);
        }
      else
        _fail(t);
      {
        ATerm v_23 = ATgetArgument(t, 1);
        if(match_cons(v_23, sym__2))
          {
            d_13 = ATgetArgument(v_23, 0);
            f_13 = ATgetArgument(v_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_13), f_12), (ATerm) ATinsert(CheckATermList(f_13), c_13));
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_b_23;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm m_13 = NULL,n_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_13 = ATgetFirst((ATermList) t);
      n_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_13, n_13);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm p_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(match_cons(w_23, sym__2))
        {
          p_13 = ATgetArgument(w_23, 0);
          r_13 = ATgetArgument(w_23, 1);
        }
      else
        _fail(t);
      {
        ATerm y_23 = ATgetArgument(t, 1);
        if(match_cons(y_23, sym__2))
          {
            s_13 = ATgetArgument(y_23, 0);
            t_13 = ATgetArgument(y_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_13), p_13), (ATerm) ATinsert(CheckATermList(t_13), r_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL,z_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
      v_16 = ATgetArgument(t, 2);
      {
        ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,z_3 = NULL;
        t = v_16;
        t = fetch_1_0(t_2, t);
        t = v_16;
        t = genzip_4_0(y_2, z_2, b_3, LiftPrimArg_0_0, t);
        i_9 = t;
        if(match_cons(t, sym__2))
          {
            e_9 = ATgetArgument(t, 0);
            f_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_9);
        d_9 = t;
        t = e_9;
        t = concat_0_0(t);
        g_9 = t;
        t = f_9;
        t = genzip_4_0(c_3, e_3, l_3, _id, t);
        h_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_9, h_9);
        z_3 = t;
        t = SSLsetAnnotations(z_3, d_9);
        if(match_cons(t, sym__2))
          {
            a_9 = ATgetArgument(t, 0);
            {
              ATerm z_23 = ATgetArgument(t, 1);
              if(match_cons(z_23, sym__2))
                {
                  b_9 = ATgetArgument(z_23, 0);
                  c_9 = ATgetArgument(z_23, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, a_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_9), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, z_16, c_9)));
      }
    }
  else
    {
      ATerm a_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_16 = ATgetArgument(t, 0);
          z_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_16;
      t = fetch_1_0(m_3, t);
      t = z_16;
      t = genzip_4_0(n_3, o_3, p_3, LiftPrimArg_0_0, t);
      t_11 = t;
      if(match_cons(t, sym__2))
        {
          o_11 = ATgetArgument(t, 0);
          q_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(t_11);
      n_11 = t;
      t = o_11;
      t = concat_0_0(t);
      r_11 = t;
      t = q_11;
      t = genzip_4_0(q_3, t_3, u_3, _id, t);
      s_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_11, s_11);
      b_4 = t;
      t = SSLsetAnnotations(b_4, n_11);
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm e_24 = ATgetArgument(t, 1);
            if(match_cons(e_24, sym__2))
              {
                l_11 = ATgetArgument(e_24, 0);
                m_11 = ATgetArgument(e_24, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_11), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, (ATerm)ATempty, m_11)));
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm u_17 = NULL,w_17 = NULL,b_18 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_17 = ATgetArgument(t, 0);
      w_17 = ATgetArgument(t, 1);
      b_18 = ATgetArgument(t, 2);
      {
        ATerm j_14 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(c_18);
        j_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_17, w_17, b_18);
        h_4 = t;
        t = SSLsetAnnotations(h_4, j_14);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = c_18;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm f_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_24;
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm f_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  k_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
      f_19 = ATgetArgument(t, 2);
      {
        ATerm h_15 = NULL,j_4 = NULL;
        t = SSLgetAnnotations(k_19);
        h_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_19, m_19, f_19);
        j_4 = t;
        t = SSLsetAnnotations(j_4, h_15);
      }
    }
  else
    {
      ATerm y_16 = NULL,k_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_19 = ATgetArgument(t, 0);
          m_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_19);
      y_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_19, m_19);
      k_4 = t;
      t = SSLsetAnnotations(k_4, y_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm g_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(y_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_24;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,d_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      w_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_19;
  if(match_cons(t, sym_StratRule_3))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
      d_20 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Where_1, d_20)), x_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_19 = ATgetArgument(t, 0);
          y_19 = ATgetArgument(t, 1);
          d_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_19;
      t = pureterm_0_0(t);
      t = y_19;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, y_19)), (ATerm) ATmakeAppl(sym_Where_1, d_20)), (ATerm) ATmakeAppl(sym_Match_1, x_19)));
    }
  return(t);
}
ATerm l_8 (ATerm n_66, ATerm o_66, ATerm p_66, ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,i_21 = NULL,j_21 = NULL,m_21 = NULL,p_21 = NULL,q_21 = NULL;
  t = new_0_0(t);
  m_21 = t;
  t = n_66;
  {
    ATerm c_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm h_24 = ATgetArgument(t, 0);
          if(match_cons(h_24, sym_Var_1))
            {
              if(((j_21 != NULL) && (j_21 != ATgetArgument(h_24, 0))))
                _fail(ATgetArgument(h_24, 0));
              else
                j_21 = ATgetArgument(h_24, 0);
            }
          else
            _fail(t);
          if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_21 = ATgetArgument(t, 1);
          {
            ATerm i_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, j_21);
      return(t);
    }
    t = oncetd_1_0(c_4, t);
    p_21 = t;
    t = o_66;
    {
      ATerm d_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm j_24 = ATgetArgument(t, 0);
            if(match_cons(j_24, sym_Var_1))
              {
                if(((j_21 != NULL) && (j_21 != ATgetArgument(j_24, 0))))
                  _fail(ATgetArgument(j_24, 0));
                else
                  j_21 = ATgetArgument(j_24, 0);
              }
            else
              _fail(t);
            if(((i_21 != NULL) && (i_21 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              i_21 = ATgetArgument(t, 1);
            {
              ATerm k_24 = ATgetArgument(t, 2);
              if(match_cons(k_24, sym_CallT_3))
                {
                  if(((e_21 != NULL) && (e_21 != ATgetArgument(k_24, 0))))
                    _fail(ATgetArgument(k_24, 0));
                  else
                    e_21 = ATgetArgument(k_24, 0);
                  {
                    ATerm l_24 = ATgetArgument(k_24, 1);
                    if(((ATgetType(l_24) != AT_LIST) || !(ATisEmpty(l_24))))
                      _fail(t);
                  }
                  {
                    ATerm m_24 = ATgetArgument(k_24, 2);
                    if(((ATgetType(m_24) != AT_LIST) || !(ATisEmpty(m_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, m_21);
        return(t);
      }
      t = oncetd_1_0(d_4, t);
      q_21 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_21), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, p_21, q_21, (ATerm) ATmakeAppl(sym_Seq_2, p_66, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(e_21), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_21), not_null(i_21), term_l_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(j_21)), (ATerm) ATmakeAppl(sym_Var_1, m_21))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_24 = t;
      int r_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_23 = NULL,x_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL,d_24 = NULL;
          b_24 = t;
          if(match_cons(t, sym_SRule_1))
            {
              c_24 = ATgetArgument(t, 0);
              t = c_24;
              if(match_cons(t, sym_Rule_3))
                {
                  u_23 = ATgetArgument(t, 0);
                  x_23 = ATgetArgument(t, 1);
                  a_24 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = b_24;
              t = l_8(u_23, x_23, a_24, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm v_17 = NULL,z_17 = NULL,o_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  c_24 = ATgetArgument(t, 0);
                  d_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(b_24);
              v_17 = t;
              t = d_24;
              t = desugarRule_0_0(t);
              z_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, c_24, z_17);
              o_4 = t;
              t = SSLsetAnnotations(o_4, v_17);
            }
          ;
          LocalPopChoice(r_24);
        }
      else
        {
          t = q_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
    }
  t = repeat_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm v_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = v_24;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_25 = NULL,q_25 = NULL,s_25 = NULL,t_25 = NULL;
            p_25 = t;
            if(match_cons(t, sym_CallT_3))
              {
                q_25 = ATgetArgument(t, 0);
                s_25 = ATgetArgument(t, 1);
                t_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = p_25;
            t = h_8(q_25, s_25, t_25, t);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm b_25 = t;
              int d_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(d_25);
                }
              else
                {
                  t = b_25;
                  {
                    ATerm e_25 = t;
                    int h_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(h_25);
                      }
                    else
                      {
                        t = e_25;
                        {
                          ATerm l_25 = t;
                          int m_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm o_25 = t;
                              int r_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      q_26 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_26;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      r_26 = ATgetArgument(t, 0);
                                      t = r_26;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          r_26 = ATgetArgument(t, 0);
                                          s_26 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, r_26, s_26);
                                    }
                                  ;
                                  LocalPopChoice(r_25);
                                }
                              else
                                {
                                  t = o_25;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(m_25);
                            }
                          else
                            {
                              t = l_25;
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
  t = topdown_1_0(e_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
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
ATerm i_4 (ATerm t)
{
  ATerm u_25 = t;
  int v_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(v_25);
    }
  else
    {
      t = u_25;
      {
        ATerm c_21 = NULL,d_21 = NULL,g_21 = NULL,h_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_21 = ATgetArgument(t, 0);
            t = c_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                c_21 = ATgetArgument(t, 0);
                d_21 = ATgetArgument(t, 1);
                g_21 = ATgetArgument(t, 2);
                h_21 = ATgetArgument(t, 3);
                t = g_21;
                t = map_1_0(l_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    c_21 = ATgetArgument(t, 0);
                    d_21 = ATgetArgument(t, 1);
                    g_21 = ATgetArgument(t, 2);
                    h_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = g_21;
                t = map_1_0(m_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_21 = NULL;
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_21 = ATgetArgument(t, 0);
          {
            ATerm y_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_25);
      t = u_21;
    }
  else
    {
      t = w_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_21;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_22 = NULL;
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_22 = ATgetArgument(t, 0);
          {
            ATerm b_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_26);
      t = d_22;
    }
  else
    {
      t = z_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_22;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm v_4 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,t_31 = NULL,y_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  o_31 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_31 = ATgetArgument(t, 0);
      a_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_31;
  if(match_cons(t, sym_CallT_3))
    {
      q_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
      y_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_31;
  if(match_cons(t, sym_SVar_1))
    {
      r_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_31;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = t_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_32;
  if(match_cons(t, sym_Seq_2))
    {
      b_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_32;
  if(match_cons(t, sym_Match_1))
    {
      c_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_32;
  if(match_cons(t, sym_Seq_2))
    {
      i_32 = ATgetArgument(t, 0);
      k_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_32;
  if(match_cons(t, sym_Where_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_32;
  if(match_cons(t, sym_Build_1))
    {
      l_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,q_19 = NULL,r_19 = NULL,t_19 = NULL,i_20 = NULL,j_20 = NULL;
        t = term_t_26;
        i_20 = t;
        t = term_u_26;
        j_20 = t;
        t = term_w_26;
        t = j_12(j_20, i_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm y_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) y_26) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, j_32, l_32);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, i_19, c_32, (ATerm) ATmakeAppl(sym__2, j_32, l_32));
        t = t_9(i_19, c_32, t_19, t);
        if(match_cons(t, sym__2))
          {
            q_19 = ATgetArgument(t, 0);
            r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, q_19), (ATerm) ATmakeAppl(sym_Build_1, r_19)));
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = e_26;
        {
          ATerm s_20 = NULL,w_20 = NULL,s_22 = NULL,t_22 = NULL;
          t = term_t_26;
          s_22 = t;
          t = term_u_26;
          t_22 = t;
          t = term_w_26;
          t = j_12(t_22, s_22, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm z_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              s_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_32;
          t = free_vars_3_0(g_4, i_4, tboundin_3_0, t);
          {
            ATerm p_4 (ATerm t)
            {
              ATerm r_4 (ATerm t)
              {
                ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
                h_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, s_20, (ATerm) ATmakeAppl(sym_Var_1, h_22));
                i_22 = t;
                t = term_d_27;
                j_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, s_20, (ATerm) ATmakeAppl(sym_Var_1, h_22)), term_d_27);
                t = k_12(v_4, i_22, j_22, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, h_22);
                return(t);
              }
              t = map_1_0(r_4, t);
              t = (ATerm) ATmakeAppl(sym__2, j_32, l_32);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    w_20 = ATgetArgument(t, 0);
                  {
                    ATerm e_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(n_4, p_4, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(w_20)), (ATerm) ATmakeAppl(sym_Build_1, l_32)));
          }
        }
      }
  }
  return(t);
}
ATerm z_33 (ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm a_23 = NULL;
  t = term_d_26;
  a_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, e_33);
  t = j_12(a_23, e_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm f_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_27) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = d_33;
  return(t);
}
ATerm c_34 (ATerm h_33, ATerm m_33, ATerm t)
{
  ATerm d_23 = NULL;
  t = term_d_26;
  d_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_26, m_33);
  t = j_12(d_23, m_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm g_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = h_33;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,v_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm h_27 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_33;
  if(match_cons(t, sym_Var_1))
    {
      r_33 = ATgetArgument(t, 0);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_23 = NULL;
            t = term_d_26;
            n_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_d_26, s_33);
            t = j_12(n_23, s_33, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm k_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) k_27) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_33);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm l_27 = t;
              int m_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_33(v_33, s_33, t);
                  ;
                  LocalPopChoice(m_27);
                }
              else
                {
                  t = l_27;
                  t = c_34(v_33, s_33, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm n_27 = t;
      int o_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_33(v_33, s_33, t);
          ;
          LocalPopChoice(o_27);
        }
      else
        {
          t = n_27;
          t = c_34(v_33, s_33, t);
        }
    }
  return(t);
}
ATerm s_9 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  i_34 = t;
  {
    ATerm p_27 = t;
    int q_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
        t = x_12(j_36, k_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_27 = ATgetFirst((ATermList) t);
            h_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(q_27);
        t = SSL_table_put(j_36, k_36, h_34);
        t = (ATerm) ATmakeAppl(sym__3, j_36, k_36, h_34);
      }
    else
      {
        t = p_27;
        t = SSL_table_remove(j_36, k_36);
        t = (ATerm) ATmakeAppl(sym__2, j_36, k_36);
      }
    t = i_34;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm w_107 (ATerm), ATerm t)
{
  ATerm j_34 = NULL,o_34 = NULL,p_34 = NULL,r_34 = NULL,s_34 = NULL;
  r_34 = t;
  t = w_107(t);
  p_34 = t;
  {
    ATerm s_27 = t;
    int t_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_34 = NULL;
        t = term_u_27;
        t_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, term_u_27);
        t = x_12(p_34, t_34, t);
        ;
        LocalPopChoice(t_27);
      }
    else
      {
        t = s_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_34 = ATgetFirst((ATermList) t);
        j_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_27;
    s_34 = t;
    t = SSL_table_put(p_34, s_34, j_34);
    t = o_34;
    {
      ATerm x_4 (ATerm t)
      {
        ATerm u_34 = NULL;
        u_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, u_34);
        t = s_9(p_34, u_34, t);
        return(t);
      }
      t = map_1_0(x_4, t);
      t = r_34;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm s_98 (ATerm), ATerm t_98 (ATerm), ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_98(t);
      t = t_98(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      t = t_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm v_107 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,f_35 = NULL;
  a_35 = t;
  t = v_107(t);
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_34, term_u_27);
  {
    ATerm z_27 = t;
    int a_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_36 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            ATerm c_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_u_27;
        v_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_34, term_u_27);
        t = x_12(y_34, v_36, t);
        ;
        LocalPopChoice(a_28);
      }
    else
      {
        t = z_27;
        t = (ATerm) ATempty;
      }
    b_35 = t;
    t = term_u_27;
    c_35 = t;
    t = (ATerm) ATinsert(CheckATermList(b_35), (ATerm) ATempty);
    f_35 = t;
    t = SSL_table_put(y_34, c_35, f_35);
    t = a_35;
  }
  return(t);
}
ATerm scope_2_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    t = end_scope_1_0(x_107, t);
    return(t);
  }
  t = begin_scope_1_0(x_107, t);
  t = restore_always_2_0(y_107, y_4, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  t = term_d_26;
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
        ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL;
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
                h_37 = ATgetArgument(t, 1);
                i_37 = ATgetArgument(t, 2);
                j_37 = ATgetArgument(t, 3);
                t = i_37;
                t = map_1_0(l_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    e_37 = ATgetArgument(t, 0);
                    h_37 = ATgetArgument(t, 1);
                    i_37 = ATgetArgument(t, 2);
                    j_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_37;
                t = map_1_0(m_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm u_37 = NULL;
  ATerm f_28 = t;
  int g_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_37 = ATgetArgument(t, 0);
          {
            ATerm h_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_28);
      t = u_37;
    }
  else
    {
      t = f_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_37 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_37;
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm g_38 = NULL;
  ATerm i_28 = t;
  int j_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_38 = ATgetArgument(t, 0);
          {
            ATerm k_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_28);
      t = g_38;
    }
  else
    {
      t = i_28;
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
ATerm o_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm t_9 (ATerm n_22, ATerm m_22, ATerm o_22, ATerm t)
{
  ATerm z_36 = NULL;
  ATerm h_5 (ATerm t)
  {
    t = m_22;
    t = free_vars_3_0(i_5, j_5, tboundin_3_0, t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm l_38 = NULL,m_38 = NULL,o_38 = NULL;
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, n_22, (ATerm) ATmakeAppl(sym_Var_1, l_38));
        m_38 = t;
        t = term_m_28;
        o_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, n_22, (ATerm) ATmakeAppl(sym_Var_1, l_38)), term_m_28);
        t = k_12(o_5, m_38, o_38, t);
        t = l_38;
        return(t);
      }
      t = map_1_0(n_5, t);
      t = o_22;
      t = alltd_1_0(Replace_0_0, t);
      if(((z_36 != NULL) && (z_36 != t)))
        _fail(t);
      else
        z_36 = t;
    }
    return(t);
  }
  t = scope_2_0(b_5, h_5, t);
  t = not_null(z_36);
  return(t);
}
ATerm p_5 (ATerm t)
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
ATerm q_5 (ATerm t)
{
  ATerm n_28 = t;
  int o_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(o_28);
    }
  else
    {
      t = n_28;
      {
        ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,n_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_25 = ATgetArgument(t, 0);
            t = i_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_25 = ATgetArgument(t, 0);
                j_25 = ATgetArgument(t, 1);
                k_25 = ATgetArgument(t, 2);
                n_25 = ATgetArgument(t, 3);
                t = k_25;
                t = map_1_0(r_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_25 = ATgetArgument(t, 0);
                    j_25 = ATgetArgument(t, 1);
                    k_25 = ATgetArgument(t, 2);
                    n_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_25;
                t = map_1_0(s_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm c_26 = NULL;
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_26 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_28);
      t = c_26;
    }
  else
    {
      t = p_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_26;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm l_26 = NULL;
  ATerm s_28 = t;
  int t_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          l_26 = ATgetArgument(t, 0);
          {
            ATerm u_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_28);
      t = l_26;
    }
  else
    {
      t = s_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = l_26;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm w_5 (ATerm t)
{
  t = term_d_26;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  s_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      t_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_41;
  if(match_cons(t, sym_CallT_3))
    {
      u_41 = ATgetArgument(t, 0);
      w_41 = ATgetArgument(t, 1);
      x_41 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_41;
  if(match_cons(t, sym_SVar_1))
    {
      v_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_41;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = w_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_41;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_41;
  if(match_cons(t, sym_Seq_2))
    {
      b_42 = ATgetArgument(t, 0);
      d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_42;
  if(match_cons(t, sym_Match_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_42;
  if(match_cons(t, sym_Build_1))
    {
      e_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_28 = t;
    int w_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_24 = NULL,s_24 = NULL,w_24 = NULL,x_24 = NULL;
        t = term_y_28;
        w_24 = t;
        t = term_z_28;
        x_24 = t;
        t = term_b_29;
        t = j_12(x_24, w_24, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm c_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) c_29) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            p_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, p_24, c_42, e_42);
        t = t_9(p_24, c_42, e_42, t);
        s_24 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_42), (ATerm) ATmakeAppl(sym_Build_1, s_24));
        ;
        LocalPopChoice(w_28);
      }
    else
      {
        t = v_28;
        {
          ATerm c_25 = NULL,f_25 = NULL,b_27 = NULL,c_27 = NULL;
          t = term_y_28;
          b_27 = t;
          t = term_z_28;
          c_27 = t;
          t = term_b_29;
          t = j_12(c_27, b_27, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm e_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              c_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_42;
          t = free_vars_3_0(p_5, q_5, tboundin_3_0, t);
          {
            ATerm u_5 (ATerm t)
            {
              ATerm v_5 (ATerm t)
              {
                ATerm o_26 = NULL,v_26 = NULL,x_26 = NULL;
                o_26 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, c_25, (ATerm) ATmakeAppl(sym_Var_1, o_26));
                v_26 = t;
                t = term_g_29;
                x_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, c_25, (ATerm) ATmakeAppl(sym_Var_1, o_26)), term_g_29);
                t = k_12(w_5, v_26, x_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, o_26);
                return(t);
              }
              t = map_1_0(v_5, t);
              t = e_42;
              t = alltd_1_0(Replace_0_0, t);
              if(((f_25 != NULL) && (f_25 != t)))
                _fail(t);
              else
                f_25 = t;
              return(t);
            }
            t = scope_2_0(t_5, u_5, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_42), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_25)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    ATerm g_45 = NULL,t_45 = NULL,u_45 = NULL,w_45 = NULL,z_45 = NULL,d_46 = NULL,s_46 = NULL,u_46 = NULL,a_47 = NULL,c_47 = NULL,d_47 = NULL;
    d_47 = t;
    if(match_cons(t, sym_Seq_2))
      {
        g_45 = ATgetArgument(t, 0);
        u_46 = ATgetArgument(t, 1);
        t = g_45;
        if(match_cons(t, sym_Choice_2))
          {
            t_45 = ATgetArgument(t, 0);
            w_45 = ATgetArgument(t, 1);
            {
              ATerm h_29 = t;
              int i_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_27 = NULL,w_27 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_j_29, u_46);
                  v_27 = t;
                  t = term_k_29;
                  w_27 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_k_29, (ATerm) ATmakeAppl(sym_Seq_2, term_j_29, u_46));
                  t = j_12(w_27, v_27, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm l_29 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) l_29) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, t_45, u_46), (ATerm) ATmakeAppl(sym_Seq_2, w_45, u_46));
                  t = bottomup_1_0(y_5, t);
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
            if(match_cons(t, sym_LChoice_2))
              {
                t_45 = ATgetArgument(t, 0);
                w_45 = ATgetArgument(t, 1);
                {
                  ATerm n_29 = t;
                  int o_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_29 = NULL,d_29 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, u_46);
                      a_29 = t;
                      t = term_q_29;
                      d_29 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_q_29, (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, u_46));
                      t = j_12(d_29, a_29, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm r_29 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) r_29) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, t_45, u_46), (ATerm) ATmakeAppl(sym_Seq_2, w_45, u_46));
                      t = bottomup_1_0(y_5, t);
                      ;
                      LocalPopChoice(o_29);
                    }
                  else
                    {
                      t = n_29;
                      t = d_47;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    t_45 = ATgetArgument(t, 0);
                    w_45 = ATgetArgument(t, 1);
                    {
                      ATerm s_29 = t;
                      int v_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_47 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, w_45, u_46);
                          t = y_5(t);
                          s_47 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, t_45, s_47);
                          t = y_5(t);
                          ;
                          LocalPopChoice(v_29);
                        }
                      else
                        {
                          t = s_29;
                          t = d_47;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        t_45 = ATgetArgument(t, 0);
                        w_45 = ATgetArgument(t, 1);
                        {
                          ATerm w_29 = t;
                          int x_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_48 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, w_45, u_46);
                              t = y_5(t);
                              a_48 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_45, a_48);
                              t = y_5(t);
                              ;
                              LocalPopChoice(x_29);
                            }
                          else
                            {
                              t = w_29;
                              t = d_47;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            t_45 = ATgetArgument(t, 0);
                            {
                              ATerm y_29 = t;
                              int z_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_48 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, u_46, t_45);
                                  t = y_5(t);
                                  f_48 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, f_48);
                                  t = y_5(t);
                                  ;
                                  LocalPopChoice(z_29);
                                }
                              else
                                {
                                  t = y_29;
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
            g_45 = ATgetArgument(t, 0);
            u_46 = ATgetArgument(t, 1);
            t = g_45;
            if(match_cons(t, sym_LChoice_2))
              {
                t_45 = ATgetArgument(t, 0);
                w_45 = ATgetArgument(t, 1);
                {
                  ATerm a_30 = t;
                  int b_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, w_45, u_46);
                      t = y_5(t);
                      o_48 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, t_45, o_48);
                      t = y_5(t);
                      ;
                      LocalPopChoice(b_30);
                    }
                  else
                    {
                      t = a_30;
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
                g_45 = ATgetArgument(t, 0);
                u_46 = ATgetArgument(t, 1);
                t = g_45;
                if(match_cons(t, sym_Choice_2))
                  {
                    t_45 = ATgetArgument(t, 0);
                    w_45 = ATgetArgument(t, 1);
                    {
                      ATerm c_30 = t;
                      int d_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm w_48 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, w_45, u_46);
                          t = y_5(t);
                          w_48 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, t_45, w_48);
                          t = y_5(t);
                          ;
                          LocalPopChoice(d_30);
                        }
                      else
                        {
                          t = c_30;
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
                    g_45 = ATgetArgument(t, 0);
                    u_46 = ATgetArgument(t, 1);
                    t = u_46;
                    if(match_cons(t, sym_Op_2))
                      {
                        a_47 = ATgetArgument(t, 0);
                        c_47 = ATgetArgument(t, 1);
                        t = g_45;
                        if(match_cons(t, sym_CallT_3))
                          {
                            t_45 = ATgetArgument(t, 0);
                            w_45 = ATgetArgument(t, 1);
                            s_46 = ATgetArgument(t, 2);
                            t = s_46;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = w_45;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    z_45 = ATgetFirst((ATermList) t);
                                    d_46 = (ATerm) ATgetNext((ATermList) t);
                                    t = d_46;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = t_45;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            u_45 = ATgetArgument(t, 0);
                                            t = u_45;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm e_30 = t;
                                                int f_30 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm i_49 = NULL;
                                                    t = c_47;
                                                    {
                                                      ATerm a_6 (ATerm t)
                                                      {
                                                        ATerm k_49 = NULL;
                                                        k_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, z_45), (ATerm) ATempty), k_49);
                                                        return(t);
                                                      }
                                                      t = map_1_0(a_6, t);
                                                      i_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_App_2, z_45, (ATerm) ATmakeAppl(sym_Op_2, a_47, i_49));
                                                      t = bottomup_1_0(y_5, t);
                                                    }
                                                    ;
                                                    LocalPopChoice(f_30);
                                                  }
                                                else
                                                  {
                                                    t = e_30;
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
  t = bottomup_1_0(y_5, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm m_95 (ATerm), ATerm t)
{
  ATerm b_6 (ATerm t)
  {
    t = bottomup_1_0(m_95, t);
    return(t);
  }
  t = SRTS_all(b_6, t);
  t = m_95(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL;
    n_50 = t;
    if(match_cons(t, sym_Seq_2))
      {
        j_50 = ATgetArgument(t, 0);
        k_50 = ATgetArgument(t, 1);
        t = k_50;
        if(match_cons(t, sym_Choice_2))
          {
            l_50 = ATgetArgument(t, 0);
            m_50 = ATgetArgument(t, 1);
            {
              ATerm m_30 = t;
              int n_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_50 = NULL,s_50 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, l_50);
                  t = d_6(t);
                  r_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, m_50);
                  t = d_6(t);
                  s_50 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, r_50, s_50);
                  t = d_6(t);
                  ;
                  LocalPopChoice(n_30);
                }
              else
                {
                  t = m_30;
                  t = n_50;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                l_50 = ATgetArgument(t, 0);
                m_50 = ATgetArgument(t, 1);
                {
                  ATerm q_30 = t;
                  int r_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_51 = NULL,v_51 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, l_50);
                      t = d_6(t);
                      u_51 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, m_50);
                      t = d_6(t);
                      v_51 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, u_51, v_51);
                      t = d_6(t);
                      ;
                      LocalPopChoice(r_30);
                    }
                  else
                    {
                      t = q_30;
                      t = n_50;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    l_50 = ATgetArgument(t, 0);
                    m_50 = ATgetArgument(t, 1);
                    {
                      ATerm t_30 = t;
                      int u_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_52 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, j_50, m_50);
                          t = d_6(t);
                          f_52 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, l_50, f_52);
                          t = d_6(t);
                          ;
                          LocalPopChoice(u_30);
                        }
                      else
                        {
                          t = t_30;
                          t = n_50;
                        }
                    }
                  }
                else
                  {
                    t = n_50;
                  }
              }
          }
      }
    else
      {
        t = n_50;
      }
    return(t);
  }
  t = bottomup_1_0(d_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm e_86 (ATerm), ATerm f_86 (ATerm), ATerm t)
{
  ATerm u_52 = NULL,v_52 = NULL,x_52 = NULL,y_52 = NULL,z_52 = NULL,a_53 = NULL,q_4 = NULL;
  a_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_52 = ATgetArgument(t, 0);
      x_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_53);
  u_52 = t;
  t = v_52;
  t = e_86(t);
  y_52 = t;
  t = x_52;
  t = f_86(t);
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, y_52, z_52);
  q_4 = t;
  t = SSLsetAnnotations(q_4, u_52);
  return(t);
}
ATerm e_6 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,e_5 = NULL;
  m_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      l_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_34);
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, l_34);
  e_5 = t;
  t = SSLsetAnnotations(e_5, k_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm v_30 = t;
  int w_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = t;
      int y_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(y_30);
        }
      else
        {
          t = x_30;
          {
            ATerm z_30 = t;
            int a_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_57 = NULL,r_57 = NULL,s_57 = NULL;
                m_57 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    r_57 = ATgetArgument(t, 0);
                    s_57 = ATgetArgument(t, 1);
                    {
                      ATerm m_29 = NULL,t_29 = NULL,u_29 = NULL,s_4 = NULL;
                      t = SSLgetAnnotations(m_57);
                      m_29 = t;
                      t = r_57;
                      t = inline_rules_0_0(t);
                      t_29 = t;
                      t = s_57;
                      t = inline_rules_0_0(t);
                      u_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, t_29, u_29);
                      s_4 = t;
                      t = SSLsetAnnotations(s_4, m_29);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        r_57 = ATgetArgument(t, 0);
                        s_57 = ATgetArgument(t, 1);
                        {
                          ATerm s_30 = NULL,g_31 = NULL,h_31 = NULL,t_4 = NULL;
                          t = SSLgetAnnotations(m_57);
                          s_30 = t;
                          t = r_57;
                          t = inline_rules_0_0(t);
                          g_31 = t;
                          t = s_57;
                          t = inline_rules_0_0(t);
                          h_31 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, g_31, h_31);
                          t_4 = t;
                          t = SSLsetAnnotations(t_4, s_30);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            r_57 = ATgetArgument(t, 0);
                            s_57 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm b_31 = t;
                          int c_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_31 = NULL,x_31 = NULL,z_31 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,c_5 = NULL,a_5 = NULL,w_4 = NULL,u_4 = NULL;
                              t = SSLgetAnnotations(m_57);
                              u_31 = t;
                              t = s_57;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  z_31 = ATgetArgument(t, 0);
                                  e_32 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(s_57);
                              x_31 = t;
                              t = z_31;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(z_31);
                              p_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, q_32);
                              u_4 = t;
                              t = SSLsetAnnotations(u_4, p_32);
                              r_32 = t;
                              t = e_32;
                              if(match_cons(t, sym_Build_1))
                                {
                                  h_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(e_32);
                              g_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, h_32);
                              w_4 = t;
                              t = SSLsetAnnotations(w_4, g_32);
                              o_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_32, o_32);
                              a_5 = t;
                              t = SSLsetAnnotations(a_5, x_31);
                              f_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, r_57, f_32);
                              c_5 = t;
                              t = SSLsetAnnotations(c_5, u_31);
                              ;
                              LocalPopChoice(c_31);
                            }
                          else
                            {
                              t = b_31;
                              {
                                ATerm i_33 = NULL,l_33 = NULL,p_33 = NULL,q_33 = NULL,t_33 = NULL,x_33 = NULL,y_33 = NULL,d_34 = NULL,e_34 = NULL,g_5 = NULL,f_5 = NULL,d_5 = NULL;
                                t = SSLgetAnnotations(m_57);
                                i_33 = t;
                                t = s_57;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    p_33 = ATgetArgument(t, 0);
                                    q_33 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(s_57);
                                l_33 = t;
                                t = p_33;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    d_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(p_33);
                                y_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, d_34);
                                d_5 = t;
                                t = SSLsetAnnotations(d_5, y_33);
                                e_34 = t;
                                t = q_33;
                                t = Seq_2_0(_id, e_6, t);
                                t_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_34, t_33);
                                f_5 = t;
                                t = SSLsetAnnotations(f_5, l_33);
                                x_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, r_57, x_33);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, i_33);
                              }
                            }
                        }
                      }
                  }
                ;
                LocalPopChoice(a_31);
              }
            else
              {
                t = z_30;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(w_30);
    }
  else
    {
      t = v_30;
    }
  return(t);
}
ATerm g_6 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm j_6 (ATerm t)
{
  t = term_u_26;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL,k_58 = NULL,q_58 = NULL,r_58 = NULL;
  h_58 = t;
  t = term_y_28;
  q_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_d_31, h_58);
  r_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_28, (ATerm) ATmakeAppl(sym_Defined_2, term_d_31, h_58));
  t = k_12(g_6, q_58, r_58, t);
  t = term_t_26;
  i_58 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_e_31, h_58);
  k_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_26, (ATerm) ATmakeAppl(sym_Defined_2, term_e_31, h_58));
  t = k_12(j_6, i_58, k_58, t);
  t = h_58;
  return(t);
}
ATerm k_6 (ATerm t)
{
  t = term_k_29;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_q_29;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL,v_58 = NULL,x_58 = NULL,d_59 = NULL;
  s_58 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_j_29, s_58);
  x_58 = t;
  t = term_i_31;
  d_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_j_29, s_58), term_i_31);
  t = k_12(k_6, x_58, d_59, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_p_29, s_58);
  t_58 = t;
  t = term_k_31;
  v_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_p_29, s_58), term_k_31);
  t = k_12(l_6, t_58, v_58, t);
  t = s_58;
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm o_59 = NULL,v_59 = NULL,m_60 = NULL;
  o_59 = t;
  t = term_o_21;
  v_59 = t;
  t = (ATerm) ATinsert(ATempty, term_l_31);
  m_60 = t;
  t = SSL_printnl(v_59, m_60);
  t = o_59;
  return(t);
}
ATerm n_6 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
      {
        ATerm s_31 = t;
        int v_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(v_31);
          }
        else
          {
            t = s_31;
            {
              ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  h_61 = ATgetArgument(t, 0);
                  j_61 = ATgetArgument(t, 1);
                  k_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_61;
              if(match_cons(t, sym_SVar_1))
                {
                  i_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_61;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = j_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_23;
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_31 = ATgetArgument(t, 0);
      if(match_cons(w_31, sym_SVar_1))
        {
          ATerm s_32 = ATgetArgument(w_31, 0);
          if((ATgetSymbol((ATermAppl) s_32) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm m_32 = ATgetArgument(t, 1);
        if(((ATgetType(m_32) != AT_LIST) || !(ATisEmpty(m_32))))
          _fail(t);
      }
      {
        ATerm n_32 = ATgetArgument(t, 2);
        if(((ATgetType(n_32) != AT_LIST) || !(ATisEmpty(n_32))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,t_61 = NULL;
  o_61 = t;
  t = term_o_21;
  p_61 = t;
  t = (ATerm) ATinsert(ATempty, term_t_32);
  t_61 = t;
  t = SSL_printnl(p_61, t_61);
  t = o_61;
  return(t);
}
ATerm a_10 (ATerm x_20, ATerm t)
{
  ATerm l_59 = NULL,m_59 = NULL;
  t = if_verbose2_1_0(m_6, t);
  t = new_0_0(t);
  m_59 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = x_20;
  t = inline_rules_0_0(t);
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, m_59, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_26, l_59), (ATerm) ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_59), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_l_23))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(n_6, t);
  {
    ATerm u_32 = t;
    if((PushChoice() == 0))
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        t = oncetd_1_0(o_6, t);
        l_61 = t;
        t = term_o_21;
        m_61 = t;
        t = (ATerm) ATinsert(ATempty, term_v_32);
        n_61 = t;
        t = SSL_printnl(m_61, n_61);
        t = l_61;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_32;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(r_6, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm w_61 (ATerm t)
  {
    ATerm w_32 = t;
    int x_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_97(t);
        ;
        LocalPopChoice(x_32);
      }
    else
      {
        t = w_32;
        t = SRTS_all(w_61, t);
      }
    return(t);
  }
  t = w_61(t);
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL;
  n_63 = t;
  t = term_o_21;
  o_63 = t;
  t = (ATerm) ATinsert(ATempty, term_y_32);
  p_63 = t;
  t = SSL_printnl(o_63, p_63);
  t = n_63;
  return(t);
}
ATerm x_6 (ATerm t)
{
  t = debug_1_0(a_7, t);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,v_65 = NULL;
  t_65 = t;
  t = term_o_21;
  u_65 = t;
  t = (ATerm) ATinsert(ATempty, term_a_33);
  v_65 = t;
  t = SSL_printnl(u_65, v_65);
  t = t_65;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm j_63 = NULL,m_63 = NULL;
  m_63 = t;
  t = new_0_0(t);
  j_63 = t;
  {
    ATerm b_33 = t;
    int c_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_30, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, j_63), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(c_33);
      }
    else
      {
        t = b_33;
        t = if_verbose2_1_0(t_6, t);
        _fail(t);
      }
    {
      ATerm f_33 = t;
      int g_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_63 = NULL,s_63 = NULL,a_64 = NULL,b_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL,y_64 = NULL,a_65 = NULL,b_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
          q_63 = t;
          if(match_cons(t, sym_Seq_2))
            {
              s_63 = ATgetArgument(t, 0);
              m_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_63;
          if(match_cons(t, sym_All_1))
            {
              a_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_64;
          if(match_cons(t, sym_CallT_3))
            {
              b_64 = ATgetArgument(t, 0);
              t_64 = ATgetArgument(t, 1);
              l_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_64;
          if(match_cons(t, sym_SVar_1))
            {
              s_64 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_64;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = t_64;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_64 = ATgetFirst((ATermList) t);
              k_65 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_64;
          if(match_cons(t, sym_CallT_3))
            {
              y_64 = ATgetArgument(t, 0);
              b_65 = ATgetArgument(t, 1);
              j_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = y_64;
          if(match_cons(t, sym_SVar_1))
            {
              a_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = j_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = l_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_65;
          if(match_cons(t, sym_CallT_3))
            {
              n_65 = ATgetArgument(t, 0);
              p_65 = ATgetArgument(t, 1);
              q_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = n_65;
          if(match_cons(t, sym_SVar_1))
            {
              o_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = p_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_65;
          if((j_63 != t))
            {
              _fail(t);
            }
          t = o_65;
          if((a_65 != t))
            {
              _fail(t);
            }
          t = q_63;
          ;
          LocalPopChoice(g_33);
        }
      else
        {
          t = f_33;
          t = if_verbose1_1_0(x_6, t);
          _fail(t);
        }
      t = if_verbose2_1_0(b_7, t);
      t = m_63;
    }
  }
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,x_75 = NULL;
  v_75 = t;
  t = term_o_21;
  w_75 = t;
  t = (ATerm) ATinsert(ATempty, term_j_33);
  x_75 = t;
  t = SSL_printnl(w_75, x_75);
  t = v_75;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = debug_1_0(k_7, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_k_33;
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  a_79 = t;
  t = term_o_21;
  b_79 = t;
  t = (ATerm) ATinsert(ATempty, term_n_33);
  c_79 = t;
  t = SSL_printnl(b_79, c_79);
  t = a_79;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm s_75 = NULL,u_75 = NULL;
  u_75 = t;
  t = new_0_0(t);
  s_75 = t;
  {
    ATerm o_33 = t;
    int u_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_34, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_75), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(u_33);
      }
    else
      {
        t = o_33;
        t = if_verbose2_1_0(e_7, t);
        _fail(t);
      }
    {
      ATerm g_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_75 = NULL,z_75 = NULL,c_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL,s_76 = NULL,v_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,f_77 = NULL,g_77 = NULL,m_77 = NULL,q_77 = NULL,s_77 = NULL,w_77 = NULL,x_77 = NULL,y_77 = NULL,c_78 = NULL,f_78 = NULL,g_78 = NULL,h_78 = NULL,i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL;
          g_77 = t;
          if(match_cons(t, sym_CallT_3))
            {
              m_77 = ATgetArgument(t, 0);
              s_77 = ATgetArgument(t, 1);
              x_78 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = m_77;
          if(match_cons(t, sym_SVar_1))
            {
              q_77 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = q_77;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = s_77;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_77 = ATgetFirst((ATermList) t);
              w_78 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_77;
          if(match_cons(t, sym_CallT_3))
            {
              x_77 = ATgetArgument(t, 0);
              y_77 = ATgetArgument(t, 1);
              z_75 = ATgetArgument(t, 2);
              t = x_77;
              if(match_cons(t, sym_SVar_1))
                {
                  y_75 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_75;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = y_77;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_78 = ATgetFirst((ATermList) t);
                  v_78 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_78;
              if(match_cons(t, sym_Seq_2))
                {
                  f_78 = ATgetArgument(t, 0);
                  k_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_78;
              if(match_cons(t, sym_CallT_3))
                {
                  g_78 = ATgetArgument(t, 0);
                  i_78 = ATgetArgument(t, 1);
                  j_78 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_78;
              if(match_cons(t, sym_SVar_1))
                {
                  h_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_78;
              if(match_cons(t, sym_CallT_3))
                {
                  l_78 = ATgetArgument(t, 0);
                  n_78 = ATgetArgument(t, 1);
                  u_78 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_78;
              if(match_cons(t, sym_SVar_1))
                {
                  m_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_78;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = n_78;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_78 = ATgetFirst((ATermList) t);
                  t_78 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_78;
              if(match_cons(t, sym_CallT_3))
                {
                  p_78 = ATgetArgument(t, 0);
                  r_78 = ATgetArgument(t, 1);
                  s_78 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_78;
              if(match_cons(t, sym_SVar_1))
                {
                  q_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_75;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_78;
              if((s_75 != t))
                {
                  _fail(t);
                }
              t = q_78;
              if((h_78 != t))
                {
                  _fail(t);
                }
              t = g_77;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  x_77 = ATgetArgument(t, 0);
                  y_77 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = y_77;
              if(match_cons(t, sym_CallT_3))
                {
                  c_78 = ATgetArgument(t, 0);
                  v_78 = ATgetArgument(t, 1);
                  f_77 = ATgetArgument(t, 2);
                  t = c_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      f_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_78;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = v_78;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      c_76 = ATgetFirst((ATermList) t);
                      c_77 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = c_76;
                  if(match_cons(t, sym_Seq_2))
                    {
                      e_76 = ATgetArgument(t, 0);
                      o_76 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      f_76 = ATgetArgument(t, 0);
                      m_76 = ATgetArgument(t, 1);
                      n_76 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = f_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      g_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_76 = ATgetArgument(t, 0);
                      r_76 = ATgetArgument(t, 1);
                      b_77 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_76;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = r_76;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_76 = ATgetFirst((ATermList) t);
                      a_77 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = s_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      v_76 = ATgetArgument(t, 0);
                      y_76 = ATgetArgument(t, 1);
                      z_76 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = v_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = y_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_76;
                  if((s_75 != t))
                    {
                      _fail(t);
                    }
                  t = x_76;
                  if((x_77 != t))
                    {
                      _fail(t);
                    }
                  t = g_77;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      c_78 = ATgetArgument(t, 0);
                      v_78 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_78;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_78 = ATgetArgument(t, 0);
                      k_78 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      g_78 = ATgetArgument(t, 0);
                      i_78 = ATgetArgument(t, 1);
                      j_78 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = g_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_78 = ATgetArgument(t, 0);
                      n_78 = ATgetArgument(t, 1);
                      u_78 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_78;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = n_78;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_78 = ATgetFirst((ATermList) t);
                      t_78 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_78 = ATgetArgument(t, 0);
                      r_78 = ATgetArgument(t, 1);
                      s_78 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_78;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = w_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_78;
                  if((s_75 != t))
                    {
                      _fail(t);
                    }
                  t = q_78;
                  if((x_77 != t))
                    {
                      _fail(t);
                    }
                  t = g_77;
                }
            }
          ;
          LocalPopChoice(n_34);
        }
      else
        {
          t = g_34;
          t = if_verbose1_1_0(f_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(l_7, t);
      t = u_75;
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm m_7 (ATerm t)
  {
    t = topdown_1_0(l_95, t);
    return(t);
  }
  t = l_95(t);
  t = SRTS_all(m_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm q_34 = t;
  int v_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm w_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(v_34);
      {
        ATerm e_79 = NULL,f_79 = NULL;
        e_79 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm x_34 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        f_79 = t;
        t = SSLgetAnnotations(e_79);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm z_34 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) z_34) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm d_35 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(d_35) != AT_LIST) || !(ATisEmpty(d_35))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = f_79;
      }
    }
  else
    {
      t = q_34;
      {
        ATerm e_35 = t;
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
            t = e_35;
          }
      }
    }
  return(t);
}
ATerm c_10 (ATerm t_44, ATerm s_44, ATerm t)
{
  t = t_44;
  t = topdown_1_0(q_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, t_44);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm o_79 = NULL,p_79 = NULL,r_79 = NULL,s_79 = NULL,t_79 = NULL,u_79 = NULL,v_79 = NULL,w_79 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_79 = ATgetArgument(t, 0);
      u_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_79;
  if(match_cons(t, sym_Match_1))
    {
      s_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_79;
  if(match_cons(t, sym_Var_1))
    {
      t_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_79;
  if(match_cons(t, sym_Seq_2))
    {
      v_79 = ATgetArgument(t, 0);
      p_79 = ATgetArgument(t, 1);
      t = v_79;
      if(match_cons(t, sym_Build_1))
        {
          w_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_79;
      if(match_cons(t, sym_Var_1))
        {
          o_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_79;
      if((t_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_79)), p_79);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          v_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_79;
      if(match_cons(t, sym_Var_1))
        {
          w_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_79;
      if((t_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, t_79));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm g_80 = NULL,h_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      l_80 = ATgetArgument(t, 0);
      n_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_80;
  if(match_cons(t, sym_Build_1))
    {
      m_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_80;
  if(match_cons(t, sym_Seq_2))
    {
      o_80 = ATgetArgument(t, 0);
      h_80 = ATgetArgument(t, 1);
      t = o_80;
      if(match_cons(t, sym_Match_1))
        {
          g_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_80;
      if((m_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_80), h_80);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          o_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_80;
      if((m_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, m_80);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm c_81 = NULL,d_81 = NULL,f_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      f_81 = ATgetArgument(t, 0);
      h_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_81;
  if(match_cons(t, sym_Match_1))
    {
      g_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_81;
  if(match_cons(t, sym_Seq_2))
    {
      i_81 = ATgetArgument(t, 0);
      d_81 = ATgetArgument(t, 1);
      t = i_81;
      if(match_cons(t, sym_Match_1))
        {
          c_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_81;
      if((g_81 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, g_81), d_81);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          i_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_81;
      if((g_81 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, g_81);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm s_81 = NULL,t_81 = NULL,u_81 = NULL,w_81 = NULL,y_81 = NULL,z_81 = NULL,c_82 = NULL,d_82 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      w_81 = ATgetArgument(t, 0);
      y_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_81;
  if(match_cons(t, sym_Build_1))
    {
      ATerm k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_81;
  if(match_cons(t, sym_Seq_2))
    {
      z_81 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      t = z_81;
      if(match_cons(t, sym_PrimT_3))
        {
          s_81 = ATgetArgument(t, 0);
          t_81 = ATgetArgument(t, 1);
          u_81 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, s_81, t_81, u_81), c_82);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          z_81 = ATgetArgument(t, 0);
          c_82 = ATgetArgument(t, 1);
          d_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, z_81, c_82, d_82);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm w_82 = NULL,x_82 = NULL,z_82 = NULL,d_83 = NULL,g_83 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      z_82 = ATgetArgument(t, 0);
      d_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_82;
  if(match_cons(t, sym_Build_1))
    {
      ATerm l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_83;
  if(match_cons(t, sym_Seq_2))
    {
      g_83 = ATgetArgument(t, 0);
      x_82 = ATgetArgument(t, 1);
      t = g_83;
      if(match_cons(t, sym_Build_1))
        {
          w_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_82), x_82);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, g_83);
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_35 = ATgetArgument(t, 0);
      if(((ATgetType(m_35) != AT_LIST) || !(ATisEmpty(m_35))))
        _fail(t);
      {
        ATerm n_35 = ATgetArgument(t, 1);
        if(((ATgetType(n_35) != AT_LIST) || !(ATisEmpty(n_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_7 (ATerm t)
{
  ATerm v_84 = NULL,x_84 = NULL,d_85 = NULL,e_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_35 = ATgetArgument(t, 0);
      if(((ATgetType(o_35) == AT_LIST) && !(ATisEmpty(o_35))))
        {
          v_84 = ATgetFirst((ATermList) o_35);
          x_84 = (ATerm) ATgetNext((ATermList) o_35);
        }
      else
        _fail(t);
      {
        ATerm p_35 = ATgetArgument(t, 1);
        if(((ATgetType(p_35) == AT_LIST) && !(ATisEmpty(p_35))))
          {
            d_85 = ATgetFirst((ATermList) p_35);
            e_85 = (ATerm) ATgetNext((ATermList) p_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_84, d_85), (ATerm) ATmakeAppl(sym__2, x_84, e_85));
  return(t);
}
ATerm w_7 (ATerm t)
{
  ATerm f_85 = NULL,g_85 = NULL;
  if(match_cons(t, sym__2))
    {
      f_85 = ATgetArgument(t, 0);
      g_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_85), f_85);
  return(t);
}
ATerm y_7 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL;
  if(match_cons(t, sym__2))
    {
      h_85 = ATgetArgument(t, 0);
      i_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_85), (ATerm) ATmakeAppl(sym_Match_1, i_85));
  return(t);
}
ATerm z_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(((ATgetType(t_35) != AT_LIST) || !(ATisEmpty(t_35))))
        _fail(t);
      {
        ATerm u_35 = ATgetArgument(t, 1);
        if(((ATgetType(u_35) != AT_LIST) || !(ATisEmpty(u_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm n_85 = NULL,o_85 = NULL,q_85 = NULL,r_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_35 = ATgetArgument(t, 0);
      if(((ATgetType(v_35) == AT_LIST) && !(ATisEmpty(v_35))))
        {
          n_85 = ATgetFirst((ATermList) v_35);
          o_85 = (ATerm) ATgetNext((ATermList) v_35);
        }
      else
        _fail(t);
      {
        ATerm w_35 = ATgetArgument(t, 1);
        if(((ATgetType(w_35) == AT_LIST) && !(ATisEmpty(w_35))))
          {
            q_85 = ATgetFirst((ATermList) w_35);
            r_85 = (ATerm) ATgetNext((ATermList) w_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_85, q_85), (ATerm) ATmakeAppl(sym__2, o_85, r_85));
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm u_85 = NULL,v_85 = NULL;
  if(match_cons(t, sym__2))
    {
      u_85 = ATgetArgument(t, 0);
      v_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_85), u_85);
  return(t);
}
ATerm e_8 (ATerm t)
{
  ATerm w_85 = NULL,x_85 = NULL;
  if(match_cons(t, sym__2))
    {
      w_85 = ATgetArgument(t, 0);
      x_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_85), (ATerm) ATmakeAppl(sym_Match_1, x_85));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm a_84 = NULL,b_84 = NULL,c_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL,m_84 = NULL,n_84 = NULL,o_84 = NULL,p_84 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_84 = ATgetArgument(t, 0);
      m_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_84;
  if(match_cons(t, sym_Build_1))
    {
      j_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_84;
  if(match_cons(t, sym_Op_2))
    {
      k_84 = ATgetArgument(t, 0);
      l_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_84;
  if(match_cons(t, sym_Seq_2))
    {
      n_84 = ATgetArgument(t, 0);
      c_84 = ATgetArgument(t, 1);
      {
        ATerm u_84 = NULL;
        t = n_84;
        if(match_cons(t, sym_Match_1))
          {
            o_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_84;
        if(match_cons(t, sym_Op_2))
          {
            a_84 = ATgetArgument(t, 0);
            b_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_84;
        if((k_84 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, l_84, b_84);
        t = genzip_4_0(s_7, t_7, w_7, y_7, t);
        u_84 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_84), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_84, l_84)), c_84));
      }
    }
  else
    {
      ATerm m_85 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          n_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_84;
      if(match_cons(t, sym_Op_2))
        {
          o_84 = ATgetArgument(t, 0);
          p_84 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_84;
      if((k_84 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, l_84, p_84);
      t = genzip_4_0(z_7, b_8, c_8, e_8, t);
      m_85 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_85), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, k_84, l_84)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm b_87 = NULL,e_87 = NULL,f_87 = NULL,m_87 = NULL,n_87 = NULL,p_87 = NULL,q_87 = NULL,r_87 = NULL;
  e_87 = t;
  if(match_cons(t, sym_Seq_2))
    {
      f_87 = ATgetArgument(t, 0);
      p_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_87;
  if(match_cons(t, sym_Build_1))
    {
      m_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_87;
  if(match_cons(t, sym_Op_2))
    {
      n_87 = ATgetArgument(t, 0);
      {
        ATerm x_35 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = p_87;
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            q_87 = ATgetArgument(t, 0);
            {
              ATerm a_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(z_35);
        t = q_87;
        if(match_cons(t, sym_Match_1))
          {
            r_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = r_87;
        if(match_cons(t, sym_Op_2))
          {
            b_87 = ATgetArgument(t, 0);
            {
              ATerm b_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_87, b_87);
        {
          ATerm f_36 = t;
          if((PushChoice() == 0))
            {
              ATerm g_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  g_35 = ATgetArgument(t, 0);
                  if((g_35 != ATgetArgument(t, 1)))
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
              t = f_36;
            }
          t = term_g_36;
        }
      }
    else
      {
        t = y_35;
        if(match_cons(t, sym_Match_1))
          {
            q_87 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_87;
        if(match_cons(t, sym_Op_2))
          {
            r_87 = ATgetArgument(t, 0);
            {
              ATerm h_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, n_87, r_87);
        {
          ATerm i_36 = t;
          if((PushChoice() == 0))
            {
              ATerm r_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  r_35 = ATgetArgument(t, 0);
                  if((r_35 != ATgetArgument(t, 1)))
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
              t = i_36;
            }
          t = term_g_36;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm p_96 (ATerm), ATerm t)
{
  ATerm v_87 (ATerm t)
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_96(t);
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = SRTS_one(v_87, t);
      }
    return(t);
  }
  t = v_87(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm w_88 = NULL,x_88 = NULL,y_88 = NULL,z_88 = NULL,a_89 = NULL,b_89 = NULL,c_89 = NULL,d_89 = NULL,e_89 = NULL,f_89 = NULL,g_89 = NULL,h_89 = NULL,k_89 = NULL;
  w_88 = t;
  if(match_cons(t, sym_Let_2))
    {
      x_88 = ATgetArgument(t, 0);
      e_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_89;
  if(match_cons(t, sym_Let_2))
    {
      f_89 = ATgetArgument(t, 0);
      h_89 = ATgetArgument(t, 1);
      {
        ATerm r_89 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, x_88, f_89);
        t = conc_0_0(t);
        r_89 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_89, h_89);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          f_89 = ATgetArgument(t, 0);
          h_89 = ATgetArgument(t, 1);
          k_89 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_88;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_88 = ATgetFirst((ATermList) t);
          d_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_88;
      if(match_cons(t, sym_SDefT_4))
        {
          z_88 = ATgetArgument(t, 0);
          a_89 = ATgetArgument(t, 1);
          b_89 = ATgetArgument(t, 2);
          c_89 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = a_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_89;
      if(match_cons(t, sym_SVar_1))
        {
          g_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = g_89;
      if((z_88 != t))
        {
          _fail(t);
        }
      t = c_89;
      {
        ATerm n_36 = t;
        if((PushChoice() == 0))
          {
            ATerm f_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm o_36 = ATgetArgument(t, 0);
                  if(match_cons(o_36, sym_SVar_1))
                    {
                      if((z_88 != ATgetArgument(o_36, 0)))
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
                    ATerm y_36 = ATgetArgument(t, 2);
                    if(((ATgetType(y_36) != AT_LIST) || !(ATisEmpty(y_36))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(f_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_36;
          }
        t = c_89;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_90 = NULL,c_90 = NULL,d_90 = NULL,e_90 = NULL,f_90 = NULL,g_90 = NULL,i_90 = NULL,j_90 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_90 = ATgetArgument(t, 0);
      t = i_90;
      if(match_cons(t, sym_Seq_2))
        {
          g_90 = ATgetArgument(t, 0);
          c_90 = ATgetArgument(t, 1);
          t = g_90;
          if(match_cons(t, sym_Where_1))
            {
              b_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_90;
          if(match_cons(t, sym_Seq_2))
            {
              d_90 = ATgetArgument(t, 0);
              f_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_90;
          if(match_cons(t, sym_Build_1))
            {
              e_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_90, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_90), f_90)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              g_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, g_90);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          i_90 = ATgetArgument(t, 0);
          t = i_90;
          if(match_cons(t, sym_Test_1))
            {
              g_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, g_90);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              i_90 = ATgetArgument(t, 0);
              t = i_90;
              if(match_cons(t, sym_Not_1))
                {
                  g_90 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, g_90);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  i_90 = ATgetArgument(t, 0);
                  j_90 = ATgetArgument(t, 1);
                  t = j_90;
                  if((i_90 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      i_90 = ATgetArgument(t, 0);
                      j_90 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_90;
                  if((i_90 != t))
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
  ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL,c_91 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      z_90 = ATgetArgument(t, 0);
      c_91 = ATgetArgument(t, 1);
      t = z_90;
      if(match_cons(t, sym_LChoice_2))
        {
          a_91 = ATgetArgument(t, 0);
          b_91 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_91, (ATerm) ATmakeAppl(sym_LChoice_2, b_91, c_91));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          z_90 = ATgetArgument(t, 0);
          c_91 = ATgetArgument(t, 1);
          t = z_90;
          if(match_cons(t, sym_Seq_2))
            {
              a_91 = ATgetArgument(t, 0);
              b_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, a_91, (ATerm) ATmakeAppl(sym_Seq_2, b_91, c_91));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              z_90 = ATgetArgument(t, 0);
              c_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_90;
          if(match_cons(t, sym_Choice_2))
            {
              a_91 = ATgetArgument(t, 0);
              b_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, a_91, (ATerm) ATmakeAppl(sym_Choice_2, b_91, c_91));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL,y_92 = NULL;
  w_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_92 = ATgetFirst((ATermList) t);
      y_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm a_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_36 = NULL,t_36 = NULL,u_36 = NULL,w_36 = NULL,x_36 = NULL,b_37 = NULL,f_37 = NULL,q_6 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(w_92);
        x_36 = t;
        t = x_92;
        t = t_0(t);
        b_37 = t;
        t = (ATerm) ATinsert(CheckATermList(y_92), b_37);
        p_6 = t;
        t = SSLsetAnnotations(p_6, x_36);
        f_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_36 = ATgetFirst((ATermList) t);
            u_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_37);
        q_36 = t;
        t = u_36;
        {
          ATerm g_37 = t;
          int k_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(t_0, t);
              ;
              LocalPopChoice(k_37);
            }
          else
            {
              t = g_37;
            }
          w_36 = t;
          t = (ATerm) ATinsert(CheckATermList(w_36), t_36);
          q_6 = t;
          t = SSLsetAnnotations(q_6, q_36);
        }
        ;
        LocalPopChoice(d_37);
      }
    else
      {
        t = a_37;
        {
          ATerm q_38 = NULL,t_38 = NULL,g_12 = NULL;
          t = SSLgetAnnotations(w_92);
          q_38 = t;
          t = y_92;
          t = map1_1_0(t_0, t);
          t_38 = t;
          t = (ATerm) ATinsert(CheckATermList(t_38), x_92);
          g_12 = t;
          t = SSLsetAnnotations(g_12, q_38);
        }
      }
  }
  return(t);
}
ATerm j_8 (ATerm t)
{
  ATerm q_94 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      q_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, q_94, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_37), term_n_37));
  return(t);
}
ATerm m_8 (ATerm t)
{
  ATerm r_94 = NULL,s_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      r_94 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, r_94, term_n_37);
    }
  else
    {
      t = s_94;
    }
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm j_95 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_95, term_n_37);
  return(t);
}
ATerm p_8 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  p_95 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      o_95 = ATgetArgument(t, 0);
      {
        ATerm o_37 = t;
        int p_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, o_95, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_37), term_n_37));
            ;
            LocalPopChoice(p_37);
          }
        else
          {
            t = o_37;
            t = p_95;
          }
      }
    }
  else
    {
      t = p_95;
    }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm h_96 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      h_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_96, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_n_37), term_n_37));
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm i_96 = NULL,j_96 = NULL;
  j_96 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      i_96 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, i_96, term_n_37);
    }
  else
    {
      t = j_96;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,q_93 = NULL,v_93 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_93 = ATgetArgument(t, 0);
      v_93 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_93, v_93);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_93 = ATgetArgument(t, 0);
          t = q_93;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_93 = ATgetFirst((ATermList) t);
              m_93 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_93, (ATerm) ATmakeAppl(sym_LChoices_1, m_93));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              q_93 = ATgetArgument(t, 0);
              t = q_93;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_93 = ATgetFirst((ATermList) t);
                  m_93 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_93, (ATerm) ATmakeAppl(sym_Choices_1, m_93));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  q_93 = ATgetArgument(t, 0);
                  t = q_93;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_93 = ATgetFirst((ATermList) t);
                      m_93 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_93, (ATerm) ATmakeAppl(sym_Seqs_1, m_93));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_l_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_93 = ATgetArgument(t, 0);
                      v_93 = ATgetArgument(t, 1);
                      o_93 = ATgetArgument(t, 2);
                      n_93 = ATgetArgument(t, 3);
                      {
                        ATerm n_94 = NULL,p_94 = NULL;
                        t = v_93;
                        t = map1_1_0(j_8, t);
                        n_94 = t;
                        t = o_93;
                        t = map1_1_0(m_8, t);
                        p_94 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_93, n_94, p_94, n_93);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          q_93 = ATgetArgument(t, 0);
                          v_93 = ATgetArgument(t, 1);
                          o_93 = ATgetArgument(t, 2);
                          n_93 = ATgetArgument(t, 3);
                          {
                            ATerm q_37 = t;
                            int r_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm g_95 = NULL,i_95 = NULL;
                                t = o_93;
                                t = map1_1_0(n_8, t);
                                g_95 = t;
                                t = v_93;
                                t = map_1_0(p_8, t);
                                i_95 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_93, i_95, g_95, n_93);
                                ;
                                LocalPopChoice(r_37);
                              }
                            else
                              {
                                t = q_37;
                                {
                                  ATerm e_96 = NULL,g_96 = NULL;
                                  t = v_93;
                                  t = map1_1_0(q_8, t);
                                  e_96 = t;
                                  t = o_93;
                                  t = map_1_0(r_8, t);
                                  g_96 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_93, e_96, g_96, n_93);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              q_93 = ATgetArgument(t, 0);
                              v_93 = ATgetArgument(t, 1);
                              o_93 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, v_93, (ATerm) ATmakeAppl(sym_Op_2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, o_93), q_93)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  q_93 = ATgetArgument(t, 0);
                                  v_93 = ATgetArgument(t, 1);
                                  o_93 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_93)), q_93), (ATerm) ATmakeAppl(sym_Build_1, v_93)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      q_93 = ATgetArgument(t, 0);
                                      v_93 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_93, (ATerm) ATmakeAppl(sym_Match_1, v_93));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          q_93 = ATgetArgument(t, 0);
                                          v_93 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_93), v_93);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              q_93 = ATgetArgument(t, 0);
                                              v_93 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, v_93), q_93);
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
ATerm u_8 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL,q_98 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      o_98 = ATgetArgument(t, 0);
      t = o_98;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_g_36;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          o_98 = ATgetArgument(t, 0);
          t = o_98;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_l_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              o_98 = ATgetArgument(t, 0);
              p_98 = ATgetArgument(t, 1);
              t = o_98;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_g_36;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  o_98 = ATgetArgument(t, 0);
                  p_98 = ATgetArgument(t, 1);
                  t = p_98;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_g_36;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_98 = ATgetArgument(t, 0);
                      p_98 = ATgetArgument(t, 1);
                      t = p_98;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_g_36;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          o_98 = ATgetArgument(t, 0);
                          t = o_98;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_g_36;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              o_98 = ATgetArgument(t, 0);
                              t = o_98;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_g_36;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  o_98 = ATgetArgument(t, 0);
                                  p_98 = ATgetArgument(t, 1);
                                  t = p_98;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_g_36;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      o_98 = ATgetArgument(t, 0);
                                      p_98 = ATgetArgument(t, 1);
                                      t = p_98;
                                      t = fetch_1_0(u_8, t);
                                      t = term_g_36;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          o_98 = ATgetArgument(t, 0);
                                          p_98 = ATgetArgument(t, 1);
                                          t = p_98;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = o_98;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = p_98;
                                                }
                                              else
                                                {
                                                  t = o_98;
                                                }
                                            }
                                          else
                                            {
                                              t = o_98;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = p_98;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              o_98 = ATgetArgument(t, 0);
                                              p_98 = ATgetArgument(t, 1);
                                              t = p_98;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = o_98;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = p_98;
                                                    }
                                                  else
                                                    {
                                                      t = o_98;
                                                    }
                                                }
                                              else
                                                {
                                                  t = o_98;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = p_98;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  o_98 = ATgetArgument(t, 0);
                                                  t = o_98;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_g_36;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      o_98 = ATgetArgument(t, 0);
                                                      p_98 = ATgetArgument(t, 1);
                                                      q_98 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = q_98;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, o_98, p_98);
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
  ATerm n_100 = NULL,p_100 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      p_100 = ATgetArgument(t, 0);
      t = p_100;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_l_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          p_100 = ATgetArgument(t, 0);
          t = p_100;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_g_36;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              p_100 = ATgetArgument(t, 0);
              n_100 = ATgetArgument(t, 1);
              t = n_100;
              if(match_cons(t, sym_Id_0))
                {
                  t = p_100;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = n_100;
                    }
                  else
                    {
                      t = p_100;
                    }
                }
              else
                {
                  t = p_100;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = n_100;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  p_100 = ATgetArgument(t, 0);
                  n_100 = ATgetArgument(t, 1);
                  t = p_100;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_l_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      p_100 = ATgetArgument(t, 0);
                      n_100 = ATgetArgument(t, 1);
                      t = n_100;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_l_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          p_100 = ATgetArgument(t, 0);
                          n_100 = ATgetArgument(t, 1);
                          t = n_100;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_l_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              p_100 = ATgetArgument(t, 0);
                              t = p_100;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_l_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  p_100 = ATgetArgument(t, 0);
                                  t = p_100;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_l_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      p_100 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = p_100;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_l_23;
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
  ATerm s_37 = t;
  int t_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(t_37);
    }
  else
    {
      t = s_37;
      {
        ATerm v_37 = t;
        int w_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(w_37);
          }
        else
          {
            t = v_37;
            {
              ATerm x_37 = t;
              int y_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(y_37);
                }
              else
                {
                  t = x_37;
                  {
                    ATerm z_37 = t;
                    int a_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(a_38);
                      }
                    else
                      {
                        t = z_37;
                        {
                          ATerm b_38 = t;
                          int c_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(c_38);
                            }
                          else
                            {
                              t = b_38;
                              {
                                ATerm d_38 = t;
                                int h_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm h_101 = NULL,i_101 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        h_101 = ATgetArgument(t, 0);
                                        i_101 = ATgetArgument(t, 1);
                                        t = h_101;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_101;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            h_101 = ATgetArgument(t, 0);
                                            i_101 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = h_101;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = i_101;
                                      }
                                    ;
                                    LocalPopChoice(h_38);
                                  }
                                else
                                  {
                                    t = d_38;
                                    {
                                      ATerm i_38 = t;
                                      int j_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(j_38);
                                        }
                                      else
                                        {
                                          t = i_38;
                                          {
                                            ATerm k_38 = t;
                                            int n_38 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(n_38);
                                              }
                                            else
                                              {
                                                t = k_38;
                                                {
                                                  ATerm p_38 = t;
                                                  int r_38 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(r_38);
                                                    }
                                                  else
                                                    {
                                                      t = p_38;
                                                      {
                                                        ATerm s_38 = t;
                                                        int u_38 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(u_38);
                                                          }
                                                        else
                                                          {
                                                            t = s_38;
                                                            {
                                                              ATerm v_38 = t;
                                                              int w_38 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(w_38);
                                                                }
                                                              else
                                                                {
                                                                  t = v_38;
                                                                  {
                                                                    ATerm x_38 = t;
                                                                    int y_38 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(y_38);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = x_38;
                                                                        {
                                                                          ATerm a_39 = t;
                                                                          int b_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(b_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = a_39;
                                                                              {
                                                                                ATerm c_39 = t;
                                                                                int d_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(d_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = c_39;
                                                                                    {
                                                                                      ATerm m_101 = NULL,n_101 = NULL,p_101 = NULL,q_101 = NULL;
                                                                                      n_101 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          p_101 = ATgetArgument(t, 0);
                                                                                          q_101 = ATgetArgument(t, 1);
                                                                                          t = p_101;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              m_101 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_101;
                                                                                          t = c_10(m_101, q_101, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              p_101 = ATgetArgument(t, 0);
                                                                                              q_101 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = p_101;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_101;
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
ATerm repeat_1_0 (ATerm s_108 (ATerm), ATerm t)
{
  ATerm e_102 (ATerm t)
  {
    ATerm e_39 = t;
    int f_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_108(t);
        t = e_102(t);
        ;
        LocalPopChoice(f_39);
      }
    else
      {
        t = e_39;
      }
    return(t);
  }
  t = e_102(t);
  return(t);
}
ATerm downup_1_0 (ATerm n_95 (ATerm), ATerm t)
{
  t = n_95(t);
  {
    ATerm v_8 (ATerm t)
    {
      t = downup_1_0(n_95, t);
      return(t);
    }
    t = SRTS_all(v_8, t);
    t = n_95(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm y_101 (ATerm), ATerm z_101 (ATerm), ATerm a_102 (ATerm), ATerm b_102 (ATerm), ATerm t)
{
  ATerm l_102 (ATerm t)
  {
    ATerm g_39 = t;
    int i_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_101(t);
        ;
        LocalPopChoice(i_39);
      }
    else
      {
        t = g_39;
        {
          ATerm f_102 = NULL,g_102 = NULL,h_102 = NULL,i_102 = NULL,j_102 = NULL,k_102 = NULL,w_12 = NULL;
          t = z_101(t);
          k_102 = t;
          if(match_cons(t, sym__2))
            {
              g_102 = ATgetArgument(t, 0);
              h_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(k_102);
          f_102 = t;
          t = g_102;
          t = b_102(t);
          i_102 = t;
          t = h_102;
          t = l_102(t);
          j_102 = t;
          t = (ATerm) ATmakeAppl(sym__2, i_102, j_102);
          w_12 = t;
          t = SSLsetAnnotations(w_12, f_102);
          t = a_102(t);
        }
      }
    return(t);
  }
  t = l_102(t);
  return(t);
}
ATerm w_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_39 = ATgetArgument(t, 0);
      if(((ATgetType(j_39) != AT_LIST) || !(ATisEmpty(j_39))))
        _fail(t);
      {
        ATerm k_39 = ATgetArgument(t, 1);
        if(((ATgetType(k_39) != AT_LIST) || !(ATisEmpty(k_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm z_102 = NULL,a_103 = NULL,b_103 = NULL,c_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_39 = ATgetArgument(t, 0);
      if(((ATgetType(l_39) == AT_LIST) && !(ATisEmpty(l_39))))
        {
          z_102 = ATgetFirst((ATermList) l_39);
          a_103 = (ATerm) ATgetNext((ATermList) l_39);
        }
      else
        _fail(t);
      {
        ATerm m_39 = ATgetArgument(t, 1);
        if(((ATgetType(m_39) == AT_LIST) && !(ATisEmpty(m_39))))
          {
            b_103 = ATgetFirst((ATermList) m_39);
            c_103 = (ATerm) ATgetNext((ATermList) m_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_102, b_103), (ATerm) ATmakeAppl(sym__2, a_103, c_103));
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm d_103 = NULL,e_103 = NULL;
  if(match_cons(t, sym__2))
    {
      d_103 = ATgetArgument(t, 0);
      e_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_103), d_103);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL;
  r_102 = t;
  {
    ATerm n_39 = t;
    int o_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm p_39 = ATgetArgument(t, 0);
            ATerm q_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(o_39);
        t = r_102;
      }
    else
      {
        t = n_39;
        {
          ATerm y_102 = NULL;
          if(match_cons(t, sym__3))
            {
              s_102 = ATgetArgument(t, 0);
              t_102 = ATgetArgument(t, 1);
              u_102 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_102, t_102);
          t = genzip_4_0(w_8, y_8, z_8, _id, t);
          y_102 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_102, u_102);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm m_121 (ATerm), ATerm n_121 (ATerm), ATerm t)
{
  ATerm g_103 = NULL,j_103 = NULL;
  ATerm i_10 (ATerm t)
  {
    ATerm z_38 = NULL;
    t = m_121(t);
    z_38 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_38, not_null(j_103));
    t = lookup_0_0(t);
    t = n_121(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((j_103 != NULL) && (j_103 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        j_103 = ATgetArgument(t, 0);
      g_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_103;
  t = alltd_1_0(i_10, t);
  return(t);
}
ATerm j_10 (ATerm t)
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
ATerm m_10 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,q_40 = NULL,r_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          f_40 = ATgetFirst((ATermList) v_39);
          g_40 = (ATerm) ATgetNext((ATermList) v_39);
        }
      else
        _fail(t);
      {
        ATerm w_39 = ATgetArgument(t, 1);
        if(((ATgetType(w_39) == AT_LIST) && !(ATisEmpty(w_39))))
          {
            q_40 = ATgetFirst((ATermList) w_39);
            r_40 = (ATerm) ATgetNext((ATermList) w_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_40, q_40), (ATerm) ATmakeAppl(sym__2, g_40, r_40));
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL;
  if(match_cons(t, sym__2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(t_40), s_40);
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm v_40 = NULL,f_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL;
  if(match_cons(t, sym__2))
    {
      v_40 = ATgetArgument(t, 0);
      n_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_40;
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm z_39 = ATgetArgument(t, 0);
            f_41 = ATgetArgument(t, 1);
            l_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(y_39);
        t = (ATerm) ATmakeAppl(sym_SDef_3, n_41, f_41, l_41);
      }
    else
      {
        t = x_39;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm a_40 = ATgetArgument(t, 0);
            f_41 = ATgetArgument(t, 1);
            l_41 = ATgetArgument(t, 2);
            m_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, n_41, f_41, l_41, m_41);
      }
  }
  return(t);
}
ATerm q_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(((ATgetType(b_40) != AT_LIST) || !(ATisEmpty(b_40))))
        _fail(t);
      {
        ATerm c_40 = ATgetArgument(t, 1);
        if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) == AT_LIST) && !(ATisEmpty(d_40))))
        {
          x_42 = ATgetFirst((ATermList) d_40);
          y_42 = (ATerm) ATgetNext((ATermList) d_40);
        }
      else
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) == AT_LIST) && !(ATisEmpty(e_40))))
          {
            z_42 = ATgetFirst((ATermList) e_40);
            a_43 = (ATerm) ATgetNext((ATermList) e_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_42, z_42), (ATerm) ATmakeAppl(sym__2, y_42, a_43));
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  if(match_cons(t, sym__2))
    {
      b_43 = ATgetArgument(t, 0);
      c_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_43), b_43);
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm e_43 = NULL,g_43 = NULL,h_43 = NULL;
  if(match_cons(t, sym__2))
    {
      e_43 = ATgetArgument(t, 0);
      h_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_43;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_43);
      }
    else
      {
        t = h_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_40 = ATgetArgument(t, 0);
            g_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_43, g_43);
      }
  }
  return(t);
}
ATerm y_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_40 = ATgetArgument(t, 0);
      if(((ATgetType(l_40) != AT_LIST) || !(ATisEmpty(l_40))))
        _fail(t);
      {
        ATerm m_40 = ATgetArgument(t, 1);
        if(((ATgetType(m_40) != AT_LIST) || !(ATisEmpty(m_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(((ATgetType(n_40) == AT_LIST) && !(ATisEmpty(n_40))))
        {
          c_44 = ATgetFirst((ATermList) n_40);
          d_44 = (ATerm) ATgetNext((ATermList) n_40);
        }
      else
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) == AT_LIST) && !(ATisEmpty(o_40))))
          {
            e_44 = ATgetFirst((ATermList) o_40);
            g_44 = (ATerm) ATgetNext((ATermList) o_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_44, e_44), (ATerm) ATmakeAppl(sym__2, d_44, g_44));
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm j_44 = NULL,n_44 = NULL;
  if(match_cons(t, sym__2))
    {
      j_44 = ATgetArgument(t, 0);
      n_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_44), j_44);
  return(t);
}
ATerm j_11 (ATerm t)
{
  ATerm u_44 = NULL,w_44 = NULL,y_44 = NULL;
  if(match_cons(t, sym__2))
    {
      u_44 = ATgetArgument(t, 0);
      y_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_44;
  {
    ATerm p_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(u_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_44);
      }
    else
      {
        t = p_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm x_40 = ATgetArgument(t, 0);
            w_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_44, w_44);
      }
  }
  return(t);
}
ATerm h_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_40 = ATgetArgument(t, 0);
      if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
        _fail(t);
      {
        ATerm z_40 = ATgetArgument(t, 1);
        if(((ATgetType(z_40) != AT_LIST) || !(ATisEmpty(z_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_12 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_41 = ATgetArgument(t, 0);
      if(((ATgetType(a_41) == AT_LIST) && !(ATisEmpty(a_41))))
        {
          e_46 = ATgetFirst((ATermList) a_41);
          f_46 = (ATerm) ATgetNext((ATermList) a_41);
        }
      else
        _fail(t);
      {
        ATerm b_41 = ATgetArgument(t, 1);
        if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
          {
            g_46 = ATgetFirst((ATermList) b_41);
            h_46 = (ATerm) ATgetNext((ATermList) b_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, e_46, g_46), (ATerm) ATmakeAppl(sym__2, f_46, h_46));
  return(t);
}
ATerm m_12 (ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  if(match_cons(t, sym__2))
    {
      i_46 = ATgetArgument(t, 0);
      j_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_46), i_46);
  return(t);
}
ATerm z_12 (ATerm t)
{
  ATerm l_46 = NULL,n_46 = NULL,o_46 = NULL;
  if(match_cons(t, sym__2))
    {
      l_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_46;
  {
    ATerm c_41 = t;
    int d_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm e_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(d_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_46);
      }
    else
      {
        t = c_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_41 = ATgetArgument(t, 0);
            n_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_46, n_46);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm b_125 (ATerm), ATerm t)
{
  ATerm j_112 = NULL,m_112 = NULL,n_112 = NULL,o_112 = NULL,s_112 = NULL;
  n_112 = t;
  if(match_cons(t, sym_Let_2))
    {
      o_112 = ATgetArgument(t, 0);
      s_112 = ATgetArgument(t, 1);
      {
        ATerm h_39 = NULL,t_39 = NULL,u_39 = NULL,b_13 = NULL;
        t = SSLgetAnnotations(n_112);
        h_39 = t;
        t = o_112;
        t = b_125(t);
        u_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_112, u_39);
        t = genzip_4_0(j_10, m_10, n_10, p_10, t);
        t_39 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, t_39, s_112);
        b_13 = t;
        t = SSLsetAnnotations(b_13, h_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          o_112 = ATgetArgument(t, 0);
          s_112 = ATgetArgument(t, 1);
          j_112 = ATgetArgument(t, 2);
          {
            ATerm q_42 = NULL,u_42 = NULL,v_42 = NULL,e_13 = NULL;
            t = SSLgetAnnotations(n_112);
            q_42 = t;
            t = s_112;
            t = b_125(t);
            v_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_112, v_42);
            t = genzip_4_0(q_10, r_10, t_10, u_10, t);
            u_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, o_112, u_42, j_112);
            e_13 = t;
            t = SSLsetAnnotations(e_13, q_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              o_112 = ATgetArgument(t, 0);
              s_112 = ATgetArgument(t, 1);
              j_112 = ATgetArgument(t, 2);
              m_112 = ATgetArgument(t, 3);
              {
                ATerm u_43 = NULL,z_43 = NULL,a_44 = NULL,g_13 = NULL;
                t = SSLgetAnnotations(n_112);
                u_43 = t;
                t = s_112;
                t = b_125(t);
                a_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, s_112, a_44);
                t = genzip_4_0(y_10, z_10, c_11, j_11, t);
                z_43 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, o_112, z_43, j_112, m_112);
                g_13 = t;
                t = SSLsetAnnotations(g_13, u_43);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  o_112 = ATgetArgument(t, 0);
                  s_112 = ATgetArgument(t, 1);
                  j_112 = ATgetArgument(t, 2);
                  m_112 = ATgetArgument(t, 3);
                  {
                    ATerm r_45 = NULL,a_46 = NULL,b_46 = NULL,h_13 = NULL;
                    t = SSLgetAnnotations(n_112);
                    r_45 = t;
                    t = s_112;
                    t = b_125(t);
                    b_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_112, b_46);
                    t = genzip_4_0(h_12, i_12, m_12, z_12, t);
                    a_46 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, o_112, a_46, j_112, m_112);
                    h_13 = t;
                    t = SSLsetAnnotations(h_13, r_45);
                  }
                }
              else
                {
                  ATerm g_47 = NULL,j_47 = NULL,i_13 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      o_112 = ATgetArgument(t, 0);
                      s_112 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_112);
                  g_47 = t;
                  t = o_112;
                  t = b_125(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_47 = ATgetFirst((ATermList) t);
                      {
                        ATerm h_41 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, j_47, s_112);
                  i_13 = t;
                  t = SSLsetAnnotations(i_13, g_47);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm c_125 (ATerm), ATerm d_125 (ATerm), ATerm e_125 (ATerm), ATerm t)
{
  ATerm i_115 = NULL,j_115 = NULL,k_115 = NULL,l_115 = NULL,m_115 = NULL;
  k_115 = t;
  if(match_cons(t, sym_Let_2))
    {
      l_115 = ATgetArgument(t, 0);
      m_115 = ATgetArgument(t, 1);
      {
        ATerm e_48 = NULL,n_48 = NULL,q_48 = NULL,v_13 = NULL;
        t = SSLgetAnnotations(k_115);
        e_48 = t;
        t = l_115;
        t = c_125(t);
        n_48 = t;
        t = m_115;
        t = c_125(t);
        q_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, n_48, q_48);
        v_13 = t;
        t = SSLsetAnnotations(v_13, e_48);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          l_115 = ATgetArgument(t, 0);
          m_115 = ATgetArgument(t, 1);
          i_115 = ATgetArgument(t, 2);
          {
            ATerm m_49 = NULL,y_49 = NULL,b_50 = NULL,c_50 = NULL,x_13 = NULL;
            t = SSLgetAnnotations(k_115);
            m_49 = t;
            t = l_115;
            t = e_125(t);
            y_49 = t;
            t = m_115;
            t = e_125(t);
            b_50 = t;
            t = i_115;
            t = c_125(t);
            c_50 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_49, b_50, c_50);
            x_13 = t;
            t = SSLsetAnnotations(x_13, m_49);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              l_115 = ATgetArgument(t, 0);
              m_115 = ATgetArgument(t, 1);
              i_115 = ATgetArgument(t, 2);
              j_115 = ATgetArgument(t, 3);
              {
                ATerm y_50 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,c_14 = NULL;
                t = SSLgetAnnotations(k_115);
                y_50 = t;
                t = l_115;
                t = e_125(t);
                e_51 = t;
                t = m_115;
                t = e_125(t);
                f_51 = t;
                t = i_115;
                t = e_125(t);
                g_51 = t;
                t = j_115;
                t = c_125(t);
                h_51 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_51, f_51, g_51, h_51);
                c_14 = t;
                t = SSLsetAnnotations(c_14, y_50);
              }
            }
          else
            {
              ATerm a_52 = NULL,j_52 = NULL,k_52 = NULL,d_14 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  l_115 = ATgetArgument(t, 0);
                  m_115 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(k_115);
              a_52 = t;
              t = l_115;
              t = e_125(t);
              j_52 = t;
              t = m_115;
              t = c_125(t);
              k_52 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, j_52, k_52);
              d_14 = t;
              t = SSLsetAnnotations(d_14, a_52);
            }
        }
    }
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm v_115 = NULL;
  ATerm i_41 = t;
  int j_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_115 = ATgetArgument(t, 0);
          {
            ATerm k_41 = ATgetArgument(t, 1);
          }
          {
            ATerm o_41 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_41);
      t = v_115;
    }
  else
    {
      t = i_41;
      if(match_cons(t, sym_SDefT_4))
        {
          v_115 = ATgetArgument(t, 0);
          {
            ATerm p_41 = ATgetArgument(t, 1);
          }
          {
            ATerm q_41 = ATgetArgument(t, 2);
          }
          {
            ATerm r_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = v_115;
    }
  return(t);
}
ATerm p_11 (ATerm v_73, ATerm u_73, ATerm t)
{
  t = v_73;
  t = map_1_0(j_13, t);
  return(t);
}
ATerm SVar_1_0 (ATerm p_85 (ATerm), ATerm t)
{
  ATerm b_116 = NULL,i_116 = NULL,j_116 = NULL,k_116 = NULL,t_14 = NULL;
  k_116 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_116);
  b_116 = t;
  t = i_116;
  t = p_85(t);
  j_116 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, j_116);
  t_14 = t;
  t = SSLsetAnnotations(t_14, b_116);
  return(t);
}
ATerm a_12 (ATerm o_122 (ATerm), ATerm p_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm o_64, ATerm n_64, ATerm m_64, ATerm t)
{
  ATerm k_13 (ATerm t)
  {
    ATerm m_116 = NULL;
    m_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_116, m_64);
    t = o_122(t);
    return(t);
  }
  ATerm l_13 (ATerm t)
  {
    ATerm n_116 = NULL;
    n_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_116, n_64);
    t = o_122(t);
    return(t);
  }
  t = o_64;
  t = p_122(k_13, l_13, _id, t);
  return(t);
}
ATerm o_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_41 = ATgetArgument(t, 0);
      if(((ATgetType(z_41) != AT_LIST) || !(ATisEmpty(z_41))))
        _fail(t);
      {
        ATerm a_42 = ATgetArgument(t, 1);
        if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_42 = ATgetArgument(t, 0);
      if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
        {
          y_116 = ATgetFirst((ATermList) f_42);
          z_116 = (ATerm) ATgetNext((ATermList) f_42);
        }
      else
        _fail(t);
      {
        ATerm g_42 = ATgetArgument(t, 1);
        if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
          {
            a_117 = ATgetFirst((ATermList) g_42);
            b_117 = (ATerm) ATgetNext((ATermList) g_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_116, a_117), (ATerm) ATmakeAppl(sym__2, z_116, b_117));
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm c_117 = NULL,d_117 = NULL;
  if(match_cons(t, sym__2))
    {
      c_117 = ATgetArgument(t, 0);
      d_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_117), c_117);
  return(t);
}
ATerm b_12 (ATerm i_122 (ATerm), ATerm j_122 (ATerm (ATerm), ATerm), ATerm g_64, ATerm j_64, ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,x_116 = NULL;
  t = g_64;
  t = i_122(t);
  s_116 = t;
  t = map_1_0(new_0_0, t);
  t_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_116, t_116);
  t = genzip_4_0(o_13, q_13, u_13, _id, t);
  x_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_116, j_64);
  t = conc_0_0(t);
  u_116 = t;
  t = g_64;
  {
    ATerm w_13 (ATerm t)
    {
      t = t_116;
      return(t);
    }
    t = j_122(w_13, t);
    v_116 = t;
    t = (ATerm) ATmakeAppl(sym__3, v_116, j_64, u_116);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL,s_117 = NULL;
  l_117 = t;
  if(match_cons(t, sym__2))
    {
      m_117 = ATgetArgument(t, 0);
      n_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_117 = ATgetFirst((ATermList) t);
      s_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_117;
  if(match_cons(t, sym__2))
    {
      j_117 = ATgetArgument(t, 0);
      k_117 = ATgetArgument(t, 1);
      {
        ATerm h_42 = t;
        int i_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_117;
            if((m_117 != t))
              {
                _fail(t);
              }
            t = k_117;
            ;
            LocalPopChoice(i_42);
          }
        else
          {
            t = h_42;
            t = (ATerm) ATmakeAppl(sym__2, m_117, s_117);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_117, s_117);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm o_111 (ATerm), ATerm t)
{
  ATerm t_118 (ATerm t)
  {
    ATerm j_42 = t;
    int k_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_111(t);
        ;
        LocalPopChoice(k_42);
      }
    else
      {
        t = j_42;
        {
          ATerm q_118 = NULL,r_118 = NULL,s_118 = NULL;
          ATerm y_13 (ATerm t)
          {
            ATerm b_53 = NULL;
            b_53 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_53, not_null(s_118));
            t = t_118(t);
            return(t);
          }
          q_118 = t;
          if(match_cons(t, sym__2))
            {
              r_118 = ATgetArgument(t, 0);
              if(((s_118 != NULL) && (s_118 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_118 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_118;
          t = SRTS_all(y_13, t);
        }
      }
    return(t);
  }
  t = t_118(t);
  return(t);
}
ATerm rename_4_0 (ATerm d_122 (ATerm (ATerm), ATerm), ATerm e_122 (ATerm), ATerm f_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm g_122 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_118 = NULL;
  ATerm m_119 (ATerm t)
  {
    ATerm z_13 (ATerm t)
    {
      ATerm g_119 = NULL,h_119 = NULL,i_119 = NULL;
      g_119 = t;
      if(match_cons(t, sym__2))
        {
          h_119 = ATgetArgument(t, 0);
          i_119 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm l_42 = t;
        int m_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_14 (ATerm t)
            {
              ATerm l_119 = NULL;
              l_119 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_119, i_119);
              t = lookup_0_0(t);
              return(t);
            }
            t = h_119;
            t = d_122(a_14, t);
            ;
            LocalPopChoice(m_42);
          }
        else
          {
            t = l_42;
            {
              ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
              t = g_119;
              t = b_12(e_122, g_122, h_119, i_119, t);
              if(match_cons(t, sym__3))
                {
                  i_53 = ATgetArgument(t, 0);
                  j_53 = ATgetArgument(t, 1);
                  k_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_12(m_119, f_122, i_53, j_53, k_53, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(z_13, t);
    return(t);
  }
  x_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_118, (ATerm) ATempty);
  t = m_119(t);
  return(t);
}
ATerm b_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if(((ATgetType(n_42) != AT_LIST) || !(ATisEmpty(n_42))))
        _fail(t);
      {
        ATerm o_42 = ATgetArgument(t, 1);
        if(((ATgetType(o_42) != AT_LIST) || !(ATisEmpty(o_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm e_14 (ATerm t)
{
  ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL,l_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_42 = ATgetArgument(t, 0);
      if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
        {
          a_56 = ATgetFirst((ATermList) p_42);
          b_56 = (ATerm) ATgetNext((ATermList) p_42);
        }
      else
        _fail(t);
      {
        ATerm r_42 = ATgetArgument(t, 1);
        if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
          {
            c_56 = ATgetFirst((ATermList) r_42);
            l_56 = (ATerm) ATgetNext((ATermList) r_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_56, c_56), (ATerm) ATmakeAppl(sym__2, b_56, l_56));
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm m_56 = NULL,s_56 = NULL;
  if(match_cons(t, sym__2))
    {
      m_56 = ATgetArgument(t, 0);
      s_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_56), m_56);
  return(t);
}
ATerm g_14 (ATerm t)
{
  ATerm v_56 = NULL,x_56 = NULL,y_56 = NULL;
  if(match_cons(t, sym__2))
    {
      v_56 = ATgetArgument(t, 0);
      y_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_56;
  {
    ATerm s_42 = t;
    int t_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm w_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_56);
      }
    else
      {
        t = s_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm d_43 = ATgetArgument(t, 0);
            x_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, y_56, x_56);
      }
  }
  return(t);
}
ATerm h_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_43 = ATgetArgument(t, 0);
      if(((ATgetType(f_43) != AT_LIST) || !(ATisEmpty(f_43))))
        _fail(t);
      {
        ATerm i_43 = ATgetArgument(t, 1);
        if(((ATgetType(i_43) != AT_LIST) || !(ATisEmpty(i_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_14 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_43 = ATgetArgument(t, 0);
      if(((ATgetType(j_43) == AT_LIST) && !(ATisEmpty(j_43))))
        {
          z_58 = ATgetFirst((ATermList) j_43);
          a_59 = (ATerm) ATgetNext((ATermList) j_43);
        }
      else
        _fail(t);
      {
        ATerm k_43 = ATgetArgument(t, 1);
        if(((ATgetType(k_43) == AT_LIST) && !(ATisEmpty(k_43))))
          {
            b_59 = ATgetFirst((ATermList) k_43);
            c_59 = (ATerm) ATgetNext((ATermList) k_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_58, b_59), (ATerm) ATmakeAppl(sym__2, a_59, c_59));
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL;
  if(match_cons(t, sym__2))
    {
      e_59 = ATgetArgument(t, 0);
      f_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_59), e_59);
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm h_59 = NULL,j_59 = NULL,k_59 = NULL;
  if(match_cons(t, sym__2))
    {
      h_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_59;
  {
    ATerm l_43 = t;
    int m_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm n_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(m_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_59);
      }
    else
      {
        t = l_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm o_43 = ATgetArgument(t, 0);
            j_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_59, j_59);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  ATerm v_122 = NULL,w_122 = NULL,x_122 = NULL,y_122 = NULL,z_122 = NULL;
  v_122 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_122 = ATgetArgument(t, 0);
      x_122 = ATgetArgument(t, 1);
      {
        ATerm v_53 = NULL,k_54 = NULL,v_14 = NULL;
        t = SSLgetAnnotations(v_122);
        v_53 = t;
        t = w_122;
        t = x_124(t);
        k_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_54, x_122);
        v_14 = t;
        t = SSLsetAnnotations(v_14, v_53);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          w_122 = ATgetArgument(t, 0);
          x_122 = ATgetArgument(t, 1);
          y_122 = ATgetArgument(t, 2);
          z_122 = ATgetArgument(t, 3);
          {
            ATerm m_55 = NULL,t_55 = NULL,y_55 = NULL,w_14 = NULL;
            t = SSLgetAnnotations(v_122);
            m_55 = t;
            t = y_122;
            t = x_124(t);
            y_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, y_122, y_55);
            t = genzip_4_0(b_14, e_14, f_14, g_14, t);
            t_55 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_122, x_122, t_55, z_122);
            w_14 = t;
            t = SSLsetAnnotations(w_14, m_55);
          }
        }
      else
        {
          ATerm l_58 = NULL,u_58 = NULL,w_58 = NULL,b_15 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              w_122 = ATgetArgument(t, 0);
              x_122 = ATgetArgument(t, 1);
              y_122 = ATgetArgument(t, 2);
              z_122 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_122);
          l_58 = t;
          t = y_122;
          t = x_124(t);
          w_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_122, w_58);
          t = genzip_4_0(h_14, i_14, k_14, l_14, t);
          u_58 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, w_122, x_122, u_58, z_122);
          b_15 = t;
          t = SSLsetAnnotations(b_15, l_58);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm y_124 (ATerm), ATerm z_124 (ATerm), ATerm a_125 (ATerm), ATerm t)
{
  ATerm r_125 = NULL,s_125 = NULL,t_125 = NULL,u_125 = NULL,v_125 = NULL;
  u_125 = t;
  if(match_cons(t, sym_Scope_2))
    {
      v_125 = ATgetArgument(t, 0);
      r_125 = ATgetArgument(t, 1);
      {
        ATerm b_60 = NULL,e_60 = NULL,f_60 = NULL,f_15 = NULL;
        t = SSLgetAnnotations(u_125);
        b_60 = t;
        t = v_125;
        t = a_125(t);
        e_60 = t;
        t = r_125;
        t = y_124(t);
        f_60 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, e_60, f_60);
        f_15 = t;
        t = SSLsetAnnotations(f_15, b_60);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          v_125 = ATgetArgument(t, 0);
          r_125 = ATgetArgument(t, 1);
          s_125 = ATgetArgument(t, 2);
          t_125 = ATgetArgument(t, 3);
          {
            ATerm s_60 = NULL,x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(u_125);
            s_60 = t;
            t = v_125;
            t = a_125(t);
            x_60 = t;
            t = r_125;
            t = a_125(t);
            y_60 = t;
            t = s_125;
            t = a_125(t);
            z_60 = t;
            t = t_125;
            t = y_124(t);
            a_61 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_60, y_60, z_60, a_61);
            g_15 = t;
            t = SSLsetAnnotations(g_15, s_60);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              v_125 = ATgetArgument(t, 0);
              r_125 = ATgetArgument(t, 1);
              s_125 = ATgetArgument(t, 2);
              t_125 = ATgetArgument(t, 3);
              {
                ATerm y_61 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,i_15 = NULL;
                t = SSLgetAnnotations(u_125);
                y_61 = t;
                t = v_125;
                t = a_125(t);
                d_62 = t;
                t = r_125;
                t = a_125(t);
                e_62 = t;
                t = s_125;
                t = a_125(t);
                f_62 = t;
                t = t_125;
                t = y_124(t);
                g_62 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, d_62, e_62, f_62, g_62);
                i_15 = t;
                t = SSLsetAnnotations(i_15, y_61);
              }
            }
          else
            {
              ATerm p_62 = NULL,r_62 = NULL,j_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  v_125 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_125);
              p_62 = t;
              t = v_125;
              t = y_124(t);
              r_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, r_62);
              j_15 = t;
              t = SSLsetAnnotations(j_15, p_62);
            }
        }
    }
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm e_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      e_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, e_126);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm p_43 = t;
  int q_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(q_43);
    }
  else
    {
      t = p_43;
      {
        ATerm g_126 = NULL,h_126 = NULL,i_126 = NULL,j_126 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            g_126 = ATgetArgument(t, 0);
            t = g_126;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                g_126 = ATgetArgument(t, 0);
                h_126 = ATgetArgument(t, 1);
                i_126 = ATgetArgument(t, 2);
                j_126 = ATgetArgument(t, 3);
                t = i_126;
                t = map_1_0(o_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    g_126 = ATgetArgument(t, 0);
                    h_126 = ATgetArgument(t, 1);
                    i_126 = ATgetArgument(t, 2);
                    j_126 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = i_126;
                t = map_1_0(p_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm r_126 = NULL;
  ATerm r_43 = t;
  int s_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_126 = ATgetArgument(t, 0);
          {
            ATerm t_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_43);
      t = r_126;
    }
  else
    {
      t = r_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_126;
    }
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm b_127 = NULL;
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_127 = ATgetArgument(t, 0);
          {
            ATerm x_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_43);
      t = b_127;
    }
  else
    {
      t = v_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_127;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(m_14, n_14, tboundin_3_0, t);
  return(t);
}
ATerm u_11 (ATerm z_103 (ATerm), ATerm l_30, ATerm k_30, ATerm t)
{
  ATerm u_127 (ATerm t)
  {
    ATerm o_127 = NULL,p_127 = NULL,q_127 = NULL;
    o_127 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_127 = ATgetFirst((ATermList) t);
            q_127 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm y_43 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = o_127;
              {
                ATerm q_14 (ATerm t)
                {
                  t = k_30;
                  return(t);
                }
                t = v_11(z_103, q_14, p_127, q_127, t);
                t = u_127(t);
              }
              ;
              LocalPopChoice(b_44);
            }
          else
            {
              t = y_43;
              {
                ATerm y_62 = NULL,b_63 = NULL,q_15 = NULL;
                t = SSLgetAnnotations(o_127);
                y_62 = t;
                t = q_127;
                t = u_127(t);
                b_63 = t;
                t = (ATerm) ATinsert(CheckATermList(b_63), p_127);
                q_15 = t;
                t = SSLsetAnnotations(q_15, y_62);
              }
            }
        }
      }
    return(t);
  }
  t = l_30;
  t = u_127(t);
  return(t);
}
ATerm foldr_3_0 (ATerm p_106 (ATerm), ATerm q_106 (ATerm), ATerm r_106 (ATerm), ATerm t)
{
  ATerm x_127 = NULL,y_127 = NULL,z_127 = NULL;
  x_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_127;
      t = p_106(t);
    }
  else
    {
      ATerm c_128 = NULL,d_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_127 = ATgetFirst((ATermList) t);
          z_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_127;
      t = r_106(t);
      c_128 = t;
      t = z_127;
      t = foldr_3_0(p_106, q_106, r_106, t);
      d_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_128, d_128);
      t = q_106(t);
    }
  return(t);
}
ATerm v_11 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm p_30, ATerm o_30, ATerm t)
{
  t = d_104(t);
  {
    ATerm r_14 (ATerm t)
    {
      ATerm g_128 = NULL;
      g_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_30, g_128);
      t = c_104(t);
      return(t);
    }
    t = fetch_1_0(r_14, t);
    t = o_30;
  }
  return(t);
}
ATerm w_11 (ATerm u_103 (ATerm), ATerm j_30, ATerm i_30, ATerm t)
{
  ATerm w_128 (ATerm t)
  {
    ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL;
    r_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = r_128;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_128 = ATgetFirst((ATermList) t);
            t_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm f_44 = t;
          int h_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_128;
              {
                ATerm s_14 (ATerm t)
                {
                  t = i_30;
                  return(t);
                }
                t = v_11(u_103, s_14, s_128, t_128, t);
                t = w_128(t);
              }
              ;
              LocalPopChoice(h_44);
            }
          else
            {
              t = f_44;
              {
                ATerm k_63 = NULL,t_63 = NULL,s_15 = NULL;
                t = SSLgetAnnotations(r_128);
                k_63 = t;
                t = t_128;
                t = w_128(t);
                t_63 = t;
                t = (ATerm) ATinsert(CheckATermList(t_63), s_128);
                s_15 = t;
                t = SSLsetAnnotations(s_15, k_63);
              }
            }
        }
      }
    return(t);
  }
  t = j_30;
  t = w_128(t);
  return(t);
}
ATerm at_end_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm s_129 (ATerm t)
  {
    ATerm p_129 = NULL,q_129 = NULL,r_129 = NULL;
    r_129 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_129 = ATgetFirst((ATermList) t);
        q_129 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_64 = NULL,h_64 = NULL,y_15 = NULL;
          t = SSLgetAnnotations(r_129);
          d_64 = t;
          t = q_129;
          t = s_129(t);
          h_64 = t;
          t = (ATerm) ATinsert(CheckATermList(h_64), p_129);
          y_15 = t;
          t = SSLsetAnnotations(y_15, d_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = r_129;
        t = l_100(t);
      }
    return(t);
  }
  t = s_129(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm z_128 = NULL,a_129 = NULL,b_129 = NULL;
  z_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_128;
    }
  else
    {
      ATerm u_14 (ATerm t)
      {
        t = not_null(b_129);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_129 = ATgetFirst((ATermList) t);
          if(((b_129 != NULL) && (b_129 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            b_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_129;
      t = at_end_1_0(u_14, t);
    }
  return(t);
}
ATerm e_130 (ATerm w_129, ATerm t)
{
  ATerm x_129 = NULL;
  t = SSL_explode_term(w_129);
  if(match_cons(t, sym__2))
    {
      ATerm i_44 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_44) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_129;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_129 = NULL,a_130 = NULL,b_130 = NULL;
  b_130 = t;
  if(match_cons(t, sym__2))
    {
      z_129 = ATgetArgument(t, 0);
      a_130 = ATgetArgument(t, 1);
      {
        ATerm k_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_14 (ATerm t)
            {
              t = a_130;
              return(t);
            }
            t = z_129;
            t = at_end_1_0(x_14, t);
            ;
            LocalPopChoice(l_44);
          }
        else
          {
            t = k_44;
            t = e_130(b_130, t);
          }
      }
    }
  else
    {
      t = e_130(b_130, t);
    }
  return(t);
}
ATerm y_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm m_44 = ATgetArgument(t, 0);
      if(((ATgetType(m_44) != AT_LIST) || !(ATisEmpty(m_44))))
        _fail(t);
      {
        ATerm o_44 = ATgetArgument(t, 1);
        if(((ATgetType(o_44) != AT_LIST) || !(ATisEmpty(o_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm l_130 = NULL,m_130 = NULL,n_130 = NULL,o_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_44 = ATgetArgument(t, 0);
      if(((ATgetType(p_44) == AT_LIST) && !(ATisEmpty(p_44))))
        {
          l_130 = ATgetFirst((ATermList) p_44);
          m_130 = (ATerm) ATgetNext((ATermList) p_44);
        }
      else
        _fail(t);
      {
        ATerm q_44 = ATgetArgument(t, 1);
        if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
          {
            n_130 = ATgetFirst((ATermList) q_44);
            o_130 = (ATerm) ATgetNext((ATermList) q_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, l_130, n_130), (ATerm) ATmakeAppl(sym__2, m_130, o_130));
  return(t);
}
ATerm a_15 (ATerm t)
{
  ATerm p_130 = NULL,q_130 = NULL;
  if(match_cons(t, sym__2))
    {
      p_130 = ATgetArgument(t, 0);
      q_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_130), p_130);
  return(t);
}
ATerm y_11 (ATerm e_657, ATerm j_657, ATerm h_66, ATerm t)
{
  ATerm g_130 = NULL,h_130 = NULL,i_130 = NULL,j_130 = NULL;
  t = SSL_explode_term(j_657);
  if(match_cons(t, sym__2))
    {
      g_130 = ATgetArgument(t, 0);
      i_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(e_657);
  if(match_cons(t, sym__2))
    {
      if((g_130 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      h_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_130, i_130);
  t = genzip_4_0(y_14, z_14, a_15, _id, t);
  j_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_130, h_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm h_109 (ATerm), ATerm i_109 (ATerm), ATerm t)
{
  ATerm s_130 (ATerm t)
  {
    ATerm r_44 = t;
    int v_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_109(t);
        ;
        LocalPopChoice(v_44);
      }
    else
      {
        t = r_44;
        t = i_109(t);
        t = s_130(t);
      }
    return(t);
  }
  t = s_130(t);
  return(t);
}
ATerm for_3_0 (ATerm k_109 (ATerm), ATerm l_109 (ATerm), ATerm m_109 (ATerm), ATerm t)
{
  t = k_109(t);
  t = while_not_2_0(l_109, m_109, t);
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm z_130 = NULL;
  z_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, z_130);
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm a_131 = NULL,b_131 = NULL,c_131 = NULL,d_131 = NULL,a_16 = NULL;
  d_131 = t;
  if(match_cons(t, sym__2))
    {
      b_131 = ATgetArgument(t, 0);
      c_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_131);
  a_131 = t;
  t = c_131;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_131, c_131);
  a_16 = t;
  t = SSLsetAnnotations(a_16, a_131);
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm w_131 = NULL,x_131 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL;
  w_131 = t;
  if(match_cons(t, sym__2))
    {
      x_131 = ATgetArgument(t, 0);
      y_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_131;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_131 = ATgetFirst((ATermList) t);
      a_132 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm x_44 = t;
        int z_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_132(x_131, y_131, w_131, t);
            ;
            LocalPopChoice(z_44);
          }
        else
          {
            t = x_44;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_131), z_131), a_132);
          }
      }
    }
  else
    {
      t = k_132(x_131, y_131, w_131, t);
    }
  return(t);
}
ATerm k_132 (ATerm e_131, ATerm f_131, ATerm g_131, ATerm t)
{
  ATerm h_131 = NULL,k_131 = NULL,b_16 = NULL,n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL;
  t = SSLgetAnnotations(g_131);
  h_131 = t;
  t = f_131;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_131 = ATgetFirst((ATermList) t);
      q_131 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_131;
  if(match_cons(t, sym__2))
    {
      o_131 = ATgetArgument(t, 0);
      p_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_45 = t;
    int b_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_131;
        if((o_131 != t))
          {
            _fail(t);
          }
        t = q_131;
        ;
        LocalPopChoice(b_45);
      }
    else
      {
        t = a_45;
        t = f_131;
        t = y_11(o_131, p_131, q_131, t);
      }
    k_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, e_131, k_131);
    b_16 = t;
    t = SSLsetAnnotations(b_16, h_131);
  }
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm j_132 = NULL;
  if(match_cons(t, sym__2))
    {
      j_132 = ATgetArgument(t, 0);
      if((j_132 != ATgetArgument(t, 1)))
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
  ATerm c_45 = t;
  int d_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(c_15, d_15, e_15, t);
      ;
      LocalPopChoice(d_45);
    }
  else
    {
      t = c_45;
      {
        ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL;
        e_132 = t;
        if(match_cons(t, sym__2))
          {
            f_132 = ATgetArgument(t, 0);
            g_132 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = e_132;
        t = w_11(k_15, f_132, g_132, t);
      }
    }
  return(t);
}
ATerm m_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_15 (ATerm t)
{
  ATerm z_64 = NULL,c_65 = NULL;
  if(match_cons(t, sym__2))
    {
      z_64 = ATgetArgument(t, 0);
      c_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(p_15, z_64, c_65, t);
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm d_65 = NULL;
  if(match_cons(t, sym__2))
    {
      d_65 = ATgetArgument(t, 0);
      if((d_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm r_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm s_65 = NULL,w_65 = NULL;
  if(match_cons(t, sym__2))
    {
      s_65 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_11(u_15, s_65, w_65, t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm x_65 = NULL;
  if(match_cons(t, sym__2))
    {
      x_65 = ATgetArgument(t, 0);
      if((x_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm y_132 (ATerm t)
  {
    ATerm e_45 = t;
    int f_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_123(t);
        ;
        LocalPopChoice(f_45);
      }
    else
      {
        t = e_45;
        {
          ATerm h_45 = t;
          int i_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_132 = NULL,n_132 = NULL,q_64 = NULL,r_64 = NULL;
              m_132 = t;
              t = u_123(t);
              n_132 = t;
              t = m_132;
              {
                ATerm l_15 (ATerm t)
                {
                  ATerm p_132 = NULL;
                  t = y_132(t);
                  p_132 = t;
                  t = (ATerm) ATmakeAppl(sym__2, p_132, n_132);
                  t = diff_0_0(t);
                  return(t);
                }
                t = v_123(l_15, y_132, m_15, t);
                r_64 = t;
                t = SSL_explode_term(r_64);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_45 = ATgetArgument(t, 0);
                    q_64 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = q_64;
                t = foldr_3_0(n_15, o_15, _id, t);
              }
              ;
              LocalPopChoice(i_45);
            }
          else
            {
              t = h_45;
              {
                ATerm f_65 = NULL,g_65 = NULL;
                g_65 = t;
                t = SSL_explode_term(g_65);
                if(match_cons(t, sym__2))
                  {
                    ATerm k_45 = ATgetArgument(t, 0);
                    f_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = f_65;
                t = foldr_3_0(r_15, t_15, y_132, t);
              }
            }
        }
      }
    return(t);
  }
  t = y_132(t);
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm l_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_133);
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_45);
    }
  else
    {
      t = l_45;
      {
        ATerm n_133 = NULL,o_133 = NULL,p_133 = NULL,q_133 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_133 = ATgetArgument(t, 0);
            t = n_133;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                n_133 = ATgetArgument(t, 0);
                o_133 = ATgetArgument(t, 1);
                p_133 = ATgetArgument(t, 2);
                q_133 = ATgetArgument(t, 3);
                t = p_133;
                t = map_1_0(x_15, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    n_133 = ATgetArgument(t, 0);
                    o_133 = ATgetArgument(t, 1);
                    p_133 = ATgetArgument(t, 2);
                    q_133 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = p_133;
                t = map_1_0(z_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_15 (ATerm t)
{
  ATerm y_133 = NULL;
  ATerm n_45 = t;
  int o_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_133 = ATgetArgument(t, 0);
          {
            ATerm p_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(o_45);
      t = y_133;
    }
  else
    {
      t = n_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_133 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_133;
    }
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm h_134 = NULL;
  ATerm q_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_134 = ATgetArgument(t, 0);
          {
            ATerm v_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_45);
      t = h_134;
    }
  else
    {
      t = q_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_134;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm e_133 = NULL,i_133 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      i_133 = ATgetArgument(t, 0);
      t = i_133;
      if(match_cons(t, sym_Rule_3))
        {
          e_133 = ATgetArgument(t, 0);
          {
            ATerm x_45 = ATgetArgument(t, 1);
          }
          {
            ATerm y_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = e_133;
      t = free_vars_3_0(v_15, w_15, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          i_133 = ATgetArgument(t, 0);
          {
            ATerm c_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = i_133;
    }
  return(t);
}
ATerm Var_1_0 (ATerm g_82 (ATerm), ATerm t)
{
  ATerm l_134 = NULL,m_134 = NULL,n_134 = NULL,o_134 = NULL,e_16 = NULL;
  o_134 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_134);
  l_134 = t;
  t = m_134;
  t = g_82(t);
  n_134 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_134);
  e_16 = t;
  t = SSLsetAnnotations(e_16, l_134);
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(m_46);
    }
  else
    {
      t = k_46;
      {
        ATerm x_134 = NULL,y_134 = NULL,z_134 = NULL,a_135 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            x_134 = ATgetArgument(t, 0);
            y_134 = ATgetArgument(t, 1);
            z_134 = ATgetArgument(t, 2);
            a_135 = ATgetArgument(t, 3);
            t = z_134;
            t = map_1_0(d_16, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                x_134 = ATgetArgument(t, 0);
                y_134 = ATgetArgument(t, 1);
                z_134 = ATgetArgument(t, 2);
                a_135 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = z_134;
            t = map_1_0(f_16, t);
          }
      }
    }
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm h_135 = NULL;
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_135 = ATgetArgument(t, 0);
          {
            ATerm r_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_46);
      t = h_135;
    }
  else
    {
      t = p_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_135;
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm q_135 = NULL;
  ATerm t_46 = t;
  int v_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_135 = ATgetArgument(t, 0);
          {
            ATerm w_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_46);
      t = q_135;
    }
  else
    {
      t = t_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_135;
    }
  return(t);
}
ATerm h_16 (ATerm t)
{
  ATerm t_135 = NULL,u_135 = NULL,v_135 = NULL,w_135 = NULL,x_135 = NULL;
  t_135 = t;
  if(match_cons(t, sym_Let_2))
    {
      u_135 = ATgetArgument(t, 0);
      v_135 = ATgetArgument(t, 1);
      t = t_135;
      t = p_11(u_135, v_135, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          u_135 = ATgetArgument(t, 0);
          v_135 = ATgetArgument(t, 1);
          w_135 = ATgetArgument(t, 2);
          t = v_135;
          t = map_1_0(j_16, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              u_135 = ATgetArgument(t, 0);
              v_135 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, u_135);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  u_135 = ATgetArgument(t, 0);
                  v_135 = ATgetArgument(t, 1);
                  w_135 = ATgetArgument(t, 2);
                  x_135 = ATgetArgument(t, 3);
                  t = v_135;
                  t = map_1_0(o_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      u_135 = ATgetArgument(t, 0);
                      v_135 = ATgetArgument(t, 1);
                      w_135 = ATgetArgument(t, 2);
                      x_135 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = v_135;
                  t = map_1_0(p_16, t);
                }
            }
        }
    }
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm f_136 = NULL;
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_136 = ATgetArgument(t, 0);
          {
            ATerm z_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_46);
      t = f_136;
    }
  else
    {
      t = x_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_136;
    }
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm q_136 = NULL;
  ATerm b_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_136 = ATgetArgument(t, 0);
          {
            ATerm f_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_47);
      t = q_136;
    }
  else
    {
      t = b_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_136;
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm z_136 = NULL;
  ATerm h_47 = t;
  int i_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_136 = ATgetArgument(t, 0);
          {
            ATerm k_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_47);
      t = z_136;
    }
  else
    {
      t = h_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_136;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, c_16, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, h_16, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm j_12 (ATerm r_36, ATerm s_36, ATerm t)
{
  ATerm c_137 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_36, s_36);
  t = x_12(r_36, s_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_137 = ATgetFirst((ATermList) t);
      {
        ATerm l_47 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_137;
  return(t);
}
ATerm q_16 (ATerm t)
{
  ATerm z_137 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_137 = ATgetArgument(t, 0);
      {
        ATerm m_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_137;
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm a_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      c_138 = ATgetArgument(t, 0);
      e_138 = ATgetArgument(t, 1);
      a_138 = ATgetArgument(t, 2);
      t = c_138;
      if(match_cons(t, sym_SVar_1))
        {
          d_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_138;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          c_138 = ATgetArgument(t, 0);
          e_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_138;
      if(match_cons(t, sym_SVar_1))
        {
          d_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_138;
    }
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm i_138 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      i_138 = ATgetArgument(t, 0);
      {
        ATerm n_47 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = i_138;
  return(t);
}
ATerm t_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_47 = ATgetArgument(t, 0);
      if(((ATgetType(o_47) != AT_LIST) || !(ATisEmpty(o_47))))
        _fail(t);
      {
        ATerm p_47 = ATgetArgument(t, 1);
        if(((ATgetType(p_47) != AT_LIST) || !(ATisEmpty(p_47))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm j_138 = NULL,k_138 = NULL,l_138 = NULL,m_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_47 = ATgetArgument(t, 0);
      if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
        {
          j_138 = ATgetFirst((ATermList) q_47);
          k_138 = (ATerm) ATgetNext((ATermList) q_47);
        }
      else
        _fail(t);
      {
        ATerm r_47 = ATgetArgument(t, 1);
        if(((ATgetType(r_47) == AT_LIST) && !(ATisEmpty(r_47))))
          {
            l_138 = ATgetFirst((ATermList) r_47);
            m_138 = (ATerm) ATgetNext((ATermList) r_47);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_138, l_138), (ATerm) ATmakeAppl(sym__2, k_138, m_138));
  return(t);
}
ATerm a_17 (ATerm t)
{
  ATerm n_138 = NULL,o_138 = NULL;
  if(match_cons(t, sym__2))
    {
      n_138 = ATgetArgument(t, 0);
      o_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_138), n_138);
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm p_138 = NULL,q_138 = NULL;
  if(match_cons(t, sym__2))
    {
      p_138 = ATgetArgument(t, 0);
      q_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_138), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_138)));
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm m_137 = NULL,n_137 = NULL,o_137 = NULL,p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL,u_137 = NULL,v_137 = NULL,x_137 = NULL,y_137 = NULL,y_65 = NULL,z_65 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm t_47 = ATgetArgument(t, 0);
      if(match_cons(t_47, sym_SVar_1))
        {
          o_137 = ATgetArgument(t_47, 0);
        }
      else
        _fail(t);
      q_137 = ATgetArgument(t, 1);
      u_137 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_137), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  y_65 = t;
  t = term_u_47;
  z_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_47, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_137), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = j_12(z_65, y_65, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm v_47 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_47) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      m_137 = ATgetArgument(t, 1);
      n_137 = ATgetArgument(t, 2);
      t_137 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, o_137, m_137, t_137, n_137);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((o_137 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      p_137 = ATgetArgument(t, 1);
      {
        ATerm w_47 = ATgetArgument(t, 2);
      }
      r_137 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = p_137;
  t = map_1_0(q_16, t);
  y_137 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_137, q_137, r_137);
  t = substitute_2_0(r_16, _id, t);
  s_137 = t;
  t = t_137;
  t = map_1_0(s_16, t);
  v_137 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_137, v_137);
  t = genzip_4_0(t_16, u_16, a_17, b_17, t);
  x_137 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, v_137, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_137), s_137));
  t = downup_1_0(c_17, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL;
  z_138 = t;
  t = term_o_21;
  a_139 = t;
  t = (ATerm) ATinsert(ATempty, term_x_47);
  b_139 = t;
  t = SSL_printnl(a_139, b_139);
  t = z_138;
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = debug_1_0(g_17, t);
  return(t);
}
ATerm g_17 (ATerm t)
{
  t = term_y_47;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm j_139 = NULL,k_139 = NULL,l_139 = NULL;
  j_139 = t;
  t = term_o_21;
  k_139 = t;
  t = (ATerm) ATinsert(ATempty, term_z_47);
  l_139 = t;
  t = SSL_printnl(k_139, l_139);
  t = j_139;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm x_138 = NULL,y_138 = NULL;
  y_138 = t;
  t = new_0_0(t);
  x_138 = t;
  {
    ATerm b_48 = t;
    int c_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_138), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(c_48);
      }
    else
      {
        t = b_48;
        t = if_verbose2_1_0(d_17, t);
        _fail(t);
      }
    {
      ATerm h_48 = t;
      int i_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_139 = NULL,d_139 = NULL,e_139 = NULL,f_139 = NULL,g_139 = NULL,h_139 = NULL,i_139 = NULL;
          c_139 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              d_139 = ATgetArgument(t, 0);
              i_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_139;
          if(match_cons(t, sym_CallT_3))
            {
              e_139 = ATgetArgument(t, 0);
              g_139 = ATgetArgument(t, 1);
              h_139 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_139;
          if(match_cons(t, sym_SVar_1))
            {
              f_139 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_139;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = f_139;
          if((x_138 != t))
            {
              _fail(t);
            }
          t = c_139;
          ;
          LocalPopChoice(i_48);
        }
      else
        {
          t = h_48;
          t = if_verbose1_1_0(f_17, t);
          _fail(t);
        }
      t = if_verbose2_1_0(h_17, t);
      t = y_138;
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
ATerm k_12 (ATerm z_107 (ATerm), ATerm s_35, ATerm q_35, ATerm t)
{
  ATerm m_139 = NULL,n_139 = NULL,o_139 = NULL,p_139 = NULL,q_139 = NULL,r_139 = NULL;
  p_139 = t;
  t = z_107(t);
  m_139 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_139, s_35, q_35);
  t = y_12(m_139, s_35, q_35, t);
  {
    ATerm j_48 = t;
    int k_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_139 = NULL;
        t = term_u_27;
        s_139 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_139, term_u_27);
        t = x_12(m_139, s_139, t);
        ;
        LocalPopChoice(k_48);
      }
    else
      {
        t = j_48;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_139 = ATgetFirst((ATermList) t);
        o_139 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_u_27;
    q_139 = t;
    t = (ATerm) ATinsert(CheckATermList(o_139), (ATerm) ATinsert(CheckATermList(n_139), s_35));
    r_139 = t;
    t = SSL_table_put(m_139, q_139, r_139);
    t = p_139;
  }
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_u_47;
  return(t);
}
ATerm l_12 (ATerm z_19, ATerm a_20, ATerm c_20, ATerm b_20, ATerm t)
{
  ATerm t_139 = NULL,u_139 = NULL,v_139 = NULL;
  t_139 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_19), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  u_139 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_l_48, a_20, b_20, c_20);
  v_139 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_19), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_l_48, a_20, b_20, c_20));
  t = k_12(i_17, u_139, v_139, t);
  t = t_139;
  return(t);
}
ATerm map_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  ATerm k_140 (ATerm t)
  {
    ATerm h_140 = NULL,i_140 = NULL,j_140 = NULL;
    h_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_140;
      }
    else
      {
        ATerm e_66 = NULL,i_66 = NULL,j_66 = NULL,g_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_140 = ATgetFirst((ATermList) t);
            j_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_140);
        e_66 = t;
        t = i_140;
        t = v_99(t);
        i_66 = t;
        t = j_140;
        t = k_140(t);
        j_66 = t;
        t = (ATerm) ATinsert(CheckATermList(j_66), i_66);
        g_16 = t;
        t = SSLsetAnnotations(g_16, e_66);
      }
    return(t);
  }
  t = k_140(t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_80 (ATerm), ATerm a_81 (ATerm), ATerm t)
{
  ATerm m_140 = NULL,n_140 = NULL,o_140 = NULL,p_140 = NULL,q_140 = NULL,r_140 = NULL,i_16 = NULL;
  r_140 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_140 = ATgetFirst((ATermList) t);
      o_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_140);
  m_140 = t;
  t = n_140;
  t = z_80(t);
  p_140 = t;
  t = o_140;
  t = a_81(t);
  q_140 = t;
  t = (ATerm) ATinsert(CheckATermList(q_140), p_140);
  i_16 = t;
  t = SSLsetAnnotations(i_16, m_140);
  return(t);
}
ATerm o_12 (ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm s_140 = NULL;
  t = SSL_fputc(f_54, g_54);
  s_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_140);
  return(t);
}
ATerm p_12 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm t_140 = NULL;
  t = SSL_write_term_to_stream_text(t_57, u_57);
  t_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_140);
  return(t);
}
ATerm r_12 (ATerm u_115 (ATerm), ATerm l_527, ATerm x_57, ATerm t)
{
  ATerm u_140 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_527, term_m_48);
  t = u_12(t);
  u_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_140, x_57);
  t = u_115(t);
  t = fclose_0_0(t);
  t = x_57;
  return(t);
}
ATerm q_12 (ATerm p_57, ATerm q_57, ATerm t)
{
  ATerm v_140 = NULL;
  t = SSL_write_term_to_stream_baf(p_57, q_57);
  v_140 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_140);
  return(t);
}
ATerm l_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_48 = ATgetArgument(t, 0);
      if(match_cons(p_48, sym_Stream_1))
        {
          a_67 = ATgetArgument(p_48, 0);
        }
      else
        _fail(t);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_12(a_67, b_67, t);
  return(t);
}
ATerm p_17 (ATerm t)
{
  ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_48 = ATgetArgument(t, 0);
      if(match_cons(r_48, sym_Stream_1))
        {
          p_67 = ATgetArgument(r_48, 0);
        }
      else
        _fail(t);
      q_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12(p_67, q_67, t);
  m_67 = t;
  t = term_s_48;
  n_67 = t;
  t = m_67;
  if(match_cons(t, sym_Stream_1))
    {
      o_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_48, m_67);
  t = o_12(n_67, o_67, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_140 = NULL,a_141 = NULL,b_141 = NULL,c_141 = NULL,d_141 = NULL,f_141 = NULL,g_141 = NULL,h_141 = NULL,i_141 = NULL,j_141 = NULL,j_142 = NULL,k_142 = NULL,l_16 = NULL,k_16 = NULL;
  a_141 = t;
  if(match_cons(t, sym__2))
    {
      h_141 = ATgetArgument(t, 0);
      i_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_141);
  g_141 = t;
  t = h_141;
  {
    ATerm t_48 = t;
    int u_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_140 != NULL) && (z_140 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_140 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(k_17, t);
        ;
        LocalPopChoice(u_48);
      }
    else
      {
        t = t_48;
        t = term_v_48;
        z_140 = t;
      }
    j_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_141, i_141);
    k_16 = t;
    t = SSLsetAnnotations(k_16, g_141);
    t = a_141;
    if(match_cons(t, sym__2))
      {
        c_141 = ATgetArgument(t, 0);
        d_141 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_141);
    b_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_141, (ATerm) ATmakeAppl(sym__2, not_null(z_140), d_141));
    l_16 = t;
    t = SSLsetAnnotations(l_16, b_141);
    f_141 = t;
    if(match_cons(t, sym__2))
      {
        j_142 = ATgetArgument(t, 0);
        k_142 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm x_48 = t;
      int y_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL,m_16 = NULL;
          t = SSLgetAnnotations(f_141);
          t_66 = t;
          t = j_142;
          t = fetch_1_0(l_17, t);
          w_66 = t;
          t = k_142;
          if(match_cons(t, sym__2))
            {
              y_66 = ATgetArgument(t, 0);
              z_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_12(m_17, y_66, z_66, t);
          x_66 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_66, x_66);
          m_16 = t;
          t = SSLsetAnnotations(m_16, t_66);
          ;
          LocalPopChoice(y_48);
        }
      else
        {
          t = x_48;
          {
            ATerm g_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL,n_16 = NULL;
            t = SSLgetAnnotations(f_141);
            g_67 = t;
            t = k_142;
            if(match_cons(t, sym__2))
              {
                k_67 = ATgetArgument(t, 0);
                l_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = r_12(p_17, k_67, l_67, t);
            j_67 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_142, j_67);
            n_16 = t;
            t = SSLsetAnnotations(n_16, g_67);
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
ATerm apply_strategy_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm n_142 = NULL,o_142 = NULL,p_142 = NULL,q_142 = NULL,r_142 = NULL;
  r_142 = t;
  t = dtime_0_0(t);
  t = r_142;
  t = g_117(t);
  q_142 = t;
  t = dtime_0_0(t);
  n_142 = t;
  t = q_142;
  if(match_cons(t, sym__2))
    {
      o_142 = ATgetArgument(t, 0);
      p_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_142), (ATerm) ATmakeAppl(sym_Runtime_1, n_142)), p_142);
  return(t);
}
ATerm f_143 (ATerm z_142, ATerm t)
{
  t = SSL_fclose(z_142);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_143 = NULL,d_143 = NULL;
  d_143 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_143 = ATgetArgument(t, 0);
      {
        ATerm z_48 = t;
        int a_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_143);
            ;
            LocalPopChoice(a_49);
          }
        else
          {
            t = z_48;
            t = f_143(d_143, t);
          }
      }
    }
  else
    {
      t = f_143(d_143, t);
    }
  return(t);
}
ATerm s_12 (ATerm v_57, ATerm t)
{
  t = SSL_read_term_from_stream(v_57);
  return(t);
}
ATerm t_12 (ATerm h_54, ATerm i_54, ATerm t)
{
  ATerm g_143 = NULL;
  t = SSL_fopen(h_54, i_54);
  g_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_143);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_143 = NULL;
  t = SSL_stdin_stream();
  h_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_143);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_143 = NULL;
  t = SSL_stdout_stream();
  i_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_143);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_143 = NULL;
  t = SSL_stderr_stream();
  j_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_143);
  return(t);
}
ATerm q_144 (ATerm p_143, ATerm t)
{
  ATerm q_143 = NULL;
  t = SSL_explode_term(p_143);
  if(match_cons(t, sym__2))
    {
      ATerm b_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_49 = ATgetArgument(t, 1);
        if(((ATgetType(c_49) == AT_LIST) && !(ATisEmpty(c_49))))
          {
            q_143 = ATgetFirst((ATermList) c_49);
            {
              ATerm d_49 = (ATerm) ATgetNext((ATermList) c_49);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_143;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_143;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_143;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_143;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm r_144 (ATerm t_143, ATerm u_143, ATerm v_143, ATerm t)
{
  ATerm w_143 = NULL,x_143 = NULL,y_143 = NULL,b_144 = NULL,e_17 = NULL;
  t = SSLgetAnnotations(v_143);
  y_143 = t;
  t = t_143;
  if(match_cons(t, sym_Path_1))
    {
      b_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_144, u_143);
  e_17 = t;
  t = SSLsetAnnotations(e_17, y_143);
  if(match_cons(t, sym__2))
    {
      w_143 = ATgetArgument(t, 0);
      x_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(w_143, x_143, t);
  return(t);
}
ATerm s_144 (ATerm d_144, ATerm e_144, ATerm f_144, ATerm t)
{
  ATerm g_144 = NULL,h_144 = NULL,i_144 = NULL,l_144 = NULL,j_17 = NULL;
  t = SSLgetAnnotations(f_144);
  i_144 = t;
  t = SSL_is_string(d_144);
  l_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_144, e_144);
  j_17 = t;
  t = SSLsetAnnotations(j_17, i_144);
  if(match_cons(t, sym__2))
    {
      g_144 = ATgetArgument(t, 0);
      h_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_12(g_144, h_144, t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm n_144 = NULL,o_144 = NULL,p_144 = NULL;
  n_144 = t;
  if(match_cons(t, sym__2))
    {
      o_144 = ATgetArgument(t, 0);
      p_144 = ATgetArgument(t, 1);
      {
        ATerm e_49 = t;
        int f_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_144(n_144, t);
            ;
            LocalPopChoice(f_49);
          }
        else
          {
            t = e_49;
            {
              ATerm g_49 = t;
              int h_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_144(o_144, p_144, n_144, t);
                  ;
                  LocalPopChoice(h_49);
                }
              else
                {
                  t = g_49;
                  t = s_144(o_144, p_144, n_144, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_144(n_144, t);
    }
  return(t);
}
ATerm q_17 (ATerm t)
{
  t = term_j_49;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_144 = NULL,u_144 = NULL,v_144 = NULL;
  ATerm l_49 = t;
  int n_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_144 = NULL;
      w_144 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_144, term_o_49);
      t = u_12(t);
      ;
      LocalPopChoice(n_49);
    }
  else
    {
      t = l_49;
      t = debug_1_0(q_17, t);
      _fail(t);
    }
  u_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_12(v_144, t);
  t_144 = t;
  t = u_144;
  t = fclose_0_0(t);
  t = t_144;
  return(t);
}
ATerm fetch_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm u_145 (ATerm t)
  {
    ATerm r_145 = NULL,s_145 = NULL,t_145 = NULL;
    r_145 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_145 = ATgetFirst((ATermList) t);
        t_145 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_49 = t;
      int q_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_68 = NULL,f_68 = NULL,n_17 = NULL;
          t = SSLgetAnnotations(r_145);
          c_68 = t;
          t = s_145;
          t = f_100(t);
          f_68 = t;
          t = (ATerm) ATinsert(CheckATermList(t_145), f_68);
          n_17 = t;
          t = SSLsetAnnotations(n_17, c_68);
          ;
          LocalPopChoice(q_49);
        }
      else
        {
          t = p_49;
          {
            ATerm n_68 = NULL,q_68 = NULL,o_17 = NULL;
            t = SSLgetAnnotations(r_145);
            n_68 = t;
            t = t_145;
            t = u_145(t);
            q_68 = t;
            t = (ATerm) ATinsert(CheckATermList(q_68), s_145);
            o_17 = t;
            t = SSLsetAnnotations(o_17, n_68);
          }
        }
    }
    return(t);
  }
  t = u_145(t);
  return(t);
}
ATerm n_12 (ATerm x_51, ATerm y_51, ATerm t)
{
  t = SSL_strcat(x_51, y_51);
  return(t);
}
ATerm debug_1_0 (ATerm s_115 (ATerm), ATerm t)
{
  ATerm x_145 = NULL,y_145 = NULL,z_145 = NULL,a_146 = NULL;
  x_145 = t;
  t = s_115(t);
  y_145 = t;
  t = term_o_21;
  z_145 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_145), y_145);
  a_146 = t;
  t = SSL_printnl(z_145, a_146);
  t = x_145;
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(s_49);
    }
  else
    {
      t = r_49;
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  t = term_t_49;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm u_49 = t;
  int v_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_146 = NULL;
      h_146 = t;
      t = SSL_is_string(h_146);
      ;
      LocalPopChoice(v_49);
    }
  else
    {
      t = u_49;
      {
        ATerm w_49 = t;
        int x_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(r_17, t);
            ;
            LocalPopChoice(x_49);
          }
        else
          {
            t = w_49;
            {
              ATerm n_146 = NULL,o_146 = NULL,p_146 = NULL;
              n_146 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_146 = ATgetArgument(t, 0);
                  t = o_146;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_146 = ATgetArgument(t, 0);
                      t = o_146;
                      {
                        ATerm z_49 = t;
                        int a_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_50);
                          }
                        else
                          {
                            t = z_49;
                            t = debug_1_0(s_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_146 = NULL,u_146 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_146 = ATgetArgument(t, 0);
                          p_146 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_146;
                      t = eval_config_0_0(t);
                      t_146 = t;
                      t = p_146;
                      t = eval_config_0_0(t);
                      u_146 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_146, u_146);
                      t = n_12(t_146, u_146, t);
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
  ATerm y_146 = NULL,z_146 = NULL;
  y_146 = t;
  t = term_d_50;
  z_146 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_50, y_146);
  t = x_12(z_146, y_146, t);
  {
    ATerm e_50 = t;
    int f_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_147 = NULL,b_147 = NULL;
        t = eval_config_0_0(t);
        a_147 = t;
        t = term_d_50;
        b_147 = t;
        t = SSL_table_put(b_147, y_146, a_147);
        t = a_147;
        ;
        LocalPopChoice(f_50);
      }
    else
      {
        t = e_50;
      }
  }
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm f_147 = NULL;
  f_147 = t;
  if(match_string(t, "-k"))
    {
      t = f_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_147;
    }
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm g_147 = NULL,h_147 = NULL,i_147 = NULL;
  g_147 = t;
  t = SSL_string_to_int(g_147);
  h_147 = t;
  t = term_g_50;
  i_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_50, h_147);
  t = a_13(i_147, h_147, t);
  t = g_147;
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_h_50;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_17, y_17, a_18, t);
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm k_147 = NULL;
  k_147 = t;
  if(match_string(t, "-S"))
    {
      t = k_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_147;
    }
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm l_147 = NULL,m_147 = NULL;
  t = term_x_21;
  l_147 = t;
  t = term_i_50;
  m_147 = t;
  t = term_o_50;
  t = a_13(l_147, m_147, t);
  t = term_p_50;
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = term_q_50;
  return(t);
}
ATerm g_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_18 (ATerm t)
{
  ATerm n_147 = NULL,o_147 = NULL,p_147 = NULL;
  n_147 = t;
  t = SSL_string_to_int(n_147);
  o_147 = t;
  t = term_x_21;
  p_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, o_147);
  t = a_13(p_147, o_147, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_147);
  return(t);
}
ATerm k_18 (ATerm t)
{
  t = term_t_50;
  return(t);
}
ATerm m_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm q_147 = NULL,r_147 = NULL;
  t = term_u_50;
  q_147 = t;
  t = term_n_21;
  r_147 = t;
  t = term_v_50;
  t = a_13(q_147, r_147, t);
  t = term_w_50;
  return(t);
}
ATerm t_18 (ATerm t)
{
  t = term_x_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm z_50 = t;
  int a_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_18, e_18, f_18, t);
      ;
      LocalPopChoice(a_51);
    }
  else
    {
      t = z_50;
      {
        ATerm b_51 = t;
        int c_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_18, i_18, k_18, t);
            ;
            LocalPopChoice(c_51);
          }
        else
          {
            t = b_51;
            t = Option_3_0(m_18, s_18, t_18, t);
          }
      }
    }
  return(t);
}
ATerm a_13 (ATerm g_60, ATerm h_60, ATerm t)
{
  ATerm s_147 = NULL;
  t = term_d_50;
  s_147 = t;
  t = SSL_table_put(s_147, g_60, h_60);
  t = (ATerm) ATmakeAppl(sym__3, term_d_50, g_60, h_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm v_147 = NULL,w_147 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_147 = NULL,y_147 = NULL,z_147 = NULL;
      t = term_n_21;
      t = i_0(t);
      x_147 = t;
      t = term_d_51;
      y_147 = t;
      t = term_i_51;
      z_147 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_51, term_i_51, x_147);
      t = y_12(y_147, z_147, x_147, t);
      _fail(t);
    }
  else
    {
      ATerm c_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_147 = ATgetFirst((ATermList) t);
          w_147 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_147;
      t = d_0(t);
      t = term_n_21;
      t = g_0(t);
      c_148 = t;
      t = (ATerm) ATinsert(CheckATermList(w_147), c_148);
    }
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm e_148 = NULL;
  e_148 = t;
  if(match_string(t, "-o"))
    {
      t = e_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_148;
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm f_148 = NULL,g_148 = NULL;
  f_148 = t;
  t = term_j_51;
  g_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_51, f_148);
  t = a_13(g_148, f_148, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_148);
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_k_51;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_18, v_18, w_18, t);
  return(t);
}
ATerm y_12 (ATerm d_36, ATerm e_36, ATerm c_36, ATerm t)
{
  ATerm i_148 = NULL,j_148 = NULL,k_148 = NULL;
  i_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_51 = ATgetArgument(t, 0);
            ATerm o_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_36, e_36);
        t = x_12(d_36, e_36, t);
        ;
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        t = (ATerm) ATempty;
      }
    j_148 = t;
    t = (ATerm) ATinsert(CheckATermList(j_148), c_36);
    k_148 = t;
    t = SSL_table_put(d_36, e_36, k_148);
    t = i_148;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm r_148 = NULL,s_148 = NULL,t_148 = NULL,u_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_148 = NULL,w_148 = NULL,x_148 = NULL;
      t = term_n_21;
      t = r_0(t);
      v_148 = t;
      t = term_d_51;
      w_148 = t;
      t = term_i_51;
      x_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_51, term_i_51, v_148);
      t = y_12(w_148, x_148, v_148, t);
      _fail(t);
    }
  else
    {
      ATerm b_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_148 = ATgetFirst((ATermList) t);
          s_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_148;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_148 = ATgetFirst((ATermList) t);
          u_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_148;
      t = n_0(t);
      t = t_148;
      t = p_0(t);
      b_149 = t;
      t = (ATerm) ATinsert(CheckATermList(u_148), b_149);
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm d_149 = NULL;
  d_149 = t;
  if(match_string(t, "-i"))
    {
      t = d_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_149;
    }
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm e_149 = NULL,f_149 = NULL;
  e_149 = t;
  t = term_p_51;
  f_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_51, e_149);
  t = a_13(f_149, e_149, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_149);
  return(t);
}
ATerm z_18 (ATerm t)
{
  t = term_q_51;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_18, y_18, z_18, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_149 = NULL,h_149 = NULL,i_149 = NULL,j_149 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_21;
  t = whoami_0_0(t);
  g_149 = t;
  t = term_o_21;
  i_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_51), g_149);
  j_149 = t;
  t = SSL_printnl(i_149, j_149);
  t = term_t_21;
  h_149 = t;
  t = SSL_exit(h_149);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_s_51;
  t = get_config_0_0(t);
  return(t);
}
ATerm v_12 (ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm t_51 = t;
  int w_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_34, b_34);
      ;
      LocalPopChoice(w_51);
    }
  else
    {
      t = t_51;
      t = SSL_addr(a_34, b_34);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_106 (ATerm), ATerm o_106 (ATerm), ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL;
  l_149 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_149;
      t = n_106(t);
    }
  else
    {
      ATerm q_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_149 = ATgetFirst((ATermList) t);
          n_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_149;
      t = foldr_2_0(n_106, o_106, t);
      q_149 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_149, q_149);
      t = o_106(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_i_50;
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL;
  if(match_cons(t, sym__2))
    {
      h_69 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_12(h_69, i_69, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_149 = NULL,d_69 = NULL,e_69 = NULL;
  t = times_0_0(t);
  e_69 = t;
  t = SSL_explode_term(e_69);
  if(match_cons(t, sym__2))
    {
      ATerm z_51 = ATgetArgument(t, 0);
      d_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_69;
  t = foldr_2_0(a_19, b_19, t);
  t_149 = t;
  t = SSL_TicksToSeconds(t_149);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_150 = NULL,f_150 = NULL,g_150 = NULL;
  e_150 = t;
  if(match_cons(t, sym__2))
    {
      f_150 = ATgetArgument(t, 0);
      g_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_52 = t;
    int c_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_150;
        if((f_150 != t))
          {
            _fail(t);
          }
        t = e_150;
        ;
        LocalPopChoice(c_52);
      }
    else
      {
        t = b_52;
        t = (ATerm) ATmakeAppl(sym__2, f_150, g_150);
        {
          ATerm d_52 = t;
          int e_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_150, g_150);
              ;
              LocalPopChoice(e_52);
            }
          else
            {
              t = d_52;
              t = SSL_gtr(f_150, g_150);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_150, g_150);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_125 (ATerm), ATerm t)
{
  ATerm k_150 = NULL;
  k_150 = t;
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_150 = NULL;
        t = term_x_21;
        t = get_config_0_0(t);
        m_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_150, term_t_21);
        t = geq_0_0(t);
        t = k_150;
        t = n_125(t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
        t = k_150;
      }
  }
  return(t);
}
ATerm c_19 (ATerm t)
{
  ATerm o_150 = NULL,p_150 = NULL,r_150 = NULL,s_150 = NULL;
  t = run_time_0_0(t);
  o_150 = t;
  t = term_n_21;
  t = whoami_0_0(t);
  p_150 = t;
  t = term_o_21;
  r_150 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_52), o_150), term_i_52), p_150);
  s_150 = t;
  t = SSL_printnl(r_150, s_150);
  t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_52), o_150), term_i_52), p_150));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(c_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_150 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_50;
  t_150 = t;
  t = SSL_exit(t_150);
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm b_151 = NULL,c_151 = NULL;
  c_151 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = c_151;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          b_151 = ATgetArgument(t, 0);
          {
            ATerm u_69 = NULL,t_17 = NULL;
            t = SSLgetAnnotations(c_151);
            u_69 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, b_151);
            t_17 = t;
            t = SSLsetAnnotations(t_17, u_69);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = c_151;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm m_52 = t;
  int n_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_52;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_52);
    }
  else
    {
      t = m_52;
      t = fetch_1_0(d_19, t);
    }
  t = e_118(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_151 = NULL,g_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_151 = ATgetFirst((ATermList) t);
      g_151 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_151 = NULL,l_151 = NULL;
        ATerm e_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_151)), not_null(l_151));
          return(t);
        }
        t = g_151;
        t = l_0(t);
        if(((k_151 != NULL) && (k_151 != t)))
          _fail(t);
        else
          k_151 = t;
        t = f_151;
        t = k_0(t);
        if(((l_151 != NULL) && (l_151 != t)))
          _fail(t);
        else
          l_151 = t;
        t = g_151;
        t = reverse_acc_2_0(k_0, e_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_21;
      t = l_0(t);
    }
  return(t);
}
ATerm x_12 (ATerm e_38, ATerm f_38, ATerm t)
{
  t = SSL_table_get(e_38, f_38);
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm p_151 = NULL,q_151 = NULL,r_151 = NULL,h_18 = NULL;
  r_151 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_151 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_151);
  p_151 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_151);
  h_18 = t;
  t = SSLsetAnnotations(h_18, p_151);
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_19 (ATerm t)
{
  ATerm t_151 = NULL;
  t_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_151), term_p_52);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_151 = NULL,o_151 = NULL;
  ATerm q_52 = t;
  int r_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_s_51;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(r_52);
    }
  else
    {
      t = q_52;
      t = fetch_1_0(g_19, t);
    }
  t = term_s_52;
  t = echo_0_0(t);
  t = term_d_51;
  n_151 = t;
  t = term_i_51;
  o_151 = t;
  t = term_t_52;
  t = x_12(n_151, o_151, t);
  t = reverse_acc_2_0(_id, h_19, t);
  t = map_1_0(j_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_151 = NULL,w_151 = NULL,x_151 = NULL;
  v_151 = t;
  {
    ATerm w_52 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_151;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_53 = ATgetFirst((ATermList) t);
                ATerm e_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_151;
          }
        ;
        LocalPopChoice(c_53);
      }
    else
      {
        t = w_52;
        t = (ATerm) ATinsert(ATempty, v_151);
      }
    w_151 = t;
    t = term_v_48;
    x_151 = t;
    t = SSL_printnl(x_151, w_151);
    t = v_151;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_s_51;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm b_152 = NULL,c_152 = NULL;
  t = term_f_53;
  b_152 = t;
  t = term_n_21;
  c_152 = t;
  t = term_g_53;
  t = a_13(b_152, c_152, t);
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = term_h_53;
  return(t);
}
ATerm s_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm d_152 = NULL,e_152 = NULL,f_152 = NULL,g_152 = NULL;
  t = term_f_53;
  f_152 = t;
  t = term_n_21;
  g_152 = t;
  t = term_g_53;
  t = a_13(f_152, g_152, t);
  t = term_l_53;
  d_152 = t;
  t = term_n_21;
  e_152 = t;
  t = term_m_53;
  t = a_13(d_152, e_152, t);
  t = term_n_53;
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_53 = t;
  int q_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_19, o_19, p_19, t);
      ;
      LocalPopChoice(q_53);
    }
  else
    {
      t = p_53;
      t = Option_3_0(s_19, u_19, v_19, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_121 (ATerm), ATerm t)
{
  ATerm l_152 = NULL,m_152 = NULL,n_152 = NULL,o_152 = NULL,q_152 = NULL,r_152 = NULL,j_18 = NULL;
  l_152 = t;
  {
    ATerm r_53 = t;
    int s_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_53;
        t = j_121(t);
        ;
        LocalPopChoice(s_53);
      }
    else
      {
        t = r_53;
      }
    t = l_152;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_152 = ATgetFirst((ATermList) t);
        o_152 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_152);
    m_152 = t;
    t = term_s_51;
    r_152 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_s_51, n_152);
    t = a_13(r_152, n_152, t);
    t = o_152;
    {
      ATerm b_153 (ATerm t)
      {
        ATerm u_53 = t;
        int w_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_53 = t;
            int y_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_152 = NULL;
                u_152 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = u_152;
                ;
                LocalPopChoice(y_53);
              }
            else
              {
                t = x_53;
                t = j_121(t);
                t = Cons_2_0(_id, b_153, t);
              }
            ;
            LocalPopChoice(w_53);
          }
        else
          {
            t = u_53;
            {
              ATerm x_152 = NULL,y_152 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_152 = ATgetFirst((ATermList) t);
                  y_152 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_152), (ATerm) ATmakeAppl(sym_Undefined_1, x_152));
            }
          }
        return(t);
      }
      t = b_153(t);
      q_152 = t;
      t = (ATerm) ATinsert(CheckATermList(q_152), (ATerm) ATmakeAppl(sym_Program_1, n_152));
      j_18 = t;
      t = SSLsetAnnotations(j_18, m_152);
    }
  }
  return(t);
}
ATerm f_20 (ATerm t)
{
  ATerm n_153 = NULL;
  n_153 = t;
  if(match_string(t, "--help"))
    {
      t = n_153;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = n_153;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = n_153;
        }
    }
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm o_153 = NULL,p_153 = NULL;
  t = term_o_52;
  o_153 = t;
  t = term_n_21;
  p_153 = t;
  t = term_z_53;
  t = a_13(o_153, p_153, t);
  t = term_a_54;
  return(t);
}
ATerm h_20 (ATerm t)
{
  t = term_b_54;
  return(t);
}
ATerm k_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_121 (ATerm), ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL,i_153 = NULL,j_153 = NULL,k_153 = NULL,l_153 = NULL,m_153 = NULL;
  i_153 = t;
  t = term_d_51;
  k_153 = t;
  t = term_i_51;
  l_153 = t;
  t = (ATerm) ATempty;
  m_153 = t;
  t = SSL_table_put(k_153, l_153, m_153);
  t = i_153;
  {
    ATerm e_20 (ATerm t)
    {
      ATerm c_54 = t;
      int d_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_121(t);
          ;
          LocalPopChoice(d_54);
        }
      else
        {
          t = c_54;
          {
            ATerm e_54 = t;
            int j_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_20, g_20, h_20, t);
                ;
                LocalPopChoice(j_54);
              }
            else
              {
                t = e_54;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_20, t);
    {
      ATerm l_54 = t;
      int m_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_153 = NULL;
          w_153 = t;
          {
            ATerm n_54 = t;
            int o_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_70 = NULL;
                t = w_153;
                {
                  ATerm p_54 = t;
                  int q_54 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_o_52;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_54);
                    }
                  else
                    {
                      t = p_54;
                      t = fetch_1_0(k_20, t);
                    }
                  t = w_153;
                  t = default_system_usage_0_0(t);
                  t = term_i_50;
                  b_70 = t;
                  t = SSL_exit(b_70);
                }
                ;
                LocalPopChoice(o_54);
              }
            else
              {
                t = n_54;
                {
                  ATerm f_70 = NULL;
                  t = term_f_53;
                  t = get_config_0_0(t);
                  t = w_153;
                  t = default_system_about_0_0(t);
                  t = term_i_50;
                  f_70 = t;
                  t = SSL_exit(f_70);
                }
              }
          }
          ;
          LocalPopChoice(m_54);
        }
      else
        {
          t = l_54;
          {
            ATerm r_54 = t;
            int s_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_153 = NULL,y_153 = NULL,z_153 = NULL;
                ATerm l_20 (ATerm t)
                {
                  ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL,l_18 = NULL;
                  c_154 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      b_154 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(c_154);
                  a_154 = t;
                  t = b_154;
                  if(((g_153 != NULL) && (g_153 != t)))
                    _fail(t);
                  else
                    g_153 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, b_154);
                  l_18 = t;
                  t = SSLsetAnnotations(l_18, a_154);
                  return(t);
                }
                t = fetch_1_0(l_20, t);
                t = term_o_21;
                y_153 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(g_153)), term_t_54);
                z_153 = t;
                t = SSL_printnl(y_153, z_153);
                t = (ATerm) ATmakeAppl(sym__2, term_o_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_153)), term_t_54));
                t = default_system_usage_0_0(t);
                t = term_t_21;
                x_153 = t;
                t = SSL_exit(x_153);
                ;
                LocalPopChoice(s_54);
              }
            else
              {
                t = r_54;
              }
          }
        }
      h_153 = t;
      t = term_d_51;
      j_153 = t;
      t = SSL_table_destroy(j_153);
      t = h_153;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm g_118 (ATerm), ATerm h_118 (ATerm), ATerm i_118 (ATerm), ATerm j_118 (ATerm), ATerm t)
{
  ATerm h_154 = NULL,i_154 = NULL,j_154 = NULL,k_154 = NULL;
  t = parse_options_1_0(g_118, t);
  h_154 = t;
  t = term_u_54;
  k_154 = t;
  t = SSL_table_create(k_154);
  t = term_u_54;
  i_154 = t;
  t = term_v_54;
  j_154 = t;
  t = SSL_table_put(i_154, j_154, h_154);
  t = h_154;
  t = i_118(t);
  {
    ATerm w_54 = t;
    int x_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(h_118, t);
        ;
        LocalPopChoice(x_54);
      }
    else
      {
        t = w_54;
        {
          ATerm y_54 = t;
          int z_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_118(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_54);
            }
          else
            {
              t = y_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = if_verbose2_1_0(t_20, t);
  return(t);
}
ATerm p_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm q_20 (ATerm t)
{
  ATerm l_154 = NULL,m_154 = NULL;
  t = term_a_55;
  l_154 = t;
  t = term_n_21;
  m_154 = t;
  t = term_b_55;
  t = a_13(l_154, m_154, t);
  t = term_c_55;
  return(t);
}
ATerm r_20 (ATerm t)
{
  t = term_d_55;
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm n_154 = NULL,o_154 = NULL,p_154 = NULL,q_154 = NULL;
  n_154 = t;
  t = term_s_51;
  t = get_config_0_0(t);
  o_154 = t;
  t = term_o_21;
  p_154 = t;
  t = (ATerm) ATinsert(ATempty, o_154);
  q_154 = t;
  t = SSL_printnl(p_154, q_154);
  t = n_154;
  return(t);
}
ATerm iowrap_3_0 (ATerm p_117 (ATerm), ATerm q_117 (ATerm), ATerm r_117 (ATerm), ATerm t)
{
  ATerm m_20 (ATerm t)
  {
    ATerm e_55 = t;
    int f_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_117(t);
        ;
        LocalPopChoice(f_55);
      }
    else
      {
        t = e_55;
        {
          ATerm g_55 = t;
          int h_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(h_55);
            }
          else
            {
              t = g_55;
              {
                ATerm i_55 = t;
                int j_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_55);
                  }
                else
                  {
                    t = i_55;
                    {
                      ATerm k_55 = t;
                      int l_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(p_20, q_20, r_20, t);
                          ;
                          LocalPopChoice(l_55);
                        }
                      else
                        {
                          t = k_55;
                          {
                            ATerm n_55 = t;
                            int o_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(o_55);
                              }
                            else
                              {
                                t = n_55;
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
  ATerm o_20 (ATerm t)
  {
    ATerm r_154 = NULL,s_154 = NULL,t_154 = NULL;
    s_154 = t;
    {
      ATerm p_55 = t;
      int q_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((r_154 != NULL) && (r_154 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_154 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_20, t);
          ;
          LocalPopChoice(q_55);
        }
      else
        {
          t = p_55;
          t = term_r_55;
          r_154 = t;
        }
      t = not_null(r_154);
      t = ReadFromFile_0_0(t);
      t_154 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_154, t_154);
      t = apply_strategy_1_0(p_117, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(m_20, r_117, n_20, o_20, t);
  return(t);
}
ATerm v_20 (ATerm t)
{
  ATerm w_154 = NULL,x_154 = NULL,y_154 = NULL,z_154 = NULL,a_155 = NULL,r_18 = NULL;
  a_155 = t;
  if(match_cons(t, sym__2))
    {
      x_154 = ATgetArgument(t, 0);
      y_154 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_155);
  w_154 = t;
  t = y_154;
  {
    ATerm s_55 = t;
    int u_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_155 = NULL,i_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,q_18 = NULL,p_18 = NULL,n_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            w_155 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_154);
        i_70 = t;
        t = w_155;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_70 = ATgetFirst((ATermList) t);
            m_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_155);
        k_70 = t;
        t = l_70;
        if(match_cons(t, sym_Signature_1))
          {
            q_70 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_70);
        p_70 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, q_70);
        n_18 = t;
        t = SSLsetAnnotations(n_18, p_70);
        r_70 = t;
        t = m_70;
        t = Cons_2_0(z_20, a_21, t);
        n_70 = t;
        t = (ATerm) ATinsert(CheckATermList(n_70), r_70);
        p_18 = t;
        t = SSLsetAnnotations(p_18, k_70);
        o_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, o_70);
        q_18 = t;
        t = SSLsetAnnotations(q_18, i_70);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(k_21, t);
        ;
        LocalPopChoice(u_55);
      }
    else
      {
        t = s_55;
        t = if_verbose2_1_0(l_21, t);
      }
    z_154 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_154, z_154);
    r_18 = t;
    t = SSLsetAnnotations(r_18, w_154);
  }
  return(t);
}
ATerm z_20 (ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,o_18 = NULL;
  v_70 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      t_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_70);
  s_70 = t;
  t = t_70;
  t = map_1_0(b_21, t);
  u_70 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, u_70);
  o_18 = t;
  t = SSLsetAnnotations(o_18, s_70);
  return(t);
}
ATerm a_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      w_70 = ATgetArgument(t, 0);
      x_70 = ATgetArgument(t, 1);
      y_70 = ATgetArgument(t, 2);
      z_70 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_12(w_70, x_70, y_70, z_70, t);
  return(t);
}
ATerm k_21 (ATerm t)
{
  ATerm d_71 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_55 = ATgetArgument(t, 0);
      if(match_cons(v_55, sym_SVar_1))
        {
          ATerm z_55 = ATgetArgument(v_55, 0);
          if((ATgetSymbol((ATermAppl) z_55) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_55 = ATgetArgument(t, 1);
        if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
          {
            d_71 = ATgetFirst((ATermList) w_55);
            {
              ATerm d_56 = (ATerm) ATgetNext((ATermList) w_55);
              if(((ATgetType(d_56) != AT_LIST) || !(ATisEmpty(d_56))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm x_55 = ATgetArgument(t, 2);
        if(((ATgetType(x_55) != AT_LIST) || !(ATisEmpty(x_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_10(d_71, t);
  return(t);
}
ATerm l_21 (ATerm t)
{
  ATerm x_155 = NULL,y_155 = NULL,z_155 = NULL;
  x_155 = t;
  t = term_o_21;
  y_155 = t;
  t = (ATerm) ATinsert(ATempty, term_e_56);
  z_155 = t;
  t = SSL_printnl(y_155, z_155);
  t = x_155;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(v_20, _fail, default_usage_0_0, t);
  return(t);
}
