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
ATerm term_k_62;
ATerm term_d_62;
ATerm term_c_62;
ATerm term_n_61;
ATerm term_x_60;
ATerm term_w_60;
ATerm term_n_60;
ATerm term_k_60;
ATerm term_j_60;
ATerm term_i_60;
ATerm term_h_60;
ATerm term_g_60;
ATerm term_f_60;
ATerm term_w_59;
ATerm term_v_59;
ATerm term_i_59;
ATerm term_h_59;
ATerm term_g_59;
ATerm term_e_59;
ATerm term_g_58;
ATerm term_y_57;
ATerm term_x_57;
ATerm term_w_57;
ATerm term_v_57;
ATerm term_u_57;
ATerm term_t_57;
ATerm term_q_57;
ATerm term_p_57;
ATerm term_o_57;
ATerm term_j_57;
ATerm term_l_56;
ATerm term_p_55;
ATerm term_m_55;
ATerm term_j_55;
ATerm term_i_55;
ATerm term_b_55;
ATerm term_u_54;
ATerm term_s_38;
ATerm term_r_38;
ATerm term_q_38;
ATerm term_t_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_y_30;
ATerm term_x_30;
ATerm term_w_30;
ATerm term_v_30;
ATerm term_u_30;
ATerm term_t_30;
ATerm term_s_30;
ATerm term_r_30;
ATerm term_q_30;
ATerm term_p_30;
ATerm term_o_30;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_k_30;
ATerm term_j_30;
ATerm term_i_30;
ATerm term_h_30;
ATerm term_g_30;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_c_30;
ATerm term_h_29;
ATerm term_g_29;
ATerm term_y_28;
ATerm term_x_28;
ATerm term_x_27;
ATerm term_v_27;
ATerm term_n_26;
ATerm term_y_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_v_21;
ATerm term_t_21;
ATerm term_i_21;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_e_19;
void init_constant_terms (void)
{
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_24);
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_v_27);
  ATprotect(&(term_x_28));
  term_x_28 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_28);
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_29);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_30);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_CallT_3, term_d_30, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_g_30));
  term_g_30 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_h_30));
  term_h_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, term_g_30);
  ATprotect(&(term_i_30));
  term_i_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_30, term_h_30);
  ATprotect(&(term_j_30));
  term_j_30 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_k_30));
  term_k_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_l_30, term_g_30);
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_f_30, term_m_30);
  ATprotect(&(term_o_30));
  term_o_30 = (ATerm) ATmakeAppl(sym_Seq_2, term_e_30, term_n_30);
  ATprotect(&(term_p_30));
  term_p_30 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_q_30));
  term_q_30 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_r_30));
  term_r_30 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_s_30);
  ATprotect(&(term_u_30));
  term_u_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_v_30));
  term_v_30 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_w_30));
  term_w_30 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_x_30));
  term_x_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_w_30);
  ATprotect(&(term_y_30));
  term_y_30 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_34);
  ATprotect(&(term_t_35));
  term_t_35 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_q_38));
  term_q_38 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_r_38));
  term_r_38 = (ATerm) ATmakeAppl(sym_Op_2, term_q_38, (ATerm) ATempty);
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(sym_ConstType_1, term_r_38);
  ATprotect(&(term_u_54));
  term_u_54 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_b_55));
  term_b_55 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_54);
  ATprotect(&(term_i_55));
  term_i_55 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_j_55));
  term_j_55 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_m_55));
  term_m_55 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_55));
  term_p_55 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_57));
  term_j_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_57));
  term_o_57 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_57));
  term_p_57 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_57);
  ATprotect(&(term_q_57));
  term_q_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_57));
  term_t_57 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_57));
  term_v_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_57));
  term_w_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_57));
  term_x_57 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_y_57));
  term_y_57 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_58));
  term_g_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_59));
  term_e_59 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_59));
  term_h_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_v_59));
  term_v_59 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_59));
  term_w_59 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_60));
  term_f_60 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_60));
  term_g_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_h_60));
  term_h_60 = (ATerm) ATmakeAppl(sym__3, term_f_60, term_g_60, term_e_19);
  ATprotect(&(term_i_60));
  term_i_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_j_60));
  term_j_60 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_60));
  term_k_60 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_60));
  term_n_60 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_60));
  term_w_60 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_60));
  term_x_60 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_62));
  term_c_62 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_d_62));
  term_d_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_62));
  term_k_62 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm d_147 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm);
