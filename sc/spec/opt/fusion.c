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
ATerm term_s_62;
ATerm term_p_62;
ATerm term_c_62;
ATerm term_b_62;
ATerm term_a_62;
ATerm term_v_61;
ATerm term_u_61;
ATerm term_t_61;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_h_60;
ATerm term_z_59;
ATerm term_v_59;
ATerm term_u_59;
ATerm term_s_57;
ATerm term_r_57;
ATerm term_q_57;
ATerm term_l_57;
ATerm term_i_57;
ATerm term_h_57;
ATerm term_a_57;
ATerm term_z_56;
ATerm term_n_56;
ATerm term_m_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_f_56;
ATerm term_e_56;
ATerm term_d_56;
ATerm term_c_56;
ATerm term_x_55;
ATerm term_w_55;
ATerm term_v_55;
ATerm term_u_55;
ATerm term_t_55;
ATerm term_s_55;
ATerm term_r_55;
ATerm term_q_55;
ATerm term_p_55;
ATerm term_m_55;
ATerm term_f_55;
ATerm term_a_55;
ATerm term_x_54;
ATerm term_j_53;
ATerm term_g_53;
ATerm term_d_53;
ATerm term_a_53;
ATerm term_v_52;
ATerm term_u_52;
ATerm term_r_52;
ATerm term_f_52;
ATerm term_a_52;
ATerm term_v_51;
ATerm term_o_38;
ATerm term_n_38;
ATerm term_m_38;
ATerm term_z_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_b_36;
ATerm term_a_36;
ATerm term_z_35;
ATerm term_t_35;
ATerm term_s_35;
ATerm term_r_35;
ATerm term_n_35;
ATerm term_g_35;
ATerm term_v_34;
ATerm term_u_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_q_34;
ATerm term_o_34;
ATerm term_n_34;
ATerm term_v_33;
ATerm term_u_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_m_33;
ATerm term_j_33;
ATerm term_i_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_y_31;
ATerm term_x_31;
ATerm term_o_30;
ATerm term_s_29;
ATerm term_r_29;
ATerm term_m_29;
ATerm term_l_29;
ATerm term_k_29;
ATerm term_j_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_f_29;
ATerm term_e_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_z_28;
ATerm term_w_25;
ATerm term_n_25;
ATerm term_h_25;
ATerm term_m_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_f_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_s_16;
void init_constant_terms (void)
{
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_29);
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(sym_CallT_3, term_d_29, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_g_29, term_i_29);
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_29, term_j_29);
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_29, term_k_29);
  ATprotect(&(term_m_29));
  term_m_29 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_s_29));
  term_s_29 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_29);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_y_31));
  term_y_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_31);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_29, term_i_29);
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_29, term_b_33);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_i_33));
  term_i_33 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_33);
  ATprotect(&(term_m_33));
  term_m_33 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_33);
  ATprotect(&(term_n_34));
  term_n_34 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_o_34));
  term_o_34 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_q_34);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_u_34));
  term_u_34 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_34);
  ATprotect(&(term_v_34));
  term_v_34 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_g_35));
  term_g_35 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_n_35));
  term_n_35 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_r_35));
  term_r_35 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_s_35));
  term_s_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_z_35));
  term_z_35 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_a_36));
  term_a_36 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_b_36));
  term_b_36 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_36);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_n_38));
  term_n_38 = (ATerm) ATmakeAppl(sym_Sort_2, term_m_38, (ATerm) ATempty);
  ATprotect(&(term_o_38));
  term_o_38 = (ATerm) ATmakeAppl(sym_ConstType_1, term_n_38);
  ATprotect(&(term_v_51));
  term_v_51 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_r_52));
  term_r_52 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_u_52));
  term_u_52 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_v_52));
  term_v_52 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_52);
  ATprotect(&(term_a_53));
  term_a_53 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_d_53));
  term_d_53 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_53));
  term_g_53 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_53));
  term_j_53 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_x_54));
  term_x_54 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_55));
  term_a_55 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_55));
  term_f_55 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_q_55));
  term_q_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_55));
  term_r_55 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_55));
  term_s_55 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_55);
  ATprotect(&(term_t_55));
  term_t_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_55));
  term_u_55 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_55));
  term_v_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_55));
  term_w_55 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_55));
  term_x_55 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_56));
  term_c_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_56));
  term_d_56 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_56));
  term_e_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_56));
  term_f_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_56));
  term_m_56 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_56));
  term_n_56 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_56));
  term_z_56 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_57));
  term_h_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_i_57));
  term_i_57 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_57));
  term_l_57 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_57));
  term_r_57 = (ATerm) ATmakeAppl(sym__3, term_m_55, term_q_57, term_s_16);
  ATprotect(&(term_s_57));
  term_s_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_u_59));
  term_u_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_59));
  term_z_59 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_61));
  term_t_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_u_61));
  term_u_61 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_61));
  term_v_61 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_62));
  term_a_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_b_62));
  term_b_62 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_62));
  term_p_62 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_62));
  term_s_62 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm g_148 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm);
