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
ATerm term_g_48;
ATerm term_x_47;
ATerm term_h_47;
ATerm term_g_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_n_46;
ATerm term_m_46;
ATerm term_l_46;
ATerm term_w_45;
ATerm term_v_45;
ATerm term_g_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_m_44;
ATerm term_z_43;
ATerm term_y_43;
ATerm term_x_43;
ATerm term_u_43;
ATerm term_r_43;
ATerm term_n_43;
ATerm term_m_43;
ATerm term_i_43;
ATerm term_h_43;
ATerm term_g_43;
ATerm term_b_43;
ATerm term_a_43;
ATerm term_v_42;
ATerm term_u_42;
ATerm term_o_41;
ATerm term_k_41;
ATerm term_i_41;
ATerm term_u_40;
ATerm term_r_40;
ATerm term_q_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_d_40;
ATerm term_z_39;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_l_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_l_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_b_24;
ATerm term_x_23;
ATerm term_r_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_a_23;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_i_20;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_d_17;
ATerm term_w_16;
ATerm term_w_15;
ATerm term_l_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_c_15;
void init_constant_terms (void)
{
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_18);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_CallT_3, term_v_18, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_z_18, term_a_19);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_18, term_b_19);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_18, term_c_19);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Defined_1, term_i_19);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_20);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Seq_2, term_y_18, term_a_19);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Seq_2, term_w_18, term_x_20);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_22);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Defined_1, term_t_22);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_24);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(sym_Op_2, term_g_27, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(sym_ConstType_1, term_h_27);
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_40);
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_q_40));
  term_q_40 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_i_41));
  term_i_41 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_42));
  term_u_42 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_42));
  term_v_42 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_43));
  term_a_43 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_43));
  term_b_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_43));
  term_g_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_43);
  ATprotect(&(term_i_43));
  term_i_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_m_43));
  term_m_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_43));
  term_u_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_43));
  term_x_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_43));
  term_z_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_44));
  term_m_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_v_45));
  term_v_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_w_45));
  term_w_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_m_46));
  term_m_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_46));
  term_n_46 = (ATerm) ATmakeAppl(sym__3, term_l_46, term_m_46, term_z_39);
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_g_47));
  term_g_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_47));
  term_x_47 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm say_1_0 (ATerm o_130 (ATerm), ATerm);