ATerm Op_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm t_145 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm);
ATerm Con_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm i_117 (ATerm), ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm r_129 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm q_129 (ATerm), ATerm);
ATerm scope_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm BottomupOverConstructor_0_0 (ATerm);
ATerm SeqOverLChoiceR_0_0 (ATerm);
ATerm SeqOverChoiceR_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm j_117 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm z_132 (ATerm), ATerm);
ATerm Build_1_0 (ATerm g_107 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm);
ATerm Match_1_0 (ATerm f_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm a_119 (ATerm), ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm m_118 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm k_117 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm);
ATerm spaste_1_0 (ATerm r_146 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm x_106 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm y_143 (ATerm), ATerm z_143 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm j_133 (ATerm), ATerm);
ATerm rename_4_0 (ATerm t_143 (ATerm (ATerm), ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_143 (ATerm (ATerm), ATerm), ATerm);
ATerm tpaste_1_0 (ATerm n_146 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm f_106 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm w_125 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm);
ATerm diff_1_0 (ATerm s_125 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm l_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm o_103 (ATerm), ATerm);
ATerm strename_0_0 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm u_129 (ATerm), ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm map_1_0 (ATerm s_121 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm q_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm r_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm v_102 (ATerm), ATerm);
ATerm _2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm k_137 (ATerm), ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm w_138 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm d_122 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm j_122 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm c_147 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm l_116 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm m_116 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm parse_options_p__1_0 (ATerm z_142 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm y_142 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_0 = NULL,x_0 = NULL;
  w_0 = t;
  t = term_e_19;
  t = whoami_0_0(t);
  x_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_147 (ATerm), ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL,a_1 = NULL;
      y_0 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm h_20 = t;
        int i_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 = NULL;
            t = eval_config_0_0(t);
            t_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_0);
            t = t_0;
            ;
            LocalPopChoice(i_20);
          }
        else
          {
            t = h_20;
          }
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_1, term_j_20);
        t = geq_0_0(t);
        t = y_0;
        t = d_147(t);
      }
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, c_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_k_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_1 = ATgetArgument(t, 0);
          {
            ATerm n_1 = NULL,o_1 = NULL,q_1 = NULL,r_1 = NULL;
            t = d_1;
            t = new_0_0(t);
            n_1 = t;
            t = e_1;
            {
              ATerm p_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((o_1 != NULL) && (o_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      o_1 = ATgetArgument(t, 0);
                    if(((q_1 != NULL) && (q_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      q_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, n_1);
                return(t);
              }
              t = oncetd_1_0(p_0, t);
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_1)), not_null(o_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
            }
          }
        }
      else
        {
          ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,y_1 = NULL,z_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              e_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_1;
          t = new_0_0(t);
          t_1 = t;
          t = new_0_0(t);
          u_1 = t;
          t = e_1;
          {
            ATerm q_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((v_1 != NULL) && (v_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    v_1 = ATgetArgument(t, 0);
                  if(((y_1 != NULL) && (y_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
              return(t);
            }
            t = oncetd_1_0(q_0, t);
            z_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_l_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_1))))), (ATerm)ATmakeAppl(sym_Var_1, t_1), (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_1)), not_null(v_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm b_2 = NULL,d_2 = NULL;
  b_2 = t;
  if(match_cons(t, sym_Match_1))
    {
      d_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_20 = t;
    int p_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL,k_2 = NULL;
        t = b_2;
        t = new_0_0(t);
        h_2 = t;
        t = d_2;
        {
          ATerm s_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((j_2 != NULL) && (j_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_2 = ATgetArgument(t, 0);
                if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  i_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, h_2), not_null(j_2));
            return(t);
          }
          t = pat_td_1_0(s_0, t);
          k_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_2))))));
        }
        ;
        LocalPopChoice(p_20);
      }
    else
      {
        t = o_20;
        {
          ATerm s_20 = t;
          int t_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,n_2 = NULL,p_2 = NULL;
              t = b_2;
              t = new_0_0(t);
              m_2 = t;
              t = d_2;
              {
                ATerm v_0 (ATerm t)
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
                  t = (ATerm) ATmakeAppl(sym_Var_1, m_2);
                  return(t);
                }
                t = pat_td_1_0(v_0, t);
                p_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_2)), not_null(n_2))));
              }
              ;
              LocalPopChoice(t_20);
            }
          else
            {
              t = s_20;
              {
                ATerm r_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL;
                t = b_2;
                t = new_0_0(t);
                r_2 = t;
                t = d_2;
                {
                  ATerm z_0 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((u_2 != NULL) && (u_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          u_2 = ATgetArgument(t, 0);
                        if(((v_2 != NULL) && (v_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          v_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, r_2);
                    return(t);
                  }
                  t = pat_td_1_0(z_0, t);
                  w_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_2)), not_null(u_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_As_2))
    {
      w_3 = ATgetArgument(t, 0);
      y_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  v_3 = t;
  t = w_3;
  t = f_104(t);
  a_4 = t;
  t = y_3;
  t = g_104(t);
  b_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, a_4, b_4), v_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm e_108 (ATerm), ATerm f_108 (ATerm), ATerm g_108 (ATerm), ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,v_4 = NULL,z_4 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_4 = ATgetArgument(t, 0);
      v_4 = ATgetArgument(t, 1);
      z_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  p_4 = t;
  t = q_4;
  t = e_108(t);
  c_5 = t;
  t = v_4;
  t = f_108(t);
  d_5 = t;
  t = z_4;
  t = g_108(t);
  f_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, c_5, d_5, f_5), p_4);
  return(t);
}
ATerm Explode_2_0 (ATerm y_103 (ATerm), ATerm z_103 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,m_5 = NULL,n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Explode_2))
    {
      m_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  k_5 = t;
  t = m_5;
  t = y_103(t);
  p_5 = t;
  t = n_5;
  t = z_103(t);
  q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, p_5, q_5), k_5);
  return(t);
}
ATerm Op_2_0 (ATerm u_103 (ATerm), ATerm v_103 (ATerm), ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym_Op_2))
    {
      y_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  w_5 = t;
  t = y_5;
  t = u_103(t);
  b_6 = t;
  t = a_6;
  t = v_103(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, b_6, c_6), w_5);
  return(t);
}
ATerm pat_td_1_0 (ATerm t_145 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_145(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      {
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = pat_td_1_0(t_145, t);
                return(t);
              }
              t = fetch_1_0(f_1, t);
              return(t);
            }
            t = Op_2_0(_id, b_1, t);
            ;
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            {
              ATerm a_21 = t;
              int b_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = pat_td_1_0(t_145, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, g_1, t);
                  ;
                  LocalPopChoice(b_21);
                }
              else
                {
                  t = a_21;
                  {
                    ATerm c_21 = t;
                    int d_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = pat_td_1_0(t_145, t);
                          return(t);
                        }
                        t = Explode_2_0(h_1, _id, t);
                        ;
                        LocalPopChoice(d_21);
                      }
                    else
                      {
                        t = c_21;
                        {
                          ATerm e_21 = t;
                          int f_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm p_1 (ATerm t)
                                {
                                  t = pat_td_1_0(t_145, t);
                                  return(t);
                                }
                                t = fetch_1_0(p_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, m_1, t);
                              ;
                              LocalPopChoice(f_21);
                            }
                          else
                            {
                              t = e_21;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = pat_td_1_0(t_145, t);
                                  return(t);
                                }
                                t = As_2_0(_id, s_1, t);
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
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Build_1))
    {
      d_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm g_21 = t;
    int h_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
        t = b_3;
        t = new_0_0(t);
        f_3 = t;
        t = d_3;
        {
          ATerm w_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_3 != NULL) && (g_3 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_3 = ATgetArgument(t, 0);
                if(((h_3 != NULL) && (h_3 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_3);
            return(t);
          }
          t = pat_td_1_0(w_1, t);
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_i_21, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), not_null(g_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_3)))), (ATerm) ATmakeAppl(sym_Build_1, i_3)));
        }
        ;
        LocalPopChoice(h_21);
      }
    else
      {
        t = g_21;
        {
          ATerm j_21 = t;
          int k_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL;
              t = b_3;
              t = new_0_0(t);
              k_3 = t;
              t = d_3;
              {
                ATerm x_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((l_3 != NULL) && (l_3 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        l_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
                  return(t);
                }
                t = pat_td_1_0(x_1, t);
                n_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_3)))), (ATerm) ATmakeAppl(sym_Build_1, n_3)));
              }
              ;
              LocalPopChoice(k_21);
            }
          else
            {
              t = j_21;
              {
                ATerm p_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
                t = b_3;
                t = new_0_0(t);
                p_3 = t;
                t = d_3;
                {
                  ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((r_3 != NULL) && (r_3 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          r_3 = ATgetArgument(t, 0);
                        if(((s_3 != NULL) && (s_3 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_3);
                    return(t);
                  }
                  t = pat_td_1_0(a_2, t);
                  t_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(r_3), not_null(s_3), (ATerm) ATmakeAppl(sym_Var_1, p_3))), (ATerm) ATmakeAppl(sym_Build_1, t_3)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm m_6 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      m_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_6 = NULL,r_6 = NULL;
        t = m_6;
        {
          ATerm g_2 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm n_21 = ATgetArgument(t, 0);
                if(match_cons(n_21, sym_Build_1))
                  {
                    if(((q_6 != NULL) && (q_6 != ATgetArgument(n_21, 0))))
                      _fail(ATgetArgument(n_21, 0));
                    else
                      q_6 = ATgetArgument(n_21, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(q_6);
            return(t);
          }
          t = pat_td_1_0(g_2, t);
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, r_6);
        }
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm i_7 = NULL,r_7 = NULL;
          t = m_6;
          {
            ATerm l_2 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm o_21 = ATgetArgument(t, 0);
                  if(match_cons(o_21, sym_Build_1))
                    {
                      if(((i_7 != NULL) && (i_7 != ATgetArgument(o_21, 0))))
                        _fail(ATgetArgument(o_21, 0));
                      else
                        i_7 = ATgetArgument(o_21, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm p_21 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(i_7);
              return(t);
            }
            t = pat_td_1_0(l_2, t);
            r_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, r_7);
          }
        }
      }
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm h_11 (ATerm m_8, ATerm t)
  {
    ATerm i_9 = NULL;
    t = m_8;
    {
      ATerm q_21 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = q_21;
        }
      t = new_0_0(t);
      i_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, i_9), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_9)))), (ATerm) ATmakeAppl(sym_Var_1, i_9)));
    }
    return(t);
  }
  ATerm z_9 = NULL,o_10 = NULL;
  z_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_10 = ATgetArgument(t, 0);
      {
        ATerm r_21 = t;
        int s_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_11(z_9, t);
            ;
            LocalPopChoice(s_21);
          }
        else
          {
            t = r_21;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_t_21, (ATerm) ATmakeAppl(sym_Var_1, o_10)));
          }
      }
    }
  else
    {
      t = h_11(z_9, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm e_15 = NULL,h_15 = NULL,i_15 = NULL,n_15 = NULL;
  h_15 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      i_15 = ATgetArgument(t, 0);
      n_15 = ATgetArgument(t, 1);
      e_15 = ATgetArgument(t, 2);
      {
        ATerm e_2 = NULL,o_2 = NULL,s_2 = NULL;
        t = e_15;
        {
          ATerm q_2 (ATerm t)
          {
            ATerm u_21 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = u_21;
              }
            return(t);
          }
          t = fetch_1_0(q_2, t);
          t = e_15;
          {
            ATerm x_2 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_v_21;
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm t_2 = NULL,a_3 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_2 = ATgetFirst((ATermList) t);
                  a_3 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, t_2, a_3);
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              ATerm c_3 = NULL,m_3 = NULL,q_3 = NULL,u_3 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm w_21 = ATgetArgument(t, 0);
                  if(match_cons(w_21, sym__2))
                    {
                      c_3 = ATgetArgument(w_21, 0);
                      q_3 = ATgetArgument(w_21, 1);
                    }
                  else
                    _fail(t);
                  {
                    ATerm x_21 = ATgetArgument(t, 1);
                    if(match_cons(x_21, sym__2))
                      {
                        m_3 = ATgetArgument(x_21, 0);
                        u_3 = ATgetArgument(x_21, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_3), c_3), (ATerm) ATinsert(CheckATermList(u_3), q_3));
              return(t);
            }
            t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
            {
              ATerm e_3 (ATerm t)
              {
                ATerm j_3 (ATerm t)
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_v_21;
                  return(t);
                }
                ATerm o_3 (ATerm t)
                {
                  ATerm x_3 = NULL,z_3 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_3 = ATgetFirst((ATermList) t);
                      z_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, x_3, z_3);
                  return(t);
                }
                ATerm d_4 (ATerm t)
                {
                  ATerm e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm y_21 = ATgetArgument(t, 0);
                      if(match_cons(y_21, sym__2))
                        {
                          e_4 = ATgetArgument(y_21, 0);
                          g_4 = ATgetArgument(y_21, 1);
                        }
                      else
                        _fail(t);
                      {
                        ATerm z_21 = ATgetArgument(t, 1);
                        if(match_cons(z_21, sym__2))
                          {
                            f_4 = ATgetArgument(z_21, 0);
                            h_4 = ATgetArgument(z_21, 1);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_4), e_4), (ATerm) ATinsert(CheckATermList(h_4), g_4));
                  return(t);
                }
                t = genzip_4_0(j_3, o_3, d_4, _id, t);
                return(t);
              }
              t = _2_0(concat_0_0, e_3, t);
              if(match_cons(t, sym__2))
                {
                  e_2 = ATgetArgument(t, 0);
                  {
                    ATerm a_22 = ATgetArgument(t, 1);
                    if(match_cons(a_22, sym__2))
                      {
                        o_2 = ATgetArgument(a_22, 0);
                        s_2 = ATgetArgument(a_22, 1);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Scope_2, e_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_2), (ATerm) ATmakeAppl(sym_PrimT_3, i_15, n_15, s_2)));
            }
          }
        }
      }
    }
  else
    {
      ATerm o_4 = NULL,r_4 = NULL,s_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          i_15 = ATgetArgument(t, 0);
          n_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_15;
      {
        ATerm i_4 (ATerm t)
        {
          ATerm b_22 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = b_22;
            }
          return(t);
        }
        t = fetch_1_0(i_4, t);
        t = n_15;
        {
          ATerm j_4 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = term_v_21;
            return(t);
          }
          ATerm k_4 (ATerm t)
          {
            ATerm t_4 = NULL,u_4 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_4 = ATgetFirst((ATermList) t);
                u_4 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, t_4, u_4);
            return(t);
          }
          ATerm l_4 (ATerm t)
          {
            ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL,a_5 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm c_22 = ATgetArgument(t, 0);
                if(match_cons(c_22, sym__2))
                  {
                    w_4 = ATgetArgument(c_22, 0);
                    y_4 = ATgetArgument(c_22, 1);
                  }
                else
                  _fail(t);
                {
                  ATerm d_22 = ATgetArgument(t, 1);
                  if(match_cons(d_22, sym__2))
                    {
                      x_4 = ATgetArgument(d_22, 0);
                      a_5 = ATgetArgument(d_22, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_4), w_4), (ATerm) ATinsert(CheckATermList(a_5), y_4));
            return(t);
          }
          t = genzip_4_0(j_4, k_4, l_4, LiftPrimArg_0_0, t);
          {
            ATerm m_4 (ATerm t)
            {
              ATerm n_4 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = term_v_21;
                return(t);
              }
              ATerm h_5 (ATerm t)
              {
                ATerm b_5 = NULL,e_5 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_5 = ATgetFirst((ATermList) t);
                    e_5 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, b_5, e_5);
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                ATerm i_5 = NULL,l_5 = NULL,o_5 = NULL,u_5 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm e_22 = ATgetArgument(t, 0);
                    if(match_cons(e_22, sym__2))
                      {
                        i_5 = ATgetArgument(e_22, 0);
                        o_5 = ATgetArgument(e_22, 1);
                      }
                    else
                      _fail(t);
                    {
                      ATerm f_22 = ATgetArgument(t, 1);
                      if(match_cons(f_22, sym__2))
                        {
                          l_5 = ATgetArgument(f_22, 0);
                          u_5 = ATgetArgument(f_22, 1);
                        }
                      else
                        _fail(t);
                    }
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_5), i_5), (ATerm) ATinsert(CheckATermList(u_5), o_5));
                return(t);
              }
              t = genzip_4_0(n_4, h_5, j_5, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, m_4, t);
            if(match_cons(t, sym__2))
              {
                o_4 = ATgetArgument(t, 0);
                {
                  ATerm g_22 = ATgetArgument(t, 1);
                  if(match_cons(g_22, sym__2))
                    {
                      r_4 = ATgetArgument(g_22, 0);
                      s_4 = ATgetArgument(g_22, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, o_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_4), (ATerm) ATmakeAppl(sym_PrimT_3, i_15, (ATerm)ATempty, s_4)));
          }
        }
      }
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm h_22 = t;
  if((PushChoice() == 0))
    {
      ATerm s_5 (ATerm t)
      {
        ATerm i_22 = t;
        int j_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(j_22);
          }
        else
          {
            t = i_22;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(s_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_22;
    }
  return(t);
}
ATerm App_2_0 (ATerm c_104 (ATerm), ATerm d_104 (ATerm), ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,b_16 = NULL,c_16 = NULL;
  c_16 = t;
  if(match_cons(t, sym_App_2))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  v_15 = t;
  t = w_15;
  t = c_104(t);
  y_15 = t;
  t = x_15;
  t = d_104(t);
  b_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, y_15, b_16), v_15);
  return(t);
}
ATerm Con_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL;
  v_16 = t;
  if(match_cons(t, sym_Con_3))
    {
      k_16 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
      n_16 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_16);
  j_16 = t;
  t = k_16;
  t = o_104(t);
  o_16 = t;
  t = m_16;
  t = p_104(t);
  t_16 = t;
  t = n_16;
  t = q_104(t);
  u_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, o_16, t_16, u_16), j_16);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm k_22 = t;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        ATerm l_22 = t;
        int m_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(m_22);
          }
        else
          {
            t = l_22;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(t_5, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_22;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm n_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      n_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_17;
  if(match_cons(t, sym_StratRule_3))
    {
      p_17 = ATgetArgument(t, 0);
      q_17 = ATgetArgument(t, 1);
      r_17 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, q_17), (ATerm) ATmakeAppl(sym_Where_1, r_17)), p_17));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          p_17 = ATgetArgument(t, 0);
          q_17 = ATgetArgument(t, 1);
          r_17 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = p_17;
      t = pureterm_0_0(t);
      t = q_17;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, q_17)), (ATerm) ATmakeAppl(sym_Where_1, r_17)), (ATerm) ATmakeAppl(sym_Match_1, p_17)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm l_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm n_22 = ATgetArgument(t, 0);
      if(match_cons(n_22, sym_Rule_3))
        {
          l_18 = ATgetArgument(n_22, 0);
          p_18 = ATgetArgument(n_22, 1);
          q_18 = ATgetArgument(n_22, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  t_18 = t;
  t = l_18;
  {
    ATerm v_5 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm o_22 = ATgetArgument(t, 0);
          if(match_cons(o_22, sym_Var_1))
            {
              if(((x_18 != NULL) && (x_18 != ATgetArgument(o_22, 0))))
                _fail(ATgetArgument(o_22, 0));
              else
                x_18 = ATgetArgument(o_22, 0);
            }
          else
            _fail(t);
          if(((u_18 != NULL) && (u_18 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            u_18 = ATgetArgument(t, 1);
          {
            ATerm p_22 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(x_18));
      return(t);
    }
    t = oncetd_1_0(v_5, t);
    y_18 = t;
    t = p_18;
    {
      ATerm x_5 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm q_22 = ATgetArgument(t, 0);
            if(match_cons(q_22, sym_Var_1))
              {
                if(((x_18 != NULL) && (x_18 != ATgetArgument(q_22, 0))))
                  _fail(ATgetArgument(q_22, 0));
                else
                  x_18 = ATgetArgument(q_22, 0);
              }
            else
              _fail(t);
            if(((z_18 != NULL) && (z_18 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              z_18 = ATgetArgument(t, 1);
            {
              ATerm r_22 = ATgetArgument(t, 2);
              if(match_cons(r_22, sym_CallT_3))
                {
                  if(((a_19 != NULL) && (a_19 != ATgetArgument(r_22, 0))))
                    _fail(ATgetArgument(r_22, 0));
                  else
                    a_19 = ATgetArgument(r_22, 0);
                  {
                    ATerm s_22 = ATgetArgument(r_22, 1);
                    if(((ATgetType(s_22) != AT_LIST) || !(ATisEmpty(s_22))))
                      _fail(t);
                  }
                  {
                    ATerm t_22 = ATgetArgument(r_22, 2);
                    if(((ATgetType(t_22) != AT_LIST) || !(ATisEmpty(t_22))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, t_18);
        return(t);
      }
      t = oncetd_1_0(x_5, t);
      d_19 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_18), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, y_18, d_19, (ATerm) ATmakeAppl(sym_Seq_2, q_18, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_19), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(u_18), not_null(z_18), term_t_21))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(x_18)), (ATerm) ATmakeAppl(sym_Var_1, t_18))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(x_22);
        }
      else
        {
          t = w_22;
          {
            ATerm y_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(z_22);
              }
            else
              {
                t = y_22;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm i_117 (ATerm), ATerm t)
{
  t = i_117(t);
  {
    ATerm z_5 (ATerm t)
    {
      t = topdown_1_0(i_117, t);
      return(t);
    }
    t = SRTS_all(z_5, t);
  }
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm b_23 = NULL,c_23 = NULL,e_23 = NULL,f_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL;
  b_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      c_23 = ATgetArgument(t, 0);
      i_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_23;
  if(match_cons(t, sym_CallT_3))
    {
      e_23 = ATgetArgument(t, 0);
      g_23 = ATgetArgument(t, 1);
      h_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_23;
  if(match_cons(t, sym_SVar_1))
    {
      f_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_23;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = g_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = h_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = i_23;
  if(match_cons(t, sym_Seq_2))
    {
      j_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_23;
  if(match_cons(t, sym_Match_1))
    {
      k_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_23;
  if(match_cons(t, sym_Seq_2))
    {
      m_23 = ATgetArgument(t, 0);
      o_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_23;
  if(match_cons(t, sym_Where_1))
    {
      n_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_23;
  if(match_cons(t, sym_Build_1))
    {
      p_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_23 = t;
    int d_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_6 = NULL,o_6 = NULL,p_6 = NULL,s_6 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty)))));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_6 = ATgetFirst((ATermList) t);
            {
              ATerm q_23 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = o_6;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm r_23 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) r_23) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            l_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, l_6, k_23, (ATerm) ATmakeAppl(sym__2, n_23, p_23));
        t = replace_application_0_0(t);
        if(match_cons(t, sym__2))
          {
            p_6 = ATgetArgument(t, 0);
            s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, p_6), (ATerm) ATmakeAppl(sym_Build_1, s_6)));
        ;
        LocalPopChoice(d_23);
      }
    else
      {
        t = a_23;
        {
          ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty)))));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_7 = ATgetFirst((ATermList) t);
              {
                ATerm s_23 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = c_7;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm t_23 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) t_23) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              b_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_23;
          {
            ATerm d_6 (ATerm t)
            {
              ATerm e_7 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  e_7 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, e_7);
              return(t);
            }
            ATerm e_6 (ATerm t)
            {
              ATerm f_7 = NULL,k_7 = NULL,m_7 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  k_7 = ATgetArgument(t, 0);
                  t = k_7;
                  if(match_cons(t, sym_Rule_3))
                    {
                      f_7 = ATgetArgument(t, 0);
                      {
                        ATerm u_23 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm v_23 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = f_7;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm x_23 = t;
                  int y_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          k_7 = ATgetArgument(t, 0);
                          {
                            ATerm z_23 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(y_23);
                      t = k_7;
                    }
                  else
                    {
                      t = x_23;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          k_7 = ATgetArgument(t, 0);
                          t = k_7;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm a_24 = t;
                          int b_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm d_24 = ATgetArgument(t, 0);
                                  ATerm e_24 = ATgetArgument(t, 1);
                                  m_7 = ATgetArgument(t, 2);
                                  {
                                    ATerm f_24 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(b_24);
                              t = m_7;
                              {
                                ATerm f_6 (ATerm t)
                                {
                                  ATerm v_7 = NULL;
                                  ATerm g_24 = t;
                                  int h_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          v_7 = ATgetArgument(t, 0);
                                          {
                                            ATerm i_24 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(h_24);
                                      t = v_7;
                                    }
                                  else
                                    {
                                      t = g_24;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          v_7 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = v_7;
                                    }
                                  return(t);
                                }
                                t = map_1_0(f_6, t);
                              }
                            }
                          else
                            {
                              t = a_24;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm j_24 = ATgetArgument(t, 0);
                                  ATerm k_24 = ATgetArgument(t, 1);
                                  m_7 = ATgetArgument(t, 2);
                                  {
                                    ATerm n_24 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = m_7;
                              {
                                ATerm h_6 (ATerm t)
                                {
                                  ATerm b_8 = NULL;
                                  ATerm o_24 = t;
                                  int q_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                          {
                                            ATerm s_24 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(q_24);
                                      t = b_8;
                                    }
                                  else
                                    {
                                      t = o_24;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          b_8 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = b_8;
                                    }
                                  return(t);
                                }
                                t = map_1_0(h_6, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(d_6, e_6, tboundin_3_0, t);
            {
              ATerm i_6 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              ATerm j_6 (ATerm t)
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm e_8 = NULL;
                  e_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_7, (ATerm) ATmakeAppl(sym_Var_1, e_8)), term_y_24);
                  {
                    ATerm n_6 (ATerm t)
                    {
                      t = term_t_24;
                      return(t);
                    }
                    t = assert_1_0(n_6, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_8);
                  }
                  return(t);
                }
                t = map_1_0(k_6, t);
                t = (ATerm) ATmakeAppl(sym__2, n_23, p_23);
                t = alltd_1_0(Replace_0_0, t);
                if(match_cons(t, sym__2))
                  {
                    if(((d_7 != NULL) && (d_7 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      d_7 = ATgetArgument(t, 0);
                    {
                      ATerm z_24 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = scope_2_0(i_6, j_6, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_23), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(d_7)), (ATerm) ATmakeAppl(sym_Build_1, p_23)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm g_25 (ATerm l_24, ATerm p_24, ATerm t)
  {
    ATerm v_24 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), p_24);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_24 = ATgetFirst((ATermList) t);
        {
          ATerm d_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = v_24;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm f_25 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) f_25) != ATmakeSymbol("l_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = l_24;
    return(t);
  }
  ATerm h_25 (ATerm w_24, ATerm x_24, ATerm t)
  {
    ATerm a_25 = NULL;
    t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), x_24);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_25 = ATgetFirst((ATermList) t);
        {
          ATerm i_25 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_25;
    if(match_cons(t, sym_Defined_1))
      {
        ATerm j_25 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) j_25) != ATmakeSymbol("j_0", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = w_24;
    return(t);
  }
  ATerm b_25 = NULL,c_25 = NULL,e_25 = NULL;
  c_25 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm l_25 = ATgetArgument(t, 0);
      e_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_25;
  if(match_cons(t, sym_Var_1))
    {
      b_25 = ATgetArgument(t, 0);
      {
        ATerm m_25 = t;
        int n_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), c_25);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_8 = ATgetFirst((ATermList) t);
                {
                  ATerm q_25 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = j_8;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm r_25 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) r_25) != ATmakeSymbol("u_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, b_25);
            ;
            LocalPopChoice(n_25);
          }
        else
          {
            t = m_25;
            {
              ATerm s_25 = t;
              int t_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_25(e_25, c_25, t);
                  ;
                  LocalPopChoice(t_25);
                }
              else
                {
                  t = s_25;
                  t = h_25(e_25, c_25, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_25(e_25, c_25, t);
          ;
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          t = h_25(e_25, c_25, t);
        }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm k_25 = NULL,o_25 = NULL,p_25 = NULL;
  if(match_cons(t, sym__2))
    {
      k_25 = ATgetArgument(t, 0);
      o_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm y_25 = ATgetArgument(t, 0);
            ATerm e_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(k_25, o_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm f_26 = ATgetFirst((ATermList) t);
            l_8 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_8;
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        t = (ATerm) ATempty;
      }
    p_25 = t;
    t = SSL_table_put(k_25, o_25, p_25);
    t = (ATerm) ATmakeAppl(sym__2, k_25, o_25);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm r_129 (ATerm), ATerm t)
{
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL;
  z_25 = t;
  t = r_129(t);
  a_26 = t;
  {
    ATerm i_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(a_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = i_26;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_26 = ATgetFirst((ATermList) t);
        b_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(a_26, (ATerm)ATmakeAppl(sym_Scopes_0), b_26);
    t = c_26;
    {
      ATerm t_6 (ATerm t)
      {
        ATerm d_26 = NULL;
        d_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_26, d_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(t_6, t);
      t = z_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm p_120 (ATerm), ATerm q_120 (ATerm), ATerm t)
{
  ATerm l_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_120(t);
      t = q_120(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = l_26;
      t = q_120(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm q_129 (ATerm), ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,j_26 = NULL;
  g_26 = t;
  t = q_129(t);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_26, term_n_26);
  {
    ATerm o_26 = t;
    int p_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_26 = ATgetArgument(t, 0);
            ATerm r_26 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(h_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_26);
      }
    else
      {
        t = o_26;
        t = (ATerm) ATempty;
      }
    j_26 = t;
    t = SSL_table_put(h_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(j_26), (ATerm) ATempty));
    t = g_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm s_129 (ATerm), ATerm t_129 (ATerm), ATerm t)
{
  t = begin_scope_1_0(s_129, t);
  {
    ATerm u_6 (ATerm t)
    {
      t = end_scope_1_0(s_129, t);
      return(t);
    }
    t = restore_always_2_0(t_129, u_6, t);
  }
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL;
  if(match_cons(t, sym__3))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
      u_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm v_6 (ATerm t)
    {
      t = term_t_24;
      return(t);
    }
    ATerm w_6 (ATerm t)
    {
      t = t_26;
      {
        ATerm x_6 (ATerm t)
        {
          ATerm x_26 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              x_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, x_26);
          return(t);
        }
        ATerm y_6 (ATerm t)
        {
          ATerm y_26 = NULL,c_27 = NULL,e_27 = NULL;
          if(match_cons(t, sym_LRule_1))
            {
              c_27 = ATgetArgument(t, 0);
              t = c_27;
              if(match_cons(t, sym_Rule_3))
                {
                  y_26 = ATgetArgument(t, 0);
                  {
                    ATerm w_26 = ATgetArgument(t, 1);
                  }
                  {
                    ATerm z_26 = ATgetArgument(t, 2);
                  }
                }
              else
                _fail(t);
              t = y_26;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm a_27 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Scope_2))
                    {
                      c_27 = ATgetArgument(t, 0);
                      {
                        ATerm d_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(b_27);
                  t = c_27;
                }
              else
                {
                  t = a_27;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      c_27 = ATgetArgument(t, 0);
                      t = c_27;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm f_27 = t;
                      int g_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm h_27 = ATgetArgument(t, 0);
                              ATerm i_27 = ATgetArgument(t, 1);
                              e_27 = ATgetArgument(t, 2);
                              {
                                ATerm j_27 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(g_27);
                          t = e_27;
                          {
                            ATerm z_6 (ATerm t)
                            {
                              ATerm n_27 = NULL;
                              ATerm k_27 = t;
                              int l_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      n_27 = ATgetArgument(t, 0);
                                      {
                                        ATerm m_27 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(l_27);
                                  t = n_27;
                                }
                              else
                                {
                                  t = k_27;
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
                            t = map_1_0(z_6, t);
                          }
                        }
                      else
                        {
                          t = f_27;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm o_27 = ATgetArgument(t, 0);
                              ATerm p_27 = ATgetArgument(t, 1);
                              e_27 = ATgetArgument(t, 2);
                              {
                                ATerm q_27 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = e_27;
                          {
                            ATerm a_7 (ATerm t)
                            {
                              ATerm t_27 = NULL;
                              ATerm r_27 = t;
                              int s_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      t_27 = ATgetArgument(t, 0);
                                      {
                                        ATerm u_27 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(s_27);
                                  t = t_27;
                                }
                              else
                                {
                                  t = r_27;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      t_27 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_27;
                                }
                              return(t);
                            }
                            t = map_1_0(a_7, t);
                          }
                        }
                    }
                }
            }
          return(t);
        }
        t = free_vars_3_0(x_6, y_6, tboundin_3_0, t);
        {
          ATerm g_7 (ATerm t)
          {
            ATerm w_27 = NULL;
            w_27 = t;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, s_26, (ATerm) ATmakeAppl(sym_Var_1, w_27)), term_x_27);
            {
              ATerm h_7 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              t = assert_1_0(h_7, t);
              t = w_27;
            }
            return(t);
          }
          t = map_1_0(g_7, t);
          t = u_26;
          t = alltd_1_0(Replace_0_0, t);
          if(((v_26 != NULL) && (v_26 != t)))
            _fail(t);
          else
            v_26 = t;
        }
      }
      return(t);
    }
    t = scope_2_0(v_6, w_6, t);
    t = not_null(v_26);
  }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  z_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      a_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_31;
  if(match_cons(t, sym_CallT_3))
    {
      b_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
      e_31 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = b_31;
  if(match_cons(t, sym_SVar_1))
    {
      c_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_31;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = d_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = e_31;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = f_31;
  if(match_cons(t, sym_Seq_2))
    {
      g_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_31;
  if(match_cons(t, sym_Match_1))
    {
      h_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_31;
  if(match_cons(t, sym_Build_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty))));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_8 = ATgetFirst((ATermList) t);
            {
              ATerm a_28 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = t_8;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_28 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_28) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            s_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, s_8, h_31, j_31);
        t = replace_application_0_0(t);
        u_8 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_31), (ATerm) ATmakeAppl(sym_Build_1, u_8));
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty))));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_9 = ATgetFirst((ATermList) t);
              {
                ATerm c_28 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = c_9;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_28 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_28) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              b_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_31;
          {
            ATerm j_7 (ATerm t)
            {
              ATerm e_9 = NULL;
              if(match_cons(t, sym_Var_1))
                {
                  e_9 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(ATempty, e_9);
              return(t);
            }
            ATerm l_7 (ATerm t)
            {
              ATerm f_9 = NULL,k_9 = NULL,m_9 = NULL;
              if(match_cons(t, sym_LRule_1))
                {
                  k_9 = ATgetArgument(t, 0);
                  t = k_9;
                  if(match_cons(t, sym_Rule_3))
                    {
                      f_9 = ATgetArgument(t, 0);
                      {
                        ATerm e_28 = ATgetArgument(t, 1);
                      }
                      {
                        ATerm f_28 = ATgetArgument(t, 2);
                      }
                    }
                  else
                    _fail(t);
                  t = f_9;
                  t = tvars_0_0(t);
                }
              else
                {
                  ATerm g_28 = t;
                  int h_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Scope_2))
                        {
                          k_9 = ATgetArgument(t, 0);
                          {
                            ATerm i_28 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(h_28);
                      t = k_9;
                    }
                  else
                    {
                      t = g_28;
                      if(match_cons(t, sym_DynamicRules_1))
                        {
                          k_9 = ATgetArgument(t, 0);
                          t = k_9;
                          t = tvars_0_0(t);
                        }
                      else
                        {
                          ATerm j_28 = t;
                          int k_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_SDefT_4))
                                {
                                  ATerm l_28 = ATgetArgument(t, 0);
                                  ATerm m_28 = ATgetArgument(t, 1);
                                  m_9 = ATgetArgument(t, 2);
                                  {
                                    ATerm n_28 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_28);
                              t = m_9;
                              {
                                ATerm n_7 (ATerm t)
                                {
                                  ATerm u_9 = NULL;
                                  ATerm o_28 = t;
                                  int p_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          u_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm q_28 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(p_28);
                                      t = u_9;
                                    }
                                  else
                                    {
                                      t = o_28;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          u_9 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = u_9;
                                    }
                                  return(t);
                                }
                                t = map_1_0(n_7, t);
                              }
                            }
                          else
                            {
                              t = j_28;
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  ATerm r_28 = ATgetArgument(t, 0);
                                  ATerm s_28 = ATgetArgument(t, 1);
                                  m_9 = ATgetArgument(t, 2);
                                  {
                                    ATerm t_28 = ATgetArgument(t, 3);
                                  }
                                }
                              else
                                _fail(t);
                              t = m_9;
                              {
                                ATerm o_7 (ATerm t)
                                {
                                  ATerm b_10 = NULL;
                                  ATerm u_28 = t;
                                  int v_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_VarDec_2))
                                        {
                                          b_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm w_28 = ATgetArgument(t, 1);
                                          }
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(v_28);
                                      t = b_10;
                                    }
                                  else
                                    {
                                      t = u_28;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          b_10 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = b_10;
                                    }
                                  return(t);
                                }
                                t = map_1_0(o_7, t);
                              }
                            }
                        }
                    }
                }
              return(t);
            }
            t = free_vars_3_0(j_7, l_7, tboundin_3_0, t);
            {
              ATerm p_7 (ATerm t)
              {
                t = term_t_24;
                return(t);
              }
              ATerm q_7 (ATerm t)
              {
                ATerm s_7 (ATerm t)
                {
                  ATerm e_10 = NULL;
                  e_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_9, (ATerm) ATmakeAppl(sym_Var_1, e_10)), term_y_28);
                  {
                    ATerm t_7 (ATerm t)
                    {
                      t = term_t_24;
                      return(t);
                    }
                    t = assert_1_0(t_7, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_10);
                  }
                  return(t);
                }
                t = map_1_0(s_7, t);
                t = j_31;
                t = alltd_1_0(Replace_0_0, t);
                if(((d_9 != NULL) && (d_9 != t)))
                  _fail(t);
                else
                  d_9 = t;
                return(t);
              }
              t = scope_2_0(p_7, q_7, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_31), (ATerm) ATmakeAppl(sym_Build_1, not_null(d_9)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm BottomupOverConstructor_0_0 (ATerm t)
{
  ATerm n_31 = NULL,p_31 = NULL,r_31 = NULL,t_31 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm z_28 = ATgetArgument(t, 0);
      if(match_cons(z_28, sym_CallT_3))
        {
          ATerm b_29 = ATgetArgument(z_28, 0);
          if(match_cons(b_29, sym_SVar_1))
            {
              ATerm e_29 = ATgetArgument(b_29, 0);
              if((ATgetSymbol((ATermAppl) e_29) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm c_29 = ATgetArgument(z_28, 1);
            if(((ATgetType(c_29) == AT_LIST) && !(ATisEmpty(c_29))))
              {
                n_31 = ATgetFirst((ATermList) c_29);
                {
                  ATerm f_29 = (ATerm) ATgetNext((ATermList) c_29);
                  if(((ATgetType(f_29) != AT_LIST) || !(ATisEmpty(f_29))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          {
            ATerm d_29 = ATgetArgument(z_28, 2);
            if(((ATgetType(d_29) != AT_LIST) || !(ATisEmpty(d_29))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm a_29 = ATgetArgument(t, 1);
        if(match_cons(a_29, sym_Op_2))
          {
            p_31 = ATgetArgument(a_29, 0);
            r_31 = ATgetArgument(a_29, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_31;
  {
    ATerm u_7 (ATerm t)
    {
      ATerm v_31 = NULL;
      v_31 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, n_31), (ATerm) ATempty), v_31);
      return(t);
    }
    t = map_1_0(u_7, t);
    t_31 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, n_31, (ATerm) ATmakeAppl(sym_Op_2, p_31, t_31));
  }
  return(t);
}
ATerm SeqOverLChoiceR_0_0 (ATerm t)
{
  ATerm w_31 = NULL,z_31 = NULL,b_32 = NULL,d_32 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm i_29 = ATgetArgument(t, 0);
      if(match_cons(i_29, sym_LChoice_2))
        {
          w_31 = ATgetArgument(i_29, 0);
          z_31 = ATgetArgument(i_29, 1);
        }
      else
        _fail(t);
      b_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty), b_32));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_32 = ATgetFirst((ATermList) t);
      {
        ATerm j_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = d_32;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm k_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_29) != ATmakeSymbol("f_2", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, w_31, b_32), (ATerm) ATmakeAppl(sym_Seq_2, z_31, b_32));
  return(t);
}
ATerm SeqOverChoiceR_0_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm l_29 = ATgetArgument(t, 0);
      if(match_cons(l_29, sym_Choice_2))
        {
          e_32 = ATgetArgument(l_29, 0);
          f_32 = ATgetArgument(l_29, 1);
        }
      else
        _fail(t);
      g_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty), g_32));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_32 = ATgetFirst((ATermList) t);
      {
        ATerm m_29 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = h_32;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_29 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_29) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, e_32, g_32), (ATerm) ATmakeAppl(sym_Seq_2, f_32, g_32));
  return(t);
}
ATerm bottomup_1_0 (ATerm j_117 (ATerm), ATerm t)
{
  ATerm w_7 (ATerm t)
  {
    t = bottomup_1_0(j_117, t);
    return(t);
  }
  t = SRTS_all(w_7, t);
  t = j_117(t);
  return(t);
}
ATerm innermost_1_0 (ATerm z_132 (ATerm), ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm o_29 = t;
    int p_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_132(t);
        t = innermost_1_0(z_132, t);
        ;
        LocalPopChoice(p_29);
      }
    else
      {
        t = o_29;
      }
    return(t);
  }
  t = bottomup_1_0(x_7, t);
  return(t);
}
ATerm Build_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,l_32 = NULL,n_32 = NULL;
  n_32 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_32);
  i_32 = t;
  t = j_32;
  t = g_107(t);
  l_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, l_32), i_32);
  return(t);
}
ATerm Seq_2_0 (ATerm m_107 (ATerm), ATerm n_107 (ATerm), ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL;
  w_32 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_32 = ATgetArgument(t, 0);
      t_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_32);
  r_32 = t;
  t = s_32;
  t = m_107(t);
  u_32 = t;
  t = t_32;
  t = n_107(t);
  v_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, u_32, v_32), r_32);
  return(t);
}
ATerm Match_1_0 (ATerm f_107 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Match_1))
    {
      a_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_33);
  z_32 = t;
  t = a_33;
  t = f_107(t);
  b_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, b_33), z_32);
  return(t);
}
ATerm LChoice_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,l_33 = NULL,m_33 = NULL,p_33 = NULL,q_33 = NULL;
  q_33 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      g_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_33);
  f_33 = t;
  t = g_33;
  t = o_107(t);
  m_33 = t;
  t = l_33;
  t = p_107(t);
  p_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, m_33, p_33), f_33);
  return(t);
}
ATerm Choice_2_0 (ATerm m_106 (ATerm), ATerm n_106 (ATerm), ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL;
  f_34 = t;
  if(match_cons(t, sym_Choice_2))
    {
      u_33 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_34);
  t_33 = t;
  t = u_33;
  t = m_106(t);
  d_34 = t;
  t = c_34;
  t = n_106(t);
  e_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, d_34, e_34), t_33);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm q_29 = t;
  int r_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_29 = t;
      int t_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(t_29);
        }
      else
        {
          t = s_29;
          {
            ATerm u_29 = t;
            int v_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                ;
                LocalPopChoice(v_29);
              }
            else
              {
                t = u_29;
                {
                  ATerm w_29 = t;
                  int x_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                      ;
                      LocalPopChoice(x_29);
                    }
                  else
                    {
                      t = w_29;
                      {
                        ATerm y_29 = t;
                        int z_29 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_7 (ATerm t)
                            {
                              ATerm z_7 (ATerm t)
                              {
                                t = Match_1_0(_id, t);
                                return(t);
                              }
                              ATerm a_8 (ATerm t)
                              {
                                t = Build_1_0(_id, t);
                                return(t);
                              }
                              t = Seq_2_0(z_7, a_8, t);
                              return(t);
                            }
                            t = Scope_2_0(_id, y_7, t);
                            ;
                            LocalPopChoice(z_29);
                          }
                        else
                          {
                            t = y_29;
                            {
                              ATerm a_30 = t;
                              int b_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_8 (ATerm t)
                                  {
                                    ATerm d_8 (ATerm t)
                                    {
                                      t = Match_1_0(_id, t);
                                      return(t);
                                    }
                                    ATerm f_8 (ATerm t)
                                    {
                                      ATerm g_8 (ATerm t)
                                      {
                                        t = Build_1_0(_id, t);
                                        return(t);
                                      }
                                      t = Seq_2_0(_id, g_8, t);
                                      return(t);
                                    }
                                    t = Seq_2_0(d_8, f_8, t);
                                    return(t);
                                  }
                                  t = Scope_2_0(_id, c_8, t);
                                  ;
                                  LocalPopChoice(b_30);
                                }
                              else
                                {
                                  t = a_30;
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
      LocalPopChoice(r_29);
    }
  else
    {
      t = q_29;
    }
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_30, (ATerm) ATmakeAppl(sym_Defined_2, term_j_30, p_34));
  {
    ATerm h_8 (ATerm t)
    {
      t = term_k_30;
      return(t);
    }
    t = assert_1_0(h_8, t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_30, (ATerm) ATmakeAppl(sym_Defined_2, term_p_30, p_34));
    {
      ATerm i_8 (ATerm t)
      {
        t = term_q_30;
        return(t);
      }
      t = assert_1_0(i_8, t);
      t = p_34;
    }
  }
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_r_30, q_34), term_t_30);
  {
    ATerm k_8 (ATerm t)
    {
      t = term_u_30;
      return(t);
    }
    t = assert_1_0(k_8, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_v_30, q_34), term_x_30);
    {
      ATerm n_8 (ATerm t)
      {
        t = term_y_30;
        return(t);
      }
      t = assert_1_0(n_8, t);
      t = q_34;
    }
  }
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm p_35 = NULL,v_35 = NULL,y_35 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_31 = ATgetArgument(t, 0);
      if(match_cons(k_31, sym_SVar_1))
        {
          ATerm o_31 = ATgetArgument(k_31, 0);
          if((ATgetSymbol((ATermAppl) o_31) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm l_31 = ATgetArgument(t, 1);
        if(((ATgetType(l_31) == AT_LIST) && !(ATisEmpty(l_31))))
          {
            p_35 = ATgetFirst((ATermList) l_31);
            {
              ATerm q_31 = (ATerm) ATgetNext((ATermList) l_31);
              if(((ATgetType(q_31) != AT_LIST) || !(ATisEmpty(q_31))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm m_31 = ATgetArgument(t, 2);
        if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm o_8 (ATerm t)
    {
      ATerm z_35 = NULL;
      z_35 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue))));
      t = z_35;
      return(t);
    }
    t = if_verbose2_1_0(o_8, t);
    t = new_0_0(t);
    v_35 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_35), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = seq_over_choice_0_0(t);
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_35), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = bottomup_to_var_0_0(t);
    t = p_35;
    t = inline_rules_0_0(t);
    y_35 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, v_35, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_e_30, y_35), (ATerm) ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_35), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_t_21))), (ATerm) ATempty);
    {
      ATerm p_8 (ATerm t)
      {
        ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,f_36 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            b_36 = ATgetArgument(t, 0);
            c_36 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = c_36;
        if(match_cons(t, sym_Choice_2))
          {
            d_36 = ATgetArgument(t, 0);
            f_36 = ATgetArgument(t, 1);
            t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, b_36, d_36), (ATerm) ATmakeAppl(sym_Seq_2, b_36, f_36));
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                d_36 = ATgetArgument(t, 0);
                f_36 = ATgetArgument(t, 1);
                t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, b_36, d_36), (ATerm) ATmakeAppl(sym_Seq_2, b_36, f_36));
              }
            else
              {
                if(match_cons(t, sym_Scope_2))
                  {
                    d_36 = ATgetArgument(t, 0);
                    f_36 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Scope_2, d_36, (ATerm) ATmakeAppl(sym_Seq_2, b_36, f_36));
              }
          }
        return(t);
      }
      t = innermost_1_0(p_8, t);
      {
        ATerm q_8 (ATerm t)
        {
          ATerm s_31 = t;
          int u_31 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverChoiceR_0_0(t);
              ;
              LocalPopChoice(u_31);
            }
          else
            {
              t = s_31;
              {
                ATerm x_31 = t;
                int y_31 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = SeqOverLChoiceR_0_0(t);
                    ;
                    LocalPopChoice(y_31);
                  }
                else
                  {
                    t = x_31;
                    {
                      ATerm a_32 = t;
                      int c_32 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,c_37 = NULL;
                          if(match_cons(t, sym_Seq_2))
                            {
                              y_36 = ATgetArgument(t, 0);
                              c_37 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = y_36;
                          if(match_cons(t, sym_Scope_2))
                            {
                              z_36 = ATgetArgument(t, 0);
                              a_37 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Scope_2, z_36, (ATerm) ATmakeAppl(sym_Seq_2, a_37, c_37));
                          ;
                          LocalPopChoice(c_32);
                        }
                      else
                        {
                          t = a_32;
                          {
                            ATerm k_32 = t;
                            int m_32 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = AssociateR_0_0(t);
                                ;
                                LocalPopChoice(m_32);
                              }
                            else
                              {
                                t = k_32;
                                {
                                  ATerm o_32 = t;
                                  int p_32 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
                                      if(match_cons(t, sym_Seq_2))
                                        {
                                          k_37 = ATgetArgument(t, 0);
                                          m_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = k_37;
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          l_37 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, m_37, l_37));
                                      ;
                                      LocalPopChoice(p_32);
                                    }
                                  else
                                    {
                                      t = o_32;
                                      t = BottomupOverConstructor_0_0(t);
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
        t = innermost_1_0(q_8, t);
        {
          ATerm r_8 (ATerm t)
          {
            ATerm q_32 = t;
            int x_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BottomupToVarIsId_UnCond_0_0(t);
                ;
                LocalPopChoice(x_32);
              }
            else
              {
                t = q_32;
                {
                  ATerm y_32 = t;
                  int d_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = BottomupToVarIsId_Cond_0_0(t);
                      ;
                      LocalPopChoice(d_33);
                    }
                  else
                    {
                      t = y_32;
                      {
                        ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
                        if(match_cons(t, sym_CallT_3))
                          {
                            q_37 = ATgetArgument(t, 0);
                            s_37 = ATgetArgument(t, 1);
                            t_37 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        t = q_37;
                        if(match_cons(t, sym_SVar_1))
                          {
                            r_37 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = r_37;
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                          _fail(t);
                        t = s_37;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = t_37;
                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                          _fail(t);
                        t = term_t_21;
                      }
                    }
                }
              }
            return(t);
          }
          t = alltd_1_0(r_8, t);
          {
            ATerm e_33 = t;
            if((PushChoice() == 0))
              {
                ATerm u_37 = NULL;
                ATerm v_8 (ATerm t)
                {
                  if(match_cons(t, sym_CallT_3))
                    {
                      ATerm h_33 = ATgetArgument(t, 0);
                      if(match_cons(h_33, sym_SVar_1))
                        {
                          ATerm k_33 = ATgetArgument(h_33, 0);
                          if((ATgetSymbol((ATermAppl) k_33) != ATmakeSymbol("mark", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      {
                        ATerm i_33 = ATgetArgument(t, 1);
                        if(((ATgetType(i_33) != AT_LIST) || !(ATisEmpty(i_33))))
                          _fail(t);
                      }
                      {
                        ATerm j_33 = ATgetArgument(t, 2);
                        if(((ATgetType(j_33) != AT_LIST) || !(ATisEmpty(j_33))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  return(t);
                }
                t = oncetd_1_0(v_8, t);
                u_37 = t;
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue))));
                t = u_37;
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_33;
              }
            {
              ATerm w_8 (ATerm t)
              {
                ATerm n_33 = t;
                int o_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = desugarRule_0_0(t);
                    ;
                    LocalPopChoice(o_33);
                  }
                else
                  {
                    t = n_33;
                  }
                {
                  ATerm x_8 (ATerm t)
                  {
                    ATerm r_33 = t;
                    int s_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = LiftPrimArgs_0_0(t);
                        ;
                        LocalPopChoice(s_33);
                      }
                    else
                      {
                        t = r_33;
                        {
                          ATerm v_33 = t;
                          int w_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = HL_0_0(t);
                              ;
                              LocalPopChoice(w_33);
                            }
                          else
                            {
                              t = v_33;
                              {
                                ATerm x_33 = t;
                                int y_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_33 = t;
                                    int a_34 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Bapp0_0_0(t);
                                        ;
                                        LocalPopChoice(a_34);
                                      }
                                    else
                                      {
                                        t = z_33;
                                        {
                                          ATerm b_34 = t;
                                          int g_34 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  w_37 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = w_37;
                                              if(match_cons(t, sym_RootApp_1))
                                                {
                                                  x_37 = ATgetArgument(t, 0);
                                                  t = x_37;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_App_2))
                                                    {
                                                      x_37 = ATgetArgument(t, 0);
                                                      y_37 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_37), x_37);
                                                }
                                              ;
                                              LocalPopChoice(g_34);
                                            }
                                          else
                                            {
                                              t = b_34;
                                              t = Bapp2_0_0(t);
                                            }
                                        }
                                      }
                                    ;
                                    LocalPopChoice(y_33);
                                  }
                                else
                                  {
                                    t = x_33;
                                    {
                                      ATerm h_34 = t;
                                      int i_34 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_34 = t;
                                          int k_34 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
                                              if(match_cons(t, sym_Match_1))
                                                {
                                                  i_10 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = i_10;
                                              {
                                                ATerm y_8 (ATerm t)
                                                {
                                                  if(match_cons(t, sym_RootApp_1))
                                                    {
                                                      ATerm l_34 = ATgetArgument(t, 0);
                                                      if(match_cons(l_34, sym_Match_1))
                                                        {
                                                          if(((j_10 != NULL) && (j_10 != ATgetArgument(l_34, 0))))
                                                            _fail(ATgetArgument(l_34, 0));
                                                          else
                                                            j_10 = ATgetArgument(l_34, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = not_null(j_10);
                                                  return(t);
                                                }
                                                t = pat_td_1_0(y_8, t);
                                                k_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_Match_1, k_10);
                                              }
                                              ;
                                              LocalPopChoice(k_34);
                                            }
                                          else
                                            {
                                              t = j_34;
                                              {
                                                ATerm m_34 = t;
                                                int n_34 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
                                                    if(match_cons(t, sym_Match_1))
                                                      {
                                                        d_38 = ATgetArgument(t, 0);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = d_38;
                                                    if(match_cons(t, sym_RootApp_1))
                                                      {
                                                        e_38 = ATgetArgument(t, 0);
                                                        t = e_38;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_App_2))
                                                          {
                                                            e_38 = ATgetArgument(t, 0);
                                                            f_38 = ATgetArgument(t, 1);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_BA_2, e_38, f_38);
                                                      }
                                                    ;
                                                    LocalPopChoice(n_34);
                                                  }
                                                else
                                                  {
                                                    t = m_34;
                                                    t = Mapp2_0_0(t);
                                                  }
                                              }
                                            }
                                          ;
                                          LocalPopChoice(i_34);
                                        }
                                      else
                                        {
                                          t = h_34;
                                          t = Expl_0_0(t);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                    return(t);
                  }
                  t = repeat_1_0(x_8, t);
                }
                return(t);
              }
              t = topdown_1_0(w_8, t);
              {
                ATerm z_8 (ATerm t)
                {
                  ATerm j_38 = NULL;
                  j_38 = t;
                  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue))));
                  t = j_38;
                  return(t);
                }
                t = if_verbose1_1_0(z_8, t);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm a_119 (ATerm), ATerm t)
{
  ATerm k_38 (ATerm t)
  {
    ATerm o_34 = t;
    int r_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_119(t);
        ;
        LocalPopChoice(r_34);
      }
    else
      {
        t = o_34;
        t = SRTS_all(k_38, t);
      }
    return(t);
  }
  t = k_38(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  t = new_0_0(t);
  c_39 = t;
  {
    ATerm s_34 = t;
    int t_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_29, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_39), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(t_34);
      }
    else
      {
        t = s_34;
        {
          ATerm a_9 (ATerm t)
          {
            ATerm d_39 = NULL;
            d_39 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue))));
            t = d_39;
            return(t);
          }
          t = if_verbose2_1_0(a_9, t);
          _fail(t);
        }
      }
    {
      ATerm u_34 = t;
      int v_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL,j_39 = NULL,o_39 = NULL,p_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,z_39 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL;
          e_39 = t;
          if(match_cons(t, sym_Seq_2))
            {
              f_39 = ATgetArgument(t, 0);
              x_39 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = f_39;
          if(match_cons(t, sym_All_1))
            {
              g_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_39;
          if(match_cons(t, sym_CallT_3))
            {
              h_39 = ATgetArgument(t, 0);
              j_39 = ATgetArgument(t, 1);
              w_39 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = h_39;
          if(match_cons(t, sym_SVar_1))
            {
              i_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = i_39;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = j_39;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_39 = ATgetFirst((ATermList) t);
              v_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_39;
          if(match_cons(t, sym_CallT_3))
            {
              p_39 = ATgetArgument(t, 0);
              t_39 = ATgetArgument(t, 1);
              u_39 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = p_39;
          if(match_cons(t, sym_SVar_1))
            {
              s_39 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = w_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_39;
          if(match_cons(t, sym_CallT_3))
            {
              z_39 = ATgetArgument(t, 0);
              d_40 = ATgetArgument(t, 1);
              e_40 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = z_39;
          if(match_cons(t, sym_SVar_1))
            {
              c_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = s_39;
          if((c_39 != t))
            {
              _fail(t);
            }
          t = c_40;
          if((s_39 != t))
            {
              _fail(t);
            }
          t = e_39;
          ;
          LocalPopChoice(v_34);
        }
      else
        {
          t = u_34;
          {
            ATerm g_9 (ATerm t)
            {
              ATerm l_10 = NULL;
              l_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_10), (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue))));
              t = l_10;
              return(t);
            }
            t = if_verbose1_1_0(g_9, t);
            _fail(t);
          }
        }
      {
        ATerm h_9 (ATerm t)
        {
          ATerm f_40 = NULL;
          f_40 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue))));
          t = f_40;
          return(t);
        }
        t = if_verbose2_1_0(h_9, t);
        t = b_39;
      }
    }
  }
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  a_46 = t;
  t = new_0_0(t);
  b_46 = t;
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_z_34, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_46), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        {
          ATerm j_9 (ATerm t)
          {
            ATerm c_46 = NULL;
            c_46 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue))));
            t = c_46;
            return(t);
          }
          t = if_verbose2_1_0(j_9, t);
          _fail(t);
        }
      }
    {
      ATerm a_35 = t;
      int b_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_46 = NULL,e_46 = NULL,f_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,w_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,n_47 = NULL,o_47 = NULL,p_47 = NULL,t_47 = NULL,v_47 = NULL,x_47 = NULL,z_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL,h_48 = NULL,j_48 = NULL,l_48 = NULL,n_48 = NULL,o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,v_48 = NULL;
          i_47 = t;
          if(match_cons(t, sym_Call_2))
            {
              j_47 = ATgetArgument(t, 0);
              n_47 = ATgetArgument(t, 1);
              t = j_47;
              if(match_cons(t, sym_SVar_1))
                {
                  k_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_47;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = n_47;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_47 = ATgetFirst((ATermList) t);
                  t_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_47;
              if(match_cons(t, sym_Call_2))
                {
                  p_47 = ATgetArgument(t, 0);
                  t_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = p_47;
              if(match_cons(t, sym_SVar_1))
                {
                  d_46 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_46;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = t_47;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_47 = ATgetFirst((ATermList) t);
                  s_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = v_47;
              if(match_cons(t, sym_Seq_2))
                {
                  x_47 = ATgetArgument(t, 0);
                  e_48 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_47;
              if(match_cons(t, sym_CallT_3))
                {
                  z_47 = ATgetArgument(t, 0);
                  c_48 = ATgetArgument(t, 1);
                  d_48 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_47;
              if(match_cons(t, sym_SVar_1))
                {
                  b_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_48;
              if(match_cons(t, sym_CallT_3))
                {
                  f_48 = ATgetArgument(t, 0);
                  h_48 = ATgetArgument(t, 1);
                  r_48 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = f_48;
              if(match_cons(t, sym_SVar_1))
                {
                  g_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = g_48;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = h_48;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_48 = ATgetFirst((ATermList) t);
                  q_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = j_48;
              if(match_cons(t, sym_CallT_3))
                {
                  l_48 = ATgetArgument(t, 0);
                  o_48 = ATgetArgument(t, 1);
                  p_48 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_48;
              if(match_cons(t, sym_SVar_1))
                {
                  n_48 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_48;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_48;
              if((b_46 != t))
                {
                  _fail(t);
                }
              t = n_48;
              if((b_48 != t))
                {
                  _fail(t);
                }
              t = i_47;
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  j_47 = ATgetArgument(t, 0);
                  n_47 = ATgetArgument(t, 1);
                  v_48 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = j_47;
              if(match_cons(t, sym_SVar_1))
                {
                  k_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_47;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = n_47;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_47 = ATgetFirst((ATermList) t);
                  t_48 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_47;
              if(match_cons(t, sym_Rec_2))
                {
                  p_47 = ATgetArgument(t, 0);
                  t_47 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = t_47;
              if(match_cons(t, sym_CallT_3))
                {
                  v_47 = ATgetArgument(t, 0);
                  s_48 = ATgetArgument(t, 1);
                  h_47 = ATgetArgument(t, 2);
                  t = v_47;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_47;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = s_48;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_46 = ATgetFirst((ATermList) t);
                      g_47 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_46;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_46 = ATgetArgument(t, 0);
                      n_46 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_46;
                  if(match_cons(t, sym_CallT_3))
                    {
                      j_46 = ATgetArgument(t, 0);
                      l_46 = ATgetArgument(t, 1);
                      m_46 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = j_46;
                  if(match_cons(t, sym_SVar_1))
                    {
                      k_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_46;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_46;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_46;
                  if(match_cons(t, sym_CallT_3))
                    {
                      o_46 = ATgetArgument(t, 0);
                      q_46 = ATgetArgument(t, 1);
                      f_47 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = o_46;
                  if(match_cons(t, sym_SVar_1))
                    {
                      p_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = p_46;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = q_46;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_46 = ATgetFirst((ATermList) t);
                      c_47 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = r_46;
                  if(match_cons(t, sym_CallT_3))
                    {
                      w_46 = ATgetArgument(t, 0);
                      a_47 = ATgetArgument(t, 1);
                      b_47 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = w_46;
                  if(match_cons(t, sym_SVar_1))
                    {
                      z_46 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = a_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_46;
                  if((b_46 != t))
                    {
                      _fail(t);
                    }
                  t = z_46;
                  if((p_47 != t))
                    {
                      _fail(t);
                    }
                  t = i_47;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      v_47 = ATgetArgument(t, 0);
                      s_48 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = v_47;
                  if(match_cons(t, sym_Seq_2))
                    {
                      x_47 = ATgetArgument(t, 0);
                      e_48 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = x_47;
                  if(match_cons(t, sym_CallT_3))
                    {
                      z_47 = ATgetArgument(t, 0);
                      c_48 = ATgetArgument(t, 1);
                      d_48 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = z_47;
                  if(match_cons(t, sym_SVar_1))
                    {
                      b_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_48;
                  if(match_cons(t, sym_CallT_3))
                    {
                      f_48 = ATgetArgument(t, 0);
                      h_48 = ATgetArgument(t, 1);
                      r_48 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = f_48;
                  if(match_cons(t, sym_SVar_1))
                    {
                      g_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = g_48;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = h_48;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_48 = ATgetFirst((ATermList) t);
                      q_48 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = j_48;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_48 = ATgetArgument(t, 0);
                      o_48 = ATgetArgument(t, 1);
                      p_48 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_48;
                  if(match_cons(t, sym_SVar_1))
                    {
                      n_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = r_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_48;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_48;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_48;
                  if((b_46 != t))
                    {
                      _fail(t);
                    }
                  t = n_48;
                  if((p_47 != t))
                    {
                      _fail(t);
                    }
                  t = i_47;
                }
            }
          ;
          LocalPopChoice(b_35);
        }
      else
        {
          t = a_35;
          {
            ATerm l_9 (ATerm t)
            {
              ATerm p_10 = NULL;
              p_10 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_10), (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue))));
              t = p_10;
              return(t);
            }
            t = if_verbose1_1_0(l_9, t);
            _fail(t);
          }
        }
      {
        ATerm n_9 (ATerm t)
        {
          ATerm a_49 = NULL;
          a_49 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue))));
          t = a_49;
          return(t);
        }
        t = if_verbose2_1_0(n_9, t);
        t = a_46;
      }
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,i_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
  if(match_cons(t, sym__2))
    {
      i_49 = ATgetArgument(t, 0);
      k_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_49;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_49;
  if(match_cons(t, sym_Where_1))
    {
      l_49 = ATgetArgument(t, 0);
      t = l_49;
      if(match_cons(t, sym_Prim_2))
        {
          f_49 = ATgetArgument(t, 0);
          g_49 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          l_49 = ATgetArgument(t, 0);
          m_49 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, l_49, m_49);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              l_49 = ATgetArgument(t, 0);
              m_49 = ATgetArgument(t, 1);
              n_49 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL,c_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_35 = ATgetArgument(t, 0);
      if(match_cons(d_35, sym_Build_1))
        {
          ATerm f_35 = ATgetArgument(d_35, 0);
          if(match_cons(f_35, sym_Op_2))
            {
              a_50 = ATgetArgument(f_35, 0);
              z_49 = ATgetArgument(f_35, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm e_35 = ATgetArgument(t, 1);
        if(match_cons(e_35, sym_Match_1))
          {
            ATerm g_35 = ATgetArgument(e_35, 0);
            if(match_cons(g_35, sym_Op_2))
              {
                if((a_50 != ATgetArgument(g_35, 0)))
                  {
                    _fail(ATgetArgument(g_35, 0));
                  }
                b_50 = ATgetArgument(g_35, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, z_49, b_50);
  {
    ATerm o_9 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm h_35 = ATgetArgument(t, 0);
          if(((ATgetType(h_35) != AT_LIST) || !(ATisEmpty(h_35))))
            _fail(t);
          {
            ATerm i_35 = ATgetArgument(t, 1);
            if(((ATgetType(i_35) != AT_LIST) || !(ATisEmpty(i_35))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm p_9 (ATerm t)
    {
      ATerm d_50 = NULL,e_50 = NULL,g_50 = NULL,h_50 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm j_35 = ATgetArgument(t, 0);
          if(((ATgetType(j_35) == AT_LIST) && !(ATisEmpty(j_35))))
            {
              d_50 = ATgetFirst((ATermList) j_35);
              g_50 = (ATerm) ATgetNext((ATermList) j_35);
            }
          else
            _fail(t);
          {
            ATerm k_35 = ATgetArgument(t, 1);
            if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
              {
                e_50 = ATgetFirst((ATermList) k_35);
                h_50 = (ATerm) ATgetNext((ATermList) k_35);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_50, e_50), (ATerm) ATmakeAppl(sym__2, g_50, h_50));
      return(t);
    }
    ATerm q_9 (ATerm t)
    {
      ATerm i_50 = NULL,j_50 = NULL;
      if(match_cons(t, sym__2))
        {
          i_50 = ATgetArgument(t, 0);
          j_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(j_50), i_50);
      return(t);
    }
    ATerm r_9 (ATerm t)
    {
      ATerm k_50 = NULL,l_50 = NULL;
      if(match_cons(t, sym__2))
        {
          k_50 = ATgetArgument(t, 0);
          l_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_50), (ATerm) ATmakeAppl(sym_Match_1, l_50));
      return(t);
    }
    t = genzip_4_0(o_9, p_9, q_9, r_9, t);
    c_50 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_50), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, a_50, z_49)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_50 = NULL,o_50 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_35 = ATgetArgument(t, 0);
      if(match_cons(l_35, sym_Build_1))
        {
          ATerm n_35 = ATgetArgument(l_35, 0);
          if(match_cons(n_35, sym_Op_2))
            {
              m_50 = ATgetArgument(n_35, 0);
              {
                ATerm o_35 = ATgetArgument(n_35, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm m_35 = ATgetArgument(t, 1);
        if(match_cons(m_35, sym_Match_1))
          {
            ATerm q_35 = ATgetArgument(m_35, 0);
            if(match_cons(q_35, sym_Op_2))
              {
                o_50 = ATgetArgument(q_35, 0);
                {
                  ATerm r_35 = ATgetArgument(q_35, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, m_50, o_50);
  {
    ATerm s_35 = t;
    if((PushChoice() == 0))
      {
        ATerm p_50 = NULL;
        if(match_cons(t, sym__2))
          {
            p_50 = ATgetArgument(t, 0);
            if((p_50 != ATgetArgument(t, 1)))
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
    t = term_t_35;
  }
  return(t);
}
ATerm BuildMatch_0_0 (ATerm t)
{
  ATerm k_54 (ATerm l_53, ATerm m_53, ATerm n_53, ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, l_53, m_53);
    {
      ATerm u_35 = t;
      int w_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = MisMatch_0_0(t);
          ;
          LocalPopChoice(w_35);
        }
      else
        {
          t = u_35;
          {
            ATerm x_35 = t;
            int a_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = BuildMatchFusion_0_0(t);
                ;
                LocalPopChoice(a_36);
              }
            else
              {
                t = x_35;
                {
                  ATerm e_36 = t;
                  int g_36 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_53 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          ATerm h_36 = ATgetArgument(t, 0);
                          ATerm i_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = l_53;
                      if(match_cons(t, sym_Build_1))
                        {
                          ATerm j_36 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      t = m_53;
                      if(match_cons(t, sym_Build_1))
                        {
                          u_53 = ATgetArgument(t, 0);
                        }
                      else
                        _fail(t);
                      ;
                      LocalPopChoice(g_36);
                    }
                  else
                    {
                      t = e_36;
                      {
                        ATerm k_36 = t;
                        int l_36 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = BuildPrim_0_0(t);
                            ;
                            LocalPopChoice(l_36);
                          }
                        else
                          {
                            t = k_36;
                            {
                              ATerm y_53 = NULL,a_54 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm m_36 = ATgetArgument(t, 0);
                                  ATerm n_36 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = l_53;
                              if(match_cons(t, sym_Match_1))
                                {
                                  y_53 = ATgetArgument(t, 0);
                                  t = m_53;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_54 = ATgetArgument(t, 0);
                                      t = a_54;
                                      if((y_53 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_53);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Build_1))
                                        {
                                          a_54 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = a_54;
                                      if((y_53 != t))
                                        {
                                          _fail(t);
                                        }
                                      t = (ATerm) ATmakeAppl(sym_Match_1, y_53);
                                    }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      y_53 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = m_53;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      a_54 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_54;
                                  if((y_53 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Build_1, y_53);
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
  ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL,h_54 = NULL,i_54 = NULL;
  g_54 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_54 = ATgetArgument(t, 0);
      i_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_54;
  if(match_cons(t, sym_Seq_2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
      {
        ATerm o_36 = t;
        int p_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_10 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, h_54, e_54);
            {
              ATerm q_36 = t;
              int r_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
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
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(t_36);
                      }
                    else
                      {
                        t = s_36;
                        {
                          ATerm u_36 = t;
                          int v_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_11 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm w_36 = ATgetArgument(t, 0);
                                  ATerm x_36 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = h_54;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm b_37 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = e_54;
                              if(match_cons(t, sym_Build_1))
                                {
                                  f_11 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(v_36);
                            }
                          else
                            {
                              t = u_36;
                              {
                                ATerm d_37 = t;
                                int e_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(e_37);
                                  }
                                else
                                  {
                                    t = d_37;
                                    {
                                      ATerm k_11 = NULL,m_11 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm f_37 = ATgetArgument(t, 0);
                                          ATerm g_37 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = h_54;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          k_11 = ATgetArgument(t, 0);
                                          t = e_54;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              m_11 = ATgetArgument(t, 0);
                                              t = m_11;
                                              if((k_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_11);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  m_11 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = m_11;
                                              if((k_11 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, k_11);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              k_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = e_54;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              m_11 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = m_11;
                                          if((k_11 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, k_11);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              z_10 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, z_10, f_54);
            }
            ;
            LocalPopChoice(p_36);
          }
        else
          {
            t = o_36;
            t = k_54(h_54, i_54, g_54, t);
          }
      }
    }
  else
    {
      t = k_54(h_54, i_54, g_54, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm m_118 (ATerm), ATerm t)
{
  ATerm l_54 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_118(t);
        ;
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = SRTS_one(l_54, t);
      }
    return(t);
  }
  t = l_54(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm m_54 = NULL,n_54 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm j_37 = ATgetArgument(t, 0);
      if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
        {
          ATerm o_37 = ATgetFirst((ATermList) j_37);
          if(match_cons(o_37, sym_SDefT_4))
            {
              n_54 = ATgetArgument(o_37, 0);
              {
                ATerm v_37 = ATgetArgument(o_37, 1);
                if(((ATgetType(v_37) != AT_LIST) || !(ATisEmpty(v_37))))
                  _fail(t);
              }
              {
                ATerm z_37 = ATgetArgument(o_37, 2);
                if(((ATgetType(z_37) != AT_LIST) || !(ATisEmpty(z_37))))
                  _fail(t);
              }
              m_54 = ATgetArgument(o_37, 3);
            }
          else
            _fail(t);
          {
            ATerm p_37 = (ATerm) ATgetNext((ATermList) j_37);
            if(((ATgetType(p_37) != AT_LIST) || !(ATisEmpty(p_37))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm n_37 = ATgetArgument(t, 1);
        if(match_cons(n_37, sym_CallT_3))
          {
            ATerm a_38 = ATgetArgument(n_37, 0);
            if(match_cons(a_38, sym_SVar_1))
              {
                if((n_54 != ATgetArgument(a_38, 0)))
                  {
                    _fail(ATgetArgument(a_38, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm b_38 = ATgetArgument(n_37, 1);
              if(((ATgetType(b_38) != AT_LIST) || !(ATisEmpty(b_38))))
                _fail(t);
            }
            {
              ATerm c_38 = ATgetArgument(n_37, 2);
              if(((ATgetType(c_38) != AT_LIST) || !(ATisEmpty(c_38))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_54;
  {
    ATerm g_38 = t;
    if((PushChoice() == 0))
      {
        ATerm s_9 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm h_38 = ATgetArgument(t, 0);
              if(match_cons(h_38, sym_SVar_1))
                {
                  if((n_54 != ATgetArgument(h_38, 0)))
                    {
                      _fail(ATgetArgument(h_38, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm i_38 = ATgetArgument(t, 1);
                if(((ATgetType(i_38) != AT_LIST) || !(ATisEmpty(i_38))))
                  _fail(t);
              }
              {
                ATerm l_38 = ATgetArgument(t, 2);
                if(((ATgetType(l_38) != AT_LIST) || !(ATisEmpty(l_38))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(s_9, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_38;
      }
    t = m_54;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm v_54 = NULL,w_54 = NULL,x_54 = NULL,y_54 = NULL,z_54 = NULL,a_55 = NULL,c_55 = NULL,d_55 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      c_55 = ATgetArgument(t, 0);
      t = c_55;
      if(match_cons(t, sym_Seq_2))
        {
          a_55 = ATgetArgument(t, 0);
          w_54 = ATgetArgument(t, 1);
          t = a_55;
          if(match_cons(t, sym_Where_1))
            {
              v_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = w_54;
          if(match_cons(t, sym_Seq_2))
            {
              x_54 = ATgetArgument(t, 0);
              z_54 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_54;
          if(match_cons(t, sym_Build_1))
            {
              y_54 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, v_54, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, y_54), z_54)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              a_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          c_55 = ATgetArgument(t, 0);
          t = c_55;
          if(match_cons(t, sym_Test_1))
            {
              a_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              c_55 = ATgetArgument(t, 0);
              t = c_55;
              if(match_cons(t, sym_Not_1))
                {
                  a_55 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, a_55);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  c_55 = ATgetArgument(t, 0);
                  d_55 = ATgetArgument(t, 1);
                  t = d_55;
                  if((c_55 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      c_55 = ATgetArgument(t, 0);
                      d_55 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = d_55;
                  if((c_55 != t))
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
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      r_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
      t = r_55;
      if(match_cons(t, sym_LChoice_2))
        {
          s_55 = ATgetArgument(t, 0);
          t_55 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, s_55, (ATerm) ATmakeAppl(sym_LChoice_2, t_55, u_55));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          r_55 = ATgetArgument(t, 0);
          u_55 = ATgetArgument(t, 1);
          t = r_55;
          if(match_cons(t, sym_Seq_2))
            {
              s_55 = ATgetArgument(t, 0);
              t_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, s_55, (ATerm) ATmakeAppl(sym_Seq_2, t_55, u_55));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              r_55 = ATgetArgument(t, 0);
              u_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_55;
          if(match_cons(t, sym_Choice_2))
            {
              s_55 = ATgetArgument(t, 0);
              t_55 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, s_55, (ATerm) ATmakeAppl(sym_Choice_2, t_55, u_55));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm m_38 = t;
  int n_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm t_9 (ATerm t)
        {
          ATerm o_38 = t;
          int p_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(p_38);
            }
          else
            {
              t = o_38;
            }
          return(t);
        }
        t = Cons_2_0(_id, t_9, t);
      }
      ;
      LocalPopChoice(n_38);
    }
  else
    {
      t = m_38;
      {
        ATerm v_9 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, v_9, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      k_57 = ATgetArgument(t, 0);
      l_57 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, k_57, l_57);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          k_57 = ATgetArgument(t, 0);
          t = k_57;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_57 = ATgetFirst((ATermList) t);
              f_57 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, e_57, (ATerm) ATmakeAppl(sym_LChoices_1, f_57));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_t_35;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              k_57 = ATgetArgument(t, 0);
              t = k_57;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_57 = ATgetFirst((ATermList) t);
                  f_57 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, e_57, (ATerm) ATmakeAppl(sym_Choices_1, f_57));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_t_35;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  k_57 = ATgetArgument(t, 0);
                  t = k_57;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_57 = ATgetFirst((ATermList) t);
                      f_57 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, e_57, (ATerm) ATmakeAppl(sym_Seqs_1, f_57));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_t_21;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      k_57 = ATgetArgument(t, 0);
                      l_57 = ATgetArgument(t, 1);
                      i_57 = ATgetArgument(t, 2);
                      h_57 = ATgetArgument(t, 3);
                      {
                        ATerm c_58 = NULL,e_58 = NULL;
                        t = l_57;
                        {
                          ATerm w_9 (ATerm t)
                          {
                            ATerm f_58 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                f_58 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, f_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_38), term_s_38));
                            return(t);
                          }
                          t = map1_1_0(w_9, t);
                          c_58 = t;
                          t = i_57;
                          {
                            ATerm x_9 (ATerm t)
                            {
                              ATerm t_38 = t;
                              int u_38 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_58 = NULL;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      h_58 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_VarDec_2, h_58, term_s_38);
                                  ;
                                  LocalPopChoice(u_38);
                                }
                              else
                                {
                                  t = t_38;
                                }
                              return(t);
                            }
                            t = map1_1_0(x_9, t);
                            e_58 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_57, c_58, e_58, h_57);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          k_57 = ATgetArgument(t, 0);
                          l_57 = ATgetArgument(t, 1);
                          i_57 = ATgetArgument(t, 2);
                          h_57 = ATgetArgument(t, 3);
                          {
                            ATerm v_38 = t;
                            int w_38 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_58 = NULL,p_58 = NULL;
                                t = i_57;
                                {
                                  ATerm y_9 (ATerm t)
                                  {
                                    ATerm q_58 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        q_58 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, q_58, term_s_38);
                                    return(t);
                                  }
                                  t = map1_1_0(y_9, t);
                                  o_58 = t;
                                  t = l_57;
                                  {
                                    ATerm a_10 (ATerm t)
                                    {
                                      ATerm x_38 = t;
                                      int y_38 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_58 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              s_58 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, s_58, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_38), term_s_38));
                                          ;
                                          LocalPopChoice(y_38);
                                        }
                                      else
                                        {
                                          t = x_38;
                                        }
                                      return(t);
                                    }
                                    t = map_1_0(a_10, t);
                                    p_58 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, k_57, p_58, o_58, h_57);
                                  }
                                }
                                ;
                                LocalPopChoice(w_38);
                              }
                            else
                              {
                                t = v_38;
                                {
                                  ATerm b_59 = NULL,c_59 = NULL;
                                  t = l_57;
                                  {
                                    ATerm c_10 (ATerm t)
                                    {
                                      ATerm d_59 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          d_59 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, d_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_s_38), term_s_38));
                                      return(t);
                                    }
                                    t = map1_1_0(c_10, t);
                                    b_59 = t;
                                    t = i_57;
                                    {
                                      ATerm d_10 (ATerm t)
                                      {
                                        ATerm z_38 = t;
                                        int a_39 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm f_59 = NULL;
                                            if(match_cons(t, sym_DefaultVarDec_1))
                                              {
                                                f_59 = ATgetArgument(t, 0);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_VarDec_2, f_59, term_s_38);
                                            ;
                                            LocalPopChoice(a_39);
                                          }
                                        else
                                          {
                                            t = z_38;
                                          }
                                        return(t);
                                      }
                                      t = map_1_0(d_10, t);
                                      c_59 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, k_57, b_59, c_59, h_57);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              k_57 = ATgetArgument(t, 0);
                              l_57 = ATgetArgument(t, 1);
                              i_57 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, l_57, (ATerm) ATmakeAppl(sym_Op_2, term_n_20, (ATerm) ATinsert(ATinsert(ATempty, i_57), k_57)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  k_57 = ATgetArgument(t, 0);
                                  l_57 = ATgetArgument(t, 1);
                                  i_57 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, i_57)), k_57), (ATerm) ATmakeAppl(sym_Build_1, l_57)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      k_57 = ATgetArgument(t, 0);
                                      l_57 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, k_57, (ATerm) ATmakeAppl(sym_Match_1, l_57));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          k_57 = ATgetArgument(t, 0);
                                          l_57 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_57), l_57);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              k_57 = ATgetArgument(t, 0);
                                              l_57 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, l_57), k_57);
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
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm y_60 = NULL,z_60 = NULL,a_61 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      y_60 = ATgetArgument(t, 0);
      t = y_60;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          y_60 = ATgetArgument(t, 0);
          t = y_60;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_t_21;
        }
      else
        {
          ATerm k_39 = t;
          int l_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  y_60 = ATgetArgument(t, 0);
                  {
                    ATerm m_39 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(l_39);
              t = y_60;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = k_39;
              {
                ATerm n_39 = t;
                int q_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm r_39 = ATgetArgument(t, 0);
                        z_60 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_39);
                    t = z_60;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = n_39;
                    {
                      ATerm y_39 = t;
                      int a_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm b_40 = ATgetArgument(t, 0);
                              z_60 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(a_40);
                          t = z_60;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = y_39;
                          if(match_cons(t, sym_Some_1))
                            {
                              y_60 = ATgetArgument(t, 0);
                              t = y_60;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  y_60 = ATgetArgument(t, 0);
                                  t = y_60;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm g_40 = t;
                                  int h_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm i_40 = ATgetArgument(t, 0);
                                          z_60 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(h_40);
                                      t = z_60;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = g_40;
                                      {
                                        ATerm j_40 = t;
                                        int k_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm l_40 = ATgetArgument(t, 0);
                                                z_60 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(k_40);
                                            t = z_60;
                                            {
                                              ATerm f_10 (ATerm t)
                                              {
                                                if(!(match_cons(t, sym_Fail_0)))
                                                  _fail(t);
                                                return(t);
                                              }
                                              t = fetch_1_0(f_10, t);
                                              t = term_t_35;
                                            }
                                          }
                                        else
                                          {
                                            t = j_40;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                y_60 = ATgetArgument(t, 0);
                                                z_60 = ATgetArgument(t, 1);
                                                t = z_60;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = y_60;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm m_40 = t;
                                                        int n_40 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = z_60;
                                                            ;
                                                            LocalPopChoice(n_40);
                                                          }
                                                        else
                                                          {
                                                            t = m_40;
                                                            t = y_60;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = y_60;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = y_60;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = z_60;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    y_60 = ATgetArgument(t, 0);
                                                    z_60 = ATgetArgument(t, 1);
                                                    t = z_60;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = y_60;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm o_40 = t;
                                                            int p_40 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_60;
                                                                ;
                                                                LocalPopChoice(p_40);
                                                              }
                                                            else
                                                              {
                                                                t = o_40;
                                                                t = y_60;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = y_60;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = y_60;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = z_60;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        y_60 = ATgetArgument(t, 0);
                                                        t = y_60;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            y_60 = ATgetArgument(t, 0);
                                                            z_60 = ATgetArgument(t, 1);
                                                            a_61 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = a_61;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, y_60, z_60);
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
  ATerm y_61 = NULL,b_62 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_62 = ATgetArgument(t, 0);
      t = b_62;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_62 = ATgetArgument(t, 0);
          t = b_62;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_t_35;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              b_62 = ATgetArgument(t, 0);
              y_61 = ATgetArgument(t, 1);
              t = y_61;
              if(match_cons(t, sym_Id_0))
                {
                  t = b_62;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm q_40 = t;
                      int r_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_61;
                          ;
                          LocalPopChoice(r_40);
                        }
                      else
                        {
                          t = q_40;
                          t = b_62;
                        }
                    }
                  else
                    {
                      t = b_62;
                    }
                }
              else
                {
                  t = b_62;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = y_61;
                }
            }
          else
            {
              ATerm s_40 = t;
              int t_40 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      b_62 = ATgetArgument(t, 0);
                      {
                        ATerm u_40 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(t_40);
                  t = b_62;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = s_40;
                  {
                    ATerm v_40 = t;
                    int w_40 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm x_40 = ATgetArgument(t, 0);
                            y_61 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_40);
                        t = y_61;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = v_40;
                        {
                          ATerm y_40 = t;
                          int z_40 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_41 = ATgetArgument(t, 0);
                                  y_61 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_40);
                              t = y_61;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = y_40;
                              if(match_cons(t, sym_All_1))
                                {
                                  b_62 = ATgetArgument(t, 0);
                                  t = b_62;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      b_62 = ATgetArgument(t, 0);
                                      t = b_62;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          b_62 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = b_62;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_t_21;
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
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        ATerm d_41 = t;
        int e_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(e_41);
          }
        else
          {
            t = d_41;
            {
              ATerm f_41 = t;
              int g_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(g_41);
                }
              else
                {
                  t = f_41;
                  {
                    ATerm h_41 = t;
                    int i_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(i_41);
                      }
                    else
                      {
                        t = h_41;
                        {
                          ATerm j_41 = t;
                          int k_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(k_41);
                            }
                          else
                            {
                              t = j_41;
                              {
                                ATerm l_41 = t;
                                int m_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm x_62 = NULL,z_62 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        x_62 = ATgetArgument(t, 0);
                                        z_62 = ATgetArgument(t, 1);
                                        t = x_62;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_62;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            x_62 = ATgetArgument(t, 0);
                                            z_62 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = x_62;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = z_62;
                                      }
                                    ;
                                    LocalPopChoice(m_41);
                                  }
                                else
                                  {
                                    t = l_41;
                                    {
                                      ATerm n_41 = t;
                                      int o_41 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(o_41);
                                        }
                                      else
                                        {
                                          t = n_41;
                                          {
                                            ATerm p_41 = t;
                                            int q_41 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(q_41);
                                              }
                                            else
                                              {
                                                t = p_41;
                                                {
                                                  ATerm d_63 = NULL,e_63 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      d_63 = ATgetArgument(t, 0);
                                                      e_63 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_63;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = e_63;
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
ATerm repeat_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm g_63 (ATerm t)
  {
    ATerm r_41 = t;
    int s_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_130(t);
        t = g_63(t);
        ;
        LocalPopChoice(s_41);
      }
    else
      {
        t = r_41;
      }
    return(t);
  }
  t = g_63(t);
  return(t);
}
ATerm downup_1_0 (ATerm k_117 (ATerm), ATerm t)
{
  t = k_117(t);
  {
    ATerm g_10 (ATerm t)
    {
      t = downup_1_0(k_117, t);
      return(t);
    }
    t = SRTS_all(g_10, t);
    t = k_117(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm w_123 (ATerm), ATerm x_123 (ATerm), ATerm y_123 (ATerm), ATerm z_123 (ATerm), ATerm t)
{
  ATerm h_63 (ATerm t)
  {
    ATerm t_41 = t;
    int u_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_123(t);
        ;
        LocalPopChoice(u_41);
      }
    else
      {
        t = t_41;
        t = x_123(t);
        t = _2_0(z_123, h_63, t);
        t = y_123(t);
      }
    return(t);
  }
  t = h_63(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm n_63 = NULL,o_63 = NULL,p_63 = NULL,q_63 = NULL;
  n_63 = t;
  {
    ATerm v_41 = t;
    int w_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_41 = ATgetArgument(t, 0);
            ATerm y_41 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(w_41);
        t = n_63;
      }
    else
      {
        t = v_41;
        {
          ATerm u_63 = NULL;
          if(match_cons(t, sym__3))
            {
              o_63 = ATgetArgument(t, 0);
              p_63 = ATgetArgument(t, 1);
              q_63 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, o_63, p_63);
          {
            ATerm h_10 (ATerm t)
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
            ATerm m_10 (ATerm t)
            {
              ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
              if(match_cons(t, sym__2))
                {
                  ATerm b_42 = ATgetArgument(t, 0);
                  if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
                    {
                      v_63 = ATgetFirst((ATermList) b_42);
                      x_63 = (ATerm) ATgetNext((ATermList) b_42);
                    }
                  else
                    _fail(t);
                  {
                    ATerm c_42 = ATgetArgument(t, 1);
                    if(((ATgetType(c_42) == AT_LIST) && !(ATisEmpty(c_42))))
                      {
                        w_63 = ATgetFirst((ATermList) c_42);
                        y_63 = (ATerm) ATgetNext((ATermList) c_42);
                      }
                    else
                      _fail(t);
                  }
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_63, w_63), (ATerm) ATmakeAppl(sym__2, x_63, y_63));
              return(t);
            }
            ATerm n_10 (ATerm t)
            {
              ATerm z_63 = NULL,a_64 = NULL;
              if(match_cons(t, sym__2))
                {
                  z_63 = ATgetArgument(t, 0);
                  a_64 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(a_64), z_63);
              return(t);
            }
            t = genzip_4_0(h_10, m_10, n_10, _id, t);
            u_63 = t;
            t = (ATerm) ATmakeAppl(sym__2, u_63, q_63);
          }
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm c_143 (ATerm), ATerm d_143 (ATerm), ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      c_64 = ATgetArgument(t, 0);
      b_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_64;
  {
    ATerm q_10 (ATerm t)
    {
      ATerm y_11 = NULL;
      t = c_143(t);
      y_11 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_11, c_64);
      t = lookup_0_0(t);
      t = d_143(t);
      return(t);
    }
    t = alltd_1_0(q_10, t);
  }
  return(t);
}
ATerm spaste_1_0 (ATerm r_146 (ATerm), ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_10 (ATerm t)
      {
        ATerm e_12 = NULL,i_12 = NULL;
        e_12 = t;
        t = r_146(t);
        i_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_12, i_12);
        {
          ATerm s_10 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm f_42 = ATgetArgument(t, 0);
                if(((ATgetType(f_42) != AT_LIST) || !(ATisEmpty(f_42))))
                  _fail(t);
                {
                  ATerm g_42 = ATgetArgument(t, 1);
                  if(((ATgetType(g_42) != AT_LIST) || !(ATisEmpty(g_42))))
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
            ATerm m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm h_42 = ATgetArgument(t, 0);
                if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
                  {
                    m_64 = ATgetFirst((ATermList) h_42);
                    o_64 = (ATerm) ATgetNext((ATermList) h_42);
                  }
                else
                  _fail(t);
                {
                  ATerm i_42 = ATgetArgument(t, 1);
                  if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
                    {
                      n_64 = ATgetFirst((ATermList) i_42);
                      p_64 = (ATerm) ATgetNext((ATermList) i_42);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_64, n_64), (ATerm) ATmakeAppl(sym__2, o_64, p_64));
            return(t);
          }
          ATerm u_10 (ATerm t)
          {
            ATerm q_64 = NULL,r_64 = NULL;
            if(match_cons(t, sym__2))
              {
                q_64 = ATgetArgument(t, 0);
                r_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_64), q_64);
            return(t);
          }
          ATerm v_10 (ATerm t)
          {
            ATerm t_64 = NULL,v_64 = NULL,w_64 = NULL,x_64 = NULL,y_64 = NULL;
            if(match_cons(t, sym__2))
              {
                t_64 = ATgetArgument(t, 0);
                y_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = t_64;
            {
              ATerm j_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm l_42 = ATgetArgument(t, 0);
                      v_64 = ATgetArgument(t, 1);
                      w_64 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_42);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, y_64, v_64, w_64);
                }
              else
                {
                  t = j_42;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm m_42 = ATgetArgument(t, 0);
                      v_64 = ATgetArgument(t, 1);
                      w_64 = ATgetArgument(t, 2);
                      x_64 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, y_64, v_64, w_64, x_64);
                }
            }
            return(t);
          }
          t = genzip_4_0(s_10, t_10, u_10, v_10, t);
        }
        return(t);
      }
      t = Let_2_0(r_10, _id, t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm n_42 = t;
        int o_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_10 (ATerm t)
            {
              ATerm l_12 = NULL,o_12 = NULL;
              l_12 = t;
              t = r_146(t);
              o_12 = t;
              t = (ATerm) ATmakeAppl(sym__2, l_12, o_12);
              {
                ATerm x_10 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm p_42 = ATgetArgument(t, 0);
                      if(((ATgetType(p_42) != AT_LIST) || !(ATisEmpty(p_42))))
                        _fail(t);
                      {
                        ATerm q_42 = ATgetArgument(t, 1);
                        if(((ATgetType(q_42) != AT_LIST) || !(ATisEmpty(q_42))))
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
                  ATerm r_65 = NULL,s_65 = NULL,t_65 = NULL,x_65 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm r_42 = ATgetArgument(t, 0);
                      if(((ATgetType(r_42) == AT_LIST) && !(ATisEmpty(r_42))))
                        {
                          r_65 = ATgetFirst((ATermList) r_42);
                          t_65 = (ATerm) ATgetNext((ATermList) r_42);
                        }
                      else
                        _fail(t);
                      {
                        ATerm s_42 = ATgetArgument(t, 1);
                        if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
                          {
                            s_65 = ATgetFirst((ATermList) s_42);
                            x_65 = (ATerm) ATgetNext((ATermList) s_42);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_65, s_65), (ATerm) ATmakeAppl(sym__2, t_65, x_65));
                  return(t);
                }
                ATerm a_11 (ATerm t)
                {
                  ATerm a_66 = NULL,d_66 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      a_66 = ATgetArgument(t, 0);
                      d_66 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(d_66), a_66);
                  return(t);
                }
                ATerm b_11 (ATerm t)
                {
                  ATerm f_66 = NULL,h_66 = NULL,i_66 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      f_66 = ATgetArgument(t, 0);
                      i_66 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_66;
                  {
                    ATerm t_42 = t;
                    int u_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm v_42 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(u_42);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, i_66);
                      }
                    else
                      {
                        t = t_42;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm w_42 = ATgetArgument(t, 0);
                            h_66 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, i_66, h_66);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(x_10, y_10, a_11, b_11, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, w_10, _id, t);
            ;
            LocalPopChoice(o_42);
          }
        else
          {
            t = n_42;
            {
              ATerm x_42 = t;
              int y_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_11 (ATerm t)
                  {
                    ATerm u_12 = NULL,w_12 = NULL;
                    u_12 = t;
                    t = r_146(t);
                    w_12 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_12, w_12);
                    {
                      ATerm d_11 (ATerm t)
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm z_42 = ATgetArgument(t, 0);
                            if(((ATgetType(z_42) != AT_LIST) || !(ATisEmpty(z_42))))
                              _fail(t);
                            {
                              ATerm a_43 = ATgetArgument(t, 1);
                              if(((ATgetType(a_43) != AT_LIST) || !(ATisEmpty(a_43))))
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      ATerm e_11 (ATerm t)
                      {
                        ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL,p_66 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            ATerm b_43 = ATgetArgument(t, 0);
                            if(((ATgetType(b_43) == AT_LIST) && !(ATisEmpty(b_43))))
                              {
                                m_66 = ATgetFirst((ATermList) b_43);
                                o_66 = (ATerm) ATgetNext((ATermList) b_43);
                              }
                            else
                              _fail(t);
                            {
                              ATerm c_43 = ATgetArgument(t, 1);
                              if(((ATgetType(c_43) == AT_LIST) && !(ATisEmpty(c_43))))
                                {
                                  n_66 = ATgetFirst((ATermList) c_43);
                                  p_66 = (ATerm) ATgetNext((ATermList) c_43);
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_66, n_66), (ATerm) ATmakeAppl(sym__2, o_66, p_66));
                        return(t);
                      }
                      ATerm g_11 (ATerm t)
                      {
                        ATerm q_66 = NULL,r_66 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            q_66 = ATgetArgument(t, 0);
                            r_66 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATinsert(CheckATermList(r_66), q_66);
                        return(t);
                      }
                      ATerm i_11 (ATerm t)
                      {
                        ATerm t_66 = NULL,v_66 = NULL,w_66 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            t_66 = ATgetArgument(t, 0);
                            w_66 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = t_66;
                        {
                          ATerm d_43 = t;
                          int e_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm f_43 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_43);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_66);
                            }
                          else
                            {
                              t = d_43;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm g_43 = ATgetArgument(t, 0);
                                  v_66 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, w_66, v_66);
                            }
                        }
                        return(t);
                      }
                      t = genzip_4_0(d_11, e_11, g_11, i_11, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, c_11, _id, _id, t);
                  ;
                  LocalPopChoice(y_42);
                }
              else
                {
                  t = x_42;
                  {
                    ATerm h_43 = t;
                    int i_43 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_11 (ATerm t)
                        {
                          ATerm a_13 = NULL,f_13 = NULL;
                          a_13 = t;
                          t = r_146(t);
                          f_13 = t;
                          t = (ATerm) ATmakeAppl(sym__2, a_13, f_13);
                          {
                            ATerm l_11 (ATerm t)
                            {
                              if(match_cons(t, sym__2))
                                {
                                  ATerm j_43 = ATgetArgument(t, 0);
                                  if(((ATgetType(j_43) != AT_LIST) || !(ATisEmpty(j_43))))
                                    _fail(t);
                                  {
                                    ATerm k_43 = ATgetArgument(t, 1);
                                    if(((ATgetType(k_43) != AT_LIST) || !(ATisEmpty(k_43))))
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATempty;
                              return(t);
                            }
                            ATerm n_11 (ATerm t)
                            {
                              ATerm c_67 = NULL,d_67 = NULL,g_67 = NULL,i_67 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm l_43 = ATgetArgument(t, 0);
                                  if(((ATgetType(l_43) == AT_LIST) && !(ATisEmpty(l_43))))
                                    {
                                      c_67 = ATgetFirst((ATermList) l_43);
                                      g_67 = (ATerm) ATgetNext((ATermList) l_43);
                                    }
                                  else
                                    _fail(t);
                                  {
                                    ATerm m_43 = ATgetArgument(t, 1);
                                    if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
                                      {
                                        d_67 = ATgetFirst((ATermList) m_43);
                                        i_67 = (ATerm) ATgetNext((ATermList) m_43);
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_67, d_67), (ATerm) ATmakeAppl(sym__2, g_67, i_67));
                              return(t);
                            }
                            ATerm o_11 (ATerm t)
                            {
                              ATerm k_67 = NULL,l_67 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  k_67 = ATgetArgument(t, 0);
                                  l_67 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATinsert(CheckATermList(l_67), k_67);
                              return(t);
                            }
                            ATerm p_11 (ATerm t)
                            {
                              ATerm n_67 = NULL,p_67 = NULL,r_67 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  n_67 = ATgetArgument(t, 0);
                                  r_67 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = n_67;
                              {
                                ATerm n_43 = t;
                                int o_43 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm p_43 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(o_43);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, r_67);
                                  }
                                else
                                  {
                                    t = n_43;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm q_43 = ATgetArgument(t, 0);
                                        p_67 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, r_67, p_67);
                                  }
                              }
                              return(t);
                            }
                            t = genzip_4_0(l_11, n_11, o_11, p_11, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, j_11, _id, _id, t);
                        ;
                        LocalPopChoice(i_43);
                      }
                    else
                      {
                        t = h_43;
                        {
                          ATerm q_11 (ATerm t)
                          {
                            ATerm v_67 = NULL;
                            t = r_146(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                v_67 = ATgetFirst((ATermList) t);
                                {
                                  ATerm r_43 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = v_67;
                            return(t);
                          }
                          t = Rec_2_0(q_11, _id, t);
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
ATerm Rec_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL,b_68 = NULL;
  b_68 = t;
  if(match_cons(t, sym_Rec_2))
    {
      x_67 = ATgetArgument(t, 0);
      y_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_68);
  w_67 = t;
  t = x_67;
  t = v_107(t);
  z_67 = t;
  t = y_67;
  t = w_107(t);
  a_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, z_67, a_68), w_67);
  return(t);
}
ATerm SDef_3_0 (ATerm n_109 (ATerm), ATerm o_109 (ATerm), ATerm p_109 (ATerm), ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL,k_68 = NULL,l_68 = NULL;
  l_68 = t;
  if(match_cons(t, sym_SDef_3))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
      h_68 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_68);
  e_68 = t;
  t = f_68;
  t = n_109(t);
  i_68 = t;
  t = g_68;
  t = o_109(t);
  j_68 = t;
  t = h_68;
  t = p_109(t);
  k_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, i_68, j_68, k_68), e_68);
  return(t);
}
ATerm Let_2_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL,t_68 = NULL;
  t_68 = t;
  if(match_cons(t, sym_Let_2))
    {
      p_68 = ATgetArgument(t, 0);
      q_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_68);
  o_68 = t;
  t = p_68;
  t = y_106(t);
  r_68 = t;
  t = q_68;
  t = z_106(t);
  s_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, r_68, s_68), o_68);
  return(t);
}
ATerm sboundin_3_0 (ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(s_146, s_146, t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(u_146, u_146, s_146, t);
            ;
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            {
              ATerm w_43 = t;
              int x_43 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(u_146, u_146, u_146, s_146, t);
                  ;
                  LocalPopChoice(x_43);
                }
              else
                {
                  t = w_43;
                  t = Rec_2_0(u_146, s_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm x_68 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      x_68 = ATgetArgument(t, 0);
      {
        ATerm y_43 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = x_68;
  {
    ATerm r_11 (ATerm t)
    {
      ATerm z_68 = NULL;
      ATerm z_43 = t;
      int a_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              z_68 = ATgetArgument(t, 0);
              {
                ATerm b_44 = ATgetArgument(t, 1);
              }
              {
                ATerm c_44 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(a_44);
          t = z_68;
        }
      else
        {
          t = z_43;
          if(match_cons(t, sym_SDefT_4))
            {
              z_68 = ATgetArgument(t, 0);
              {
                ATerm d_44 = ATgetArgument(t, 1);
              }
              {
                ATerm e_44 = ATgetArgument(t, 2);
              }
              {
                ATerm f_44 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = z_68;
        }
      return(t);
    }
    t = map_1_0(r_11, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm x_106 (ATerm), ATerm t)
{
  ATerm i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL;
  l_69 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_69);
  i_69 = t;
  t = j_69;
  t = x_106(t);
  k_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, k_69), i_69);
  return(t);
}
ATerm DistBinding_2_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  if(match_cons(t, sym__3))
    {
      q_69 = ATgetArgument(t, 0);
      p_69 = ATgetArgument(t, 1);
      o_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_69;
  {
    ATerm s_11 (ATerm t)
    {
      ATerm u_69 = NULL;
      u_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_69, o_69);
      t = e_144(t);
      return(t);
    }
    ATerm t_11 (ATerm t)
    {
      ATerm v_69 = NULL;
      v_69 = t;
      t = (ATerm) ATmakeAppl(sym__2, v_69, p_69);
      t = e_144(t);
      return(t);
    }
    t = f_144(s_11, t_11, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm y_143 (ATerm), ATerm z_143 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL;
  if(match_cons(t, sym__2))
    {
      x_69 = ATgetArgument(t, 0);
      y_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_69;
  t = y_143(t);
  z_69 = t;
  t = map_1_0(new_0_0, t);
  a_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_69, a_70);
  {
    ATerm u_11 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm g_44 = ATgetArgument(t, 0);
          if(((ATgetType(g_44) != AT_LIST) || !(ATisEmpty(g_44))))
            _fail(t);
          {
            ATerm h_44 = ATgetArgument(t, 1);
            if(((ATgetType(h_44) != AT_LIST) || !(ATisEmpty(h_44))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm v_11 (ATerm t)
    {
      ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm i_44 = ATgetArgument(t, 0);
          if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
            {
              f_70 = ATgetFirst((ATermList) i_44);
              h_70 = (ATerm) ATgetNext((ATermList) i_44);
            }
          else
            _fail(t);
          {
            ATerm j_44 = ATgetArgument(t, 1);
            if(((ATgetType(j_44) == AT_LIST) && !(ATisEmpty(j_44))))
              {
                g_70 = ATgetFirst((ATermList) j_44);
                i_70 = (ATerm) ATgetNext((ATermList) j_44);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_70, g_70), (ATerm) ATmakeAppl(sym__2, h_70, i_70));
      return(t);
    }
    ATerm w_11 (ATerm t)
    {
      ATerm j_70 = NULL,k_70 = NULL;
      if(match_cons(t, sym__2))
        {
          j_70 = ATgetArgument(t, 0);
          k_70 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(k_70), j_70);
      return(t);
    }
    t = genzip_4_0(u_11, v_11, w_11, _id, t);
    c_70 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_70, y_69);
    {
      ATerm k_44 = t;
      int l_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm m_44 = ATgetArgument(t, 0);
              ATerm n_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_70;
          {
            ATerm x_11 (ATerm t)
            {
              t = y_69;
              return(t);
            }
            t = at_end_1_0(x_11, t);
          }
          ;
          LocalPopChoice(l_44);
        }
      else
        {
          t = k_44;
          {
            ATerm l_13 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, c_70, y_69));
            if(match_cons(t, sym__2))
              {
                ATerm o_44 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) o_44) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                l_13 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = l_13;
            t = concat_0_0(t);
          }
        }
      d_70 = t;
      t = x_69;
      {
        ATerm z_11 (ATerm t)
        {
          t = a_70;
          return(t);
        }
        t = z_143(z_11, t);
        e_70 = t;
        t = (ATerm) ATmakeAppl(sym__3, e_70, y_69, d_70);
      }
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,b_71 = NULL,d_71 = NULL,e_71 = NULL,f_71 = NULL;
  if(match_cons(t, sym__2))
    {
      b_71 = ATgetArgument(t, 0);
      d_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_71;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_71 = ATgetFirst((ATermList) t);
      f_71 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_71;
  if(match_cons(t, sym__2))
    {
      v_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
      {
        ATerm p_44 = t;
        int q_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_70;
            if((b_71 != t))
              {
                _fail(t);
              }
            t = w_70;
            ;
            LocalPopChoice(q_44);
          }
        else
          {
            t = p_44;
            t = (ATerm) ATmakeAppl(sym__2, b_71, f_71);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, b_71, f_71);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm j_133 (ATerm), ATerm t)
{
  ATerm y_71 (ATerm t)
  {
    ATerm r_44 = t;
    int s_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_133(t);
        ;
        LocalPopChoice(s_44);
      }
    else
      {
        t = r_44;
        {
          ATerm v_71 = NULL,w_71 = NULL,x_71 = NULL;
          v_71 = t;
          if(match_cons(t, sym__2))
            {
              w_71 = ATgetArgument(t, 0);
              x_71 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_71;
          {
            ATerm a_12 (ATerm t)
            {
              ATerm y_13 = NULL;
              y_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, y_13, x_71);
              t = y_71(t);
              return(t);
            }
            t = SRTS_all(a_12, t);
          }
        }
      }
    return(t);
  }
  t = y_71(t);
  return(t);
}
ATerm rename_4_0 (ATerm t_143 (ATerm (ATerm), ATerm), ATerm u_143 (ATerm), ATerm v_143 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm w_143 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm b_72 = NULL;
  b_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_72, (ATerm) ATempty);
  {
    ATerm h_72 (ATerm t)
    {
      ATerm b_12 (ATerm t)
      {
        ATerm t_44 = t;
        int u_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_72 = NULL,e_72 = NULL;
            if(match_cons(t, sym__2))
              {
                d_72 = ATgetArgument(t, 0);
                e_72 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_72;
            {
              ATerm c_12 (ATerm t)
              {
                ATerm z_13 = NULL;
                z_13 = t;
                t = (ATerm) ATmakeAppl(sym__2, z_13, e_72);
                t = lookup_0_0(t);
                return(t);
              }
              t = t_143(c_12, t);
            }
            ;
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            t = RnBinding_2_0(u_143, w_143, t);
            t = DistBinding_2_0(h_72, v_143, t);
          }
        return(t);
      }
      t = env_alltd_1_0(b_12, t);
      return(t);
    }
    t = h_72(t);
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm n_146 (ATerm), ATerm t)
{
  ATerm v_44 = t;
  int w_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(n_146, _id, t);
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
            ATerm d_12 (ATerm t)
            {
              ATerm i_14 = NULL,n_14 = NULL;
              i_14 = t;
              t = n_146(t);
              n_14 = t;
              t = (ATerm) ATmakeAppl(sym__2, i_14, n_14);
              {
                ATerm f_12 (ATerm t)
                {
                  if(match_cons(t, sym__2))
                    {
                      ATerm z_44 = ATgetArgument(t, 0);
                      if(((ATgetType(z_44) != AT_LIST) || !(ATisEmpty(z_44))))
                        _fail(t);
                      {
                        ATerm a_45 = ATgetArgument(t, 1);
                        if(((ATgetType(a_45) != AT_LIST) || !(ATisEmpty(a_45))))
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATempty;
                  return(t);
                }
                ATerm g_12 (ATerm t)
                {
                  ATerm m_72 = NULL,n_72 = NULL,o_72 = NULL,p_72 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm b_45 = ATgetArgument(t, 0);
                      if(((ATgetType(b_45) == AT_LIST) && !(ATisEmpty(b_45))))
                        {
                          m_72 = ATgetFirst((ATermList) b_45);
                          o_72 = (ATerm) ATgetNext((ATermList) b_45);
                        }
                      else
                        _fail(t);
                      {
                        ATerm c_45 = ATgetArgument(t, 1);
                        if(((ATgetType(c_45) == AT_LIST) && !(ATisEmpty(c_45))))
                          {
                            n_72 = ATgetFirst((ATermList) c_45);
                            p_72 = (ATerm) ATgetNext((ATermList) c_45);
                          }
                        else
                          _fail(t);
                      }
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_72, n_72), (ATerm) ATmakeAppl(sym__2, o_72, p_72));
                  return(t);
                }
                ATerm h_12 (ATerm t)
                {
                  ATerm q_72 = NULL,r_72 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_72 = ATgetArgument(t, 0);
                      r_72 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(r_72), q_72);
                  return(t);
                }
                ATerm j_12 (ATerm t)
                {
                  ATerm t_72 = NULL,v_72 = NULL,w_72 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      t_72 = ATgetArgument(t, 0);
                      w_72 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_72;
                  {
                    ATerm d_45 = t;
                    int e_45 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm f_45 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_45);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, w_72);
                      }
                    else
                      {
                        t = d_45;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm g_45 = ATgetArgument(t, 0);
                            v_72 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, w_72, v_72);
                      }
                  }
                  return(t);
                }
                t = genzip_4_0(f_12, g_12, h_12, j_12, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, d_12, _id, t);
            ;
            LocalPopChoice(y_44);
          }
        else
          {
            t = x_44;
            {
              ATerm k_12 (ATerm t)
              {
                ATerm v_14 = NULL,a_15 = NULL;
                v_14 = t;
                t = n_146(t);
                a_15 = t;
                t = (ATerm) ATmakeAppl(sym__2, v_14, a_15);
                {
                  ATerm m_12 (ATerm t)
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
                  ATerm n_12 (ATerm t)
                  {
                    ATerm a_73 = NULL,b_73 = NULL,c_73 = NULL,d_73 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm j_45 = ATgetArgument(t, 0);
                        if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
                          {
                            a_73 = ATgetFirst((ATermList) j_45);
                            c_73 = (ATerm) ATgetNext((ATermList) j_45);
                          }
                        else
                          _fail(t);
                        {
                          ATerm k_45 = ATgetArgument(t, 1);
                          if(((ATgetType(k_45) == AT_LIST) && !(ATisEmpty(k_45))))
                            {
                              b_73 = ATgetFirst((ATermList) k_45);
                              d_73 = (ATerm) ATgetNext((ATermList) k_45);
                            }
                          else
                            _fail(t);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_73, b_73), (ATerm) ATmakeAppl(sym__2, c_73, d_73));
                    return(t);
                  }
                  ATerm p_12 (ATerm t)
                  {
                    ATerm e_73 = NULL,f_73 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        e_73 = ATgetArgument(t, 0);
                        f_73 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(CheckATermList(f_73), e_73);
                    return(t);
                  }
                  ATerm q_12 (ATerm t)
                  {
                    ATerm h_73 = NULL,j_73 = NULL,k_73 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        h_73 = ATgetArgument(t, 0);
                        k_73 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_73;
                    {
                      ATerm l_45 = t;
                      int m_45 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm n_45 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(m_45);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_73);
                        }
                      else
                        {
                          t = l_45;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm o_45 = ATgetArgument(t, 0);
                              j_73 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, k_73, j_73);
                        }
                    }
                    return(t);
                  }
                  t = genzip_4_0(m_12, n_12, p_12, q_12, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, k_12, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm f_106 (ATerm), ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL,q_73 = NULL,r_73 = NULL;
  r_73 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      p_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_73);
  o_73 = t;
  t = p_73;
  t = f_106(t);
  q_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, q_73), o_73);
  return(t);
}
ATerm RDefT_4_0 (ATerm w_105 (ATerm), ATerm x_105 (ATerm), ATerm y_105 (ATerm), ATerm z_105 (ATerm), ATerm t)
{
  ATerm u_73 = NULL,x_73 = NULL,y_73 = NULL,z_73 = NULL,a_74 = NULL,b_74 = NULL,c_74 = NULL,d_74 = NULL,e_74 = NULL,f_74 = NULL;
  f_74 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      x_73 = ATgetArgument(t, 0);
      y_73 = ATgetArgument(t, 1);
      z_73 = ATgetArgument(t, 2);
      a_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_74);
  u_73 = t;
  t = x_73;
  t = w_105(t);
  b_74 = t;
  t = y_73;
  t = x_105(t);
  c_74 = t;
  t = z_73;
  t = y_105(t);
  d_74 = t;
  t = a_74;
  t = z_105(t);
  e_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, b_74, c_74, d_74, e_74), u_73);
  return(t);
}
ATerm SDefT_4_0 (ATerm q_109 (ATerm), ATerm r_109 (ATerm), ATerm s_109 (ATerm), ATerm t_109 (ATerm), ATerm t)
{
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL,l_74 = NULL,n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  s_74 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      j_74 = ATgetArgument(t, 0);
      k_74 = ATgetArgument(t, 1);
      l_74 = ATgetArgument(t, 2);
      n_74 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_74);
  i_74 = t;
  t = j_74;
  t = q_109(t);
  o_74 = t;
  t = k_74;
  t = r_109(t);
  p_74 = t;
  t = l_74;
  t = s_109(t);
  q_74 = t;
  t = n_74;
  t = t_109(t);
  r_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, o_74, p_74, q_74, r_74), i_74);
  return(t);
}
ATerm Scope_2_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  a_75 = t;
  if(match_cons(t, sym_Scope_2))
    {
      w_74 = ATgetArgument(t, 0);
      x_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_75);
  v_74 = t;
  t = w_74;
  t = i_107(t);
  y_74 = t;
  t = x_74;
  t = j_107(t);
  z_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, y_74, z_74), v_74);
  return(t);
}
ATerm tboundin_3_0 (ATerm o_146 (ATerm), ATerm p_146 (ATerm), ATerm q_146 (ATerm), ATerm t)
{
  ATerm p_45 = t;
  int q_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_146, o_146, t);
      ;
      LocalPopChoice(q_45);
    }
  else
    {
      t = p_45;
      {
        ATerm r_45 = t;
        int s_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(q_146, q_146, q_146, o_146, t);
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
                  t = RDefT_4_0(q_146, q_146, q_146, o_146, t);
                  ;
                  LocalPopChoice(u_45);
                }
              else
                {
                  t = t_45;
                  t = DynamicRules_1_0(o_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm h_75 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        h_75 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, h_75);
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    ATerm i_75 = NULL,m_75 = NULL,o_75 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        m_75 = ATgetArgument(t, 0);
        t = m_75;
        if(match_cons(t, sym_Rule_3))
          {
            i_75 = ATgetArgument(t, 0);
            {
              ATerm v_45 = ATgetArgument(t, 1);
            }
            {
              ATerm w_45 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = i_75;
        t = tvars_0_0(t);
      }
    else
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                m_75 = ATgetArgument(t, 0);
                {
                  ATerm z_45 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(y_45);
            t = m_75;
          }
        else
          {
            t = x_45;
            if(match_cons(t, sym_DynamicRules_1))
              {
                m_75 = ATgetArgument(t, 0);
                t = m_75;
                t = tvars_0_0(t);
              }
            else
              {
                ATerm g_46 = t;
                int h_46 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_SDefT_4))
                      {
                        ATerm i_46 = ATgetArgument(t, 0);
                        ATerm s_46 = ATgetArgument(t, 1);
                        o_75 = ATgetArgument(t, 2);
                        {
                          ATerm t_46 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_46);
                    t = o_75;
                    {
                      ATerm t_12 (ATerm t)
                      {
                        ATerm w_75 = NULL;
                        ATerm u_46 = t;
                        int v_46 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                w_75 = ATgetArgument(t, 0);
                                {
                                  ATerm x_46 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(v_46);
                            t = w_75;
                          }
                        else
                          {
                            t = u_46;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                w_75 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = w_75;
                          }
                        return(t);
                      }
                      t = map_1_0(t_12, t);
                    }
                  }
                else
                  {
                    t = g_46;
                    if(match_cons(t, sym_RDefT_4))
                      {
                        ATerm y_46 = ATgetArgument(t, 0);
                        ATerm d_47 = ATgetArgument(t, 1);
                        o_75 = ATgetArgument(t, 2);
                        {
                          ATerm e_47 = ATgetArgument(t, 3);
                        }
                      }
                    else
                      _fail(t);
                    t = o_75;
                    {
                      ATerm v_12 (ATerm t)
                      {
                        ATerm h_76 = NULL;
                        ATerm l_47 = t;
                        int m_47 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_VarDec_2))
                              {
                                h_76 = ATgetArgument(t, 0);
                                {
                                  ATerm q_47 = ATgetArgument(t, 1);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(m_47);
                            t = h_76;
                          }
                        else
                          {
                            t = l_47;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                h_76 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = h_76;
                          }
                        return(t);
                      }
                      t = map_1_0(v_12, t);
                    }
                  }
              }
          }
      }
    return(t);
  }
  t = free_vars_3_0(r_12, s_12, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm r_76 = NULL,v_76 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      v_76 = ATgetArgument(t, 0);
      t = v_76;
      if(match_cons(t, sym_Rule_3))
        {
          r_76 = ATgetArgument(t, 0);
          {
            ATerm r_47 = ATgetArgument(t, 1);
          }
          {
            ATerm s_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = r_76;
      {
        ATerm x_12 (ATerm t)
        {
          ATerm y_76 = NULL;
          if(match_cons(t, sym_Var_1))
            {
              y_76 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATinsert(ATempty, y_76);
          return(t);
        }
        ATerm y_12 (ATerm t)
        {
          ATerm u_47 = t;
          int w_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind0_0_0(t);
              ;
              LocalPopChoice(w_47);
            }
          else
            {
              t = u_47;
              {
                ATerm a_77 = NULL,c_77 = NULL;
                if(match_cons(t, sym_DynamicRules_1))
                  {
                    a_77 = ATgetArgument(t, 0);
                    t = a_77;
                    t = tvars_0_0(t);
                  }
                else
                  {
                    ATerm y_47 = t;
                    int a_48 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm i_48 = ATgetArgument(t, 0);
                            ATerm k_48 = ATgetArgument(t, 1);
                            c_77 = ATgetArgument(t, 2);
                            {
                              ATerm m_48 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_48);
                        t = c_77;
                        {
                          ATerm z_12 (ATerm t)
                          {
                            ATerm k_77 = NULL;
                            ATerm u_48 = t;
                            int w_48 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    k_77 = ATgetArgument(t, 0);
                                    {
                                      ATerm x_48 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(w_48);
                                t = k_77;
                              }
                            else
                              {
                                t = u_48;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    k_77 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = k_77;
                              }
                            return(t);
                          }
                          t = map_1_0(z_12, t);
                        }
                      }
                    else
                      {
                        t = y_47;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm y_48 = ATgetArgument(t, 0);
                            ATerm z_48 = ATgetArgument(t, 1);
                            c_77 = ATgetArgument(t, 2);
                            {
                              ATerm b_49 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = c_77;
                        {
                          ATerm b_13 (ATerm t)
                          {
                            ATerm q_77 = NULL;
                            ATerm c_49 = t;
                            int d_49 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                if(match_cons(t, sym_VarDec_2))
                                  {
                                    q_77 = ATgetArgument(t, 0);
                                    {
                                      ATerm e_49 = ATgetArgument(t, 1);
                                    }
                                  }
                                else
                                  _fail(t);
                                LocalPopChoice(d_49);
                                t = q_77;
                              }
                            else
                              {
                                t = c_49;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    q_77 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = q_77;
                              }
                            return(t);
                          }
                          t = map_1_0(b_13, t);
                        }
                      }
                  }
              }
            }
          return(t);
        }
        t = free_vars_3_0(x_12, y_12, tboundin_3_0, t);
      }
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          v_76 = ATgetArgument(t, 0);
          {
            ATerm h_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = v_76;
    }
  return(t);
}
ATerm union_1_0 (ATerm w_125 (ATerm), ATerm t)
{
  ATerm u_77 = NULL,v_77 = NULL;
  if(match_cons(t, sym__2))
    {
      v_77 = ATgetArgument(t, 0);
      u_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_77;
  {
    ATerm w_77 (ATerm t)
    {
      ATerm j_49 = t;
      int o_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = u_77;
          ;
          LocalPopChoice(o_49);
        }
      else
        {
          t = j_49;
          {
            ATerm p_49 = t;
            int q_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_15 = NULL,g_15 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    f_15 = ATgetFirst((ATermList) t);
                    g_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = u_77;
                {
                  ATerm c_13 (ATerm t)
                  {
                    ATerm j_15 = NULL;
                    j_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_15, j_15);
                    t = w_125(t);
                    return(t);
                  }
                  t = fetch_1_0(c_13, t);
                  t = g_15;
                  t = w_77(t);
                }
                ;
                LocalPopChoice(q_49);
              }
            else
              {
                t = p_49;
                t = Cons_2_0(_id, w_77, t);
              }
          }
        }
      return(t);
    }
    t = w_77(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm l_128 (ATerm), ATerm m_128 (ATerm), ATerm n_128 (ATerm), ATerm t)
{
  ATerm r_49 = t;
  int s_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_128(t);
      ;
      LocalPopChoice(s_49);
    }
  else
    {
      t = r_49;
      {
        ATerm z_77 = NULL,a_78 = NULL,d_78 = NULL,e_78 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_77 = ATgetFirst((ATermList) t);
            a_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_77;
        t = n_128(t);
        d_78 = t;
        t = a_78;
        t = foldr_3_0(l_128, m_128, n_128, t);
        e_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_78, e_78);
        t = m_128(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  ATerm k_78 = NULL,l_78 = NULL;
  if(match_cons(t, sym__2))
    {
      l_78 = ATgetArgument(t, 0);
      k_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_78;
  {
    ATerm m_78 (ATerm t)
    {
      ATerm t_49 = t;
      int u_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(u_49);
        }
      else
        {
          t = t_49;
          {
            ATerm v_49 = t;
            int w_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_15 = NULL,p_15 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    m_15 = ATgetFirst((ATermList) t);
                    p_15 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = k_78;
                {
                  ATerm d_13 (ATerm t)
                  {
                    ATerm q_15 = NULL;
                    q_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, m_15, q_15);
                    t = s_125(t);
                    return(t);
                  }
                  t = fetch_1_0(d_13, t);
                  t = p_15;
                  t = m_78(t);
                }
                ;
                LocalPopChoice(w_49);
              }
            else
              {
                t = v_49;
                t = Cons_2_0(_id, m_78, t);
              }
          }
        }
      return(t);
    }
    t = m_78(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm o_78 = NULL,p_78 = NULL,q_78 = NULL,r_78 = NULL,s_78 = NULL,t_78 = NULL,u_78 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_49 = ATgetFirst((ATermList) t);
      if(match_cons(x_49, sym__2))
        {
          o_78 = ATgetArgument(x_49, 0);
          p_78 = ATgetArgument(x_49, 1);
        }
      else
        _fail(t);
      q_78 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(p_78);
  if(match_cons(t, sym__2))
    {
      r_78 = ATgetArgument(t, 0);
      s_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_78);
  if(match_cons(t, sym__2))
    {
      if((r_78 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      t_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_78, s_78);
  {
    ATerm e_13 (ATerm t)
    {
      if(match_cons(t, sym__2))
        {
          ATerm y_49 = ATgetArgument(t, 0);
          if(((ATgetType(y_49) != AT_LIST) || !(ATisEmpty(y_49))))
            _fail(t);
          {
            ATerm f_50 = ATgetArgument(t, 1);
            if(((ATgetType(f_50) != AT_LIST) || !(ATisEmpty(f_50))))
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATempty;
      return(t);
    }
    ATerm g_13 (ATerm t)
    {
      ATerm v_78 = NULL,w_78 = NULL,x_78 = NULL,y_78 = NULL;
      if(match_cons(t, sym__2))
        {
          ATerm n_50 = ATgetArgument(t, 0);
          if(((ATgetType(n_50) == AT_LIST) && !(ATisEmpty(n_50))))
            {
              v_78 = ATgetFirst((ATermList) n_50);
              x_78 = (ATerm) ATgetNext((ATermList) n_50);
            }
          else
            _fail(t);
          {
            ATerm q_50 = ATgetArgument(t, 1);
            if(((ATgetType(q_50) == AT_LIST) && !(ATisEmpty(q_50))))
              {
                w_78 = ATgetFirst((ATermList) q_50);
                y_78 = (ATerm) ATgetNext((ATermList) q_50);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_78, w_78), (ATerm) ATmakeAppl(sym__2, x_78, y_78));
      return(t);
    }
    ATerm h_13 (ATerm t)
    {
      ATerm z_78 = NULL,a_79 = NULL;
      if(match_cons(t, sym__2))
        {
          z_78 = ATgetArgument(t, 0);
          a_79 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(a_79), z_78);
      return(t);
    }
    t = genzip_4_0(e_13, g_13, h_13, _id, t);
    u_78 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_78, q_78);
    {
      ATerm r_50 = t;
      int s_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm t_50 = ATgetArgument(t, 0);
              ATerm u_50 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_78;
          {
            ATerm i_13 (ATerm t)
            {
              t = q_78;
              return(t);
            }
            t = at_end_1_0(i_13, t);
          }
          ;
          LocalPopChoice(s_50);
        }
      else
        {
          t = r_50;
          {
            ATerm d_16 = NULL;
            t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, u_78, q_78));
            if(match_cons(t, sym__2))
              {
                ATerm v_50 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_50) != ATmakeSymbol("", 0, ATtrue)))
                  _fail(t);
                d_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = d_16;
            t = concat_0_0(t);
          }
        }
    }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm c_131 (ATerm), ATerm d_131 (ATerm), ATerm t)
{
  ATerm e_79 (ATerm t)
  {
    ATerm w_50 = t;
    int x_50 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_131(t);
        ;
        LocalPopChoice(x_50);
      }
    else
      {
        t = w_50;
        t = d_131(t);
        t = e_79(t);
      }
    return(t);
  }
  t = e_79(t);
  return(t);
}
ATerm for_3_0 (ATerm f_131 (ATerm), ATerm g_131 (ATerm), ATerm h_131 (ATerm), ATerm t)
{
  t = f_131(t);
  t = while_not_2_0(g_131, h_131, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm y_50 = t;
  int z_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_13 (ATerm t)
      {
        ATerm j_79 = NULL;
        j_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, j_79);
        return(t);
      }
      ATerm k_13 (ATerm t)
      {
        ATerm n_13 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, n_13, t);
        return(t);
      }
      ATerm m_13 (ATerm t)
      {
        ATerm a_51 = t;
        int b_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_13 (ATerm t)
            {
              ATerm c_51 = t;
              int d_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_79 = NULL,q_79 = NULL,r_79 = NULL,s_79 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_79 = ATgetFirst((ATermList) t);
                      s_79 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_79;
                  if(match_cons(t, sym__2))
                    {
                      q_79 = ATgetArgument(t, 0);
                      r_79 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_79;
                  if((q_79 != t))
                    {
                      _fail(t);
                    }
                  t = s_79;
                  ;
                  LocalPopChoice(d_51);
                }
              else
                {
                  t = c_51;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, o_13, t);
            ;
            LocalPopChoice(b_51);
          }
        else
          {
            t = a_51;
            {
              ATerm w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL;
              if(match_cons(t, sym__2))
                {
                  w_79 = ATgetArgument(t, 0);
                  x_79 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = x_79;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_79 = ATgetFirst((ATermList) t);
                  z_79 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_79), y_79), z_79);
            }
          }
        return(t);
      }
      t = for_3_0(j_13, k_13, m_13, t);
      ;
      LocalPopChoice(z_50);
    }
  else
    {
      t = y_50;
      {
        ATerm p_13 (ATerm t)
        {
          ATerm i_80 = NULL;
          if(match_cons(t, sym__2))
            {
              i_80 = ATgetArgument(t, 0);
              if((i_80 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(p_13, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm j_145 (ATerm), ATerm k_145 (ATerm), ATerm l_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_80 (ATerm t)
  {
    ATerm e_51 = t;
    int f_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_145(t);
        ;
        LocalPopChoice(f_51);
      }
    else
      {
        t = e_51;
        {
          ATerm g_51 = t;
          int h_51 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_80 = NULL,l_80 = NULL,q_16 = NULL,r_16 = NULL;
              j_80 = t;
              t = k_145(t);
              l_80 = t;
              t = j_80;
              {
                ATerm q_13 (ATerm t)
                {
                  ATerm f_16 = NULL;
                  t = o_80(t);
                  f_16 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_16, l_80);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm r_13 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = l_145(q_13, o_80, r_13, t);
                q_16 = t;
                t = SSL_explode_term(q_16);
                if(match_cons(t, sym__2))
                  {
                    ATerm i_51 = ATgetArgument(t, 0);
                    r_16 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = r_16;
                {
                  ATerm s_13 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm t_13 (ATerm t)
                  {
                    ATerm u_13 (ATerm t)
                    {
                      ATerm z_16 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          z_16 = ATgetArgument(t, 0);
                          if((z_16 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(u_13, t);
                    return(t);
                  }
                  t = foldr_3_0(s_13, t_13, _id, t);
                }
              }
              ;
              LocalPopChoice(h_51);
            }
          else
            {
              t = g_51;
              {
                ATerm b_17 = NULL,c_17 = NULL;
                b_17 = t;
                t = SSL_explode_term(b_17);
                if(match_cons(t, sym__2))
                  {
                    ATerm j_51 = ATgetArgument(t, 0);
                    c_17 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_17;
                {
                  ATerm v_13 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  ATerm w_13 (ATerm t)
                  {
                    ATerm x_13 (ATerm t)
                    {
                      ATerm g_17 = NULL;
                      if(match_cons(t, sym__2))
                        {
                          g_17 = ATgetArgument(t, 0);
                          if((g_17 != ATgetArgument(t, 1)))
                            {
                              _fail(ATgetArgument(t, 1));
                            }
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = union_1_0(x_13, t);
                    return(t);
                  }
                  t = foldr_3_0(v_13, w_13, o_80, t);
                }
              }
            }
        }
      }
    return(t);
  }
  t = o_80(t);
  return(t);
}
ATerm Var_1_0 (ATerm o_103 (ATerm), ATerm t)
{
  ATerm p_80 = NULL,q_80 = NULL,s_80 = NULL,t_80 = NULL;
  t_80 = t;
  if(match_cons(t, sym_Var_1))
    {
      q_80 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_80);
  p_80 = t;
  t = q_80;
  t = o_103(t);
  s_80 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, s_80), p_80);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm a_14 (ATerm t)
  {
    ATerm h_81 = NULL,l_81 = NULL,n_81 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        l_81 = ATgetArgument(t, 0);
        t = l_81;
        if(match_cons(t, sym_Rule_3))
          {
            h_81 = ATgetArgument(t, 0);
            {
              ATerm k_51 = ATgetArgument(t, 1);
            }
            {
              ATerm l_51 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = h_81;
        {
          ATerm b_14 (ATerm t)
          {
            ATerm q_81 = NULL;
            if(match_cons(t, sym_Var_1))
              {
                q_81 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(ATempty, q_81);
            return(t);
          }
          ATerm c_14 (ATerm t)
          {
            ATerm m_51 = t;
            int n_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Bind0_0_0(t);
                ;
                LocalPopChoice(n_51);
              }
            else
              {
                t = m_51;
                {
                  ATerm s_81 = NULL,u_81 = NULL;
                  if(match_cons(t, sym_DynamicRules_1))
                    {
                      s_81 = ATgetArgument(t, 0);
                      t = s_81;
                      t = tvars_0_0(t);
                    }
                  else
                    {
                      ATerm o_51 = t;
                      int p_51 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              ATerm q_51 = ATgetArgument(t, 0);
                              ATerm r_51 = ATgetArgument(t, 1);
                              u_81 = ATgetArgument(t, 2);
                              {
                                ATerm s_51 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_51);
                          t = u_81;
                          {
                            ATerm d_14 (ATerm t)
                            {
                              ATerm a_82 = NULL;
                              ATerm t_51 = t;
                              int u_51 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      a_82 = ATgetArgument(t, 0);
                                      {
                                        ATerm v_51 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(u_51);
                                  t = a_82;
                                }
                              else
                                {
                                  t = t_51;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      a_82 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = a_82;
                                }
                              return(t);
                            }
                            t = map_1_0(d_14, t);
                          }
                        }
                      else
                        {
                          t = o_51;
                          if(match_cons(t, sym_RDefT_4))
                            {
                              ATerm w_51 = ATgetArgument(t, 0);
                              ATerm x_51 = ATgetArgument(t, 1);
                              u_81 = ATgetArgument(t, 2);
                              {
                                ATerm y_51 = ATgetArgument(t, 3);
                              }
                            }
                          else
                            _fail(t);
                          t = u_81;
                          {
                            ATerm e_14 (ATerm t)
                            {
                              ATerm i_82 = NULL;
                              ATerm z_51 = t;
                              int a_52 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      i_82 = ATgetArgument(t, 0);
                                      {
                                        ATerm b_52 = ATgetArgument(t, 1);
                                      }
                                    }
                                  else
                                    _fail(t);
                                  LocalPopChoice(a_52);
                                  t = i_82;
                                }
                              else
                                {
                                  t = z_51;
                                  if(match_cons(t, sym_DefaultVarDec_1))
                                    {
                                      i_82 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_82;
                                }
                              return(t);
                            }
                            t = map_1_0(e_14, t);
                          }
                        }
                    }
                }
              }
            return(t);
          }
          t = free_vars_3_0(b_14, c_14, tboundin_3_0, t);
        }
      }
    else
      {
        ATerm c_52 = t;
        int d_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                l_81 = ATgetArgument(t, 0);
                {
                  ATerm e_52 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(d_52);
            t = l_81;
          }
        else
          {
            t = c_52;
            {
              ATerm f_52 = t;
              int g_52 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm h_52 = ATgetArgument(t, 0);
                      ATerm i_52 = ATgetArgument(t, 1);
                      n_81 = ATgetArgument(t, 2);
                      {
                        ATerm j_52 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(g_52);
                  t = n_81;
                  {
                    ATerm f_14 (ATerm t)
                    {
                      ATerm p_82 = NULL;
                      ATerm k_52 = t;
                      int l_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              p_82 = ATgetArgument(t, 0);
                              {
                                ATerm m_52 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(l_52);
                          t = p_82;
                        }
                      else
                        {
                          t = k_52;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              p_82 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = p_82;
                        }
                      return(t);
                    }
                    t = map_1_0(f_14, t);
                  }
                }
              else
                {
                  t = f_52;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm n_52 = ATgetArgument(t, 0);
                      ATerm o_52 = ATgetArgument(t, 1);
                      n_81 = ATgetArgument(t, 2);
                      {
                        ATerm p_52 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = n_81;
                  {
                    ATerm g_14 (ATerm t)
                    {
                      ATerm a_83 = NULL;
                      ATerm q_52 = t;
                      int r_52 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_VarDec_2))
                            {
                              a_83 = ATgetArgument(t, 0);
                              {
                                ATerm s_52 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(r_52);
                          t = a_83;
                        }
                      else
                        {
                          t = q_52;
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              a_83 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          t = a_83;
                        }
                      return(t);
                    }
                    t = map_1_0(g_14, t);
                  }
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, a_14, tboundin_3_0, tpaste_1_0, t);
  {
    ATerm h_14 (ATerm t)
    {
      ATerm t_52 = t;
      int u_52 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Bind1_0_0(t);
          ;
          LocalPopChoice(u_52);
        }
      else
        {
          t = t_52;
          {
            ATerm e_83 = NULL,g_83 = NULL;
            ATerm v_52 = t;
            int w_52 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDef_3))
                  {
                    ATerm x_52 = ATgetArgument(t, 0);
                    g_83 = ATgetArgument(t, 1);
                    {
                      ATerm y_52 = ATgetArgument(t, 2);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(w_52);
                t = g_83;
                {
                  ATerm j_14 (ATerm t)
                  {
                    ATerm h_84 = NULL;
                    ATerm z_52 = t;
                    int a_53 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_VarDec_2))
                          {
                            h_84 = ATgetArgument(t, 0);
                            {
                              ATerm b_53 = ATgetArgument(t, 1);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(a_53);
                        t = h_84;
                      }
                    else
                      {
                        t = z_52;
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            h_84 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        t = h_84;
                      }
                    return(t);
                  }
                  t = map_1_0(j_14, t);
                }
              }
            else
              {
                t = v_52;
                {
                  ATerm c_53 = t;
                  int d_53 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_cons(t, sym_Rec_2))
                        {
                          e_83 = ATgetArgument(t, 0);
                          {
                            ATerm e_53 = ATgetArgument(t, 1);
                          }
                        }
                      else
                        _fail(t);
                      LocalPopChoice(d_53);
                      t = (ATerm) ATinsert(ATempty, e_83);
                    }
                  else
                    {
                      t = c_53;
                      {
                        ATerm f_53 = t;
                        int g_53 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            if(match_cons(t, sym_SDefT_4))
                              {
                                ATerm h_53 = ATgetArgument(t, 0);
                                g_83 = ATgetArgument(t, 1);
                                {
                                  ATerm i_53 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm j_53 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            LocalPopChoice(g_53);
                            t = g_83;
                            {
                              ATerm k_14 (ATerm t)
                              {
                                ATerm o_84 = NULL;
                                ATerm k_53 = t;
                                int o_53 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        o_84 = ATgetArgument(t, 0);
                                        {
                                          ATerm p_53 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(o_53);
                                    t = o_84;
                                  }
                                else
                                  {
                                    t = k_53;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        o_84 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = o_84;
                                  }
                                return(t);
                              }
                              t = map_1_0(k_14, t);
                            }
                          }
                        else
                          {
                            t = f_53;
                            if(match_cons(t, sym_RDefT_4))
                              {
                                ATerm q_53 = ATgetArgument(t, 0);
                                g_83 = ATgetArgument(t, 1);
                                {
                                  ATerm r_53 = ATgetArgument(t, 2);
                                }
                                {
                                  ATerm s_53 = ATgetArgument(t, 3);
                                }
                              }
                            else
                              _fail(t);
                            t = g_83;
                            {
                              ATerm l_14 (ATerm t)
                              {
                                ATerm u_84 = NULL;
                                ATerm t_53 = t;
                                int v_53 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        u_84 = ATgetArgument(t, 0);
                                        {
                                          ATerm w_53 = ATgetArgument(t, 1);
                                        }
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(v_53);
                                    t = u_84;
                                  }
                                else
                                  {
                                    t = t_53;
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
                              t = map_1_0(l_14, t);
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
    t = rename_4_0(SVar_1_0, h_14, sboundin_3_0, spaste_1_0, t);
  }
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm e_85 = NULL,f_85 = NULL,g_85 = NULL,h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL,l_85 = NULL,m_85 = NULL,n_85 = NULL,o_85 = NULL,q_85 = NULL,r_85 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_53 = ATgetArgument(t, 0);
      if(match_cons(x_53, sym_SVar_1))
        {
          e_85 = ATgetArgument(x_53, 0);
        }
      else
        _fail(t);
      f_85 = ATgetArgument(t, 1);
      g_85 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_85), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_85 = ATgetFirst((ATermList) t);
      {
        ATerm z_53 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = k_85;
  if(match_cons(t, sym_Defined_4))
    {
      ATerm b_54 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_54) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      h_85 = ATgetArgument(t, 1);
      i_85 = ATgetArgument(t, 2);
      j_85 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, e_85, h_85, j_85, i_85);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((e_85 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      l_85 = ATgetArgument(t, 1);
      {
        ATerm c_54 = ATgetArgument(t, 2);
      }
      m_85 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = l_85;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm w_85 = NULL;
      if(match_cons(t, sym_VarDec_2))
        {
          w_85 = ATgetArgument(t, 0);
          {
            ATerm d_54 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = w_85;
      return(t);
    }
    t = map_1_0(m_14, t);
    n_85 = t;
    t = (ATerm) ATmakeAppl(sym__3, n_85, f_85, m_85);
    {
      ATerm o_14 (ATerm t)
      {
        ATerm x_85 = NULL,a_86 = NULL,l_86 = NULL,m_86 = NULL;
        if(match_cons(t, sym_CallT_3))
          {
            a_86 = ATgetArgument(t, 0);
            m_86 = ATgetArgument(t, 1);
            x_85 = ATgetArgument(t, 2);
            t = a_86;
            if(match_cons(t, sym_SVar_1))
              {
                l_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = x_85;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_86;
          }
        else
          {
            if(match_cons(t, sym_Call_2))
              {
                a_86 = ATgetArgument(t, 0);
                m_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = a_86;
            if(match_cons(t, sym_SVar_1))
              {
                l_86 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = m_86;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = l_86;
          }
        return(t);
      }
      t = substitute_2_0(o_14, _id, t);
      o_85 = t;
      t = j_85;
      {
        ATerm p_14 (ATerm t)
        {
          ATerm p_86 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              p_86 = ATgetArgument(t, 0);
              {
                ATerm j_54 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = p_86;
          return(t);
        }
        t = map_1_0(p_14, t);
        q_85 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_85, q_85);
        {
          ATerm q_14 (ATerm t)
          {
            if(match_cons(t, sym__2))
              {
                ATerm o_54 = ATgetArgument(t, 0);
                if(((ATgetType(o_54) != AT_LIST) || !(ATisEmpty(o_54))))
                  _fail(t);
                {
                  ATerm p_54 = ATgetArgument(t, 1);
                  if(((ATgetType(p_54) != AT_LIST) || !(ATisEmpty(p_54))))
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm r_14 (ATerm t)
          {
            ATerm q_86 = NULL,r_86 = NULL,s_86 = NULL,t_86 = NULL;
            if(match_cons(t, sym__2))
              {
                ATerm q_54 = ATgetArgument(t, 0);
                if(((ATgetType(q_54) == AT_LIST) && !(ATisEmpty(q_54))))
                  {
                    q_86 = ATgetFirst((ATermList) q_54);
                    s_86 = (ATerm) ATgetNext((ATermList) q_54);
                  }
                else
                  _fail(t);
                {
                  ATerm r_54 = ATgetArgument(t, 1);
                  if(((ATgetType(r_54) == AT_LIST) && !(ATisEmpty(r_54))))
                    {
                      r_86 = ATgetFirst((ATermList) r_54);
                      t_86 = (ATerm) ATgetNext((ATermList) r_54);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_86, r_86), (ATerm) ATmakeAppl(sym__2, s_86, t_86));
            return(t);
          }
          ATerm s_14 (ATerm t)
          {
            ATerm u_86 = NULL,v_86 = NULL;
            if(match_cons(t, sym__2))
              {
                u_86 = ATgetArgument(t, 0);
                v_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_86), u_86);
            return(t);
          }
          ATerm t_14 (ATerm t)
          {
            ATerm w_86 = NULL,x_86 = NULL;
            if(match_cons(t, sym__2))
              {
                w_86 = ATgetArgument(t, 0);
                x_86 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, w_86), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_86)));
            return(t);
          }
          t = genzip_4_0(q_14, r_14, s_14, t_14, t);
          r_85 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, q_85, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_85), o_85));
          {
            ATerm u_14 (ATerm t)
            {
              t = repeat_1_0(Simplify_0_0, t);
              return(t);
            }
            t = downup_1_0(u_14, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm c_88 = NULL,e_88 = NULL;
  c_88 = t;
  t = new_0_0(t);
  e_88 = t;
  {
    ATerm s_54 = t;
    int t_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_b_55, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_88), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(t_54);
      }
    else
      {
        t = s_54;
        {
          ATerm w_14 (ATerm t)
          {
            ATerm f_88 = NULL;
            f_88 = t;
            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue))));
            t = f_88;
            return(t);
          }
          t = if_verbose2_1_0(w_14, t);
          _fail(t);
        }
      }
    {
      ATerm e_55 = t;
      int f_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_88 = NULL,h_88 = NULL,i_88 = NULL,j_88 = NULL,k_88 = NULL,t_88 = NULL,d_89 = NULL;
          g_88 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              h_88 = ATgetArgument(t, 0);
              d_89 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_88;
          if(match_cons(t, sym_CallT_3))
            {
              i_88 = ATgetArgument(t, 0);
              k_88 = ATgetArgument(t, 1);
              t_88 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = i_88;
          if(match_cons(t, sym_SVar_1))
            {
              j_88 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_88;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_88;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_89;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = j_88;
          if((e_88 != t))
            {
              _fail(t);
            }
          t = g_88;
          ;
          LocalPopChoice(f_55);
        }
      else
        {
          t = e_55;
          {
            ATerm x_14 (ATerm t)
            {
              ATerm i_17 = NULL;
              i_17 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, i_17), (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue))));
              t = i_17;
              return(t);
            }
            t = if_verbose1_1_0(x_14, t);
            _fail(t);
          }
        }
      {
        ATerm y_14 (ATerm t)
        {
          ATerm h_89 = NULL;
          h_89 = t;
          t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue))));
          t = h_89;
          return(t);
        }
        t = if_verbose2_1_0(y_14, t);
        t = c_88;
      }
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
ATerm assert_1_0 (ATerm u_129 (ATerm), ATerm t)
{
  ATerm i_89 = NULL,r_89 = NULL,t_91 = NULL,u_91 = NULL,d_92 = NULL;
  if(match_cons(t, sym__2))
    {
      i_89 = ATgetArgument(t, 0);
      r_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_129(t);
  t_91 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_91, i_89, r_89);
  t = table_push_0_0(t);
  {
    ATerm g_55 = t;
    int h_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(t_91, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_55);
      }
    else
      {
        t = g_55;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_91 = ATgetFirst((ATermList) t);
        d_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(t_91, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(d_92), (ATerm) ATinsert(CheckATermList(u_91), i_89)));
    t = (ATerm) ATmakeAppl(sym__2, i_89, r_89);
  }
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm e_92 = NULL,f_92 = NULL,g_92 = NULL,h_92 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      e_92 = ATgetArgument(t, 0);
      f_92 = ATgetArgument(t, 1);
      g_92 = ATgetArgument(t, 2);
      h_92 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_92), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_i_55, f_92, h_92, g_92));
  {
    ATerm z_14 (ATerm t)
    {
      t = term_j_55;
      return(t);
    }
    t = assert_1_0(z_14, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_92, f_92, g_92, h_92);
  }
  return(t);
}
ATerm map_1_0 (ATerm s_121 (ATerm), ATerm t)
{
  ATerm i_92 (ATerm t)
  {
    ATerm k_55 = t;
    int l_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_55);
      }
    else
      {
        t = k_55;
        t = Cons_2_0(s_121, i_92, t);
      }
    return(t);
  }
  t = i_92(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm q_102 (ATerm), ATerm t)
{
  ATerm j_92 = NULL,k_92 = NULL,l_92 = NULL,m_92 = NULL;
  m_92 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_92 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_92);
  j_92 = t;
  t = k_92;
  t = q_102(t);
  l_92 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, l_92), j_92);
  return(t);
}
ATerm Cons_2_0 (ATerm m_102 (ATerm), ATerm n_102 (ATerm), ATerm t)
{
  ATerm p_92 = NULL,q_92 = NULL,r_92 = NULL,s_92 = NULL,t_92 = NULL,u_92 = NULL;
  u_92 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_92 = ATgetFirst((ATermList) t);
      r_92 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_92);
  p_92 = t;
  t = q_92;
  t = m_102(t);
  s_92 = t;
  t = r_92;
  t = n_102(t);
  t_92 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(t_92), s_92), p_92);
  return(t);
}
ATerm Signature_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm y_92 = NULL,a_93 = NULL,c_93 = NULL,d_93 = NULL;
  d_93 = t;
  if(match_cons(t, sym_Signature_1))
    {
      a_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_93);
  y_92 = t;
  t = a_93;
  t = r_102(t);
  c_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, c_93), y_92);
  return(t);
}
ATerm Specification_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm g_93 = NULL,h_93 = NULL,i_93 = NULL,j_93 = NULL;
  j_93 = t;
  if(match_cons(t, sym_Specification_1))
    {
      h_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_93);
  g_93 = t;
  t = h_93;
  t = v_102(t);
  i_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, i_93), g_93);
  return(t);
}
ATerm _2_0 (ATerm x_97 (ATerm), ATerm y_97 (ATerm), ATerm t)
{
  ATerm m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,r_93 = NULL;
  r_93 = t;
  if(match_cons(t, sym__2))
    {
      n_93 = ATgetArgument(t, 0);
      o_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_93);
  m_93 = t;
  t = n_93;
  t = x_97(t);
  p_93 = t;
  t = o_93;
  t = y_97(t);
  q_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_93, q_93), m_93);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm k_137 (ATerm), ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL;
  if(match_cons(t, sym__2))
    {
      u_93 = ATgetArgument(t, 0);
      v_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_93, term_m_55);
  t = open_stream_0_0(t);
  w_93 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_93, v_93);
  t = k_137(t);
  t = fclose_0_0(t);
  t = v_93;
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm x_93 = NULL,y_93 = NULL;
  x_93 = t;
  {
    ATerm b_15 (ATerm t)
    {
      ATerm n_55 = t;
      int o_55 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_15 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((y_93 != NULL) && (y_93 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  y_93 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(c_15, t);
          ;
          LocalPopChoice(o_55);
        }
      else
        {
          t = n_55;
          t = term_p_55;
          if(((y_93 != NULL) && (y_93 != t)))
            _fail(t);
          else
            y_93 = t;
        }
      return(t);
    }
    t = _2_0(b_15, _id, t);
    t = x_93;
    {
      ATerm d_15 (ATerm t)
      {
        ATerm l_17 = NULL;
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_93), l_17);
        return(t);
      }
      t = _2_0(_id, d_15, t);
      {
        ATerm q_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_15 (ATerm t)
            {
              ATerm o_15 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = fetch_1_0(o_15, t);
              return(t);
            }
            ATerm l_15 (ATerm t)
            {
              ATerm r_15 (ATerm t)
              {
                ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL;
                if(match_cons(t, sym__2))
                  {
                    ATerm w_55 = ATgetArgument(t, 0);
                    if(match_cons(w_55, sym_Stream_1))
                      {
                        z_93 = ATgetArgument(w_55, 0);
                      }
                    else
                      _fail(t);
                    a_94 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_write_term_to_stream_baf(z_93, a_94);
                b_94 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, b_94);
                return(t);
              }
              t = WriteToFile_1_0(r_15, t);
              return(t);
            }
            t = _2_0(k_15, l_15, t);
            ;
            LocalPopChoice(v_55);
          }
        else
          {
            t = q_55;
            {
              ATerm s_15 (ATerm t)
              {
                ATerm t_15 (ATerm t)
                {
                  ATerm c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      ATerm x_55 = ATgetArgument(t, 0);
                      if(match_cons(x_55, sym_Stream_1))
                        {
                          c_94 = ATgetArgument(x_55, 0);
                        }
                      else
                        _fail(t);
                      d_94 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = SSL_write_term_to_stream_text(c_94, d_94);
                  e_94 = t;
                  t = SSL_fputc((ATerm)ATmakeInt(10), e_94);
                  f_94 = t;
                  t = (ATerm) ATmakeAppl(sym_Stream_1, f_94);
                  return(t);
                }
                t = WriteToFile_1_0(t_15, t);
                return(t);
              }
              t = _2_0(_id, s_15, t);
            }
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
ATerm apply_strategy_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL;
  g_94 = t;
  t = dtime_0_0(t);
  t = g_94;
  t = w_138(t);
  h_94 = t;
  t = dtime_0_0(t);
  i_94 = t;
  t = h_94;
  if(match_cons(t, sym__2))
    {
      j_94 = ATgetArgument(t, 0);
      k_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_94), (ATerm) ATmakeAppl(sym_Runtime_1, i_94)), k_94);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm a_95 (ATerm u_94, ATerm t)
  {
    t = SSL_fclose(u_94);
    return(t);
  }
  ATerm x_94 = NULL,y_94 = NULL;
  y_94 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_94 = ATgetArgument(t, 0);
      {
        ATerm y_55 = t;
        int z_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_94);
            ;
            LocalPopChoice(z_55);
          }
        else
          {
            t = y_55;
            t = a_95(y_94, t);
          }
      }
    }
  else
    {
      t = a_95(y_94, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_95 = NULL;
  t = SSL_stdin_stream();
  b_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_95);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_95 = NULL;
  t = SSL_stdout_stream();
  c_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_95);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_95 = NULL;
  t = SSL_stderr_stream();
  d_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_95);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm a_56 = ATgetArgument(t, 0);
      ATerm b_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_56 = t;
    int d_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_18 = NULL,e_18 = NULL;
        a_18 = t;
        t = SSL_explode_term(a_18);
        if(match_cons(t, sym__2))
          {
            ATerm e_56 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) e_56) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm f_56 = ATgetArgument(t, 1);
              if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
                {
                  e_18 = ATgetFirst((ATermList) f_56);
                  {
                    ATerm g_56 = (ATerm) ATgetNext((ATermList) f_56);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = e_18;
        if(match_cons(t, sym_stderr_0))
          {
            t = e_18;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = e_18;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = e_18;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(d_56);
      }
    else
      {
        t = c_56;
        {
          ATerm h_56 = t;
          int i_56 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
              ATerm u_15 (ATerm t)
              {
                ATerm m_95 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    m_95 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = m_95;
                return(t);
              }
              t = _2_0(u_15, _id, t);
              if(match_cons(t, sym__2))
                {
                  i_95 = ATgetArgument(t, 0);
                  j_95 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(i_95, j_95);
              k_95 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, k_95);
              ;
              LocalPopChoice(i_56);
            }
          else
            {
              t = h_56;
              {
                ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL;
                ATerm z_15 (ATerm t)
                {
                  ATerm q_95 = NULL;
                  q_95 = t;
                  t = SSL_is_string(q_95);
                  return(t);
                }
                t = _2_0(z_15, _id, t);
                if(match_cons(t, sym__2))
                  {
                    n_95 = ATgetArgument(t, 0);
                    o_95 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(n_95, o_95);
                p_95 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, p_95);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL;
  ATerm j_56 = t;
  int k_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_95 = NULL;
      u_95 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_95, term_l_56);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_56);
    }
  else
    {
      t = j_56;
      {
        ATerm f_18 = NULL;
        f_18 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, f_18), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = f_18;
        _fail(t);
      }
    }
  r_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_95 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(t_95);
  s_95 = t;
  t = r_95;
  t = fclose_0_0(t);
  t = s_95;
  return(t);
}
ATerm fetch_1_0 (ATerm d_122 (ATerm), ATerm t)
{
  ATerm z_95 (ATerm t)
  {
    ATerm m_56 = t;
    int n_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(d_122, _id, t);
        ;
        LocalPopChoice(n_56);
      }
    else
      {
        t = m_56;
        t = Cons_2_0(_id, z_95, t);
      }
    return(t);
  }
  t = z_95(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm o_56 = t;
  int p_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_56);
    }
  else
    {
      t = o_56;
      {
        ATerm c_96 = NULL,d_96 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_96 = ATgetFirst((ATermList) t);
            d_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_96;
        {
          ATerm a_16 (ATerm t)
          {
            t = d_96;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(a_16, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm j_96 (ATerm t)
  {
    ATerm q_56 = t;
    int r_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, j_96, t);
        ;
        LocalPopChoice(r_56);
      }
    else
      {
        t = q_56;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_122(t);
      }
    return(t);
  }
  t = j_96(t);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm l_96 = NULL;
  ATerm e_16 (ATerm t)
  {
    ATerm m_96 = NULL;
    m_96 = t;
    t = SSL_explode_string(m_96);
    return(t);
  }
  ATerm g_16 (ATerm t)
  {
    ATerm n_96 = NULL;
    n_96 = t;
    t = SSL_explode_string(n_96);
    return(t);
  }
  t = _2_0(e_16, g_16, t);
  {
    ATerm s_56 = t;
    int t_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_96 = NULL,q_96 = NULL;
        if(match_cons(t, sym__2))
          {
            p_96 = ATgetArgument(t, 0);
            q_96 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_96;
        {
          ATerm h_16 (ATerm t)
          {
            t = q_96;
            return(t);
          }
          t = at_end_1_0(h_16, t);
        }
        ;
        LocalPopChoice(t_56);
      }
    else
      {
        t = s_56;
        {
          ATerm o_18 = NULL,r_18 = NULL;
          o_18 = t;
          t = SSL_explode_term(o_18);
          if(match_cons(t, sym__2))
            {
              ATerm u_56 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) u_56) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_18;
          t = concat_0_0(t);
        }
      }
    l_96 = t;
    t = SSL_implode_string(l_96);
  }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm v_56 = t;
  int w_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_97 = NULL;
      a_97 = t;
      t = SSL_is_string(a_97);
      ;
      LocalPopChoice(w_56);
    }
  else
    {
      t = v_56;
      {
        ATerm x_56 = t;
        int y_56 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_16 (ATerm t)
            {
              ATerm z_56 = t;
              int a_57 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(a_57);
                }
              else
                {
                  t = z_56;
                }
              return(t);
            }
            t = map_1_0(i_16, t);
            ;
            LocalPopChoice(y_56);
          }
        else
          {
            t = x_56;
            {
              ATerm l_97 = NULL,m_97 = NULL,n_97 = NULL;
              l_97 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_97 = ATgetArgument(t, 0);
                  t = m_97;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_97 = ATgetArgument(t, 0);
                      t = m_97;
                      {
                        ATerm b_57 = t;
                        int c_57 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_97);
                            {
                              ATerm d_57 = t;
                              int g_57 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_19 = NULL;
                                  t = eval_config_0_0(t);
                                  p_19 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), m_97, p_19);
                                  t = p_19;
                                  ;
                                  LocalPopChoice(g_57);
                                }
                              else
                                {
                                  t = d_57;
                                }
                            }
                            ;
                            LocalPopChoice(c_57);
                          }
                        else
                          {
                            t = b_57;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, m_97), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = m_97;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_97 = NULL,z_97 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_97 = ATgetArgument(t, 0);
                          n_97 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_97;
                      t = eval_config_0_0(t);
                      w_97 = t;
                      t = n_97;
                      t = eval_config_0_0(t);
                      z_97 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_97, z_97);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm l_16 (ATerm t)
  {
    ATerm f_98 = NULL;
    f_98 = t;
    if(match_string(t, "-k"))
      {
        t = f_98;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = f_98;
      }
    return(t);
  }
  ATerm p_16 (ATerm t)
  {
    ATerm g_98 = NULL,h_98 = NULL;
    g_98 = t;
    t = SSL_string_to_int(g_98);
    h_98 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), h_98);
    t = g_98;
    return(t);
  }
  ATerm s_16 (ATerm t)
  {
    t = term_j_57;
    return(t);
  }
  t = ArgOption_3_0(l_16, p_16, s_16, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm m_57 = t;
  int n_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16 (ATerm t)
      {
        ATerm j_98 = NULL;
        j_98 = t;
        if(match_string(t, "-S"))
          {
            t = j_98;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = j_98;
          }
        return(t);
      }
      ATerm x_16 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_p_57;
        return(t);
      }
      ATerm y_16 (ATerm t)
      {
        t = term_q_57;
        return(t);
      }
      t = Option_3_0(w_16, x_16, y_16, t);
      ;
      LocalPopChoice(n_57);
    }
  else
    {
      t = m_57;
      {
        ATerm r_57 = t;
        int s_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_17 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm d_17 (ATerm t)
            {
              ATerm k_98 = NULL,l_98 = NULL;
              k_98 = t;
              t = SSL_string_to_int(k_98);
              l_98 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), l_98);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, k_98);
              return(t);
            }
            ATerm e_17 (ATerm t)
            {
              t = term_t_57;
              return(t);
            }
            t = ArgOption_3_0(a_17, d_17, e_17, t);
            ;
            LocalPopChoice(s_57);
          }
        else
          {
            t = r_57;
            {
              ATerm f_17 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_17 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_u_57;
                return(t);
              }
              ATerm j_17 (ATerm t)
              {
                t = term_v_57;
                return(t);
              }
              t = Option_3_0(f_17, h_17, j_17, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm o_98 = NULL,p_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_98 = NULL;
      t = term_e_19;
      t = d_0(t);
      q_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_57, term_x_57, q_98);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm t_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_98 = ATgetFirst((ATermList) t);
          p_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_98;
      t = a_0(t);
      t = term_e_19;
      t = b_0(t);
      t_98 = t;
      t = (ATerm) ATinsert(CheckATermList(p_98), t_98);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm k_17 (ATerm t)
  {
    ATerm v_98 = NULL;
    v_98 = t;
    if(match_string(t, "-o"))
      {
        t = v_98;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = v_98;
      }
    return(t);
  }
  ATerm m_17 (ATerm t)
  {
    ATerm w_98 = NULL;
    w_98 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), w_98);
    t = (ATerm) ATmakeAppl(sym_Output_1, w_98);
    return(t);
  }
  ATerm o_17 (ATerm t)
  {
    t = term_y_57;
    return(t);
  }
  t = ArgOption_3_0(k_17, m_17, o_17, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm z_98 = NULL,a_99 = NULL,b_99 = NULL,c_99 = NULL;
  if(match_cons(t, sym__3))
    {
      z_98 = ATgetArgument(t, 0);
      a_99 = ATgetArgument(t, 1);
      b_99 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_98, a_99);
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_58 = ATgetArgument(t, 0);
            ATerm d_58 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(z_98, a_99);
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        t = (ATerm) ATempty;
      }
    c_99 = t;
    t = SSL_table_put(z_98, a_99, (ATerm) ATinsert(CheckATermList(c_99), b_99));
    t = (ATerm) ATmakeAppl(sym__3, z_98, a_99, b_99);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm k_99 = NULL,l_99 = NULL,m_99 = NULL,n_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_99 = NULL;
      t = term_e_19;
      t = m_0(t);
      o_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_w_57, term_x_57, o_99);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm s_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_99 = ATgetFirst((ATermList) t);
          l_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_99 = ATgetFirst((ATermList) t);
          n_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_99;
      t = i_0(t);
      t = m_99;
      t = k_0(t);
      s_99 = t;
      t = (ATerm) ATinsert(CheckATermList(n_99), s_99);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm s_17 (ATerm t)
  {
    ATerm u_99 = NULL;
    u_99 = t;
    if(match_string(t, "-i"))
      {
        t = u_99;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = u_99;
      }
    return(t);
  }
  ATerm t_17 (ATerm t)
  {
    ATerm v_99 = NULL;
    v_99 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), v_99);
    t = (ATerm) ATmakeAppl(sym_Input_1, v_99);
    return(t);
  }
  ATerm u_17 (ATerm t)
  {
    t = term_g_58;
    return(t);
  }
  t = ArgOption_3_0(s_17, t_17, u_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_99 = NULL;
  t = report_run_time_0_0(t);
  t = term_e_19;
  t = whoami_0_0(t);
  w_99 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), w_99));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_58 = t;
    int j_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_19 = NULL;
        t = eval_config_0_0(t);
        w_19 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), w_19);
        t = w_19;
        ;
        LocalPopChoice(j_58);
      }
    else
      {
        t = i_58;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_128 (ATerm), ATerm k_128 (ATerm), ATerm t)
{
  ATerm k_58 = t;
  int l_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_128(t);
      ;
      LocalPopChoice(l_58);
    }
  else
    {
      t = k_58;
      {
        ATerm z_99 = NULL,a_100 = NULL,d_100 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_99 = ATgetFirst((ATermList) t);
            a_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_100;
        t = foldr_2_0(j_128, k_128, t);
        d_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_99, d_100);
        t = k_128(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm g_100 = NULL,x_19 = NULL,y_19 = NULL;
  t = times_0_0(t);
  x_19 = t;
  t = SSL_explode_term(x_19);
  if(match_cons(t, sym__2))
    {
      ATerm m_58 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_19;
  {
    ATerm v_17 (ATerm t)
    {
      t = term_o_57;
      return(t);
    }
    ATerm w_17 (ATerm t)
    {
      ATerm b_20 = NULL,c_20 = NULL;
      if(match_cons(t, sym__2))
        {
          b_20 = ATgetArgument(t, 0);
          c_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm n_58 = t;
        int r_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(b_20, c_20);
            ;
            LocalPopChoice(r_58);
          }
        else
          {
            t = n_58;
            t = SSL_addr(b_20, c_20);
          }
      }
      return(t);
    }
    t = foldr_2_0(v_17, w_17, t);
    g_100 = t;
    t = SSL_TicksToSeconds(g_100);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  if(match_cons(t, sym__2))
    {
      s_100 = ATgetArgument(t, 0);
      t_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_58 = t;
    int u_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_100;
        if((s_100 != t))
          {
            _fail(t);
          }
        t = r_100;
        ;
        LocalPopChoice(u_58);
      }
    else
      {
        t = t_58;
        t = r_100;
        {
          ATerm v_58 = t;
          int w_58 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_100, t_100);
              ;
              LocalPopChoice(w_58);
            }
          else
            {
              t = v_58;
              t = SSL_gtr(s_100, t_100);
            }
          t = (ATerm) ATmakeAppl(sym__2, s_100, t_100);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_147 (ATerm), ATerm t)
{
  ATerm x_58 = t;
  int y_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_100 = NULL,y_100 = NULL;
      w_100 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_58 = t;
        int a_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_20 = NULL;
            t = eval_config_0_0(t);
            m_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), m_20);
            t = m_20;
            ;
            LocalPopChoice(a_59);
          }
        else
          {
            t = z_58;
          }
        y_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_100, term_e_59);
        t = geq_0_0(t);
        t = w_100;
        t = c_147(t);
      }
      ;
      LocalPopChoice(y_58);
    }
  else
    {
      t = x_58;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_17 (ATerm t)
  {
    ATerm a_101 = NULL,b_101 = NULL;
    t = run_time_0_0(t);
    a_101 = t;
    t = term_e_19;
    t = whoami_0_0(t);
    b_101 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), a_101), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), b_101));
    t = (ATerm) ATmakeAppl(sym__2, term_g_59, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_59), a_101), term_h_59), b_101));
    return(t);
  }
  t = if_verbose1_1_0(x_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm j_59 = t;
  int k_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm l_59 = t;
        int m_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_20 = NULL;
            t = eval_config_0_0(t);
            q_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), q_20);
            t = q_20;
            ;
            LocalPopChoice(m_59);
          }
        else
          {
            t = l_59;
          }
      }
      ;
      LocalPopChoice(k_59);
    }
  else
    {
      t = j_59;
      {
        ATerm y_17 (ATerm t)
        {
          ATerm n_59 = t;
          int o_59 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(o_59);
            }
          else
            {
              t = n_59;
              {
                ATerm p_59 = t;
                int q_59 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(q_59);
                  }
                else
                  {
                    t = p_59;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(y_17, t);
      }
    }
  t = u_139(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm d_101 = NULL,e_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_101 = ATgetFirst((ATermList) t);
      e_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_101 = NULL,j_101 = NULL;
        t = e_101;
        t = g_0(t);
        i_101 = t;
        t = d_101;
        t = f_0(t);
        j_101 = t;
        t = e_101;
        {
          ATerm z_17 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(i_101), j_101);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_17, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_e_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm l_116 (ATerm), ATerm t)
{
  ATerm k_101 = NULL,l_101 = NULL,m_101 = NULL,n_101 = NULL;
  n_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      l_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_101);
  k_101 = t;
  t = l_101;
  t = l_116(t);
  m_101 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, m_101), k_101);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_59 = t;
  int s_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm t_59 = t;
        int u_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_20 = NULL;
            t = eval_config_0_0(t);
            u_20 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_20);
            t = u_20;
            ;
            LocalPopChoice(u_59);
          }
        else
          {
            t = t_59;
          }
      }
      ;
      LocalPopChoice(s_59);
    }
  else
    {
      t = r_59;
      {
        ATerm b_18 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(b_18, t);
      }
    }
  t = term_v_59;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm c_18 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, c_18, t);
    {
      ATerm d_18 (ATerm t)
      {
        ATerm q_101 = NULL;
        q_101 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, q_101), term_w_59);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(d_18, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm m_116 (ATerm), ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL,u_101 = NULL;
  u_101 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      s_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_101);
  r_101 = t;
  t = s_101;
  t = m_116(t);
  t_101 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, t_101), r_101);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_101 = NULL,z_101 = NULL;
  y_101 = t;
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_101;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm z_59 = ATgetFirst((ATermList) t);
                ATerm a_60 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_101;
          }
        ;
        LocalPopChoice(y_59);
      }
    else
      {
        t = x_59;
        t = (ATerm) ATinsert(ATempty, y_101);
      }
    z_101 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), z_101);
    t = y_101;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm b_60 = t;
    int c_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL;
        t = eval_config_0_0(t);
        y_20 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), y_20);
        t = y_20;
        ;
        LocalPopChoice(c_60);
      }
    else
      {
        t = b_60;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm d_60 = t;
  int e_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm h_18 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_h_60;
        return(t);
      }
      ATerm i_18 (ATerm t)
      {
        t = term_i_60;
        return(t);
      }
      t = Option_3_0(g_18, h_18, i_18, t);
      ;
      LocalPopChoice(e_60);
    }
  else
    {
      t = d_60;
      {
        ATerm j_18 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm k_18 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_j_60;
          return(t);
        }
        ATerm m_18 (ATerm t)
        {
          t = term_k_60;
          return(t);
        }
        t = Option_3_0(j_18, k_18, m_18, t);
      }
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm z_142 (ATerm), ATerm t)
{
  ATerm e_102 = NULL;
  e_102 = t;
  {
    ATerm l_60 = t;
    int m_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_60;
        t = z_142(t);
        ;
        LocalPopChoice(m_60);
      }
    else
      {
        t = l_60;
      }
    t = e_102;
    {
      ATerm n_18 (ATerm t)
      {
        ATerm f_102 = NULL;
        f_102 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), f_102);
        t = (ATerm) ATmakeAppl(sym_Program_1, f_102);
        return(t);
      }
      ATerm s_18 (ATerm t)
      {
        ATerm o_60 = t;
        int p_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_60 = t;
            int r_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(r_60);
              }
            else
              {
                t = q_60;
                t = z_142(t);
                t = Cons_2_0(_id, s_18, t);
              }
            ;
            LocalPopChoice(p_60);
          }
        else
          {
            t = o_60;
            {
              ATerm h_102 = NULL,i_102 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_102 = ATgetFirst((ATermList) t);
                  i_102 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_102), (ATerm) ATmakeAppl(sym_Undefined_1, h_102));
            }
          }
        return(t);
      }
      t = Cons_2_0(n_18, s_18, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm y_142 (ATerm), ATerm t)
{
  ATerm t_102 = NULL,u_102 = NULL,w_102 = NULL;
  t_102 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = t_102;
  {
    ATerm v_18 (ATerm t)
    {
      ATerm s_60 = t;
      int t_60 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_142(t);
          ;
          LocalPopChoice(t_60);
        }
      else
        {
          t = s_60;
          {
            ATerm u_60 = t;
            int v_60 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_18 (ATerm t)
                {
                  ATerm x_102 = NULL;
                  x_102 = t;
                  if(match_string(t, "--help"))
                    {
                      t = x_102;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = x_102;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = x_102;
                        }
                    }
                  return(t);
                }
                ATerm b_19 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_w_60;
                  return(t);
                }
                ATerm c_19 (ATerm t)
                {
                  t = term_x_60;
                  return(t);
                }
                t = Option_3_0(w_18, b_19, c_19, t);
                ;
                LocalPopChoice(v_60);
              }
            else
              {
                t = u_60;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(v_18, t);
    {
      ATerm b_61 = t;
      int c_61 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_103 = NULL;
          c_103 = t;
          {
            ATerm d_61 = t;
            int e_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = c_103;
                {
                  ATerm f_61 = t;
                  int g_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm h_61 = t;
                        int i_61 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_23 = NULL;
                            t = eval_config_0_0(t);
                            w_23 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_23);
                            t = w_23;
                            ;
                            LocalPopChoice(i_61);
                          }
                        else
                          {
                            t = h_61;
                          }
                      }
                      ;
                      LocalPopChoice(g_61);
                    }
                  else
                    {
                      t = f_61;
                      {
                        ATerm f_19 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(f_19, t);
                      }
                    }
                  t = c_103;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(e_61);
              }
            else
              {
                t = d_61;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm j_61 = t;
                  int k_61 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_24 = NULL;
                      t = eval_config_0_0(t);
                      c_24 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), c_24);
                      t = c_24;
                      ;
                      LocalPopChoice(k_61);
                    }
                  else
                    {
                      t = j_61;
                    }
                  t = c_103;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(c_61);
        }
      else
        {
          t = b_61;
          {
            ATerm l_61 = t;
            int m_61 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_19 (ATerm t)
                {
                  ATerm h_19 (ATerm t)
                  {
                    if(((u_102 != NULL) && (u_102 != t)))
                      _fail(t);
                    else
                      u_102 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_19, t);
                  return(t);
                }
                t = fetch_1_0(g_19, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_102)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_g_59, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_102)), term_n_61));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(m_61);
              }
            else
              {
                t = l_61;
              }
          }
        }
      w_102 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = w_102;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm y_139 (ATerm), ATerm z_139 (ATerm), ATerm t)
{
  ATerm f_103 = NULL;
  t = parse_options_1_0(w_139, t);
  f_103 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), f_103);
  t = f_103;
  t = y_139(t);
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_139, t);
        ;
        LocalPopChoice(p_61);
      }
    else
      {
        t = o_61;
        {
          ATerm q_61 = t;
          int r_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_139(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_61);
            }
          else
            {
              t = q_61;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm f_139 (ATerm), ATerm g_139 (ATerm), ATerm h_139 (ATerm), ATerm t)
{
  ATerm i_19 (ATerm t)
  {
    ATerm s_61 = t;
    int t_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_139(t);
        ;
        LocalPopChoice(t_61);
      }
    else
      {
        t = s_61;
        {
          ATerm u_61 = t;
          int v_61 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(v_61);
            }
          else
            {
              t = u_61;
              {
                ATerm w_61 = t;
                int x_61 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(x_61);
                  }
                else
                  {
                    t = w_61;
                    {
                      ATerm z_61 = t;
                      int a_62 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_19 (ATerm t)
                          {
                            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                              _fail(t);
                            return(t);
                          }
                          ATerm m_19 (ATerm t)
                          {
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                            t = term_c_62;
                            return(t);
                          }
                          ATerm n_19 (ATerm t)
                          {
                            t = term_d_62;
                            return(t);
                          }
                          t = Option_3_0(l_19, m_19, n_19, t);
                          ;
                          LocalPopChoice(a_62);
                        }
                      else
                        {
                          t = z_61;
                          {
                            ATerm e_62 = t;
                            int f_62 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(f_62);
                              }
                            else
                              {
                                t = e_62;
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
  ATerm j_19 (ATerm t)
  {
    ATerm o_19 (ATerm t)
    {
      ATerm g_103 = NULL,h_103 = NULL;
      g_103 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm g_62 = t;
        int h_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_24 = NULL;
            t = eval_config_0_0(t);
            m_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), m_24);
            t = m_24;
            ;
            LocalPopChoice(h_62);
          }
        else
          {
            t = g_62;
          }
        h_103 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_103));
        t = g_103;
      }
      return(t);
    }
    t = if_verbose2_1_0(o_19, t);
    return(t);
  }
  ATerm k_19 (ATerm t)
  {
    ATerm i_103 = NULL,j_103 = NULL,r_24 = NULL;
    i_103 = t;
    {
      ATerm i_62 = t;
      int j_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_19 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((j_103 != NULL) && (j_103 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_103 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_19, t);
          ;
          LocalPopChoice(j_62);
        }
      else
        {
          t = i_62;
          t = term_k_62;
          j_103 = t;
        }
      t = not_null(j_103);
      t = ReadFromFile_0_0(t);
      r_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_103, r_24);
      t = apply_strategy_1_0(f_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(i_19, h_139, j_19, k_19, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm r_19 (ATerm t)
  {
    ATerm s_19 (ATerm t)
    {
      ATerm l_62 = t;
      int m_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_19 (ATerm t)
          {
            ATerm u_19 (ATerm t)
            {
              t = Signature_1_0(_id, t);
              return(t);
            }
            ATerm v_19 (ATerm t)
            {
              ATerm z_19 (ATerm t)
              {
                ATerm d_20 (ATerm t)
                {
                  t = map_1_0(declare_inline_rule_0_0, t);
                  return(t);
                }
                t = Strategies_1_0(d_20, t);
                return(t);
              }
              ATerm a_20 (ATerm t)
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                return(t);
              }
              t = Cons_2_0(z_19, a_20, t);
              return(t);
            }
            t = Cons_2_0(u_19, v_19, t);
            return(t);
          }
          t = Specification_1_0(t_19, t);
          t = check_library_definitions_0_0(t);
          t = alltd_1_0(innermost_fusion_0_0, t);
          ;
          LocalPopChoice(m_62);
        }
      else
        {
          t = l_62;
          {
            ATerm e_20 (ATerm t)
            {
              ATerm k_103 = NULL;
              k_103 = t;
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue))));
              t = k_103;
              return(t);
            }
            t = if_verbose2_1_0(e_20, t);
          }
        }
      return(t);
    }
    t = _2_0(_id, s_19, t);
    return(t);
  }
  t = iowrap_3_0(r_19, _fail, default_usage_0_0, t);
  return(t);
}
