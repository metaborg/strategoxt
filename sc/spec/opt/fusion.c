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
ATerm term_b_57;
ATerm term_q_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_s_55;
ATerm term_n_55;
ATerm term_m_55;
ATerm term_l_55;
ATerm term_x_54;
ATerm term_w_54;
ATerm term_v_54;
ATerm term_q_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_h_54;
ATerm term_g_54;
ATerm term_a_54;
ATerm term_z_53;
ATerm term_p_53;
ATerm term_o_53;
ATerm term_i_53;
ATerm term_h_53;
ATerm term_d_53;
ATerm term_c_53;
ATerm term_q_52;
ATerm term_p_52;
ATerm term_o_52;
ATerm term_n_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_b_52;
ATerm term_a_52;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_o_51;
ATerm term_n_51;
ATerm term_m_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_f_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_y_50;
ATerm term_n_50;
ATerm term_i_50;
ATerm term_f_50;
ATerm term_l_49;
ATerm term_h_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_s_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_l_48;
ATerm term_e_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_e_37;
ATerm term_a_35;
ATerm term_v_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_p_34;
ATerm term_d_34;
ATerm term_z_33;
ATerm term_w_33;
ATerm term_l_33;
ATerm term_j_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_a_32;
ATerm term_z_31;
ATerm term_y_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_l_30;
ATerm term_g_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_l_28;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_w_26;
ATerm term_n_26;
ATerm term_o_23;
ATerm term_e_23;
ATerm term_y_22;
ATerm term_k_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_w_21;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
void init_constant_terms (void)
{
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_26);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_CallT_3, term_z_26, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_27, term_f_27);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_27, term_g_27);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_27, term_j_27);
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym__2, term_l_27, term_k_27);
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_27);
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_29);
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_27, term_f_27);
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_a_27, term_p_29);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(sym__2, term_s_29, term_q_29);
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_31);
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_z_31));
  term_z_31 = (ATerm) ATmakeAppl(ATmakeSymbol("q_0", 0, ATtrue));
  ATprotect(&(term_a_32));
  term_a_32 = (ATerm) ATmakeAppl(ATmakeSymbol("y_0", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_a_32);
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("a_1", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_32);
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_w_33));
  term_w_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_p_34));
  term_p_34 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_34);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_38, (ATerm) ATempty);
  ATprotect(&(term_e_38));
  term_e_38 = (ATerm) ATmakeAppl(sym_ConstType_1, term_b_38);
  ATprotect(&(term_l_48));
  term_l_48 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_s_48));
  term_s_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_48);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_f_50));
  term_f_50 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_50));
  term_y_50 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_51));
  term_f_51 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_f_51);
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_51);
  ATprotect(&(term_m_51));
  term_m_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_51));
  term_n_51 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(sym__2, term_o_51, term_r_21);
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_52));
  term_b_52 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_52));
  term_o_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_52));
  term_p_52 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_52));
  term_q_52 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_53));
  term_p_53 = (ATerm) ATmakeAppl(sym__2, term_a_52, term_b_52);
  ATprotect(&(term_z_53));
  term_z_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_54));
  term_a_54 = (ATerm) ATmakeAppl(sym__2, term_z_53, term_r_21);
  ATprotect(&(term_g_54));
  term_g_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_54));
  term_h_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(sym__2, term_h_54, term_r_21);
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_54));
  term_q_54 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_54));
  term_v_54 = (ATerm) ATmakeAppl(sym__2, term_h_53, term_r_21);
  ATprotect(&(term_w_54));
  term_w_54 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_55));
  term_l_55 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_55));
  term_n_55 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(sym__2, term_s_55, term_r_21);
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_57));
  term_b_57 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_125 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm x_123 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm e_2 (ATerm);