ATerm if_verbose2_1_0 (ATerm r_140 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm Mapp0_0_0 (ATerm);
ATerm Mapp_0_0 (ATerm);
ATerm Bapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm);
ATerm Op_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm h_139 (ATerm), ATerm);
ATerm Bapp0_0_0 (ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm unzip_1_0 (ATerm u_117 (ATerm), ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm);
ATerm Con_3_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm w_110 (ATerm), ATerm);
ATerm desugar_0_0 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_123 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_123 (ATerm), ATerm);
ATerm scope_2_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm BottomupOverConstructor_0_0 (ATerm);
ATerm SeqOverLChoiceR_0_0 (ATerm);
ATerm SeqOverChoiceR_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm x_110 (ATerm), ATerm);
ATerm innermost_1_0 (ATerm n_126 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Build_1_0 (ATerm u_100 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm);
ATerm Match_1_0 (ATerm t_100 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm o_112 (ATerm), ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm BMF_0_0 (ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm a_112 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm HL_0_0 (ATerm);
ATerm F10_0_0 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm b_124 (ATerm), ATerm);
ATerm downup_1_0 (ATerm y_110 (ATerm), ATerm);
ATerm simplify0_0_0 (ATerm);
ATerm genzip_4_0 (ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm);
ATerm zip_1_0 (ATerm p_117 (ATerm), ATerm);
ATerm SubsVar_2_0 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm);
ATerm substitute_1_0 (ATerm s_136 (ATerm), ATerm);
ATerm ssubs_0_0 (ATerm);
ATerm spaste_1_0 (ATerm f_140 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm);
ATerm Let_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm);
ATerm Bind7_0_0 (ATerm);
ATerm Bind5_0_0 (ATerm);
ATerm Bind2_0_0 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm l_100 (ATerm), ATerm);
ATerm srename_0_0 (ATerm);
ATerm tpaste_1_0 (ATerm b_140 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm t_99 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm);
ATerm Bind8_0_0 (ATerm);
ATerm declared_vars_0_0 (ATerm);
ATerm Bind6_0_0 (ATerm);
ATerm Bind4_0_0 (ATerm);
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm);
ATerm union_0_0 (ATerm);
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm);
ATerm crush_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm);
ATerm HdMember_p__2_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm);
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm);
ATerm for_3_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm);
ATerm diff_0_0 (ATerm);
ATerm free_vars_3_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm tvars_0_0 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm RnBinding_2_0 (ATerm m_137 (ATerm), ATerm n_137 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm RnVar_1_0 (ATerm x_137 (ATerm (ATerm), ATerm), ATerm);
ATerm all_dist_1_0 (ATerm n_127 (ATerm), ATerm);
ATerm env_alltd_1_0 (ATerm x_126 (ATerm), ATerm);
ATerm rename_4_0 (ATerm h_137 (ATerm (ATerm), ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_137 (ATerm (ATerm), ATerm), ATerm);
ATerm trename_0_0 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm rewrite_1_0 (ATerm k_123 (ATerm), ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm Strategies_1_0 (ATerm e_96 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm f_96 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm declare_inline_rules_0_0 (ATerm);
ATerm _2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm x_115 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm WriteToTextFile_0_0 (ATerm);
ATerm WriteToFile_1_0 (ATerm y_130 (ATerm), ATerm);
ATerm WriteToBinaryFile_0_0 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm k_132 (ATerm), ATerm);
ATerm fclose_0_0 (ATerm);
ATerm debug_1_0 (ATerm k_130 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm split_2_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm);
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
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm);
ATerm crush_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm q_140 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm i_133 (ATerm), ATerm);
ATerm map_1_0 (ATerm g_115 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm z_109 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm a_110 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm r_115 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm k_135 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm try_1_0 (ATerm o_113 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm p_136 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm);
ATerm iowrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm);
ATerm iowrap_3_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm);
ATerm iowrap_2_0 (ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm);
ATerm iowrap_1_0 (ATerm o_132 (ATerm), ATerm);
ATerm fusion_io_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm say_1_0 (ATerm o_130 (ATerm), ATerm t)
{
  ATerm u_0 = NULL,r_0 = NULL;
  u_0 = t;
  t = o_130(t);
  r_0 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, r_0));
  t = u_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_140 (ATerm), ATerm t)
{
  ATerm o_0 (ATerm t)
  {
    ATerm w_0 = NULL,x_0 = NULL;
    w_0 = t;
    t = term_c_15;
    t = get_config_0_0(t);
    x_0 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_0, term_d_15);
    t = geq_0_0(t);
    t = w_0;
    t = r_140(t);
    return(t);
  }
  t = try_1_0(o_0, t);
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm z_0 = NULL,a_1 = NULL,b_1 = NULL;
  a_1 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      b_1 = ATgetArgument(t, 0);
      z_0 = ATgetArgument(t, 1);
      {
        ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL;
        t = a_1;
        t = new_0_0(t);
        e_1 = t;
        t = new_0_0(t);
        g_1 = t;
        t = new_0_0(t);
        h_1 = t;
        t = new_0_0(t);
        i_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, i_1), h_1), g_1), e_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, e_1), (ATerm) ATmakeAppl(sym_Var_1, h_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, b_1, (ATerm)ATmakeAppl(sym_Var_1, e_1), (ATerm) ATmakeAppl(sym_Var_1, g_1)), (ATerm) ATmakeAppl(sym_BAM_3, z_0, (ATerm)ATmakeAppl(sym_Var_1, h_1), (ATerm) ATmakeAppl(sym_Var_1, i_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_f_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, i_1)), (ATerm) ATmakeAppl(sym_Var_1, g_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          b_1 = ATgetArgument(t, 0);
          {
            ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,n_1 = NULL;
            t = a_1;
            t = new_0_0(t);
            k_1 = t;
            t = b_1;
            {
              ATerm q_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    l_1 = ATgetArgument(t, 0);
                    m_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, k_1);
                return(t);
              }
              t = oncetd_1_0(q_0, t);
              n_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_f_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_1)), not_null(l_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_1)), (ATerm) ATmakeAppl(sym_Build_1, n_1))));
            }
          }
        }
      else
        {
          ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL,u_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              b_1 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_1;
          t = new_0_0(t);
          q_1 = t;
          t = new_0_0(t);
          r_1 = t;
          t = b_1;
          {
            ATerm t_0 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  s_1 = ATgetArgument(t, 0);
                  t_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, q_1);
              return(t);
            }
            t = oncetd_1_0(t_0, t);
            u_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, u_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, r_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_h_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, r_1))))), (ATerm)ATmakeAppl(sym_Var_1, q_1), (ATerm) ATmakeAppl(sym_Op_2, term_i_15, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_1)), not_null(s_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm y_1 = NULL,z_1 = NULL;
  y_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      z_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_2 = NULL,c_2 = NULL,g_2 = NULL,h_2 = NULL;
        t = y_1;
        t = new_0_0(t);
        b_2 = t;
        t = z_1;
        {
          ATerm y_0 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                g_2 = ATgetArgument(t, 0);
                c_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, b_2), g_2);
            return(t);
          }
          t = pat_td_1_0(y_0, t);
          h_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, h_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_l_15, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, b_2))), (ATerm) ATmakeAppl(sym_Match_1, not_null(c_2))))));
        }
        ;
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        {
          ATerm m_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
              t = y_1;
              t = new_0_0(t);
              j_2 = t;
              t = z_1;
              {
                ATerm c_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      k_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, j_2);
                  return(t);
                }
                t = pat_td_1_0(c_1, t);
                l_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, j_2)), not_null(k_2))));
              }
              ;
              LocalPopChoice(n_15);
            }
          else
            {
              t = m_15;
              {
                ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL,r_2 = NULL;
                t = y_1;
                t = new_0_0(t);
                n_2 = t;
                t = z_1;
                {
                  ATerm d_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        p_2 = ATgetArgument(t, 0);
                        q_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, n_2);
                    return(t);
                  }
                  t = pat_td_1_0(d_1, t);
                  r_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, r_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, n_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(q_2)), not_null(p_2)))));
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
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  if(match_cons(t, sym_Match_1))
    {
      u_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_2;
  {
    ATerm f_1 (ATerm t)
    {
      if(match_cons(t, sym_RootApp_1))
        {
          ATerm o_15 = ATgetArgument(t, 0);
          if(match_cons(o_15, sym_Match_1))
            {
              v_2 = ATgetArgument(o_15, 0);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = v_2;
      return(t);
    }
    t = pat_td_1_0(f_1, t);
    w_2 = t;
    t = (ATerm) ATmakeAppl(sym_Match_1, w_2);
  }
  return(t);
}
ATerm Mapp_0_0 (ATerm t)
{
  ATerm p_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Mapp0_0_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = p_15;
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 = NULL,b_3 = NULL,c_3 = NULL;
            if(match_cons(t, sym_Match_1))
              {
                a_3 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = a_3;
            if(match_cons(t, sym_RootApp_1))
              {
                b_3 = ATgetArgument(t, 0);
                t = b_3;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    b_3 = ATgetArgument(t, 0);
                    c_3 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_BA_2, b_3, c_3);
              }
            ;
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = Mapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm Bapp2_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL;
  h_3 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_15 = t;
    int v_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_3 = NULL,l_3 = NULL,n_3 = NULL,o_3 = NULL;
        t = h_3;
        t = new_0_0(t);
        k_3 = t;
        t = i_3;
        {
          ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                l_3 = ATgetArgument(t, 0);
                n_3 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, k_3);
            return(t);
          }
          t = pat_td_1_0(j_1, t);
          o_3 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_15, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_3)), not_null(l_3))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, k_3)))), (ATerm) ATmakeAppl(sym_Build_1, o_3)));
        }
        ;
        LocalPopChoice(v_15);
      }
    else
      {
        t = u_15;
        {
          ATerm x_15 = t;
          int y_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_3 = NULL,r_3 = NULL,s_3 = NULL;
              t = h_3;
              t = new_0_0(t);
              q_3 = t;
              t = i_3;
              {
                ATerm o_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      r_3 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, q_3);
                  return(t);
                }
                t = pat_td_1_0(o_1, t);
                s_3 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, q_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(r_3), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_3)))), (ATerm) ATmakeAppl(sym_Build_1, s_3)));
              }
              ;
              LocalPopChoice(y_15);
            }
          else
            {
              t = x_15;
              {
                ATerm v_3 = NULL,w_3 = NULL,y_3 = NULL,a_4 = NULL;
                t = h_3;
                t = new_0_0(t);
                v_3 = t;
                t = i_3;
                {
                  ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        w_3 = ATgetArgument(t, 0);
                        y_3 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, v_3);
                    return(t);
                  }
                  t = pat_td_1_0(p_1, t);
                  a_4 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_3), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(w_3), not_null(y_3), (ATerm) ATmakeAppl(sym_Var_1, v_3))), (ATerm) ATmakeAppl(sym_Build_1, a_4)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm b_4 = NULL,c_4 = NULL,e_4 = NULL,h_4 = NULL,j_4 = NULL,p_4 = NULL;
  p_4 = t;
  if(match_cons(t, sym_As_2))
    {
      c_4 = ATgetArgument(t, 0);
      e_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_4);
  b_4 = t;
  t = c_4;
  t = t_97(t);
  h_4 = t;
  t = e_4;
  t = u_97(t);
  j_4 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_As_2, h_4, j_4), b_4);
  return(t);
}
ATerm PrimT_3_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm u_101 (ATerm), ATerm t)
{
  ATerm z_4 = NULL,c_5 = NULL,d_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,j_5 = NULL,k_5 = NULL;
  k_5 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      c_5 = ATgetArgument(t, 0);
      d_5 = ATgetArgument(t, 1);
      f_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_5);
  z_4 = t;
  t = c_5;
  t = s_101(t);
  g_5 = t;
  t = d_5;
  t = t_101(t);
  h_5 = t;
  t = f_5;
  t = u_101(t);
  j_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_PrimT_3, g_5, h_5, j_5), z_4);
  return(t);
}
ATerm Explode_2_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm t)
{
  ATerm n_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL;
  t_5 = t;
  if(match_cons(t, sym_Explode_2))
    {
      p_5 = ATgetArgument(t, 0);
      q_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_5);
  n_5 = t;
  t = p_5;
  t = m_97(t);
  r_5 = t;
  t = q_5;
  t = n_97(t);
  s_5 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Explode_2, r_5, s_5), n_5);
  return(t);
}
ATerm Op_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL,e_6 = NULL,g_6 = NULL;
  g_6 = t;
  if(match_cons(t, sym_Op_2))
    {
      a_6 = ATgetArgument(t, 0);
      b_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  z_5 = t;
  t = a_6;
  t = i_97(t);
  c_6 = t;
  t = b_6;
  t = j_97(t);
  e_6 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Op_2, c_6, e_6), z_5);
  return(t);
}
ATerm pat_td_1_0 (ATerm h_139 (ATerm), ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = h_139(t);
      ;
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_1 (ATerm t)
            {
              ATerm w_1 (ATerm t)
              {
                t = pat_td_1_0(h_139, t);
                return(t);
              }
              t = fetch_1_0(w_1, t);
              return(t);
            }
            t = Op_2_0(_id, v_1, t);
            ;
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            {
              ATerm d_16 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_1 (ATerm t)
                  {
                    t = pat_td_1_0(h_139, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, x_1, t);
                  ;
                  LocalPopChoice(e_16);
                }
              else
                {
                  t = d_16;
                  {
                    ATerm g_16 = t;
                    int h_16 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm a_2 (ATerm t)
                        {
                          t = pat_td_1_0(h_139, t);
                          return(t);
                        }
                        t = Explode_2_0(a_2, _id, t);
                        ;
                        LocalPopChoice(h_16);
                      }
                    else
                      {
                        t = g_16;
                        {
                          ATerm i_16 = t;
                          int j_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm i_2 (ATerm t)
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = pat_td_1_0(h_139, t);
                                  return(t);
                                }
                                t = fetch_1_0(m_2, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, i_2, t);
                              ;
                              LocalPopChoice(j_16);
                            }
                          else
                            {
                              t = i_16;
                              {
                                ATerm t_2 (ATerm t)
                                {
                                  t = pat_td_1_0(h_139, t);
                                  return(t);
                                }
                                t = As_2_0(_id, t_2, t);
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
  ATerm l_6 = NULL;
  if(match_cons(t, sym_Build_1))
    {
      l_6 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_6 = NULL,q_6 = NULL;
        t = l_6;
        {
          ATerm x_2 (ATerm t)
          {
            if(match_cons(t, sym_RootApp_1))
              {
                ATerm m_16 = ATgetArgument(t, 0);
                if(match_cons(m_16, sym_Build_1))
                  {
                    n_6 = ATgetArgument(m_16, 0);
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            t = n_6;
            return(t);
          }
          t = pat_td_1_0(x_2, t);
          q_6 = t;
          t = (ATerm) ATmakeAppl(sym_Build_1, q_6);
        }
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        {
          ATerm y_6 = NULL,a_7 = NULL;
          t = l_6;
          {
            ATerm y_2 (ATerm t)
            {
              if(match_cons(t, sym_App_2))
                {
                  ATerm n_16 = ATgetArgument(t, 0);
                  if(match_cons(n_16, sym_Build_1))
                    {
                      y_6 = ATgetArgument(n_16, 0);
                    }
                  else
                    _fail(t);
                  {
                    ATerm o_16 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              t = y_6;
              return(t);
            }
            t = pat_td_1_0(y_2, t);
            a_7 = t;
            t = (ATerm) ATmakeAppl(sym_Build_1, a_7);
          }
        }
      }
  }
  return(t);
}
ATerm Bapp_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bapp0_0_0(t);
      ;
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
      {
        ATerm r_16 = t;
        int v_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_7 = NULL,f_8 = NULL,g_8 = NULL;
            if(match_cons(t, sym_Build_1))
              {
                w_7 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            t = w_7;
            if(match_cons(t, sym_RootApp_1))
              {
                f_8 = ATgetArgument(t, 0);
                t = f_8;
              }
            else
              {
                if(match_cons(t, sym_App_2))
                  {
                    f_8 = ATgetArgument(t, 0);
                    g_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, g_8), f_8);
              }
            ;
            LocalPopChoice(v_16);
          }
        else
          {
            t = r_16;
            t = Bapp2_0_0(t);
          }
      }
    }
  return(t);
}
ATerm unzip_1_0 (ATerm u_117 (ATerm), ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
      _fail(t);
    t = term_w_16;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm p_8 = NULL,q_8 = NULL;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_8 = ATgetFirst((ATermList) t);
        q_8 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, p_8, q_8);
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm t_8 = NULL,u_8 = NULL,z_8 = NULL,a_9 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm x_16 = ATgetArgument(t, 0);
        if(match_cons(x_16, sym__2))
          {
            t_8 = ATgetArgument(x_16, 0);
            z_8 = ATgetArgument(x_16, 1);
          }
        else
          _fail(t);
        {
          ATerm y_16 = ATgetArgument(t, 1);
          if(match_cons(y_16, sym__2))
            {
              u_8 = ATgetArgument(y_16, 0);
              a_9 = ATgetArgument(y_16, 1);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_8), t_8), (ATerm) ATinsert(CheckATermList(a_9), z_8));
    return(t);
  }
  t = genzip_4_0(z_2, d_3, e_3, u_117, t);
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm o_9 (ATerm f_9, ATerm t)
  {
    ATerm h_9 = NULL;
    t = f_9;
    {
      ATerm a_17 = t;
      if((PushChoice() == 0))
        {
          t = Var_1_0(_id, t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_17;
        }
      t = new_0_0(t);
      h_9 = t;
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_9), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_9)))), (ATerm) ATmakeAppl(sym_Var_1, h_9)));
    }
    return(t);
  }
  ATerm l_9 = NULL,m_9 = NULL;
  l_9 = t;
  if(match_cons(t, sym_Var_1))
    {
      m_9 = ATgetArgument(t, 0);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_9(l_9, t);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_d_17, (ATerm) ATmakeAppl(sym_Var_1, m_9)));
          }
      }
    }
  else
    {
      t = o_9(l_9, t);
    }
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm q_14 = NULL,x_14 = NULL,e_15 = NULL,g_15 = NULL;
  x_14 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      e_15 = ATgetArgument(t, 0);
      g_15 = ATgetArgument(t, 1);
      q_14 = ATgetArgument(t, 2);
      {
        ATerm e_2 = NULL,o_2 = NULL,s_2 = NULL;
        t = q_14;
        {
          ATerm f_3 (ATerm t)
          {
            ATerm e_17 = t;
            if((PushChoice() == 0))
              {
                t = Var_1_0(_id, t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = e_17;
              }
            return(t);
          }
          t = fetch_1_0(f_3, t);
          t = q_14;
          t = unzip_1_0(LiftPrimArg_0_0, t);
          {
            ATerm g_3 (ATerm t)
            {
              t = unzip_1_0(_id, t);
              return(t);
            }
            t = _2_0(concat_0_0, g_3, t);
            if(match_cons(t, sym__2))
              {
                e_2 = ATgetArgument(t, 0);
                {
                  ATerm j_17 = ATgetArgument(t, 1);
                  if(match_cons(j_17, sym__2))
                    {
                      o_2 = ATgetArgument(j_17, 0);
                      s_2 = ATgetArgument(j_17, 1);
                    }
                  else
                    _fail(t);
                }
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, e_2, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_2), (ATerm) ATmakeAppl(sym_PrimT_3, e_15, g_15, s_2)));
          }
        }
      }
    }
  else
    {
      ATerm u_3 = NULL,x_3 = NULL,z_3 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          e_15 = ATgetArgument(t, 0);
          g_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_15;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm k_17 = t;
          if((PushChoice() == 0))
            {
              t = Var_1_0(_id, t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = k_17;
            }
          return(t);
        }
        t = fetch_1_0(j_3, t);
        t = g_15;
        t = unzip_1_0(LiftPrimArg_0_0, t);
        {
          ATerm m_3 (ATerm t)
          {
            t = unzip_1_0(_id, t);
            return(t);
          }
          t = _2_0(concat_0_0, m_3, t);
          if(match_cons(t, sym__2))
            {
              u_3 = ATgetArgument(t, 0);
              {
                ATerm l_17 = ATgetArgument(t, 1);
                if(match_cons(l_17, sym__2))
                  {
                    x_3 = ATgetArgument(l_17, 0);
                    z_3 = ATgetArgument(l_17, 1);
                  }
                else
                  _fail(t);
              }
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Scope_2, u_3, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, x_3), (ATerm) ATmakeAppl(sym_PrimT_3, e_15, (ATerm)ATempty, z_3)));
        }
      }
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm p_17 = t;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm r_17 = t;
        int s_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(s_17);
          }
        else
          {
            t = r_17;
            if(!(match_cons(t, sym_Wld_0)))
              _fail(t);
          }
        return(t);
      }
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_17;
    }
  return(t);
}
ATerm App_2_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,f_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL,z_16 = NULL;
  z_16 = t;
  if(match_cons(t, sym_App_2))
    {
      f_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_16);
  q_15 = t;
  t = f_16;
  t = q_97(t);
  t_16 = t;
  t = s_16;
  t = r_97(t);
  u_16 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_App_2, t_16, u_16), q_15);
  return(t);
}
ATerm Con_3_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,q_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Con_3))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      i_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_17);
  f_17 = t;
  t = g_17;
  t = c_98(t);
  m_17 = t;
  t = h_17;
  t = d_98(t);
  n_17 = t;
  t = i_17;
  t = e_98(t);
  o_17 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Con_3, m_17, n_17, o_17), f_17);
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm t_17 = t;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm u_17 = t;
        int v_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Con_3_0(_id, _id, _id, t);
            ;
            LocalPopChoice(v_17);
          }
        else
          {
            t = u_17;
            t = App_2_0(_id, _id, t);
          }
        return(t);
      }
      t = topdown_1_0(t_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_17;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm j_18 = NULL,k_18 = NULL,s_18 = NULL,x_18 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      j_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_18;
  if(match_cons(t, sym_StratRule_3))
    {
      k_18 = ATgetArgument(t, 0);
      s_18 = ATgetArgument(t, 1);
      x_18 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, s_18), (ATerm) ATmakeAppl(sym_Where_1, x_18)), k_18));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          k_18 = ATgetArgument(t, 0);
          s_18 = ATgetArgument(t, 1);
          x_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = k_18;
      t = pureterm_0_0(t);
      t = s_18;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, s_18)), (ATerm) ATmakeAppl(sym_Where_1, x_18)), (ATerm) ATmakeAppl(sym_Match_1, k_18)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm o_19 = NULL,w_19 = NULL,z_19 = NULL,g_20 = NULL,k_20 = NULL,m_20 = NULL,n_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if(match_cons(w_17, sym_Rule_3))
        {
          o_19 = ATgetArgument(w_17, 0);
          w_19 = ATgetArgument(w_17, 1);
          z_19 = ATgetArgument(w_17, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  g_20 = t;
  t = o_19;
  {
    ATerm d_4 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_17 = ATgetArgument(t, 0);
          if(match_cons(x_17, sym_Var_1))
            {
              m_20 = ATgetArgument(x_17, 0);
            }
          else
            _fail(t);
          k_20 = ATgetArgument(t, 1);
          {
            ATerm y_17 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, m_20);
      return(t);
    }
    t = oncetd_1_0(d_4, t);
    n_20 = t;
    t = w_19;
    {
      ATerm f_4 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm z_17 = ATgetArgument(t, 0);
            if(match_cons(z_17, sym_Var_1))
              {
                m_20 = ATgetArgument(z_17, 0);
              }
            else
              _fail(t);
            q_20 = ATgetArgument(t, 1);
            {
              ATerm a_18 = ATgetArgument(t, 2);
              if(match_cons(a_18, sym_CallT_3))
                {
                  r_20 = ATgetArgument(a_18, 0);
                  {
                    ATerm b_18 = ATgetArgument(a_18, 1);
                    if(((ATgetType(b_18) != AT_LIST) || !(ATisEmpty(b_18))))
                      _fail(t);
                  }
                  {
                    ATerm c_18 = ATgetArgument(a_18, 2);
                    if(((ATgetType(c_18) != AT_LIST) || !(ATisEmpty(c_18))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, g_20);
        return(t);
      }
      t = oncetd_1_0(f_4, t);
      s_20 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_20), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, n_20, s_20, (ATerm) ATmakeAppl(sym_Seq_2, z_19, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(r_20), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(k_20), not_null(q_20), term_d_17))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(m_20)), (ATerm) ATmakeAppl(sym_Var_1, g_20))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Rcon_0_0(t);
        t = desugarRule_0_0(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        {
          ATerm f_18 = t;
          int g_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Scope_2_0(_id, desugarRule_0_0, t);
              ;
              LocalPopChoice(g_18);
            }
          else
            {
              t = f_18;
              t = RtoS_0_0(t);
            }
        }
      }
    return(t);
  }
  t = try_1_0(g_4, t);
  return(t);
}
ATerm topdown_1_0 (ATerm w_110 (ATerm), ATerm t)
{
  t = w_110(t);
  {
    ATerm i_4 (ATerm t)
    {
      t = topdown_1_0(w_110, t);
      return(t);
    }
    t = SRTS_all(i_4, t);
  }
  return(t);
}
ATerm desugar_0_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    t = try_1_0(desugarRule_0_0, t);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftPrimArgs_0_0(t);
            ;
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            {
              ATerm l_18 = t;
              int m_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(m_18);
                }
              else
                {
                  t = l_18;
                  {
                    ATerm n_18 = t;
                    int o_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(o_18);
                      }
                    else
                      {
                        t = n_18;
                        {
                          ATerm p_18 = t;
                          int q_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Mapp_0_0(t);
                              ;
                              LocalPopChoice(q_18);
                            }
                          else
                            {
                              t = p_18;
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
      t = repeat_1_0(l_4, t);
    }
    return(t);
  }
  t = topdown_1_0(k_4, t);
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm q_23 = NULL,s_23 = NULL,u_23 = NULL,v_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL,e_24 = NULL,i_24 = NULL,j_24 = NULL,k_24 = NULL,m_24 = NULL,n_24 = NULL;
  q_23 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_23;
  if(match_cons(t, sym_CallT_3))
    {
      u_23 = ATgetArgument(t, 0);
      y_23 = ATgetArgument(t, 1);
      z_23 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_23;
  if(match_cons(t, sym_SVar_1))
    {
      v_23 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_23;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = y_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_23;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_24;
  if(match_cons(t, sym_Seq_2))
    {
      c_24 = ATgetArgument(t, 0);
      i_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_24;
  if(match_cons(t, sym_Match_1))
    {
      e_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_24;
  if(match_cons(t, sym_Seq_2))
    {
      j_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_24;
  if(match_cons(t, sym_Where_1))
    {
      k_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_24;
  if(match_cons(t, sym_Build_1))
    {
      n_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm r_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_4 = NULL,o_4 = NULL,r_4 = NULL;
        t = term_d_19;
        {
          ATerm m_4 (ATerm t)
          {
            t = term_e_19;
            return(t);
          }
          t = rewrite_1_0(m_4, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm f_19 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_19) != ATmakeSymbol("s_0", 0, ATtrue)))
                _fail(t);
              n_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, n_4, e_24, (ATerm) ATmakeAppl(sym__2, k_24, n_24));
          t = replace_application_0_0(t);
          if(match_cons(t, sym__2))
            {
              o_4 = ATgetArgument(t, 0);
              r_4 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, o_4), (ATerm) ATmakeAppl(sym_Build_1, r_4)));
        }
        ;
        LocalPopChoice(t_18);
      }
    else
      {
        t = r_18;
        {
          ATerm b_5 = NULL,e_5 = NULL;
          t = term_d_19;
          {
            ATerm q_4 (ATerm t)
            {
              t = term_e_19;
              return(t);
            }
            t = rewrite_1_0(q_4, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm g_19 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) g_19) != ATmakeSymbol("h_0", 0, ATtrue)))
                  _fail(t);
                b_5 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = e_24;
            t = tvars_0_0(t);
            {
              ATerm s_4 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              ATerm t_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm i_5 = NULL;
                  i_5 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, b_5, (ATerm) ATmakeAppl(sym_Var_1, i_5)), term_j_19);
                  {
                    ATerm v_4 (ATerm t)
                    {
                      t = term_h_19;
                      return(t);
                    }
                    t = assert_1_0(v_4, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, i_5);
                  }
                  return(t);
                }
                t = map_1_0(u_4, t);
                t = (ATerm) ATmakeAppl(sym__2, k_24, n_24);
                t = alltd_1_0(Replace_0_0, t);
                if(match_cons(t, sym__2))
                  {
                    e_5 = ATgetArgument(t, 0);
                    {
                      ATerm k_19 = ATgetArgument(t, 1);
                    }
                  }
                else
                  _fail(t);
                return(t);
              }
              t = scope_2_0(s_4, t_4, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_24), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(e_5)), (ATerm) ATmakeAppl(sym_Build_1, n_24)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm m_25 (ATerm z_24, ATerm a_25, ATerm t)
  {
    t = a_25;
    {
      ATerm w_4 (ATerm t)
      {
        t = term_h_19;
        return(t);
      }
      t = rewrite_1_0(w_4, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm l_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) l_19) != ATmakeSymbol("m_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = z_24;
    }
    return(t);
  }
  ATerm n_25 (ATerm d_25, ATerm e_25, ATerm t)
  {
    t = e_25;
    {
      ATerm x_4 (ATerm t)
      {
        t = term_h_19;
        return(t);
      }
      t = rewrite_1_0(x_4, t);
      if(match_cons(t, sym_Defined_1))
        {
          ATerm m_19 = ATgetArgument(t, 0);
          if((ATgetSymbol((ATermAppl) m_19) != ATmakeSymbol("j_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      t = d_25;
    }
    return(t);
  }
  ATerm h_25 = NULL,i_25 = NULL,k_25 = NULL;
  i_25 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm n_19 = ATgetArgument(t, 0);
      k_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_25;
  if(match_cons(t, sym_Var_1))
    {
      h_25 = ATgetArgument(t, 0);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_25;
            {
              ATerm y_4 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              t = rewrite_1_0(y_4, t);
              if(match_cons(t, sym_Defined_1))
                {
                  ATerm r_19 = ATgetArgument(t, 0);
                  if((ATgetSymbol((ATermAppl) r_19) != ATmakeSymbol("v_0", 0, ATtrue)))
                    _fail(t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, h_25);
            }
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm s_19 = t;
              int t_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = m_25(k_25, i_25, t);
                  ;
                  LocalPopChoice(t_19);
                }
              else
                {
                  t = s_19;
                  t = n_25(k_25, i_25, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_25(k_25, i_25, t);
          ;
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
          t = n_25(k_25, i_25, t);
        }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm q_25 = NULL,r_25 = NULL,s_25 = NULL;
  if(match_cons(t, sym__2))
    {
      q_25 = ATgetArgument(t, 0);
      r_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_6 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            ATerm b_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(q_25, r_25);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_20 = ATgetFirst((ATermList) t);
            f_6 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_6;
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
    s_25 = t;
    t = SSL_table_put(q_25, r_25, s_25);
    t = (ATerm) ATmakeAppl(sym__2, q_25, r_25);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_123 (ATerm), ATerm t)
{
  ATerm y_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL;
  y_25 = t;
  t = f_123(t);
  z_25 = t;
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(z_25, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_26 = ATgetFirst((ATermList) t);
        a_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(z_25, (ATerm)ATmakeAppl(sym_Scopes_0), a_26);
    t = b_26;
    {
      ATerm a_5 (ATerm t)
      {
        ATerm c_26 = NULL;
        c_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_25, c_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_5, t);
      t = y_25;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm d_114 (ATerm), ATerm e_114 (ATerm), ATerm t)
{
  ATerm f_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_114(t);
      t = e_114(t);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = f_20;
      t = e_114(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_123 (ATerm), ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  t = e_123(t);
  g_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_26, term_i_20);
  {
    ATerm j_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm o_20 = ATgetArgument(t, 0);
            ATerm p_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(g_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(l_20);
      }
    else
      {
        t = j_20;
        t = (ATerm) ATempty;
      }
    h_26 = t;
    t = SSL_table_put(g_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(h_26), (ATerm) ATempty));
    t = f_26;
  }
  return(t);
}
ATerm scope_2_0 (ATerm g_123 (ATerm), ATerm h_123 (ATerm), ATerm t)
{
  t = begin_scope_1_0(g_123, t);
  {
    ATerm l_5 (ATerm t)
    {
      t = end_scope_1_0(g_123, t);
      return(t);
    }
    t = restore_always_2_0(h_123, l_5, t);
  }
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__3))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
      o_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm m_5 (ATerm t)
    {
      t = term_h_19;
      return(t);
    }
    ATerm o_5 (ATerm t)
    {
      t = n_26;
      t = tvars_0_0(t);
      {
        ATerm u_5 (ATerm t)
        {
          ATerm q_26 = NULL;
          q_26 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, m_26, (ATerm) ATmakeAppl(sym_Var_1, q_26)), term_u_20);
          {
            ATerm v_5 (ATerm t)
            {
              t = term_h_19;
              return(t);
            }
            t = assert_1_0(v_5, t);
            t = q_26;
          }
          return(t);
        }
        t = map_1_0(u_5, t);
        t = o_26;
        t = alltd_1_0(Replace_0_0, t);
        p_26 = t;
      }
      return(t);
    }
    t = scope_2_0(m_5, o_5, t);
    t = not_null(p_26);
  }
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL,u_27 = NULL,v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL;
  r_27 = t;
  if(match_cons(t, sym_Seq_2))
    {
      s_27 = ATgetArgument(t, 0);
      x_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_27;
  if(match_cons(t, sym_CallT_3))
    {
      t_27 = ATgetArgument(t, 0);
      v_27 = ATgetArgument(t, 1);
      w_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = t_27;
  if(match_cons(t, sym_SVar_1))
    {
      u_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_27;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = v_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = w_27;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_27;
  if(match_cons(t, sym_Seq_2))
    {
      y_27 = ATgetArgument(t, 0);
      a_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_27;
  if(match_cons(t, sym_Match_1))
    {
      z_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_28;
  if(match_cons(t, sym_Build_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,v_6 = NULL;
        t = term_y_20;
        {
          ATerm w_5 (ATerm t)
          {
            t = term_z_20;
            return(t);
          }
          t = rewrite_1_0(w_5, t);
          if(match_cons(t, sym_Defined_2))
            {
              ATerm a_21 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) a_21) != ATmakeSymbol("p_0", 0, ATtrue)))
                _fail(t);
              u_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__3, u_6, z_27, b_28);
          t = replace_application_0_0(t);
          v_6 = t;
          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_27), (ATerm) ATmakeAppl(sym_Build_1, v_6));
        }
        ;
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        {
          ATerm d_7 = NULL,f_7 = NULL;
          t = term_y_20;
          {
            ATerm x_5 (ATerm t)
            {
              t = term_z_20;
              return(t);
            }
            t = rewrite_1_0(x_5, t);
            if(match_cons(t, sym_Defined_2))
              {
                ATerm b_21 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) b_21) != ATmakeSymbol("f_0", 0, ATtrue)))
                  _fail(t);
                d_7 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = z_27;
            t = tvars_0_0(t);
            {
              ATerm y_5 (ATerm t)
              {
                t = term_h_19;
                return(t);
              }
              ATerm d_6 (ATerm t)
              {
                ATerm h_6 (ATerm t)
                {
                  ATerm g_7 = NULL;
                  g_7 = t;
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, d_7, (ATerm) ATmakeAppl(sym_Var_1, g_7)), term_d_21);
                  {
                    ATerm i_6 (ATerm t)
                    {
                      t = term_h_19;
                      return(t);
                    }
                    t = assert_1_0(i_6, t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, g_7);
                  }
                  return(t);
                }
                t = map_1_0(h_6, t);
                t = b_28;
                t = alltd_1_0(Replace_0_0, t);
                f_7 = t;
                return(t);
              }
              t = scope_2_0(y_5, d_6, t);
              t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_27), (ATerm) ATmakeAppl(sym_Build_1, not_null(f_7)));
            }
          }
        }
      }
  }
  return(t);
}
ATerm BottomupOverConstructor_0_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL;
  if(match_cons(t, sym_App_2))
    {
      ATerm e_21 = ATgetArgument(t, 0);
      if(match_cons(e_21, sym_CallT_3))
        {
          ATerm g_21 = ATgetArgument(e_21, 0);
          if(match_cons(g_21, sym_SVar_1))
            {
              ATerm j_21 = ATgetArgument(g_21, 0);
              if((ATgetSymbol((ATermAppl) j_21) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
            }
          else
            _fail(t);
          {
            ATerm h_21 = ATgetArgument(e_21, 1);
            if(((ATgetType(h_21) == AT_LIST) && !(ATisEmpty(h_21))))
              {
                e_28 = ATgetFirst((ATermList) h_21);
                {
                  ATerm k_21 = (ATerm) ATgetNext((ATermList) h_21);
                  if(((ATgetType(k_21) != AT_LIST) || !(ATisEmpty(k_21))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
          {
            ATerm i_21 = ATgetArgument(e_21, 2);
            if(((ATgetType(i_21) != AT_LIST) || !(ATisEmpty(i_21))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm f_21 = ATgetArgument(t, 1);
        if(match_cons(f_21, sym_Op_2))
          {
            f_28 = ATgetArgument(f_21, 0);
            g_28 = ATgetArgument(f_21, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = g_28;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm i_28 = NULL;
      i_28 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, e_28), (ATerm) ATempty), i_28);
      return(t);
    }
    t = map_1_0(j_6, t);
    h_28 = t;
    t = (ATerm) ATmakeAppl(sym_App_2, e_28, (ATerm) ATmakeAppl(sym_Op_2, f_28, h_28));
  }
  return(t);
}
ATerm SeqOverLChoiceR_0_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm n_21 = ATgetArgument(t, 0);
      if(match_cons(n_21, sym_LChoice_2))
        {
          j_28 = ATgetArgument(n_21, 0);
          k_28 = ATgetArgument(n_21, 1);
        }
      else
        _fail(t);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_o_21, l_28);
  {
    ATerm k_6 (ATerm t)
    {
      t = term_p_21;
      return(t);
    }
    t = rewrite_1_0(k_6, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm q_21 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) q_21) != ATmakeSymbol("f_2", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, j_28, l_28), (ATerm) ATmakeAppl(sym_Seq_2, k_28, l_28));
  }
  return(t);
}
ATerm SeqOverChoiceR_0_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      ATerm r_21 = ATgetArgument(t, 0);
      if(match_cons(r_21, sym_Choice_2))
        {
          m_28 = ATgetArgument(r_21, 0);
          n_28 = ATgetArgument(r_21, 1);
        }
      else
        _fail(t);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, term_s_21, o_28);
  {
    ATerm m_6 (ATerm t)
    {
      t = term_t_21;
      return(t);
    }
    t = rewrite_1_0(m_6, t);
    if(match_cons(t, sym_Defined_1))
      {
        ATerm u_21 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) u_21) != ATmakeSymbol("d_2", 0, ATtrue)))
          _fail(t);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, m_28, o_28), (ATerm) ATmakeAppl(sym_Seq_2, n_28, o_28));
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SeqOverChoiceR_0_0(t);
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
              t = SeqOverLChoiceR_0_0(t);
              ;
              LocalPopChoice(y_21);
            }
          else
            {
              t = x_21;
              {
                ATerm z_21 = t;
                int a_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
                    if(match_cons(t, sym_Seq_2))
                      {
                        u_28 = ATgetArgument(t, 0);
                        x_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = u_28;
                    if(match_cons(t, sym_Scope_2))
                      {
                        v_28 = ATgetArgument(t, 0);
                        w_28 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Scope_2, v_28, (ATerm) ATmakeAppl(sym_Seq_2, w_28, x_28));
                    ;
                    LocalPopChoice(a_22);
                  }
                else
                  {
                    t = z_21;
                    {
                      ATerm b_22 = t;
                      int c_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = AssociateR_0_0(t);
                          ;
                          LocalPopChoice(c_22);
                        }
                      else
                        {
                          t = b_22;
                          {
                            ATerm d_22 = t;
                            int e_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
                                if(match_cons(t, sym_Seq_2))
                                  {
                                    c_29 = ATgetArgument(t, 0);
                                    e_29 = ATgetArgument(t, 1);
                                  }
                                else
                                  _fail(t);
                                t = c_29;
                                if(match_cons(t, sym_Build_1))
                                  {
                                    d_29 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_App_2, e_29, d_29));
                                ;
                                LocalPopChoice(e_22);
                              }
                            else
                              {
                                t = d_22;
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
  t = innermost_1_0(o_6, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm x_110 (ATerm), ATerm t)
{
  ATerm p_6 (ATerm t)
  {
    t = bottomup_1_0(x_110, t);
    return(t);
  }
  t = SRTS_all(p_6, t);
  t = x_110(t);
  return(t);
}
ATerm innermost_1_0 (ATerm n_126 (ATerm), ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm s_6 (ATerm t)
    {
      t = n_126(t);
      t = innermost_1_0(n_126, t);
      return(t);
    }
    t = try_1_0(s_6, t);
    return(t);
  }
  t = bottomup_1_0(r_6, t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm t_6 (ATerm t)
  {
    ATerm k_29 = NULL,l_29 = NULL,m_29 = NULL,n_29 = NULL;
    if(match_cons(t, sym_Seq_2))
      {
        k_29 = ATgetArgument(t, 0);
        l_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = l_29;
    if(match_cons(t, sym_Choice_2))
      {
        m_29 = ATgetArgument(t, 0);
        n_29 = ATgetArgument(t, 1);
        t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_29, m_29), (ATerm) ATmakeAppl(sym_Seq_2, k_29, n_29));
      }
    else
      {
        if(match_cons(t, sym_LChoice_2))
          {
            m_29 = ATgetArgument(t, 0);
            n_29 = ATgetArgument(t, 1);
            t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_29, m_29), (ATerm) ATmakeAppl(sym_Seq_2, k_29, n_29));
          }
        else
          {
            if(match_cons(t, sym_Scope_2))
              {
                m_29 = ATgetArgument(t, 0);
                n_29 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Scope_2, m_29, (ATerm) ATmakeAppl(sym_Seq_2, k_29, n_29));
          }
      }
    return(t);
  }
  t = innermost_1_0(t_6, t);
  return(t);
}
ATerm Build_1_0 (ATerm u_100 (ATerm), ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  a_30 = t;
  if(match_cons(t, sym_Build_1))
    {
      y_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_30);
  x_29 = t;
  t = y_29;
  t = u_100(t);
  z_29 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Build_1, z_29), x_29);
  return(t);
}
ATerm Seq_2_0 (ATerm a_101 (ATerm), ATerm b_101 (ATerm), ATerm t)
{
  ATerm d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  i_30 = t;
  if(match_cons(t, sym_Seq_2))
    {
      e_30 = ATgetArgument(t, 0);
      f_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_30);
  d_30 = t;
  t = e_30;
  t = a_101(t);
  g_30 = t;
  t = f_30;
  t = b_101(t);
  h_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Seq_2, g_30, h_30), d_30);
  return(t);
}
ATerm Match_1_0 (ATerm t_100 (ATerm), ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  o_30 = t;
  if(match_cons(t, sym_Match_1))
    {
      m_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_30);
  l_30 = t;
  t = m_30;
  t = t_100(t);
  n_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Match_1, n_30), l_30);
  return(t);
}
ATerm LChoice_2_0 (ATerm c_101 (ATerm), ATerm d_101 (ATerm), ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  w_30 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      s_30 = ATgetArgument(t, 0);
      t_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_30);
  r_30 = t;
  t = s_30;
  t = c_101(t);
  u_30 = t;
  t = t_30;
  t = d_101(t);
  v_30 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LChoice_2, u_30, v_30), r_30);
  return(t);
}
ATerm Choice_2_0 (ATerm a_100 (ATerm), ATerm b_100 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,e_31 = NULL;
  e_31 = t;
  if(match_cons(t, sym_Choice_2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_31);
  z_30 = t;
  t = a_31;
  t = a_100(t);
  c_31 = t;
  t = b_31;
  t = b_100(t);
  d_31 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Choice_2, c_31, d_31), z_30);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm w_6 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Simplify_0_0(t);
        ;
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm h_22 = t;
          int i_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
              ;
              LocalPopChoice(i_22);
            }
          else
            {
              t = h_22;
              {
                ATerm j_22 = t;
                int k_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                    ;
                    LocalPopChoice(k_22);
                  }
                else
                  {
                    t = j_22;
                    {
                      ATerm l_22 = t;
                      int m_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_6 (ATerm t)
                          {
                            ATerm z_6 (ATerm t)
                            {
                              t = Match_1_0(_id, t);
                              return(t);
                            }
                            ATerm b_7 (ATerm t)
                            {
                              t = Build_1_0(_id, t);
                              return(t);
                            }
                            t = Seq_2_0(z_6, b_7, t);
                            return(t);
                          }
                          t = Scope_2_0(_id, x_6, t);
                          ;
                          LocalPopChoice(m_22);
                        }
                      else
                        {
                          t = l_22;
                          {
                            ATerm n_22 = t;
                            int o_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm c_7 (ATerm t)
                                {
                                  ATerm e_7 (ATerm t)
                                  {
                                    t = Match_1_0(_id, t);
                                    return(t);
                                  }
                                  ATerm h_7 (ATerm t)
                                  {
                                    ATerm j_7 (ATerm t)
                                    {
                                      t = Build_1_0(_id, t);
                                      return(t);
                                    }
                                    t = Seq_2_0(_id, j_7, t);
                                    return(t);
                                  }
                                  t = Seq_2_0(e_7, h_7, t);
                                  return(t);
                                }
                                t = Scope_2_0(_id, c_7, t);
                                ;
                                LocalPopChoice(o_22);
                              }
                            else
                              {
                                t = n_22;
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
  t = try_1_0(w_6, t);
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_20, (ATerm) ATmakeAppl(sym_Defined_2, term_p_22, i_31));
  {
    ATerm k_7 (ATerm t)
    {
      t = term_z_20;
      return(t);
    }
    t = assert_1_0(k_7, t);
    t = (ATerm) ATmakeAppl(sym__2, term_d_19, (ATerm) ATmakeAppl(sym_Defined_2, term_q_22, i_31));
    {
      ATerm l_7 (ATerm t)
      {
        t = term_e_19;
        return(t);
      }
      t = assert_1_0(l_7, t);
      t = i_31;
    }
  }
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_s_21, j_31), term_s_22);
  {
    ATerm m_7 (ATerm t)
    {
      t = term_t_21;
      return(t);
    }
    t = assert_1_0(m_7, t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_o_21, j_31), term_u_22);
    {
      ATerm n_7 (ATerm t)
      {
        t = term_p_21;
        return(t);
      }
      t = assert_1_0(n_7, t);
      t = j_31;
    }
  }
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm p_31 = NULL,r_31 = NULL,s_31 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm v_22 = ATgetArgument(t, 0);
      if(match_cons(v_22, sym_SVar_1))
        {
          ATerm y_22 = ATgetArgument(v_22, 0);
          if((ATgetSymbol((ATermAppl) y_22) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_22 = ATgetArgument(t, 1);
        if(((ATgetType(w_22) == AT_LIST) && !(ATisEmpty(w_22))))
          {
            p_31 = ATgetFirst((ATermList) w_22);
            {
              ATerm z_22 = (ATerm) ATgetNext((ATermList) w_22);
              if(((ATgetType(z_22) != AT_LIST) || !(ATisEmpty(z_22))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm x_22 = ATgetArgument(t, 2);
        if(((ATgetType(x_22) != AT_LIST) || !(ATisEmpty(x_22))))
          _fail(t);
      }
    }
  else
    _fail(t);
  {
    ATerm p_7 (ATerm t)
    {
      ATerm q_7 (ATerm t)
      {
        t = term_a_23;
        return(t);
      }
      t = say_1_0(q_7, t);
      return(t);
    }
    t = if_verbose2_1_0(p_7, t);
    t = new_0_0(t);
    r_31 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_31), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = seq_over_choice_0_0(t);
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_31), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
    t = bottomup_to_var_0_0(t);
    t = p_31;
    t = inline_rules_0_0(t);
    s_31 = t;
    t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, r_31, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_w_18, s_31), (ATerm) ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, r_31), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_d_17))), (ATerm) ATempty);
    t = propagate_mark_0_0(t);
    t = fuse_with_bottomup_0_0(t);
    {
      ATerm r_7 (ATerm t)
      {
        ATerm b_23 = t;
        int c_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_UnCond_0_0(t);
            ;
            LocalPopChoice(c_23);
          }
        else
          {
            t = b_23;
            {
              ATerm d_23 = t;
              int e_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = BottomupToVarIsId_Cond_0_0(t);
                  ;
                  LocalPopChoice(e_23);
                }
              else
                {
                  t = d_23;
                  {
                    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL;
                    if(match_cons(t, sym_CallT_3))
                      {
                        u_31 = ATgetArgument(t, 0);
                        w_31 = ATgetArgument(t, 1);
                        x_31 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = u_31;
                    if(match_cons(t, sym_SVar_1))
                      {
                        v_31 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = v_31;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                      _fail(t);
                    t = w_31;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = x_31;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = term_d_17;
                  }
                }
            }
          }
        return(t);
      }
      t = alltd_1_0(r_7, t);
      {
        ATerm f_23 = t;
        if((PushChoice() == 0))
          {
            ATerm s_7 (ATerm t)
            {
              if(match_cons(t, sym_CallT_3))
                {
                  ATerm g_23 = ATgetArgument(t, 0);
                  if(match_cons(g_23, sym_SVar_1))
                    {
                      ATerm j_23 = ATgetArgument(g_23, 0);
                      if((ATgetSymbol((ATermAppl) j_23) != ATmakeSymbol("mark", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  {
                    ATerm h_23 = ATgetArgument(t, 1);
                    if(((ATgetType(h_23) != AT_LIST) || !(ATisEmpty(h_23))))
                      _fail(t);
                  }
                  {
                    ATerm i_23 = ATgetArgument(t, 2);
                    if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = oncetd_1_0(s_7, t);
            {
              ATerm t_7 (ATerm t)
              {
                t = term_k_23;
                return(t);
              }
              t = say_1_0(t_7, t);
            }
            PopChoice();
            _fail(t);
          }
        else
          {
            t = f_23;
          }
        t = desugar_0_0(t);
        {
          ATerm u_7 (ATerm t)
          {
            ATerm v_7 (ATerm t)
            {
              t = term_l_23;
              return(t);
            }
            t = say_1_0(v_7, t);
            return(t);
          }
          t = if_verbose1_1_0(u_7, t);
        }
      }
    }
  }
  return(t);
}
ATerm alltd_1_0 (ATerm o_112 (ATerm), ATerm t)
{
  ATerm y_31 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_112(t);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = SRTS_all(y_31, t);
      }
    return(t);
  }
  t = y_31(t);
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  p_32 = t;
  t = new_0_0(t);
  q_32 = t;
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_m_21, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, q_32), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        {
          ATerm x_7 (ATerm t)
          {
            ATerm y_7 (ATerm t)
            {
              t = term_r_23;
              return(t);
            }
            t = say_1_0(y_7, t);
            return(t);
          }
          t = if_verbose2_1_0(x_7, t);
          _fail(t);
        }
      }
    {
      ATerm t_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
          r_32 = t;
          if(match_cons(t, sym_Seq_2))
            {
              s_32 = ATgetArgument(t, 0);
              e_33 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = s_32;
          if(match_cons(t, sym_All_1))
            {
              t_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_32;
          if(match_cons(t, sym_CallT_3))
            {
              u_32 = ATgetArgument(t, 0);
              w_32 = ATgetArgument(t, 1);
              d_33 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = u_32;
          if(match_cons(t, sym_SVar_1))
            {
              v_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = v_32;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = w_32;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_32 = ATgetFirst((ATermList) t);
              c_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = x_32;
          if(match_cons(t, sym_CallT_3))
            {
              y_32 = ATgetArgument(t, 0);
              a_33 = ATgetArgument(t, 1);
              b_33 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = y_32;
          if(match_cons(t, sym_SVar_1))
            {
              z_32 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = a_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = d_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_33;
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
          t = h_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = i_33;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = z_32;
          if((q_32 != t))
            {
              _fail(t);
            }
          t = g_33;
          if((z_32 != t))
            {
              _fail(t);
            }
          t = r_32;
          ;
          LocalPopChoice(w_23);
        }
      else
        {
          t = t_23;
          {
            ATerm z_7 (ATerm t)
            {
              ATerm a_8 (ATerm t)
              {
                t = term_x_23;
                return(t);
              }
              t = debug_1_0(a_8, t);
              return(t);
            }
            t = if_verbose1_1_0(z_7, t);
            _fail(t);
          }
        }
      {
        ATerm d_8 (ATerm t)
        {
          ATerm e_8 (ATerm t)
          {
            t = term_b_24;
            return(t);
          }
          t = say_1_0(e_8, t);
          return(t);
        }
        t = if_verbose2_1_0(d_8, t);
        t = p_32;
      }
    }
  }
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  b_36 = t;
  t = new_0_0(t);
  c_36 = t;
  {
    ATerm d_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_h_24, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, c_36), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = d_24;
        {
          ATerm h_8 (ATerm t)
          {
            ATerm i_8 (ATerm t)
            {
              t = term_l_24;
              return(t);
            }
            t = say_1_0(i_8, t);
            return(t);
          }
          t = if_verbose2_1_0(h_8, t);
          _fail(t);
        }
      }
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,a_38 = NULL,e_38 = NULL;
          x_36 = t;
          if(match_cons(t, sym_Call_2))
            {
              y_36 = ATgetArgument(t, 0);
              a_37 = ATgetArgument(t, 1);
              t = y_36;
              if(match_cons(t, sym_SVar_1))
                {
                  z_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_36;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = a_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_37 = ATgetFirst((ATermList) t);
                  a_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_37;
              if(match_cons(t, sym_Call_2))
                {
                  c_37 = ATgetArgument(t, 0);
                  d_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = c_37;
              if(match_cons(t, sym_SVar_1))
                {
                  d_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = d_36;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = d_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_37 = ATgetFirst((ATermList) t);
                  v_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_37;
              if(match_cons(t, sym_Seq_2))
                {
                  f_37 = ATgetArgument(t, 0);
                  k_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_37;
              if(match_cons(t, sym_CallT_3))
                {
                  g_37 = ATgetArgument(t, 0);
                  i_37 = ATgetArgument(t, 1);
                  j_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = g_37;
              if(match_cons(t, sym_SVar_1))
                {
                  h_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = i_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_37;
              if(match_cons(t, sym_CallT_3))
                {
                  l_37 = ATgetArgument(t, 0);
                  n_37 = ATgetArgument(t, 1);
                  u_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = l_37;
              if(match_cons(t, sym_SVar_1))
                {
                  m_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = m_37;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = n_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_37 = ATgetFirst((ATermList) t);
                  t_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = o_37;
              if(match_cons(t, sym_CallT_3))
                {
                  p_37 = ATgetArgument(t, 0);
                  r_37 = ATgetArgument(t, 1);
                  s_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = p_37;
              if(match_cons(t, sym_SVar_1))
                {
                  q_37 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = r_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = u_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_37;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = a_38;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_37;
              if((c_36 != t))
                {
                  _fail(t);
                }
              t = q_37;
              if((h_37 != t))
                {
                  _fail(t);
                }
              t = x_36;
            }
          else
            {
              if(match_cons(t, sym_CallT_3))
                {
                  y_36 = ATgetArgument(t, 0);
                  a_37 = ATgetArgument(t, 1);
                  e_38 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = y_36;
              if(match_cons(t, sym_SVar_1))
                {
                  z_36 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = z_36;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                _fail(t);
              t = a_37;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_37 = ATgetFirst((ATermList) t);
                  a_38 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_37;
              if(match_cons(t, sym_Rec_2))
                {
                  c_37 = ATgetArgument(t, 0);
                  d_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = d_37;
              if(match_cons(t, sym_CallT_3))
                {
                  e_37 = ATgetArgument(t, 0);
                  v_37 = ATgetArgument(t, 1);
                  w_36 = ATgetArgument(t, 2);
                  t = e_37;
                  if(match_cons(t, sym_SVar_1))
                    {
                      f_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = f_37;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = v_37;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_36 = ATgetFirst((ATermList) t);
                      v_36 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_36;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_36 = ATgetArgument(t, 0);
                      k_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_36;
                  if(match_cons(t, sym_CallT_3))
                    {
                      g_36 = ATgetArgument(t, 0);
                      i_36 = ATgetArgument(t, 1);
                      j_36 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = g_36;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_36;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_36 = ATgetArgument(t, 0);
                      n_36 = ATgetArgument(t, 1);
                      u_36 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_36;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_36;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = n_36;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_36 = ATgetFirst((ATermList) t);
                      t_36 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_36;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_36 = ATgetArgument(t, 0);
                      r_36 = ATgetArgument(t, 1);
                      s_36 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_36;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_36 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_36;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = a_38;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_38;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_36;
                  if((c_36 != t))
                    {
                      _fail(t);
                    }
                  t = q_36;
                  if((c_37 != t))
                    {
                      _fail(t);
                    }
                  t = x_36;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      e_37 = ATgetArgument(t, 0);
                      v_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = e_37;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_37 = ATgetArgument(t, 0);
                      k_37 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_37;
                  if(match_cons(t, sym_CallT_3))
                    {
                      g_37 = ATgetArgument(t, 0);
                      i_37 = ATgetArgument(t, 1);
                      j_37 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = g_37;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = i_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = k_37;
                  if(match_cons(t, sym_CallT_3))
                    {
                      l_37 = ATgetArgument(t, 0);
                      n_37 = ATgetArgument(t, 1);
                      u_37 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = l_37;
                  if(match_cons(t, sym_SVar_1))
                    {
                      m_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = m_37;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = n_37;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      o_37 = ATgetFirst((ATermList) t);
                      t_37 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = o_37;
                  if(match_cons(t, sym_CallT_3))
                    {
                      p_37 = ATgetArgument(t, 0);
                      r_37 = ATgetArgument(t, 1);
                      s_37 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = p_37;
                  if(match_cons(t, sym_SVar_1))
                    {
                      q_37 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = r_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = t_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_37;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_37;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = a_38;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_38;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_37;
                  if((c_36 != t))
                    {
                      _fail(t);
                    }
                  t = q_37;
                  if((c_37 != t))
                    {
                      _fail(t);
                    }
                  t = x_36;
                }
            }
          ;
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          {
            ATerm j_8 (ATerm t)
            {
              ATerm k_8 (ATerm t)
              {
                t = term_q_24;
                return(t);
              }
              t = debug_1_0(k_8, t);
              return(t);
            }
            t = if_verbose1_1_0(j_8, t);
            _fail(t);
          }
        }
      {
        ATerm l_8 (ATerm t)
        {
          ATerm m_8 (ATerm t)
          {
            t = term_r_24;
            return(t);
          }
          t = say_1_0(m_8, t);
          return(t);
        }
        t = if_verbose2_1_0(l_8, t);
        t = b_36;
      }
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm j_39 = NULL,m_39 = NULL,r_39 = NULL,t_39 = NULL,x_39 = NULL,c_40 = NULL,o_40 = NULL;
  if(match_cons(t, sym__2))
    {
      r_39 = ATgetArgument(t, 0);
      t_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_39;
  if(match_cons(t, sym_Build_1))
    {
      ATerm s_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_39;
  if(match_cons(t, sym_Where_1))
    {
      x_39 = ATgetArgument(t, 0);
      t = x_39;
      if(match_cons(t, sym_Prim_2))
        {
          j_39 = ATgetArgument(t, 0);
          m_39 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          x_39 = ATgetArgument(t, 0);
          c_40 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, x_39, c_40);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              x_39 = ATgetArgument(t, 0);
              c_40 = ATgetArgument(t, 1);
              o_40 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
        }
    }
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_24 = ATgetArgument(t, 0);
      if(match_cons(t_24, sym_Build_1))
        {
          ATerm v_24 = ATgetArgument(t_24, 0);
          if(match_cons(v_24, sym_Op_2))
            {
              q_41 = ATgetArgument(v_24, 0);
              p_41 = ATgetArgument(v_24, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm u_24 = ATgetArgument(t, 1);
        if(match_cons(u_24, sym_Match_1))
          {
            ATerm w_24 = ATgetArgument(u_24, 0);
            if(match_cons(w_24, sym_Op_2))
              {
                if((q_41 != ATgetArgument(w_24, 0)))
                  {
                    _fail(ATgetArgument(w_24, 0));
                  }
                r_41 = ATgetArgument(w_24, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, p_41, r_41);
  {
    ATerm n_8 (ATerm t)
    {
      ATerm t_41 = NULL,u_41 = NULL;
      if(match_cons(t, sym__2))
        {
          t_41 = ATgetArgument(t, 0);
          u_41 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_41), (ATerm) ATmakeAppl(sym_Match_1, u_41));
      return(t);
    }
    t = zip_1_0(n_8, t);
    s_41 = t;
    t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, s_41), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, q_41, p_41)));
  }
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm x_24 = ATgetArgument(t, 0);
      if(match_cons(x_24, sym_Build_1))
        {
          ATerm b_25 = ATgetArgument(x_24, 0);
          if(match_cons(b_25, sym_Op_2))
            {
              v_41 = ATgetArgument(b_25, 0);
              {
                ATerm c_25 = ATgetArgument(b_25, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_24 = ATgetArgument(t, 1);
        if(match_cons(y_24, sym_Match_1))
          {
            ATerm f_25 = ATgetArgument(y_24, 0);
            if(match_cons(f_25, sym_Op_2))
              {
                w_41 = ATgetArgument(f_25, 0);
                {
                  ATerm g_25 = ATgetArgument(f_25, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, v_41, w_41);
  {
    ATerm j_25 = t;
    if((PushChoice() == 0))
      {
        ATerm x_41 = NULL;
        if(match_cons(t, sym__2))
          {
            x_41 = ATgetArgument(t, 0);
            if((x_41 != ATgetArgument(t, 1)))
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
        t = j_25;
      }
    t = term_l_25;
  }
  return(t);
}
ATerm BMF_0_0 (ATerm t)
{
  ATerm o_25 = t;
  int p_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = MisMatch_0_0(t);
      ;
      LocalPopChoice(p_25);
    }
  else
    {
      t = o_25;
      {
        ATerm t_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BuildMatchFusion_0_0(t);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = t_25;
            {
              ATerm v_25 = t;
              int w_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_42 = NULL,j_42 = NULL,k_42 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      h_42 = ATgetArgument(t, 0);
                      j_42 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_42;
                  if(match_cons(t, sym_Build_1))
                    {
                      ATerm x_25 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = j_42;
                  if(match_cons(t, sym_Build_1))
                    {
                      k_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  ;
                  LocalPopChoice(w_25);
                }
              else
                {
                  t = v_25;
                  {
                    ATerm d_26 = t;
                    int e_26 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildPrim_0_0(t);
                        ;
                        LocalPopChoice(e_26);
                      }
                    else
                      {
                        t = d_26;
                        {
                          ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
                          if(match_cons(t, sym__2))
                            {
                              n_42 = ATgetArgument(t, 0);
                              p_42 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = n_42;
                          if(match_cons(t, sym_Match_1))
                            {
                              o_42 = ATgetArgument(t, 0);
                              t = p_42;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_42 = ATgetArgument(t, 0);
                                  t = q_42;
                                  if((o_42 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_42);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Build_1))
                                    {
                                      q_42 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = q_42;
                                  if((o_42 != t))
                                    {
                                      _fail(t);
                                    }
                                  t = (ATerm) ATmakeAppl(sym_Match_1, o_42);
                                }
                            }
                          else
                            {
                              if(match_cons(t, sym_Build_1))
                                {
                                  o_42 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = p_42;
                              if(match_cons(t, sym_Match_1))
                                {
                                  q_42 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = q_42;
                              if((o_42 != t))
                                {
                                  _fail(t);
                                }
                              t = (ATerm) ATmakeAppl(sym_Build_1, o_42);
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
  ATerm w_42 = NULL,x_42 = NULL,e_43 = NULL,f_43 = NULL;
  if(match_cons(t, sym_Seq_2))
    {
      e_43 = ATgetArgument(t, 0);
      f_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_43;
  if(match_cons(t, sym_Seq_2))
    {
      w_42 = ATgetArgument(t, 0);
      x_42 = ATgetArgument(t, 1);
      {
        ATerm i_26 = t;
        int j_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_43 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, e_43, w_42);
            t = BMF_0_0(t);
            j_43 = t;
            t = (ATerm) ATmakeAppl(sym_Seq_2, j_43, x_42);
            ;
            LocalPopChoice(j_26);
          }
        else
          {
            t = i_26;
            t = (ATerm) ATmakeAppl(sym__2, e_43, f_43);
            t = BMF_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, e_43, f_43);
      t = BMF_0_0(t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  ATerm o_43 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_112(t);
        ;
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        t = SRTS_one(o_43, t);
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm r_26 = ATgetArgument(t, 0);
      if(((ATgetType(r_26) == AT_LIST) && !(ATisEmpty(r_26))))
        {
          ATerm t_26 = ATgetFirst((ATermList) r_26);
          if(match_cons(t_26, sym_SDefT_4))
            {
              q_43 = ATgetArgument(t_26, 0);
              {
                ATerm v_26 = ATgetArgument(t_26, 1);
                if(((ATgetType(v_26) != AT_LIST) || !(ATisEmpty(v_26))))
                  _fail(t);
              }
              {
                ATerm w_26 = ATgetArgument(t_26, 2);
                if(((ATgetType(w_26) != AT_LIST) || !(ATisEmpty(w_26))))
                  _fail(t);
              }
              p_43 = ATgetArgument(t_26, 3);
            }
          else
            _fail(t);
          {
            ATerm u_26 = (ATerm) ATgetNext((ATermList) r_26);
            if(((ATgetType(u_26) != AT_LIST) || !(ATisEmpty(u_26))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm s_26 = ATgetArgument(t, 1);
        if(match_cons(s_26, sym_CallT_3))
          {
            ATerm x_26 = ATgetArgument(s_26, 0);
            if(match_cons(x_26, sym_SVar_1))
              {
                if((q_43 != ATgetArgument(x_26, 0)))
                  {
                    _fail(ATgetArgument(x_26, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm y_26 = ATgetArgument(s_26, 1);
              if(((ATgetType(y_26) != AT_LIST) || !(ATisEmpty(y_26))))
                _fail(t);
            }
            {
              ATerm z_26 = ATgetArgument(s_26, 2);
              if(((ATgetType(z_26) != AT_LIST) || !(ATisEmpty(z_26))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = p_43;
  {
    ATerm a_27 = t;
    if((PushChoice() == 0))
      {
        ATerm o_8 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm b_27 = ATgetArgument(t, 0);
              if(match_cons(b_27, sym_SVar_1))
                {
                  if((q_43 != ATgetArgument(b_27, 0)))
                    {
                      _fail(ATgetArgument(b_27, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm c_27 = ATgetArgument(t, 1);
                if(((ATgetType(c_27) != AT_LIST) || !(ATisEmpty(c_27))))
                  _fail(t);
              }
              {
                ATerm d_27 = ATgetArgument(t, 2);
                if(((ATgetType(d_27) != AT_LIST) || !(ATisEmpty(d_27))))
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
        t = a_27;
      }
    t = p_43;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,h_44 = NULL,i_44 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      h_44 = ATgetArgument(t, 0);
      t = h_44;
      if(match_cons(t, sym_Seq_2))
        {
          f_44 = ATgetArgument(t, 0);
          b_44 = ATgetArgument(t, 1);
          t = f_44;
          if(match_cons(t, sym_Where_1))
            {
              a_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_44;
          if(match_cons(t, sym_Seq_2))
            {
              c_44 = ATgetArgument(t, 0);
              e_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_44;
          if(match_cons(t, sym_Build_1))
            {
              d_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, a_44, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, d_44), e_44)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              f_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          h_44 = ATgetArgument(t, 0);
          t = h_44;
          if(match_cons(t, sym_Test_1))
            {
              f_44 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              h_44 = ATgetArgument(t, 0);
              t = h_44;
              if(match_cons(t, sym_Not_1))
                {
                  f_44 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, f_44);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  h_44 = ATgetArgument(t, 0);
                  i_44 = ATgetArgument(t, 1);
                  t = i_44;
                  if((h_44 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      h_44 = ATgetArgument(t, 0);
                      i_44 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = i_44;
                  if((h_44 != t))
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
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      w_44 = ATgetArgument(t, 0);
      z_44 = ATgetArgument(t, 1);
      t = w_44;
      if(match_cons(t, sym_LChoice_2))
        {
          x_44 = ATgetArgument(t, 0);
          y_44 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, x_44, (ATerm) ATmakeAppl(sym_LChoice_2, y_44, z_44));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          w_44 = ATgetArgument(t, 0);
          z_44 = ATgetArgument(t, 1);
          t = w_44;
          if(match_cons(t, sym_Seq_2))
            {
              x_44 = ATgetArgument(t, 0);
              y_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, x_44, (ATerm) ATmakeAppl(sym_Seq_2, y_44, z_44));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              w_44 = ATgetArgument(t, 0);
              z_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = w_44;
          if(match_cons(t, sym_Choice_2))
            {
              x_44 = ATgetArgument(t, 0);
              y_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, x_44, (ATerm) ATmakeAppl(sym_Choice_2, y_44, z_44));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm e_27 = t;
  int f_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm r_8 (ATerm t)
        {
          ATerm s_8 (ATerm t)
          {
            t = map1_1_0(n_0, t);
            return(t);
          }
          t = try_1_0(s_8, t);
          return(t);
        }
        t = Cons_2_0(_id, r_8, t);
      }
      ;
      LocalPopChoice(f_27);
    }
  else
    {
      t = e_27;
      {
        ATerm v_8 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, v_8, t);
      }
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL,s_45 = NULL,t_45 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_45 = ATgetArgument(t, 0);
      t_45 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_45, t_45);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_45 = ATgetArgument(t, 0);
          t = s_45;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_45 = ATgetFirst((ATermList) t);
              o_45 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, n_45, (ATerm) ATmakeAppl(sym_LChoices_1, o_45));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_l_25;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_45 = ATgetArgument(t, 0);
              t = s_45;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_45 = ATgetFirst((ATermList) t);
                  o_45 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, n_45, (ATerm) ATmakeAppl(sym_Choices_1, o_45));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_l_25;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_45 = ATgetArgument(t, 0);
                  t = s_45;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_45 = ATgetFirst((ATermList) t);
                      o_45 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, n_45, (ATerm) ATmakeAppl(sym_Seqs_1, o_45));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_d_17;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      s_45 = ATgetArgument(t, 0);
                      t_45 = ATgetArgument(t, 1);
                      q_45 = ATgetArgument(t, 2);
                      p_45 = ATgetArgument(t, 3);
                      {
                        ATerm g_46 = NULL,h_46 = NULL;
                        t = t_45;
                        {
                          ATerm w_8 (ATerm t)
                          {
                            ATerm i_46 = NULL;
                            if(match_cons(t, sym_DefaultVarDec_1))
                              {
                                i_46 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_VarDec_2, i_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_27), term_i_27));
                            return(t);
                          }
                          t = map1_1_0(w_8, t);
                          g_46 = t;
                          t = q_45;
                          {
                            ATerm x_8 (ATerm t)
                            {
                              ATerm y_8 (ATerm t)
                              {
                                ATerm j_46 = NULL;
                                if(match_cons(t, sym_DefaultVarDec_1))
                                  {
                                    j_46 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = (ATerm) ATmakeAppl(sym_VarDec_2, j_46, term_i_27);
                                return(t);
                              }
                              t = try_1_0(y_8, t);
                              return(t);
                            }
                            t = map1_1_0(x_8, t);
                            h_46 = t;
                            t = (ATerm) ATmakeAppl(sym_RDefT_4, s_45, g_46, h_46, p_45);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          s_45 = ATgetArgument(t, 0);
                          t_45 = ATgetArgument(t, 1);
                          q_45 = ATgetArgument(t, 2);
                          p_45 = ATgetArgument(t, 3);
                          {
                            ATerm j_27 = t;
                            int k_27 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm o_46 = NULL,p_46 = NULL;
                                t = q_45;
                                {
                                  ATerm b_9 (ATerm t)
                                  {
                                    ATerm q_46 = NULL;
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        q_46 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, q_46, term_i_27);
                                    return(t);
                                  }
                                  t = map1_1_0(b_9, t);
                                  o_46 = t;
                                  t = t_45;
                                  {
                                    ATerm c_9 (ATerm t)
                                    {
                                      ATerm d_9 (ATerm t)
                                      {
                                        ATerm r_46 = NULL;
                                        if(match_cons(t, sym_DefaultVarDec_1))
                                          {
                                            r_46 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, r_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_27), term_i_27));
                                        return(t);
                                      }
                                      t = try_1_0(d_9, t);
                                      return(t);
                                    }
                                    t = map_1_0(c_9, t);
                                    p_46 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, s_45, p_46, o_46, p_45);
                                  }
                                }
                                ;
                                LocalPopChoice(k_27);
                              }
                            else
                              {
                                t = j_27;
                                {
                                  ATerm w_46 = NULL,x_46 = NULL;
                                  t = t_45;
                                  {
                                    ATerm e_9 (ATerm t)
                                    {
                                      ATerm y_46 = NULL;
                                      if(match_cons(t, sym_DefaultVarDec_1))
                                        {
                                          y_46 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_VarDec_2, y_46, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_i_27), term_i_27));
                                      return(t);
                                    }
                                    t = map1_1_0(e_9, t);
                                    w_46 = t;
                                    t = q_45;
                                    {
                                      ATerm g_9 (ATerm t)
                                      {
                                        ATerm i_9 (ATerm t)
                                        {
                                          ATerm z_46 = NULL;
                                          if(match_cons(t, sym_DefaultVarDec_1))
                                            {
                                              z_46 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_VarDec_2, z_46, term_i_27);
                                          return(t);
                                        }
                                        t = try_1_0(i_9, t);
                                        return(t);
                                      }
                                      t = map_1_0(g_9, t);
                                      x_46 = t;
                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, s_45, w_46, x_46, p_45);
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
                              s_45 = ATgetArgument(t, 0);
                              t_45 = ATgetArgument(t, 1);
                              q_45 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, t_45, (ATerm) ATmakeAppl(sym_Op_2, term_i_15, (ATerm) ATinsert(ATinsert(ATempty, q_45), s_45)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  s_45 = ATgetArgument(t, 0);
                                  t_45 = ATgetArgument(t, 1);
                                  q_45 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, q_45)), s_45), (ATerm) ATmakeAppl(sym_Build_1, t_45)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      s_45 = ATgetArgument(t, 0);
                                      t_45 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, s_45, (ATerm) ATmakeAppl(sym_Match_1, t_45));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          s_45 = ATgetArgument(t, 0);
                                          t_45 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_45), t_45);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              s_45 = ATgetArgument(t, 0);
                                              t_45 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_45), s_45);
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
  ATerm m_47 = NULL;
  if(match_cons(t, sym_Cong_2))
    {
      ATerm l_27 = ATgetArgument(t, 0);
      m_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_47;
  {
    ATerm j_9 (ATerm t)
    {
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      return(t);
    }
    t = fetch_1_0(j_9, t);
    t = term_l_25;
  }
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm m_27 = t;
  int n_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_48 = NULL,q_48 = NULL;
      if(match_cons(t, sym_Test_1))
        {
          p_48 = ATgetArgument(t, 0);
          t = p_48;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              p_48 = ATgetArgument(t, 0);
              t = p_48;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_d_17;
            }
          else
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Seq_2))
                    {
                      p_48 = ATgetArgument(t, 0);
                      {
                        ATerm q_27 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(p_27);
                  t = p_48;
                  if(!(match_cons(t, sym_Fail_0)))
                    _fail(t);
                }
              else
                {
                  t = o_27;
                  {
                    ATerm c_28 = t;
                    int d_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm p_28 = ATgetArgument(t, 0);
                            q_48 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_28);
                        t = q_48;
                        if(!(match_cons(t, sym_Fail_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = c_28;
                        {
                          ATerm q_28 = t;
                          int r_28 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm s_28 = ATgetArgument(t, 0);
                                  q_48 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(r_28);
                              t = q_48;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = q_28;
                              if(match_cons(t, sym_Some_1))
                                {
                                  p_48 = ATgetArgument(t, 0);
                                  t = p_48;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_One_1))
                                    {
                                      p_48 = ATgetArgument(t, 0);
                                      t = p_48;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm t_28 = ATgetArgument(t, 0);
                                          q_48 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = q_48;
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
      LocalPopChoice(n_27);
    }
  else
    {
      t = m_27;
      {
        ATerm y_28 = t;
        int z_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = F10_0_0(t);
            ;
            LocalPopChoice(z_28);
          }
        else
          {
            t = y_28;
            {
              ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
              if(match_cons(t, sym_Choice_2))
                {
                  s_48 = ATgetArgument(t, 0);
                  t_48 = ATgetArgument(t, 1);
                  t = t_48;
                  if(match_cons(t, sym_Fail_0))
                    {
                      t = s_48;
                      if(match_cons(t, sym_Fail_0))
                        {
                          ATerm a_29 = t;
                          int b_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = t_48;
                              ;
                              LocalPopChoice(b_29);
                            }
                          else
                            {
                              t = a_29;
                              t = s_48;
                            }
                        }
                      else
                        {
                          t = s_48;
                        }
                    }
                  else
                    {
                      t = s_48;
                      if(!(match_cons(t, sym_Fail_0)))
                        _fail(t);
                      t = t_48;
                    }
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      s_48 = ATgetArgument(t, 0);
                      t_48 = ATgetArgument(t, 1);
                      t = t_48;
                      if(match_cons(t, sym_Fail_0))
                        {
                          t = s_48;
                          if(match_cons(t, sym_Fail_0))
                            {
                              ATerm f_29 = t;
                              int g_29 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = t_48;
                                  ;
                                  LocalPopChoice(g_29);
                                }
                              else
                                {
                                  t = f_29;
                                  t = s_48;
                                }
                            }
                          else
                            {
                              t = s_48;
                            }
                        }
                      else
                        {
                          t = s_48;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = t_48;
                        }
                    }
                  else
                    {
                      if(match_cons(t, sym_Where_1))
                        {
                          s_48 = ATgetArgument(t, 0);
                          t = s_48;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(t, sym_GuardedLChoice_3))
                            {
                              s_48 = ATgetArgument(t, 0);
                              t_48 = ATgetArgument(t, 1);
                              u_48 = ATgetArgument(t, 2);
                            }
                          else
                            _fail(t);
                          t = u_48;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_Seq_2, s_48, t_48);
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
  ATerm v_49 = NULL,x_49 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      x_49 = ATgetArgument(t, 0);
      t = x_49;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          x_49 = ATgetArgument(t, 0);
          t = x_49;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_l_25;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              x_49 = ATgetArgument(t, 0);
              v_49 = ATgetArgument(t, 1);
              t = v_49;
              if(match_cons(t, sym_Id_0))
                {
                  t = x_49;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm h_29 = t;
                      int i_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_49;
                          ;
                          LocalPopChoice(i_29);
                        }
                      else
                        {
                          t = h_29;
                          t = x_49;
                        }
                    }
                  else
                    {
                      t = x_49;
                    }
                }
              else
                {
                  t = x_49;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = v_49;
                }
            }
          else
            {
              ATerm j_29 = t;
              int o_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      x_49 = ATgetArgument(t, 0);
                      {
                        ATerm p_29 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(o_29);
                  t = x_49;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                }
              else
                {
                  t = j_29;
                  {
                    ATerm q_29 = t;
                    int r_29 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm s_29 = ATgetArgument(t, 0);
                            v_49 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_29);
                        t = v_49;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                      }
                    else
                      {
                        t = q_29;
                        {
                          ATerm t_29 = t;
                          int u_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm v_29 = ATgetArgument(t, 0);
                                  v_49 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(u_29);
                              t = v_49;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                            }
                          else
                            {
                              t = t_29;
                              if(match_cons(t, sym_All_1))
                                {
                                  x_49 = ATgetArgument(t, 0);
                                  t = x_49;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      x_49 = ATgetArgument(t, 0);
                                      t = x_49;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          x_49 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = x_49;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_d_17;
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
  ATerm w_29 = t;
  int b_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(b_30);
    }
  else
    {
      t = w_29;
      {
        ATerm c_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(j_30);
          }
        else
          {
            t = c_30;
            {
              ATerm k_30 = t;
              int p_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(p_30);
                }
              else
                {
                  t = k_30;
                  {
                    ATerm q_30 = t;
                    int x_30 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(x_30);
                      }
                    else
                      {
                        t = q_30;
                        {
                          ATerm y_30 = t;
                          int f_31 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(f_31);
                            }
                          else
                            {
                              t = y_30;
                              {
                                ATerm g_31 = t;
                                int h_31 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm g_50 = NULL,h_50 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        g_50 = ATgetArgument(t, 0);
                                        h_50 = ATgetArgument(t, 1);
                                        t = g_50;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_50;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            g_50 = ATgetArgument(t, 0);
                                            h_50 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = g_50;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = h_50;
                                      }
                                    ;
                                    LocalPopChoice(h_31);
                                  }
                                else
                                  {
                                    t = g_31;
                                    {
                                      ATerm k_31 = t;
                                      int l_31 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(l_31);
                                        }
                                      else
                                        {
                                          t = k_31;
                                          {
                                            ATerm m_31 = t;
                                            int n_31 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(n_31);
                                              }
                                            else
                                              {
                                                t = m_31;
                                                {
                                                  ATerm i_7 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      ATerm o_31 = ATgetArgument(t, 0);
                                                      if(!(match_cons(o_31, sym_Wld_0)))
                                                        _fail(t);
                                                      i_7 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = i_7;
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
ATerm repeat_1_0 (ATerm b_124 (ATerm), ATerm t)
{
  ATerm k_50 (ATerm t)
  {
    ATerm k_9 (ATerm t)
    {
      t = b_124(t);
      t = k_50(t);
      return(t);
    }
    t = try_1_0(k_9, t);
    return(t);
  }
  t = k_50(t);
  return(t);
}
ATerm downup_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  t = y_110(t);
  {
    ATerm n_9 (ATerm t)
    {
      t = downup_1_0(y_110, t);
      return(t);
    }
    t = SRTS_all(n_9, t);
    t = y_110(t);
  }
  return(t);
}
ATerm simplify0_0_0 (ATerm t)
{
  ATerm p_9 (ATerm t)
  {
    t = repeat_1_0(Simplify_0_0, t);
    return(t);
  }
  t = downup_1_0(p_9, t);
  return(t);
}
ATerm genzip_4_0 (ATerm k_117 (ATerm), ATerm l_117 (ATerm), ATerm m_117 (ATerm), ATerm n_117 (ATerm), ATerm t)
{
  ATerm l_50 (ATerm t)
  {
    ATerm q_31 = t;
    int t_31 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_117(t);
        ;
        LocalPopChoice(t_31);
      }
    else
      {
        t = q_31;
        t = l_117(t);
        t = _2_0(n_117, l_50, t);
        t = m_117(t);
      }
    return(t);
  }
  t = l_50(t);
  return(t);
}
ATerm zip_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  ATerm q_9 (ATerm t)
  {
    if(match_cons(t, sym__2))
      {
        ATerm z_31 = ATgetArgument(t, 0);
        if(((ATgetType(z_31) != AT_LIST) || !(ATisEmpty(z_31))))
          _fail(t);
        {
          ATerm a_32 = ATgetArgument(t, 1);
          if(((ATgetType(a_32) != AT_LIST) || !(ATisEmpty(a_32))))
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm r_9 (ATerm t)
  {
    ATerm m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm b_32 = ATgetArgument(t, 0);
        if(((ATgetType(b_32) == AT_LIST) && !(ATisEmpty(b_32))))
          {
            m_50 = ATgetFirst((ATermList) b_32);
            o_50 = (ATerm) ATgetNext((ATermList) b_32);
          }
        else
          _fail(t);
        {
          ATerm c_32 = ATgetArgument(t, 1);
          if(((ATgetType(c_32) == AT_LIST) && !(ATisEmpty(c_32))))
            {
              n_50 = ATgetFirst((ATermList) c_32);
              p_50 = (ATerm) ATgetNext((ATermList) c_32);
            }
          else
            _fail(t);
        }
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, m_50, n_50), (ATerm) ATmakeAppl(sym__2, o_50, p_50));
    return(t);
  }
  ATerm s_9 (ATerm t)
  {
    ATerm q_50 = NULL,r_50 = NULL;
    if(match_cons(t, sym__2))
      {
        q_50 = ATgetArgument(t, 0);
        r_50 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(CheckATermList(r_50), q_50);
    return(t);
  }
  t = genzip_4_0(q_9, r_9, s_9, p_117, t);
  return(t);
}
ATerm SubsVar_2_0 (ATerm f_137 (ATerm), ATerm g_137 (ATerm), ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t = f_137(t);
  t_50 = t;
  t = g_137(t);
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
  t = lookup_0_0(t);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL;
  w_50 = t;
  {
    ATerm d_32 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_32 = ATgetArgument(t, 0);
            ATerm g_32 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(e_32);
        t = w_50;
      }
    else
      {
        t = d_32;
        {
          ATerm d_51 = NULL;
          if(match_cons(t, sym__3))
            {
              x_50 = ATgetArgument(t, 0);
              y_50 = ATgetArgument(t, 1);
              z_50 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, x_50, y_50);
          t = zip_1_0(_id, t);
          d_51 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_51, z_50);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm q_136 (ATerm), ATerm r_136 (ATerm), ATerm t)
{
  ATerm e_51 = NULL,f_51 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      f_51 = ATgetArgument(t, 0);
      e_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_51;
  {
    ATerm t_9 (ATerm t)
    {
      ATerm u_9 (ATerm t)
      {
        t = f_51;
        return(t);
      }
      t = SubsVar_2_0(q_136, u_9, t);
      t = r_136(t);
      return(t);
    }
    t = alltd_1_0(t_9, t);
  }
  return(t);
}
ATerm substitute_1_0 (ATerm s_136 (ATerm), ATerm t)
{
  t = substitute_2_0(s_136, _id, t);
  return(t);
}
ATerm ssubs_0_0 (ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm m_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
    if(match_cons(t, sym_CallT_3))
      {
        o_51 = ATgetArgument(t, 0);
        q_51 = ATgetArgument(t, 1);
        m_51 = ATgetArgument(t, 2);
        t = o_51;
        if(match_cons(t, sym_SVar_1))
          {
            p_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = m_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_51;
      }
    else
      {
        if(match_cons(t, sym_Call_2))
          {
            o_51 = ATgetArgument(t, 0);
            q_51 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_51;
        if(match_cons(t, sym_SVar_1))
          {
            p_51 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = q_51;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_51;
      }
    return(t);
  }
  t = substitute_1_0(v_9, t);
  return(t);
}
ATerm spaste_1_0 (ATerm f_140 (ATerm), ATerm t)
{
  ATerm h_32 = t;
  int i_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_9 (ATerm t)
      {
        t = split_2_0(_id, f_140, t);
        {
          ATerm x_9 (ATerm t)
          {
            ATerm c_52 = NULL,e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
            if(match_cons(t, sym__2))
              {
                c_52 = ATgetArgument(t, 0);
                h_52 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = c_52;
            {
              ATerm j_32 = t;
              int k_32 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_SDef_3))
                    {
                      ATerm l_32 = ATgetArgument(t, 0);
                      e_52 = ATgetArgument(t, 1);
                      f_52 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(k_32);
                  t = (ATerm) ATmakeAppl(sym_SDef_3, h_52, e_52, f_52);
                }
              else
                {
                  t = j_32;
                  if(match_cons(t, sym_SDefT_4))
                    {
                      ATerm m_32 = ATgetArgument(t, 0);
                      e_52 = ATgetArgument(t, 1);
                      f_52 = ATgetArgument(t, 2);
                      g_52 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_SDefT_4, h_52, e_52, f_52, g_52);
                }
            }
            return(t);
          }
          t = zip_1_0(x_9, t);
        }
        return(t);
      }
      t = Let_2_0(w_9, _id, t);
      ;
      LocalPopChoice(i_32);
    }
  else
    {
      t = h_32;
      {
        ATerm n_32 = t;
        int o_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 (ATerm t)
            {
              t = split_2_0(_id, f_140, t);
              {
                ATerm z_9 (ATerm t)
                {
                  ATerm q_52 = NULL,s_52 = NULL,t_52 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      q_52 = ATgetArgument(t, 0);
                      t_52 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = q_52;
                  {
                    ATerm j_33 = t;
                    int k_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_DefaultVarDec_1))
                          {
                            ATerm l_33 = ATgetArgument(t, 0);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(k_33);
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_52);
                      }
                    else
                      {
                        t = j_33;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm m_33 = ATgetArgument(t, 0);
                            s_52 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, t_52, s_52);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(z_9, t);
              }
              return(t);
            }
            t = SDef_3_0(_id, y_9, _id, t);
            ;
            LocalPopChoice(o_32);
          }
        else
          {
            t = n_32;
            {
              ATerm n_33 = t;
              int o_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_10 (ATerm t)
                  {
                    t = split_2_0(_id, f_140, t);
                    {
                      ATerm b_10 (ATerm t)
                      {
                        ATerm y_52 = NULL,l_53 = NULL,m_53 = NULL;
                        if(match_cons(t, sym__2))
                          {
                            y_52 = ATgetArgument(t, 0);
                            m_53 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = y_52;
                        {
                          ATerm p_33 = t;
                          int q_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_DefaultVarDec_1))
                                {
                                  ATerm r_33 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(q_33);
                              t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_53);
                            }
                          else
                            {
                              t = p_33;
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  ATerm s_33 = ATgetArgument(t, 0);
                                  l_53 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_VarDec_2, m_53, l_53);
                            }
                        }
                        return(t);
                      }
                      t = zip_1_0(b_10, t);
                    }
                    return(t);
                  }
                  t = SDefT_4_0(_id, a_10, _id, _id, t);
                  ;
                  LocalPopChoice(o_33);
                }
              else
                {
                  t = n_33;
                  {
                    ATerm t_33 = t;
                    int u_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_10 (ATerm t)
                        {
                          t = split_2_0(_id, f_140, t);
                          {
                            ATerm d_10 (ATerm t)
                            {
                              ATerm z_53 = NULL,b_54 = NULL,c_54 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  z_53 = ATgetArgument(t, 0);
                                  c_54 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = z_53;
                              {
                                ATerm v_33 = t;
                                int w_33 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_DefaultVarDec_1))
                                      {
                                        ATerm x_33 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(w_33);
                                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, c_54);
                                  }
                                else
                                  {
                                    t = v_33;
                                    if(match_cons(t, sym_VarDec_2))
                                      {
                                        ATerm y_33 = ATgetArgument(t, 0);
                                        b_54 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, c_54, b_54);
                                  }
                              }
                              return(t);
                            }
                            t = zip_1_0(d_10, t);
                          }
                          return(t);
                        }
                        t = RDefT_4_0(_id, c_10, _id, _id, t);
                        ;
                        LocalPopChoice(u_33);
                      }
                    else
                      {
                        t = t_33;
                        {
                          ATerm e_10 (ATerm t)
                          {
                            ATerm g_54 = NULL;
                            t = f_140(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                g_54 = ATgetFirst((ATermList) t);
                                {
                                  ATerm z_33 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = g_54;
                            return(t);
                          }
                          t = Rec_2_0(e_10, _id, t);
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
ATerm Rec_2_0 (ATerm j_101 (ATerm), ATerm k_101 (ATerm), ATerm t)
{
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL,m_54 = NULL;
  m_54 = t;
  if(match_cons(t, sym_Rec_2))
    {
      i_54 = ATgetArgument(t, 0);
      j_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_54);
  h_54 = t;
  t = i_54;
  t = j_101(t);
  k_54 = t;
  t = j_54;
  t = k_101(t);
  l_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Rec_2, k_54, l_54), h_54);
  return(t);
}
ATerm SDef_3_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm t)
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  w_54 = t;
  if(match_cons(t, sym_SDef_3))
    {
      q_54 = ATgetArgument(t, 0);
      r_54 = ATgetArgument(t, 1);
      s_54 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_54);
  p_54 = t;
  t = q_54;
  t = b_103(t);
  t_54 = t;
  t = r_54;
  t = c_103(t);
  u_54 = t;
  t = s_54;
  t = d_103(t);
  v_54 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDef_3, t_54, u_54, v_54), p_54);
  return(t);
}
ATerm Let_2_0 (ATerm m_100 (ATerm), ATerm n_100 (ATerm), ATerm t)
{
  ATerm z_54 = NULL,a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
  e_55 = t;
  if(match_cons(t, sym_Let_2))
    {
      a_55 = ATgetArgument(t, 0);
      b_55 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_55);
  z_54 = t;
  t = a_55;
  t = m_100(t);
  c_55 = t;
  t = b_55;
  t = n_100(t);
  d_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Let_2, c_55, d_55), z_54);
  return(t);
}
ATerm sboundin_3_0 (ATerm g_140 (ATerm), ATerm h_140 (ATerm), ATerm i_140 (ATerm), ATerm t)
{
  ATerm a_34 = t;
  int b_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(g_140, g_140, t);
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
            t = SDef_3_0(i_140, i_140, g_140, t);
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
                  t = SDefT_4_0(i_140, i_140, i_140, g_140, t);
                  ;
                  LocalPopChoice(f_34);
                }
              else
                {
                  t = e_34;
                  t = Rec_2_0(i_140, g_140, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind7_0_0 (ATerm t)
{
  ATerm h_55 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm g_34 = ATgetArgument(t, 0);
      h_55 = ATgetArgument(t, 1);
      {
        ATerm h_34 = ATgetArgument(t, 2);
      }
      {
        ATerm i_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = h_55;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind5_0_0 (ATerm t)
{
  ATerm i_55 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm j_34 = ATgetArgument(t, 0);
      i_55 = ATgetArgument(t, 1);
      {
        ATerm k_34 = ATgetArgument(t, 2);
      }
      {
        ATerm l_34 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = i_55;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind2_0_0 (ATerm t)
{
  ATerm j_55 = NULL;
  if(match_cons(t, sym_SDef_3))
    {
      ATerm m_34 = ATgetArgument(t, 0);
      j_55 = ATgetArgument(t, 1);
      {
        ATerm n_34 = ATgetArgument(t, 2);
      }
    }
  else
    _fail(t);
  t = j_55;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm l_55 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      l_55 = ATgetArgument(t, 0);
      {
        ATerm o_34 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = l_55;
  {
    ATerm f_10 (ATerm t)
    {
      ATerm n_55 = NULL;
      ATerm p_34 = t;
      int q_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_SDef_3))
            {
              n_55 = ATgetArgument(t, 0);
              {
                ATerm r_34 = ATgetArgument(t, 1);
              }
              {
                ATerm s_34 = ATgetArgument(t, 2);
              }
            }
          else
            _fail(t);
          LocalPopChoice(q_34);
          t = n_55;
        }
      else
        {
          t = p_34;
          if(match_cons(t, sym_SDefT_4))
            {
              n_55 = ATgetArgument(t, 0);
              {
                ATerm t_34 = ATgetArgument(t, 1);
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
          t = n_55;
        }
      return(t);
    }
    t = map_1_0(f_10, t);
  }
  return(t);
}
ATerm SVar_1_0 (ATerm l_100 (ATerm), ATerm t)
{
  ATerm t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL;
  w_55 = t;
  if(match_cons(t, sym_SVar_1))
    {
      u_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_55);
  t_55 = t;
  t = u_55;
  t = l_100(t);
  v_55 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SVar_1, v_55), t_55);
  return(t);
}
ATerm srename_0_0 (ATerm t)
{
  ATerm g_10 (ATerm t)
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
                    ATerm b_56 = NULL;
                    if(match_cons(t, sym_Rec_2))
                      {
                        b_56 = ATgetArgument(t, 0);
                        {
                          ATerm c_35 = ATgetArgument(t, 1);
                        }
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATinsert(ATempty, b_56);
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
  t = rename_4_0(SVar_1_0, g_10, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm tpaste_1_0 (ATerm b_140 (ATerm), ATerm t)
{
  ATerm f_35 = t;
  int g_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(b_140, _id, t);
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
            ATerm h_10 (ATerm t)
            {
              t = split_2_0(_id, b_140, t);
              {
                ATerm i_10 (ATerm t)
                {
                  ATerm j_56 = NULL,l_56 = NULL,m_56 = NULL;
                  if(match_cons(t, sym__2))
                    {
                      j_56 = ATgetArgument(t, 0);
                      m_56 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_56;
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
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_56);
                      }
                    else
                      {
                        t = j_35;
                        if(match_cons(t, sym_VarDec_2))
                          {
                            ATerm m_35 = ATgetArgument(t, 0);
                            l_56 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = (ATerm) ATmakeAppl(sym_VarDec_2, m_56, l_56);
                      }
                  }
                  return(t);
                }
                t = zip_1_0(i_10, t);
              }
              return(t);
            }
            t = SDefT_4_0(_id, _id, h_10, _id, t);
            ;
            LocalPopChoice(i_35);
          }
        else
          {
            t = h_35;
            {
              ATerm j_10 (ATerm t)
              {
                t = split_2_0(_id, b_140, t);
                {
                  ATerm k_10 (ATerm t)
                  {
                    ATerm r_56 = NULL,t_56 = NULL,u_56 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        r_56 = ATgetArgument(t, 0);
                        u_56 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = r_56;
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
                          t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, u_56);
                        }
                      else
                        {
                          t = n_35;
                          if(match_cons(t, sym_VarDec_2))
                            {
                              ATerm q_35 = ATgetArgument(t, 0);
                              t_56 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = (ATerm) ATmakeAppl(sym_VarDec_2, u_56, t_56);
                        }
                    }
                    return(t);
                  }
                  t = zip_1_0(k_10, t);
                }
                return(t);
              }
              t = RDefT_4_0(_id, _id, j_10, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm t_99 (ATerm), ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL;
  b_57 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      z_56 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_57);
  y_56 = t;
  t = z_56;
  t = t_99(t);
  a_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_DynamicRules_1, a_57), y_56);
  return(t);
}
ATerm RDefT_4_0 (ATerm k_99 (ATerm), ATerm l_99 (ATerm), ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL;
  n_57 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      f_57 = ATgetArgument(t, 0);
      g_57 = ATgetArgument(t, 1);
      h_57 = ATgetArgument(t, 2);
      i_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_57);
  e_57 = t;
  t = f_57;
  t = k_99(t);
  j_57 = t;
  t = g_57;
  t = l_99(t);
  k_57 = t;
  t = h_57;
  t = m_99(t);
  l_57 = t;
  t = i_57;
  t = n_99(t);
  m_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RDefT_4, j_57, k_57, l_57, m_57), e_57);
  return(t);
}
ATerm SDefT_4_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm), ATerm t)
{
  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,v_57 = NULL,w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL;
  z_57 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      r_57 = ATgetArgument(t, 0);
      s_57 = ATgetArgument(t, 1);
      t_57 = ATgetArgument(t, 2);
      u_57 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  q_57 = t;
  t = r_57;
  t = e_103(t);
  v_57 = t;
  t = s_57;
  t = f_103(t);
  w_57 = t;
  t = t_57;
  t = g_103(t);
  x_57 = t;
  t = u_57;
  t = h_103(t);
  y_57 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SDefT_4, v_57, w_57, x_57, y_57), q_57);
  return(t);
}
ATerm Scope_2_0 (ATerm w_100 (ATerm), ATerm x_100 (ATerm), ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL;
  h_58 = t;
  if(match_cons(t, sym_Scope_2))
    {
      d_58 = ATgetArgument(t, 0);
      e_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_58);
  c_58 = t;
  t = d_58;
  t = w_100(t);
  f_58 = t;
  t = e_58;
  t = x_100(t);
  g_58 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Scope_2, f_58, g_58), c_58);
  return(t);
}
ATerm tboundin_3_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm t)
{
  ATerm r_35 = t;
  int s_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(e_140, c_140, t);
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
            t = SDefT_4_0(e_140, e_140, e_140, c_140, t);
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
                  t = RDefT_4_0(e_140, e_140, e_140, c_140, t);
                  ;
                  LocalPopChoice(w_35);
                }
              else
                {
                  t = v_35;
                  t = DynamicRules_1_0(c_140, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Bind8_0_0 (ATerm t)
{
  ATerm k_58 = NULL;
  if(match_cons(t, sym_RDefT_4))
    {
      ATerm x_35 = ATgetArgument(t, 0);
      ATerm y_35 = ATgetArgument(t, 1);
      k_58 = ATgetArgument(t, 2);
      {
        ATerm z_35 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = k_58;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm declared_vars_0_0 (ATerm t)
{
  ATerm l_10 (ATerm t)
  {
    ATerm o_58 = NULL;
    ATerm a_36 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_VarDec_2))
          {
            o_58 = ATgetArgument(t, 0);
            {
              ATerm x_37 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        LocalPopChoice(w_37);
        t = o_58;
      }
    else
      {
        t = a_36;
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            o_58 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = o_58;
      }
    return(t);
  }
  t = map_1_0(l_10, t);
  return(t);
}
ATerm Bind6_0_0 (ATerm t)
{
  ATerm r_58 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      ATerm y_37 = ATgetArgument(t, 0);
      ATerm z_37 = ATgetArgument(t, 1);
      r_58 = ATgetArgument(t, 2);
      {
        ATerm b_38 = ATgetArgument(t, 3);
      }
    }
  else
    _fail(t);
  t = r_58;
  t = declared_vars_0_0(t);
  return(t);
}
ATerm Bind4_0_0 (ATerm t)
{
  ATerm s_58 = NULL;
  if(match_cons(t, sym_DynamicRules_1))
    {
      s_58 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = s_58;
  t = tvars_0_0(t);
  return(t);
}
ATerm union_1_0 (ATerm k_119 (ATerm), ATerm t)
{
  ATerm t_58 = NULL,u_58 = NULL;
  if(match_cons(t, sym__2))
    {
      u_58 = ATgetArgument(t, 0);
      t_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_58;
  {
    ATerm v_58 (ATerm t)
    {
      ATerm c_38 = t;
      int d_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_58;
          ;
          LocalPopChoice(d_38);
        }
      else
        {
          t = c_38;
          {
            ATerm f_38 = t;
            int g_38 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_10 (ATerm t)
                {
                  t = t_58;
                  return(t);
                }
                t = HdMember_p__2_0(k_119, m_10, t);
                t = v_58(t);
                ;
                LocalPopChoice(g_38);
              }
            else
              {
                t = f_38;
                t = Cons_2_0(_id, v_58, t);
              }
          }
        }
      return(t);
    }
    t = v_58(t);
  }
  return(t);
}
ATerm union_0_0 (ATerm t)
{
  ATerm n_10 (ATerm t)
  {
    ATerm w_58 = NULL;
    if(match_cons(t, sym__2))
      {
        w_58 = ATgetArgument(t, 0);
        if((w_58 != ATgetArgument(t, 1)))
          {
            _fail(ATgetArgument(t, 1));
          }
      }
    else
      _fail(t);
    return(t);
  }
  t = union_1_0(n_10, t);
  return(t);
}
ATerm foldr_3_0 (ATerm z_121 (ATerm), ATerm a_122 (ATerm), ATerm b_122 (ATerm), ATerm t)
{
  ATerm h_38 = t;
  int i_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = z_121(t);
      ;
      LocalPopChoice(i_38);
    }
  else
    {
      t = h_38;
      {
        ATerm z_58 = NULL,a_59 = NULL,d_59 = NULL,e_59 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_58 = ATgetFirst((ATermList) t);
            a_59 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = z_58;
        t = b_122(t);
        d_59 = t;
        t = a_59;
        t = foldr_3_0(z_121, a_122, b_122, t);
        e_59 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_59, e_59);
        t = a_122(t);
      }
    }
  return(t);
}
ATerm crush_3_0 (ATerm x_119 (ATerm), ATerm y_119 (ATerm), ATerm z_119 (ATerm), ATerm t)
{
  ATerm f_59 = NULL,g_59 = NULL;
  f_59 = t;
  t = SSL_explode_term(f_59);
  if(match_cons(t, sym__2))
    {
      ATerm j_38 = ATgetArgument(t, 0);
      g_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_59;
  t = foldr_3_0(x_119, y_119, z_119, t);
  return(t);
}
ATerm HdMember_p__2_0 (ATerm o_119 (ATerm), ATerm p_119 (ATerm), ATerm t)
{
  ATerm h_59 = NULL,i_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_59 = ATgetFirst((ATermList) t);
      i_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_119(t);
  {
    ATerm o_10 (ATerm t)
    {
      ATerm j_59 = NULL;
      j_59 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_59, j_59);
      t = o_119(t);
      return(t);
    }
    t = fetch_1_0(o_10, t);
    t = i_59;
  }
  return(t);
}
ATerm diff_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm k_59 = NULL,l_59 = NULL;
  if(match_cons(t, sym__2))
    {
      l_59 = ATgetArgument(t, 0);
      k_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_59;
  {
    ATerm m_59 (ATerm t)
    {
      ATerm k_38 = t;
      int l_38 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
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
                ATerm p_10 (ATerm t)
                {
                  t = k_59;
                  return(t);
                }
                t = HdMember_p__2_0(g_119, p_10, t);
                t = m_59(t);
                ;
                LocalPopChoice(n_38);
              }
            else
              {
                t = m_38;
                t = Cons_2_0(_id, m_59, t);
              }
          }
        }
      return(t);
    }
    t = m_59(t);
  }
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm n_59 = NULL,o_59 = NULL,r_59 = NULL,s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_38 = ATgetFirst((ATermList) t);
      if(match_cons(o_38, sym__2))
        {
          n_59 = ATgetArgument(o_38, 0);
          o_59 = ATgetArgument(o_38, 1);
        }
      else
        _fail(t);
      r_59 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(o_59);
  if(match_cons(t, sym__2))
    {
      s_59 = ATgetArgument(t, 0);
      t_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(n_59);
  if(match_cons(t, sym__2))
    {
      if((s_59 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      u_59 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_59, t_59);
  t = zip_1_0(_id, t);
  v_59 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_59, r_59);
  t = conc_0_0(t);
  return(t);
}
ATerm while_not_2_0 (ATerm q_124 (ATerm), ATerm r_124 (ATerm), ATerm t)
{
  ATerm w_59 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_124(t);
        ;
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = r_124(t);
        t = w_59(t);
      }
    return(t);
  }
  t = w_59(t);
  return(t);
}
ATerm for_3_0 (ATerm t_124 (ATerm), ATerm u_124 (ATerm), ATerm v_124 (ATerm), ATerm t)
{
  t = t_124(t);
  t = while_not_2_0(u_124, v_124, t);
  return(t);
}
ATerm diff_0_0 (ATerm t)
{
  ATerm r_38 = t;
  int s_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_10 (ATerm t)
      {
        ATerm c_60 = NULL;
        c_60 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, c_60);
        return(t);
      }
      ATerm r_10 (ATerm t)
      {
        ATerm t_10 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = _2_0(_id, t_10, t);
        return(t);
      }
      ATerm s_10 (ATerm t)
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_10 (ATerm t)
            {
              ATerm v_38 = t;
              int w_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_60 = ATgetFirst((ATermList) t);
                      h_60 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_60;
                  if(match_cons(t, sym__2))
                    {
                      f_60 = ATgetArgument(t, 0);
                      g_60 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_60;
                  if((f_60 != t))
                    {
                      _fail(t);
                    }
                  t = h_60;
                  ;
                  LocalPopChoice(w_38);
                }
              else
                {
                  t = v_38;
                  t = UfDecompose_0_0(t);
                }
              return(t);
            }
            t = _2_0(_id, u_10, t);
            ;
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            {
              ATerm l_60 = NULL,m_60 = NULL,n_60 = NULL,o_60 = NULL;
              if(match_cons(t, sym__2))
                {
                  l_60 = ATgetArgument(t, 0);
                  m_60 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = m_60;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_60 = ATgetFirst((ATermList) t);
                  o_60 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_60), n_60), o_60);
            }
          }
        return(t);
      }
      t = for_3_0(q_10, r_10, s_10, t);
      ;
      LocalPopChoice(s_38);
    }
  else
    {
      t = r_38;
      {
        ATerm v_10 (ATerm t)
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
        t = diff_1_0(v_10, t);
      }
    }
  return(t);
}
ATerm free_vars_3_0 (ATerm x_138 (ATerm), ATerm y_138 (ATerm), ATerm z_138 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm w_60 (ATerm t)
  {
    ATerm x_38 = t;
    int y_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_138(t);
        ;
        LocalPopChoice(y_38);
      }
    else
      {
        t = x_38;
        {
          ATerm z_38 = t;
          int a_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_60 = NULL,v_60 = NULL;
              t_60 = t;
              t = y_138(t);
              v_60 = t;
              t = t_60;
              {
                ATerm w_10 (ATerm t)
                {
                  ATerm y_10 (ATerm t)
                  {
                    t = v_60;
                    return(t);
                  }
                  t = split_2_0(w_60, y_10, t);
                  t = diff_0_0(t);
                  return(t);
                }
                ATerm x_10 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = z_138(w_10, w_60, x_10, t);
                {
                  ATerm z_10 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = crush_3_0(z_10, union_0_0, _id, t);
                }
              }
              ;
              LocalPopChoice(a_39);
            }
          else
            {
              t = z_38;
              {
                ATerm a_11 (ATerm t)
                {
                  t = (ATerm) ATempty;
                  return(t);
                }
                t = crush_3_0(a_11, union_0_0, w_60, t);
              }
            }
        }
      }
    return(t);
  }
  t = w_60(t);
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  ATerm b_11 (ATerm t)
  {
    ATerm x_60 = NULL;
    if(match_cons(t, sym_Var_1))
      {
        x_60 = ATgetArgument(t, 0);
      }
    else
      _fail(t);
    t = (ATerm) ATinsert(ATempty, x_60);
    return(t);
  }
  ATerm d_11 (ATerm t)
  {
    ATerm b_39 = t;
    int c_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(c_39);
      }
    else
      {
        t = b_39;
        {
          ATerm d_39 = t;
          int e_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind4_0_0(t);
              ;
              LocalPopChoice(e_39);
            }
          else
            {
              t = d_39;
              {
                ATerm f_39 = t;
                int g_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Bind6_0_0(t);
                    ;
                    LocalPopChoice(g_39);
                  }
                else
                  {
                    t = f_39;
                    t = Bind8_0_0(t);
                  }
              }
            }
        }
      }
    return(t);
  }
  t = free_vars_3_0(b_11, d_11, tboundin_3_0, t);
  return(t);
}
ATerm Bind0_0_0 (ATerm t)
{
  ATerm a_61 = NULL,e_61 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      e_61 = ATgetArgument(t, 0);
      t = e_61;
      if(match_cons(t, sym_Rule_3))
        {
          a_61 = ATgetArgument(t, 0);
          {
            ATerm h_39 = ATgetArgument(t, 1);
          }
          {
            ATerm i_39 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = a_61;
      t = tvars_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          e_61 = ATgetArgument(t, 0);
          {
            ATerm k_39 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = e_61;
    }
  return(t);
}
ATerm Var_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
  l_61 = t;
  if(match_cons(t, sym_Var_1))
    {
      j_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_61);
  i_61 = t;
  t = j_61;
  t = c_97(t);
  k_61 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Var_1, k_61), i_61);
  return(t);
}
ATerm DistBinding_2_0 (ATerm s_137 (ATerm), ATerm t_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  if(match_cons(t, sym__3))
    {
      q_61 = ATgetArgument(t, 0);
      p_61 = ATgetArgument(t, 1);
      o_61 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = q_61;
  {
    ATerm e_11 (ATerm t)
    {
      ATerm r_61 = NULL;
      r_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_61, o_61);
      t = s_137(t);
      return(t);
    }
    ATerm f_11 (ATerm t)
    {
      ATerm s_61 = NULL;
      s_61 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_61, p_61);
      t = s_137(t);
      return(t);
    }
    t = t_137(e_11, f_11, _id, t);
  }
  return(t);
}
ATerm RnBinding_2_0 (ATerm m_137 (ATerm), ATerm n_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm t_61 = NULL,u_61 = NULL,x_61 = NULL,c_62 = NULL,d_62 = NULL,l_62 = NULL,m_62 = NULL;
  if(match_cons(t, sym__2))
    {
      t_61 = ATgetArgument(t, 0);
      u_61 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_61;
  t = m_137(t);
  x_61 = t;
  t = map_1_0(new_0_0, t);
  c_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_61, c_62);
  t = zip_1_0(_id, t);
  d_62 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_62, u_61);
  t = conc_0_0(t);
  l_62 = t;
  t = t_61;
  {
    ATerm g_11 (ATerm t)
    {
      t = c_62;
      return(t);
    }
    t = n_137(g_11, t);
    m_62 = t;
    t = (ATerm) ATmakeAppl(sym__3, m_62, u_61, l_62);
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm x_62 = NULL,y_62 = NULL,a_63 = NULL,b_63 = NULL,f_63 = NULL,g_63 = NULL;
  if(match_cons(t, sym__2))
    {
      a_63 = ATgetArgument(t, 0);
      b_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_63;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_63 = ATgetFirst((ATermList) t);
      g_63 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_63;
  if(match_cons(t, sym__2))
    {
      x_62 = ATgetArgument(t, 0);
      y_62 = ATgetArgument(t, 1);
      {
        ATerm l_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_62;
            if((a_63 != t))
              {
                _fail(t);
              }
            t = y_62;
            ;
            LocalPopChoice(n_39);
          }
        else
          {
            t = l_39;
            t = (ATerm) ATmakeAppl(sym__2, a_63, g_63);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_63, g_63);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm RnVar_1_0 (ATerm x_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL;
  if(match_cons(t, sym__2))
    {
      p_63 = ATgetArgument(t, 0);
      o_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_63;
  {
    ATerm h_11 (ATerm t)
    {
      ATerm i_11 (ATerm t)
      {
        t = o_63;
        return(t);
      }
      t = split_2_0(_id, i_11, t);
      t = lookup_0_0(t);
      return(t);
    }
    t = x_137(h_11, t);
  }
  return(t);
}
ATerm all_dist_1_0 (ATerm n_127 (ATerm), ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL;
  if(match_cons(t, sym__2))
    {
      r_63 = ATgetArgument(t, 0);
      q_63 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_63;
  {
    ATerm j_11 (ATerm t)
    {
      ATerm s_63 = NULL;
      s_63 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_63, q_63);
      t = n_127(t);
      return(t);
    }
    t = SRTS_all(j_11, t);
  }
  return(t);
}
ATerm env_alltd_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm t_63 (ATerm t)
  {
    ATerm o_39 = t;
    int p_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_126(t);
        ;
        LocalPopChoice(p_39);
      }
    else
      {
        t = o_39;
        t = all_dist_1_0(t_63, t);
      }
    return(t);
  }
  t = t_63(t);
  return(t);
}
ATerm rename_4_0 (ATerm h_137 (ATerm (ATerm), ATerm), ATerm i_137 (ATerm), ATerm j_137 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm k_137 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_63 = NULL;
  u_63 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_63, (ATerm) ATempty);
  {
    ATerm v_63 (ATerm t)
    {
      ATerm k_11 (ATerm t)
      {
        ATerm q_39 = t;
        int s_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = RnVar_1_0(h_137, t);
            ;
            LocalPopChoice(s_39);
          }
        else
          {
            t = q_39;
            t = RnBinding_2_0(i_137, k_137, t);
            t = DistBinding_2_0(v_63, j_137, t);
          }
        return(t);
      }
      t = env_alltd_1_0(k_11, t);
      return(t);
    }
    t = v_63(t);
  }
  return(t);
}
ATerm trename_0_0 (ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm u_39 = t;
    int v_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Bind0_0_0(t);
        ;
        LocalPopChoice(v_39);
      }
    else
      {
        t = u_39;
        {
          ATerm w_39 = t;
          int y_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Bind6_0_0(t);
              ;
              LocalPopChoice(y_39);
            }
          else
            {
              t = w_39;
              t = Bind8_0_0(t);
            }
        }
      }
    return(t);
  }
  t = rename_4_0(Var_1_0, l_11, tboundin_3_0, tpaste_1_0, t);
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = trename_0_0(t);
  t = srename_0_0(t);
  return(t);
}
ATerm rewrite_1_0 (ATerm k_123 (ATerm), ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,o_7 = NULL;
  z_63 = t;
  t = term_z_39;
  t = k_123(t);
  a_64 = t;
  t = SSL_table_get(a_64, z_63);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_7 = ATgetFirst((ATermList) t);
      {
        ATerm a_40 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = o_7;
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm b_64 = NULL,c_64 = NULL,d_64 = NULL,e_64 = NULL,f_64 = NULL,g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL,l_64 = NULL,m_64 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm b_40 = ATgetArgument(t, 0);
      if(match_cons(b_40, sym_SVar_1))
        {
          b_64 = ATgetArgument(b_40, 0);
        }
      else
        _fail(t);
      c_64 = ATgetArgument(t, 1);
      d_64 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, b_64), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  {
    ATerm m_11 (ATerm t)
    {
      t = term_d_40;
      return(t);
    }
    t = rewrite_1_0(m_11, t);
    if(match_cons(t, sym_Defined_4))
      {
        ATerm e_40 = ATgetArgument(t, 0);
        if((ATgetSymbol((ATermAppl) e_40) != ATmakeSymbol("b_0", 0, ATtrue)))
          _fail(t);
        e_64 = ATgetArgument(t, 1);
        f_64 = ATgetArgument(t, 2);
        g_64 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, b_64, e_64, g_64, f_64);
    t = strename_0_0(t);
    if(match_cons(t, sym_SDefT_4))
      {
        if((b_64 != ATgetArgument(t, 0)))
          {
            _fail(ATgetArgument(t, 0));
          }
        h_64 = ATgetArgument(t, 1);
        {
          ATerm f_40 = ATgetArgument(t, 2);
        }
        i_64 = ATgetArgument(t, 3);
      }
    else
      _fail(t);
    t = h_64;
    {
      ATerm n_11 (ATerm t)
      {
        ATerm n_64 = NULL;
        if(match_cons(t, sym_VarDec_2))
          {
            n_64 = ATgetArgument(t, 0);
            {
              ATerm g_40 = ATgetArgument(t, 1);
            }
          }
        else
          _fail(t);
        t = n_64;
        return(t);
      }
      t = map_1_0(n_11, t);
      j_64 = t;
      t = (ATerm) ATmakeAppl(sym__3, j_64, c_64, i_64);
      t = ssubs_0_0(t);
      k_64 = t;
      t = g_64;
      {
        ATerm o_11 (ATerm t)
        {
          ATerm o_64 = NULL;
          if(match_cons(t, sym_VarDec_2))
            {
              o_64 = ATgetArgument(t, 0);
              {
                ATerm h_40 = ATgetArgument(t, 1);
              }
            }
          else
            _fail(t);
          t = o_64;
          return(t);
        }
        t = map_1_0(o_11, t);
        l_64 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_64, l_64);
        {
          ATerm p_11 (ATerm t)
          {
            ATerm p_64 = NULL,q_64 = NULL;
            if(match_cons(t, sym__2))
              {
                p_64 = ATgetArgument(t, 0);
                q_64 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, p_64), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_64)));
            return(t);
          }
          t = zip_1_0(p_11, t);
          m_64 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, l_64, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, m_64), k_64));
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
  ATerm x_64 = NULL,y_64 = NULL;
  x_64 = t;
  t = new_0_0(t);
  y_64 = t;
  {
    ATerm i_40 = t;
    int j_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_l_40, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_64), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(j_40);
      }
    else
      {
        t = i_40;
        {
          ATerm q_11 (ATerm t)
          {
            ATerm r_11 (ATerm t)
            {
              t = term_m_40;
              return(t);
            }
            t = say_1_0(r_11, t);
            return(t);
          }
          t = if_verbose2_1_0(q_11, t);
          _fail(t);
        }
      }
    {
      ATerm n_40 = t;
      int p_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL,c_65 = NULL,d_65 = NULL,e_65 = NULL,f_65 = NULL;
          z_64 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              a_65 = ATgetArgument(t, 0);
              f_65 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = a_65;
          if(match_cons(t, sym_CallT_3))
            {
              b_65 = ATgetArgument(t, 0);
              d_65 = ATgetArgument(t, 1);
              e_65 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = b_65;
          if(match_cons(t, sym_SVar_1))
            {
              c_65 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = e_65;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_65;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = c_65;
          if((y_64 != t))
            {
              _fail(t);
            }
          t = z_64;
          ;
          LocalPopChoice(p_40);
        }
      else
        {
          t = n_40;
          {
            ATerm s_11 (ATerm t)
            {
              ATerm t_11 (ATerm t)
              {
                t = term_q_40;
                return(t);
              }
              t = debug_1_0(t_11, t);
              return(t);
            }
            t = if_verbose1_1_0(s_11, t);
            _fail(t);
          }
        }
      {
        ATerm u_11 (ATerm t)
        {
          ATerm v_11 (ATerm t)
          {
            t = term_r_40;
            return(t);
          }
          t = say_1_0(v_11, t);
          return(t);
        }
        t = if_verbose2_1_0(u_11, t);
        t = x_64;
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
ATerm assert_1_0 (ATerm i_123 (ATerm), ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL;
  if(match_cons(t, sym__2))
    {
      g_65 = ATgetArgument(t, 0);
      h_65 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_123(t);
  i_65 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_65, g_65, h_65);
  t = table_push_0_0(t);
  {
    ATerm s_40 = t;
    int t_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(i_65, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_40);
      }
    else
      {
        t = s_40;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_65 = ATgetFirst((ATermList) t);
        k_65 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(i_65, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(k_65), (ATerm) ATinsert(CheckATermList(j_65), g_65)));
    t = (ATerm) ATmakeAppl(sym__2, g_65, h_65);
  }
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      l_65 = ATgetArgument(t, 0);
      m_65 = ATgetArgument(t, 1);
      n_65 = ATgetArgument(t, 2);
      o_65 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, l_65), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_u_40, m_65, o_65, n_65));
  {
    ATerm w_11 (ATerm t)
    {
      t = term_d_40;
      return(t);
    }
    t = assert_1_0(w_11, t);
    t = (ATerm) ATmakeAppl(sym_SDefT_4, l_65, m_65, n_65, o_65);
  }
  return(t);
}
ATerm Strategies_1_0 (ATerm e_96 (ATerm), ATerm t)
{
  ATerm p_65 = NULL,q_65 = NULL,r_65 = NULL,s_65 = NULL;
  s_65 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      q_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_65);
  p_65 = t;
  t = q_65;
  t = e_96(t);
  r_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Strategies_1, r_65), p_65);
  return(t);
}
ATerm Signature_1_0 (ATerm f_96 (ATerm), ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL,y_65 = NULL;
  y_65 = t;
  if(match_cons(t, sym_Signature_1))
    {
      w_65 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_65);
  v_65 = t;
  t = w_65;
  t = f_96(t);
  x_65 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Signature_1, x_65), v_65);
  return(t);
}
ATerm Specification_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL,e_66 = NULL;
  e_66 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_66 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_66);
  b_66 = t;
  t = c_66;
  t = j_96(t);
  d_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Specification_1, d_66), b_66);
  return(t);
}
ATerm declare_inline_rules_0_0 (ATerm t)
{
  ATerm x_11 (ATerm t)
  {
    ATerm y_11 (ATerm t)
    {
      t = Signature_1_0(_id, t);
      return(t);
    }
    ATerm z_11 (ATerm t)
    {
      ATerm a_12 (ATerm t)
      {
        ATerm c_12 (ATerm t)
        {
          t = map_1_0(declare_inline_rule_0_0, t);
          return(t);
        }
        t = Strategies_1_0(c_12, t);
        return(t);
      }
      ATerm b_12 (ATerm t)
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        return(t);
      }
      t = Cons_2_0(a_12, b_12, t);
      return(t);
    }
    t = Cons_2_0(y_11, z_11, t);
    return(t);
  }
  t = Specification_1_0(x_11, t);
  return(t);
}
ATerm _2_0 (ATerm r_94 (ATerm), ATerm s_94 (ATerm), ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
  m_66 = t;
  if(match_cons(t, sym__2))
    {
      i_66 = ATgetArgument(t, 0);
      j_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_66);
  h_66 = t;
  t = i_66;
  t = r_94(t);
  k_66 = t;
  t = j_66;
  t = s_94(t);
  l_66 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, k_66, l_66), h_66);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm p_66 = NULL,q_66 = NULL;
  p_66 = t;
  t = term_z_39;
  t = whoami_0_0(t);
  q_66 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), q_66), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = p_66;
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm v_40 = t;
  int w_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(w_40);
    }
  else
    {
      t = v_40;
      {
        ATerm t_66 = NULL,u_66 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_66 = ATgetFirst((ATermList) t);
            u_66 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = t_66;
        {
          ATerm d_12 (ATerm t)
          {
            t = u_66;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_12, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm y_66 = NULL,z_66 = NULL;
  y_66 = t;
  t = SSL_explode_term(y_66);
  if(match_cons(t, sym__2))
    {
      ATerm x_40 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_40) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      z_66 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_66;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm x_115 (ATerm), ATerm t)
{
  ATerm a_67 (ATerm t)
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, a_67, t);
        ;
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_115(t);
      }
    return(t);
  }
  t = a_67(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm b_67 = NULL,c_67 = NULL;
  if(match_cons(t, sym__2))
    {
      c_67 = ATgetArgument(t, 0);
      b_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_67;
  {
    ATerm e_12 (ATerm t)
    {
      t = b_67;
      return(t);
    }
    t = at_end_1_0(e_12, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm a_41 = t;
  int b_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(b_41);
    }
  else
    {
      t = a_41;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_67 = NULL;
  ATerm f_12 (ATerm t)
  {
    ATerm e_67 = NULL;
    e_67 = t;
    t = SSL_explode_string(e_67);
    return(t);
  }
  ATerm g_12 (ATerm t)
  {
    ATerm f_67 = NULL;
    f_67 = t;
    t = SSL_explode_string(f_67);
    return(t);
  }
  t = _2_0(f_12, g_12, t);
  t = conc_0_0(t);
  d_67 = t;
  t = SSL_implode_string(d_67);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm c_41 = t;
  int d_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_67 = NULL;
      l_67 = t;
      t = SSL_is_string(l_67);
      ;
      LocalPopChoice(d_41);
    }
  else
    {
      t = c_41;
      {
        ATerm e_41 = t;
        int f_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_12, t);
            ;
            LocalPopChoice(f_41);
          }
        else
          {
            t = e_41;
            {
              ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
              p_67 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_67 = ATgetArgument(t, 0);
                  t = q_67;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_67 = ATgetArgument(t, 0);
                      t = q_67;
                      {
                        ATerm g_41 = t;
                        int h_41 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(h_41);
                          }
                        else
                          {
                            t = g_41;
                            {
                              ATerm i_12 (ATerm t)
                              {
                                t = term_i_41;
                                return(t);
                              }
                              t = debug_1_0(i_12, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm v_67 = NULL,w_67 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_67 = ATgetArgument(t, 0);
                          r_67 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_67;
                      t = eval_config_0_0(t);
                      v_67 = t;
                      t = r_67;
                      t = eval_config_0_0(t);
                      w_67 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_67, w_67);
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
  ATerm z_67 = NULL;
  z_67 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_67);
  {
    ATerm j_12 (ATerm t)
    {
      ATerm a_68 = NULL;
      t = eval_config_0_0(t);
      a_68 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_67, a_68);
      t = a_68;
      return(t);
    }
    t = try_1_0(j_12, t);
  }
  return(t);
}
ATerm WriteToTextFile_0_0 (ATerm t)
{
  ATerm k_12 (ATerm t)
  {
    ATerm b_68 = NULL,c_68 = NULL,d_68 = NULL,e_68 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm j_41 = ATgetArgument(t, 0);
        if(match_cons(j_41, sym_Stream_1))
          {
            b_68 = ATgetArgument(j_41, 0);
          }
        else
          _fail(t);
        c_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_text(b_68, c_68);
    d_68 = t;
    t = SSL_fputc((ATerm)ATmakeInt(10), d_68);
    e_68 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, e_68);
    return(t);
  }
  t = WriteToFile_1_0(k_12, t);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm y_130 (ATerm), ATerm t)
{
  ATerm f_68 = NULL,g_68 = NULL,h_68 = NULL;
  if(match_cons(t, sym__2))
    {
      f_68 = ATgetArgument(t, 0);
      g_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_68, term_k_41);
  t = open_stream_0_0(t);
  h_68 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_68, g_68);
  t = y_130(t);
  t = fclose_0_0(t);
  t = g_68;
  return(t);
}
ATerm WriteToBinaryFile_0_0 (ATerm t)
{
  ATerm l_12 (ATerm t)
  {
    ATerm i_68 = NULL,j_68 = NULL,k_68 = NULL;
    if(match_cons(t, sym__2))
      {
        ATerm l_41 = ATgetArgument(t, 0);
        if(match_cons(l_41, sym_Stream_1))
          {
            i_68 = ATgetArgument(l_41, 0);
          }
        else
          _fail(t);
        j_68 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSL_write_term_to_stream_baf(i_68, j_68);
    k_68 = t;
    t = (ATerm) ATmakeAppl(sym_Stream_1, k_68);
    return(t);
  }
  t = WriteToFile_1_0(l_12, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_68 = NULL,m_68 = NULL;
  l_68 = t;
  {
    ATerm m_12 (ATerm t)
    {
      ATerm m_41 = t;
      int n_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_12 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                m_68 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1_0(n_12, t);
          ;
          LocalPopChoice(n_41);
        }
      else
        {
          t = m_41;
          t = term_o_41;
          m_68 = t;
        }
      return(t);
    }
    t = _2_0(m_12, _id, t);
    t = l_68;
    {
      ATerm o_12 (ATerm t)
      {
        ATerm p_12 (ATerm t)
        {
          t = not_null(m_68);
          return(t);
        }
        t = split_2_0(p_12, _id, t);
        return(t);
      }
      t = _2_0(_id, o_12, t);
      {
        ATerm y_41 = t;
        int z_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_12 (ATerm t)
            {
              ATerm r_12 (ATerm t)
              {
                if(!(match_cons(t, sym_Binary_0)))
                  _fail(t);
                return(t);
              }
              t = option_defined_1_0(r_12, t);
              return(t);
            }
            t = _2_0(q_12, WriteToBinaryFile_0_0, t);
            ;
            LocalPopChoice(z_41);
          }
        else
          {
            t = y_41;
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
ATerm apply_strategy_1_0 (ATerm k_132 (ATerm), ATerm t)
{
  ATerm n_68 = NULL,o_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL;
  n_68 = t;
  t = dtime_0_0(t);
  t = n_68;
  t = k_132(t);
  o_68 = t;
  t = dtime_0_0(t);
  p_68 = t;
  t = o_68;
  if(match_cons(t, sym__2))
    {
      q_68 = ATgetArgument(t, 0);
      r_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_68), (ATerm) ATmakeAppl(sym_Runtime_1, p_68)), r_68);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm f_69 (ATerm z_68, ATerm t)
  {
    t = SSL_fclose(z_68);
    return(t);
  }
  ATerm c_69 = NULL,d_69 = NULL;
  d_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_69 = ATgetArgument(t, 0);
      {
        ATerm a_42 = t;
        int b_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_69);
            ;
            LocalPopChoice(b_42);
          }
        else
          {
            t = a_42;
            t = f_69(d_69, t);
          }
      }
    }
  else
    {
      t = f_69(d_69, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm k_130 (ATerm), ATerm t)
{
  ATerm g_69 = NULL,h_69 = NULL;
  g_69 = t;
  t = k_130(t);
  h_69 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, g_69), h_69));
  t = g_69;
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_69 = NULL;
  t = SSL_stdin_stream();
  i_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_69);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_69 = NULL;
  t = SSL_stdout_stream();
  j_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_69);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_69 = NULL;
  t = SSL_stderr_stream();
  k_69 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_69);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm m_69 = NULL;
  m_69 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = m_69;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = m_69;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = m_69;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      ATerm d_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm e_42 = t;
    int f_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_8 = NULL,c_8 = NULL;
        b_8 = t;
        t = SSL_explode_term(b_8);
        if(match_cons(t, sym__2))
          {
            ATerm g_42 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) g_42) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm i_42 = ATgetArgument(t, 1);
              if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
                {
                  c_8 = ATgetFirst((ATermList) i_42);
                  {
                    ATerm l_42 = (ATerm) ATgetNext((ATermList) i_42);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = c_8;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(f_42);
      }
    else
      {
        t = e_42;
        {
          ATerm m_42 = t;
          int r_42 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_69 = NULL,q_69 = NULL,r_69 = NULL;
              ATerm s_12 (ATerm t)
              {
                ATerm s_69 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    s_69 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = s_69;
                return(t);
              }
              t = _2_0(s_12, _id, t);
              if(match_cons(t, sym__2))
                {
                  p_69 = ATgetArgument(t, 0);
                  q_69 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(p_69, q_69);
              r_69 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, r_69);
              ;
              LocalPopChoice(r_42);
            }
          else
            {
              t = m_42;
              {
                ATerm t_69 = NULL,u_69 = NULL,v_69 = NULL;
                ATerm t_12 (ATerm t)
                {
                  ATerm w_69 = NULL;
                  w_69 = t;
                  t = SSL_is_string(w_69);
                  return(t);
                }
                t = _2_0(t_12, _id, t);
                if(match_cons(t, sym__2))
                  {
                    t_69 = ATgetArgument(t, 0);
                    u_69 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(t_69, u_69);
                v_69 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, v_69);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  ATerm s_42 = t;
  int t_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_70 = NULL;
      a_70 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_70, term_u_42);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(t_42);
    }
  else
    {
      t = s_42;
      {
        ATerm u_12 (ATerm t)
        {
          t = term_v_42;
          return(t);
        }
        t = debug_1_0(u_12, t);
        _fail(t);
      }
    }
  x_69 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_69 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(z_69);
  y_69 = t;
  t = x_69;
  t = fclose_0_0(t);
  t = y_69;
  return(t);
}
ATerm split_2_0 (ATerm i_114 (ATerm), ATerm j_114 (ATerm), ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  t = i_114(t);
  d_70 = t;
  t = c_70;
  t = j_114(t);
  e_70 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_70, e_70);
  return(t);
}
ATerm input_file_0_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL;
  f_70 = t;
  {
    ATerm y_42 = t;
    int z_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_12 (ATerm t)
        {
          if(match_cons(t, sym_Input_1))
            {
              g_70 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1_0(v_12, t);
        ;
        LocalPopChoice(z_42);
      }
    else
      {
        t = y_42;
        t = term_a_43;
        g_70 = t;
      }
    t = f_70;
    {
      ATerm w_12 (ATerm t)
      {
        t = not_null(g_70);
        t = ReadFromFile_0_0(t);
        return(t);
      }
      t = split_2_0(_id, w_12, t);
    }
  }
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm x_12 (ATerm t)
  {
    ATerm i_70 = NULL;
    i_70 = t;
    if(match_string(t, "-k"))
      {
        t = i_70;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = i_70;
      }
    return(t);
  }
  ATerm y_12 (ATerm t)
  {
    ATerm j_70 = NULL,k_70 = NULL;
    j_70 = t;
    t = SSL_string_to_int(j_70);
    k_70 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), k_70);
    t = j_70;
    return(t);
  }
  ATerm z_12 (ATerm t)
  {
    t = term_b_43;
    return(t);
  }
  t = ArgOption_3_0(x_12, y_12, z_12, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_43 = t;
  int d_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_13 (ATerm t)
      {
        ATerm m_70 = NULL;
        m_70 = t;
        if(match_string(t, "-S"))
          {
            t = m_70;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = m_70;
          }
        return(t);
      }
      ATerm b_13 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_h_43;
        return(t);
      }
      ATerm c_13 (ATerm t)
      {
        t = term_i_43;
        return(t);
      }
      t = Option_3_0(a_13, b_13, c_13, t);
      ;
      LocalPopChoice(d_43);
    }
  else
    {
      t = c_43;
      {
        ATerm k_43 = t;
        int l_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_13 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm e_13 (ATerm t)
            {
              ATerm n_70 = NULL,o_70 = NULL;
              n_70 = t;
              t = SSL_string_to_int(n_70);
              o_70 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), o_70);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, n_70);
              return(t);
            }
            ATerm f_13 (ATerm t)
            {
              t = term_m_43;
              return(t);
            }
            t = ArgOption_3_0(d_13, e_13, f_13, t);
            ;
            LocalPopChoice(l_43);
          }
        else
          {
            t = k_43;
            {
              ATerm g_13 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm h_13 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_n_43;
                return(t);
              }
              ATerm i_13 (ATerm t)
              {
                t = term_r_43;
                return(t);
              }
              t = Option_3_0(g_13, h_13, i_13, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm s_43 = t;
  int t_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(t_43);
    }
  else
    {
      t = s_43;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm j_13 (ATerm t)
  {
    ATerm s_70 = NULL;
    s_70 = t;
    if(match_string(t, "-o"))
      {
        t = s_70;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = s_70;
      }
    return(t);
  }
  ATerm k_13 (ATerm t)
  {
    ATerm t_70 = NULL;
    t_70 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), t_70);
    t = (ATerm) ATmakeAppl(sym_Output_1, t_70);
    return(t);
  }
  ATerm l_13 (ATerm t)
  {
    t = term_u_43;
    return(t);
  }
  t = ArgOption_3_0(j_13, k_13, l_13, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm v_43 = t;
  int w_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(w_43);
    }
  else
    {
      t = v_43;
      {
        ATerm m_13 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm n_13 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_x_43;
          return(t);
        }
        ATerm o_13 (ATerm t)
        {
          t = term_y_43;
          return(t);
        }
        t = Option_3_0(m_13, n_13, o_13, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL;
  w_70 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = w_70;
      t = register_usage_1_0(l_0, t);
    }
  else
    {
      ATerm e_71 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_70 = ATgetFirst((ATermList) t);
          y_70 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_70;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_70 = ATgetFirst((ATermList) t);
          a_71 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_70;
      t = i_0(t);
      t = z_70;
      t = k_0(t);
      e_71 = t;
      t = (ATerm) ATinsert(CheckATermList(a_71), e_71);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm p_13 (ATerm t)
  {
    ATerm g_71 = NULL;
    g_71 = t;
    if(match_string(t, "-i"))
      {
        t = g_71;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = g_71;
      }
    return(t);
  }
  ATerm q_13 (ATerm t)
  {
    ATerm h_71 = NULL;
    h_71 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), h_71);
    t = (ATerm) ATmakeAppl(sym_Input_1, h_71);
    return(t);
  }
  ATerm r_13 (ATerm t)
  {
    t = term_z_43;
    return(t);
  }
  t = ArgOption_3_0(p_13, q_13, r_13, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm g_44 = t;
  int j_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(j_44);
    }
  else
    {
      t = g_44;
      {
        ATerm k_44 = t;
        int l_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(l_44);
          }
        else
          {
            t = k_44;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_71 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_39;
  t = whoami_0_0(t);
  i_71 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), i_71));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_44;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm x_121 (ATerm), ATerm y_121 (ATerm), ATerm t)
{
  ATerm n_44 = t;
  int o_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_121(t);
      ;
      LocalPopChoice(o_44);
    }
  else
    {
      t = n_44;
      {
        ATerm l_71 = NULL,m_71 = NULL,p_71 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_71 = ATgetFirst((ATermList) t);
            m_71 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = m_71;
        t = foldr_2_0(x_121, y_121, t);
        p_71 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_71, p_71);
        t = y_121(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm v_119 (ATerm), ATerm w_119 (ATerm), ATerm t)
{
  ATerm q_71 = NULL,r_71 = NULL;
  q_71 = t;
  t = SSL_explode_term(q_71);
  if(match_cons(t, sym__2))
    {
      ATerm p_44 = ATgetArgument(t, 0);
      r_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_71;
  t = foldr_2_0(v_119, w_119, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm s_71 = NULL;
  t = times_0_0(t);
  {
    ATerm s_13 (ATerm t)
    {
      t = term_g_43;
      return(t);
    }
    ATerm t_13 (ATerm t)
    {
      ATerm t_71 = NULL,u_71 = NULL;
      if(match_cons(t, sym__2))
        {
          t_71 = ATgetArgument(t, 0);
          u_71 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm q_44 = t;
        int r_44 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(t_71, u_71);
            ;
            LocalPopChoice(r_44);
          }
        else
          {
            t = q_44;
            t = SSL_addr(t_71, u_71);
          }
      }
      return(t);
    }
    t = crush_2_0(s_13, t_13, t);
    s_71 = t;
    t = SSL_TicksToSeconds(s_71);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  if(match_cons(t, sym__2))
    {
      e_72 = ATgetArgument(t, 0);
      f_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm s_44 = t;
    int t_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_72;
        if((e_72 != t))
          {
            _fail(t);
          }
        t = d_72;
        ;
        LocalPopChoice(t_44);
      }
    else
      {
        t = s_44;
        t = d_72;
        {
          ATerm u_44 = t;
          int v_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(e_72, f_72);
              ;
              LocalPopChoice(v_44);
            }
          else
            {
              t = u_44;
              t = SSL_gtr(e_72, f_72);
            }
          t = (ATerm) ATmakeAppl(sym__2, e_72, f_72);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_140 (ATerm), ATerm t)
{
  ATerm u_13 (ATerm t)
  {
    ATerm i_72 = NULL,j_72 = NULL;
    i_72 = t;
    t = term_c_15;
    t = get_config_0_0(t);
    j_72 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_72, term_a_45);
    t = geq_0_0(t);
    t = i_72;
    t = q_140(t);
    return(t);
  }
  t = try_1_0(u_13, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm v_13 (ATerm t)
  {
    ATerm l_72 = NULL,m_72 = NULL;
    t = run_time_0_0(t);
    l_72 = t;
    t = term_z_39;
    t = whoami_0_0(t);
    m_72 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), l_72), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), m_72));
    t = (ATerm) ATmakeAppl(sym__2, term_b_45, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_45), l_72), term_c_45), m_72));
    return(t);
  }
  t = if_verbose1_1_0(v_13, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm i_133 (ATerm), ATerm t)
{
  ATerm e_45 = t;
  int f_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_45;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(f_45);
    }
  else
    {
      t = e_45;
      {
        ATerm w_13 (ATerm t)
        {
          ATerm h_45 = t;
          int i_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(i_45);
            }
          else
            {
              t = h_45;
              {
                ATerm j_45 = t;
                int k_45 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(k_45);
                  }
                else
                  {
                    t = j_45;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(w_13, t);
      }
    }
  t = i_133(t);
  return(t);
}
ATerm map_1_0 (ATerm g_115 (ATerm), ATerm t)
{
  ATerm o_72 (ATerm t)
  {
    ATerm l_45 = t;
    int m_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(m_45);
      }
    else
      {
        t = l_45;
        t = Cons_2_0(g_115, o_72, t);
      }
    return(t);
  }
  t = o_72(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm q_72 = NULL,r_72 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_72 = ATgetFirst((ATermList) t);
      r_72 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_72 = NULL,w_72 = NULL;
        t = r_72;
        t = g_0(t);
        v_72 = t;
        t = q_72;
        t = e_0(t);
        w_72 = t;
        t = r_72;
        {
          ATerm x_13 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(v_72), w_72);
            return(t);
          }
          t = reverse_acc_2_0(e_0, x_13, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_39;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm y_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, y_13, t);
  return(t);
}
ATerm Program_1_0 (ATerm z_109 (ATerm), ATerm t)
{
  ATerm x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
  a_73 = t;
  if(match_cons(t, sym_Program_1))
    {
      y_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_73);
  x_72 = t;
  t = y_72;
  t = z_109(t);
  z_72 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, z_72), x_72);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_44;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_45);
    }
  else
    {
      t = r_45;
      {
        ATerm z_13 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(z_13, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_v_45;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm a_14 (ATerm t)
    {
      ATerm d_73 = NULL;
      d_73 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, d_73), term_w_45);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(a_14, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm a_110 (ATerm), ATerm t)
{
  ATerm e_73 = NULL,f_73 = NULL,g_73 = NULL,h_73 = NULL;
  h_73 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      f_73 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_73);
  e_73 = t;
  t = f_73;
  t = a_110(t);
  g_73 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, g_73), e_73);
  return(t);
}
ATerm fetch_1_0 (ATerm r_115 (ATerm), ATerm t)
{
  ATerm k_73 (ATerm t)
  {
    ATerm x_45 = t;
    int y_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(r_115, _id, t);
        ;
        LocalPopChoice(y_45);
      }
    else
      {
        t = x_45;
        t = Cons_2_0(_id, k_73, t);
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm k_135 (ATerm), ATerm t)
{
  t = fetch_1_0(k_135, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm m_73 = NULL,n_73 = NULL;
  m_73 = t;
  {
    ATerm z_45 = t;
    int a_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = m_73;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm b_46 = ATgetFirst((ATermList) t);
                ATerm c_46 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = m_73;
          }
        ;
        LocalPopChoice(a_46);
      }
    else
      {
        t = z_45;
        t = (ATerm) ATinsert(ATempty, m_73);
      }
    n_73 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), n_73);
    t = m_73;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_44;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm try_1_0 (ATerm o_113 (ATerm), ATerm t)
{
  ATerm d_46 = t;
  int e_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_113(t);
      ;
      LocalPopChoice(e_46);
    }
  else
    {
      t = d_46;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm f_46 = t;
  int k_46 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_14 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm c_14 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_n_46;
        return(t);
      }
      ATerm d_14 (ATerm t)
      {
        t = term_s_46;
        return(t);
      }
      t = Option_3_0(b_14, c_14, d_14, t);
      ;
      LocalPopChoice(k_46);
    }
  else
    {
      t = f_46;
      {
        ATerm e_14 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm f_14 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_t_46;
          return(t);
        }
        ATerm g_14 (ATerm t)
        {
          t = term_u_46;
          return(t);
        }
        t = Option_3_0(e_14, f_14, g_14, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm t_73 = NULL,u_73 = NULL,v_73 = NULL,w_73 = NULL;
  if(match_cons(t, sym__3))
    {
      t_73 = ATgetArgument(t, 0);
      u_73 = ATgetArgument(t, 1);
      v_73 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_73, u_73);
  {
    ATerm v_46 = t;
    int a_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_47 = ATgetArgument(t, 0);
            ATerm c_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(t_73, u_73);
        ;
        LocalPopChoice(a_47);
      }
    else
      {
        t = v_46;
        t = (ATerm) ATempty;
      }
    w_73 = t;
    t = SSL_table_put(t_73, u_73, (ATerm) ATinsert(CheckATermList(w_73), v_73));
    t = (ATerm) ATmakeAppl(sym__3, t_73, u_73, v_73);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm p_136 (ATerm), ATerm t)
{
  ATerm b_74 = NULL;
  t = term_z_39;
  t = p_136(t);
  b_74 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_d_47, term_e_47, b_74);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_74 = NULL,g_74 = NULL,h_74 = NULL;
  f_74 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = f_74;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm k_74 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_74 = ATgetFirst((ATermList) t);
          h_74 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_74;
      t = a_0(t);
      t = term_z_39;
      t = c_0(t);
      k_74 = t;
      t = (ATerm) ATinsert(CheckATermList(h_74), k_74);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm h_14 (ATerm t)
  {
    ATerm m_74 = NULL;
    m_74 = t;
    if(match_string(t, "--help"))
      {
        t = m_74;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = m_74;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = m_74;
          }
      }
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_f_47;
    return(t);
  }
  ATerm j_14 (ATerm t)
  {
    t = term_g_47;
    return(t);
  }
  t = Option_3_0(h_14, i_14, j_14, t);
  return(t);
}
ATerm Cons_2_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  s_74 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_74 = ATgetFirst((ATermList) t);
      p_74 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_74);
  n_74 = t;
  t = o_74;
  t = a_96(t);
  q_74 = t;
  t = p_74;
  t = b_96(t);
  r_74 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(r_74), q_74), n_74);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_136 (ATerm), ATerm t)
{
  ATerm y_74 = NULL;
  y_74 = t;
  {
    ATerm k_14 (ATerm t)
    {
      t = term_h_47;
      t = n_136(t);
      return(t);
    }
    t = try_1_0(k_14, t);
    t = y_74;
    {
      ATerm l_14 (ATerm t)
      {
        ATerm z_74 = NULL;
        z_74 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), z_74);
        t = (ATerm) ATmakeAppl(sym_Program_1, z_74);
        return(t);
      }
      ATerm m_14 (ATerm t)
      {
        ATerm i_47 = t;
        int j_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_47 = t;
            int l_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(l_47);
              }
            else
              {
                t = k_47;
                t = n_136(t);
                t = Cons_2_0(_id, m_14, t);
              }
            ;
            LocalPopChoice(j_47);
          }
        else
          {
            t = i_47;
            {
              ATerm b_75 = NULL,c_75 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  b_75 = ATgetFirst((ATermList) t);
                  c_75 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(c_75), (ATerm) ATmakeAppl(sym_Undefined_1, b_75));
            }
          }
        return(t);
      }
      t = Cons_2_0(l_14, m_14, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm m_136 (ATerm), ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL,k_75 = NULL;
  i_75 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = i_75;
  {
    ATerm n_14 (ATerm t)
    {
      ATerm n_47 = t;
      int o_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_136(t);
          ;
          LocalPopChoice(o_47);
        }
      else
        {
          t = n_47;
          {
            ATerm p_47 = t;
            int q_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(q_47);
              }
            else
              {
                t = p_47;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(n_14, t);
    {
      ATerm o_14 (ATerm t)
      {
        ATerm r_47 = t;
        int s_47 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_75 = NULL;
            p_75 = t;
            {
              ATerm t_47 = t;
              int u_47 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_75;
                  {
                    ATerm v_47 = t;
                    int w_47 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_g_45;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(w_47);
                      }
                    else
                      {
                        t = v_47;
                        {
                          ATerm p_14 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(p_14, t);
                        }
                      }
                    t = p_75;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(u_47);
                }
              else
                {
                  t = t_47;
                  t = term_m_46;
                  t = get_config_0_0(t);
                  t = p_75;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(s_47);
          }
        else
          {
            t = r_47;
            {
              ATerm r_14 (ATerm t)
              {
                ATerm s_14 (ATerm t)
                {
                  j_75 = t;
                  return(t);
                }
                t = Undefined_1_0(s_14, t);
                return(t);
              }
              t = option_defined_1_0(r_14, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_75)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_45, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_75)), term_x_47));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(o_14, t);
      k_75 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = k_75;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm k_133 (ATerm), ATerm l_133 (ATerm), ATerm m_133 (ATerm), ATerm n_133 (ATerm), ATerm t)
{
  ATerm c_11 = NULL;
  t = parse_options_1_0(k_133, t);
  c_11 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), c_11);
  t = c_11;
  t = m_133(t);
  {
    ATerm y_47 = t;
    int z_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(l_133, t);
        ;
        LocalPopChoice(z_47);
      }
    else
      {
        t = y_47;
        {
          ATerm a_48 = t;
          int b_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = n_133(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_48);
            }
          else
            {
              t = a_48;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm iowrap_4_0 (ATerm z_132 (ATerm), ATerm a_133 (ATerm), ATerm b_133 (ATerm), ATerm c_133 (ATerm), ATerm t)
{
  ATerm t_14 (ATerm t)
  {
    ATerm c_48 = t;
    int d_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_133(t);
        ;
        LocalPopChoice(d_48);
      }
    else
      {
        t = c_48;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm u_14 (ATerm t)
  {
    t = input_file_0_0(t);
    t = apply_strategy_1_0(z_132, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_14, b_133, c_133, u_14, t);
  return(t);
}
ATerm iowrap_3_0 (ATerm t_132 (ATerm), ATerm u_132 (ATerm), ATerm v_132 (ATerm), ATerm t)
{
  ATerm v_14 (ATerm t)
  {
    ATerm w_14 (ATerm t)
    {
      ATerm s_75 = NULL,t_75 = NULL;
      s_75 = t;
      t = term_m_44;
      t = get_config_0_0(t);
      t_75 = t;
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, t_75));
      t = s_75;
      return(t);
    }
    t = if_verbose2_1_0(w_14, t);
    return(t);
  }
  t = iowrap_4_0(t_132, u_132, v_132, v_14, t);
  return(t);
}
ATerm iowrap_2_0 (ATerm r_132 (ATerm), ATerm s_132 (ATerm), ATerm t)
{
  t = iowrap_3_0(r_132, s_132, default_usage_0_0, t);
  return(t);
}
ATerm iowrap_1_0 (ATerm o_132 (ATerm), ATerm t)
{
  ATerm y_14 (ATerm t)
  {
    t = _2_0(_id, o_132, t);
    return(t);
  }
  t = iowrap_2_0(y_14, _fail, t);
  return(t);
}
ATerm fusion_io_0_0 (ATerm t)
{
  ATerm z_14 (ATerm t)
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = declare_inline_rules_0_0(t);
        t = check_library_definitions_0_0(t);
        t = alltd_1_0(innermost_fusion_0_0, t);
        ;
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        {
          ATerm a_15 (ATerm t)
          {
            ATerm b_15 (ATerm t)
            {
              t = term_g_48;
              return(t);
            }
            t = say_1_0(b_15, t);
            return(t);
          }
          t = if_verbose2_1_0(a_15, t);
        }
      }
    return(t);
  }
  t = iowrap_1_0(z_14, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = fusion_io_0_0(t);
  return(t);
}
