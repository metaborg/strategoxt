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
ATerm term_x_47;
ATerm term_k_47;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_z_45;
ATerm term_y_45;
ATerm term_x_45;
ATerm term_e_45;
ATerm term_a_45;
ATerm term_m_44;
ATerm term_j_44;
ATerm term_e_44;
ATerm term_d_44;
ATerm term_a_44;
ATerm term_p_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_z_42;
ATerm term_w_42;
ATerm term_p_42;
ATerm term_n_42;
ATerm term_k_42;
ATerm term_h_42;
ATerm term_g_42;
ATerm term_f_42;
ATerm term_l_41;
ATerm term_k_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_k_40;
ATerm term_g_40;
ATerm term_e_40;
ATerm term_j_39;
ATerm term_d_39;
ATerm term_c_39;
ATerm term_v_38;
ATerm term_u_38;
ATerm term_t_38;
ATerm term_m_38;
ATerm term_i_38;
ATerm term_p_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_q_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_n_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_g_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_u_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_l_19;
ATerm term_k_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_z_18;
ATerm term_u_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_u_15;
ATerm term_o_15;
ATerm term_p_14;
ATerm term_c_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_v_13;
void init_constant_terms (void)
{
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_17);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_CallT_3, term_h_17, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_k_17, term_l_17);
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_17, term_m_17);
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_17, term_n_17);
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_17);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_z_18);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_j_17, term_l_17);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_i_17, term_e_19);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_k_19);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_19);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Defined_1, term_l_21);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_Defined_1, term_n_21);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_23);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(sym_Op_2, term_l_26, (ATerm) ATempty);
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(sym_ConstType_1, term_m_26);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_38));
  term_m_38 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_t_38));
  term_t_38 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_u_38));
  term_u_38 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_38);
  ATprotect(&(term_v_38));
  term_v_38 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_39));
  term_c_39 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_40));
  term_g_40 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_42));
  term_f_42 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_42));
  term_g_42 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_42);
  ATprotect(&(term_h_42));
  term_h_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_42));
  term_n_42 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_w_42));
  term_w_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_42));
  term_z_42 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_44));
  term_a_44 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_44));
  term_d_44 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_44));
  term_e_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_44));
  term_j_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_45));
  term_y_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_45));
  term_z_45 = (ATerm) ATmakeAppl(sym__3, term_x_45, term_y_45, term_i_38);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm say_1_0 (ATerm d_130 (ATerm), ATerm);
