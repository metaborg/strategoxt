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
ATerm term_t_55;
ATerm term_g_55;
ATerm term_m_54;
ATerm term_l_54;
ATerm term_k_54;
ATerm term_j_54;
ATerm term_e_54;
ATerm term_d_54;
ATerm term_c_54;
ATerm term_o_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_h_53;
ATerm term_c_53;
ATerm term_a_53;
ATerm term_x_52;
ATerm term_w_52;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_t_52;
ATerm term_n_52;
ATerm term_m_52;
ATerm term_j_52;
ATerm term_i_52;
ATerm term_f_52;
ATerm term_e_52;
ATerm term_o_51;
ATerm term_l_51;
ATerm term_k_51;
ATerm term_j_51;
ATerm term_d_51;
ATerm term_c_51;
ATerm term_b_51;
ATerm term_a_51;
ATerm term_v_50;
ATerm term_u_50;
ATerm term_t_50;
ATerm term_s_50;
ATerm term_q_50;
ATerm term_p_50;
ATerm term_o_50;
ATerm term_n_50;
ATerm term_m_50;
ATerm term_k_50;
ATerm term_j_50;
ATerm term_g_50;
ATerm term_v_49;
ATerm term_g_49;
ATerm term_b_49;
ATerm term_i_48;
ATerm term_d_48;
ATerm term_a_48;
ATerm term_z_47;
ATerm term_s_47;
ATerm term_m_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_b_47;
ATerm term_y_46;
ATerm term_y_36;
ATerm term_x_36;
ATerm term_w_36;
ATerm term_i_36;
ATerm term_a_35;
ATerm term_n_34;
ATerm term_i_34;
ATerm term_h_34;
ATerm term_g_34;
ATerm term_a_34;
ATerm term_z_33;
ATerm term_y_33;
ATerm term_u_33;
ATerm term_s_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_y_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_g_31;
ATerm term_d_31;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_c_30;
ATerm term_b_30;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_s_29;
ATerm term_n_29;
ATerm term_w_28;
ATerm term_s_28;
ATerm term_a_28;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_p_26;
ATerm term_u_23;
ATerm term_f_23;
ATerm term_z_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
void init_constant_terms (void)
{
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_26);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym_CallT_3, term_t_26, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_26, term_z_26);
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_26, term_a_27);
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_26, term_b_27);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__2, term_d_27, term_c_27);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_h_27);
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_28);
  ATprotect(&(term_n_29));
  term_n_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_x_26, term_z_26);
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_u_26, term_n_29);
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(sym__2, term_t_29, term_s_29);
  ATprotect(&(term_b_30));
  term_b_30 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_30);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_d_31));
  term_d_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_g_31));
  term_g_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_31);
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_32);
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_32);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_z_33));
  term_z_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_a_34));
  term_a_34 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_g_34));
  term_g_34 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_h_34));
  term_h_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_a_35));
  term_a_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_34);
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_x_36));
  term_x_36 = (ATerm) ATmakeAppl(sym_Sort_2, term_w_36, (ATerm) ATempty);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_ConstType_1, term_x_36);
  ATprotect(&(term_y_46));
  term_y_46 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_b_47));
  term_b_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_m_47));
  term_m_47 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_s_47));
  term_s_47 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_47);
  ATprotect(&(term_z_47));
  term_z_47 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_a_48));
  term_a_48 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_49));
  term_b_49 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_49));
  term_v_49 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_50));
  term_g_50 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_50));
  term_j_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_50));
  term_k_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_50));
  term_m_50 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_50));
  term_n_50 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_m_50);
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_50);
  ATprotect(&(term_p_50));
  term_p_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_50));
  term_q_50 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_50));
  term_s_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_50));
  term_t_50 = (ATerm) ATmakeAppl(sym__2, term_s_50, term_r_21);
  ATprotect(&(term_u_50));
  term_u_50 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_50));
  term_v_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_51));
  term_a_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_51));
  term_b_51 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_51));
  term_c_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_51));
  term_d_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_51));
  term_k_51 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_51));
  term_l_51 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_51));
  term_o_51 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_52));
  term_e_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_52));
  term_i_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_52));
  term_j_52 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_52));
  term_m_52 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_52));
  term_n_52 = (ATerm) ATmakeAppl(sym__2, term_a_51, term_b_51);
  ATprotect(&(term_t_52));
  term_t_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(sym__2, term_t_52, term_r_21);
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_52));
  term_x_52 = (ATerm) ATmakeAppl(sym__2, term_w_52, term_r_21);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_53));
  term_c_53 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_53));
  term_h_53 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(sym__2, term_i_52, term_r_21);
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_53));
  term_o_53 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_54));
  term_d_54 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_54));
  term_e_54 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_54));
  term_k_54 = (ATerm) ATmakeAppl(sym__2, term_j_54, term_r_21);
  ATprotect(&(term_l_54));
  term_l_54 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm y_148 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm pat_td_1_0 (ATerm h_147 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm b_2 (ATerm);
ATerm d_2 (ATerm);
ATerm h_2 (ATerm);
ATerm m_2 (ATerm);
ATerm o_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm l_8 (ATerm o_91, ATerm p_91, ATerm q_91, ATerm);
ATerm q_11 (ATerm c_11, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm v_3 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm x_3 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm o_8 (ATerm d_87, ATerm e_87, ATerm f_87, ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm v_118 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm n_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm s_4 (ATerm);
ATerm y_4 (ATerm);
ATerm e_5 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm w_31 (ATerm e_31, ATerm f_31, ATerm);
ATerm x_31 (ATerm k_31, ATerm l_31, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm p_8 (ATerm l_57, ATerm m_57, ATerm);
ATerm end_scope_1_0 (ATerm f_131 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_131 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm);
ATerm k_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm q_5 (ATerm);
ATerm s_5 (ATerm);
ATerm v_9 (ATerm c_44, ATerm b_44, ATerm d_44, ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm a_6 (ATerm);
ATerm e_6 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm w_118 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Seq_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm);
ATerm l_6 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm o_6 (ATerm);
ATerm q_6 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm t_6 (ATerm);
ATerm w_6 (ATerm);
ATerm z_6 (ATerm);
ATerm c_10 (ATerm m_42, ATerm);
ATerm alltd_1_0 (ATerm n_120 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm m_7 (ATerm);
ATerm p_7 (ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm Anno__Cong_____2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm);
ATerm v_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm e_10 (ATerm m_65, ATerm l_65, ATerm);
ATerm MatchBuildIdemVar_0_0 (ATerm);
ATerm BuildMatchIdem_0_0 (ATerm);
ATerm MatchIdem_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildBuild_0_0 (ATerm);
ATerm b_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm i_8 (ATerm);
ATerm k_8 (ATerm);
ATerm n_8 (ATerm);
ATerm q_8 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm z_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm t_8 (ATerm);
ATerm u_8 (ATerm);
ATerm x_8 (ATerm);
ATerm y_8 (ATerm);
ATerm z_8 (ATerm);
ATerm b_9 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm i_10 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_132 (ATerm), ATerm);
ATerm downup_1_0 (ATerm x_118 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm);
ATerm l_10 (ATerm);
ATerm o_10 (ATerm);
ATerm p_10 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm z_10 (ATerm);
ATerm d_11 (ATerm);
ATerm o_11 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm y_12 (ATerm);
ATerm c_13 (ATerm);
ATerm f_13 (ATerm);
ATerm h_13 (ATerm);
ATerm l_13 (ATerm);
ATerm u_13 (ATerm);
ATerm v_13 (ATerm);
ATerm spaste_1_0 (ATerm f_148 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm i_148 (ATerm), ATerm);
ATerm w_13 (ATerm);
ATerm g_11 (ATerm j_94, ATerm i_94, ATerm);
ATerm SVar_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm r_11 (ATerm s_145 (ATerm), ATerm t_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_85, ATerm d_85, ATerm c_85, ATerm);
ATerm z_13 (ATerm);
ATerm a_14 (ATerm);
ATerm b_14 (ATerm);
ATerm s_11 (ATerm m_145 (ATerm), ATerm n_145 (ATerm (ATerm), ATerm), ATerm w_84, ATerm z_84, ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm x_134 (ATerm), ATerm);
ATerm rename_4_0 (ATerm h_145 (ATerm (ATerm), ATerm), ATerm i_145 (ATerm), ATerm j_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_145 (ATerm (ATerm), ATerm), ATerm);
ATerm h_14 (ATerm);
ATerm k_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm p_14 (ATerm);
ATerm q_14 (ATerm);
ATerm r_14 (ATerm);
ATerm tpaste_1_0 (ATerm b_148 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm);
ATerm s_14 (ATerm);
ATerm t_14 (ATerm);
ATerm v_14 (ATerm);
ATerm w_14 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm l_11 (ATerm j_127 (ATerm), ATerm x_51, ATerm w_51, ATerm);
ATerm foldr_3_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm);
ATerm m_11 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm b_52, ATerm a_52, ATerm);
ATerm n_11 (ATerm e_127 (ATerm), ATerm v_51, ATerm u_51, ATerm);
ATerm at_end_1_0 (ATerm v_123 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_130 (ATerm p_129, ATerm);
ATerm conc_0_0 (ATerm);
ATerm e_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm p_11 (ATerm v_695, ATerm a_696, ATerm x_86, ATerm);
ATerm while_not_2_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm);
ATerm k_15 (ATerm);
ATerm l_15 (ATerm);
ATerm p_15 (ATerm);
ATerm w_132 (ATerm c_131, ATerm d_131, ATerm j_131, ATerm);
ATerm q_15 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm x_15 (ATerm);
ATerm y_15 (ATerm);
ATerm z_15 (ATerm);
ATerm free_vars_3_0 (ATerm x_146 (ATerm), ATerm y_146 (ATerm), ATerm z_146 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm b_16 (ATerm);
ATerm d_16 (ATerm);
ATerm f_16 (ATerm);
ATerm i_16 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm j_16 (ATerm);
ATerm l_16 (ATerm);
ATerm n_16 (ATerm);
ATerm p_16 (ATerm);
ATerm r_16 (ATerm);
ATerm s_16 (ATerm);
ATerm t_16 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm y_11 (ATerm r_57, ATerm s_57, ATerm);
ATerm u_16 (ATerm);
ATerm z_16 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm z_11 (ATerm i_131 (ATerm), ATerm y_56, ATerm w_56, ATerm);
ATerm o_17 (ATerm);
ATerm a_12 (ATerm o_41, ATerm p_41, ATerm r_41, ATerm q_41, ATerm);
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm d_12 (ATerm v_74, ATerm w_74, ATerm);
ATerm e_12 (ATerm j_78, ATerm k_78, ATerm);
ATerm h_12 (ATerm y_138 (ATerm), ATerm c_566, ATerm n_78, ATerm);
ATerm f_12 (ATerm f_78, ATerm g_78, ATerm);
ATerm t_17 (ATerm);
ATerm x_17 (ATerm);
ATerm y_17 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_140 (ATerm), ATerm);
ATerm e_144 (ATerm y_143, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_12 (ATerm l_78, ATerm);
ATerm k_12 (ATerm x_74, ATerm y_74, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm e_146 (ATerm s_144, ATerm);
ATerm f_146 (ATerm w_144, ATerm x_144, ATerm y_144, ATerm);
ATerm g_146 (ATerm p_145, ATerm q_145, ATerm r_145, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm a_18 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_123 (ATerm), ATerm);
ATerm c_12 (ATerm n_72, ATerm o_72, ATerm);
ATerm debug_1_0 (ATerm w_138 (ATerm), ATerm);
ATerm b_18 (ATerm);
ATerm d_18 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_18 (ATerm);
ATerm f_18 (ATerm);
ATerm i_18 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_18 (ATerm);
ATerm l_18 (ATerm);
ATerm n_18 (ATerm);
ATerm p_18 (ATerm);
ATerm r_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm q_12 (ATerm w_80, ATerm x_80, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_19 (ATerm);
ATerm c_19 (ATerm);
ATerm d_19 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm o_12 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_19 (ATerm);
ATerm h_19 (ATerm);
ATerm j_19 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm l_12 (ATerm k_55, ATerm l_55, ATerm);
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm k_19 (ATerm);
ATerm n_19 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm x_148 (ATerm), ATerm);
ATerm o_19 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm p_19 (ATerm);
ATerm need_help_1_0 (ATerm i_141 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm n_12 (ATerm x_58, ATerm y_58, ATerm);
ATerm u_19 (ATerm);
ATerm v_19 (ATerm);
ATerm a_20 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm b_20 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm e_20 (ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm n_144 (ATerm), ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm u_20 (ATerm);
ATerm parse_options_1_0 (ATerm m_144 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm);
ATerm y_20 (ATerm);
ATerm a_21 (ATerm);
ATerm b_21 (ATerm);
ATerm c_21 (ATerm);
ATerm d_21 (ATerm);
ATerm iowrap_3_0 (ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm);
ATerm g_21 (ATerm);
ATerm i_21 (ATerm);
ATerm m_21 (ATerm);
ATerm o_21 (ATerm);
ATerm p_21 (ATerm);
ATerm q_21 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,v_0 = NULL;
  p_0 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  q_0 = t;
  t = term_s_21;
  t_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_21), q_0), term_t_21);
  v_0 = t;
  t = SSL_printnl(t_0, v_0);
  t = term_x_21;
  s_0 = t;
  t = SSL_exit(s_0);
  t = p_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_148 (ATerm), ATerm t)
{
  ATerm x_0 = NULL;
  x_0 = t;
  {
    ATerm b_22 = t;
    int c_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_f_22;
        t = get_config_0_0(t);
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_0, term_g_22);
        t = geq_0_0(t);
        t = x_0;
        t = y_148(t);
        ;
        LocalPopChoice(c_22);
      }
    else
      {
        t = b_22;
        t = x_0;
      }
  }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      e_1 = ATgetArgument(t, 0);
      c_1 = ATgetArgument(t, 1);
      {
        ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
        t = d_1;
        t = new_0_0(t);
        i_1 = t;
        t = new_0_0(t);
        j_1 = t;
        t = new_0_0(t);
        k_1 = t;
        t = new_0_0(t);
        l_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, c_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_1 = ATgetArgument(t, 0);
          {
            ATerm m_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
            t = not_null(d_1);
            t = new_0_0(t);
            if(((q_1 != NULL) && (q_1 != t)))
              _fail(t);
            else
              q_1 = t;
            t = not_null(e_1);
            {
              ATerm w_0 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_1));
                return(t);
              }
              t = oncetd_1_0(w_0, t);
              if(((r_1 != NULL) && (r_1 != t)))
                _fail(t);
              else
                r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(q_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_1)), not_null(m_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(q_1))), (ATerm) ATmakeAppl(sym_Build_1, not_null(r_1)))));
            }
          }
        }
      else
        {
          ATerm t_1 = NULL,v_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              if(((e_1 != NULL) && (e_1 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                e_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = not_null(d_1);
          t = new_0_0(t);
          if(((x_1 != NULL) && (x_1 != t)))
            _fail(t);
          else
            x_1 = t;
          t = new_0_0(t);
          if(((z_1 != NULL) && (z_1 != t)))
            _fail(t);
          else
            z_1 = t;
          t = not_null(e_1);
          {
            ATerm y_0 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_1));
              return(t);
            }
            t = oncetd_1_0(y_0, t);
            if(((a_2 != NULL) && (a_2 != t)))
              _fail(t);
            else
              a_2 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(a_2)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(z_1)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_1))), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(z_1)))))), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_1)), (ATerm) ATmakeAppl(sym_Op_2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_1)), not_null(t_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm e_2 = NULL,g_2 = NULL;
  if(((e_2 != NULL) && (e_2 != t)))
    _fail(t);
  else
    e_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_22 = t;
    int l_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
        t = not_null(e_2);
        t = new_0_0(t);
        if(((k_2 != NULL) && (k_2 != t)))
          _fail(t);
        else
          k_2 = t;
        t = not_null(g_2);
        {
          ATerm a_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_2 = ATgetArgument(t, 0);
                if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  j_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, not_null(k_2)), not_null(i_2));
            return(t);
          }
          t = pat_td_1_0(a_1, t);
          if(((l_2 != NULL) && (l_2 != t)))
            _fail(t);
          else
            l_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(k_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(l_2)), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_n_22, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, not_null(k_2)))), (ATerm) ATmakeAppl(sym_Match_1, not_null(j_2))))));
        }
        ;
        LocalPopChoice(l_22);
      }
    else
      {
        t = k_22;
        {
          ATerm o_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL;
              t = not_null(e_2);
              t = new_0_0(t);
              if(((p_2 != NULL) && (p_2 != t)))
                _fail(t);
              else
                p_2 = t;
              t = not_null(g_2);
              {
                ATerm b_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((n_2 != NULL) && (n_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        n_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_2));
                  return(t);
                }
                t = pat_td_1_0(b_1, t);
                if(((q_2 != NULL) && (q_2 != t)))
                  _fail(t);
                else
                  q_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(p_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(p_2))), not_null(n_2))));
              }
              ;
              LocalPopChoice(r_22);
            }
          else
            {
              t = o_22;
              {
                ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL;
                t = not_null(e_2);
                t = new_0_0(t);
                if(((x_2 != NULL) && (x_2 != t)))
                  _fail(t);
                else
                  x_2 = t;
                t = not_null(g_2);
                {
                  ATerm f_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((w_2 != NULL) && (w_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          w_2 = ATgetArgument(t, 0);
                        if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_2));
                    return(t);
                  }
                  t = pat_td_1_0(f_1, t);
                  if(((y_2 != NULL) && (y_2 != t)))
                    _fail(t);
                  else
                    y_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(x_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(y_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(x_2))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_2)), not_null(w_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm h_147 (ATerm), ATerm t)
{
  ATerm s_22 = t;
  int t_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_147(t);
      ;
      LocalPopChoice(t_22);
    }
  else
    {
      t = s_22;
      {
        ATerm v_5 = NULL,w_5 = NULL,h_6 = NULL,i_6 = NULL;
        if(((w_5 != NULL) && (w_5 != t)))
          _fail(t);
        else
          w_5 = t;
        if(match_cons(t, sym_Op_2))
          {
            h_6 = ATgetArgument(t, 0);
            i_6 = ATgetArgument(t, 1);
            {
              ATerm n_1 = NULL,y_1 = NULL,g_3 = NULL;
              t = SSLgetAnnotations(not_null(w_5));
              if(((n_1 != NULL) && (n_1 != t)))
                _fail(t);
              else
                n_1 = t;
              t = not_null(i_6);
              {
                ATerm g_1 (ATerm t)
                {
                  t = pat_td_1_0(h_147, t);
                  return(t);
                }
                t = fetch_1_0(g_1, t);
                if(((y_1 != NULL) && (y_1 != t)))
                  _fail(t);
                else
                  y_1 = t;
                t = (ATerm) ATmakeAppl(sym_Op_2, not_null(h_6), not_null(y_1));
                if(((g_3 != NULL) && (g_3 != t)))
                  _fail(t);
                else
                  g_3 = t;
                t = SSLsetAnnotations(not_null(g_3), not_null(n_1));
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
                  ATerm u_22 = t;
                  int w_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_3 = NULL,d_3 = NULL,h_3 = NULL;
                      t = SSLgetAnnotations(not_null(w_5));
                      a_3 = t;
                      t = not_null(i_6);
                      t = pat_td_1_0(h_147, t);
                      d_3 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, not_null(h_6), d_3);
                      h_3 = t;
                      t = SSLsetAnnotations(h_3, a_3);
                      ;
                      LocalPopChoice(w_22);
                    }
                  else
                    {
                      t = u_22;
                      {
                        ATerm b_5 = NULL,m_5 = NULL,i_3 = NULL;
                        t = SSLgetAnnotations(not_null(w_5));
                        b_5 = t;
                        t = not_null(h_6);
                        t = pat_td_1_0(h_147, t);
                        m_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, m_5, not_null(i_6));
                        i_3 = t;
                        t = SSLsetAnnotations(i_3, b_5);
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
                    v_5 = ATgetArgument(t, 2);
                    {
                      ATerm z_5 = NULL,d_6 = NULL,j_3 = NULL;
                      t = SSLgetAnnotations(not_null(w_5));
                      if(((z_5 != NULL) && (z_5 != t)))
                        _fail(t);
                      else
                        z_5 = t;
                      t = not_null(v_5);
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = pat_td_1_0(h_147, t);
                          return(t);
                        }
                        t = fetch_1_0(h_1, t);
                        if(((d_6 != NULL) && (d_6 != t)))
                          _fail(t);
                        else
                          d_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, not_null(h_6), not_null(i_6), not_null(d_6));
                        if(((j_3 != NULL) && (j_3 != t)))
                          _fail(t);
                        else
                          j_3 = t;
                        t = SSLsetAnnotations(not_null(j_3), not_null(z_5));
                      }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        h_6 = ATgetArgument(t, 0);
                        i_6 = ATgetArgument(t, 1);
                        v_5 = ATgetArgument(t, 2);
                        {
                          ATerm d_7 = NULL,o_7 = NULL,k_3 = NULL;
                          t = SSLgetAnnotations(not_null(w_5));
                          if(((d_7 != NULL) && (d_7 != t)))
                            _fail(t);
                          else
                            d_7 = t;
                          t = not_null(v_5);
                          {
                            ATerm p_1 (ATerm t)
                            {
                              t = pat_td_1_0(h_147, t);
                              return(t);
                            }
                            t = fetch_1_0(p_1, t);
                            if(((o_7 != NULL) && (o_7 != t)))
                              _fail(t);
                            else
                              o_7 = t;
                            t = (ATerm) ATmakeAppl(sym_CallT_3, not_null(h_6), not_null(i_6), not_null(o_7));
                            if(((k_3 != NULL) && (k_3 != t)))
                              _fail(t);
                            else
                              k_3 = t;
                            t = SSLsetAnnotations(not_null(k_3), not_null(d_7));
                          }
                        }
                      }
                    else
                      {
                        ATerm e_8 = NULL,h_8 = NULL,l_3 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            if(((h_6 != NULL) && (h_6 != ATgetArgument(t, 0))))
                              _fail(ATgetArgument(t, 0));
                            else
                              h_6 = ATgetArgument(t, 0);
                            if(((i_6 != NULL) && (i_6 != ATgetArgument(t, 1))))
                              _fail(ATgetArgument(t, 1));
                            else
                              i_6 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(not_null(w_5));
                        e_8 = t;
                        t = not_null(i_6);
                        t = pat_td_1_0(h_147, t);
                        h_8 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, not_null(h_6), h_8);
                        l_3 = t;
                        t = SSLsetAnnotations(l_3, e_8);
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
  ATerm u_6 = NULL,v_6 = NULL;
  if(((u_6 != NULL) && (u_6 != t)))
    _fail(t);
  else
    u_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      if(((v_6 != NULL) && (v_6 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        v_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm x_22 = t;
    int y_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_6 = NULL,y_6 = NULL,a_7 = NULL,b_7 = NULL;
        t = not_null(u_6);
        t = new_0_0(t);
        if(((a_7 != NULL) && (a_7 != t)))
          _fail(t);
        else
          a_7 = t;
        t = not_null(v_6);
        {
          ATerm s_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((x_6 != NULL) && (x_6 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_6 = ATgetArgument(t, 0);
                if(((y_6 != NULL) && (y_6 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_6 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, not_null(a_7));
            return(t);
          }
          t = pat_td_1_0(s_1, t);
          if(((b_7 != NULL) && (b_7 != t)))
            _fail(t);
          else
            b_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(a_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_z_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_6)), not_null(x_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(a_7))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(b_7))));
        }
        ;
        LocalPopChoice(y_22);
      }
    else
      {
        t = x_22;
        {
          ATerm a_23 = t;
          int b_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_7 = NULL,h_7 = NULL,j_7 = NULL;
              t = not_null(u_6);
              t = new_0_0(t);
              if(((h_7 != NULL) && (h_7 != t)))
                _fail(t);
              else
                h_7 = t;
              t = not_null(v_6);
              {
                ATerm u_1 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, not_null(h_7));
                  return(t);
                }
                t = pat_td_1_0(u_1, t);
                if(((j_7 != NULL) && (j_7 != t)))
                  _fail(t);
                else
                  j_7 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(h_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(c_7), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, not_null(h_7))))), (ATerm) ATmakeAppl(sym_Build_1, not_null(j_7))));
              }
              ;
              LocalPopChoice(b_23);
            }
          else
            {
              t = a_23;
              {
                ATerm k_7 = NULL,l_7 = NULL,n_7 = NULL,q_7 = NULL;
                t = not_null(u_6);
                t = new_0_0(t);
                if(((n_7 != NULL) && (n_7 != t)))
                  _fail(t);
                else
                  n_7 = t;
                t = not_null(v_6);
                {
                  ATerm w_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((k_7 != NULL) && (k_7 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          k_7 = ATgetArgument(t, 0);
                        if(((l_7 != NULL) && (l_7 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, not_null(n_7));
                    return(t);
                  }
                  t = pat_td_1_0(w_1, t);
                  if(((q_7 != NULL) && (q_7 != t)))
                    _fail(t);
                  else
                    q_7 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(n_7)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(k_7), not_null(l_7), (ATerm) ATmakeAppl(sym_Var_1, not_null(n_7)))), (ATerm) ATmakeAppl(sym_Build_1, not_null(q_7))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm e_23 = t;
  if((PushChoice() == 0))
    {
      ATerm v_8 = NULL,w_8 = NULL,a_9 = NULL,s_3 = NULL;
      a_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          w_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_9);
      v_8 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, w_8);
      s_3 = t;
      t = SSLsetAnnotations(s_3, v_8);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_23;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm t_9 = NULL,z_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_9 = ATgetFirst((ATermList) t);
      z_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_9, z_9);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm a_10 = NULL,f_10 = NULL,h_10 = NULL,k_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(match_cons(g_23, sym__2))
        {
          a_10 = ATgetArgument(g_23, 0);
          f_10 = ATgetArgument(g_23, 1);
        }
      else
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(match_cons(h_23, sym__2))
          {
            h_10 = ATgetArgument(h_23, 0);
            k_10 = ATgetArgument(h_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_10), a_10), (ATerm) ATinsert(CheckATermList(k_10), f_10));
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm m_10 = NULL,n_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_10 = ATgetFirst((ATermList) t);
      n_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_10, n_10);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm q_10 = NULL,u_10 = NULL,x_10 = NULL,y_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(match_cons(l_23, sym__2))
        {
          q_10 = ATgetArgument(l_23, 0);
          u_10 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(match_cons(m_23, sym__2))
          {
            x_10 = ATgetArgument(m_23, 0);
            y_10 = ATgetArgument(m_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_10), q_10), (ATerm) ATinsert(CheckATermList(y_10), u_10));
  return(t);
}
ATerm l_8 (ATerm o_91, ATerm p_91, ATerm q_91, ATerm t)
{
  ATerm t_7 = NULL,u_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,c_8 = NULL,j_8 = NULL,m_8 = NULL,r_8 = NULL,t_3 = NULL;
  t = q_91;
  t = fetch_1_0(b_2, t);
  t = q_91;
  t = genzip_4_0(d_2, h_2, m_2, LiftPrimArg_0_0, t);
  r_8 = t;
  if(match_cons(t, sym__2))
    {
      y_7 = ATgetArgument(t, 0);
      c_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_8);
  x_7 = t;
  t = y_7;
  t = concat_0_0(t);
  j_8 = t;
  t = c_8;
  t = genzip_4_0(o_2, r_2, s_2, _id, t);
  m_8 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_8, m_8);
  t_3 = t;
  t = SSLsetAnnotations(t_3, x_7);
  if(match_cons(t, sym__2))
    {
      t_7 = ATgetArgument(t, 0);
      {
        ATerm n_23 = ATgetArgument(t, 1);
        if(match_cons(n_23, sym__2))
          {
            u_7 = ATgetArgument(n_23, 0);
            w_7 = ATgetArgument(n_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_7, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_7), (ATerm) ATmakeAppl(sym_CallT_3, o_91, p_91, w_7)));
  return(t);
}
ATerm q_11 (ATerm c_11, ATerm t)
{
  ATerm e_11 = NULL;
  t = c_11;
  {
    ATerm p_23 = t;
    if((PushChoice() == 0))
      {
        ATerm f_11 = NULL,h_11 = NULL,i_11 = NULL,w_3 = NULL;
        i_11 = t;
        if(match_cons(t, sym_Var_1))
          {
            h_11 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_11);
        f_11 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, h_11);
        w_3 = t;
        t = SSLsetAnnotations(w_3, f_11);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_23;
      }
    t = new_0_0(t);
    e_11 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, e_11), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_11), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, e_11)))), (ATerm) ATmakeAppl(sym_Var_1, e_11)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL;
  j_11 = t;
  if(match_cons(t, sym_Var_1))
    {
      k_11 = ATgetArgument(t, 0);
      {
        ATerm q_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_11(j_11, t);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = q_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_23, (ATerm) ATmakeAppl(sym_Var_1, k_11)));
          }
      }
    }
  else
    {
      t = q_11(j_11, t);
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm v_23 = t;
  if((PushChoice() == 0))
    {
      ATerm l_9 = NULL,m_9 = NULL,n_9 = NULL,y_3 = NULL;
      n_9 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_9 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(n_9);
      l_9 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_9);
      y_3 = t;
      t = SSLsetAnnotations(y_3, l_9);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_23;
    }
  return(t);
}
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm o_9 = NULL,p_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_9 = ATgetFirst((ATermList) t);
      p_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_9, p_9);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL,u_9 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_23 = ATgetArgument(t, 0);
      if(match_cons(w_23, sym__2))
        {
          q_9 = ATgetArgument(w_23, 0);
          r_9 = ATgetArgument(w_23, 1);
        }
      else
        _fail(t);
      {
        ATerm a_24 = ATgetArgument(t, 1);
        if(match_cons(a_24, sym__2))
          {
            s_9 = ATgetArgument(a_24, 0);
            u_9 = ATgetArgument(a_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_9), q_9), (ATerm) ATinsert(CheckATermList(u_9), r_9));
  return(t);
}
ATerm c_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_9 = ATgetFirst((ATermList) t);
      x_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_9, x_9);
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm y_9 = NULL,b_10 = NULL,d_10 = NULL,g_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_24 = ATgetArgument(t, 0);
      if(match_cons(c_24, sym__2))
        {
          y_9 = ATgetArgument(c_24, 0);
          b_10 = ATgetArgument(c_24, 1);
        }
      else
        _fail(t);
      {
        ATerm d_24 = ATgetArgument(t, 1);
        if(match_cons(d_24, sym__2))
          {
            d_10 = ATgetArgument(d_24, 0);
            g_10 = ATgetArgument(d_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_10), y_9), (ATerm) ATinsert(CheckATermList(g_10), b_10));
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm e_24 = t;
  if((PushChoice() == 0))
    {
      ATerm j_12 = NULL,m_12 = NULL,p_12 = NULL,a_4 = NULL;
      p_12 = t;
      if(match_cons(t, sym_Var_1))
        {
          m_12 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_12);
      j_12 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, m_12);
      a_4 = t;
      t = SSLsetAnnotations(a_4, j_12);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_24;
    }
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
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
  ATerm t_12 = NULL,u_12 = NULL,d_13 = NULL,e_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if(match_cons(f_24, sym__2))
        {
          t_12 = ATgetArgument(f_24, 0);
          u_12 = ATgetArgument(f_24, 1);
        }
      else
        _fail(t);
      {
        ATerm h_24 = ATgetArgument(t, 1);
        if(match_cons(h_24, sym__2))
          {
            d_13 = ATgetArgument(h_24, 0);
            e_13 = ATgetArgument(h_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_13), t_12), (ATerm) ATinsert(CheckATermList(e_13), u_12));
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_f_23;
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm g_13 = NULL,j_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_13 = ATgetFirst((ATermList) t);
      j_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_13, j_13);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm k_13 = NULL,q_13 = NULL,r_13 = NULL,t_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_24 = ATgetArgument(t, 0);
      if(match_cons(i_24, sym__2))
        {
          k_13 = ATgetArgument(i_24, 0);
          q_13 = ATgetArgument(i_24, 1);
        }
      else
        _fail(t);
      {
        ATerm l_24 = ATgetArgument(t, 1);
        if(match_cons(l_24, sym__2))
          {
            r_13 = ATgetArgument(l_24, 0);
            t_13 = ATgetArgument(l_24, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_13), k_13), (ATerm) ATinsert(CheckATermList(t_13), q_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm q_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
      q_16 = ATgetArgument(t, 2);
      {
        ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL,z_3 = NULL;
        t = q_16;
        t = fetch_1_0(t_2, t);
        t = q_16;
        t = genzip_4_0(u_2, z_2, b_3, LiftPrimArg_0_0, t);
        k_9 = t;
        if(match_cons(t, sym__2))
          {
            g_9 = ATgetArgument(t, 0);
            h_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_9);
        f_9 = t;
        t = g_9;
        t = concat_0_0(t);
        i_9 = t;
        t = h_9;
        t = genzip_4_0(c_3, e_3, f_3, _id, t);
        j_9 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_9, j_9);
        z_3 = t;
        t = SSLsetAnnotations(z_3, f_9);
        if(match_cons(t, sym__2))
          {
            c_9 = ATgetArgument(t, 0);
            {
              ATerm m_24 = ATgetArgument(t, 1);
              if(match_cons(m_24, sym__2))
                {
                  d_9 = ATgetArgument(m_24, 0);
                  e_9 = ATgetArgument(m_24, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, c_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, d_9), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, y_16, e_9)));
      }
    }
  else
    {
      ATerm a_11 = NULL,b_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,b_12 = NULL,g_12 = NULL,c_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          x_16 = ATgetArgument(t, 0);
          y_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_16;
      t = fetch_1_0(m_3, t);
      t = y_16;
      t = genzip_4_0(n_3, o_3, p_3, LiftPrimArg_0_0, t);
      g_12 = t;
      if(match_cons(t, sym__2))
        {
          v_11 = ATgetArgument(t, 0);
          w_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_12);
      u_11 = t;
      t = v_11;
      t = concat_0_0(t);
      x_11 = t;
      t = w_11;
      t = genzip_4_0(q_3, r_3, u_3, _id, t);
      b_12 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_11, b_12);
      c_4 = t;
      t = SSLsetAnnotations(c_4, u_11);
      if(match_cons(t, sym__2))
        {
          a_11 = ATgetArgument(t, 0);
          {
            ATerm n_24 = ATgetArgument(t, 1);
            if(match_cons(n_24, sym__2))
              {
                b_11 = ATgetArgument(n_24, 0);
                t_11 = ATgetArgument(n_24, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, a_11, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_11), (ATerm) ATmakeAppl(sym_PrimT_3, x_16, (ATerm)ATempty, t_11)));
    }
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,w_17 = NULL,c_18 = NULL;
  c_18 = t;
  if(match_cons(t, sym_Con_3))
    {
      u_17 = ATgetArgument(t, 0);
      v_17 = ATgetArgument(t, 1);
      w_17 = ATgetArgument(t, 2);
      {
        ATerm i_14 = NULL,i_4 = NULL;
        t = SSLgetAnnotations(c_18);
        i_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, u_17, v_17, w_17);
        i_4 = t;
        t = SSLsetAnnotations(i_4, i_14);
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
  ATerm q_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(v_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_24;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm e_19 = NULL,g_19 = NULL,l_19 = NULL,m_19 = NULL;
  g_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
      e_19 = ATgetArgument(t, 2);
      {
        ATerm b_15 = NULL,k_4 = NULL;
        t = SSLgetAnnotations(g_19);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, l_19, m_19, e_19);
        k_4 = t;
        t = SSLsetAnnotations(k_4, b_15);
      }
    }
  else
    {
      ATerm v_16 = NULL,l_4 = NULL;
      if(match_cons(t, sym_App_2))
        {
          l_19 = ATgetArgument(t, 0);
          m_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_19);
      v_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, l_19, m_19);
      l_4 = t;
      t = SSLsetAnnotations(l_4, v_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_24 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(x_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_24;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
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
      z_19 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, y_19), (ATerm) ATmakeAppl(sym_Where_1, z_19)), x_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          x_19 = ATgetArgument(t, 0);
          y_19 = ATgetArgument(t, 1);
          z_19 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = x_19;
      t = pureterm_0_0(t);
      t = y_19;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, y_19)), (ATerm) ATmakeAppl(sym_Where_1, z_19)), (ATerm) ATmakeAppl(sym_Match_1, x_19)));
    }
  return(t);
}
ATerm o_8 (ATerm d_87, ATerm e_87, ATerm f_87, ATerm t)
{
  ATerm j_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  t = new_0_0(t);
  if(((r_20 != NULL) && (r_20 != t)))
    _fail(t);
  else
    r_20 = t;
  t = not_null(d_87);
  {
    ATerm b_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm s_24 = ATgetArgument(t, 0);
          if(match_cons(s_24, sym_Var_1))
            {
              if(((q_20 != NULL) && (q_20 != ATgetArgument(s_24, 0))))
                _fail(ATgetArgument(s_24, 0));
              else
                q_20 = ATgetArgument(s_24, 0);
            }
          else
            _fail(t);
          if(((o_20 != NULL) && (o_20 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            o_20 = ATgetArgument(t, 1);
          {
            ATerm t_24 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(q_20));
      return(t);
    }
    t = oncetd_1_0(b_4, t);
    if(((s_20 != NULL) && (s_20 != t)))
      _fail(t);
    else
      s_20 = t;
    t = not_null(e_87);
    {
      ATerm d_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm v_24 = ATgetArgument(t, 0);
            if(match_cons(v_24, sym_Var_1))
              {
                if(((q_20 != NULL) && (q_20 != ATgetArgument(v_24, 0))))
                  _fail(ATgetArgument(v_24, 0));
                else
                  q_20 = ATgetArgument(v_24, 0);
              }
            else
              _fail(t);
            if(((p_20 != NULL) && (p_20 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              p_20 = ATgetArgument(t, 1);
            {
              ATerm w_24 = ATgetArgument(t, 2);
              if(match_cons(w_24, sym_CallT_3))
                {
                  if(((j_20 != NULL) && (j_20 != ATgetArgument(w_24, 0))))
                    _fail(ATgetArgument(w_24, 0));
                  else
                    j_20 = ATgetArgument(w_24, 0);
                  {
                    ATerm x_24 = ATgetArgument(w_24, 1);
                    if(((ATgetType(x_24) != AT_LIST) || !(ATisEmpty(x_24))))
                      _fail(t);
                  }
                  {
                    ATerm y_24 = ATgetArgument(w_24, 2);
                    if(((ATgetType(y_24) != AT_LIST) || !(ATisEmpty(y_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, not_null(r_20));
        return(t);
      }
      t = oncetd_1_0(d_4, t);
      if(((t_20 != NULL) && (t_20 != t)))
        _fail(t);
      else
        t_20 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, not_null(r_20)), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_20), not_null(t_20), (ATerm) ATmakeAppl(sym_Seq_2, not_null(f_87), (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(j_20), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(o_20), not_null(p_20), term_u_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(q_20)), (ATerm) ATmakeAppl(sym_Var_1, not_null(r_20)))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_25 = t;
      int c_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_21 = NULL,v_21 = NULL,z_21 = NULL,a_22 = NULL,d_22 = NULL,e_22 = NULL;
          a_22 = t;
          if(match_cons(t, sym_SRule_1))
            {
              d_22 = ATgetArgument(t, 0);
              t = d_22;
              if(match_cons(t, sym_Rule_3))
                {
                  u_21 = ATgetArgument(t, 0);
                  v_21 = ATgetArgument(t, 1);
                  z_21 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_22;
              t = o_8(u_21, v_21, z_21, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm r_17 = NULL,z_17 = NULL,o_4 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  d_22 = ATgetArgument(t, 0);
                  e_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(a_22);
              r_17 = t;
              t = e_22;
              t = desugarRule_0_0(t);
              z_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, d_22, z_17);
              o_4 = t;
              t = SSLsetAnnotations(o_4, r_17);
            }
          ;
          LocalPopChoice(c_25);
        }
      else
        {
          t = b_25;
          t = RtoS_0_0(t);
        }
      ;
      LocalPopChoice(a_25);
    }
  else
    {
      t = z_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm v_118 (ATerm), ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    t = topdown_1_0(v_118, t);
    return(t);
  }
  t = v_118(t);
  t = SRTS_all(e_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
    }
  t = repeat_1_0(g_4, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm g_25 = t;
  int h_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(h_25);
    }
  else
    {
      t = g_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL,s_23 = NULL;
            i_23 = t;
            if(match_cons(t, sym_CallT_3))
              {
                j_23 = ATgetArgument(t, 0);
                k_23 = ATgetArgument(t, 1);
                s_23 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = i_23;
            t = l_8(j_23, k_23, s_23, t);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm l_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = l_25;
                  {
                    ATerm p_25 = t;
                    int q_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(q_25);
                      }
                    else
                      {
                        t = p_25;
                        {
                          ATerm r_25 = t;
                          int t_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm u_25 = t;
                              int v_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm x_23 = NULL,y_23 = NULL,z_23 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      if(((x_23 != NULL) && (x_23 != ATgetArgument(t, 0))))
                                        _fail(ATgetArgument(t, 0));
                                      else
                                        x_23 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = not_null(x_23);
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      y_23 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_25 = t;
                                        int x_25 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm b_24 = NULL,g_24 = NULL;
                                            t = not_null(x_23);
                                            {
                                              ATerm h_4 (ATerm t)
                                              {
                                                if(match_cons(t, sym_RootApp_1))
                                                  {
                                                    ATerm y_25 = ATgetArgument(t, 0);
                                                    if(match_cons(y_25, sym_Match_1))
                                                      {
                                                        if(((b_24 != NULL) && (b_24 != ATgetArgument(y_25, 0))))
                                                          _fail(ATgetArgument(y_25, 0));
                                                        else
                                                          b_24 = ATgetArgument(y_25, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = not_null(b_24);
                                                return(t);
                                              }
                                              t = pat_td_1_0(h_4, t);
                                              if(((g_24 != NULL) && (g_24 != t)))
                                                _fail(t);
                                              else
                                                g_24 = t;
                                              t = (ATerm) ATmakeAppl(sym_Match_1, not_null(g_24));
                                            }
                                            ;
                                            LocalPopChoice(x_25);
                                          }
                                        else
                                          {
                                            t = w_25;
                                            t = not_null(y_23);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          y_23 = ATgetArgument(t, 0);
                                          z_23 = ATgetArgument(t, 1);
                                          {
                                            ATerm z_25 = t;
                                            int a_26 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm j_24 = NULL,k_24 = NULL;
                                                t = not_null(x_23);
                                                {
                                                  ATerm j_4 (ATerm t)
                                                  {
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        ATerm b_26 = ATgetArgument(t, 0);
                                                        if(match_cons(b_26, sym_Match_1))
                                                          {
                                                            if(((j_24 != NULL) && (j_24 != ATgetArgument(b_26, 0))))
                                                              _fail(ATgetArgument(b_26, 0));
                                                            else
                                                              j_24 = ATgetArgument(b_26, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = not_null(j_24);
                                                    return(t);
                                                  }
                                                  t = pat_td_1_0(j_4, t);
                                                  if(((k_24 != NULL) && (k_24 != t)))
                                                    _fail(t);
                                                  else
                                                    k_24 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Match_1, not_null(k_24));
                                                }
                                                ;
                                                LocalPopChoice(a_26);
                                              }
                                            else
                                              {
                                                t = z_25;
                                                t = (ATerm) ATmakeAppl(sym_BA_2, not_null(y_23), not_null(z_23));
                                              }
                                          }
                                        }
                                      else
                                        {
                                          ATerm o_24 = NULL,p_24 = NULL;
                                          t = not_null(x_23);
                                          {
                                            ATerm m_4 (ATerm t)
                                            {
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  ATerm c_26 = ATgetArgument(t, 0);
                                                  if(match_cons(c_26, sym_Match_1))
                                                    {
                                                      if(((o_24 != NULL) && (o_24 != ATgetArgument(c_26, 0))))
                                                        _fail(ATgetArgument(c_26, 0));
                                                      else
                                                        o_24 = ATgetArgument(c_26, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              else
                                                _fail(t);
                                              t = not_null(o_24);
                                              return(t);
                                            }
                                            t = pat_td_1_0(m_4, t);
                                            if(((p_24 != NULL) && (p_24 != t)))
                                              _fail(t);
                                            else
                                              p_24 = t;
                                            t = (ATerm) ATmakeAppl(sym_Match_1, not_null(p_24));
                                          }
                                        }
                                    }
                                  ;
                                  LocalPopChoice(v_25);
                                }
                              else
                                {
                                  t = u_25;
                                  t = Mapp2_0_0(t);
                                }
                              ;
                              LocalPopChoice(t_25);
                            }
                          else
                            {
                              t = r_25;
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
  t = topdown_1_0(f_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm h_21 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      h_21 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, h_21);
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm d_26 = t;
  int e_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(e_26);
    }
  else
    {
      t = d_26;
      {
        ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL,n_21 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            j_21 = ATgetArgument(t, 0);
            t = j_21;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                j_21 = ATgetArgument(t, 0);
                k_21 = ATgetArgument(t, 1);
                l_21 = ATgetArgument(t, 2);
                n_21 = ATgetArgument(t, 3);
                t = l_21;
                t = map_1_0(q_4, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    j_21 = ATgetArgument(t, 0);
                    k_21 = ATgetArgument(t, 1);
                    l_21 = ATgetArgument(t, 2);
                    n_21 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_21;
                t = map_1_0(s_4, t);
              }
          }
      }
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm y_21 = NULL;
  ATerm h_26 = t;
  int j_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_21 = ATgetArgument(t, 0);
          {
            ATerm k_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_26);
      t = y_21;
    }
  else
    {
      t = h_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_21 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_21;
    }
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm m_22 = NULL;
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_22 = ATgetArgument(t, 0);
          {
            ATerm o_26 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_26);
      t = m_22;
    }
  else
    {
      t = l_26;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_22 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_22;
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm n_28 = NULL,o_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,h_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,v_29 = NULL,x_29 = NULL,y_29 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Seq_2))
    {
      o_28 = ATgetArgument(t, 0);
      o_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_28;
  if(match_cons(t, sym_CallT_3))
    {
      y_28 = ATgetArgument(t, 0);
      a_29 = ATgetArgument(t, 1);
      h_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = y_28;
  if(match_cons(t, sym_SVar_1))
    {
      z_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_28;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = a_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = o_29;
  if(match_cons(t, sym_Seq_2))
    {
      p_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_29;
  if(match_cons(t, sym_Match_1))
    {
      q_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_29;
  if(match_cons(t, sym_Seq_2))
    {
      u_29 = ATgetArgument(t, 0);
      x_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_29;
  if(match_cons(t, sym_Where_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_29;
  if(match_cons(t, sym_Build_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm q_26 = t;
    int r_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,f_20 = NULL,k_20 = NULL;
        t = term_c_27;
        f_20 = t;
        t = term_d_27;
        k_20 = t;
        t = term_e_27;
        t = y_11(k_20, f_20, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_27 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_27) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            i_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, v_29, y_29);
        s_19 = t;
        t = (ATerm) ATmakeAppl(sym__3, i_19, q_29, (ATerm) ATmakeAppl(sym__2, v_29, y_29));
        t = v_9(i_19, q_29, s_19, t);
        if(match_cons(t, sym__2))
          {
            q_19 = ATgetArgument(t, 0);
            r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_29), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, q_19), (ATerm) ATmakeAppl(sym_Build_1, r_19)));
        ;
        LocalPopChoice(r_26);
      }
    else
      {
        t = q_26;
        {
          ATerm w_20 = NULL,f_21 = NULL,c_23 = NULL,d_23 = NULL;
          t = term_c_27;
          if(((c_23 != NULL) && (c_23 != t)))
            _fail(t);
          else
            c_23 = t;
          t = term_d_27;
          if(((d_23 != NULL) && (d_23 != t)))
            _fail(t);
          else
            d_23 = t;
          t = term_e_27;
          t = y_11(not_null(d_23), not_null(c_23), t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm g_27 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) g_27) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              if(((w_20 != NULL) && (w_20 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                w_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(q_29);
          t = free_vars_3_0(n_4, p_4, tboundin_3_0, t);
          {
            ATerm a_5 (ATerm t)
            {
              ATerm c_5 (ATerm t)
              {
                ATerm p_22 = NULL,q_22 = NULL,v_22 = NULL;
                p_22 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, not_null(w_20), (ATerm) ATmakeAppl(sym_Var_1, p_22));
                q_22 = t;
                t = term_i_27;
                v_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(w_20), (ATerm) ATmakeAppl(sym_Var_1, p_22)), term_i_27);
                t = z_11(e_5, q_22, v_22, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_22);
                return(t);
              }
              t = map_1_0(c_5, t);
              t = (ATerm) ATmakeAppl(sym__2, not_null(v_29), not_null(y_29));
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    f_21 = ATgetArgument(t, 0);
                  {
                    ATerm j_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(y_4, a_5, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(q_29)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(f_21)), (ATerm) ATmakeAppl(sym_Build_1, not_null(y_29))));
          }
        }
      }
  }
  return(t);
}
ATerm w_31 (ATerm e_31, ATerm f_31, ATerm t)
{
  ATerm o_23 = NULL;
  t = term_p_26;
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_26, f_31);
  t = y_11(o_23, f_31, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm k_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_27) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = e_31;
  return(t);
}
ATerm x_31 (ATerm k_31, ATerm l_31, ATerm t)
{
  ATerm r_23 = NULL;
  t = term_p_26;
  r_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_26, l_31);
  t = y_11(r_23, l_31, t);
  if(match_cons(t, sym_Defined_1))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_27) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = k_31;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL,s_31 = NULL;
  q_31 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm m_27 = ATgetArgument(t, 0);
      s_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_31;
  if(match_cons(t, sym_Var_1))
    {
      p_31 = ATgetArgument(t, 0);
      {
        ATerm o_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL;
            t = term_p_26;
            u_24 = t;
            t = (ATerm) ATmakeAppl(sym__2, term_p_26, q_31);
            t = y_11(u_24, q_31, t);
            if(match_cons(t, sym_Defined_1))
              {
                ATerm q_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) q_27) != ATmakeSymbol("u_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, p_31);
            ;
            LocalPopChoice(p_27);
          }
        else
          {
            t = o_27;
            {
              ATerm r_27 = t;
              int s_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_31(s_31, q_31, t);
                  ;
                  LocalPopChoice(s_27);
                }
              else
                {
                  t = r_27;
                  t = x_31(s_31, q_31, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm t_27 = t;
      int u_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_31(s_31, q_31, t);
          ;
          LocalPopChoice(u_27);
        }
      else
        {
          t = t_27;
          t = x_31(s_31, q_31, t);
        }
    }
  return(t);
}
ATerm p_8 (ATerm l_57, ATerm m_57, ATerm t)
{
  ATerm y_31 = NULL,a_32 = NULL;
  a_32 = t;
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
        t = n_12(l_57, m_57, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm x_27 = ATgetFirst((ATermList) t);
            y_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(w_27);
        t = SSL_table_put(l_57, m_57, y_31);
        t = (ATerm) ATmakeAppl(sym__3, l_57, m_57, y_31);
      }
    else
      {
        t = v_27;
        t = SSL_table_remove(l_57, m_57);
        t = (ATerm) ATmakeAppl(sym__2, l_57, m_57);
      }
    t = a_32;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_131 (ATerm), ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  if(((e_32 != NULL) && (e_32 != t)))
    _fail(t);
  else
    e_32 = t;
  t = f_131(t);
  if(((d_32 != NULL) && (d_32 != t)))
    _fail(t);
  else
    d_32 = t;
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_32 = NULL;
        t = term_a_28;
        i_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), term_a_28);
        t = n_12(not_null(d_32), i_32, t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_32 != NULL) && (c_32 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_32 = ATgetFirst((ATermList) t);
        if(((b_32 != NULL) && (b_32 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_28;
    if(((f_32 != NULL) && (f_32 != t)))
      _fail(t);
    else
      f_32 = t;
    t = SSL_table_put(not_null(d_32), not_null(f_32), not_null(b_32));
    t = not_null(c_32);
    {
      ATerm i_5 (ATerm t)
      {
        ATerm j_32 = NULL;
        j_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_32), j_32);
        t = p_8(not_null(d_32), j_32, t);
        return(t);
      }
      t = map_1_0(i_5, t);
      t = not_null(e_32);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t)
{
  ATerm b_28 = t;
  int c_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_122(t);
      t = d_122(t);
      ;
      LocalPopChoice(c_28);
    }
  else
    {
      t = b_28;
      t = d_122(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_131 (ATerm), ATerm t)
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,q_32 = NULL,r_32 = NULL;
  o_32 = t;
  t = e_131(t);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_32, term_a_28);
  {
    ATerm d_28 = t;
    int e_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_32 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm f_28 = ATgetArgument(t, 0);
            ATerm g_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_a_28;
        z_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_32, term_a_28);
        t = n_12(n_32, z_32, t);
        ;
        LocalPopChoice(e_28);
      }
    else
      {
        t = d_28;
        t = (ATerm) ATempty;
      }
    p_32 = t;
    t = term_a_28;
    q_32 = t;
    t = (ATerm) ATinsert(CheckATermList(p_32), (ATerm) ATempty);
    r_32 = t;
    t = SSL_table_put(n_32, q_32, r_32);
    t = o_32;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  ATerm j_5 (ATerm t)
  {
    t = end_scope_1_0(g_131, t);
    return(t);
  }
  t = begin_scope_1_0(g_131, t);
  t = restore_always_2_0(h_131, j_5, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm g_33 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_33);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm h_28 = t;
  int i_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_28);
    }
  else
    {
      t = h_28;
      {
        ATerm i_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_33 = ATgetArgument(t, 0);
            t = i_33;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_33 = ATgetArgument(t, 0);
                k_33 = ATgetArgument(t, 1);
                l_33 = ATgetArgument(t, 2);
                m_33 = ATgetArgument(t, 3);
                t = l_33;
                t = map_1_0(p_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_33 = ATgetArgument(t, 0);
                    k_33 = ATgetArgument(t, 1);
                    l_33 = ATgetArgument(t, 2);
                    m_33 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = l_33;
                t = map_1_0(q_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm t)
{
  ATerm x_33 = NULL;
  ATerm j_28 = t;
  int k_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_33 = ATgetArgument(t, 0);
          {
            ATerm l_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_28);
      t = x_33;
    }
  else
    {
      t = j_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_33 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_33;
    }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm j_34 = NULL;
  ATerm m_28 = t;
  int p_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_34 = ATgetArgument(t, 0);
          {
            ATerm r_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_28);
      t = j_34;
    }
  else
    {
      t = m_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_34 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_34;
    }
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm v_9 (ATerm c_44, ATerm b_44, ATerm d_44, ATerm t)
{
  ATerm d_33 = NULL;
  ATerm l_5 (ATerm t)
  {
    t = not_null(b_44);
    t = free_vars_3_0(n_5, o_5, tboundin_3_0, t);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm p_34 = NULL,y_34 = NULL,z_34 = NULL;
        p_34 = t;
        t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_44), (ATerm) ATmakeAppl(sym_Var_1, p_34));
        y_34 = t;
        t = term_w_28;
        z_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(c_44), (ATerm) ATmakeAppl(sym_Var_1, p_34)), term_w_28);
        t = z_11(s_5, y_34, z_34, t);
        t = p_34;
        return(t);
      }
      t = map_1_0(r_5, t);
      t = not_null(d_44);
      t = alltd_1_0(Replace_0_0, t);
      if(((d_33 != NULL) && (d_33 != t)))
        _fail(t);
      else
        d_33 = t;
    }
    return(t);
  }
  t = scope_2_0(k_5, l_5, t);
  t = not_null(d_33);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm g_26 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, g_26);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm x_28 = t;
  int b_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(b_29);
    }
  else
    {
      t = x_28;
      {
        ATerm i_26 = NULL,n_26 = NULL,v_26 = NULL,w_26 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            i_26 = ATgetArgument(t, 0);
            t = i_26;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                i_26 = ATgetArgument(t, 0);
                n_26 = ATgetArgument(t, 1);
                v_26 = ATgetArgument(t, 2);
                w_26 = ATgetArgument(t, 3);
                t = v_26;
                t = map_1_0(x_5, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    i_26 = ATgetArgument(t, 0);
                    n_26 = ATgetArgument(t, 1);
                    v_26 = ATgetArgument(t, 2);
                    w_26 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = v_26;
                t = map_1_0(y_5, t);
              }
          }
      }
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm n_27 = NULL;
  ATerm e_29 = t;
  int f_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_27 = ATgetArgument(t, 0);
          {
            ATerm g_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_29);
      t = n_27;
    }
  else
    {
      t = e_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_27;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm q_28 = NULL;
  ATerm i_29 = t;
  int j_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_28 = ATgetArgument(t, 0);
          {
            ATerm k_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_29);
      t = q_28;
    }
  else
    {
      t = i_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_28 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_28;
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_p_26;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL,m_38 = NULL,n_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  d_38 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_38 = ATgetArgument(t, 0);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_38;
  if(match_cons(t, sym_CallT_3))
    {
      f_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
      i_38 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_38;
  if(match_cons(t, sym_SVar_1))
    {
      g_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_38;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = h_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_38;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_38;
  if(match_cons(t, sym_Seq_2))
    {
      n_38 = ATgetArgument(t, 0);
      q_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_38;
  if(match_cons(t, sym_Match_1))
    {
      p_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_38;
  if(match_cons(t, sym_Build_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_29 = t;
    int m_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_25 = NULL,i_25 = NULL,m_25 = NULL,n_25 = NULL;
        t = term_s_29;
        m_25 = t;
        t = term_t_29;
        n_25 = t;
        t = term_w_29;
        t = y_11(n_25, m_25, t);
        if(match_cons(t, sym_Defined_2))
          {
            ATerm z_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) z_29) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            f_25 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, f_25, p_38, r_38);
        t = v_9(f_25, p_38, r_38, t);
        i_25 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_38), (ATerm) ATmakeAppl(sym_Build_1, i_25));
        ;
        LocalPopChoice(m_29);
      }
    else
      {
        t = l_29;
        {
          ATerm s_25 = NULL,f_26 = NULL,c_29 = NULL,d_29 = NULL;
          t = term_s_29;
          if(((c_29 != NULL) && (c_29 != t)))
            _fail(t);
          else
            c_29 = t;
          t = term_t_29;
          if(((d_29 != NULL) && (d_29 != t)))
            _fail(t);
          else
            d_29 = t;
          t = term_w_29;
          t = y_11(not_null(d_29), not_null(c_29), t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm a_30 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_30) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              if(((s_25 != NULL) && (s_25 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                s_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(p_38);
          t = free_vars_3_0(t_5, u_5, tboundin_3_0, t);
          {
            ATerm b_6 (ATerm t)
            {
              ATerm c_6 (ATerm t)
              {
                ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL;
                t_28 = t;
                t = (ATerm) ATmakeAppl(sym_App_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Var_1, t_28));
                u_28 = t;
                t = term_c_30;
                v_28 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, not_null(s_25), (ATerm) ATmakeAppl(sym_Var_1, t_28)), term_c_30);
                t = z_11(e_6, u_28, v_28, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, t_28);
                return(t);
              }
              t = map_1_0(c_6, t);
              t = not_null(r_38);
              t = alltd_1_0(Replace_0_0, t);
              if(((f_26 != NULL) && (f_26 != t)))
                _fail(t);
              else
                f_26 = t;
              return(t);
            }
            t = scope_2_0(a_6, b_6, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, not_null(p_38)), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_26)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm f_6 (ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL,z_40 = NULL,a_41 = NULL,c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL,i_41 = NULL,j_41 = NULL,s_41 = NULL;
    s_41 = t;
    if(match_cons(t, sym_Seq_2))
      {
        w_40 = ATgetArgument(t, 0);
        g_41 = ATgetArgument(t, 1);
        t = w_40;
        if(match_cons(t, sym_Choice_2))
          {
            x_40 = ATgetArgument(t, 0);
            a_41 = ATgetArgument(t, 1);
            {
              ATerm d_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_30 = NULL,i_30 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, g_41);
                  h_30 = t;
                  t = term_g_30;
                  i_30 = t;
                  t = (ATerm) ATmakeAppl(sym__2, term_g_30, (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, g_41));
                  t = y_11(i_30, h_30, t);
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm j_30 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) j_30) != ATmakeSymbol("c_2", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, x_40, g_41), (ATerm) ATmakeAppl(sym_Seq_2, a_41, g_41));
                  t = bottomup_1_0(f_6, t);
                  ;
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = d_30;
                  t = s_41;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                x_40 = ATgetArgument(t, 0);
                a_41 = ATgetArgument(t, 1);
                {
                  ATerm k_30 = t;
                  int l_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_30 = NULL,x_30 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_30, g_41);
                      w_30 = t;
                      t = term_n_30;
                      x_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, term_n_30, (ATerm) ATmakeAppl(sym_Seq_2, term_m_30, g_41));
                      t = y_11(x_30, w_30, t);
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm o_30 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) o_30) != ATmakeSymbol("f_2", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, x_40, g_41), (ATerm) ATmakeAppl(sym_Seq_2, a_41, g_41));
                      t = bottomup_1_0(f_6, t);
                      ;
                      LocalPopChoice(l_30);
                    }
                  else
                    {
                      t = k_30;
                      t = s_41;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    x_40 = ATgetArgument(t, 0);
                    a_41 = ATgetArgument(t, 1);
                    {
                      ATerm p_30 = t;
                      int q_30 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_42 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, a_41, g_41);
                          t = f_6(t);
                          t_42 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, x_40, t_42);
                          t = f_6(t);
                          ;
                          LocalPopChoice(q_30);
                        }
                      else
                        {
                          t = p_30;
                          t = s_41;
                        }
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Seq_2))
                      {
                        x_40 = ATgetArgument(t, 0);
                        a_41 = ATgetArgument(t, 1);
                        {
                          ATerm r_30 = t;
                          int s_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_43 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, a_41, g_41);
                              t = f_6(t);
                              e_43 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_40, e_43);
                              t = f_6(t);
                              ;
                              LocalPopChoice(s_30);
                            }
                          else
                            {
                              t = r_30;
                              t = s_41;
                            }
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Build_1))
                          {
                            x_40 = ATgetArgument(t, 0);
                            {
                              ATerm t_30 = t;
                              int u_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_43 = NULL;
                                  t = (ATerm) ATmakeAppl(sym_App_2, g_41, x_40);
                                  t = f_6(t);
                                  l_43 = t;
                                  t = (ATerm) ATmakeAppl(sym_Build_1, l_43);
                                  t = f_6(t);
                                  ;
                                  LocalPopChoice(u_30);
                                }
                              else
                                {
                                  t = t_30;
                                  t = s_41;
                                }
                            }
                          }
                        else
                          {
                            t = s_41;
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
            w_40 = ATgetArgument(t, 0);
            g_41 = ATgetArgument(t, 1);
            t = w_40;
            if(match_cons(t, sym_LChoice_2))
              {
                x_40 = ATgetArgument(t, 0);
                a_41 = ATgetArgument(t, 1);
                {
                  ATerm v_30 = t;
                  int y_30 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm f_45 = NULL;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, a_41, g_41);
                      t = f_6(t);
                      f_45 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_40, f_45);
                      t = f_6(t);
                      ;
                      LocalPopChoice(y_30);
                    }
                  else
                    {
                      t = v_30;
                      t = s_41;
                    }
                }
              }
            else
              {
                t = s_41;
              }
          }
        else
          {
            if(match_cons(t, sym_Choice_2))
              {
                w_40 = ATgetArgument(t, 0);
                g_41 = ATgetArgument(t, 1);
                t = w_40;
                if(match_cons(t, sym_Choice_2))
                  {
                    x_40 = ATgetArgument(t, 0);
                    a_41 = ATgetArgument(t, 1);
                    {
                      ATerm z_30 = t;
                      int a_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_45 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, a_41, g_41);
                          t = f_6(t);
                          l_45 = t;
                          t = (ATerm) ATmakeAppl(sym_Choice_2, x_40, l_45);
                          t = f_6(t);
                          ;
                          LocalPopChoice(a_31);
                        }
                      else
                        {
                          t = z_30;
                          t = s_41;
                        }
                    }
                  }
                else
                  {
                    t = s_41;
                  }
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    w_40 = ATgetArgument(t, 0);
                    g_41 = ATgetArgument(t, 1);
                    t = g_41;
                    if(match_cons(t, sym_Op_2))
                      {
                        i_41 = ATgetArgument(t, 0);
                        j_41 = ATgetArgument(t, 1);
                        t = w_40;
                        if(match_cons(t, sym_CallT_3))
                          {
                            x_40 = ATgetArgument(t, 0);
                            a_41 = ATgetArgument(t, 1);
                            f_41 = ATgetArgument(t, 2);
                            t = f_41;
                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                              {
                                t = a_41;
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    c_41 = ATgetFirst((ATermList) t);
                                    d_41 = (ATerm) ATgetNext((ATermList) t);
                                    t = d_41;
                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                      {
                                        t = x_40;
                                        if(match_cons(t, sym_SVar_1))
                                          {
                                            z_40 = ATgetArgument(t, 0);
                                            t = z_40;
                                            if(match_string(t, "bottomup_1_0"))
                                              {
                                                ATerm b_31 = t;
                                                int c_31 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm g_46 = NULL;
                                                    t = not_null(j_41);
                                                    {
                                                      ATerm g_6 (ATerm t)
                                                      {
                                                        ATerm h_46 = NULL;
                                                        h_46 = t;
                                                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, not_null(c_41)), (ATerm) ATempty), h_46);
                                                        return(t);
                                                      }
                                                      t = map_1_0(g_6, t);
                                                      if(((g_46 != NULL) && (g_46 != t)))
                                                        _fail(t);
                                                      else
                                                        g_46 = t;
                                                      t = (ATerm) ATmakeAppl(sym_App_2, not_null(c_41), (ATerm) ATmakeAppl(sym_Op_2, not_null(i_41), not_null(g_46)));
                                                      t = bottomup_1_0(f_6, t);
                                                    }
                                                    ;
                                                    LocalPopChoice(c_31);
                                                  }
                                                else
                                                  {
                                                    t = b_31;
                                                    t = s_41;
                                                  }
                                              }
                                            else
                                              {
                                                t = s_41;
                                              }
                                          }
                                        else
                                          {
                                            t = s_41;
                                          }
                                      }
                                    else
                                      {
                                        t = s_41;
                                      }
                                  }
                                else
                                  {
                                    t = s_41;
                                  }
                              }
                            else
                              {
                                t = s_41;
                              }
                          }
                        else
                          {
                            t = s_41;
                          }
                      }
                    else
                      {
                        t = s_41;
                      }
                  }
                else
                  {
                    t = s_41;
                  }
              }
          }
      }
    return(t);
  }
  t = bottomup_1_0(f_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm w_118 (ATerm), ATerm t)
{
  ATerm j_6 (ATerm t)
  {
    t = bottomup_1_0(w_118, t);
    return(t);
  }
  t = SRTS_all(j_6, t);
  t = w_118(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm k_6 (ATerm t)
  {
    ATerm n_47 = NULL,o_47 = NULL,p_47 = NULL,t_47 = NULL,u_47 = NULL;
    u_47 = t;
    if(match_cons(t, sym_Seq_2))
      {
        n_47 = ATgetArgument(t, 0);
        o_47 = ATgetArgument(t, 1);
        t = o_47;
        if(match_cons(t, sym_Choice_2))
          {
            p_47 = ATgetArgument(t, 0);
            t_47 = ATgetArgument(t, 1);
            {
              ATerm h_31 = t;
              int i_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_48 = NULL,f_48 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, p_47);
                  t = k_6(t);
                  e_48 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, t_47);
                  t = k_6(t);
                  f_48 = t;
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_48, f_48);
                  t = k_6(t);
                  ;
                  LocalPopChoice(i_31);
                }
              else
                {
                  t = h_31;
                  t = u_47;
                }
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                p_47 = ATgetArgument(t, 0);
                t_47 = ATgetArgument(t, 1);
                {
                  ATerm m_31 = t;
                  int n_31 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm x_48 = NULL,y_48 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, p_47);
                      t = k_6(t);
                      x_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, t_47);
                      t = k_6(t);
                      y_48 = t;
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_48, y_48);
                      t = k_6(t);
                      ;
                      LocalPopChoice(n_31);
                    }
                  else
                    {
                      t = m_31;
                      t = u_47;
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    p_47 = ATgetArgument(t, 0);
                    t_47 = ATgetArgument(t, 1);
                    {
                      ATerm o_31 = t;
                      int r_31 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm f_49 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, n_47, t_47);
                          t = k_6(t);
                          f_49 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, p_47, f_49);
                          t = k_6(t);
                          ;
                          LocalPopChoice(r_31);
                        }
                      else
                        {
                          t = o_31;
                          t = u_47;
                        }
                    }
                  }
                else
                  {
                    t = u_47;
                  }
              }
          }
      }
    else
      {
        t = u_47;
      }
    return(t);
  }
  t = bottomup_1_0(k_6, t);
  return(t);
}
ATerm Seq_2_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm t)
{
  ATerm n_49 = NULL,p_49 = NULL,r_49 = NULL,s_49 = NULL,y_49 = NULL,a_50 = NULL,r_4 = NULL;
  a_50 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_49 = ATgetArgument(t, 0);
      r_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_50);
  n_49 = t;
  t = p_49;
  t = z_108(t);
  s_49 = t;
  t = r_49;
  t = a_109(t);
  y_49 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, s_49, y_49);
  r_4 = t;
  t = SSLsetAnnotations(r_4, n_49);
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,f_5 = NULL;
  w_35 = t;
  if(match_cons(t, sym_Build_1))
    {
      v_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_35);
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, v_35);
  f_5 = t;
  t = SSLsetAnnotations(f_5, u_35);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm t_31 = t;
  int u_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
          {
            ATerm k_32 = t;
            int l_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
                n_54 = t;
                if(match_cons(t, sym_Choice_2))
                  {
                    o_54 = ATgetArgument(t, 0);
                    p_54 = ATgetArgument(t, 1);
                    {
                      ATerm j_31 = NULL,v_31 = NULL,z_31 = NULL,t_4 = NULL;
                      t = SSLgetAnnotations(n_54);
                      j_31 = t;
                      t = o_54;
                      t = inline_rules_0_0(t);
                      v_31 = t;
                      t = p_54;
                      t = inline_rules_0_0(t);
                      z_31 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, v_31, z_31);
                      t_4 = t;
                      t = SSLsetAnnotations(t_4, j_31);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_LChoice_2))
                      {
                        o_54 = ATgetArgument(t, 0);
                        p_54 = ATgetArgument(t, 1);
                        {
                          ATerm x_32 = NULL,b_33 = NULL,c_33 = NULL,u_4 = NULL;
                          t = SSLgetAnnotations(n_54);
                          x_32 = t;
                          t = o_54;
                          t = inline_rules_0_0(t);
                          b_33 = t;
                          t = p_54;
                          t = inline_rules_0_0(t);
                          c_33 = t;
                          t = (ATerm) ATmakeAppl(sym_LChoice_2, b_33, c_33);
                          u_4 = t;
                          t = SSLsetAnnotations(u_4, x_32);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            o_54 = ATgetArgument(t, 0);
                            p_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        {
                          ATerm m_32 = t;
                          int s_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_34 = NULL,m_34 = NULL,o_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL,u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,z_4 = NULL,x_4 = NULL,w_4 = NULL,v_4 = NULL;
                              t = SSLgetAnnotations(n_54);
                              d_34 = t;
                              t = p_54;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  o_34 = ATgetArgument(t, 0);
                                  q_34 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(p_54);
                              m_34 = t;
                              t = o_34;
                              if(match_cons(t, sym_Match_1))
                                {
                                  w_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(o_34);
                              v_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Match_1, w_34);
                              v_4 = t;
                              t = SSLsetAnnotations(v_4, v_34);
                              x_34 = t;
                              t = q_34;
                              if(match_cons(t, sym_Build_1))
                                {
                                  t_34 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = SSLgetAnnotations(q_34);
                              s_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Build_1, t_34);
                              w_4 = t;
                              t = SSLsetAnnotations(w_4, s_34);
                              u_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, x_34, u_34);
                              x_4 = t;
                              t = SSLsetAnnotations(x_4, m_34);
                              r_34 = t;
                              t = (ATerm) ATmakeAppl(sym_Scope_2, o_54, r_34);
                              z_4 = t;
                              t = SSLsetAnnotations(z_4, d_34);
                              ;
                              LocalPopChoice(s_32);
                            }
                          else
                            {
                              t = m_32;
                              {
                                ATerm h_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL,h_5 = NULL,g_5 = NULL,d_5 = NULL;
                                t = SSLgetAnnotations(n_54);
                                h_35 = t;
                                t = p_54;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    l_35 = ATgetArgument(t, 0);
                                    m_35 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(p_54);
                                k_35 = t;
                                t = l_35;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    q_35 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = SSLgetAnnotations(l_35);
                                p_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Match_1, q_35);
                                d_5 = t;
                                t = SSLsetAnnotations(d_5, p_35);
                                r_35 = t;
                                t = m_35;
                                t = Seq_2_0(_id, l_6, t);
                                n_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Seq_2, r_35, n_35);
                                g_5 = t;
                                t = SSLsetAnnotations(g_5, k_35);
                                o_35 = t;
                                t = (ATerm) ATmakeAppl(sym_Scope_2, o_54, o_35);
                                h_5 = t;
                                t = SSLsetAnnotations(h_5, h_35);
                              }
                            }
                        }
                      }
                  }
                ;
                LocalPopChoice(l_32);
              }
            else
              {
                t = k_32;
                t = InlineStrat_0_0(t);
                t = inline_rules_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(u_31);
    }
  else
    {
      t = t_31;
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_t_29;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = term_d_27;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm x_55 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL;
  x_55 = t;
  t = term_s_29;
  g_56 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_t_32, x_55);
  h_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_29, (ATerm) ATmakeAppl(sym_Defined_2, term_t_32, x_55));
  t = z_11(m_6, g_56, h_56, t);
  t = term_c_27;
  e_56 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_2, term_u_32, x_55);
  f_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_27, (ATerm) ATmakeAppl(sym_Defined_2, term_u_32, x_55));
  t = z_11(n_6, e_56, f_56, t);
  t = x_55;
  return(t);
}
ATerm o_6 (ATerm t)
{
  t = term_g_30;
  return(t);
}
ATerm q_6 (ATerm t)
{
  t = term_n_30;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL,l_56 = NULL,m_56 = NULL;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, i_56);
  l_56 = t;
  t = term_w_32;
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_f_30, i_56), term_w_32);
  t = z_11(o_6, l_56, m_56, t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_30, i_56);
  j_56 = t;
  t = term_a_33;
  k_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_30, i_56), term_a_33);
  t = z_11(q_6, j_56, k_56, t);
  t = i_56;
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm f_58 = NULL,l_58 = NULL,m_58 = NULL;
  f_58 = t;
  t = term_s_21;
  l_58 = t;
  t = (ATerm) ATinsert(ATempty, term_e_33);
  m_58 = t;
  t = SSL_printnl(l_58, m_58);
  t = f_58;
  return(t);
}
ATerm t_6 (ATerm t)
{
  ATerm f_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(h_33);
    }
  else
    {
      t = f_33;
      {
        ATerm j_33 = t;
        int n_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(n_33);
          }
        else
          {
            t = j_33;
            {
              ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  q_58 = ATgetArgument(t, 0);
                  s_58 = ATgetArgument(t, 1);
                  t_58 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_58;
              if(match_cons(t, sym_SVar_1))
                {
                  r_58 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_58;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = s_58;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_58;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_u_23;
            }
          }
      }
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_33 = ATgetArgument(t, 0);
      if(match_cons(o_33, sym_SVar_1))
        {
          ATerm r_33 = ATgetArgument(o_33, 0);
          if((ATgetSymbol((ATermAppl) r_33) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_33 = ATgetArgument(t, 1);
        if(((ATgetType(p_33) != AT_LIST) || !(ATisEmpty(p_33))))
          _fail(t);
      }
      {
        ATerm q_33 = ATgetArgument(t, 2);
        if(((ATgetType(q_33) != AT_LIST) || !(ATisEmpty(q_33))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm z_6 (ATerm t)
{
  ATerm f_59 = NULL,q_59 = NULL,b_60 = NULL;
  f_59 = t;
  t = term_s_21;
  q_59 = t;
  t = (ATerm) ATinsert(ATempty, term_s_33);
  b_60 = t;
  t = SSL_printnl(q_59, b_60);
  t = f_59;
  return(t);
}
ATerm c_10 (ATerm m_42, ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL;
  t = if_verbose2_1_0(s_6, t);
  t = new_0_0(t);
  b_58 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_58), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_58), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = m_42;
  t = inline_rules_0_0(t);
  a_58 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, b_58, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_u_26, a_58), (ATerm) ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_58), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_u_23))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(t_6, t);
  {
    ATerm t_33 = t;
    if((PushChoice() == 0))
      {
        ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
        t = oncetd_1_0(w_6, t);
        u_58 = t;
        t = term_s_21;
        v_58 = t;
        t = (ATerm) ATinsert(ATempty, term_u_33);
        w_58 = t;
        t = SSL_printnl(v_58, w_58);
        t = u_58;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_33;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(z_6, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm g_60 (ATerm t)
  {
    ATerm v_33 = t;
    int w_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_120(t);
        ;
        LocalPopChoice(w_33);
      }
    else
      {
        t = v_33;
        t = SRTS_all(g_60, t);
      }
    return(t);
  }
  t = g_60(t);
  return(t);
}
ATerm e_7 (ATerm t)
{
  ATerm g_61 = NULL,i_61 = NULL,l_61 = NULL;
  g_61 = t;
  t = term_s_21;
  i_61 = t;
  t = (ATerm) ATinsert(ATempty, term_y_33);
  l_61 = t;
  t = SSL_printnl(i_61, l_61);
  t = g_61;
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = debug_1_0(g_7, t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  t = term_z_33;
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm n_62 = NULL,o_62 = NULL,q_62 = NULL;
  n_62 = t;
  t = term_s_21;
  o_62 = t;
  t = (ATerm) ATinsert(ATempty, term_a_34);
  q_62 = t;
  t = SSL_printnl(o_62, q_62);
  t = n_62;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm e_61 = NULL,f_61 = NULL;
  f_61 = t;
  t = new_0_0(t);
  e_61 = t;
  {
    ATerm b_34 = t;
    int c_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_61), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(c_34);
      }
    else
      {
        t = b_34;
        t = if_verbose2_1_0(e_7, t);
        _fail(t);
      }
    {
      ATerm e_34 = t;
      int f_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL,r_61 = NULL,s_61 = NULL,t_61 = NULL,a_62 = NULL,b_62 = NULL,c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,k_62 = NULL,l_62 = NULL,m_62 = NULL;
          m_61 = t;
          if(match_cons(t, sym_Seq_2))
            {
              n_61 = ATgetArgument(t, 0);
              g_62 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_61;
          if(match_cons(t, sym_All_1))
            {
              o_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_61;
          if(match_cons(t, sym_CallT_3))
            {
              p_61 = ATgetArgument(t, 0);
              s_61 = ATgetArgument(t, 1);
              f_62 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = p_61;
          if(match_cons(t, sym_SVar_1))
            {
              r_61 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_61;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = s_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_61 = ATgetFirst((ATermList) t);
              e_62 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_61;
          if(match_cons(t, sym_CallT_3))
            {
              a_62 = ATgetArgument(t, 0);
              c_62 = ATgetArgument(t, 1);
              d_62 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = a_62;
          if(match_cons(t, sym_SVar_1))
            {
              b_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = g_62;
          if(match_cons(t, sym_CallT_3))
            {
              h_62 = ATgetArgument(t, 0);
              l_62 = ATgetArgument(t, 1);
              m_62 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = h_62;
          if(match_cons(t, sym_SVar_1))
            {
              k_62 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_62;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_62;
          if((e_61 != t))
            {
              _fail(t);
            }
          t = k_62;
          if((b_62 != t))
            {
              _fail(t);
            }
          t = m_61;
          ;
          LocalPopChoice(f_34);
        }
      else
        {
          t = e_34;
          t = if_verbose1_1_0(f_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(i_7, t);
      t = f_61;
    }
  }
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm r_69 = NULL,u_69 = NULL,v_69 = NULL;
  r_69 = t;
  t = term_s_21;
  u_69 = t;
  t = (ATerm) ATinsert(ATempty, term_g_34);
  v_69 = t;
  t = SSL_printnl(u_69, v_69);
  t = r_69;
  return(t);
}
ATerm p_7 (ATerm t)
{
  t = debug_1_0(r_7, t);
  return(t);
}
ATerm r_7 (ATerm t)
{
  t = term_h_34;
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
  m_73 = t;
  t = term_s_21;
  n_73 = t;
  t = (ATerm) ATinsert(ATempty, term_i_34);
  o_73 = t;
  t = SSL_printnl(n_73, o_73);
  t = m_73;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm l_69 = NULL,n_69 = NULL;
  n_69 = t;
  t = new_0_0(t);
  l_69 = t;
  {
    ATerm k_34 = t;
    int l_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_a_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_69), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(l_34);
      }
    else
      {
        t = k_34;
        t = if_verbose2_1_0(m_7, t);
        _fail(t);
      }
    {
      ATerm b_35 = t;
      int c_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_69 = NULL,x_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,g_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,s_70 = NULL,u_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL,g_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL,m_71 = NULL,n_71 = NULL,o_71 = NULL,u_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,q_72 = NULL,s_72 = NULL,v_72 = NULL,w_72 = NULL,y_72 = NULL,z_72 = NULL,c_73 = NULL,g_73 = NULL;
          f_71 = t;
          if(match_cons(t, sym_CallT_3))
            {
              g_71 = ATgetArgument(t, 0);
              k_71 = ATgetArgument(t, 1);
              g_73 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = g_71;
          if(match_cons(t, sym_SVar_1))
            {
              j_71 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_71;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = k_71;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_71 = ATgetFirst((ATermList) t);
              c_73 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = l_71;
          if(match_cons(t, sym_CallT_3))
            {
              m_71 = ATgetArgument(t, 0);
              n_71 = ATgetArgument(t, 1);
              x_69 = ATgetArgument(t, 2);
              t = m_71;
              if(match_cons(t, sym_SVar_1))
                {
                  w_69 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_69;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = n_71;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_71 = ATgetFirst((ATermList) t);
                  z_72 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_71;
              if(match_cons(t, sym_Seq_2))
                {
                  u_71 = ATgetArgument(t, 0);
                  h_72 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = u_71;
              if(match_cons(t, sym_CallT_3))
                {
                  x_71 = ATgetArgument(t, 0);
                  z_71 = ATgetArgument(t, 1);
                  a_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = x_71;
              if(match_cons(t, sym_SVar_1))
                {
                  y_71 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_71;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_72;
              if(match_cons(t, sym_CallT_3))
                {
                  i_72 = ATgetArgument(t, 0);
                  k_72 = ATgetArgument(t, 1);
                  y_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_72;
              if(match_cons(t, sym_SVar_1))
                {
                  j_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_72;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = k_72;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_72 = ATgetFirst((ATermList) t);
                  w_72 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_72;
              if(match_cons(t, sym_CallT_3))
                {
                  m_72 = ATgetArgument(t, 0);
                  s_72 = ATgetArgument(t, 1);
                  v_72 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_72;
              if(match_cons(t, sym_SVar_1))
                {
                  q_72 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = s_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_72;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_69;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_73;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_73;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_71;
              if((l_69 != t))
                {
                  _fail(t);
                }
              t = q_72;
              if((y_71 != t))
                {
                  _fail(t);
                }
              t = f_71;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  m_71 = ATgetArgument(t, 0);
                  n_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = n_71;
              if(match_cons(t, sym_CallT_3))
                {
                  o_71 = ATgetArgument(t, 0);
                  z_72 = ATgetArgument(t, 1);
                  e_71 = ATgetArgument(t, 2);
                  t = o_71;
                  if(match_cons(t, sym_SVar_1))
                    {
                      u_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = u_71;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = z_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_70 = ATgetFirst((ATermList) t);
                      d_71 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = a_70;
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_70 = ATgetArgument(t, 0);
                      l_70 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_70;
                  if(match_cons(t, sym_CallT_3))
                    {
                      c_70 = ATgetArgument(t, 0);
                      g_70 = ATgetArgument(t, 1);
                      k_70 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = c_70;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = l_70;
                  if(match_cons(t, sym_CallT_3))
                    {
                      m_70 = ATgetArgument(t, 0);
                      o_70 = ATgetArgument(t, 1);
                      c_71 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = m_70;
                  if(match_cons(t, sym_SVar_1))
                    {
                      n_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_70;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = o_70;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_70 = ATgetFirst((ATermList) t);
                      b_71 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_70;
                  if(match_cons(t, sym_CallT_3))
                    {
                      s_70 = ATgetArgument(t, 0);
                      z_70 = ATgetArgument(t, 1);
                      a_71 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = s_70;
                  if(match_cons(t, sym_SVar_1))
                    {
                      u_70 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_70;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_73;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_73;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_70;
                  if((l_69 != t))
                    {
                      _fail(t);
                    }
                  t = u_70;
                  if((m_71 != t))
                    {
                      _fail(t);
                    }
                  t = f_71;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      o_71 = ATgetArgument(t, 0);
                      z_72 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = o_71;
                  if(match_cons(t, sym_Seq_2))
                    {
                      u_71 = ATgetArgument(t, 0);
                      h_72 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_71;
                  if(match_cons(t, sym_CallT_3))
                    {
                      x_71 = ATgetArgument(t, 0);
                      z_71 = ATgetArgument(t, 1);
                      a_72 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = x_71;
                  if(match_cons(t, sym_SVar_1))
                    {
                      y_71 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = z_71;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_72;
                  if(match_cons(t, sym_CallT_3))
                    {
                      i_72 = ATgetArgument(t, 0);
                      k_72 = ATgetArgument(t, 1);
                      y_72 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = i_72;
                  if(match_cons(t, sym_SVar_1))
                    {
                      j_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_72;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = k_72;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_72 = ATgetFirst((ATermList) t);
                      w_72 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = l_72;
                  if(match_cons(t, sym_CallT_3))
                    {
                      m_72 = ATgetArgument(t, 0);
                      s_72 = ATgetArgument(t, 1);
                      v_72 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = m_72;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_72 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = s_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_72;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_72;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = c_73;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_73;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_71;
                  if((l_69 != t))
                    {
                      _fail(t);
                    }
                  t = q_72;
                  if((m_71 != t))
                    {
                      _fail(t);
                    }
                  t = f_71;
                }
            }
          ;
          LocalPopChoice(c_35);
        }
      else
        {
          t = b_35;
          t = if_verbose1_1_0(p_7, t);
          _fail(t);
        }
      t = if_verbose2_1_0(s_7, t);
      t = n_69;
    }
  }
  return(t);
}
ATerm Anno__Cong_____2_0 (ATerm a_118 (ATerm), ATerm b_118 (ATerm), ATerm t)
{
  ATerm p_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  x_73 = t;
  p_73 = t;
  t = SSLgetAnnotations(x_73);
  v_73 = t;
  t = p_73;
  t = a_118(t);
  u_73 = t;
  t = v_73;
  t = b_118(t);
  w_73 = t;
  t = SSLsetAnnotations(u_73, w_73);
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm d_35 = t;
  int e_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,n_36 = NULL,p_6 = NULL;
      q_74 = t;
      if(match_cons(t, sym_Op_2))
        {
          r_74 = ATgetArgument(t, 0);
          s_74 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_74);
      n_36 = t;
      t = r_74;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("Cons", 0, ATtrue)))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Op_2, r_74, s_74);
      p_6 = t;
      t = SSLsetAnnotations(p_6, n_36);
      ;
      LocalPopChoice(e_35);
    }
  else
    {
      t = d_35;
      t = Anno__Cong_____2_0(z_7, a_8, t);
    }
  return(t);
}
ATerm z_7 (ATerm t)
{
  ATerm t_74 = NULL,d_75 = NULL,e_75 = NULL,r_6 = NULL;
  e_75 = t;
  if(match_cons(t, sym_Var_1))
    {
      d_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_75);
  t_74 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, d_75);
  r_6 = t;
  t = SSLsetAnnotations(r_6, t_74);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm r_75 = NULL,s_75 = NULL,t_75 = NULL;
  r_75 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_75;
    }
  else
    {
      ATerm j_38 = NULL,v_12 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_75 = ATgetFirst((ATermList) t);
          t_75 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(r_75);
      j_38 = t;
      t = s_75;
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("unbound", 0, ATtrue)))
        _fail(t);
      t = t_75;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(t_75), s_75);
      v_12 = t;
      t = SSLsetAnnotations(v_12, j_38);
    }
  return(t);
}
ATerm e_10 (ATerm m_65, ATerm l_65, ATerm t)
{
  t = m_65;
  {
    ATerm f_35 = t;
    if((PushChoice() == 0))
      {
        t = oncetd_1_0(v_7, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_35;
      }
    t = (ATerm) ATmakeAppl(sym_Build_1, m_65);
  }
  return(t);
}
ATerm MatchBuildIdemVar_0_0 (ATerm t)
{
  ATerm j_76 = NULL,k_76 = NULL,m_76 = NULL,n_76 = NULL,s_76 = NULL,x_76 = NULL,y_76 = NULL,z_76 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      m_76 = ATgetArgument(t, 0);
      x_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_76;
  if(match_cons(t, sym_Match_1))
    {
      n_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_76;
  if(match_cons(t, sym_Var_1))
    {
      s_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_76;
  if(match_cons(t, sym_Seq_2))
    {
      y_76 = ATgetArgument(t, 0);
      k_76 = ATgetArgument(t, 1);
      t = y_76;
      if(match_cons(t, sym_Build_1))
        {
          z_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_76;
      if(match_cons(t, sym_Var_1))
        {
          j_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_76;
      if((s_76 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_76)), k_76);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          y_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_76;
      if(match_cons(t, sym_Var_1))
        {
          z_76 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_76;
      if((s_76 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_76));
    }
  return(t);
}
ATerm BuildMatchIdem_0_0 (ATerm t)
{
  ATerm j_77 = NULL,k_77 = NULL,n_77 = NULL,o_77 = NULL,p_77 = NULL,q_77 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      n_77 = ATgetArgument(t, 0);
      p_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_77;
  if(match_cons(t, sym_Build_1))
    {
      o_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_77;
  if(match_cons(t, sym_Seq_2))
    {
      q_77 = ATgetArgument(t, 0);
      k_77 = ATgetArgument(t, 1);
      t = q_77;
      if(match_cons(t, sym_Match_1))
        {
          j_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_77;
      if((o_77 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_77), k_77);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          q_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_77;
      if((o_77 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Build_1, o_77);
    }
  return(t);
}
ATerm MatchIdem_0_0 (ATerm t)
{
  ATerm i_78 = NULL,o_78 = NULL,y_78 = NULL,a_79 = NULL,e_79 = NULL,f_79 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_78 = ATgetArgument(t, 0);
      e_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_78;
  if(match_cons(t, sym_Match_1))
    {
      a_79 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_79;
  if(match_cons(t, sym_Seq_2))
    {
      f_79 = ATgetArgument(t, 0);
      o_78 = ATgetArgument(t, 1);
      t = f_79;
      if(match_cons(t, sym_Match_1))
        {
          i_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = i_78;
      if((a_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, a_79), o_78);
    }
  else
    {
      if(match_cons(t, sym_Match_1))
        {
          f_79 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_79;
      if((a_79 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym_Match_1, a_79);
    }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm u_79 = NULL,v_79 = NULL,w_79 = NULL,y_79 = NULL,b_80 = NULL,c_80 = NULL,d_80 = NULL,e_80 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      y_79 = ATgetArgument(t, 0);
      b_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_79;
  if(match_cons(t, sym_Build_1))
    {
      ATerm g_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_80;
  if(match_cons(t, sym_Seq_2))
    {
      c_80 = ATgetArgument(t, 0);
      d_80 = ATgetArgument(t, 1);
      t = c_80;
      if(match_cons(t, sym_PrimT_3))
        {
          u_79 = ATgetArgument(t, 0);
          v_79 = ATgetArgument(t, 1);
          w_79 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, u_79, v_79, w_79), d_80);
    }
  else
    {
      if(match_cons(t, sym_PrimT_3))
        {
          c_80 = ATgetArgument(t, 0);
          d_80 = ATgetArgument(t, 1);
          e_80 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_PrimT_3, c_80, d_80, e_80);
    }
  return(t);
}
ATerm BuildBuild_0_0 (ATerm t)
{
  ATerm y_80 = NULL,z_80 = NULL,c_81 = NULL,l_81 = NULL,m_81 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      c_81 = ATgetArgument(t, 0);
      l_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_81;
  if(match_cons(t, sym_Build_1))
    {
      ATerm i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_81;
  if(match_cons(t, sym_Seq_2))
    {
      m_81 = ATgetArgument(t, 0);
      z_80 = ATgetArgument(t, 1);
      t = m_81;
      if(match_cons(t, sym_Build_1))
        {
          y_80 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_80), z_80);
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          m_81 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Build_1, m_81);
    }
  return(t);
}
ATerm b_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_35 = ATgetArgument(t, 0);
      if(((ATgetType(j_35) != AT_LIST) || !(ATisEmpty(j_35))))
        _fail(t);
      {
        ATerm s_35 = ATgetArgument(t, 1);
        if(((ATgetType(s_35) != AT_LIST) || !(ATisEmpty(s_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_35 = ATgetArgument(t, 0);
      if(((ATgetType(t_35) == AT_LIST) && !(ATisEmpty(t_35))))
        {
          r_82 = ATgetFirst((ATermList) t_35);
          s_82 = (ATerm) ATgetNext((ATermList) t_35);
        }
      else
        _fail(t);
      {
        ATerm x_35 = ATgetArgument(t, 1);
        if(((ATgetType(x_35) == AT_LIST) && !(ATisEmpty(x_35))))
          {
            t_82 = ATgetFirst((ATermList) x_35);
            u_82 = (ATerm) ATgetNext((ATermList) x_35);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_82, t_82), (ATerm) ATmakeAppl(sym__2, s_82, u_82));
  return(t);
}
ATerm f_8 (ATerm t)
{
  ATerm v_82 = NULL,w_82 = NULL;
  if(match_cons(t, sym__2))
    {
      v_82 = ATgetArgument(t, 0);
      w_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(w_82), v_82);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm x_82 = NULL,y_82 = NULL;
  if(match_cons(t, sym__2))
    {
      x_82 = ATgetArgument(t, 0);
      y_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, x_82), (ATerm) ATmakeAppl(sym_Match_1, y_82));
  return(t);
}
ATerm i_8 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_35 = ATgetArgument(t, 0);
      if(((ATgetType(y_35) != AT_LIST) || !(ATisEmpty(y_35))))
        _fail(t);
      {
        ATerm z_35 = ATgetArgument(t, 1);
        if(((ATgetType(z_35) != AT_LIST) || !(ATisEmpty(z_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_8 (ATerm t)
{
  ATerm h_83 = NULL,i_83 = NULL,j_83 = NULL,k_83 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_36 = ATgetArgument(t, 0);
      if(((ATgetType(a_36) == AT_LIST) && !(ATisEmpty(a_36))))
        {
          h_83 = ATgetFirst((ATermList) a_36);
          i_83 = (ATerm) ATgetNext((ATermList) a_36);
        }
      else
        _fail(t);
      {
        ATerm b_36 = ATgetArgument(t, 1);
        if(((ATgetType(b_36) == AT_LIST) && !(ATisEmpty(b_36))))
          {
            j_83 = ATgetFirst((ATermList) b_36);
            k_83 = (ATerm) ATgetNext((ATermList) b_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_83, j_83), (ATerm) ATmakeAppl(sym__2, i_83, k_83));
  return(t);
}
ATerm n_8 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL;
  if(match_cons(t, sym__2))
    {
      l_83 = ATgetArgument(t, 0);
      m_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_83), l_83);
  return(t);
}
ATerm q_8 (ATerm t)
{
  ATerm n_83 = NULL,z_83 = NULL;
  if(match_cons(t, sym__2))
    {
      n_83 = ATgetArgument(t, 0);
      z_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_83), (ATerm) ATmakeAppl(sym_Match_1, z_83));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,k_82 = NULL,l_82 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_82 = ATgetArgument(t, 0);
      i_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_82;
  if(match_cons(t, sym_Build_1))
    {
      f_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_82;
  if(match_cons(t, sym_Op_2))
    {
      g_82 = ATgetArgument(t, 0);
      h_82 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_82;
  if(match_cons(t, sym_Seq_2))
    {
      j_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      {
        ATerm q_82 = NULL;
        t = j_82;
        if(match_cons(t, sym_Match_1))
          {
            k_82 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_82;
        if(match_cons(t, sym_Op_2))
          {
            a_82 = ATgetArgument(t, 0);
            b_82 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_82;
        if((g_82 != t))
          {
            _fail(t);
          }
        t = (ATerm) ATmakeAppl(sym__2, h_82, b_82);
        t = genzip_4_0(b_8, d_8, f_8, g_8, t);
        q_82 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, q_82), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_82, h_82)), c_82));
      }
    }
  else
    {
      ATerm g_83 = NULL;
      if(match_cons(t, sym_Match_1))
        {
          j_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_82;
      if(match_cons(t, sym_Op_2))
        {
          k_82 = ATgetArgument(t, 0);
          l_82 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_82;
      if((g_82 != t))
        {
          _fail(t);
        }
      t = (ATerm) ATmakeAppl(sym__2, h_82, l_82);
      t = genzip_4_0(i_8, k_8, n_8, q_8, t);
      g_83 = t;
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_83), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, g_82, h_82)));
    }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm w_85 = NULL,z_85 = NULL,e_86 = NULL,f_86 = NULL,g_86 = NULL,m_86 = NULL,n_86 = NULL,o_86 = NULL;
  z_85 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_86 = ATgetArgument(t, 0);
      m_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_86;
  if(match_cons(t, sym_Build_1))
    {
      f_86 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_86;
  if(match_cons(t, sym_Op_2))
    {
      g_86 = ATgetArgument(t, 0);
      {
        ATerm c_36 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = m_86;
  {
    ATerm d_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_Seq_2))
          {
            n_86 = ATgetArgument(t, 0);
            {
              ATerm f_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(e_36);
        t = n_86;
        if(match_cons(t, sym_Match_1))
          {
            o_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_86;
        if(match_cons(t, sym_Op_2))
          {
            w_85 = ATgetArgument(t, 0);
            {
              ATerm g_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_86, w_85);
        {
          ATerm h_36 = t;
          if((PushChoice() == 0))
            {
              ATerm c_39 = NULL;
              if(match_cons(t, sym__2))
                {
                  c_39 = ATgetArgument(t, 0);
                  if((c_39 != ATgetArgument(t, 1)))
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
          t = term_i_36;
        }
      }
    else
      {
        t = d_36;
        if(match_cons(t, sym_Match_1))
          {
            n_86 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_86;
        if(match_cons(t, sym_Op_2))
          {
            o_86 = ATgetArgument(t, 0);
            {
              ATerm j_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_86, o_86);
        {
          ATerm k_36 = t;
          if((PushChoice() == 0))
            {
              ATerm l_39 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_39 = ATgetArgument(t, 0);
                  if((l_39 != ATgetArgument(t, 1)))
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
          t = term_i_36;
        }
      }
  }
  return(t);
}
ATerm oncetd_1_0 (ATerm z_119 (ATerm), ATerm t)
{
  ATerm t_86 (ATerm t)
  {
    ATerm l_36 = t;
    int m_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_119(t);
        ;
        LocalPopChoice(m_36);
      }
    else
      {
        t = l_36;
        t = SRTS_one(t_86, t);
      }
    return(t);
  }
  t = t_86(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm e_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL,k_89 = NULL,l_89 = NULL,m_89 = NULL,s_89 = NULL,t_89 = NULL,u_89 = NULL,v_89 = NULL,g_90 = NULL,h_90 = NULL;
  e_89 = t;
  if(match_cons(t, sym_Let_2))
    {
      h_89 = ATgetArgument(t, 0);
      t_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_89;
  if(match_cons(t, sym_Let_2))
    {
      u_89 = ATgetArgument(t, 0);
      g_90 = ATgetArgument(t, 1);
      {
        ATerm s_90 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, h_89, u_89);
        t = conc_0_0(t);
        s_90 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, s_90, g_90);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          u_89 = ATgetArgument(t, 0);
          g_90 = ATgetArgument(t, 1);
          h_90 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = h_89;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_89 = ATgetFirst((ATermList) t);
          s_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_89;
      if(match_cons(t, sym_SDefT_4))
        {
          j_89 = ATgetArgument(t, 0);
          k_89 = ATgetArgument(t, 1);
          l_89 = ATgetArgument(t, 2);
          m_89 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = k_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_89;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_89;
      if(match_cons(t, sym_SVar_1))
        {
          v_89 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_90;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_90;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = v_89;
      if((j_89 != t))
        {
          _fail(t);
        }
      t = m_89;
      {
        ATerm o_36 = t;
        if((PushChoice() == 0))
          {
            ATerm s_8 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm p_36 = ATgetArgument(t, 0);
                  if(match_cons(p_36, sym_SVar_1))
                    {
                      if(((j_89 != NULL) && (j_89 != ATgetArgument(p_36, 0))))
                        _fail(ATgetArgument(p_36, 0));
                      else
                        j_89 = ATgetArgument(p_36, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm q_36 = ATgetArgument(t, 1);
                    if(((ATgetType(q_36) != AT_LIST) || !(ATisEmpty(q_36))))
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
            t = oncetd_1_0(s_8, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = o_36;
          }
        t = not_null(m_89);
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm w_93 = NULL,x_93 = NULL,y_93 = NULL,z_93 = NULL,a_94 = NULL,b_94 = NULL,d_94 = NULL,f_94 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      d_94 = ATgetArgument(t, 0);
      t = d_94;
      if(match_cons(t, sym_Seq_2))
        {
          b_94 = ATgetArgument(t, 0);
          x_93 = ATgetArgument(t, 1);
          t = b_94;
          if(match_cons(t, sym_Where_1))
            {
              w_93 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_93;
          if(match_cons(t, sym_Seq_2))
            {
              y_93 = ATgetArgument(t, 0);
              a_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_93;
          if(match_cons(t, sym_Build_1))
            {
              z_93 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, w_93, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_93), a_94)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              b_94 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, b_94);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          d_94 = ATgetArgument(t, 0);
          t = d_94;
          if(match_cons(t, sym_Test_1))
            {
              b_94 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, b_94);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              d_94 = ATgetArgument(t, 0);
              t = d_94;
              if(match_cons(t, sym_Not_1))
                {
                  b_94 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, b_94);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  d_94 = ATgetArgument(t, 0);
                  f_94 = ATgetArgument(t, 1);
                  t = f_94;
                  if((d_94 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      d_94 = ATgetArgument(t, 0);
                      f_94 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_94;
                  if((d_94 != t))
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
  ATerm w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_94 = ATgetArgument(t, 0);
      z_94 = ATgetArgument(t, 1);
      t = w_94;
      if(match_cons(t, sym_LChoice_2))
        {
          x_94 = ATgetArgument(t, 0);
          y_94 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_94, (ATerm) ATmakeAppl(sym_LChoice_2, y_94, z_94));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_94 = ATgetArgument(t, 0);
          z_94 = ATgetArgument(t, 1);
          t = w_94;
          if(match_cons(t, sym_Seq_2))
            {
              x_94 = ATgetArgument(t, 0);
              y_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_94, (ATerm) ATmakeAppl(sym_Seq_2, y_94, z_94));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_94 = ATgetArgument(t, 0);
              z_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_94;
          if(match_cons(t, sym_Choice_2))
            {
              x_94 = ATgetArgument(t, 0);
              y_94 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_94, (ATerm) ATmakeAppl(sym_Choice_2, y_94, z_94));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
  s_96 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_96 = ATgetFirst((ATermList) t);
      u_96 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,s_40 = NULL,b_41 = NULL,e_41 = NULL,a_13 = NULL,z_12 = NULL;
        t = SSLgetAnnotations(s_96);
        s_40 = t;
        t = t_96;
        t = n_0(t);
        b_41 = t;
        t = (ATerm) ATinsert(CheckATermList(u_96), b_41);
        z_12 = t;
        t = SSLsetAnnotations(z_12, s_40);
        e_41 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_40 = ATgetFirst((ATermList) t);
            o_40 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_41);
        m_40 = t;
        t = o_40;
        {
          ATerm u_36 = t;
          int v_36 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(v_36);
            }
          else
            {
              t = u_36;
            }
          p_40 = t;
          t = (ATerm) ATinsert(CheckATermList(p_40), n_40);
          a_13 = t;
          t = SSLsetAnnotations(a_13, m_40);
        }
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        {
          ATerm y_41 = NULL,b_42 = NULL,b_13 = NULL;
          t = SSLgetAnnotations(s_96);
          y_41 = t;
          t = u_96;
          t = map1_1_0(n_0, t);
          b_42 = t;
          t = (ATerm) ATinsert(CheckATermList(b_42), t_96);
          b_13 = t;
          t = SSLsetAnnotations(b_13, y_41);
        }
      }
  }
  return(t);
}
ATerm t_8 (ATerm t)
{
  ATerm l_98 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, l_98, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_36), term_y_36));
  return(t);
}
ATerm u_8 (ATerm t)
{
  ATerm m_98 = NULL,n_98 = NULL;
  n_98 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      m_98 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, m_98, term_y_36);
    }
  else
    {
      t = n_98;
    }
  return(t);
}
ATerm x_8 (ATerm t)
{
  ATerm x_98 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      x_98 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, x_98, term_y_36);
  return(t);
}
ATerm y_8 (ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL;
  z_98 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      y_98 = ATgetArgument(t, 0);
      {
        ATerm z_36 = t;
        int a_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATmakeAppl(sym_VarDec_2, y_98, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_36), term_y_36));
            ;
            LocalPopChoice(a_37);
          }
        else
          {
            t = z_36;
            t = z_98;
          }
      }
    }
  else
    {
      t = z_98;
    }
  return(t);
}
ATerm z_8 (ATerm t)
{
  ATerm k_99 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_99, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_y_36), term_y_36));
  return(t);
}
ATerm b_9 (ATerm t)
{
  ATerm l_99 = NULL,n_99 = NULL;
  n_99 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      l_99 = ATgetArgument(t, 0);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_99, term_y_36);
    }
  else
    {
      t = n_99;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm m_97 = NULL,n_97 = NULL,o_97 = NULL,p_97 = NULL,t_97 = NULL,u_97 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_97 = ATgetArgument(t, 0);
      u_97 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_97, u_97);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_97 = ATgetArgument(t, 0);
          t = t_97;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_97 = ATgetFirst((ATermList) t);
              n_97 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, m_97, (ATerm) ATmakeAppl(sym_LChoices_1, n_97));
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
              t_97 = ATgetArgument(t, 0);
              t = t_97;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_97 = ATgetFirst((ATermList) t);
                  n_97 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, m_97, (ATerm) ATmakeAppl(sym_Choices_1, n_97));
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
                  t_97 = ATgetArgument(t, 0);
                  t = t_97;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      m_97 = ATgetFirst((ATermList) t);
                      n_97 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, m_97, (ATerm) ATmakeAppl(sym_Seqs_1, n_97));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_97 = ATgetArgument(t, 0);
                      u_97 = ATgetArgument(t, 1);
                      p_97 = ATgetArgument(t, 2);
                      o_97 = ATgetArgument(t, 3);
                      {
                        ATerm h_98 = NULL,j_98 = NULL;
                        t = u_97;
                        t = map1_1_0(t_8, t);
                        h_98 = t;
                        t = p_97;
                        t = map1_1_0(u_8, t);
                        j_98 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_97, h_98, j_98, o_97);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          t_97 = ATgetArgument(t, 0);
                          u_97 = ATgetArgument(t, 1);
                          p_97 = ATgetArgument(t, 2);
                          o_97 = ATgetArgument(t, 3);
                          {
                            ATerm b_37 = t;
                            int c_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm u_98 = NULL,w_98 = NULL;
                                t = p_97;
                                t = map1_1_0(x_8, t);
                                u_98 = t;
                                t = u_97;
                                t = map_1_0(y_8, t);
                                w_98 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_97, w_98, u_98, o_97);
                                ;
                                LocalPopChoice(c_37);
                              }
                            else
                              {
                                t = b_37;
                                {
                                  ATerm g_99 = NULL,j_99 = NULL;
                                  t = u_97;
                                  t = map1_1_0(z_8, t);
                                  g_99 = t;
                                  t = p_97;
                                  t = map_1_0(b_9, t);
                                  j_99 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_97, g_99, j_99, o_97);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              t_97 = ATgetArgument(t, 0);
                              u_97 = ATgetArgument(t, 1);
                              p_97 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, u_97, (ATerm) ATmakeAppl(sym_Op_2, term_j_22, (ATerm) ATinsert(ATinsert(ATempty, p_97), t_97)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  t_97 = ATgetArgument(t, 0);
                                  u_97 = ATgetArgument(t, 1);
                                  p_97 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_97)), t_97), (ATerm) ATmakeAppl(sym_Build_1, u_97)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      t_97 = ATgetArgument(t, 0);
                                      u_97 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_97, (ATerm) ATmakeAppl(sym_Match_1, u_97));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          t_97 = ATgetArgument(t, 0);
                                          u_97 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_97), u_97);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              t_97 = ATgetArgument(t, 0);
                                              u_97 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_97), t_97);
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
ATerm i_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm x_100 = NULL,a_101 = NULL,d_101 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_100 = ATgetArgument(t, 0);
      t = x_100;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_i_36;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_100 = ATgetArgument(t, 0);
          t = x_100;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_u_23;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_100 = ATgetArgument(t, 0);
              a_101 = ATgetArgument(t, 1);
              t = x_100;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_i_36;
            }
          else
            {
              if(match_cons(t, sym_Scope_2))
                {
                  x_100 = ATgetArgument(t, 0);
                  a_101 = ATgetArgument(t, 1);
                  t = a_101;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                  t = term_i_36;
                }
              else
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      x_100 = ATgetArgument(t, 0);
                      a_101 = ATgetArgument(t, 1);
                      t = a_101;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = term_i_36;
                    }
                  else
                    {
                      if(match_cons(t, sym_Some_1))
                        {
                          x_100 = ATgetArgument(t, 0);
                          t = x_100;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_i_36;
                        }
                      else
                        {
                          if(match_cons(t, sym_One_1))
                            {
                              x_100 = ATgetArgument(t, 0);
                              t = x_100;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_i_36;
                            }
                          else
                            {
                              if(match_cons(t, sym_Path_2))
                                {
                                  x_100 = ATgetArgument(t, 0);
                                  a_101 = ATgetArgument(t, 1);
                                  t = a_101;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_i_36;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Cong_2))
                                    {
                                      x_100 = ATgetArgument(t, 0);
                                      a_101 = ATgetArgument(t, 1);
                                      t = a_101;
                                      t = fetch_1_0(i_10, t);
                                      t = term_i_36;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Choice_2))
                                        {
                                          x_100 = ATgetArgument(t, 0);
                                          a_101 = ATgetArgument(t, 1);
                                          t = a_101;
                                          if(match_cons(t, sym_Fail_0))
                                            {
                                              t = x_100;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = a_101;
                                                }
                                              else
                                                {
                                                  t = x_100;
                                                }
                                            }
                                          else
                                            {
                                              t = x_100;
                                              if(!(match_cons(t, sym_Fail_0)))
                                                _fail(t);
                                              t = a_101;
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_LChoice_2))
                                            {
                                              x_100 = ATgetArgument(t, 0);
                                              a_101 = ATgetArgument(t, 1);
                                              t = a_101;
                                              if(match_cons(t, sym_Fail_0))
                                                {
                                                  t = x_100;
                                                  if(match_cons(t, sym_Fail_0))
                                                    {
                                                      t = a_101;
                                                    }
                                                  else
                                                    {
                                                      t = x_100;
                                                    }
                                                }
                                              else
                                                {
                                                  t = x_100;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = a_101;
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Where_1))
                                                {
                                                  x_100 = ATgetArgument(t, 0);
                                                  t = x_100;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = term_i_36;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_GuardedLChoice_3))
                                                    {
                                                      x_100 = ATgetArgument(t, 0);
                                                      a_101 = ATgetArgument(t, 1);
                                                      d_101 = ATgetArgument(t, 2);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_101;
                                                  if(!(match_cons(t, sym_Fail_0)))
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, x_100, a_101);
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
  ATerm b_103 = NULL,g_103 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      g_103 = ATgetArgument(t, 0);
      t = g_103;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_u_23;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          g_103 = ATgetArgument(t, 0);
          t = g_103;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_i_36;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              g_103 = ATgetArgument(t, 0);
              b_103 = ATgetArgument(t, 1);
              t = b_103;
              if(match_cons(t, sym_Id_0))
                {
                  t = g_103;
                  if(match_cons(t, sym_Id_0))
                    {
                      t = b_103;
                    }
                  else
                    {
                      t = g_103;
                    }
                }
              else
                {
                  t = g_103;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = b_103;
                }
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  g_103 = ATgetArgument(t, 0);
                  b_103 = ATgetArgument(t, 1);
                  t = g_103;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_u_23;
                }
              else
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      g_103 = ATgetArgument(t, 0);
                      b_103 = ATgetArgument(t, 1);
                      t = b_103;
                      if(!(match_cons(t, sym_Id_0)))
                        _fail(t);
                      t = term_u_23;
                    }
                  else
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          g_103 = ATgetArgument(t, 0);
                          b_103 = ATgetArgument(t, 1);
                          t = b_103;
                          if(!(match_cons(t, sym_Id_0)))
                            _fail(t);
                          t = term_u_23;
                        }
                      else
                        {
                          if(match_cons(t, sym_All_1))
                            {
                              g_103 = ATgetArgument(t, 0);
                              t = g_103;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_u_23;
                            }
                          else
                            {
                              if(match_cons(t, sym_Where_1))
                                {
                                  g_103 = ATgetArgument(t, 0);
                                  t = g_103;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_u_23;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      g_103 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = g_103;
                                  if(!(match_cons(t, sym_Wld_0)))
                                    _fail(t);
                                  t = term_u_23;
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
  ATerm d_37 = t;
  int e_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(e_37);
    }
  else
    {
      t = d_37;
      {
        ATerm f_37 = t;
        int g_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_37);
          }
        else
          {
            t = f_37;
            {
              ATerm h_37 = t;
              int i_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(i_37);
                }
              else
                {
                  t = h_37;
                  {
                    ATerm j_37 = t;
                    int k_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(k_37);
                      }
                    else
                      {
                        t = j_37;
                        {
                          ATerm l_37 = t;
                          int m_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(m_37);
                            }
                          else
                            {
                              t = l_37;
                              {
                                ATerm n_37 = t;
                                int o_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm d_104 = NULL,e_104 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        d_104 = ATgetArgument(t, 0);
                                        e_104 = ATgetArgument(t, 1);
                                        t = d_104;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_104;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            d_104 = ATgetArgument(t, 0);
                                            e_104 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = d_104;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = e_104;
                                      }
                                    ;
                                    LocalPopChoice(o_37);
                                  }
                                else
                                  {
                                    t = n_37;
                                    {
                                      ATerm p_37 = t;
                                      int q_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
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
                                                t = MisMatch_0_0(t);
                                                ;
                                                LocalPopChoice(s_37);
                                              }
                                            else
                                              {
                                                t = r_37;
                                                {
                                                  ATerm t_37 = t;
                                                  int u_37 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = BuildMatchFusion_0_0(t);
                                                      ;
                                                      LocalPopChoice(u_37);
                                                    }
                                                  else
                                                    {
                                                      t = t_37;
                                                      {
                                                        ATerm v_37 = t;
                                                        int w_37 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = BuildBuild_0_0(t);
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
                                                                  t = BuildPrim_0_0(t);
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
                                                                        t = MatchIdem_0_0(t);
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
                                                                              t = BuildMatchIdem_0_0(t);
                                                                              ;
                                                                              LocalPopChoice(c_38);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = b_38;
                                                                              {
                                                                                ATerm k_38 = t;
                                                                                int l_38 = stack_ptr;
                                                                                if((PushChoice() == 0))
                                                                                  {
                                                                                    t = MatchBuildIdemVar_0_0(t);
                                                                                    ;
                                                                                    LocalPopChoice(l_38);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = k_38;
                                                                                    {
                                                                                      ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,q_104 = NULL;
                                                                                      m_104 = t;
                                                                                      if(match_cons(t, sym_LChoice_2))
                                                                                        {
                                                                                          n_104 = ATgetArgument(t, 0);
                                                                                          q_104 = ATgetArgument(t, 1);
                                                                                          t = n_104;
                                                                                          if(match_cons(t, sym_Build_1))
                                                                                            {
                                                                                              l_104 = ATgetArgument(t, 0);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = m_104;
                                                                                          t = e_10(l_104, q_104, t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_As_2))
                                                                                            {
                                                                                              n_104 = ATgetArgument(t, 0);
                                                                                              q_104 = ATgetArgument(t, 1);
                                                                                            }
                                                                                          else
                                                                                            _fail(t);
                                                                                          t = n_104;
                                                                                          if(!(match_cons(t, sym_Wld_0)))
                                                                                            _fail(t);
                                                                                          t = q_104;
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
ATerm repeat_1_0 (ATerm b_132 (ATerm), ATerm t)
{
  ATerm z_104 (ATerm t)
  {
    ATerm o_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_132(t);
        t = z_104(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = o_38;
      }
    return(t);
  }
  t = z_104(t);
  return(t);
}
ATerm downup_1_0 (ATerm x_118 (ATerm), ATerm t)
{
  t = x_118(t);
  {
    ATerm j_10 (ATerm t)
    {
      t = downup_1_0(x_118, t);
      return(t);
    }
    t = SRTS_all(j_10, t);
    t = x_118(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm i_125 (ATerm), ATerm j_125 (ATerm), ATerm k_125 (ATerm), ATerm l_125 (ATerm), ATerm t)
{
  ATerm k_105 (ATerm t)
  {
    ATerm t_38 = t;
    int u_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_125(t);
        ;
        LocalPopChoice(u_38);
      }
    else
      {
        t = t_38;
        {
          ATerm a_105 = NULL,e_105 = NULL,f_105 = NULL,g_105 = NULL,h_105 = NULL,i_105 = NULL,i_13 = NULL;
          t = j_125(t);
          i_105 = t;
          if(match_cons(t, sym__2))
            {
              e_105 = ATgetArgument(t, 0);
              f_105 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(i_105);
          a_105 = t;
          t = e_105;
          t = l_125(t);
          g_105 = t;
          t = f_105;
          t = k_105(t);
          h_105 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_105, h_105);
          i_13 = t;
          t = SSLsetAnnotations(i_13, a_105);
          t = k_125(t);
        }
      }
    return(t);
  }
  t = k_105(t);
  return(t);
}
ATerm l_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_38 = ATgetArgument(t, 0);
      if(((ATgetType(v_38) != AT_LIST) || !(ATisEmpty(v_38))))
        _fail(t);
      {
        ATerm w_38 = ATgetArgument(t, 1);
        if(((ATgetType(w_38) != AT_LIST) || !(ATisEmpty(w_38))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL,b_106 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_38 = ATgetArgument(t, 0);
      if(((ATgetType(x_38) == AT_LIST) && !(ATisEmpty(x_38))))
        {
          y_105 = ATgetFirst((ATermList) x_38);
          z_105 = (ATerm) ATgetNext((ATermList) x_38);
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(((ATgetType(y_38) == AT_LIST) && !(ATisEmpty(y_38))))
          {
            a_106 = ATgetFirst((ATermList) y_38);
            b_106 = (ATerm) ATgetNext((ATermList) y_38);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, y_105, a_106), (ATerm) ATmakeAppl(sym__2, z_105, b_106));
  return(t);
}
ATerm p_10 (ATerm t)
{
  ATerm c_106 = NULL,d_106 = NULL;
  if(match_cons(t, sym__2))
    {
      c_106 = ATgetArgument(t, 0);
      d_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_106), c_106);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm q_105 = NULL,r_105 = NULL,s_105 = NULL,t_105 = NULL;
  q_105 = t;
  {
    ATerm z_38 = t;
    int a_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_39 = ATgetArgument(t, 0);
            ATerm d_39 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_39);
        t = q_105;
      }
    else
      {
        t = z_38;
        {
          ATerm x_105 = NULL;
          if(match_cons(t, sym__3))
            {
              r_105 = ATgetArgument(t, 0);
              s_105 = ATgetArgument(t, 1);
              t_105 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, r_105, s_105);
          t = genzip_4_0(l_10, o_10, p_10, _id, t);
          x_105 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_105, t_105);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm q_144 (ATerm), ATerm r_144 (ATerm), ATerm t)
{
  ATerm f_106 = NULL,i_106 = NULL;
  ATerm r_10 (ATerm t)
  {
    ATerm k_42 = NULL;
    t = q_144(t);
    k_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, k_42, not_null(i_106));
    t = lookup_0_0(t);
    t = r_144(t);
    return(t);
  }
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      if(((i_106 != NULL) && (i_106 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        i_106 = ATgetArgument(t, 0);
      if(((f_106 != NULL) && (f_106 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        f_106 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = not_null(f_106);
  t = alltd_1_0(r_10, t);
  return(t);
}
ATerm s_10 (ATerm t)
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
ATerm t_10 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,m_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_39 = ATgetArgument(t, 0);
      if(((ATgetType(g_39) == AT_LIST) && !(ATisEmpty(g_39))))
        {
          g_43 = ATgetFirst((ATermList) g_39);
          h_43 = (ATerm) ATgetNext((ATermList) g_39);
        }
      else
        _fail(t);
      {
        ATerm h_39 = ATgetArgument(t, 1);
        if(((ATgetType(h_39) == AT_LIST) && !(ATisEmpty(h_39))))
          {
            i_43 = ATgetFirst((ATermList) h_39);
            m_43 = (ATerm) ATgetNext((ATermList) h_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_43, i_43), (ATerm) ATmakeAppl(sym__2, h_43, m_43));
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm n_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_43), n_43);
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm r_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL;
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      x_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_43;
  {
    ATerm i_39 = t;
    int j_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm k_39 = ATgetArgument(t, 0);
            t_43 = ATgetArgument(t, 1);
            v_43 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(j_39);
        t = (ATerm) ATmakeAppl(sym_SDef_3, x_43, t_43, v_43);
      }
    else
      {
        t = i_39;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm m_39 = ATgetArgument(t, 0);
            t_43 = ATgetArgument(t, 1);
            v_43 = ATgetArgument(t, 2);
            w_43 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_43, t_43, v_43, w_43);
      }
  }
  return(t);
}
ATerm z_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm n_39 = ATgetArgument(t, 0);
      if(((ATgetType(n_39) != AT_LIST) || !(ATisEmpty(n_39))))
        _fail(t);
      {
        ATerm o_39 = ATgetArgument(t, 1);
        if(((ATgetType(o_39) != AT_LIST) || !(ATisEmpty(o_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL,c_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_39 = ATgetArgument(t, 0);
      if(((ATgetType(p_39) == AT_LIST) && !(ATisEmpty(p_39))))
        {
          z_44 = ATgetFirst((ATermList) p_39);
          a_45 = (ATerm) ATgetNext((ATermList) p_39);
        }
      else
        _fail(t);
      {
        ATerm q_39 = ATgetArgument(t, 1);
        if(((ATgetType(q_39) == AT_LIST) && !(ATisEmpty(q_39))))
          {
            b_45 = ATgetFirst((ATermList) q_39);
            c_45 = (ATerm) ATgetNext((ATermList) q_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_44, b_45), (ATerm) ATmakeAppl(sym__2, a_45, c_45));
  return(t);
}
ATerm o_11 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_45), d_45);
  return(t);
}
ATerm w_12 (ATerm t)
{
  ATerm n_45 = NULL,p_45 = NULL,r_45 = NULL;
  if(match_cons(t, sym__2))
    {
      n_45 = ATgetArgument(t, 0);
      r_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_45;
  {
    ATerm r_39 = t;
    int s_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm t_39 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(s_39);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_45);
      }
    else
      {
        t = r_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_39 = ATgetArgument(t, 0);
            p_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_45, p_45);
      }
  }
  return(t);
}
ATerm x_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_39 = ATgetArgument(t, 0);
      if(((ATgetType(v_39) != AT_LIST) || !(ATisEmpty(v_39))))
        _fail(t);
      {
        ATerm w_39 = ATgetArgument(t, 1);
        if(((ATgetType(w_39) != AT_LIST) || !(ATisEmpty(w_39))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm x_46 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_39 = ATgetArgument(t, 0);
      if(((ATgetType(x_39) == AT_LIST) && !(ATisEmpty(x_39))))
        {
          x_46 = ATgetFirst((ATermList) x_39);
          f_47 = (ATerm) ATgetNext((ATermList) x_39);
        }
      else
        _fail(t);
      {
        ATerm y_39 = ATgetArgument(t, 1);
        if(((ATgetType(y_39) == AT_LIST) && !(ATisEmpty(y_39))))
          {
            g_47 = ATgetFirst((ATermList) y_39);
            h_47 = (ATerm) ATgetNext((ATermList) y_39);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_46, g_47), (ATerm) ATmakeAppl(sym__2, f_47, h_47));
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL;
  if(match_cons(t, sym__2))
    {
      i_47 = ATgetArgument(t, 0);
      j_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_47), i_47);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm l_47 = NULL,q_47 = NULL,r_47 = NULL;
  if(match_cons(t, sym__2))
    {
      l_47 = ATgetArgument(t, 0);
      r_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_47;
  {
    ATerm z_39 = t;
    int a_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_40 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_40);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_47);
      }
    else
      {
        t = z_39;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_40 = ATgetArgument(t, 0);
            q_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_47, q_47);
      }
  }
  return(t);
}
ATerm h_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_40 = ATgetArgument(t, 0);
      if(((ATgetType(d_40) != AT_LIST) || !(ATisEmpty(d_40))))
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
ATerm l_13 (ATerm t)
{
  ATerm d_49 = NULL,i_49 = NULL,j_49 = NULL,m_49 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_40 = ATgetArgument(t, 0);
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          d_49 = ATgetFirst((ATermList) f_40);
          i_49 = (ATerm) ATgetNext((ATermList) f_40);
        }
      else
        _fail(t);
      {
        ATerm g_40 = ATgetArgument(t, 1);
        if(((ATgetType(g_40) == AT_LIST) && !(ATisEmpty(g_40))))
          {
            j_49 = ATgetFirst((ATermList) g_40);
            m_49 = (ATerm) ATgetNext((ATermList) g_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_49, j_49), (ATerm) ATmakeAppl(sym__2, i_49, m_49));
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm o_49 = NULL,q_49 = NULL;
  if(match_cons(t, sym__2))
    {
      o_49 = ATgetArgument(t, 0);
      q_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(q_49), o_49);
  return(t);
}
ATerm v_13 (ATerm t)
{
  ATerm u_49 = NULL,w_49 = NULL,x_49 = NULL;
  if(match_cons(t, sym__2))
    {
      u_49 = ATgetArgument(t, 0);
      x_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_49;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_49);
      }
    else
      {
        t = h_40;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_40 = ATgetArgument(t, 0);
            w_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_49, w_49);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm c_113 = NULL,d_113 = NULL,e_113 = NULL,f_113 = NULL,g_113 = NULL;
  e_113 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_113 = ATgetArgument(t, 0);
      g_113 = ATgetArgument(t, 1);
      {
        ATerm v_42 = NULL,a_43 = NULL,c_43 = NULL,m_13 = NULL;
        t = SSLgetAnnotations(e_113);
        v_42 = t;
        t = f_113;
        t = f_148(t);
        c_43 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_113, c_43);
        t = genzip_4_0(s_10, t_10, v_10, w_10, t);
        a_43 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, a_43, g_113);
        m_13 = t;
        t = SSLsetAnnotations(m_13, v_42);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          f_113 = ATgetArgument(t, 0);
          g_113 = ATgetArgument(t, 1);
          c_113 = ATgetArgument(t, 2);
          {
            ATerm q_44 = NULL,w_44 = NULL,x_44 = NULL,n_13 = NULL;
            t = SSLgetAnnotations(e_113);
            q_44 = t;
            t = g_113;
            t = f_148(t);
            x_44 = t;
            t = (ATerm) ATmakeAppl(sym__2, g_113, x_44);
            t = genzip_4_0(z_10, d_11, o_11, w_12, t);
            w_44 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, f_113, w_44, c_113);
            n_13 = t;
            t = SSLsetAnnotations(n_13, q_44);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              f_113 = ATgetArgument(t, 0);
              g_113 = ATgetArgument(t, 1);
              c_113 = ATgetArgument(t, 2);
              d_113 = ATgetArgument(t, 3);
              {
                ATerm p_46 = NULL,u_46 = NULL,v_46 = NULL,o_13 = NULL;
                t = SSLgetAnnotations(e_113);
                p_46 = t;
                t = g_113;
                t = f_148(t);
                v_46 = t;
                t = (ATerm) ATmakeAppl(sym__2, g_113, v_46);
                t = genzip_4_0(x_12, y_12, c_13, f_13, t);
                u_46 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, f_113, u_46, c_113, d_113);
                o_13 = t;
                t = SSLsetAnnotations(o_13, p_46);
              }
            }
          else
            {
              if(match_cons(t, sym_RDefT_4))
                {
                  f_113 = ATgetArgument(t, 0);
                  g_113 = ATgetArgument(t, 1);
                  c_113 = ATgetArgument(t, 2);
                  d_113 = ATgetArgument(t, 3);
                  {
                    ATerm n_48 = NULL,s_48 = NULL,t_48 = NULL,p_13 = NULL;
                    t = SSLgetAnnotations(e_113);
                    n_48 = t;
                    t = g_113;
                    t = f_148(t);
                    t_48 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_113, t_48);
                    t = genzip_4_0(h_13, l_13, u_13, v_13, t);
                    s_48 = t;
                    t = (ATerm) ATmakeAppl(sym_RDefT_4, f_113, s_48, c_113, d_113);
                    p_13 = t;
                    t = SSLsetAnnotations(p_13, n_48);
                  }
                }
              else
                {
                  ATerm l_50 = NULL,r_50 = NULL,s_13 = NULL;
                  if(match_cons(t, sym_Rec_2))
                    {
                      f_113 = ATgetArgument(t, 0);
                      g_113 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(e_113);
                  l_50 = t;
                  t = f_113;
                  t = f_148(t);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_50 = ATgetFirst((ATermList) t);
                      {
                        ATerm l_40 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Rec_2, r_50, g_113);
                  s_13 = t;
                  t = SSLsetAnnotations(s_13, l_50);
                }
            }
        }
    }
  return(t);
}
ATerm sboundin_3_0 (ATerm g_148 (ATerm), ATerm h_148 (ATerm), ATerm i_148 (ATerm), ATerm t)
{
  ATerm s_115 = NULL,t_115 = NULL,u_115 = NULL,v_115 = NULL,w_115 = NULL;
  u_115 = t;
  if(match_cons(t, sym_Let_2))
    {
      v_115 = ATgetArgument(t, 0);
      w_115 = ATgetArgument(t, 1);
      {
        ATerm g_51 = NULL,m_51 = NULL,n_51 = NULL,g_14 = NULL;
        t = SSLgetAnnotations(u_115);
        g_51 = t;
        t = v_115;
        t = g_148(t);
        m_51 = t;
        t = w_115;
        t = g_148(t);
        n_51 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, m_51, n_51);
        g_14 = t;
        t = SSLsetAnnotations(g_14, g_51);
      }
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          v_115 = ATgetArgument(t, 0);
          w_115 = ATgetArgument(t, 1);
          s_115 = ATgetArgument(t, 2);
          {
            ATerm q_52 = NULL,y_52 = NULL,z_52 = NULL,b_53 = NULL,j_14 = NULL;
            t = SSLgetAnnotations(u_115);
            q_52 = t;
            t = v_115;
            t = i_148(t);
            y_52 = t;
            t = w_115;
            t = i_148(t);
            z_52 = t;
            t = s_115;
            t = g_148(t);
            b_53 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, y_52, z_52, b_53);
            j_14 = t;
            t = SSLsetAnnotations(j_14, q_52);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              v_115 = ATgetArgument(t, 0);
              w_115 = ATgetArgument(t, 1);
              s_115 = ATgetArgument(t, 2);
              t_115 = ATgetArgument(t, 3);
              {
                ATerm y_53 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,l_14 = NULL;
                t = SSLgetAnnotations(u_115);
                y_53 = t;
                t = v_115;
                t = i_148(t);
                v_54 = t;
                t = w_115;
                t = i_148(t);
                w_54 = t;
                t = s_115;
                t = i_148(t);
                x_54 = t;
                t = t_115;
                t = g_148(t);
                y_54 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, v_54, w_54, x_54, y_54);
                l_14 = t;
                t = SSLsetAnnotations(l_14, y_53);
              }
            }
          else
            {
              ATerm j_55 = NULL,p_55 = NULL,q_55 = NULL,u_14 = NULL;
              if(match_cons(t, sym_Rec_2))
                {
                  v_115 = ATgetArgument(t, 0);
                  w_115 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(u_115);
              j_55 = t;
              t = v_115;
              t = i_148(t);
              p_55 = t;
              t = w_115;
              t = g_148(t);
              q_55 = t;
              t = (ATerm) ATmakeAppl(sym_Rec_2, p_55, q_55);
              u_14 = t;
              t = SSLsetAnnotations(u_14, j_55);
            }
        }
    }
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm d_116 = NULL;
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          d_116 = ATgetArgument(t, 0);
          {
            ATerm t_40 = ATgetArgument(t, 1);
          }
          {
            ATerm u_40 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_40);
      t = d_116;
    }
  else
    {
      t = q_40;
      if(match_cons(t, sym_SDefT_4))
        {
          d_116 = ATgetArgument(t, 0);
          {
            ATerm v_40 = ATgetArgument(t, 1);
          }
          {
            ATerm y_40 = ATgetArgument(t, 2);
          }
          {
            ATerm h_41 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = d_116;
    }
  return(t);
}
ATerm g_11 (ATerm j_94, ATerm i_94, ATerm t)
{
  t = j_94;
  t = map_1_0(w_13, t);
  return(t);
}
ATerm SVar_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm j_116 = NULL,k_116 = NULL,l_116 = NULL,m_116 = NULL,d_15 = NULL;
  m_116 = t;
  if(match_cons(t, sym_SVar_1))
    {
      k_116 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_116);
  j_116 = t;
  t = k_116;
  t = k_108(t);
  l_116 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, l_116);
  d_15 = t;
  t = SSLsetAnnotations(d_15, j_116);
  return(t);
}
ATerm r_11 (ATerm s_145 (ATerm), ATerm t_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm e_85, ATerm d_85, ATerm c_85, ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm o_116 = NULL;
    o_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, o_116, not_null(c_85));
    t = s_145(t);
    return(t);
  }
  ATerm y_13 (ATerm t)
  {
    ATerm p_116 = NULL;
    p_116 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_116, not_null(d_85));
    t = s_145(t);
    return(t);
  }
  t = not_null(e_85);
  t = t_145(x_13, y_13, _id, t);
  return(t);
}
ATerm z_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_41 = ATgetArgument(t, 0);
      if(((ATgetType(k_41) != AT_LIST) || !(ATisEmpty(k_41))))
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
ATerm a_14 (ATerm t)
{
  ATerm y_116 = NULL,z_116 = NULL,a_117 = NULL,b_117 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_41 = ATgetArgument(t, 0);
      if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
        {
          y_116 = ATgetFirst((ATermList) m_41);
          z_116 = (ATerm) ATgetNext((ATermList) m_41);
        }
      else
        _fail(t);
      {
        ATerm n_41 = ATgetArgument(t, 1);
        if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
          {
            a_117 = ATgetFirst((ATermList) n_41);
            b_117 = (ATerm) ATgetNext((ATermList) n_41);
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
ATerm b_14 (ATerm t)
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
ATerm s_11 (ATerm m_145 (ATerm), ATerm n_145 (ATerm (ATerm), ATerm), ATerm w_84, ATerm z_84, ATerm t)
{
  ATerm s_116 = NULL,t_116 = NULL,u_116 = NULL,v_116 = NULL,x_116 = NULL;
  t = not_null(w_84);
  t = m_145(t);
  if(((s_116 != NULL) && (s_116 != t)))
    _fail(t);
  else
    s_116 = t;
  t = map_1_0(new_0_0, t);
  if(((t_116 != NULL) && (t_116 != t)))
    _fail(t);
  else
    t_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(s_116), not_null(t_116));
  t = genzip_4_0(z_13, a_14, b_14, _id, t);
  if(((x_116 != NULL) && (x_116 != t)))
    _fail(t);
  else
    x_116 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(x_116), not_null(z_84));
  t = conc_0_0(t);
  if(((u_116 != NULL) && (u_116 != t)))
    _fail(t);
  else
    u_116 = t;
  t = not_null(w_84);
  {
    ATerm c_14 (ATerm t)
    {
      t = not_null(t_116);
      return(t);
    }
    t = n_145(c_14, t);
    if(((v_116 != NULL) && (v_116 != t)))
      _fail(t);
    else
      v_116 = t;
    t = (ATerm) ATmakeAppl(sym__3, not_null(v_116), not_null(z_84), not_null(u_116));
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm i_117 = NULL,j_117 = NULL,k_117 = NULL,l_117 = NULL,m_117 = NULL,n_117 = NULL,o_117 = NULL;
  k_117 = t;
  if(match_cons(t, sym__2))
    {
      l_117 = ATgetArgument(t, 0);
      m_117 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_117;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_117 = ATgetFirst((ATermList) t);
      o_117 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_117;
  if(match_cons(t, sym__2))
    {
      i_117 = ATgetArgument(t, 0);
      j_117 = ATgetArgument(t, 1);
      {
        ATerm t_41 = t;
        int u_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_117;
            if((l_117 != t))
              {
                _fail(t);
              }
            t = j_117;
            ;
            LocalPopChoice(u_41);
          }
        else
          {
            t = t_41;
            t = (ATerm) ATmakeAppl(sym__2, l_117, o_117);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_117, o_117);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm x_134 (ATerm), ATerm t)
{
  ATerm m_118 (ATerm t)
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_134(t);
        ;
        LocalPopChoice(w_41);
      }
    else
      {
        t = v_41;
        {
          ATerm j_118 = NULL,k_118 = NULL,l_118 = NULL;
          ATerm d_14 (ATerm t)
          {
            ATerm b_56 = NULL;
            b_56 = t;
            t = (ATerm) ATmakeAppl(sym__2, b_56, not_null(l_118));
            t = m_118(t);
            return(t);
          }
          if(((j_118 != NULL) && (j_118 != t)))
            _fail(t);
          else
            j_118 = t;
          if(match_cons(t, sym__2))
            {
              if(((k_118 != NULL) && (k_118 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_118 = ATgetArgument(t, 0);
              if(((l_118 != NULL) && (l_118 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_118 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(k_118);
          t = SRTS_all(d_14, t);
        }
      }
    return(t);
  }
  t = m_118(t);
  return(t);
}
ATerm rename_4_0 (ATerm h_145 (ATerm (ATerm), ATerm), ATerm i_145 (ATerm), ATerm j_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_145 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm q_118 = NULL;
  ATerm j_119 (ATerm t)
  {
    ATerm e_14 (ATerm t)
    {
      ATerm d_119 = NULL,e_119 = NULL,f_119 = NULL;
      if(((d_119 != NULL) && (d_119 != t)))
        _fail(t);
      else
        d_119 = t;
      if(match_cons(t, sym__2))
        {
          if(((e_119 != NULL) && (e_119 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            e_119 = ATgetArgument(t, 0);
          if(((f_119 != NULL) && (f_119 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_119 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm x_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_14 (ATerm t)
            {
              ATerm i_119 = NULL;
              i_119 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_119, not_null(f_119));
              t = lookup_0_0(t);
              return(t);
            }
            t = not_null(e_119);
            t = h_145(f_14, t);
            ;
            LocalPopChoice(z_41);
          }
        else
          {
            t = x_41;
            {
              ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL;
              t = not_null(d_119);
              t = s_11(i_145, k_145, not_null(e_119), not_null(f_119), t);
              if(match_cons(t, sym__3))
                {
                  r_56 = ATgetArgument(t, 0);
                  s_56 = ATgetArgument(t, 1);
                  t_56 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = r_11(j_119, j_145, r_56, s_56, t_56, t);
            }
          }
      }
      return(t);
    }
    t = env_alltd_1_0(e_14, t);
    return(t);
  }
  if(((q_118 != NULL) && (q_118 != t)))
    _fail(t);
  else
    q_118 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(q_118), (ATerm) ATempty);
  t = j_119(t);
  return(t);
}
ATerm h_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_42 = ATgetArgument(t, 0);
      if(((ATgetType(a_42) != AT_LIST) || !(ATisEmpty(a_42))))
        _fail(t);
      {
        ATerm c_42 = ATgetArgument(t, 1);
        if(((ATgetType(c_42) != AT_LIST) || !(ATisEmpty(c_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_14 (ATerm t)
{
  ATerm k_58 = NULL,n_58 = NULL,p_58 = NULL,z_58 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(((ATgetType(d_42) == AT_LIST) && !(ATisEmpty(d_42))))
        {
          k_58 = ATgetFirst((ATermList) d_42);
          n_58 = (ATerm) ATgetNext((ATermList) d_42);
        }
      else
        _fail(t);
      {
        ATerm e_42 = ATgetArgument(t, 1);
        if(((ATgetType(e_42) == AT_LIST) && !(ATisEmpty(e_42))))
          {
            p_58 = ATgetFirst((ATermList) e_42);
            z_58 = (ATerm) ATgetNext((ATermList) e_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_58, p_58), (ATerm) ATmakeAppl(sym__2, n_58, z_58));
  return(t);
}
ATerm m_14 (ATerm t)
{
  ATerm a_59 = NULL,b_59 = NULL;
  if(match_cons(t, sym__2))
    {
      a_59 = ATgetArgument(t, 0);
      b_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_59), a_59);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm d_59 = NULL,g_59 = NULL,h_59 = NULL;
  if(match_cons(t, sym__2))
    {
      d_59 = ATgetArgument(t, 0);
      h_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_59;
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, h_59);
      }
    else
      {
        t = f_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_42 = ATgetArgument(t, 0);
            g_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, h_59, g_59);
      }
  }
  return(t);
}
ATerm o_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_42 = ATgetArgument(t, 0);
      if(((ATgetType(j_42) != AT_LIST) || !(ATisEmpty(j_42))))
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
ATerm p_14 (ATerm t)
{
  ATerm f_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_42 = ATgetArgument(t, 0);
      if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
        {
          f_60 = ATgetFirst((ATermList) n_42);
          h_60 = (ATerm) ATgetNext((ATermList) n_42);
        }
      else
        _fail(t);
      {
        ATerm o_42 = ATgetArgument(t, 1);
        if(((ATgetType(o_42) == AT_LIST) && !(ATisEmpty(o_42))))
          {
            i_60 = ATgetFirst((ATermList) o_42);
            j_60 = (ATerm) ATgetNext((ATermList) o_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_60, i_60), (ATerm) ATmakeAppl(sym__2, h_60, j_60));
  return(t);
}
ATerm q_14 (ATerm t)
{
  ATerm k_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym__2))
    {
      k_60 = ATgetArgument(t, 0);
      l_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_60), k_60);
  return(t);
}
ATerm r_14 (ATerm t)
{
  ATerm n_60 = NULL,p_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym__2))
    {
      n_60 = ATgetArgument(t, 0);
      q_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_60;
  {
    ATerm p_42 = t;
    int q_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_60);
      }
    else
      {
        t = p_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_42 = ATgetArgument(t, 0);
            p_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_60, p_60);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm b_148 (ATerm), ATerm t)
{
  ATerm j_122 = NULL,k_122 = NULL,l_122 = NULL,m_122 = NULL,n_122 = NULL;
  j_122 = t;
  if(match_cons(t, sym_Scope_2))
    {
      k_122 = ATgetArgument(t, 0);
      l_122 = ATgetArgument(t, 1);
      {
        ATerm e_57 = NULL,k_57 = NULL,f_15 = NULL;
        t = SSLgetAnnotations(j_122);
        e_57 = t;
        t = k_122;
        t = b_148(t);
        k_57 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, k_57, l_122);
        f_15 = t;
        t = SSLsetAnnotations(f_15, e_57);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          k_122 = ATgetArgument(t, 0);
          l_122 = ATgetArgument(t, 1);
          m_122 = ATgetArgument(t, 2);
          n_122 = ATgetArgument(t, 3);
          {
            ATerm y_57 = NULL,h_58 = NULL,i_58 = NULL,g_15 = NULL;
            t = SSLgetAnnotations(j_122);
            y_57 = t;
            t = m_122;
            t = b_148(t);
            i_58 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_122, i_58);
            t = genzip_4_0(h_14, k_14, m_14, n_14, t);
            h_58 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_122, l_122, h_58, n_122);
            g_15 = t;
            t = SSLsetAnnotations(g_15, y_57);
          }
        }
      else
        {
          ATerm w_59 = NULL,c_60 = NULL,d_60 = NULL,h_15 = NULL;
          if(match_cons(t, sym_RDefT_4))
            {
              k_122 = ATgetArgument(t, 0);
              l_122 = ATgetArgument(t, 1);
              m_122 = ATgetArgument(t, 2);
              n_122 = ATgetArgument(t, 3);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_122);
          w_59 = t;
          t = m_122;
          t = b_148(t);
          d_60 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_122, d_60);
          t = genzip_4_0(o_14, p_14, q_14, r_14, t);
          c_60 = t;
          t = (ATerm) ATmakeAppl(sym_RDefT_4, k_122, l_122, c_60, n_122);
          h_15 = t;
          t = SSLsetAnnotations(h_15, w_59);
        }
    }
  return(t);
}
ATerm tboundin_3_0 (ATerm c_148 (ATerm), ATerm d_148 (ATerm), ATerm e_148 (ATerm), ATerm t)
{
  ATerm w_124 = NULL,x_124 = NULL,y_124 = NULL,z_124 = NULL,a_125 = NULL;
  z_124 = t;
  if(match_cons(t, sym_Scope_2))
    {
      a_125 = ATgetArgument(t, 0);
      w_124 = ATgetArgument(t, 1);
      {
        ATerm c_61 = NULL,j_61 = NULL,k_61 = NULL,m_15 = NULL;
        t = SSLgetAnnotations(z_124);
        c_61 = t;
        t = a_125;
        t = e_148(t);
        j_61 = t;
        t = w_124;
        t = c_148(t);
        k_61 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, j_61, k_61);
        m_15 = t;
        t = SSLsetAnnotations(m_15, c_61);
      }
    }
  else
    {
      if(match_cons(t, sym_SDefT_4))
        {
          a_125 = ATgetArgument(t, 0);
          w_124 = ATgetArgument(t, 1);
          x_124 = ATgetArgument(t, 2);
          y_124 = ATgetArgument(t, 3);
          {
            ATerm p_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL,n_15 = NULL;
            t = SSLgetAnnotations(z_124);
            p_62 = t;
            t = a_125;
            t = e_148(t);
            v_62 = t;
            t = w_124;
            t = e_148(t);
            w_62 = t;
            t = x_124;
            t = e_148(t);
            x_62 = t;
            t = y_124;
            t = c_148(t);
            y_62 = t;
            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_62, w_62, x_62, y_62);
            n_15 = t;
            t = SSLsetAnnotations(n_15, p_62);
          }
        }
      else
        {
          if(match_cons(t, sym_RDefT_4))
            {
              a_125 = ATgetArgument(t, 0);
              w_124 = ATgetArgument(t, 1);
              x_124 = ATgetArgument(t, 2);
              y_124 = ATgetArgument(t, 3);
              {
                ATerm k_63 = NULL,p_63 = NULL,q_63 = NULL,r_63 = NULL,s_63 = NULL,o_15 = NULL;
                t = SSLgetAnnotations(z_124);
                k_63 = t;
                t = a_125;
                t = e_148(t);
                p_63 = t;
                t = w_124;
                t = e_148(t);
                q_63 = t;
                t = x_124;
                t = e_148(t);
                r_63 = t;
                t = y_124;
                t = c_148(t);
                s_63 = t;
                t = (ATerm) ATmakeAppl(sym_RDefT_4, p_63, q_63, r_63, s_63);
                o_15 = t;
                t = SSLsetAnnotations(o_15, k_63);
              }
            }
          else
            {
              ATerm b_64 = NULL,d_64 = NULL,r_15 = NULL;
              if(match_cons(t, sym_DynamicRules_1))
                {
                  a_125 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_124);
              b_64 = t;
              t = a_125;
              t = c_148(t);
              d_64 = t;
              t = (ATerm) ATmakeAppl(sym_DynamicRules_1, d_64);
              r_15 = t;
              t = SSLsetAnnotations(r_15, b_64);
            }
        }
    }
  return(t);
}
ATerm s_14 (ATerm t)
{
  ATerm n_125 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_125 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_125);
  return(t);
}
ATerm t_14 (ATerm t)
{
  ATerm u_42 = t;
  int w_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(w_42);
    }
  else
    {
      t = u_42;
      {
        ATerm p_125 = NULL,q_125 = NULL,r_125 = NULL,s_125 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            p_125 = ATgetArgument(t, 0);
            t = p_125;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                p_125 = ATgetArgument(t, 0);
                q_125 = ATgetArgument(t, 1);
                r_125 = ATgetArgument(t, 2);
                s_125 = ATgetArgument(t, 3);
                t = r_125;
                t = map_1_0(v_14, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    p_125 = ATgetArgument(t, 0);
                    q_125 = ATgetArgument(t, 1);
                    r_125 = ATgetArgument(t, 2);
                    s_125 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = r_125;
                t = map_1_0(w_14, t);
              }
          }
      }
    }
  return(t);
}
ATerm v_14 (ATerm t)
{
  ATerm a_126 = NULL;
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_126 = ATgetArgument(t, 0);
          {
            ATerm z_42 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_42);
      t = a_126;
    }
  else
    {
      t = x_42;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_126;
    }
  return(t);
}
ATerm w_14 (ATerm t)
{
  ATerm j_126 = NULL;
  ATerm b_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_126 = ATgetArgument(t, 0);
          {
            ATerm f_43 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_43);
      t = j_126;
    }
  else
    {
      t = b_43;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_126 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_126;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(s_14, t_14, tboundin_3_0, t);
  return(t);
}
ATerm l_11 (ATerm j_127 (ATerm), ATerm x_51, ATerm w_51, ATerm t)
{
  ATerm b_127 (ATerm t)
  {
    ATerm w_126 = NULL,x_126 = NULL,y_126 = NULL;
    w_126 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = not_null(w_51);
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_126 = ATgetFirst((ATermList) t);
            y_126 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm j_43 = t;
          int k_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_126;
              {
                ATerm x_14 (ATerm t)
                {
                  t = not_null(w_51);
                  return(t);
                }
                t = m_11(j_127, x_14, not_null(x_126), not_null(y_126), t);
                t = b_127(t);
              }
              ;
              LocalPopChoice(k_43);
            }
          else
            {
              t = j_43;
              {
                ATerm k_64 = NULL,n_64 = NULL,a_16 = NULL;
                t = SSLgetAnnotations(w_126);
                k_64 = t;
                t = y_126;
                t = b_127(t);
                n_64 = t;
                t = (ATerm) ATinsert(CheckATermList(n_64), x_126);
                a_16 = t;
                t = SSLsetAnnotations(a_16, k_64);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(x_51);
  t = b_127(t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm b_130 (ATerm), ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  g_127 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_127;
      t = z_129(t);
    }
  else
    {
      ATerm p_127 = NULL,q_127 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_127 = ATgetFirst((ATermList) t);
          i_127 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_127;
      t = b_130(t);
      p_127 = t;
      t = i_127;
      t = foldr_3_0(z_129, a_130, b_130, t);
      q_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_127, q_127);
      t = a_130(t);
    }
  return(t);
}
ATerm m_11 (ATerm m_127 (ATerm), ATerm n_127 (ATerm), ATerm b_52, ATerm a_52, ATerm t)
{
  t = n_127(t);
  {
    ATerm y_14 (ATerm t)
    {
      ATerm y_127 = NULL;
      y_127 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(b_52), y_127);
      t = m_127(t);
      return(t);
    }
    t = fetch_1_0(y_14, t);
    t = not_null(a_52);
  }
  return(t);
}
ATerm n_11 (ATerm e_127 (ATerm), ATerm v_51, ATerm u_51, ATerm t)
{
  ATerm o_128 (ATerm t)
  {
    ATerm j_128 = NULL,k_128 = NULL,l_128 = NULL;
    j_128 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_128;
      }
    else
      {
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_128 = ATgetFirst((ATermList) t);
            l_128 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        {
          ATerm p_43 = t;
          int q_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = j_128;
              {
                ATerm z_14 (ATerm t)
                {
                  t = not_null(u_51);
                  return(t);
                }
                t = m_11(e_127, z_14, not_null(k_128), not_null(l_128), t);
                t = o_128(t);
              }
              ;
              LocalPopChoice(q_43);
            }
          else
            {
              t = p_43;
              {
                ATerm v_64 = NULL,y_64 = NULL,c_16 = NULL;
                t = SSLgetAnnotations(j_128);
                v_64 = t;
                t = l_128;
                t = o_128(t);
                y_64 = t;
                t = (ATerm) ATinsert(CheckATermList(y_64), k_128);
                c_16 = t;
                t = SSLsetAnnotations(c_16, v_64);
              }
            }
        }
      }
    return(t);
  }
  t = not_null(v_51);
  t = o_128(t);
  return(t);
}
ATerm at_end_1_0 (ATerm v_123 (ATerm), ATerm t)
{
  ATerm k_129 (ATerm t)
  {
    ATerm h_129 = NULL,i_129 = NULL,j_129 = NULL;
    j_129 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_129 = ATgetFirst((ATermList) t);
        i_129 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm g_65 = NULL,j_65 = NULL,e_16 = NULL;
          t = SSLgetAnnotations(j_129);
          g_65 = t;
          t = i_129;
          t = k_129(t);
          j_65 = t;
          t = (ATerm) ATinsert(CheckATermList(j_65), h_129);
          e_16 = t;
          t = SSLsetAnnotations(e_16, g_65);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_129;
        t = v_123(t);
      }
    return(t);
  }
  t = k_129(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm r_128 = NULL,s_128 = NULL,t_128 = NULL;
  r_128 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_128;
    }
  else
    {
      ATerm a_15 (ATerm t)
      {
        t = not_null(t_128);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((s_128 != NULL) && (s_128 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            s_128 = ATgetFirst((ATermList) t);
          if(((t_128 != NULL) && (t_128 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            t_128 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(s_128);
      t = at_end_1_0(a_15, t);
    }
  return(t);
}
ATerm c_130 (ATerm p_129, ATerm t)
{
  ATerm q_129 = NULL;
  t = SSL_explode_term(p_129);
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_43) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      q_129 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_129;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm s_129 = NULL,t_129 = NULL,u_129 = NULL;
  if(((u_129 != NULL) && (u_129 != t)))
    _fail(t);
  else
    u_129 = t;
  if(match_cons(t, sym__2))
    {
      s_129 = ATgetArgument(t, 0);
      t_129 = ATgetArgument(t, 1);
      {
        ATerm u_43 = t;
        int y_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_15 (ATerm t)
            {
              t = not_null(t_129);
              return(t);
            }
            t = not_null(s_129);
            t = at_end_1_0(c_15, t);
            ;
            LocalPopChoice(y_43);
          }
        else
          {
            t = u_43;
            t = c_130(not_null(u_129), t);
          }
      }
    }
  else
    {
      t = c_130(not_null(u_129), t);
    }
  return(t);
}
ATerm e_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm z_43 = ATgetArgument(t, 0);
      if(((ATgetType(z_43) != AT_LIST) || !(ATisEmpty(z_43))))
        _fail(t);
      {
        ATerm a_44 = ATgetArgument(t, 1);
        if(((ATgetType(a_44) != AT_LIST) || !(ATisEmpty(a_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm j_130 = NULL,k_130 = NULL,l_130 = NULL,m_130 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_44 = ATgetArgument(t, 0);
      if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
        {
          j_130 = ATgetFirst((ATermList) e_44);
          k_130 = (ATerm) ATgetNext((ATermList) e_44);
        }
      else
        _fail(t);
      {
        ATerm f_44 = ATgetArgument(t, 1);
        if(((ATgetType(f_44) == AT_LIST) && !(ATisEmpty(f_44))))
          {
            l_130 = ATgetFirst((ATermList) f_44);
            m_130 = (ATerm) ATgetNext((ATermList) f_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_130, l_130), (ATerm) ATmakeAppl(sym__2, k_130, m_130));
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm n_130 = NULL,o_130 = NULL;
  if(match_cons(t, sym__2))
    {
      n_130 = ATgetArgument(t, 0);
      o_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_130), n_130);
  return(t);
}
ATerm p_11 (ATerm v_695, ATerm a_696, ATerm x_86, ATerm t)
{
  ATerm e_130 = NULL,f_130 = NULL,g_130 = NULL,h_130 = NULL;
  t = SSL_explode_term(a_696);
  if(match_cons(t, sym__2))
    {
      e_130 = ATgetArgument(t, 0);
      g_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_695);
  if(match_cons(t, sym__2))
    {
      if((e_130 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      f_130 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_130, g_130);
  t = genzip_4_0(e_15, i_15, j_15, _id, t);
  h_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_130, x_86);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm t)
{
  ATerm q_130 (ATerm t)
  {
    ATerm g_44 = t;
    int h_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_132(t);
        ;
        LocalPopChoice(h_44);
      }
    else
      {
        t = g_44;
        t = r_132(t);
        t = q_130(t);
      }
    return(t);
  }
  t = q_130(t);
  return(t);
}
ATerm for_3_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  t = t_132(t);
  t = while_not_2_0(u_132, v_132, t);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm x_130 = NULL;
  x_130 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, x_130);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm y_130 = NULL,z_130 = NULL,a_131 = NULL,b_131 = NULL,g_16 = NULL;
  b_131 = t;
  if(match_cons(t, sym__2))
    {
      z_130 = ATgetArgument(t, 0);
      a_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_131);
  y_130 = t;
  t = a_131;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_130, a_131);
  g_16 = t;
  t = SSLsetAnnotations(g_16, y_130);
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm a_132 = NULL,d_132 = NULL,e_132 = NULL,f_132 = NULL,g_132 = NULL;
  a_132 = t;
  if(match_cons(t, sym__2))
    {
      d_132 = ATgetArgument(t, 0);
      e_132 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_132;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_132 = ATgetFirst((ATermList) t);
      g_132 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_44 = t;
        int j_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_132(d_132, e_132, a_132, t);
            ;
            LocalPopChoice(j_44);
          }
        else
          {
            t = i_44;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_132), f_132), g_132);
          }
      }
    }
  else
    {
      t = w_132(d_132, e_132, a_132, t);
    }
  return(t);
}
ATerm w_132 (ATerm c_131, ATerm d_131, ATerm j_131, ATerm t)
{
  ATerm l_131 = NULL,o_131 = NULL,h_16 = NULL,r_131 = NULL,s_131 = NULL,t_131 = NULL,u_131 = NULL;
  t = SSLgetAnnotations(j_131);
  l_131 = t;
  t = d_131;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_131 = ATgetFirst((ATermList) t);
      u_131 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = r_131;
  if(match_cons(t, sym__2))
    {
      s_131 = ATgetArgument(t, 0);
      t_131 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_44 = t;
    int l_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_131;
        if((s_131 != t))
          {
            _fail(t);
          }
        t = u_131;
        ;
        LocalPopChoice(l_44);
      }
    else
      {
        t = k_44;
        t = d_131;
        t = p_11(s_131, t_131, u_131, t);
      }
    o_131 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_131, o_131);
    h_16 = t;
    t = SSLsetAnnotations(h_16, l_131);
  }
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm p_132 = NULL;
  if(match_cons(t, sym__2))
    {
      p_132 = ATgetArgument(t, 0);
      if((p_132 != ATgetArgument(t, 1)))
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
  ATerm m_44 = t;
  int n_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(k_15, l_15, p_15, t);
      ;
      LocalPopChoice(n_44);
    }
  else
    {
      t = m_44;
      {
        ATerm k_132 = NULL,l_132 = NULL,m_132 = NULL;
        k_132 = t;
        if(match_cons(t, sym__2))
          {
            l_132 = ATgetArgument(t, 0);
            m_132 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_132;
        t = n_11(q_15, l_132, m_132, t);
      }
    }
  return(t);
}
ATerm t_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL;
  if(match_cons(t, sym__2))
    {
      v_65 = ATgetArgument(t, 0);
      w_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(w_15, v_65, w_65, t);
  return(t);
}
ATerm w_15 (ATerm t)
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
ATerm x_15 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_15 (ATerm t)
{
  ATerm e_66 = NULL,f_66 = NULL;
  if(match_cons(t, sym__2))
    {
      e_66 = ATgetArgument(t, 0);
      f_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_11(z_15, e_66, f_66, t);
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm g_66 = NULL;
  if(match_cons(t, sym__2))
    {
      g_66 = ATgetArgument(t, 0);
      if((g_66 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm x_146 (ATerm), ATerm y_146 (ATerm), ATerm z_146 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_133 (ATerm t)
  {
    ATerm o_44 = t;
    int p_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_146(t);
        ;
        LocalPopChoice(p_44);
      }
    else
      {
        t = o_44;
        {
          ATerm r_44 = t;
          int s_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_132 = NULL,z_132 = NULL,q_65 = NULL,r_65 = NULL;
              if(((y_132 != NULL) && (y_132 != t)))
                _fail(t);
              else
                y_132 = t;
              t = y_146(t);
              if(((z_132 != NULL) && (z_132 != t)))
                _fail(t);
              else
                z_132 = t;
              t = not_null(y_132);
              {
                ATerm s_15 (ATerm t)
                {
                  ATerm b_133 = NULL;
                  t = k_133(t);
                  b_133 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_133, not_null(z_132));
                  t = diff_0_0(t);
                  return(t);
                }
                t = z_146(s_15, k_133, t_15, t);
                if(((r_65 != NULL) && (r_65 != t)))
                  _fail(t);
                else
                  r_65 = t;
                t = SSL_explode_term(not_null(r_65));
                if(match_cons(t, sym__2))
                  {
                    ATerm t_44 = ATgetArgument(t, 0);
                    if(((q_65 != NULL) && (q_65 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = not_null(q_65);
                t = foldr_3_0(u_15, v_15, _id, t);
              }
              ;
              LocalPopChoice(s_44);
            }
          else
            {
              t = r_44;
              {
                ATerm z_65 = NULL,a_66 = NULL;
                a_66 = t;
                t = SSL_explode_term(a_66);
                if(match_cons(t, sym__2))
                  {
                    ATerm u_44 = ATgetArgument(t, 0);
                    z_65 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = z_65;
                t = foldr_3_0(x_15, y_15, k_133, t);
              }
            }
        }
      }
    return(t);
  }
  t = k_133(t);
  return(t);
}
ATerm b_16 (ATerm t)
{
  ATerm x_133 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      x_133 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, x_133);
  return(t);
}
ATerm d_16 (ATerm t)
{
  ATerm v_44 = t;
  int y_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_44);
    }
  else
    {
      t = v_44;
      {
        ATerm z_133 = NULL,a_134 = NULL,b_134 = NULL,c_134 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            z_133 = ATgetArgument(t, 0);
            t = z_133;
            t = tvars_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_SDefT_4))
              {
                z_133 = ATgetArgument(t, 0);
                a_134 = ATgetArgument(t, 1);
                b_134 = ATgetArgument(t, 2);
                c_134 = ATgetArgument(t, 3);
                t = b_134;
                t = map_1_0(f_16, t);
              }
            else
              {
                if(match_cons(t, sym_RDefT_4))
                  {
                    z_133 = ATgetArgument(t, 0);
                    a_134 = ATgetArgument(t, 1);
                    b_134 = ATgetArgument(t, 2);
                    c_134 = ATgetArgument(t, 3);
                  }
                else
                  _fail(t);
                t = b_134;
                t = map_1_0(i_16, t);
              }
          }
      }
    }
  return(t);
}
ATerm f_16 (ATerm t)
{
  ATerm k_134 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_134 = ATgetArgument(t, 0);
          {
            ATerm i_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = k_134;
    }
  else
    {
      t = g_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_134;
    }
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm t_134 = NULL;
  ATerm j_45 = t;
  int k_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_134 = ATgetArgument(t, 0);
          {
            ATerm m_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_45);
      t = t_134;
    }
  else
    {
      t = j_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_134 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_134;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_133 = NULL,u_133 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_133 = ATgetArgument(t, 0);
      t = u_133;
      if(match_cons(t, sym_Rule_3))
        {
          q_133 = ATgetArgument(t, 0);
          {
            ATerm o_45 = ATgetArgument(t, 1);
          }
          {
            ATerm q_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_133;
      t = free_vars_3_0(b_16, d_16, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_133 = ATgetArgument(t, 0);
          {
            ATerm s_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_133;
    }
  return(t);
}
ATerm Var_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm z_134 = NULL,a_135 = NULL,b_135 = NULL,c_135 = NULL,k_16 = NULL;
  c_135 = t;
  if(match_cons(t, sym_Var_1))
    {
      a_135 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_135);
  z_134 = t;
  t = a_135;
  t = b_105(t);
  b_135 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, b_135);
  k_16 = t;
  t = SSLsetAnnotations(k_16, z_134);
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm t_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(u_45);
    }
  else
    {
      t = t_45;
      {
        ATerm l_135 = NULL,m_135 = NULL,n_135 = NULL,o_135 = NULL;
        if(match_cons(t, sym_SDefT_4))
          {
            l_135 = ATgetArgument(t, 0);
            m_135 = ATgetArgument(t, 1);
            n_135 = ATgetArgument(t, 2);
            o_135 = ATgetArgument(t, 3);
            t = n_135;
            t = map_1_0(l_16, t);
          }
        else
          {
            if(match_cons(t, sym_RDefT_4))
              {
                l_135 = ATgetArgument(t, 0);
                m_135 = ATgetArgument(t, 1);
                n_135 = ATgetArgument(t, 2);
                o_135 = ATgetArgument(t, 3);
              }
            else
              _fail(t);
            t = n_135;
            t = map_1_0(n_16, t);
          }
      }
    }
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm v_135 = NULL;
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_135 = ATgetArgument(t, 0);
          {
            ATerm x_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_45);
      t = v_135;
    }
  else
    {
      t = v_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_135 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_135;
    }
  return(t);
}
ATerm n_16 (ATerm t)
{
  ATerm e_136 = NULL;
  ATerm y_45 = t;
  int z_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_136 = ATgetArgument(t, 0);
          {
            ATerm a_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_45);
      t = e_136;
    }
  else
    {
      t = y_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_136;
    }
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm h_136 = NULL,i_136 = NULL,j_136 = NULL,k_136 = NULL,l_136 = NULL;
  h_136 = t;
  if(match_cons(t, sym_Let_2))
    {
      i_136 = ATgetArgument(t, 0);
      j_136 = ATgetArgument(t, 1);
      t = h_136;
      t = g_11(i_136, j_136, t);
    }
  else
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_136 = ATgetArgument(t, 0);
          j_136 = ATgetArgument(t, 1);
          k_136 = ATgetArgument(t, 2);
          t = j_136;
          t = map_1_0(r_16, t);
        }
      else
        {
          if(match_cons(t, sym_Rec_2))
            {
              i_136 = ATgetArgument(t, 0);
              j_136 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATempty, i_136);
            }
          else
            {
              if(match_cons(t, sym_SDefT_4))
                {
                  i_136 = ATgetArgument(t, 0);
                  j_136 = ATgetArgument(t, 1);
                  k_136 = ATgetArgument(t, 2);
                  l_136 = ATgetArgument(t, 3);
                  t = j_136;
                  t = map_1_0(s_16, t);
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      i_136 = ATgetArgument(t, 0);
                      j_136 = ATgetArgument(t, 1);
                      k_136 = ATgetArgument(t, 2);
                      l_136 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = j_136;
                  t = map_1_0(t_16, t);
                }
            }
        }
    }
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm t_136 = NULL;
  ATerm b_46 = t;
  int c_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_136 = ATgetArgument(t, 0);
          {
            ATerm d_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(c_46);
      t = t_136;
    }
  else
    {
      t = b_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_136 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_136;
    }
  return(t);
}
ATerm s_16 (ATerm t)
{
  ATerm e_137 = NULL;
  ATerm e_46 = t;
  int f_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_137 = ATgetArgument(t, 0);
          {
            ATerm i_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(f_46);
      t = e_137;
    }
  else
    {
      t = e_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_137;
    }
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm n_137 = NULL;
  ATerm j_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_137 = ATgetArgument(t, 0);
          {
            ATerm l_46 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_46);
      t = n_137;
    }
  else
    {
      t = j_46;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_137 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_137;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, j_16, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, p_16, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm y_11 (ATerm r_57, ATerm s_57, ATerm t)
{
  ATerm q_137 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_57, s_57);
  t = n_12(r_57, s_57, t);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_137 = ATgetFirst((ATermList) t);
      {
        ATerm m_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = q_137;
  return(t);
}
ATerm u_16 (ATerm t)
{
  ATerm n_138 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      n_138 = ATgetArgument(t, 0);
      {
        ATerm n_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = n_138;
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm o_138 = NULL,q_138 = NULL,r_138 = NULL,s_138 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      q_138 = ATgetArgument(t, 0);
      s_138 = ATgetArgument(t, 1);
      o_138 = ATgetArgument(t, 2);
      t = q_138;
      if(match_cons(t, sym_SVar_1))
        {
          r_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = o_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_138;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          q_138 = ATgetArgument(t, 0);
          s_138 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_138;
      if(match_cons(t, sym_SVar_1))
        {
          r_138 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_138;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_138;
    }
  return(t);
}
ATerm c_17 (ATerm t)
{
  ATerm x_138 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      x_138 = ATgetArgument(t, 0);
      {
        ATerm o_46 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_138;
  return(t);
}
ATerm d_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm q_46 = ATgetArgument(t, 0);
      if(((ATgetType(q_46) != AT_LIST) || !(ATisEmpty(q_46))))
        _fail(t);
      {
        ATerm r_46 = ATgetArgument(t, 1);
        if(((ATgetType(r_46) != AT_LIST) || !(ATisEmpty(r_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_17 (ATerm t)
{
  ATerm z_138 = NULL,a_139 = NULL,b_139 = NULL,c_139 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_46 = ATgetArgument(t, 0);
      if(((ATgetType(s_46) == AT_LIST) && !(ATisEmpty(s_46))))
        {
          z_138 = ATgetFirst((ATermList) s_46);
          a_139 = (ATerm) ATgetNext((ATermList) s_46);
        }
      else
        _fail(t);
      {
        ATerm t_46 = ATgetArgument(t, 1);
        if(((ATgetType(t_46) == AT_LIST) && !(ATisEmpty(t_46))))
          {
            b_139 = ATgetFirst((ATermList) t_46);
            c_139 = (ATerm) ATgetNext((ATermList) t_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_138, b_139), (ATerm) ATmakeAppl(sym__2, a_139, c_139));
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm d_139 = NULL,e_139 = NULL;
  if(match_cons(t, sym__2))
    {
      d_139 = ATgetArgument(t, 0);
      e_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_139), d_139);
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm f_139 = NULL,g_139 = NULL;
  if(match_cons(t, sym__2))
    {
      f_139 = ATgetArgument(t, 0);
      g_139 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_139), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_139)));
  return(t);
}
ATerm j_17 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm a_138 = NULL,b_138 = NULL,c_138 = NULL,d_138 = NULL,e_138 = NULL,f_138 = NULL,g_138 = NULL,h_138 = NULL,i_138 = NULL,j_138 = NULL,l_138 = NULL,m_138 = NULL,h_66 = NULL,i_66 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_46 = ATgetArgument(t, 0);
      if(match_cons(w_46, sym_SVar_1))
        {
          c_138 = ATgetArgument(w_46, 0);
        }
      else
        _fail(t);
      e_138 = ATgetArgument(t, 1);
      i_138 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_138), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  h_66 = t;
  t = term_y_46;
  i_66 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_46, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_138), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  t = y_11(i_66, h_66, t);
  if(match_cons(t, sym_Defined_4))
    {
      ATerm z_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_46) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      a_138 = ATgetArgument(t, 1);
      b_138 = ATgetArgument(t, 2);
      h_138 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, c_138, a_138, h_138, b_138);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((c_138 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_138 = ATgetArgument(t, 1);
      {
        ATerm a_47 = ATgetArgument(t, 2);
      }
      f_138 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_138;
  t = map_1_0(u_16, t);
  m_138 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_138, e_138, f_138);
  t = substitute_2_0(z_16, _id, t);
  g_138 = t;
  t = h_138;
  t = map_1_0(c_17, t);
  j_138 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_138, j_138);
  t = genzip_4_0(d_17, g_17, h_17, i_17, t);
  l_138 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, j_138, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, l_138), g_138));
  t = downup_1_0(j_17, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm p_139 = NULL,q_139 = NULL,r_139 = NULL;
  p_139 = t;
  t = term_s_21;
  q_139 = t;
  t = (ATerm) ATinsert(ATempty, term_b_47);
  r_139 = t;
  t = SSL_printnl(q_139, r_139);
  t = p_139;
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = debug_1_0(m_17, t);
  return(t);
}
ATerm m_17 (ATerm t)
{
  t = term_c_47;
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm z_139 = NULL,a_140 = NULL,b_140 = NULL;
  z_139 = t;
  t = term_s_21;
  a_140 = t;
  t = (ATerm) ATinsert(ATempty, term_d_47);
  b_140 = t;
  t = SSL_printnl(a_140, b_140);
  t = z_139;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm n_139 = NULL,o_139 = NULL;
  o_139 = t;
  t = new_0_0(t);
  n_139 = t;
  {
    ATerm e_47 = t;
    int k_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_s_47, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_139), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(k_47);
      }
    else
      {
        t = e_47;
        t = if_verbose2_1_0(k_17, t);
        _fail(t);
      }
    {
      ATerm v_47 = t;
      int w_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_139 = NULL,t_139 = NULL,u_139 = NULL,v_139 = NULL,w_139 = NULL,x_139 = NULL,y_139 = NULL;
          s_139 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              t_139 = ATgetArgument(t, 0);
              y_139 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = t_139;
          if(match_cons(t, sym_CallT_3))
            {
              u_139 = ATgetArgument(t, 0);
              w_139 = ATgetArgument(t, 1);
              x_139 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_139;
          if(match_cons(t, sym_SVar_1))
            {
              v_139 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_139;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_139;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = v_139;
          if((n_139 != t))
            {
              _fail(t);
            }
          t = s_139;
          ;
          LocalPopChoice(w_47);
        }
      else
        {
          t = v_47;
          t = if_verbose1_1_0(l_17, t);
          _fail(t);
        }
      t = if_verbose2_1_0(n_17, t);
      t = o_139;
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
ATerm z_11 (ATerm i_131 (ATerm), ATerm y_56, ATerm w_56, ATerm t)
{
  ATerm c_140 = NULL,d_140 = NULL,e_140 = NULL,f_140 = NULL,g_140 = NULL,h_140 = NULL;
  f_140 = t;
  t = i_131(t);
  c_140 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_140, y_56, w_56);
  t = o_12(c_140, y_56, w_56, t);
  {
    ATerm x_47 = t;
    int y_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_140 = NULL;
        t = term_a_28;
        i_140 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_140, term_a_28);
        t = n_12(c_140, i_140, t);
        ;
        LocalPopChoice(y_47);
      }
    else
      {
        t = x_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_140 = ATgetFirst((ATermList) t);
        e_140 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_a_28;
    g_140 = t;
    t = (ATerm) ATinsert(CheckATermList(e_140), (ATerm) ATinsert(CheckATermList(d_140), y_56));
    h_140 = t;
    t = SSL_table_put(c_140, g_140, h_140);
    t = f_140;
  }
  return(t);
}
ATerm o_17 (ATerm t)
{
  t = term_y_46;
  return(t);
}
ATerm a_12 (ATerm o_41, ATerm p_41, ATerm r_41, ATerm q_41, ATerm t)
{
  ATerm j_140 = NULL,l_140 = NULL,m_140 = NULL;
  j_140 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_41), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  l_140 = t;
  t = (ATerm) ATmakeAppl(sym_Defined_4, term_z_47, p_41, q_41, r_41);
  m_140 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, o_41), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_z_47, p_41, q_41, r_41));
  t = z_11(o_17, l_140, m_140, t);
  t = j_140;
  return(t);
}
ATerm map_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm e_141 (ATerm t)
  {
    ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL;
    b_141 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_141;
      }
    else
      {
        ATerm n_66 = NULL,q_66 = NULL,r_66 = NULL,m_16 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_141 = ATgetFirst((ATermList) t);
            d_141 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_141);
        n_66 = t;
        t = c_141;
        t = f_123(t);
        q_66 = t;
        t = d_141;
        t = e_141(t);
        r_66 = t;
        t = (ATerm) ATinsert(CheckATermList(r_66), q_66);
        m_16 = t;
        t = SSLsetAnnotations(m_16, n_66);
      }
    return(t);
  }
  t = e_141(t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm g_141 = NULL,h_141 = NULL,j_141 = NULL,o_141 = NULL,p_141 = NULL,q_141 = NULL,o_16 = NULL;
  q_141 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_141 = ATgetFirst((ATermList) t);
      j_141 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_141);
  g_141 = t;
  t = h_141;
  t = u_103(t);
  o_141 = t;
  t = j_141;
  t = v_103(t);
  p_141 = t;
  t = (ATerm) ATinsert(CheckATermList(p_141), o_141);
  o_16 = t;
  t = SSLsetAnnotations(o_16, g_141);
  return(t);
}
ATerm d_12 (ATerm v_74, ATerm w_74, ATerm t)
{
  ATerm r_141 = NULL;
  t = SSL_fputc(v_74, w_74);
  r_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_141);
  return(t);
}
ATerm e_12 (ATerm j_78, ATerm k_78, ATerm t)
{
  ATerm s_141 = NULL;
  t = SSL_write_term_to_stream_text(j_78, k_78);
  s_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_141);
  return(t);
}
ATerm h_12 (ATerm y_138 (ATerm), ATerm c_566, ATerm n_78, ATerm t)
{
  ATerm t_141 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_566, term_a_48);
  t = open_stream_0_0(t);
  t_141 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_141, n_78);
  t = y_138(t);
  t = fclose_0_0(t);
  t = n_78;
  return(t);
}
ATerm f_12 (ATerm f_78, ATerm g_78, ATerm t)
{
  ATerm u_141 = NULL;
  t = SSL_write_term_to_stream_baf(f_78, g_78);
  u_141 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_141);
  return(t);
}
ATerm t_17 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_48 = ATgetArgument(t, 0);
      if(match_cons(b_48, sym_Stream_1))
        {
          f_67 = ATgetArgument(b_48, 0);
        }
      else
        _fail(t);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_12(f_67, g_67, t);
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm r_67 = NULL,s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_48 = ATgetArgument(t, 0);
      if(match_cons(c_48, sym_Stream_1))
        {
          u_67 = ATgetArgument(c_48, 0);
        }
      else
        _fail(t);
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_12(u_67, v_67, t);
  r_67 = t;
  t = term_d_48;
  s_67 = t;
  t = r_67;
  if(match_cons(t, sym_Stream_1))
    {
      t_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_48, r_67);
  t = d_12(s_67, t_67, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm y_141 = NULL,z_141 = NULL,a_142 = NULL,b_142 = NULL,c_142 = NULL,e_142 = NULL,f_142 = NULL,g_142 = NULL,h_142 = NULL,i_142 = NULL,i_143 = NULL,j_143 = NULL,b_17 = NULL,a_17 = NULL;
  if(((z_141 != NULL) && (z_141 != t)))
    _fail(t);
  else
    z_141 = t;
  if(match_cons(t, sym__2))
    {
      if(((g_142 != NULL) && (g_142 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        g_142 = ATgetArgument(t, 0);
      if(((h_142 != NULL) && (h_142 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        h_142 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(z_141));
  if(((f_142 != NULL) && (f_142 != t)))
    _fail(t);
  else
    f_142 = t;
  t = not_null(g_142);
  {
    ATerm g_48 = t;
    int h_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_17 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((y_141 != NULL) && (y_141 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                y_141 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(q_17, t);
        ;
        LocalPopChoice(h_48);
      }
    else
      {
        t = g_48;
        t = term_i_48;
        if(((y_141 != NULL) && (y_141 != t)))
          _fail(t);
        else
          y_141 = t;
      }
    if(((i_142 != NULL) && (i_142 != t)))
      _fail(t);
    else
      i_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_142), not_null(h_142));
    if(((a_17 != NULL) && (a_17 != t)))
      _fail(t);
    else
      a_17 = t;
    t = SSLsetAnnotations(not_null(a_17), not_null(f_142));
    t = not_null(z_141);
    if(match_cons(t, sym__2))
      {
        if(((b_142 != NULL) && (b_142 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          b_142 = ATgetArgument(t, 0);
        if(((c_142 != NULL) && (c_142 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          c_142 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(z_141));
    if(((a_142 != NULL) && (a_142 != t)))
      _fail(t);
    else
      a_142 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_142), (ATerm) ATmakeAppl(sym__2, not_null(y_141), not_null(c_142)));
    if(((b_17 != NULL) && (b_17 != t)))
      _fail(t);
    else
      b_17 = t;
    t = SSLsetAnnotations(not_null(b_17), not_null(a_142));
    if(((e_142 != NULL) && (e_142 != t)))
      _fail(t);
    else
      e_142 = t;
    if(match_cons(t, sym__2))
      {
        if(((i_143 != NULL) && (i_143 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          i_143 = ATgetArgument(t, 0);
        if(((j_143 != NULL) && (j_143 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_143 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm j_48 = t;
      int k_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_66 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL,e_17 = NULL;
          t = SSLgetAnnotations(not_null(e_142));
          y_66 = t;
          t = not_null(i_143);
          t = fetch_1_0(t_17, t);
          b_67 = t;
          t = not_null(j_143);
          if(match_cons(t, sym__2))
            {
              d_67 = ATgetArgument(t, 0);
              e_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_12(x_17, d_67, e_67, t);
          c_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, b_67, c_67);
          e_17 = t;
          t = SSLsetAnnotations(e_17, y_66);
          ;
          LocalPopChoice(k_48);
        }
      else
        {
          t = j_48;
          {
            ATerm l_67 = NULL,o_67 = NULL,p_67 = NULL,q_67 = NULL,f_17 = NULL;
            t = SSLgetAnnotations(not_null(e_142));
            l_67 = t;
            t = not_null(j_143);
            if(match_cons(t, sym__2))
              {
                p_67 = ATgetArgument(t, 0);
                q_67 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_12(y_17, p_67, q_67, t);
            o_67 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_143), o_67);
            f_17 = t;
            t = SSLsetAnnotations(f_17, l_67);
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
ATerm apply_strategy_1_0 (ATerm k_140 (ATerm), ATerm t)
{
  ATerm m_143 = NULL,n_143 = NULL,o_143 = NULL,p_143 = NULL,q_143 = NULL;
  q_143 = t;
  t = dtime_0_0(t);
  t = q_143;
  t = k_140(t);
  p_143 = t;
  t = dtime_0_0(t);
  m_143 = t;
  t = p_143;
  if(match_cons(t, sym__2))
    {
      n_143 = ATgetArgument(t, 0);
      o_143 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_143), (ATerm) ATmakeAppl(sym_Runtime_1, m_143)), o_143);
  return(t);
}
ATerm e_144 (ATerm y_143, ATerm t)
{
  t = SSL_fclose(y_143);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_144 = NULL,c_144 = NULL;
  c_144 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_144 = ATgetArgument(t, 0);
      {
        ATerm l_48 = t;
        int m_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_144);
            ;
            LocalPopChoice(m_48);
          }
        else
          {
            t = l_48;
            t = e_144(c_144, t);
          }
      }
    }
  else
    {
      t = e_144(c_144, t);
    }
  return(t);
}
ATerm i_12 (ATerm l_78, ATerm t)
{
  t = SSL_read_term_from_stream(l_78);
  return(t);
}
ATerm k_12 (ATerm x_74, ATerm y_74, ATerm t)
{
  ATerm f_144 = NULL;
  t = SSL_fopen(x_74, y_74);
  f_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_144);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_144 = NULL;
  t = SSL_stdin_stream();
  g_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_144);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_144 = NULL;
  t = SSL_stdout_stream();
  h_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_144);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_144 = NULL;
  t = SSL_stderr_stream();
  i_144 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_144);
  return(t);
}
ATerm e_146 (ATerm s_144, ATerm t)
{
  ATerm t_144 = NULL;
  t = SSL_explode_term(s_144);
  if(match_cons(t, sym__2))
    {
      ATerm o_48 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_48) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_48 = ATgetArgument(t, 1);
        if(((ATgetType(p_48) == AT_LIST) && !(ATisEmpty(p_48))))
          {
            t_144 = ATgetFirst((ATermList) p_48);
            {
              ATerm q_48 = (ATerm) ATgetNext((ATermList) p_48);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = t_144;
  if(match_cons(t, sym_stderr_0))
    {
      t = t_144;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = t_144;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = t_144;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm f_146 (ATerm w_144, ATerm x_144, ATerm y_144, ATerm t)
{
  ATerm z_144 = NULL,a_145 = NULL,b_145 = NULL,e_145 = NULL,p_17 = NULL;
  t = SSLgetAnnotations(y_144);
  b_145 = t;
  t = w_144;
  if(match_cons(t, sym_Path_1))
    {
      e_145 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_145, x_144);
  p_17 = t;
  t = SSLsetAnnotations(p_17, b_145);
  if(match_cons(t, sym__2))
    {
      z_144 = ATgetArgument(t, 0);
      a_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(z_144, a_145, t);
  return(t);
}
ATerm g_146 (ATerm p_145, ATerm q_145, ATerm r_145, ATerm t)
{
  ATerm u_145 = NULL,v_145 = NULL,w_145 = NULL,z_145 = NULL,s_17 = NULL;
  t = SSLgetAnnotations(r_145);
  w_145 = t;
  t = SSL_is_string(p_145);
  z_145 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_145, q_145);
  s_17 = t;
  t = SSLsetAnnotations(s_17, w_145);
  if(match_cons(t, sym__2))
    {
      u_145 = ATgetArgument(t, 0);
      v_145 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_12(u_145, v_145, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm b_146 = NULL,c_146 = NULL,d_146 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_48 = ATgetArgument(t, 0);
      ATerm u_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  b_146 = t;
  if(match_cons(t, sym__2))
    {
      c_146 = ATgetArgument(t, 0);
      d_146 = ATgetArgument(t, 1);
      {
        ATerm v_48 = t;
        int w_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_146(b_146, t);
            ;
            LocalPopChoice(w_48);
          }
        else
          {
            t = v_48;
            {
              ATerm z_48 = t;
              int a_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_146(c_146, d_146, b_146, t);
                  ;
                  LocalPopChoice(a_49);
                }
              else
                {
                  t = z_48;
                  t = g_146(c_146, d_146, b_146, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_146(b_146, t);
    }
  return(t);
}
ATerm a_18 (ATerm t)
{
  t = term_b_49;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_146 = NULL,i_146 = NULL,j_146 = NULL;
  ATerm c_49 = t;
  int e_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_146 = NULL;
      k_146 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_146, term_g_49);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(e_49);
    }
  else
    {
      t = c_49;
      t = debug_1_0(a_18, t);
      _fail(t);
    }
  i_146 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_146 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_12(j_146, t);
  h_146 = t;
  t = i_146;
  t = fclose_0_0(t);
  t = h_146;
  return(t);
}
ATerm fetch_1_0 (ATerm p_123 (ATerm), ATerm t)
{
  ATerm o_147 (ATerm t)
  {
    ATerm l_147 = NULL,m_147 = NULL,n_147 = NULL;
    l_147 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_147 = ATgetFirst((ATermList) t);
        n_147 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_49 = t;
      int k_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_68 = NULL,k_68 = NULL,g_18 = NULL;
          t = SSLgetAnnotations(l_147);
          h_68 = t;
          t = m_147;
          t = p_123(t);
          k_68 = t;
          t = (ATerm) ATinsert(CheckATermList(n_147), k_68);
          g_18 = t;
          t = SSLsetAnnotations(g_18, h_68);
          ;
          LocalPopChoice(k_49);
        }
      else
        {
          t = h_49;
          {
            ATerm s_68 = NULL,v_68 = NULL,h_18 = NULL;
            t = SSLgetAnnotations(l_147);
            s_68 = t;
            t = n_147;
            t = o_147(t);
            v_68 = t;
            t = (ATerm) ATinsert(CheckATermList(v_68), m_147);
            h_18 = t;
            t = SSLsetAnnotations(h_18, s_68);
          }
        }
    }
    return(t);
  }
  t = o_147(t);
  return(t);
}
ATerm c_12 (ATerm n_72, ATerm o_72, ATerm t)
{
  t = SSL_strcat(n_72, o_72);
  return(t);
}
ATerm debug_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm r_147 = NULL,s_147 = NULL,t_147 = NULL,u_147 = NULL;
  r_147 = t;
  t = w_138(t);
  s_147 = t;
  t = term_s_21;
  t_147 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_147), s_147);
  u_147 = t;
  t = SSL_printnl(t_147, u_147);
  t = r_147;
  return(t);
}
ATerm b_18 (ATerm t)
{
  ATerm l_49 = t;
  int t_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(t_49);
    }
  else
    {
      t = l_49;
    }
  return(t);
}
ATerm d_18 (ATerm t)
{
  t = term_v_49;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_49 = t;
  int b_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_148 = NULL;
      j_148 = t;
      t = SSL_is_string(j_148);
      ;
      LocalPopChoice(b_50);
    }
  else
    {
      t = z_49;
      {
        ATerm c_50 = t;
        int d_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_18, t);
            ;
            LocalPopChoice(d_50);
          }
        else
          {
            t = c_50;
            {
              ATerm p_148 = NULL,q_148 = NULL,r_148 = NULL;
              p_148 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_148 = ATgetArgument(t, 0);
                  t = q_148;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_148 = ATgetArgument(t, 0);
                      t = q_148;
                      {
                        ATerm e_50 = t;
                        int f_50 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(f_50);
                          }
                        else
                          {
                            t = e_50;
                            t = debug_1_0(d_18, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_148 = NULL,w_148 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_148 = ATgetArgument(t, 0);
                          r_148 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_148;
                      t = eval_config_0_0(t);
                      v_148 = t;
                      t = r_148;
                      t = eval_config_0_0(t);
                      w_148 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_148, w_148);
                      t = c_12(v_148, w_148, t);
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
  ATerm c_149 = NULL,d_149 = NULL;
  c_149 = t;
  t = term_g_50;
  d_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_50, c_149);
  t = n_12(d_149, c_149, t);
  {
    ATerm h_50 = t;
    int i_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_149 = NULL,g_149 = NULL;
        t = eval_config_0_0(t);
        f_149 = t;
        t = term_g_50;
        g_149 = t;
        t = SSL_table_put(g_149, c_149, f_149);
        t = f_149;
        ;
        LocalPopChoice(i_50);
      }
    else
      {
        t = h_50;
      }
  }
  return(t);
}
ATerm e_18 (ATerm t)
{
  ATerm k_149 = NULL;
  k_149 = t;
  if(match_string(t, "-k"))
    {
      t = k_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_149;
    }
  return(t);
}
ATerm f_18 (ATerm t)
{
  ATerm l_149 = NULL,m_149 = NULL,n_149 = NULL;
  l_149 = t;
  t = SSL_string_to_int(l_149);
  m_149 = t;
  t = term_j_50;
  n_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_50, m_149);
  t = q_12(n_149, m_149, t);
  t = l_149;
  return(t);
}
ATerm i_18 (ATerm t)
{
  t = term_k_50;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_18, f_18, i_18, t);
  return(t);
}
ATerm j_18 (ATerm t)
{
  ATerm p_149 = NULL;
  p_149 = t;
  if(match_string(t, "-S"))
    {
      t = p_149;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = p_149;
    }
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm q_149 = NULL,r_149 = NULL;
  t = term_f_22;
  q_149 = t;
  t = term_m_50;
  r_149 = t;
  t = term_n_50;
  t = q_12(q_149, r_149, t);
  t = term_o_50;
  return(t);
}
ATerm n_18 (ATerm t)
{
  t = term_p_50;
  return(t);
}
ATerm p_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm s_149 = NULL,t_149 = NULL,u_149 = NULL;
  s_149 = t;
  t = SSL_string_to_int(s_149);
  t_149 = t;
  t = term_f_22;
  u_149 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_22, t_149);
  t = q_12(u_149, t_149, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, s_149);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = term_q_50;
  return(t);
}
ATerm w_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm v_149 = NULL,w_149 = NULL;
  t = term_s_50;
  v_149 = t;
  t = term_r_21;
  w_149 = t;
  t = term_t_50;
  t = q_12(v_149, w_149, t);
  t = term_u_50;
  return(t);
}
ATerm a_19 (ATerm t)
{
  t = term_v_50;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_18, l_18, n_18, t);
      ;
      LocalPopChoice(x_50);
    }
  else
    {
      t = w_50;
      {
        ATerm y_50 = t;
        int z_50 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_18, r_18, v_18, t);
            ;
            LocalPopChoice(z_50);
          }
        else
          {
            t = y_50;
            t = Option_3_0(w_18, z_18, a_19, t);
          }
      }
    }
  return(t);
}
ATerm q_12 (ATerm w_80, ATerm x_80, ATerm t)
{
  ATerm x_149 = NULL;
  t = term_g_50;
  x_149 = t;
  t = SSL_table_put(x_149, w_80, x_80);
  t = (ATerm) ATmakeAppl(sym__3, term_g_50, w_80, x_80);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm a_150 = NULL,b_150 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm c_150 = NULL,d_150 = NULL,e_150 = NULL;
      t = term_r_21;
      t = d_0(t);
      c_150 = t;
      t = term_a_51;
      d_150 = t;
      t = term_b_51;
      e_150 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_51, term_b_51, c_150);
      t = o_12(d_150, e_150, c_150, t);
      _fail(t);
    }
  else
    {
      ATerm h_150 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_150 = ATgetFirst((ATermList) t);
          b_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_150;
      t = a_0(t);
      t = term_r_21;
      t = b_0(t);
      h_150 = t;
      t = (ATerm) ATinsert(CheckATermList(b_150), h_150);
    }
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm j_150 = NULL;
  j_150 = t;
  if(match_string(t, "-o"))
    {
      t = j_150;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = j_150;
    }
  return(t);
}
ATerm c_19 (ATerm t)
{
  ATerm k_150 = NULL,l_150 = NULL;
  k_150 = t;
  t = term_c_51;
  l_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_51, k_150);
  t = q_12(l_150, k_150, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, k_150);
  return(t);
}
ATerm d_19 (ATerm t)
{
  t = term_d_51;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_19, c_19, d_19, t);
  return(t);
}
ATerm o_12 (ATerm g_57, ATerm h_57, ATerm f_57, ATerm t)
{
  ATerm n_150 = NULL,o_150 = NULL,p_150 = NULL;
  n_150 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_51 = ATgetArgument(t, 0);
            ATerm i_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, g_57, h_57);
        t = n_12(g_57, h_57, t);
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
        t = (ATerm) ATempty;
      }
    o_150 = t;
    t = (ATerm) ATinsert(CheckATermList(o_150), f_57);
    p_150 = t;
    t = SSL_table_put(g_57, h_57, p_150);
    t = n_150;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm w_150 = NULL,x_150 = NULL,y_150 = NULL,z_150 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm a_151 = NULL,b_151 = NULL,c_151 = NULL;
      t = term_r_21;
      t = m_0(t);
      a_151 = t;
      t = term_a_51;
      b_151 = t;
      t = term_b_51;
      c_151 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_51, term_b_51, a_151);
      t = o_12(b_151, c_151, a_151, t);
      _fail(t);
    }
  else
    {
      ATerm g_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_150 = ATgetFirst((ATermList) t);
          x_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_150;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_150 = ATgetFirst((ATermList) t);
          z_150 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_150;
      t = i_0(t);
      t = y_150;
      t = k_0(t);
      g_151 = t;
      t = (ATerm) ATinsert(CheckATermList(z_150), g_151);
    }
  return(t);
}
ATerm f_19 (ATerm t)
{
  ATerm i_151 = NULL;
  i_151 = t;
  if(match_string(t, "-i"))
    {
      t = i_151;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = i_151;
    }
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm j_151 = NULL,k_151 = NULL;
  j_151 = t;
  t = term_j_51;
  k_151 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_51, j_151);
  t = q_12(k_151, j_151, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, j_151);
  return(t);
}
ATerm j_19 (ATerm t)
{
  t = term_k_51;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_19, h_19, j_19, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm l_151 = NULL,m_151 = NULL,n_151 = NULL,o_151 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_21;
  t = whoami_0_0(t);
  l_151 = t;
  t = term_s_21;
  n_151 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_51), l_151);
  o_151 = t;
  t = SSL_printnl(n_151, o_151);
  t = term_x_21;
  m_151 = t;
  t = SSL_exit(m_151);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_o_51;
  t = get_config_0_0(t);
  return(t);
}
ATerm l_12 (ATerm k_55, ATerm l_55, ATerm t)
{
  ATerm p_51 = t;
  int q_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(k_55, l_55);
      ;
      LocalPopChoice(q_51);
    }
  else
    {
      t = p_51;
      t = SSL_addr(k_55, l_55);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm q_151 = NULL,r_151 = NULL,s_151 = NULL;
  q_151 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_151;
      t = x_129(t);
    }
  else
    {
      ATerm v_151 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_151 = ATgetFirst((ATermList) t);
          s_151 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_151;
      t = foldr_2_0(x_129, y_129, t);
      v_151 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_151, v_151);
      t = y_129(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm k_19 (ATerm t)
{
  t = term_m_50;
  return(t);
}
ATerm n_19 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL;
  if(match_cons(t, sym__2))
    {
      o_69 = ATgetArgument(t, 0);
      p_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_12(o_69, p_69, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_151 = NULL,i_69 = NULL,j_69 = NULL;
  t = times_0_0(t);
  j_69 = t;
  t = SSL_explode_term(j_69);
  if(match_cons(t, sym__2))
    {
      ATerm r_51 = ATgetArgument(t, 0);
      i_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_69;
  t = foldr_2_0(k_19, n_19, t);
  y_151 = t;
  t = SSL_TicksToSeconds(y_151);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_152 = NULL,k_152 = NULL,l_152 = NULL;
  j_152 = t;
  if(match_cons(t, sym__2))
    {
      k_152 = ATgetArgument(t, 0);
      l_152 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_152;
        if((k_152 != t))
          {
            _fail(t);
          }
        t = j_152;
        ;
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
        t = (ATerm) ATmakeAppl(sym__2, k_152, l_152);
        {
          ATerm y_51 = t;
          int z_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_152, l_152);
              ;
              LocalPopChoice(z_51);
            }
          else
            {
              t = y_51;
              t = SSL_gtr(k_152, l_152);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_152, l_152);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_148 (ATerm), ATerm t)
{
  ATerm p_152 = NULL;
  p_152 = t;
  {
    ATerm c_52 = t;
    int d_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_152 = NULL;
        t = term_f_22;
        t = get_config_0_0(t);
        r_152 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_152, term_x_21);
        t = geq_0_0(t);
        t = p_152;
        t = x_148(t);
        ;
        LocalPopChoice(d_52);
      }
    else
      {
        t = c_52;
        t = p_152;
      }
  }
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm t_152 = NULL,u_152 = NULL,w_152 = NULL,x_152 = NULL;
  t = run_time_0_0(t);
  t_152 = t;
  t = term_r_21;
  t = whoami_0_0(t);
  u_152 = t;
  t = term_s_21;
  w_152 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_52), t_152), term_e_52), u_152);
  x_152 = t;
  t = SSL_printnl(w_152, x_152);
  t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_52), t_152), term_e_52), u_152));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_19, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_152 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_50;
  y_152 = t;
  t = SSL_exit(y_152);
  return(t);
}
ATerm p_19 (ATerm t)
{
  ATerm g_153 = NULL,h_153 = NULL;
  h_153 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_153;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_153 = ATgetArgument(t, 0);
          {
            ATerm r_70 = NULL,k_18 = NULL;
            t = SSLgetAnnotations(h_153);
            r_70 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_153);
            k_18 = t;
            t = SSLsetAnnotations(k_18, r_70);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_153;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm i_141 (ATerm), ATerm t)
{
  ATerm g_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_52;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = g_52;
      t = fetch_1_0(p_19, t);
    }
  t = i_141(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_153 = NULL,l_153 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_153 = ATgetFirst((ATermList) t);
      l_153 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_153 = NULL,q_153 = NULL;
        ATerm t_19 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_153)), not_null(q_153));
          return(t);
        }
        t = not_null(l_153);
        t = g_0(t);
        if(((p_153 != NULL) && (p_153 != t)))
          _fail(t);
        else
          p_153 = t;
        t = not_null(k_153);
        t = f_0(t);
        if(((q_153 != NULL) && (q_153 != t)))
          _fail(t);
        else
          q_153 = t;
        t = not_null(l_153);
        t = reverse_acc_2_0(f_0, t_19, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_21;
      t = g_0(t);
    }
  return(t);
}
ATerm n_12 (ATerm x_58, ATerm y_58, ATerm t)
{
  t = SSL_table_get(x_58, y_58);
  return(t);
}
ATerm u_19 (ATerm t)
{
  ATerm u_153 = NULL,v_153 = NULL,w_153 = NULL,m_18 = NULL;
  w_153 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_153 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_153);
  u_153 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_153);
  m_18 = t;
  t = SSLsetAnnotations(m_18, u_153);
  return(t);
}
ATerm v_19 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_20 (ATerm t)
{
  ATerm y_153 = NULL;
  y_153 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_153), term_j_52);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_153 = NULL,t_153 = NULL;
  ATerm k_52 = t;
  int l_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_51;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_52);
    }
  else
    {
      t = k_52;
      t = fetch_1_0(u_19, t);
    }
  t = term_m_52;
  t = echo_0_0(t);
  t = term_a_51;
  s_153 = t;
  t = term_b_51;
  t_153 = t;
  t = term_n_52;
  t = n_12(s_153, t_153, t);
  t = reverse_acc_2_0(_id, v_19, t);
  t = map_1_0(a_20, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_154 = NULL,b_154 = NULL,c_154 = NULL;
  a_154 = t;
  {
    ATerm o_52 = t;
    int p_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_154;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_52 = ATgetFirst((ATermList) t);
                ATerm s_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_154;
          }
        ;
        LocalPopChoice(p_52);
      }
    else
      {
        t = o_52;
        t = (ATerm) ATinsert(ATempty, a_154);
      }
    b_154 = t;
    t = term_i_48;
    c_154 = t;
    t = SSL_printnl(c_154, b_154);
    t = a_154;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_o_51;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm b_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm g_154 = NULL,h_154 = NULL;
  t = term_t_52;
  g_154 = t;
  t = term_r_21;
  h_154 = t;
  t = term_u_52;
  t = q_12(g_154, h_154, t);
  return(t);
}
ATerm d_20 (ATerm t)
{
  t = term_v_52;
  return(t);
}
ATerm e_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm i_154 = NULL,j_154 = NULL,k_154 = NULL,l_154 = NULL;
  t = term_t_52;
  k_154 = t;
  t = term_r_21;
  l_154 = t;
  t = term_u_52;
  t = q_12(k_154, l_154, t);
  t = term_w_52;
  i_154 = t;
  t = term_r_21;
  j_154 = t;
  t = term_x_52;
  t = q_12(i_154, j_154, t);
  t = term_a_53;
  return(t);
}
ATerm h_20 (ATerm t)
{
  t = term_c_53;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_53 = t;
  int e_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(b_20, c_20, d_20, t);
      ;
      LocalPopChoice(e_53);
    }
  else
    {
      t = d_53;
      t = Option_3_0(e_20, g_20, h_20, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_144 (ATerm), ATerm t)
{
  ATerm q_154 = NULL,r_154 = NULL,s_154 = NULL,t_154 = NULL,v_154 = NULL,w_154 = NULL,o_18 = NULL;
  if(((q_154 != NULL) && (q_154 != t)))
    _fail(t);
  else
    q_154 = t;
  {
    ATerm f_53 = t;
    int g_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_53;
        t = n_144(t);
        ;
        LocalPopChoice(g_53);
      }
    else
      {
        t = f_53;
      }
    t = not_null(q_154);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_154 != NULL) && (s_154 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_154 = ATgetFirst((ATermList) t);
        if(((t_154 != NULL) && (t_154 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          t_154 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(q_154));
    if(((r_154 != NULL) && (r_154 != t)))
      _fail(t);
    else
      r_154 = t;
    t = term_o_51;
    if(((w_154 != NULL) && (w_154 != t)))
      _fail(t);
    else
      w_154 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_o_51, not_null(s_154));
    t = q_12(not_null(w_154), not_null(s_154), t);
    t = not_null(t_154);
    {
      ATerm g_155 (ATerm t)
      {
        ATerm i_53 = t;
        int j_53 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_53 = t;
            int l_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_154 = NULL;
                z_154 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = z_154;
                ;
                LocalPopChoice(l_53);
              }
            else
              {
                t = k_53;
                t = n_144(t);
                t = Cons_2_0(_id, g_155, t);
              }
            ;
            LocalPopChoice(j_53);
          }
        else
          {
            t = i_53;
            {
              ATerm c_155 = NULL,d_155 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_155 = ATgetFirst((ATermList) t);
                  d_155 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(d_155), (ATerm) ATmakeAppl(sym_Undefined_1, c_155));
            }
          }
        return(t);
      }
      t = g_155(t);
      if(((v_154 != NULL) && (v_154 != t)))
        _fail(t);
      else
        v_154 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(v_154)), (ATerm) ATmakeAppl(sym_Program_1, not_null(s_154)));
      if(((o_18 != NULL) && (o_18 != t)))
        _fail(t);
      else
        o_18 = t;
      t = SSLsetAnnotations(not_null(o_18), not_null(r_154));
    }
  }
  return(t);
}
ATerm l_20 (ATerm t)
{
  ATerm s_155 = NULL;
  s_155 = t;
  if(match_string(t, "--help"))
    {
      t = s_155;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = s_155;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = s_155;
        }
    }
  return(t);
}
ATerm m_20 (ATerm t)
{
  ATerm t_155 = NULL,u_155 = NULL;
  t = term_i_52;
  t_155 = t;
  t = term_r_21;
  u_155 = t;
  t = term_m_53;
  t = q_12(t_155, u_155, t);
  t = term_n_53;
  return(t);
}
ATerm n_20 (ATerm t)
{
  t = term_o_53;
  return(t);
}
ATerm u_20 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_144 (ATerm), ATerm t)
{
  ATerm l_155 = NULL,m_155 = NULL,n_155 = NULL,o_155 = NULL,p_155 = NULL,q_155 = NULL,r_155 = NULL;
  if(((n_155 != NULL) && (n_155 != t)))
    _fail(t);
  else
    n_155 = t;
  t = term_a_51;
  if(((p_155 != NULL) && (p_155 != t)))
    _fail(t);
  else
    p_155 = t;
  t = term_b_51;
  if(((q_155 != NULL) && (q_155 != t)))
    _fail(t);
  else
    q_155 = t;
  t = (ATerm) ATempty;
  if(((r_155 != NULL) && (r_155 != t)))
    _fail(t);
  else
    r_155 = t;
  t = SSL_table_put(not_null(p_155), not_null(q_155), not_null(r_155));
  t = not_null(n_155);
  {
    ATerm i_20 (ATerm t)
    {
      ATerm p_53 = t;
      int q_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_144(t);
          ;
          LocalPopChoice(q_53);
        }
      else
        {
          t = p_53;
          {
            ATerm r_53 = t;
            int s_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_20, m_20, n_20, t);
                ;
                LocalPopChoice(s_53);
              }
            else
              {
                t = r_53;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_20, t);
    {
      ATerm t_53 = t;
      int u_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_156 = NULL;
          b_156 = t;
          {
            ATerm v_53 = t;
            int w_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_71 = NULL;
                t = b_156;
                {
                  ATerm x_53 = t;
                  int z_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_i_52;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_53);
                    }
                  else
                    {
                      t = x_53;
                      t = fetch_1_0(u_20, t);
                    }
                  t = b_156;
                  t = default_system_usage_0_0(t);
                  t = term_m_50;
                  i_71 = t;
                  t = SSL_exit(i_71);
                }
                ;
                LocalPopChoice(w_53);
              }
            else
              {
                t = v_53;
                {
                  ATerm s_71 = NULL;
                  t = term_t_52;
                  t = get_config_0_0(t);
                  t = b_156;
                  t = default_system_about_0_0(t);
                  t = term_m_50;
                  s_71 = t;
                  t = SSL_exit(s_71);
                }
              }
          }
          ;
          LocalPopChoice(u_53);
        }
      else
        {
          t = t_53;
          {
            ATerm a_54 = t;
            int b_54 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm c_156 = NULL,d_156 = NULL,e_156 = NULL;
                ATerm v_20 (ATerm t)
                {
                  ATerm f_156 = NULL,g_156 = NULL,h_156 = NULL,q_18 = NULL;
                  h_156 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      g_156 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_156);
                  f_156 = t;
                  t = g_156;
                  if(((l_155 != NULL) && (l_155 != t)))
                    _fail(t);
                  else
                    l_155 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_156);
                  q_18 = t;
                  t = SSLsetAnnotations(q_18, f_156);
                  return(t);
                }
                t = fetch_1_0(v_20, t);
                t = term_s_21;
                if(((d_156 != NULL) && (d_156 != t)))
                  _fail(t);
                else
                  d_156 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_155)), term_c_54);
                if(((e_156 != NULL) && (e_156 != t)))
                  _fail(t);
                else
                  e_156 = t;
                t = SSL_printnl(not_null(d_156), not_null(e_156));
                t = (ATerm) ATmakeAppl(sym__2, term_s_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_155)), term_c_54));
                t = default_system_usage_0_0(t);
                t = term_x_21;
                if(((c_156 != NULL) && (c_156 != t)))
                  _fail(t);
                else
                  c_156 = t;
                t = SSL_exit(not_null(c_156));
                ;
                LocalPopChoice(b_54);
              }
            else
              {
                t = a_54;
              }
          }
        }
      if(((m_155 != NULL) && (m_155 != t)))
        _fail(t);
      else
        m_155 = t;
      t = term_a_51;
      if(((o_155 != NULL) && (o_155 != t)))
        _fail(t);
      else
        o_155 = t;
      t = SSL_table_destroy(not_null(o_155));
      t = not_null(m_155);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_141 (ATerm), ATerm l_141 (ATerm), ATerm m_141 (ATerm), ATerm n_141 (ATerm), ATerm t)
{
  ATerm m_156 = NULL,n_156 = NULL,o_156 = NULL,p_156 = NULL;
  t = parse_options_1_0(k_141, t);
  m_156 = t;
  t = term_d_54;
  p_156 = t;
  t = SSL_table_create(p_156);
  t = term_d_54;
  n_156 = t;
  t = term_e_54;
  o_156 = t;
  t = SSL_table_put(n_156, o_156, m_156);
  t = m_156;
  t = m_141(t);
  {
    ATerm f_54 = t;
    int g_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_141, t);
        ;
        LocalPopChoice(g_54);
      }
    else
      {
        t = f_54;
        {
          ATerm h_54 = t;
          int i_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_141(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(i_54);
            }
          else
            {
              t = h_54;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_20 (ATerm t)
{
  t = if_verbose2_1_0(d_21, t);
  return(t);
}
ATerm a_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm q_156 = NULL,r_156 = NULL;
  t = term_j_54;
  q_156 = t;
  t = term_r_21;
  r_156 = t;
  t = term_k_54;
  t = q_12(q_156, r_156, t);
  t = term_l_54;
  return(t);
}
ATerm c_21 (ATerm t)
{
  t = term_m_54;
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm s_156 = NULL,t_156 = NULL,u_156 = NULL,v_156 = NULL;
  s_156 = t;
  t = term_o_51;
  t = get_config_0_0(t);
  t_156 = t;
  t = term_s_21;
  u_156 = t;
  t = (ATerm) ATinsert(ATempty, t_156);
  v_156 = t;
  t = SSL_printnl(u_156, v_156);
  t = s_156;
  return(t);
}
ATerm iowrap_3_0 (ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm t)
{
  ATerm x_20 (ATerm t)
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_140(t);
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
              t = input_option_0_0(t);
              ;
              LocalPopChoice(t_54);
            }
          else
            {
              t = s_54;
              {
                ATerm u_54 = t;
                int z_54 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(z_54);
                  }
                else
                  {
                    t = u_54;
                    {
                      ATerm a_55 = t;
                      int b_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_21, b_21, c_21, t);
                          ;
                          LocalPopChoice(b_55);
                        }
                      else
                        {
                          t = a_55;
                          {
                            ATerm c_55 = t;
                            int d_55 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(d_55);
                              }
                            else
                              {
                                t = c_55;
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
  ATerm z_20 (ATerm t)
  {
    ATerm w_156 = NULL,x_156 = NULL,y_156 = NULL;
    if(((x_156 != NULL) && (x_156 != t)))
      _fail(t);
    else
      x_156 = t;
    {
      ATerm e_55 = t;
      int f_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_21 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((w_156 != NULL) && (w_156 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_156 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_21, t);
          ;
          LocalPopChoice(f_55);
        }
      else
        {
          t = e_55;
          t = term_g_55;
          if(((w_156 != NULL) && (w_156 != t)))
            _fail(t);
          else
            w_156 = t;
        }
      t = not_null(w_156);
      t = ReadFromFile_0_0(t);
      if(((y_156 != NULL) && (y_156 != t)))
        _fail(t);
      else
        y_156 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(x_156), not_null(y_156));
      t = apply_strategy_1_0(t_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_20, v_140, y_20, z_20, t);
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm b_157 = NULL,c_157 = NULL,d_157 = NULL,e_157 = NULL,f_157 = NULL,y_18 = NULL;
  f_157 = t;
  if(match_cons(t, sym__2))
    {
      c_157 = ATgetArgument(t, 0);
      d_157 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_157);
  b_157 = t;
  t = d_157;
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_158 = NULL,w_71 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,p_72 = NULL,r_72 = NULL,t_72 = NULL,x_18 = NULL,u_18 = NULL,s_18 = NULL;
        if(match_cons(t, sym_Specification_1))
          {
            b_158 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_157);
        w_71 = t;
        t = b_158;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_72 = ATgetFirst((ATermList) t);
            e_72 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_158);
        c_72 = t;
        t = d_72;
        if(match_cons(t, sym_Signature_1))
          {
            r_72 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_72);
        p_72 = t;
        t = (ATerm) ATmakeAppl(sym_Signature_1, r_72);
        s_18 = t;
        t = SSLsetAnnotations(s_18, p_72);
        t_72 = t;
        t = e_72;
        t = Cons_2_0(i_21, m_21, t);
        f_72 = t;
        t = (ATerm) ATinsert(CheckATermList(f_72), t_72);
        u_18 = t;
        t = SSLsetAnnotations(u_18, c_72);
        g_72 = t;
        t = (ATerm) ATmakeAppl(sym_Specification_1, g_72);
        x_18 = t;
        t = SSLsetAnnotations(x_18, w_71);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(p_21, t);
        ;
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        t = if_verbose2_1_0(q_21, t);
      }
    e_157 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_157, e_157);
    y_18 = t;
    t = SSLsetAnnotations(y_18, b_157);
  }
  return(t);
}
ATerm i_21 (ATerm t)
{
  ATerm u_72 = NULL,x_72 = NULL,a_73 = NULL,b_73 = NULL,t_18 = NULL;
  b_73 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      x_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_73);
  u_72 = t;
  t = x_72;
  t = map_1_0(o_21, t);
  a_73 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_73);
  t_18 = t;
  t = SSLsetAnnotations(t_18, u_72);
  return(t);
}
ATerm m_21 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_21 (ATerm t)
{
  ATerm d_73 = NULL,e_73 = NULL,f_73 = NULL,h_73 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      d_73 = ATgetArgument(t, 0);
      e_73 = ATgetArgument(t, 1);
      f_73 = ATgetArgument(t, 2);
      h_73 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = a_12(d_73, e_73, f_73, h_73, t);
  return(t);
}
ATerm p_21 (ATerm t)
{
  ATerm i_73 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm m_55 = ATgetArgument(t, 0);
      if(match_cons(m_55, sym_SVar_1))
        {
          ATerm r_55 = ATgetArgument(m_55, 0);
          if((ATgetSymbol((ATermAppl) r_55) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm n_55 = ATgetArgument(t, 1);
        if(((ATgetType(n_55) == AT_LIST) && !(ATisEmpty(n_55))))
          {
            i_73 = ATgetFirst((ATermList) n_55);
            {
              ATerm s_55 = (ATerm) ATgetNext((ATermList) n_55);
              if(((ATgetType(s_55) != AT_LIST) || !(ATisEmpty(s_55))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm o_55 = ATgetArgument(t, 2);
        if(((ATgetType(o_55) != AT_LIST) || !(ATisEmpty(o_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_10(i_73, t);
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm c_158 = NULL,d_158 = NULL,e_158 = NULL;
  c_158 = t;
  t = term_s_21;
  d_158 = t;
  t = (ATerm) ATinsert(ATempty, term_t_55);
  e_158 = t;
  t = SSL_printnl(d_158, e_158);
  t = c_158;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_21, _fail, default_usage_0_0, t);
  return(t);
}