ATerm g_2 (ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm j_8 (ATerm v_70, ATerm w_70, ATerm x_70, ATerm);
ATerm r_11 (ATerm b_11, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm u_2 (ATerm);
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
ATerm z_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm m_8 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm r_4 (ATerm);
ATerm w_4 (ATerm);
ATerm c_5 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm u_34 (ATerm s_33, ATerm t_33, ATerm);
ATerm w_34 (ATerm b_34, ATerm c_34, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm n_8 (ATerm g_36, ATerm h_36, ATerm);
ATerm end_scope_1_0 (ATerm q_107 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_107 (ATerm), ATerm);
ATerm scope_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm r_5 (ATerm);
ATerm t_9 (ATerm m_22, ATerm l_22, ATerm n_22, ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm b_6 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Seq_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm);
ATerm k_6 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm n_6 (ATerm);
ATerm o_6 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm y_6 (ATerm);
ATerm a_10 (ATerm w_20, ATerm);
ATerm alltd_1_0 (ATerm x_96 (ATerm), ATerm);
ATerm b_7 (ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm q_7 (ATerm);
ATerm r_7 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm topdown_1_0 (ATerm f_95 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm c_10 (ATerm r_44, ATerm q_44, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm e_8 (ATerm);
ATerm f_8 (ATerm);
ATerm i_8 (ATerm);
ATerm l_8 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm);
ATerm q_8 (ATerm);
ATerm r_8 (ATerm);
ATerm s_8 (ATerm);
ATerm v_8 (ATerm);
ATerm w_8 (ATerm);
ATerm x_8 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm z_8 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm downup_1_0 (ATerm h_95 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm);
ATerm h_10 (ATerm);
ATerm j_10 (ATerm);
ATerm m_10 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm);
ATerm p_10 (ATerm);
ATerm q_10 (ATerm);
ATerm r_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm y_10 (ATerm);
ATerm z_10 (ATerm);
ATerm c_11 (ATerm);
ATerm o_11 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm z_12 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm m_13 (ATerm);
ATerm spaste_1_0 (ATerm v_124 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm);
ATerm n_13 (ATerm);
ATerm e_11 (ATerm q_73, ATerm p_73, ATerm);
ATerm SVar_1_0 (ATerm k_85 (ATerm), ATerm);
ATerm p_11 (ATerm i_122 (ATerm), ATerm j_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_64, ATerm k_64, ATerm j_64, ATerm);
ATerm v_13 (ATerm);
ATerm w_13 (ATerm);
ATerm x_13 (ATerm);
ATerm q_11 (ATerm c_122 (ATerm), ATerm d_122 (ATerm (ATerm), ATerm), ATerm d_64, ATerm g_64, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm i_111 (ATerm), ATerm);
ATerm rename_4_0 (ATerm x_121 (ATerm (ATerm), ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_122 (ATerm (ATerm), ATerm), ATerm);
ATerm f_14 (ATerm);
ATerm g_14 (ATerm);
ATerm h_14 (ATerm);
ATerm j_14 (ATerm);
ATerm k_14 (ATerm);
ATerm l_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm tpaste_1_0 (ATerm r_124 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm j_11 (ATerm t_103 (ATerm), ATerm k_30, ATerm j_30, ATerm);
ATerm foldr_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm);
ATerm k_11 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm o_30, ATerm n_30, ATerm);
ATerm l_11 (ATerm o_103 (ATerm), ATerm i_30, ATerm h_30, ATerm);
ATerm at_end_1_0 (ATerm f_100 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm p_130 (ATerm h_130, ATerm);
ATerm conc_0_0 (ATerm);
ATerm b_15 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm n_11 (ATerm w_652, ATerm b_653, ATerm e_66, ATerm);
ATerm while_not_2_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm v_132 (ATerm p_131, ATerm q_131, ATerm r_131, ATerm);
ATerm m_15 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm o_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm free_vars_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm y_15 (ATerm);
ATerm b_16 (ATerm);
ATerm c_16 (ATerm);
ATerm e_16 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm b_82 (ATerm), ATerm);
ATerm g_16 (ATerm);
ATerm i_16 (ATerm);
ATerm n_16 (ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm q_16 (ATerm);
ATerm r_16 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm w_11 (ATerm o_36, ATerm q_36, ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm z_16 (ATerm);
ATerm a_17 (ATerm);
ATerm b_17 (ATerm);
ATerm c_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm x_11 (ATerm t_107 (ATerm), ATerm p_35, ATerm l_35, ATerm);
ATerm l_17 (ATerm);
ATerm y_11 (ATerm y_19, ATerm z_19, ATerm b_20, ATerm a_20, ATerm);
ATerm map_1_0 (ATerm p_99 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm);
ATerm b_12 (ATerm c_54, ATerm d_54, ATerm);
ATerm c_12 (ATerm q_57, ATerm r_57, ATerm);
ATerm f_12 (ATerm o_115 (ATerm), ATerm d_523, ATerm u_57, ATerm);
ATerm d_12 (ATerm m_57, ATerm n_57, ATerm);
ATerm p_17 (ATerm);
ATerm q_17 (ATerm);
ATerm r_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm a_117 (ATerm), ATerm);
ATerm q_143 (ATerm k_143, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm g_12 (ATerm s_57, ATerm);
ATerm i_12 (ATerm e_54, ATerm f_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_145 (ATerm a_144, ATerm);
ATerm c_145 (ATerm e_144, ATerm f_144, ATerm g_144, ATerm);
ATerm d_145 (ATerm o_144, ATerm p_144, ATerm q_144, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm w_17 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm z_99 (ATerm), ATerm);
ATerm a_12 (ATerm u_51, ATerm v_51, ATerm);
ATerm debug_1_0 (ATerm m_115 (ATerm), ATerm);
ATerm x_17 (ATerm);
ATerm z_17 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm e_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_18 (ATerm);
ATerm h_18 (ATerm);
ATerm j_18 (ATerm);
ATerm l_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm t_18 (ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm o_12 (ATerm d_60, ATerm e_60, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm y_18 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm m_12 (ATerm a_36, ATerm b_36, ATerm y_35, ATerm);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm j_12 (ATerm x_33, ATerm y_33, ATerm);
ATerm foldr_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_125 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm g_19 (ATerm);
ATerm need_help_1_0 (ATerm y_117 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm l_12 (ATerm c_38, ATerm d_38, ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm o_19 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm r_19 (ATerm);
ATerm t_19 (ATerm);
ATerm u_19 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm f_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm d_121 (ATerm), ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm parse_options_1_0 (ATerm c_121 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm);
ATerm p_20 (ATerm);
ATerm s_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm y_20 (ATerm);
ATerm iowrap_3_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm);
ATerm a_21 (ATerm);
ATerm j_21 (ATerm);
ATerm k_21 (ATerm);
ATerm m_21 (ATerm);
ATerm n_21 (ATerm);
ATerm q_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,f_0 = NULL,u_0 = NULL,v_0 = NULL;
  a_0 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  b_0 = t;
  t = term_s_21;
  u_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_21), b_0), term_u_21);
  v_0 = t;
  t = SSL_printnl(u_0, v_0);
  t = term_w_21;
  f_0 = t;
  t = SSL_exit(f_0);
  t = a_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_125 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_1 = NULL;
        t = term_z_21;
        t = get_config_0_0(t);
        b_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_1, term_a_22);
        t = geq_0_0(t);
        t = x_0;
        t = i_125(t);
        ;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, m_1), l_1), k_1), j_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, j_1), (ATerm) ATmakeAppl(sym_Var_1, l_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, g_1, (ATerm)ATmakeAppl(sym_Var_1, j_1), (ATerm) ATmakeAppl(sym_Var_1, k_1)), (ATerm) ATmakeAppl(sym_BAM_3, e_1, (ATerm)ATmakeAppl(sym_Var_1, l_1), (ATerm) ATmakeAppl(sym_Var_1, m_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, m_1)), (ATerm) ATmakeAppl(sym_Var_1, k_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          g_1 = ATgetArgument(t, 0);
          {
            ATerm n_1 = NULL,o_1 = NULL,r_1 = NULL,s_1 = NULL;
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
                    if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      o_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, r_1);
                return(t);
              }
              t = oncetd_1_0(w_0, t);
              s_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_b_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_1)), not_null(n_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_Build_1, s_1))));
            }
          }
        }
      else
        {
          ATerm u_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,b_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              g_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_1;
          t = new_0_0(t);
          x_1 = t;
          t = new_0_0(t);
          z_1 = t;
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
            t = oncetd_1_0(z_0, t);
            b_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_d_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))))), (ATerm)ATmakeAppl(sym_Var_1, x_1), (ATerm) ATmakeAppl(sym_Op_2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_1)), not_null(u_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_2 = NULL,f_2 = NULL;
  d_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      f_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
        t = d_2;
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
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_2))))));
        }
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = f_22;
        {
          ATerm o_22 = t;
          int p_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL;
              t = d_2;
              t = new_0_0(t);
              n_2 = t;
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, n_2);
                  return(t);
                }
                t = pat_td_1_0(d_1, t);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), not_null(m_2))));
              }
              ;
              LocalPopChoice(p_22);
            }
          else
            {
              t = o_22;
              {
                ATerm r_2 = NULL,v_2 = NULL,w_2 = NULL,x_2 = NULL;
                t = d_2;
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
                        if(((r_2 != NULL) && (r_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, w_2);
                    return(t);
                  }
                  t = pat_td_1_0(h_1, t);
                  x_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, x_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, w_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_2)), not_null(v_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm x_123 (ATerm), ATerm t)
{
  ATerm q_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = x_123(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = q_22;
      {
        ATerm u_5 = NULL,f_6 = NULL,g_6 = NULL,i_6 = NULL;
        f_6 = t;
        if(match_cons(t, sym_Op_2))
          {
            g_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm w_1 = NULL,c_2 = NULL,f_3 = NULL;
              t = SSLgetAnnotations(f_6);
              w_1 = t;
              t = i_6;
              {
                ATerm i_1 (ATerm t)
                {
                  t = pat_td_1_0(x_123, t);
                  return(t);
                }
                t = fetch_1_0(i_1, t);
                c_2 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, g_6, c_2);
                f_3 = t;
                t = SSLsetAnnotations(f_3, w_1);
              }
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                g_6 = ATgetArgument(t, 0);
                i_6 = ATgetArgument(t, 1);
                {
                  ATerm u_22 = t;
                  int v_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_3 = NULL,d_3 = NULL,g_3 = NULL;
                      t = SSLgetAnnotations(f_6);
                      a_3 = t;
                      t = i_6;
                      t = pat_td_1_0(x_123, t);
                      d_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, g_6, d_3);
                      g_3 = t;
                      t = SSLsetAnnotations(g_3, a_3);
                      ;
                      LocalPopChoice(v_22);
                    }
                  else
                    {
                      t = u_22;
                      {
                        ATerm a_5 = NULL,l_5 = NULL,h_3 = NULL;
                        t = SSLgetAnnotations(f_6);
                        a_5 = t;
                        t = g_6;
                        t = pat_td_1_0(x_123, t);
                        l_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, l_5, i_6);
                        h_3 = t;
                        t = SSLsetAnnotations(h_3, a_5);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    g_6 = ATgetArgument(t, 0);
                    i_6 = ATgetArgument(t, 1);
                    u_5 = ATgetArgument(t, 2);
                    {
                      ATerm y_5 = NULL,c_6 = NULL,i_3 = NULL;
                      t = SSLgetAnnotations(f_6);
                      y_5 = t;
                      t = u_5;
                      {
                        ATerm p_1 (ATerm t)
                        {
                          t = pat_td_1_0(x_123, t);
                          return(t);
                        }
                        t = fetch_1_0(p_1, t);
                        c_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, g_6, i_6, c_6);
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, y_5);
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        g_6 = ATgetArgument(t, 0);
                        i_6 = ATgetArgument(t, 1);
                        u_5 = ATgetArgument(t, 2);
                        {
                          ATerm d_7 = NULL,n_7 = NULL,j_3 = NULL;
                          t = SSLgetAnnotations(f_6);
                          d_7 = t;
                          t = u_5;
                          {
                            ATerm q_1 (ATerm t)
                            {
                              t = pat_td_1_0(x_123, t);
                              return(t);
                            }
                            t = fetch_1_0(q_1, t);
                            n_7 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, g_6, i_6, n_7);
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
                            g_6 = ATgetArgument(t, 0);
                            i_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_6);
                        d_8 = t;
                        t = i_6;
                        t = pat_td_1_0(x_123, t);
                        g_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, g_6, g_8);
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
  ATerm t_6 = NULL,v_6 = NULL;
  t_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_6 = NULL,x_6 = NULL,z_6 = NULL,a_7 = NULL;
        t = t_6;
        t = new_0_0(t);
        z_6 = t;
        t = v_6;
        {
          ATerm t_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_6 != NULL) && (w_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_6 = ATgetArgument(t, 0);
                if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, z_6);
            return(t);
          }
          t = pat_td_1_0(t_1, t);
          a_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_y_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_6)), not_null(w_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, z_6)))), (ATerm) ATmakeAppl(sym_Build_1, a_7)));
        }
        ;
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_7 = NULL,h_7 = NULL,i_7 = NULL;
              t = t_6;
              t = new_0_0(t);
              h_7 = t;
              t = v_6;
              {
                ATerm y_1 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_7);
                  return(t);
                }
                t = pat_td_1_0(y_1, t);
                i_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_7)))), (ATerm) ATmakeAppl(sym_Build_1, i_7)));
              }
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm j_7 = NULL,k_7 = NULL,o_7 = NULL,p_7 = NULL;
                t = t_6;
                t = new_0_0(t);
                o_7 = t;
                t = v_6;
                {
                  ATerm a_2 (ATerm t)
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
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_7);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                  p_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_7), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(j_7), not_null(k_7), (ATerm) ATmakeAppl(sym_Var_1, o_7))), (ATerm) ATmakeAppl(sym_Build_1, p_7)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm e_2 (ATerm t)
{
  ATerm d_23 = t;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL,y_8 = NULL,r_9 = NULL,r_3 = NULL;
      r_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          y_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_9);
      u_8 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
      r_3 = t;
      t = SSLsetAnnotations(r_3, u_8);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_23;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
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
ATerm o_2 (ATerm t)
{
  ATerm d_10 = NULL,f_10 = NULL,i_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_23 = ATgetArgument(t, 0);
      if(match_cons(f_23, sym__2))
        {
          d_10 = ATgetArgument(f_23, 0);
          f_10 = ATgetArgument(f_23, 1);
        }
      else
        _fail(t);
      {
        ATerm g_23 = ATgetArgument(t, 1);
        if(match_cons(g_23, sym__2))
          {
            i_10 = ATgetArgument(g_23, 0);
            k_10 = ATgetArgument(g_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_10), d_10), (ATerm) ATinsert(CheckATermList(k_10), f_10));
  return(t);
}
ATerm q_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
  return(t);
}
ATerm s_2 (ATerm t)
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
ATerm t_2 (ATerm t)
{
  ATerm s_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_23 = ATgetArgument(t, 0);
      if(match_cons(h_23, sym__2))
        {
          s_10 = ATgetArgument(h_23, 0);
          v_10 = ATgetArgument(h_23, 1);
        }
      else
        _fail(t);
      {
        ATerm i_23 = ATgetArgument(t, 1);
        if(match_cons(i_23, sym__2))
          {
            w_10 = ATgetArgument(i_23, 0);
            x_10 = ATgetArgument(i_23, 1);
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
ATerm j_8 (ATerm v_70, ATerm w_70, ATerm x_70, ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,a_8 = NULL,h_8 = NULL,k_8 = NULL,p_8 = NULL,t_8 = NULL,s_3 = NULL;
  t = x_70;
  t = fetch_1_0(e_2, t);
  t = x_70;
  t = genzip_4_0(g_2, l_2, o_2, LiftPrimArg_0_0, t);
  t_8 = t;
  if(match_cons(t, sym__2))
    {
      a_8 = ATgetArgument(t, 0);
      h_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_8);
  w_7 = t;
  t = a_8;
  t = concat_0_0(t);
  k_8 = t;
  t = h_8;
  t = genzip_4_0(q_2, s_2, t_2, _id, t);
  p_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_8, p_8);
  s_3 = t;
  t = SSLsetAnnotations(s_3, w_7);
  if(match_cons(t, sym__2))
    {
      s_7 = ATgetArgument(t, 0);
      {
        ATerm j_23 = ATgetArgument(t, 1);
        if(match_cons(j_23, sym__2))
          {
            u_7 = ATgetArgument(j_23, 0);
            v_7 = ATgetArgument(j_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_7), (ATerm) ATmakeAppl(sym_CallT_3, v_70, w_70, v_7)));
  return(t);
}
ATerm r_11 (ATerm b_11, ATerm t)
{
  ATerm d_11 = NULL;
  t = b_11;
  {
    ATerm k_23 = t;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,g_11 = NULL,h_11 = NULL,v_3 = NULL;
        h_11 = t;
        if(match_cons(t, sym_Var_1))
          {
            g_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_11);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, g_11);
        v_3 = t;
        t = SSLsetAnnotations(v_3, f_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_23;
      }
    t = new_0_0(t);
    d_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_11)))), (ATerm) ATmakeAppl(sym_Var_1, d_11)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm i_11 = NULL,m_11 = NULL;
  i_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_11 = ATgetArgument(t, 0);
      {
        ATerm l_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_11(i_11, t);
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = l_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_o_23, (ATerm) ATmakeAppl(sym_Var_1, m_11)));
          }
      }
    }
  else
    {
      t = r_11(i_11, t);
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm p_23 = t;
  if((PushChoice() == 0))
    {
      ATerm k_9 = NULL,l_9 = NULL,m_9 = NULL,x_3 = NULL;
      m_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_9);
      k_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_9);
      x_3 = t;
      t = SSLsetAnnotations(x_3, k_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_23;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_9 = ATgetFirst((ATermList) t);
      o_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_9, o_9);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm p_9 = NULL,q_9 = NULL,s_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_23 = ATgetArgument(t, 0);
      if(match_cons(q_23, sym__2))
        {
          p_9 = ATgetArgument(q_23, 0);
          q_9 = ATgetArgument(q_23, 1);
        }
      else
        _fail(t);
      {
        ATerm r_23 = ATgetArgument(t, 1);
        if(match_cons(r_23, sym__2))
          {
            s_9 = ATgetArgument(r_23, 0);
            u_9 = ATgetArgument(r_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_9), p_9), (ATerm) ATinsert(CheckATermList(u_9), q_9));
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
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
  ATerm z_9 = NULL,b_10 = NULL,e_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if(match_cons(s_23, sym__2))
        {
          z_9 = ATgetArgument(s_23, 0);
          b_10 = ATgetArgument(s_23, 1);
        }
      else
        _fail(t);
      {
        ATerm u_23 = ATgetArgument(t, 1);
        if(match_cons(u_23, sym__2))
          {
            e_10 = ATgetArgument(u_23, 0);
            g_10 = ATgetArgument(u_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_10), z_9), (ATerm) ATinsert(CheckATermList(g_10), b_10));
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm v_23 = t;
  if((PushChoice() == 0))
    {
      ATerm n_12 = NULL,p_12 = NULL,q_12 = NULL,a_4 = NULL;
      q_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_12);
      n_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_12);
      a_4 = t;
      t = SSLsetAnnotations(a_4, n_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_23;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      s_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_12, s_12);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm t_12 = NULL,b_13 = NULL,c_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(match_cons(w_23, sym__2))
        {
          t_12 = ATgetArgument(w_23, 0);
          b_13 = ATgetArgument(w_23, 1);
        }
      else
        _fail(t);
      {
        ATerm x_23 = ATgetArgument(t, 1);
        if(match_cons(x_23, sym__2))
          {
            c_13 = ATgetArgument(x_23, 0);
            e_13 = ATgetArgument(x_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_13), t_12), (ATerm) ATinsert(CheckATermList(e_13), b_13));
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_e_23;
  return(t);
}
ATerm t_3 (ATerm t)
{
  ATerm h_13 = NULL,i_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_13 = ATgetFirst((ATermList) t);
      i_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_13, i_13);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL,r_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_24 = ATgetArgument(t, 0);
      if(match_cons(d_24, sym__2))
        {
          o_13 = ATgetArgument(d_24, 0);
          p_13 = ATgetArgument(d_24, 1);
        }
      else
        _fail(t);
      {
        ATerm e_24 = ATgetArgument(t, 1);
        if(match_cons(e_24, sym__2))
          {
            r_13 = ATgetArgument(e_24, 0);
            t_13 = ATgetArgument(e_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_13), o_13), (ATerm) ATinsert(CheckATermList(t_13), p_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,y_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      u_16 = ATgetArgument(t, 2);
      {
        ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,y_3 = NULL;
        t = u_16;
        t = fetch_1_0(u_2, t);
        t = u_16;
        t = genzip_4_0(y_2, z_2, b_3, LiftPrimArg_0_0, t);
        j_9 = t;
        if(match_cons(t, sym__2))
          {
            f_9 = ATgetArgument(t, 0);
            g_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_9);
        e_9 = t;
        t = f_9;
        t = concat_0_0(t);
        h_9 = t;
        t = g_9;
        t = genzip_4_0(c_3, e_3, l_3, _id, t);
        i_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_9, i_9);
        y_3 = t;
        t = SSLsetAnnotations(y_3, e_9);
        if(match_cons(t, sym__2))
          {
            b_9 = ATgetArgument(t, 0);
            {
              ATerm f_24 = ATgetArgument(t, 1);
              if(match_cons(f_24, sym__2))
                {
                  c_9 = ATgetArgument(f_24, 0);
                  d_9 = ATgetArgument(f_24, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, b_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_9), (ATerm) ATmakeAppl(sym_PrimT_3, w_16, y_16, d_9)));
      }
    }
  else
    {
      ATerm a_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,z_11 = NULL,e_12 = NULL,h_12 = NULL,k_12 = NULL,b_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_16 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_16;
      t = fetch_1_0(m_3, t);
      t = y_16;
      t = genzip_4_0(n_3, o_3, p_3, LiftPrimArg_0_0, t);
      k_12 = t;
      if(match_cons(t, sym__2))
        {
          v_11 = ATgetArgument(t, 0);
          z_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(k_12);
      u_11 = t;
      t = v_11;
      t = concat_0_0(t);
      e_12 = t;
      t = z_11;
      t = genzip_4_0(q_3, t_3, u_3, _id, t);
      h_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_12, h_12);
      b_4 = t;
      t = SSLsetAnnotations(b_4, u_11);
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm g_24 = ATgetArgument(t, 1);
            if(match_cons(g_24, sym__2))
              {
                s_11 = ATgetArgument(g_24, 0);
                t_11 = ATgetArgument(g_24, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_11), (ATerm) ATmakeAppl(sym_PrimT_3, w_16, (ATerm)ATempty, t_11)));
    }
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm t_17 = NULL,u_17 = NULL,a_18 = NULL,b_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Con_3))
    {
      t_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      a_18 = ATgetArgument(t, 2);
      {
        ATerm i_14 = NULL,h_4 = NULL;
        t = SSLgetAnnotations(b_18);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, t_17, u_17, a_18);
        h_4 = t;
        t = SSLsetAnnotations(h_4, i_14);
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
  ATerm h_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(w_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_24;
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  j_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
      e_19 = ATgetArgument(t, 2);
      {
        ATerm i_15 = NULL,j_4 = NULL;
        t = SSLgetAnnotations(j_19);
        i_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, k_19, l_19, e_19);
        j_4 = t;
        t = SSLsetAnnotations(j_4, i_15);
      }
    }
  else
    {
      ATerm x_16 = NULL,k_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          k_19 = ATgetArgument(t, 0);
          l_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_19);
      x_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, k_19, l_19);
      k_4 = t;
      t = SSLsetAnnotations(k_4, x_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm i_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(z_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_24;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,c_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      v_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_19;
  if(match_cons(t, sym_StratRule_3))
    {
      w_19 = ATgetArgument(t, 0);
      x_19 = ATgetArgument(t, 1);
      c_20 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, x_19), (ATerm) ATmakeAppl(sym_Where_1, c_20)), w_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          w_19 = ATgetArgument(t, 0);
          x_19 = ATgetArgument(t, 1);
          c_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = w_19;
      t = pureterm_0_0(t);
      t = x_19;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, x_19)), (ATerm) ATmakeAppl(sym_Where_1, c_20)), (ATerm) ATmakeAppl(sym_Match_1, w_19)));
    }
  return(t);
}
ATerm m_8 (ATerm k_66, ATerm l_66, ATerm m_66, ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL,h_21 = NULL,i_21 = NULL,l_21 = NULL,o_21 = NULL,p_21 = NULL;
  t = new_0_0(t);
  l_21 = t;
  t = k_66;
  {
    ATerm c_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm j_24 = ATgetArgument(t, 0);
          if(match_cons(j_24, sym_Var_1))
            {
              if(((i_21 != NULL) && (i_21 != ATgetArgument(j_24, 0))))
                _fail(ATgetArgument(j_24, 0));
              else
                i_21 = ATgetArgument(j_24, 0);
            }
          else
            _fail(t);
          if(((e_21 != NULL) && (e_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_21 = ATgetArgument(t, 1);
          {
            ATerm k_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, i_21);
      return(t);
    }
    t = oncetd_1_0(c_4, t);
    o_21 = t;
    t = l_66;
    {
      ATerm d_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm l_24 = ATgetArgument(t, 0);
            if(match_cons(l_24, sym_Var_1))
              {
                if(((i_21 != NULL) && (i_21 != ATgetArgument(l_24, 0))))
                  _fail(ATgetArgument(l_24, 0));
                else
                  i_21 = ATgetArgument(l_24, 0);
              }
            else
              _fail(t);
            if(((h_21 != NULL) && (h_21 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              h_21 = ATgetArgument(t, 1);
            {
              ATerm m_24 = ATgetArgument(t, 2);
              if(match_cons(m_24, sym_CallT_3))
                {
                  if(((d_21 != NULL) && (d_21 != ATgetArgument(m_24, 0))))
                    _fail(ATgetArgument(m_24, 0));
                  else
                    d_21 = ATgetArgument(m_24, 0);
                  {
                    ATerm n_24 = ATgetArgument(m_24, 1);
                    if(((ATgetType(n_24) != AT_LIST) || !(ATisEmpty(n_24))))
                      _fail(t);
                  }
                  {
                    ATerm p_24 = ATgetArgument(m_24, 2);
                    if(((ATgetType(p_24) != AT_LIST) || !(ATisEmpty(p_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, l_21);
        return(t);
      }
      t = oncetd_1_0(d_4, t);
      p_21 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_21), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, o_21, p_21, (ATerm) ATmakeAppl(sym_Seq_2, m_66, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(d_21), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_21), not_null(h_21), term_o_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_21)), (ATerm) ATmakeAppl(sym_Var_1, l_21))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm q_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_24 = t;
      int u_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,c_24 = NULL;
          a_24 = t;
          if(match_cons(t, sym_SRule_1))
            {
              b_24 = ATgetArgument(t, 0);
              t = b_24;
              if(match_cons(t, sym_Rule_3))
                {
                  t_23 = ATgetArgument(t, 0);
                  y_23 = ATgetArgument(t, 1);
                  z_23 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_24;
              t = m_8(t_23, y_23, z_23, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm v_17 = NULL,y_17 = NULL,o_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  b_24 = ATgetArgument(t, 0);
                  c_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_24);
              v_17 = t;
              t = c_24;
              t = desugarRule_0_0(t);
              y_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, b_24, y_17);
              o_4 = t;
              t = SSLsetAnnotations(o_4, v_17);
            }
          ;
          LocalPopChoice(u_24);
        }
      else
        {
          t = t_24;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(s_24);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
    }
  t = repeat_1_0(f_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_25 = NULL,q_25 = NULL,r_25 = NULL,u_25 = NULL;
            m_25 = t;
            if(match_cons(t, sym_CallT_3))
              {
                q_25 = ATgetArgument(t, 0);
                r_25 = ATgetArgument(t, 1);
                u_25 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = m_25;
            t = j_8(q_25, r_25, u_25, t);
            ;
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm g_25 = t;
              int i_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_25);
                }
              else
                {
                  t = g_25;
                  {
                    ATerm l_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = l_25;
                        {
                          ATerm p_25 = t;
                          int s_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm t_25 = t;
                              int v_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm o_26 = NULL,p_26 = NULL,t_26 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      o_26 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = o_26;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      p_26 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_25 = t;
                                        int x_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_26 = NULL,y_26 = NULL;
                                            t = o_26;
                                            {
                                              ATerm g_4 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm y_25 = ATgetArgument(t, 0);
                                                    if(match_cons(y_25, sym_Match_1))
                                                      {
                                                        if(((x_26 != NULL) && (x_26 != ATgetArgument(y_25, 0))))
                                                          _fail(ATgetArgument(y_25, 0));
                                                        else
                                                          x_26 = ATgetArgument(y_25, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = x_26;
                                                return(t);
                                              }
                                              t = pat_td_1_0(g_4, t);
                                              y_26 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, y_26);
                                            }
                                            ;
                                            LocalPopChoice(x_25);
                                          }
                                        else
                                          {
                                            t = w_25;
                                            t = p_26;
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          p_26 = ATgetArgument(t, 0);
                                          t_26 = ATgetArgument(t, 1);
                                          {
                                            ATerm z_25 = t;
                                            int b_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm b_27 = NULL,c_27 = NULL;
                                                t = o_26;
                                                {
                                                  ATerm i_4 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm c_26 = ATgetArgument(t, 0);
                                                        if(match_cons(c_26, sym_Match_1))
                                                          {
                                                            if(((b_27 != NULL) && (b_27 != ATgetArgument(c_26, 0))))
                                                              _fail(ATgetArgument(c_26, 0));
                                                            else
                                                              b_27 = ATgetArgument(c_26, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = b_27;
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(i_4, t);
                                                  c_27 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, c_27);
                                                }
                                                ;
                                                LocalPopChoice(b_26);
                                              }
                                            else
                                              {
                                                t = z_25;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, p_26, t_26);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm n_27 = NULL,o_27 = NULL;
                                          t = o_26;
                                          {
                                            ATerm l_4 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm d_26 = ATgetArgument(t, 0);
                                                  if(match_cons(d_26, sym_Match_1))
                                                    {
                                                      if(((n_27 != NULL) && (n_27 != ATgetArgument(d_26, 0))))
                                                        _fail(ATgetArgument(d_26, 0));
                                                      else
                                                        n_27 = ATgetArgument(d_26, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = n_27;
                                              return(t);
                                            }
                                            t = pat_td_1_0(l_4, t);
                                            o_27 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, o_27);
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(v_25);
                                }
                              else
                                {
                                  t = t_25;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(s_25);
                            }
                          else
                            {
                              t = p_25;
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
ATerm m_4 (ATerm t)
{
  ATerm x_20 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_20);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm b_21 = NULL,c_21 = NULL,f_21 = NULL,g_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            b_21 = ATgetArgument(t, 0);
            t = b_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                b_21 = ATgetArgument(t, 0);
                c_21 = ATgetArgument(t, 1);
                f_21 = ATgetArgument(t, 2);
                g_21 = ATgetArgument(t, 3);
                t = f_21;
                t = map_1_0(p_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    b_21 = ATgetArgument(t, 0);
                    c_21 = ATgetArgument(t, 1);
                    f_21 = ATgetArgument(t, 2);
                    g_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = f_21;
                t = map_1_0(r_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm g_26 = t;
  int h_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_21 = ATgetArgument(t, 0);
          {
            ATerm i_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_26);
      t = t_21;
    }
  else
    {
      t = g_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_21;
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  ATerm c_22 = NULL;
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_22 = ATgetArgument(t, 0);
          {
            ATerm m_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_26);
      t = c_22;
    }
  else
    {
      t = k_26;
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
ATerm w_4 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_32;
  if(match_cons(t, sym_CallT_3))
    {
      h_32 = ATgetArgument(t, 0);
      n_32 = ATgetArgument(t, 1);
      o_32 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_32;
  if(match_cons(t, sym_SVar_1))
    {
      i_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_32;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = n_32;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_32;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = p_32;
  if(match_cons(t, sym_Seq_2))
    {
      q_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_32;
  if(match_cons(t, sym_Match_1))
    {
      r_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_32;
  if(match_cons(t, sym_Seq_2))
    {
      t_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_32;
  if(match_cons(t, sym_Where_1))
    {
      u_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_32;
  if(match_cons(t, sym_Build_1))
    {
      w_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_26 = t;
    int v_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_19 = NULL,p_19 = NULL,q_19 = NULL,s_19 = NULL,h_20 = NULL,i_20 = NULL;
        t = term_k_27;
        h_20 = t;
        t = term_l_27;
        i_20 = t;
        t = term_m_27;
        t = w_11(i_20, h_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm p_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) p_27) != ATmakeSymbol("q_0", 0, ATtrue)))
              _fail(t);
            h_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, u_32, w_32);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, h_19, r_32, (ATerm) ATmakeAppl(sym__2, u_32, w_32));
        t = t_9(h_19, r_32, s_19, t);
        if(match_cons(t, sym__2))
          {
            p_19 = ATgetArgument(t, 0);
            q_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, p_19), (ATerm) ATmakeAppl(sym_Build_1, q_19)));
        ;
        LocalPopChoice(v_26);
      }
    else
      {
        t = u_26;
        {
          ATerm r_20 = NULL,v_20 = NULL,r_22 = NULL,s_22 = NULL;
          t = term_k_27;
          r_22 = t;
          t = term_l_27;
          s_22 = t;
          t = term_m_27;
          t = w_11(s_22, r_22, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_27) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              r_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_32;
          t = free_vars_3_0(m_4, n_4, tboundin_3_0, t);
          {
            ATerm y_4 (ATerm t)
            {
              ATerm z_4 (ATerm t)
              {
                ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL;
                g_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, r_20, (ATerm) ATmakeAppl(sym_Var_1, g_22));
                h_22 = t;
                t = term_s_27;
                i_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, r_20, (ATerm) ATmakeAppl(sym_Var_1, g_22)), term_s_27);
                t = x_11(c_5, h_22, i_22, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, g_22);
                return(t);
              }
              t = map_1_0(z_4, t);
              t = (ATerm) ATmakeAppl(sym__2, u_32, w_32);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((v_20 != NULL) && (v_20 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_20 = ATgetArgument(t, 0);
                  {
                    ATerm t_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(w_4, y_4, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_32), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(v_20)), (ATerm) ATmakeAppl(sym_Build_1, w_32)));
          }
        }
      }
  }
  return(t);
}
ATerm u_34 (ATerm s_33, ATerm t_33, ATerm t)
{
  ATerm z_22 = NULL;
  t = term_n_26;
  z_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, t_33);
  t = w_11(z_22, t_33, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_27) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = s_33;
  return(t);
}
ATerm w_34 (ATerm b_34, ATerm c_34, ATerm t)
{
  ATerm c_23 = NULL;
  t = term_n_26;
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_26, c_34);
  t = w_11(c_23, c_34, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = b_34;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm h_34 = NULL,m_34 = NULL,o_34 = NULL;
  m_34 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm w_27 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_34;
  if(match_cons(t, sym_Var_1))
    {
      h_34 = ATgetArgument(t, 0);
      {
        ATerm x_27 = t;
        int y_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_23 = NULL;
            t = term_n_26;
            m_23 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_n_26, m_34);
            t = w_11(m_23, m_34, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm z_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) z_27) != ATmakeSymbol("s_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, h_34);
            ;
            LocalPopChoice(y_27);
          }
        else
          {
            t = x_27;
            {
              ATerm a_28 = t;
              int b_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_34(o_34, m_34, t);
                  ;
                  LocalPopChoice(b_28);
                }
              else
                {
                  t = a_28;
                  t = w_34(o_34, m_34, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm c_28 = t;
      int f_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_34(o_34, m_34, t);
          ;
          LocalPopChoice(f_28);
        }
      else
        {
          t = c_28;
          t = w_34(o_34, m_34, t);
        }
    }
  return(t);
}
ATerm n_8 (ATerm g_36, ATerm h_36, ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  y_34 = t;
  {
    ATerm g_28 = t;
    int h_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
        t = l_12(g_36, h_36, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm i_28 = ATgetFirst((ATermList) t);
            x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(h_28);
        t = SSL_table_put(g_36, h_36, x_34);
        t = (ATerm) ATmakeAppl(sym__3, g_36, h_36, x_34);
      }
    else
      {
        t = g_28;
        t = SSL_table_remove(g_36, h_36);
        t = (ATerm) ATmakeAppl(sym__2, g_36, h_36);
      }
    t = y_34;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_107 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,c_35 = NULL,h_35 = NULL,m_35 = NULL,n_35 = NULL;
  m_35 = t;
  t = q_107(t);
  h_35 = t;
  {
    ATerm j_28 = t;
    int k_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_35 = NULL;
        t = term_l_28;
        r_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, term_l_28);
        t = l_12(h_35, r_35, t);
        ;
        LocalPopChoice(k_28);
      }
    else
      {
        t = j_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_35 = ATgetFirst((ATermList) t);
        z_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_28;
    n_35 = t;
    t = SSL_table_put(h_35, n_35, z_34);
    t = c_35;
    {
      ATerm h_5 (ATerm t)
      {
        ATerm v_35 = NULL;
        v_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_35, v_35);
        t = n_8(h_35, v_35, t);
        return(t);
      }
      t = map_1_0(h_5, t);
      t = m_35;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_98 (ATerm), ATerm n_98 (ATerm), ATerm t)
{
  ATerm m_28 = t;
  int n_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_98(t);
      t = n_98(t);
      ;
      LocalPopChoice(n_28);
    }
  else
    {
      t = m_28;
      t = n_98(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_107 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,m_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL;
  m_36 = t;
  t = p_107(t);
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_36, term_l_28);
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_37 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_28 = ATgetArgument(t, 0);
            ATerm s_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_28;
        j_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_36, term_l_28);
        t = l_12(i_36, j_37, t);
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATempty;
      }
    a_37 = t;
    t = term_l_28;
    b_37 = t;
    t = (ATerm) ATinsert(CheckATermList(a_37), (ATerm) ATempty);
    c_37 = t;
    t = SSL_table_put(i_36, b_37, c_37);
    t = m_36;
  }
  return(t);
}
ATerm scope_2_0 (ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    t = end_scope_1_0(r_107, t);
    return(t);
  }
  t = begin_scope_1_0(r_107, t);
  t = restore_always_2_0(s_107, i_5, t);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm p_37 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_37);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_28);
    }
  else
    {
      t = t_28;
      {
        ATerm r_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_37 = ATgetArgument(t, 0);
            t = r_37;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_37 = ATgetArgument(t, 0);
                u_37 = ATgetArgument(t, 1);
                v_37 = ATgetArgument(t, 2);
                w_37 = ATgetArgument(t, 3);
                t = v_37;
                t = map_1_0(o_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_37 = ATgetArgument(t, 0);
                    u_37 = ATgetArgument(t, 1);
                    v_37 = ATgetArgument(t, 2);
                    w_37 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_37;
                t = map_1_0(p_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm i_38 = NULL;
  ATerm v_28 = t;
  int w_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_38 = ATgetArgument(t, 0);
          {
            ATerm x_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_28);
      t = i_38;
    }
  else
    {
      t = v_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          i_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_38;
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm u_38 = NULL;
  ATerm y_28 = t;
  int a_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_38 = ATgetArgument(t, 0);
          {
            ATerm b_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_29);
      t = u_38;
    }
  else
    {
      t = y_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_38 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_38;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm t_9 (ATerm m_22, ATerm l_22, ATerm n_22, ATerm t)
{
  ATerm o_37 = NULL;
  ATerm k_5 (ATerm t)
  {
    t = l_22;
    t = free_vars_3_0(m_5, n_5, tboundin_3_0, t);
    {
      ATerm q_5 (ATerm t)
      {
        ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
        x_38 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, m_22, (ATerm) ATmakeAppl(sym_Var_1, x_38));
        y_38 = t;
        t = term_d_29;
        z_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, m_22, (ATerm) ATmakeAppl(sym_Var_1, x_38)), term_d_29);
        t = x_11(r_5, y_38, z_38, t);
        t = x_38;
        return(t);
      }
      t = map_1_0(q_5, t);
      t = n_22;
      t = alltd_1_0(Replace_0_0, t);
      if(((o_37 != NULL) && (o_37 != t)))
        _fail(t);
      else
        o_37 = t;
    }
    return(t);
  }
  t = scope_2_0(j_5, k_5, t);
  t = not_null(o_37);
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm f_25 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      f_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, f_25);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_29);
    }
  else
    {
      t = e_29;
      {
        ATerm h_25 = NULL,j_25 = NULL,k_25 = NULL,n_25 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            h_25 = ATgetArgument(t, 0);
            t = h_25;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                h_25 = ATgetArgument(t, 0);
                j_25 = ATgetArgument(t, 1);
                k_25 = ATgetArgument(t, 2);
                n_25 = ATgetArgument(t, 3);
                t = k_25;
                t = map_1_0(v_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    h_25 = ATgetArgument(t, 0);
                    j_25 = ATgetArgument(t, 1);
                    k_25 = ATgetArgument(t, 2);
                    n_25 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = k_25;
                t = map_1_0(w_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_5 (ATerm t)
{
  ATerm a_26 = NULL;
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_26 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_29);
      t = a_26;
    }
  else
    {
      t = g_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_26;
    }
  return(t);
}
ATerm w_5 (ATerm t)
{
  ATerm j_26 = NULL;
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_26 = ATgetArgument(t, 0);
          {
            ATerm m_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_29);
      t = j_26;
    }
  else
    {
      t = j_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_26 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_26;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_n_26;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm d_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,m_42 = NULL,n_42 = NULL,t_42 = NULL,y_42 = NULL,e_43 = NULL,g_43 = NULL;
  d_42 = t;
  if(match_cons(t, sym_Seq_2))
    {
      g_42 = ATgetArgument(t, 0);
      n_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_42;
  if(match_cons(t, sym_CallT_3))
    {
      h_42 = ATgetArgument(t, 0);
      j_42 = ATgetArgument(t, 1);
      m_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_42;
  if(match_cons(t, sym_SVar_1))
    {
      i_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_42;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = j_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_42;
  if(match_cons(t, sym_Seq_2))
    {
      t_42 = ATgetArgument(t, 0);
      e_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_42;
  if(match_cons(t, sym_Match_1))
    {
      y_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_43;
  if(match_cons(t, sym_Build_1))
    {
      g_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_29 = t;
    int o_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_24 = NULL,r_24 = NULL,v_24 = NULL,w_24 = NULL;
        t = term_q_29;
        v_24 = t;
        t = term_s_29;
        w_24 = t;
        t = term_t_29;
        t = w_11(w_24, v_24, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm u_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) u_29) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            o_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, o_24, y_42, g_43);
        t = t_9(o_24, y_42, g_43, t);
        r_24 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_42), (ATerm) ATmakeAppl(sym_Build_1, r_24));
        ;
        LocalPopChoice(o_29);
      }
    else
      {
        t = n_29;
        {
          ATerm b_25 = NULL,e_25 = NULL,h_27 = NULL,i_27 = NULL;
          t = term_q_29;
          h_27 = t;
          t = term_s_29;
          i_27 = t;
          t = term_t_29;
          t = w_11(i_27, h_27, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm v_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) v_29) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              b_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_42;
          t = free_vars_3_0(s_5, t_5, tboundin_3_0, t);
          {
            ATerm z_5 (ATerm t)
            {
              ATerm a_6 (ATerm t)
              {
                ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
                q_26 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, b_25, (ATerm) ATmakeAppl(sym_Var_1, q_26));
                r_26 = t;
                t = term_y_29;
                s_26 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_25, (ATerm) ATmakeAppl(sym_Var_1, q_26)), term_y_29);
                t = x_11(b_6, r_26, s_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, q_26);
                return(t);
              }
              t = map_1_0(a_6, t);
              t = g_43;
              t = alltd_1_0(Replace_0_0, t);
              if(((e_25 != NULL) && (e_25 != t)))
                _fail(t);
              else
                e_25 = t;
              return(t);
            }
            t = scope_2_0(x_5, z_5, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, y_42), (ATerm) ATmakeAppl(sym_Build_1, not_null(e_25)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    ATerm x_46 = NULL,z_46 = NULL,f_47 = NULL,h_47 = NULL,i_47 = NULL,k_47 = NULL,r_47 = NULL,s_47 = NULL,u_47 = NULL,v_47 = NULL,x_47 = NULL;
    x_47 = t;
    if(match_cons(t, sym_Seq_2))
      {
        x_46 = ATgetArgument(t, 0);
        s_47 = ATgetArgument(t, 1);
        t = x_46;
        if(match_cons(t, sym_Choice_2))
          {
            z_46 = ATgetArgument(t, 0);
            h_47 = ATgetArgument(t, 1);
            {
              ATerm z_29 = t;
              int a_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_28 = NULL,e_28 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_30, s_47);
                  d_28 = t;
                  t = term_c_30;
                  e_28 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_c_30, (ATerm) ATmakeAppl(sym_Seq_2, term_b_30, s_47));
                  t = w_11(e_28, d_28, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm d_30 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) d_30) != ATmakeSymbol("y_0", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, z_46, s_47), (ATerm) ATmakeAppl(sym_Seq_2, h_47, s_47));
                  t = bottomup_1_0(d_6, t);
                  ;
                  LocalPopChoice(a_30);
                }
              else
                {
                  t = z_29;
                  t = x_47;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                z_46 = ATgetArgument(t, 0);
                h_47 = ATgetArgument(t, 1);
                {
                  ATerm e_30 = t;
                  int f_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_28 = NULL,z_28 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_g_30, s_47);
                      r_28 = t;
                      t = term_l_30;
                      z_28 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_l_30, (ATerm) ATmakeAppl(sym_Seq_2, term_g_30, s_47));
                      t = w_11(z_28, r_28, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm m_30 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) m_30) != ATmakeSymbol("a_1", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, z_46, s_47), (ATerm) ATmakeAppl(sym_Seq_2, h_47, s_47));
                      t = bottomup_1_0(d_6, t);
                      ;
                      LocalPopChoice(f_30);
                    }
                  else
                    {
                      t = e_30;
                      t = x_47;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    z_46 = ATgetArgument(t, 0);
                    h_47 = ATgetArgument(t, 1);
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm g_48 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_47, s_47);
                          t = d_6(t);
                          g_48 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_46, g_48);
                          t = d_6(t);
                          ;
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          t = x_47;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        z_46 = ATgetArgument(t, 0);
                        h_47 = ATgetArgument(t, 1);
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_48 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, h_47, s_47);
                              t = d_6(t);
                              n_48 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, z_46, n_48);
                              t = d_6(t);
                              ;
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              t = x_47;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            z_46 = ATgetArgument(t, 0);
                            {
                              ATerm t_30 = t;
                              int v_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_48 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, s_47, z_46);
                                  t = d_6(t);
                                  t_48 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, t_48);
                                  t = d_6(t);
                                  ;
                                  LocalPopChoice(v_30);
                                }
                              else
                                {
                                  t = t_30;
                                  t = x_47;
                                }
                            }
                          }
                        else
                          {
                            t = x_47;
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
            x_46 = ATgetArgument(t, 0);
            s_47 = ATgetArgument(t, 1);
            t = x_46;
            if(match_cons(t, sym_LChoice_2))
              {
                z_46 = ATgetArgument(t, 0);
                h_47 = ATgetArgument(t, 1);
                {
                  ATerm w_30 = t;
                  int z_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_49 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, h_47, s_47);
                      t = d_6(t);
                      b_49 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, z_46, b_49);
                      t = d_6(t);
                      ;
                      LocalPopChoice(z_30);
                    }
                  else
                    {
                      t = w_30;
                      t = x_47;
                    }
                }
              }
            else
              {
                t = x_47;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                x_46 = ATgetArgument(t, 0);
                s_47 = ATgetArgument(t, 1);
                t = x_46;
                if(match_cons(t, sym_Choice_2))
                  {
                    z_46 = ATgetArgument(t, 0);
                    h_47 = ATgetArgument(t, 1);
                    {
                      ATerm a_31 = t;
                      int b_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_49 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, h_47, s_47);
                          t = d_6(t);
                          n_49 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, z_46, n_49);
                          t = d_6(t);
                          ;
                          LocalPopChoice(b_31);
                        }
                      else
                        {
                          t = a_31;
                          t = x_47;
                        }
                    }
                  }
                else
                  {
                    t = x_47;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    x_46 = ATgetArgument(t, 0);
                    s_47 = ATgetArgument(t, 1);
                    t = s_47;
                    if(match_cons(t, sym_Op_2))
                      {
                        u_47 = ATgetArgument(t, 0);
                        v_47 = ATgetArgument(t, 1);
                        t = x_46;
                        if(match_cons(t, sym_CallT_3))
                          {
                            z_46 = ATgetArgument(t, 0);
                            h_47 = ATgetArgument(t, 1);
                            r_47 = ATgetArgument(t, 2);
                            t = r_47;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = h_47;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    i_47 = ATgetFirst((ATermList) t);
                                    k_47 = (ATerm) ATgetNext((ATermList) t);
                                    t = k_47;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = z_46;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            f_47 = ATgetArgument(t, 0);
                                            t = f_47;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm c_31 = t;
                                                int d_31 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm w_49 = NULL;
                                                    t = v_47;
                                                    {
                                                      ATerm e_6 (ATerm t)
                                                      {
                                                        ATerm y_49 = NULL;
                                                        y_49 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, i_47), (ATerm) ATempty), y_49);
                                                        return(t);
                                                      }
                                                      t = map_1_0(e_6, t);
                                                      w_49 = t;
                                                      t = (ATerm) ATmakeAppl(sym_App_2, i_47, (ATerm) ATmakeAppl(sym_Op_2, u_47, w_49));
                                                      t = bottomup_1_0(d_6, t);
                                                    }
                                                    ;
                                                    LocalPopChoice(d_31);
                                                  }
                                                else
                                                  {
                                                    t = c_31;
                                                    t = x_47;
                                                  }
                                              }
                                            else
                                              {
                                                t = x_47;
                                              }
                                          }
                                        else
                                          {
                                            t = x_47;
                                          }
                                      }
                                    else
                                      {
                                        t = x_47;
                                      }
                                  }
                                else
                                  {
                                    t = x_47;
                                  }
                              }
                            else
                              {
                                t = x_47;
                              }
                          }
                        else
                          {
                            t = x_47;
                          }
                      }
                    else
                      {
                        t = x_47;
                      }
                  }
                else
                  {
                    t = x_47;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(d_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = bottomup_1_0(g_95, t);
    return(t);
  }
  t = SRTS_all(h_6, t);
  t = g_95(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,e_51 = NULL;
    e_51 = t;
    if(match_cons(t, sym_Seq_2))
      {
        u_50 = ATgetArgument(t, 0);
        v_50 = ATgetArgument(t, 1);
        t = v_50;
        if(match_cons(t, sym_Choice_2))
          {
            w_50 = ATgetArgument(t, 0);
            x_50 = ATgetArgument(t, 1);
            {
              ATerm g_31 = t;
              int h_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_52 = NULL,d_52 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, w_50);
                  t = j_6(t);
                  c_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, x_50);
                  t = j_6(t);
                  d_52 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, c_52, d_52);
                  t = j_6(t);
                  ;
                  LocalPopChoice(h_31);
                }
              else
                {
                  t = g_31;
                  t = e_51;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                w_50 = ATgetArgument(t, 0);
                x_50 = ATgetArgument(t, 1);
                {
                  ATerm i_31 = t;
                  int j_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_52 = NULL,l_52 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, w_50);
                      t = j_6(t);
                      k_52 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, x_50);
                      t = j_6(t);
                      l_52 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, k_52, l_52);
                      t = j_6(t);
                      ;
                      LocalPopChoice(j_31);
                    }
                  else
                    {
                      t = i_31;
                      t = e_51;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    w_50 = ATgetArgument(t, 0);
                    x_50 = ATgetArgument(t, 1);
                    {
                      ATerm k_31 = t;
                      int l_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_53 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, u_50, x_50);
                          t = j_6(t);
                          a_53 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, w_50, a_53);
                          t = j_6(t);
                          ;
                          LocalPopChoice(l_31);
                        }
                      else
                        {
                          t = k_31;
                          t = e_51;
                        }
                    }
                  }
                else
                  {
                    t = e_51;
                  }
              }
          }
      }
    else
      {
        t = e_51;
      }
    return(t);
  }
  t = bottomup_1_0(j_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm z_85 (ATerm), ATerm a_86 (ATerm), ATerm t)
{
  ATerm g_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,q_4 = NULL;
  w_53 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_53 = ATgetArgument(t, 0);
      t_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_53);
  g_53 = t;
  t = s_53;
  t = z_85(t);
  u_53 = t;
  t = t_53;
  t = a_86(t);
  v_53 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, u_53, v_53);
  q_4 = t;
  t = SSLsetAnnotations(q_4, g_53);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,e_5 = NULL;
  l_34 = t;
  if(match_cons(t, sym_Build_1))
    {
      k_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_34);
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, k_34);
  e_5 = t;
  t = SSLsetAnnotations(e_5, j_34);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm m_31 = t;
  int n_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_31 = t;
      int p_31 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(p_31);
        }
      else
        {
          t = o_31;
          {
            ATerm q_31 = t;
            int s_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_58 = NULL,j_58 = NULL,k_58 = NULL;
                g_58 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    j_58 = ATgetArgument(t, 0);
                    k_58 = ATgetArgument(t, 1);
                    {
                      ATerm l_29 = NULL,r_29 = NULL,w_29 = NULL,s_4 = NULL;
                      t = SSLgetAnnotations(g_58);
                      l_29 = t;
                      t = j_58;
                      t = inline_rules_0_0(t);
                      r_29 = t;
                      t = k_58;
                      t = inline_rules_0_0(t);
                      w_29 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, r_29, w_29);
                      s_4 = t;
                      t = SSLsetAnnotations(s_4, l_29);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        j_58 = ATgetArgument(t, 0);
                        k_58 = ATgetArgument(t, 1);
                        {
                          ATerm u_30 = NULL,x_30 = NULL,y_30 = NULL,t_4 = NULL;
                          t = SSLgetAnnotations(g_58);
                          u_30 = t;
                          t = j_58;
                          t = inline_rules_0_0(t);
                          x_30 = t;
                          t = k_58;
                          t = inline_rules_0_0(t);
                          y_30 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, x_30, y_30);
                          t_4 = t;
                          t = SSLsetAnnotations(t_4, u_30);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            j_58 = ATgetArgument(t, 0);
                            k_58 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm t_31 = t;
                          int x_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,b_32 = NULL,e_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,x_32 = NULL,b_5 = NULL,x_4 = NULL,v_4 = NULL,u_4 = NULL;
                              t = SSLgetAnnotations(g_58);
                              r_31 = t;
                              t = k_58;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  v_31 = ATgetArgument(t, 0);
                                  w_31 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(k_58);
                              u_31 = t;
                              t = v_31;
                              if(match_cons(t, sym_Match_1))
                                {
                                  m_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(v_31);
                              l_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, m_32);
                              u_4 = t;
                              t = SSLsetAnnotations(u_4, l_32);
                              x_32 = t;
                              t = w_31;
                              if(match_cons(t, sym_Build_1))
                                {
                                  j_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(w_31);
                              e_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, j_32);
                              v_4 = t;
                              t = SSLsetAnnotations(v_4, e_32);
                              k_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_32, k_32);
                              x_4 = t;
                              t = SSLsetAnnotations(x_4, u_31);
                              b_32 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, j_58, b_32);
                              b_5 = t;
                              t = SSLsetAnnotations(b_5, r_31);
                              ;
                              LocalPopChoice(x_31);
                            }
                          else
                            {
                              t = t_31;
                              {
                                ATerm h_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,u_33 = NULL,v_33 = NULL,a_34 = NULL,e_34 = NULL,g_5 = NULL,f_5 = NULL,d_5 = NULL;
                                t = SSLgetAnnotations(g_58);
                                h_33 = t;
                                t = k_58;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    o_33 = ATgetArgument(t, 0);
                                    p_33 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(k_58);
                                n_33 = t;
                                t = o_33;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    a_34 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(o_33);
                                v_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, a_34);
                                d_5 = t;
                                t = SSLsetAnnotations(d_5, v_33);
                                e_34 = t;
                                t = p_33;
                                t = Seq_2_0(_id, k_6, t);
                                q_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, e_34, q_33);
                                f_5 = t;
                                t = SSLsetAnnotations(f_5, n_33);
                                u_33 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, j_58, u_33);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, h_33);
                              }
                            }
                        }
                      }
                  }
                ;
                LocalPopChoice(s_31);
              }
            else
              {
                t = q_31;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(n_31);
    }
  else
    {
      t = m_31;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_s_29;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_l_27;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm y_58 = NULL,a_59 = NULL,c_59 = NULL,i_59 = NULL,j_59 = NULL;
  y_58 = t;
  t = term_q_29;
  i_59 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_y_31, y_58);
  j_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_29, (ATerm) ATmakeAppl(sym_Defined_2, term_y_31, y_58));
  t = x_11(l_6, i_59, j_59, t);
  t = term_k_27;
  a_59 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_z_31, y_58);
  c_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_27, (ATerm) ATmakeAppl(sym_Defined_2, term_z_31, y_58));
  t = x_11(m_6, a_59, c_59, t);
  t = y_58;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_c_30;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_l_30;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm l_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL;
  l_59 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_30, l_59);
  p_59 = t;
  t = term_c_32;
  q_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_30, l_59), term_c_32);
  t = x_11(n_6, p_59, q_59, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_g_30, l_59);
  n_59 = t;
  t = term_y_32;
  o_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_g_30, l_59), term_y_32);
  t = x_11(o_6, n_59, o_59, t);
  t = l_59;
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  o_61 = t;
  t = term_s_21;
  p_61 = t;
  t = (ATerm) ATinsert(ATempty, term_z_32);
  q_61 = t;
  t = SSL_printnl(p_61, q_61);
  t = o_61;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm a_33 = t;
  int b_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(b_33);
    }
  else
    {
      t = a_33;
      {
        ATerm c_33 = t;
        int d_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(d_33);
          }
        else
          {
            t = c_33;
            {
              ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL,y_61 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  s_61 = ATgetArgument(t, 0);
                  u_61 = ATgetArgument(t, 1);
                  y_61 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_61;
              if(match_cons(t, sym_SVar_1))
                {
                  t_61 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_61;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = u_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_61;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_o_23;
            }
          }
      }
    }
  return(t);
}
ATerm u_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm e_33 = ATgetArgument(t, 0);
      if(match_cons(e_33, sym_SVar_1))
        {
          ATerm i_33 = ATgetArgument(e_33, 0);
          if((ATgetSymbol((ATermAppl) i_33) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm f_33 = ATgetArgument(t, 1);
        if(((ATgetType(f_33) != AT_LIST) || !(ATisEmpty(f_33))))
          _fail(t);
      }
      {
        ATerm g_33 = ATgetArgument(t, 2);
        if(((ATgetType(g_33) != AT_LIST) || !(ATisEmpty(g_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm h_62 = NULL,k_62 = NULL,l_62 = NULL;
  h_62 = t;
  t = term_s_21;
  k_62 = t;
  t = (ATerm) ATinsert(ATempty, term_j_33);
  l_62 = t;
  t = SSL_printnl(k_62, l_62);
  t = h_62;
  return(t);
}
ATerm a_10 (ATerm w_20, ATerm t)
{
  ATerm h_61 = NULL,m_61 = NULL;
  t = if_verbose2_1_0(q_6, t);
  t = new_0_0(t);
  m_61 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_61), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_61), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = w_20;
  t = inline_rules_0_0(t);
  h_61 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, m_61, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_a_27, h_61), (ATerm) ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_61), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_o_23))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(s_6, t);
  {
    ATerm k_33 = t;
    if((PushChoice() == 0))
      {
        ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
        t = oncetd_1_0(u_6, t);
        b_62 = t;
        t = term_s_21;
        c_62 = t;
        t = (ATerm) ATinsert(ATempty, term_l_33);
        d_62 = t;
        t = SSL_printnl(c_62, d_62);
        t = b_62;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = k_33;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(y_6, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm x_96 (ATerm), ATerm t)
{
  ATerm m_62 (ATerm t)
  {
    ATerm m_33 = t;
    int r_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_96(t);
        ;
        LocalPopChoice(r_33);
      }
    else
      {
        t = m_33;
        t = SRTS_all(m_62, t);
      }
    return(t);
  }
  t = m_62(t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  ATerm s_64 = NULL,x_64 = NULL,y_64 = NULL;
  s_64 = t;
  t = term_s_21;
  x_64 = t;
  t = (ATerm) ATinsert(ATempty, term_w_33);
  y_64 = t;
  t = SSL_printnl(x_64, y_64);
  t = s_64;
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = debug_1_0(f_7, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  t = term_s_21;
  x_66 = t;
  t = (ATerm) ATinsert(ATempty, term_d_34);
  y_66 = t;
  t = SSL_printnl(x_66, y_66);
  t = w_66;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL;
  r_64 = t;
  t = new_0_0(t);
  q_64 = t;
  {
    ATerm f_34 = t;
    int g_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_f_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_64), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(g_34);
      }
    else
      {
        t = f_34;
        t = if_verbose2_1_0(b_7, t);
        _fail(t);
      }
    {
      ATerm i_34 = t;
      int n_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_64 = NULL,d_65 = NULL,f_65 = NULL,g_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL,t_65 = NULL,u_65 = NULL,v_65 = NULL,w_65 = NULL,x_65 = NULL,f_66 = NULL,j_66 = NULL,u_66 = NULL,v_66 = NULL;
          z_64 = t;
          if(match_cons(t, sym_Seq_2))
            {
              d_65 = ATgetArgument(t, 0);
              x_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_65;
          if(match_cons(t, sym_All_1))
            {
              f_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_65;
          if(match_cons(t, sym_CallT_3))
            {
              g_65 = ATgetArgument(t, 0);
              p_65 = ATgetArgument(t, 1);
              w_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = g_65;
          if(match_cons(t, sym_SVar_1))
            {
              o_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_65;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = p_65;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_65 = ATgetFirst((ATermList) t);
              v_65 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = q_65;
          if(match_cons(t, sym_CallT_3))
            {
              r_65 = ATgetArgument(t, 0);
              t_65 = ATgetArgument(t, 1);
              u_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = r_65;
          if(match_cons(t, sym_SVar_1))
            {
              s_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_65;
          if(match_cons(t, sym_CallT_3))
            {
              f_66 = ATgetArgument(t, 0);
              u_66 = ATgetArgument(t, 1);
              v_66 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = f_66;
          if(match_cons(t, sym_SVar_1))
            {
              j_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_65;
          if((q_64 != t))
            {
              _fail(t);
            }
          t = j_66;
          if((s_65 != t))
            {
              _fail(t);
            }
          t = z_64;
          ;
          LocalPopChoice(n_34);
        }
      else
        {
          t = i_34;
          t = if_verbose1_1_0(e_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(g_7, t);
      t = r_64;
    }
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,l_76 = NULL;
  j_76 = t;
  t = term_s_21;
  k_76 = t;
  t = (ATerm) ATinsert(ATempty, term_p_34);
  l_76 = t;
  t = SSL_printnl(k_76, l_76);
  t = j_76;
  return(t);
}
ATerm m_7 (ATerm t)
{
  t = debug_1_0(q_7, t);
  return(t);
}
ATerm q_7 (ATerm t)
{
  t = term_q_34;
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm l_79 = NULL,m_79 = NULL,n_79 = NULL;
  l_79 = t;
  t = term_s_21;
  m_79 = t;
  t = (ATerm) ATinsert(ATempty, term_r_34);
  n_79 = t;
  t = SSL_printnl(m_79, n_79);
  t = l_79;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm e_76 = NULL,h_76 = NULL;
  h_76 = t;
  t = new_0_0(t);
  e_76 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_76), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        t = if_verbose2_1_0(l_7, t);
        _fail(t);
      }
    {
      ATerm b_35 = t;
      int d_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,w_76 = NULL,x_76 = NULL,a_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL,k_77 = NULL,l_77 = NULL,r_77 = NULL,v_77 = NULL,x_77 = NULL,b_78 = NULL,c_78 = NULL,d_78 = NULL,h_78 = NULL,k_78 = NULL,l_78 = NULL,m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL,a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL,i_79 = NULL;
          d_78 = t;
          if(match_cons(t, sym_CallT_3))
            {
              h_78 = ATgetArgument(t, 0);
              l_78 = ATgetArgument(t, 1);
              i_79 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = h_78;
          if(match_cons(t, sym_SVar_1))
            {
              k_78 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_78;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = l_78;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_78 = ATgetFirst((ATermList) t);
              h_79 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_78;
          if(match_cons(t, sym_CallT_3))
            {
              n_78 = ATgetArgument(t, 0);
              o_78 = ATgetArgument(t, 1);
              s_76 = ATgetArgument(t, 2);
              t = n_78;
              if(match_cons(t, sym_SVar_1))
                {
                  r_76 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_76;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = o_78;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_78 = ATgetFirst((ATermList) t);
                  g_79 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = p_78;
              if(match_cons(t, sym_Seq_2))
                {
                  q_78 = ATgetArgument(t, 0);
                  v_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_78;
              if(match_cons(t, sym_CallT_3))
                {
                  r_78 = ATgetArgument(t, 0);
                  t_78 = ATgetArgument(t, 1);
                  u_78 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_78;
              if(match_cons(t, sym_SVar_1))
                {
                  s_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = t_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_78;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_78;
              if(match_cons(t, sym_CallT_3))
                {
                  w_78 = ATgetArgument(t, 0);
                  y_78 = ATgetArgument(t, 1);
                  f_79 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_78;
              if(match_cons(t, sym_SVar_1))
                {
                  x_78 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_78;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = y_78;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_78 = ATgetFirst((ATermList) t);
                  e_79 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_78;
              if(match_cons(t, sym_CallT_3))
                {
                  a_79 = ATgetArgument(t, 0);
                  c_79 = ATgetArgument(t, 1);
                  d_79 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_79;
              if(match_cons(t, sym_SVar_1))
                {
                  b_79 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_76;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_79;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_78;
              if((e_76 != t))
                {
                  _fail(t);
                }
              t = b_79;
              if((s_78 != t))
                {
                  _fail(t);
                }
              t = d_78;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  n_78 = ATgetArgument(t, 0);
                  o_78 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = o_78;
              if(match_cons(t, sym_CallT_3))
                {
                  p_78 = ATgetArgument(t, 0);
                  g_79 = ATgetArgument(t, 1);
                  c_78 = ATgetArgument(t, 2);
                  t = p_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = q_78;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = g_79;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_76 = ATgetFirst((ATermList) t);
                      b_78 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = t_76;
                  if(match_cons(t, sym_Seq_2))
                    {
                      u_76 = ATgetArgument(t, 0);
                      c_77 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_76;
                  if(match_cons(t, sym_CallT_3))
                    {
                      v_76 = ATgetArgument(t, 0);
                      x_76 = ATgetArgument(t, 1);
                      a_77 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = v_76;
                  if(match_cons(t, sym_SVar_1))
                    {
                      w_76 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_76;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_77;
                  if(match_cons(t, sym_CallT_3))
                    {
                      d_77 = ATgetArgument(t, 0);
                      f_77 = ATgetArgument(t, 1);
                      x_77 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = d_77;
                  if(match_cons(t, sym_SVar_1))
                    {
                      e_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_77;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = f_77;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      g_77 = ATgetFirst((ATermList) t);
                      v_77 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = g_77;
                  if(match_cons(t, sym_CallT_3))
                    {
                      h_77 = ATgetArgument(t, 0);
                      l_77 = ATgetArgument(t, 1);
                      r_77 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = h_77;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_77 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_77;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_76;
                  if((e_76 != t))
                    {
                      _fail(t);
                    }
                  t = k_77;
                  if((n_78 != t))
                    {
                      _fail(t);
                    }
                  t = d_78;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      p_78 = ATgetArgument(t, 0);
                      g_79 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = p_78;
                  if(match_cons(t, sym_Seq_2))
                    {
                      q_78 = ATgetArgument(t, 0);
                      v_78 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      r_78 = ATgetArgument(t, 0);
                      t_78 = ATgetArgument(t, 1);
                      u_78 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = r_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      s_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_78;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      w_78 = ATgetArgument(t, 0);
                      y_78 = ATgetArgument(t, 1);
                      f_79 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = w_78;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_78 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_78;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = y_78;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_78 = ATgetFirst((ATermList) t);
                      e_79 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_78;
                  if(match_cons(t, sym_CallT_3))
                    {
                      a_79 = ATgetArgument(t, 0);
                      c_79 = ATgetArgument(t, 1);
                      d_79 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = a_79;
                  if(match_cons(t, sym_SVar_1))
                    {
                      b_79 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_79;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_79;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_78;
                  if((e_76 != t))
                    {
                      _fail(t);
                    }
                  t = b_79;
                  if((n_78 != t))
                    {
                      _fail(t);
                    }
                  t = d_78;
                }
            }
          ;
          LocalPopChoice(d_35);
        }
      else
        {
          t = b_35;
          t = if_verbose1_1_0(m_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(r_7, t);
      t = h_76;
    }
  }
  return(t);
}
ATerm topdown_1_0 (ATerm f_95 (ATerm), ATerm t)
{
  ATerm t_7 (ATerm t)
  {
    t = topdown_1_0(f_95, t);
    return(t);
  }
  t = f_95(t);
  t = SRTS_all(t_7, t);
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_Var_1))
        {
          ATerm i_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      LocalPopChoice(g_35);
      {
        ATerm p_79 = NULL,q_79 = NULL;
        p_79 = t;
        if(match_cons(t, sym_Var_1))
          {
            ATerm j_35 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        q_79 = t;
        t = SSLgetAnnotations(p_79);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_35 = ATgetFirst((ATermList) t);
            if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("bound", 0, ATtrue)))
              _fail(t);
            {
              ATerm o_35 = (ATerm) ATgetNext((ATermList) t);
              if(((ATgetType(o_35) != AT_LIST) || !(ATisEmpty(o_35))))
                _fail(t);
            }
          }
        else
          _fail(t);
        t = q_79;
      }
    }
  else
    {
      t = f_35;
      {
        ATerm q_35 = t;
        int s_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Op_2))
              {
                ATerm u_35 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) u_35) != ATmakeSymbol("Cons", 0, ATtrue)))
                  _fail(t);
                {
                  ATerm w_35 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(s_35);
            _fail(t);
          }
        else
          {
            t = q_35;
          }
      }
    }
  return(t);
}
ATerm c_10 (ATerm r_44, ATerm q_44, ATerm t)
{
  t = r_44;
  t = topdown_1_0(x_7, t);
  t = (ATerm) ATmakeAppl(sym_Build_1, r_44);
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm z_79 = NULL,a_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL,f_80 = NULL,i_80 = NULL,j_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_80 = ATgetArgument(t, 0);
      f_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_80;
  if(match_cons(t, sym_Match_1))
    {
      d_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_80;
  if(match_cons(t, sym_Var_1))
    {
      e_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_80;
  if(match_cons(t, sym_Seq_2))
    {
      i_80 = ATgetArgument(t, 0);
      a_80 = ATgetArgument(t, 1);
      t = i_80;
      if(match_cons(t, sym_Build_1))
        {
          j_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_80;
      if(match_cons(t, sym_Var_1))
        {
          z_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_79;
      if((e_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_80)), a_80);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          i_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_80;
      if(match_cons(t, sym_Var_1))
        {
          j_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_80;
      if((e_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_80));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm t_80 = NULL,w_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_80 = ATgetArgument(t, 0);
      a_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_80;
  if(match_cons(t, sym_Build_1))
    {
      z_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_81;
  if(match_cons(t, sym_Seq_2))
    {
      b_81 = ATgetArgument(t, 0);
      w_80 = ATgetArgument(t, 1);
      t = b_81;
      if(match_cons(t, sym_Match_1))
        {
          t_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_80;
      if((z_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_80), w_80);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          b_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_81;
      if((z_80 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, z_80);
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
  ATerm e_82 = NULL,f_82 = NULL,g_82 = NULL,i_82 = NULL,k_82 = NULL,l_82 = NULL,m_82 = NULL,p_82 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      i_82 = ATgetArgument(t, 0);
      k_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_82;
  if(match_cons(t, sym_Build_1))
    {
      ATerm x_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_82;
  if(match_cons(t, sym_Seq_2))
    {
      l_82 = ATgetArgument(t, 0);
      m_82 = ATgetArgument(t, 1);
      t = l_82;
      if(match_cons(t, sym_PrimT_3))
        {
          e_82 = ATgetArgument(t, 0);
          f_82 = ATgetArgument(t, 1);
          g_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, e_82, f_82, g_82), m_82);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          l_82 = ATgetArgument(t, 0);
          m_82 = ATgetArgument(t, 1);
          p_82 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, l_82, m_82, p_82);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,k_83 = NULL,o_83 = NULL,r_83 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      k_83 = ATgetArgument(t, 0);
      o_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_83;
  if(match_cons(t, sym_Build_1))
    {
      ATerm z_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_83;
  if(match_cons(t, sym_Seq_2))
    {
      r_83 = ATgetArgument(t, 0);
      i_83 = ATgetArgument(t, 1);
      t = r_83;
      if(match_cons(t, sym_Build_1))
        {
          h_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_83), i_83);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          r_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, r_83);
    }
  return(t);
}
ATerm y_7 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_36 = ATgetArgument(t, 0);
      if(((ATgetType(c_36) != AT_LIST) || !(ATisEmpty(c_36))))
        _fail(t);
      {
        ATerm d_36 = ATgetArgument(t, 1);
        if(((ATgetType(d_36) != AT_LIST) || !(ATisEmpty(d_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm g_85 = NULL,l_85 = NULL,m_85 = NULL,p_85 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) == AT_LIST) && !(ATisEmpty(e_36))))
        {
          g_85 = ATgetFirst((ATermList) e_36);
          l_85 = (ATerm) ATgetNext((ATermList) e_36);
        }
      else
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) == AT_LIST) && !(ATisEmpty(f_36))))
          {
            m_85 = ATgetFirst((ATermList) f_36);
            p_85 = (ATerm) ATgetNext((ATermList) f_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_85, m_85), (ATerm) ATmakeAppl(sym__2, l_85, p_85));
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm q_85 = NULL,r_85 = NULL;
  if(match_cons(t, sym__2))
    {
      q_85 = ATgetArgument(t, 0);
      r_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_85), q_85);
  return(t);
}
ATerm c_8 (ATerm t)
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
ATerm e_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_36 = ATgetArgument(t, 0);
      if(((ATgetType(j_36) != AT_LIST) || !(ATisEmpty(j_36))))
        _fail(t);
      {
        ATerm k_36 = ATgetArgument(t, 1);
        if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm b_86 = NULL,c_86 = NULL,d_86 = NULL,e_86 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_36 = ATgetArgument(t, 0);
      if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
        {
          b_86 = ATgetFirst((ATermList) l_36);
          c_86 = (ATerm) ATgetNext((ATermList) l_36);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            d_86 = ATgetFirst((ATermList) n_36);
            e_86 = (ATerm) ATgetNext((ATermList) n_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_86, d_86), (ATerm) ATmakeAppl(sym__2, c_86, e_86));
  return(t);
}
ATerm i_8 (ATerm t)
{
  ATerm f_86 = NULL,g_86 = NULL;
  if(match_cons(t, sym__2))
    {
      f_86 = ATgetArgument(t, 0);
      g_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_86), f_86);
  return(t);
}
ATerm l_8 (ATerm t)
{
  ATerm h_86 = NULL,i_86 = NULL;
  if(match_cons(t, sym__2))
    {
      h_86 = ATgetArgument(t, 0);
      i_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, h_86), (ATerm) ATmakeAppl(sym_Match_1, i_86));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm l_84 = NULL,m_84 = NULL,n_84 = NULL,p_84 = NULL,s_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      p_84 = ATgetArgument(t, 0);
      x_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_84;
  if(match_cons(t, sym_Build_1))
    {
      s_84 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_84;
  if(match_cons(t, sym_Op_2))
    {
      v_84 = ATgetArgument(t, 0);
      w_84 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_84;
  if(match_cons(t, sym_Seq_2))
    {
      y_84 = ATgetArgument(t, 0);
      n_84 = ATgetArgument(t, 1);
      {
        ATerm f_85 = NULL;
        t = y_84;
        if(match_cons(t, sym_Match_1))
          {
            z_84 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = z_84;
        if(match_cons(t, sym_Op_2))
          {
            l_84 = ATgetArgument(t, 0);
            m_84 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = l_84;
        if((v_84 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, w_84, m_84);
        t = genzip_4_0(y_7, z_7, b_8, c_8, t);
        f_85 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, f_85), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_84, w_84)), n_84));
      }
    }
  else
    {
      ATerm y_85 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          y_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_84;
      if(match_cons(t, sym_Op_2))
        {
          z_84 = ATgetArgument(t, 0);
          a_85 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_84;
      if((v_84 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, w_84, a_85);
      t = genzip_4_0(e_8, f_8, i_8, l_8, t);
      y_85 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, y_85), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, v_84, w_84)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_87 = NULL,v_87 = NULL,w_87 = NULL,x_87 = NULL,y_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL;
  v_87 = t;
  if(match_cons(t, sym_Seq_2))
    {
      w_87 = ATgetArgument(t, 0);
      a_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_87;
  if(match_cons(t, sym_Build_1))
    {
      x_87 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_87;
  if(match_cons(t, sym_Op_2))
    {
      y_87 = ATgetArgument(t, 0);
      {
        ATerm p_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_88;
  {
    ATerm r_36 = t;
    int s_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            b_88 = ATgetArgument(t, 0);
            {
              ATerm t_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(s_36);
        t = b_88;
        if(match_cons(t, sym_Match_1))
          {
            c_88 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_88;
        if(match_cons(t, sym_Op_2))
          {
            m_87 = ATgetArgument(t, 0);
            {
              ATerm z_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_87, m_87);
        {
          ATerm d_37 = t;
          if((PushChoice() == 0))
            {
              ATerm e_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_35 = ATgetArgument(t, 0);
                  if((e_35 != ATgetArgument(t, 1)))
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
              t = d_37;
            }
          t = term_e_37;
        }
      }
    else
      {
        t = r_36;
        if(match_cons(t, sym_Match_1))
          {
            b_88 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_88;
        if(match_cons(t, sym_Op_2))
          {
            c_88 = ATgetArgument(t, 0);
            {
              ATerm f_37 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_87, c_88);
        {
          ATerm i_37 = t;
          if((PushChoice() == 0))
            {
              ATerm t_35 = NULL;
              if(match_cons(t, sym__2))
                {
                  t_35 = ATgetArgument(t, 0);
                  if((t_35 != ATgetArgument(t, 1)))
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
              t = i_37;
            }
          t = term_e_37;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm g_88 (ATerm t)
  {
    ATerm k_37 = t;
    int l_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_96(t);
        ;
        LocalPopChoice(l_37);
      }
    else
      {
        t = k_37;
        t = SRTS_one(g_88, t);
      }
    return(t);
  }
  t = g_88(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,n_89 = NULL,o_89 = NULL,p_89 = NULL,s_89 = NULL,t_89 = NULL,v_89 = NULL,y_89 = NULL;
  h_89 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_89 = ATgetArgument(t, 0);
      p_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_89;
  if(match_cons(t, sym_Let_2))
    {
      s_89 = ATgetArgument(t, 0);
      v_89 = ATgetArgument(t, 1);
      {
        ATerm d_90 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, i_89, s_89);
        t = conc_0_0(t);
        d_90 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, d_90, v_89);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          s_89 = ATgetArgument(t, 0);
          v_89 = ATgetArgument(t, 1);
          y_89 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = i_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_89 = ATgetFirst((ATermList) t);
          o_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_89;
      if(match_cons(t, sym_SDefT_4))
        {
          k_89 = ATgetArgument(t, 0);
          l_89 = ATgetArgument(t, 1);
          m_89 = ATgetArgument(t, 2);
          n_89 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = l_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = m_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_89;
      if(match_cons(t, sym_SVar_1))
        {
          t_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = t_89;
      if((k_89 != t))
        {
          _fail(t);
        }
      t = n_89;
      {
        ATerm m_37 = t;
        if((PushChoice() == 0))
          {
            ATerm o_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm n_37 = ATgetArgument(t, 0);
                  if(match_cons(n_37, sym_SVar_1))
                    {
                      if((k_89 != ATgetArgument(n_37, 0)))
                        {
                          _fail(ATgetArgument(n_37, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm q_37 = ATgetArgument(t, 1);
                    if(((ATgetType(q_37) != AT_LIST) || !(ATisEmpty(q_37))))
                      _fail(t);
                  }
                  {
                    ATerm s_37 = ATgetArgument(t, 2);
                    if(((ATgetType(s_37) != AT_LIST) || !(ATisEmpty(s_37))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(o_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_37;
          }
        t = n_89;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm m_90 = NULL,n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,t_90 = NULL,u_90 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      t_90 = ATgetArgument(t, 0);
      t = t_90;
      if(match_cons(t, sym_Seq_2))
        {
          r_90 = ATgetArgument(t, 0);
          n_90 = ATgetArgument(t, 1);
          t = r_90;
          if(match_cons(t, sym_Where_1))
            {
              m_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_90;
          if(match_cons(t, sym_Seq_2))
            {
              o_90 = ATgetArgument(t, 0);
              q_90 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_90;
          if(match_cons(t, sym_Build_1))
            {
              p_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, m_90, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_90), q_90)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              r_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, r_90);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          t_90 = ATgetArgument(t, 0);
          t = t_90;
          if(match_cons(t, sym_Test_1))
            {
              r_90 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, r_90);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              t_90 = ATgetArgument(t, 0);
              t = t_90;
              if(match_cons(t, sym_Not_1))
                {
                  r_90 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, r_90);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  t_90 = ATgetArgument(t, 0);
                  u_90 = ATgetArgument(t, 1);
                  t = u_90;
                  if((t_90 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      t_90 = ATgetArgument(t, 0);
                      u_90 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_90;
                  if((t_90 != t))
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
  ATerm k_91 = NULL,l_91 = NULL,n_91 = NULL,o_91 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      k_91 = ATgetArgument(t, 0);
      o_91 = ATgetArgument(t, 1);
      t = k_91;
      if(match_cons(t, sym_LChoice_2))
        {
          l_91 = ATgetArgument(t, 0);
          n_91 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, l_91, (ATerm) ATmakeAppl(sym_LChoice_2, n_91, o_91));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          k_91 = ATgetArgument(t, 0);
          o_91 = ATgetArgument(t, 1);
          t = k_91;
          if(match_cons(t, sym_Seq_2))
            {
              l_91 = ATgetArgument(t, 0);
              n_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, l_91, (ATerm) ATmakeAppl(sym_Seq_2, n_91, o_91));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              k_91 = ATgetArgument(t, 0);
              o_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_91;
          if(match_cons(t, sym_Choice_2))
            {
              l_91 = ATgetArgument(t, 0);
              n_91 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, l_91, (ATerm) ATmakeAppl(sym_Choice_2, n_91, o_91));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm t_0 (ATerm), ATerm t)
{
  ATerm h_93 = NULL,i_93 = NULL,j_93 = NULL;
  h_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_93 = ATgetFirst((ATermList) t);
      j_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm t_37 = t;
    int x_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,g_37 = NULL,h_37 = NULL,r_6 = NULL,p_6 = NULL;
        t = SSLgetAnnotations(h_93);
        y_36 = t;
        t = i_93;
        t = t_0(t);
        g_37 = t;
        t = (ATerm) ATinsert(CheckATermList(j_93), g_37);
        p_6 = t;
        t = SSLsetAnnotations(p_6, y_36);
        h_37 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_36 = ATgetFirst((ATermList) t);
            w_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_37);
        u_36 = t;
        t = w_36;
        {
          ATerm y_37 = t;
          int z_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(t_0, t);
              ;
              LocalPopChoice(z_37);
            }
          else
            {
              t = y_37;
            }
          x_36 = t;
          t = (ATerm) ATinsert(CheckATermList(x_36), v_36);
          r_6 = t;
          t = SSLsetAnnotations(r_6, u_36);
        }
        ;
        LocalPopChoice(x_37);
      }
    else
      {
        t = t_37;
        {
          ATerm o_38 = NULL,b_39 = NULL,u_12 = NULL;
          t = SSLgetAnnotations(h_93);
          o_38 = t;
          t = j_93;
          t = map1_1_0(t_0, t);
          b_39 = t;
          t = (ATerm) ATinsert(CheckATermList(b_39), i_93);
          u_12 = t;
          t = SSLsetAnnotations(u_12, o_38);
        }
      }
  }
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm b_95 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, b_95, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_38), term_e_38));
  return(t);
}
ATerm r_8 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL;
  d_95 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      c_95 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, c_95, term_e_38);
    }
  else
    {
      t = d_95;
    }
  return(t);
}
ATerm s_8 (ATerm t)
{
  ATerm y_95 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, y_95, term_e_38);
  return(t);
}
ATerm v_8 (ATerm t)
{
  ATerm d_96 = NULL,e_96 = NULL;
  e_96 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_96 = ATgetArgument(t, 0);
      {
        ATerm f_38 = t;
        int g_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, d_96, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_38), term_e_38));
            ;
            LocalPopChoice(g_38);
          }
        else
          {
            t = f_38;
            t = e_96;
          }
      }
    }
  else
    {
      t = e_96;
    }
  return(t);
}
ATerm w_8 (ATerm t)
{
  ATerm u_96 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      u_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, u_96, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_38), term_e_38));
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm v_96 = NULL,w_96 = NULL;
  w_96 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      v_96 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_96, term_e_38);
    }
  else
    {
      t = w_96;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,d_94 = NULL,f_94 = NULL,g_94 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      f_94 = ATgetArgument(t, 0);
      g_94 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, f_94, g_94);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          f_94 = ATgetArgument(t, 0);
          t = f_94;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_93 = ATgetFirst((ATermList) t);
              x_93 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, w_93, (ATerm) ATmakeAppl(sym_LChoices_1, x_93));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_e_37;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              f_94 = ATgetArgument(t, 0);
              t = f_94;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_93 = ATgetFirst((ATermList) t);
                  x_93 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, w_93, (ATerm) ATmakeAppl(sym_Choices_1, x_93));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_e_37;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  f_94 = ATgetArgument(t, 0);
                  t = f_94;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      w_93 = ATgetFirst((ATermList) t);
                      x_93 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, w_93, (ATerm) ATmakeAppl(sym_Seqs_1, x_93));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_o_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_94 = ATgetArgument(t, 0);
                      g_94 = ATgetArgument(t, 1);
                      d_94 = ATgetArgument(t, 2);
                      y_93 = ATgetArgument(t, 3);
                      {
                        ATerm y_94 = NULL,a_95 = NULL;
                        t = g_94;
                        t = map1_1_0(q_8, t);
                        y_94 = t;
                        t = d_94;
                        t = map1_1_0(r_8, t);
                        a_95 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, f_94, y_94, a_95, y_93);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          f_94 = ATgetArgument(t, 0);
                          g_94 = ATgetArgument(t, 1);
                          d_94 = ATgetArgument(t, 2);
                          y_93 = ATgetArgument(t, 3);
                          {
                            ATerm h_38 = t;
                            int j_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_95 = NULL,x_95 = NULL;
                                t = d_94;
                                t = map1_1_0(s_8, t);
                                v_95 = t;
                                t = g_94;
                                t = map_1_0(v_8, t);
                                x_95 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_94, x_95, v_95, y_93);
                                ;
                                LocalPopChoice(j_38);
                              }
                            else
                              {
                                t = h_38;
                                {
                                  ATerm r_96 = NULL,t_96 = NULL;
                                  t = g_94;
                                  t = map1_1_0(w_8, t);
                                  r_96 = t;
                                  t = d_94;
                                  t = map_1_0(x_8, t);
                                  t_96 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, f_94, r_96, t_96, y_93);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              f_94 = ATgetArgument(t, 0);
                              g_94 = ATgetArgument(t, 1);
                              d_94 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, g_94, (ATerm) ATmakeAppl(sym_Op_2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, d_94), f_94)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  f_94 = ATgetArgument(t, 0);
                                  g_94 = ATgetArgument(t, 1);
                                  d_94 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, d_94)), f_94), (ATerm) ATmakeAppl(sym_Build_1, g_94)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      f_94 = ATgetArgument(t, 0);
                                      g_94 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, f_94, (ATerm) ATmakeAppl(sym_Match_1, g_94));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          f_94 = ATgetArgument(t, 0);
                                          g_94 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_94), g_94);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              f_94 = ATgetArgument(t, 0);
                                              g_94 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_94), f_94);
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
ATerm z_8 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_99 = ATgetArgument(t, 0);
      t = b_99;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_e_37;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_99 = ATgetArgument(t, 0);
          t = b_99;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_o_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_99 = ATgetArgument(t, 0);
              c_99 = ATgetArgument(t, 1);
              t = b_99;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_e_37;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  b_99 = ATgetArgument(t, 0);
                  c_99 = ATgetArgument(t, 1);
                  t = c_99;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_e_37;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      b_99 = ATgetArgument(t, 0);
                      c_99 = ATgetArgument(t, 1);
                      t = c_99;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_e_37;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          b_99 = ATgetArgument(t, 0);
                          t = b_99;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_e_37;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              b_99 = ATgetArgument(t, 0);
                              t = b_99;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_e_37;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  b_99 = ATgetArgument(t, 0);
                                  c_99 = ATgetArgument(t, 1);
                                  t = c_99;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_e_37;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      b_99 = ATgetArgument(t, 0);
                                      c_99 = ATgetArgument(t, 1);
                                      t = c_99;
                                      t = fetch_1_0(z_8, t);
                                      t = term_e_37;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          b_99 = ATgetArgument(t, 0);
                                          c_99 = ATgetArgument(t, 1);
                                          t = c_99;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = b_99;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = c_99;
                                                }
                                              else
                                                {
                                                  t = b_99;
                                                }
                                            }
                                          else
                                            {
                                              t = b_99;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = c_99;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              b_99 = ATgetArgument(t, 0);
                                              c_99 = ATgetArgument(t, 1);
                                              t = c_99;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = b_99;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = c_99;
                                                    }
                                                  else
                                                    {
                                                      t = b_99;
                                                    }
                                                }
                                              else
                                                {
                                                  t = b_99;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = c_99;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  b_99 = ATgetArgument(t, 0);
                                                  t = b_99;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_e_37;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      b_99 = ATgetArgument(t, 0);
                                                      c_99 = ATgetArgument(t, 1);
                                                      e_99 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = e_99;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, b_99, c_99);
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
  ATerm y_100 = NULL,a_101 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_101 = ATgetArgument(t, 0);
      t = a_101;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_o_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_101 = ATgetArgument(t, 0);
          t = a_101;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_37;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_101 = ATgetArgument(t, 0);
              y_100 = ATgetArgument(t, 1);
              t = y_100;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_101;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = y_100;
                    }
                  else
                    {
                      t = a_101;
                    }
                }
              else
                {
                  t = a_101;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_100;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  a_101 = ATgetArgument(t, 0);
                  y_100 = ATgetArgument(t, 1);
                  t = a_101;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_o_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      a_101 = ATgetArgument(t, 0);
                      y_100 = ATgetArgument(t, 1);
                      t = y_100;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_o_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          a_101 = ATgetArgument(t, 0);
                          y_100 = ATgetArgument(t, 1);
                          t = y_100;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_o_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              a_101 = ATgetArgument(t, 0);
                              t = a_101;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_o_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  a_101 = ATgetArgument(t, 0);
                                  t = a_101;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_o_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_101 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_101;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_o_23;
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
  ATerm k_38 = t;
  int l_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(l_38);
    }
  else
    {
      t = k_38;
      {
        ATerm m_38 = t;
        int n_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(n_38);
          }
        else
          {
            t = m_38;
            {
              ATerm p_38 = t;
              int q_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(q_38);
                }
              else
                {
                  t = p_38;
                  {
                    ATerm r_38 = t;
                    int s_38 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(s_38);
                      }
                    else
                      {
                        t = r_38;
                        {
                          ATerm t_38 = t;
                          int v_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(v_38);
                            }
                          else
                            {
                              t = t_38;
                              {
                                ATerm w_38 = t;
                                int a_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_101 = NULL,z_101 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        x_101 = ATgetArgument(t, 0);
                                        z_101 = ATgetArgument(t, 1);
                                        t = x_101;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_101;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            x_101 = ATgetArgument(t, 0);
                                            z_101 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = x_101;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_101;
                                      }
                                    ;
                                    LocalPopChoice(a_39);
                                  }
                                else
                                  {
                                    t = w_38;
                                    {
                                      ATerm c_39 = t;
                                      int d_39 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(d_39);
                                        }
                                      else
                                        {
                                          t = c_39;
                                          {
                                            ATerm e_39 = t;
                                            int f_39 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(f_39);
                                              }
                                            else
                                              {
                                                t = e_39;
                                                {
                                                  ATerm g_39 = t;
                                                  int i_39 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(i_39);
                                                    }
                                                  else
                                                    {
                                                      t = g_39;
                                                      {
                                                        ATerm j_39 = t;
                                                        int k_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
                                                            ;
                                                            LocalPopChoice(k_39);
                                                          }
                                                        else
                                                          {
                                                            t = j_39;
                                                            {
                                                              ATerm l_39 = t;
                                                              int m_39 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = BuildPrim_0_0(t);
                                                                  ;
                                                                  LocalPopChoice(m_39);
                                                                }
                                                              else
                                                                {
                                                                  t = l_39;
                                                                  {
                                                                    ATerm n_39 = t;
                                                                    int p_39 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MatchIdem_0_0(t);
                                                                        ;
                                                                        LocalPopChoice(p_39);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = n_39;
                                                                        {
                                                                          ATerm q_39 = t;
                                                                          int t_39 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(t_39);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = q_39;
                                                                              {
                                                                                ATerm u_39 = t;
                                                                                int v_39 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(v_39);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_39;
                                                                                    {
                                                                                      ATerm c_102 = NULL,e_102 = NULL,f_102 = NULL,h_102 = NULL;
                                                                                      e_102 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          f_102 = ATgetArgument(t, 0);
                                                                                          h_102 = ATgetArgument(t, 1);
                                                                                          t = f_102;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              c_102 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = e_102;
                                                                                          t = c_10(c_102, h_102, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              f_102 = ATgetArgument(t, 0);
                                                                                              h_102 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = f_102;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = h_102;
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
ATerm repeat_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm p_102 (ATerm t)
  {
    ATerm w_39 = t;
    int x_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_108(t);
        t = p_102(t);
        ;
        LocalPopChoice(x_39);
      }
    else
      {
        t = w_39;
      }
    return(t);
  }
  t = p_102(t);
  return(t);
}
ATerm downup_1_0 (ATerm h_95 (ATerm), ATerm t)
{
  t = h_95(t);
  {
    ATerm a_9 (ATerm t)
    {
      t = downup_1_0(h_95, t);
      return(t);
    }
    t = SRTS_all(a_9, t);
    t = h_95(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm v_101 (ATerm), ATerm t)
{
  ATerm w_102 (ATerm t)
  {
    ATerm a_40 = t;
    int b_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        ;
        LocalPopChoice(b_40);
      }
    else
      {
        t = a_40;
        {
          ATerm q_102 = NULL,r_102 = NULL,s_102 = NULL,t_102 = NULL,u_102 = NULL,v_102 = NULL,y_12 = NULL;
          t = t_101(t);
          v_102 = t;
          if(match_cons(t, sym__2))
            {
              r_102 = ATgetArgument(t, 0);
              s_102 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(v_102);
          q_102 = t;
          t = r_102;
          t = v_101(t);
          t_102 = t;
          t = s_102;
          t = w_102(t);
          u_102 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_102, u_102);
          y_12 = t;
          t = SSLsetAnnotations(y_12, q_102);
          t = u_101(t);
        }
      }
    return(t);
  }
  t = w_102(t);
  return(t);
}
ATerm h_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_40 = ATgetArgument(t, 0);
      if(((ATgetType(c_40) != AT_LIST) || !(ATisEmpty(c_40))))
        _fail(t);
      {
        ATerm e_40 = ATgetArgument(t, 1);
        if(((ATgetType(e_40) != AT_LIST) || !(ATisEmpty(e_40))))
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
  ATerm k_103 = NULL,l_103 = NULL,m_103 = NULL,n_103 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          k_103 = ATgetFirst((ATermList) f_40);
          l_103 = (ATerm) ATgetNext((ATermList) f_40);
        }
      else
        _fail(t);
      {
        ATerm g_40 = ATgetArgument(t, 1);
        if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
          {
            m_103 = ATgetFirst((ATermList) g_40);
            n_103 = (ATerm) ATgetNext((ATermList) g_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_103, m_103), (ATerm) ATmakeAppl(sym__2, l_103, n_103));
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm q_103 = NULL,v_103 = NULL;
  if(match_cons(t, sym__2))
    {
      q_103 = ATgetArgument(t, 0);
      v_103 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_103), q_103);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm c_103 = NULL,d_103 = NULL,e_103 = NULL,f_103 = NULL;
  c_103 = t;
  {
    ATerm h_40 = t;
    int i_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_40 = ATgetArgument(t, 0);
            ATerm m_40 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_40);
        t = c_103;
      }
    else
      {
        t = h_40;
        {
          ATerm j_103 = NULL;
          if(match_cons(t, sym__3))
            {
              d_103 = ATgetArgument(t, 0);
              e_103 = ATgetArgument(t, 1);
              f_103 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, d_103, e_103);
          t = genzip_4_0(h_10, j_10, m_10, _id, t);
          j_103 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_103, f_103);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm g_121 (ATerm), ATerm h_121 (ATerm), ATerm t)
{
  ATerm b_104 = NULL,c_104 = NULL;
  ATerm n_10 (ATerm t)
  {
    ATerm h_39 = NULL;
    t = g_121(t);
    h_39 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_39, not_null(c_104));
    t = lookup_0_0(t);
    t = h_121(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((c_104 != NULL) && (c_104 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        c_104 = ATgetArgument(t, 0);
      b_104 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_104;
  t = alltd_1_0(n_10, t);
  return(t);
}
ATerm p_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_40 = ATgetArgument(t, 0);
      if(((ATgetType(n_40) != AT_LIST) || !(ATisEmpty(n_40))))
        _fail(t);
      {
        ATerm o_40 = ATgetArgument(t, 1);
        if(((ATgetType(o_40) != AT_LIST) || !(ATisEmpty(o_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,d_40 = NULL,k_40 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_40 = ATgetArgument(t, 0);
      if(((ATgetType(p_40) == AT_LIST) && !(ATisEmpty(p_40))))
        {
          y_39 = ATgetFirst((ATermList) p_40);
          z_39 = (ATerm) ATgetNext((ATermList) p_40);
        }
      else
        _fail(t);
      {
        ATerm q_40 = ATgetArgument(t, 1);
        if(((ATgetType(q_40) == AT_LIST) && !(ATisEmpty(q_40))))
          {
            d_40 = ATgetFirst((ATermList) q_40);
            k_40 = (ATerm) ATgetNext((ATermList) q_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_39, d_40), (ATerm) ATmakeAppl(sym__2, z_39, k_40));
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm l_40 = NULL,v_40 = NULL;
  if(match_cons(t, sym__2))
    {
      l_40 = ATgetArgument(t, 0);
      v_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_40), l_40);
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm x_40 = NULL,z_40 = NULL,a_41 = NULL,j_41 = NULL,k_41 = NULL;
  if(match_cons(t, sym__2))
    {
      x_40 = ATgetArgument(t, 0);
      k_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_40;
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm t_40 = ATgetArgument(t, 0);
            z_40 = ATgetArgument(t, 1);
            a_41 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(s_40);
        t = (ATerm) ATmakeAppl(sym_SDef_3, k_41, z_40, a_41);
      }
    else
      {
        t = r_40;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm u_40 = ATgetArgument(t, 0);
            z_40 = ATgetArgument(t, 1);
            a_41 = ATgetArgument(t, 2);
            j_41 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_41, z_40, a_41, j_41);
      }
  }
  return(t);
}
ATerm u_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_40 = ATgetArgument(t, 0);
      if(((ATgetType(w_40) != AT_LIST) || !(ATisEmpty(w_40))))
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) != AT_LIST) || !(ATisEmpty(y_40))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_10 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_41 = ATgetArgument(t, 0);
      if(((ATgetType(b_41) == AT_LIST) && !(ATisEmpty(b_41))))
        {
          b_43 = ATgetFirst((ATermList) b_41);
          c_43 = (ATerm) ATgetNext((ATermList) b_41);
        }
      else
        _fail(t);
      {
        ATerm c_41 = ATgetArgument(t, 1);
        if(((ATgetType(c_41) == AT_LIST) && !(ATisEmpty(c_41))))
          {
            d_43 = ATgetFirst((ATermList) c_41);
            f_43 = (ATerm) ATgetNext((ATermList) c_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_43, d_43), (ATerm) ATmakeAppl(sym__2, c_43, f_43));
  return(t);
}
ATerm z_10 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      i_43 = ATgetArgument(t, 0);
      j_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_43), i_43);
  return(t);
}
ATerm c_11 (ATerm t)
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
    ATerm d_41 = t;
    int e_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm f_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_43);
      }
    else
      {
        t = d_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm g_41 = ATgetArgument(t, 0);
            o_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_43, o_43);
      }
  }
  return(t);
}
ATerm o_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_41 = ATgetArgument(t, 0);
      if(((ATgetType(h_41) != AT_LIST) || !(ATisEmpty(h_41))))
        _fail(t);
      {
        ATerm i_41 = ATgetArgument(t, 1);
        if(((ATgetType(i_41) != AT_LIST) || !(ATisEmpty(i_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_12 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_41 = ATgetArgument(t, 0);
      if(((ATgetType(l_41) == AT_LIST) && !(ATisEmpty(l_41))))
        {
          k_44 = ATgetFirst((ATermList) l_41);
          l_44 = (ATerm) ATgetNext((ATermList) l_41);
        }
      else
        _fail(t);
      {
        ATerm m_41 = ATgetArgument(t, 1);
        if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
          {
            m_44 = ATgetFirst((ATermList) m_41);
            n_44 = (ATerm) ATgetNext((ATermList) m_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_44, m_44), (ATerm) ATmakeAppl(sym__2, l_44, n_44));
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_cons(t, sym__2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_44), o_44);
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm t_44 = NULL,y_44 = NULL,b_45 = NULL;
  if(match_cons(t, sym__2))
    {
      t_44 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_44;
  {
    ATerm n_41 = t;
    int o_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_45);
      }
    else
      {
        t = n_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_41 = ATgetArgument(t, 0);
            y_44 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_45, y_44);
      }
  }
  return(t);
}
ATerm z_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_41 = ATgetArgument(t, 0);
      if(((ATgetType(r_41) != AT_LIST) || !(ATisEmpty(r_41))))
        _fail(t);
      {
        ATerm s_41 = ATgetArgument(t, 1);
        if(((ATgetType(s_41) != AT_LIST) || !(ATisEmpty(s_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_41 = ATgetArgument(t, 0);
      if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
        {
          e_46 = ATgetFirst((ATermList) t_41);
          f_46 = (ATerm) ATgetNext((ATermList) t_41);
        }
      else
        _fail(t);
      {
        ATerm u_41 = ATgetArgument(t, 1);
        if(((ATgetType(u_41) == AT_LIST) && !(ATisEmpty(u_41))))
          {
            g_46 = ATgetFirst((ATermList) u_41);
            h_46 = (ATerm) ATgetNext((ATermList) u_41);
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
ATerm l_13 (ATerm t)
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
ATerm m_13 (ATerm t)
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
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_46);
      }
    else
      {
        t = v_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_41 = ATgetArgument(t, 0);
            n_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_46, n_46);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm v_124 (ATerm), ATerm t)
{
  ATerm w_112 = NULL,a_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  e_113 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_113 = ATgetArgument(t, 0);
      g_113 = ATgetArgument(t, 1);
      {
        ATerm o_39 = NULL,r_39 = NULL,s_39 = NULL,a_13 = NULL;
        t = SSLgetAnnotations(e_113);
        o_39 = t;
        t = f_113;
        t = v_124(t);
        s_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_113, s_39);
        t = genzip_4_0(p_10, q_10, r_10, t_10, t);
        r_39 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, r_39, g_113);
        a_13 = t;
        t = SSLsetAnnotations(a_13, o_39);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_113 = ATgetArgument(t, 0);
          g_113 = ATgetArgument(t, 1);
          w_112 = ATgetArgument(t, 2);
          {
            ATerm s_42 = NULL,x_42 = NULL,z_42 = NULL,d_13 = NULL;
            t = SSLgetAnnotations(e_113);
            s_42 = t;
            t = g_113;
            t = v_124(t);
            z_42 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_113, z_42);
            t = genzip_4_0(u_10, y_10, z_10, c_11, t);
            x_42 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_113, x_42, w_112);
            d_13 = t;
            t = SSLsetAnnotations(d_13, s_42);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_113 = ATgetArgument(t, 0);
              g_113 = ATgetArgument(t, 1);
              w_112 = ATgetArgument(t, 2);
              a_113 = ATgetArgument(t, 3);
              {
                ATerm c_44 = NULL,h_44 = NULL,i_44 = NULL,f_13 = NULL;
                t = SSLgetAnnotations(e_113);
                c_44 = t;
                t = g_113;
                t = v_124(t);
                i_44 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_113, i_44);
                t = genzip_4_0(o_11, v_12, w_12, x_12, t);
                h_44 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_113, h_44, w_112, a_113);
                f_13 = t;
                t = SSLsetAnnotations(f_13, c_44);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_113 = ATgetArgument(t, 0);
                  g_113 = ATgetArgument(t, 1);
                  w_112 = ATgetArgument(t, 2);
                  a_113 = ATgetArgument(t, 3);
                  {
                    ATerm t_45 = NULL,a_46 = NULL,c_46 = NULL,g_13 = NULL;
                    t = SSLgetAnnotations(e_113);
                    t_45 = t;
                    t = g_113;
                    t = v_124(t);
                    c_46 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_113, c_46);
                    t = genzip_4_0(z_12, k_13, l_13, m_13, t);
                    a_46 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_113, a_46, w_112, a_113);
                    g_13 = t;
                    t = SSLsetAnnotations(g_13, t_45);
                  }
                }
              else
                {
                  ATerm e_47 = NULL,l_47 = NULL,j_13 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_113 = ATgetArgument(t, 0);
                      g_113 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_113);
                  e_47 = t;
                  t = f_113;
                  t = v_124(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_47 = ATgetFirst((ATermList) t);
                      {
                        ATerm z_41 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, l_47, g_113);
                  j_13 = t;
                  t = SSLsetAnnotations(j_13, e_47);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm w_124 (ATerm), ATerm x_124 (ATerm), ATerm y_124 (ATerm), ATerm t)
{
  ATerm v_115 = NULL,w_115 = NULL,x_115 = NULL,y_115 = NULL,z_115 = NULL;
  x_115 = t;
  if(match_cons(t, sym_Let_2))
    {
      y_115 = ATgetArgument(t, 0);
      z_115 = ATgetArgument(t, 1);
      {
        ATerm z_47 = NULL,j_48 = NULL,m_48 = NULL,s_13 = NULL;
        t = SSLgetAnnotations(x_115);
        z_47 = t;
        t = y_115;
        t = w_124(t);
        j_48 = t;
        t = z_115;
        t = w_124(t);
        m_48 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, j_48, m_48);
        s_13 = t;
        t = SSLsetAnnotations(s_13, z_47);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          y_115 = ATgetArgument(t, 0);
          z_115 = ATgetArgument(t, 1);
          v_115 = ATgetArgument(t, 2);
          {
            ATerm j_49 = NULL,u_49 = NULL,x_49 = NULL,a_50 = NULL,y_13 = NULL;
            t = SSLgetAnnotations(x_115);
            j_49 = t;
            t = y_115;
            t = y_124(t);
            u_49 = t;
            t = z_115;
            t = y_124(t);
            x_49 = t;
            t = v_115;
            t = w_124(t);
            a_50 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, u_49, x_49, a_50);
            y_13 = t;
            t = SSLsetAnnotations(y_13, j_49);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              y_115 = ATgetArgument(t, 0);
              z_115 = ATgetArgument(t, 1);
              v_115 = ATgetArgument(t, 2);
              w_115 = ATgetArgument(t, 3);
              {
                ATerm a_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,a_14 = NULL;
                t = SSLgetAnnotations(x_115);
                a_51 = t;
                t = y_115;
                t = y_124(t);
                g_51 = t;
                t = z_115;
                t = y_124(t);
                h_51 = t;
                t = v_115;
                t = y_124(t);
                i_51 = t;
                t = w_115;
                t = w_124(t);
                j_51 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, g_51, h_51, i_51, j_51);
                a_14 = t;
                t = SSLsetAnnotations(a_14, a_51);
              }
            }
          else
            {
              ATerm w_51 = NULL,z_51 = NULL,i_52 = NULL,c_14 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  y_115 = ATgetArgument(t, 0);
                  z_115 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(x_115);
              w_51 = t;
              t = y_115;
              t = y_124(t);
              z_51 = t;
              t = z_115;
              t = w_124(t);
              i_52 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, z_51, i_52);
              c_14 = t;
              t = SSLsetAnnotations(c_14, w_51);
            }
        }
    }
  return(t);
}
ATerm n_13 (ATerm t)
{
  ATerm g_116 = NULL;
  ATerm a_42 = t;
  int b_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          g_116 = ATgetArgument(t, 0);
          {
            ATerm c_42 = ATgetArgument(t, 1);
          }
          {
            ATerm e_42 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_42);
      t = g_116;
    }
  else
    {
      t = a_42;
      if(match_cons(t, sym_SDefT_4))
        {
          g_116 = ATgetArgument(t, 0);
          {
            ATerm f_42 = ATgetArgument(t, 1);
          }
          {
            ATerm k_42 = ATgetArgument(t, 2);
          }
          {
            ATerm l_42 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = g_116;
    }
  return(t);
}
ATerm e_11 (ATerm q_73, ATerm p_73, ATerm t)
{
  t = q_73;
  t = map_1_0(n_13, t);
  return(t);
}
ATerm SVar_1_0 (ATerm k_85 (ATerm), ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,s_14 = NULL;
  v_116 = t;
  if(match_cons(t, sym_SVar_1))
    {
      t_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_116);
  s_116 = t;
  t = t_116;
  t = k_85(t);
  u_116 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, u_116);
  s_14 = t;
  t = SSLsetAnnotations(s_14, s_116);
  return(t);
}
ATerm p_11 (ATerm i_122 (ATerm), ATerm j_122 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm l_64, ATerm k_64, ATerm j_64, ATerm t)
{
  ATerm q_13 (ATerm t)
  {
    ATerm z_116 = NULL;
    z_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, z_116, j_64);
    t = i_122(t);
    return(t);
  }
  ATerm u_13 (ATerm t)
  {
    ATerm b_117 = NULL;
    b_117 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_117, k_64);
    t = i_122(t);
    return(t);
  }
  t = l_64;
  t = j_122(q_13, u_13, _id, t);
  return(t);
}
ATerm v_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_42 = ATgetArgument(t, 0);
      if(((ATgetType(o_42) != AT_LIST) || !(ATisEmpty(o_42))))
        _fail(t);
      {
        ATerm p_42 = ATgetArgument(t, 1);
        if(((ATgetType(p_42) != AT_LIST) || !(ATisEmpty(p_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm n_117 = NULL,o_117 = NULL,p_117 = NULL,q_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_42 = ATgetArgument(t, 0);
      if(((ATgetType(q_42) == AT_LIST) && !(ATisEmpty(q_42))))
        {
          n_117 = ATgetFirst((ATermList) q_42);
          o_117 = (ATerm) ATgetNext((ATermList) q_42);
        }
      else
        _fail(t);
      {
        ATerm r_42 = ATgetArgument(t, 1);
        if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
          {
            p_117 = ATgetFirst((ATermList) r_42);
            q_117 = (ATerm) ATgetNext((ATermList) r_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, n_117, p_117), (ATerm) ATmakeAppl(sym__2, o_117, q_117));
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm r_117 = NULL,s_117 = NULL;
  if(match_cons(t, sym__2))
    {
      r_117 = ATgetArgument(t, 0);
      s_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(s_117), r_117);
  return(t);
}
ATerm q_11 (ATerm c_122 (ATerm), ATerm d_122 (ATerm (ATerm), ATerm), ATerm d_64, ATerm g_64, ATerm t)
{
  ATerm e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL,m_117 = NULL;
  t = d_64;
  t = c_122(t);
  e_117 = t;
  t = map_1_0(new_0_0, t);
  f_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_117, f_117);
  t = genzip_4_0(v_13, w_13, x_13, _id, t);
  m_117 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_117, g_64);
  t = conc_0_0(t);
  g_117 = t;
  t = d_64;
  {
    ATerm z_13 (ATerm t)
    {
      t = f_117;
      return(t);
    }
    t = d_122(z_13, t);
    h_117 = t;
    t = (ATerm) ATmakeAppl(sym__3, h_117, g_64, g_117);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_117 = NULL,z_117 = NULL,e_118 = NULL,f_118 = NULL,g_118 = NULL,h_118 = NULL,i_118 = NULL;
  e_118 = t;
  if(match_cons(t, sym__2))
    {
      f_118 = ATgetArgument(t, 0);
      g_118 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_118;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_118 = ATgetFirst((ATermList) t);
      i_118 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_118;
  if(match_cons(t, sym__2))
    {
      x_117 = ATgetArgument(t, 0);
      z_117 = ATgetArgument(t, 1);
      {
        ATerm u_42 = t;
        int v_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_117;
            if((f_118 != t))
              {
                _fail(t);
              }
            t = z_117;
            ;
            LocalPopChoice(v_42);
          }
        else
          {
            t = u_42;
            t = (ATerm) ATmakeAppl(sym__2, f_118, i_118);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_118, i_118);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  ATerm e_119 (ATerm t)
  {
    ATerm w_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_111(t);
        ;
        LocalPopChoice(a_43);
      }
    else
      {
        t = w_42;
        {
          ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL;
          ATerm b_14 (ATerm t)
          {
            ATerm x_52 = NULL;
            x_52 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_52, not_null(d_119));
            t = e_119(t);
            return(t);
          }
          b_119 = t;
          if(match_cons(t, sym__2))
            {
              c_119 = ATgetArgument(t, 0);
              if(((d_119 != NULL) && (d_119 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                d_119 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_119;
          t = SRTS_all(b_14, t);
        }
      }
    return(t);
  }
  t = e_119(t);
  return(t);
}
ATerm rename_4_0 (ATerm x_121 (ATerm (ATerm), ATerm), ATerm y_121 (ATerm), ATerm z_121 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm a_122 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_119 = NULL;
  ATerm x_119 (ATerm t)
  {
    ATerm d_14 (ATerm t)
    {
      ATerm r_119 = NULL,s_119 = NULL,t_119 = NULL;
      r_119 = t;
      if(match_cons(t, sym__2))
        {
          s_119 = ATgetArgument(t, 0);
          t_119 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm h_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_14 (ATerm t)
            {
              ATerm w_119 = NULL;
              w_119 = t;
              t = (ATerm) ATmakeAppl(sym__2, w_119, t_119);
              t = lookup_0_0(t);
              return(t);
            }
            t = s_119;
            t = x_121(e_14, t);
            ;
            LocalPopChoice(k_43);
          }
        else
          {
            t = h_43;
            {
              ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
              t = r_119;
              t = q_11(y_121, a_122, s_119, t_119, t);
              if(match_cons(t, sym__3))
                {
                  l_53 = ATgetArgument(t, 0);
                  m_53 = ATgetArgument(t, 1);
                  n_53 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_11(x_119, z_121, l_53, m_53, n_53, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(d_14, t);
    return(t);
  }
  i_119 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_119, (ATerm) ATempty);
  t = x_119(t);
  return(t);
}
ATerm f_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
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
ATerm g_14 (ATerm t)
{
  ATerm y_55 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_43 = ATgetArgument(t, 0);
      if(((ATgetType(q_43) == AT_LIST) && !(ATisEmpty(q_43))))
        {
          y_55 = ATgetFirst((ATermList) q_43);
          d_56 = (ATerm) ATgetNext((ATermList) q_43);
        }
      else
        _fail(t);
      {
        ATerm r_43 = ATgetArgument(t, 1);
        if(((ATgetType(r_43) == AT_LIST) && !(ATisEmpty(r_43))))
          {
            e_56 = ATgetFirst((ATermList) r_43);
            f_56 = (ATerm) ATgetNext((ATermList) r_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_55, e_56), (ATerm) ATmakeAppl(sym__2, d_56, f_56));
  return(t);
}
ATerm h_14 (ATerm t)
{
  ATerm g_56 = NULL,h_56 = NULL;
  if(match_cons(t, sym__2))
    {
      g_56 = ATgetArgument(t, 0);
      h_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(h_56), g_56);
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm r_56 = NULL,z_56 = NULL,a_57 = NULL;
  if(match_cons(t, sym__2))
    {
      r_56 = ATgetArgument(t, 0);
      a_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_56;
  {
    ATerm s_43 = t;
    int t_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm u_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(t_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_57);
      }
    else
      {
        t = s_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm v_43 = ATgetArgument(t, 0);
            z_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, a_57, z_56);
      }
  }
  return(t);
}
ATerm k_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_43 = ATgetArgument(t, 0);
      if(((ATgetType(w_43) != AT_LIST) || !(ATisEmpty(w_43))))
        _fail(t);
      {
        ATerm x_43 = ATgetArgument(t, 1);
        if(((ATgetType(x_43) != AT_LIST) || !(ATisEmpty(x_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_14 (ATerm t)
{
  ATerm z_58 = NULL,b_59 = NULL,d_59 = NULL,e_59 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_43 = ATgetArgument(t, 0);
      if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
        {
          z_58 = ATgetFirst((ATermList) y_43);
          b_59 = (ATerm) ATgetNext((ATermList) y_43);
        }
      else
        _fail(t);
      {
        ATerm z_43 = ATgetArgument(t, 1);
        if(((ATgetType(z_43) == AT_LIST) && !(ATisEmpty(z_43))))
          {
            d_59 = ATgetFirst((ATermList) z_43);
            e_59 = (ATerm) ATgetNext((ATermList) z_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_58, d_59), (ATerm) ATmakeAppl(sym__2, b_59, e_59));
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  if(match_cons(t, sym__2))
    {
      f_59 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_59), f_59);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm k_59 = NULL,r_59 = NULL,s_59 = NULL;
  if(match_cons(t, sym__2))
    {
      k_59 = ATgetArgument(t, 0);
      s_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_59;
  {
    ATerm a_44 = t;
    int b_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm d_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(b_44);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_59);
      }
    else
      {
        t = a_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm e_44 = ATgetArgument(t, 0);
            r_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_59, r_59);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm r_124 (ATerm), ATerm t)
{
  ATerm g_123 = NULL,h_123 = NULL,i_123 = NULL,j_123 = NULL,k_123 = NULL;
  g_123 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_123 = ATgetArgument(t, 0);
      i_123 = ATgetArgument(t, 1);
      {
        ATerm b_54 = NULL,i_54 = NULL,u_14 = NULL;
        t = SSLgetAnnotations(g_123);
        b_54 = t;
        t = h_123;
        t = r_124(t);
        i_54 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, i_54, i_123);
        u_14 = t;
        t = SSLsetAnnotations(u_14, b_54);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_123 = ATgetArgument(t, 0);
          i_123 = ATgetArgument(t, 1);
          j_123 = ATgetArgument(t, 2);
          k_123 = ATgetArgument(t, 3);
          {
            ATerm i_55 = NULL,t_55 = NULL,u_55 = NULL,v_14 = NULL;
            t = SSLgetAnnotations(g_123);
            i_55 = t;
            t = j_123;
            t = r_124(t);
            u_55 = t;
            t = (ATerm) ATmakeAppl(sym__2, j_123, u_55);
            t = genzip_4_0(f_14, g_14, h_14, j_14, t);
            t_55 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, h_123, i_123, t_55, k_123);
            v_14 = t;
            t = SSLsetAnnotations(v_14, i_55);
          }
        }
      else
        {
          ATerm h_58 = NULL,s_58 = NULL,t_58 = NULL,a_15 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              h_123 = ATgetArgument(t, 0);
              i_123 = ATgetArgument(t, 1);
              j_123 = ATgetArgument(t, 2);
              k_123 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(g_123);
          h_58 = t;
          t = j_123;
          t = r_124(t);
          t_58 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_123, t_58);
          t = genzip_4_0(k_14, l_14, m_14, n_14, t);
          s_58 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, h_123, i_123, s_58, k_123);
          a_15 = t;
          t = SSLsetAnnotations(a_15, h_58);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm t)
{
  ATerm d_126 = NULL,e_126 = NULL,f_126 = NULL,g_126 = NULL,h_126 = NULL;
  g_126 = t;
  if(match_cons(t, sym_Scope_2))
    {
      h_126 = ATgetArgument(t, 0);
      d_126 = ATgetArgument(t, 1);
      {
        ATerm g_60 = NULL,j_60 = NULL,k_60 = NULL,e_15 = NULL;
        t = SSLgetAnnotations(g_126);
        g_60 = t;
        t = h_126;
        t = u_124(t);
        j_60 = t;
        t = d_126;
        t = s_124(t);
        k_60 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_60, k_60);
        e_15 = t;
        t = SSLsetAnnotations(e_15, g_60);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          h_126 = ATgetArgument(t, 0);
          d_126 = ATgetArgument(t, 1);
          e_126 = ATgetArgument(t, 2);
          f_126 = ATgetArgument(t, 3);
          {
            ATerm u_60 = NULL,z_60 = NULL,a_61 = NULL,b_61 = NULL,c_61 = NULL,f_15 = NULL;
            t = SSLgetAnnotations(g_126);
            u_60 = t;
            t = h_126;
            t = u_124(t);
            z_60 = t;
            t = d_126;
            t = u_124(t);
            a_61 = t;
            t = e_126;
            t = u_124(t);
            b_61 = t;
            t = f_126;
            t = s_124(t);
            c_61 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_60, a_61, b_61, c_61);
            f_15 = t;
            t = SSLsetAnnotations(f_15, u_60);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              h_126 = ATgetArgument(t, 0);
              d_126 = ATgetArgument(t, 1);
              e_126 = ATgetArgument(t, 2);
              f_126 = ATgetArgument(t, 3);
              {
                ATerm z_61 = NULL,i_62 = NULL,j_62 = NULL,n_62 = NULL,o_62 = NULL,g_15 = NULL;
                t = SSLgetAnnotations(g_126);
                z_61 = t;
                t = h_126;
                t = u_124(t);
                i_62 = t;
                t = d_126;
                t = u_124(t);
                j_62 = t;
                t = e_126;
                t = u_124(t);
                n_62 = t;
                t = f_126;
                t = s_124(t);
                o_62 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, i_62, j_62, n_62, o_62);
                g_15 = t;
                t = SSLsetAnnotations(g_15, z_61);
              }
            }
          else
            {
              ATerm x_62 = NULL,z_62 = NULL,h_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  h_126 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(g_126);
              x_62 = t;
              t = h_126;
              t = s_124(t);
              z_62 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, z_62);
              h_15 = t;
              t = SSLsetAnnotations(h_15, x_62);
            }
        }
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm p_126 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      p_126 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, p_126);
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm f_44 = t;
  int g_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(g_44);
    }
  else
    {
      t = f_44;
      {
        ATerm r_126 = NULL,s_126 = NULL,t_126 = NULL,v_126 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_126 = ATgetArgument(t, 0);
            t = r_126;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                r_126 = ATgetArgument(t, 0);
                s_126 = ATgetArgument(t, 1);
                t_126 = ATgetArgument(t, 2);
                v_126 = ATgetArgument(t, 3);
                t = t_126;
                t = map_1_0(q_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    r_126 = ATgetArgument(t, 0);
                    s_126 = ATgetArgument(t, 1);
                    t_126 = ATgetArgument(t, 2);
                    v_126 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = t_126;
                t = map_1_0(r_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm d_127 = NULL;
  ATerm j_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_127 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_44);
      t = d_127;
    }
  else
    {
      t = j_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_127;
    }
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm n_127 = NULL;
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_127 = ATgetArgument(t, 0);
          {
            ATerm x_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_44);
      t = n_127;
    }
  else
    {
      t = v_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_127 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_127;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(o_14, p_14, tboundin_3_0, t);
  return(t);
}
ATerm j_11 (ATerm t_103 (ATerm), ATerm k_30, ATerm j_30, ATerm t)
{
  ATerm f_128 (ATerm t)
  {
    ATerm a_128 = NULL,b_128 = NULL,c_128 = NULL;
    a_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_30;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_128 = ATgetFirst((ATermList) t);
            c_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm z_44 = t;
          int a_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_128;
              {
                ATerm t_14 (ATerm t)
                {
                  t = j_30;
                  return(t);
                }
                t = k_11(t_103, t_14, b_128, c_128, t);
                t = f_128(t);
              }
              ;
              LocalPopChoice(a_45);
            }
          else
            {
              t = z_44;
              {
                ATerm g_63 = NULL,j_63 = NULL,p_15 = NULL;
                t = SSLgetAnnotations(a_128);
                g_63 = t;
                t = c_128;
                t = f_128(t);
                j_63 = t;
                t = (ATerm) ATinsert(CheckATermList(j_63), b_128);
                p_15 = t;
                t = SSLsetAnnotations(p_15, g_63);
              }
            }
        }
      }
    return(t);
  }
  t = k_30;
  t = f_128(t);
  return(t);
}
ATerm foldr_3_0 (ATerm j_106 (ATerm), ATerm k_106 (ATerm), ATerm l_106 (ATerm), ATerm t)
{
  ATerm i_128 = NULL,j_128 = NULL,k_128 = NULL;
  i_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_128;
      t = j_106(t);
    }
  else
    {
      ATerm n_128 = NULL,o_128 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_128 = ATgetFirst((ATermList) t);
          k_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_128;
      t = l_106(t);
      n_128 = t;
      t = k_128;
      t = foldr_3_0(j_106, k_106, l_106, t);
      o_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_128, o_128);
      t = k_106(t);
    }
  return(t);
}
ATerm k_11 (ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm o_30, ATerm n_30, ATerm t)
{
  t = x_103(t);
  {
    ATerm w_14 (ATerm t)
    {
      ATerm r_128 = NULL;
      r_128 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_30, r_128);
      t = w_103(t);
      return(t);
    }
    t = fetch_1_0(w_14, t);
    t = n_30;
  }
  return(t);
}
ATerm l_11 (ATerm o_103 (ATerm), ATerm i_30, ATerm h_30, ATerm t)
{
  ATerm h_129 (ATerm t)
  {
    ATerm c_129 = NULL,d_129 = NULL,e_129 = NULL;
    c_129 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_129;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_129 = ATgetFirst((ATermList) t);
            e_129 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm c_45 = t;
          int d_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_129;
              {
                ATerm x_14 (ATerm t)
                {
                  t = h_30;
                  return(t);
                }
                t = k_11(o_103, x_14, d_129, e_129, t);
                t = h_129(t);
              }
              ;
              LocalPopChoice(d_45);
            }
          else
            {
              t = c_45;
              {
                ATerm r_63 = NULL,u_63 = NULL,r_15 = NULL;
                t = SSLgetAnnotations(c_129);
                r_63 = t;
                t = e_129;
                t = h_129(t);
                u_63 = t;
                t = (ATerm) ATinsert(CheckATermList(u_63), d_129);
                r_15 = t;
                t = SSLsetAnnotations(r_15, r_63);
              }
            }
        }
      }
    return(t);
  }
  t = i_30;
  t = h_129(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_100 (ATerm), ATerm t)
{
  ATerm d_130 (ATerm t)
  {
    ATerm a_130 = NULL,b_130 = NULL,c_130 = NULL;
    c_130 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_130 = ATgetFirst((ATermList) t);
        b_130 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_64 = NULL,h_64 = NULL,x_15 = NULL;
          t = SSLgetAnnotations(c_130);
          c_64 = t;
          t = b_130;
          t = d_130(t);
          h_64 = t;
          t = (ATerm) ATinsert(CheckATermList(h_64), a_130);
          x_15 = t;
          t = SSLsetAnnotations(x_15, c_64);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = c_130;
        t = f_100(t);
      }
    return(t);
  }
  t = d_130(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_129 = NULL,l_129 = NULL,m_129 = NULL;
  k_129 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_129;
    }
  else
    {
      ATerm y_14 (ATerm t)
      {
        t = not_null(m_129);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_129 = ATgetFirst((ATermList) t);
          if(((m_129 != NULL) && (m_129 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            m_129 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_129;
      t = at_end_1_0(y_14, t);
    }
  return(t);
}
ATerm p_130 (ATerm h_130, ATerm t)
{
  ATerm i_130 = NULL;
  t = SSL_explode_term(h_130);
  if(match_cons(t, sym__2))
    {
      ATerm e_45 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_45) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      i_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_130;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm k_130 = NULL,l_130 = NULL,m_130 = NULL;
  m_130 = t;
  if(match_cons(t, sym__2))
    {
      k_130 = ATgetArgument(t, 0);
      l_130 = ATgetArgument(t, 1);
      {
        ATerm f_45 = t;
        int g_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_14 (ATerm t)
            {
              t = l_130;
              return(t);
            }
            t = k_130;
            t = at_end_1_0(z_14, t);
            ;
            LocalPopChoice(g_45);
          }
        else
          {
            t = f_45;
            t = p_130(m_130, t);
          }
      }
    }
  else
    {
      t = p_130(m_130, t);
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm h_45 = ATgetArgument(t, 0);
      if(((ATgetType(h_45) != AT_LIST) || !(ATisEmpty(h_45))))
        _fail(t);
      {
        ATerm i_45 = ATgetArgument(t, 1);
        if(((ATgetType(i_45) != AT_LIST) || !(ATisEmpty(i_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm w_130 = NULL,x_130 = NULL,y_130 = NULL,z_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_45 = ATgetArgument(t, 0);
      if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
        {
          w_130 = ATgetFirst((ATermList) j_45);
          x_130 = (ATerm) ATgetNext((ATermList) j_45);
        }
      else
        _fail(t);
      {
        ATerm k_45 = ATgetArgument(t, 1);
        if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
          {
            y_130 = ATgetFirst((ATermList) k_45);
            z_130 = (ATerm) ATgetNext((ATermList) k_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, w_130, y_130), (ATerm) ATmakeAppl(sym__2, x_130, z_130));
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm a_131 = NULL,b_131 = NULL;
  if(match_cons(t, sym__2))
    {
      a_131 = ATgetArgument(t, 0);
      b_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_131), a_131);
  return(t);
}
ATerm n_11 (ATerm w_652, ATerm b_653, ATerm e_66, ATerm t)
{
  ATerm r_130 = NULL,s_130 = NULL,t_130 = NULL,u_130 = NULL;
  t = SSL_explode_term(b_653);
  if(match_cons(t, sym__2))
    {
      r_130 = ATgetArgument(t, 0);
      t_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_652);
  if(match_cons(t, sym__2))
    {
      if((r_130 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      s_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_130, t_130);
  t = genzip_4_0(b_15, c_15, d_15, _id, t);
  u_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_130, e_66);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm b_109 (ATerm), ATerm c_109 (ATerm), ATerm t)
{
  ATerm d_131 (ATerm t)
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_109(t);
        ;
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = c_109(t);
        t = d_131(t);
      }
    return(t);
  }
  t = d_131(t);
  return(t);
}
ATerm for_3_0 (ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm g_109 (ATerm), ATerm t)
{
  t = e_109(t);
  t = while_not_2_0(f_109, g_109, t);
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm k_131 = NULL;
  k_131 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, k_131);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm l_131 = NULL,m_131 = NULL,n_131 = NULL,o_131 = NULL,z_15 = NULL;
  o_131 = t;
  if(match_cons(t, sym__2))
    {
      m_131 = ATgetArgument(t, 0);
      n_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_131);
  l_131 = t;
  t = n_131;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_131, n_131);
  z_15 = t;
  t = SSLsetAnnotations(z_15, l_131);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm h_132 = NULL,i_132 = NULL,j_132 = NULL,k_132 = NULL,l_132 = NULL;
  h_132 = t;
  if(match_cons(t, sym__2))
    {
      i_132 = ATgetArgument(t, 0);
      j_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_132;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_132 = ATgetFirst((ATermList) t);
      l_132 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_45 = t;
        int o_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_132(i_132, j_132, h_132, t);
            ;
            LocalPopChoice(o_45);
          }
        else
          {
            t = n_45;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_132), k_132), l_132);
          }
      }
    }
  else
    {
      t = v_132(i_132, j_132, h_132, t);
    }
  return(t);
}
ATerm v_132 (ATerm p_131, ATerm q_131, ATerm r_131, ATerm t)
{
  ATerm s_131 = NULL,v_131 = NULL,a_16 = NULL,y_131 = NULL,z_131 = NULL,a_132 = NULL,b_132 = NULL;
  t = SSLgetAnnotations(r_131);
  s_131 = t;
  t = q_131;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_131 = ATgetFirst((ATermList) t);
      b_132 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_131;
  if(match_cons(t, sym__2))
    {
      z_131 = ATgetArgument(t, 0);
      a_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_45 = t;
    int q_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_132;
        if((z_131 != t))
          {
            _fail(t);
          }
        t = b_132;
        ;
        LocalPopChoice(q_45);
      }
    else
      {
        t = p_45;
        t = q_131;
        t = n_11(z_131, a_132, b_132, t);
      }
    v_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_131, v_131);
    a_16 = t;
    t = SSLsetAnnotations(a_16, s_131);
  }
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm u_132 = NULL;
  if(match_cons(t, sym__2))
    {
      u_132 = ATgetArgument(t, 0);
      if((u_132 != ATgetArgument(t, 1)))
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
  ATerm r_45 = t;
  int s_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(j_15, k_15, l_15, t);
      ;
      LocalPopChoice(s_45);
    }
  else
    {
      t = r_45;
      {
        ATerm p_132 = NULL,q_132 = NULL,r_132 = NULL;
        p_132 = t;
        if(match_cons(t, sym__2))
          {
            q_132 = ATgetArgument(t, 0);
            r_132 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_132;
        t = l_11(m_15, q_132, r_132, t);
      }
    }
  return(t);
}
ATerm o_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_15 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL;
  if(match_cons(t, sym__2))
    {
      a_65 = ATgetArgument(t, 0);
      b_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(t_15, a_65, b_65, t);
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm c_65 = NULL;
  if(match_cons(t, sym__2))
    {
      c_65 = ATgetArgument(t, 0);
      if((c_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm m_65 = NULL,n_65 = NULL;
  if(match_cons(t, sym__2))
    {
      m_65 = ATgetArgument(t, 0);
      n_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_11(w_15, m_65, n_65, t);
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm y_65 = NULL;
  if(match_cons(t, sym__2))
    {
      y_65 = ATgetArgument(t, 0);
      if((y_65 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm n_123 (ATerm), ATerm o_123 (ATerm), ATerm p_123 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_133 (ATerm t)
  {
    ATerm u_45 = t;
    int v_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_123(t);
        ;
        LocalPopChoice(v_45);
      }
    else
      {
        t = u_45;
        {
          ATerm w_45 = t;
          int x_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_132 = NULL,y_132 = NULL,p_64 = NULL,t_64 = NULL;
              x_132 = t;
              t = o_123(t);
              y_132 = t;
              t = x_132;
              {
                ATerm n_15 (ATerm t)
                {
                  ATerm a_133 = NULL;
                  t = j_133(t);
                  a_133 = t;
                  t = (ATerm) ATmakeAppl(sym__2, a_133, y_132);
                  t = diff_0_0(t);
                  return(t);
                }
                t = p_123(n_15, j_133, o_15, t);
                t_64 = t;
                t = SSL_explode_term(t_64);
                if(match_cons(t, sym__2))
                  {
                    ATerm y_45 = ATgetArgument(t, 0);
                    p_64 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = p_64;
                t = foldr_3_0(q_15, s_15, _id, t);
              }
              ;
              LocalPopChoice(x_45);
            }
          else
            {
              t = w_45;
              {
                ATerm h_65 = NULL,i_65 = NULL;
                i_65 = t;
                t = SSL_explode_term(i_65);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_45 = ATgetArgument(t, 0);
                    h_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = h_65;
                t = foldr_3_0(u_15, v_15, j_133, t);
              }
            }
        }
      }
    return(t);
  }
  t = j_133(t);
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm w_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_133);
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm b_46 = t;
  int d_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_46);
    }
  else
    {
      t = b_46;
      {
        ATerm y_133 = NULL,z_133 = NULL,a_134 = NULL,b_134 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_133 = ATgetArgument(t, 0);
            t = y_133;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                y_133 = ATgetArgument(t, 0);
                z_133 = ATgetArgument(t, 1);
                a_134 = ATgetArgument(t, 2);
                b_134 = ATgetArgument(t, 3);
                t = a_134;
                t = map_1_0(c_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    y_133 = ATgetArgument(t, 0);
                    z_133 = ATgetArgument(t, 1);
                    a_134 = ATgetArgument(t, 2);
                    b_134 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = a_134;
                t = map_1_0(e_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm c_16 (ATerm t)
{
  ATerm j_134 = NULL;
  ATerm k_46 = t;
  int m_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_134 = ATgetArgument(t, 0);
          {
            ATerm p_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_46);
      t = j_134;
    }
  else
    {
      t = k_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_134;
    }
  return(t);
}
ATerm e_16 (ATerm t)
{
  ATerm s_134 = NULL;
  ATerm q_46 = t;
  int r_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_134 = ATgetArgument(t, 0);
          {
            ATerm s_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_46);
      t = s_134;
    }
  else
    {
      t = q_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_134;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm p_133 = NULL,t_133 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      t_133 = ATgetArgument(t, 0);
      t = t_133;
      if(match_cons(t, sym_Rule_3))
        {
          p_133 = ATgetArgument(t, 0);
          {
            ATerm t_46 = ATgetArgument(t, 1);
          }
          {
            ATerm u_46 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = p_133;
      t = free_vars_3_0(y_15, b_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          t_133 = ATgetArgument(t, 0);
          {
            ATerm v_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = t_133;
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_82 (ATerm), ATerm t)
{
  ATerm w_134 = NULL,x_134 = NULL,y_134 = NULL,z_134 = NULL,d_16 = NULL;
  z_134 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_134 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_134);
  w_134 = t;
  t = x_134;
  t = b_82(t);
  y_134 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, y_134);
  d_16 = t;
  t = SSLsetAnnotations(d_16, w_134);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm w_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_46);
    }
  else
    {
      t = w_46;
      {
        ATerm i_135 = NULL,j_135 = NULL,k_135 = NULL,l_135 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            i_135 = ATgetArgument(t, 0);
            j_135 = ATgetArgument(t, 1);
            k_135 = ATgetArgument(t, 2);
            l_135 = ATgetArgument(t, 3);
            t = k_135;
            t = map_1_0(i_16, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                i_135 = ATgetArgument(t, 0);
                j_135 = ATgetArgument(t, 1);
                k_135 = ATgetArgument(t, 2);
                l_135 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = k_135;
            t = map_1_0(n_16, t);
          }
      }
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm s_135 = NULL;
  ATerm a_47 = t;
  int b_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_135 = ATgetArgument(t, 0);
          {
            ATerm c_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(b_47);
      t = s_135;
    }
  else
    {
      t = a_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_135;
    }
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm b_136 = NULL;
  ATerm d_47 = t;
  int g_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_136 = ATgetArgument(t, 0);
          {
            ATerm j_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_47);
      t = b_136;
    }
  else
    {
      t = d_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_136;
    }
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm e_136 = NULL,f_136 = NULL,g_136 = NULL,h_136 = NULL,i_136 = NULL;
  e_136 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_136 = ATgetArgument(t, 0);
      g_136 = ATgetArgument(t, 1);
      t = e_136;
      t = e_11(f_136, g_136, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_136 = ATgetArgument(t, 0);
          g_136 = ATgetArgument(t, 1);
          h_136 = ATgetArgument(t, 2);
          t = g_136;
          t = map_1_0(p_16, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              f_136 = ATgetArgument(t, 0);
              g_136 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, f_136);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  f_136 = ATgetArgument(t, 0);
                  g_136 = ATgetArgument(t, 1);
                  h_136 = ATgetArgument(t, 2);
                  i_136 = ATgetArgument(t, 3);
                  t = g_136;
                  t = map_1_0(q_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      f_136 = ATgetArgument(t, 0);
                      g_136 = ATgetArgument(t, 1);
                      h_136 = ATgetArgument(t, 2);
                      i_136 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = g_136;
                  t = map_1_0(r_16, t);
                }
            }
        }
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm q_136 = NULL;
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_136 = ATgetArgument(t, 0);
          {
            ATerm o_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(n_47);
      t = q_136;
    }
  else
    {
      t = m_47;
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
ATerm q_16 (ATerm t)
{
  ATerm b_137 = NULL;
  ATerm p_47 = t;
  int q_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_137 = ATgetArgument(t, 0);
          {
            ATerm t_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_47);
      t = b_137;
    }
  else
    {
      t = p_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_137;
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm k_137 = NULL;
  ATerm w_47 = t;
  int y_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_137 = ATgetArgument(t, 0);
          {
            ATerm a_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_47);
      t = k_137;
    }
  else
    {
      t = w_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_137;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, g_16, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, o_16, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm w_11 (ATerm o_36, ATerm q_36, ATerm t)
{
  ATerm n_137 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, o_36, q_36);
  t = l_12(o_36, q_36, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_137 = ATgetFirst((ATermList) t);
      {
        ATerm b_48 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_137;
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm k_138 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      k_138 = ATgetArgument(t, 0);
      {
        ATerm c_48 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = k_138;
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm l_138 = NULL,n_138 = NULL,o_138 = NULL,p_138 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      n_138 = ATgetArgument(t, 0);
      p_138 = ATgetArgument(t, 1);
      l_138 = ATgetArgument(t, 2);
      t = n_138;
      if(match_cons(t, sym_SVar_1))
        {
          o_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_138;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          n_138 = ATgetArgument(t, 0);
          p_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_138;
      if(match_cons(t, sym_SVar_1))
        {
          o_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_138;
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm t_138 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      t_138 = ATgetArgument(t, 0);
      {
        ATerm d_48 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = t_138;
  return(t);
}
ATerm a_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_48 = ATgetArgument(t, 0);
      if(((ATgetType(e_48) != AT_LIST) || !(ATisEmpty(e_48))))
        _fail(t);
      {
        ATerm f_48 = ATgetArgument(t, 1);
        if(((ATgetType(f_48) != AT_LIST) || !(ATisEmpty(f_48))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_17 (ATerm t)
{
  ATerm u_138 = NULL,v_138 = NULL,w_138 = NULL,x_138 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_48 = ATgetArgument(t, 0);
      if(((ATgetType(h_48) == AT_LIST) && !(ATisEmpty(h_48))))
        {
          u_138 = ATgetFirst((ATermList) h_48);
          v_138 = (ATerm) ATgetNext((ATermList) h_48);
        }
      else
        _fail(t);
      {
        ATerm i_48 = ATgetArgument(t, 1);
        if(((ATgetType(i_48) == AT_LIST) && !(ATisEmpty(i_48))))
          {
            w_138 = ATgetFirst((ATermList) i_48);
            x_138 = (ATerm) ATgetNext((ATermList) i_48);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_138, w_138), (ATerm) ATmakeAppl(sym__2, v_138, x_138));
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm y_138 = NULL,z_138 = NULL;
  if(match_cons(t, sym__2))
    {
      y_138 = ATgetArgument(t, 0);
      z_138 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_138), y_138);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm a_139 = NULL,b_139 = NULL;
  if(match_cons(t, sym__2))
    {
      a_139 = ATgetArgument(t, 0);
      b_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, a_139), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_139)));
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm x_137 = NULL,y_137 = NULL,z_137 = NULL,a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,i_138 = NULL,j_138 = NULL,z_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_48 = ATgetArgument(t, 0);
      if(match_cons(k_48, sym_SVar_1))
        {
          z_137 = ATgetArgument(k_48, 0);
        }
      else
        _fail(t);
      b_138 = ATgetArgument(t, 1);
      f_138 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_137), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  z_65 = t;
  t = term_l_48;
  a_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_48, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, z_137), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = w_11(a_66, z_65, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_48) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      x_137 = ATgetArgument(t, 1);
      y_137 = ATgetArgument(t, 2);
      e_138 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, z_137, x_137, e_138, y_137);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((z_137 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_138 = ATgetArgument(t, 1);
      {
        ATerm p_48 = ATgetArgument(t, 2);
      }
      c_138 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_138;
  t = map_1_0(s_16, t);
  j_138 = t;
  t = (ATerm) ATmakeAppl(sym__3, j_138, b_138, c_138);
  t = substitute_2_0(t_16, _id, t);
  d_138 = t;
  t = e_138;
  t = map_1_0(z_16, t);
  g_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_138, g_138);
  t = genzip_4_0(a_17, b_17, c_17, e_17, t);
  i_138 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_138, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_138), d_138));
  t = downup_1_0(f_17, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL;
  k_139 = t;
  t = term_s_21;
  l_139 = t;
  t = (ATerm) ATinsert(ATempty, term_q_48);
  m_139 = t;
  t = SSL_printnl(l_139, m_139);
  t = k_139;
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = debug_1_0(j_17, t);
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = term_r_48;
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm u_139 = NULL,v_139 = NULL,w_139 = NULL;
  u_139 = t;
  t = term_s_21;
  v_139 = t;
  t = (ATerm) ATinsert(ATempty, term_s_48);
  w_139 = t;
  t = SSL_printnl(v_139, w_139);
  t = u_139;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm i_139 = NULL,j_139 = NULL;
  j_139 = t;
  t = new_0_0(t);
  i_139 = t;
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_48, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_139), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        t = if_verbose2_1_0(g_17, t);
        _fail(t);
      }
    {
      ATerm y_48 = t;
      int z_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_139 = NULL,o_139 = NULL,p_139 = NULL,q_139 = NULL,r_139 = NULL,s_139 = NULL,t_139 = NULL;
          n_139 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              o_139 = ATgetArgument(t, 0);
              t_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_139;
          if(match_cons(t, sym_CallT_3))
            {
              p_139 = ATgetArgument(t, 0);
              r_139 = ATgetArgument(t, 1);
              s_139 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = p_139;
          if(match_cons(t, sym_SVar_1))
            {
              q_139 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_139;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = q_139;
          if((i_139 != t))
            {
              _fail(t);
            }
          t = n_139;
          ;
          LocalPopChoice(z_48);
        }
      else
        {
          t = y_48;
          t = if_verbose1_1_0(h_17, t);
          _fail(t);
        }
      t = if_verbose2_1_0(k_17, t);
      t = j_139;
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
ATerm x_11 (ATerm t_107 (ATerm), ATerm p_35, ATerm l_35, ATerm t)
{
  ATerm x_139 = NULL,y_139 = NULL,z_139 = NULL,a_140 = NULL,b_140 = NULL,c_140 = NULL;
  a_140 = t;
  t = t_107(t);
  x_139 = t;
  t = (ATerm) ATmakeAppl(sym__3, x_139, p_35, l_35);
  t = m_12(x_139, p_35, l_35, t);
  {
    ATerm a_49 = t;
    int c_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_140 = NULL;
        t = term_l_28;
        d_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_139, term_l_28);
        t = l_12(x_139, d_140, t);
        ;
        LocalPopChoice(c_49);
      }
    else
      {
        t = a_49;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_139 = ATgetFirst((ATermList) t);
        z_139 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_28;
    b_140 = t;
    t = (ATerm) ATinsert(CheckATermList(z_139), (ATerm) ATinsert(CheckATermList(y_139), p_35));
    c_140 = t;
    t = SSL_table_put(x_139, b_140, c_140);
    t = a_140;
  }
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_l_48;
  return(t);
}
ATerm y_11 (ATerm y_19, ATerm z_19, ATerm b_20, ATerm a_20, ATerm t)
{
  ATerm e_140 = NULL,f_140 = NULL,g_140 = NULL;
  e_140 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_19), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  f_140 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_d_49, z_19, a_20, b_20);
  g_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_19), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_d_49, z_19, a_20, b_20));
  t = x_11(l_17, f_140, g_140, t);
  t = e_140;
  return(t);
}
ATerm map_1_0 (ATerm p_99 (ATerm), ATerm t)
{
  ATerm v_140 (ATerm t)
  {
    ATerm s_140 = NULL,t_140 = NULL,u_140 = NULL;
    s_140 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_140;
      }
    else
      {
        ATerm h_66 = NULL,o_66 = NULL,p_66 = NULL,f_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_140 = ATgetFirst((ATermList) t);
            u_140 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_140);
        h_66 = t;
        t = t_140;
        t = p_99(t);
        o_66 = t;
        t = u_140;
        t = v_140(t);
        p_66 = t;
        t = (ATerm) ATinsert(CheckATermList(p_66), o_66);
        f_16 = t;
        t = SSLsetAnnotations(f_16, h_66);
      }
    return(t);
  }
  t = v_140(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_80 (ATerm), ATerm v_80 (ATerm), ATerm t)
{
  ATerm x_140 = NULL,y_140 = NULL,z_140 = NULL,a_141 = NULL,b_141 = NULL,c_141 = NULL,h_16 = NULL;
  c_141 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_140 = ATgetFirst((ATermList) t);
      z_140 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_141);
  x_140 = t;
  t = y_140;
  t = u_80(t);
  a_141 = t;
  t = z_140;
  t = v_80(t);
  b_141 = t;
  t = (ATerm) ATinsert(CheckATermList(b_141), a_141);
  h_16 = t;
  t = SSLsetAnnotations(h_16, x_140);
  return(t);
}
ATerm b_12 (ATerm c_54, ATerm d_54, ATerm t)
{
  ATerm d_141 = NULL;
  t = SSL_fputc(c_54, d_54);
  d_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_141);
  return(t);
}
ATerm c_12 (ATerm q_57, ATerm r_57, ATerm t)
{
  ATerm e_141 = NULL;
  t = SSL_write_term_to_stream_text(q_57, r_57);
  e_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_141);
  return(t);
}
ATerm f_12 (ATerm o_115 (ATerm), ATerm d_523, ATerm u_57, ATerm t)
{
  ATerm f_141 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_523, term_e_49);
  t = open_stream_0_0(t);
  f_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_141, u_57);
  t = o_115(t);
  t = fclose_0_0(t);
  t = u_57;
  return(t);
}
ATerm d_12 (ATerm m_57, ATerm n_57, ATerm t)
{
  ATerm g_141 = NULL;
  t = SSL_write_term_to_stream_baf(m_57, n_57);
  g_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_141);
  return(t);
}
ATerm p_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm q_17 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_49 = ATgetArgument(t, 0);
      if(match_cons(f_49, sym_Stream_1))
        {
          i_67 = ATgetArgument(f_49, 0);
        }
      else
        _fail(t);
      j_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_12(i_67, j_67, t);
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_49 = ATgetArgument(t, 0);
      if(match_cons(g_49, sym_Stream_1))
        {
          x_67 = ATgetArgument(g_49, 0);
        }
      else
        _fail(t);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_12(x_67, y_67, t);
  u_67 = t;
  t = term_h_49;
  v_67 = t;
  t = u_67;
  if(match_cons(t, sym_Stream_1))
    {
      w_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_49, u_67);
  t = b_12(v_67, w_67, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_141 = NULL,l_141 = NULL,m_141 = NULL,n_141 = NULL,o_141 = NULL,q_141 = NULL,r_141 = NULL,s_141 = NULL,t_141 = NULL,u_141 = NULL,u_142 = NULL,v_142 = NULL,k_16 = NULL,j_16 = NULL;
  l_141 = t;
  if(match_cons(t, sym__2))
    {
      s_141 = ATgetArgument(t, 0);
      t_141 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_141);
  r_141 = t;
  t = s_141;
  {
    ATerm i_49 = t;
    int k_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_141 != NULL) && (k_141 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_141 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(o_17, t);
        ;
        LocalPopChoice(k_49);
      }
    else
      {
        t = i_49;
        t = term_l_49;
        k_141 = t;
      }
    u_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_141, t_141);
    j_16 = t;
    t = SSLsetAnnotations(j_16, r_141);
    t = l_141;
    if(match_cons(t, sym__2))
      {
        n_141 = ATgetArgument(t, 0);
        o_141 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_141);
    m_141 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_141, (ATerm) ATmakeAppl(sym__2, not_null(k_141), o_141));
    k_16 = t;
    t = SSLsetAnnotations(k_16, m_141);
    q_141 = t;
    if(match_cons(t, sym__2))
      {
        u_142 = ATgetArgument(t, 0);
        v_142 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_67 = NULL,e_67 = NULL,f_67 = NULL,g_67 = NULL,h_67 = NULL,l_16 = NULL;
          t = SSLgetAnnotations(q_141);
          b_67 = t;
          t = u_142;
          t = fetch_1_0(p_17, t);
          e_67 = t;
          t = v_142;
          if(match_cons(t, sym__2))
            {
              g_67 = ATgetArgument(t, 0);
              h_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_12(q_17, g_67, h_67, t);
          f_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_67, f_67);
          l_16 = t;
          t = SSLsetAnnotations(l_16, b_67);
          ;
          LocalPopChoice(o_49);
        }
      else
        {
          t = m_49;
          {
            ATerm o_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL,m_16 = NULL;
            t = SSLgetAnnotations(q_141);
            o_67 = t;
            t = v_142;
            if(match_cons(t, sym__2))
              {
                s_67 = ATgetArgument(t, 0);
                t_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_12(r_17, s_67, t_67, t);
            r_67 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_142, r_67);
            m_16 = t;
            t = SSLsetAnnotations(m_16, o_67);
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
ATerm apply_strategy_1_0 (ATerm a_117 (ATerm), ATerm t)
{
  ATerm y_142 = NULL,z_142 = NULL,a_143 = NULL,b_143 = NULL,c_143 = NULL;
  c_143 = t;
  t = dtime_0_0(t);
  t = c_143;
  t = a_117(t);
  b_143 = t;
  t = dtime_0_0(t);
  y_142 = t;
  t = b_143;
  if(match_cons(t, sym__2))
    {
      z_142 = ATgetArgument(t, 0);
      a_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_142), (ATerm) ATmakeAppl(sym_Runtime_1, y_142)), a_143);
  return(t);
}
ATerm q_143 (ATerm k_143, ATerm t)
{
  t = SSL_fclose(k_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm n_143 = NULL,o_143 = NULL;
  o_143 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_143 = ATgetArgument(t, 0);
      {
        ATerm p_49 = t;
        int q_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(n_143);
            ;
            LocalPopChoice(q_49);
          }
        else
          {
            t = p_49;
            t = q_143(o_143, t);
          }
      }
    }
  else
    {
      t = q_143(o_143, t);
    }
  return(t);
}
ATerm g_12 (ATerm s_57, ATerm t)
{
  t = SSL_read_term_from_stream(s_57);
  return(t);
}
ATerm i_12 (ATerm e_54, ATerm f_54, ATerm t)
{
  ATerm r_143 = NULL;
  t = SSL_fopen(e_54, f_54);
  r_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_143);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_143 = NULL;
  t = SSL_stdin_stream();
  s_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_143);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_143 = NULL;
  t = SSL_stdout_stream();
  t_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_143);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_143 = NULL;
  t = SSL_stderr_stream();
  u_143 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_143);
  return(t);
}
ATerm b_145 (ATerm a_144, ATerm t)
{
  ATerm b_144 = NULL;
  t = SSL_explode_term(a_144);
  if(match_cons(t, sym__2))
    {
      ATerm r_49 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_49) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_49 = ATgetArgument(t, 1);
        if(((ATgetType(s_49) == AT_LIST) && !(ATisEmpty(s_49))))
          {
            b_144 = ATgetFirst((ATermList) s_49);
            {
              ATerm t_49 = (ATerm) ATgetNext((ATermList) s_49);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_144;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_144;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_144;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_144;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_145 (ATerm e_144, ATerm f_144, ATerm g_144, ATerm t)
{
  ATerm h_144 = NULL,i_144 = NULL,j_144 = NULL,m_144 = NULL,d_17 = NULL;
  t = SSLgetAnnotations(g_144);
  j_144 = t;
  t = e_144;
  if(match_cons(t, sym_Path_1))
    {
      m_144 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_144, f_144);
  d_17 = t;
  t = SSLsetAnnotations(d_17, j_144);
  if(match_cons(t, sym__2))
    {
      h_144 = ATgetArgument(t, 0);
      i_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(h_144, i_144, t);
  return(t);
}
ATerm d_145 (ATerm o_144, ATerm p_144, ATerm q_144, ATerm t)
{
  ATerm r_144 = NULL,s_144 = NULL,t_144 = NULL,w_144 = NULL,i_17 = NULL;
  t = SSLgetAnnotations(q_144);
  t_144 = t;
  t = SSL_is_string(o_144);
  w_144 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_144, p_144);
  i_17 = t;
  t = SSLsetAnnotations(i_17, t_144);
  if(match_cons(t, sym__2))
    {
      r_144 = ATgetArgument(t, 0);
      s_144 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_12(r_144, s_144, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm y_144 = NULL,z_144 = NULL,a_145 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_49 = ATgetArgument(t, 0);
      ATerm z_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  y_144 = t;
  if(match_cons(t, sym__2))
    {
      z_144 = ATgetArgument(t, 0);
      a_145 = ATgetArgument(t, 1);
      {
        ATerm b_50 = t;
        int c_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_145(y_144, t);
            ;
            LocalPopChoice(c_50);
          }
        else
          {
            t = b_50;
            {
              ATerm d_50 = t;
              int e_50 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_145(z_144, a_145, y_144, t);
                  ;
                  LocalPopChoice(e_50);
                }
              else
                {
                  t = d_50;
                  t = d_145(z_144, a_145, y_144, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_145(y_144, t);
    }
  return(t);
}
ATerm w_17 (ATerm t)
{
  t = term_f_50;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_145 = NULL,f_145 = NULL,g_145 = NULL;
  ATerm g_50 = t;
  int h_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_145 = NULL;
      h_145 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_145, term_i_50);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(h_50);
    }
  else
    {
      t = g_50;
      t = debug_1_0(w_17, t);
      _fail(t);
    }
  f_145 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_12(g_145, t);
  e_145 = t;
  t = f_145;
  t = fclose_0_0(t);
  t = e_145;
  return(t);
}
ATerm fetch_1_0 (ATerm z_99 (ATerm), ATerm t)
{
  ATerm f_146 (ATerm t)
  {
    ATerm c_146 = NULL,d_146 = NULL,e_146 = NULL;
    c_146 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_146 = ATgetFirst((ATermList) t);
        e_146 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_50 = t;
      int k_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_68 = NULL,n_68 = NULL,m_17 = NULL;
          t = SSLgetAnnotations(c_146);
          k_68 = t;
          t = d_146;
          t = z_99(t);
          n_68 = t;
          t = (ATerm) ATinsert(CheckATermList(e_146), n_68);
          m_17 = t;
          t = SSLsetAnnotations(m_17, k_68);
          ;
          LocalPopChoice(k_50);
        }
      else
        {
          t = j_50;
          {
            ATerm v_68 = NULL,y_68 = NULL,n_17 = NULL;
            t = SSLgetAnnotations(c_146);
            v_68 = t;
            t = e_146;
            t = f_146(t);
            y_68 = t;
            t = (ATerm) ATinsert(CheckATermList(y_68), d_146);
            n_17 = t;
            t = SSLsetAnnotations(n_17, v_68);
          }
        }
    }
    return(t);
  }
  t = f_146(t);
  return(t);
}
ATerm a_12 (ATerm u_51, ATerm v_51, ATerm t)
{
  t = SSL_strcat(u_51, v_51);
  return(t);
}
ATerm debug_1_0 (ATerm m_115 (ATerm), ATerm t)
{
  ATerm i_146 = NULL,j_146 = NULL,k_146 = NULL,l_146 = NULL;
  i_146 = t;
  t = m_115(t);
  j_146 = t;
  t = term_s_21;
  k_146 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_146), j_146);
  l_146 = t;
  t = SSL_printnl(k_146, l_146);
  t = i_146;
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm l_50 = t;
  int m_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(m_50);
    }
  else
    {
      t = l_50;
    }
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = term_n_50;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm o_50 = t;
  int p_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_146 = NULL;
      s_146 = t;
      t = SSL_is_string(s_146);
      ;
      LocalPopChoice(p_50);
    }
  else
    {
      t = o_50;
      {
        ATerm q_50 = t;
        int r_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(x_17, t);
            ;
            LocalPopChoice(r_50);
          }
        else
          {
            t = q_50;
            {
              ATerm y_146 = NULL,z_146 = NULL,a_147 = NULL;
              y_146 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_146 = ATgetArgument(t, 0);
                  t = z_146;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_146 = ATgetArgument(t, 0);
                      t = z_146;
                      {
                        ATerm s_50 = t;
                        int t_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_50);
                          }
                        else
                          {
                            t = s_50;
                            t = debug_1_0(z_17, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_147 = NULL,f_147 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_146 = ATgetArgument(t, 0);
                          a_147 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_146;
                      t = eval_config_0_0(t);
                      e_147 = t;
                      t = a_147;
                      t = eval_config_0_0(t);
                      f_147 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_147, f_147);
                      t = a_12(e_147, f_147, t);
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
  ATerm j_147 = NULL,k_147 = NULL;
  j_147 = t;
  t = term_y_50;
  k_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_50, j_147);
  t = l_12(k_147, j_147, t);
  {
    ATerm z_50 = t;
    int b_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_147 = NULL,m_147 = NULL;
        t = eval_config_0_0(t);
        l_147 = t;
        t = term_y_50;
        m_147 = t;
        t = SSL_table_put(m_147, j_147, l_147);
        t = l_147;
        ;
        LocalPopChoice(b_51);
      }
    else
      {
        t = z_50;
      }
  }
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm q_147 = NULL;
  q_147 = t;
  if(match_string(t, "-k"))
    {
      t = q_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_147;
    }
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL,t_147 = NULL;
  r_147 = t;
  t = SSL_string_to_int(r_147);
  s_147 = t;
  t = term_c_51;
  t_147 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_51, s_147);
  t = o_12(t_147, s_147, t);
  t = r_147;
  return(t);
}
ATerm e_18 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_18, d_18, e_18, t);
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm v_147 = NULL;
  v_147 = t;
  if(match_string(t, "-S"))
    {
      t = v_147;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_147;
    }
  return(t);
}
ATerm h_18 (ATerm t)
{
  ATerm w_147 = NULL,x_147 = NULL;
  t = term_z_21;
  w_147 = t;
  t = term_f_51;
  x_147 = t;
  t = term_k_51;
  t = o_12(w_147, x_147, t);
  t = term_l_51;
  return(t);
}
ATerm j_18 (ATerm t)
{
  t = term_m_51;
  return(t);
}
ATerm l_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm y_147 = NULL,z_147 = NULL,a_148 = NULL;
  y_147 = t;
  t = SSL_string_to_int(y_147);
  z_147 = t;
  t = term_z_21;
  a_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_21, z_147);
  t = o_12(a_148, z_147, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, y_147);
  return(t);
}
ATerm s_18 (ATerm t)
{
  t = term_n_51;
  return(t);
}
ATerm t_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm b_148 = NULL,c_148 = NULL;
  t = term_o_51;
  b_148 = t;
  t = term_r_21;
  c_148 = t;
  t = term_p_51;
  t = o_12(b_148, c_148, t);
  t = term_q_51;
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_r_51;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_51 = t;
  int t_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_18, h_18, j_18, t);
      ;
      LocalPopChoice(t_51);
    }
  else
    {
      t = s_51;
      {
        ATerm x_51 = t;
        int y_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_18, r_18, s_18, t);
            ;
            LocalPopChoice(y_51);
          }
        else
          {
            t = x_51;
            t = Option_3_0(t_18, u_18, v_18, t);
          }
      }
    }
  return(t);
}
ATerm o_12 (ATerm d_60, ATerm e_60, ATerm t)
{
  ATerm d_148 = NULL;
  t = term_y_50;
  d_148 = t;
  t = SSL_table_put(d_148, d_60, e_60);
  t = (ATerm) ATmakeAppl(sym__3, term_y_50, d_60, e_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm g_148 = NULL,h_148 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm i_148 = NULL,j_148 = NULL,k_148 = NULL;
      t = term_r_21;
      t = i_0(t);
      i_148 = t;
      t = term_a_52;
      j_148 = t;
      t = term_b_52;
      k_148 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_52, term_b_52, i_148);
      t = m_12(j_148, k_148, i_148, t);
      _fail(t);
    }
  else
    {
      ATerm n_148 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_148 = ATgetFirst((ATermList) t);
          h_148 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_148;
      t = d_0(t);
      t = term_r_21;
      t = g_0(t);
      n_148 = t;
      t = (ATerm) ATinsert(CheckATermList(h_148), n_148);
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm p_148 = NULL;
  p_148 = t;
  if(match_string(t, "-o"))
    {
      t = p_148;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = p_148;
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm q_148 = NULL,r_148 = NULL;
  q_148 = t;
  t = term_e_52;
  r_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_52, q_148);
  t = o_12(r_148, q_148, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, q_148);
  return(t);
}
ATerm y_18 (ATerm t)
{
  t = term_f_52;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_18, x_18, y_18, t);
  return(t);
}
ATerm m_12 (ATerm a_36, ATerm b_36, ATerm y_35, ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL,v_148 = NULL;
  t_148 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_36, b_36);
  {
    ATerm g_52 = t;
    int h_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_52 = ATgetArgument(t, 0);
            ATerm m_52 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_36, b_36);
        t = l_12(a_36, b_36, t);
        ;
        LocalPopChoice(h_52);
      }
    else
      {
        t = g_52;
        t = (ATerm) ATempty;
      }
    u_148 = t;
    t = (ATerm) ATinsert(CheckATermList(u_148), y_35);
    v_148 = t;
    t = SSL_table_put(a_36, b_36, v_148);
    t = t_148;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm c_149 = NULL,d_149 = NULL,e_149 = NULL,f_149 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_149 = NULL,h_149 = NULL,i_149 = NULL;
      t = term_r_21;
      t = r_0(t);
      g_149 = t;
      t = term_a_52;
      h_149 = t;
      t = term_b_52;
      i_149 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_52, term_b_52, g_149);
      t = m_12(h_149, i_149, g_149, t);
      _fail(t);
    }
  else
    {
      ATerm m_149 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_149 = ATgetFirst((ATermList) t);
          d_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_149;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_149 = ATgetFirst((ATermList) t);
          f_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_149;
      t = n_0(t);
      t = e_149;
      t = p_0(t);
      m_149 = t;
      t = (ATerm) ATinsert(CheckATermList(f_149), m_149);
    }
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm o_149 = NULL;
  o_149 = t;
  if(match_string(t, "-i"))
    {
      t = o_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = o_149;
    }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm p_149 = NULL,q_149 = NULL;
  p_149 = t;
  t = term_n_52;
  q_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_52, p_149);
  t = o_12(q_149, p_149, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, p_149);
  return(t);
}
ATerm b_19 (ATerm t)
{
  t = term_o_52;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_18, a_19, b_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm r_149 = NULL,s_149 = NULL,t_149 = NULL,u_149 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_21;
  t = whoami_0_0(t);
  r_149 = t;
  t = term_s_21;
  t_149 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_52), r_149);
  u_149 = t;
  t = SSL_printnl(t_149, u_149);
  t = term_w_21;
  s_149 = t;
  t = SSL_exit(s_149);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_52;
  t = get_config_0_0(t);
  return(t);
}
ATerm j_12 (ATerm x_33, ATerm y_33, ATerm t)
{
  ATerm r_52 = t;
  int s_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_33, y_33);
      ;
      LocalPopChoice(s_52);
    }
  else
    {
      t = r_52;
      t = SSL_addr(x_33, y_33);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm h_106 (ATerm), ATerm i_106 (ATerm), ATerm t)
{
  ATerm w_149 = NULL,x_149 = NULL,y_149 = NULL;
  w_149 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_149;
      t = h_106(t);
    }
  else
    {
      ATerm b_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_149 = ATgetFirst((ATermList) t);
          y_149 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_149;
      t = foldr_2_0(h_106, i_106, t);
      b_150 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_149, b_150);
      t = i_106(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm c_19 (ATerm t)
{
  t = term_f_51;
  return(t);
}
ATerm d_19 (ATerm t)
{
  ATerm p_69 = NULL,q_69 = NULL;
  if(match_cons(t, sym__2))
    {
      p_69 = ATgetArgument(t, 0);
      q_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_12(p_69, q_69, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_150 = NULL,l_69 = NULL,m_69 = NULL;
  t = times_0_0(t);
  m_69 = t;
  t = SSL_explode_term(m_69);
  if(match_cons(t, sym__2))
    {
      ATerm t_52 = ATgetArgument(t, 0);
      l_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_69;
  t = foldr_2_0(c_19, d_19, t);
  e_150 = t;
  t = SSL_TicksToSeconds(e_150);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_150 = NULL,q_150 = NULL,r_150 = NULL;
  p_150 = t;
  if(match_cons(t, sym__2))
    {
      q_150 = ATgetArgument(t, 0);
      r_150 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_52 = t;
    int v_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_150;
        if((q_150 != t))
          {
            _fail(t);
          }
        t = p_150;
        ;
        LocalPopChoice(v_52);
      }
    else
      {
        t = u_52;
        t = (ATerm) ATmakeAppl(sym__2, q_150, r_150);
        {
          ATerm w_52 = t;
          int y_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_150, r_150);
              ;
              LocalPopChoice(y_52);
            }
          else
            {
              t = w_52;
              t = SSL_gtr(q_150, r_150);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_150, r_150);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_125 (ATerm), ATerm t)
{
  ATerm v_150 = NULL;
  v_150 = t;
  {
    ATerm z_52 = t;
    int b_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_150 = NULL;
        t = term_z_21;
        t = get_config_0_0(t);
        x_150 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_150, term_w_21);
        t = geq_0_0(t);
        t = v_150;
        t = h_125(t);
        ;
        LocalPopChoice(b_53);
      }
    else
      {
        t = z_52;
        t = v_150;
      }
  }
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm z_150 = NULL,a_151 = NULL,c_151 = NULL,d_151 = NULL;
  t = run_time_0_0(t);
  z_150 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  a_151 = t;
  t = term_s_21;
  c_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_53), z_150), term_c_53), a_151);
  d_151 = t;
  t = SSL_printnl(c_151, d_151);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_53), z_150), term_c_53), a_151));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_151 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_51;
  e_151 = t;
  t = SSL_exit(e_151);
  return(t);
}
ATerm g_19 (ATerm t)
{
  ATerm m_151 = NULL,n_151 = NULL;
  n_151 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_151;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_151 = ATgetArgument(t, 0);
          {
            ATerm c_70 = NULL,s_17 = NULL;
            t = SSLgetAnnotations(n_151);
            c_70 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_151);
            s_17 = t;
            t = SSLsetAnnotations(s_17, c_70);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_151;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_117 (ATerm), ATerm t)
{
  ATerm e_53 = t;
  int f_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_53;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_53);
    }
  else
    {
      t = e_53;
      t = fetch_1_0(g_19, t);
    }
  t = y_117(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm q_151 = NULL,r_151 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_151 = ATgetFirst((ATermList) t);
      r_151 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_151 = NULL,w_151 = NULL;
        ATerm i_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_151)), not_null(w_151));
          return(t);
        }
        t = r_151;
        t = m_0(t);
        if(((v_151 != NULL) && (v_151 != t)))
          _fail(t);
        else
          v_151 = t;
        t = q_151;
        t = k_0(t);
        if(((w_151 != NULL) && (w_151 != t)))
          _fail(t);
        else
          w_151 = t;
        t = r_151;
        t = reverse_acc_2_0(k_0, i_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_21;
      t = m_0(t);
    }
  return(t);
}
ATerm l_12 (ATerm c_38, ATerm d_38, ATerm t)
{
  t = SSL_table_get(c_38, d_38);
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm a_152 = NULL,b_152 = NULL,c_152 = NULL,g_18 = NULL;
  c_152 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_152 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_152);
  a_152 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_152);
  g_18 = t;
  t = SSLsetAnnotations(g_18, a_152);
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm e_152 = NULL;
  e_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_152), term_i_53);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_151 = NULL,z_151 = NULL;
  ATerm j_53 = t;
  int k_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_52;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_53);
    }
  else
    {
      t = j_53;
      t = fetch_1_0(m_19, t);
    }
  t = term_o_53;
  t = echo_0_0(t);
  t = term_a_52;
  y_151 = t;
  t = term_b_52;
  z_151 = t;
  t = term_p_53;
  t = l_12(y_151, z_151, t);
  t = reverse_acc_2_0(_id, n_19, t);
  t = map_1_0(o_19, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_152 = NULL,h_152 = NULL,i_152 = NULL;
  g_152 = t;
  {
    ATerm q_53 = t;
    int r_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_152;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm x_53 = ATgetFirst((ATermList) t);
                ATerm y_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_152;
          }
        ;
        LocalPopChoice(r_53);
      }
    else
      {
        t = q_53;
        t = (ATerm) ATinsert(ATempty, g_152);
      }
    h_152 = t;
    t = term_l_49;
    i_152 = t;
    t = SSL_printnl(i_152, h_152);
    t = g_152;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_52;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm r_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_19 (ATerm t)
{
  ATerm m_152 = NULL,n_152 = NULL;
  t = term_z_53;
  m_152 = t;
  t = term_r_21;
  n_152 = t;
  t = term_a_54;
  t = o_12(m_152, n_152, t);
  return(t);
}
ATerm u_19 (ATerm t)
{
  t = term_g_54;
  return(t);
}
ATerm d_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_20 (ATerm t)
{
  ATerm o_152 = NULL,p_152 = NULL,q_152 = NULL,r_152 = NULL;
  t = term_z_53;
  q_152 = t;
  t = term_r_21;
  r_152 = t;
  t = term_a_54;
  t = o_12(q_152, r_152, t);
  t = term_h_54;
  o_152 = t;
  t = term_r_21;
  p_152 = t;
  t = term_j_54;
  t = o_12(o_152, p_152, t);
  t = term_k_54;
  return(t);
}
ATerm f_20 (ATerm t)
{
  t = term_l_54;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_54 = t;
  int n_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_19, t_19, u_19, t);
      ;
      LocalPopChoice(n_54);
    }
  else
    {
      t = m_54;
      t = Option_3_0(d_20, e_20, f_20, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm w_152 = NULL,x_152 = NULL,y_152 = NULL,z_152 = NULL,b_153 = NULL,c_153 = NULL,i_18 = NULL;
  w_152 = t;
  {
    ATerm o_54 = t;
    int p_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_54;
        t = d_121(t);
        ;
        LocalPopChoice(p_54);
      }
    else
      {
        t = o_54;
      }
    t = w_152;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_152 = ATgetFirst((ATermList) t);
        z_152 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(w_152);
    x_152 = t;
    t = term_q_52;
    c_153 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_52, y_152);
    t = o_12(c_153, y_152, t);
    t = z_152;
    {
      ATerm m_153 (ATerm t)
      {
        ATerm r_54 = t;
        int s_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_54 = t;
            int u_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_153 = NULL;
                f_153 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = f_153;
                ;
                LocalPopChoice(u_54);
              }
            else
              {
                t = t_54;
                t = d_121(t);
                t = Cons_2_0(_id, m_153, t);
              }
            ;
            LocalPopChoice(s_54);
          }
        else
          {
            t = r_54;
            {
              ATerm i_153 = NULL,j_153 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  i_153 = ATgetFirst((ATermList) t);
                  j_153 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(j_153), (ATerm) ATmakeAppl(sym_Undefined_1, i_153));
            }
          }
        return(t);
      }
      t = m_153(t);
      b_153 = t;
      t = (ATerm) ATinsert(CheckATermList(b_153), (ATerm) ATmakeAppl(sym_Program_1, y_152));
      i_18 = t;
      t = SSLsetAnnotations(i_18, x_152);
    }
  }
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm y_153 = NULL;
  y_153 = t;
  if(match_string(t, "--help"))
    {
      t = y_153;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_153;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_153;
        }
    }
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm z_153 = NULL,a_154 = NULL;
  t = term_h_53;
  z_153 = t;
  t = term_r_21;
  a_154 = t;
  t = term_v_54;
  t = o_12(z_153, a_154, t);
  t = term_w_54;
  return(t);
}
ATerm l_20 (ATerm t)
{
  t = term_x_54;
  return(t);
}
ATerm m_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_121 (ATerm), ATerm t)
{
  ATerm r_153 = NULL,s_153 = NULL,t_153 = NULL,u_153 = NULL,v_153 = NULL,w_153 = NULL,x_153 = NULL;
  t_153 = t;
  t = term_a_52;
  v_153 = t;
  t = term_b_52;
  w_153 = t;
  t = (ATerm) ATempty;
  x_153 = t;
  t = SSL_table_put(v_153, w_153, x_153);
  t = t_153;
  {
    ATerm g_20 (ATerm t)
    {
      ATerm y_54 = t;
      int z_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_121(t);
          ;
          LocalPopChoice(z_54);
        }
      else
        {
          t = y_54;
          {
            ATerm a_55 = t;
            int b_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_20, k_20, l_20, t);
                ;
                LocalPopChoice(b_55);
              }
            else
              {
                t = a_55;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(g_20, t);
    {
      ATerm c_55 = t;
      int d_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_154 = NULL;
          h_154 = t;
          {
            ATerm e_55 = t;
            int f_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_70 = NULL;
                t = h_154;
                {
                  ATerm g_55 = t;
                  int h_55 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_53;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(h_55);
                    }
                  else
                    {
                      t = g_55;
                      t = fetch_1_0(m_20, t);
                    }
                  t = h_154;
                  t = default_system_usage_0_0(t);
                  t = term_f_51;
                  j_70 = t;
                  t = SSL_exit(j_70);
                }
                ;
                LocalPopChoice(f_55);
              }
            else
              {
                t = e_55;
                {
                  ATerm n_70 = NULL;
                  t = term_z_53;
                  t = get_config_0_0(t);
                  t = h_154;
                  t = default_system_about_0_0(t);
                  t = term_f_51;
                  n_70 = t;
                  t = SSL_exit(n_70);
                }
              }
          }
          ;
          LocalPopChoice(d_55);
        }
      else
        {
          t = c_55;
          {
            ATerm j_55 = t;
            int k_55 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_154 = NULL,j_154 = NULL,k_154 = NULL;
                ATerm n_20 (ATerm t)
                {
                  ATerm l_154 = NULL,m_154 = NULL,n_154 = NULL,k_18 = NULL;
                  n_154 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      m_154 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(n_154);
                  l_154 = t;
                  t = m_154;
                  if(((r_153 != NULL) && (r_153 != t)))
                    _fail(t);
                  else
                    r_153 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_154);
                  k_18 = t;
                  t = SSLsetAnnotations(k_18, l_154);
                  return(t);
                }
                t = fetch_1_0(n_20, t);
                t = term_s_21;
                j_154 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_153)), term_l_55);
                k_154 = t;
                t = SSL_printnl(j_154, k_154);
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_153)), term_l_55));
                t = default_system_usage_0_0(t);
                t = term_w_21;
                i_154 = t;
                t = SSL_exit(i_154);
                ;
                LocalPopChoice(k_55);
              }
            else
              {
                t = j_55;
              }
          }
        }
      s_153 = t;
      t = term_a_52;
      u_153 = t;
      t = SSL_table_destroy(u_153);
      t = s_153;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm c_118 (ATerm), ATerm d_118 (ATerm), ATerm t)
{
  ATerm s_154 = NULL,t_154 = NULL,u_154 = NULL,v_154 = NULL;
  t = parse_options_1_0(a_118, t);
  s_154 = t;
  t = term_m_55;
  v_154 = t;
  t = SSL_table_create(v_154);
  t = term_m_55;
  t_154 = t;
  t = term_n_55;
  u_154 = t;
  t = SSL_table_put(t_154, u_154, s_154);
  t = s_154;
  t = c_118(t);
  {
    ATerm o_55 = t;
    int p_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_118, t);
        ;
        LocalPopChoice(p_55);
      }
    else
      {
        t = o_55;
        {
          ATerm q_55 = t;
          int r_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_118(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_55);
            }
          else
            {
              t = q_55;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = if_verbose2_1_0(y_20, t);
  return(t);
}
ATerm s_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm w_154 = NULL,x_154 = NULL;
  t = term_s_55;
  w_154 = t;
  t = term_r_21;
  x_154 = t;
  t = term_v_55;
  t = o_12(w_154, x_154, t);
  t = term_w_55;
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_x_55;
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm y_154 = NULL,z_154 = NULL,a_155 = NULL,b_155 = NULL;
  y_154 = t;
  t = term_q_52;
  t = get_config_0_0(t);
  z_154 = t;
  t = term_s_21;
  a_155 = t;
  t = (ATerm) ATinsert(ATempty, z_154);
  b_155 = t;
  t = SSL_printnl(a_155, b_155);
  t = y_154;
  return(t);
}
ATerm iowrap_3_0 (ATerm j_117 (ATerm), ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm t)
{
  ATerm o_20 (ATerm t)
  {
    ATerm z_55 = t;
    int a_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_117(t);
        ;
        LocalPopChoice(a_56);
      }
    else
      {
        t = z_55;
        {
          ATerm b_56 = t;
          int c_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(c_56);
            }
          else
            {
              t = b_56;
              {
                ATerm i_56 = t;
                int j_56 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(j_56);
                  }
                else
                  {
                    t = i_56;
                    {
                      ATerm k_56 = t;
                      int l_56 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(s_20, t_20, u_20, t);
                          ;
                          LocalPopChoice(l_56);
                        }
                      else
                        {
                          t = k_56;
                          {
                            ATerm m_56 = t;
                            int n_56 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(n_56);
                              }
                            else
                              {
                                t = m_56;
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
  ATerm q_20 (ATerm t)
  {
    ATerm c_155 = NULL,d_155 = NULL,e_155 = NULL;
    d_155 = t;
    {
      ATerm o_56 = t;
      int p_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((c_155 != NULL) && (c_155 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  c_155 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_20, t);
          ;
          LocalPopChoice(p_56);
        }
      else
        {
          t = o_56;
          t = term_q_56;
          c_155 = t;
        }
      t = not_null(c_155);
      t = ReadFromFile_0_0(t);
      e_155 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_155, e_155);
      t = apply_strategy_1_0(j_117, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_20, l_117, p_20, q_20, t);
  return(t);
}
ATerm a_21 (ATerm t)
{
  ATerm h_155 = NULL,i_155 = NULL,j_155 = NULL,k_155 = NULL,l_155 = NULL,q_18 = NULL;
  l_155 = t;
  if(match_cons(t, sym__2))
    {
      i_155 = ATgetArgument(t, 0);
      j_155 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_155);
  h_155 = t;
  t = j_155;
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_156 = NULL,q_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,p_18 = NULL,o_18 = NULL,m_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            h_156 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_155);
        q_70 = t;
        t = h_156;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_70 = ATgetFirst((ATermList) t);
            u_70 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_156);
        s_70 = t;
        t = t_70;
        if(match_cons(t, sym_Signature_1))
          {
            b_71 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_70);
        a_71 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, b_71);
        m_18 = t;
        t = SSLsetAnnotations(m_18, a_71);
        c_71 = t;
        t = u_70;
        t = Cons_2_0(j_21, k_21, t);
        y_70 = t;
        t = (ATerm) ATinsert(CheckATermList(y_70), c_71);
        o_18 = t;
        t = SSLsetAnnotations(o_18, s_70);
        z_70 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, z_70);
        p_18 = t;
        t = SSLsetAnnotations(p_18, q_70);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(n_21, t);
        ;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        t = if_verbose2_1_0(q_21, t);
      }
    k_155 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_155, k_155);
    q_18 = t;
    t = SSLsetAnnotations(q_18, h_155);
  }
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,n_18 = NULL;
  g_71 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_71);
  d_71 = t;
  t = e_71;
  t = map_1_0(m_21, t);
  f_71 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, f_71);
  n_18 = t;
  t = SSLsetAnnotations(n_18, d_71);
  return(t);
}
ATerm k_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_21 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      h_71 = ATgetArgument(t, 0);
      i_71 = ATgetArgument(t, 1);
      j_71 = ATgetArgument(t, 2);
      k_71 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = y_11(h_71, i_71, j_71, k_71, t);
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm l_71 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_56 = ATgetArgument(t, 0);
      if(match_cons(u_56, sym_SVar_1))
        {
          ATerm x_56 = ATgetArgument(u_56, 0);
          if((ATgetSymbol((ATermAppl) x_56) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm v_56 = ATgetArgument(t, 1);
        if(((ATgetType(v_56) == AT_LIST) && !(ATisEmpty(v_56))))
          {
            l_71 = ATgetFirst((ATermList) v_56);
            {
              ATerm y_56 = (ATerm) ATgetNext((ATermList) v_56);
              if(((ATgetType(y_56) != AT_LIST) || !(ATisEmpty(y_56))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm w_56 = ATgetArgument(t, 2);
        if(((ATgetType(w_56) != AT_LIST) || !(ATisEmpty(w_56))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_10(l_71, t);
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm i_156 = NULL,j_156 = NULL,k_156 = NULL;
  i_156 = t;
  t = term_s_21;
  j_156 = t;
  t = (ATerm) ATinsert(ATempty, term_b_57);
  k_156 = t;
  t = SSL_printnl(j_156, k_156);
  t = i_156;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_21, _fail, default_usage_0_0, t);
  return(t);
}
