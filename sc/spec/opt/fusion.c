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
ATerm term_t_63;
ATerm term_c_63;
ATerm term_b_63;
ATerm term_w_62;
ATerm term_f_62;
ATerm term_e_62;
ATerm term_w_61;
ATerm term_r_61;
ATerm term_q_61;
ATerm term_p_61;
ATerm term_o_61;
ATerm term_n_61;
ATerm term_m_61;
ATerm term_f_61;
ATerm term_a_61;
ATerm term_r_60;
ATerm term_q_60;
ATerm term_o_60;
ATerm term_m_60;
ATerm term_q_59;
ATerm term_i_59;
ATerm term_g_59;
ATerm term_f_59;
ATerm term_a_59;
ATerm term_z_58;
ATerm term_y_58;
ATerm term_x_58;
ATerm term_w_58;
ATerm term_v_58;
ATerm term_u_58;
ATerm term_u_57;
ATerm term_a_57;
ATerm term_v_56;
ATerm term_s_56;
ATerm term_q_56;
ATerm term_l_56;
ATerm term_k_56;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_e_37;
ATerm term_x_35;
ATerm term_v_35;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_o_32;
ATerm term_n_32;
ATerm term_m_32;
ATerm term_l_32;
ATerm term_k_32;
ATerm term_j_32;
ATerm term_o_31;
ATerm term_n_31;
ATerm term_f_31;
ATerm term_e_31;
ATerm term_e_30;
ATerm term_d_30;
ATerm term_z_28;
ATerm term_c_27;
ATerm term_y_26;
ATerm term_n_25;
ATerm term_c_23;
ATerm term_s_22;
ATerm term_c_22;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
void init_constant_terms (void)
{
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("l_0", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(sym_Defined_1, term_y_26);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeAppl(ATmakeSymbol("u_0", 0, ATtrue));
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_30);
  ATprotect(&(term_e_31));
  term_e_31 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_f_31));
  term_f_31 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_31);
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_o_31));
  term_o_31 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_31);
  ATprotect(&(term_j_32));
  term_j_32 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_l_32));
  term_l_32 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_m_32));
  term_m_32 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_32);
  ATprotect(&(term_n_32));
  term_n_32 = (ATerm) ATmakeAppl(sym_CallT_3, term_m_32, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_32, term_p_32);
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_32, term_q_32);
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("o_0", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_t_32, term_p_32);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_o_32, term_u_32);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(sym_Seq_2, term_n_32, term_v_32);
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("r_0", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("c_2", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_b_33);
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(sym_Defined_1, term_e_33);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_35);
  ATprotect(&(term_e_37));
  term_e_37 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym_Op_2, term_y_39, (ATerm) ATempty);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(sym_ConstType_1, term_z_39);
  ATprotect(&(term_k_56));
  term_k_56 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_l_56));
  term_l_56 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_56);
  ATprotect(&(term_q_56));
  term_q_56 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_s_56));
  term_s_56 = (ATerm) ATmakeAppl(ATmakeSymbol("c_0", 0, ATtrue));
  ATprotect(&(term_v_56));
  term_v_56 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_57));
  term_a_57 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_57));
  term_u_57 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_58));
  term_u_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_v_58));
  term_v_58 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_58));
  term_w_58 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_58);
  ATprotect(&(term_x_58));
  term_x_58 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_58));
  term_y_58 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_58));
  term_z_58 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_a_59));
  term_a_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_59));
  term_f_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_59));
  term_g_59 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_59));
  term_i_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_59));
  term_q_59 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_60));
  term_m_60 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_60));
  term_o_60 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_60));
  term_q_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_60));
  term_r_60 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_a_61));
  term_a_61 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_61));
  term_f_61 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_61));
  term_m_61 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_61));
  term_n_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_61));
  term_o_61 = (ATerm) ATmakeAppl(sym__3, term_m_61, term_n_61, term_o_20);
  ATprotect(&(term_p_61));
  term_p_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_61));
  term_q_61 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_61));
  term_r_61 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_61));
  term_w_61 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_62));
  term_e_62 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_62));
  term_f_62 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_62));
  term_w_62 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_b_63));
  term_b_63 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_63));
  term_c_63 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_63));
  term_t_63 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm k_147 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm);