ATerm if_verbose2_1_0 (ATerm g_140 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm w_138 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm unzip_1_0 (ATerm m_117 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_122 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_122 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm BottomupOverConstructor_0_0 (ATerm);
ATerm SeqOverLChoiceR_0_0 (ATerm);
ATerm SeqOverChoiceR_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm q_110 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm f_126 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Build_1_0 (ATerm n_100 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm);
ATerm Match_1_0 (ATerm m_100 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm h_112 (ATerm), ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm t_111 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm);
ATerm downup_1_0 (ATerm r_110 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm genzip_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm);
ATerm zip_1_0 (ATerm h_117 (ATerm), ATerm);
ATerm SubsVar_2_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm h_136 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm spaste_1_0 (ATerm u_139 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm);
ATerm Let_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm e_100 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm q_139 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm c_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm);
ATerm crush_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_118 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm m_138 (ATerm), ATerm n_138 (ATerm), ATerm o_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm v_96 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm m_137 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm f_127 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm p_126 (ATerm), ATerm);
ATerm rename_4_0 (ATerm w_136 (ATerm (ATerm), ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_136 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm c_123 (ATerm), ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm a_123 (ATerm), ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm x_95 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm y_95 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm c_96 (ATerm), ATerm);
ATerm declare_inline_rules_0_0 (ATerm);
ATerm _2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm n_130 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm z_131 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm z_129 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm);
ATerm input_file_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm);
ATerm crush_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm f_140 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm x_132 (ATerm), ATerm);
ATerm map_1_0 (ATerm z_114 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm s_109 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm t_109 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm j_115 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm z_134 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm h_113 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm e_136 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_136 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm b_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm d_132 (ATerm), ATerm);
ATerm fusion_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm say_1_0 (ATerm d_130 (ATerm), ATerm t)
{
  ATerm g_3 = NULL,q_0 = NULL;
  g_3 = t;
  t = d_130(t);
  q_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, q_0));
  t = g_3;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm g_140 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm h_3 = NULL,i_3 = NULL;
    h_3 = t;
    t = term_v_13;
    t = get_config_0_0(t);
    i_3 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_3, term_w_13);
    t = geq_0_0(t);
    t = h_3;
    t = g_140(t);
    return(t);
  }
  t = try_1_0(o_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL;
  l_3 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      n_3 = ATgetArgument(t, 0);
      k_3 = ATgetArgument(t, 1);
      {
        ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
        t = l_3;
        t = new_0_0(t);
        q_3 = t;
        t = new_0_0(t);
        r_3 = t;
        t = new_0_0(t);
        s_3 = t;
        t = new_0_0(t);
        t_3 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, t_3), s_3), r_3), q_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, q_3), (ATerm) ATmakeAppl(sym_Var_1, s_3))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, n_3, (ATerm)ATmakeAppl(sym_Var_1, q_3), (ATerm) ATmakeAppl(sym_Var_1, r_3)), (ATerm) ATmakeAppl(sym_BAM_3, k_3, (ATerm)ATmakeAppl(sym_Var_1, s_3), (ATerm) ATmakeAppl(sym_Var_1, t_3)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, t_3)), (ATerm) ATmakeAppl(sym_Var_1, r_3))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          n_3 = ATgetArgument(t, 0);
          {
            ATerm w_3 = NULL,y_3 = NULL,a_4 = NULL,b_4 = NULL;
            t = l_3;
            t = new_0_0(t);
            w_3 = t;
            t = n_3;
            {
              ATerm r_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    y_3 = ATgetArgument(t, 0);
                    a_4 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, w_3);
                return(t);
              }
              t = oncetd_1_0(r_0, t);
              b_4 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, w_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_13, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_4)), not_null(y_3))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, w_3)), (ATerm) ATmakeAppl(sym_Build_1, b_4))));
            }
          }
        }
      else
        {
          ATerm e_4 = NULL,h_4 = NULL,j_4 = NULL,p_4 = NULL,q_4 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              n_3 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_3;
          t = new_0_0(t);
          e_4 = t;
          t = new_0_0(t);
          h_4 = t;
          t = n_3;
          {
            ATerm t_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  j_4 = ATgetArgument(t, 0);
                  p_4 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, e_4);
              return(t);
            }
            t = oncetd_1_0(t_0, t);
            q_4 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, q_4), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_4)), (ATerm) ATmakeAppl(sym_PrimT_3, term_y_13, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_4))))), (ATerm)ATmakeAppl(sym_Var_1, e_4), (ATerm) ATmakeAppl(sym_Op_2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_4)), not_null(j_4)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm z_4 = NULL,c_5 = NULL;
  z_4 = t;
  if(match_cons(t, sym_Match_1))
    {
      c_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL;
        t = z_4;
        t = new_0_0(t);
        f_5 = t;
        t = c_5;
        {
          ATerm u_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                h_5 = ATgetArgument(t, 0);
                g_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, f_5), h_5);
            return(t);
          }
          t = pat_td_1_0(u_0, t);
          j_5 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_5), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_c_14, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, f_5))), (ATerm) ATmakeAppl(sym_Match_1, not_null(g_5))))));
        }
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm d_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
              t = z_4;
              t = new_0_0(t);
              l_5 = t;
              t = c_5;
              {
                ATerm w_0 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      m_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_5);
                  return(t);
                }
                t = pat_td_1_0(w_0, t);
                n_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, n_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_5)), not_null(m_5))));
              }
              ;
              LocalPopChoice(f_14);
            }
          else
            {
              t = d_14;
              {
                ATerm q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
                t = z_4;
                t = new_0_0(t);
                q_5 = t;
                t = c_5;
                {
                  ATerm x_0 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        r_5 = ATgetArgument(t, 0);
                        s_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, q_5);
                    return(t);
                  }
                  t = pat_td_1_0(x_0, t);
                  t_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, t_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, q_5)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(s_5)), not_null(r_5)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm Mapp0_0_0 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,z_5 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      w_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5;
  {
    ATerm y_0 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm h_14 = ATgetArgument(t, 0);
          if(match_cons(h_14, sym_Match_1))
            {
              y_5 = ATgetArgument(h_14, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = y_5;
      return(t);
    }
    t = pat_td_1_0(y_0, t);
    z_5 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, z_5);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm i_14 = t;
  int j_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(j_14);
    }
  else
    {
      t = i_14;
      {
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_6 = NULL,g_6 = NULL,h_6 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                e_6 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = e_6;
            if(match_cons(t, sym_RootApp_1))
              {
                g_6 = ATgetArgument(t, 0);
                t = g_6;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    g_6 = ATgetArgument(t, 0);
                    h_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, g_6, h_6);
              }
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm m_6 = NULL,n_6 = NULL;
  m_6 = t;
  if(match_cons(t, sym_Build_1))
    {
      n_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm m_14 = t;
    int n_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 = NULL,y_6 = NULL,c_7 = NULL,d_7 = NULL;
        t = m_6;
        t = new_0_0(t);
        r_6 = t;
        t = n_6;
        {
          ATerm z_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                y_6 = ATgetArgument(t, 0);
                c_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, r_6);
            return(t);
          }
          t = pat_td_1_0(z_0, t);
          d_7 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_6), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_p_14, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_7)), not_null(y_6))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_6)))), (ATerm) ATmakeAppl(sym_Build_1, d_7)));
        }
        ;
        LocalPopChoice(n_14);
      }
    else
      {
        t = m_14;
        {
          ATerm r_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_8 = NULL,g_8 = NULL,n_8 = NULL;
              t = m_6;
              t = new_0_0(t);
              f_8 = t;
              t = n_6;
              {
                ATerm d_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      g_8 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, f_8);
                  return(t);
                }
                t = pat_td_1_0(d_1, t);
                n_8 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, f_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(g_8), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, f_8)))), (ATerm) ATmakeAppl(sym_Build_1, n_8)));
              }
              ;
              LocalPopChoice(s_14);
            }
          else
            {
              t = r_14;
              {
                ATerm p_8 = NULL,q_8 = NULL,t_8 = NULL,u_8 = NULL;
                t = m_6;
                t = new_0_0(t);
                p_8 = t;
                t = n_6;
                {
                  ATerm e_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        q_8 = ATgetArgument(t, 0);
                        t_8 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, p_8);
                    return(t);
                  }
                  t = pat_td_1_0(e_1, t);
                  u_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_8), not_null(t_8), (ATerm) ATmakeAppl(sym_Var_1, p_8))), (ATerm) ATmakeAppl(sym_Build_1, u_8)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,f_9 = NULL,g_9 = NULL;
  g_9 = t;
  if(match_cons(t, sym_As_2))
    {
      a_9 = ATgetArgument(t, 0);
      b_9 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_9);
  z_8 = t;
  t = a_9;
  t = m_97(t);
  c_9 = t;
  t = b_9;
  t = n_97(t);
  f_9 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, c_9, f_9), z_8);
  return(t);
}
ATerm PrimT_3_0 (ATerm l_101 (ATerm), ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  ATerm o_9 = NULL,x_10 = NULL,s_11 = NULL,u_11 = NULL,w_11 = NULL,y_11 = NULL,q_12 = NULL,s_12 = NULL;
  s_12 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      x_10 = ATgetArgument(t, 0);
      s_11 = ATgetArgument(t, 1);
      u_11 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_12);
  o_9 = t;
  t = x_10;
  t = l_101(t);
  w_11 = t;
  t = s_11;
  t = m_101(t);
  y_11 = t;
  t = u_11;
  t = n_101(t);
  q_12 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, w_11, y_11, q_12), o_9);
  return(t);
}
ATerm Explode_2_0 (ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm t)
{
  ATerm e_14 = NULL,g_14 = NULL,o_14 = NULL,q_14 = NULL,x_14 = NULL,e_15 = NULL;
  e_15 = t;
  if(match_cons(t, sym_Explode_2))
    {
      g_14 = ATgetArgument(t, 0);
      o_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_15);
  e_14 = t;
  t = g_14;
  t = f_97(t);
  q_14 = t;
  t = o_14;
  t = g_97(t);
  x_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, q_14, x_14), e_14);
  return(t);
}
ATerm Op_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm t_16 = NULL,u_16 = NULL,z_16 = NULL,a_17 = NULL,f_17 = NULL,g_17 = NULL;
  g_17 = t;
  if(match_cons(t, sym_Op_2))
    {
      u_16 = ATgetArgument(t, 0);
      z_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_17);
  t_16 = t;
  t = u_16;
  t = b_97(t);
  a_17 = t;
  t = z_16;
  t = c_97(t);
  f_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, a_17, f_17), t_16);
  return(t);
}
ATerm pat_td_1_0 (ATerm w_138 (ATerm), ATerm t)
{
  ATerm t_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_138(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = t_14;
      {
        ATerm v_14 = t;
        int w_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                t = pat_td_1_0(w_138, t);
                return(t);
              }
              t = fetch_1_0(g_1, t);
              return(t);
            }
            t = Op_2_0(_id, f_1, t);
            ;
            LocalPopChoice(w_14);
          }
        else
          {
            t = v_14;
            {
              ATerm y_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_1 (ATerm t)
                  {
                    t = pat_td_1_0(w_138, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, h_1, t);
                  ;
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = y_14;
                  {
                    ATerm a_15 = t;
                    int b_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm l_1 (ATerm t)
                        {
                          t = pat_td_1_0(w_138, t);
                          return(t);
                        }
                        t = Explode_2_0(l_1, _id, t);
                        ;
                        LocalPopChoice(b_15);
                      }
                    else
                      {
                        t = a_15;
                        {
                          ATerm c_15 = t;
                          int d_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm m_1 (ATerm t)
                              {
                                ATerm n_1 (ATerm t)
                                {
                                  t = pat_td_1_0(w_138, t);
                                  return(t);
                                }
                                t = fetch_1_0(n_1, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, m_1, t);
                              ;
                              LocalPopChoice(d_15);
                            }
                          else
                            {
                              t = c_15;
                              {
                                ATerm o_1 (ATerm t)
                                {
                                  t = pat_td_1_0(w_138, t);
                                  return(t);
                                }
                                t = As_2_0(_id, o_1, t);
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
ATerm Bapp0_0_0 (ATerm t)
{
  ATerm q_17 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      q_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_18 = NULL,h_18 = NULL;
        t = q_17;
        {
          ATerm p_1 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm h_15 = ATgetArgument(t, 0);
                if(match_cons(h_15, sym_Build_1))
                  {
                    c_18 = ATgetArgument(h_15, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = c_18;
            return(t);
          }
          t = pat_td_1_0(p_1, t);
          h_18 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, h_18);
        }
        ;
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm j_18 = NULL,k_18 = NULL;
          t = q_17;
          {
            ATerm q_1 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  if(match_cons(i_15, sym_Build_1))
                    {
                      j_18 = ATgetArgument(i_15, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm j_15 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = j_18;
              return(t);
            }
            t = pat_td_1_0(q_1, t);
            k_18 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, k_18);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(l_15);
    }
  else
    {
      t = k_15;
      {
        ATerm m_15 = t;
        int n_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_19 = NULL,i_19 = NULL,m_19 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                a_19 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_19;
            if(match_cons(t, sym_RootApp_1))
              {
                i_19 = ATgetArgument(t, 0);
                t = i_19;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    i_19 = ATgetArgument(t, 0);
                    m_19 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, m_19), i_19);
              }
            ;
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1_0 (ATerm m_117 (ATerm), ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_o_15;
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm g_20 = NULL,k_20 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_20 = ATgetFirst((ATermList) t);
        k_20 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, g_20, k_20);
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm p_15 = ATgetArgument(t, 0);
        if(match_cons(p_15, sym__2))
          {
            m_20 = ATgetArgument(p_15, 0);
            o_20 = ATgetArgument(p_15, 1);
          }
        else
          _fail(t);
        {
          ATerm q_15 = ATgetArgument(t, 1);
          if(match_cons(q_15, sym__2))
            {
              n_20 = ATgetArgument(q_15, 0);
              p_20 = ATgetArgument(q_15, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_20), m_20), (ATerm) ATinsert(CheckATermList(p_20), o_20));
    return(t);
  }
  t = genzip_4_0(r_1, v_1, w_1, m_117, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm b_21 (ATerm s_20, ATerm t)
  {
    ATerm u_20 = NULL;
    t = s_20;
    {
      ATerm r_15 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = r_15;
        }
      t = new_0_0(t);
      u_20 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, u_20), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, s_20), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_20)))), (ATerm) ATmakeAppl(sym_Var_1, u_20)));
    }
    return(t);
  }
  ATerm v_20 = NULL,w_20 = NULL;
  v_20 = t;
  if(match_cons(t, sym_Var_1))
    {
      w_20 = ATgetArgument(t, 0);
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_21(v_20, t);
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_15, (ATerm) ATmakeAppl(sym_Var_1, w_20)));
          }
      }
    }
  else
    {
      t = b_21(v_20, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL,c_22 = NULL;
  a_22 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
      z_21 = ATgetArgument(t, 2);
      {
        ATerm a_1 = NULL,b_1 = NULL,c_1 = NULL;
        t = z_21;
        {
          ATerm x_1 (ATerm t)
          {
            ATerm v_15 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = v_15;
              }
            return(t);
          }
          t = fetch_1_0(x_1, t);
          t = z_21;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm y_1 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, y_1, t);
            if(match_cons(t, sym__2))
              {
                a_1 = ATgetArgument(t, 0);
                {
                  ATerm w_15 = ATgetArgument(t, 1);
                  if(match_cons(w_15, sym__2))
                    {
                      b_1 = ATgetArgument(w_15, 0);
                      c_1 = ATgetArgument(w_15, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, a_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_1), (ATerm) ATmakeAppl(sym_PrimT_3, b_22, c_22, c_1)));
          }
        }
      }
    }
  else
    {
      ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          b_22 = ATgetArgument(t, 0);
          c_22 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_22;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm x_15 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = x_15;
            }
          return(t);
        }
        t = fetch_1_0(z_1, t);
        t = c_22;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm a_2 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, a_2, t);
          if(match_cons(t, sym__2))
            {
              i_1 = ATgetArgument(t, 0);
              {
                ATerm y_15 = ATgetArgument(t, 1);
                if(match_cons(y_15, sym__2))
                  {
                    j_1 = ATgetArgument(y_15, 0);
                    k_1 = ATgetArgument(y_15, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, i_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_1), (ATerm) ATmakeAppl(sym_PrimT_3, b_22, (ATerm)ATempty, k_1)));
        }
      }
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm z_15 = t;
  if((PushChoice() == 0))
    {
      ATerm b_2 (ATerm t)
      {
        ATerm a_16 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = a_16;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(b_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_15;
    }
  return(t);
}
ATerm App_2_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm t)
{
  ATerm f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL;
  k_22 = t;
  if(match_cons(t, sym_App_2))
    {
      g_22 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_22);
  f_22 = t;
  t = g_22;
  t = j_97(t);
  i_22 = t;
  t = h_22;
  t = k_97(t);
  j_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, i_22, j_22), f_22);
  return(t);
}
ATerm Con_3_0 (ATerm v_97 (ATerm), ATerm w_97 (ATerm), ATerm x_97 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL;
  v_22 = t;
  if(match_cons(t, sym_Con_3))
    {
      p_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
      r_22 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_22);
  o_22 = t;
  t = p_22;
  t = v_97(t);
  s_22 = t;
  t = q_22;
  t = w_97(t);
  t_22 = t;
  t = r_22;
  t = x_97(t);
  u_22 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, s_22, t_22, u_22), o_22);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm c_16 = t;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm d_16 = t;
        int e_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(e_16);
          }
        else
          {
            t = d_16;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(h_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_16;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm c_23 = NULL,d_23 = NULL,e_23 = NULL,f_23 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      c_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_23;
  if(match_cons(t, sym_StratRule_3))
    {
      d_23 = ATgetArgument(t, 0);
      e_23 = ATgetArgument(t, 1);
      f_23 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, e_23), (ATerm) ATmakeAppl(sym_Where_1, f_23)), d_23));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          d_23 = ATgetArgument(t, 0);
          e_23 = ATgetArgument(t, 1);
          f_23 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = d_23;
      t = pureterm_0_0(t);
      t = e_23;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, e_23)), (ATerm) ATmakeAppl(sym_Where_1, f_23)), (ATerm) ATmakeAppl(sym_Match_1, d_23)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm f_16 = ATgetArgument(t, 0);
      if(match_cons(f_16, sym_Rule_3))
        {
          o_23 = ATgetArgument(f_16, 0);
          p_23 = ATgetArgument(f_16, 1);
          q_23 = ATgetArgument(f_16, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  r_23 = t;
  t = o_23;
  {
    ATerm i_2 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm g_16 = ATgetArgument(t, 0);
          if(match_cons(g_16, sym_Var_1))
            {
              t_23 = ATgetArgument(g_16, 0);
            }
          else
            _fail(t);
          s_23 = ATgetArgument(t, 1);
          {
            ATerm h_16 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, t_23);
      return(t);
    }
    t = oncetd_1_0(i_2, t);
    u_23 = t;
    t = p_23;
    {
      ATerm j_2 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm i_16 = ATgetArgument(t, 0);
            if(match_cons(i_16, sym_Var_1))
              {
                t_23 = ATgetArgument(i_16, 0);
              }
            else
              _fail(t);
            v_23 = ATgetArgument(t, 1);
            {
              ATerm j_16 = ATgetArgument(t, 2);
              if(match_cons(j_16, sym_CallT_3))
                {
                  w_23 = ATgetArgument(j_16, 0);
                  {
                    ATerm k_16 = ATgetArgument(j_16, 1);
                    if(((ATgetType(k_16) != AT_LIST) || !(ATisEmpty(k_16))))
                      _fail(t);
                  }
                  {
                    ATerm l_16 = ATgetArgument(j_16, 2);
                    if(((ATgetType(l_16) != AT_LIST) || !(ATisEmpty(l_16))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, r_23);
        return(t);
      }
      t = oncetd_1_0(j_2, t);
      x_23 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_23), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, u_23, x_23, (ATerm) ATmakeAppl(sym_Seq_2, q_23, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_23), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(s_23), not_null(v_23), term_u_15))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(t_23)), (ATerm) ATmakeAppl(sym_Var_1, r_23))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm k_2 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        {
          ATerm o_16 = t;
          int p_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(p_16);
            }
          else
            {
              t = o_16;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(k_2, t);
  return(t);
}
ATerm topdown_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  t = p_110(t);
  {
    ATerm l_2 (ATerm t)
    {
      t = topdown_1_0(p_110, t);
      return(t);
    }
    t = SRTS_all(l_2, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm n_2 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm s_16 = t;
              int v_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_16);
                }
              else
                {
                  t = s_16;
                  {
                    ATerm w_16 = t;
                    int x_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(x_16);
                      }
                    else
                      {
                        t = w_16;
                        {
                          ATerm y_16 = t;
                          int b_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(b_17);
                            }
                          else
                            {
                              t = y_16;
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
      t = repeat_1_0(o_2, t);
    }
    return(t);
  }
  t = topdown_1_0(n_2, t);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,t_25 = NULL;
  g_25 = t;
  if(match_cons(t, sym_Seq_2))
    {
      h_25 = ATgetArgument(t, 0);
      m_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_25;
  if(match_cons(t, sym_CallT_3))
    {
      i_25 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
      l_25 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_25;
  if(match_cons(t, sym_SVar_1))
    {
      j_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_25;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = k_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = l_25;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = m_25;
  if(match_cons(t, sym_Seq_2))
    {
      n_25 = ATgetArgument(t, 0);
      p_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_25;
  if(match_cons(t, sym_Match_1))
    {
      o_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_25;
  if(match_cons(t, sym_Seq_2))
    {
      q_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_25;
  if(match_cons(t, sym_Where_1))
    {
      r_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_25;
  if(match_cons(t, sym_Build_1))
    {
      t_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL,t_1 = NULL,u_1 = NULL;
        t = term_o_17;
        {
          ATerm p_2 (ATerm t)
          {
            t = term_p_17;
            return(t);
          }
          t = rewrite_1_0(p_2, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm r_17 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) r_17) != ATmakeSymbol("s_0", 0, ATtrue)))
                _fail(t);
              s_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, s_1, o_25, (ATerm) ATmakeAppl(sym__2, r_25, t_25));
          t = replace_application_0_0(t);
          if(match_cons(t, sym__2))
            {
              t_1 = ATgetArgument(t, 0);
              u_1 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, t_1), (ATerm) ATmakeAppl(sym_Build_1, u_1)));
        }
        ;
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm c_2 = NULL,e_2 = NULL;
          t = term_o_17;
          {
            ATerm q_2 (ATerm t)
            {
              t = term_p_17;
              return(t);
            }
            t = rewrite_1_0(q_2, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm s_17 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) s_17) != ATmakeSymbol("h_0", 0, ATtrue)))
                  _fail(t);
                c_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = o_25;
            t = tvars_0_0(t);
            {
              ATerm r_2 (ATerm t)
              {
                t = term_t_17;
                return(t);
              }
              ATerm u_2 (ATerm t)
              {
                ATerm v_2 (ATerm t)
                {
                  ATerm g_2 = NULL;
                  g_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, c_2, (ATerm) ATmakeAppl(sym_Var_1, g_2)), term_v_17);
                  {
                    ATerm w_2 (ATerm t)
                    {
                      t = term_t_17;
                      return(t);
                    }
                    t = assert_1_0(w_2, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_2);
                  }
                  return(t);
                }
                t = map_1_0(v_2, t);
                t = (ATerm) ATmakeAppl(sym__2, r_25, t_25);
                t = alltd_1_0(Replace_0_0, t);
                if(match_cons(t, sym__2))
                  {
                    e_2 = ATgetArgument(t, 0);
                    {
                      ATerm w_17 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = scope_2_0(r_2, u_2, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, o_25), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(e_2)), (ATerm) ATmakeAppl(sym_Build_1, t_25)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm s_26 (ATerm f_26, ATerm g_26, ATerm t)
  {
    t = g_26;
    {
      ATerm x_2 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = rewrite_1_0(x_2, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm x_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) x_17) != ATmakeSymbol("m_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = f_26;
    }
    return(t);
  }
  ATerm t_26 (ATerm j_26, ATerm k_26, ATerm t)
  {
    t = k_26;
    {
      ATerm y_2 (ATerm t)
      {
        t = term_t_17;
        return(t);
      }
      t = rewrite_1_0(y_2, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm y_17 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) y_17) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = j_26;
    }
    return(t);
  }
  ATerm n_26 = NULL,o_26 = NULL,q_26 = NULL;
  o_26 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm z_17 = ATgetArgument(t, 0);
      q_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_26;
  if(match_cons(t, sym_Var_1))
    {
      n_26 = ATgetArgument(t, 0);
      {
        ATerm a_18 = t;
        int b_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_26;
            {
              ATerm c_3 (ATerm t)
              {
                t = term_t_17;
                return(t);
              }
              t = rewrite_1_0(c_3, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm d_18 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) d_18) != ATmakeSymbol("v_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_26);
            }
            ;
            LocalPopChoice(b_18);
          }
        else
          {
            t = a_18;
            {
              ATerm e_18 = t;
              int f_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_26(q_26, o_26, t);
                  ;
                  LocalPopChoice(f_18);
                }
              else
                {
                  t = e_18;
                  t = t_26(q_26, o_26, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm g_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_26(q_26, o_26, t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = g_18;
          t = t_26(q_26, o_26, t);
        }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,y_26 = NULL;
  if(match_cons(t, sym__2))
    {
      w_26 = ATgetArgument(t, 0);
      x_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_2 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm n_18 = ATgetArgument(t, 0);
            ATerm o_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_26, x_26);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_18 = ATgetFirst((ATermList) t);
            m_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_2;
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        t = (ATerm) ATempty;
      }
    y_26 = t;
    t = SSL_table_put(w_26, x_26, y_26);
    t = (ATerm) ATmakeAppl(sym__2, w_26, x_26);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL;
  e_27 = t;
  t = x_122(t);
  f_27 = t;
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_27 = ATgetFirst((ATermList) t);
        g_27 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_27, (ATerm)ATmakeAppl(sym_Scopes_0), g_27);
    t = h_27;
    {
      ATerm e_3 (ATerm t)
      {
        ATerm i_27 = NULL;
        i_27 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_27, i_27);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(e_3, t);
      t = e_27;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm w_113 (ATerm), ATerm x_113 (ATerm), ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_113(t);
      t = x_113(t);
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      t = x_113(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL;
  l_27 = t;
  t = w_122(t);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_27, term_u_18);
  {
    ATerm v_18 = t;
    int w_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_18 = ATgetArgument(t, 0);
            ATerm y_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_27, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(w_18);
      }
    else
      {
        t = v_18;
        t = (ATerm) ATempty;
      }
    n_27 = t;
    t = SSL_table_put(m_27, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_27), (ATerm) ATempty));
    t = l_27;
  }
  return(t);
}
ATerm scope_2_0 (ATerm y_122 (ATerm), ATerm z_122 (ATerm), ATerm t)
{
  t = begin_scope_1_0(y_122, t);
  {
    ATerm f_3 (ATerm t)
    {
      t = end_scope_1_0(y_122, t);
      return(t);
    }
    t = restore_always_2_0(z_122, f_3, t);
  }
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__3))
    {
      s_27 = ATgetArgument(t, 0);
      t_27 = ATgetArgument(t, 1);
      u_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm j_3 (ATerm t)
    {
      t = term_t_17;
      return(t);
    }
    ATerm m_3 (ATerm t)
    {
      t = t_27;
      t = tvars_0_0(t);
      {
        ATerm o_3 (ATerm t)
        {
          ATerm w_27 = NULL;
          w_27 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, s_27, (ATerm) ATmakeAppl(sym_Var_1, w_27)), term_b_19);
          {
            ATerm p_3 (ATerm t)
            {
              t = term_t_17;
              return(t);
            }
            t = assert_1_0(p_3, t);
            t = w_27;
          }
          return(t);
        }
        t = map_1_0(o_3, t);
        t = u_27;
        t = alltd_1_0(Replace_0_0, t);
        v_27 = t;
      }
      return(t);
    }
    t = scope_2_0(j_3, m_3, t);
    t = not_null(v_27);
  }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL,d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  x_28 = t;
  if(match_cons(t, sym_Seq_2))
    {
      y_28 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_28;
  if(match_cons(t, sym_CallT_3))
    {
      z_28 = ATgetArgument(t, 0);
      b_29 = ATgetArgument(t, 1);
      c_29 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = z_28;
  if(match_cons(t, sym_SVar_1))
    {
      a_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_29;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = b_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = c_29;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = d_29;
  if(match_cons(t, sym_Seq_2))
    {
      e_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_29;
  if(match_cons(t, sym_Match_1))
    {
      f_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_29;
  if(match_cons(t, sym_Build_1))
    {
      h_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_2 = NULL,t_2 = NULL;
        t = term_f_19;
        {
          ATerm u_3 (ATerm t)
          {
            t = term_g_19;
            return(t);
          }
          t = rewrite_1_0(u_3, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm h_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) h_19) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
              s_2 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, s_2, f_29, h_29);
          t = replace_application_0_0(t);
          t_2 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_29), (ATerm) ATmakeAppl(sym_Build_1, t_2));
        }
        ;
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
        {
          ATerm z_2 = NULL,a_3 = NULL;
          t = term_f_19;
          {
            ATerm v_3 (ATerm t)
            {
              t = term_g_19;
              return(t);
            }
            t = rewrite_1_0(v_3, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm j_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) j_19) != ATmakeSymbol("f_0", 0, ATtrue)))
                  _fail(t);
                z_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = f_29;
            t = tvars_0_0(t);
            {
              ATerm x_3 (ATerm t)
              {
                t = term_t_17;
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                ATerm d_4 (ATerm t)
                {
                  ATerm b_3 = NULL;
                  b_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, z_2, (ATerm) ATmakeAppl(sym_Var_1, b_3)), term_l_19);
                  {
                    ATerm f_4 (ATerm t)
                    {
                      t = term_t_17;
                      return(t);
                    }
                    t = assert_1_0(f_4, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, b_3);
                  }
                  return(t);
                }
                t = map_1_0(d_4, t);
                t = h_29;
                t = alltd_1_0(Replace_0_0, t);
                a_3 = t;
                return(t);
              }
              t = scope_2_0(x_3, c_4, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, f_29), (ATerm) ATmakeAppl(sym_Build_1, not_null(a_3)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm BottomupOverConstructor_0_0 (ATerm t)
{
  ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      if(match_cons(n_19, sym_CallT_3))
        {
          ATerm p_19 = ATgetArgument(n_19, 0);
          if(match_cons(p_19, sym_SVar_1))
            {
              ATerm s_19 = ATgetArgument(p_19, 0);
              if((ATgetSymbol((ATermAppl) s_19) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm q_19 = ATgetArgument(n_19, 1);
            if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
              {
                k_29 = ATgetFirst((ATermList) q_19);
                {
                  ATerm t_19 = (ATerm) ATgetNext((ATermList) q_19);
                  if(((ATgetType(t_19) != AT_LIST) || !(ATisEmpty(t_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          {
            ATerm r_19 = ATgetArgument(n_19, 2);
            if(((ATgetType(r_19) != AT_LIST) || !(ATisEmpty(r_19))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm o_19 = ATgetArgument(t, 1);
        if(match_cons(o_19, sym_Op_2))
          {
            l_29 = ATgetArgument(o_19, 0);
            m_29 = ATgetArgument(o_19, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = m_29;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm o_29 = NULL;
      o_29 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, k_29), (ATerm) ATempty), o_29);
      return(t);
    }
    t = map_1_0(g_4, t);
    n_29 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, k_29, (ATerm) ATmakeAppl(sym_Op_2, l_29, n_29));
  }
  return(t);
}
ATerm SeqOverLChoiceR_0_0 (ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm w_19 = ATgetArgument(t, 0);
      if(match_cons(w_19, sym_LChoice_2))
        {
          p_29 = ATgetArgument(w_19, 0);
          q_29 = ATgetArgument(w_19, 1);
        }
      else
        _fail(t);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_x_19, r_29);
  {
    ATerm i_4 (ATerm t)
    {
      t = term_y_19;
      return(t);
    }
    t = rewrite_1_0(i_4, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm z_19 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) z_19) != ATmakeSymbol("f_2", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, p_29, r_29), (ATerm) ATmakeAppl(sym_Seq_2, q_29, r_29));
  }
  return(t);
}
ATerm SeqOverChoiceR_0_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm a_20 = ATgetArgument(t, 0);
      if(match_cons(a_20, sym_Choice_2))
        {
          s_29 = ATgetArgument(a_20, 0);
          t_29 = ATgetArgument(a_20, 1);
        }
      else
        _fail(t);
      u_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_b_20, u_29);
  {
    ATerm k_4 (ATerm t)
    {
      t = term_c_20;
      return(t);
    }
    t = rewrite_1_0(k_4, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm d_20 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) d_20) != ATmakeSymbol("d_2", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, s_29, u_29), (ATerm) ATmakeAppl(sym_Seq_2, t_29, u_29));
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm e_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0_0(t);
        ;
        LocalPopChoice(f_20);
      }
    else
      {
        t = e_20;
        {
          ATerm h_20 = t;
          int i_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SeqOverLChoiceR_0_0(t);
              ;
              LocalPopChoice(i_20);
            }
          else
            {
              t = h_20;
              {
                ATerm j_20 = t;
                int l_20 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
                    if(match_cons(t, sym_Seq_2))
                      {
                        a_30 = ATgetArgument(t, 0);
                        d_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = a_30;
                    if(match_cons(t, sym_Scope_2))
                      {
                        b_30 = ATgetArgument(t, 0);
                        c_30 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, b_30, (ATerm) ATmakeAppl(sym_Seq_2, c_30, d_30));
                    ;
                    LocalPopChoice(l_20);
                  }
                else
                  {
                    t = j_20;
                    {
                      ATerm q_20 = t;
                      int r_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0_0(t);
                          ;
                          LocalPopChoice(r_20);
                        }
                      else
                        {
                          t = q_20;
                          {
                            ATerm t_20 = t;
                            int x_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    i_30 = ATgetArgument(t, 0);
                                    k_30 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = i_30;
                                if(match_cons(t, sym_Build_1))
                                  {
                                    j_30 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, k_30, j_30));
                                ;
                                LocalPopChoice(x_20);
                              }
                            else
                              {
                                t = t_20;
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
  t = innermost_1_0(l_4, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm q_110 (ATerm), ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    t = bottomup_1_0(q_110, t);
    return(t);
  }
  t = SRTS_all(m_4, t);
  t = q_110(t);
  return(t);
}
ATerm innermost_1_0 (ATerm f_126 (ATerm), ATerm t)
{
  ATerm n_4 (ATerm t)
  {
    ATerm o_4 (ATerm t)
    {
      t = f_126(t);
      t = innermost_1_0(f_126, t);
      return(t);
    }
    t = try_1_0(o_4, t);
    return(t);
  }
  t = bottomup_1_0(n_4, t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL,t_30 = NULL;
    if(match_cons(t, sym_Seq_2))
      {
        q_30 = ATgetArgument(t, 0);
        r_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = r_30;
    if(match_cons(t, sym_Choice_2))
      {
        s_30 = ATgetArgument(t, 0);
        t_30 = ATgetArgument(t, 1);
        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, q_30, s_30), (ATerm) ATmakeAppl(sym_Seq_2, q_30, t_30));
      }
    else
      {
        if(match_cons(t, sym_LChoice_2))
          {
            s_30 = ATgetArgument(t, 0);
            t_30 = ATgetArgument(t, 1);
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, q_30, s_30), (ATerm) ATmakeAppl(sym_Seq_2, q_30, t_30));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                s_30 = ATgetArgument(t, 0);
                t_30 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, s_30, (ATerm) ATmakeAppl(sym_Seq_2, q_30, t_30));
          }
      }
    return(t);
  }
  t = innermost_1_0(r_4, t);
  return(t);
}
ATerm Build_1_0 (ATerm n_100 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL;
  g_31 = t;
  if(match_cons(t, sym_Build_1))
    {
      e_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_31);
  d_31 = t;
  t = e_31;
  t = n_100(t);
  f_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, f_31), d_31);
  return(t);
}
ATerm Seq_2_0 (ATerm t_100 (ATerm), ATerm u_100 (ATerm), ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL;
  p_31 = t;
  if(match_cons(t, sym_Seq_2))
    {
      l_31 = ATgetArgument(t, 0);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_31);
  k_31 = t;
  t = l_31;
  t = t_100(t);
  n_31 = t;
  t = m_31;
  t = u_100(t);
  o_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, n_31, o_31), k_31);
  return(t);
}
ATerm Match_1_0 (ATerm m_100 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_Match_1))
    {
      u_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_31);
  t_31 = t;
  t = u_31;
  t = m_100(t);
  v_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, v_31), t_31);
  return(t);
}
ATerm LChoice_2_0 (ATerm v_100 (ATerm), ATerm w_100 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      b_32 = ATgetArgument(t, 0);
      c_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_32);
  a_32 = t;
  t = b_32;
  t = v_100(t);
  d_32 = t;
  t = c_32;
  t = w_100(t);
  e_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, d_32, e_32), a_32);
  return(t);
}
ATerm Choice_2_0 (ATerm t_99 (ATerm), ATerm u_99 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL,l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
  o_32 = t;
  if(match_cons(t, sym_Choice_2))
    {
      k_32 = ATgetArgument(t, 0);
      l_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_32);
  j_32 = t;
  t = k_32;
  t = t_99(t);
  m_32 = t;
  t = l_32;
  t = u_99(t);
  n_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, m_32, n_32), j_32);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0_0(t);
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        {
          ATerm a_21 = t;
          int c_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
              ;
              LocalPopChoice(c_21);
            }
          else
            {
              t = a_21;
              {
                ATerm d_21 = t;
                int e_21 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                    ;
                    LocalPopChoice(e_21);
                  }
                else
                  {
                    t = d_21;
                    {
                      ATerm f_21 = t;
                      int g_21 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm v_4 (ATerm t)
                          {
                            ATerm w_4 (ATerm t)
                            {
                              t = Match_1_0(_id, t);
                              return(t);
                            }
                            ATerm x_4 (ATerm t)
                            {
                              t = Build_1_0(_id, t);
                              return(t);
                            }
                            t = Seq_2_0(w_4, x_4, t);
                            return(t);
                          }
                          t = Scope_2_0(_id, v_4, t);
                          ;
                          LocalPopChoice(g_21);
                        }
                      else
                        {
                          t = f_21;
                          {
                            ATerm h_21 = t;
                            int i_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm y_4 (ATerm t)
                                {
                                  ATerm a_5 (ATerm t)
                                  {
                                    t = Match_1_0(_id, t);
                                    return(t);
                                  }
                                  ATerm b_5 (ATerm t)
                                  {
                                    ATerm d_5 (ATerm t)
                                    {
                                      t = Build_1_0(_id, t);
                                      return(t);
                                    }
                                    t = Seq_2_0(_id, d_5, t);
                                    return(t);
                                  }
                                  t = Seq_2_0(a_5, b_5, t);
                                  return(t);
                                }
                                t = Scope_2_0(_id, y_4, t);
                                ;
                                LocalPopChoice(i_21);
                              }
                            else
                              {
                                t = h_21;
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
    return(t);
  }
  t = try_1_0(s_4, t);
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, (ATerm) ATmakeAppl(sym_Defined_2, term_j_21, t_32));
  {
    ATerm e_5 (ATerm t)
    {
      t = term_g_19;
      return(t);
    }
    t = assert_1_0(e_5, t);
    t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATmakeAppl(sym_Defined_2, term_k_21, t_32));
    {
      ATerm i_5 (ATerm t)
      {
        t = term_p_17;
        return(t);
      }
      t = assert_1_0(i_5, t);
      t = t_32;
    }
  }
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_20, u_32), term_m_21);
  {
    ATerm k_5 (ATerm t)
    {
      t = term_c_20;
      return(t);
    }
    t = assert_1_0(k_5, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_x_19, u_32), term_o_21);
    {
      ATerm o_5 (ATerm t)
      {
        t = term_y_19;
        return(t);
      }
      t = assert_1_0(o_5, t);
      t = u_32;
    }
  }
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm a_33 = NULL,c_33 = NULL,d_33 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm p_21 = ATgetArgument(t, 0);
      if(match_cons(p_21, sym_SVar_1))
        {
          ATerm s_21 = ATgetArgument(p_21, 0);
          if((ATgetSymbol((ATermAppl) s_21) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm q_21 = ATgetArgument(t, 1);
        if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
          {
            a_33 = ATgetFirst((ATermList) q_21);
            {
              ATerm t_21 = (ATerm) ATgetNext((ATermList) q_21);
              if(((ATgetType(t_21) != AT_LIST) || !(ATisEmpty(t_21))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm r_21 = ATgetArgument(t, 2);
        if(((ATgetType(r_21) != AT_LIST) || !(ATisEmpty(r_21))))
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm p_5 (ATerm t)
    {
      ATerm u_5 (ATerm t)
      {
        t = term_u_21;
        return(t);
      }
      t = say_1_0(u_5, t);
      return(t);
    }
    t = if_verbose2_1_0(p_5, t);
    t = new_0_0(t);
    c_33 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_33), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = seq_over_choice_0_0(t);
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_33), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = bottomup_to_var_0_0(t);
    t = a_33;
    t = inline_rules_0_0(t);
    d_33 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, c_33, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_17, d_33), (ATerm) ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_33), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_u_15))), (ATerm) ATempty);
    t = propagate_mark_0_0(t);
    t = fuse_with_bottomup_0_0(t);
    {
      ATerm v_5 (ATerm t)
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_UnCond_0_0(t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm x_21 = t;
              int y_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BottomupToVarIsId_Cond_0_0(t);
                  ;
                  LocalPopChoice(y_21);
                }
              else
                {
                  t = x_21;
                  {
                    ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
                    if(match_cons(t, sym_CallT_3))
                      {
                        f_33 = ATgetArgument(t, 0);
                        h_33 = ATgetArgument(t, 1);
                        i_33 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = f_33;
                    if(match_cons(t, sym_SVar_1))
                      {
                        g_33 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = g_33;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                      _fail(t);
                    t = h_33;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = i_33;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = term_u_15;
                  }
                }
            }
          }
        return(t);
      }
      t = alltd_1_0(v_5, t);
      {
        ATerm d_22 = t;
        if((PushChoice() == 0))
          {
            ATerm x_5 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm e_22 = ATgetArgument(t, 0);
                  if(match_cons(e_22, sym_SVar_1))
                    {
                      ATerm n_22 = ATgetArgument(e_22, 0);
                      if((ATgetSymbol((ATermAppl) n_22) != ATmakeSymbol("mark", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm l_22 = ATgetArgument(t, 1);
                    if(((ATgetType(l_22) != AT_LIST) || !(ATisEmpty(l_22))))
                      _fail(t);
                  }
                  {
                    ATerm m_22 = ATgetArgument(t, 2);
                    if(((ATgetType(m_22) != AT_LIST) || !(ATisEmpty(m_22))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(x_5, t);
            {
              ATerm a_6 (ATerm t)
              {
                t = term_w_22;
                return(t);
              }
              t = say_1_0(a_6, t);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_22;
          }
        t = desugar_0_0(t);
        {
          ATerm b_6 (ATerm t)
          {
            ATerm c_6 (ATerm t)
            {
              t = term_x_22;
              return(t);
            }
            t = say_1_0(c_6, t);
            return(t);
          }
          t = if_verbose1_1_0(b_6, t);
        }
      }
    }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm h_112 (ATerm), ATerm t)
{
  ATerm j_33 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_112(t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = SRTS_all(j_33, t);
      }
    return(t);
  }
  t = j_33(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL;
  a_34 = t;
  t = new_0_0(t);
  b_34 = t;
  {
    ATerm a_23 = t;
    int b_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_v_19, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_34), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(b_23);
      }
    else
      {
        t = a_23;
        {
          ATerm d_6 (ATerm t)
          {
            ATerm f_6 (ATerm t)
            {
              t = term_g_23;
              return(t);
            }
            t = say_1_0(f_6, t);
            return(t);
          }
          t = if_verbose2_1_0(d_6, t);
          _fail(t);
        }
      }
    {
      ATerm h_23 = t;
      int i_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL,s_34 = NULL,t_34 = NULL;
          c_34 = t;
          if(match_cons(t, sym_Seq_2))
            {
              d_34 = ATgetArgument(t, 0);
              p_34 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_34;
          if(match_cons(t, sym_All_1))
            {
              e_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_34;
          if(match_cons(t, sym_CallT_3))
            {
              f_34 = ATgetArgument(t, 0);
              h_34 = ATgetArgument(t, 1);
              o_34 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = f_34;
          if(match_cons(t, sym_SVar_1))
            {
              g_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_34;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = h_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_34 = ATgetFirst((ATermList) t);
              n_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_34;
          if(match_cons(t, sym_CallT_3))
            {
              j_34 = ATgetArgument(t, 0);
              l_34 = ATgetArgument(t, 1);
              m_34 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = j_34;
          if(match_cons(t, sym_SVar_1))
            {
              k_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = m_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = n_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = o_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_34;
          if(match_cons(t, sym_CallT_3))
            {
              q_34 = ATgetArgument(t, 0);
              s_34 = ATgetArgument(t, 1);
              t_34 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = q_34;
          if(match_cons(t, sym_SVar_1))
            {
              r_34 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = s_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_34;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = k_34;
          if((b_34 != t))
            {
              _fail(t);
            }
          t = r_34;
          if((k_34 != t))
            {
              _fail(t);
            }
          t = c_34;
          ;
          LocalPopChoice(i_23);
        }
      else
        {
          t = h_23;
          {
            ATerm i_6 (ATerm t)
            {
              ATerm j_6 (ATerm t)
              {
                t = term_j_23;
                return(t);
              }
              t = debug_1_0(j_6, t);
              return(t);
            }
            t = if_verbose1_1_0(i_6, t);
            _fail(t);
          }
        }
      {
        ATerm k_6 (ATerm t)
        {
          ATerm l_6 (ATerm t)
          {
            t = term_k_23;
            return(t);
          }
          t = say_1_0(l_6, t);
          return(t);
        }
        t = if_verbose2_1_0(k_6, t);
        t = a_34;
      }
    }
  }
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  m_37 = t;
  t = new_0_0(t);
  n_37 = t;
  {
    ATerm l_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_y_23, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_37), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = l_23;
        {
          ATerm o_6 (ATerm t)
          {
            ATerm p_6 (ATerm t)
            {
              t = term_z_23;
              return(t);
            }
            t = say_1_0(p_6, t);
            return(t);
          }
          t = if_verbose2_1_0(o_6, t);
          _fail(t);
        }
      }
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,z_37 = NULL,d_38 = NULL,l_38 = NULL,w_38 = NULL,x_38 = NULL,a_39 = NULL,b_39 = NULL,e_39 = NULL,f_39 = NULL,i_39 = NULL,l_39 = NULL,m_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,w_39 = NULL,b_40 = NULL,n_40 = NULL,q_40 = NULL,r_40 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL;
          r_39 = t;
          if(match_cons(t, sym_Call_2))
            {
              s_39 = ATgetArgument(t, 0);
              b_40 = ATgetArgument(t, 1);
              t = s_39;
              if(match_cons(t, sym_SVar_1))
                {
                  w_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_39;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = b_40;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_40 = ATgetFirst((ATermList) t);
                  b_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_40;
              if(match_cons(t, sym_Call_2))
                {
                  q_40 = ATgetArgument(t, 0);
                  r_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = q_40;
              if(match_cons(t, sym_SVar_1))
                {
                  o_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_37;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = r_40;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_41 = ATgetFirst((ATermList) t);
                  a_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_41;
              if(match_cons(t, sym_Seq_2))
                {
                  c_41 = ATgetArgument(t, 0);
                  p_41 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_41;
              if(match_cons(t, sym_CallT_3))
                {
                  d_41 = ATgetArgument(t, 0);
                  n_41 = ATgetArgument(t, 1);
                  o_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = d_41;
              if(match_cons(t, sym_SVar_1))
                {
                  m_41 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = o_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_41;
              if(match_cons(t, sym_CallT_3))
                {
                  q_41 = ATgetArgument(t, 0);
                  s_41 = ATgetArgument(t, 1);
                  z_41 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = q_41;
              if(match_cons(t, sym_SVar_1))
                {
                  r_41 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_41;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = s_41;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_41 = ATgetFirst((ATermList) t);
                  y_41 = (ATerm) ATgetNext((ATermList) t);
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
              t = w_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = y_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_41;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_42;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_42;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = m_41;
              if((n_37 != t))
                {
                  _fail(t);
                }
              t = v_41;
              if((m_41 != t))
                {
                  _fail(t);
                }
              t = r_39;
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  s_39 = ATgetArgument(t, 0);
                  b_40 = ATgetArgument(t, 1);
                  c_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = s_39;
              if(match_cons(t, sym_SVar_1))
                {
                  w_39 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = w_39;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = b_40;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_40 = ATgetFirst((ATermList) t);
                  b_42 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = n_40;
              if(match_cons(t, sym_Rec_2))
                {
                  q_40 = ATgetArgument(t, 0);
                  r_40 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = r_40;
              if(match_cons(t, sym_CallT_3))
                {
                  b_41 = ATgetArgument(t, 0);
                  a_42 = ATgetArgument(t, 1);
                  q_39 = ATgetArgument(t, 2);
                  t = b_41;
                  if(match_cons(t, sym_SVar_1))
                    {
                      c_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_41;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = a_42;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_37 = ATgetFirst((ATermList) t);
                      m_39 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = p_37;
                  if(match_cons(t, sym_Seq_2))
                    {
                      q_37 = ATgetArgument(t, 0);
                      z_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_37;
                  if(match_cons(t, sym_CallT_3))
                    {
                      r_37 = ATgetArgument(t, 0);
                      t_37 = ATgetArgument(t, 1);
                      u_37 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = r_37;
                  if(match_cons(t, sym_SVar_1))
                    {
                      s_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_37;
                  if(match_cons(t, sym_CallT_3))
                    {
                      d_38 = ATgetArgument(t, 0);
                      w_38 = ATgetArgument(t, 1);
                      l_39 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = d_38;
                  if(match_cons(t, sym_SVar_1))
                    {
                      l_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = l_38;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = w_38;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_38 = ATgetFirst((ATermList) t);
                      i_39 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = x_38;
                  if(match_cons(t, sym_CallT_3))
                    {
                      a_39 = ATgetArgument(t, 0);
                      e_39 = ATgetArgument(t, 1);
                      f_39 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = a_39;
                  if(match_cons(t, sym_SVar_1))
                    {
                      b_39 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = e_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = f_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = l_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = q_39;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = b_42;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_42;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_37;
                  if((n_37 != t))
                    {
                      _fail(t);
                    }
                  t = b_39;
                  if((q_40 != t))
                    {
                      _fail(t);
                    }
                  t = r_39;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      b_41 = ATgetArgument(t, 0);
                      a_42 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = b_41;
                  if(match_cons(t, sym_Seq_2))
                    {
                      c_41 = ATgetArgument(t, 0);
                      p_41 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = c_41;
                  if(match_cons(t, sym_CallT_3))
                    {
                      d_41 = ATgetArgument(t, 0);
                      n_41 = ATgetArgument(t, 1);
                      o_41 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = d_41;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = n_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = o_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = p_41;
                  if(match_cons(t, sym_CallT_3))
                    {
                      q_41 = ATgetArgument(t, 0);
                      s_41 = ATgetArgument(t, 1);
                      z_41 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = q_41;
                  if(match_cons(t, sym_SVar_1))
                    {
                      r_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_41;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = s_41;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      t_41 = ATgetFirst((ATermList) t);
                      y_41 = (ATerm) ATgetNext((ATermList) t);
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
                  t = w_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = z_41;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_42;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = b_42;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = c_42;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_41;
                  if((n_37 != t))
                    {
                      _fail(t);
                    }
                  t = v_41;
                  if((q_40 != t))
                    {
                      _fail(t);
                    }
                  t = r_39;
                }
            }
          ;
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          {
            ATerm q_6 (ATerm t)
            {
              ATerm s_6 (ATerm t)
              {
                t = term_c_24;
                return(t);
              }
              t = debug_1_0(s_6, t);
              return(t);
            }
            t = if_verbose1_1_0(q_6, t);
            _fail(t);
          }
        }
      {
        ATerm t_6 (ATerm t)
        {
          ATerm u_6 (ATerm t)
          {
            t = term_d_24;
            return(t);
          }
          t = say_1_0(u_6, t);
          return(t);
        }
        t = if_verbose2_1_0(t_6, t);
        t = m_37;
      }
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,o_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  if(match_cons(t, sym__2))
    {
      o_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_42;
  if(match_cons(t, sym_Build_1))
    {
      ATerm e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_42;
  if(match_cons(t, sym_Where_1))
    {
      r_42 = ATgetArgument(t, 0);
      t = r_42;
      if(match_cons(t, sym_Prim_2))
        {
          l_42 = ATgetArgument(t, 0);
          m_42 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          r_42 = ATgetArgument(t, 0);
          s_42 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, r_42, s_42);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              r_42 = ATgetArgument(t, 0);
              s_42 = ATgetArgument(t, 1);
              t_42 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_24 = ATgetArgument(t, 0);
      if(match_cons(f_24, sym_Build_1))
        {
          ATerm h_24 = ATgetArgument(f_24, 0);
          if(match_cons(h_24, sym_Op_2))
            {
              h_43 = ATgetArgument(h_24, 0);
              g_43 = ATgetArgument(h_24, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm g_24 = ATgetArgument(t, 1);
        if(match_cons(g_24, sym_Match_1))
          {
            ATerm i_24 = ATgetArgument(g_24, 0);
            if(match_cons(i_24, sym_Op_2))
              {
                if((h_43 != ATgetArgument(i_24, 0)))
                  {
                    _fail(ATgetArgument(i_24, 0));
                  }
                i_43 = ATgetArgument(i_24, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, g_43, i_43);
  {
    ATerm v_6 (ATerm t)
    {
      ATerm k_43 = NULL,l_43 = NULL;
      if(match_cons(t, sym__2))
        {
          k_43 = ATgetArgument(t, 0);
          l_43 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, k_43), (ATerm) ATmakeAppl(sym_Match_1, l_43));
      return(t);
    }
    t = zip_1_0(v_6, t);
    j_43 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, j_43), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, h_43, g_43)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_24 = ATgetArgument(t, 0);
      if(match_cons(j_24, sym_Build_1))
        {
          ATerm l_24 = ATgetArgument(j_24, 0);
          if(match_cons(l_24, sym_Op_2))
            {
              m_43 = ATgetArgument(l_24, 0);
              {
                ATerm m_24 = ATgetArgument(l_24, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm k_24 = ATgetArgument(t, 1);
        if(match_cons(k_24, sym_Match_1))
          {
            ATerm n_24 = ATgetArgument(k_24, 0);
            if(match_cons(n_24, sym_Op_2))
              {
                n_43 = ATgetArgument(n_24, 0);
                {
                  ATerm o_24 = ATgetArgument(n_24, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, m_43, n_43);
  {
    ATerm p_24 = t;
    if((PushChoice() == 0))
      {
        ATerm o_43 = NULL;
        if(match_cons(t, sym__2))
          {
            o_43 = ATgetArgument(t, 0);
            if((o_43 != ATgetArgument(t, 1)))
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
        t = p_24;
      }
    t = term_q_24;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm r_24 = t;
  int s_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
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
            t = BuildMatchFusion_0_0(t);
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
                  ATerm z_43 = NULL,b_44 = NULL,c_44 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      z_43 = ATgetArgument(t, 0);
                      b_44 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = z_43;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm x_24 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = b_44;
                  if(match_cons(t, sym_Build_1))
                    {
                      c_44 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  {
                    ATerm y_24 = t;
                    int z_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(z_24);
                      }
                    else
                      {
                        t = y_24;
                        {
                          ATerm f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              f_44 = ATgetArgument(t, 0);
                              h_44 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = f_44;
                          if(match_cons(t, sym_Match_1))
                            {
                              g_44 = ATgetArgument(t, 0);
                              t = h_44;
                              if(match_cons(t, sym_Match_1))
                                {
                                  i_44 = ATgetArgument(t, 0);
                                  t = i_44;
                                  if((g_44 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_44);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      i_44 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = i_44;
                                  if((g_44 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, g_44);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  g_44 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = h_44;
                              if(match_cons(t, sym_Match_1))
                                {
                                  i_44 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = i_44;
                              if((g_44 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, g_44);
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
  ATerm o_44 = NULL,p_44 = NULL,r_44 = NULL,s_44 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_44;
  if(match_cons(t, sym_Seq_2))
    {
      o_44 = ATgetArgument(t, 0);
      p_44 = ATgetArgument(t, 1);
      {
        ATerm a_25 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_44 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, r_44, o_44);
            t = BMF_0_0(t);
            w_44 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, w_44, p_44);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = a_25;
            t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, r_44, s_44);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm t_111 (ATerm), ATerm t)
{
  ATerm b_45 (ATerm t)
  {
    ATerm c_25 = t;
    int d_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_111(t);
        ;
        LocalPopChoice(d_25);
      }
    else
      {
        t = c_25;
        t = SRTS_one(b_45, t);
      }
    return(t);
  }
  t = b_45(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm e_25 = ATgetArgument(t, 0);
      if(((ATgetType(e_25) == AT_LIST) && !(ATisEmpty(e_25))))
        {
          ATerm u_25 = ATgetFirst((ATermList) e_25);
          if(match_cons(u_25, sym_SDefT_4))
            {
              d_45 = ATgetArgument(u_25, 0);
              {
                ATerm w_25 = ATgetArgument(u_25, 1);
                if(((ATgetType(w_25) != AT_LIST) || !(ATisEmpty(w_25))))
                  _fail(t);
              }
              {
                ATerm x_25 = ATgetArgument(u_25, 2);
                if(((ATgetType(x_25) != AT_LIST) || !(ATisEmpty(x_25))))
                  _fail(t);
              }
              c_45 = ATgetArgument(u_25, 3);
            }
          else
            _fail(t);
          {
            ATerm v_25 = (ATerm) ATgetNext((ATermList) e_25);
            if(((ATgetType(v_25) != AT_LIST) || !(ATisEmpty(v_25))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm f_25 = ATgetArgument(t, 1);
        if(match_cons(f_25, sym_CallT_3))
          {
            ATerm y_25 = ATgetArgument(f_25, 0);
            if(match_cons(y_25, sym_SVar_1))
              {
                if((d_45 != ATgetArgument(y_25, 0)))
                  {
                    _fail(ATgetArgument(y_25, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm z_25 = ATgetArgument(f_25, 1);
              if(((ATgetType(z_25) != AT_LIST) || !(ATisEmpty(z_25))))
                _fail(t);
            }
            {
              ATerm a_26 = ATgetArgument(f_25, 2);
              if(((ATgetType(a_26) != AT_LIST) || !(ATisEmpty(a_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_45;
  {
    ATerm b_26 = t;
    if((PushChoice() == 0))
      {
        ATerm w_6 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm c_26 = ATgetArgument(t, 0);
              if(match_cons(c_26, sym_SVar_1))
                {
                  if((d_45 != ATgetArgument(c_26, 0)))
                    {
                      _fail(ATgetArgument(c_26, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm d_26 = ATgetArgument(t, 1);
                if(((ATgetType(d_26) != AT_LIST) || !(ATisEmpty(d_26))))
                  _fail(t);
              }
              {
                ATerm e_26 = ATgetArgument(t, 2);
                if(((ATgetType(e_26) != AT_LIST) || !(ATisEmpty(e_26))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(w_6, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_26;
      }
    t = c_45;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      s_45 = ATgetArgument(t, 0);
      t = s_45;
      if(match_cons(t, sym_Seq_2))
        {
          q_45 = ATgetArgument(t, 0);
          m_45 = ATgetArgument(t, 1);
          t = q_45;
          if(match_cons(t, sym_Where_1))
            {
              l_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_45;
          if(match_cons(t, sym_Seq_2))
            {
              n_45 = ATgetArgument(t, 0);
              p_45 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_45;
          if(match_cons(t, sym_Build_1))
            {
              o_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, l_45, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_45), p_45)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              q_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          s_45 = ATgetArgument(t, 0);
          t = s_45;
          if(match_cons(t, sym_Test_1))
            {
              q_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              s_45 = ATgetArgument(t, 0);
              t = s_45;
              if(match_cons(t, sym_Not_1))
                {
                  q_45 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, q_45);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  s_45 = ATgetArgument(t, 0);
                  t_45 = ATgetArgument(t, 1);
                  t = t_45;
                  if((s_45 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      s_45 = ATgetArgument(t, 0);
                      t_45 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = t_45;
                  if((s_45 != t))
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
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      h_46 = ATgetArgument(t, 0);
      k_46 = ATgetArgument(t, 1);
      t = h_46;
      if(match_cons(t, sym_LChoice_2))
        {
          i_46 = ATgetArgument(t, 0);
          j_46 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, i_46, (ATerm) ATmakeAppl(sym_LChoice_2, j_46, k_46));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          h_46 = ATgetArgument(t, 0);
          k_46 = ATgetArgument(t, 1);
          t = h_46;
          if(match_cons(t, sym_Seq_2))
            {
              i_46 = ATgetArgument(t, 0);
              j_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, i_46, (ATerm) ATmakeAppl(sym_Seq_2, j_46, k_46));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              h_46 = ATgetArgument(t, 0);
              k_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_46;
          if(match_cons(t, sym_Choice_2))
            {
              i_46 = ATgetArgument(t, 0);
              j_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, i_46, (ATerm) ATmakeAppl(sym_Choice_2, j_46, k_46));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm h_26 = t;
  int i_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm x_6 (ATerm t)
        {
          ATerm z_6 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(z_6, t);
          return(t);
        }
        t = Cons_2_0(_id, x_6, t);
      }
      ;
      LocalPopChoice(i_26);
    }
  else
    {
      t = h_26;
      {
        ATerm a_7 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, a_7, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL,b_47 = NULL,d_47 = NULL,e_47 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_47, e_47);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_47 = ATgetArgument(t, 0);
          t = d_47;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_46 = ATgetFirst((ATermList) t);
              z_46 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, y_46, (ATerm) ATmakeAppl(sym_LChoices_1, z_46));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_q_24;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_47 = ATgetArgument(t, 0);
              t = d_47;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  y_46 = ATgetFirst((ATermList) t);
                  z_46 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, y_46, (ATerm) ATmakeAppl(sym_Choices_1, z_46));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_q_24;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_47 = ATgetArgument(t, 0);
                  t = d_47;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      y_46 = ATgetFirst((ATermList) t);
                      z_46 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, y_46, (ATerm) ATmakeAppl(sym_Seqs_1, z_46));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_15;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_47 = ATgetArgument(t, 0);
                      e_47 = ATgetArgument(t, 1);
                      b_47 = ATgetArgument(t, 2);
                      a_47 = ATgetArgument(t, 3);
                      {
                        ATerm r_47 = NULL,s_47 = NULL;
                        t = e_47;
                        {
                          ATerm b_7 (ATerm t)
                          {
                            ATerm t_47 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                t_47 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, t_47, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_26), term_p_26));
                            return(t);
                          }
                          t = map1_1_0(b_7, t);
                          r_47 = t;
                          t = b_47;
                          {
                            ATerm e_7 (ATerm t)
                            {
                              ATerm f_7 (ATerm t)
                              {
                                ATerm u_47 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    u_47 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, u_47, term_p_26);
                                return(t);
                              }
                              t = try_1_0(f_7, t);
                              return(t);
                            }
                            t = map1_1_0(e_7, t);
                            s_47 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_47, r_47, s_47, a_47);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_47 = ATgetArgument(t, 0);
                          e_47 = ATgetArgument(t, 1);
                          b_47 = ATgetArgument(t, 2);
                          a_47 = ATgetArgument(t, 3);
                          {
                            ATerm r_26 = t;
                            int u_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm z_47 = NULL,a_48 = NULL;
                                t = b_47;
                                {
                                  ATerm g_7 (ATerm t)
                                  {
                                    ATerm f_48 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        f_48 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_48, term_p_26);
                                    return(t);
                                  }
                                  t = map1_1_0(g_7, t);
                                  z_47 = t;
                                  t = e_47;
                                  {
                                    ATerm h_7 (ATerm t)
                                    {
                                      ATerm i_7 (ATerm t)
                                      {
                                        ATerm g_48 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            g_48 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, g_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_26), term_p_26));
                                        return(t);
                                      }
                                      t = try_1_0(i_7, t);
                                      return(t);
                                    }
                                    t = map_1_0(h_7, t);
                                    a_48 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, d_47, a_48, z_47, a_47);
                                  }
                                }
                                ;
                                LocalPopChoice(u_26);
                              }
                            else
                              {
                                t = r_26;
                                {
                                  ATerm q_48 = NULL,r_48 = NULL;
                                  t = e_47;
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      ATerm s_48 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          s_48 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_48, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_p_26), term_p_26));
                                      return(t);
                                    }
                                    t = map1_1_0(j_7, t);
                                    q_48 = t;
                                    t = b_47;
                                    {
                                      ATerm k_7 (ATerm t)
                                      {
                                        ATerm l_7 (ATerm t)
                                        {
                                          ATerm t_48 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              t_48 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, t_48, term_p_26);
                                          return(t);
                                        }
                                        t = try_1_0(l_7, t);
                                        return(t);
                                      }
                                      t = map_1_0(k_7, t);
                                      r_48 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, d_47, q_48, r_48, a_47);
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
                              d_47 = ATgetArgument(t, 0);
                              e_47 = ATgetArgument(t, 1);
                              b_47 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_47, (ATerm) ATmakeAppl(sym_Op_2, term_z_13, (ATerm) ATinsert(ATinsert(ATempty, b_47), d_47)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_47 = ATgetArgument(t, 0);
                                  e_47 = ATgetArgument(t, 1);
                                  b_47 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_47)), d_47), (ATerm) ATmakeAppl(sym_Build_1, e_47)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_47 = ATgetArgument(t, 0);
                                      e_47 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_47, (ATerm) ATmakeAppl(sym_Match_1, e_47));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_47 = ATgetArgument(t, 0);
                                          e_47 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_47), e_47);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_47 = ATgetArgument(t, 0);
                                              e_47 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_47), d_47);
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
ATerm F10_0_0 (ATerm t)
{
  ATerm g_49 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm v_26 = ATgetArgument(t, 0);
      g_49 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_49;
  {
    ATerm m_7 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(m_7, t);
    t = term_q_24;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm z_26 = t;
  int a_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_50 = NULL,f_50 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          e_50 = ATgetArgument(t, 0);
          t = e_50;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              e_50 = ATgetArgument(t, 0);
              t = e_50;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_u_15;
            }
          else
            {
              ATerm b_27 = t;
              int c_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      e_50 = ATgetArgument(t, 0);
                      {
                        ATerm d_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(c_27);
                  t = e_50;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = b_27;
                  {
                    ATerm j_27 = t;
                    int k_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm o_27 = ATgetArgument(t, 0);
                            f_50 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_27);
                        t = f_50;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = j_27;
                        {
                          ATerm p_27 = t;
                          int q_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm r_27 = ATgetArgument(t, 0);
                                  f_50 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_27);
                              t = f_50;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = p_27;
                              if(match_cons(t, sym_Some_1))
                                {
                                  e_50 = ATgetArgument(t, 0);
                                  t = e_50;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      e_50 = ATgetArgument(t, 0);
                                      t = e_50;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm x_27 = ATgetArgument(t, 0);
                                          f_50 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = f_50;
                                      if(!(match_cons(t, sym_Fail_0)))
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
      ;
      LocalPopChoice(a_27);
    }
  else
    {
      t = z_26;
      {
        ATerm y_27 = t;
        int z_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(z_27);
          }
        else
          {
            t = y_27;
            {
              ATerm h_50 = NULL,i_50 = NULL,j_50 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  h_50 = ATgetArgument(t, 0);
                  i_50 = ATgetArgument(t, 1);
                  t = i_50;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = h_50;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm a_28 = t;
                          int b_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = i_50;
                              ;
                              LocalPopChoice(b_28);
                            }
                          else
                            {
                              t = a_28;
                              t = h_50;
                            }
                        }
                      else
                        {
                          t = h_50;
                        }
                    }
                  else
                    {
                      t = h_50;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = i_50;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      h_50 = ATgetArgument(t, 0);
                      i_50 = ATgetArgument(t, 1);
                      t = i_50;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = h_50;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm c_28 = t;
                              int d_28 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = i_50;
                                  ;
                                  LocalPopChoice(d_28);
                                }
                              else
                                {
                                  t = c_28;
                                  t = h_50;
                                }
                            }
                          else
                            {
                              t = h_50;
                            }
                        }
                      else
                        {
                          t = h_50;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = i_50;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          h_50 = ATgetArgument(t, 0);
                          t = h_50;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              h_50 = ATgetArgument(t, 0);
                              i_50 = ATgetArgument(t, 1);
                              j_50 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = j_50;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, h_50, i_50);
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
  ATerm g_51 = NULL,i_51 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      i_51 = ATgetArgument(t, 0);
      t = i_51;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          i_51 = ATgetArgument(t, 0);
          t = i_51;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_q_24;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              i_51 = ATgetArgument(t, 0);
              g_51 = ATgetArgument(t, 1);
              t = g_51;
              if(match_cons(t, sym_Id_0))
                {
                  t = i_51;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm e_28 = t;
                      int f_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_51;
                          ;
                          LocalPopChoice(f_28);
                        }
                      else
                        {
                          t = e_28;
                          t = i_51;
                        }
                    }
                  else
                    {
                      t = i_51;
                    }
                }
              else
                {
                  t = i_51;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = g_51;
                }
            }
          else
            {
              ATerm g_28 = t;
              int h_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      i_51 = ATgetArgument(t, 0);
                      {
                        ATerm i_28 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(h_28);
                  t = i_51;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = g_28;
                  {
                    ATerm j_28 = t;
                    int k_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm l_28 = ATgetArgument(t, 0);
                            g_51 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_28);
                        t = g_51;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = j_28;
                        {
                          ATerm m_28 = t;
                          int n_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm o_28 = ATgetArgument(t, 0);
                                  g_51 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_28);
                              t = g_51;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = m_28;
                              if(match_cons(t, sym_All_1))
                                {
                                  i_51 = ATgetArgument(t, 0);
                                  t = i_51;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      i_51 = ATgetArgument(t, 0);
                                      t = i_51;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          i_51 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = i_51;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_u_15;
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
  ATerm p_28 = t;
  int q_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(q_28);
    }
  else
    {
      t = p_28;
      {
        ATerm r_28 = t;
        int s_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(s_28);
          }
        else
          {
            t = r_28;
            {
              ATerm t_28 = t;
              int u_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(u_28);
                }
              else
                {
                  t = t_28;
                  {
                    ATerm v_28 = t;
                    int w_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(w_28);
                      }
                    else
                      {
                        t = v_28;
                        {
                          ATerm i_29 = t;
                          int j_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(j_29);
                            }
                          else
                            {
                              t = i_29;
                              {
                                ATerm v_29 = t;
                                int w_29 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm r_51 = NULL,s_51 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        r_51 = ATgetArgument(t, 0);
                                        s_51 = ATgetArgument(t, 1);
                                        t = r_51;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_51;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            r_51 = ATgetArgument(t, 0);
                                            s_51 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = r_51;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = s_51;
                                      }
                                    ;
                                    LocalPopChoice(w_29);
                                  }
                                else
                                  {
                                    t = v_29;
                                    {
                                      ATerm x_29 = t;
                                      int y_29 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(y_29);
                                        }
                                      else
                                        {
                                          t = x_29;
                                          {
                                            ATerm z_29 = t;
                                            int e_30 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(e_30);
                                              }
                                            else
                                              {
                                                t = z_29;
                                                {
                                                  ATerm d_3 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm f_30 = ATgetArgument(t, 0);
                                                      if(!(match_cons(f_30, sym_Wld_0)))
                                                        _fail(t);
                                                      d_3 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = d_3;
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
ATerm repeat_1_0 (ATerm t_123 (ATerm), ATerm t)
{
  ATerm v_51 (ATerm t)
  {
    ATerm n_7 (ATerm t)
    {
      t = t_123(t);
      t = v_51(t);
      return(t);
    }
    t = try_1_0(n_7, t);
    return(t);
  }
  t = v_51(t);
  return(t);
}
ATerm downup_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  t = r_110(t);
  {
    ATerm o_7 (ATerm t)
    {
      t = downup_1_0(r_110, t);
      return(t);
    }
    t = SRTS_all(o_7, t);
    t = r_110(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm p_7 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(p_7, t);
  return(t);
}
ATerm genzip_4_0 (ATerm c_117 (ATerm), ATerm d_117 (ATerm), ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  ATerm w_51 (ATerm t)
  {
    ATerm g_30 = t;
    int h_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_117(t);
        ;
        LocalPopChoice(h_30);
      }
    else
      {
        t = g_30;
        t = d_117(t);
        t = _2_0(f_117, w_51, t);
        t = e_117(t);
      }
    return(t);
  }
  t = w_51(t);
  return(t);
}
ATerm zip_1_0 (ATerm h_117 (ATerm), ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm l_30 = ATgetArgument(t, 0);
        if(((ATgetType(l_30) != AT_LIST) || !(ATisEmpty(l_30))))
          _fail(t);
        {
          ATerm m_30 = ATgetArgument(t, 1);
          if(((ATgetType(m_30) != AT_LIST) || !(ATisEmpty(m_30))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm n_30 = ATgetArgument(t, 0);
        if(((ATgetType(n_30) == AT_LIST) && !(ATisEmpty(n_30))))
          {
            x_51 = ATgetFirst((ATermList) n_30);
            z_51 = (ATerm) ATgetNext((ATermList) n_30);
          }
        else
          _fail(t);
        {
          ATerm o_30 = ATgetArgument(t, 1);
          if(((ATgetType(o_30) == AT_LIST) && !(ATisEmpty(o_30))))
            {
              y_51 = ATgetFirst((ATermList) o_30);
              a_52 = (ATerm) ATgetNext((ATermList) o_30);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, x_51, y_51), (ATerm) ATmakeAppl(sym__2, z_51, a_52));
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm b_52 = NULL,c_52 = NULL;
    if(match_cons(t, sym__2))
      {
        b_52 = ATgetArgument(t, 0);
        c_52 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(c_52), b_52);
    return(t);
  }
  t = genzip_4_0(q_7, r_7, s_7, h_117, t);
  return(t);
}
ATerm SubsVar_2_0 (ATerm u_136 (ATerm), ATerm v_136 (ATerm), ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  t = u_136(t);
  e_52 = t;
  t = v_136(t);
  f_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_52, f_52);
  t = lookup_0_0(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL,j_52 = NULL,k_52 = NULL;
  h_52 = t;
  {
    ATerm p_30 = t;
    int u_30 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_30 = ATgetArgument(t, 0);
            ATerm w_30 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(u_30);
        t = h_52;
      }
    else
      {
        t = p_30;
        {
          ATerm o_52 = NULL;
          if(match_cons(t, sym__3))
            {
              i_52 = ATgetArgument(t, 0);
              j_52 = ATgetArgument(t, 1);
              k_52 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, i_52, j_52);
          t = zip_1_0(_id, t);
          o_52 = t;
          t = (ATerm) ATmakeAppl(sym__2, o_52, k_52);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm f_136 (ATerm), ATerm g_136 (ATerm), ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      q_52 = ATgetArgument(t, 0);
      p_52 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_52;
  {
    ATerm t_7 (ATerm t)
    {
      ATerm u_7 (ATerm t)
      {
        t = q_52;
        return(t);
      }
      t = SubsVar_2_0(f_136, u_7, t);
      t = g_136(t);
      return(t);
    }
    t = alltd_1_0(t_7, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm h_136 (ATerm), ATerm t)
{
  t = substitute_2_0(h_136, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm v_7 (ATerm t)
  {
    ATerm x_52 = NULL,k_53 = NULL,l_53 = NULL,s_53 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        k_53 = ATgetArgument(t, 0);
        s_53 = ATgetArgument(t, 1);
        x_52 = ATgetArgument(t, 2);
        t = k_53;
        if(match_cons(t, sym_SVar_1))
          {
            l_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_53;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_52;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_53;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            k_53 = ATgetArgument(t, 0);
            s_53 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = k_53;
        if(match_cons(t, sym_SVar_1))
          {
            l_53 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = s_53;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = l_53;
      }
    return(t);
  }
  t = substitute_1_0(v_7, t);
  return(t);
}
ATerm spaste_1_0 (ATerm u_139 (ATerm), ATerm t)
{
  ATerm x_30 = t;
  int y_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_7 (ATerm t)
      {
        t = split_2_0(_id, u_139, t);
        {
          ATerm x_7 (ATerm t)
          {
            ATerm g_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
            if(match_cons(t, sym__2))
              {
                g_54 = ATgetArgument(t, 0);
                l_54 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = g_54;
            {
              ATerm z_30 = t;
              int a_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm b_31 = ATgetArgument(t, 0);
                      i_54 = ATgetArgument(t, 1);
                      j_54 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_31);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, l_54, i_54, j_54);
                }
              else
                {
                  t = z_30;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm c_31 = ATgetArgument(t, 0);
                      i_54 = ATgetArgument(t, 1);
                      j_54 = ATgetArgument(t, 2);
                      k_54 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, l_54, i_54, j_54, k_54);
                }
            }
            return(t);
          }
          t = zip_1_0(x_7, t);
        }
        return(t);
      }
      t = Let_2_0(w_7, _id, t);
      ;
      LocalPopChoice(y_30);
    }
  else
    {
      t = x_30;
      {
        ATerm h_31 = t;
        int i_31 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_7 (ATerm t)
            {
              t = split_2_0(_id, u_139, t);
              {
                ATerm z_7 (ATerm t)
                {
                  ATerm u_54 = NULL,w_54 = NULL,x_54 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      u_54 = ATgetArgument(t, 0);
                      x_54 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = u_54;
                  {
                    ATerm j_31 = t;
                    int q_31 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm r_31 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(q_31);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_54);
                      }
                    else
                      {
                        t = j_31;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm s_31 = ATgetArgument(t, 0);
                            w_54 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, x_54, w_54);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(z_7, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, y_7, _id, t);
            ;
            LocalPopChoice(i_31);
          }
        else
          {
            t = h_31;
            {
              ATerm x_31 = t;
              int y_31 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_8 (ATerm t)
                  {
                    t = split_2_0(_id, u_139, t);
                    {
                      ATerm b_8 (ATerm t)
                      {
                        ATerm c_55 = NULL,e_55 = NULL,f_55 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            c_55 = ATgetArgument(t, 0);
                            f_55 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = c_55;
                        {
                          ATerm z_31 = t;
                          int g_32 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm h_32 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(g_32);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, f_55);
                            }
                          else
                            {
                              t = z_31;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm i_32 = ATgetArgument(t, 0);
                                  e_55 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, f_55, e_55);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(b_8, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, a_8, _id, _id, t);
                  ;
                  LocalPopChoice(y_31);
                }
              else
                {
                  t = x_31;
                  {
                    ATerm p_32 = t;
                    int q_32 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_8 (ATerm t)
                        {
                          t = split_2_0(_id, u_139, t);
                          {
                            ATerm d_8 (ATerm t)
                            {
                              ATerm k_55 = NULL,m_55 = NULL,n_55 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  k_55 = ATgetArgument(t, 0);
                                  n_55 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = k_55;
                              {
                                ATerm r_32 = t;
                                int s_32 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm v_32 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_32);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_55);
                                  }
                                else
                                  {
                                    t = r_32;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm w_32 = ATgetArgument(t, 0);
                                        m_55 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, n_55, m_55);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(d_8, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, c_8, _id, _id, t);
                        ;
                        LocalPopChoice(q_32);
                      }
                    else
                      {
                        t = p_32;
                        {
                          ATerm e_8 (ATerm t)
                          {
                            ATerm r_55 = NULL;
                            t = u_139(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                r_55 = ATgetFirst((ATermList) t);
                                {
                                  ATerm x_32 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = r_55;
                            return(t);
                          }
                          t = Rec_2_0(e_8, _id, t);
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
ATerm Rec_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,x_55 = NULL;
  x_55 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_55 = ATgetArgument(t, 0);
      u_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_55);
  s_55 = t;
  t = t_55;
  t = c_101(t);
  v_55 = t;
  t = u_55;
  t = d_101(t);
  w_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, v_55, w_55), s_55);
  return(t);
}
ATerm SDef_3_0 (ATerm u_102 (ATerm), ATerm v_102 (ATerm), ATerm w_102 (ATerm), ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL;
  i_56 = t;
  if(match_cons(t, sym_SDef_3))
    {
      c_56 = ATgetArgument(t, 0);
      d_56 = ATgetArgument(t, 1);
      e_56 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_56);
  b_56 = t;
  t = c_56;
  t = u_102(t);
  f_56 = t;
  t = d_56;
  t = v_102(t);
  g_56 = t;
  t = e_56;
  t = w_102(t);
  h_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, f_56, g_56, h_56), b_56);
  return(t);
}
ATerm Let_2_0 (ATerm f_100 (ATerm), ATerm g_100 (ATerm), ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL,o_56 = NULL,p_56 = NULL,q_56 = NULL,r_56 = NULL;
  r_56 = t;
  if(match_cons(t, sym_Let_2))
    {
      n_56 = ATgetArgument(t, 0);
      o_56 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_56);
  m_56 = t;
  t = n_56;
  t = f_100(t);
  p_56 = t;
  t = o_56;
  t = g_100(t);
  q_56 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, p_56, q_56), m_56);
  return(t);
}
ATerm sboundin_3_0 (ATerm v_139 (ATerm), ATerm w_139 (ATerm), ATerm x_139 (ATerm), ATerm t)
{
  ATerm y_32 = t;
  int z_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(v_139, v_139, t);
      ;
      LocalPopChoice(z_32);
    }
  else
    {
      t = y_32;
      {
        ATerm b_33 = t;
        int e_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(x_139, x_139, v_139, t);
            ;
            LocalPopChoice(e_33);
          }
        else
          {
            t = b_33;
            {
              ATerm k_33 = t;
              int l_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(x_139, x_139, x_139, v_139, t);
                  ;
                  LocalPopChoice(l_33);
                }
              else
                {
                  t = k_33;
                  t = Rec_2_0(x_139, v_139, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm v_56 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm m_33 = ATgetArgument(t, 0);
      v_56 = ATgetArgument(t, 1);
      {
        ATerm n_33 = ATgetArgument(t, 2);
      }
      {
        ATerm o_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = v_56;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm w_56 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm p_33 = ATgetArgument(t, 0);
      w_56 = ATgetArgument(t, 1);
      {
        ATerm q_33 = ATgetArgument(t, 2);
      }
      {
        ATerm r_33 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = w_56;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm x_56 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm s_33 = ATgetArgument(t, 0);
      x_56 = ATgetArgument(t, 1);
      {
        ATerm t_33 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = x_56;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm z_56 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      z_56 = ATgetArgument(t, 0);
      {
        ATerm u_33 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_56;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm b_57 = NULL;
      ATerm v_33 = t;
      int w_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              b_57 = ATgetArgument(t, 0);
              {
                ATerm x_33 = ATgetArgument(t, 1);
              }
              {
                ATerm y_33 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(w_33);
          t = b_57;
        }
      else
        {
          t = v_33;
          if(match_cons(t, sym_SDefT_4))
            {
              b_57 = ATgetArgument(t, 0);
              {
                ATerm z_33 = ATgetArgument(t, 1);
              }
              {
                ATerm u_34 = ATgetArgument(t, 2);
              }
              {
                ATerm v_34 = ATgetArgument(t, 3);
              }
            }
          else
            _fail(t);
          t = b_57;
        }
      return(t);
    }
    t = map_1_0(h_8, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm e_100 (ATerm), ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL;
  k_57 = t;
  if(match_cons(t, sym_SVar_1))
    {
      i_57 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_57);
  h_57 = t;
  t = i_57;
  t = e_100(t);
  j_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, j_57), h_57);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm i_8 (ATerm t)
  {
    ATerm w_34 = t;
    int x_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind1_0_0(t);
        ;
        LocalPopChoice(x_34);
      }
    else
      {
        t = w_34;
        {
          ATerm y_34 = t;
          int z_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind2_0_0(t);
              ;
              LocalPopChoice(z_34);
            }
          else
            {
              t = y_34;
              {
                ATerm a_35 = t;
                int b_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_57 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        q_57 = ATgetArgument(t, 0);
                        {
                          ATerm c_35 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, q_57);
                    ;
                    LocalPopChoice(b_35);
                  }
                else
                  {
                    t = a_35;
                    {
                      ATerm d_35 = t;
                      int e_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Bind5_0_0(t);
                          ;
                          LocalPopChoice(e_35);
                        }
                      else
                        {
                          t = d_35;
                          t = Bind7_0_0(t);
                        }
                    }
                  }
              }
            }
        }
      }
    return(t);
  }
  t = rename_4_0(SVar_1_0, i_8, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm q_139 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(q_139, _id, t);
      ;
      LocalPopChoice(g_35);
    }
  else
    {
      t = f_35;
      {
        ATerm h_35 = t;
        int i_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_8 (ATerm t)
            {
              t = split_2_0(_id, q_139, t);
              {
                ATerm k_8 (ATerm t)
                {
                  ATerm y_57 = NULL,a_58 = NULL,b_58 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      y_57 = ATgetArgument(t, 0);
                      b_58 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = y_57;
                  {
                    ATerm j_35 = t;
                    int k_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm l_35 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_35);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_58);
                      }
                    else
                      {
                        t = j_35;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm m_35 = ATgetArgument(t, 0);
                            a_58 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, b_58, a_58);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(k_8, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, j_8, _id, t);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm l_8 (ATerm t)
              {
                t = split_2_0(_id, q_139, t);
                {
                  ATerm o_8 (ATerm t)
                  {
                    ATerm g_58 = NULL,i_58 = NULL,j_58 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        g_58 = ATgetArgument(t, 0);
                        j_58 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = g_58;
                    {
                      ATerm n_35 = t;
                      int o_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              ATerm p_35 = ATgetArgument(t, 0);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(o_35);
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_58);
                        }
                      else
                        {
                          t = n_35;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm q_35 = ATgetArgument(t, 0);
                              i_58 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, j_58, i_58);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(o_8, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, l_8, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm n_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL;
  q_58 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      o_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_58);
  n_58 = t;
  t = o_58;
  t = m_99(t);
  p_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, p_58), n_58);
  return(t);
}
ATerm RDefT_4_0 (ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm g_99 (ATerm), ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL,d_59 = NULL;
  d_59 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      v_58 = ATgetArgument(t, 0);
      w_58 = ATgetArgument(t, 1);
      x_58 = ATgetArgument(t, 2);
      y_58 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_59);
  u_58 = t;
  t = v_58;
  t = d_99(t);
  z_58 = t;
  t = w_58;
  t = e_99(t);
  a_59 = t;
  t = x_58;
  t = f_99(t);
  b_59 = t;
  t = y_58;
  t = g_99(t);
  c_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, z_58, a_59, b_59, c_59), u_58);
  return(t);
}
ATerm SDefT_4_0 (ATerm x_102 (ATerm), ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL,q_59 = NULL,r_59 = NULL,s_59 = NULL;
  s_59 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      i_59 = ATgetArgument(t, 0);
      j_59 = ATgetArgument(t, 1);
      k_59 = ATgetArgument(t, 2);
      l_59 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_59);
  h_59 = t;
  t = i_59;
  t = x_102(t);
  m_59 = t;
  t = j_59;
  t = y_102(t);
  n_59 = t;
  t = k_59;
  t = z_102(t);
  q_59 = t;
  t = l_59;
  t = a_103(t);
  r_59 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, m_59, n_59, q_59, r_59), h_59);
  return(t);
}
ATerm Scope_2_0 (ATerm p_100 (ATerm), ATerm q_100 (ATerm), ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL,b_60 = NULL,c_60 = NULL;
  c_60 = t;
  if(match_cons(t, sym_Scope_2))
    {
      y_59 = ATgetArgument(t, 0);
      z_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_60);
  x_59 = t;
  t = y_59;
  t = p_100(t);
  a_60 = t;
  t = z_59;
  t = q_100(t);
  b_60 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, a_60, b_60), x_59);
  return(t);
}
ATerm tboundin_3_0 (ATerm r_139 (ATerm), ATerm s_139 (ATerm), ATerm t_139 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(t_139, r_139, t);
      ;
      LocalPopChoice(s_35);
    }
  else
    {
      t = r_35;
      {
        ATerm t_35 = t;
        int u_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(t_139, t_139, t_139, r_139, t);
            ;
            LocalPopChoice(u_35);
          }
        else
          {
            t = t_35;
            {
              ATerm v_35 = t;
              int w_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(t_139, t_139, t_139, r_139, t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  t = DynamicRules_1_0(r_139, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm g_60 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      ATerm y_35 = ATgetArgument(t, 1);
      g_60 = ATgetArgument(t, 2);
      {
        ATerm z_35 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = g_60;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm r_8 (ATerm t)
  {
    ATerm k_60 = NULL;
    ATerm a_36 = t;
    int b_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            k_60 = ATgetArgument(t, 0);
            {
              ATerm c_36 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(b_36);
        t = k_60;
      }
    else
      {
        t = a_36;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            k_60 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = k_60;
      }
    return(t);
  }
  t = map_1_0(r_8, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm n_60 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm d_36 = ATgetArgument(t, 0);
      ATerm e_36 = ATgetArgument(t, 1);
      n_60 = ATgetArgument(t, 2);
      {
        ATerm f_36 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = n_60;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm o_60 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      o_60 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_60;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm c_119 (ATerm), ATerm t)
{
  ATerm p_60 = NULL,q_60 = NULL;
  if(match_cons(t, sym__2))
    {
      q_60 = ATgetArgument(t, 0);
      p_60 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_60;
  {
    ATerm r_60 (ATerm t)
    {
      ATerm g_36 = t;
      int h_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_60;
          ;
          LocalPopChoice(h_36);
        }
      else
        {
          t = g_36;
          {
            ATerm i_36 = t;
            int j_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_8 (ATerm t)
                {
                  t = p_60;
                  return(t);
                }
                t = HdMember_p__2_0(c_119, s_8, t);
                t = r_60(t);
                ;
                LocalPopChoice(j_36);
              }
            else
              {
                t = i_36;
                t = Cons_2_0(_id, r_60, t);
              }
          }
        }
      return(t);
    }
    t = r_60(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm v_8 (ATerm t)
  {
    ATerm s_60 = NULL;
    if(match_cons(t, sym__2))
      {
        s_60 = ATgetArgument(t, 0);
        if((s_60 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(v_8, t);
  return(t);
}
ATerm foldr_3_0 (ATerm r_121 (ATerm), ATerm s_121 (ATerm), ATerm t_121 (ATerm), ATerm t)
{
  ATerm k_36 = t;
  int l_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_121(t);
      ;
      LocalPopChoice(l_36);
    }
  else
    {
      t = k_36;
      {
        ATerm v_60 = NULL,w_60 = NULL,z_60 = NULL,a_61 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_60 = ATgetFirst((ATermList) t);
            w_60 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = v_60;
        t = t_121(t);
        z_60 = t;
        t = w_60;
        t = foldr_3_0(r_121, s_121, t_121, t);
        a_61 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_60, a_61);
        t = s_121(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm p_119 (ATerm), ATerm q_119 (ATerm), ATerm r_119 (ATerm), ATerm t)
{
  ATerm b_61 = NULL,c_61 = NULL;
  b_61 = t;
  t = SSL_explode_term(b_61);
  if(match_cons(t, sym__2))
    {
      ATerm m_36 = ATgetArgument(t, 0);
      c_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_61;
  t = foldr_3_0(p_119, q_119, r_119, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm g_119 (ATerm), ATerm h_119 (ATerm), ATerm t)
{
  ATerm d_61 = NULL,e_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_61 = ATgetFirst((ATermList) t);
      e_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_119(t);
  {
    ATerm w_8 (ATerm t)
    {
      ATerm f_61 = NULL;
      f_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_61, f_61);
      t = g_119(t);
      return(t);
    }
    t = fetch_1_0(w_8, t);
    t = e_61;
  }
  return(t);
}
ATerm diff_1_0 (ATerm y_118 (ATerm), ATerm t)
{
  ATerm g_61 = NULL,h_61 = NULL;
  if(match_cons(t, sym__2))
    {
      h_61 = ATgetArgument(t, 0);
      g_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_61;
  {
    ATerm i_61 (ATerm t)
    {
      ATerm n_36 = t;
      int o_36 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(o_36);
        }
      else
        {
          t = n_36;
          {
            ATerm p_36 = t;
            int q_36 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_8 (ATerm t)
                {
                  t = g_61;
                  return(t);
                }
                t = HdMember_p__2_0(y_118, x_8, t);
                t = i_61(t);
                ;
                LocalPopChoice(q_36);
              }
            else
              {
                t = p_36;
                t = Cons_2_0(_id, i_61, t);
              }
          }
        }
      return(t);
    }
    t = i_61(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm j_61 = NULL,k_61 = NULL,l_61 = NULL,m_61 = NULL,n_61 = NULL,o_61 = NULL,p_61 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm r_36 = ATgetFirst((ATermList) t);
      if(match_cons(r_36, sym__2))
        {
          j_61 = ATgetArgument(r_36, 0);
          k_61 = ATgetArgument(r_36, 1);
        }
      else
        _fail(t);
      l_61 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(k_61);
  if(match_cons(t, sym__2))
    {
      m_61 = ATgetArgument(t, 0);
      n_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(j_61);
  if(match_cons(t, sym__2))
    {
      if((m_61 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      o_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_61, n_61);
  t = zip_1_0(_id, t);
  p_61 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_61, l_61);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm i_124 (ATerm), ATerm j_124 (ATerm), ATerm t)
{
  ATerm q_61 (ATerm t)
  {
    ATerm s_36 = t;
    int t_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_124(t);
        ;
        LocalPopChoice(t_36);
      }
    else
      {
        t = s_36;
        t = j_124(t);
        t = q_61(t);
      }
    return(t);
  }
  t = q_61(t);
  return(t);
}
ATerm for_3_0 (ATerm l_124 (ATerm), ATerm m_124 (ATerm), ATerm n_124 (ATerm), ATerm t)
{
  t = l_124(t);
  t = while_not_2_0(m_124, n_124, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm u_36 = t;
  int v_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_8 (ATerm t)
      {
        ATerm b_62 = NULL;
        b_62 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, b_62);
        return(t);
      }
      ATerm d_9 (ATerm t)
      {
        ATerm h_9 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, h_9, t);
        return(t);
      }
      ATerm e_9 (ATerm t)
      {
        ATerm w_36 = t;
        int x_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 (ATerm t)
            {
              ATerm y_36 = t;
              int z_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_62 = NULL,l_62 = NULL,m_62 = NULL,q_62 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      k_62 = ATgetFirst((ATermList) t);
                      q_62 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = k_62;
                  if(match_cons(t, sym__2))
                    {
                      l_62 = ATgetArgument(t, 0);
                      m_62 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = m_62;
                  if((l_62 != t))
                    {
                      _fail(t);
                    }
                  t = q_62;
                  ;
                  LocalPopChoice(z_36);
                }
              else
                {
                  t = y_36;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, i_9, t);
            ;
            LocalPopChoice(x_36);
          }
        else
          {
            t = w_36;
            {
              ATerm y_62 = NULL,z_62 = NULL,a_63 = NULL,e_63 = NULL;
              if(match_cons(t, sym__2))
                {
                  y_62 = ATgetArgument(t, 0);
                  z_62 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = z_62;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_63 = ATgetFirst((ATermList) t);
                  e_63 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_62), a_63), e_63);
            }
          }
        return(t);
      }
      t = for_3_0(y_8, d_9, e_9, t);
      ;
      LocalPopChoice(v_36);
    }
  else
    {
      t = u_36;
      {
        ATerm j_9 (ATerm t)
        {
          ATerm i_63 = NULL;
          if(match_cons(t, sym__2))
            {
              i_63 = ATgetArgument(t, 0);
              if((i_63 != ATgetArgument(t, 1)))
                {
                  _fail(ATgetArgument(t, 1));
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = diff_1_0(j_9, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm m_138 (ATerm), ATerm n_138 (ATerm), ATerm o_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm m_63 (ATerm t)
  {
    ATerm a_37 = t;
    int b_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_138(t);
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
              ATerm j_63 = NULL,l_63 = NULL;
              j_63 = t;
              t = n_138(t);
              l_63 = t;
              t = j_63;
              {
                ATerm k_9 (ATerm t)
                {
                  ATerm m_9 (ATerm t)
                  {
                    t = l_63;
                    return(t);
                  }
                  t = split_2_0(m_63, m_9, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm l_9 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = o_138(k_9, m_63, l_9, t);
                {
                  ATerm n_9 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(n_9, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(d_37);
            }
          else
            {
              t = c_37;
              {
                ATerm p_9 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(p_9, union_0_0, m_63, t);
              }
            }
        }
      }
    return(t);
  }
  t = m_63(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    ATerm n_63 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        n_63 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, n_63);
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    ATerm e_37 = t;
    int f_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
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
              t = Bind4_0_0(t);
              ;
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
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(j_37);
                  }
                else
                  {
                    t = i_37;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(q_9, r_9, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm q_63 = NULL,u_63 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      u_63 = ATgetArgument(t, 0);
      t = u_63;
      if(match_cons(t, sym_Rule_3))
        {
          q_63 = ATgetArgument(t, 0);
          {
            ATerm k_37 = ATgetArgument(t, 1);
          }
          {
            ATerm l_37 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = q_63;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          u_63 = ATgetArgument(t, 0);
          {
            ATerm v_37 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = u_63;
    }
  return(t);
}
ATerm Var_1_0 (ATerm v_96 (ATerm), ATerm t)
{
  ATerm y_63 = NULL,z_63 = NULL,a_64 = NULL,b_64 = NULL;
  b_64 = t;
  if(match_cons(t, sym_Var_1))
    {
      z_63 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_64);
  y_63 = t;
  t = z_63;
  t = v_96(t);
  a_64 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, a_64), y_63);
  return(t);
}
ATerm DistBinding_2_0 (ATerm h_137 (ATerm), ATerm i_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm f_64 = NULL,g_64 = NULL,h_64 = NULL;
  if(match_cons(t, sym__3))
    {
      h_64 = ATgetArgument(t, 0);
      g_64 = ATgetArgument(t, 1);
      f_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = h_64;
  {
    ATerm s_9 (ATerm t)
    {
      ATerm i_64 = NULL;
      i_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_64, f_64);
      t = h_137(t);
      return(t);
    }
    ATerm t_9 (ATerm t)
    {
      ATerm j_64 = NULL;
      j_64 = t;
      t = (ATerm) ATmakeAppl(sym__2, j_64, g_64);
      t = h_137(t);
      return(t);
    }
    t = i_137(s_9, t_9, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm b_137 (ATerm), ATerm c_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm k_64 = NULL,l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL,q_64 = NULL;
  if(match_cons(t, sym__2))
    {
      k_64 = ATgetArgument(t, 0);
      l_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_64;
  t = b_137(t);
  m_64 = t;
  t = map_1_0(new_0_0, t);
  n_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_64, n_64);
  t = zip_1_0(_id, t);
  o_64 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_64, l_64);
  t = conc_0_0(t);
  p_64 = t;
  t = k_64;
  {
    ATerm u_9 (ATerm t)
    {
      t = n_64;
      return(t);
    }
    t = c_137(u_9, t);
    q_64 = t;
    t = (ATerm) ATmakeAppl(sym__3, q_64, l_64, p_64);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm u_64 = NULL,v_64 = NULL,x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL;
  if(match_cons(t, sym__2))
    {
      x_64 = ATgetArgument(t, 0);
      y_64 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_64;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_64 = ATgetFirst((ATermList) t);
      a_65 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_64;
  if(match_cons(t, sym__2))
    {
      u_64 = ATgetArgument(t, 0);
      v_64 = ATgetArgument(t, 1);
      {
        ATerm w_37 = t;
        int x_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_64;
            if((x_64 != t))
              {
                _fail(t);
              }
            t = v_64;
            ;
            LocalPopChoice(x_37);
          }
        else
          {
            t = w_37;
            t = (ATerm) ATmakeAppl(sym__2, x_64, a_65);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, x_64, a_65);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm m_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm i_65 = NULL,j_65 = NULL;
  if(match_cons(t, sym__2))
    {
      j_65 = ATgetArgument(t, 0);
      i_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_65;
  {
    ATerm v_9 (ATerm t)
    {
      ATerm w_9 (ATerm t)
      {
        t = i_65;
        return(t);
      }
      t = split_2_0(_id, w_9, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = m_137(v_9, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm f_127 (ATerm), ATerm t)
{
  ATerm k_65 = NULL,l_65 = NULL;
  if(match_cons(t, sym__2))
    {
      l_65 = ATgetArgument(t, 0);
      k_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_65;
  {
    ATerm x_9 (ATerm t)
    {
      ATerm m_65 = NULL;
      m_65 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_65, k_65);
      t = f_127(t);
      return(t);
    }
    t = SRTS_all(x_9, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_126 (ATerm), ATerm t)
{
  ATerm n_65 (ATerm t)
  {
    ATerm y_37 = t;
    int a_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_126(t);
        ;
        LocalPopChoice(a_38);
      }
    else
      {
        t = y_37;
        t = all_dist_1_0(n_65, t);
      }
    return(t);
  }
  t = n_65(t);
  return(t);
}
ATerm rename_4_0 (ATerm w_136 (ATerm (ATerm), ATerm), ATerm x_136 (ATerm), ATerm y_136 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm z_136 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_65 = NULL;
  o_65 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_65, (ATerm) ATempty);
  {
    ATerm p_65 (ATerm t)
    {
      ATerm y_9 (ATerm t)
      {
        ATerm b_38 = t;
        int c_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(w_136, t);
            ;
            LocalPopChoice(c_38);
          }
        else
          {
            t = b_38;
            t = RnBinding_2_0(x_136, z_136, t);
            t = DistBinding_2_0(p_65, y_136, t);
          }
        return(t);
      }
      t = env_alltd_1_0(y_9, t);
      return(t);
    }
    t = p_65(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    ATerm e_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(f_38);
      }
    else
      {
        t = e_38;
        {
          ATerm g_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(h_38);
            }
          else
            {
              t = g_38;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, z_9, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm c_123 (ATerm), ATerm t)
{
  ATerm t_65 = NULL,u_65 = NULL,z_3 = NULL;
  t_65 = t;
  t = term_i_38;
  t = c_123(t);
  u_65 = t;
  t = SSL_table_get(u_65, t_65);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_3 = ATgetFirst((ATermList) t);
      {
        ATerm j_38 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_3;
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL,z_65 = NULL,a_66 = NULL,b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL,f_66 = NULL,g_66 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm k_38 = ATgetArgument(t, 0);
      if(match_cons(k_38, sym_SVar_1))
        {
          v_65 = ATgetArgument(k_38, 0);
        }
      else
        _fail(t);
      w_65 = ATgetArgument(t, 1);
      x_65 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, v_65), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  {
    ATerm a_10 (ATerm t)
    {
      t = term_m_38;
      return(t);
    }
    t = rewrite_1_0(a_10, t);
    if(match_cons(t, sym_Defined_4))
      {
        ATerm n_38 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) n_38) != ATmakeSymbol("b_0", 0, ATtrue)))
          _fail(t);
        y_65 = ATgetArgument(t, 1);
        z_65 = ATgetArgument(t, 2);
        a_66 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, v_65, y_65, a_66, z_65);
    t = strename_0_0(t);
    if(match_cons(t, sym_SDefT_4))
      {
        if((v_65 != ATgetArgument(t, 0)))
          {
            _fail(ATgetArgument(t, 0));
          }
        b_66 = ATgetArgument(t, 1);
        {
          ATerm o_38 = ATgetArgument(t, 2);
        }
        c_66 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = b_66;
    {
      ATerm b_10 (ATerm t)
      {
        ATerm h_66 = NULL;
        if(match_cons(t, sym_VarDec_2))
          {
            h_66 = ATgetArgument(t, 0);
            {
              ATerm p_38 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = h_66;
        return(t);
      }
      t = map_1_0(b_10, t);
      d_66 = t;
      t = (ATerm) ATmakeAppl(sym__3, d_66, w_65, c_66);
      t = ssubs_0_0(t);
      e_66 = t;
      t = a_66;
      {
        ATerm c_10 (ATerm t)
        {
          ATerm i_66 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              i_66 = ATgetArgument(t, 0);
              {
                ATerm q_38 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = i_66;
          return(t);
        }
        t = map_1_0(c_10, t);
        f_66 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_65, f_66);
        {
          ATerm d_10 (ATerm t)
          {
            ATerm j_66 = NULL,k_66 = NULL;
            if(match_cons(t, sym__2))
              {
                j_66 = ATgetArgument(t, 0);
                k_66 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_66), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_66)));
            return(t);
          }
          t = zip_1_0(d_10, t);
          g_66 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, f_66, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, g_66), e_66));
          t = simplify0_0_0(t);
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
  ATerm r_66 = NULL,s_66 = NULL;
  r_66 = t;
  t = new_0_0(t);
  s_66 = t;
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_u_38, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, s_66), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        {
          ATerm e_10 (ATerm t)
          {
            ATerm f_10 (ATerm t)
            {
              t = term_v_38;
              return(t);
            }
            t = say_1_0(f_10, t);
            return(t);
          }
          t = if_verbose2_1_0(e_10, t);
          _fail(t);
        }
      }
    {
      ATerm y_38 = t;
      int z_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_66 = NULL,u_66 = NULL,v_66 = NULL,w_66 = NULL,x_66 = NULL,y_66 = NULL,z_66 = NULL;
          t_66 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              u_66 = ATgetArgument(t, 0);
              z_66 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_66;
          if(match_cons(t, sym_CallT_3))
            {
              v_66 = ATgetArgument(t, 0);
              x_66 = ATgetArgument(t, 1);
              y_66 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = v_66;
          if(match_cons(t, sym_SVar_1))
            {
              w_66 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = y_66;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_66;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = w_66;
          if((s_66 != t))
            {
              _fail(t);
            }
          t = t_66;
          ;
          LocalPopChoice(z_38);
        }
      else
        {
          t = y_38;
          {
            ATerm g_10 (ATerm t)
            {
              ATerm h_10 (ATerm t)
              {
                t = term_c_39;
                return(t);
              }
              t = debug_1_0(h_10, t);
              return(t);
            }
            t = if_verbose1_1_0(g_10, t);
            _fail(t);
          }
        }
      {
        ATerm i_10 (ATerm t)
        {
          ATerm j_10 (ATerm t)
          {
            t = term_d_39;
            return(t);
          }
          t = say_1_0(j_10, t);
          return(t);
        }
        t = if_verbose2_1_0(i_10, t);
        t = r_66;
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
ATerm assert_1_0 (ATerm a_123 (ATerm), ATerm t)
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL,d_67 = NULL,e_67 = NULL;
  if(match_cons(t, sym__2))
    {
      a_67 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_123(t);
  c_67 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_67, a_67, b_67);
  t = table_push_0_0(t);
  {
    ATerm g_39 = t;
    int h_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(c_67, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(h_39);
      }
    else
      {
        t = g_39;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_67 = ATgetFirst((ATermList) t);
        e_67 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(c_67, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(e_67), (ATerm) ATinsert(CheckATermList(d_67), a_67)));
    t = (ATerm) ATmakeAppl(sym__2, a_67, b_67);
  }
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm f_67 = NULL,g_67 = NULL,h_67 = NULL,i_67 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      f_67 = ATgetArgument(t, 0);
      g_67 = ATgetArgument(t, 1);
      h_67 = ATgetArgument(t, 2);
      i_67 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, f_67), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_j_39, g_67, i_67, h_67));
  {
    ATerm k_10 (ATerm t)
    {
      t = term_m_38;
      return(t);
    }
    t = assert_1_0(k_10, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, f_67, g_67, h_67, i_67);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm x_95 (ATerm), ATerm t)
{
  ATerm j_67 = NULL,k_67 = NULL,l_67 = NULL,m_67 = NULL;
  m_67 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_67);
  j_67 = t;
  t = k_67;
  t = x_95(t);
  l_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, l_67), j_67);
  return(t);
}
ATerm Signature_1_0 (ATerm y_95 (ATerm), ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  t_67 = t;
  if(match_cons(t, sym_Signature_1))
    {
      r_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_67);
  q_67 = t;
  t = r_67;
  t = y_95(t);
  s_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, s_67), q_67);
  return(t);
}
ATerm Specification_1_0 (ATerm c_96 (ATerm), ATerm t)
{
  ATerm x_67 = NULL,y_67 = NULL,z_67 = NULL,a_68 = NULL;
  a_68 = t;
  if(match_cons(t, sym_Specification_1))
    {
      y_67 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_68);
  x_67 = t;
  t = y_67;
  t = c_96(t);
  z_67 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, z_67), x_67);
  return(t);
}
ATerm declare_inline_rules_0_0 (ATerm t)
{
  ATerm l_10 (ATerm t)
  {
    ATerm m_10 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm n_10 (ATerm t)
    {
      ATerm o_10 (ATerm t)
      {
        ATerm q_10 (ATerm t)
        {
          t = map_1_0(declare_inline_rule_0_0, t);
          return(t);
        }
        t = Strategies_1_0(q_10, t);
        return(t);
      }
      ATerm p_10 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(o_10, p_10, t);
      return(t);
    }
    t = Cons_2_0(m_10, n_10, t);
    return(t);
  }
  t = Specification_1_0(l_10, t);
  return(t);
}
ATerm _2_0 (ATerm k_94 (ATerm), ATerm l_94 (ATerm), ATerm t)
{
  ATerm e_68 = NULL,f_68 = NULL,g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  j_68 = t;
  if(match_cons(t, sym__2))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_68);
  e_68 = t;
  t = f_68;
  t = k_94(t);
  h_68 = t;
  t = g_68;
  t = l_94(t);
  i_68 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, h_68, i_68), e_68);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL;
  n_68 = t;
  t = term_i_38;
  t = whoami_0_0(t);
  o_68 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), o_68), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = n_68;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm k_39 = t;
  int n_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(n_39);
    }
  else
    {
      t = k_39;
      {
        ATerm r_68 = NULL,s_68 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_68 = ATgetFirst((ATermList) t);
            s_68 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_68;
        {
          ATerm r_10 (ATerm t)
          {
            t = s_68;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(r_10, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm w_68 = NULL,x_68 = NULL;
  w_68 = t;
  t = SSL_explode_term(w_68);
  if(match_cons(t, sym__2))
    {
      ATerm o_39 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_39) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      x_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_68;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm p_115 (ATerm), ATerm t)
{
  ATerm y_68 (ATerm t)
  {
    ATerm p_39 = t;
    int t_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_68, t);
        ;
        LocalPopChoice(t_39);
      }
    else
      {
        t = p_39;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_115(t);
      }
    return(t);
  }
  t = y_68(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm z_68 = NULL,a_69 = NULL;
  if(match_cons(t, sym__2))
    {
      a_69 = ATgetArgument(t, 0);
      z_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_69;
  {
    ATerm s_10 (ATerm t)
    {
      t = z_68;
      return(t);
    }
    t = at_end_1_0(s_10, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm u_39 = t;
  int v_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(v_39);
    }
  else
    {
      t = u_39;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_69 = NULL;
  ATerm t_10 (ATerm t)
  {
    ATerm c_69 = NULL;
    c_69 = t;
    t = SSL_explode_string(c_69);
    return(t);
  }
  ATerm u_10 (ATerm t)
  {
    ATerm d_69 = NULL;
    d_69 = t;
    t = SSL_explode_string(d_69);
    return(t);
  }
  t = _2_0(t_10, u_10, t);
  t = conc_0_0(t);
  b_69 = t;
  t = SSL_implode_string(b_69);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm x_39 = t;
  int y_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_69 = NULL;
      j_69 = t;
      t = SSL_is_string(j_69);
      ;
      LocalPopChoice(y_39);
    }
  else
    {
      t = x_39;
      {
        ATerm z_39 = t;
        int a_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_10 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(v_10, t);
            ;
            LocalPopChoice(a_40);
          }
        else
          {
            t = z_39;
            {
              ATerm n_69 = NULL,o_69 = NULL,p_69 = NULL;
              n_69 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_69 = ATgetArgument(t, 0);
                  t = o_69;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_69 = ATgetArgument(t, 0);
                      t = o_69;
                      {
                        ATerm c_40 = t;
                        int d_40 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(d_40);
                          }
                        else
                          {
                            t = c_40;
                            {
                              ATerm w_10 (ATerm t)
                              {
                                t = term_e_40;
                                return(t);
                              }
                              t = debug_1_0(w_10, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_69 = NULL,u_69 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_69 = ATgetArgument(t, 0);
                          p_69 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_69;
                      t = eval_config_0_0(t);
                      t_69 = t;
                      t = p_69;
                      t = eval_config_0_0(t);
                      u_69 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_69, u_69);
                      t = conc_strings_0_0(t);
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
  ATerm x_69 = NULL;
  x_69 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_69);
  {
    ATerm y_10 (ATerm t)
    {
      ATerm y_69 = NULL;
      t = eval_config_0_0(t);
      y_69 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), x_69, y_69);
      t = y_69;
      return(t);
    }
    t = try_1_0(y_10, t);
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm z_10 (ATerm t)
  {
    ATerm z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm f_40 = ATgetArgument(t, 0);
        if(match_cons(f_40, sym_Stream_1))
          {
            z_69 = ATgetArgument(f_40, 0);
          }
        else
          _fail(t);
        a_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(z_69, a_70);
    b_70 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), b_70);
    c_70 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, c_70);
    return(t);
  }
  t = WriteToFile_1_0(z_10, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm n_130 (ATerm), ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL;
  if(match_cons(t, sym__2))
    {
      d_70 = ATgetArgument(t, 0);
      e_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_70, term_g_40);
  t = open_stream_0_0(t);
  f_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_70, e_70);
  t = n_130(t);
  t = fclose_0_0(t);
  t = e_70;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm a_11 (ATerm t)
  {
    ATerm g_70 = NULL,h_70 = NULL,k_70 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm h_40 = ATgetArgument(t, 0);
        if(match_cons(h_40, sym_Stream_1))
          {
            g_70 = ATgetArgument(h_40, 0);
          }
        else
          _fail(t);
        h_70 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(g_70, h_70);
    k_70 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_70);
    return(t);
  }
  t = WriteToFile_1_0(a_11, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL;
  l_70 = t;
  {
    ATerm b_11 (ATerm t)
    {
      ATerm i_40 = t;
      int j_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_11 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                m_70 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(c_11, t);
          ;
          LocalPopChoice(j_40);
        }
      else
        {
          t = i_40;
          t = term_k_40;
          m_70 = t;
        }
      return(t);
    }
    t = _2_0(b_11, _id, t);
    t = l_70;
    {
      ATerm d_11 (ATerm t)
      {
        ATerm e_11 (ATerm t)
        {
          t = not_null(m_70);
          return(t);
        }
        t = split_2_0(e_11, _id, t);
        return(t);
      }
      t = _2_0(_id, d_11, t);
      {
        ATerm l_40 = t;
        int m_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 (ATerm t)
            {
              ATerm g_11 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(g_11, t);
              return(t);
            }
            t = _2_0(f_11, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(m_40);
          }
        else
          {
            t = l_40;
            t = _2_0(_id, WriteToTextFile_0_0, t);
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
ATerm apply_strategy_1_0 (ATerm z_131 (ATerm), ATerm t)
{
  ATerm n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  n_70 = t;
  t = dtime_0_0(t);
  t = n_70;
  t = z_131(t);
  o_70 = t;
  t = dtime_0_0(t);
  p_70 = t;
  t = o_70;
  if(match_cons(t, sym__2))
    {
      q_70 = ATgetArgument(t, 0);
      r_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_70), (ATerm) ATmakeAppl(sym_Runtime_1, p_70)), r_70);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_71 (ATerm z_70, ATerm t)
  {
    t = SSL_fclose(z_70);
    return(t);
  }
  ATerm c_71 = NULL,d_71 = NULL;
  d_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_71 = ATgetArgument(t, 0);
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_71);
            ;
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            t = f_71(d_71, t);
          }
      }
    }
  else
    {
      t = f_71(d_71, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm z_129 (ATerm), ATerm t)
{
  ATerm g_71 = NULL,h_71 = NULL;
  g_71 = t;
  t = z_129(t);
  h_71 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_71), h_71));
  t = g_71;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_71 = NULL;
  t = SSL_stdin_stream();
  i_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_71);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_71 = NULL;
  t = SSL_stdout_stream();
  j_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_71);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_71 = NULL;
  t = SSL_stderr_stream();
  k_71 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_71);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm m_71 = NULL;
  m_71 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_71;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_71;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_71;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm s_40 = ATgetArgument(t, 0);
      ATerm t_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_40 = t;
    int v_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_4 = NULL,u_4 = NULL;
        t_4 = t;
        t = SSL_explode_term(t_4);
        if(match_cons(t, sym__2))
          {
            ATerm w_40 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) w_40) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm x_40 = ATgetArgument(t, 1);
              if(((ATgetType(x_40) == AT_LIST) && !(ATisEmpty(x_40))))
                {
                  u_4 = ATgetFirst((ATermList) x_40);
                  {
                    ATerm y_40 = (ATerm) ATgetNext((ATermList) x_40);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = u_4;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(v_40);
      }
    else
      {
        t = u_40;
        {
          ATerm z_40 = t;
          int a_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
              ATerm h_11 (ATerm t)
              {
                ATerm s_71 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_71 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_71;
                return(t);
              }
              t = _2_0(h_11, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_71 = ATgetArgument(t, 0);
                  q_71 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_71, q_71);
              r_71 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_71);
              ;
              LocalPopChoice(a_41);
            }
          else
            {
              t = z_40;
              {
                ATerm t_71 = NULL,u_71 = NULL,v_71 = NULL;
                ATerm i_11 (ATerm t)
                {
                  ATerm w_71 = NULL;
                  w_71 = t;
                  t = SSL_is_string(w_71);
                  return(t);
                }
                t = _2_0(i_11, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_71 = ATgetArgument(t, 0);
                    u_71 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_71, u_71);
                v_71 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_71);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  ATerm e_41 = t;
  int f_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_72 = NULL;
      a_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_72, term_g_41);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_41);
    }
  else
    {
      t = e_41;
      {
        ATerm j_11 (ATerm t)
        {
          t = term_h_41;
          return(t);
        }
        t = debug_1_0(j_11, t);
        _fail(t);
      }
    }
  x_71 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_71 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_71);
  y_71 = t;
  t = x_71;
  t = fclose_0_0(t);
  t = y_71;
  return(t);
}
ATerm split_2_0 (ATerm b_114 (ATerm), ATerm c_114 (ATerm), ATerm t)
{
  ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL;
  c_72 = t;
  t = b_114(t);
  d_72 = t;
  t = c_72;
  t = c_114(t);
  e_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_72, e_72);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL;
  f_72 = t;
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_11 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              g_72 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(k_11, t);
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        t = term_k_41;
        g_72 = t;
      }
    t = f_72;
    {
      ATerm l_11 (ATerm t)
      {
        t = not_null(g_72);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, l_11, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_11 (ATerm t)
  {
    ATerm i_72 = NULL;
    i_72 = t;
    if(match_string(t, "-k"))
      {
        t = i_72;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = i_72;
      }
    return(t);
  }
  ATerm n_11 (ATerm t)
  {
    ATerm j_72 = NULL,k_72 = NULL;
    j_72 = t;
    t = SSL_string_to_int(j_72);
    k_72 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_72);
    t = j_72;
    return(t);
  }
  ATerm o_11 (ATerm t)
  {
    t = term_l_41;
    return(t);
  }
  t = ArgOption_3_0(m_11, n_11, o_11, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm d_42 = t;
  int e_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_11 (ATerm t)
      {
        ATerm m_72 = NULL;
        m_72 = t;
        if(match_string(t, "-S"))
          {
            t = m_72;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = m_72;
          }
        return(t);
      }
      ATerm q_11 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_g_42;
        return(t);
      }
      ATerm r_11 (ATerm t)
      {
        t = term_h_42;
        return(t);
      }
      t = Option_3_0(p_11, q_11, r_11, t);
      ;
      LocalPopChoice(e_42);
    }
  else
    {
      t = d_42;
      {
        ATerm i_42 = t;
        int j_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_11 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm v_11 (ATerm t)
            {
              ATerm n_72 = NULL,o_72 = NULL;
              n_72 = t;
              t = SSL_string_to_int(n_72);
              o_72 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_72);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, n_72);
              return(t);
            }
            ATerm x_11 (ATerm t)
            {
              t = term_k_42;
              return(t);
            }
            t = ArgOption_3_0(t_11, v_11, x_11, t);
            ;
            LocalPopChoice(j_42);
          }
        else
          {
            t = i_42;
            {
              ATerm z_11 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm a_12 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_42;
                return(t);
              }
              ATerm b_12 (ATerm t)
              {
                t = term_p_42;
                return(t);
              }
              t = Option_3_0(z_11, a_12, b_12, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm c_12 (ATerm t)
  {
    ATerm q_72 = NULL;
    q_72 = t;
    if(match_string(t, "-o"))
      {
        t = q_72;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = q_72;
      }
    return(t);
  }
  ATerm d_12 (ATerm t)
  {
    ATerm r_72 = NULL;
    r_72 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), r_72);
    t = (ATerm) ATmakeAppl(sym_Output_1, r_72);
    return(t);
  }
  ATerm e_12 (ATerm t)
  {
    t = term_w_42;
    return(t);
  }
  t = ArgOption_3_0(c_12, d_12, e_12, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm x_42 = t;
  int y_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(y_42);
    }
  else
    {
      t = x_42;
      {
        ATerm f_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm g_12 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_z_42;
          return(t);
        }
        ATerm h_12 (ATerm t)
        {
          t = term_a_43;
          return(t);
        }
        t = Option_3_0(f_12, g_12, h_12, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL;
  u_72 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = u_72;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm c_73 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_72 = ATgetFirst((ATermList) t);
          w_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_72;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_72 = ATgetFirst((ATermList) t);
          y_72 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_72;
      t = i_0(t);
      t = x_72;
      t = k_0(t);
      c_73 = t;
      t = (ATerm) ATinsert(CheckATermList(y_72), c_73);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm i_12 (ATerm t)
  {
    ATerm e_73 = NULL;
    e_73 = t;
    if(match_string(t, "-i"))
      {
        t = e_73;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = e_73;
      }
    return(t);
  }
  ATerm j_12 (ATerm t)
  {
    ATerm f_73 = NULL;
    f_73 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), f_73);
    t = (ATerm) ATmakeAppl(sym_Input_1, f_73);
    return(t);
  }
  ATerm k_12 (ATerm t)
  {
    t = term_b_43;
    return(t);
  }
  t = ArgOption_3_0(i_12, j_12, k_12, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      {
        ATerm e_43 = t;
        int f_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(f_43);
          }
        else
          {
            t = e_43;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_73 = NULL;
  t = report_run_time_0_0(t);
  t = term_i_38;
  t = whoami_0_0(t);
  g_73 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), g_73));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_43;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm p_121 (ATerm), ATerm q_121 (ATerm), ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_121(t);
      ;
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      {
        ATerm j_73 = NULL,k_73 = NULL,n_73 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_73 = ATgetFirst((ATermList) t);
            k_73 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = k_73;
        t = foldr_2_0(p_121, q_121, t);
        n_73 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_73, n_73);
        t = q_121(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm n_119 (ATerm), ATerm o_119 (ATerm), ATerm t)
{
  ATerm o_73 = NULL,p_73 = NULL;
  o_73 = t;
  t = SSL_explode_term(o_73);
  if(match_cons(t, sym__2))
    {
      ATerm s_43 = ATgetArgument(t, 0);
      p_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_73;
  t = foldr_2_0(n_119, o_119, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm q_73 = NULL;
  t = times_0_0(t);
  {
    ATerm l_12 (ATerm t)
    {
      t = term_f_42;
      return(t);
    }
    ATerm m_12 (ATerm t)
    {
      ATerm r_73 = NULL,s_73 = NULL;
      if(match_cons(t, sym__2))
        {
          r_73 = ATgetArgument(t, 0);
          s_73 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm t_43 = t;
        int u_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(r_73, s_73);
            ;
            LocalPopChoice(u_43);
          }
        else
          {
            t = t_43;
            t = SSL_addr(r_73, s_73);
          }
      }
      return(t);
    }
    t = crush_2_0(l_12, m_12, t);
    q_73 = t;
    t = SSL_TicksToSeconds(q_73);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_74 = NULL,e_74 = NULL,f_74 = NULL;
  d_74 = t;
  if(match_cons(t, sym__2))
    {
      e_74 = ATgetArgument(t, 0);
      f_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm v_43 = t;
    int w_43 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_74;
        if((e_74 != t))
          {
            _fail(t);
          }
        t = d_74;
        ;
        LocalPopChoice(w_43);
      }
    else
      {
        t = v_43;
        t = d_74;
        {
          ATerm x_43 = t;
          int y_43 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_74, f_74);
              ;
              LocalPopChoice(y_43);
            }
          else
            {
              t = x_43;
              t = SSL_gtr(e_74, f_74);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_74, f_74);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm n_12 (ATerm t)
  {
    ATerm i_74 = NULL,j_74 = NULL;
    i_74 = t;
    t = term_v_13;
    t = get_config_0_0(t);
    j_74 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_74, term_a_44);
    t = geq_0_0(t);
    t = i_74;
    t = f_140(t);
    return(t);
  }
  t = try_1_0(n_12, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm o_12 (ATerm t)
  {
    ATerm l_74 = NULL,m_74 = NULL;
    t = run_time_0_0(t);
    l_74 = t;
    t = term_i_38;
    t = whoami_0_0(t);
    m_74 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_74), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_74));
    t = (ATerm) ATmakeAppl(sym__2, term_d_44, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_44), l_74), term_e_44), m_74));
    return(t);
  }
  t = if_verbose1_1_0(o_12, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm x_132 (ATerm), ATerm t)
{
  ATerm k_44 = t;
  int l_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_44);
    }
  else
    {
      t = k_44;
      {
        ATerm p_12 (ATerm t)
        {
          ATerm n_44 = t;
          int q_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(q_44);
            }
          else
            {
              t = n_44;
              {
                ATerm t_44 = t;
                int u_44 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(u_44);
                  }
                else
                  {
                    t = t_44;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(p_12, t);
      }
    }
  t = x_132(t);
  return(t);
}
ATerm map_1_0 (ATerm z_114 (ATerm), ATerm t)
{
  ATerm o_74 (ATerm t)
  {
    ATerm v_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(x_44);
      }
    else
      {
        t = v_44;
        t = Cons_2_0(z_114, o_74, t);
      }
    return(t);
  }
  t = o_74(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_74 = NULL,r_74 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_74 = ATgetFirst((ATermList) t);
      r_74 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_74 = NULL,w_74 = NULL;
        t = r_74;
        t = g_0(t);
        v_74 = t;
        t = q_74;
        t = e_0(t);
        w_74 = t;
        t = r_74;
        {
          ATerm r_12 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_74), w_74);
            return(t);
          }
          t = reverse_acc_2_0(e_0, r_12, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_i_38;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm t_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, t_12, t);
  return(t);
}
ATerm Program_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm x_74 = NULL,y_74 = NULL,z_74 = NULL,a_75 = NULL;
  a_75 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_74 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_75);
  x_74 = t;
  t = y_74;
  t = s_109(t);
  z_74 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_74), x_74);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_44 = t;
  int z_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_43;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_44);
    }
  else
    {
      t = y_44;
      {
        ATerm u_12 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(u_12, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_a_45;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm v_12 (ATerm t)
    {
      ATerm e_75 = NULL;
      e_75 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, e_75), term_e_45);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(v_12, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm t_109 (ATerm), ATerm t)
{
  ATerm f_75 = NULL,g_75 = NULL,h_75 = NULL,i_75 = NULL;
  i_75 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      g_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_75);
  f_75 = t;
  t = g_75;
  t = t_109(t);
  h_75 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, h_75), f_75);
  return(t);
}
ATerm fetch_1_0 (ATerm j_115 (ATerm), ATerm t)
{
  ATerm m_75 (ATerm t)
  {
    ATerm f_45 = t;
    int g_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_115, _id, t);
        ;
        LocalPopChoice(g_45);
      }
    else
      {
        t = f_45;
        t = Cons_2_0(_id, m_75, t);
      }
    return(t);
  }
  t = m_75(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm z_134 (ATerm), ATerm t)
{
  t = fetch_1_0(z_134, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_75 = NULL,p_75 = NULL;
  o_75 = t;
  {
    ATerm h_45 = t;
    int i_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_75;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_45 = ATgetFirst((ATermList) t);
                ATerm k_45 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_75;
          }
        ;
        LocalPopChoice(i_45);
      }
    else
      {
        t = h_45;
        t = (ATerm) ATinsert(ATempty, o_75);
      }
    p_75 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), p_75);
    t = o_75;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_43;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm h_113 (ATerm), ATerm t)
{
  ATerm r_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_113(t);
      ;
      LocalPopChoice(u_45);
    }
  else
    {
      t = r_45;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_45 = t;
  int w_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_12 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm x_12 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_z_45;
        return(t);
      }
      ATerm y_12 (ATerm t)
      {
        t = term_a_46;
        return(t);
      }
      t = Option_3_0(w_12, x_12, y_12, t);
      ;
      LocalPopChoice(w_45);
    }
  else
    {
      t = v_45;
      {
        ATerm z_12 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm a_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_46;
          return(t);
        }
        ATerm b_13 (ATerm t)
        {
          t = term_c_46;
          return(t);
        }
        t = Option_3_0(z_12, a_13, b_13, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm v_75 = NULL,w_75 = NULL,d_76 = NULL,e_76 = NULL;
  if(match_cons(t, sym__3))
    {
      v_75 = ATgetArgument(t, 0);
      w_75 = ATgetArgument(t, 1);
      d_76 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_75, w_75);
  {
    ATerm d_46 = t;
    int e_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_46 = ATgetArgument(t, 0);
            ATerm g_46 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(v_75, w_75);
        ;
        LocalPopChoice(e_46);
      }
    else
      {
        t = d_46;
        t = (ATerm) ATempty;
      }
    e_76 = t;
    t = SSL_table_put(v_75, w_75, (ATerm) ATinsert(CheckATermList(e_76), d_76));
    t = (ATerm) ATmakeAppl(sym__3, v_75, w_75, d_76);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm e_136 (ATerm), ATerm t)
{
  ATerm l_76 = NULL;
  t = term_i_38;
  t = e_136(t);
  l_76 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_l_46, term_m_46, l_76);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = n_76;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm x_76 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_76 = ATgetFirst((ATermList) t);
          p_76 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_76;
      t = a_0(t);
      t = term_i_38;
      t = c_0(t);
      x_76 = t;
      t = (ATerm) ATinsert(CheckATermList(p_76), x_76);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm c_13 (ATerm t)
  {
    ATerm z_76 = NULL;
    z_76 = t;
    if(match_string(t, "--help"))
      {
        t = z_76;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = z_76;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = z_76;
          }
      }
    return(t);
  }
  ATerm d_13 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_n_46;
    return(t);
  }
  ATerm e_13 (ATerm t)
  {
    t = term_o_46;
    return(t);
  }
  t = Option_3_0(c_13, d_13, e_13, t);
  return(t);
}
ATerm Cons_2_0 (ATerm t_95 (ATerm), ATerm u_95 (ATerm), ATerm t)
{
  ATerm a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
  f_77 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_77 = ATgetFirst((ATermList) t);
      c_77 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_77);
  a_77 = t;
  t = b_77;
  t = t_95(t);
  d_77 = t;
  t = c_77;
  t = u_95(t);
  e_77 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(e_77), d_77), a_77);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_136 (ATerm), ATerm t)
{
  ATerm m_77 = NULL;
  m_77 = t;
  {
    ATerm f_13 (ATerm t)
    {
      t = term_p_46;
      t = c_136(t);
      return(t);
    }
    t = try_1_0(f_13, t);
    t = m_77;
    {
      ATerm g_13 (ATerm t)
      {
        ATerm n_77 = NULL;
        n_77 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), n_77);
        t = (ATerm) ATmakeAppl(sym_Program_1, n_77);
        return(t);
      }
      ATerm h_13 (ATerm t)
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_46 = t;
            int t_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(t_46);
              }
            else
              {
                t = s_46;
                t = c_136(t);
                t = Cons_2_0(_id, h_13, t);
              }
            ;
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm p_77 = NULL,q_77 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_77 = ATgetFirst((ATermList) t);
                  q_77 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_77), (ATerm) ATmakeAppl(sym_Undefined_1, p_77));
            }
          }
        return(t);
      }
      t = Cons_2_0(g_13, h_13, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm b_136 (ATerm), ATerm t)
{
  ATerm w_77 = NULL,x_77 = NULL,y_77 = NULL;
  w_77 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = w_77;
  {
    ATerm i_13 (ATerm t)
    {
      ATerm u_46 = t;
      int v_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_136(t);
          ;
          LocalPopChoice(v_46);
        }
      else
        {
          t = u_46;
          {
            ATerm w_46 = t;
            int x_46 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(x_46);
              }
            else
              {
                t = w_46;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_13, t);
    {
      ATerm j_13 (ATerm t)
      {
        ATerm c_47 = t;
        int f_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_78 = NULL;
            d_78 = t;
            {
              ATerm g_47 = t;
              int h_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_78;
                  {
                    ATerm i_47 = t;
                    int j_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_m_44;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(j_47);
                      }
                    else
                      {
                        t = i_47;
                        {
                          ATerm k_13 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(k_13, t);
                        }
                      }
                    t = d_78;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(h_47);
                }
              else
                {
                  t = g_47;
                  t = term_y_45;
                  t = get_config_0_0(t);
                  t = d_78;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(f_47);
          }
        else
          {
            t = c_47;
            {
              ATerm l_13 (ATerm t)
              {
                ATerm m_13 (ATerm t)
                {
                  x_77 = t;
                  return(t);
                }
                t = Undefined_1_0(m_13, t);
                return(t);
              }
              t = option_defined_1_0(l_13, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(x_77)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_d_44, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_77)), term_k_47));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(j_13, t);
      y_77 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = y_77;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t)
{
  ATerm m_8 = NULL;
  t = parse_options_1_0(z_132, t);
  m_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), m_8);
  t = m_8;
  t = b_133(t);
  {
    ATerm l_47 = t;
    int m_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_133, t);
        ;
        LocalPopChoice(m_47);
      }
    else
      {
        t = l_47;
        {
          ATerm n_47 = t;
          int o_47 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_47);
            }
          else
            {
              t = n_47;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm o_132 (ATerm), ATerm p_132 (ATerm), ATerm q_132 (ATerm), ATerm r_132 (ATerm), ATerm t)
{
  ATerm n_13 (ATerm t)
  {
    ATerm p_47 = t;
    int q_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_132(t);
        ;
        LocalPopChoice(q_47);
      }
    else
      {
        t = p_47;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm o_13 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(o_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_13, q_132, r_132, o_13, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm i_132 (ATerm), ATerm j_132 (ATerm), ATerm k_132 (ATerm), ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm q_13 (ATerm t)
    {
      ATerm g_78 = NULL,h_78 = NULL;
      g_78 = t;
      t = term_p_43;
      t = get_config_0_0(t);
      h_78 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, h_78));
      t = g_78;
      return(t);
    }
    t = if_verbose2_1_0(q_13, t);
    return(t);
  }
  t = iowrap_4_0(i_132, j_132, k_132, p_13, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm g_132 (ATerm), ATerm h_132 (ATerm), ATerm t)
{
  t = iowrap_3_0(g_132, h_132, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm d_132 (ATerm), ATerm t)
{
  ATerm r_13 (ATerm t)
  {
    t = _2_0(_id, d_132, t);
    return(t);
  }
  t = iowrap_2_0(r_13, _fail, t);
  return(t);
}
ATerm fusion_io_0_0 (ATerm t)
{
  ATerm s_13 (ATerm t)
  {
    ATerm v_47 = t;
    int w_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0_0(t);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(innermost_fusion_0_0, t);
        ;
        LocalPopChoice(w_47);
      }
    else
      {
        t = v_47;
        {
          ATerm t_13 (ATerm t)
          {
            ATerm u_13 (ATerm t)
            {
              t = term_x_47;
              return(t);
            }
            t = say_1_0(u_13, t);
            return(t);
          }
          t = if_verbose2_1_0(t_13, t);
        }
      }
    return(t);
  }
  t = iowrap_1_0(s_13, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = fusion_io_0_0(t);
  return(t);
}