ATerm Op_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm p_146 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm a_9 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm d_9 (ATerm);
ATerm h_9 (ATerm);
ATerm i_9 (ATerm);
ATerm j_9 (ATerm);
ATerm k_9 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm h_7 (ATerm w_6, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm n_9 (ATerm);
ATerm o_9 (ATerm);
ATerm p_9 (ATerm);
ATerm r_9 (ATerm);
ATerm u_9 (ATerm);
ATerm w_9 (ATerm);
ATerm x_9 (ATerm);
ATerm z_9 (ATerm);
ATerm a_10 (ATerm);
ATerm b_10 (ATerm);
ATerm c_10 (ATerm);
ATerm d_10 (ATerm);
ATerm e_10 (ATerm);
ATerm g_10 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm h_10 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm);
ATerm Con_3_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm);
ATerm i_10 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm d_118 (ATerm), ATerm);
ATerm n_10 (ATerm);
ATerm o_10 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm r_10 (ATerm);
ATerm s_10 (ATerm);
ATerm t_10 (ATerm);
ATerm u_10 (ATerm);
ATerm y_10 (ATerm);
ATerm b_11 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm e_31 (ATerm j_30, ATerm l_30, ATerm);
ATerm f_31 (ATerm q_30, ATerm s_30, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_rm_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm m_130 (ATerm), ATerm);
ATerm scope_2_0 (ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm);
ATerm g_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm m_11 (ATerm);
ATerm n_11 (ATerm);
ATerm p_11 (ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm q_11 (ATerm);
ATerm r_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm x_11 (ATerm);
ATerm a_12 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm e_118 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Build_1_0 (ATerm b_108 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm);
ATerm Match_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm);
ATerm f_12 (ATerm);
ATerm g_12 (ATerm);
ATerm h_12 (ATerm);
ATerm i_12 (ATerm);
ATerm j_12 (ATerm);
ATerm k_12 (ATerm);
ATerm l_12 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm m_12 (ATerm);
ATerm n_12 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm o_12 (ATerm);
ATerm p_12 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm q_12 (ATerm);
ATerm r_12 (ATerm);
ATerm s_12 (ATerm);
ATerm t_12 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm v_119 (ATerm), ATerm);
ATerm u_12 (ATerm);
ATerm v_12 (ATerm);
ATerm w_12 (ATerm);
ATerm x_12 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm y_12 (ATerm);
ATerm z_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm c_13 (ATerm);
ATerm d_13 (ATerm);
ATerm e_13 (ATerm);
ATerm f_13 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm k_64 (ATerm j_63, ATerm k_63, ATerm l_63, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm p_13 (ATerm);
ATerm q_13 (ATerm);
ATerm t_13 (ATerm);
ATerm u_13 (ATerm);
ATerm c_14 (ATerm);
ATerm d_14 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm e_14 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_131 (ATerm), ATerm);
ATerm downup_1_0 (ATerm f_118 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm);
ATerm i_14 (ATerm);
ATerm l_14 (ATerm);
ATerm p_14 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm);
ATerm v_14 (ATerm);
ATerm x_14 (ATerm);
ATerm z_14 (ATerm);
ATerm b_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm j_15 (ATerm);
ATerm k_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm s_15 (ATerm);
ATerm t_15 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm spaste_1_0 (ATerm n_147 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm);
ATerm Let_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm);
ATerm z_15 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm s_107 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm h_16 (ATerm);
ATerm m_16 (ATerm);
ATerm r_16 (ATerm);
ATerm RnBinding_2_0 (ATerm u_144 (ATerm), ATerm v_144 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm f_134 (ATerm), ATerm);
ATerm rename_4_0 (ATerm p_144 (ATerm (ATerm), ATerm), ATerm q_144 (ATerm), ATerm r_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_144 (ATerm (ATerm), ATerm), ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm j_17 (ATerm);
ATerm tpaste_1_0 (ATerm j_147 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm a_107 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm m_17 (ATerm);
ATerm n_17 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm);
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm d_123 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm e_87 (ATerm w_86, ATerm);
ATerm conc_0_0 (ATerm);
ATerm s_17 (ATerm);
ATerm w_17 (ATerm);
ATerm x_17 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm);
ATerm y_17 (ATerm);
ATerm z_17 (ATerm);
ATerm a_18 (ATerm);
ATerm b_18 (ATerm);
ATerm c_18 (ATerm);
ATerm d_18 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm f_18 (ATerm);
ATerm g_18 (ATerm);
ATerm h_18 (ATerm);
ATerm l_18 (ATerm);
ATerm m_18 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm free_vars_3_0 (ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm h_146 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm p_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm s_18 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm j_104 (ATerm), ATerm);
ATerm u_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm x_18 (ATerm);
ATerm z_18 (ATerm);
ATerm a_19 (ATerm);
ATerm b_19 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm e_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm j_19 (ATerm);
ATerm k_19 (ATerm);
ATerm l_19 (ATerm);
ATerm m_19 (ATerm);
ATerm n_19 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm o_19 (ATerm);
ATerm p_19 (ATerm);
ATerm q_19 (ATerm);
ATerm r_19 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm q_130 (ATerm), ATerm);
ATerm s_19 (ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm map_1_0 (ATerm n_122 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm g_103 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm h_103 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm l_103 (ATerm), ATerm);
ATerm _2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm g_138 (ATerm), ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm y_19 (ATerm);
ATerm z_19 (ATerm);
ATerm a_20 (ATerm);
ATerm b_20 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm s_139 (ATerm), ATerm);
ATerm y_101 (ATerm s_101, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm c_20 (ATerm);
ATerm d_20 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_20 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm debug_1_0 (ATerm e_138 (ATerm), ATerm);
ATerm g_20 (ATerm);
ATerm h_20 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm j_20 (ATerm);
ATerm k_20 (ATerm);
ATerm m_20 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm n_20 (ATerm);
ATerm o_20 (ATerm);
ATerm p_20 (ATerm);
ATerm r_20 (ATerm);
ATerm t_20 (ATerm);
ATerm u_20 (ATerm);
ATerm w_20 (ATerm);
ATerm y_20 (ATerm);
ATerm z_20 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm b_21 (ATerm);
ATerm d_21 (ATerm);
ATerm e_21 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm f_21 (ATerm);
ATerm g_21 (ATerm);
ATerm h_21 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_21 (ATerm);
ATerm j_21 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_148 (ATerm), ATerm);
ATerm n_21 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm q_21 (ATerm);
ATerm need_help_1_0 (ATerm q_140 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm g_117 (ATerm), ATerm);
ATerm t_21 (ATerm);
ATerm u_21 (ATerm);
ATerm v_21 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm w_21 (ATerm);
ATerm x_21 (ATerm);
ATerm z_21 (ATerm);
ATerm b_22 (ATerm);
ATerm c_22 (ATerm);
ATerm d_22 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm f_22 (ATerm);
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm);
ATerm m_22 (ATerm);
ATerm n_22 (ATerm);
ATerm q_22 (ATerm);
ATerm s_22 (ATerm);
ATerm parse_options_1_0 (ATerm u_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm);
ATerm w_22 (ATerm);
ATerm z_22 (ATerm);
ATerm a_23 (ATerm);
ATerm d_23 (ATerm);
ATerm e_23 (ATerm);
ATerm iowrap_3_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm);
ATerm g_23 (ATerm);
ATerm h_23 (ATerm);
ATerm l_23 (ATerm);
ATerm m_23 (ATerm);
ATerm n_23 (ATerm);
ATerm s_23 (ATerm);
ATerm t_23 (ATerm);
ATerm v_23 (ATerm);
ATerm w_23 (ATerm);
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
  t = term_s_16;
  t = whoami_0_0(t);
  q_0 = t;
  t = term_x_23;
  s_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_23), q_0), term_y_23);
  t_0 = t;
  t = SSL_printnl(s_0, t_0);
  t = term_a_24;
  v_0 = t;
  t = SSL_exit(v_0);
  t = p_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_148 (ATerm), ATerm t)
{
  ATerm b_24 = t;
  int c_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_0 = NULL,y_0 = NULL;
      w_0 = t;
      t = term_d_24;
      t = get_config_0_0(t);
      y_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_0, term_e_24);
      t = geq_0_0(t);
      t = w_0;
      t = g_148(t);
      ;
      LocalPopChoice(c_24);
    }
  else
    {
      t = b_24;
    }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
  b_1 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      c_1 = ATgetArgument(t, 0);
      a_1 = ATgetArgument(t, 1);
      {
        ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL;
        t = b_1;
        t = new_0_0(t);
        g_1 = t;
        t = new_0_0(t);
        h_1 = t;
        t = new_0_0(t);
        i_1 = t;
        t = new_0_0(t);
        j_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, j_1), i_1), h_1), g_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, g_1), (ATerm) ATmakeAppl(sym_Var_1, i_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, c_1, (ATerm)ATmakeAppl(sym_Var_1, g_1), (ATerm) ATmakeAppl(sym_Var_1, h_1)), (ATerm) ATmakeAppl(sym_BAM_3, a_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_Var_1, h_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          c_1 = ATgetArgument(t, 0);
          {
            ATerm l_1 = NULL,m_1 = NULL,n_1 = NULL,p_1 = NULL;
            t = b_1;
            t = new_0_0(t);
            l_1 = t;
            t = c_1;
            {
              ATerm g_8 (ATerm t)
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
                t = (ATerm) ATmakeAppl(sym_Var_1, l_1);
                return(t);
              }
              t = oncetd_1_0(g_8, t);
              p_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_24, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_1)), not_null(m_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Build_1, p_1))));
            }
          }
        }
      else
        {
          ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL,w_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              c_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_1;
          t = new_0_0(t);
          r_1 = t;
          t = new_0_0(t);
          s_1 = t;
          t = c_1;
          {
            ATerm h_8 (ATerm t)
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
              t = (ATerm) ATmakeAppl(sym_Var_1, r_1);
              return(t);
            }
            t = oncetd_1_0(h_8, t);
            w_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_i_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, s_1))))), (ATerm)ATmakeAppl(sym_Var_1, r_1), (ATerm) ATmakeAppl(sym_Op_2, term_j_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_1)), not_null(t_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_1 = NULL,a_2 = NULL;
  z_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      a_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
        t = z_1;
        t = new_0_0(t);
        d_2 = t;
        t = a_2;
        {
          ATerm i_8 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((h_2 != NULL) && (h_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_2 = ATgetArgument(t, 0);
                if(((g_2 != NULL) && (g_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  g_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, d_2), not_null(h_2));
            return(t);
          }
          t = pat_td_1_0(i_8, t);
          i_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_m_24, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, d_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_2))))));
        }
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
          ATerm n_24 = t;
          int o_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
              t = z_1;
              t = new_0_0(t);
              k_2 = t;
              t = a_2;
              {
                ATerm j_8 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_2);
                  return(t);
                }
                t = pat_td_1_0(j_8, t);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, k_2)), not_null(l_2))));
              }
              ;
              LocalPopChoice(o_24);
            }
          else
            {
              t = n_24;
              {
                ATerm p_2 = NULL,q_2 = NULL,r_2 = NULL,u_2 = NULL;
                t = z_1;
                t = new_0_0(t);
                p_2 = t;
                t = a_2;
                {
                  ATerm k_8 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_2 != NULL) && (q_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_2 = ATgetArgument(t, 0);
                        if(((r_2 != NULL) && (r_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          r_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_2);
                    return(t);
                  }
                  t = pat_td_1_0(k_8, t);
                  u_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, p_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(r_2)), not_null(q_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm a_105 (ATerm), ATerm b_105 (ATerm), ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,x_0 = NULL,z_0 = NULL;
  d_3 = t;
  if(match_cons(t, sym_As_2))
    {
      z_2 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  y_2 = t;
  t = z_2;
  t = a_105(t);
  b_3 = t;
  t = a_3;
  t = b_105(t);
  c_3 = t;
  z_0 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, b_3, c_3);
  x_0 = t;
  t = SSLsetAnnotations(x_0, y_2);
  return(t);
}
ATerm CallT_3_0 (ATerm x_107 (ATerm), ATerm y_107 (ATerm), ATerm z_107 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,d_1 = NULL,e_1 = NULL;
  n_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      h_3 = ATgetArgument(t, 0);
      i_3 = ATgetArgument(t, 1);
      j_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_3);
  g_3 = t;
  t = h_3;
  t = x_107(t);
  k_3 = t;
  t = i_3;
  t = y_107(t);
  l_3 = t;
  t = j_3;
  t = z_107(t);
  m_3 = t;
  e_1 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, k_3, l_3, m_3);
  d_1 = t;
  t = SSLsetAnnotations(d_1, g_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm z_108 (ATerm), ATerm a_109 (ATerm), ATerm b_109 (ATerm), ATerm t)
{
  ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,f_1 = NULL,k_1 = NULL;
  x_3 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      r_3 = ATgetArgument(t, 0);
      s_3 = ATgetArgument(t, 1);
      t_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_3);
  q_3 = t;
  t = r_3;
  t = z_108(t);
  u_3 = t;
  t = s_3;
  t = a_109(t);
  v_3 = t;
  t = t_3;
  t = b_109(t);
  w_3 = t;
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_3, v_3, w_3);
  f_1 = t;
  t = SSLsetAnnotations(f_1, q_3);
  return(t);
}
ATerm Explode_2_0 (ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  ATerm a_4 = NULL,c_4 = NULL,d_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,o_1 = NULL,q_1 = NULL;
  g_4 = t;
  if(match_cons(t, sym_Explode_2))
    {
      c_4 = ATgetArgument(t, 0);
      d_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_4);
  a_4 = t;
  t = c_4;
  t = t_104(t);
  e_4 = t;
  t = d_4;
  t = u_104(t);
  f_4 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, e_4, f_4);
  o_1 = t;
  t = SSLsetAnnotations(o_1, a_4);
  return(t);
}
ATerm Op_2_0 (ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL,v_1 = NULL,x_1 = NULL;
  o_4 = t;
  if(match_cons(t, sym_Op_2))
    {
      k_4 = ATgetArgument(t, 0);
      l_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_4);
  j_4 = t;
  t = k_4;
  t = p_104(t);
  m_4 = t;
  t = l_4;
  t = q_104(t);
  n_4 = t;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, m_4, n_4);
  v_1 = t;
  t = SSLsetAnnotations(v_1, j_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm p_146 (ATerm), ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_146(t);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_8 (ATerm t)
            {
              ATerm m_8 (ATerm t)
              {
                t = pat_td_1_0(p_146, t);
                return(t);
              }
              t = fetch_1_0(m_8, t);
              return(t);
            }
            t = Op_2_0(_id, l_8, t);
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
                  ATerm n_8 (ATerm t)
                  {
                    t = pat_td_1_0(p_146, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, n_8, t);
                  ;
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  {
                    ATerm v_24 = t;
                    int w_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm o_8 (ATerm t)
                        {
                          t = pat_td_1_0(p_146, t);
                          return(t);
                        }
                        t = Explode_2_0(o_8, _id, t);
                        ;
                        LocalPopChoice(w_24);
                      }
                    else
                      {
                        t = v_24;
                        {
                          ATerm z_24 = t;
                          int a_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_8 (ATerm t)
                              {
                                ATerm q_8 (ATerm t)
                                {
                                  t = pat_td_1_0(p_146, t);
                                  return(t);
                                }
                                t = fetch_1_0(q_8, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, p_8, t);
                              ;
                              LocalPopChoice(a_25);
                            }
                          else
                            {
                              t = z_24;
                              {
                                ATerm b_25 = t;
                                int c_25 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_8 (ATerm t)
                                    {
                                      ATerm s_8 (ATerm t)
                                      {
                                        t = pat_td_1_0(p_146, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(s_8, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, r_8, t);
                                    ;
                                    LocalPopChoice(c_25);
                                  }
                                else
                                  {
                                    t = b_25;
                                    {
                                      ATerm t_8 (ATerm t)
                                      {
                                        t = pat_td_1_0(p_146, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, t_8, t);
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
ATerm Bapp_0_0 (ATerm t)
{
  ATerm t_4 = NULL,u_4 = NULL;
  t_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      u_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm d_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL,y_4 = NULL,a_5 = NULL,b_5 = NULL;
        t = t_4;
        t = new_0_0(t);
        x_4 = t;
        t = u_4;
        {
          ATerm u_8 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((y_4 != NULL) && (y_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_4 = ATgetArgument(t, 0);
                if(((a_5 != NULL) && (a_5 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, x_4);
            return(t);
          }
          t = pat_td_1_0(u_8, t);
          b_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, x_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_h_25, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_5)), not_null(y_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_4)))), (ATerm) ATmakeAppl(sym_Build_1, b_5)));
        }
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = d_25;
        {
          ATerm i_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
              t = t_4;
              t = new_0_0(t);
              d_5 = t;
              t = u_4;
              {
                ATerm v_8 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((e_5 != NULL) && (e_5 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        e_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_5);
                  return(t);
                }
                t = pat_td_1_0(v_8, t);
                f_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(e_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_5)))), (ATerm) ATmakeAppl(sym_Build_1, f_5)));
              }
              ;
              LocalPopChoice(l_25);
            }
          else
            {
              t = i_25;
              {
                ATerm h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
                t = t_4;
                t = new_0_0(t);
                h_5 = t;
                t = u_4;
                {
                  ATerm w_8 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((i_5 != NULL) && (i_5 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          i_5 = ATgetArgument(t, 0);
                        if(((j_5 != NULL) && (j_5 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          j_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_5);
                    return(t);
                  }
                  t = pat_td_1_0(w_8, t);
                  k_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(i_5), not_null(j_5), (ATerm) ATmakeAppl(sym_Var_1, h_5))), (ATerm) ATmakeAppl(sym_Build_1, k_5)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm a_9 (ATerm t)
{
  ATerm m_25 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_25;
    }
  return(t);
}
ATerm b_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm c_9 (ATerm t)
{
  ATerm c_6 = NULL,f_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_6 = ATgetFirst((ATermList) t);
      f_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_6, f_6);
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm g_6 = NULL,i_6 = NULL,j_6 = NULL,k_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_25 = ATgetArgument(t, 0);
      if(match_cons(o_25, sym__2))
        {
          g_6 = ATgetArgument(o_25, 0);
          j_6 = ATgetArgument(o_25, 1);
        }
      else
        _fail(t);
      {
        ATerm p_25 = ATgetArgument(t, 1);
        if(match_cons(p_25, sym__2))
          {
            i_6 = ATgetArgument(p_25, 0);
            k_6 = ATgetArgument(p_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_6), g_6), (ATerm) ATinsert(CheckATermList(k_6), j_6));
  return(t);
}
ATerm h_9 (ATerm t)
{
  t = genzip_4_0(i_9, j_9, k_9, _id, t);
  return(t);
}
ATerm i_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm j_9 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_6 = ATgetFirst((ATermList) t);
      n_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_6, n_6);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,s_6 = NULL,t_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_25 = ATgetArgument(t, 0);
      if(match_cons(q_25, sym__2))
        {
          p_6 = ATgetArgument(q_25, 0);
          s_6 = ATgetArgument(q_25, 1);
        }
      else
        _fail(t);
      {
        ATerm r_25 = ATgetArgument(t, 1);
        if(match_cons(r_25, sym__2))
          {
            q_6 = ATgetArgument(r_25, 0);
            t_6 = ATgetArgument(r_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_6), p_6), (ATerm) ATinsert(CheckATermList(t_6), s_6));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm l_5 = NULL,m_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,y_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      l_5 = ATgetArgument(t, 0);
      m_5 = ATgetArgument(t, 1);
      s_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_5;
  t = fetch_1_0(a_9, t);
  t = s_5;
  t = genzip_4_0(b_9, c_9, d_9, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, h_9, t);
  if(match_cons(t, sym__2))
    {
      t_5 = ATgetArgument(t, 0);
      {
        ATerm s_25 = ATgetArgument(t, 1);
        if(match_cons(s_25, sym__2))
          {
            u_5 = ATgetArgument(s_25, 0);
            y_5 = ATgetArgument(s_25, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, t_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_5), (ATerm) ATmakeAppl(sym_CallT_3, l_5, m_5, y_5)));
  return(t);
}
ATerm h_7 (ATerm w_6, ATerm t)
{
  ATerm y_6 = NULL;
  t = w_6;
  {
    ATerm t_25 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_25;
      }
    t = new_0_0(t);
    y_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, y_6), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, y_6)))), (ATerm) ATmakeAppl(sym_Var_1, y_6)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  d_7 = t;
  if(match_cons(t, sym_Var_1))
    {
      f_7 = ATgetArgument(t, 0);
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_7(d_7, t);
            ;
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_w_25, (ATerm) ATmakeAppl(sym_Var_1, f_7)));
          }
      }
    }
  else
    {
      t = h_7(d_7, t);
    }
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm x_25 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_25;
    }
  return(t);
}
ATerm m_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm n_9 (ATerm t)
{
  ATerm b_4 = NULL,r_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_4 = ATgetFirst((ATermList) t);
      r_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_4, r_4);
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm s_4 = NULL,w_4 = NULL,z_4 = NULL,n_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_25 = ATgetArgument(t, 0);
      if(match_cons(z_25, sym__2))
        {
          s_4 = ATgetArgument(z_25, 0);
          z_4 = ATgetArgument(z_25, 1);
        }
      else
        _fail(t);
      {
        ATerm a_26 = ATgetArgument(t, 1);
        if(match_cons(a_26, sym__2))
          {
            w_4 = ATgetArgument(a_26, 0);
            n_5 = ATgetArgument(a_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_4), s_4), (ATerm) ATinsert(CheckATermList(n_5), z_4));
  return(t);
}
ATerm p_9 (ATerm t)
{
  t = genzip_4_0(r_9, u_9, w_9, _id, t);
  return(t);
}
ATerm r_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm u_9 (ATerm t)
{
  ATerm o_5 = NULL,p_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_5 = ATgetFirst((ATermList) t);
      p_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_5, p_5);
  return(t);
}
ATerm w_9 (ATerm t)
{
  ATerm q_5 = NULL,r_5 = NULL,v_5 = NULL,w_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_26 = ATgetArgument(t, 0);
      if(match_cons(b_26, sym__2))
        {
          q_5 = ATgetArgument(b_26, 0);
          v_5 = ATgetArgument(b_26, 1);
        }
      else
        _fail(t);
      {
        ATerm c_26 = ATgetArgument(t, 1);
        if(match_cons(c_26, sym__2))
          {
            r_5 = ATgetArgument(c_26, 0);
            w_5 = ATgetArgument(c_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_5), q_5), (ATerm) ATinsert(CheckATermList(w_5), v_5));
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm e_26 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_26;
    }
  return(t);
}
ATerm z_9 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm a_10 (ATerm t)
{
  ATerm z_6 = NULL,a_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_6 = ATgetFirst((ATermList) t);
      a_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_6, a_7);
  return(t);
}
ATerm b_10 (ATerm t)
{
  ATerm b_7 = NULL,c_7 = NULL,e_7 = NULL,i_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_26 = ATgetArgument(t, 0);
      if(match_cons(f_26, sym__2))
        {
          b_7 = ATgetArgument(f_26, 0);
          e_7 = ATgetArgument(f_26, 1);
        }
      else
        _fail(t);
      {
        ATerm g_26 = ATgetArgument(t, 1);
        if(match_cons(g_26, sym__2))
          {
            c_7 = ATgetArgument(g_26, 0);
            i_7 = ATgetArgument(g_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_7), b_7), (ATerm) ATinsert(CheckATermList(i_7), e_7));
  return(t);
}
ATerm c_10 (ATerm t)
{
  t = genzip_4_0(d_10, e_10, g_10, _id, t);
  return(t);
}
ATerm d_10 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_n_25;
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm j_7 = NULL,k_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_7 = ATgetFirst((ATermList) t);
      k_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_7, k_7);
  return(t);
}
ATerm g_10 (ATerm t)
{
  ATerm l_7 = NULL,m_7 = NULL,n_7 = NULL,s_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_26 = ATgetArgument(t, 0);
      if(match_cons(h_26, sym__2))
        {
          l_7 = ATgetArgument(h_26, 0);
          n_7 = ATgetArgument(h_26, 1);
        }
      else
        _fail(t);
      {
        ATerm j_26 = ATgetArgument(t, 1);
        if(match_cons(j_26, sym__2))
          {
            m_7 = ATgetArgument(j_26, 0);
            s_7 = ATgetArgument(j_26, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_7), l_7), (ATerm) ATinsert(CheckATermList(s_7), n_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm i_13 = NULL,j_13 = NULL,l_13 = NULL,m_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      l_13 = ATgetArgument(t, 0);
      m_13 = ATgetArgument(t, 1);
      i_13 = ATgetArgument(t, 2);
      {
        ATerm o_2 = NULL,s_2 = NULL,t_2 = NULL;
        t = i_13;
        t = fetch_1_0(l_9, t);
        t = i_13;
        t = genzip_4_0(m_9, n_9, o_9, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, p_9, t);
        if(match_cons(t, sym__2))
          {
            o_2 = ATgetArgument(t, 0);
            {
              ATerm k_26 = ATgetArgument(t, 1);
              if(match_cons(k_26, sym__2))
                {
                  s_2 = ATgetArgument(k_26, 0);
                  t_2 = ATgetArgument(k_26, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, o_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_2), (ATerm) ATmakeAppl(sym_PrimT_3, l_13, m_13, t_2)));
      }
    }
  else
    {
      ATerm r_6 = NULL,u_6 = NULL,v_6 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          l_13 = ATgetArgument(t, 0);
          m_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_13;
      t = fetch_1_0(x_9, t);
      t = m_13;
      t = genzip_4_0(z_9, a_10, b_10, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, c_10, t);
      if(match_cons(t, sym__2))
        {
          r_6 = ATgetArgument(t, 0);
          {
            ATerm l_26 = ATgetArgument(t, 1);
            if(match_cons(l_26, sym__2))
              {
                u_6 = ATgetArgument(l_26, 0);
                v_6 = ATgetArgument(l_26, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, r_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_6), (ATerm) ATmakeAppl(sym_PrimT_3, l_13, (ATerm)ATempty, v_6)));
    }
  return(t);
}
ATerm h_10 (ATerm t)
{
  ATerm m_26 = t;
  int n_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(n_26);
    }
  else
    {
      t = m_26;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm o_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(h_10, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_26;
    }
  return(t);
}
ATerm App_2_0 (ATerm x_104 (ATerm), ATerm y_104 (ATerm), ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL,w_13 = NULL,y_13 = NULL,a_14 = NULL,b_14 = NULL,y_1 = NULL,b_2 = NULL;
  b_14 = t;
  if(match_cons(t, sym_App_2))
    {
      s_13 = ATgetArgument(t, 0);
      w_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_14);
  r_13 = t;
  t = s_13;
  t = x_104(t);
  y_13 = t;
  t = w_13;
  t = y_104(t);
  a_14 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, y_13, a_14);
  y_1 = t;
  t = SSLsetAnnotations(y_1, r_13);
  return(t);
}
ATerm Con_3_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,j_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,t_14 = NULL,e_2 = NULL,j_2 = NULL;
  t_14 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_14 = ATgetArgument(t, 0);
      j_14 = ATgetArgument(t, 1);
      k_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_14);
  f_14 = t;
  t = g_14;
  t = j_105(t);
  m_14 = t;
  t = j_14;
  t = k_105(t);
  n_14 = t;
  t = k_14;
  t = l_105(t);
  o_14 = t;
  j_2 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, m_14, n_14, o_14);
  e_2 = t;
  t = SSLsetAnnotations(e_2, f_14);
  return(t);
}
ATerm i_10 (ATerm t)
{
  ATerm p_26 = t;
  int q_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(q_26);
    }
  else
    {
      t = p_26;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_26 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(i_10, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_26;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm a_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      a_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_15;
  if(match_cons(t, sym_StratRule_3))
    {
      d_15 = ATgetArgument(t, 0);
      e_15 = ATgetArgument(t, 1);
      f_15 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_15), (ATerm) ATmakeAppl(sym_Where_1, f_15)), d_15));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_15 = ATgetArgument(t, 0);
          e_15 = ATgetArgument(t, 1);
          f_15 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_15;
      t = pureterm_0_0(t);
      t = e_15;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_15)), (ATerm) ATmakeAppl(sym_Where_1, f_15)), (ATerm) ATmakeAppl(sym_Match_1, d_15)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm x_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,f_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm s_26 = ATgetArgument(t, 0);
      if(match_cons(s_26, sym_Rule_3))
        {
          x_15 = ATgetArgument(s_26, 0);
          a_16 = ATgetArgument(s_26, 1);
          b_16 = ATgetArgument(s_26, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  c_16 = t;
  t = x_15;
  {
    ATerm j_10 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm t_26 = ATgetArgument(t, 0);
          if(match_cons(t_26, sym_Var_1))
            {
              if(((i_16 != NULL) && (i_16 != ATgetArgument(t_26, 0))))
                _fail(ATgetArgument(t_26, 0));
              else
                i_16 = ATgetArgument(t_26, 0);
            }
          else
            _fail(t);
          if(((f_16 != NULL) && (f_16 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_16 = ATgetArgument(t, 1);
          {
            ATerm u_26 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(i_16));
      return(t);
    }
    t = oncetd_1_0(j_10, t);
    j_16 = t;
    t = a_16;
    {
      ATerm k_10 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm v_26 = ATgetArgument(t, 0);
            if(match_cons(v_26, sym_Var_1))
              {
                if(((i_16 != NULL) && (i_16 != ATgetArgument(v_26, 0))))
                  _fail(ATgetArgument(v_26, 0));
                else
                  i_16 = ATgetArgument(v_26, 0);
              }
            else
              _fail(t);
            if(((k_16 != NULL) && (k_16 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              k_16 = ATgetArgument(t, 1);
            {
              ATerm w_26 = ATgetArgument(t, 2);
              if(match_cons(w_26, sym_CallT_3))
                {
                  if(((l_16 != NULL) && (l_16 != ATgetArgument(w_26, 0))))
                    _fail(ATgetArgument(w_26, 0));
                  else
                    l_16 = ATgetArgument(w_26, 0);
                  {
                    ATerm x_26 = ATgetArgument(w_26, 1);
                    if(((ATgetType(x_26) != AT_LIST) || !(ATisEmpty(x_26))))
                      _fail(t);
                  }
                  {
                    ATerm y_26 = ATgetArgument(w_26, 2);
                    if(((ATgetType(y_26) != AT_LIST) || !(ATisEmpty(y_26))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_16);
        return(t);
      }
      t = oncetd_1_0(k_10, t);
      p_16 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_16), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, j_16, p_16, (ATerm) ATmakeAppl(sym_Seq_2, b_16, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(l_16), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(f_16), not_null(k_16), term_w_25))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(i_16)), (ATerm) ATmakeAppl(sym_Var_1, c_16))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          {
            ATerm d_27 = t;
            int e_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(e_27);
              }
            else
              {
                t = d_27;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_118 (ATerm), ATerm t)
{
  t = d_118(t);
  {
    ATerm l_10 (ATerm t)
    {
      t = topdown_1_0(d_118, t);
      return(t);
    }
    t = SRTS_all(l_10, t);
  }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm f_27 = t;
  int g_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(g_27);
    }
  else
    {
      t = f_27;
    }
  t = repeat_1_0(o_10, t);
  return(t);
}
ATerm o_10 (ATerm t)
{
  ATerm h_27 = t;
  int i_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(i_27);
    }
  else
    {
      t = h_27;
      {
        ATerm j_27 = t;
        int k_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(k_27);
          }
        else
          {
            t = j_27;
            {
              ATerm l_27 = t;
              int m_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(m_27);
                }
              else
                {
                  t = l_27;
                  {
                    ATerm n_27 = t;
                    int o_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(o_27);
                      }
                    else
                      {
                        t = n_27;
                        {
                          ATerm p_27 = t;
                          int q_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_27 = t;
                              int s_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm b_8 = NULL,c_8 = NULL,d_8 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      b_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = b_8;
                                  {
                                    ATerm q_10 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm t_27 = ATgetArgument(t, 0);
                                          if(match_cons(t_27, sym_Match_1))
                                            {
                                              if(((c_8 != NULL) && (c_8 != ATgetArgument(t_27, 0))))
                                                _fail(ATgetArgument(t_27, 0));
                                              else
                                                c_8 = ATgetArgument(t_27, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(c_8);
                                      return(t);
                                    }
                                    t = pat_td_1_0(q_10, t);
                                    d_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, d_8);
                                  }
                                  ;
                                  LocalPopChoice(s_27);
                                }
                              else
                                {
                                  t = r_27;
                                  {
                                    ATerm u_27 = t;
                                    int w_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            a_17 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = a_17;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            b_17 = ATgetArgument(t, 0);
                                            t = b_17;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                b_17 = ATgetArgument(t, 0);
                                                c_17 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, b_17, c_17);
                                          }
                                        ;
                                        LocalPopChoice(w_27);
                                      }
                                    else
                                      {
                                        t = u_27;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(q_27);
                            }
                          else
                            {
                              t = p_27;
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
  t = topdown_1_0(n_10, t);
  return(t);
}
ATerm r_10 (ATerm t)
{
  ATerm t_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      t_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, t_9);
  return(t);
}
ATerm s_10 (ATerm t)
{
  ATerm x_27 = t;
  int y_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(y_27);
    }
  else
    {
      t = x_27;
      {
        ATerm v_9 = NULL,y_9 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            v_9 = ATgetArgument(t, 0);
            t = v_9;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm z_27 = t;
            int e_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm i_28 = ATgetArgument(t, 0);
                    ATerm j_28 = ATgetArgument(t, 1);
                    y_9 = ATgetArgument(t, 2);
                    {
                      ATerm m_28 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_28);
                t = y_9;
                t = map_1_0(t_10, t);
              }
            else
              {
                t = z_27;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_28 = ATgetArgument(t, 0);
                    ATerm r_28 = ATgetArgument(t, 1);
                    y_9 = ATgetArgument(t, 2);
                    {
                      ATerm s_28 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_9;
                t = map_1_0(u_10, t);
              }
          }
      }
    }
  return(t);
}
ATerm t_10 (ATerm t)
{
  ATerm f_10 = NULL;
  ATerm t_28 = t;
  int u_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_10 = ATgetArgument(t, 0);
          {
            ATerm v_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_28);
      t = f_10;
    }
  else
    {
      t = t_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_10;
    }
  return(t);
}
ATerm u_10 (ATerm t)
{
  ATerm m_10 = NULL;
  ATerm w_28 = t;
  int x_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_10 = ATgetArgument(t, 0);
          {
            ATerm y_28 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_28);
      t = m_10;
    }
  else
    {
      t = w_28;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_10;
    }
  return(t);
}
ATerm y_10 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm b_11 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm v_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,k_28 = NULL,l_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,h_29 = NULL;
  v_27 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_28 = ATgetArgument(t, 0);
      g_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_28;
  if(match_cons(t, sym_CallT_3))
    {
      b_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
      f_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_28;
  if(match_cons(t, sym_SVar_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_28;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = d_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_28;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = g_28;
  if(match_cons(t, sym_Seq_2))
    {
      h_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_28;
  if(match_cons(t, sym_Match_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_28;
  if(match_cons(t, sym_Seq_2))
    {
      n_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_28;
  if(match_cons(t, sym_Where_1))
    {
      o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_28;
  if(match_cons(t, sym_Build_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_29 = t;
    int b_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL;
        t = term_l_29;
        e_9 = t;
        t = term_m_29;
        f_9 = t;
        t = SSL_table_get(f_9, e_9);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_9 = ATgetFirst((ATermList) t);
            {
              ATerm n_29 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = g_9;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm o_29 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) o_29) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            x_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, x_8, k_28, (ATerm) ATmakeAppl(sym__2, o_28, h_29));
        t = replace_application_0_0(t);
        if(match_cons(t, sym__2))
          {
            y_8 = ATgetArgument(t, 0);
            z_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, y_8), (ATerm) ATmakeAppl(sym_Build_1, z_8)));
        ;
        LocalPopChoice(b_29);
      }
    else
      {
        t = a_29;
        {
          ATerm q_9 = NULL,s_9 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
          t = term_l_29;
          v_10 = t;
          t = term_m_29;
          w_10 = t;
          t = SSL_table_get(w_10, v_10);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_10 = ATgetFirst((ATermList) t);
              {
                ATerm p_29 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = x_10;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm q_29 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) q_29) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              q_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_28;
          t = free_vars_3_0(r_10, s_10, tboundin_3_0, t);
          {
            ATerm z_10 (ATerm t)
            {
              ATerm a_11 (ATerm t)
              {
                ATerm p_10 = NULL;
                p_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, q_9, (ATerm) ATmakeAppl(sym_Var_1, p_10)), term_s_29);
                t = assert_1_0(b_11, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, p_10);
                return(t);
              }
              t = map_1_0(a_11, t);
              t = (ATerm) ATmakeAppl(sym__2, o_28, h_29);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    s_9 = ATgetArgument(t, 0);
                  {
                    ATerm t_29 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(y_10, z_10, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_28), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(s_9)), (ATerm) ATmakeAppl(sym_Build_1, h_29)));
          }
        }
      }
  }
  return(t);
}
ATerm e_31 (ATerm j_30, ATerm l_30, ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL;
  t = term_z_28;
  e_11 = t;
  t = SSL_table_get(e_11, l_30);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_11 = ATgetFirst((ATermList) t);
      {
        ATerm u_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_11;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm v_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_29) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = j_30;
  return(t);
}
ATerm f_31 (ATerm q_30, ATerm s_30, ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL;
  t = term_z_28;
  i_11 = t;
  t = SSL_table_get(i_11, s_30);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_11 = ATgetFirst((ATermList) t);
      {
        ATerm w_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_11;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm x_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_29) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = q_30;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,c_31 = NULL;
  x_30 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm y_29 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_31;
  if(match_cons(t, sym_Var_1))
    {
      w_30 = ATgetArgument(t, 0);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_11 = NULL,t_11 = NULL;
            t = term_z_28;
            s_11 = t;
            t = SSL_table_get(s_11, x_30);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_11 = ATgetFirst((ATermList) t);
                {
                  ATerm b_30 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = t_11;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm c_30 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) c_30) != ATmakeSymbol("u_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, w_30);
            ;
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            {
              ATerm d_30 = t;
              int e_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = e_31(c_31, x_30, t);
                  ;
                  LocalPopChoice(e_30);
                }
              else
                {
                  t = d_30;
                  t = f_31(c_31, x_30, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm f_30 = t;
      int g_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_31(c_31, x_30, t);
          ;
          LocalPopChoice(g_30);
        }
      else
        {
          t = f_30;
          t = f_31(c_31, x_30, t);
        }
    }
  return(t);
}
ATerm table_pop_rm_0_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_30 = t;
    int i_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(k_31, l_31);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm k_30 = ATgetFirst((ATermList) t);
            m_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_30);
        t = SSL_table_put(k_31, l_31, m_31);
        t = (ATerm) ATmakeAppl(sym__3, k_31, l_31, m_31);
      }
    else
      {
        t = h_30;
        t = SSL_table_remove(k_31, l_31);
        t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
      }
    t = (ATerm) ATmakeAppl(sym__2, k_31, l_31);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL;
  n_31 = t;
  t = n_130(t);
  o_31 = t;
  {
    ATerm m_30 = t;
    int n_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_32 = NULL;
        t = term_o_30;
        j_32 = t;
        t = SSL_table_get(o_31, j_32);
        ;
        LocalPopChoice(n_30);
      }
    else
      {
        t = m_30;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_32 = ATgetFirst((ATermList) t);
        e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_30;
    g_32 = t;
    t = SSL_table_put(o_31, g_32, e_32);
    t = f_32;
    {
      ATerm c_11 (ATerm t)
      {
        ATerm m_32 = NULL;
        m_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_31, m_32);
        t = table_pop_rm_0_0(t);
        return(t);
      }
      t = map_1_0(c_11, t);
      t = n_31;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm k_121 (ATerm), ATerm l_121 (ATerm), ATerm t)
{
  ATerm p_30 = t;
  int r_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_121(t);
      t = l_121(t);
      ;
      LocalPopChoice(r_30);
    }
  else
    {
      t = p_30;
      t = l_121(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm m_130 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,u_32 = NULL,v_32 = NULL,a_33 = NULL;
  r_32 = t;
  t = m_130(t);
  s_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_32, term_o_30);
  {
    ATerm t_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_11 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_30 = ATgetArgument(t, 0);
            ATerm y_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_o_30;
        w_11 = t;
        t = SSL_table_get(s_32, w_11);
        ;
        LocalPopChoice(u_30);
      }
    else
      {
        t = t_30;
        t = (ATerm) ATempty;
      }
    u_32 = t;
    t = term_o_30;
    v_32 = t;
    t = (ATerm) ATinsert(CheckATermList(u_32), (ATerm) ATempty);
    a_33 = t;
    t = SSL_table_put(s_32, v_32, a_33);
    t = r_32;
  }
  return(t);
}
ATerm scope_2_0 (ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(o_130, t);
  {
    ATerm d_11 (ATerm t)
    {
      t = end_scope_1_0(o_130, t);
      return(t);
    }
    t = restore_always_2_0(p_130, d_11, t);
  }
  return(t);
}
ATerm g_11 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm r_34 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      r_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, r_34);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm z_30 = t;
  int a_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_31);
    }
  else
    {
      t = z_30;
      {
        ATerm w_34 = NULL,f_35 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            w_34 = ATgetArgument(t, 0);
            t = w_34;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm b_31 = t;
            int d_31 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm g_31 = ATgetArgument(t, 0);
                    ATerm h_31 = ATgetArgument(t, 1);
                    f_35 = ATgetArgument(t, 2);
                    {
                      ATerm i_31 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(d_31);
                t = f_35;
                t = map_1_0(m_11, t);
              }
            else
              {
                t = b_31;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm j_31 = ATgetArgument(t, 0);
                    ATerm p_31 = ATgetArgument(t, 1);
                    f_35 = ATgetArgument(t, 2);
                    {
                      ATerm q_31 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = f_35;
                t = map_1_0(n_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_11 (ATerm t)
{
  ATerm p_35 = NULL;
  ATerm r_31 = t;
  int s_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_35 = ATgetArgument(t, 0);
          {
            ATerm t_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_31);
      t = p_35;
    }
  else
    {
      t = r_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_35;
    }
  return(t);
}
ATerm n_11 (ATerm t)
{
  ATerm y_35 = NULL;
  ATerm u_31 = t;
  int v_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_35 = ATgetArgument(t, 0);
          {
            ATerm w_31 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_31);
      t = y_35;
    }
  else
    {
      t = u_31;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_35 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_35;
    }
  return(t);
}
ATerm p_11 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,p_34 = NULL;
  if(match_cons(t, sym__3))
    {
      j_34 = ATgetArgument(t, 0);
      k_34 = ATgetArgument(t, 1);
      l_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm h_11 (ATerm t)
    {
      t = k_34;
      t = free_vars_3_0(k_11, l_11, tboundin_3_0, t);
      {
        ATerm o_11 (ATerm t)
        {
          ATerm d_36 = NULL;
          d_36 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, j_34, (ATerm) ATmakeAppl(sym_Var_1, d_36)), term_y_31);
          t = assert_1_0(p_11, t);
          t = d_36;
          return(t);
        }
        t = map_1_0(o_11, t);
        t = l_34;
        t = alltd_1_0(Replace_0_0, t);
        if(((p_34 != NULL) && (p_34 != t)))
          _fail(t);
        else
          p_34 = t;
      }
      return(t);
    }
    t = scope_2_0(g_11, h_11, t);
    t = not_null(p_34);
  }
  return(t);
}
ATerm q_11 (ATerm t)
{
  ATerm w_14 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      w_14 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, w_14);
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm z_31 = t;
  int a_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(a_32);
    }
  else
    {
      t = z_31;
      {
        ATerm y_14 = NULL,c_15 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            y_14 = ATgetArgument(t, 0);
            t = y_14;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm b_32 = t;
            int c_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm d_32 = ATgetArgument(t, 0);
                    ATerm h_32 = ATgetArgument(t, 1);
                    c_15 = ATgetArgument(t, 2);
                    {
                      ATerm i_32 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(c_32);
                t = c_15;
                t = map_1_0(u_11, t);
              }
            else
              {
                t = b_32;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm k_32 = ATgetArgument(t, 0);
                    ATerm l_32 = ATgetArgument(t, 1);
                    c_15 = ATgetArgument(t, 2);
                    {
                      ATerm n_32 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = c_15;
                t = map_1_0(v_11, t);
              }
          }
      }
    }
  return(t);
}
ATerm u_11 (ATerm t)
{
  ATerm o_15 = NULL;
  ATerm o_32 = t;
  int p_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_15 = ATgetArgument(t, 0);
          {
            ATerm q_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_32);
      t = o_15;
    }
  else
    {
      t = o_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_15;
    }
  return(t);
}
ATerm v_11 (ATerm t)
{
  ATerm y_15 = NULL;
  ATerm t_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          y_15 = ATgetArgument(t, 0);
          {
            ATerm x_32 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_32);
      t = y_15;
    }
  else
    {
      t = t_32;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          y_15 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = y_15;
    }
  return(t);
}
ATerm x_11 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm a_12 (ATerm t)
{
  t = term_z_28;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm r_41 = NULL,z_41 = NULL,l_42 = NULL,o_42 = NULL,p_42 = NULL,s_42 = NULL,t_42 = NULL,w_42 = NULL,z_42 = NULL,a_43 = NULL,e_43 = NULL;
  r_41 = t;
  if(match_cons(t, sym_Seq_2))
    {
      z_41 = ATgetArgument(t, 0);
      t_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_41;
  if(match_cons(t, sym_CallT_3))
    {
      l_42 = ATgetArgument(t, 0);
      p_42 = ATgetArgument(t, 1);
      s_42 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = l_42;
  if(match_cons(t, sym_SVar_1))
    {
      o_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_42;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = p_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = s_42;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = t_42;
  if(match_cons(t, sym_Seq_2))
    {
      w_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_42;
  if(match_cons(t, sym_Match_1))
    {
      z_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_43;
  if(match_cons(t, sym_Build_1))
    {
      e_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_32 = t;
    int z_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_13 = NULL,n_13 = NULL,v_13 = NULL,x_13 = NULL,z_13 = NULL;
        t = term_c_33;
        v_13 = t;
        t = term_d_33;
        x_13 = t;
        t = SSL_table_get(x_13, v_13);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_13 = ATgetFirst((ATermList) t);
            {
              ATerm e_33 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = z_13;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm f_33 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) f_33) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            k_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, k_13, z_42, e_43);
        t = replace_application_0_0(t);
        n_13 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_42), (ATerm) ATmakeAppl(sym_Build_1, n_13));
        ;
        LocalPopChoice(z_32);
      }
    else
      {
        t = y_32;
        {
          ATerm r_14 = NULL,s_14 = NULL,n_16 = NULL,o_16 = NULL,q_16 = NULL;
          t = term_c_33;
          n_16 = t;
          t = term_d_33;
          o_16 = t;
          t = SSL_table_get(o_16, n_16);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_16 = ATgetFirst((ATermList) t);
              {
                ATerm g_33 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = q_16;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_33 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_33) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              r_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_42;
          t = free_vars_3_0(q_11, r_11, tboundin_3_0, t);
          {
            ATerm y_11 (ATerm t)
            {
              ATerm z_11 (ATerm t)
              {
                ATerm e_16 = NULL;
                e_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, r_14, (ATerm) ATmakeAppl(sym_Var_1, e_16)), term_j_33);
                t = assert_1_0(a_12, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, e_16);
                return(t);
              }
              t = map_1_0(z_11, t);
              t = e_43;
              t = alltd_1_0(Replace_0_0, t);
              if(((s_14 != NULL) && (s_14 != t)))
                _fail(t);
              else
                s_14 = t;
              return(t);
            }
            t = scope_2_0(x_11, y_11, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_42), (ATerm) ATmakeAppl(sym_Build_1, not_null(s_14)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm b_12 (ATerm t)
  {
    ATerm k_33 = t;
    int l_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,z_47 = NULL;
        p_47 = t;
        if(match_cons(t, sym_Seq_2))
          {
            q_47 = ATgetArgument(t, 0);
            x_47 = ATgetArgument(t, 1);
            t = q_47;
            if(match_cons(t, sym_Choice_2))
              {
                r_47 = ATgetArgument(t, 0);
                t_47 = ATgetArgument(t, 1);
                {
                  ATerm t_17 = NULL,u_17 = NULL,v_17 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_33, x_47);
                  t_17 = t;
                  t = term_n_33;
                  u_17 = t;
                  t = SSL_table_get(u_17, t_17);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_17 = ATgetFirst((ATermList) t);
                      {
                        ATerm o_33 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = v_17;
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm p_33 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) p_33) != ATmakeSymbol("c_2", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, r_47, x_47), (ATerm) ATmakeAppl(sym_Seq_2, t_47, x_47));
                  t = bottomup_1_0(b_12, t);
                }
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    r_47 = ATgetArgument(t, 0);
                    t_47 = ATgetArgument(t, 1);
                    {
                      ATerm i_18 = NULL,j_18 = NULL,k_18 = NULL;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_q_33, x_47);
                      i_18 = t;
                      t = term_r_33;
                      j_18 = t;
                      t = SSL_table_get(j_18, i_18);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          k_18 = ATgetFirst((ATermList) t);
                          {
                            ATerm s_33 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = k_18;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm t_33 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) t_33) != ATmakeSymbol("f_2", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, r_47, x_47), (ATerm) ATmakeAppl(sym_Seq_2, t_47, x_47));
                      t = bottomup_1_0(b_12, t);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        r_47 = ATgetArgument(t, 0);
                        t_47 = ATgetArgument(t, 1);
                        {
                          ATerm d_48 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, t_47, x_47);
                          t = b_12(t);
                          d_48 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, r_47, d_48);
                          t = b_12(t);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Seq_2))
                          {
                            r_47 = ATgetArgument(t, 0);
                            t_47 = ATgetArgument(t, 1);
                            {
                              ATerm h_48 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, t_47, x_47);
                              t = b_12(t);
                              h_48 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, r_47, h_48);
                              t = b_12(t);
                            }
                          }
                        else
                          {
                            ATerm k_48 = NULL;
                            if(match_cons(t, sym_Build_1))
                              {
                                r_47 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_App_2, x_47, r_47);
                            t = b_12(t);
                            k_48 = t;
                            t = (ATerm) ATmakeAppl(sym_Build_1, k_48);
                            t = b_12(t);
                          }
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                q_47 = ATgetArgument(t, 0);
                x_47 = ATgetArgument(t, 1);
                {
                  ATerm o_48 = NULL;
                  t = q_47;
                  if(match_cons(t, sym_LChoice_2))
                    {
                      r_47 = ATgetArgument(t, 0);
                      t_47 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, t_47, x_47);
                  t = b_12(t);
                  o_48 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, r_47, o_48);
                  t = b_12(t);
                }
              }
            else
              {
                if(match_cons(t, sym_Choice_2))
                  {
                    q_47 = ATgetArgument(t, 0);
                    x_47 = ATgetArgument(t, 1);
                    {
                      ATerm s_48 = NULL;
                      t = q_47;
                      if(match_cons(t, sym_Choice_2))
                        {
                          r_47 = ATgetArgument(t, 0);
                          t_47 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Choice_2, t_47, x_47);
                      t = b_12(t);
                      s_48 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, r_47, s_48);
                      t = b_12(t);
                    }
                  }
                else
                  {
                    ATerm w_48 = NULL;
                    if(match_cons(t, sym_App_2))
                      {
                        q_47 = ATgetArgument(t, 0);
                        x_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = q_47;
                    if(match_cons(t, sym_CallT_3))
                      {
                        r_47 = ATgetArgument(t, 0);
                        t_47 = ATgetArgument(t, 1);
                        w_47 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = r_47;
                    if(match_cons(t, sym_SVar_1))
                      {
                        s_47 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = s_47;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                      _fail(t);
                    t = t_47;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        u_47 = ATgetFirst((ATermList) t);
                        v_47 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = v_47;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = w_47;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_47;
                    if(match_cons(t, sym_Op_2))
                      {
                        y_47 = ATgetArgument(t, 0);
                        z_47 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = z_47;
                    {
                      ATerm c_12 (ATerm t)
                      {
                        ATerm x_48 = NULL;
                        x_48 = t;
                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, u_47), (ATerm) ATempty), x_48);
                        return(t);
                      }
                      t = map_1_0(c_12, t);
                      w_48 = t;
                      t = (ATerm) ATmakeAppl(sym_App_2, u_47, (ATerm) ATmakeAppl(sym_Op_2, y_47, w_48));
                      t = bottomup_1_0(b_12, t);
                    }
                  }
              }
          }
        ;
        LocalPopChoice(l_33);
      }
    else
      {
        t = k_33;
      }
    return(t);
  }
  t = bottomup_1_0(b_12, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    t = bottomup_1_0(e_118, t);
    return(t);
  }
  t = SRTS_all(d_12, t);
  t = e_118(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm e_12 (ATerm t)
  {
    ATerm w_33 = t;
    int x_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            e_49 = ATgetArgument(t, 0);
            f_49 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_49;
        if(match_cons(t, sym_Choice_2))
          {
            g_49 = ATgetArgument(t, 0);
            h_49 = ATgetArgument(t, 1);
            {
              ATerm l_49 = NULL,m_49 = NULL;
              t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, g_49);
              t = e_12(t);
              l_49 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, h_49);
              t = e_12(t);
              m_49 = t;
              t = (ATerm) ATmakeAppl(sym_Choice_2, l_49, m_49);
              t = e_12(t);
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                g_49 = ATgetArgument(t, 0);
                h_49 = ATgetArgument(t, 1);
                {
                  ATerm q_49 = NULL,r_49 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, g_49);
                  t = e_12(t);
                  q_49 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, h_49);
                  t = e_12(t);
                  r_49 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, q_49, r_49);
                  t = e_12(t);
                }
              }
            else
              {
                ATerm v_49 = NULL;
                if(match_cons(t, sym_Scope_2))
                  {
                    g_49 = ATgetArgument(t, 0);
                    h_49 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, e_49, h_49);
                t = e_12(t);
                v_49 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, g_49, v_49);
                t = e_12(t);
              }
          }
        ;
        LocalPopChoice(x_33);
      }
    else
      {
        t = w_33;
      }
    return(t);
  }
  t = bottomup_1_0(e_12, t);
  return(t);
}
ATerm Build_1_0 (ATerm b_108 (ATerm), ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL,n_2 = NULL,v_2 = NULL;
  a_50 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_49 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_50);
  x_49 = t;
  t = y_49;
  t = b_108(t);
  z_49 = t;
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, z_49);
  n_2 = t;
  t = SSLsetAnnotations(n_2, x_49);
  return(t);
}
ATerm Seq_2_0 (ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL,h_50 = NULL,i_50 = NULL,w_2 = NULL,x_2 = NULL;
  i_50 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_50 = ATgetArgument(t, 0);
      f_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_50);
  d_50 = t;
  t = e_50;
  t = h_108(t);
  g_50 = t;
  t = f_50;
  t = i_108(t);
  h_50 = t;
  x_2 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, g_50, h_50);
  w_2 = t;
  t = SSLsetAnnotations(w_2, d_50);
  return(t);
}
ATerm Match_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,e_3 = NULL,f_3 = NULL;
  o_50 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_50);
  l_50 = t;
  t = m_50;
  t = a_108(t);
  n_50 = t;
  f_3 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, n_50);
  e_3 = t;
  t = SSLsetAnnotations(e_3, l_50);
  return(t);
}
ATerm LChoice_2_0 (ATerm j_108 (ATerm), ATerm k_108 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,o_3 = NULL,p_3 = NULL;
  w_50 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      s_50 = ATgetArgument(t, 0);
      t_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_50);
  r_50 = t;
  t = s_50;
  t = j_108(t);
  u_50 = t;
  t = t_50;
  t = k_108(t);
  v_50 = t;
  p_3 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, u_50, v_50);
  o_3 = t;
  t = SSLsetAnnotations(o_3, r_50);
  return(t);
}
ATerm Choice_2_0 (ATerm h_107 (ATerm), ATerm i_107 (ATerm), ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,y_3 = NULL,z_3 = NULL;
  e_51 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_51 = ATgetArgument(t, 0);
      b_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_51);
  z_50 = t;
  t = a_51;
  t = h_107(t);
  c_51 = t;
  t = b_51;
  t = i_107(t);
  d_51 = t;
  z_3 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, c_51, d_51);
  y_3 = t;
  t = SSLsetAnnotations(y_3, z_50);
  return(t);
}
ATerm f_12 (ATerm t)
{
  t = Seq_2_0(g_12, h_12, t);
  return(t);
}
ATerm g_12 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm h_12 (ATerm t)
{
  t = Build_1_0(_id, t);
  return(t);
}
ATerm i_12 (ATerm t)
{
  t = Seq_2_0(j_12, k_12, t);
  return(t);
}
ATerm j_12 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm k_12 (ATerm t)
{
  t = Seq_2_0(_id, l_12, t);
  return(t);
}
ATerm l_12 (ATerm t)
{
  t = Build_1_0(_id, t);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_34 = t;
      int b_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(b_34);
        }
      else
        {
          t = a_34;
          {
            ATerm c_34 = t;
            int d_34 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                ;
                LocalPopChoice(d_34);
              }
            else
              {
                t = c_34;
                {
                  ATerm e_34 = t;
                  int f_34 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                      ;
                      LocalPopChoice(f_34);
                    }
                  else
                    {
                      t = e_34;
                      {
                        ATerm g_34 = t;
                        int h_34 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Scope_2_0(_id, f_12, t);
                            ;
                            LocalPopChoice(h_34);
                          }
                        else
                          {
                            t = g_34;
                            {
                              ATerm i_34 = t;
                              int m_34 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, i_12, t);
                                  ;
                                  LocalPopChoice(m_34);
                                }
                              else
                                {
                                  t = i_34;
                                  t = InlineStrat_0_0(t);
                                  t = inline_rules_0_0(t);
                                }
                            }
                          }
                      }
                    }
                }
              }
          }
        }
      ;
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
    }
  return(t);
}
ATerm m_12 (ATerm t)
{
  t = term_d_33;
  return(t);
}
ATerm n_12 (ATerm t)
{
  t = term_m_29;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm i_51 = NULL;
  i_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_33, (ATerm) ATmakeAppl(sym_Defined_2, term_n_34, i_51));
  t = assert_1_0(m_12, t);
  t = (ATerm) ATmakeAppl(sym__2, term_l_29, (ATerm) ATmakeAppl(sym_Defined_2, term_o_34, i_51));
  t = assert_1_0(n_12, t);
  t = i_51;
  return(t);
}
ATerm o_12 (ATerm t)
{
  t = term_n_33;
  return(t);
}
ATerm p_12 (ATerm t)
{
  t = term_r_33;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm j_51 = NULL;
  j_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_33, j_51), term_s_34);
  t = assert_1_0(o_12, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_q_33, j_51), term_u_34);
  t = assert_1_0(p_12, t);
  t = j_51;
  return(t);
}
ATerm q_12 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,e_52 = NULL;
  c_52 = t;
  t = term_x_23;
  d_52 = t;
  t = (ATerm) ATinsert(ATempty, term_v_34);
  e_52 = t;
  t = SSL_printnl(d_52, e_52);
  t = c_52;
  return(t);
}
ATerm r_12 (ATerm t)
{
  ATerm x_34 = t;
  int y_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(y_34);
    }
  else
    {
      t = x_34;
      {
        ATerm z_34 = t;
        int a_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(a_35);
          }
        else
          {
            t = z_34;
            {
              ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  g_52 = ATgetArgument(t, 0);
                  i_52 = ATgetArgument(t, 1);
                  j_52 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_52;
              if(match_cons(t, sym_SVar_1))
                {
                  h_52 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = h_52;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = i_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_25;
            }
          }
      }
    }
  return(t);
}
ATerm s_12 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm b_35 = ATgetArgument(t, 0);
      if(match_cons(b_35, sym_SVar_1))
        {
          ATerm e_35 = ATgetArgument(b_35, 0);
          if((ATgetSymbol((ATermAppl) e_35) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm c_35 = ATgetArgument(t, 1);
        if(((ATgetType(c_35) != AT_LIST) || !(ATisEmpty(c_35))))
          _fail(t);
      }
      {
        ATerm d_35 = ATgetArgument(t, 2);
        if(((ATgetType(d_35) != AT_LIST) || !(ATisEmpty(d_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_12 (ATerm t)
{
  ATerm n_52 = NULL,o_52 = NULL,p_52 = NULL;
  n_52 = t;
  t = term_x_23;
  o_52 = t;
  t = (ATerm) ATinsert(ATempty, term_g_35);
  p_52 = t;
  t = SSL_printnl(o_52, p_52);
  t = n_52;
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm t_51 = NULL,y_51 = NULL,b_52 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm h_35 = ATgetArgument(t, 0);
      if(match_cons(h_35, sym_SVar_1))
        {
          ATerm k_35 = ATgetArgument(h_35, 0);
          if((ATgetSymbol((ATermAppl) k_35) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm i_35 = ATgetArgument(t, 1);
        if(((ATgetType(i_35) == AT_LIST) && !(ATisEmpty(i_35))))
          {
            t_51 = ATgetFirst((ATermList) i_35);
            {
              ATerm l_35 = (ATerm) ATgetNext((ATermList) i_35);
              if(((ATgetType(l_35) != AT_LIST) || !(ATisEmpty(l_35))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm j_35 = ATgetArgument(t, 2);
        if(((ATgetType(j_35) != AT_LIST) || !(ATisEmpty(j_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = if_verbose2_1_0(q_12, t);
  t = new_0_0(t);
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_51), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_51), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = t_51;
  t = inline_rules_0_0(t);
  b_52 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, y_51, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_e_29, b_52), (ATerm) ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_51), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_w_25))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(r_12, t);
  {
    ATerm m_35 = t;
    if((PushChoice() == 0))
      {
        ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
        t = oncetd_1_0(s_12, t);
        k_52 = t;
        t = term_x_23;
        l_52 = t;
        t = (ATerm) ATinsert(ATempty, term_n_35);
        m_52 = t;
        t = SSL_printnl(l_52, m_52);
        t = k_52;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_35;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(t_12, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm v_119 (ATerm), ATerm t)
{
  ATerm q_52 (ATerm t)
  {
    ATerm o_35 = t;
    int q_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_119(t);
        ;
        LocalPopChoice(q_35);
      }
    else
      {
        t = o_35;
        t = SRTS_all(q_52, t);
      }
    return(t);
  }
  t = q_52(t);
  return(t);
}
ATerm u_12 (ATerm t)
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  t = term_x_23;
  o_53 = t;
  t = (ATerm) ATinsert(ATempty, term_r_35);
  p_53 = t;
  t = SSL_printnl(o_53, p_53);
  t = n_53;
  return(t);
}
ATerm v_12 (ATerm t)
{
  t = debug_1_0(w_12, t);
  return(t);
}
ATerm w_12 (ATerm t)
{
  t = term_s_35;
  return(t);
}
ATerm x_12 (ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
  i_54 = t;
  t = term_x_23;
  j_54 = t;
  t = (ATerm) ATinsert(ATempty, term_t_35);
  k_54 = t;
  t = SSL_printnl(j_54, k_54);
  t = i_54;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL;
  l_53 = t;
  t = new_0_0(t);
  m_53 = t;
  {
    ATerm u_35 = t;
    int v_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_33, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, m_53), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(v_35);
      }
    else
      {
        t = u_35;
        t = if_verbose2_1_0(u_12, t);
        _fail(t);
      }
    {
      ATerm w_35 = t;
      int x_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL,v_53 = NULL,w_53 = NULL,x_53 = NULL,y_53 = NULL,z_53 = NULL,a_54 = NULL,b_54 = NULL,c_54 = NULL,d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL;
          q_53 = t;
          if(match_cons(t, sym_Seq_2))
            {
              r_53 = ATgetArgument(t, 0);
              d_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_53;
          if(match_cons(t, sym_All_1))
            {
              s_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_53;
          if(match_cons(t, sym_CallT_3))
            {
              t_53 = ATgetArgument(t, 0);
              v_53 = ATgetArgument(t, 1);
              c_54 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = t_53;
          if(match_cons(t, sym_SVar_1))
            {
              u_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_53;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = v_53;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_53 = ATgetFirst((ATermList) t);
              b_54 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_53;
          if(match_cons(t, sym_CallT_3))
            {
              x_53 = ATgetArgument(t, 0);
              z_53 = ATgetArgument(t, 1);
              a_54 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = x_53;
          if(match_cons(t, sym_SVar_1))
            {
              y_53 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_53;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_54;
          if(match_cons(t, sym_CallT_3))
            {
              e_54 = ATgetArgument(t, 0);
              g_54 = ATgetArgument(t, 1);
              h_54 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = e_54;
          if(match_cons(t, sym_SVar_1))
            {
              f_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_54;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_53;
          if((m_53 != t))
            {
              _fail(t);
            }
          t = f_54;
          if((y_53 != t))
            {
              _fail(t);
            }
          t = q_53;
          ;
          LocalPopChoice(x_35);
        }
      else
        {
          t = w_35;
          t = if_verbose1_1_0(v_12, t);
          _fail(t);
        }
      t = if_verbose2_1_0(x_12, t);
      t = l_53;
    }
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  ATerm v_57 = NULL,w_57 = NULL,x_57 = NULL;
  v_57 = t;
  t = term_x_23;
  w_57 = t;
  t = (ATerm) ATinsert(ATempty, term_z_35);
  x_57 = t;
  t = SSL_printnl(w_57, x_57);
  t = v_57;
  return(t);
}
ATerm z_12 (ATerm t)
{
  t = debug_1_0(a_13, t);
  return(t);
}
ATerm a_13 (ATerm t)
{
  t = term_a_36;
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm w_59 = NULL,x_59 = NULL,y_59 = NULL;
  w_59 = t;
  t = term_x_23;
  x_59 = t;
  t = (ATerm) ATinsert(ATempty, term_b_36);
  y_59 = t;
  t = SSL_printnl(x_59, y_59);
  t = w_59;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm t_57 = NULL,u_57 = NULL;
  t_57 = t;
  t = new_0_0(t);
  u_57 = t;
  {
    ATerm c_36 = t;
    int e_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_g_36, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, u_57), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(e_36);
      }
    else
      {
        t = c_36;
        t = if_verbose2_1_0(y_12, t);
        _fail(t);
      }
    {
      ATerm h_36 = t;
      int i_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_57 = NULL,z_57 = NULL,a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL,k_58 = NULL,l_58 = NULL,m_58 = NULL,n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,o_59 = NULL,p_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL;
          t_58 = t;
          if(match_cons(t, sym_CallT_3))
            {
              u_58 = ATgetArgument(t, 0);
              w_58 = ATgetArgument(t, 1);
              t_59 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_58;
          if(match_cons(t, sym_SVar_1))
            {
              v_58 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_58;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = w_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_58 = ATgetFirst((ATermList) t);
              s_59 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_58;
          if(match_cons(t, sym_CallT_3))
            {
              y_58 = ATgetArgument(t, 0);
              z_58 = ATgetArgument(t, 1);
              z_57 = ATgetArgument(t, 2);
              t = y_58;
              if(match_cons(t, sym_SVar_1))
                {
                  y_57 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = y_57;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = z_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_59 = ATgetFirst((ATermList) t);
                  r_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = a_59;
              if(match_cons(t, sym_Seq_2))
                {
                  b_59 = ATgetArgument(t, 0);
                  g_59 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = b_59;
              if(match_cons(t, sym_CallT_3))
                {
                  c_59 = ATgetArgument(t, 0);
                  e_59 = ATgetArgument(t, 1);
                  f_59 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = c_59;
              if(match_cons(t, sym_SVar_1))
                {
                  d_59 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = e_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_59;
              if(match_cons(t, sym_CallT_3))
                {
                  h_59 = ATgetArgument(t, 0);
                  j_59 = ATgetArgument(t, 1);
                  q_59 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = h_59;
              if(match_cons(t, sym_SVar_1))
                {
                  i_59 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_59;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = j_59;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_59 = ATgetFirst((ATermList) t);
                  p_59 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = k_59;
              if(match_cons(t, sym_CallT_3))
                {
                  l_59 = ATgetArgument(t, 0);
                  n_59 = ATgetArgument(t, 1);
                  o_59 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_59;
              if(match_cons(t, sym_SVar_1))
                {
                  m_59 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_57;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_59;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_59;
              if((u_57 != t))
                {
                  _fail(t);
                }
              t = m_59;
              if((d_59 != t))
                {
                  _fail(t);
                }
              t = t_58;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  y_58 = ATgetArgument(t, 0);
                  z_58 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_58;
              if(match_cons(t, sym_CallT_3))
                {
                  a_59 = ATgetArgument(t, 0);
                  r_59 = ATgetArgument(t, 1);
                  s_58 = ATgetArgument(t, 2);
                  t = a_59;
                  if(match_cons(t, sym_SVar_1))
                    {
                      b_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_59;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = r_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      a_58 = ATgetFirst((ATermList) t);
                      r_58 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = a_58;
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_58 = ATgetArgument(t, 0);
                      g_58 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_58;
                  if(match_cons(t, sym_CallT_3))
                    {
                      c_58 = ATgetArgument(t, 0);
                      e_58 = ATgetArgument(t, 1);
                      f_58 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = c_58;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_58;
                  if(match_cons(t, sym_CallT_3))
                    {
                      h_58 = ATgetArgument(t, 0);
                      j_58 = ATgetArgument(t, 1);
                      q_58 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = h_58;
                  if(match_cons(t, sym_SVar_1))
                    {
                      i_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_58;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = j_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_58 = ATgetFirst((ATermList) t);
                      p_58 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_58;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_58 = ATgetArgument(t, 0);
                      n_58 = ATgetArgument(t, 1);
                      o_58 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_58;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_58;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_58;
                  if((u_57 != t))
                    {
                      _fail(t);
                    }
                  t = m_58;
                  if((y_58 != t))
                    {
                      _fail(t);
                    }
                  t = t_58;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      a_59 = ATgetArgument(t, 0);
                      r_59 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = a_59;
                  if(match_cons(t, sym_Seq_2))
                    {
                      b_59 = ATgetArgument(t, 0);
                      g_59 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_59;
                  if(match_cons(t, sym_CallT_3))
                    {
                      c_59 = ATgetArgument(t, 0);
                      e_59 = ATgetArgument(t, 1);
                      f_59 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = c_59;
                  if(match_cons(t, sym_SVar_1))
                    {
                      d_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_59;
                  if(match_cons(t, sym_CallT_3))
                    {
                      h_59 = ATgetArgument(t, 0);
                      j_59 = ATgetArgument(t, 1);
                      q_59 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = h_59;
                  if(match_cons(t, sym_SVar_1))
                    {
                      i_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_59;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = j_59;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_59 = ATgetFirst((ATermList) t);
                      p_59 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_59;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_59 = ATgetArgument(t, 0);
                      n_59 = ATgetArgument(t, 1);
                      o_59 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_59;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_59 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_59;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = s_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_59;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_59;
                  if((u_57 != t))
                    {
                      _fail(t);
                    }
                  t = m_59;
                  if((y_58 != t))
                    {
                      _fail(t);
                    }
                  t = t_58;
                }
            }
          ;
          LocalPopChoice(i_36);
        }
      else
        {
          t = h_36;
          t = if_verbose1_1_0(z_12, t);
          _fail(t);
        }
      t = if_verbose2_1_0(b_13, t);
      t = t_57;
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm d_60 = NULL,e_60 = NULL,g_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL,l_60 = NULL;
  if(match_cons(t, sym__2))
    {
      g_60 = ATgetArgument(t, 0);
      i_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_60;
  if(match_cons(t, sym_Build_1))
    {
      ATerm j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_60;
  if(match_cons(t, sym_Where_1))
    {
      j_60 = ATgetArgument(t, 0);
      t = j_60;
      if(match_cons(t, sym_Prim_2))
        {
          d_60 = ATgetArgument(t, 0);
          e_60 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, d_60, e_60);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          j_60 = ATgetArgument(t, 0);
          k_60 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, j_60, k_60);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              j_60 = ATgetArgument(t, 0);
              k_60 = ATgetArgument(t, 1);
              l_60 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_60, k_60, l_60);
        }
    }
  return(t);
}
ATerm c_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if(((ATgetType(k_36) != AT_LIST) || !(ATisEmpty(k_36))))
        _fail(t);
      {
        ATerm l_36 = ATgetArgument(t, 1);
        if(((ATgetType(l_36) != AT_LIST) || !(ATisEmpty(l_36))))
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
  ATerm x_60 = NULL,y_60 = NULL,z_60 = NULL,a_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
        {
          x_60 = ATgetFirst((ATermList) m_36);
          z_60 = (ATerm) ATgetNext((ATermList) m_36);
        }
      else
        _fail(t);
      {
        ATerm n_36 = ATgetArgument(t, 1);
        if(((ATgetType(n_36) == AT_LIST) && !(ATisEmpty(n_36))))
          {
            y_60 = ATgetFirst((ATermList) n_36);
            a_61 = (ATerm) ATgetNext((ATermList) n_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_60, y_60), (ATerm) ATmakeAppl(sym__2, z_60, a_61));
  return(t);
}
ATerm e_13 (ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  if(match_cons(t, sym__2))
    {
      b_61 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(c_61), b_61);
  return(t);
}
ATerm f_13 (ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  if(match_cons(t, sym__2))
    {
      d_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_61), (ATerm) ATmakeAppl(sym_Match_1, e_61));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_36 = ATgetArgument(t, 0);
      if(match_cons(o_36, sym_Build_1))
        {
          ATerm q_36 = ATgetArgument(o_36, 0);
          if(match_cons(q_36, sym_Op_2))
            {
              u_60 = ATgetArgument(q_36, 0);
              t_60 = ATgetArgument(q_36, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_36 = ATgetArgument(t, 1);
        if(match_cons(p_36, sym_Match_1))
          {
            ATerm r_36 = ATgetArgument(p_36, 0);
            if(match_cons(r_36, sym_Op_2))
              {
                if((u_60 != ATgetArgument(r_36, 0)))
                  {
                    _fail(ATgetArgument(r_36, 0));
                  }
                v_60 = ATgetArgument(r_36, 1);
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_60, v_60);
  t = genzip_4_0(c_13, d_13, e_13, f_13, t);
  w_60 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_60), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, u_60, t_60)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm f_61 = NULL,g_61 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym_Build_1))
        {
          ATerm u_36 = ATgetArgument(s_36, 0);
          if(match_cons(u_36, sym_Op_2))
            {
              f_61 = ATgetArgument(u_36, 0);
              {
                ATerm v_36 = ATgetArgument(u_36, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm t_36 = ATgetArgument(t, 1);
        if(match_cons(t_36, sym_Match_1))
          {
            ATerm w_36 = ATgetArgument(t_36, 0);
            if(match_cons(w_36, sym_Op_2))
              {
                g_61 = ATgetArgument(w_36, 0);
                {
                  ATerm x_36 = ATgetArgument(w_36, 1);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_61, g_61);
  {
    ATerm y_36 = t;
    if((PushChoice() == 0))
      {
        ATerm h_61 = NULL;
        if(match_cons(t, sym__2))
          {
            h_61 = ATgetArgument(t, 0);
            if((h_61 != ATgetArgument(t, 1)))
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
        t = y_36;
      }
    t = term_z_36;
  }
  return(t);
}
ATerm k_64 (ATerm j_63, ATerm k_63, ATerm l_63, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, j_63, k_63);
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(b_37);
      }
    else
      {
        t = a_37;
        {
          ATerm c_37 = t;
          int d_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
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
                    ATerm s_63 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm g_37 = ATgetArgument(t, 0);
                        ATerm h_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_63;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm i_37 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = k_63;
                    if(match_cons(t, sym_Build_1))
                      {
                        s_63 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, s_63);
                    ;
                    LocalPopChoice(f_37);
                  }
                else
                  {
                    t = e_37;
                    {
                      ATerm j_37 = t;
                      int k_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(k_37);
                        }
                      else
                        {
                          t = j_37;
                          {
                            ATerm w_63 = NULL,x_63 = NULL,z_63 = NULL,a_64 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm l_37 = ATgetArgument(t, 0);
                                ATerm m_37 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = j_63;
                            if(match_cons(t, sym_Match_1))
                              {
                                w_63 = ATgetArgument(t, 0);
                                t = k_63;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    z_63 = ATgetArgument(t, 0);
                                    t = z_63;
                                    if((w_63 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, w_63);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        z_63 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = w_63;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        x_63 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = z_63;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        a_64 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = a_64;
                                    if((x_63 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_63));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    w_63 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = k_63;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    z_63 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = z_63;
                                if((w_63 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, w_63);
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
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL;
  g_64 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_64 = ATgetArgument(t, 0);
      i_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_64;
  if(match_cons(t, sym_Seq_2))
    {
      e_64 = ATgetArgument(t, 0);
      f_64 = ATgetArgument(t, 1);
      {
        ATerm n_37 = t;
        int o_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_64, e_64);
            {
              ATerm p_37 = t;
              int q_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
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
                        t = BuildMatchFusion_0_0(t);
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
                              ATerm y_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm v_37 = ATgetArgument(t, 0);
                                  ATerm w_37 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_64;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm x_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = e_64;
                              if(match_cons(t, sym_Build_1))
                                {
                                  y_18 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, y_18);
                              ;
                              LocalPopChoice(u_37);
                            }
                          else
                            {
                              t = t_37;
                              {
                                ATerm y_37 = t;
                                int z_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(z_37);
                                  }
                                else
                                  {
                                    t = y_37;
                                    {
                                      ATerm c_19 = NULL,d_19 = NULL,f_19 = NULL,g_19 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm a_38 = ATgetArgument(t, 0);
                                          ATerm b_38 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_64;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          c_19 = ATgetArgument(t, 0);
                                          t = e_64;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_19 = ATgetArgument(t, 0);
                                              t = f_19;
                                              if((c_19 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, c_19);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  f_19 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = c_19;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  d_19 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = f_19;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  g_19 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = g_19;
                                              if((d_19 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_19));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              c_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_64;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              f_19 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = f_19;
                                          if((c_19 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, c_19);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              t_18 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, t_18, f_64);
            }
            ;
            LocalPopChoice(o_37);
          }
        else
          {
            t = n_37;
            t = k_64(h_64, i_64, g_64, t);
          }
      }
    }
  else
    {
      t = k_64(h_64, i_64, g_64, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm l_64 (ATerm t)
  {
    ATerm c_38 = t;
    int d_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_119(t);
        ;
        LocalPopChoice(d_38);
      }
    else
      {
        t = c_38;
        t = SRTS_one(l_64, t);
      }
    return(t);
  }
  t = l_64(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL,m_65 = NULL,p_65 = NULL,u_65 = NULL,v_65 = NULL,b_66 = NULL;
  e_65 = t;
  if(match_cons(t, sym_Let_2))
    {
      f_65 = ATgetArgument(t, 0);
      m_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_65;
  if(match_cons(t, sym_Let_2))
    {
      p_65 = ATgetArgument(t, 0);
      v_65 = ATgetArgument(t, 1);
      {
        ATerm f_66 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, f_65, p_65);
        t = conc_0_0(t);
        f_66 = t;
        t = (ATerm) ATmakeAppl(sym_Let_2, f_66, v_65);
      }
    }
  else
    {
      if(match_cons(t, sym_CallT_3))
        {
          p_65 = ATgetArgument(t, 0);
          v_65 = ATgetArgument(t, 1);
          b_66 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = f_65;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_65 = ATgetFirst((ATermList) t);
          l_65 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_65;
      if(match_cons(t, sym_SDefT_4))
        {
          h_65 = ATgetArgument(t, 0);
          i_65 = ATgetArgument(t, 1);
          j_65 = ATgetArgument(t, 2);
          k_65 = ATgetArgument(t, 3);
        }
      else
        _fail(t);
      t = i_65;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_65;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_65;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_65;
      if(match_cons(t, sym_SVar_1))
        {
          u_65 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_65;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_66;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = u_65;
      if((h_65 != t))
        {
          _fail(t);
        }
      t = k_65;
      {
        ATerm e_38 = t;
        if((PushChoice() == 0))
          {
            ATerm g_13 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm f_38 = ATgetArgument(t, 0);
                  if(match_cons(f_38, sym_SVar_1))
                    {
                      if((h_65 != ATgetArgument(f_38, 0)))
                        {
                          _fail(ATgetArgument(f_38, 0));
                        }
                    }
                  else
                    _fail(t);
                  {
                    ATerm g_38 = ATgetArgument(t, 1);
                    if(((ATgetType(g_38) != AT_LIST) || !(ATisEmpty(g_38))))
                      _fail(t);
                  }
                  {
                    ATerm h_38 = ATgetArgument(t, 2);
                    if(((ATgetType(h_38) != AT_LIST) || !(ATisEmpty(h_38))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(g_13, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_38;
          }
        t = k_65;
      }
    }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL,a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,f_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      f_67 = ATgetArgument(t, 0);
      t = f_67;
      if(match_cons(t, sym_Seq_2))
        {
          d_67 = ATgetArgument(t, 0);
          z_66 = ATgetArgument(t, 1);
          t = d_67;
          if(match_cons(t, sym_Where_1))
            {
              y_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_66;
          if(match_cons(t, sym_Seq_2))
            {
              a_67 = ATgetArgument(t, 0);
              c_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_67;
          if(match_cons(t, sym_Build_1))
            {
              b_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, y_66, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_67), c_67)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              d_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, d_67);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          f_67 = ATgetArgument(t, 0);
          t = f_67;
          if(match_cons(t, sym_Test_1))
            {
              d_67 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, d_67);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              f_67 = ATgetArgument(t, 0);
              t = f_67;
              if(match_cons(t, sym_Not_1))
                {
                  d_67 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, d_67);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  f_67 = ATgetArgument(t, 0);
                  g_67 = ATgetArgument(t, 1);
                  t = g_67;
                  if((f_67 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      f_67 = ATgetArgument(t, 0);
                      g_67 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_67;
                  if((f_67 != t))
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
  ATerm u_67 = NULL,v_67 = NULL,w_67 = NULL,x_67 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      u_67 = ATgetArgument(t, 0);
      x_67 = ATgetArgument(t, 1);
      t = u_67;
      if(match_cons(t, sym_LChoice_2))
        {
          v_67 = ATgetArgument(t, 0);
          w_67 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, v_67, (ATerm) ATmakeAppl(sym_LChoice_2, w_67, x_67));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          u_67 = ATgetArgument(t, 0);
          x_67 = ATgetArgument(t, 1);
          t = u_67;
          if(match_cons(t, sym_Seq_2))
            {
              v_67 = ATgetArgument(t, 0);
              w_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, v_67, (ATerm) ATmakeAppl(sym_Seq_2, w_67, x_67));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              u_67 = ATgetArgument(t, 0);
              x_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_67;
          if(match_cons(t, sym_Choice_2))
            {
              v_67 = ATgetArgument(t, 0);
              w_67 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, v_67, (ATerm) ATmakeAppl(sym_Choice_2, w_67, x_67));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_38 = t;
  int j_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm h_13 (ATerm t)
        {
          ATerm k_38 = t;
          int l_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(l_38);
            }
          else
            {
              t = k_38;
            }
          return(t);
        }
        t = Cons_2_0(_id, h_13, t);
      }
      ;
      LocalPopChoice(j_38);
    }
  else
    {
      t = i_38;
      {
        ATerm o_13 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, o_13, t);
      }
    }
  return(t);
}
ATerm p_13 (ATerm t)
{
  ATerm j_69 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      j_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, j_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_38), term_o_38));
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm p_38 = t;
  int q_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_69 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          l_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, l_69, term_o_38);
      ;
      LocalPopChoice(q_38);
    }
  else
    {
      t = p_38;
    }
  return(t);
}
ATerm t_13 (ATerm t)
{
  ATerm t_69 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_69, term_o_38);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_69 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_69 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_69, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_38), term_o_38));
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
    }
  return(t);
}
ATerm c_14 (ATerm t)
{
  ATerm d_70 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_70, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_o_38), term_o_38));
  return(t);
}
ATerm d_14 (ATerm t)
{
  ATerm t_38 = t;
  int u_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_70 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_70 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_70, term_o_38);
      ;
      LocalPopChoice(u_38);
    }
  else
    {
      t = t_38;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,t_68 = NULL,u_68 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      t_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, t_68, u_68);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          t_68 = ATgetArgument(t, 0);
          t = t_68;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_68 = ATgetFirst((ATermList) t);
              p_68 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, o_68, (ATerm) ATmakeAppl(sym_LChoices_1, p_68));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_z_36;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              t_68 = ATgetArgument(t, 0);
              t = t_68;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_68 = ATgetFirst((ATermList) t);
                  p_68 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, o_68, (ATerm) ATmakeAppl(sym_Choices_1, p_68));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_z_36;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  t_68 = ATgetArgument(t, 0);
                  t = t_68;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_68 = ATgetFirst((ATermList) t);
                      p_68 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, o_68, (ATerm) ATmakeAppl(sym_Seqs_1, p_68));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_w_25;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      t_68 = ATgetArgument(t, 0);
                      u_68 = ATgetArgument(t, 1);
                      r_68 = ATgetArgument(t, 2);
                      q_68 = ATgetArgument(t, 3);
                      {
                        ATerm h_69 = NULL,i_69 = NULL;
                        t = u_68;
                        t = map1_1_0(p_13, t);
                        h_69 = t;
                        t = r_68;
                        t = map1_1_0(q_13, t);
                        i_69 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_68, h_69, i_69, q_68);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          t_68 = ATgetArgument(t, 0);
                          u_68 = ATgetArgument(t, 1);
                          r_68 = ATgetArgument(t, 2);
                          q_68 = ATgetArgument(t, 3);
                          {
                            ATerm v_38 = t;
                            int w_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm r_69 = NULL,s_69 = NULL;
                                t = r_68;
                                t = map1_1_0(t_13, t);
                                r_69 = t;
                                t = u_68;
                                t = map_1_0(u_13, t);
                                s_69 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, t_68, s_69, r_69, q_68);
                                ;
                                LocalPopChoice(w_38);
                              }
                            else
                              {
                                t = v_38;
                                {
                                  ATerm b_70 = NULL,c_70 = NULL;
                                  t = u_68;
                                  t = map1_1_0(c_14, t);
                                  b_70 = t;
                                  t = r_68;
                                  t = map_1_0(d_14, t);
                                  c_70 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, t_68, b_70, c_70, q_68);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              t_68 = ATgetArgument(t, 0);
                              u_68 = ATgetArgument(t, 1);
                              r_68 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, u_68, (ATerm) ATmakeAppl(sym_Op_2, term_j_24, (ATerm) ATinsert(ATinsert(ATempty, r_68), t_68)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  t_68 = ATgetArgument(t, 0);
                                  u_68 = ATgetArgument(t, 1);
                                  r_68 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, r_68)), t_68), (ATerm) ATmakeAppl(sym_Build_1, u_68)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      t_68 = ATgetArgument(t, 0);
                                      u_68 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, t_68, (ATerm) ATmakeAppl(sym_Match_1, u_68));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          t_68 = ATgetArgument(t, 0);
                                          u_68 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_68), u_68);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              t_68 = ATgetArgument(t, 0);
                                              u_68 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, u_68), t_68);
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
ATerm e_14 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm l_71 = NULL,m_71 = NULL,n_71 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      l_71 = ATgetArgument(t, 0);
      t = l_71;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_z_36;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          l_71 = ATgetArgument(t, 0);
          t = l_71;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_w_25;
        }
      else
        {
          ATerm x_38 = t;
          int y_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  l_71 = ATgetArgument(t, 0);
                  {
                    ATerm z_38 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(y_38);
              t = l_71;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_z_36;
            }
          else
            {
              t = x_38;
              {
                ATerm a_39 = t;
                int b_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm c_39 = ATgetArgument(t, 0);
                        m_71 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(b_39);
                    t = m_71;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_z_36;
                  }
                else
                  {
                    t = a_39;
                    {
                      ATerm d_39 = t;
                      int e_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm f_39 = ATgetArgument(t, 0);
                              m_71 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_39);
                          t = m_71;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_z_36;
                        }
                      else
                        {
                          t = d_39;
                          if(match_cons(t, sym_Some_1))
                            {
                              l_71 = ATgetArgument(t, 0);
                              t = l_71;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_z_36;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  l_71 = ATgetArgument(t, 0);
                                  t = l_71;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_z_36;
                                }
                              else
                                {
                                  ATerm g_39 = t;
                                  int h_39 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm i_39 = ATgetArgument(t, 0);
                                          m_71 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(h_39);
                                      t = m_71;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_z_36;
                                    }
                                  else
                                    {
                                      t = g_39;
                                      {
                                        ATerm j_39 = t;
                                        int k_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm l_39 = ATgetArgument(t, 0);
                                                m_71 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(k_39);
                                            t = m_71;
                                            t = fetch_1_0(e_14, t);
                                            t = term_z_36;
                                          }
                                        else
                                          {
                                            t = j_39;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                l_71 = ATgetArgument(t, 0);
                                                m_71 = ATgetArgument(t, 1);
                                                t = m_71;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = l_71;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm m_39 = t;
                                                        int n_39 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = m_71;
                                                            ;
                                                            LocalPopChoice(n_39);
                                                          }
                                                        else
                                                          {
                                                            t = m_39;
                                                            t = l_71;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = l_71;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = l_71;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = m_71;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    l_71 = ATgetArgument(t, 0);
                                                    m_71 = ATgetArgument(t, 1);
                                                    t = m_71;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = l_71;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm o_39 = t;
                                                            int p_39 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = m_71;
                                                                ;
                                                                LocalPopChoice(p_39);
                                                              }
                                                            else
                                                              {
                                                                t = o_39;
                                                                t = l_71;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = l_71;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = l_71;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = m_71;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        l_71 = ATgetArgument(t, 0);
                                                        t = l_71;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_z_36;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            l_71 = ATgetArgument(t, 0);
                                                            m_71 = ATgetArgument(t, 1);
                                                            n_71 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = n_71;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, l_71, m_71);
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
ATerm ElimId_0_0 (ATerm t)
{
  ATerm l_72 = NULL,n_72 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      n_72 = ATgetArgument(t, 0);
      t = n_72;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_w_25;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          n_72 = ATgetArgument(t, 0);
          t = n_72;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_z_36;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              n_72 = ATgetArgument(t, 0);
              l_72 = ATgetArgument(t, 1);
              t = l_72;
              if(match_cons(t, sym_Id_0))
                {
                  t = n_72;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm q_39 = t;
                      int r_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = l_72;
                          ;
                          LocalPopChoice(r_39);
                        }
                      else
                        {
                          t = q_39;
                          t = n_72;
                        }
                    }
                  else
                    {
                      t = n_72;
                    }
                }
              else
                {
                  t = n_72;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = l_72;
                }
            }
          else
            {
              ATerm s_39 = t;
              int t_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      n_72 = ATgetArgument(t, 0);
                      {
                        ATerm u_39 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_39);
                  t = n_72;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_w_25;
                }
              else
                {
                  t = s_39;
                  {
                    ATerm v_39 = t;
                    int w_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm x_39 = ATgetArgument(t, 0);
                            l_72 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_39);
                        t = l_72;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_w_25;
                      }
                    else
                      {
                        t = v_39;
                        {
                          ATerm y_39 = t;
                          int z_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_40 = ATgetArgument(t, 0);
                                  l_72 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_39);
                              t = l_72;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_w_25;
                            }
                          else
                            {
                              t = y_39;
                              if(match_cons(t, sym_All_1))
                                {
                                  n_72 = ATgetArgument(t, 0);
                                  t = n_72;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_w_25;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      n_72 = ATgetArgument(t, 0);
                                      t = n_72;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_w_25;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          n_72 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = n_72;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_w_25;
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
ATerm Simplify_0_0 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
      {
        ATerm d_40 = t;
        int e_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(e_40);
          }
        else
          {
            t = d_40;
            {
              ATerm f_40 = t;
              int g_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(g_40);
                }
              else
                {
                  t = f_40;
                  {
                    ATerm h_40 = t;
                    int i_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(i_40);
                      }
                    else
                      {
                        t = h_40;
                        {
                          ATerm j_40 = t;
                          int k_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(k_40);
                            }
                          else
                            {
                              t = j_40;
                              {
                                ATerm l_40 = t;
                                int m_40 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_72 = NULL,z_72 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        y_72 = ATgetArgument(t, 0);
                                        z_72 = ATgetArgument(t, 1);
                                        t = y_72;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_72;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            y_72 = ATgetArgument(t, 0);
                                            z_72 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = y_72;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_72;
                                      }
                                    ;
                                    LocalPopChoice(m_40);
                                  }
                                else
                                  {
                                    t = l_40;
                                    {
                                      ATerm n_40 = t;
                                      int o_40 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(o_40);
                                        }
                                      else
                                        {
                                          t = n_40;
                                          {
                                            ATerm p_40 = t;
                                            int q_40 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(q_40);
                                              }
                                            else
                                              {
                                                t = p_40;
                                                {
                                                  ATerm d_73 = NULL,e_73 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      d_73 = ATgetArgument(t, 0);
                                                      e_73 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_73;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = e_73;
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
ATerm repeat_1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm g_73 (ATerm t)
  {
    ATerm r_40 = t;
    int s_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_131(t);
        t = g_73(t);
        ;
        LocalPopChoice(s_40);
      }
    else
      {
        t = r_40;
      }
    return(t);
  }
  t = g_73(t);
  return(t);
}
ATerm downup_1_0 (ATerm f_118 (ATerm), ATerm t)
{
  t = f_118(t);
  {
    ATerm h_14 (ATerm t)
    {
      t = downup_1_0(f_118, t);
      return(t);
    }
    t = SRTS_all(h_14, t);
    t = f_118(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm s_124 (ATerm), ATerm t_124 (ATerm), ATerm t)
{
  ATerm h_73 (ATerm t)
  {
    ATerm t_40 = t;
    int u_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_124(t);
        ;
        LocalPopChoice(u_40);
      }
    else
      {
        t = t_40;
        t = r_124(t);
        t = _2_0(t_124, h_73, t);
        t = s_124(t);
      }
    return(t);
  }
  t = h_73(t);
  return(t);
}
ATerm i_14 (ATerm t)
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
ATerm l_14 (ATerm t)
{
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL,x_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
        {
          u_73 = ATgetFirst((ATermList) x_40);
          w_73 = (ATerm) ATgetNext((ATermList) x_40);
        }
      else
        _fail(t);
      {
        ATerm y_40 = ATgetArgument(t, 1);
        if(((ATgetType(y_40) == AT_LIST) && !(ATisEmpty(y_40))))
          {
            v_73 = ATgetFirst((ATermList) y_40);
            x_73 = (ATerm) ATgetNext((ATermList) y_40);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_73, v_73), (ATerm) ATmakeAppl(sym__2, w_73, x_73));
  return(t);
}
ATerm p_14 (ATerm t)
{
  ATerm y_73 = NULL,z_73 = NULL;
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      z_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_73), y_73);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL,p_73 = NULL;
  m_73 = t;
  {
    ATerm z_40 = t;
    int a_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_41 = ATgetArgument(t, 0);
            ATerm c_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(a_41);
        t = m_73;
      }
    else
      {
        t = z_40;
        {
          ATerm t_73 = NULL;
          if(match_cons(t, sym__3))
            {
              n_73 = ATgetArgument(t, 0);
              o_73 = ATgetArgument(t, 1);
              p_73 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, n_73, o_73);
          t = genzip_4_0(i_14, l_14, p_14, _id, t);
          t_73 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_73, p_73);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm y_143 (ATerm), ATerm z_143 (ATerm), ATerm t)
{
  ATerm a_74 = NULL,b_74 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      b_74 = ATgetArgument(t, 0);
      a_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_74;
  {
    ATerm q_14 (ATerm t)
    {
      ATerm e_20 = NULL;
      t = y_143(t);
      e_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_20, b_74);
      t = lookup_0_0(t);
      t = z_143(t);
      return(t);
    }
    t = alltd_1_0(q_14, t);
  }
  return(t);
}
ATerm v_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_41 = ATgetArgument(t, 0);
      if(((ATgetType(d_41) != AT_LIST) || !(ATisEmpty(d_41))))
        _fail(t);
      {
        ATerm e_41 = ATgetArgument(t, 1);
        if(((ATgetType(e_41) != AT_LIST) || !(ATisEmpty(e_41))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_41 = ATgetArgument(t, 0);
      if(((ATgetType(f_41) == AT_LIST) && !(ATisEmpty(f_41))))
        {
          m_74 = ATgetFirst((ATermList) f_41);
          o_74 = (ATerm) ATgetNext((ATermList) f_41);
        }
      else
        _fail(t);
      {
        ATerm g_41 = ATgetArgument(t, 1);
        if(((ATgetType(g_41) == AT_LIST) && !(ATisEmpty(g_41))))
          {
            n_74 = ATgetFirst((ATermList) g_41);
            p_74 = (ATerm) ATgetNext((ATermList) g_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_74, n_74), (ATerm) ATmakeAppl(sym__2, o_74, p_74));
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  if(match_cons(t, sym__2))
    {
      q_74 = ATgetArgument(t, 0);
      r_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_74), q_74);
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm t_74 = NULL,v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      y_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_74;
  {
    ATerm h_41 = t;
    int i_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm j_41 = ATgetArgument(t, 0);
            v_74 = ATgetArgument(t, 1);
            w_74 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(i_41);
        t = (ATerm) ATmakeAppl(sym_SDef_3, y_74, v_74, w_74);
      }
    else
      {
        t = h_41;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm k_41 = ATgetArgument(t, 0);
            v_74 = ATgetArgument(t, 1);
            w_74 = ATgetArgument(t, 2);
            x_74 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, y_74, v_74, w_74, x_74);
      }
  }
  return(t);
}
ATerm h_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_41 = ATgetArgument(t, 0);
      if(((ATgetType(l_41) != AT_LIST) || !(ATisEmpty(l_41))))
        _fail(t);
      {
        ATerm m_41 = ATgetArgument(t, 1);
        if(((ATgetType(m_41) != AT_LIST) || !(ATisEmpty(m_41))))
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
  ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_41 = ATgetArgument(t, 0);
      if(((ATgetType(n_41) == AT_LIST) && !(ATisEmpty(n_41))))
        {
          g_75 = ATgetFirst((ATermList) n_41);
          i_75 = (ATerm) ATgetNext((ATermList) n_41);
        }
      else
        _fail(t);
      {
        ATerm o_41 = ATgetArgument(t, 1);
        if(((ATgetType(o_41) == AT_LIST) && !(ATisEmpty(o_41))))
          {
            h_75 = ATgetFirst((ATermList) o_41);
            j_75 = (ATerm) ATgetNext((ATermList) o_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_75, h_75), (ATerm) ATmakeAppl(sym__2, i_75, j_75));
  return(t);
}
ATerm j_15 (ATerm t)
{
  ATerm k_75 = NULL,l_75 = NULL;
  if(match_cons(t, sym__2))
    {
      k_75 = ATgetArgument(t, 0);
      l_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_75), k_75);
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm n_75 = NULL,p_75 = NULL,q_75 = NULL;
  if(match_cons(t, sym__2))
    {
      n_75 = ATgetArgument(t, 0);
      q_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_75;
  {
    ATerm p_41 = t;
    int q_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm s_41 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_41);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_75);
      }
    else
      {
        t = p_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_41 = ATgetArgument(t, 0);
            p_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_75, p_75);
      }
  }
  return(t);
}
ATerm m_15 (ATerm t)
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
ATerm n_15 (ATerm t)
{
  ATerm u_75 = NULL,v_75 = NULL,w_75 = NULL,x_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_41 = ATgetArgument(t, 0);
      if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
        {
          u_75 = ATgetFirst((ATermList) w_41);
          w_75 = (ATerm) ATgetNext((ATermList) w_41);
        }
      else
        _fail(t);
      {
        ATerm x_41 = ATgetArgument(t, 1);
        if(((ATgetType(x_41) == AT_LIST) && !(ATisEmpty(x_41))))
          {
            v_75 = ATgetFirst((ATermList) x_41);
            x_75 = (ATerm) ATgetNext((ATermList) x_41);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, u_75, v_75), (ATerm) ATmakeAppl(sym__2, w_75, x_75));
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL;
  if(match_cons(t, sym__2))
    {
      y_75 = ATgetArgument(t, 0);
      z_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(z_75), y_75);
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm b_76 = NULL,d_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym__2))
    {
      b_76 = ATgetArgument(t, 0);
      e_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_76;
  {
    ATerm y_41 = t;
    int a_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm b_42 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(a_42);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, e_76);
      }
    else
      {
        t = y_41;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm c_42 = ATgetArgument(t, 0);
            d_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, e_76, d_76);
      }
  }
  return(t);
}
ATerm s_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_42 = ATgetArgument(t, 0);
      if(((ATgetType(d_42) != AT_LIST) || !(ATisEmpty(d_42))))
        _fail(t);
      {
        ATerm e_42 = ATgetArgument(t, 1);
        if(((ATgetType(e_42) != AT_LIST) || !(ATisEmpty(e_42))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm t_15 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL,l_76 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_42 = ATgetArgument(t, 0);
      if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
        {
          i_76 = ATgetFirst((ATermList) f_42);
          k_76 = (ATerm) ATgetNext((ATermList) f_42);
        }
      else
        _fail(t);
      {
        ATerm g_42 = ATgetArgument(t, 1);
        if(((ATgetType(g_42) == AT_LIST) && !(ATisEmpty(g_42))))
          {
            j_76 = ATgetFirst((ATermList) g_42);
            l_76 = (ATerm) ATgetNext((ATermList) g_42);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_76, j_76), (ATerm) ATmakeAppl(sym__2, k_76, l_76));
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm m_76 = NULL,n_76 = NULL;
  if(match_cons(t, sym__2))
    {
      m_76 = ATgetArgument(t, 0);
      n_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_76), m_76);
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm p_76 = NULL,r_76 = NULL,s_76 = NULL;
  if(match_cons(t, sym__2))
    {
      p_76 = ATgetArgument(t, 0);
      s_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_76;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_76);
      }
    else
      {
        t = h_42;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_42 = ATgetArgument(t, 0);
            r_76 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, s_76, r_76);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm n_147 (ATerm), ATerm t)
{
  ATerm m_42 = t;
  int n_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_14 (ATerm t)
      {
        ATerm i_20 = NULL,l_20 = NULL;
        i_20 = t;
        t = n_147(t);
        l_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_20, l_20);
        t = genzip_4_0(v_14, x_14, z_14, b_15, t);
        return(t);
      }
      t = Let_2_0(u_14, _id, t);
      ;
      LocalPopChoice(n_42);
    }
  else
    {
      t = m_42;
      {
        ATerm q_42 = t;
        int r_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 (ATerm t)
            {
              ATerm q_20 = NULL,s_20 = NULL;
              q_20 = t;
              t = n_147(t);
              s_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, q_20, s_20);
              t = genzip_4_0(h_15, i_15, j_15, k_15, t);
              return(t);
            }
            t = SDef_3_0(_id, g_15, _id, t);
            ;
            LocalPopChoice(r_42);
          }
        else
          {
            t = q_42;
            {
              ATerm u_42 = t;
              int v_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_15 (ATerm t)
                  {
                    ATerm v_20 = NULL,x_20 = NULL;
                    v_20 = t;
                    t = n_147(t);
                    x_20 = t;
                    t = (ATerm) ATmakeAppl(sym__2, v_20, x_20);
                    t = genzip_4_0(m_15, n_15, p_15, q_15, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, l_15, _id, _id, t);
                  ;
                  LocalPopChoice(v_42);
                }
              else
                {
                  t = u_42;
                  {
                    ATerm x_42 = t;
                    int y_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm r_15 (ATerm t)
                        {
                          ATerm a_21 = NULL,c_21 = NULL;
                          a_21 = t;
                          t = n_147(t);
                          c_21 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_21, c_21);
                          t = genzip_4_0(s_15, t_15, u_15, v_15, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, r_15, _id, _id, t);
                        ;
                        LocalPopChoice(y_42);
                      }
                    else
                      {
                        t = x_42;
                        {
                          ATerm w_15 (ATerm t)
                          {
                            ATerm w_76 = NULL;
                            t = n_147(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                w_76 = ATgetFirst((ATermList) t);
                                {
                                  ATerm b_43 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = w_76;
                            return(t);
                          }
                          t = Rec_2_0(w_15, _id, t);
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
ATerm Rec_2_0 (ATerm q_108 (ATerm), ATerm r_108 (ATerm), ATerm t)
{
  ATerm x_76 = NULL,y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,h_4 = NULL,i_4 = NULL;
  c_77 = t;
  if(match_cons(t, sym_Rec_2))
    {
      y_76 = ATgetArgument(t, 0);
      z_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_77);
  x_76 = t;
  t = y_76;
  t = q_108(t);
  a_77 = t;
  t = z_76;
  t = r_108(t);
  b_77 = t;
  i_4 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, a_77, b_77);
  h_4 = t;
  t = SSLsetAnnotations(h_4, x_76);
  return(t);
}
ATerm SDef_3_0 (ATerm i_110 (ATerm), ATerm j_110 (ATerm), ATerm k_110 (ATerm), ATerm t)
{
  ATerm f_77 = NULL,g_77 = NULL,h_77 = NULL,i_77 = NULL,j_77 = NULL,k_77 = NULL,l_77 = NULL,m_77 = NULL,p_4 = NULL,q_4 = NULL;
  m_77 = t;
  if(match_cons(t, sym_SDef_3))
    {
      g_77 = ATgetArgument(t, 0);
      h_77 = ATgetArgument(t, 1);
      i_77 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_77);
  f_77 = t;
  t = g_77;
  t = i_110(t);
  j_77 = t;
  t = h_77;
  t = j_110(t);
  k_77 = t;
  t = i_77;
  t = k_110(t);
  l_77 = t;
  q_4 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, j_77, k_77, l_77);
  p_4 = t;
  t = SSLsetAnnotations(p_4, f_77);
  return(t);
}
ATerm Let_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm p_77 = NULL,q_77 = NULL,r_77 = NULL,s_77 = NULL,t_77 = NULL,w_77 = NULL,v_4 = NULL,c_5 = NULL;
  w_77 = t;
  if(match_cons(t, sym_Let_2))
    {
      q_77 = ATgetArgument(t, 0);
      r_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_77);
  p_77 = t;
  t = q_77;
  t = t_107(t);
  s_77 = t;
  t = r_77;
  t = u_107(t);
  t_77 = t;
  c_5 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, s_77, t_77);
  v_4 = t;
  t = SSLsetAnnotations(v_4, p_77);
  return(t);
}
ATerm sboundin_3_0 (ATerm o_147 (ATerm), ATerm p_147 (ATerm), ATerm q_147 (ATerm), ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(o_147, o_147, t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      {
        ATerm f_43 = t;
        int g_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(q_147, q_147, o_147, t);
            ;
            LocalPopChoice(g_43);
          }
        else
          {
            t = f_43;
            {
              ATerm h_43 = t;
              int i_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(q_147, q_147, q_147, o_147, t);
                  ;
                  LocalPopChoice(i_43);
                }
              else
                {
                  t = h_43;
                  t = Rec_2_0(q_147, o_147, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_15 (ATerm t)
{
  ATerm c_78 = NULL;
  ATerm j_43 = t;
  int k_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_78 = ATgetArgument(t, 0);
          {
            ATerm l_43 = ATgetArgument(t, 1);
          }
          {
            ATerm m_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_43);
      t = c_78;
    }
  else
    {
      t = j_43;
      if(match_cons(t, sym_SDefT_4))
        {
          c_78 = ATgetArgument(t, 0);
          {
            ATerm n_43 = ATgetArgument(t, 1);
          }
          {
            ATerm o_43 = ATgetArgument(t, 2);
          }
          {
            ATerm p_43 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_78;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm a_78 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_78 = ATgetArgument(t, 0);
      {
        ATerm q_43 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_78;
  t = map_1_0(z_15, t);
  return(t);
}
ATerm SVar_1_0 (ATerm s_107 (ATerm), ATerm t)
{
  ATerm i_78 = NULL,j_78 = NULL,k_78 = NULL,l_78 = NULL,g_5 = NULL,x_5 = NULL;
  l_78 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_78);
  i_78 = t;
  t = j_78;
  t = s_107(t);
  k_78 = t;
  x_5 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_78);
  g_5 = t;
  t = SSLsetAnnotations(g_5, i_78);
  return(t);
}
ATerm DistBinding_2_0 (ATerm a_145 (ATerm), ATerm b_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL;
  if(match_cons(t, sym__3))
    {
      o_78 = ATgetArgument(t, 0);
      p_78 = ATgetArgument(t, 1);
      q_78 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_78;
  {
    ATerm d_16 (ATerm t)
    {
      ATerm r_78 = NULL;
      r_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_78, q_78);
      t = a_145(t);
      return(t);
    }
    ATerm g_16 (ATerm t)
    {
      ATerm s_78 = NULL;
      s_78 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_78, p_78);
      t = a_145(t);
      return(t);
    }
    t = b_145(d_16, g_16, _id, t);
  }
  return(t);
}
ATerm h_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_43 = ATgetArgument(t, 0);
      if(((ATgetType(r_43) != AT_LIST) || !(ATisEmpty(r_43))))
        _fail(t);
      {
        ATerm s_43 = ATgetArgument(t, 1);
        if(((ATgetType(s_43) != AT_LIST) || !(ATisEmpty(s_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_16 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL,d_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      if(((ATgetType(t_43) == AT_LIST) && !(ATisEmpty(t_43))))
        {
          a_79 = ATgetFirst((ATermList) t_43);
          c_79 = (ATerm) ATgetNext((ATermList) t_43);
        }
      else
        _fail(t);
      {
        ATerm u_43 = ATgetArgument(t, 1);
        if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
          {
            b_79 = ATgetFirst((ATermList) u_43);
            d_79 = (ATerm) ATgetNext((ATermList) u_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_79, b_79), (ATerm) ATmakeAppl(sym__2, c_79, d_79));
  return(t);
}
ATerm r_16 (ATerm t)
{
  ATerm e_79 = NULL,f_79 = NULL;
  if(match_cons(t, sym__2))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_79), e_79);
  return(t);
}
ATerm RnBinding_2_0 (ATerm u_144 (ATerm), ATerm v_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_78 = NULL,u_78 = NULL,v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL,z_78 = NULL;
  if(match_cons(t, sym__2))
    {
      t_78 = ATgetArgument(t, 0);
      u_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_78;
  t = u_144(t);
  v_78 = t;
  t = map_1_0(new_0_0, t);
  w_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_78, w_78);
  t = genzip_4_0(h_16, m_16, r_16, _id, t);
  x_78 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_78, u_78);
  t = conc_0_0(t);
  y_78 = t;
  t = t_78;
  {
    ATerm t_16 (ATerm t)
    {
      t = w_78;
      return(t);
    }
    t = v_144(t_16, t);
    z_78 = t;
    t = (ATerm) ATmakeAppl(sym__3, z_78, u_78, y_78);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm j_79 = NULL,k_79 = NULL,m_79 = NULL,n_79 = NULL,o_79 = NULL,p_79 = NULL;
  if(match_cons(t, sym__2))
    {
      m_79 = ATgetArgument(t, 0);
      n_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_79;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_79 = ATgetFirst((ATermList) t);
      p_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_79;
  if(match_cons(t, sym__2))
    {
      j_79 = ATgetArgument(t, 0);
      k_79 = ATgetArgument(t, 1);
      {
        ATerm v_43 = t;
        int w_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_79;
            if((m_79 != t))
              {
                _fail(t);
              }
            t = k_79;
            ;
            LocalPopChoice(w_43);
          }
        else
          {
            t = v_43;
            t = (ATerm) ATmakeAppl(sym__2, m_79, p_79);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, m_79, p_79);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm f_134 (ATerm), ATerm t)
{
  ATerm g_80 (ATerm t)
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_134(t);
        ;
        LocalPopChoice(y_43);
      }
    else
      {
        t = x_43;
        {
          ATerm k_21 = NULL,l_21 = NULL;
          ATerm u_16 (ATerm t)
          {
            ATerm m_21 = NULL;
            m_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, m_21, not_null(l_21));
            t = g_80(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((k_21 != NULL) && (k_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_21 = ATgetArgument(t, 0);
              if(((l_21 != NULL) && (l_21 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                l_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(k_21);
          t = SRTS_all(u_16, t);
        }
      }
    return(t);
  }
  t = g_80(t);
  return(t);
}
ATerm rename_4_0 (ATerm p_144 (ATerm (ATerm), ATerm), ATerm q_144 (ATerm), ATerm r_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm s_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm h_80 = NULL;
  h_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_80, (ATerm) ATempty);
  {
    ATerm i_80 (ATerm t)
    {
      ATerm v_16 (ATerm t)
      {
        ATerm z_43 = t;
        int a_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_21 = NULL,p_21 = NULL;
            ATerm w_16 (ATerm t)
            {
              ATerm r_21 = NULL;
              r_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_21, not_null(p_21));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((o_21 != NULL) && (o_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_21 = ATgetArgument(t, 0);
                if(((p_21 != NULL) && (p_21 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  p_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(o_21);
            t = p_144(w_16, t);
            ;
            LocalPopChoice(a_44);
          }
        else
          {
            t = z_43;
            t = RnBinding_2_0(q_144, s_144, t);
            t = DistBinding_2_0(i_80, r_144, t);
          }
        return(t);
      }
      t = env_alltd_1_0(v_16, t);
      return(t);
    }
    t = i_80(t);
  }
  return(t);
}
ATerm y_16 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm b_44 = ATgetArgument(t, 0);
      if(((ATgetType(b_44) != AT_LIST) || !(ATisEmpty(b_44))))
        _fail(t);
      {
        ATerm c_44 = ATgetArgument(t, 1);
        if(((ATgetType(c_44) != AT_LIST) || !(ATisEmpty(c_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_16 (ATerm t)
{
  ATerm s_80 = NULL,t_80 = NULL,u_80 = NULL,v_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_44 = ATgetArgument(t, 0);
      if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
        {
          s_80 = ATgetFirst((ATermList) d_44);
          u_80 = (ATerm) ATgetNext((ATermList) d_44);
        }
      else
        _fail(t);
      {
        ATerm e_44 = ATgetArgument(t, 1);
        if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
          {
            t_80 = ATgetFirst((ATermList) e_44);
            v_80 = (ATerm) ATgetNext((ATermList) e_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_80, t_80), (ATerm) ATmakeAppl(sym__2, u_80, v_80));
  return(t);
}
ATerm d_17 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL;
  if(match_cons(t, sym__2))
    {
      w_80 = ATgetArgument(t, 0);
      x_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(x_80), w_80);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm z_80 = NULL,b_81 = NULL,c_81 = NULL;
  if(match_cons(t, sym__2))
    {
      z_80 = ATgetArgument(t, 0);
      c_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_80;
  {
    ATerm f_44 = t;
    int g_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm h_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(g_44);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_81);
      }
    else
      {
        t = f_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_44 = ATgetArgument(t, 0);
            b_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, c_81, b_81);
      }
  }
  return(t);
}
ATerm g_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_44 = ATgetArgument(t, 0);
      if(((ATgetType(j_44) != AT_LIST) || !(ATisEmpty(j_44))))
        _fail(t);
      {
        ATerm k_44 = ATgetArgument(t, 1);
        if(((ATgetType(k_44) != AT_LIST) || !(ATisEmpty(k_44))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_17 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_44 = ATgetArgument(t, 0);
      if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
        {
          g_81 = ATgetFirst((ATermList) l_44);
          i_81 = (ATerm) ATgetNext((ATermList) l_44);
        }
      else
        _fail(t);
      {
        ATerm m_44 = ATgetArgument(t, 1);
        if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
          {
            h_81 = ATgetFirst((ATermList) m_44);
            j_81 = (ATerm) ATgetNext((ATermList) m_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_81, h_81), (ATerm) ATmakeAppl(sym__2, i_81, j_81));
  return(t);
}
ATerm i_17 (ATerm t)
{
  ATerm k_81 = NULL,l_81 = NULL;
  if(match_cons(t, sym__2))
    {
      k_81 = ATgetArgument(t, 0);
      l_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_81), k_81);
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm n_81 = NULL,p_81 = NULL,q_81 = NULL;
  if(match_cons(t, sym__2))
    {
      n_81 = ATgetArgument(t, 0);
      q_81 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_81;
  {
    ATerm n_44 = t;
    int o_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_44 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_44);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, q_81);
      }
    else
      {
        t = n_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_44 = ATgetArgument(t, 0);
            p_81 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, q_81, p_81);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm j_147 (ATerm), ATerm t)
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(j_147, _id, t);
      ;
      LocalPopChoice(s_44);
    }
  else
    {
      t = r_44;
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_16 (ATerm t)
            {
              ATerm y_21 = NULL,a_22 = NULL;
              y_21 = t;
              t = j_147(t);
              a_22 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_21, a_22);
              t = genzip_4_0(y_16, z_16, d_17, e_17, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, x_16, _id, t);
            ;
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            {
              ATerm f_17 (ATerm t)
              {
                ATerm e_22 = NULL,g_22 = NULL;
                e_22 = t;
                t = j_147(t);
                g_22 = t;
                t = (ATerm) ATmakeAppl(sym__2, e_22, g_22);
                t = genzip_4_0(g_17, h_17, i_17, j_17, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, f_17, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm a_107 (ATerm), ATerm t)
{
  ATerm u_81 = NULL,v_81 = NULL,w_81 = NULL,x_81 = NULL,z_5 = NULL,a_6 = NULL;
  x_81 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      v_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_81);
  u_81 = t;
  t = v_81;
  t = a_107(t);
  w_81 = t;
  a_6 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, w_81);
  z_5 = t;
  t = SSLsetAnnotations(z_5, u_81);
  return(t);
}
ATerm RDefT_4_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  ATerm a_82 = NULL,b_82 = NULL,c_82 = NULL,d_82 = NULL,e_82 = NULL,f_82 = NULL,g_82 = NULL,h_82 = NULL,i_82 = NULL,j_82 = NULL,b_6 = NULL,d_6 = NULL;
  j_82 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_82 = ATgetArgument(t, 0);
      c_82 = ATgetArgument(t, 1);
      d_82 = ATgetArgument(t, 2);
      e_82 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_82);
  a_82 = t;
  t = b_82;
  t = r_106(t);
  f_82 = t;
  t = c_82;
  t = s_106(t);
  g_82 = t;
  t = d_82;
  t = t_106(t);
  h_82 = t;
  t = e_82;
  t = u_106(t);
  i_82 = t;
  d_6 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, f_82, g_82, h_82, i_82);
  b_6 = t;
  t = SSLsetAnnotations(b_6, a_82);
  return(t);
}
ATerm SDefT_4_0 (ATerm l_110 (ATerm), ATerm m_110 (ATerm), ATerm n_110 (ATerm), ATerm o_110 (ATerm), ATerm t)
{
  ATerm m_82 = NULL,n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL,e_6 = NULL,h_6 = NULL;
  v_82 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_82 = ATgetArgument(t, 0);
      o_82 = ATgetArgument(t, 1);
      p_82 = ATgetArgument(t, 2);
      q_82 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_82);
  m_82 = t;
  t = n_82;
  t = l_110(t);
  r_82 = t;
  t = o_82;
  t = m_110(t);
  s_82 = t;
  t = p_82;
  t = n_110(t);
  t_82 = t;
  t = q_82;
  t = o_110(t);
  u_82 = t;
  h_6 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, r_82, s_82, t_82, u_82);
  e_6 = t;
  t = SSLsetAnnotations(e_6, m_82);
  return(t);
}
ATerm Scope_2_0 (ATerm d_108 (ATerm), ATerm e_108 (ATerm), ATerm t)
{
  ATerm y_82 = NULL,z_82 = NULL,f_83 = NULL,g_83 = NULL,h_83 = NULL,i_83 = NULL,l_6 = NULL,o_6 = NULL;
  i_83 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_82 = ATgetArgument(t, 0);
      f_83 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_83);
  y_82 = t;
  t = z_82;
  t = d_108(t);
  g_83 = t;
  t = f_83;
  t = e_108(t);
  h_83 = t;
  o_6 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, g_83, h_83);
  l_6 = t;
  t = SSLsetAnnotations(l_6, y_82);
  return(t);
}
ATerm tboundin_3_0 (ATerm k_147 (ATerm), ATerm l_147 (ATerm), ATerm m_147 (ATerm), ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(m_147, k_147, t);
      ;
      LocalPopChoice(w_44);
    }
  else
    {
      t = v_44;
      {
        ATerm x_44 = t;
        int y_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(m_147, m_147, m_147, k_147, t);
            ;
            LocalPopChoice(y_44);
          }
        else
          {
            t = x_44;
            {
              ATerm z_44 = t;
              int a_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(m_147, m_147, m_147, k_147, t);
                  ;
                  LocalPopChoice(a_45);
                }
              else
                {
                  t = z_44;
                  t = DynamicRules_1_0(k_147, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm o_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_83);
  return(t);
}
ATerm l_17 (ATerm t)
{
  ATerm b_45 = t;
  int c_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_45);
    }
  else
    {
      t = b_45;
      {
        ATerm t_83 = NULL,y_83 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_83 = ATgetArgument(t, 0);
            t = t_83;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm d_45 = t;
            int e_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm f_45 = ATgetArgument(t, 0);
                    ATerm g_45 = ATgetArgument(t, 1);
                    y_83 = ATgetArgument(t, 2);
                    {
                      ATerm h_45 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_45);
                t = y_83;
                t = map_1_0(m_17, t);
              }
            else
              {
                t = d_45;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm i_45 = ATgetArgument(t, 0);
                    ATerm j_45 = ATgetArgument(t, 1);
                    y_83 = ATgetArgument(t, 2);
                    {
                      ATerm k_45 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = y_83;
                t = map_1_0(n_17, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_17 (ATerm t)
{
  ATerm u_84 = NULL;
  ATerm l_45 = t;
  int m_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_84 = ATgetArgument(t, 0);
          {
            ATerm n_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_45);
      t = u_84;
    }
  else
    {
      t = l_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_84;
    }
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm a_85 = NULL;
  ATerm o_45 = t;
  int p_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_85 = ATgetArgument(t, 0);
          {
            ATerm q_45 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_45);
      t = a_85;
    }
  else
    {
      t = o_45;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_85;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(k_17, l_17, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm r_126 (ATerm), ATerm t)
{
  ATerm d_85 = NULL,e_85 = NULL;
  if(match_cons(t, sym__2))
    {
      d_85 = ATgetArgument(t, 0);
      e_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_85;
  {
    ATerm f_85 (ATerm t)
    {
      ATerm r_45 = t;
      int s_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_85;
          ;
          LocalPopChoice(s_45);
        }
      else
        {
          t = r_45;
          {
            ATerm t_45 = t;
            int u_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_22 = NULL,k_22 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    j_22 = ATgetFirst((ATermList) t);
                    k_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = e_85;
                {
                  ATerm o_17 (ATerm t)
                  {
                    ATerm l_22 = NULL;
                    l_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, j_22, l_22);
                    t = r_126(t);
                    return(t);
                  }
                  t = fetch_1_0(o_17, t);
                  t = k_22;
                  t = f_85(t);
                }
                ;
                LocalPopChoice(u_45);
              }
            else
              {
                t = t_45;
                t = Cons_2_0(_id, f_85, t);
              }
          }
        }
      return(t);
    }
    t = f_85(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm h_129 (ATerm), ATerm i_129 (ATerm), ATerm j_129 (ATerm), ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = h_129(t);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm i_85 = NULL,j_85 = NULL,m_85 = NULL,n_85 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_85 = ATgetFirst((ATermList) t);
            j_85 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_85;
        t = j_129(t);
        m_85 = t;
        t = j_85;
        t = foldr_3_0(h_129, i_129, j_129, t);
        n_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_85, n_85);
        t = i_129(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm m_126 (ATerm), ATerm t)
{
  ATerm t_85 = NULL,u_85 = NULL;
  if(match_cons(t, sym__2))
    {
      t_85 = ATgetArgument(t, 0);
      u_85 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_85;
  {
    ATerm v_85 (ATerm t)
    {
      ATerm x_45 = t;
      int y_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(y_45);
        }
      else
        {
          t = x_45;
          {
            ATerm z_45 = t;
            int a_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_22 = NULL,p_22 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    o_22 = ATgetFirst((ATermList) t);
                    p_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_85;
                {
                  ATerm p_17 (ATerm t)
                  {
                    ATerm r_22 = NULL;
                    r_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_22, r_22);
                    t = m_126(t);
                    return(t);
                  }
                  t = fetch_1_0(p_17, t);
                  t = p_22;
                  t = v_85(t);
                }
                ;
                LocalPopChoice(a_46);
              }
            else
              {
                t = z_45;
                t = Cons_2_0(_id, v_85, t);
              }
          }
        }
      return(t);
    }
    t = v_85(t);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm d_123 (ATerm), ATerm t)
{
  ATerm j_86 (ATerm t)
  {
    ATerm b_46 = t;
    int c_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_86, t);
        ;
        LocalPopChoice(c_46);
      }
    else
      {
        t = b_46;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_123(t);
      }
    return(t);
  }
  t = j_86(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
      {
        ATerm y_85 = NULL,a_86 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_85 = ATgetFirst((ATermList) t);
            a_86 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_85;
        {
          ATerm q_17 (ATerm t)
          {
            t = a_86;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(q_17, t);
        }
      }
    }
  return(t);
}
ATerm e_87 (ATerm w_86, ATerm t)
{
  ATerm y_86 = NULL;
  t = SSL_explode_term(w_86);
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_46) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      y_86 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_86;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_86 = NULL,a_87 = NULL,b_87 = NULL;
  b_87 = t;
  if(match_cons(t, sym__2))
    {
      z_86 = ATgetArgument(t, 0);
      a_87 = ATgetArgument(t, 1);
      {
        ATerm g_46 = t;
        int h_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_17 (ATerm t)
            {
              t = a_87;
              return(t);
            }
            t = z_86;
            t = at_end_1_0(r_17, t);
            ;
            LocalPopChoice(h_46);
          }
        else
          {
            t = g_46;
            t = e_87(b_87, t);
          }
      }
    }
  else
    {
      t = e_87(b_87, t);
    }
  return(t);
}
ATerm s_17 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      if(((ATgetType(i_46) != AT_LIST) || !(ATisEmpty(i_46))))
        _fail(t);
      {
        ATerm j_46 = ATgetArgument(t, 1);
        if(((ATgetType(j_46) != AT_LIST) || !(ATisEmpty(j_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm j_88 = NULL,k_88 = NULL,l_88 = NULL,m_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_46 = ATgetArgument(t, 0);
      if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
        {
          j_88 = ATgetFirst((ATermList) k_46);
          l_88 = (ATerm) ATgetNext((ATermList) k_46);
        }
      else
        _fail(t);
      {
        ATerm l_46 = ATgetArgument(t, 1);
        if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
          {
            k_88 = ATgetFirst((ATermList) l_46);
            m_88 = (ATerm) ATgetNext((ATermList) l_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, j_88, k_88), (ATerm) ATmakeAppl(sym__2, l_88, m_88));
  return(t);
}
ATerm x_17 (ATerm t)
{
  ATerm n_88 = NULL,o_88 = NULL;
  if(match_cons(t, sym__2))
    {
      n_88 = ATgetArgument(t, 0);
      o_88 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_88), n_88);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm f_87 = NULL,g_87 = NULL,h_87 = NULL,i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_46 = ATgetFirst((ATermList) t);
      if(match_cons(m_46, sym__2))
        {
          f_87 = ATgetArgument(m_46, 0);
          g_87 = ATgetArgument(m_46, 1);
        }
      else
        _fail(t);
      h_87 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(g_87);
  if(match_cons(t, sym__2))
    {
      i_87 = ATgetArgument(t, 0);
      j_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(f_87);
  if(match_cons(t, sym__2))
    {
      if((i_87 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      k_87 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_87, j_87);
  t = genzip_4_0(s_17, w_17, x_17, _id, t);
  l_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_87, h_87);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm y_131 (ATerm), ATerm z_131 (ATerm), ATerm t)
{
  ATerm p_88 (ATerm t)
  {
    ATerm n_46 = t;
    int o_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_131(t);
        ;
        LocalPopChoice(o_46);
      }
    else
      {
        t = n_46;
        t = z_131(t);
        t = p_88(t);
      }
    return(t);
  }
  t = p_88(t);
  return(t);
}
ATerm for_3_0 (ATerm b_132 (ATerm), ATerm c_132 (ATerm), ATerm d_132 (ATerm), ATerm t)
{
  t = b_132(t);
  t = while_not_2_0(c_132, d_132, t);
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm u_88 = NULL;
  u_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, u_88);
  return(t);
}
ATerm z_17 (ATerm t)
{
  t = _2_0(_id, b_18, t);
  return(t);
}
ATerm a_18 (ATerm t)
{
  ATerm p_46 = t;
  int q_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, c_18, t);
      ;
      LocalPopChoice(q_46);
    }
  else
    {
      t = p_46;
      {
        ATerm z_89 = NULL,a_90 = NULL,b_90 = NULL,j_92 = NULL;
        if(match_cons(t, sym__2))
          {
            z_89 = ATgetArgument(t, 0);
            a_90 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = a_90;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_90 = ATgetFirst((ATermList) t);
            j_92 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(z_89), b_90), j_92);
      }
    }
  return(t);
}
ATerm b_18 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm c_18 (ATerm t)
{
  ATerm r_46 = t;
  int s_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_89 = NULL,o_89 = NULL,p_89 = NULL,q_89 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_89 = ATgetFirst((ATermList) t);
          q_89 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_89;
      if(match_cons(t, sym__2))
        {
          o_89 = ATgetArgument(t, 0);
          p_89 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_89;
      if((o_89 != t))
        {
          _fail(t);
        }
      t = q_89;
      ;
      LocalPopChoice(s_46);
    }
  else
    {
      t = r_46;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm d_18 (ATerm t)
{
  ATerm v_92 = NULL;
  if(match_cons(t, sym__2))
    {
      v_92 = ATgetArgument(t, 0);
      if((v_92 != ATgetArgument(t, 1)))
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
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(y_17, z_17, a_18, t);
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      t = diff_1_0(d_18, t);
    }
  return(t);
}
ATerm f_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = union_1_0(l_18, t);
  return(t);
}
ATerm l_18 (ATerm t)
{
  ATerm i_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      if((i_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm m_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_18 (ATerm t)
{
  t = union_1_0(o_18, t);
  return(t);
}
ATerm o_18 (ATerm t)
{
  ATerm o_23 = NULL;
  if(match_cons(t, sym__2))
    {
      o_23 = ATgetArgument(t, 0);
      if((o_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm f_146 (ATerm), ATerm g_146 (ATerm), ATerm h_146 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_93 (ATerm t)
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_146(t);
        ;
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        {
          ATerm x_46 = t;
          int y_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_92 = NULL,y_92 = NULL,b_23 = NULL,c_23 = NULL;
              w_92 = t;
              t = g_146(t);
              y_92 = t;
              t = w_92;
              {
                ATerm e_18 (ATerm t)
                {
                  ATerm x_22 = NULL;
                  t = b_93(t);
                  x_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_22, y_92);
                  t = diff_0_0(t);
                  return(t);
                }
                t = h_146(e_18, b_93, f_18, t);
                b_23 = t;
                t = SSL_explode_term(b_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm z_46 = ATgetArgument(t, 0);
                    c_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_23;
                t = foldr_3_0(g_18, h_18, _id, t);
              }
              ;
              LocalPopChoice(y_46);
            }
          else
            {
              t = x_46;
              {
                ATerm j_23 = NULL,k_23 = NULL;
                j_23 = t;
                t = SSL_explode_term(j_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_47 = ATgetArgument(t, 0);
                    k_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = k_23;
                t = foldr_3_0(m_18, n_18, b_93, t);
              }
            }
        }
      }
    return(t);
  }
  t = b_93(t);
  return(t);
}
ATerm p_18 (ATerm t)
{
  ATerm q_93 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      q_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, q_93);
  return(t);
}
ATerm q_18 (ATerm t)
{
  ATerm b_47 = t;
  int c_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_47);
    }
  else
    {
      t = b_47;
      {
        ATerm t_93 = NULL,v_93 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            t_93 = ATgetArgument(t, 0);
            t = t_93;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm d_47 = t;
            int e_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm f_47 = ATgetArgument(t, 0);
                    ATerm g_47 = ATgetArgument(t, 1);
                    v_93 = ATgetArgument(t, 2);
                    {
                      ATerm h_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(e_47);
                t = v_93;
                t = map_1_0(r_18, t);
              }
            else
              {
                t = d_47;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm i_47 = ATgetArgument(t, 0);
                    ATerm j_47 = ATgetArgument(t, 1);
                    v_93 = ATgetArgument(t, 2);
                    {
                      ATerm k_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = v_93;
                t = map_1_0(s_18, t);
              }
          }
      }
    }
  return(t);
}
ATerm r_18 (ATerm t)
{
  ATerm b_94 = NULL;
  ATerm l_47 = t;
  int m_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          b_94 = ATgetArgument(t, 0);
          {
            ATerm n_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_47);
      t = b_94;
    }
  else
    {
      t = l_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = b_94;
    }
  return(t);
}
ATerm s_18 (ATerm t)
{
  ATerm h_94 = NULL;
  ATerm o_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_94 = ATgetArgument(t, 0);
          {
            ATerm b_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_48);
      t = h_94;
    }
  else
    {
      t = o_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_94 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_94;
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm h_93 = NULL,l_93 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      l_93 = ATgetArgument(t, 0);
      t = l_93;
      if(match_cons(t, sym_Rule_3))
        {
          h_93 = ATgetArgument(t, 0);
          {
            ATerm c_48 = ATgetArgument(t, 1);
          }
          {
            ATerm e_48 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = h_93;
      t = free_vars_3_0(p_18, q_18, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          l_93 = ATgetArgument(t, 0);
          {
            ATerm f_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = l_93;
    }
  return(t);
}
ATerm Var_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,x_6 = NULL,g_7 = NULL;
  o_94 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_94);
  l_94 = t;
  t = m_94;
  t = j_104(t);
  n_94 = t;
  g_7 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, n_94);
  x_6 = t;
  t = SSLsetAnnotations(x_6, l_94);
  return(t);
}
ATerm u_18 (ATerm t)
{
  ATerm g_48 = t;
  int i_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(i_48);
    }
  else
    {
      t = g_48;
      {
        ATerm b_95 = NULL;
        ATerm j_48 = t;
        int l_48 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm m_48 = ATgetArgument(t, 0);
                ATerm n_48 = ATgetArgument(t, 1);
                b_95 = ATgetArgument(t, 2);
                {
                  ATerm p_48 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(l_48);
            t = b_95;
            t = map_1_0(v_18, t);
          }
        else
          {
            t = j_48;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm q_48 = ATgetArgument(t, 0);
                ATerm r_48 = ATgetArgument(t, 1);
                b_95 = ATgetArgument(t, 2);
                {
                  ATerm t_48 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = b_95;
            t = map_1_0(w_18, t);
          }
      }
    }
  return(t);
}
ATerm v_18 (ATerm t)
{
  ATerm g_95 = NULL;
  ATerm u_48 = t;
  int v_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_95 = ATgetArgument(t, 0);
          {
            ATerm y_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_48);
      t = g_95;
    }
  else
    {
      t = u_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_95;
    }
  return(t);
}
ATerm w_18 (ATerm t)
{
  ATerm m_95 = NULL;
  ATerm z_48 = t;
  int a_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          m_95 = ATgetArgument(t, 0);
          {
            ATerm b_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_49);
      t = m_95;
    }
  else
    {
      t = z_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          m_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = m_95;
    }
  return(t);
}
ATerm x_18 (ATerm t)
{
  ATerm c_49 = t;
  int d_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(d_49);
    }
  else
    {
      t = c_49;
      {
        ATerm q_95 = NULL,r_95 = NULL;
        ATerm i_49 = t;
        int j_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm k_49 = ATgetArgument(t, 0);
                r_95 = ATgetArgument(t, 1);
                {
                  ATerm n_49 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(j_49);
            t = r_95;
            t = map_1_0(z_18, t);
          }
        else
          {
            t = i_49;
            {
              ATerm o_49 = t;
              int p_49 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      q_95 = ATgetArgument(t, 0);
                      {
                        ATerm s_49 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_49);
                  t = (ATerm) ATinsert(ATempty, q_95);
                }
              else
                {
                  t = o_49;
                  {
                    ATerm t_49 = t;
                    int u_49 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm w_49 = ATgetArgument(t, 0);
                            r_95 = ATgetArgument(t, 1);
                            {
                              ATerm b_50 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm c_50 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_49);
                        t = r_95;
                        t = map_1_0(a_19, t);
                      }
                    else
                      {
                        t = t_49;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm j_50 = ATgetArgument(t, 0);
                            r_95 = ATgetArgument(t, 1);
                            {
                              ATerm k_50 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm p_50 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = r_95;
                        t = map_1_0(b_19, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_18 (ATerm t)
{
  ATerm x_95 = NULL;
  ATerm q_50 = t;
  int x_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          x_95 = ATgetArgument(t, 0);
          {
            ATerm y_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_50);
      t = x_95;
    }
  else
    {
      t = q_50;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          x_95 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = x_95;
    }
  return(t);
}
ATerm a_19 (ATerm t)
{
  ATerm e_96 = NULL;
  ATerm f_51 = t;
  int g_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          e_96 = ATgetArgument(t, 0);
          {
            ATerm h_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_51);
      t = e_96;
    }
  else
    {
      t = f_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          e_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_96;
    }
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm k_96 = NULL;
  ATerm k_51 = t;
  int l_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_96 = ATgetArgument(t, 0);
          {
            ATerm m_51 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_51);
      t = k_96;
    }
  else
    {
      t = k_51;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_96 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_96;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, u_18, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, x_18, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm e_19 (ATerm t)
{
  ATerm j_97 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_97 = ATgetArgument(t, 0);
      {
        ATerm n_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_97;
  return(t);
}
ATerm h_19 (ATerm t)
{
  ATerm k_97 = NULL,m_97 = NULL,n_97 = NULL,o_97 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      m_97 = ATgetArgument(t, 0);
      o_97 = ATgetArgument(t, 1);
      k_97 = ATgetArgument(t, 2);
      t = m_97;
      if(match_cons(t, sym_SVar_1))
        {
          n_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = k_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_97;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          m_97 = ATgetArgument(t, 0);
          o_97 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_97;
      if(match_cons(t, sym_SVar_1))
        {
          n_97 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_97;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = n_97;
    }
  return(t);
}
ATerm i_19 (ATerm t)
{
  ATerm r_97 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      r_97 = ATgetArgument(t, 0);
      {
        ATerm o_51 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = r_97;
  return(t);
}
ATerm j_19 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm p_51 = ATgetArgument(t, 0);
      if(((ATgetType(p_51) != AT_LIST) || !(ATisEmpty(p_51))))
        _fail(t);
      {
        ATerm q_51 = ATgetArgument(t, 1);
        if(((ATgetType(q_51) != AT_LIST) || !(ATisEmpty(q_51))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_19 (ATerm t)
{
  ATerm t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_51 = ATgetArgument(t, 0);
      if(((ATgetType(r_51) == AT_LIST) && !(ATisEmpty(r_51))))
        {
          t_97 = ATgetFirst((ATermList) r_51);
          v_97 = (ATerm) ATgetNext((ATermList) r_51);
        }
      else
        _fail(t);
      {
        ATerm s_51 = ATgetArgument(t, 1);
        if(((ATgetType(s_51) == AT_LIST) && !(ATisEmpty(s_51))))
          {
            u_97 = ATgetFirst((ATermList) s_51);
            w_97 = (ATerm) ATgetNext((ATermList) s_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, t_97, u_97), (ATerm) ATmakeAppl(sym__2, v_97, w_97));
  return(t);
}
ATerm l_19 (ATerm t)
{
  ATerm x_97 = NULL,y_97 = NULL;
  if(match_cons(t, sym__2))
    {
      x_97 = ATgetArgument(t, 0);
      y_97 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_97), x_97);
  return(t);
}
ATerm m_19 (ATerm t)
{
  ATerm z_97 = NULL,a_98 = NULL;
  if(match_cons(t, sym__2))
    {
      z_97 = ATgetArgument(t, 0);
      a_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_97), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_98)));
  return(t);
}
ATerm n_19 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL,a_97 = NULL,b_97 = NULL,c_97 = NULL,d_97 = NULL,e_97 = NULL,f_97 = NULL,g_97 = NULL,h_97 = NULL,i_97 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm u_51 = ATgetArgument(t, 0);
      if(match_cons(u_51, sym_SVar_1))
        {
          w_96 = ATgetArgument(u_51, 0);
        }
      else
        _fail(t);
      x_96 = ATgetArgument(t, 1);
      y_96 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, w_96), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  p_23 = t;
  t = term_v_51;
  q_23 = t;
  t = SSL_table_get(q_23, p_23);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_23 = ATgetFirst((ATermList) t);
      {
        ATerm w_51 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_23;
  if(match_cons(t, sym_Defined_4))
    {
      ATerm x_51 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_51) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      a_97 = ATgetArgument(t, 1);
      b_97 = ATgetArgument(t, 2);
      c_97 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, w_96, a_97, c_97, b_97);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((w_96 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      d_97 = ATgetArgument(t, 1);
      {
        ATerm z_51 = ATgetArgument(t, 2);
      }
      e_97 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = d_97;
  t = map_1_0(e_19, t);
  f_97 = t;
  t = (ATerm) ATmakeAppl(sym__3, f_97, x_96, e_97);
  t = substitute_2_0(h_19, _id, t);
  g_97 = t;
  t = c_97;
  t = map_1_0(i_19, t);
  h_97 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_96, h_97);
  t = genzip_4_0(j_19, k_19, l_19, m_19, t);
  i_97 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, h_97, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_97), g_97));
  t = downup_1_0(n_19, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm o_19 (ATerm t)
{
  ATerm j_98 = NULL,k_98 = NULL,l_98 = NULL;
  j_98 = t;
  t = term_x_23;
  k_98 = t;
  t = (ATerm) ATinsert(ATempty, term_a_52);
  l_98 = t;
  t = SSL_printnl(k_98, l_98);
  t = j_98;
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = debug_1_0(q_19, t);
  return(t);
}
ATerm q_19 (ATerm t)
{
  t = term_f_52;
  return(t);
}
ATerm r_19 (ATerm t)
{
  ATerm v_98 = NULL,w_98 = NULL,x_98 = NULL;
  v_98 = t;
  t = term_x_23;
  w_98 = t;
  t = (ATerm) ATinsert(ATempty, term_r_52);
  x_98 = t;
  t = SSL_printnl(w_98, x_98);
  t = v_98;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm h_98 = NULL,i_98 = NULL;
  h_98 = t;
  t = new_0_0(t);
  i_98 = t;
  {
    ATerm s_52 = t;
    int t_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_52, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_98), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(t_52);
      }
    else
      {
        t = s_52;
        t = if_verbose2_1_0(o_19, t);
        _fail(t);
      }
    {
      ATerm w_52 = t;
      int x_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_98 = NULL,p_98 = NULL,q_98 = NULL,r_98 = NULL,s_98 = NULL,t_98 = NULL,u_98 = NULL;
          m_98 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              p_98 = ATgetArgument(t, 0);
              u_98 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_98;
          if(match_cons(t, sym_CallT_3))
            {
              q_98 = ATgetArgument(t, 0);
              s_98 = ATgetArgument(t, 1);
              t_98 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = q_98;
          if(match_cons(t, sym_SVar_1))
            {
              r_98 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_98;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_98;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_98;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = r_98;
          if((i_98 != t))
            {
              _fail(t);
            }
          t = m_98;
          ;
          LocalPopChoice(x_52);
        }
      else
        {
          t = w_52;
          t = if_verbose1_1_0(p_19, t);
          _fail(t);
        }
      t = if_verbose2_1_0(r_19, t);
      t = h_98;
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
ATerm assert_1_0 (ATerm q_130 (ATerm), ATerm t)
{
  ATerm y_98 = NULL,z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL;
  if(match_cons(t, sym__2))
    {
      y_98 = ATgetArgument(t, 0);
      z_98 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_130(t);
  a_99 = t;
  t = (ATerm) ATmakeAppl(sym__3, a_99, y_98, z_98);
  t = table_push_0_0(t);
  {
    ATerm y_52 = t;
    int z_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_99 = NULL;
        t = term_o_30;
        f_99 = t;
        t = SSL_table_get(a_99, f_99);
        ;
        LocalPopChoice(z_52);
      }
    else
      {
        t = y_52;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_99 = ATgetFirst((ATermList) t);
        c_99 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_o_30;
    d_99 = t;
    t = (ATerm) ATinsert(CheckATermList(c_99), (ATerm) ATinsert(CheckATermList(b_99), y_98));
    e_99 = t;
    t = SSL_table_put(a_99, d_99, e_99);
    t = (ATerm) ATmakeAppl(sym__2, y_98, z_98);
  }
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = term_v_51;
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm g_99 = NULL,h_99 = NULL,i_99 = NULL,j_99 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      g_99 = ATgetArgument(t, 0);
      h_99 = ATgetArgument(t, 1);
      i_99 = ATgetArgument(t, 2);
      j_99 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, g_99), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_a_53, h_99, j_99, i_99));
  t = assert_1_0(s_19, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, g_99, h_99, i_99, j_99);
  return(t);
}
ATerm map_1_0 (ATerm n_122 (ATerm), ATerm t)
{
  ATerm k_99 (ATerm t)
  {
    ATerm b_53 = t;
    int c_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(c_53);
      }
    else
      {
        t = b_53;
        t = Cons_2_0(n_122, k_99, t);
      }
    return(t);
  }
  t = k_99(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm g_103 (ATerm), ATerm t)
{
  ATerm l_99 = NULL,m_99 = NULL,n_99 = NULL,o_99 = NULL,o_7 = NULL,p_7 = NULL;
  o_99 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      m_99 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_99);
  l_99 = t;
  t = m_99;
  t = g_103(t);
  n_99 = t;
  p_7 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, n_99);
  o_7 = t;
  t = SSLsetAnnotations(o_7, l_99);
  return(t);
}
ATerm Cons_2_0 (ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm r_99 = NULL,s_99 = NULL,t_99 = NULL,u_99 = NULL,v_99 = NULL,w_99 = NULL,q_7 = NULL,r_7 = NULL;
  w_99 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_99 = ATgetFirst((ATermList) t);
      t_99 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_99);
  r_99 = t;
  t = s_99;
  t = c_103(t);
  u_99 = t;
  t = t_99;
  t = d_103(t);
  v_99 = t;
  r_7 = t;
  t = (ATerm) ATinsert(CheckATermList(v_99), u_99);
  q_7 = t;
  t = SSLsetAnnotations(q_7, r_99);
  return(t);
}
ATerm Signature_1_0 (ATerm h_103 (ATerm), ATerm t)
{
  ATerm z_99 = NULL,a_100 = NULL,b_100 = NULL,c_100 = NULL,t_7 = NULL,u_7 = NULL;
  c_100 = t;
  if(match_cons(t, sym_Signature_1))
    {
      a_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_100);
  z_99 = t;
  t = a_100;
  t = h_103(t);
  b_100 = t;
  u_7 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, b_100);
  t_7 = t;
  t = SSLsetAnnotations(t_7, z_99);
  return(t);
}
ATerm Specification_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  ATerm f_100 = NULL,g_100 = NULL,h_100 = NULL,i_100 = NULL,v_7 = NULL,w_7 = NULL;
  i_100 = t;
  if(match_cons(t, sym_Specification_1))
    {
      g_100 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_100);
  f_100 = t;
  t = g_100;
  t = l_103(t);
  h_100 = t;
  w_7 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_100);
  v_7 = t;
  t = SSLsetAnnotations(v_7, f_100);
  return(t);
}
ATerm _2_0 (ATerm n_98 (ATerm), ATerm o_98 (ATerm), ATerm t)
{
  ATerm l_100 = NULL,m_100 = NULL,n_100 = NULL,o_100 = NULL,p_100 = NULL,q_100 = NULL,x_7 = NULL,y_7 = NULL;
  q_100 = t;
  if(match_cons(t, sym__2))
    {
      m_100 = ATgetArgument(t, 0);
      n_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_100);
  l_100 = t;
  t = m_100;
  t = n_98(t);
  o_100 = t;
  t = n_100;
  t = o_98(t);
  p_100 = t;
  y_7 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_100, p_100);
  x_7 = t;
  t = SSLsetAnnotations(x_7, l_100);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm g_138 (ATerm), ATerm t)
{
  ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
  if(match_cons(t, sym__2))
    {
      t_100 = ATgetArgument(t, 0);
      u_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_100, term_d_53);
  t = open_stream_0_0(t);
  v_100 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_100, u_100);
  t = g_138(t);
  t = fclose_0_0(t);
  t = u_100;
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = fetch_1_0(y_19, t);
  return(t);
}
ATerm x_19 (ATerm t)
{
  t = WriteToFile_1_0(z_19, t);
  return(t);
}
ATerm y_19 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm z_19 (ATerm t)
{
  ATerm y_100 = NULL,z_100 = NULL,a_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_53 = ATgetArgument(t, 0);
      if(match_cons(e_53, sym_Stream_1))
        {
          y_100 = ATgetArgument(e_53, 0);
        }
      else
        _fail(t);
      z_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(y_100, z_100);
  a_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_101);
  return(t);
}
ATerm a_20 (ATerm t)
{
  t = WriteToFile_1_0(b_20, t);
  return(t);
}
ATerm b_20 (ATerm t)
{
  ATerm b_101 = NULL,c_101 = NULL,d_101 = NULL,e_101 = NULL,f_101 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_53 = ATgetArgument(t, 0);
      if(match_cons(f_53, sym_Stream_1))
        {
          b_101 = ATgetArgument(f_53, 0);
        }
      else
        _fail(t);
      c_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(b_101, c_101);
  d_101 = t;
  t = term_g_53;
  e_101 = t;
  t = SSL_fputc(e_101, d_101);
  f_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_101);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL;
  w_100 = t;
  {
    ATerm t_19 (ATerm t)
    {
      ATerm h_53 = t;
      int i_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_19 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((x_100 != NULL) && (x_100 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_100 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(u_19, t);
          ;
          LocalPopChoice(i_53);
        }
      else
        {
          t = h_53;
          t = term_j_53;
          if(((x_100 != NULL) && (x_100 != t)))
            _fail(t);
          else
            x_100 = t;
        }
      return(t);
    }
    t = _2_0(t_19, _id, t);
    t = w_100;
    {
      ATerm v_19 (ATerm t)
      {
        ATerm u_23 = NULL;
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_100), u_23);
        return(t);
      }
      t = _2_0(_id, v_19, t);
      {
        ATerm k_53 = t;
        int l_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_19, x_19, t);
            ;
            LocalPopChoice(l_54);
          }
        else
          {
            t = k_53;
            t = _2_0(_id, a_20, t);
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
ATerm apply_strategy_1_0 (ATerm s_139 (ATerm), ATerm t)
{
  ATerm g_101 = NULL,h_101 = NULL,i_101 = NULL,j_101 = NULL,k_101 = NULL;
  g_101 = t;
  t = dtime_0_0(t);
  t = g_101;
  t = s_139(t);
  h_101 = t;
  t = dtime_0_0(t);
  i_101 = t;
  t = h_101;
  if(match_cons(t, sym__2))
    {
      j_101 = ATgetArgument(t, 0);
      k_101 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_101), (ATerm) ATmakeAppl(sym_Runtime_1, i_101)), k_101);
  return(t);
}
ATerm y_101 (ATerm s_101, ATerm t)
{
  t = SSL_fclose(s_101);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_101 = NULL,w_101 = NULL;
  w_101 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_101 = ATgetArgument(t, 0);
      {
        ATerm m_54 = t;
        int n_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_101);
            ;
            LocalPopChoice(n_54);
          }
        else
          {
            t = m_54;
            t = y_101(w_101, t);
          }
      }
    }
  else
    {
      t = y_101(w_101, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_101 = NULL;
  t = SSL_stdin_stream();
  z_101 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_101);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_102 = NULL;
  t = SSL_stdout_stream();
  a_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_102);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_102 = NULL;
  t = SSL_stderr_stream();
  b_102 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_102);
  return(t);
}
ATerm c_20 (ATerm t)
{
  ATerm j_102 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      j_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_102;
  return(t);
}
ATerm d_20 (ATerm t)
{
  ATerm n_102 = NULL;
  n_102 = t;
  t = SSL_is_string(n_102);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_54 = ATgetArgument(t, 0);
      ATerm p_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_54 = t;
    int r_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_24 = NULL,h_24 = NULL;
        g_24 = t;
        t = SSL_explode_term(g_24);
        if(match_cons(t, sym__2))
          {
            ATerm s_54 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_54) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm t_54 = ATgetArgument(t, 1);
              if(((ATgetType(t_54) == AT_LIST) && !(ATisEmpty(t_54))))
                {
                  h_24 = ATgetFirst((ATermList) t_54);
                  {
                    ATerm u_54 = (ATerm) ATgetNext((ATermList) t_54);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_24;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_24;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_24;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_24;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(r_54);
      }
    else
      {
        t = q_54;
        {
          ATerm v_54 = t;
          int w_54 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_102 = NULL,h_102 = NULL,i_102 = NULL;
              t = _2_0(c_20, _id, t);
              if(match_cons(t, sym__2))
                {
                  g_102 = ATgetArgument(t, 0);
                  h_102 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(g_102, h_102);
              i_102 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, i_102);
              ;
              LocalPopChoice(w_54);
            }
          else
            {
              t = v_54;
              {
                ATerm k_102 = NULL,l_102 = NULL,m_102 = NULL;
                t = _2_0(d_20, _id, t);
                if(match_cons(t, sym__2))
                  {
                    k_102 = ATgetArgument(t, 0);
                    l_102 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(k_102, l_102);
                m_102 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, m_102);
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_20 (ATerm t)
{
  t = term_x_54;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_102 = NULL,p_102 = NULL,q_102 = NULL;
  ATerm y_54 = t;
  int z_54 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_102 = NULL;
      r_102 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_102, term_a_55);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_54);
    }
  else
    {
      t = y_54;
      t = debug_1_0(f_20, t);
      _fail(t);
    }
  o_102 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(q_102);
  p_102 = t;
  t = o_102;
  t = fclose_0_0(t);
  t = p_102;
  return(t);
}
ATerm fetch_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm w_102 (ATerm t)
  {
    ATerm b_55 = t;
    int c_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(x_122, _id, t);
        ;
        LocalPopChoice(c_55);
      }
    else
      {
        t = b_55;
        t = Cons_2_0(_id, w_102, t);
      }
    return(t);
  }
  t = w_102(t);
  return(t);
}
ATerm debug_1_0 (ATerm e_138 (ATerm), ATerm t)
{
  ATerm x_102 = NULL,y_102 = NULL,z_102 = NULL,a_103 = NULL;
  x_102 = t;
  t = e_138(t);
  y_102 = t;
  t = term_x_23;
  z_102 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, x_102), y_102);
  a_103 = t;
  t = SSL_printnl(z_102, a_103);
  t = x_102;
  return(t);
}
ATerm g_20 (ATerm t)
{
  ATerm d_55 = t;
  int e_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(e_55);
    }
  else
    {
      t = d_55;
    }
  return(t);
}
ATerm h_20 (ATerm t)
{
  t = term_f_55;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_55 = t;
  int h_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_103 = NULL;
      m_103 = t;
      t = SSL_is_string(m_103);
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
            t = map_1_0(g_20, t);
            ;
            LocalPopChoice(j_55);
          }
        else
          {
            t = i_55;
            {
              ATerm x_103 = NULL,y_103 = NULL,z_103 = NULL;
              x_103 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_103 = ATgetArgument(t, 0);
                  t = y_103;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_103 = ATgetArgument(t, 0);
                      t = y_103;
                      {
                        ATerm k_55 = t;
                        int l_55 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(l_55);
                          }
                        else
                          {
                            t = k_55;
                            t = debug_1_0(h_20, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm x_24 = NULL,y_24 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_103 = ATgetArgument(t, 0);
                          z_103 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_103;
                      t = eval_config_0_0(t);
                      x_24 = t;
                      t = z_103;
                      t = eval_config_0_0(t);
                      y_24 = t;
                      t = SSL_strcat(x_24, y_24);
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
  ATerm e_104 = NULL,f_104 = NULL;
  e_104 = t;
  t = term_m_55;
  f_104 = t;
  t = SSL_table_get(f_104, e_104);
  {
    ATerm n_55 = t;
    int o_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_104 = NULL,h_104 = NULL;
        t = eval_config_0_0(t);
        g_104 = t;
        t = term_m_55;
        h_104 = t;
        t = SSL_table_put(h_104, e_104, g_104);
        t = g_104;
        ;
        LocalPopChoice(o_55);
      }
    else
      {
        t = n_55;
      }
  }
  return(t);
}
ATerm j_20 (ATerm t)
{
  ATerm k_104 = NULL;
  k_104 = t;
  if(match_string(t, "-k"))
    {
      t = k_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_104;
    }
  return(t);
}
ATerm k_20 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL,o_104 = NULL;
  l_104 = t;
  t = SSL_string_to_int(l_104);
  m_104 = t;
  t = term_m_55;
  n_104 = t;
  t = term_p_55;
  o_104 = t;
  t = SSL_table_put(n_104, o_104, m_104);
  t = l_104;
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = term_q_55;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_20, k_20, m_20, t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm s_104 = NULL;
  s_104 = t;
  if(match_string(t, "-S"))
    {
      t = s_104;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_104;
    }
  return(t);
}
ATerm o_20 (ATerm t)
{
  ATerm v_104 = NULL,w_104 = NULL,z_104 = NULL;
  t = term_m_55;
  v_104 = t;
  t = term_d_24;
  w_104 = t;
  t = term_r_55;
  z_104 = t;
  t = SSL_table_put(v_104, w_104, z_104);
  t = term_s_55;
  return(t);
}
ATerm p_20 (ATerm t)
{
  t = term_t_55;
  return(t);
}
ATerm r_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_20 (ATerm t)
{
  ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL,f_105 = NULL;
  c_105 = t;
  t = SSL_string_to_int(c_105);
  d_105 = t;
  t = term_m_55;
  e_105 = t;
  t = term_d_24;
  f_105 = t;
  t = SSL_table_put(e_105, f_105, d_105);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_105);
  return(t);
}
ATerm u_20 (ATerm t)
{
  t = term_u_55;
  return(t);
}
ATerm w_20 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_20 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL,i_105 = NULL;
  t = term_m_55;
  g_105 = t;
  t = term_v_55;
  h_105 = t;
  t = term_s_16;
  i_105 = t;
  t = SSL_table_put(g_105, h_105, i_105);
  t = term_w_55;
  return(t);
}
ATerm z_20 (ATerm t)
{
  t = term_x_55;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_55 = t;
  int z_55 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_20, o_20, p_20, t);
      ;
      LocalPopChoice(z_55);
    }
  else
    {
      t = y_55;
      {
        ATerm a_56 = t;
        int b_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_20, t_20, u_20, t);
            ;
            LocalPopChoice(b_56);
          }
        else
          {
            t = a_56;
            t = Option_3_0(w_20, y_20, z_20, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_105 = NULL,p_105 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_105 = NULL;
      t = term_s_16;
      t = d_0(t);
      q_105 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_56, term_d_56, q_105);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_105 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_105 = ATgetFirst((ATermList) t);
          p_105 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_105;
      t = a_0(t);
      t = term_s_16;
      t = b_0(t);
      t_105 = t;
      t = (ATerm) ATinsert(CheckATermList(p_105), t_105);
    }
  return(t);
}
ATerm b_21 (ATerm t)
{
  ATerm v_105 = NULL;
  v_105 = t;
  if(match_string(t, "-o"))
    {
      t = v_105;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_105;
    }
  return(t);
}
ATerm d_21 (ATerm t)
{
  ATerm w_105 = NULL,x_105 = NULL,y_105 = NULL;
  w_105 = t;
  t = term_m_55;
  x_105 = t;
  t = term_e_56;
  y_105 = t;
  t = SSL_table_put(x_105, y_105, w_105);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_105);
  return(t);
}
ATerm e_21 (ATerm t)
{
  t = term_f_56;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_21, d_21, e_21, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm b_106 = NULL,c_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
  if(match_cons(t, sym__3))
    {
      b_106 = ATgetArgument(t, 0);
      c_106 = ATgetArgument(t, 1);
      d_106 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_106, c_106);
  {
    ATerm g_56 = t;
    int h_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_56 = ATgetArgument(t, 0);
            ATerm j_56 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_106, c_106);
        ;
        LocalPopChoice(h_56);
      }
    else
      {
        t = g_56;
        t = (ATerm) ATempty;
      }
    e_106 = t;
    t = (ATerm) ATinsert(CheckATermList(e_106), d_106);
    f_106 = t;
    t = SSL_table_put(b_106, c_106, f_106);
    t = (ATerm) ATmakeAppl(sym__3, b_106, c_106, d_106);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm n_106 = NULL,o_106 = NULL,p_106 = NULL,q_106 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_106 = NULL;
      t = term_s_16;
      t = m_0(t);
      v_106 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_56, term_d_56, v_106);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm z_106 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_106 = ATgetFirst((ATermList) t);
          o_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_106;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_106 = ATgetFirst((ATermList) t);
          q_106 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_106;
      t = i_0(t);
      t = p_106;
      t = k_0(t);
      z_106 = t;
      t = (ATerm) ATinsert(CheckATermList(q_106), z_106);
    }
  return(t);
}
ATerm f_21 (ATerm t)
{
  ATerm c_107 = NULL;
  c_107 = t;
  if(match_string(t, "-i"))
    {
      t = c_107;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_107;
    }
  return(t);
}
ATerm g_21 (ATerm t)
{
  ATerm d_107 = NULL,e_107 = NULL,f_107 = NULL;
  d_107 = t;
  t = term_m_55;
  e_107 = t;
  t = term_k_56;
  f_107 = t;
  t = SSL_table_put(e_107, f_107, d_107);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_107);
  return(t);
}
ATerm h_21 (ATerm t)
{
  t = term_l_56;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_21, g_21, h_21, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_107 = NULL,j_107 = NULL,k_107 = NULL,l_107 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_16;
  t = whoami_0_0(t);
  g_107 = t;
  t = term_x_23;
  j_107 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_m_56), g_107);
  k_107 = t;
  t = SSL_printnl(j_107, k_107);
  t = term_a_24;
  l_107 = t;
  t = SSL_exit(l_107);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_n_56;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm f_129 (ATerm), ATerm g_129 (ATerm), ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = f_129(t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm o_107 = NULL,p_107 = NULL,v_107 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_107 = ATgetFirst((ATermList) t);
            p_107 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = p_107;
        t = foldr_2_0(f_129, g_129, t);
        v_107 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_107, v_107);
        t = g_129(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_21 (ATerm t)
{
  t = term_r_55;
  return(t);
}
ATerm j_21 (ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL;
  if(match_cons(t, sym__2))
    {
      j_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(j_25, k_25);
        ;
        LocalPopChoice(r_56);
      }
    else
      {
        t = q_56;
        t = SSL_addr(j_25, k_25);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_108 = NULL,e_25 = NULL,g_25 = NULL;
  t = times_0_0(t);
  e_25 = t;
  t = SSL_explode_term(e_25);
  if(match_cons(t, sym__2))
    {
      ATerm s_56 = ATgetArgument(t, 0);
      g_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_25;
  t = foldr_2_0(i_21, j_21, t);
  f_108 = t;
  t = SSL_TicksToSeconds(f_108);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_108 = NULL,x_108 = NULL,y_108 = NULL;
  w_108 = t;
  if(match_cons(t, sym__2))
    {
      x_108 = ATgetArgument(t, 0);
      y_108 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_108;
        if((x_108 != t))
          {
            _fail(t);
          }
        t = w_108;
        ;
        LocalPopChoice(u_56);
      }
    else
      {
        t = t_56;
        t = w_108;
        {
          ATerm v_56 = t;
          int w_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_108, y_108);
              ;
              LocalPopChoice(w_56);
            }
          else
            {
              t = v_56;
              t = SSL_gtr(x_108, y_108);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_108, y_108);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_148 (ATerm), ATerm t)
{
  ATerm x_56 = t;
  int y_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_109 = NULL,g_109 = NULL;
      e_109 = t;
      t = term_d_24;
      t = get_config_0_0(t);
      g_109 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_109, term_a_24);
      t = geq_0_0(t);
      t = e_109;
      t = f_148(t);
      ;
      LocalPopChoice(y_56);
    }
  else
    {
      t = x_56;
    }
  return(t);
}
ATerm n_21 (ATerm t)
{
  ATerm i_109 = NULL,j_109 = NULL,k_109 = NULL,l_109 = NULL;
  t = run_time_0_0(t);
  i_109 = t;
  t = term_s_16;
  t = whoami_0_0(t);
  j_109 = t;
  t = term_x_23;
  k_109 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_57), i_109), term_z_56), j_109);
  l_109 = t;
  t = SSL_printnl(k_109, l_109);
  t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_57), i_109), term_z_56), j_109));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_21, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_109 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_55;
  m_109 = t;
  t = SSL_exit(m_109);
  return(t);
}
ATerm q_21 (ATerm t)
{
  ATerm b_57 = t;
  int c_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(c_57);
    }
  else
    {
      t = b_57;
      {
        ATerm d_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(e_57);
          }
        else
          {
            t = d_57;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_140 (ATerm), ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_57;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
      t = fetch_1_0(q_21, t);
    }
  t = q_140(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm o_109 = NULL,p_109 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_109 = ATgetFirst((ATermList) t);
      p_109 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_109 = NULL,u_109 = NULL;
        t = p_109;
        t = g_0(t);
        t_109 = t;
        t = o_109;
        t = f_0(t);
        u_109 = t;
        t = p_109;
        {
          ATerm s_21 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(t_109), u_109);
            return(t);
          }
          t = reverse_acc_2_0(f_0, s_21, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_16;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm g_117 (ATerm), ATerm t)
{
  ATerm v_109 = NULL,w_109 = NULL,x_109 = NULL,y_109 = NULL,z_7 = NULL,a_8 = NULL;
  y_109 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_109 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_109);
  v_109 = t;
  t = w_109;
  t = g_117(t);
  x_109 = t;
  a_8 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, x_109);
  z_7 = t;
  t = SSLsetAnnotations(z_7, v_109);
  return(t);
}
ATerm t_21 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm u_21 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_21 (ATerm t)
{
  ATerm d_110 = NULL;
  d_110 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_110), term_i_57);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_110 = NULL,c_110 = NULL;
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_n_56;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
      t = fetch_1_0(t_21, t);
    }
  t = term_l_57;
  t = echo_0_0(t);
  t = term_c_56;
  b_110 = t;
  t = term_d_56;
  c_110 = t;
  t = SSL_table_get(b_110, c_110);
  t = reverse_acc_2_0(_id, u_21, t);
  t = map_1_0(v_21, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm e_110 = NULL,f_110 = NULL,g_110 = NULL,h_110 = NULL,e_8 = NULL,f_8 = NULL;
  h_110 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_110 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_110);
  e_110 = t;
  t = f_110;
  t = h_117(t);
  g_110 = t;
  f_8 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, g_110);
  e_8 = t;
  t = SSLsetAnnotations(e_8, e_110);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL;
  s_110 = t;
  {
    ATerm m_57 = t;
    int n_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_110;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_57 = ATgetFirst((ATermList) t);
                ATerm p_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_110;
          }
        ;
        LocalPopChoice(n_57);
      }
    else
      {
        t = m_57;
        t = (ATerm) ATinsert(ATempty, s_110);
      }
    t_110 = t;
    t = term_j_53;
    u_110 = t;
    t = SSL_printnl(u_110, t_110);
    t = s_110;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_n_56;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm w_21 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_21 (ATerm t)
{
  ATerm y_110 = NULL,z_110 = NULL,a_111 = NULL;
  t = term_m_55;
  y_110 = t;
  t = term_q_57;
  z_110 = t;
  t = term_s_16;
  a_111 = t;
  t = SSL_table_put(y_110, z_110, a_111);
  t = term_r_57;
  return(t);
}
ATerm z_21 (ATerm t)
{
  t = term_s_57;
  return(t);
}
ATerm b_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm c_22 (ATerm t)
{
  ATerm b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL,f_111 = NULL,g_111 = NULL;
  t = term_m_55;
  b_111 = t;
  t = term_q_57;
  c_111 = t;
  t = term_s_16;
  d_111 = t;
  t = SSL_table_put(b_111, c_111, d_111);
  t = term_m_55;
  e_111 = t;
  t = term_u_59;
  f_111 = t;
  t = term_s_16;
  g_111 = t;
  t = SSL_table_put(e_111, f_111, g_111);
  t = term_v_59;
  return(t);
}
ATerm d_22 (ATerm t)
{
  t = term_z_59;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_60 = t;
  int b_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(w_21, x_21, z_21, t);
      ;
      LocalPopChoice(b_60);
    }
  else
    {
      t = a_60;
      t = Option_3_0(b_22, c_22, d_22, t);
    }
  return(t);
}
ATerm f_22 (ATerm t)
{
  ATerm j_111 = NULL,k_111 = NULL,l_111 = NULL;
  j_111 = t;
  t = term_m_55;
  k_111 = t;
  t = term_n_56;
  l_111 = t;
  t = SSL_table_put(k_111, l_111, j_111);
  t = (ATerm) ATmakeAppl(sym_Program_1, j_111);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm i_111 = NULL;
  i_111 = t;
  {
    ATerm c_60 = t;
    int f_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_h_60;
        t = v_143(t);
        ;
        LocalPopChoice(f_60);
      }
    else
      {
        t = c_60;
      }
    t = i_111;
    {
      ATerm h_22 (ATerm t)
      {
        ATerm m_60 = t;
        int n_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_60 = t;
            int p_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(p_60);
              }
            else
              {
                t = o_60;
                t = v_143(t);
                t = Cons_2_0(_id, h_22, t);
              }
            ;
            LocalPopChoice(n_60);
          }
        else
          {
            t = m_60;
            {
              ATerm n_111 = NULL,o_111 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_111 = ATgetFirst((ATermList) t);
                  o_111 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_111), (ATerm) ATmakeAppl(sym_Undefined_1, n_111));
            }
          }
        return(t);
      }
      t = Cons_2_0(f_22, h_22, t);
    }
  }
  return(t);
}
ATerm m_22 (ATerm t)
{
  ATerm c_112 = NULL;
  c_112 = t;
  if(match_string(t, "--help"))
    {
      t = c_112;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_112;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_112;
        }
    }
  return(t);
}
ATerm n_22 (ATerm t)
{
  ATerm d_112 = NULL,e_112 = NULL,f_112 = NULL;
  t = term_m_55;
  d_112 = t;
  t = term_h_57;
  e_112 = t;
  t = term_s_16;
  f_112 = t;
  t = SSL_table_put(d_112, e_112, f_112);
  t = term_q_60;
  return(t);
}
ATerm q_22 (ATerm t)
{
  t = term_r_60;
  return(t);
}
ATerm s_22 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_143 (ATerm), ATerm t)
{
  ATerm v_111 = NULL,w_111 = NULL,x_111 = NULL,y_111 = NULL,z_111 = NULL,a_112 = NULL,b_112 = NULL;
  v_111 = t;
  t = term_c_56;
  w_111 = t;
  t = term_d_56;
  x_111 = t;
  t = (ATerm) ATempty;
  y_111 = t;
  t = SSL_table_put(w_111, x_111, y_111);
  t = v_111;
  {
    ATerm i_22 (ATerm t)
    {
      ATerm s_60 = t;
      int i_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_143(t);
          ;
          LocalPopChoice(i_61);
        }
      else
        {
          t = s_60;
          {
            ATerm j_61 = t;
            int k_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_22, n_22, q_22, t);
                ;
                LocalPopChoice(k_61);
              }
            else
              {
                t = j_61;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_22, t);
    {
      ATerm l_61 = t;
      int m_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_112 = NULL;
          m_112 = t;
          {
            ATerm n_61 = t;
            int o_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_25 = NULL;
                t = m_112;
                {
                  ATerm p_61 = t;
                  int q_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_h_57;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_61);
                    }
                  else
                    {
                      t = p_61;
                      t = fetch_1_0(s_22, t);
                    }
                  t = m_112;
                  t = default_system_usage_0_0(t);
                  t = term_r_55;
                  y_25 = t;
                  t = SSL_exit(y_25);
                }
                ;
                LocalPopChoice(o_61);
              }
            else
              {
                t = n_61;
                {
                  ATerm d_26 = NULL;
                  t = term_q_57;
                  t = get_config_0_0(t);
                  t = m_112;
                  t = default_system_about_0_0(t);
                  t = term_r_55;
                  d_26 = t;
                  t = SSL_exit(d_26);
                }
              }
          }
          ;
          LocalPopChoice(m_61);
        }
      else
        {
          t = l_61;
          {
            ATerm r_61 = t;
            int s_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_112 = NULL,o_112 = NULL,p_112 = NULL;
                ATerm t_22 (ATerm t)
                {
                  ATerm u_22 (ATerm t)
                  {
                    if(((z_111 != NULL) && (z_111 != t)))
                      _fail(t);
                    else
                      z_111 = t;
                    return(t);
                  }
                  t = Undefined_1_0(u_22, t);
                  return(t);
                }
                t = fetch_1_0(t_22, t);
                t = term_x_23;
                n_112 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_111)), term_t_61);
                o_112 = t;
                t = SSL_printnl(n_112, o_112);
                t = (ATerm) ATmakeAppl(sym__2, term_x_23, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_111)), term_t_61));
                t = default_system_usage_0_0(t);
                t = term_a_24;
                p_112 = t;
                t = SSL_exit(p_112);
                ;
                LocalPopChoice(s_61);
              }
            else
              {
                t = r_61;
              }
          }
        }
      a_112 = t;
      t = term_c_56;
      b_112 = t;
      t = SSL_table_destroy(b_112);
      t = a_112;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_140 (ATerm), ATerm t_140 (ATerm), ATerm u_140 (ATerm), ATerm v_140 (ATerm), ATerm t)
{
  ATerm s_112 = NULL,t_112 = NULL,u_112 = NULL,v_112 = NULL;
  t = parse_options_1_0(s_140, t);
  s_112 = t;
  t = term_u_61;
  t_112 = t;
  t = SSL_table_create(t_112);
  t = term_u_61;
  u_112 = t;
  t = term_v_61;
  v_112 = t;
  t = SSL_table_put(u_112, v_112, s_112);
  t = s_112;
  t = u_140(t);
  {
    ATerm w_61 = t;
    int x_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_140, t);
        ;
        LocalPopChoice(x_61);
      }
    else
      {
        t = w_61;
        {
          ATerm y_61 = t;
          int z_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(z_61);
            }
          else
            {
              t = y_61;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm w_22 (ATerm t)
{
  t = if_verbose2_1_0(e_23, t);
  return(t);
}
ATerm z_22 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_23 (ATerm t)
{
  ATerm w_112 = NULL,x_112 = NULL,y_112 = NULL;
  t = term_m_55;
  w_112 = t;
  t = term_a_62;
  x_112 = t;
  t = term_s_16;
  y_112 = t;
  t = SSL_table_put(w_112, x_112, y_112);
  t = term_b_62;
  return(t);
}
ATerm d_23 (ATerm t)
{
  t = term_c_62;
  return(t);
}
ATerm e_23 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL;
  z_112 = t;
  t = term_n_56;
  t = get_config_0_0(t);
  a_113 = t;
  t = term_x_23;
  b_113 = t;
  t = (ATerm) ATinsert(ATempty, a_113);
  c_113 = t;
  t = SSL_printnl(b_113, c_113);
  t = z_112;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_140 (ATerm), ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm t)
{
  ATerm v_22 (ATerm t)
  {
    ATerm d_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_140(t);
        ;
        LocalPopChoice(e_62);
      }
    else
      {
        t = d_62;
        {
          ATerm f_62 = t;
          int g_62 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(g_62);
            }
          else
            {
              t = f_62;
              {
                ATerm h_62 = t;
                int i_62 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(i_62);
                  }
                else
                  {
                    t = h_62;
                    {
                      ATerm j_62 = t;
                      int k_62 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_22, a_23, d_23, t);
                          ;
                          LocalPopChoice(k_62);
                        }
                      else
                        {
                          t = j_62;
                          {
                            ATerm l_62 = t;
                            int m_62 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_62);
                              }
                            else
                              {
                                t = l_62;
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
  ATerm y_22 (ATerm t)
  {
    ATerm d_113 = NULL,e_113 = NULL,i_26 = NULL;
    d_113 = t;
    {
      ATerm n_62 = t;
      int o_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_113 != NULL) && (e_113 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_113 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_23, t);
          ;
          LocalPopChoice(o_62);
        }
      else
        {
          t = n_62;
          t = term_p_62;
          e_113 = t;
        }
      t = not_null(e_113);
      t = ReadFromFile_0_0(t);
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_113, i_26);
      t = apply_strategy_1_0(b_140, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(v_22, d_140, w_22, y_22, t);
  return(t);
}
ATerm g_23 (ATerm t)
{
  t = _2_0(_id, h_23, t);
  return(t);
}
ATerm h_23 (ATerm t)
{
  ATerm q_62 = t;
  int r_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(l_23, t);
      t = check_library_definitions_0_0(t);
      t = alltd_1_0(innermost_fusion_0_0, t);
      ;
      LocalPopChoice(r_62);
    }
  else
    {
      t = q_62;
      t = if_verbose2_1_0(w_23, t);
    }
  return(t);
}
ATerm l_23 (ATerm t)
{
  t = Cons_2_0(m_23, n_23, t);
  return(t);
}
ATerm m_23 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm n_23 (ATerm t)
{
  t = Cons_2_0(s_23, t_23, t);
  return(t);
}
ATerm s_23 (ATerm t)
{
  t = Strategies_1_0(v_23, t);
  return(t);
}
ATerm t_23 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_23 (ATerm t)
{
  t = map_1_0(declare_inline_rule_0_0, t);
  return(t);
}
ATerm w_23 (ATerm t)
{
  ATerm f_113 = NULL,g_113 = NULL,h_113 = NULL;
  f_113 = t;
  t = term_x_23;
  g_113 = t;
  t = (ATerm) ATinsert(ATempty, term_s_62);
  h_113 = t;
  t = SSL_printnl(g_113, h_113);
  t = f_113;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(g_23, _fail, default_usage_0_0, t);
  return(t);
}