ATerm Op_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm a_146 (ATerm), ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm j_3 (ATerm);
ATerm o_3 (ATerm);
ATerm d_4 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm t_5 (ATerm);
ATerm f_6 (ATerm);
ATerm g_6 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm);
ATerm Con_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm p_117 (ATerm), ATerm);
ATerm p_6 (ATerm);
ATerm n_6 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm s_6 (ATerm);
ATerm x_6 (ATerm);
ATerm y_6 (ATerm);
ATerm z_6 (ATerm);
ATerm d_7 (ATerm);
ATerm w_6 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm l_27 (ATerm u_26, ATerm v_26, ATerm);
ATerm m_27 (ATerm a_27, ATerm b_27, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm y_129 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm x_129 (ATerm), ATerm);
ATerm scope_2_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm);
ATerm l_7 (ATerm);
ATerm n_7 (ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm o_7 (ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm v_7 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm f_8 (ATerm);
ATerm k_8 (ATerm);
ATerm b_8 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm BottomupOverConstructor_0_0 (ATerm);
ATerm SeqOverLChoiceR_0_0 (ATerm);
ATerm SeqOverChoiceR_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm q_117 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm g_133 (ATerm), ATerm);
ATerm Build_1_0 (ATerm n_107 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm);
ATerm Match_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm y_8 (ATerm);
ATerm a_9 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm b_9 (ATerm);
ATerm c_9 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm d_9 (ATerm);
ATerm e_9 (ATerm);
ATerm f_9 (ATerm);
ATerm g_9 (ATerm);
ATerm h_9 (ATerm);
ATerm k_9 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm h_119 (ATerm), ATerm);
ATerm l_9 (ATerm);
ATerm m_9 (ATerm);
ATerm o_9 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm q_9 (ATerm);
ATerm r_9 (ATerm);
ATerm s_9 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm t_9 (ATerm);
ATerm x_9 (ATerm);
ATerm y_9 (ATerm);
ATerm z_9 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm n_55 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm t_118 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm e_10 (ATerm);
ATerm f_10 (ATerm);
ATerm l_10 (ATerm);
ATerm m_10 (ATerm);
ATerm n_10 (ATerm);
ATerm q_10 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm s_10 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm u_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm r_117 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm);
ATerm u_10 (ATerm);
ATerm v_10 (ATerm);
ATerm w_10 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm);
ATerm a_11 (ATerm);
ATerm b_11 (ATerm);
ATerm c_11 (ATerm);
ATerm d_11 (ATerm);
ATerm g_11 (ATerm);
ATerm h_11 (ATerm);
ATerm k_11 (ATerm);
ATerm l_11 (ATerm);
ATerm o_11 (ATerm);
ATerm p_11 (ATerm);
ATerm r_11 (ATerm);
ATerm s_11 (ATerm);
ATerm u_11 (ATerm);
ATerm v_11 (ATerm);
ATerm w_11 (ATerm);
ATerm x_11 (ATerm);
ATerm spaste_1_0 (ATerm y_146 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm);
ATerm z_11 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm e_107 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm e_12 (ATerm);
ATerm f_12 (ATerm);
ATerm h_12 (ATerm);
ATerm RnBinding_2_0 (ATerm f_144 (ATerm), ATerm g_144 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm q_133 (ATerm), ATerm);
ATerm rename_4_0 (ATerm a_144 (ATerm (ATerm), ATerm), ATerm b_144 (ATerm), ATerm c_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_144 (ATerm (ATerm), ATerm), ATerm);
ATerm y_12 (ATerm);
ATerm a_13 (ATerm);
ATerm b_13 (ATerm);
ATerm c_13 (ATerm);
ATerm f_13 (ATerm);
ATerm j_13 (ATerm);
ATerm k_13 (ATerm);
ATerm l_13 (ATerm);
ATerm tpaste_1_0 (ATerm u_146 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm m_106 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm x_146 (ATerm), ATerm);
ATerm m_13 (ATerm);
ATerm q_13 (ATerm);
ATerm s_13 (ATerm);
ATerm o_13 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm u_13 (ATerm);
ATerm x_13 (ATerm);
ATerm z_13 (ATerm);
ATerm w_13 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm union_1_0 (ATerm d_126 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm);
ATerm diff_1_0 (ATerm z_125 (ATerm), ATerm);
ATerm d_14 (ATerm);
ATerm e_14 (ATerm);
ATerm f_14 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm);
ATerm j_14 (ATerm);
ATerm m_14 (ATerm);
ATerm n_14 (ATerm);
ATerm o_14 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm q_14 (ATerm);
ATerm s_14 (ATerm);
ATerm u_14 (ATerm);
ATerm v_14 (ATerm);
ATerm x_14 (ATerm);
ATerm t_14 (ATerm);
ATerm w_14 (ATerm);
ATerm free_vars_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm Var_1_0 (ATerm v_103 (ATerm), ATerm);
ATerm z_14 (ATerm);
ATerm c_15 (ATerm);
ATerm d_15 (ATerm);
ATerm e_15 (ATerm);
ATerm f_15 (ATerm);
ATerm h_15 (ATerm);
ATerm i_15 (ATerm);
ATerm k_15 (ATerm);
ATerm b_15 (ATerm);
ATerm g_15 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm l_15 (ATerm);
ATerm m_15 (ATerm);
ATerm n_15 (ATerm);
ATerm o_15 (ATerm);
ATerm p_15 (ATerm);
ATerm q_15 (ATerm);
ATerm r_15 (ATerm);
ATerm s_15 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm u_15 (ATerm);
ATerm v_15 (ATerm);
ATerm w_15 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm b_130 (ATerm), ATerm);
ATerm y_15 (ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm map_1_0 (ATerm z_121 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm y_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm _2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm r_137 (ATerm), ATerm);
ATerm f_16 (ATerm);
ATerm g_16 (ATerm);
ATerm i_16 (ATerm);
ATerm c_16 (ATerm);
ATerm e_16 (ATerm);
ATerm h_16 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm d_139 (ATerm), ATerm);
ATerm k_96 (ATerm d_96, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm j_16 (ATerm);
ATerm l_16 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm k_122 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm q_122 (ATerm), ATerm);
ATerm o_16 (ATerm);
ATerm p_16 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm t_16 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm v_16 (ATerm);
ATerm w_16 (ATerm);
ATerm x_16 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm y_16 (ATerm);
ATerm z_16 (ATerm);
ATerm c_17 (ATerm);
ATerm d_17 (ATerm);
ATerm e_17 (ATerm);
ATerm f_17 (ATerm);
ATerm g_17 (ATerm);
ATerm h_17 (ATerm);
ATerm i_17 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm j_17 (ATerm);
ATerm k_17 (ATerm);
ATerm l_17 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm n_17 (ATerm);
ATerm r_17 (ATerm);
ATerm t_17 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_17 (ATerm);
ATerm w_17 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_147 (ATerm), ATerm);
ATerm y_17 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_140 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm s_116 (ATerm), ATerm);
ATerm h_18 (ATerm);
ATerm m_18 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_116 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_18 (ATerm);
ATerm o_18 (ATerm);
ATerm q_18 (ATerm);
ATerm r_18 (ATerm);
ATerm v_18 (ATerm);
ATerm w_18 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm y_18 (ATerm);
ATerm parse_options_p__1_0 (ATerm g_143 (ATerm), ATerm);
ATerm b_19 (ATerm);
ATerm f_19 (ATerm);
ATerm h_19 (ATerm);
ATerm i_19 (ATerm);
ATerm parse_options_1_0 (ATerm f_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm);
ATerm r_19 (ATerm);
ATerm s_19 (ATerm);
ATerm w_19 (ATerm);
ATerm x_19 (ATerm);
ATerm p_19 (ATerm);
ATerm iowrap_3_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm);
ATerm l_20 (ATerm);
ATerm m_20 (ATerm);
ATerm n_20 (ATerm);
ATerm k_20 (ATerm);
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
  t = term_o_20;
  t = whoami_0_0(t);
  x_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), x_0), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = w_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm k_147 (ATerm), ATerm t)
{
  ATerm p_20 = t;
  int q_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_0 = NULL,a_1 = NULL;
      y_0 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_0 = NULL;
            t = eval_config_0_0(t);
            t_0 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), t_0);
            t = t_0;
            ;
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
          }
        a_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_1, term_t_20);
        t = geq_0_0(t);
        t = y_0;
        t = k_147(t);
      }
      ;
      LocalPopChoice(q_20);
    }
  else
    {
      t = p_20;
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
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_1), k_1), j_1), i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, k_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, e_1, (ATerm)ATmakeAppl(sym_Var_1, i_1), (ATerm) ATmakeAppl(sym_Var_1, j_1)), (ATerm) ATmakeAppl(sym_BAM_3, c_1, (ATerm)ATmakeAppl(sym_Var_1, k_1), (ATerm) ATmakeAppl(sym_Var_1, l_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_u_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_1)), (ATerm) ATmakeAppl(sym_Var_1, j_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          e_1 = ATgetArgument(t, 0);
          {
            ATerm n_1 = NULL,o_1 = NULL,p_1 = NULL,r_1 = NULL;
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
                    if(((p_1 != NULL) && (p_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      p_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, n_1);
                return(t);
              }
              t = oncetd_1_0(p_0, t);
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_20, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_1)), not_null(o_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, n_1)), (ATerm) ATmakeAppl(sym_Build_1, r_1))));
            }
          }
        }
      else
        {
          ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,z_1 = NULL;
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
                  if(((w_1 != NULL) && (w_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    w_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, t_1);
              return(t);
            }
            t = oncetd_1_0(q_0, t);
            z_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, t_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_v_20, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_1))))), (ATerm)ATmakeAppl(sym_Var_1, t_1), (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_1)), not_null(v_1)))))));
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
    ATerm y_20 = t;
    int z_20 = stack_ptr;
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
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, k_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_21, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(i_2))))));
        }
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          ATerm b_21 = t;
          int d_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_2 = NULL,n_2 = NULL,o_2 = NULL;
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
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, m_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, m_2)), not_null(n_2))));
              }
              ;
              LocalPopChoice(d_21);
            }
          else
            {
              t = b_21;
              {
                ATerm r_2 = NULL,s_2 = NULL,v_2 = NULL,w_2 = NULL;
                t = b_2;
                t = new_0_0(t);
                r_2 = t;
                t = d_2;
                {
                  ATerm z_0 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((s_2 != NULL) && (s_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          s_2 = ATgetArgument(t, 0);
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
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, w_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(v_2)), not_null(s_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm m_104 (ATerm), ATerm n_104 (ATerm), ATerm t)
{
  ATerm u_3 = NULL,w_3 = NULL,x_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL;
  c_4 = t;
  if(match_cons(t, sym_As_2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_4);
  u_3 = t;
  t = w_3;
  t = m_104(t);
  z_3 = t;
  t = x_3;
  t = n_104(t);
  b_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, z_3, b_4), u_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t)
{
  ATerm k_4 = NULL,q_4 = NULL,r_4 = NULL,w_4 = NULL,a_5 = NULL,d_5 = NULL,e_5 = NULL,g_5 = NULL;
  g_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_4 = ATgetArgument(t, 0);
      r_4 = ATgetArgument(t, 1);
      w_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_5);
  k_4 = t;
  t = q_4;
  t = l_108(t);
  a_5 = t;
  t = r_4;
  t = m_108(t);
  d_5 = t;
  t = w_4;
  t = n_108(t);
  e_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, a_5, d_5, e_5), k_4);
  return(t);
}
ATerm Explode_2_0 (ATerm f_104 (ATerm), ATerm g_104 (ATerm), ATerm t)
{
  ATerm k_5 = NULL,l_5 = NULL,n_5 = NULL,o_5 = NULL,q_5 = NULL,r_5 = NULL;
  r_5 = t;
  if(match_cons(t, sym_Explode_2))
    {
      l_5 = ATgetArgument(t, 0);
      n_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_5);
  k_5 = t;
  t = l_5;
  t = f_104(t);
  o_5 = t;
  t = n_5;
  t = g_104(t);
  q_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, o_5, q_5), k_5);
  return(t);
}
ATerm Op_2_0 (ATerm b_104 (ATerm), ATerm c_104 (ATerm), ATerm t)
{
  ATerm u_5 = NULL,x_5 = NULL,z_5 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
  d_6 = t;
  if(match_cons(t, sym_Op_2))
    {
      x_5 = ATgetArgument(t, 0);
      z_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_6);
  u_5 = t;
  t = x_5;
  t = b_104(t);
  b_6 = t;
  t = z_5;
  t = c_104(t);
  c_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, b_6, c_6), u_5);
  return(t);
}
ATerm pat_td_1_0 (ATerm a_146 (ATerm), ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_146(t);
      ;
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm j_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                t = pat_td_1_0(a_146, t);
                return(t);
              }
              t = fetch_1_0(f_1, t);
              return(t);
            }
            t = Op_2_0(_id, b_1, t);
            ;
            LocalPopChoice(l_21);
          }
        else
          {
            t = j_21;
            {
              ATerm m_21 = t;
              int n_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_1 (ATerm t)
                  {
                    t = pat_td_1_0(a_146, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, g_1, t);
                  ;
                  LocalPopChoice(n_21);
                }
              else
                {
                  t = m_21;
                  {
                    ATerm o_21 = t;
                    int t_21 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = pat_td_1_0(a_146, t);
                          return(t);
                        }
                        t = Explode_2_0(h_1, _id, t);
                        ;
                        LocalPopChoice(t_21);
                      }
                    else
                      {
                        t = o_21;
                        {
                          ATerm v_21 = t;
                          int w_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm q_1 (ATerm t)
                                {
                                  t = pat_td_1_0(a_146, t);
                                  return(t);
                                }
                                t = fetch_1_0(q_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, m_1, t);
                              ;
                              LocalPopChoice(w_21);
                            }
                          else
                            {
                              t = v_21;
                              {
                                ATerm s_1 (ATerm t)
                                {
                                  t = pat_td_1_0(a_146, t);
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
  ATerm b_3 = NULL,c_3 = NULL;
  b_3 = t;
  if(match_cons(t, sym_Build_1))
    {
      c_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_22 = t;
    int b_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL;
        t = b_3;
        t = new_0_0(t);
        f_3 = t;
        t = c_3;
        {
          ATerm x_1 (ATerm t)
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
          t = pat_td_1_0(x_1, t);
          i_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_22, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_3)), not_null(g_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_3)))), (ATerm) ATmakeAppl(sym_Build_1, i_3)));
        }
        ;
        LocalPopChoice(b_22);
      }
    else
      {
        t = a_22;
        {
          ATerm g_22 = t;
          int h_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_3 = NULL,l_3 = NULL,m_3 = NULL;
              t = b_3;
              t = new_0_0(t);
              k_3 = t;
              t = c_3;
              {
                ATerm y_1 (ATerm t)
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
                t = pat_td_1_0(y_1, t);
                m_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(l_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_3)))), (ATerm) ATmakeAppl(sym_Build_1, m_3)));
              }
              ;
              LocalPopChoice(h_22);
            }
          else
            {
              t = g_22;
              {
                ATerm p_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL;
                t = b_3;
                t = new_0_0(t);
                p_3 = t;
                t = c_3;
                {
                  ATerm a_2 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_3 != NULL) && (q_3 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_3 = ATgetArgument(t, 0);
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
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_3), not_null(s_3), (ATerm) ATmakeAppl(sym_Var_1, p_3))), (ATerm) ATmakeAppl(sym_Build_1, t_3)));
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
  ATerm l_6 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      l_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_22 = t;
    int j_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_6 = NULL,r_6 = NULL;
        t = l_6;
        {
          ATerm e_2 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm o_22 = ATgetArgument(t, 0);
                if(match_cons(o_22, sym_Build_1))
                  {
                    if(((o_6 != NULL) && (o_6 != ATgetArgument(o_22, 0))))
                      _fail(ATgetArgument(o_22, 0));
                    else
                      o_6 = ATgetArgument(o_22, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = not_null(o_6);
            return(t);
          }
          t = pat_td_1_0(e_2, t);
          r_6 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, r_6);
        }
        ;
        LocalPopChoice(j_22);
      }
    else
      {
        t = i_22;
        {
          ATerm a_7 = NULL,j_7 = NULL;
          t = l_6;
          {
            ATerm l_2 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm p_22 = ATgetArgument(t, 0);
                  if(match_cons(p_22, sym_Build_1))
                    {
                      if(((a_7 != NULL) && (a_7 != ATgetArgument(p_22, 0))))
                        _fail(ATgetArgument(p_22, 0));
                      else
                        a_7 = ATgetArgument(p_22, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm q_22 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = not_null(a_7);
              return(t);
            }
            t = pat_td_1_0(l_2, t);
            j_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, j_7);
          }
        }
      }
  }
  return(t);
}
ATerm x_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm a_10 = NULL,p_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_10 = ATgetFirst((ATermList) t);
      p_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_10, p_10);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm i_11 = NULL,c_12 = NULL,i_12 = NULL,j_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_22 = ATgetArgument(t, 0);
      if(match_cons(t_22, sym__2))
        {
          i_11 = ATgetArgument(t_22, 0);
          i_12 = ATgetArgument(t_22, 1);
        }
      else
        _fail(t);
      {
        ATerm u_22 = ATgetArgument(t, 1);
        if(match_cons(u_22, sym__2))
          {
            c_12 = ATgetArgument(u_22, 0);
            j_12 = ATgetArgument(u_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_12), i_11), (ATerm) ATinsert(CheckATermList(j_12), i_12));
  return(t);
}
ATerm j_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm k_12 = NULL,o_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_12 = ATgetFirst((ATermList) t);
      o_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, k_12, o_12);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm p_12 = NULL,s_12 = NULL,t_12 = NULL,w_12 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(match_cons(v_22, sym__2))
        {
          p_12 = ATgetArgument(v_22, 0);
          t_12 = ATgetArgument(v_22, 1);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(match_cons(w_22, sym__2))
          {
            s_12 = ATgetArgument(w_22, 0);
            w_12 = ATgetArgument(w_22, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_12), p_12), (ATerm) ATinsert(CheckATermList(w_12), t_12));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm s_7 = NULL,u_7 = NULL,g_8 = NULL,p_8 = NULL,i_9 = NULL,p_9 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      s_7 = ATgetArgument(t, 0);
      u_7 = ATgetArgument(t, 1);
      g_8 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = g_8;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm x_22 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_22;
        }
      return(t);
    }
    t = fetch_1_0(q_2, t);
    t = g_8;
    t = genzip_4_0(x_2, y_2, z_2, LiftPrimArg_0_0, t);
    {
      ATerm e_3 (ATerm t)
      {
        t = genzip_4_0(j_3, o_3, d_4, _id, t);
        return(t);
      }
      t = _2_0(concat_0_0, e_3, t);
      if(match_cons(t, sym__2))
        {
          p_8 = ATgetArgument(t, 0);
          {
            ATerm y_22 = ATgetArgument(t, 1);
            if(match_cons(y_22, sym__2))
              {
                i_9 = ATgetArgument(y_22, 0);
                p_9 = ATgetArgument(y_22, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, p_8, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, i_9), (ATerm) ATmakeAppl(sym_CallT_3, s_7, u_7, p_9)));
    }
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm r_13 (ATerm z_12, ATerm t)
  {
    ATerm d_13 = NULL;
    t = z_12;
    {
      ATerm z_22 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_22;
        }
      t = new_0_0(t);
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, d_13), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, z_12), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_13)))), (ATerm) ATmakeAppl(sym_Var_1, d_13)));
    }
    return(t);
  }
  ATerm g_13 = NULL,h_13 = NULL;
  g_13 = t;
  if(match_cons(t, sym_Var_1))
    {
      h_13 = ATgetArgument(t, 0);
      {
        ATerm a_23 = t;
        int b_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_13(g_13, t);
            ;
            LocalPopChoice(b_23);
          }
        else
          {
            t = a_23;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_c_23, (ATerm) ATmakeAppl(sym_Var_1, h_13)));
          }
      }
    }
  else
    {
      t = r_13(g_13, t);
    }
  return(t);
}
ATerm j_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm u_2 = NULL,a_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_2 = ATgetFirst((ATermList) t);
      a_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_2, a_3);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm d_3 = NULL,n_3 = NULL,r_3 = NULL,v_3 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_23 = ATgetArgument(t, 0);
      if(match_cons(d_23, sym__2))
        {
          d_3 = ATgetArgument(d_23, 0);
          r_3 = ATgetArgument(d_23, 1);
        }
      else
        _fail(t);
      {
        ATerm f_23 = ATgetArgument(t, 1);
        if(match_cons(f_23, sym__2))
          {
            n_3 = ATgetArgument(f_23, 0);
            v_3 = ATgetArgument(f_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_3), d_3), (ATerm) ATinsert(CheckATermList(v_3), r_3));
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm y_3 = NULL,a_4 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_3 = ATgetFirst((ATermList) t);
      a_4 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_3, a_4);
  return(t);
}
ATerm s_4 (ATerm t)
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL,i_4 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_23 = ATgetArgument(t, 0);
      if(match_cons(g_23, sym__2))
        {
          f_4 = ATgetArgument(g_23, 0);
          h_4 = ATgetArgument(g_23, 1);
        }
      else
        _fail(t);
      {
        ATerm h_23 = ATgetArgument(t, 1);
        if(match_cons(h_23, sym__2))
          {
            g_4 = ATgetArgument(h_23, 0);
            i_4 = ATgetArgument(h_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(g_4), f_4), (ATerm) ATinsert(CheckATermList(i_4), h_4));
  return(t);
}
ATerm u_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm z_4 = NULL,b_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_4 = ATgetFirst((ATermList) t);
      b_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_4, b_5);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm c_5 = NULL,f_5 = NULL,j_5 = NULL,m_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_23 = ATgetArgument(t, 0);
      if(match_cons(j_23, sym__2))
        {
          c_5 = ATgetArgument(j_23, 0);
          j_5 = ATgetArgument(j_23, 1);
        }
      else
        _fail(t);
      {
        ATerm k_23 = ATgetArgument(t, 1);
        if(match_cons(k_23, sym__2))
          {
            f_5 = ATgetArgument(k_23, 0);
            m_5 = ATgetArgument(k_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_5), c_5), (ATerm) ATinsert(CheckATermList(m_5), j_5));
  return(t);
}
ATerm t_5 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_s_22;
  return(t);
}
ATerm f_6 (ATerm t)
{
  ATerm p_5 = NULL,v_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_5 = ATgetFirst((ATermList) t);
      v_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_5, v_5);
  return(t);
}
ATerm g_6 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,a_6 = NULL,e_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_23 = ATgetArgument(t, 0);
      if(match_cons(l_23, sym__2))
        {
          w_5 = ATgetArgument(l_23, 0);
          a_6 = ATgetArgument(l_23, 1);
        }
      else
        _fail(t);
      {
        ATerm m_23 = ATgetArgument(t, 1);
        if(match_cons(m_23, sym__2))
          {
            y_5 = ATgetArgument(m_23, 0);
            e_6 = ATgetArgument(m_23, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_5), w_5), (ATerm) ATinsert(CheckATermList(e_6), a_6));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm m_17 = NULL,o_17 = NULL,p_17 = NULL,u_17 = NULL;
  o_17 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      p_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
      m_17 = ATgetArgument(t, 2);
      {
        ATerm g_2 = NULL,p_2 = NULL,t_2 = NULL;
        t = m_17;
        {
          ATerm e_4 (ATerm t)
          {
            ATerm n_23 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = n_23;
              }
            return(t);
          }
          t = fetch_1_0(e_4, t);
          t = m_17;
          t = genzip_4_0(j_4, l_4, m_4, LiftPrimArg_0_0, t);
          {
            ATerm n_4 (ATerm t)
            {
              t = genzip_4_0(o_4, p_4, s_4, _id, t);
              return(t);
            }
            t = _2_0(concat_0_0, n_4, t);
            if(match_cons(t, sym__2))
              {
                g_2 = ATgetArgument(t, 0);
                {
                  ATerm o_23 = ATgetArgument(t, 1);
                  if(match_cons(o_23, sym__2))
                    {
                      p_2 = ATgetArgument(o_23, 0);
                      t_2 = ATgetArgument(o_23, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, g_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_2), (ATerm) ATmakeAppl(sym_PrimT_3, p_17, u_17, t_2)));
          }
        }
      }
    }
  else
    {
      ATerm v_4 = NULL,x_4 = NULL,y_4 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          p_17 = ATgetArgument(t, 0);
          u_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_17;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm p_23 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = p_23;
            }
          return(t);
        }
        t = fetch_1_0(t_4, t);
        t = u_17;
        t = genzip_4_0(u_4, h_5, i_5, LiftPrimArg_0_0, t);
        {
          ATerm s_5 (ATerm t)
          {
            t = genzip_4_0(t_5, f_6, g_6, _id, t);
            return(t);
          }
          t = _2_0(concat_0_0, s_5, t);
          if(match_cons(t, sym__2))
            {
              v_4 = ATgetArgument(t, 0);
              {
                ATerm q_23 = ATgetArgument(t, 1);
                if(match_cons(q_23, sym__2))
                  {
                    x_4 = ATgetArgument(q_23, 0);
                    y_4 = ATgetArgument(q_23, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, v_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_4), (ATerm) ATmakeAppl(sym_PrimT_3, p_17, (ATerm)ATempty, y_4)));
        }
      }
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm r_23 = t;
  if((PushChoice() == 0))
    {
      ATerm h_6 (ATerm t)
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(h_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_23;
    }
  return(t);
}
ATerm App_2_0 (ATerm j_104 (ATerm), ATerm k_104 (ATerm), ATerm t)
{
  ATerm x_17 = NULL,a_18 = NULL,f_18 = NULL,g_18 = NULL,i_18 = NULL,p_18 = NULL;
  p_18 = t;
  if(match_cons(t, sym_App_2))
    {
      a_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_18);
  x_17 = t;
  t = a_18;
  t = j_104(t);
  g_18 = t;
  t = f_18;
  t = k_104(t);
  i_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, g_18, i_18), x_17);
  return(t);
}
ATerm Con_3_0 (ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm x_104 (ATerm), ATerm t)
{
  ATerm s_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  m_19 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
      e_19 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_19);
  s_18 = t;
  t = c_19;
  t = v_104(t);
  g_19 = t;
  t = d_19;
  t = w_104(t);
  k_19 = t;
  t = e_19;
  t = x_104(t);
  l_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, g_19, k_19, l_19), s_18);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm u_23 = t;
  if((PushChoice() == 0))
    {
      ATerm i_6 (ATerm t)
      {
        ATerm v_23 = t;
        int w_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(w_23);
          }
        else
          {
            t = v_23;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(i_6, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_23;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      y_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_19;
  if(match_cons(t, sym_StratRule_3))
    {
      z_19 = ATgetArgument(t, 0);
      a_20 = ATgetArgument(t, 1);
      e_20 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, a_20), (ATerm) ATmakeAppl(sym_Where_1, e_20)), z_19));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          z_19 = ATgetArgument(t, 0);
          a_20 = ATgetArgument(t, 1);
          e_20 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_19;
      t = pureterm_0_0(t);
      t = a_20;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, a_20)), (ATerm) ATmakeAppl(sym_Where_1, e_20)), (ATerm) ATmakeAppl(sym_Match_1, z_19)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm w_20 = NULL,c_21 = NULL,e_21 = NULL,f_21 = NULL,g_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,u_21 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm x_23 = ATgetArgument(t, 0);
      if(match_cons(x_23, sym_Rule_3))
        {
          w_20 = ATgetArgument(x_23, 0);
          c_21 = ATgetArgument(x_23, 1);
          e_21 = ATgetArgument(x_23, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  f_21 = t;
  t = w_20;
  {
    ATerm j_6 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm y_23 = ATgetArgument(t, 0);
          if(match_cons(y_23, sym_Var_1))
            {
              if(((p_21 != NULL) && (p_21 != ATgetArgument(y_23, 0))))
                _fail(ATgetArgument(y_23, 0));
              else
                p_21 = ATgetArgument(y_23, 0);
            }
          else
            _fail(t);
          if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            g_21 = ATgetArgument(t, 1);
          {
            ATerm z_23 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(p_21));
      return(t);
    }
    t = oncetd_1_0(j_6, t);
    q_21 = t;
    t = c_21;
    {
      ATerm k_6 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm a_24 = ATgetArgument(t, 0);
            if(match_cons(a_24, sym_Var_1))
              {
                if(((p_21 != NULL) && (p_21 != ATgetArgument(a_24, 0))))
                  _fail(ATgetArgument(a_24, 0));
                else
                  p_21 = ATgetArgument(a_24, 0);
              }
            else
              _fail(t);
            if(((r_21 != NULL) && (r_21 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              r_21 = ATgetArgument(t, 1);
            {
              ATerm b_24 = ATgetArgument(t, 2);
              if(match_cons(b_24, sym_CallT_3))
                {
                  if(((s_21 != NULL) && (s_21 != ATgetArgument(b_24, 0))))
                    _fail(ATgetArgument(b_24, 0));
                  else
                    s_21 = ATgetArgument(b_24, 0);
                  {
                    ATerm c_24 = ATgetArgument(b_24, 1);
                    if(((ATgetType(c_24) != AT_LIST) || !(ATisEmpty(c_24))))
                      _fail(t);
                  }
                  {
                    ATerm d_24 = ATgetArgument(b_24, 2);
                    if(((ATgetType(d_24) != AT_LIST) || !(ATisEmpty(d_24))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, f_21);
        return(t);
      }
      t = oncetd_1_0(k_6, t);
      u_21 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_21), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, q_21, u_21, (ATerm) ATmakeAppl(sym_Seq_2, e_21, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(s_21), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(g_21), not_null(r_21), term_c_23))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(p_21)), (ATerm) ATmakeAppl(sym_Var_1, f_21))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_24 = t;
      int h_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
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
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(j_24);
              }
            else
              {
                t = i_24;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  t = p_117(t);
  {
    ATerm m_6 (ATerm t)
    {
      t = topdown_1_0(p_117, t);
      return(t);
    }
    t = SRTS_all(m_6, t);
  }
  return(t);
}
ATerm p_6 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
            ;
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
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
                    ATerm q_24 = t;
                    int r_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_24 = t;
                        int t_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Bapp0_0_0(t);
                            ;
                            LocalPopChoice(t_24);
                          }
                        else
                          {
                            t = s_24;
                            {
                              ATerm u_24 = t;
                              int v_24 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      d_22 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = d_22;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      e_22 = ATgetArgument(t, 0);
                                      t = e_22;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          e_22 = ATgetArgument(t, 0);
                                          f_22 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_22), e_22);
                                    }
                                  ;
                                  LocalPopChoice(v_24);
                                }
                              else
                                {
                                  t = u_24;
                                  t = Bapp2_0_0(t);
                                }
                            }
                          }
                        ;
                        LocalPopChoice(r_24);
                      }
                    else
                      {
                        t = q_24;
                        {
                          ATerm w_24 = t;
                          int y_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm z_24 = t;
                              int a_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      t_6 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = t_6;
                                  {
                                    ATerm q_6 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm b_25 = ATgetArgument(t, 0);
                                          if(match_cons(b_25, sym_Match_1))
                                            {
                                              if(((u_6 != NULL) && (u_6 != ATgetArgument(b_25, 0))))
                                                _fail(ATgetArgument(b_25, 0));
                                              else
                                                u_6 = ATgetArgument(b_25, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(u_6);
                                      return(t);
                                    }
                                    t = pat_td_1_0(q_6, t);
                                    v_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, v_6);
                                  }
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
                                        ATerm k_22 = NULL,m_22 = NULL,n_22 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            k_22 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = k_22;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            m_22 = ATgetArgument(t, 0);
                                            t = m_22;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                m_22 = ATgetArgument(t, 0);
                                                n_22 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, m_22, n_22);
                                          }
                                        ;
                                        LocalPopChoice(d_25);
                                      }
                                    else
                                      {
                                        t = c_25;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(y_24);
                            }
                          else
                            {
                              t = w_24;
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
ATerm n_6 (ATerm t)
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
    }
  t = repeat_1_0(p_6, t);
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(n_6, t);
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm z_7 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_7 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_7);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm q_8 = NULL;
  ATerm g_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_8 = ATgetArgument(t, 0);
          {
            ATerm j_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_25);
      t = q_8;
    }
  else
    {
      t = g_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_8;
    }
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm w_8 = NULL;
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          w_8 = ATgetArgument(t, 0);
          {
            ATerm m_25 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_25);
      t = w_8;
    }
  else
    {
      t = k_25;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          w_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = w_8;
    }
  return(t);
}
ATerm z_6 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm d_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm a_8 = NULL,e_8 = NULL,h_8 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_8 = ATgetArgument(t, 0);
      t = e_8;
      if(match_cons(t, sym_Rule_3))
        {
          a_8 = ATgetArgument(t, 0);
          {
            ATerm o_25 = ATgetArgument(t, 1);
          }
          {
            ATerm p_25 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_8;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm s_25 = t;
      int t_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              e_8 = ATgetArgument(t, 0);
              {
                ATerm u_25 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(t_25);
          t = e_8;
        }
      else
        {
          t = s_25;
          if(match_cons(t, sym_DynamicRules_1))
            {
              e_8 = ATgetArgument(t, 0);
              t = e_8;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm h_26 = t;
              int i_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm j_26 = ATgetArgument(t, 0);
                      ATerm k_26 = ATgetArgument(t, 1);
                      h_8 = ATgetArgument(t, 2);
                      {
                        ATerm l_26 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(i_26);
                  t = h_8;
                  t = map_1_0(x_6, t);
                }
              else
                {
                  t = h_26;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm m_26 = ATgetArgument(t, 0);
                      ATerm n_26 = ATgetArgument(t, 1);
                      h_8 = ATgetArgument(t, 2);
                      {
                        ATerm o_26 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = h_8;
                  t = map_1_0(y_6, t);
                }
            }
        }
    }
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,v_25 = NULL,w_25 = NULL,x_25 = NULL,y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  q_25 = t;
  if(match_cons(t, sym_Seq_2))
    {
      r_25 = ATgetArgument(t, 0);
      z_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_25;
  if(match_cons(t, sym_CallT_3))
    {
      v_25 = ATgetArgument(t, 0);
      x_25 = ATgetArgument(t, 1);
      y_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = v_25;
  if(match_cons(t, sym_SVar_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = x_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = y_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_25;
  if(match_cons(t, sym_Seq_2))
    {
      a_26 = ATgetArgument(t, 0);
      c_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_26;
  if(match_cons(t, sym_Match_1))
    {
      b_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_26;
  if(match_cons(t, sym_Seq_2))
    {
      d_26 = ATgetArgument(t, 0);
      f_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_26;
  if(match_cons(t, sym_Where_1))
    {
      e_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_26;
  if(match_cons(t, sym_Build_1))
    {
      g_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm p_26 = t;
    int q_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty)))));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_7 = ATgetFirst((ATermList) t);
            {
              ATerm r_26 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = f_7;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm s_26 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) s_26) != ATmakeSymbol("r_0", 0, ATtrue)))
              _fail(t);
            e_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, e_7, b_26, (ATerm) ATmakeAppl(sym__2, e_26, g_26));
        t = replace_application_0_0(t);
        if(match_cons(t, sym__2))
          {
            g_7 = ATgetArgument(t, 0);
            h_7 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, g_7), (ATerm) ATmakeAppl(sym_Build_1, h_7)));
        ;
        LocalPopChoice(q_26);
      }
    else
      {
        t = p_26;
        {
          ATerm w_7 = NULL,x_7 = NULL,y_7 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty)))));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_7 = ATgetFirst((ATermList) t);
              {
                ATerm t_26 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = x_7;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm x_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) x_26) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              w_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_26;
          t = free_vars_3_0(s_6, w_6, tboundin_3_0, t);
          {
            ATerm b_7 (ATerm t)
            {
              ATerm c_7 (ATerm t)
              {
                ATerm z_8 = NULL;
                z_8 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, w_7, (ATerm) ATmakeAppl(sym_Var_1, z_8)), term_c_27);
                t = assert_1_0(d_7, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
                return(t);
              }
              t = map_1_0(c_7, t);
              t = (ATerm) ATmakeAppl(sym__2, e_26, g_26);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((y_7 != NULL) && (y_7 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_7 = ATgetArgument(t, 0);
                  {
                    ATerm d_27 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(z_6, b_7, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_26), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(y_7)), (ATerm) ATmakeAppl(sym_Build_1, g_26)));
          }
        }
      }
  }
  return(t);
}
ATerm l_27 (ATerm u_26, ATerm v_26, ATerm t)
{
  ATerm z_26 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), v_26);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_26 = ATgetFirst((ATermList) t);
      {
        ATerm h_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_26;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm j_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_27) != ATmakeSymbol("l_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = u_26;
  return(t);
}
ATerm m_27 (ATerm a_27, ATerm b_27, ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), b_27);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_27 = ATgetFirst((ATermList) t);
      {
        ATerm k_27 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = e_27;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm n_27 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_27) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = a_27;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,i_27 = NULL;
  g_27 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm o_27 = ATgetArgument(t, 0);
      i_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_27;
  if(match_cons(t, sym_Var_1))
    {
      f_27 = ATgetArgument(t, 0);
      {
        ATerm s_27 = t;
        int t_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL;
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue)), g_27);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_9 = ATgetFirst((ATermList) t);
                {
                  ATerm u_27 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = j_9;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm v_27 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) v_27) != ATmakeSymbol("u_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, f_27);
            ;
            LocalPopChoice(t_27);
          }
        else
          {
            t = s_27;
            {
              ATerm w_27 = t;
              int y_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_27(i_27, g_27, t);
                  ;
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = w_27;
                  t = m_27(i_27, g_27, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm d_28 = t;
      int e_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_27(i_27, g_27, t);
          ;
          LocalPopChoice(e_28);
        }
      else
        {
          t = d_28;
          t = m_27(i_27, g_27, t);
        }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      p_27 = ATgetArgument(t, 0);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_28 = t;
    int j_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_28 = ATgetArgument(t, 0);
            ATerm l_28 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_27, q_27);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_28 = ATgetFirst((ATermList) t);
            n_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_9;
        ;
        LocalPopChoice(j_28);
      }
    else
      {
        t = i_28;
        t = (ATerm) ATempty;
      }
    r_27 = t;
    t = SSL_table_put(p_27, q_27, r_27);
    t = (ATerm) ATmakeAppl(sym__2, p_27, q_27);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm y_129 (ATerm), ATerm t)
{
  ATerm x_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  x_27 = t;
  t = y_129(t);
  z_27 = t;
  {
    ATerm o_28 = t;
    int p_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_28);
      }
    else
      {
        t = o_28;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_28 = ATgetFirst((ATermList) t);
        a_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_27, (ATerm)ATmakeAppl(sym_Scopes_0), a_28);
    t = b_28;
    {
      ATerm i_7 (ATerm t)
      {
        ATerm c_28 = NULL;
        c_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_27, c_28);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(i_7, t);
      t = x_27;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm t)
{
  ATerm x_28 = t;
  int y_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_120(t);
      t = x_120(t);
      ;
      LocalPopChoice(y_28);
    }
  else
    {
      t = x_28;
      t = x_120(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL,h_28 = NULL;
  f_28 = t;
  t = x_129(t);
  g_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_28, term_z_28);
  {
    ATerm b_29 = t;
    int d_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_29 = ATgetArgument(t, 0);
            ATerm f_29 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_28, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(d_29);
      }
    else
      {
        t = b_29;
        t = (ATerm) ATempty;
      }
    h_28 = t;
    t = SSL_table_put(g_28, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_28), (ATerm) ATempty));
    t = f_28;
  }
  return(t);
}
ATerm scope_2_0 (ATerm z_129 (ATerm), ATerm a_130 (ATerm), ATerm t)
{
  t = begin_scope_1_0(z_129, t);
  {
    ATerm k_7 (ATerm t)
    {
      t = end_scope_1_0(z_129, t);
      return(t);
    }
    t = restore_always_2_0(a_130, k_7, t);
  }
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm n_7 (ATerm t)
{
  ATerm v_28 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      v_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, v_28);
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm t_29 = NULL;
  ATerm g_29 = t;
  int h_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_29 = ATgetArgument(t, 0);
          {
            ATerm i_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_29);
      t = t_29;
    }
  else
    {
      t = g_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_29;
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm z_29 = NULL;
  ATerm k_29 = t;
  int l_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_29 = ATgetArgument(t, 0);
          {
            ATerm m_29 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_29);
      t = z_29;
    }
  else
    {
      t = k_29;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_29 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_29;
    }
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm w_28 = NULL,a_29 = NULL,c_29 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_29 = ATgetArgument(t, 0);
      t = a_29;
      if(match_cons(t, sym_Rule_3))
        {
          w_28 = ATgetArgument(t, 0);
          {
            ATerm n_29 = ATgetArgument(t, 1);
          }
          {
            ATerm o_29 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_28;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm p_29 = t;
      int q_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              a_29 = ATgetArgument(t, 0);
              {
                ATerm r_29 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_29);
          t = a_29;
        }
      else
        {
          t = p_29;
          if(match_cons(t, sym_DynamicRules_1))
            {
              a_29 = ATgetArgument(t, 0);
              t = a_29;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm s_29 = t;
              int u_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm v_29 = ATgetArgument(t, 0);
                      ATerm w_29 = ATgetArgument(t, 1);
                      c_29 = ATgetArgument(t, 2);
                      {
                        ATerm x_29 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_29);
                  t = c_29;
                  t = map_1_0(p_7, t);
                }
              else
                {
                  t = s_29;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm y_29 = ATgetArgument(t, 0);
                      ATerm a_30 = ATgetArgument(t, 1);
                      c_29 = ATgetArgument(t, 2);
                      {
                        ATerm b_30 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = c_29;
                  t = map_1_0(q_7, t);
                }
            }
        }
    }
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  if(match_cons(t, sym__3))
    {
      r_28 = ATgetArgument(t, 0);
      s_28 = ATgetArgument(t, 1);
      t_28 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm m_7 (ATerm t)
    {
      t = s_28;
      t = free_vars_3_0(n_7, o_7, tboundin_3_0, t);
      {
        ATerm r_7 (ATerm t)
        {
          ATerm c_30 = NULL;
          c_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, r_28, (ATerm) ATmakeAppl(sym_Var_1, c_30)), term_e_30);
          t = assert_1_0(t_7, t);
          t = c_30;
          return(t);
        }
        t = map_1_0(r_7, t);
        t = t_28;
        t = alltd_1_0(Replace_0_0, t);
        if(((u_28 != NULL) && (u_28 != t)))
          _fail(t);
        else
          u_28 = t;
      }
      return(t);
    }
    t = scope_2_0(l_7, m_7, t);
    t = not_null(u_28);
  }
  return(t);
}
ATerm v_7 (ATerm t)
{
  ATerm j_10 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      j_10 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, j_10);
  return(t);
}
ATerm c_8 (ATerm t)
{
  ATerm z_10 = NULL;
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_10 = ATgetArgument(t, 0);
          {
            ATerm h_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_30);
      t = z_10;
    }
  else
    {
      t = f_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_10;
    }
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm f_11 = NULL;
  ATerm i_30 = t;
  int j_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          f_11 = ATgetArgument(t, 0);
          {
            ATerm k_30 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_30);
      t = f_11;
    }
  else
    {
      t = i_30;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_11 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = f_11;
    }
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm k_8 (ATerm t)
{
  t = term_n_25;
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm k_10 = NULL,o_10 = NULL,r_10 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      o_10 = ATgetArgument(t, 0);
      t = o_10;
      if(match_cons(t, sym_Rule_3))
        {
          k_10 = ATgetArgument(t, 0);
          {
            ATerm l_30 = ATgetArgument(t, 1);
          }
          {
            ATerm m_30 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = k_10;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm n_30 = t;
      int o_30 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              o_10 = ATgetArgument(t, 0);
              {
                ATerm p_30 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(o_30);
          t = o_10;
        }
      else
        {
          t = n_30;
          if(match_cons(t, sym_DynamicRules_1))
            {
              o_10 = ATgetArgument(t, 0);
              t = o_10;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm q_30 = t;
              int r_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm s_30 = ATgetArgument(t, 0);
                      ATerm t_30 = ATgetArgument(t, 1);
                      r_10 = ATgetArgument(t, 2);
                      {
                        ATerm u_30 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(r_30);
                  t = r_10;
                  t = map_1_0(c_8, t);
                }
              else
                {
                  t = q_30;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm v_30 = ATgetArgument(t, 0);
                      ATerm w_30 = ATgetArgument(t, 1);
                      r_10 = ATgetArgument(t, 2);
                      {
                        ATerm x_30 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = r_10;
                  t = map_1_0(d_8, t);
                }
            }
        }
    }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL,r_33 = NULL;
  h_33 = t;
  if(match_cons(t, sym_Seq_2))
    {
      i_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_33;
  if(match_cons(t, sym_CallT_3))
    {
      j_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
      m_33 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = j_33;
  if(match_cons(t, sym_SVar_1))
    {
      k_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_33;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = l_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_33;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = n_33;
  if(match_cons(t, sym_Seq_2))
    {
      o_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_33;
  if(match_cons(t, sym_Match_1))
    {
      p_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_33;
  if(match_cons(t, sym_Build_1))
    {
      r_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm y_30 = t;
    int z_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_9 = NULL,v_9 = NULL,w_9 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty))));
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_9 = ATgetFirst((ATermList) t);
            {
              ATerm a_31 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = v_9;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm b_31 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) b_31) != ATmakeSymbol("o_0", 0, ATtrue)))
              _fail(t);
            u_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, u_9, p_33, r_33);
        t = replace_application_0_0(t);
        w_9 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_33), (ATerm) ATmakeAppl(sym_Build_1, w_9));
        ;
        LocalPopChoice(z_30);
      }
    else
      {
        t = y_30;
        {
          ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
          t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue))), (ATerm)ATempty, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATempty), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty))));
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_10 = ATgetFirst((ATermList) t);
              {
                ATerm c_31 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = h_10;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm d_31 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_31) != ATmakeSymbol("e_0", 0, ATtrue)))
                _fail(t);
              g_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_33;
          t = free_vars_3_0(v_7, b_8, tboundin_3_0, t);
          {
            ATerm i_8 (ATerm t)
            {
              ATerm j_8 (ATerm t)
              {
                ATerm j_11 = NULL;
                j_11 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, g_10, (ATerm) ATmakeAppl(sym_Var_1, j_11)), term_f_31);
                t = assert_1_0(k_8, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_11);
                return(t);
              }
              t = map_1_0(j_8, t);
              t = r_33;
              t = alltd_1_0(Replace_0_0, t);
              if(((i_10 != NULL) && (i_10 != t)))
                _fail(t);
              else
                i_10 = t;
              return(t);
            }
            t = scope_2_0(f_8, i_8, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_33), (ATerm) ATmakeAppl(sym_Build_1, not_null(i_10)));
          }
        }
      }
  }
  return(t);
}
ATerm BottomupOverConstructor_0_0 (ATerm t)
{
  ATerm u_33 = NULL,z_33 = NULL,a_34 = NULL,d_34 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm g_31 = ATgetArgument(t, 0);
      if(match_cons(g_31, sym_CallT_3))
        {
          ATerm i_31 = ATgetArgument(g_31, 0);
          if(match_cons(i_31, sym_SVar_1))
            {
              ATerm l_31 = ATgetArgument(i_31, 0);
              if((ATgetSymbol((ATermAppl) l_31) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm j_31 = ATgetArgument(g_31, 1);
            if(((ATgetType(j_31) == AT_LIST) && !(ATisEmpty(j_31))))
              {
                u_33 = ATgetFirst((ATermList) j_31);
                {
                  ATerm m_31 = (ATerm) ATgetNext((ATermList) j_31);
                  if(((ATgetType(m_31) != AT_LIST) || !(ATisEmpty(m_31))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          {
            ATerm k_31 = ATgetArgument(g_31, 2);
            if(((ATgetType(k_31) != AT_LIST) || !(ATisEmpty(k_31))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm h_31 = ATgetArgument(t, 1);
        if(match_cons(h_31, sym_Op_2))
          {
            z_33 = ATgetArgument(h_31, 0);
            a_34 = ATgetArgument(h_31, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_34;
  {
    ATerm l_8 (ATerm t)
    {
      ATerm e_34 = NULL;
      e_34 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, u_33), (ATerm) ATempty), e_34);
      return(t);
    }
    t = map_1_0(l_8, t);
    d_34 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, u_33, (ATerm) ATmakeAppl(sym_Op_2, z_33, d_34));
  }
  return(t);
}
ATerm SeqOverLChoiceR_0_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm p_31 = ATgetArgument(t, 0);
      if(match_cons(p_31, sym_LChoice_2))
        {
          f_34 = ATgetArgument(p_31, 0);
          g_34 = ATgetArgument(p_31, 1);
        }
      else
        _fail(t);
      h_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty), h_34));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_34 = ATgetFirst((ATermList) t);
      {
        ATerm q_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_34;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm r_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_31) != ATmakeSymbol("f_2", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, f_34, h_34), (ATerm) ATmakeAppl(sym_Seq_2, g_34, h_34));
  return(t);
}
ATerm SeqOverChoiceR_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm s_31 = ATgetArgument(t, 0);
      if(match_cons(s_31, sym_Choice_2))
        {
          q_34 = ATgetArgument(s_31, 0);
          r_34 = ATgetArgument(s_31, 1);
        }
      else
        _fail(t);
      s_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty), s_34));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_34 = ATgetFirst((ATermList) t);
      {
        ATerm t_31 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = t_34;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm u_31 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_31) != ATmakeSymbol("c_2", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, q_34, s_34), (ATerm) ATmakeAppl(sym_Seq_2, r_34, s_34));
  return(t);
}
ATerm bottomup_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  ATerm m_8 (ATerm t)
  {
    t = bottomup_1_0(q_117, t);
    return(t);
  }
  t = SRTS_all(m_8, t);
  t = q_117(t);
  return(t);
}
ATerm innermost_1_0 (ATerm g_133 (ATerm), ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm v_31 = t;
    int w_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_133(t);
        t = innermost_1_0(g_133, t);
        ;
        LocalPopChoice(w_31);
      }
    else
      {
        t = v_31;
      }
    return(t);
  }
  t = bottomup_1_0(n_8, t);
  return(t);
}
ATerm Build_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,c_35 = NULL,d_35 = NULL;
  d_35 = t;
  if(match_cons(t, sym_Build_1))
    {
      z_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_35);
  y_34 = t;
  t = z_34;
  t = n_107(t);
  c_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, c_35), y_34);
  return(t);
}
ATerm Seq_2_0 (ATerm t_107 (ATerm), ATerm u_107 (ATerm), ATerm t)
{
  ATerm g_35 = NULL,l_35 = NULL,m_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
  r_35 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_35 = ATgetArgument(t, 0);
      m_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_35);
  g_35 = t;
  t = l_35;
  t = t_107(t);
  p_35 = t;
  t = m_35;
  t = u_107(t);
  q_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, p_35, q_35), g_35);
  return(t);
}
ATerm Match_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm u_35 = NULL,w_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  u_35 = t;
  t = w_35;
  t = m_107(t);
  z_35 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, z_35), u_35);
  return(t);
}
ATerm LChoice_2_0 (ATerm v_107 (ATerm), ATerm w_107 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,i_36 = NULL,j_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  o_36 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      i_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_36);
  d_36 = t;
  t = i_36;
  t = v_107(t);
  m_36 = t;
  t = j_36;
  t = w_107(t);
  n_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, m_36, n_36), d_36);
  return(t);
}
ATerm Choice_2_0 (ATerm t_106 (ATerm), ATerm u_106 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,t_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  z_36 = t;
  if(match_cons(t, sym_Choice_2))
    {
      t_36 = ATgetArgument(t, 0);
      w_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_36);
  r_36 = t;
  t = t_36;
  t = t_106(t);
  x_36 = t;
  t = w_36;
  t = u_106(t);
  y_36 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, x_36, y_36), r_36);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm x_31 = t;
  int y_31 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_31 = t;
      int a_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(a_32);
        }
      else
        {
          t = z_31;
          {
            ATerm b_32 = t;
            int c_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                ;
                LocalPopChoice(c_32);
              }
            else
              {
                t = b_32;
                {
                  ATerm d_32 = t;
                  int e_32 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                      ;
                      LocalPopChoice(e_32);
                    }
                  else
                    {
                      t = d_32;
                      {
                        ATerm f_32 = t;
                        int g_32 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm o_8 (ATerm t)
                            {
                              ATerm r_8 (ATerm t)
                              {
                                t = Match_1_0(_id, t);
                                return(t);
                              }
                              ATerm s_8 (ATerm t)
                              {
                                t = Build_1_0(_id, t);
                                return(t);
                              }
                              t = Seq_2_0(r_8, s_8, t);
                              return(t);
                            }
                            t = Scope_2_0(_id, o_8, t);
                            ;
                            LocalPopChoice(g_32);
                          }
                        else
                          {
                            t = f_32;
                            {
                              ATerm h_32 = t;
                              int i_32 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm t_8 (ATerm t)
                                  {
                                    ATerm u_8 (ATerm t)
                                    {
                                      t = Match_1_0(_id, t);
                                      return(t);
                                    }
                                    ATerm v_8 (ATerm t)
                                    {
                                      ATerm x_8 (ATerm t)
                                      {
                                        t = Build_1_0(_id, t);
                                        return(t);
                                      }
                                      t = Seq_2_0(_id, x_8, t);
                                      return(t);
                                    }
                                    t = Seq_2_0(u_8, v_8, t);
                                    return(t);
                                  }
                                  t = Scope_2_0(_id, t_8, t);
                                  ;
                                  LocalPopChoice(i_32);
                                }
                              else
                                {
                                  t = h_32;
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
      LocalPopChoice(y_31);
    }
  else
    {
      t = x_31;
    }
  return(t);
}
ATerm y_8 (ATerm t)
{
  t = term_j_32;
  return(t);
}
ATerm a_9 (ATerm t)
{
  t = term_k_32;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm j_37 = NULL;
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_32, (ATerm) ATmakeAppl(sym_Defined_2, term_s_32, j_37));
  t = assert_1_0(y_8, t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_32, (ATerm) ATmakeAppl(sym_Defined_2, term_x_32, j_37));
  t = assert_1_0(a_9, t);
  t = j_37;
  return(t);
}
ATerm b_9 (ATerm t)
{
  t = term_y_32;
  return(t);
}
ATerm c_9 (ATerm t)
{
  t = term_z_32;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_a_33, k_37), term_c_33);
  t = assert_1_0(b_9, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_d_33, k_37), term_f_33);
  t = assert_1_0(c_9, t);
  t = k_37;
  return(t);
}
ATerm d_9 (ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue))));
  t = e_38;
  return(t);
}
ATerm e_9 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL,j_38 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      g_38 = ATgetArgument(t, 0);
      h_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_38;
  if(match_cons(t, sym_Choice_2))
    {
      i_38 = ATgetArgument(t, 0);
      j_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, g_38, i_38), (ATerm) ATmakeAppl(sym_Seq_2, g_38, j_38));
    }
  else
    {
      if(match_cons(t, sym_LChoice_2))
        {
          i_38 = ATgetArgument(t, 0);
          j_38 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, g_38, i_38), (ATerm) ATmakeAppl(sym_Seq_2, g_38, j_38));
        }
      else
        {
          if(match_cons(t, sym_Scope_2))
            {
              i_38 = ATgetArgument(t, 0);
              j_38 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, i_38, (ATerm) ATmakeAppl(sym_Seq_2, g_38, j_38));
        }
    }
  return(t);
}
ATerm f_9 (ATerm t)
{
  ATerm g_33 = t;
  int s_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SeqOverChoiceR_0_0(t);
      ;
      LocalPopChoice(s_33);
    }
  else
    {
      t = g_33;
      {
        ATerm t_33 = t;
        int v_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SeqOverLChoiceR_0_0(t);
            ;
            LocalPopChoice(v_33);
          }
        else
          {
            t = t_33;
            {
              ATerm w_33 = t;
              int x_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL;
                  if(match_cons(t, sym_Seq_2))
                    {
                      u_38 = ATgetArgument(t, 0);
                      x_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_38;
                  if(match_cons(t, sym_Scope_2))
                    {
                      v_38 = ATgetArgument(t, 0);
                      w_38 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Scope_2, v_38, (ATerm) ATmakeAppl(sym_Seq_2, w_38, x_38));
                  ;
                  LocalPopChoice(x_33);
                }
              else
                {
                  t = w_33;
                  {
                    ATerm y_33 = t;
                    int b_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_34);
                      }
                    else
                      {
                        t = y_33;
                        {
                          ATerm c_34 = t;
                          int j_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_39 = NULL,d_39 = NULL,e_39 = NULL;
                              if(match_cons(t, sym_Seq_2))
                                {
                                  c_39 = ATgetArgument(t, 0);
                                  e_39 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = c_39;
                              if(match_cons(t, sym_Build_1))
                                {
                                  d_39 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, e_39, d_39));
                              ;
                              LocalPopChoice(j_34);
                            }
                          else
                            {
                              t = c_34;
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
ATerm g_9 (ATerm t)
{
  ATerm k_34 = t;
  int l_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(l_34);
    }
  else
    {
      t = k_34;
      {
        ATerm m_34 = t;
        int n_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(n_34);
          }
        else
          {
            t = m_34;
            {
              ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  i_39 = ATgetArgument(t, 0);
                  k_39 = ATgetArgument(t, 1);
                  l_39 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_39;
              if(match_cons(t, sym_SVar_1))
                {
                  j_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = j_39;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = k_39;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_39;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_c_23;
            }
          }
      }
    }
  return(t);
}
ATerm h_9 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm o_34 = ATgetArgument(t, 0);
      if(match_cons(o_34, sym_SVar_1))
        {
          ATerm v_34 = ATgetArgument(o_34, 0);
          if((ATgetSymbol((ATermAppl) v_34) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm p_34 = ATgetArgument(t, 1);
        if(((ATgetType(p_34) != AT_LIST) || !(ATisEmpty(p_34))))
          _fail(t);
      }
      {
        ATerm u_34 = ATgetArgument(t, 2);
        if(((ATgetType(u_34) != AT_LIST) || !(ATisEmpty(u_34))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_9 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue))));
  t = n_39;
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm a_38 = NULL,c_38 = NULL,d_38 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm w_34 = ATgetArgument(t, 0);
      if(match_cons(w_34, sym_SVar_1))
        {
          ATerm b_35 = ATgetArgument(w_34, 0);
          if((ATgetSymbol((ATermAppl) b_35) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm x_34 = ATgetArgument(t, 1);
        if(((ATgetType(x_34) == AT_LIST) && !(ATisEmpty(x_34))))
          {
            a_38 = ATgetFirst((ATermList) x_34);
            {
              ATerm e_35 = (ATerm) ATgetNext((ATermList) x_34);
              if(((ATgetType(e_35) != AT_LIST) || !(ATisEmpty(e_35))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm a_35 = ATgetArgument(t, 2);
        if(((ATgetType(a_35) != AT_LIST) || !(ATisEmpty(a_35))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = if_verbose2_1_0(d_9, t);
  t = new_0_0(t);
  c_38 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_38), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_38), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = a_38;
  t = inline_rules_0_0(t);
  d_38 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, c_38, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_n_32, d_38), (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_38), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_c_23))), (ATerm) ATempty);
  t = innermost_1_0(e_9, t);
  t = innermost_1_0(f_9, t);
  t = alltd_1_0(g_9, t);
  {
    ATerm f_35 = t;
    if((PushChoice() == 0))
      {
        ATerm m_39 = NULL;
        t = oncetd_1_0(h_9, t);
        m_39 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue))));
        t = m_39;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_35;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(k_9, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm h_119 (ATerm), ATerm t)
{
  ATerm o_39 (ATerm t)
  {
    ATerm h_35 = t;
    int i_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_119(t);
        ;
        LocalPopChoice(i_35);
      }
    else
      {
        t = h_35;
        t = SRTS_all(o_39, t);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm l_9 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue))));
  t = q_40;
  return(t);
}
ATerm m_9 (ATerm t)
{
  ATerm n_11 = NULL;
  n_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, n_11), (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue))));
  t = n_11;
  return(t);
}
ATerm o_9 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue))));
  t = t_42;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm l_40 = NULL,n_40 = NULL;
  l_40 = t;
  t = new_0_0(t);
  n_40 = t;
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_o_31, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_40), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(k_35);
      }
    else
      {
        t = j_35;
        t = if_verbose2_1_0(l_9, t);
        _fail(t);
      }
    {
      ATerm n_35 = t;
      int o_35 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,z_40 = NULL,a_41 = NULL,h_41 = NULL,l_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,e_42 = NULL,f_42 = NULL,i_42 = NULL,j_42 = NULL,m_42 = NULL,n_42 = NULL,q_42 = NULL;
          r_40 = t;
          if(match_cons(t, sym_Seq_2))
            {
              s_40 = ATgetArgument(t, 0);
              i_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_40;
          if(match_cons(t, sym_All_1))
            {
              t_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_40;
          if(match_cons(t, sym_CallT_3))
            {
              u_40 = ATgetArgument(t, 0);
              a_41 = ATgetArgument(t, 1);
              f_42 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_40;
          if(match_cons(t, sym_SVar_1))
            {
              z_40 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_40;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = a_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_41 = ATgetFirst((ATermList) t);
              e_42 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_41;
          if(match_cons(t, sym_CallT_3))
            {
              l_41 = ATgetArgument(t, 0);
              u_41 = ATgetArgument(t, 1);
              v_41 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = l_41;
          if(match_cons(t, sym_SVar_1))
            {
              t_41 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = u_41;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = v_41;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_42;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_42;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_42;
          if(match_cons(t, sym_CallT_3))
            {
              j_42 = ATgetArgument(t, 0);
              n_42 = ATgetArgument(t, 1);
              q_42 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = j_42;
          if(match_cons(t, sym_SVar_1))
            {
              m_42 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_42;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_42;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_41;
          if((n_40 != t))
            {
              _fail(t);
            }
          t = m_42;
          if((t_41 != t))
            {
              _fail(t);
            }
          t = r_40;
          ;
          LocalPopChoice(o_35);
        }
      else
        {
          t = n_35;
          t = if_verbose1_1_0(m_9, t);
          _fail(t);
        }
      t = if_verbose2_1_0(o_9, t);
      t = l_40;
    }
  }
  return(t);
}
ATerm q_9 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue))));
  t = j_47;
  return(t);
}
ATerm r_9 (ATerm t)
{
  ATerm q_11 = NULL;
  q_11 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_11), (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue))));
  t = q_11;
  return(t);
}
ATerm s_9 (ATerm t)
{
  ATerm d_50 = NULL;
  d_50 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue))));
  t = d_50;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL;
  h_47 = t;
  t = new_0_0(t);
  i_47 = t;
  {
    ATerm s_35 = t;
    int t_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_35, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, i_47), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(t_35);
      }
    else
      {
        t = s_35;
        t = if_verbose2_1_0(q_9, t);
        _fail(t);
      }
    {
      ATerm y_35 = t;
      int b_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_47 = NULL,p_47 = NULL,q_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL,y_47 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,h_48 = NULL,j_48 = NULL,l_48 = NULL,n_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL,t_48 = NULL,u_48 = NULL,v_48 = NULL,x_48 = NULL,z_48 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL,g_49 = NULL,h_49 = NULL,i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL,s_49 = NULL,t_49 = NULL,v_49 = NULL,w_49 = NULL,z_49 = NULL,a_50 = NULL;
          u_48 = t;
          if(match_cons(t, sym_CallT_3))
            {
              v_48 = ATgetArgument(t, 0);
              z_48 = ATgetArgument(t, 1);
              a_50 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = v_48;
          if(match_cons(t, sym_SVar_1))
            {
              x_48 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_48;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = z_48;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_49 = ATgetFirst((ATermList) t);
              z_49 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_49;
          if(match_cons(t, sym_CallT_3))
            {
              c_49 = ATgetArgument(t, 0);
              d_49 = ATgetArgument(t, 1);
              p_47 = ATgetArgument(t, 2);
              t = c_49;
              if(match_cons(t, sym_SVar_1))
                {
                  k_47 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = k_47;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = d_49;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_49 = ATgetFirst((ATermList) t);
                  w_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_49;
              if(match_cons(t, sym_Seq_2))
                {
                  f_49 = ATgetArgument(t, 0);
                  k_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_49;
              if(match_cons(t, sym_CallT_3))
                {
                  g_49 = ATgetArgument(t, 0);
                  i_49 = ATgetArgument(t, 1);
                  j_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_49;
              if(match_cons(t, sym_SVar_1))
                {
                  h_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_49;
              if(match_cons(t, sym_CallT_3))
                {
                  l_49 = ATgetArgument(t, 0);
                  n_49 = ATgetArgument(t, 1);
                  v_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_49;
              if(match_cons(t, sym_SVar_1))
                {
                  m_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_49;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = n_49;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_49 = ATgetFirst((ATermList) t);
                  t_49 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_49;
              if(match_cons(t, sym_CallT_3))
                {
                  p_49 = ATgetArgument(t, 0);
                  r_49 = ATgetArgument(t, 1);
                  s_49 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_49;
              if(match_cons(t, sym_SVar_1))
                {
                  q_49 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_47;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_49;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_50;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_49;
              if((i_47 != t))
                {
                  _fail(t);
                }
              t = q_49;
              if((h_49 != t))
                {
                  _fail(t);
                }
              t = u_48;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  c_49 = ATgetArgument(t, 0);
                  d_49 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_49;
              if(match_cons(t, sym_CallT_3))
                {
                  e_49 = ATgetArgument(t, 0);
                  w_49 = ATgetArgument(t, 1);
                  t_48 = ATgetArgument(t, 2);
                  t = e_49;
                  if(match_cons(t, sym_SVar_1))
                    {
                      f_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_49;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = w_49;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_47 = ATgetFirst((ATermList) t);
                      s_48 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_47;
                  if(match_cons(t, sym_Seq_2))
                    {
                      t_47 = ATgetArgument(t, 0);
                      y_47 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_47;
                  if(match_cons(t, sym_CallT_3))
                    {
                      u_47 = ATgetArgument(t, 0);
                      w_47 = ATgetArgument(t, 1);
                      x_47 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = u_47;
                  if(match_cons(t, sym_SVar_1))
                    {
                      v_47 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = w_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_47;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_47;
                  if(match_cons(t, sym_CallT_3))
                    {
                      b_48 = ATgetArgument(t, 0);
                      d_48 = ATgetArgument(t, 1);
                      r_48 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = b_48;
                  if(match_cons(t, sym_SVar_1))
                    {
                      c_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_48;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = d_48;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_48 = ATgetFirst((ATermList) t);
                      q_48 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = h_48;
                  if(match_cons(t, sym_CallT_3))
                    {
                      j_48 = ATgetArgument(t, 0);
                      n_48 = ATgetArgument(t, 1);
                      p_48 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = j_48;
                  if(match_cons(t, sym_SVar_1))
                    {
                      l_48 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_48;
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
                  t = z_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_47;
                  if((i_47 != t))
                    {
                      _fail(t);
                    }
                  t = l_48;
                  if((c_49 != t))
                    {
                      _fail(t);
                    }
                  t = u_48;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_49 = ATgetArgument(t, 0);
                      w_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_49;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_49 = ATgetArgument(t, 0);
                      k_49 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_49;
                  if(match_cons(t, sym_CallT_3))
                    {
                      g_49 = ATgetArgument(t, 0);
                      i_49 = ATgetArgument(t, 1);
                      j_49 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = g_49;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_49;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_49 = ATgetArgument(t, 0);
                      n_49 = ATgetArgument(t, 1);
                      v_49 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_49;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_49;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = n_49;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_49 = ATgetFirst((ATermList) t);
                      t_49 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_49;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_49 = ATgetArgument(t, 0);
                      r_49 = ATgetArgument(t, 1);
                      s_49 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_49;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_49 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_49;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = z_49;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_49;
                  if((i_47 != t))
                    {
                      _fail(t);
                    }
                  t = q_49;
                  if((c_49 != t))
                    {
                      _fail(t);
                    }
                  t = u_48;
                }
            }
          ;
          LocalPopChoice(b_36);
        }
      else
        {
          t = y_35;
          t = if_verbose1_1_0(r_9, t);
          _fail(t);
        }
      t = if_verbose2_1_0(s_9, t);
      t = h_47;
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm l_50 = NULL,n_50 = NULL,p_50 = NULL,r_50 = NULL,s_50 = NULL,u_50 = NULL,v_50 = NULL;
  if(match_cons(t, sym__2))
    {
      p_50 = ATgetArgument(t, 0);
      r_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_50;
  if(match_cons(t, sym_Build_1))
    {
      ATerm c_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_50;
  if(match_cons(t, sym_Where_1))
    {
      s_50 = ATgetArgument(t, 0);
      t = s_50;
      if(match_cons(t, sym_Prim_2))
        {
          l_50 = ATgetArgument(t, 0);
          n_50 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          s_50 = ATgetArgument(t, 0);
          u_50 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, s_50, u_50);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              s_50 = ATgetArgument(t, 0);
              u_50 = ATgetArgument(t, 1);
              v_50 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm t_9 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_36 = ATgetArgument(t, 0);
      if(((ATgetType(e_36) != AT_LIST) || !(ATisEmpty(e_36))))
        _fail(t);
      {
        ATerm f_36 = ATgetArgument(t, 1);
        if(((ATgetType(f_36) != AT_LIST) || !(ATisEmpty(f_36))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_9 (ATerm t)
{
  ATerm o_51 = NULL,s_51 = NULL,v_51 = NULL,x_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_36 = ATgetArgument(t, 0);
      if(((ATgetType(g_36) == AT_LIST) && !(ATisEmpty(g_36))))
        {
          o_51 = ATgetFirst((ATermList) g_36);
          v_51 = (ATerm) ATgetNext((ATermList) g_36);
        }
      else
        _fail(t);
      {
        ATerm h_36 = ATgetArgument(t, 1);
        if(((ATgetType(h_36) == AT_LIST) && !(ATisEmpty(h_36))))
          {
            s_51 = ATgetFirst((ATermList) h_36);
            x_51 = (ATerm) ATgetNext((ATermList) h_36);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_51, s_51), (ATerm) ATmakeAppl(sym__2, v_51, x_51));
  return(t);
}
ATerm y_9 (ATerm t)
{
  ATerm y_51 = NULL,b_52 = NULL;
  if(match_cons(t, sym__2))
    {
      y_51 = ATgetArgument(t, 0);
      b_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(b_52), y_51);
  return(t);
}
ATerm z_9 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  if(match_cons(t, sym__2))
    {
      c_52 = ATgetArgument(t, 0);
      d_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, c_52), (ATerm) ATmakeAppl(sym_Match_1, d_52));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,n_51 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_36 = ATgetArgument(t, 0);
      if(match_cons(k_36, sym_Build_1))
        {
          ATerm p_36 = ATgetArgument(k_36, 0);
          if(match_cons(p_36, sym_Op_2))
            {
              h_51 = ATgetArgument(p_36, 0);
              g_51 = ATgetArgument(p_36, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm l_36 = ATgetArgument(t, 1);
        if(match_cons(l_36, sym_Match_1))
          {
            ATerm q_36 = ATgetArgument(l_36, 0);
            if(match_cons(q_36, sym_Op_2))
              {
                if((h_51 != ATgetArgument(q_36, 0)))
                  {
                    _fail(ATgetArgument(q_36, 0));
                  }
                i_51 = ATgetArgument(q_36, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, g_51, i_51);
  t = genzip_4_0(t_9, x_9, y_9, z_9, t);
  n_51 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, n_51), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_51, g_51)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_36 = ATgetArgument(t, 0);
      if(match_cons(s_36, sym_Build_1))
        {
          ATerm v_36 = ATgetArgument(s_36, 0);
          if(match_cons(v_36, sym_Op_2))
            {
              e_52 = ATgetArgument(v_36, 0);
              {
                ATerm a_37 = ATgetArgument(v_36, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_36 = ATgetArgument(t, 1);
        if(match_cons(u_36, sym_Match_1))
          {
            ATerm b_37 = ATgetArgument(u_36, 0);
            if(match_cons(b_37, sym_Op_2))
              {
                f_52 = ATgetArgument(b_37, 0);
                {
                  ATerm c_37 = ATgetArgument(b_37, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, e_52, f_52);
  {
    ATerm d_37 = t;
    if((PushChoice() == 0))
      {
        ATerm k_52 = NULL;
        if(match_cons(t, sym__2))
          {
            k_52 = ATgetArgument(t, 0);
            if((k_52 != ATgetArgument(t, 1)))
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
  return(t);
}
ATerm n_55 (ATerm o_54, ATerm p_54, ATerm q_54, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
  {
    ATerm f_37 = t;
    int g_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
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
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                ATerm l_37 = t;
                int m_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_54 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm n_37 = ATgetArgument(t, 0);
                        ATerm o_37 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = o_54;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm p_37 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = p_54;
                    if(match_cons(t, sym_Build_1))
                      {
                        x_54 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    ;
                    LocalPopChoice(m_37);
                  }
                else
                  {
                    t = l_37;
                    {
                      ATerm q_37 = t;
                      int r_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(r_37);
                        }
                      else
                        {
                          t = q_37;
                          {
                            ATerm b_55 = NULL,d_55 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm s_37 = ATgetArgument(t, 0);
                                ATerm t_37 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = o_54;
                            if(match_cons(t, sym_Match_1))
                              {
                                b_55 = ATgetArgument(t, 0);
                                t = p_54;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    d_55 = ATgetArgument(t, 0);
                                    t = d_55;
                                    if((b_55 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, b_55);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        d_55 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = d_55;
                                    if((b_55 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, b_55);
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    b_55 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = p_54;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    d_55 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = d_55;
                                if((b_55 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, b_55);
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
  ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL,k_55 = NULL,l_55 = NULL;
  j_55 = t;
  if(match_cons(t, sym_Seq_2))
    {
      k_55 = ATgetArgument(t, 0);
      l_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_55;
  if(match_cons(t, sym_Seq_2))
    {
      h_55 = ATgetArgument(t, 0);
      i_55 = ATgetArgument(t, 1);
      {
        ATerm u_37 = t;
        int v_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_12 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, k_55, h_55);
            {
              ATerm w_37 = t;
              int x_37 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(x_37);
                }
              else
                {
                  t = w_37;
                  {
                    ATerm y_37 = t;
                    int z_37 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
                        ;
                        LocalPopChoice(z_37);
                      }
                    else
                      {
                        t = y_37;
                        {
                          ATerm b_38 = t;
                          int f_38 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_12 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm k_38 = ATgetArgument(t, 0);
                                  ATerm l_38 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = k_55;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm m_38 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = h_55;
                              if(match_cons(t, sym_Build_1))
                                {
                                  g_12 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              ;
                              LocalPopChoice(f_38);
                            }
                          else
                            {
                              t = b_38;
                              {
                                ATerm n_38 = t;
                                int o_38 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(o_38);
                                  }
                                else
                                  {
                                    t = n_38;
                                    {
                                      ATerm n_12 = NULL,r_12 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm p_38 = ATgetArgument(t, 0);
                                          ATerm q_38 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = k_55;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          n_12 = ATgetArgument(t, 0);
                                          t = h_55;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              r_12 = ATgetArgument(t, 0);
                                              t = r_12;
                                              if((n_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, n_12);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  r_12 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = r_12;
                                              if((n_12 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, n_12);
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              n_12 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = h_55;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              r_12 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = r_12;
                                          if((n_12 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, n_12);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              a_12 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, a_12, i_55);
            }
            ;
            LocalPopChoice(v_37);
          }
        else
          {
            t = u_37;
            t = n_55(k_55, l_55, j_55, t);
          }
      }
    }
  else
    {
      t = n_55(k_55, l_55, j_55, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm o_55 (ATerm t)
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_118(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = SRTS_one(o_55, t);
      }
    return(t);
  }
  t = o_55(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm t_38 = ATgetArgument(t, 0);
      if(((ATgetType(t_38) == AT_LIST) && !(ATisEmpty(t_38))))
        {
          ATerm z_38 = ATgetFirst((ATermList) t_38);
          if(match_cons(z_38, sym_SDefT_4))
            {
              q_55 = ATgetArgument(z_38, 0);
              {
                ATerm b_39 = ATgetArgument(z_38, 1);
                if(((ATgetType(b_39) != AT_LIST) || !(ATisEmpty(b_39))))
                  _fail(t);
              }
              {
                ATerm f_39 = ATgetArgument(z_38, 2);
                if(((ATgetType(f_39) != AT_LIST) || !(ATisEmpty(f_39))))
                  _fail(t);
              }
              p_55 = ATgetArgument(z_38, 3);
            }
          else
            _fail(t);
          {
            ATerm a_39 = (ATerm) ATgetNext((ATermList) t_38);
            if(((ATgetType(a_39) != AT_LIST) || !(ATisEmpty(a_39))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm y_38 = ATgetArgument(t, 1);
        if(match_cons(y_38, sym_CallT_3))
          {
            ATerm g_39 = ATgetArgument(y_38, 0);
            if(match_cons(g_39, sym_SVar_1))
              {
                if((q_55 != ATgetArgument(g_39, 0)))
                  {
                    _fail(ATgetArgument(g_39, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm h_39 = ATgetArgument(y_38, 1);
              if(((ATgetType(h_39) != AT_LIST) || !(ATisEmpty(h_39))))
                _fail(t);
            }
            {
              ATerm p_39 = ATgetArgument(y_38, 2);
              if(((ATgetType(p_39) != AT_LIST) || !(ATisEmpty(p_39))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_55;
  {
    ATerm q_39 = t;
    if((PushChoice() == 0))
      {
        ATerm b_10 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm r_39 = ATgetArgument(t, 0);
              if(match_cons(r_39, sym_SVar_1))
                {
                  if((q_55 != ATgetArgument(r_39, 0)))
                    {
                      _fail(ATgetArgument(r_39, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm s_39 = ATgetArgument(t, 1);
                if(((ATgetType(s_39) != AT_LIST) || !(ATisEmpty(s_39))))
                  _fail(t);
              }
              {
                ATerm t_39 = ATgetArgument(t, 2);
                if(((ATgetType(t_39) != AT_LIST) || !(ATisEmpty(t_39))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(b_10, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_39;
      }
    t = p_55;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL,d_56 = NULL,f_56 = NULL,r_56 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      f_56 = ATgetArgument(t, 0);
      t = f_56;
      if(match_cons(t, sym_Seq_2))
        {
          d_56 = ATgetArgument(t, 0);
          z_55 = ATgetArgument(t, 1);
          t = d_56;
          if(match_cons(t, sym_Where_1))
            {
              y_55 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_55;
          if(match_cons(t, sym_Seq_2))
            {
              a_56 = ATgetArgument(t, 0);
              c_56 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_56;
          if(match_cons(t, sym_Build_1))
            {
              b_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, y_55, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, b_56), c_56)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              d_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          f_56 = ATgetArgument(t, 0);
          t = f_56;
          if(match_cons(t, sym_Test_1))
            {
              d_56 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              f_56 = ATgetArgument(t, 0);
              t = f_56;
              if(match_cons(t, sym_Not_1))
                {
                  d_56 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, d_56);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  f_56 = ATgetArgument(t, 0);
                  r_56 = ATgetArgument(t, 1);
                  t = r_56;
                  if((f_56 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      f_56 = ATgetArgument(t, 0);
                      r_56 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = r_56;
                  if((f_56 != t))
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
  ATerm m_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      m_57 = ATgetArgument(t, 0);
      q_57 = ATgetArgument(t, 1);
      t = m_57;
      if(match_cons(t, sym_LChoice_2))
        {
          o_57 = ATgetArgument(t, 0);
          p_57 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, o_57, (ATerm) ATmakeAppl(sym_LChoice_2, p_57, q_57));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          m_57 = ATgetArgument(t, 0);
          q_57 = ATgetArgument(t, 1);
          t = m_57;
          if(match_cons(t, sym_Seq_2))
            {
              o_57 = ATgetArgument(t, 0);
              p_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, o_57, (ATerm) ATmakeAppl(sym_Seq_2, p_57, q_57));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              m_57 = ATgetArgument(t, 0);
              q_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_57;
          if(match_cons(t, sym_Choice_2))
            {
              o_57 = ATgetArgument(t, 0);
              p_57 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, o_57, (ATerm) ATmakeAppl(sym_Choice_2, p_57, q_57));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm c_10 (ATerm t)
        {
          ATerm w_39 = t;
          int x_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(x_39);
            }
          else
            {
              t = w_39;
            }
          return(t);
        }
        t = Cons_2_0(_id, c_10, t);
      }
      ;
      LocalPopChoice(v_39);
    }
  else
    {
      t = u_39;
      {
        ATerm d_10 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, d_10, t);
      }
    }
  return(t);
}
ATerm e_10 (ATerm t)
{
  ATerm k_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      k_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, k_59, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_40), term_a_40));
  return(t);
}
ATerm f_10 (ATerm t)
{
  ATerm b_40 = t;
  int c_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_59 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_59 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, o_59, term_a_40);
      ;
      LocalPopChoice(c_40);
    }
  else
    {
      t = b_40;
    }
  return(t);
}
ATerm l_10 (ATerm t)
{
  ATerm z_59 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      z_59 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, z_59, term_a_40);
  return(t);
}
ATerm m_10 (ATerm t)
{
  ATerm d_40 = t;
  int e_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_60 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          b_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, b_60, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_40), term_a_40));
      ;
      LocalPopChoice(e_40);
    }
  else
    {
      t = d_40;
    }
  return(t);
}
ATerm n_10 (ATerm t)
{
  ATerm n_60 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_60, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_a_40), term_a_40));
  return(t);
}
ATerm q_10 (ATerm t)
{
  ATerm f_40 = t;
  int g_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_60 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_60 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, p_60, term_a_40);
      ;
      LocalPopChoice(g_40);
    }
  else
    {
      t = f_40;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,o_58 = NULL,q_58 = NULL,r_58 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      q_58 = ATgetArgument(t, 0);
      r_58 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, q_58, r_58);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          q_58 = ATgetArgument(t, 0);
          t = q_58;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_58 = ATgetFirst((ATermList) t);
              k_58 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, j_58, (ATerm) ATmakeAppl(sym_LChoices_1, k_58));
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
              q_58 = ATgetArgument(t, 0);
              t = q_58;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_58 = ATgetFirst((ATermList) t);
                  k_58 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, j_58, (ATerm) ATmakeAppl(sym_Choices_1, k_58));
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
                  q_58 = ATgetArgument(t, 0);
                  t = q_58;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      j_58 = ATgetFirst((ATermList) t);
                      k_58 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, j_58, (ATerm) ATmakeAppl(sym_Seqs_1, k_58));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_c_23;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      q_58 = ATgetArgument(t, 0);
                      r_58 = ATgetArgument(t, 1);
                      o_58 = ATgetArgument(t, 2);
                      l_58 = ATgetArgument(t, 3);
                      {
                        ATerm h_59 = NULL,j_59 = NULL;
                        t = r_58;
                        t = map1_1_0(e_10, t);
                        h_59 = t;
                        t = o_58;
                        t = map1_1_0(f_10, t);
                        j_59 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_58, h_59, j_59, l_58);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          q_58 = ATgetArgument(t, 0);
                          r_58 = ATgetArgument(t, 1);
                          o_58 = ATgetArgument(t, 2);
                          l_58 = ATgetArgument(t, 3);
                          {
                            ATerm h_40 = t;
                            int i_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm v_59 = NULL,w_59 = NULL;
                                t = o_58;
                                t = map1_1_0(l_10, t);
                                v_59 = t;
                                t = r_58;
                                t = map_1_0(m_10, t);
                                w_59 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, q_58, w_59, v_59, l_58);
                                ;
                                LocalPopChoice(i_40);
                              }
                            else
                              {
                                t = h_40;
                                {
                                  ATerm k_60 = NULL,l_60 = NULL;
                                  t = r_58;
                                  t = map1_1_0(n_10, t);
                                  k_60 = t;
                                  t = o_58;
                                  t = map_1_0(q_10, t);
                                  l_60 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, q_58, k_60, l_60, l_58);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              q_58 = ATgetArgument(t, 0);
                              r_58 = ATgetArgument(t, 1);
                              o_58 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, r_58, (ATerm) ATmakeAppl(sym_Op_2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, o_58), q_58)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  q_58 = ATgetArgument(t, 0);
                                  r_58 = ATgetArgument(t, 1);
                                  o_58 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, o_58)), q_58), (ATerm) ATmakeAppl(sym_Build_1, r_58)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      q_58 = ATgetArgument(t, 0);
                                      r_58 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, q_58, (ATerm) ATmakeAppl(sym_Match_1, r_58));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          q_58 = ATgetArgument(t, 0);
                                          r_58 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_58), r_58);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              q_58 = ATgetArgument(t, 0);
                                              r_58 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, r_58), q_58);
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
ATerm s_10 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      b_62 = ATgetArgument(t, 0);
      t = b_62;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          b_62 = ATgetArgument(t, 0);
          t = b_62;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_c_23;
        }
      else
        {
          ATerm j_40 = t;
          int k_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  b_62 = ATgetArgument(t, 0);
                  {
                    ATerm m_40 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(k_40);
              t = b_62;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
            }
          else
            {
              t = j_40;
              {
                ATerm o_40 = t;
                int p_40 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm v_40 = ATgetArgument(t, 0);
                        c_62 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_40);
                    t = c_62;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                  }
                else
                  {
                    t = o_40;
                    {
                      ATerm w_40 = t;
                      int x_40 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm y_40 = ATgetArgument(t, 0);
                              c_62 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_40);
                          t = c_62;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          t = w_40;
                          if(match_cons(t, sym_Some_1))
                            {
                              b_62 = ATgetArgument(t, 0);
                              t = b_62;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  b_62 = ATgetArgument(t, 0);
                                  t = b_62;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  ATerm b_41 = t;
                                  int c_41 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm d_41 = ATgetArgument(t, 0);
                                          c_62 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(c_41);
                                      t = c_62;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      t = b_41;
                                      {
                                        ATerm e_41 = t;
                                        int f_41 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm g_41 = ATgetArgument(t, 0);
                                                c_62 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(f_41);
                                            t = c_62;
                                            t = fetch_1_0(s_10, t);
                                            t = term_e_37;
                                          }
                                        else
                                          {
                                            t = e_41;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                b_62 = ATgetArgument(t, 0);
                                                c_62 = ATgetArgument(t, 1);
                                                t = c_62;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = b_62;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm i_41 = t;
                                                        int j_41 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = c_62;
                                                            ;
                                                            LocalPopChoice(j_41);
                                                          }
                                                        else
                                                          {
                                                            t = i_41;
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
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = c_62;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    b_62 = ATgetArgument(t, 0);
                                                    c_62 = ATgetArgument(t, 1);
                                                    t = c_62;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = b_62;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm k_41 = t;
                                                            int m_41 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_62;
                                                                ;
                                                                LocalPopChoice(m_41);
                                                              }
                                                            else
                                                              {
                                                                t = k_41;
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
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = c_62;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        b_62 = ATgetArgument(t, 0);
                                                        t = b_62;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            b_62 = ATgetArgument(t, 0);
                                                            c_62 = ATgetArgument(t, 1);
                                                            d_62 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = d_62;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, b_62, c_62);
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
  ATerm h_63 = NULL,j_63 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      j_63 = ATgetArgument(t, 0);
      t = j_63;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          j_63 = ATgetArgument(t, 0);
          t = j_63;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_e_37;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              j_63 = ATgetArgument(t, 0);
              h_63 = ATgetArgument(t, 1);
              t = h_63;
              if(match_cons(t, sym_Id_0))
                {
                  t = j_63;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm n_41 = t;
                      int o_41 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = h_63;
                          ;
                          LocalPopChoice(o_41);
                        }
                      else
                        {
                          t = n_41;
                          t = j_63;
                        }
                    }
                  else
                    {
                      t = j_63;
                    }
                }
              else
                {
                  t = j_63;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = h_63;
                }
            }
          else
            {
              ATerm p_41 = t;
              int q_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      j_63 = ATgetArgument(t, 0);
                      {
                        ATerm r_41 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_41);
                  t = j_63;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = p_41;
                  {
                    ATerm s_41 = t;
                    int w_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm x_41 = ATgetArgument(t, 0);
                            h_63 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(w_41);
                        t = h_63;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = s_41;
                        {
                          ATerm y_41 = t;
                          int z_41 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm a_42 = ATgetArgument(t, 0);
                                  h_63 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(z_41);
                              t = h_63;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = y_41;
                              if(match_cons(t, sym_All_1))
                                {
                                  j_63 = ATgetArgument(t, 0);
                                  t = j_63;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      j_63 = ATgetArgument(t, 0);
                                      t = j_63;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          j_63 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = j_63;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_c_23;
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
  ATerm b_42 = t;
  int c_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(c_42);
    }
  else
    {
      t = b_42;
      {
        ATerm d_42 = t;
        int g_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(g_42);
          }
        else
          {
            t = d_42;
            {
              ATerm h_42 = t;
              int k_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(k_42);
                }
              else
                {
                  t = h_42;
                  {
                    ATerm l_42 = t;
                    int o_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(o_42);
                      }
                    else
                      {
                        t = l_42;
                        {
                          ATerm p_42 = t;
                          int r_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(r_42);
                            }
                          else
                            {
                              t = p_42;
                              {
                                ATerm s_42 = t;
                                int u_42 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm z_63 = NULL,a_64 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        z_63 = ATgetArgument(t, 0);
                                        a_64 = ATgetArgument(t, 1);
                                        t = z_63;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_64;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            z_63 = ATgetArgument(t, 0);
                                            a_64 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = z_63;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = a_64;
                                      }
                                    ;
                                    LocalPopChoice(u_42);
                                  }
                                else
                                  {
                                    t = s_42;
                                    {
                                      ATerm v_42 = t;
                                      int w_42 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(w_42);
                                        }
                                      else
                                        {
                                          t = v_42;
                                          {
                                            ATerm x_42 = t;
                                            int y_42 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(y_42);
                                              }
                                            else
                                              {
                                                t = x_42;
                                                {
                                                  ATerm h_64 = NULL,i_64 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      h_64 = ATgetArgument(t, 0);
                                                      i_64 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = h_64;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = i_64;
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
ATerm repeat_1_0 (ATerm u_130 (ATerm), ATerm t)
{
  ATerm k_64 (ATerm t)
  {
    ATerm z_42 = t;
    int a_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_130(t);
        t = k_64(t);
        ;
        LocalPopChoice(a_43);
      }
    else
      {
        t = z_42;
      }
    return(t);
  }
  t = k_64(t);
  return(t);
}
ATerm downup_1_0 (ATerm r_117 (ATerm), ATerm t)
{
  t = r_117(t);
  {
    ATerm t_10 (ATerm t)
    {
      t = downup_1_0(r_117, t);
      return(t);
    }
    t = SRTS_all(t_10, t);
    t = r_117(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm g_124 (ATerm), ATerm t)
{
  ATerm l_64 (ATerm t)
  {
    ATerm b_43 = t;
    int c_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_124(t);
        ;
        LocalPopChoice(c_43);
      }
    else
      {
        t = b_43;
        t = e_124(t);
        t = _2_0(g_124, l_64, t);
        t = f_124(t);
      }
    return(t);
  }
  t = l_64(t);
  return(t);
}
ATerm u_10 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_43 = ATgetArgument(t, 0);
      if(((ATgetType(d_43) != AT_LIST) || !(ATisEmpty(d_43))))
        _fail(t);
      {
        ATerm e_43 = ATgetArgument(t, 1);
        if(((ATgetType(e_43) != AT_LIST) || !(ATisEmpty(e_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_10 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,e_65 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_43 = ATgetArgument(t, 0);
      if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
        {
          z_64 = ATgetFirst((ATermList) f_43);
          b_65 = (ATerm) ATgetNext((ATermList) f_43);
        }
      else
        _fail(t);
      {
        ATerm g_43 = ATgetArgument(t, 1);
        if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
          {
            a_65 = ATgetFirst((ATermList) g_43);
            e_65 = (ATerm) ATgetNext((ATermList) g_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, z_64, a_65), (ATerm) ATmakeAppl(sym__2, b_65, e_65));
  return(t);
}
ATerm w_10 (ATerm t)
{
  ATerm j_65 = NULL,k_65 = NULL;
  if(match_cons(t, sym__2))
    {
      j_65 = ATgetArgument(t, 0);
      k_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_65), j_65);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm q_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  q_64 = t;
  {
    ATerm h_43 = t;
    int i_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_43 = ATgetArgument(t, 0);
            ATerm k_43 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(i_43);
        t = q_64;
      }
    else
      {
        t = h_43;
        {
          ATerm y_64 = NULL;
          if(match_cons(t, sym__3))
            {
              s_64 = ATgetArgument(t, 0);
              t_64 = ATgetArgument(t, 1);
              u_64 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, s_64, t_64);
          t = genzip_4_0(u_10, v_10, w_10, _id, t);
          y_64 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_64, u_64);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm j_143 (ATerm), ATerm k_143 (ATerm), ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      r_65 = ATgetArgument(t, 0);
      q_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_65;
  {
    ATerm x_10 (ATerm t)
    {
      ATerm i_13 = NULL;
      t = j_143(t);
      i_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_13, r_65);
      t = lookup_0_0(t);
      t = k_143(t);
      return(t);
    }
    t = alltd_1_0(x_10, t);
  }
  return(t);
}
ATerm a_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_43 = ATgetArgument(t, 0);
      if(((ATgetType(l_43) != AT_LIST) || !(ATisEmpty(l_43))))
        _fail(t);
      {
        ATerm m_43 = ATgetArgument(t, 1);
        if(((ATgetType(m_43) != AT_LIST) || !(ATisEmpty(m_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_11 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_43 = ATgetArgument(t, 0);
      if(((ATgetType(n_43) == AT_LIST) && !(ATisEmpty(n_43))))
        {
          h_66 = ATgetFirst((ATermList) n_43);
          j_66 = (ATerm) ATgetNext((ATermList) n_43);
        }
      else
        _fail(t);
      {
        ATerm o_43 = ATgetArgument(t, 1);
        if(((ATgetType(o_43) == AT_LIST) && !(ATisEmpty(o_43))))
          {
            i_66 = ATgetFirst((ATermList) o_43);
            k_66 = (ATerm) ATgetNext((ATermList) o_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, h_66, i_66), (ATerm) ATmakeAppl(sym__2, j_66, k_66));
  return(t);
}
ATerm c_11 (ATerm t)
{
  ATerm l_66 = NULL,m_66 = NULL;
  if(match_cons(t, sym__2))
    {
      l_66 = ATgetArgument(t, 0);
      m_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_66), l_66);
  return(t);
}
ATerm d_11 (ATerm t)
{
  ATerm o_66 = NULL,q_66 = NULL,r_66 = NULL,s_66 = NULL,t_66 = NULL;
  if(match_cons(t, sym__2))
    {
      o_66 = ATgetArgument(t, 0);
      t_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_66;
  {
    ATerm p_43 = t;
    int q_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm r_43 = ATgetArgument(t, 0);
            q_66 = ATgetArgument(t, 1);
            r_66 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(q_43);
        t = (ATerm) ATmakeAppl(sym_SDef_3, t_66, q_66, r_66);
      }
    else
      {
        t = p_43;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm s_43 = ATgetArgument(t, 0);
            q_66 = ATgetArgument(t, 1);
            r_66 = ATgetArgument(t, 2);
            s_66 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_66, q_66, r_66, s_66);
      }
  }
  return(t);
}
ATerm g_11 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_43 = ATgetArgument(t, 0);
      if(((ATgetType(t_43) != AT_LIST) || !(ATisEmpty(t_43))))
        _fail(t);
      {
        ATerm u_43 = ATgetArgument(t, 1);
        if(((ATgetType(u_43) != AT_LIST) || !(ATisEmpty(u_43))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_11 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_43 = ATgetArgument(t, 0);
      if(((ATgetType(v_43) == AT_LIST) && !(ATisEmpty(v_43))))
        {
          b_67 = ATgetFirst((ATermList) v_43);
          d_67 = (ATerm) ATgetNext((ATermList) v_43);
        }
      else
        _fail(t);
      {
        ATerm w_43 = ATgetArgument(t, 1);
        if(((ATgetType(w_43) == AT_LIST) && !(ATisEmpty(w_43))))
          {
            c_67 = ATgetFirst((ATermList) w_43);
            e_67 = (ATerm) ATgetNext((ATermList) w_43);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_67, c_67), (ATerm) ATmakeAppl(sym__2, d_67, e_67));
  return(t);
}
ATerm k_11 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL;
  if(match_cons(t, sym__2))
    {
      f_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_67), f_67);
  return(t);
}
ATerm l_11 (ATerm t)
{
  ATerm i_67 = NULL,k_67 = NULL,l_67 = NULL;
  if(match_cons(t, sym__2))
    {
      i_67 = ATgetArgument(t, 0);
      l_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_67;
  {
    ATerm x_43 = t;
    int y_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm z_43 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(y_43);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_67);
      }
    else
      {
        t = x_43;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm a_44 = ATgetArgument(t, 0);
            k_67 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, l_67, k_67);
      }
  }
  return(t);
}
ATerm o_11 (ATerm t)
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
ATerm p_11 (ATerm t)
{
  ATerm r_67 = NULL,u_67 = NULL,w_67 = NULL,y_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_44 = ATgetArgument(t, 0);
      if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
        {
          r_67 = ATgetFirst((ATermList) d_44);
          w_67 = (ATerm) ATgetNext((ATermList) d_44);
        }
      else
        _fail(t);
      {
        ATerm e_44 = ATgetArgument(t, 1);
        if(((ATgetType(e_44) == AT_LIST) && !(ATisEmpty(e_44))))
          {
            u_67 = ATgetFirst((ATermList) e_44);
            y_67 = (ATerm) ATgetNext((ATermList) e_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, r_67, u_67), (ATerm) ATmakeAppl(sym__2, w_67, y_67));
  return(t);
}
ATerm r_11 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL;
  if(match_cons(t, sym__2))
    {
      z_67 = ATgetArgument(t, 0);
      a_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(a_68), z_67);
  return(t);
}
ATerm s_11 (ATerm t)
{
  ATerm c_68 = NULL,f_68 = NULL,g_68 = NULL;
  if(match_cons(t, sym__2))
    {
      c_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_68;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_68);
      }
    else
      {
        t = f_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm i_44 = ATgetArgument(t, 0);
            f_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_68, f_68);
      }
  }
  return(t);
}
ATerm u_11 (ATerm t)
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
ATerm v_11 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL,m_68 = NULL,n_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_44 = ATgetArgument(t, 0);
      if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
        {
          k_68 = ATgetFirst((ATermList) l_44);
          m_68 = (ATerm) ATgetNext((ATermList) l_44);
        }
      else
        _fail(t);
      {
        ATerm m_44 = ATgetArgument(t, 1);
        if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
          {
            l_68 = ATgetFirst((ATermList) m_44);
            n_68 = (ATerm) ATgetNext((ATermList) m_44);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, k_68, l_68), (ATerm) ATmakeAppl(sym__2, m_68, n_68));
  return(t);
}
ATerm w_11 (ATerm t)
{
  ATerm o_68 = NULL,p_68 = NULL;
  if(match_cons(t, sym__2))
    {
      o_68 = ATgetArgument(t, 0);
      p_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(p_68), o_68);
  return(t);
}
ATerm x_11 (ATerm t)
{
  ATerm r_68 = NULL,t_68 = NULL,u_68 = NULL;
  if(match_cons(t, sym__2))
    {
      r_68 = ATgetArgument(t, 0);
      u_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_68;
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
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_68);
      }
    else
      {
        t = n_44;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_44 = ATgetArgument(t, 0);
            t_68 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, u_68, t_68);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm y_146 (ATerm), ATerm t)
{
  ATerm r_44 = t;
  int s_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_10 (ATerm t)
      {
        ATerm n_13 = NULL,p_13 = NULL;
        n_13 = t;
        t = y_146(t);
        p_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_13, p_13);
        t = genzip_4_0(a_11, b_11, c_11, d_11, t);
        return(t);
      }
      t = Let_2_0(y_10, _id, t);
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
            ATerm e_11 (ATerm t)
            {
              ATerm t_13 = NULL,v_13 = NULL;
              t_13 = t;
              t = y_146(t);
              v_13 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_13, v_13);
              t = genzip_4_0(g_11, h_11, k_11, l_11, t);
              return(t);
            }
            t = SDef_3_0(_id, e_11, _id, t);
            ;
            LocalPopChoice(u_44);
          }
        else
          {
            t = t_44;
            {
              ATerm v_44 = t;
              int w_44 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_11 (ATerm t)
                  {
                    ATerm y_13 = NULL,a_14 = NULL;
                    y_13 = t;
                    t = y_146(t);
                    a_14 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_13, a_14);
                    t = genzip_4_0(o_11, p_11, r_11, s_11, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, m_11, _id, _id, t);
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
                        ATerm t_11 (ATerm t)
                        {
                          ATerm g_14 = NULL,i_14 = NULL;
                          g_14 = t;
                          t = y_146(t);
                          i_14 = t;
                          t = (ATerm) ATmakeAppl(sym__2, g_14, i_14);
                          t = genzip_4_0(u_11, v_11, w_11, x_11, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, t_11, _id, _id, t);
                        ;
                        LocalPopChoice(y_44);
                      }
                    else
                      {
                        t = x_44;
                        {
                          ATerm y_11 (ATerm t)
                          {
                            ATerm y_68 = NULL;
                            t = y_146(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                y_68 = ATgetFirst((ATermList) t);
                                {
                                  ATerm z_44 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = y_68;
                            return(t);
                          }
                          t = Rec_2_0(y_11, _id, t);
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
ATerm Rec_2_0 (ATerm c_108 (ATerm), ATerm d_108 (ATerm), ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL,e_69 = NULL;
  e_69 = t;
  if(match_cons(t, sym_Rec_2))
    {
      a_69 = ATgetArgument(t, 0);
      b_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_69);
  z_68 = t;
  t = a_69;
  t = c_108(t);
  c_69 = t;
  t = b_69;
  t = d_108(t);
  d_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, c_69, d_69), z_68);
  return(t);
}
ATerm SDef_3_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm t)
{
  ATerm h_69 = NULL,i_69 = NULL,j_69 = NULL,k_69 = NULL,l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL;
  o_69 = t;
  if(match_cons(t, sym_SDef_3))
    {
      i_69 = ATgetArgument(t, 0);
      j_69 = ATgetArgument(t, 1);
      k_69 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_69);
  h_69 = t;
  t = i_69;
  t = u_109(t);
  l_69 = t;
  t = j_69;
  t = v_109(t);
  m_69 = t;
  t = k_69;
  t = w_109(t);
  n_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, l_69, m_69, n_69), h_69);
  return(t);
}
ATerm Let_2_0 (ATerm f_107 (ATerm), ATerm g_107 (ATerm), ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL;
  z_69 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_69 = ATgetArgument(t, 0);
      w_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_69);
  r_69 = t;
  t = s_69;
  t = f_107(t);
  x_69 = t;
  t = w_69;
  t = g_107(t);
  y_69 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, x_69, y_69), r_69);
  return(t);
}
ATerm sboundin_3_0 (ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm t)
{
  ATerm a_45 = t;
  int b_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(z_146, z_146, t);
      ;
      LocalPopChoice(b_45);
    }
  else
    {
      t = a_45;
      {
        ATerm c_45 = t;
        int d_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(b_147, b_147, z_146, t);
            ;
            LocalPopChoice(d_45);
          }
        else
          {
            t = c_45;
            {
              ATerm e_45 = t;
              int f_45 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(b_147, b_147, b_147, z_146, t);
                  ;
                  LocalPopChoice(f_45);
                }
              else
                {
                  t = e_45;
                  t = Rec_2_0(b_147, z_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm z_11 (ATerm t)
{
  ATerm i_70 = NULL;
  ATerm g_45 = t;
  int h_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          i_70 = ATgetArgument(t, 0);
          {
            ATerm i_45 = ATgetArgument(t, 1);
          }
          {
            ATerm j_45 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(h_45);
      t = i_70;
    }
  else
    {
      t = g_45;
      if(match_cons(t, sym_SDefT_4))
        {
          i_70 = ATgetArgument(t, 0);
          {
            ATerm k_45 = ATgetArgument(t, 1);
          }
          {
            ATerm l_45 = ATgetArgument(t, 2);
          }
          {
            ATerm m_45 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = i_70;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm d_70 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      d_70 = ATgetArgument(t, 0);
      {
        ATerm n_45 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = d_70;
  t = map_1_0(z_11, t);
  return(t);
}
ATerm SVar_1_0 (ATerm e_107 (ATerm), ATerm t)
{
  ATerm o_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL;
  s_70 = t;
  if(match_cons(t, sym_SVar_1))
    {
      q_70 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_70);
  o_70 = t;
  t = q_70;
  t = e_107(t);
  r_70 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, r_70), o_70);
  return(t);
}
ATerm DistBinding_2_0 (ATerm l_144 (ATerm), ATerm m_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm v_70 = NULL,w_70 = NULL,x_70 = NULL;
  if(match_cons(t, sym__3))
    {
      x_70 = ATgetArgument(t, 0);
      w_70 = ATgetArgument(t, 1);
      v_70 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = x_70;
  {
    ATerm b_12 (ATerm t)
    {
      ATerm y_70 = NULL;
      y_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_70, v_70);
      t = l_144(t);
      return(t);
    }
    ATerm d_12 (ATerm t)
    {
      ATerm z_70 = NULL;
      z_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_70, w_70);
      t = l_144(t);
      return(t);
    }
    t = m_144(b_12, d_12, _id, t);
  }
  return(t);
}
ATerm e_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_45 = ATgetArgument(t, 0);
      if(((ATgetType(o_45) != AT_LIST) || !(ATisEmpty(o_45))))
        _fail(t);
      {
        ATerm p_45 = ATgetArgument(t, 1);
        if(((ATgetType(p_45) != AT_LIST) || !(ATisEmpty(p_45))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_12 (ATerm t)
{
  ATerm m_71 = NULL,n_71 = NULL,r_71 = NULL,s_71 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_45 = ATgetArgument(t, 0);
      if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
        {
          m_71 = ATgetFirst((ATermList) q_45);
          r_71 = (ATerm) ATgetNext((ATermList) q_45);
        }
      else
        _fail(t);
      {
        ATerm r_45 = ATgetArgument(t, 1);
        if(((ATgetType(r_45) == AT_LIST) && !(ATisEmpty(r_45))))
          {
            n_71 = ATgetFirst((ATermList) r_45);
            s_71 = (ATerm) ATgetNext((ATermList) r_45);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_71, n_71), (ATerm) ATmakeAppl(sym__2, r_71, s_71));
  return(t);
}
ATerm h_12 (ATerm t)
{
  ATerm u_71 = NULL,v_71 = NULL;
  if(match_cons(t, sym__2))
    {
      u_71 = ATgetArgument(t, 0);
      v_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_71), u_71);
  return(t);
}
ATerm RnBinding_2_0 (ATerm f_144 (ATerm), ATerm g_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_71 = NULL,f_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,l_71 = NULL;
  if(match_cons(t, sym__2))
    {
      e_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_71;
  t = f_144(t);
  h_71 = t;
  t = map_1_0(new_0_0, t);
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_71, i_71);
  t = genzip_4_0(e_12, f_12, h_12, _id, t);
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_71, f_71);
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_45 = ATgetArgument(t, 0);
            ATerm v_45 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_71;
        {
          ATerm l_12 (ATerm t)
          {
            t = f_71;
            return(t);
          }
          t = at_end_1_0(l_12, t);
        }
        ;
        LocalPopChoice(t_45);
      }
    else
      {
        t = s_45;
        {
          ATerm r_14 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, j_71, f_71));
          if(match_cons(t, sym__2))
            {
              ATerm w_45 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_45) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_14;
          t = concat_0_0(t);
        }
      }
    k_71 = t;
    t = e_71;
    {
      ATerm m_12 (ATerm t)
      {
        t = i_71;
        return(t);
      }
      t = g_144(m_12, t);
      l_71 = t;
      t = (ATerm) ATmakeAppl(sym__3, l_71, f_71, k_71);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL;
  if(match_cons(t, sym__2))
    {
      f_72 = ATgetArgument(t, 0);
      g_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_72;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_72 = ATgetFirst((ATermList) t);
      i_72 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_72;
  if(match_cons(t, sym__2))
    {
      c_72 = ATgetArgument(t, 0);
      d_72 = ATgetArgument(t, 1);
      {
        ATerm x_45 = t;
        int y_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_72;
            if((f_72 != t))
              {
                _fail(t);
              }
            t = d_72;
            ;
            LocalPopChoice(y_45);
          }
        else
          {
            t = x_45;
            t = (ATerm) ATmakeAppl(sym__2, f_72, i_72);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_72, i_72);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm q_133 (ATerm), ATerm t)
{
  ATerm b_73 (ATerm t)
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_133(t);
        ;
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        {
          ATerm y_72 = NULL,z_72 = NULL,a_73 = NULL;
          ATerm q_12 (ATerm t)
          {
            ATerm a_15 = NULL;
            a_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, a_15, not_null(a_73));
            t = b_73(t);
            return(t);
          }
          if(((y_72 != NULL) && (y_72 != t)))
            _fail(t);
          else
            y_72 = t;
          if(match_cons(t, sym__2))
            {
              if(((z_72 != NULL) && (z_72 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_72 = ATgetArgument(t, 0);
              if(((a_73 != NULL) && (a_73 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                a_73 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(z_72);
          t = SRTS_all(q_12, t);
        }
      }
    return(t);
  }
  t = b_73(t);
  return(t);
}
ATerm rename_4_0 (ATerm a_144 (ATerm (ATerm), ATerm), ATerm b_144 (ATerm), ATerm c_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm d_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm e_73 = NULL;
  e_73 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_73, (ATerm) ATempty);
  {
    ATerm k_73 (ATerm t)
    {
      ATerm u_12 (ATerm t)
      {
        ATerm b_46 = t;
        int c_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_73 = NULL,h_73 = NULL;
            ATerm v_12 (ATerm t)
            {
              ATerm j_15 = NULL;
              j_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, j_15, not_null(h_73));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((g_73 != NULL) && (g_73 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_73 = ATgetArgument(t, 0);
                if(((h_73 != NULL) && (h_73 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_73 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(g_73);
            t = a_144(v_12, t);
            ;
            LocalPopChoice(c_46);
          }
        else
          {
            t = b_46;
            t = RnBinding_2_0(b_144, d_144, t);
            t = DistBinding_2_0(k_73, c_144, t);
          }
        return(t);
      }
      t = env_alltd_1_0(u_12, t);
      return(t);
    }
    t = k_73(t);
  }
  return(t);
}
ATerm y_12 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_46 = ATgetArgument(t, 0);
      if(((ATgetType(d_46) != AT_LIST) || !(ATisEmpty(d_46))))
        _fail(t);
      {
        ATerm e_46 = ATgetArgument(t, 1);
        if(((ATgetType(e_46) != AT_LIST) || !(ATisEmpty(e_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_13 (ATerm t)
{
  ATerm p_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_46 = ATgetArgument(t, 0);
      if(((ATgetType(f_46) == AT_LIST) && !(ATisEmpty(f_46))))
        {
          p_73 = ATgetFirst((ATermList) f_46);
          r_73 = (ATerm) ATgetNext((ATermList) f_46);
        }
      else
        _fail(t);
      {
        ATerm g_46 = ATgetArgument(t, 1);
        if(((ATgetType(g_46) == AT_LIST) && !(ATisEmpty(g_46))))
          {
            q_73 = ATgetFirst((ATermList) g_46);
            s_73 = (ATerm) ATgetNext((ATermList) g_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_73, q_73), (ATerm) ATmakeAppl(sym__2, r_73, s_73));
  return(t);
}
ATerm b_13 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL;
  if(match_cons(t, sym__2))
    {
      t_73 = ATgetArgument(t, 0);
      u_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_73), t_73);
  return(t);
}
ATerm c_13 (ATerm t)
{
  ATerm y_73 = NULL,a_74 = NULL,b_74 = NULL;
  if(match_cons(t, sym__2))
    {
      y_73 = ATgetArgument(t, 0);
      b_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_73;
  {
    ATerm h_46 = t;
    int i_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm j_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(i_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_74);
      }
    else
      {
        t = h_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm k_46 = ATgetArgument(t, 0);
            a_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_74, a_74);
      }
  }
  return(t);
}
ATerm f_13 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_46 = ATgetArgument(t, 0);
      if(((ATgetType(l_46) != AT_LIST) || !(ATisEmpty(l_46))))
        _fail(t);
      {
        ATerm m_46 = ATgetArgument(t, 1);
        if(((ATgetType(m_46) != AT_LIST) || !(ATisEmpty(m_46))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm j_13 (ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL,i_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_46 = ATgetArgument(t, 0);
      if(((ATgetType(n_46) == AT_LIST) && !(ATisEmpty(n_46))))
        {
          f_74 = ATgetFirst((ATermList) n_46);
          h_74 = (ATerm) ATgetNext((ATermList) n_46);
        }
      else
        _fail(t);
      {
        ATerm o_46 = ATgetArgument(t, 1);
        if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
          {
            g_74 = ATgetFirst((ATermList) o_46);
            i_74 = (ATerm) ATgetNext((ATermList) o_46);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, f_74, g_74), (ATerm) ATmakeAppl(sym__2, h_74, i_74));
  return(t);
}
ATerm k_13 (ATerm t)
{
  ATerm j_74 = NULL,k_74 = NULL;
  if(match_cons(t, sym__2))
    {
      j_74 = ATgetArgument(t, 0);
      k_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(k_74), j_74);
  return(t);
}
ATerm l_13 (ATerm t)
{
  ATerm m_74 = NULL,o_74 = NULL,p_74 = NULL;
  if(match_cons(t, sym__2))
    {
      m_74 = ATgetArgument(t, 0);
      p_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_74;
  {
    ATerm p_46 = t;
    int q_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_46 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_46);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, p_74);
      }
    else
      {
        t = p_46;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm s_46 = ATgetArgument(t, 0);
            o_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, p_74, o_74);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm u_146 (ATerm), ATerm t)
{
  ATerm t_46 = t;
  int u_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(u_146, _id, t);
      ;
      LocalPopChoice(u_46);
    }
  else
    {
      t = t_46;
      {
        ATerm v_46 = t;
        int w_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 (ATerm t)
            {
              ATerm t_15 = NULL,x_15 = NULL;
              t_15 = t;
              t = u_146(t);
              x_15 = t;
              t = (ATerm) ATmakeAppl(sym__2, t_15, x_15);
              t = genzip_4_0(y_12, a_13, b_13, c_13, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, x_12, _id, t);
            ;
            LocalPopChoice(w_46);
          }
        else
          {
            t = v_46;
            {
              ATerm e_13 (ATerm t)
              {
                ATerm d_16 = NULL,k_16 = NULL;
                d_16 = t;
                t = u_146(t);
                k_16 = t;
                t = (ATerm) ATmakeAppl(sym__2, d_16, k_16);
                t = genzip_4_0(f_13, j_13, k_13, l_13, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, e_13, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm m_106 (ATerm), ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL,v_74 = NULL,w_74 = NULL;
  w_74 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      u_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_74);
  t_74 = t;
  t = u_74;
  t = m_106(t);
  v_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, v_74), t_74);
  return(t);
}
ATerm RDefT_4_0 (ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm g_106 (ATerm), ATerm t)
{
  ATerm z_74 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL,j_75 = NULL;
  j_75 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      b_75 = ATgetArgument(t, 0);
      c_75 = ATgetArgument(t, 1);
      d_75 = ATgetArgument(t, 2);
      e_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_75);
  z_74 = t;
  t = b_75;
  t = d_106(t);
  f_75 = t;
  t = c_75;
  t = e_106(t);
  g_75 = t;
  t = d_75;
  t = f_106(t);
  h_75 = t;
  t = e_75;
  t = g_106(t);
  i_75 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, f_75, g_75, h_75, i_75), z_74);
  return(t);
}
ATerm SDefT_4_0 (ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm a_110 (ATerm), ATerm t)
{
  ATerm m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL;
  v_75 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      n_75 = ATgetArgument(t, 0);
      o_75 = ATgetArgument(t, 1);
      p_75 = ATgetArgument(t, 2);
      q_75 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_75);
  m_75 = t;
  t = n_75;
  t = x_109(t);
  r_75 = t;
  t = o_75;
  t = y_109(t);
  s_75 = t;
  t = p_75;
  t = z_109(t);
  t_75 = t;
  t = q_75;
  t = a_110(t);
  u_75 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, r_75, s_75, t_75, u_75), m_75);
  return(t);
}
ATerm Scope_2_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL;
  d_76 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_76);
  y_75 = t;
  t = z_75;
  t = p_107(t);
  b_76 = t;
  t = a_76;
  t = q_107(t);
  c_76 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, b_76, c_76), y_75);
  return(t);
}
ATerm tboundin_3_0 (ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm x_146 (ATerm), ATerm t)
{
  ATerm x_46 = t;
  int y_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(x_146, v_146, t);
      ;
      LocalPopChoice(y_46);
    }
  else
    {
      t = x_46;
      {
        ATerm z_46 = t;
        int a_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(x_146, x_146, x_146, v_146, t);
            ;
            LocalPopChoice(a_47);
          }
        else
          {
            t = z_46;
            {
              ATerm b_47 = t;
              int c_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(x_146, x_146, x_146, v_146, t);
                  ;
                  LocalPopChoice(c_47);
                }
              else
                {
                  t = b_47;
                  t = DynamicRules_1_0(v_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm m_13 (ATerm t)
{
  ATerm k_76 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      k_76 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, k_76);
  return(t);
}
ATerm q_13 (ATerm t)
{
  ATerm g_77 = NULL;
  ATerm d_47 = t;
  int e_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_77 = ATgetArgument(t, 0);
          {
            ATerm f_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_47);
      t = g_77;
    }
  else
    {
      t = d_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_77;
    }
  return(t);
}
ATerm s_13 (ATerm t)
{
  ATerm o_77 = NULL;
  ATerm g_47 = t;
  int l_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_77 = ATgetArgument(t, 0);
          {
            ATerm m_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_47);
      t = o_77;
    }
  else
    {
      t = g_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_77;
    }
  return(t);
}
ATerm o_13 (ATerm t)
{
  ATerm l_76 = NULL,s_76 = NULL,w_76 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      s_76 = ATgetArgument(t, 0);
      t = s_76;
      if(match_cons(t, sym_Rule_3))
        {
          l_76 = ATgetArgument(t, 0);
          {
            ATerm n_47 = ATgetArgument(t, 1);
          }
          {
            ATerm o_47 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = l_76;
      t = tvars_0_0(t);
    }
  else
    {
      ATerm r_47 = t;
      int s_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_Scope_2))
            {
              s_76 = ATgetArgument(t, 0);
              {
                ATerm z_47 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          LocalPopChoice(s_47);
          t = s_76;
        }
      else
        {
          t = r_47;
          if(match_cons(t, sym_DynamicRules_1))
            {
              s_76 = ATgetArgument(t, 0);
              t = s_76;
              t = tvars_0_0(t);
            }
          else
            {
              ATerm a_48 = t;
              int e_48 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm f_48 = ATgetArgument(t, 0);
                      ATerm g_48 = ATgetArgument(t, 1);
                      w_76 = ATgetArgument(t, 2);
                      {
                        ATerm i_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_48);
                  t = w_76;
                  t = map_1_0(q_13, t);
                }
              else
                {
                  t = a_48;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm k_48 = ATgetArgument(t, 0);
                      ATerm m_48 = ATgetArgument(t, 1);
                      w_76 = ATgetArgument(t, 2);
                      {
                        ATerm o_48 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = w_76;
                  t = map_1_0(s_13, t);
                }
            }
        }
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(m_13, o_13, tboundin_3_0, t);
  return(t);
}
ATerm u_13 (ATerm t)
{
  ATerm d_78 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      d_78 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, d_78);
  return(t);
}
ATerm x_13 (ATerm t)
{
  ATerm n_78 = NULL;
  ATerm w_48 = t;
  int y_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_78 = ATgetArgument(t, 0);
          {
            ATerm a_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_48);
      t = n_78;
    }
  else
    {
      t = w_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_78;
    }
  return(t);
}
ATerm z_13 (ATerm t)
{
  ATerm t_78 = NULL;
  ATerm u_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          t_78 = ATgetArgument(t, 0);
          {
            ATerm y_49 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_49);
      t = t_78;
    }
  else
    {
      t = u_49;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          t_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = t_78;
    }
  return(t);
}
ATerm w_13 (ATerm t)
{
  ATerm b_50 = t;
  int c_50 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(c_50);
    }
  else
    {
      t = b_50;
      {
        ATerm f_78 = NULL,h_78 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            f_78 = ATgetArgument(t, 0);
            t = f_78;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm e_50 = t;
            int f_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm g_50 = ATgetArgument(t, 0);
                    ATerm h_50 = ATgetArgument(t, 1);
                    h_78 = ATgetArgument(t, 2);
                    {
                      ATerm i_50 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(f_50);
                t = h_78;
                t = map_1_0(x_13, t);
              }
            else
              {
                t = e_50;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm j_50 = ATgetArgument(t, 0);
                    ATerm k_50 = ATgetArgument(t, 1);
                    h_78 = ATgetArgument(t, 2);
                    {
                      ATerm m_50 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = h_78;
                t = map_1_0(z_13, t);
              }
          }
      }
    }
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm w_77 = NULL,a_78 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      a_78 = ATgetArgument(t, 0);
      t = a_78;
      if(match_cons(t, sym_Rule_3))
        {
          w_77 = ATgetArgument(t, 0);
          {
            ATerm o_50 = ATgetArgument(t, 1);
          }
          {
            ATerm q_50 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = w_77;
      t = free_vars_3_0(u_13, w_13, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          a_78 = ATgetArgument(t, 0);
          {
            ATerm t_50 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = a_78;
    }
  return(t);
}
ATerm union_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      y_78 = ATgetArgument(t, 0);
      x_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_78;
  {
    ATerm z_78 (ATerm t)
    {
      ATerm w_50 = t;
      int x_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = x_78;
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
                ATerm n_16 = NULL,q_16 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    n_16 = ATgetFirst((ATermList) t);
                    q_16 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = x_78;
                {
                  ATerm b_14 (ATerm t)
                  {
                    ATerm r_16 = NULL;
                    r_16 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_16, r_16);
                    t = d_126(t);
                    return(t);
                  }
                  t = fetch_1_0(b_14, t);
                  t = q_16;
                  t = z_78(t);
                }
                ;
                LocalPopChoice(z_50);
              }
            else
              {
                t = y_50;
                t = Cons_2_0(_id, z_78, t);
              }
          }
        }
      return(t);
    }
    t = z_78(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm u_128 (ATerm), ATerm t)
{
  ATerm a_51 = t;
  int b_51 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = s_128(t);
      ;
      LocalPopChoice(b_51);
    }
  else
    {
      t = a_51;
      {
        ATerm c_79 = NULL,d_79 = NULL,g_79 = NULL,h_79 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_79 = ATgetFirst((ATermList) t);
            d_79 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_79;
        t = u_128(t);
        g_79 = t;
        t = d_79;
        t = foldr_3_0(s_128, t_128, u_128, t);
        h_79 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_79, h_79);
        t = t_128(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm z_125 (ATerm), ATerm t)
{
  ATerm r_79 = NULL,s_79 = NULL;
  if(match_cons(t, sym__2))
    {
      s_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_79;
  {
    ATerm t_79 (ATerm t)
    {
      ATerm c_51 = t;
      int d_51 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(d_51);
        }
      else
        {
          t = c_51;
          {
            ATerm e_51 = t;
            int f_51 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_16 = NULL,a_17 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    u_16 = ATgetFirst((ATermList) t);
                    a_17 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = r_79;
                {
                  ATerm c_14 (ATerm t)
                  {
                    ATerm b_17 = NULL;
                    b_17 = t;
                    t = (ATerm) ATmakeAppl(sym__2, u_16, b_17);
                    t = z_125(t);
                    return(t);
                  }
                  t = fetch_1_0(c_14, t);
                  t = a_17;
                  t = t_79(t);
                }
                ;
                LocalPopChoice(f_51);
              }
            else
              {
                t = e_51;
                t = Cons_2_0(_id, t_79, t);
              }
          }
        }
      return(t);
    }
    t = t_79(t);
  }
  return(t);
}
ATerm d_14 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_51 = ATgetArgument(t, 0);
      if(((ATgetType(j_51) != AT_LIST) || !(ATisEmpty(j_51))))
        _fail(t);
      {
        ATerm k_51 = ATgetArgument(t, 1);
        if(((ATgetType(k_51) != AT_LIST) || !(ATisEmpty(k_51))))
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
  ATerm c_80 = NULL,d_80 = NULL,j_80 = NULL,k_80 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_51 = ATgetArgument(t, 0);
      if(((ATgetType(l_51) == AT_LIST) && !(ATisEmpty(l_51))))
        {
          c_80 = ATgetFirst((ATermList) l_51);
          j_80 = (ATerm) ATgetNext((ATermList) l_51);
        }
      else
        _fail(t);
      {
        ATerm m_51 = ATgetArgument(t, 1);
        if(((ATgetType(m_51) == AT_LIST) && !(ATisEmpty(m_51))))
          {
            d_80 = ATgetFirst((ATermList) m_51);
            k_80 = (ATerm) ATgetNext((ATermList) m_51);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, c_80, d_80), (ATerm) ATmakeAppl(sym__2, j_80, k_80));
  return(t);
}
ATerm f_14 (ATerm t)
{
  ATerm l_80 = NULL,m_80 = NULL;
  if(match_cons(t, sym__2))
    {
      l_80 = ATgetArgument(t, 0);
      m_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_80), l_80);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm v_79 = NULL,w_79 = NULL,x_79 = NULL,y_79 = NULL,z_79 = NULL,a_80 = NULL,b_80 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_51 = ATgetFirst((ATermList) t);
      if(match_cons(p_51, sym__2))
        {
          v_79 = ATgetArgument(p_51, 0);
          w_79 = ATgetArgument(p_51, 1);
        }
      else
        _fail(t);
      x_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(w_79);
  if(match_cons(t, sym__2))
    {
      y_79 = ATgetArgument(t, 0);
      z_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(v_79);
  if(match_cons(t, sym__2))
    {
      if((y_79 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      a_80 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_80, z_79);
  t = genzip_4_0(d_14, e_14, f_14, _id, t);
  b_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_80, x_79);
  {
    ATerm q_51 = t;
    int r_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm t_51 = ATgetArgument(t, 0);
            ATerm u_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_80;
        {
          ATerm h_14 (ATerm t)
          {
            t = x_79;
            return(t);
          }
          t = at_end_1_0(h_14, t);
        }
        ;
        LocalPopChoice(r_51);
      }
    else
      {
        t = q_51;
        {
          ATerm q_17 = NULL;
          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, b_80, x_79));
          if(match_cons(t, sym__2))
            {
              ATerm w_51 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_51) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              q_17 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_17;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm j_131 (ATerm), ATerm k_131 (ATerm), ATerm t)
{
  ATerm q_80 (ATerm t)
  {
    ATerm z_51 = t;
    int a_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_131(t);
        ;
        LocalPopChoice(a_52);
      }
    else
      {
        t = z_51;
        t = k_131(t);
        t = q_80(t);
      }
    return(t);
  }
  t = q_80(t);
  return(t);
}
ATerm for_3_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  t = m_131(t);
  t = while_not_2_0(n_131, o_131, t);
  return(t);
}
ATerm j_14 (ATerm t)
{
  ATerm v_80 = NULL;
  v_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, v_80);
  return(t);
}
ATerm m_14 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm n_14 (ATerm t)
{
  ATerm g_52 = t;
  int h_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_80 = ATgetFirst((ATermList) t);
          a_81 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_80;
      if(match_cons(t, sym__2))
        {
          y_80 = ATgetArgument(t, 0);
          z_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_80;
      if((y_80 != t))
        {
          _fail(t);
        }
      t = a_81;
      ;
      LocalPopChoice(h_52);
    }
  else
    {
      t = g_52;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm o_14 (ATerm t)
{
  ATerm m_81 = NULL;
  if(match_cons(t, sym__2))
    {
      m_81 = ATgetArgument(t, 0);
      if((m_81 != ATgetArgument(t, 1)))
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
  ATerm i_52 = t;
  int j_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_14 (ATerm t)
      {
        t = _2_0(_id, m_14, t);
        return(t);
      }
      ATerm l_14 (ATerm t)
      {
        ATerm l_52 = t;
        int m_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(_id, n_14, t);
            ;
            LocalPopChoice(m_52);
          }
        else
          {
            t = l_52;
            {
              ATerm e_81 = NULL,g_81 = NULL,h_81 = NULL,i_81 = NULL;
              if(match_cons(t, sym__2))
                {
                  e_81 = ATgetArgument(t, 0);
                  g_81 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_81;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_81 = ATgetFirst((ATermList) t);
                  i_81 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_81), h_81), i_81);
            }
          }
        return(t);
      }
      t = for_3_0(j_14, k_14, l_14, t);
      ;
      LocalPopChoice(j_52);
    }
  else
    {
      t = i_52;
      t = diff_1_0(o_14, t);
    }
  return(t);
}
ATerm q_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_14 (ATerm t)
{
  ATerm j_18 = NULL;
  if(match_cons(t, sym__2))
    {
      j_18 = ATgetArgument(t, 0);
      if((j_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm v_14 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm x_14 (ATerm t)
{
  ATerm t_18 = NULL;
  if(match_cons(t, sym__2))
    {
      t_18 = ATgetArgument(t, 0);
      if((t_18 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_14 (ATerm t)
{
  t = union_1_0(u_14, t);
  return(t);
}
ATerm w_14 (ATerm t)
{
  t = union_1_0(x_14, t);
  return(t);
}
ATerm free_vars_3_0 (ATerm q_145 (ATerm), ATerm r_145 (ATerm), ATerm s_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm s_81 (ATerm t)
  {
    ATerm n_52 = t;
    int o_52 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_145(t);
        ;
        LocalPopChoice(o_52);
      }
    else
      {
        t = n_52;
        {
          ATerm p_52 = t;
          int q_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_81 = NULL,p_81 = NULL,b_18 = NULL,c_18 = NULL;
              n_81 = t;
              t = r_145(t);
              p_81 = t;
              t = n_81;
              {
                ATerm p_14 (ATerm t)
                {
                  ATerm s_17 = NULL;
                  t = s_81(t);
                  s_17 = t;
                  t = (ATerm) ATmakeAppl(sym__2, s_17, p_81);
                  t = diff_0_0(t);
                  return(t);
                }
                t = s_145(p_14, s_81, q_14, t);
                b_18 = t;
                t = SSL_explode_term(b_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm r_52 = ATgetArgument(t, 0);
                    c_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = c_18;
                t = foldr_3_0(s_14, t_14, _id, t);
              }
              ;
              LocalPopChoice(q_52);
            }
          else
            {
              t = p_52;
              {
                ATerm k_18 = NULL,l_18 = NULL;
                k_18 = t;
                t = SSL_explode_term(k_18);
                if(match_cons(t, sym__2))
                  {
                    ATerm s_52 = ATgetArgument(t, 0);
                    l_18 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_18;
                t = foldr_3_0(v_14, w_14, s_81, t);
              }
            }
        }
      }
    return(t);
  }
  t = s_81(t);
  return(t);
}
ATerm Var_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  ATerm t_81 = NULL,u_81 = NULL,v_81 = NULL,w_81 = NULL;
  w_81 = t;
  if(match_cons(t, sym_Var_1))
    {
      u_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_81);
  t_81 = t;
  t = u_81;
  t = v_103(t);
  v_81 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, v_81), t_81);
  return(t);
}
ATerm z_14 (ATerm t)
{
  ATerm a_83 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      a_83 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, a_83);
  return(t);
}
ATerm c_15 (ATerm t)
{
  ATerm q_83 = NULL;
  ATerm t_52 = t;
  int u_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          q_83 = ATgetArgument(t, 0);
          {
            ATerm v_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_52);
      t = q_83;
    }
  else
    {
      t = t_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          q_83 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = q_83;
    }
  return(t);
}
ATerm d_15 (ATerm t)
{
  ATerm k_84 = NULL;
  ATerm w_52 = t;
  int x_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_84 = ATgetArgument(t, 0);
          {
            ATerm y_52 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_52);
      t = k_84;
    }
  else
    {
      t = w_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_84;
    }
  return(t);
}
ATerm e_15 (ATerm t)
{
  ATerm r_84 = NULL;
  ATerm z_52 = t;
  int a_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          r_84 = ATgetArgument(t, 0);
          {
            ATerm b_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_53);
      t = r_84;
    }
  else
    {
      t = z_52;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          r_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = r_84;
    }
  return(t);
}
ATerm f_15 (ATerm t)
{
  ATerm z_84 = NULL;
  ATerm c_53 = t;
  int d_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          z_84 = ATgetArgument(t, 0);
          {
            ATerm e_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(d_53);
      t = z_84;
    }
  else
    {
      t = c_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          z_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = z_84;
    }
  return(t);
}
ATerm h_15 (ATerm t)
{
  ATerm k_85 = NULL;
  ATerm f_53 = t;
  int g_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          k_85 = ATgetArgument(t, 0);
          {
            ATerm h_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(g_53);
      t = k_85;
    }
  else
    {
      t = f_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          k_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = k_85;
    }
  return(t);
}
ATerm i_15 (ATerm t)
{
  ATerm s_85 = NULL;
  ATerm i_53 = t;
  int j_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_85 = ATgetArgument(t, 0);
          {
            ATerm k_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(j_53);
      t = s_85;
    }
  else
    {
      t = i_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_85;
    }
  return(t);
}
ATerm k_15 (ATerm t)
{
  ATerm o_86 = NULL;
  ATerm l_53 = t;
  int m_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          o_86 = ATgetArgument(t, 0);
          {
            ATerm n_53 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(m_53);
      t = o_86;
    }
  else
    {
      t = l_53;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          o_86 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = o_86;
    }
  return(t);
}
ATerm b_15 (ATerm t)
{
  ATerm o_53 = t;
  int p_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(p_53);
    }
  else
    {
      t = o_53;
      {
        ATerm c_83 = NULL,e_83 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            c_83 = ATgetArgument(t, 0);
            t = c_83;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm q_53 = t;
            int r_53 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm s_53 = ATgetArgument(t, 0);
                    ATerm t_53 = ATgetArgument(t, 1);
                    e_83 = ATgetArgument(t, 2);
                    {
                      ATerm u_53 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(r_53);
                t = e_83;
                t = map_1_0(c_15, t);
              }
            else
              {
                t = q_53;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm v_53 = ATgetArgument(t, 0);
                    ATerm w_53 = ATgetArgument(t, 1);
                    e_83 = ATgetArgument(t, 2);
                    {
                      ATerm x_53 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = e_83;
                t = map_1_0(d_15, t);
              }
          }
      }
    }
  return(t);
}
ATerm g_15 (ATerm t)
{
  ATerm y_53 = t;
  int z_53 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(z_53);
    }
  else
    {
      t = y_53;
      {
        ATerm d_85 = NULL,e_85 = NULL;
        ATerm a_54 = t;
        int b_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm c_54 = ATgetArgument(t, 0);
                e_85 = ATgetArgument(t, 1);
                {
                  ATerm d_54 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_54);
            t = e_85;
            t = map_1_0(h_15, t);
          }
        else
          {
            t = a_54;
            {
              ATerm e_54 = t;
              int f_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      d_85 = ATgetArgument(t, 0);
                      {
                        ATerm g_54 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(f_54);
                  t = (ATerm) ATinsert(ATempty, d_85);
                }
              else
                {
                  t = e_54;
                  {
                    ATerm h_54 = t;
                    int i_54 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm j_54 = ATgetArgument(t, 0);
                            e_85 = ATgetArgument(t, 1);
                            {
                              ATerm k_54 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm l_54 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(i_54);
                        t = e_85;
                        t = map_1_0(i_15, t);
                      }
                    else
                      {
                        t = h_54;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm m_54 = ATgetArgument(t, 0);
                            e_85 = ATgetArgument(t, 1);
                            {
                              ATerm n_54 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm r_54 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = e_85;
                        t = map_1_0(k_15, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  ATerm y_14 (ATerm t)
  {
    ATerm k_82 = NULL,o_82 = NULL,x_82 = NULL;
    if(match_cons(t, sym_LRule_1))
      {
        o_82 = ATgetArgument(t, 0);
        t = o_82;
        if(match_cons(t, sym_Rule_3))
          {
            k_82 = ATgetArgument(t, 0);
            {
              ATerm s_54 = ATgetArgument(t, 1);
            }
            {
              ATerm t_54 = ATgetArgument(t, 2);
            }
          }
        else
          _fail(t);
        t = k_82;
        t = free_vars_3_0(z_14, b_15, tboundin_3_0, t);
      }
    else
      {
        ATerm u_54 = t;
        int v_54 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_Scope_2))
              {
                o_82 = ATgetArgument(t, 0);
                {
                  ATerm w_54 = ATgetArgument(t, 1);
                }
              }
            else
              _fail(t);
            LocalPopChoice(v_54);
            t = o_82;
          }
        else
          {
            t = u_54;
            {
              ATerm y_54 = t;
              int z_54 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm a_55 = ATgetArgument(t, 0);
                      ATerm c_55 = ATgetArgument(t, 1);
                      x_82 = ATgetArgument(t, 2);
                      {
                        ATerm e_55 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_54);
                  t = x_82;
                  t = map_1_0(e_15, t);
                }
              else
                {
                  t = y_54;
                  if(match_cons(t, sym_RDefT_4))
                    {
                      ATerm f_55 = ATgetArgument(t, 0);
                      ATerm g_55 = ATgetArgument(t, 1);
                      x_82 = ATgetArgument(t, 2);
                      {
                        ATerm m_55 = ATgetArgument(t, 3);
                      }
                    }
                  else
                    _fail(t);
                  t = x_82;
                  t = map_1_0(f_15, t);
                }
            }
          }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, y_14, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, g_15, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm l_15 (ATerm t)
{
  ATerm h_88 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_88 = ATgetArgument(t, 0);
      {
        ATerm r_55 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_88;
  return(t);
}
ATerm m_15 (ATerm t)
{
  ATerm i_88 = NULL,k_88 = NULL,l_88 = NULL,u_88 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      k_88 = ATgetArgument(t, 0);
      u_88 = ATgetArgument(t, 1);
      i_88 = ATgetArgument(t, 2);
      t = k_88;
      if(match_cons(t, sym_SVar_1))
        {
          l_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = i_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_88;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          k_88 = ATgetArgument(t, 0);
          u_88 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = k_88;
      if(match_cons(t, sym_SVar_1))
        {
          l_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_88;
    }
  return(t);
}
ATerm n_15 (ATerm t)
{
  ATerm j_89 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      j_89 = ATgetArgument(t, 0);
      {
        ATerm s_55 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = j_89;
  return(t);
}
ATerm o_15 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm t_55 = ATgetArgument(t, 0);
      if(((ATgetType(t_55) != AT_LIST) || !(ATisEmpty(t_55))))
        _fail(t);
      {
        ATerm u_55 = ATgetArgument(t, 1);
        if(((ATgetType(u_55) != AT_LIST) || !(ATisEmpty(u_55))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_15 (ATerm t)
{
  ATerm s_89 = NULL,a_92 = NULL,b_92 = NULL,k_92 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_55 = ATgetArgument(t, 0);
      if(((ATgetType(v_55) == AT_LIST) && !(ATisEmpty(v_55))))
        {
          s_89 = ATgetFirst((ATermList) v_55);
          b_92 = (ATerm) ATgetNext((ATermList) v_55);
        }
      else
        _fail(t);
      {
        ATerm w_55 = ATgetArgument(t, 1);
        if(((ATgetType(w_55) == AT_LIST) && !(ATisEmpty(w_55))))
          {
            a_92 = ATgetFirst((ATermList) w_55);
            k_92 = (ATerm) ATgetNext((ATermList) w_55);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, s_89, a_92), (ATerm) ATmakeAppl(sym__2, b_92, k_92));
  return(t);
}
ATerm q_15 (ATerm t)
{
  ATerm l_92 = NULL,m_92 = NULL;
  if(match_cons(t, sym__2))
    {
      l_92 = ATgetArgument(t, 0);
      m_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_92), l_92);
  return(t);
}
ATerm r_15 (ATerm t)
{
  ATerm n_92 = NULL,o_92 = NULL;
  if(match_cons(t, sym__2))
    {
      n_92 = ATgetArgument(t, 0);
      o_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, n_92), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, o_92)));
  return(t);
}
ATerm s_15 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,c_87 = NULL,a_88 = NULL,b_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL,f_88 = NULL,g_88 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_55 = ATgetArgument(t, 0);
      if(match_cons(x_55, sym_SVar_1))
        {
          x_86 = ATgetArgument(x_55, 0);
        }
      else
        _fail(t);
      y_86 = ATgetArgument(t, 1);
      z_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue)), (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_86), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)));
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_88 = ATgetFirst((ATermList) t);
      {
        ATerm e_56 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_88;
  if(match_cons(t, sym_Defined_4))
    {
      ATerm g_56 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_56) != ATmakeSymbol("c_0", 0, ATtrue)))
        _fail(t);
      a_87 = ATgetArgument(t, 1);
      b_87 = ATgetArgument(t, 2);
      c_87 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_86, a_87, c_87, b_87);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((x_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      b_88 = ATgetArgument(t, 1);
      {
        ATerm h_56 = ATgetArgument(t, 2);
      }
      c_88 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = b_88;
  t = map_1_0(l_15, t);
  d_88 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_88, y_86, c_88);
  t = substitute_2_0(m_15, _id, t);
  e_88 = t;
  t = c_87;
  t = map_1_0(n_15, t);
  f_88 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_86, f_88);
  t = genzip_4_0(o_15, p_15, q_15, r_15, t);
  g_88 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, f_88, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_88), e_88));
  t = downup_1_0(s_15, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm u_15 (ATerm t)
{
  ATerm y_92 = NULL;
  y_92 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue))));
  t = y_92;
  return(t);
}
ATerm v_15 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_18), (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue))));
  t = u_18;
  return(t);
}
ATerm w_15 (ATerm t)
{
  ATerm j_93 = NULL;
  j_93 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue))));
  t = j_93;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm w_92 = NULL,x_92 = NULL;
  w_92 = t;
  t = new_0_0(t);
  x_92 = t;
  {
    ATerm i_56 = t;
    int j_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_56, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_92), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(j_56);
      }
    else
      {
        t = i_56;
        t = if_verbose2_1_0(u_15, t);
        _fail(t);
      }
    {
      ATerm m_56 = t;
      int n_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_92 = NULL,a_93 = NULL,b_93 = NULL,c_93 = NULL,e_93 = NULL,f_93 = NULL,h_93 = NULL;
          z_92 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              a_93 = ATgetArgument(t, 0);
              h_93 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_93;
          if(match_cons(t, sym_CallT_3))
            {
              b_93 = ATgetArgument(t, 0);
              e_93 = ATgetArgument(t, 1);
              f_93 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_93;
          if(match_cons(t, sym_SVar_1))
            {
              c_93 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_93;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_93;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_93;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = c_93;
          if((x_92 != t))
            {
              _fail(t);
            }
          t = z_92;
          ;
          LocalPopChoice(n_56);
        }
      else
        {
          t = m_56;
          t = if_verbose1_1_0(v_15, t);
          _fail(t);
        }
      t = if_verbose2_1_0(w_15, t);
      t = w_92;
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
ATerm assert_1_0 (ATerm b_130 (ATerm), ATerm t)
{
  ATerm k_93 = NULL,l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL;
  if(match_cons(t, sym__2))
    {
      k_93 = ATgetArgument(t, 0);
      l_93 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_130(t);
  m_93 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_93, k_93, l_93);
  t = table_push_0_0(t);
  {
    ATerm o_56 = t;
    int p_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(m_93, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_56);
      }
    else
      {
        t = o_56;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_93 = ATgetFirst((ATermList) t);
        o_93 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(m_93, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(o_93), (ATerm) ATinsert(CheckATermList(n_93), k_93)));
    t = (ATerm) ATmakeAppl(sym__2, k_93, l_93);
  }
  return(t);
}
ATerm y_15 (ATerm t)
{
  t = term_q_56;
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm p_93 = NULL,q_93 = NULL,r_93 = NULL,s_93 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      p_93 = ATgetArgument(t, 0);
      q_93 = ATgetArgument(t, 1);
      r_93 = ATgetArgument(t, 2);
      s_93 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_93), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_s_56, q_93, s_93, r_93));
  t = assert_1_0(y_15, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_93, q_93, r_93, s_93);
  return(t);
}
ATerm map_1_0 (ATerm z_121 (ATerm), ATerm t)
{
  ATerm t_93 (ATerm t)
  {
    ATerm t_56 = t;
    int u_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_56);
      }
    else
      {
        t = t_56;
        t = Cons_2_0(z_121, t_93, t);
      }
    return(t);
  }
  t = t_93(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm u_93 = NULL,v_93 = NULL,w_93 = NULL,x_93 = NULL;
  x_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      v_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_93);
  u_93 = t;
  t = v_93;
  t = x_102(t);
  w_93 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, w_93), u_93);
  return(t);
}
ATerm Cons_2_0 (ATerm t_102 (ATerm), ATerm u_102 (ATerm), ATerm t)
{
  ATerm a_94 = NULL,b_94 = NULL,c_94 = NULL,d_94 = NULL,e_94 = NULL,f_94 = NULL;
  f_94 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_94 = ATgetFirst((ATermList) t);
      c_94 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_94);
  a_94 = t;
  t = b_94;
  t = t_102(t);
  d_94 = t;
  t = c_94;
  t = u_102(t);
  e_94 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_94), d_94), a_94);
  return(t);
}
ATerm Signature_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL;
  m_94 = t;
  if(match_cons(t, sym_Signature_1))
    {
      k_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_94);
  j_94 = t;
  t = k_94;
  t = y_102(t);
  l_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, l_94), j_94);
  return(t);
}
ATerm Specification_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  s_94 = t;
  if(match_cons(t, sym_Specification_1))
    {
      q_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_94);
  p_94 = t;
  t = q_94;
  t = c_103(t);
  r_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, r_94), p_94);
  return(t);
}
ATerm _2_0 (ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,z_94 = NULL,a_95 = NULL;
  a_95 = t;
  if(match_cons(t, sym__2))
    {
      w_94 = ATgetArgument(t, 0);
      x_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_95);
  v_94 = t;
  t = w_94;
  t = e_98(t);
  y_94 = t;
  t = x_94;
  t = f_98(t);
  z_94 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, y_94, z_94), v_94);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm r_137 (ATerm), ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL,f_95 = NULL;
  if(match_cons(t, sym__2))
    {
      d_95 = ATgetArgument(t, 0);
      e_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_95, term_v_56);
  t = open_stream_0_0(t);
  f_95 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_95, e_95);
  t = r_137(t);
  t = fclose_0_0(t);
  t = e_95;
  return(t);
}
ATerm f_16 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm g_16 (ATerm t)
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_56 = ATgetArgument(t, 0);
      if(match_cons(w_56, sym_Stream_1))
        {
          k_95 = ATgetArgument(w_56, 0);
        }
      else
        _fail(t);
      l_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(k_95, l_95);
  m_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_95);
  return(t);
}
ATerm i_16 (ATerm t)
{
  ATerm n_95 = NULL,o_95 = NULL,p_95 = NULL,q_95 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_56 = ATgetArgument(t, 0);
      if(match_cons(x_56, sym_Stream_1))
        {
          n_95 = ATgetArgument(x_56, 0);
        }
      else
        _fail(t);
      o_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(n_95, o_95);
  p_95 = t;
  t = SSL_fputc((ATerm)ATmakeInt(10), p_95);
  q_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_95);
  return(t);
}
ATerm c_16 (ATerm t)
{
  t = fetch_1_0(f_16, t);
  return(t);
}
ATerm e_16 (ATerm t)
{
  t = WriteToFile_1_0(g_16, t);
  return(t);
}
ATerm h_16 (ATerm t)
{
  t = WriteToFile_1_0(i_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL;
  i_95 = t;
  {
    ATerm z_15 (ATerm t)
    {
      ATerm y_56 = t;
      int z_56 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((j_95 != NULL) && (j_95 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_95 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(a_16, t);
          ;
          LocalPopChoice(z_56);
        }
      else
        {
          t = y_56;
          t = term_a_57;
          if(((j_95 != NULL) && (j_95 != t)))
            _fail(t);
          else
            j_95 = t;
        }
      return(t);
    }
    t = _2_0(z_15, _id, t);
    t = i_95;
    {
      ATerm b_16 (ATerm t)
      {
        ATerm x_18 = NULL;
        x_18 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_95), x_18);
        return(t);
      }
      t = _2_0(_id, b_16, t);
      {
        ATerm b_57 = t;
        int c_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(c_16, e_16, t);
            ;
            LocalPopChoice(c_57);
          }
        else
          {
            t = b_57;
            t = _2_0(_id, h_16, t);
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
ATerm apply_strategy_1_0 (ATerm d_139 (ATerm), ATerm t)
{
  ATerm r_95 = NULL,s_95 = NULL,t_95 = NULL,u_95 = NULL,v_95 = NULL;
  r_95 = t;
  t = dtime_0_0(t);
  t = r_95;
  t = d_139(t);
  s_95 = t;
  t = dtime_0_0(t);
  t_95 = t;
  t = s_95;
  if(match_cons(t, sym__2))
    {
      u_95 = ATgetArgument(t, 0);
      v_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_95), (ATerm) ATmakeAppl(sym_Runtime_1, t_95)), v_95);
  return(t);
}
ATerm k_96 (ATerm d_96, ATerm t)
{
  t = SSL_fclose(d_96);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL;
  i_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_96 = ATgetArgument(t, 0);
      {
        ATerm d_57 = t;
        int e_57 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_96);
            ;
            LocalPopChoice(e_57);
          }
        else
          {
            t = d_57;
            t = k_96(i_96, t);
          }
      }
    }
  else
    {
      t = k_96(i_96, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_96 = NULL;
  t = SSL_stdin_stream();
  l_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_96);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_96 = NULL;
  t = SSL_stdout_stream();
  m_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_96);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_96 = NULL;
  t = SSL_stderr_stream();
  n_96 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_96);
  return(t);
}
ATerm j_16 (ATerm t)
{
  ATerm v_96 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      v_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_96;
  return(t);
}
ATerm l_16 (ATerm t)
{
  ATerm z_96 = NULL;
  z_96 = t;
  t = SSL_is_string(z_96);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_57 = ATgetArgument(t, 0);
      ATerm g_57 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_57 = t;
    int i_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_19 = NULL,u_19 = NULL;
        t_19 = t;
        t = SSL_explode_term(t_19);
        if(match_cons(t, sym__2))
          {
            ATerm j_57 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_57) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_57 = ATgetArgument(t, 1);
              if(((ATgetType(k_57) == AT_LIST) && !(ATisEmpty(k_57))))
                {
                  u_19 = ATgetFirst((ATermList) k_57);
                  {
                    ATerm l_57 = (ATerm) ATgetNext((ATermList) k_57);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_19;
        if(match_cons(t, sym_stderr_0))
          {
            t = u_19;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = u_19;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = u_19;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_57);
      }
    else
      {
        t = h_57;
        {
          ATerm n_57 = t;
          int r_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_96 = NULL,t_96 = NULL,u_96 = NULL;
              t = _2_0(j_16, _id, t);
              if(match_cons(t, sym__2))
                {
                  s_96 = ATgetArgument(t, 0);
                  t_96 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(s_96, t_96);
              u_96 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, u_96);
              ;
              LocalPopChoice(r_57);
            }
          else
            {
              t = n_57;
              {
                ATerm w_96 = NULL,x_96 = NULL,y_96 = NULL;
                t = _2_0(l_16, _id, t);
                if(match_cons(t, sym__2))
                  {
                    w_96 = ATgetArgument(t, 0);
                    x_96 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(w_96, x_96);
                y_96 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, y_96);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_97 = NULL,b_97 = NULL,c_97 = NULL;
  ATerm s_57 = t;
  int t_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_97 = NULL;
      d_97 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_97, term_u_57);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_57);
    }
  else
    {
      t = s_57;
      {
        ATerm v_19 = NULL;
        v_19 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, v_19), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = v_19;
        _fail(t);
      }
    }
  a_97 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_97 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(c_97);
  b_97 = t;
  t = a_97;
  t = fclose_0_0(t);
  t = b_97;
  return(t);
}
ATerm fetch_1_0 (ATerm k_122 (ATerm), ATerm t)
{
  ATerm i_97 (ATerm t)
  {
    ATerm v_57 = t;
    int w_57 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(k_122, _id, t);
        ;
        LocalPopChoice(w_57);
      }
    else
      {
        t = v_57;
        t = Cons_2_0(_id, i_97, t);
      }
    return(t);
  }
  t = i_97(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_57 = t;
  int y_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(y_57);
    }
  else
    {
      t = x_57;
      {
        ATerm s_97 = NULL,t_97 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_97 = ATgetFirst((ATermList) t);
            t_97 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_97;
        {
          ATerm m_16 (ATerm t)
          {
            t = t_97;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_16, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm q_122 (ATerm), ATerm t)
{
  ATerm g_98 (ATerm t)
  {
    ATerm z_57 = t;
    int a_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, g_98, t);
        ;
        LocalPopChoice(a_58);
      }
    else
      {
        t = z_57;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = q_122(t);
      }
    return(t);
  }
  t = g_98(t);
  return(t);
}
ATerm o_16 (ATerm t)
{
  ATerm j_98 = NULL;
  j_98 = t;
  t = SSL_explode_string(j_98);
  return(t);
}
ATerm p_16 (ATerm t)
{
  ATerm k_98 = NULL;
  k_98 = t;
  t = SSL_explode_string(k_98);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm i_98 = NULL;
  t = _2_0(o_16, p_16, t);
  {
    ATerm b_58 = t;
    int c_58 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_98 = NULL,n_98 = NULL;
        if(match_cons(t, sym__2))
          {
            m_98 = ATgetArgument(t, 0);
            n_98 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_98;
        {
          ATerm s_16 (ATerm t)
          {
            t = n_98;
            return(t);
          }
          t = at_end_1_0(s_16, t);
        }
        ;
        LocalPopChoice(c_58);
      }
    else
      {
        t = b_58;
        {
          ATerm g_20 = NULL,h_20 = NULL;
          g_20 = t;
          t = SSL_explode_term(g_20);
          if(match_cons(t, sym__2))
            {
              ATerm d_58 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) d_58) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              h_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_20;
          t = concat_0_0(t);
        }
      }
    i_98 = t;
    t = SSL_implode_string(i_98);
  }
  return(t);
}
ATerm t_16 (ATerm t)
{
  ATerm e_58 = t;
  int f_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(f_58);
    }
  else
    {
      t = e_58;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm g_58 = t;
  int h_58 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_98 = NULL;
      x_98 = t;
      t = SSL_is_string(x_98);
      ;
      LocalPopChoice(h_58);
    }
  else
    {
      t = g_58;
      {
        ATerm i_58 = t;
        int m_58 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_16, t);
            ;
            LocalPopChoice(m_58);
          }
        else
          {
            t = i_58;
            {
              ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL;
              b_99 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_99 = ATgetArgument(t, 0);
                  t = c_99;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_99 = ATgetArgument(t, 0);
                      t = c_99;
                      {
                        ATerm n_58 = t;
                        int p_58 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_99);
                            {
                              ATerm s_58 = t;
                              int t_58 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm k_21 = NULL;
                                  t = eval_config_0_0(t);
                                  k_21 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), c_99, k_21);
                                  t = k_21;
                                  ;
                                  LocalPopChoice(t_58);
                                }
                              else
                                {
                                  t = s_58;
                                }
                            }
                            ;
                            LocalPopChoice(p_58);
                          }
                        else
                          {
                            t = n_58;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, c_99), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = c_99;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_99 = NULL,i_99 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_99 = ATgetArgument(t, 0);
                          d_99 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_99;
                      t = eval_config_0_0(t);
                      h_99 = t;
                      t = d_99;
                      t = eval_config_0_0(t);
                      i_99 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_99, i_99);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm v_16 (ATerm t)
{
  ATerm o_99 = NULL;
  o_99 = t;
  if(match_string(t, "-k"))
    {
      t = o_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_99;
    }
  return(t);
}
ATerm w_16 (ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL;
  p_99 = t;
  t = SSL_string_to_int(p_99);
  q_99 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), q_99);
  t = p_99;
  return(t);
}
ATerm x_16 (ATerm t)
{
  t = term_u_58;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_16, w_16, x_16, t);
  return(t);
}
ATerm y_16 (ATerm t)
{
  ATerm s_99 = NULL;
  s_99 = t;
  if(match_string(t, "-S"))
    {
      t = s_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_99;
    }
  return(t);
}
ATerm z_16 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_w_58;
  return(t);
}
ATerm c_17 (ATerm t)
{
  t = term_x_58;
  return(t);
}
ATerm d_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_17 (ATerm t)
{
  ATerm t_99 = NULL,u_99 = NULL;
  t_99 = t;
  t = SSL_string_to_int(t_99);
  u_99 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), u_99);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_99);
  return(t);
}
ATerm f_17 (ATerm t)
{
  t = term_y_58;
  return(t);
}
ATerm g_17 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_17 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_58;
  return(t);
}
ATerm i_17 (ATerm t)
{
  t = term_a_59;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_59 = t;
  int c_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_16, z_16, c_17, t);
      ;
      LocalPopChoice(c_59);
    }
  else
    {
      t = b_59;
      {
        ATerm d_59 = t;
        int e_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(d_17, e_17, f_17, t);
            ;
            LocalPopChoice(e_59);
          }
        else
          {
            t = d_59;
            t = Option_3_0(g_17, h_17, i_17, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm x_99 = NULL,y_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_99 = NULL;
      t = term_o_20;
      t = d_0(t);
      z_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_59, term_g_59, z_99);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm c_100 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_99 = ATgetFirst((ATermList) t);
          y_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_99;
      t = a_0(t);
      t = term_o_20;
      t = b_0(t);
      c_100 = t;
      t = (ATerm) ATinsert(CheckATermList(y_99), c_100);
    }
  return(t);
}
ATerm j_17 (ATerm t)
{
  ATerm e_100 = NULL;
  e_100 = t;
  if(match_string(t, "-o"))
    {
      t = e_100;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_100;
    }
  return(t);
}
ATerm k_17 (ATerm t)
{
  ATerm f_100 = NULL;
  f_100 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), f_100);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_100);
  return(t);
}
ATerm l_17 (ATerm t)
{
  t = term_i_59;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(j_17, k_17, l_17, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm i_100 = NULL,j_100 = NULL,k_100 = NULL,l_100 = NULL;
  if(match_cons(t, sym__3))
    {
      i_100 = ATgetArgument(t, 0);
      j_100 = ATgetArgument(t, 1);
      k_100 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_100, j_100);
  {
    ATerm l_59 = t;
    int m_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_59 = ATgetArgument(t, 0);
            ATerm p_59 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(i_100, j_100);
        ;
        LocalPopChoice(m_59);
      }
    else
      {
        t = l_59;
        t = (ATerm) ATempty;
      }
    l_100 = t;
    t = SSL_table_put(i_100, j_100, (ATerm) ATinsert(CheckATermList(l_100), k_100));
    t = (ATerm) ATmakeAppl(sym__3, i_100, j_100, k_100);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL,w_100 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_100 = NULL;
      t = term_o_20;
      t = m_0(t);
      x_100 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_59, term_g_59, x_100);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm b_101 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_100 = ATgetFirst((ATermList) t);
          u_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_100;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_100 = ATgetFirst((ATermList) t);
          w_100 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_100;
      t = i_0(t);
      t = v_100;
      t = k_0(t);
      b_101 = t;
      t = (ATerm) ATinsert(CheckATermList(w_100), b_101);
    }
  return(t);
}
ATerm n_17 (ATerm t)
{
  ATerm d_101 = NULL;
  d_101 = t;
  if(match_string(t, "-i"))
    {
      t = d_101;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_101;
    }
  return(t);
}
ATerm r_17 (ATerm t)
{
  ATerm e_101 = NULL;
  e_101 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), e_101);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_101);
  return(t);
}
ATerm t_17 (ATerm t)
{
  t = term_q_59;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_17, r_17, t_17, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_101 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_20;
  t = whoami_0_0(t);
  f_101 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), f_101));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm r_59 = t;
    int s_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_21 = NULL;
        t = eval_config_0_0(t);
        x_21 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_21);
        t = x_21;
        ;
        LocalPopChoice(s_59);
      }
    else
      {
        t = r_59;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm q_128 (ATerm), ATerm r_128 (ATerm), ATerm t)
{
  ATerm t_59 = t;
  int u_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_128(t);
      ;
      LocalPopChoice(u_59);
    }
  else
    {
      t = t_59;
      {
        ATerm i_101 = NULL,j_101 = NULL,m_101 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_101 = ATgetFirst((ATermList) t);
            j_101 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = j_101;
        t = foldr_2_0(q_128, r_128, t);
        m_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_101, m_101);
        t = r_128(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_17 (ATerm t)
{
  t = term_v_58;
  return(t);
}
ATerm w_17 (ATerm t)
{
  ATerm l_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_59 = t;
    int y_59 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(l_22, r_22);
        ;
        LocalPopChoice(y_59);
      }
    else
      {
        t = x_59;
        t = SSL_addr(l_22, r_22);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_101 = NULL,y_21 = NULL,z_21 = NULL;
  t = times_0_0(t);
  y_21 = t;
  t = SSL_explode_term(y_21);
  if(match_cons(t, sym__2))
    {
      ATerm a_60 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_21;
  t = foldr_2_0(v_17, w_17, t);
  p_101 = t;
  t = SSL_TicksToSeconds(p_101);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_102 = NULL,b_102 = NULL,c_102 = NULL;
  a_102 = t;
  if(match_cons(t, sym__2))
    {
      b_102 = ATgetArgument(t, 0);
      c_102 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm c_60 = t;
    int d_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_102;
        if((b_102 != t))
          {
            _fail(t);
          }
        t = a_102;
        ;
        LocalPopChoice(d_60);
      }
    else
      {
        t = c_60;
        t = a_102;
        {
          ATerm e_60 = t;
          int f_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_102, c_102);
              ;
              LocalPopChoice(f_60);
            }
          else
            {
              t = e_60;
              t = SSL_gtr(b_102, c_102);
            }
          t = (ATerm) ATmakeAppl(sym__2, b_102, c_102);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_147 (ATerm), ATerm t)
{
  ATerm g_60 = t;
  int h_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_102 = NULL,h_102 = NULL;
      f_102 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm i_60 = t;
        int j_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_23 = NULL;
            t = eval_config_0_0(t);
            e_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), e_23);
            t = e_23;
            ;
            LocalPopChoice(j_60);
          }
        else
          {
            t = i_60;
          }
        h_102 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_102, term_m_60);
        t = geq_0_0(t);
        t = f_102;
        t = j_147(t);
      }
      ;
      LocalPopChoice(h_60);
    }
  else
    {
      t = g_60;
    }
  return(t);
}
ATerm y_17 (ATerm t)
{
  ATerm j_102 = NULL,k_102 = NULL;
  t = run_time_0_0(t);
  j_102 = t;
  t = term_o_20;
  t = whoami_0_0(t);
  k_102 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), j_102), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), k_102));
  t = (ATerm) ATmakeAppl(sym__2, term_o_60, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_60), j_102), term_q_60), k_102));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(y_17, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_140 (ATerm), ATerm t)
{
  ATerm s_60 = t;
  int t_60 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm u_60 = t;
        int v_60 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_23 = NULL;
            t = eval_config_0_0(t);
            i_23 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), i_23);
            t = i_23;
            ;
            LocalPopChoice(v_60);
          }
        else
          {
            t = u_60;
          }
      }
      ;
      LocalPopChoice(t_60);
    }
  else
    {
      t = s_60;
      {
        ATerm z_17 (ATerm t)
        {
          ATerm w_60 = t;
          int x_60 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(x_60);
            }
          else
            {
              t = w_60;
              {
                ATerm y_60 = t;
                int z_60 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(z_60);
                  }
                else
                  {
                    t = y_60;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(z_17, t);
      }
    }
  t = b_140(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm m_102 = NULL,n_102 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_102 = ATgetFirst((ATermList) t);
      n_102 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_102 = NULL,s_102 = NULL;
        t = n_102;
        t = g_0(t);
        r_102 = t;
        t = m_102;
        t = f_0(t);
        s_102 = t;
        t = n_102;
        {
          ATerm d_18 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(r_102), s_102);
            return(t);
          }
          t = reverse_acc_2_0(f_0, d_18, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_20;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm v_102 = NULL,w_102 = NULL,z_102 = NULL,a_103 = NULL;
  a_103 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_102 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_103);
  v_102 = t;
  t = w_102;
  t = s_116(t);
  z_102 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_102), v_102);
  return(t);
}
ATerm h_18 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm m_18 (ATerm t)
{
  ATerm e_103 = NULL;
  e_103 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_103), term_a_61);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_61 = t;
  int c_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm d_61 = t;
        int e_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_24 = NULL;
            t = eval_config_0_0(t);
            x_24 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), x_24);
            t = x_24;
            ;
            LocalPopChoice(e_61);
          }
        else
          {
            t = d_61;
          }
      }
      ;
      LocalPopChoice(c_61);
    }
  else
    {
      t = b_61;
      {
        ATerm e_18 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(e_18, t);
      }
    }
  t = term_f_61;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, h_18, t);
  t = map_1_0(m_18, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_116 (ATerm), ATerm t)
{
  ATerm f_103 = NULL,g_103 = NULL,h_103 = NULL,i_103 = NULL;
  i_103 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_103 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_103);
  f_103 = t;
  t = g_103;
  t = t_116(t);
  h_103 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_103), f_103);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_103 = NULL,n_103 = NULL;
  m_103 = t;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_103;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_61 = ATgetFirst((ATermList) t);
                ATerm j_61 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_103;
          }
        ;
        LocalPopChoice(h_61);
      }
    else
      {
        t = g_61;
        t = (ATerm) ATinsert(ATempty, m_103);
      }
    n_103 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_103);
    t = m_103;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm k_61 = t;
    int l_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_25 = NULL;
        t = eval_config_0_0(t);
        h_25 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), h_25);
        t = h_25;
        ;
        LocalPopChoice(l_61);
      }
    else
      {
        t = k_61;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm n_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_18 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_o_61;
  return(t);
}
ATerm q_18 (ATerm t)
{
  t = term_p_61;
  return(t);
}
ATerm r_18 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm v_18 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_q_61;
  return(t);
}
ATerm w_18 (ATerm t)
{
  t = term_r_61;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_61 = t;
  int t_61 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(n_18, o_18, q_18, t);
      ;
      LocalPopChoice(t_61);
    }
  else
    {
      t = s_61;
      t = Option_3_0(r_18, v_18, w_18, t);
    }
  return(t);
}
ATerm y_18 (ATerm t)
{
  ATerm t_103 = NULL;
  t_103 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_103);
  t = (ATerm) ATmakeAppl(sym_Program_1, t_103);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_143 (ATerm), ATerm t)
{
  ATerm s_103 = NULL;
  s_103 = t;
  {
    ATerm u_61 = t;
    int v_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_61;
        t = g_143(t);
        ;
        LocalPopChoice(v_61);
      }
    else
      {
        t = u_61;
      }
    t = s_103;
    {
      ATerm z_18 (ATerm t)
      {
        ATerm x_61 = t;
        int y_61 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_61 = t;
            int a_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_62);
              }
            else
              {
                t = z_61;
                t = g_143(t);
                t = Cons_2_0(_id, z_18, t);
              }
            ;
            LocalPopChoice(y_61);
          }
        else
          {
            t = x_61;
            {
              ATerm w_103 = NULL,x_103 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_103 = ATgetFirst((ATermList) t);
                  x_103 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_103), (ATerm) ATmakeAppl(sym_Undefined_1, w_103));
            }
          }
        return(t);
      }
      t = Cons_2_0(y_18, z_18, t);
    }
  }
  return(t);
}
ATerm b_19 (ATerm t)
{
  ATerm p_104 = NULL;
  p_104 = t;
  if(match_string(t, "--help"))
    {
      t = p_104;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = p_104;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = p_104;
        }
    }
  return(t);
}
ATerm f_19 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_62;
  return(t);
}
ATerm h_19 (ATerm t)
{
  t = term_f_62;
  return(t);
}
ATerm i_19 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm i_104 = NULL,l_104 = NULL,o_104 = NULL;
  i_104 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_104;
  {
    ATerm a_19 (ATerm t)
    {
      ATerm g_62 = t;
      int h_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = f_143(t);
          ;
          LocalPopChoice(h_62);
        }
      else
        {
          t = g_62;
          {
            ATerm i_62 = t;
            int j_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(b_19, f_19, h_19, t);
                ;
                LocalPopChoice(j_62);
              }
            else
              {
                t = i_62;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(a_19, t);
    {
      ATerm k_62 = t;
      int l_62 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_104 = NULL;
          u_104 = t;
          {
            ATerm m_62 = t;
            int n_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_104;
                {
                  ATerm o_62 = t;
                  int p_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm q_62 = t;
                        int r_62 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm w_26 = NULL;
                            t = eval_config_0_0(t);
                            w_26 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), w_26);
                            t = w_26;
                            ;
                            LocalPopChoice(r_62);
                          }
                        else
                          {
                            t = q_62;
                          }
                      }
                      ;
                      LocalPopChoice(p_62);
                    }
                  else
                    {
                      t = o_62;
                      t = fetch_1_0(i_19, t);
                    }
                  t = u_104;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(n_62);
              }
            else
              {
                t = m_62;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm s_62 = t;
                  int t_62 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm m_28 = NULL;
                      t = eval_config_0_0(t);
                      m_28 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), m_28);
                      t = m_28;
                      ;
                      LocalPopChoice(t_62);
                    }
                  else
                    {
                      t = s_62;
                    }
                  t = u_104;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(l_62);
        }
      else
        {
          t = k_62;
          {
            ATerm u_62 = t;
            int v_62 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_19 (ATerm t)
                {
                  ATerm n_19 (ATerm t)
                  {
                    if(((l_104 != NULL) && (l_104 != t)))
                      _fail(t);
                    else
                      l_104 = t;
                    return(t);
                  }
                  t = Undefined_1_0(n_19, t);
                  return(t);
                }
                t = fetch_1_0(j_19, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_104)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_o_60, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_104)), term_w_62));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_62);
              }
            else
              {
                t = u_62;
              }
          }
        }
      o_104 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = o_104;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm g_140 (ATerm), ATerm t)
{
  ATerm a_105 = NULL;
  t = parse_options_1_0(d_140, t);
  a_105 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), a_105);
  t = a_105;
  t = f_140(t);
  {
    ATerm x_62 = t;
    int y_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_140, t);
        ;
        LocalPopChoice(y_62);
      }
    else
      {
        t = x_62;
        {
          ATerm z_62 = t;
          int a_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(a_63);
            }
          else
            {
              t = z_62;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm r_19 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm s_19 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_b_63;
  return(t);
}
ATerm w_19 (ATerm t)
{
  t = term_c_63;
  return(t);
}
ATerm x_19 (ATerm t)
{
  ATerm b_105 = NULL,c_105 = NULL;
  b_105 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm d_63 = t;
    int e_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_28 = NULL;
        t = eval_config_0_0(t);
        q_28 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), q_28);
        t = q_28;
        ;
        LocalPopChoice(e_63);
      }
    else
      {
        t = d_63;
      }
    c_105 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, c_105));
    t = b_105;
  }
  return(t);
}
ATerm p_19 (ATerm t)
{
  t = if_verbose2_1_0(x_19, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm o_139 (ATerm), ATerm t)
{
  ATerm o_19 (ATerm t)
  {
    ATerm f_63 = t;
    int g_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_139(t);
        ;
        LocalPopChoice(g_63);
      }
    else
      {
        t = f_63;
        {
          ATerm i_63 = t;
          int k_63 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(k_63);
            }
          else
            {
              t = i_63;
              {
                ATerm l_63 = t;
                int m_63 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(m_63);
                  }
                else
                  {
                    t = l_63;
                    {
                      ATerm n_63 = t;
                      int o_63 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_19, s_19, w_19, t);
                          ;
                          LocalPopChoice(o_63);
                        }
                      else
                        {
                          t = n_63;
                          {
                            ATerm p_63 = t;
                            int q_63 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(q_63);
                              }
                            else
                              {
                                t = p_63;
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
  ATerm q_19 (ATerm t)
  {
    ATerm d_105 = NULL,e_105 = NULL,j_29 = NULL;
    d_105 = t;
    {
      ATerm r_63 = t;
      int s_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_20 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((e_105 != NULL) && (e_105 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  e_105 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(b_20, t);
          ;
          LocalPopChoice(s_63);
        }
      else
        {
          t = r_63;
          t = term_t_63;
          e_105 = t;
        }
      t = not_null(e_105);
      t = ReadFromFile_0_0(t);
      j_29 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_105, j_29);
      t = apply_strategy_1_0(m_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(o_19, o_139, p_19, q_19, t);
  return(t);
}
ATerm l_20 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_20 (ATerm t)
{
  t = map_1_0(declare_inline_rule_0_0, t);
  return(t);
}
ATerm n_20 (ATerm t)
{
  ATerm f_105 = NULL;
  f_105 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue))));
  t = f_105;
  return(t);
}
ATerm k_20 (ATerm t)
{
  t = Strategies_1_0(m_20, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm c_20 (ATerm t)
  {
    ATerm d_20 (ATerm t)
    {
      ATerm u_63 = t;
      int v_63 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 (ATerm t)
          {
            ATerm i_20 (ATerm t)
            {
              t = Signature_1_0(_id, t);
              return(t);
            }
            ATerm j_20 (ATerm t)
            {
              t = Cons_2_0(k_20, l_20, t);
              return(t);
            }
            t = Cons_2_0(i_20, j_20, t);
            return(t);
          }
          t = Specification_1_0(f_20, t);
          t = check_library_definitions_0_0(t);
          t = alltd_1_0(innermost_fusion_0_0, t);
          ;
          LocalPopChoice(v_63);
        }
      else
        {
          t = u_63;
          t = if_verbose2_1_0(n_20, t);
        }
      return(t);
    }
    t = _2_0(_id, d_20, t);
    return(t);
  }
  t = iowrap_3_0(c_20, _fail, default_usage_0_0, t);
  return(t);
}
