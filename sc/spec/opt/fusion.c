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
ATerm term_o_85;
ATerm term_k_85;
ATerm term_r_84;
ATerm term_q_84;
ATerm term_o_84;
ATerm term_i_84;
ATerm term_h_84;
ATerm term_g_84;
ATerm term_p_83;
ATerm term_n_83;
ATerm term_i_83;
ATerm term_d_83;
ATerm term_c_83;
ATerm term_b_83;
ATerm term_a_83;
ATerm term_z_82;
ATerm term_y_82;
ATerm term_q_82;
ATerm term_h_82;
ATerm term_e_82;
ATerm term_v_81;
ATerm term_t_81;
ATerm term_w_80;
ATerm term_v_80;
ATerm term_u_80;
ATerm term_q_80;
ATerm term_h_80;
ATerm term_g_80;
ATerm term_f_80;
ATerm term_e_80;
ATerm term_x_79;
ATerm term_w_79;
ATerm term_u_79;
ATerm term_t_79;
ATerm term_s_79;
ATerm term_o_79;
ATerm term_n_79;
ATerm term_m_79;
ATerm term_l_79;
ATerm term_a_79;
ATerm term_u_77;
ATerm term_t_77;
ATerm term_q_76;
ATerm term_x_75;
ATerm term_q_75;
ATerm term_k_75;
ATerm term_x_74;
ATerm term_v_74;
ATerm term_m_74;
ATerm term_l_74;
ATerm term_h_74;
ATerm term_d_74;
ATerm term_e_57;
ATerm term_d_57;
ATerm term_c_57;
ATerm term_g_55;
ATerm term_n_54;
ATerm term_m_54;
ATerm term_j_54;
ATerm term_c_54;
ATerm term_y_53;
ATerm term_n_53;
ATerm term_m_53;
ATerm term_l_53;
ATerm term_i_53;
ATerm term_w_52;
ATerm term_k_52;
ATerm term_f_52;
ATerm term_u_51;
ATerm term_t_51;
ATerm term_r_51;
ATerm term_q_51;
ATerm term_p_51;
ATerm term_q_49;
ATerm term_p_49;
ATerm term_m_49;
ATerm term_l_49;
ATerm term_i_49;
ATerm term_h_49;
ATerm term_e_49;
ATerm term_d_49;
ATerm term_y_48;
ATerm term_x_48;
ATerm term_w_48;
ATerm term_d_48;
ATerm term_c_48;
ATerm term_f_47;
ATerm term_d_46;
ATerm term_x_45;
ATerm term_h_45;
ATerm term_g_45;
ATerm term_f_45;
ATerm term_e_45;
ATerm term_d_45;
ATerm term_c_45;
ATerm term_b_45;
ATerm term_a_45;
ATerm term_z_44;
ATerm term_y_44;
ATerm term_v_44;
ATerm term_y_41;
ATerm term_o_41;
ATerm term_k_41;
ATerm term_o_40;
ATerm term_i_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_v_39;
ATerm term_m_39;
ATerm term_h_39;
ATerm term_d_39;
ATerm term_a_39;
ATerm term_z_38;
ATerm term_g_38;
ATerm term_z_19;
void init_constant_terms (void)
{
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_38));
  term_z_38 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_39));
  term_a_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_d_39));
  term_d_39 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_39));
  term_v_39 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_40));
  term_o_40 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_k_41));
  term_k_41 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_o_41));
  term_o_41 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_v_44));
  term_v_44 = (ATerm) ATmakeAppl(ATmakeSymbol("Replace", 0, ATtrue));
  ATprotect(&(term_y_44));
  term_y_44 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-Cond", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("mark", 0, ATtrue));
  ATprotect(&(term_a_45));
  term_a_45 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_44);
  ATprotect(&(term_b_45));
  term_b_45 = (ATerm) ATmakeAppl(sym_CallT_3, term_a_45, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATempty);
  ATprotect(&(term_d_45));
  term_d_45 = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATempty);
  ATprotect(&(term_e_45));
  term_e_45 = (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATempty);
  ATprotect(&(term_f_45));
  term_f_45 = (ATerm) ATmakeAppl(sym_Seq_2, term_d_45, term_e_45);
  ATprotect(&(term_g_45));
  term_g_45 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_45, term_f_45);
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_45, term_g_45);
  ATprotect(&(term_x_45));
  term_x_45 = (ATerm) ATmakeAppl(ATmakeSymbol("m_0", 0, ATtrue));
  ATprotect(&(term_d_46));
  term_d_46 = (ATerm) ATmakeAppl(sym_Defined_1, term_x_45);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_48));
  term_c_48 = (ATerm) ATmakeAppl(ATmakeSymbol("v_0", 0, ATtrue));
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(sym_Defined_1, term_c_48);
  ATprotect(&(term_w_48));
  term_w_48 = (ATerm) ATmakeAppl(ATmakeSymbol("BottomupToVarIsId-UnCond", 0, ATtrue));
  ATprotect(&(term_x_48));
  term_x_48 = (ATerm) ATmakeAppl(sym_Seq_2, term_c_45, term_e_45);
  ATprotect(&(term_y_48));
  term_y_48 = (ATerm) ATmakeAppl(sym_Seq_2, term_b_45, term_x_48);
  ATprotect(&(term_d_49));
  term_d_49 = (ATerm) ATmakeAppl(ATmakeSymbol("j_0", 0, ATtrue));
  ATprotect(&(term_e_49));
  term_e_49 = (ATerm) ATmakeAppl(sym_Defined_1, term_d_49);
  ATprotect(&(term_h_49));
  term_h_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverChoiceR", 0, ATtrue));
  ATprotect(&(term_i_49));
  term_i_49 = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_l_49));
  term_l_49 = (ATerm) ATmakeAppl(ATmakeSymbol("SeqOverLChoiceR", 0, ATtrue));
  ATprotect(&(term_m_49));
  term_m_49 = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_p_49));
  term_p_49 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup_1_0", 0, ATtrue));
  ATprotect(&(term_q_49));
  term_q_49 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_49);
  ATprotect(&(term_p_51));
  term_p_51 = (ATerm) ATmakeAppl(ATmakeSymbol("p_0", 0, ATtrue));
  ATprotect(&(term_q_51));
  term_q_51 = (ATerm) ATmakeAppl(ATmakeSymbol("s_0", 0, ATtrue));
  ATprotect(&(term_r_51));
  term_r_51 = (ATerm) ATmakeAppl(ATmakeSymbol("d_2", 0, ATtrue));
  ATprotect(&(term_t_51));
  term_t_51 = (ATerm) ATmakeAppl(sym_Defined_1, term_r_51);
  ATprotect(&(term_u_51));
  term_u_51 = (ATerm) ATmakeAppl(ATmakeSymbol("f_2", 0, ATtrue));
  ATprotect(&(term_f_52));
  term_f_52 = (ATerm) ATmakeAppl(sym_Defined_1, term_u_51);
  ATprotect(&(term_k_52));
  term_k_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fusion: application of innermost found", 0, ATtrue));
  ATprotect(&(term_w_52));
  term_w_52 = (ATerm) ATmakeAppl(ATmakeSymbol("fused application of innermost", 0, ATtrue));
  ATprotect(&(term_i_53));
  term_i_53 = (ATerm) ATmakeAppl(ATmakeSymbol("not all marks removed", 0, ATtrue));
  ATprotect(&(term_l_53));
  term_l_53 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of bottomup_1_0: ", 0, ATtrue));
  ATprotect(&(term_m_53));
  term_m_53 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is not bottomup: ", 0, ATtrue));
  ATprotect(&(term_n_53));
  term_n_53 = (ATerm) ATmakeAppl(ATmakeSymbol("bottomup is bottomup", 0, ATtrue));
  ATprotect(&(term_y_53));
  term_y_53 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of innermost_1_0: ", 0, ATtrue));
  ATprotect(&(term_c_54));
  term_c_54 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is not innermost: ", 0, ATtrue));
  ATprotect(&(term_j_54));
  term_j_54 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost is innermost ", 0, ATtrue));
  ATprotect(&(term_m_54));
  term_m_54 = (ATerm) ATmakeAppl(ATmakeSymbol("innermost_1_0", 0, ATtrue));
  ATprotect(&(term_n_54));
  term_n_54 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_54);
  ATprotect(&(term_g_55));
  term_g_55 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_c_57));
  term_c_57 = (ATerm) ATmakeAppl(ATmakeSymbol("ATerm", 0, ATtrue));
  ATprotect(&(term_d_57));
  term_d_57 = (ATerm) ATmakeAppl(sym_Op_2, term_c_57, (ATerm) ATempty);
  ATprotect(&(term_e_57));
  term_e_57 = (ATerm) ATmakeAppl(sym_ConstType_1, term_d_57);
  ATprotect(&(term_d_74));
  term_d_74 = (ATerm) ATmakeAppl(ATmakeSymbol("InlineStrat", 0, ATtrue));
  ATprotect(&(term_h_74));
  term_h_74 = (ATerm) ATmakeAppl(ATmakeSymbol("no definition of try_1_0: ", 0, ATtrue));
  ATprotect(&(term_l_74));
  term_l_74 = (ATerm) ATmakeAppl(ATmakeSymbol("try is not try: ", 0, ATtrue));
  ATprotect(&(term_m_74));
  term_m_74 = (ATerm) ATmakeAppl(ATmakeSymbol("try is try ", 0, ATtrue));
  ATprotect(&(term_v_74));
  term_v_74 = (ATerm) ATmakeAppl(ATmakeSymbol("try_1_0", 0, ATtrue));
  ATprotect(&(term_x_74));
  term_x_74 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_74);
  ATprotect(&(term_k_75));
  term_k_75 = (ATerm) ATmakeAppl(ATmakeSymbol("b_0", 0, ATtrue));
  ATprotect(&(term_q_75));
  term_q_75 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_x_75));
  term_x_75 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_76));
  term_q_76 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_77));
  term_t_77 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_77));
  term_u_77 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_a_79));
  term_a_79 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_79));
  term_l_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_79));
  term_m_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_79));
  term_n_79 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_79));
  term_o_79 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_79);
  ATprotect(&(term_s_79));
  term_s_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_79));
  term_t_79 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_79));
  term_u_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_79));
  term_w_79 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_79));
  term_x_79 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_80));
  term_e_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_80));
  term_f_80 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_80));
  term_g_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_80));
  term_h_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_q_80));
  term_q_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_80));
  term_u_80 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_80));
  term_v_80 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_80));
  term_w_80 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_81));
  term_t_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_81));
  term_v_81 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_82));
  term_e_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_82));
  term_h_82 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_q_82));
  term_q_82 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_82));
  term_y_82 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_82));
  term_z_82 = (ATerm) ATmakeAppl(sym__3, term_m_39, term_y_82, term_z_19);
  ATprotect(&(term_a_83));
  term_a_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_83));
  term_b_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_83));
  term_c_83 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_83));
  term_d_83 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_83));
  term_i_83 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_83));
  term_n_83 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_83));
  term_p_83 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_84));
  term_g_84 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_84));
  term_h_84 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_84));
  term_i_84 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_o_84));
  term_o_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_84));
  term_q_84 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_84));
  term_r_84 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_85));
  term_k_85 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_85));
  term_o_85 = (ATerm) ATmakeAppl(ATmakeSymbol("no innermost here", 0, ATtrue));
}
ATerm default_usage_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_147 (ATerm), ATerm);
ATerm Expl_0_0 (ATerm);
ATerm Mapp2_0_0 (ATerm);
ATerm As_2_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm);
ATerm CallT_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm);
ATerm PrimT_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm);
ATerm Explode_2_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm);
ATerm Op_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm);
ATerm pat_td_1_0 (ATerm z_145 (ATerm), ATerm);
ATerm Bapp_0_0 (ATerm);
ATerm z_24 (ATerm);
ATerm a_25 (ATerm);
ATerm b_25 (ATerm);
ATerm c_25 (ATerm);
ATerm d_25 (ATerm);
ATerm e_25 (ATerm);
ATerm f_25 (ATerm);
ATerm j_25 (ATerm);
ATerm LiftCallArgs_0_0 (ATerm);
ATerm e_7 (ATerm t_6, ATerm);
ATerm LiftPrimArg_0_0 (ATerm);
ATerm k_25 (ATerm);
ATerm l_25 (ATerm);
ATerm m_25 (ATerm);
ATerm n_25 (ATerm);
ATerm o_25 (ATerm);
ATerm p_25 (ATerm);
ATerm s_25 (ATerm);
ATerm t_25 (ATerm);
ATerm u_25 (ATerm);
ATerm v_25 (ATerm);
ATerm w_25 (ATerm);
ATerm x_25 (ATerm);
ATerm y_25 (ATerm);
ATerm z_25 (ATerm);
ATerm a_26 (ATerm);
ATerm b_26 (ATerm);
ATerm LiftPrimArgs_0_0 (ATerm);
ATerm c_26 (ATerm);
ATerm buildterm_0_0 (ATerm);
ATerm App_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm);
ATerm Con_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm);
ATerm d_26 (ATerm);
ATerm pureterm_0_0 (ATerm);
ATerm RtoS_0_0 (ATerm);
ATerm Rcon_0_0 (ATerm);
ATerm desugarRule_0_0 (ATerm);
ATerm topdown_1_0 (ATerm o_117 (ATerm), ATerm);
ATerm h_26 (ATerm);
ATerm i_26 (ATerm);
ATerm desugar_0_0 (ATerm);
ATerm k_26 (ATerm);
ATerm l_26 (ATerm);
ATerm m_26 (ATerm);
ATerm o_26 (ATerm);
ATerm p_26 (ATerm);
ATerm y_26 (ATerm);
ATerm BottomupToVarIsId_Cond_0_0 (ATerm);
ATerm t_28 (ATerm d_28, ATerm e_28, ATerm);
ATerm v_28 (ATerm h_28, ATerm i_28, ATerm);
ATerm Replace_0_0 (ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm x_129 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm w_129 (ATerm), ATerm);
ATerm scope_2_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm);
ATerm m_27 (ATerm);
ATerm o_27 (ATerm);
ATerm p_27 (ATerm);
ATerm s_27 (ATerm);
ATerm t_27 (ATerm);
ATerm v_27 (ATerm);
ATerm replace_application_0_0 (ATerm);
ATerm w_27 (ATerm);
ATerm x_27 (ATerm);
ATerm y_27 (ATerm);
ATerm z_27 (ATerm);
ATerm a_28 (ATerm);
ATerm f_28 (ATerm);
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm);
ATerm fuse_with_bottomup_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm p_117 (ATerm), ATerm);
ATerm propagate_mark_0_0 (ATerm);
ATerm Build_1_0 (ATerm m_107 (ATerm), ATerm);
ATerm Seq_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm);
ATerm Match_1_0 (ATerm l_107 (ATerm), ATerm);
ATerm LChoice_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm);
ATerm Choice_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm);
ATerm o_28 (ATerm);
ATerm q_28 (ATerm);
ATerm r_28 (ATerm);
ATerm s_28 (ATerm);
ATerm u_28 (ATerm);
ATerm w_28 (ATerm);
ATerm y_28 (ATerm);
ATerm inline_rules_0_0 (ATerm);
ATerm z_28 (ATerm);
ATerm a_29 (ATerm);
ATerm bottomup_to_var_0_0 (ATerm);
ATerm e_29 (ATerm);
ATerm g_29 (ATerm);
ATerm seq_over_choice_0_0 (ATerm);
ATerm h_29 (ATerm);
ATerm i_29 (ATerm);
ATerm j_29 (ATerm);
ATerm k_29 (ATerm);
ATerm innermost_fusion_0_0 (ATerm);
ATerm alltd_1_0 (ATerm g_119 (ATerm), ATerm);
ATerm m_29 (ATerm);
ATerm o_29 (ATerm);
ATerm t_29 (ATerm);
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm);
ATerm u_29 (ATerm);
ATerm y_29 (ATerm);
ATerm z_29 (ATerm);
ATerm check_that_innermost_is_innermost_0_0 (ATerm);
ATerm BuildPrim_0_0 (ATerm);
ATerm a_30 (ATerm);
ATerm b_30 (ATerm);
ATerm c_30 (ATerm);
ATerm e_30 (ATerm);
ATerm BuildMatchFusion_0_0 (ATerm);
ATerm MisMatch_0_0 (ATerm);
ATerm q_58 (ATerm h_57, ATerm i_57, ATerm n_57, ATerm);
ATerm BuildMatch_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm s_118 (ATerm), ATerm);
ATerm LetHoist_0_0 (ATerm);
ATerm Idempotency_0_0 (ATerm);
ATerm AssociateR_0_0 (ATerm);
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm m_30 (ATerm);
ATerm o_30 (ATerm);
ATerm p_30 (ATerm);
ATerm q_30 (ATerm);
ATerm s_30 (ATerm);
ATerm u_30 (ATerm);
ATerm HL_0_0 (ATerm);
ATerm v_30 (ATerm);
ATerm ElimFail_0_0 (ATerm);
ATerm ElimId_0_0 (ATerm);
ATerm Simplify_0_0 (ATerm);
ATerm repeat_1_0 (ATerm t_130 (ATerm), ATerm);
ATerm downup_1_0 (ATerm q_117 (ATerm), ATerm);
ATerm genzip_4_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm);
ATerm x_30 (ATerm);
ATerm y_30 (ATerm);
ATerm z_30 (ATerm);
ATerm subs_args_0_0 (ATerm);
ATerm substitute_2_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm);
ATerm c_31 (ATerm);
ATerm d_31 (ATerm);
ATerm e_31 (ATerm);
ATerm f_31 (ATerm);
ATerm j_31 (ATerm);
ATerm k_31 (ATerm);
ATerm l_31 (ATerm);
ATerm m_31 (ATerm);
ATerm o_31 (ATerm);
ATerm p_31 (ATerm);
ATerm q_31 (ATerm);
ATerm r_31 (ATerm);
ATerm u_31 (ATerm);
ATerm v_31 (ATerm);
ATerm x_31 (ATerm);
ATerm y_31 (ATerm);
ATerm spaste_1_0 (ATerm x_146 (ATerm), ATerm);
ATerm Rec_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm);
ATerm Let_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm);
ATerm sboundin_3_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm);
ATerm c_32 (ATerm);
ATerm Bind1_0_0 (ATerm);
ATerm SVar_1_0 (ATerm d_107 (ATerm), ATerm);
ATerm DistBinding_2_0 (ATerm k_144 (ATerm), ATerm l_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm g_32 (ATerm);
ATerm h_32 (ATerm);
ATerm i_32 (ATerm);
ATerm RnBinding_2_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm (ATerm), ATerm), ATerm);
ATerm lookup_0_0 (ATerm);
ATerm env_alltd_1_0 (ATerm p_133 (ATerm), ATerm);
ATerm rename_4_0 (ATerm z_143 (ATerm (ATerm), ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_144 (ATerm (ATerm), ATerm), ATerm);
ATerm p_32 (ATerm);
ATerm q_32 (ATerm);
ATerm r_32 (ATerm);
ATerm s_32 (ATerm);
ATerm u_32 (ATerm);
ATerm v_32 (ATerm);
ATerm w_32 (ATerm);
ATerm x_32 (ATerm);
ATerm tpaste_1_0 (ATerm t_146 (ATerm), ATerm);
ATerm DynamicRules_1_0 (ATerm l_106 (ATerm), ATerm);
ATerm RDefT_4_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm);
ATerm SDefT_4_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm);
ATerm Scope_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm);
ATerm tboundin_3_0 (ATerm u_146 (ATerm), ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm);
ATerm y_32 (ATerm);
ATerm z_32 (ATerm);
ATerm a_33 (ATerm);
ATerm b_33 (ATerm);
ATerm tvars_0_0 (ATerm);
ATerm union_1_0 (ATerm d_126 (ATerm), ATerm);
ATerm foldr_3_0 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm);
ATerm diff_1_0 (ATerm y_125 (ATerm), ATerm);
ATerm e_33 (ATerm);
ATerm f_33 (ATerm);
ATerm g_33 (ATerm);
ATerm UfDecompose_0_0 (ATerm);
ATerm while_not_2_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm);
ATerm i_33 (ATerm);
ATerm j_33 (ATerm);
ATerm k_33 (ATerm);
ATerm l_33 (ATerm);
ATerm m_33 (ATerm);
ATerm n_33 (ATerm);
ATerm diff_0_0 (ATerm);
ATerm p_33 (ATerm);
ATerm q_33 (ATerm);
ATerm r_33 (ATerm);
ATerm s_33 (ATerm);
ATerm t_33 (ATerm);
ATerm u_33 (ATerm);
ATerm v_33 (ATerm);
ATerm free_vars_3_0 (ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm r_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm);
ATerm w_33 (ATerm);
ATerm x_33 (ATerm);
ATerm y_33 (ATerm);
ATerm z_33 (ATerm);
ATerm Bind0_0_0 (ATerm);
ATerm Var_1_0 (ATerm u_103 (ATerm), ATerm);
ATerm a_34 (ATerm);
ATerm b_34 (ATerm);
ATerm c_34 (ATerm);
ATerm d_34 (ATerm);
ATerm e_34 (ATerm);
ATerm f_34 (ATerm);
ATerm g_34 (ATerm);
ATerm strename_0_0 (ATerm);
ATerm h_34 (ATerm);
ATerm i_34 (ATerm);
ATerm j_34 (ATerm);
ATerm k_34 (ATerm);
ATerm l_34 (ATerm);
ATerm m_34 (ATerm);
ATerm n_34 (ATerm);
ATerm o_34 (ATerm);
ATerm InlineStrat_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm p_34 (ATerm);
ATerm q_34 (ATerm);
ATerm r_34 (ATerm);
ATerm check_that_try_is_try_0_0 (ATerm);
ATerm check_library_definitions_0_0 (ATerm);
ATerm assert_1_0 (ATerm a_130 (ATerm), ATerm);
ATerm s_34 (ATerm);
ATerm declare_inline_rule_0_0 (ATerm);
ATerm map_1_0 (ATerm y_121 (ATerm), ATerm);
ATerm Strategies_1_0 (ATerm w_102 (ATerm), ATerm);
ATerm Cons_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm);
ATerm Signature_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm Specification_1_0 (ATerm b_103 (ATerm), ATerm);
ATerm _2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm);
ATerm WriteToFile_1_0 (ATerm q_137 (ATerm), ATerm);
ATerm h_35 (ATerm);
ATerm i_35 (ATerm);
ATerm j_35 (ATerm);
ATerm k_35 (ATerm);
ATerm l_35 (ATerm);
ATerm m_35 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm c_139 (ATerm), ATerm);
ATerm r_95 (ATerm l_95, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm n_35 (ATerm);
ATerm o_35 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm j_122 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm p_122 (ATerm), ATerm);
ATerm q_35 (ATerm);
ATerm r_35 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm t_35 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm u_35 (ATerm);
ATerm v_35 (ATerm);
ATerm w_35 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm x_35 (ATerm);
ATerm y_35 (ATerm);
ATerm z_35 (ATerm);
ATerm a_36 (ATerm);
ATerm b_36 (ATerm);
ATerm c_36 (ATerm);
ATerm d_36 (ATerm);
ATerm e_36 (ATerm);
ATerm f_36 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm g_36 (ATerm);
ATerm h_36 (ATerm);
ATerm t_36 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm);
ATerm u_36 (ATerm);
ATerm v_36 (ATerm);
ATerm x_36 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm y_36 (ATerm);
ATerm z_36 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_147 (ATerm), ATerm);
ATerm a_37 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm b_37 (ATerm);
ATerm need_help_1_0 (ATerm a_140 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm r_116 (ATerm), ATerm);
ATerm d_37 (ATerm);
ATerm e_37 (ATerm);
ATerm f_37 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm s_116 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_37 (ATerm);
ATerm i_37 (ATerm);
ATerm k_37 (ATerm);
ATerm l_37 (ATerm);
ATerm m_37 (ATerm);
ATerm n_37 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm o_37 (ATerm);
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm);
ATerm s_37 (ATerm);
ATerm t_37 (ATerm);
ATerm v_37 (ATerm);
ATerm w_37 (ATerm);
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm);
ATerm a_38 (ATerm);
ATerm c_38 (ATerm);
ATerm d_38 (ATerm);
ATerm h_38 (ATerm);
ATerm i_38 (ATerm);
ATerm iowrap_3_0 (ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm);
ATerm k_38 (ATerm);
ATerm l_38 (ATerm);
ATerm m_38 (ATerm);
ATerm n_38 (ATerm);
ATerm o_38 (ATerm);
ATerm t_38 (ATerm);
ATerm u_38 (ATerm);
ATerm v_38 (ATerm);
ATerm y_38 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_0 = NULL,q_0 = NULL,t_0 = NULL,w_0 = NULL,a_1 = NULL,b_1 = NULL,f_1 = NULL,h_1 = NULL;
  o_0 = t;
  t = term_z_19;
  t = whoami_0_0(t);
  q_0 = t;
  a_1 = t;
  t = term_g_38;
  t_0 = t;
  t = a_1;
  b_1 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_39), q_0), term_z_38);
  w_0 = t;
  t = SSL_printnl(t_0, w_0);
  h_1 = t;
  t = term_d_39;
  f_1 = t;
  t = SSL_exit(f_1);
  t = o_0;
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_147 (ATerm), ATerm t)
{
  ATerm e_39 = t;
  int f_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_0 = NULL,u_0 = NULL,m_1 = NULL,o_1 = NULL,v_1 = NULL,x_1 = NULL;
      r_0 = t;
      t = term_h_39;
      v_1 = t;
      t = term_m_39;
      m_1 = t;
      t = v_1;
      x_1 = t;
      t = term_h_39;
      o_1 = t;
      t = SSL_table_get(m_1, o_1);
      {
        ATerm n_39 = t;
        int u_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 = NULL,y_1 = NULL,e_2 = NULL,g_2 = NULL,k_2 = NULL;
            t = eval_config_0_0(t);
            t_1 = t;
            g_2 = t;
            t = term_m_39;
            y_1 = t;
            t = g_2;
            k_2 = t;
            t = term_h_39;
            e_2 = t;
            t = SSL_table_put(y_1, e_2, t_1);
            t = t_1;
            ;
            LocalPopChoice(u_39);
          }
        else
          {
            t = n_39;
          }
        u_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_0, term_v_39);
        t = geq_0_0(t);
        t = r_0;
        t = q_147(t);
      }
      ;
      LocalPopChoice(f_39);
    }
  else
    {
      t = e_39;
    }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm x_0 = NULL,y_0 = NULL,z_0 = NULL;
  y_0 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_0 = ATgetArgument(t, 0);
      x_0 = ATgetArgument(t, 1);
      {
        ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL;
        t = y_0;
        t = new_0_0(t);
        c_1 = t;
        t = new_0_0(t);
        d_1 = t;
        t = new_0_0(t);
        e_1 = t;
        t = new_0_0(t);
        g_1 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, g_1), e_1), d_1), c_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, e_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_0, (ATerm)ATmakeAppl(sym_Var_1, c_1), (ATerm) ATmakeAppl(sym_Var_1, d_1)), (ATerm) ATmakeAppl(sym_BAM_3, x_0, (ATerm)ATmakeAppl(sym_Var_1, e_1), (ATerm) ATmakeAppl(sym_Var_1, g_1)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_40, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, g_1)), (ATerm) ATmakeAppl(sym_Var_1, d_1))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_0 = ATgetArgument(t, 0);
          {
            ATerm i_1 = NULL,j_1 = NULL,k_1 = NULL,l_1 = NULL;
            t = y_0;
            t = new_0_0(t);
            i_1 = t;
            t = z_0;
            {
              ATerm i_24 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((j_1 != NULL) && (j_1 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      j_1 = ATgetArgument(t, 0);
                    if(((k_1 != NULL) && (k_1 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      k_1 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, i_1);
                return(t);
              }
              t = oncetd_1_0(i_24, t);
              l_1 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, i_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_40, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_1)), not_null(j_1))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, i_1)), (ATerm) ATmakeAppl(sym_Build_1, l_1))));
            }
          }
        }
      else
        {
          ATerm n_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_0 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_0;
          t = new_0_0(t);
          n_1 = t;
          t = new_0_0(t);
          p_1 = t;
          t = z_0;
          {
            ATerm j_24 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((q_1 != NULL) && (q_1 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    q_1 = ATgetArgument(t, 0);
                  if(((r_1 != NULL) && (r_1 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    r_1 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, n_1);
              return(t);
            }
            t = oncetd_1_0(j_24, t);
            s_1 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, n_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_1), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, p_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, p_1)), (ATerm) ATmakeAppl(sym_PrimT_3, term_b_40, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, p_1))))), (ATerm)ATmakeAppl(sym_Var_1, n_1), (ATerm) ATmakeAppl(sym_Op_2, term_i_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_1)), not_null(q_1)))))));
          }
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL;
  u_1 = t;
  if(match_cons(t, sym_Match_1))
    {
      w_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm j_40 = t;
    int n_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL;
        t = u_1;
        t = new_0_0(t);
        z_1 = t;
        t = w_1;
        {
          ATerm k_24 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((b_2 != NULL) && (b_2 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_2 = ATgetArgument(t, 0);
                if(((a_2 != NULL) && (a_2 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  a_2 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, z_1), not_null(b_2));
            return(t);
          }
          t = pat_td_1_0(k_24, t);
          c_2 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_1), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_2), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_o_40, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, z_1))), (ATerm) ATmakeAppl(sym_Match_1, not_null(a_2))))));
        }
        ;
        LocalPopChoice(n_40);
      }
    else
      {
        t = j_40;
        {
          ATerm p_40 = t;
          int q_40 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_2 = NULL,i_2 = NULL,j_2 = NULL;
              t = u_1;
              t = new_0_0(t);
              h_2 = t;
              t = w_1;
              {
                ATerm l_24 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((i_2 != NULL) && (i_2 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        i_2 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, h_2);
                  return(t);
                }
                t = pat_td_1_0(l_24, t);
                j_2 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, j_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_2)), not_null(i_2))));
              }
              ;
              LocalPopChoice(q_40);
            }
          else
            {
              t = p_40;
              {
                ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,p_2 = NULL;
                t = u_1;
                t = new_0_0(t);
                l_2 = t;
                t = w_1;
                {
                  ATerm m_24 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((m_2 != NULL) && (m_2 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          m_2 = ATgetArgument(t, 0);
                        if(((n_2 != NULL) && (n_2 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          n_2 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, l_2);
                    return(t);
                  }
                  t = pat_td_1_0(m_24, t);
                  p_2 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, p_2), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, l_2)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(n_2)), not_null(m_2)))));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm As_2_0 (ATerm l_104 (ATerm), ATerm m_104 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,o_2 = NULL,q_2 = NULL;
  a_3 = t;
  if(match_cons(t, sym_As_2))
    {
      w_2 = ATgetArgument(t, 0);
      x_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_3);
  v_2 = t;
  t = w_2;
  t = l_104(t);
  y_2 = t;
  t = x_2;
  t = m_104(t);
  z_2 = t;
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym_As_2, y_2, z_2);
  o_2 = t;
  t = SSLsetAnnotations(o_2, v_2);
  return(t);
}
ATerm CallT_3_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,r_2 = NULL,s_2 = NULL;
  k_3 = t;
  if(match_cons(t, sym_CallT_3))
    {
      e_3 = ATgetArgument(t, 0);
      f_3 = ATgetArgument(t, 1);
      g_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_3);
  d_3 = t;
  t = e_3;
  t = i_107(t);
  h_3 = t;
  t = f_3;
  t = j_107(t);
  i_3 = t;
  t = g_3;
  t = k_107(t);
  j_3 = t;
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, h_3, i_3, j_3);
  r_2 = t;
  t = SSLsetAnnotations(r_2, d_3);
  return(t);
}
ATerm PrimT_3_0 (ATerm k_108 (ATerm), ATerm l_108 (ATerm), ATerm m_108 (ATerm), ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL,u_3 = NULL,t_2 = NULL,u_2 = NULL;
  u_3 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      o_3 = ATgetArgument(t, 0);
      p_3 = ATgetArgument(t, 1);
      q_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_3);
  n_3 = t;
  t = o_3;
  t = k_108(t);
  r_3 = t;
  t = p_3;
  t = l_108(t);
  s_3 = t;
  t = q_3;
  t = m_108(t);
  t_3 = t;
  u_2 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, r_3, s_3, t_3);
  t_2 = t;
  t = SSLsetAnnotations(t_2, n_3);
  return(t);
}
ATerm Explode_2_0 (ATerm e_104 (ATerm), ATerm f_104 (ATerm), ATerm t)
{
  ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL,b_4 = NULL,c_4 = NULL,d_4 = NULL,b_3 = NULL,c_3 = NULL;
  d_4 = t;
  if(match_cons(t, sym_Explode_2))
    {
      y_3 = ATgetArgument(t, 0);
      z_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_4);
  x_3 = t;
  t = y_3;
  t = e_104(t);
  b_4 = t;
  t = z_3;
  t = f_104(t);
  c_4 = t;
  c_3 = t;
  t = (ATerm) ATmakeAppl(sym_Explode_2, b_4, c_4);
  b_3 = t;
  t = SSLsetAnnotations(b_3, x_3);
  return(t);
}
ATerm Op_2_0 (ATerm a_104 (ATerm), ATerm b_104 (ATerm), ATerm t)
{
  ATerm g_4 = NULL,h_4 = NULL,i_4 = NULL,j_4 = NULL,k_4 = NULL,l_4 = NULL,l_3 = NULL,m_3 = NULL;
  l_4 = t;
  if(match_cons(t, sym_Op_2))
    {
      h_4 = ATgetArgument(t, 0);
      i_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_4);
  g_4 = t;
  t = h_4;
  t = a_104(t);
  j_4 = t;
  t = i_4;
  t = b_104(t);
  k_4 = t;
  m_3 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, j_4, k_4);
  l_3 = t;
  t = SSLsetAnnotations(l_3, g_4);
  return(t);
}
ATerm pat_td_1_0 (ATerm z_145 (ATerm), ATerm t)
{
  ATerm t_40 = t;
  int u_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_145(t);
      ;
      LocalPopChoice(u_40);
    }
  else
    {
      t = t_40;
      {
        ATerm w_40 = t;
        int x_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_24 (ATerm t)
            {
              ATerm o_24 (ATerm t)
              {
                t = pat_td_1_0(z_145, t);
                return(t);
              }
              t = fetch_1_0(o_24, t);
              return(t);
            }
            t = Op_2_0(_id, n_24, t);
            ;
            LocalPopChoice(x_40);
          }
        else
          {
            t = w_40;
            {
              ATerm y_40 = t;
              int b_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_24 (ATerm t)
                  {
                    t = pat_td_1_0(z_145, t);
                    return(t);
                  }
                  t = Explode_2_0(_id, p_24, t);
                  ;
                  LocalPopChoice(b_41);
                }
              else
                {
                  t = y_40;
                  {
                    ATerm c_41 = t;
                    int d_41 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_24 (ATerm t)
                        {
                          t = pat_td_1_0(z_145, t);
                          return(t);
                        }
                        t = Explode_2_0(q_24, _id, t);
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
                              ATerm r_24 (ATerm t)
                              {
                                ATerm s_24 (ATerm t)
                                {
                                  t = pat_td_1_0(z_145, t);
                                  return(t);
                                }
                                t = fetch_1_0(s_24, t);
                                return(t);
                              }
                              t = PrimT_3_0(_id, _id, r_24, t);
                              ;
                              LocalPopChoice(f_41);
                            }
                          else
                            {
                              t = e_41;
                              {
                                ATerm g_41 = t;
                                int h_41 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_24 (ATerm t)
                                    {
                                      ATerm u_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(z_145, t);
                                        return(t);
                                      }
                                      t = fetch_1_0(u_24, t);
                                      return(t);
                                    }
                                    t = CallT_3_0(_id, _id, t_24, t);
                                    ;
                                    LocalPopChoice(h_41);
                                  }
                                else
                                  {
                                    t = g_41;
                                    {
                                      ATerm v_24 (ATerm t)
                                      {
                                        t = pat_td_1_0(z_145, t);
                                        return(t);
                                      }
                                      t = As_2_0(_id, v_24, t);
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
  ATerm q_4 = NULL,s_4 = NULL;
  q_4 = t;
  if(match_cons(t, sym_Build_1))
    {
      s_4 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_41 = t;
    int j_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL,y_4 = NULL;
        t = q_4;
        t = new_0_0(t);
        v_4 = t;
        t = s_4;
        {
          ATerm w_24 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((w_4 != NULL) && (w_4 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  w_4 = ATgetArgument(t, 0);
                if(((x_4 != NULL) && (x_4 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  x_4 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, v_4);
            return(t);
          }
          t = pat_td_1_0(w_24, t);
          y_4 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, v_4), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_k_41, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_4)), not_null(w_4))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_4)))), (ATerm) ATmakeAppl(sym_Build_1, y_4)));
        }
        ;
        LocalPopChoice(j_41);
      }
    else
      {
        t = i_41;
        {
          ATerm l_41 = t;
          int m_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_5 = NULL,b_5 = NULL,c_5 = NULL;
              t = q_4;
              t = new_0_0(t);
              a_5 = t;
              t = s_4;
              {
                ATerm x_24 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_5 != NULL) && (b_5 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_5 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, a_5);
                  return(t);
                }
                t = pat_td_1_0(x_24, t);
                c_5 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(b_5), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_5)))), (ATerm) ATmakeAppl(sym_Build_1, c_5)));
              }
              ;
              LocalPopChoice(m_41);
            }
          else
            {
              t = l_41;
              {
                ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL;
                t = q_4;
                t = new_0_0(t);
                e_5 = t;
                t = s_4;
                {
                  ATerm y_24 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((f_5 != NULL) && (f_5 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          f_5 = ATgetArgument(t, 0);
                        if(((g_5 != NULL) && (g_5 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          g_5 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, e_5);
                    return(t);
                  }
                  t = pat_td_1_0(y_24, t);
                  h_5 = t;
                  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_5), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(f_5), not_null(g_5), (ATerm) ATmakeAppl(sym_Var_1, e_5))), (ATerm) ATmakeAppl(sym_Build_1, h_5)));
                }
              }
            }
        }
      }
  }
  return(t);
}
ATerm z_24 (ATerm t)
{
  ATerm n_41 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_41;
    }
  return(t);
}
ATerm a_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm b_25 (ATerm t)
{
  ATerm t_5 = NULL,x_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_5 = ATgetFirst((ATermList) t);
      x_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_5, x_5);
  return(t);
}
ATerm c_25 (ATerm t)
{
  ATerm b_6 = NULL,e_6 = NULL,f_6 = NULL,h_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_41 = ATgetArgument(t, 0);
      if(match_cons(p_41, sym__2))
        {
          b_6 = ATgetArgument(p_41, 0);
          f_6 = ATgetArgument(p_41, 1);
        }
      else
        _fail(t);
      {
        ATerm q_41 = ATgetArgument(t, 1);
        if(match_cons(q_41, sym__2))
          {
            e_6 = ATgetArgument(q_41, 0);
            h_6 = ATgetArgument(q_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(e_6), b_6), (ATerm) ATinsert(CheckATermList(h_6), f_6));
  return(t);
}
ATerm d_25 (ATerm t)
{
  t = genzip_4_0(e_25, f_25, j_25, _id, t);
  return(t);
}
ATerm e_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm f_25 (ATerm t)
{
  ATerm i_6 = NULL,j_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_6 = ATgetFirst((ATermList) t);
      j_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_6, j_6);
  return(t);
}
ATerm j_25 (ATerm t)
{
  ATerm l_6 = NULL,m_6 = NULL,o_6 = NULL,p_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_41 = ATgetArgument(t, 0);
      if(match_cons(r_41, sym__2))
        {
          l_6 = ATgetArgument(r_41, 0);
          o_6 = ATgetArgument(r_41, 1);
        }
      else
        _fail(t);
      {
        ATerm s_41 = ATgetArgument(t, 1);
        if(match_cons(s_41, sym__2))
          {
            m_6 = ATgetArgument(s_41, 0);
            p_6 = ATgetArgument(s_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(m_6), l_6), (ATerm) ATinsert(CheckATermList(p_6), o_6));
  return(t);
}
ATerm LiftCallArgs_0_0 (ATerm t)
{
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,r_5 = NULL,s_5 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      i_5 = ATgetArgument(t, 0);
      j_5 = ATgetArgument(t, 1);
      k_5 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = k_5;
  t = fetch_1_0(z_24, t);
  t = k_5;
  t = genzip_4_0(a_25, b_25, c_25, LiftPrimArg_0_0, t);
  t = _2_0(concat_0_0, d_25, t);
  if(match_cons(t, sym__2))
    {
      l_5 = ATgetArgument(t, 0);
      {
        ATerm t_41 = ATgetArgument(t, 1);
        if(match_cons(t_41, sym__2))
          {
            r_5 = ATgetArgument(t_41, 0);
            s_5 = ATgetArgument(t_41, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, l_5, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, r_5), (ATerm) ATmakeAppl(sym_CallT_3, i_5, j_5, s_5)));
  return(t);
}
ATerm e_7 (ATerm t_6, ATerm t)
{
  ATerm v_6 = NULL;
  t = t_6;
  {
    ATerm v_41 = t;
    if((PushChoice() == 0))
      {
        t = Var_1_0(_id, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = v_41;
      }
    t = new_0_0(t);
    v_6 = t;
    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, v_6), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_6), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, v_6)))), (ATerm) ATmakeAppl(sym_Var_1, v_6)));
  }
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL;
  w_6 = t;
  if(match_cons(t, sym_Var_1))
    {
      x_6 = ATgetArgument(t, 0);
      {
        ATerm w_41 = t;
        int x_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_7(w_6, t);
            ;
            LocalPopChoice(x_41);
          }
        else
          {
            t = w_41;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_y_41, (ATerm) ATmakeAppl(sym_Var_1, x_6)));
          }
      }
    }
  else
    {
      t = e_7(w_6, t);
    }
  return(t);
}
ATerm k_25 (ATerm t)
{
  ATerm z_41 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_41;
    }
  return(t);
}
ATerm l_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm m_25 (ATerm t)
{
  ATerm u_4 = NULL,m_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_4 = ATgetFirst((ATermList) t);
      m_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_4, m_5);
  return(t);
}
ATerm n_25 (ATerm t)
{
  ATerm n_5 = NULL,o_5 = NULL,p_5 = NULL,q_5 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_42 = ATgetArgument(t, 0);
      if(match_cons(a_42, sym__2))
        {
          n_5 = ATgetArgument(a_42, 0);
          p_5 = ATgetArgument(a_42, 1);
        }
      else
        _fail(t);
      {
        ATerm b_42 = ATgetArgument(t, 1);
        if(match_cons(b_42, sym__2))
          {
            o_5 = ATgetArgument(b_42, 0);
            q_5 = ATgetArgument(b_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_5), n_5), (ATerm) ATinsert(CheckATermList(q_5), p_5));
  return(t);
}
ATerm o_25 (ATerm t)
{
  t = genzip_4_0(p_25, s_25, t_25, _id, t);
  return(t);
}
ATerm p_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm s_25 (ATerm t)
{
  ATerm u_5 = NULL,v_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_5 = ATgetFirst((ATermList) t);
      v_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_5, v_5);
  return(t);
}
ATerm t_25 (ATerm t)
{
  ATerm w_5 = NULL,y_5 = NULL,z_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_42 = ATgetArgument(t, 0);
      if(match_cons(c_42, sym__2))
        {
          w_5 = ATgetArgument(c_42, 0);
          z_5 = ATgetArgument(c_42, 1);
        }
      else
        _fail(t);
      {
        ATerm d_42 = ATgetArgument(t, 1);
        if(match_cons(d_42, sym__2))
          {
            y_5 = ATgetArgument(d_42, 0);
            a_6 = ATgetArgument(d_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_5), w_5), (ATerm) ATinsert(CheckATermList(a_6), z_5));
  return(t);
}
ATerm u_25 (ATerm t)
{
  ATerm g_42 = t;
  if((PushChoice() == 0))
    {
      t = Var_1_0(_id, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_42;
    }
  return(t);
}
ATerm v_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm w_25 (ATerm t)
{
  ATerm d_7 = NULL,f_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_7 = ATgetFirst((ATermList) t);
      f_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_7, f_7);
  return(t);
}
ATerm x_25 (ATerm t)
{
  ATerm g_7 = NULL,h_7 = NULL,j_7 = NULL,k_7 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_42 = ATgetArgument(t, 0);
      if(match_cons(h_42, sym__2))
        {
          g_7 = ATgetArgument(h_42, 0);
          j_7 = ATgetArgument(h_42, 1);
        }
      else
        _fail(t);
      {
        ATerm j_42 = ATgetArgument(t, 1);
        if(match_cons(j_42, sym__2))
          {
            h_7 = ATgetArgument(j_42, 0);
            k_7 = ATgetArgument(j_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_7), g_7), (ATerm) ATinsert(CheckATermList(k_7), j_7));
  return(t);
}
ATerm y_25 (ATerm t)
{
  t = genzip_4_0(z_25, a_26, b_26, _id, t);
  return(t);
}
ATerm z_25 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_o_41;
  return(t);
}
ATerm a_26 (ATerm t)
{
  ATerm l_7 = NULL,r_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_7 = ATgetFirst((ATermList) t);
      r_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_7, r_7);
  return(t);
}
ATerm b_26 (ATerm t)
{
  ATerm u_7 = NULL,v_7 = NULL,z_7 = NULL,a_8 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_42 = ATgetArgument(t, 0);
      if(match_cons(k_42, sym__2))
        {
          u_7 = ATgetArgument(k_42, 0);
          z_7 = ATgetArgument(k_42, 1);
        }
      else
        _fail(t);
      {
        ATerm l_42 = ATgetArgument(t, 1);
        if(match_cons(l_42, sym__2))
          {
            v_7 = ATgetArgument(l_42, 0);
            a_8 = ATgetArgument(l_42, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_7), u_7), (ATerm) ATinsert(CheckATermList(a_8), z_7));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm t_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      w_15 = ATgetArgument(t, 0);
      x_15 = ATgetArgument(t, 1);
      t_15 = ATgetArgument(t, 2);
      {
        ATerm n_4 = NULL,p_4 = NULL,r_4 = NULL;
        t = t_15;
        t = fetch_1_0(k_25, t);
        t = t_15;
        t = genzip_4_0(l_25, m_25, n_25, LiftPrimArg_0_0, t);
        t = _2_0(concat_0_0, o_25, t);
        if(match_cons(t, sym__2))
          {
            n_4 = ATgetArgument(t, 0);
            {
              ATerm o_42 = ATgetArgument(t, 1);
              if(match_cons(o_42, sym__2))
                {
                  p_4 = ATgetArgument(o_42, 0);
                  r_4 = ATgetArgument(o_42, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, n_4, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, p_4), (ATerm) ATmakeAppl(sym_PrimT_3, w_15, x_15, r_4)));
      }
    }
  else
    {
      ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          w_15 = ATgetArgument(t, 0);
          x_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = x_15;
      t = fetch_1_0(u_25, t);
      t = x_15;
      t = genzip_4_0(v_25, w_25, x_25, LiftPrimArg_0_0, t);
      t = _2_0(concat_0_0, y_25, t);
      if(match_cons(t, sym__2))
        {
          z_6 = ATgetArgument(t, 0);
          {
            ATerm p_42 = ATgetArgument(t, 1);
            if(match_cons(p_42, sym__2))
              {
                a_7 = ATgetArgument(p_42, 0);
                b_7 = ATgetArgument(p_42, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, z_6, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, a_7), (ATerm) ATmakeAppl(sym_PrimT_3, w_15, (ATerm)ATempty, b_7)));
    }
  return(t);
}
ATerm c_26 (ATerm t)
{
  ATerm r_42 = t;
  int s_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(s_42);
    }
  else
    {
      t = r_42;
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm v_42 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(c_26, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_42;
    }
  return(t);
}
ATerm App_2_0 (ATerm i_104 (ATerm), ATerm j_104 (ATerm), ATerm t)
{
  ATerm f_16 = NULL,j_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,v_3 = NULL,w_3 = NULL;
  r_16 = t;
  if(match_cons(t, sym_App_2))
    {
      j_16 = ATgetArgument(t, 0);
      o_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_16);
  f_16 = t;
  t = j_16;
  t = i_104(t);
  p_16 = t;
  t = o_16;
  t = j_104(t);
  q_16 = t;
  w_3 = t;
  t = (ATerm) ATmakeAppl(sym_App_2, p_16, q_16);
  v_3 = t;
  t = SSLsetAnnotations(v_3, f_16);
  return(t);
}
ATerm Con_3_0 (ATerm u_104 (ATerm), ATerm v_104 (ATerm), ATerm w_104 (ATerm), ATerm t)
{
  ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,d_17 = NULL,g_17 = NULL,h_17 = NULL,m_17 = NULL,a_4 = NULL,e_4 = NULL;
  m_17 = t;
  if(match_cons(t, sym_Con_3))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      c_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_17);
  z_16 = t;
  t = a_17;
  t = u_104(t);
  d_17 = t;
  t = b_17;
  t = v_104(t);
  g_17 = t;
  t = c_17;
  t = w_104(t);
  h_17 = t;
  e_4 = t;
  t = (ATerm) ATmakeAppl(sym_Con_3, d_17, g_17, h_17);
  a_4 = t;
  t = SSLsetAnnotations(a_4, z_16);
  return(t);
}
ATerm d_26 (ATerm t)
{
  ATerm w_42 = t;
  int x_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Con_3_0(_id, _id, _id, t);
      ;
      LocalPopChoice(x_42);
    }
  else
    {
      t = w_42;
      t = App_2_0(_id, _id, t);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm a_43 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(d_26, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_43;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm y_17 = NULL,z_17 = NULL,f_18 = NULL,g_18 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      y_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_17;
  if(match_cons(t, sym_StratRule_3))
    {
      z_17 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      g_18 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, f_18), (ATerm) ATmakeAppl(sym_Where_1, g_18)), z_17));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          z_17 = ATgetArgument(t, 0);
          f_18 = ATgetArgument(t, 1);
          g_18 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = z_17;
      t = pureterm_0_0(t);
      t = f_18;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, f_18)), (ATerm) ATmakeAppl(sym_Where_1, g_18)), (ATerm) ATmakeAppl(sym_Match_1, z_17)));
    }
  return(t);
}
ATerm Rcon_0_0 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,o_19 = NULL,p_19 = NULL,v_19 = NULL,w_19 = NULL,x_19 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      ATerm b_43 = ATgetArgument(t, 0);
      if(match_cons(b_43, sym_Rule_3))
        {
          x_18 = ATgetArgument(b_43, 0);
          y_18 = ATgetArgument(b_43, 1);
          b_19 = ATgetArgument(b_43, 2);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  t = new_0_0(t);
  c_19 = t;
  t = x_18;
  {
    ATerm e_26 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm c_43 = ATgetArgument(t, 0);
          if(match_cons(c_43, sym_Var_1))
            {
              if(((o_19 != NULL) && (o_19 != ATgetArgument(c_43, 0))))
                _fail(ATgetArgument(c_43, 0));
              else
                o_19 = ATgetArgument(c_43, 0);
            }
          else
            _fail(t);
          if(((d_19 != NULL) && (d_19 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            d_19 = ATgetArgument(t, 1);
          {
            ATerm d_43 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, not_null(o_19));
      return(t);
    }
    t = oncetd_1_0(e_26, t);
    p_19 = t;
    t = y_18;
    {
      ATerm f_26 (ATerm t)
      {
        if(match_cons(t, sym_Con_3))
          {
            ATerm e_43 = ATgetArgument(t, 0);
            if(match_cons(e_43, sym_Var_1))
              {
                if(((o_19 != NULL) && (o_19 != ATgetArgument(e_43, 0))))
                  _fail(ATgetArgument(e_43, 0));
                else
                  o_19 = ATgetArgument(e_43, 0);
              }
            else
              _fail(t);
            if(((v_19 != NULL) && (v_19 != ATgetArgument(t, 1))))
              _fail(ATgetArgument(t, 1));
            else
              v_19 = ATgetArgument(t, 1);
            {
              ATerm f_43 = ATgetArgument(t, 2);
              if(match_cons(f_43, sym_CallT_3))
                {
                  if(((w_19 != NULL) && (w_19 != ATgetArgument(f_43, 0))))
                    _fail(ATgetArgument(f_43, 0));
                  else
                    w_19 = ATgetArgument(f_43, 0);
                  {
                    ATerm g_43 = ATgetArgument(f_43, 1);
                    if(((ATgetType(g_43) != AT_LIST) || !(ATisEmpty(g_43))))
                      _fail(t);
                  }
                  {
                    ATerm h_43 = ATgetArgument(f_43, 2);
                    if(((ATgetType(h_43) != AT_LIST) || !(ATisEmpty(h_43))))
                      _fail(t);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Var_1, c_19);
        return(t);
      }
      t = oncetd_1_0(f_26, t);
      x_19 = t;
      t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_19), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, p_19, x_19, (ATerm) ATmakeAppl(sym_Seq_2, b_19, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(w_19), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(d_19), not_null(v_19), term_y_41))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(o_19)), (ATerm) ATmakeAppl(sym_Var_1, c_19))))));
    }
  }
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm i_43 = t;
  int j_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_43 = t;
      int l_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Rcon_0_0(t);
          t = desugarRule_0_0(t);
          ;
          LocalPopChoice(l_43);
        }
      else
        {
          t = k_43;
          {
            ATerm m_43 = t;
            int n_43 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Scope_2_0(_id, desugarRule_0_0, t);
                ;
                LocalPopChoice(n_43);
              }
            else
              {
                t = m_43;
                t = RtoS_0_0(t);
              }
          }
        }
      ;
      LocalPopChoice(j_43);
    }
  else
    {
      t = i_43;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm o_117 (ATerm), ATerm t)
{
  t = o_117(t);
  {
    ATerm g_26 (ATerm t)
    {
      t = topdown_1_0(o_117, t);
      return(t);
    }
    t = SRTS_all(g_26, t);
  }
  return(t);
}
ATerm h_26 (ATerm t)
{
  ATerm o_43 = t;
  int p_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      ;
      LocalPopChoice(p_43);
    }
  else
    {
      t = o_43;
    }
  t = repeat_1_0(i_26, t);
  return(t);
}
ATerm i_26 (ATerm t)
{
  ATerm q_43 = t;
  int r_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      ;
      LocalPopChoice(r_43);
    }
  else
    {
      t = q_43;
      {
        ATerm s_43 = t;
        int t_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LiftCallArgs_0_0(t);
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
                  t = HL_0_0(t);
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
                        t = Bapp_0_0(t);
                        ;
                        LocalPopChoice(x_43);
                      }
                    else
                      {
                        t = w_43;
                        {
                          ATerm y_43 = t;
                          int z_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm a_44 = t;
                              int b_44 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      h_8 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = h_8;
                                  {
                                    ATerm j_26 (ATerm t)
                                    {
                                      if(match_cons(t, sym_RootApp_1))
                                        {
                                          ATerm c_44 = ATgetArgument(t, 0);
                                          if(match_cons(c_44, sym_Match_1))
                                            {
                                              if(((i_8 != NULL) && (i_8 != ATgetArgument(c_44, 0))))
                                                _fail(ATgetArgument(c_44, 0));
                                              else
                                                i_8 = ATgetArgument(c_44, 0);
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        _fail(t);
                                      t = not_null(i_8);
                                      return(t);
                                    }
                                    t = pat_td_1_0(j_26, t);
                                    j_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_Match_1, j_8);
                                  }
                                  ;
                                  LocalPopChoice(b_44);
                                }
                              else
                                {
                                  t = a_44;
                                  {
                                    ATerm d_44 = t;
                                    int e_44 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm m_20 = NULL,o_20 = NULL,p_20 = NULL;
                                        if(match_cons(t, sym_Match_1))
                                          {
                                            m_20 = ATgetArgument(t, 0);
                                          }
                                        else
                                          _fail(t);
                                        t = m_20;
                                        if(match_cons(t, sym_RootApp_1))
                                          {
                                            o_20 = ATgetArgument(t, 0);
                                            t = o_20;
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_App_2))
                                              {
                                                o_20 = ATgetArgument(t, 0);
                                                p_20 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            t = (ATerm) ATmakeAppl(sym_BA_2, o_20, p_20);
                                          }
                                        ;
                                        LocalPopChoice(e_44);
                                      }
                                    else
                                      {
                                        t = d_44;
                                        t = Mapp2_0_0(t);
                                      }
                                  }
                                }
                              ;
                              LocalPopChoice(z_43);
                            }
                          else
                            {
                              t = y_43;
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
  t = topdown_1_0(h_26, t);
  return(t);
}
ATerm k_26 (ATerm t)
{
  ATerm z_9 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      z_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, z_9);
  return(t);
}
ATerm l_26 (ATerm t)
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
        ATerm d_10 = NULL,h_10 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            d_10 = ATgetArgument(t, 0);
            t = d_10;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm h_44 = t;
            int i_44 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm j_44 = ATgetArgument(t, 0);
                    ATerm k_44 = ATgetArgument(t, 1);
                    h_10 = ATgetArgument(t, 2);
                    {
                      ATerm l_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(i_44);
                t = h_10;
                t = map_1_0(m_26, t);
              }
            else
              {
                t = h_44;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm m_44 = ATgetArgument(t, 0);
                    ATerm n_44 = ATgetArgument(t, 1);
                    h_10 = ATgetArgument(t, 2);
                    {
                      ATerm o_44 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = h_10;
                t = map_1_0(o_26, t);
              }
          }
      }
    }
  return(t);
}
ATerm m_26 (ATerm t)
{
  ATerm n_10 = NULL;
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_10 = ATgetArgument(t, 0);
          {
            ATerm r_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(q_44);
      t = n_10;
    }
  else
    {
      t = p_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_10;
    }
  return(t);
}
ATerm o_26 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm s_44 = t;
  int t_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          u_10 = ATgetArgument(t, 0);
          {
            ATerm u_44 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(t_44);
      t = u_10;
    }
  else
    {
      t = s_44;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          u_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = u_10;
    }
  return(t);
}
ATerm p_26 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm y_26 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm BottomupToVarIsId_Cond_0_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,v_26 = NULL,x_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,f_27 = NULL,h_27 = NULL,j_27 = NULL,l_27 = NULL;
  q_26 = t;
  if(match_cons(t, sym_Seq_2))
    {
      r_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_26;
  if(match_cons(t, sym_CallT_3))
    {
      s_26 = ATgetArgument(t, 0);
      v_26 = ATgetArgument(t, 1);
      x_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = s_26;
  if(match_cons(t, sym_SVar_1))
    {
      t_26 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = t_26;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = v_26;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = x_26;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_26;
  if(match_cons(t, sym_Seq_2))
    {
      b_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_27;
  if(match_cons(t, sym_Match_1))
    {
      c_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_27;
  if(match_cons(t, sym_Seq_2))
    {
      f_27 = ATgetArgument(t, 0);
      j_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_27;
  if(match_cons(t, sym_Where_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_27;
  if(match_cons(t, sym_Build_1))
    {
      l_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_44 = t;
    int x_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,m_9 = NULL,f_4 = NULL,m_4 = NULL,o_4 = NULL,t_4 = NULL;
        t = term_y_44;
        o_4 = t;
        t = term_y_44;
        f_4 = t;
        t = o_4;
        t_4 = t;
        t = term_h_45;
        m_4 = t;
        t = SSL_table_get(f_4, m_4);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_9 = ATgetFirst((ATermList) t);
            {
              ATerm i_45 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = m_9;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm j_45 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_45) != ATmakeSymbol("s_0", 0, ATtrue)))
              _fail(t);
            d_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, d_9, c_27, (ATerm) ATmakeAppl(sym__2, h_27, l_27));
        t = replace_application_0_0(t);
        if(match_cons(t, sym__2))
          {
            e_9 = ATgetArgument(t, 0);
            f_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, e_9), (ATerm) ATmakeAppl(sym_Build_1, f_9)));
        ;
        LocalPopChoice(x_44);
      }
    else
      {
        t = w_44;
        {
          ATerm x_9 = NULL,y_9 = NULL,e_11 = NULL,z_4 = NULL,d_5 = NULL,c_6 = NULL,d_6 = NULL;
          t = term_y_44;
          c_6 = t;
          t = term_y_44;
          z_4 = t;
          t = c_6;
          d_6 = t;
          t = term_h_45;
          d_5 = t;
          t = SSL_table_get(z_4, d_5);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_11 = ATgetFirst((ATermList) t);
              {
                ATerm l_45 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = e_11;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm m_45 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) m_45) != ATmakeSymbol("h_0", 0, ATtrue)))
                _fail(t);
              x_9 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_27;
          t = free_vars_3_0(k_26, l_26, tboundin_3_0, t);
          {
            ATerm u_26 (ATerm t)
            {
              ATerm w_26 (ATerm t)
              {
                ATerm x_10 = NULL;
                x_10 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, x_9, (ATerm) ATmakeAppl(sym_Var_1, x_10)), term_d_46);
                t = assert_1_0(y_26, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, x_10);
                return(t);
              }
              t = map_1_0(w_26, t);
              t = (ATerm) ATmakeAppl(sym__2, h_27, l_27);
              t = alltd_1_0(Replace_0_0, t);
              if(match_cons(t, sym__2))
                {
                  if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    y_9 = ATgetArgument(t, 0);
                  {
                    ATerm e_46 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              return(t);
            }
            t = scope_2_0(p_26, u_26, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_27), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, not_null(y_9)), (ATerm) ATmakeAppl(sym_Build_1, l_27)));
          }
        }
      }
  }
  return(t);
}
ATerm t_28 (ATerm d_28, ATerm e_28, ATerm t)
{
  ATerm n_11 = NULL,g_6 = NULL,k_6 = NULL;
  t = term_v_44;
  k_6 = t;
  t = term_v_44;
  g_6 = t;
  t = SSL_table_get(g_6, e_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      {
        ATerm h_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_11;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm i_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_46) != ATmakeSymbol("m_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = d_28;
  return(t);
}
ATerm v_28 (ATerm h_28, ATerm i_28, ATerm t)
{
  ATerm r_11 = NULL,n_6 = NULL,q_6 = NULL;
  t = term_v_44;
  q_6 = t;
  t = term_v_44;
  n_6 = t;
  t = SSL_table_get(n_6, i_28);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_11 = ATgetFirst((ATermList) t);
      {
        ATerm j_46 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_11;
  if(match_cons(t, sym_Defined_1))
    {
      ATerm o_46 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_46) != ATmakeSymbol("j_0", 0, ATtrue)))
        _fail(t);
    }
  else
    _fail(t);
  t = h_28;
  return(t);
}
ATerm Replace_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,p_28 = NULL;
  m_28 = t;
  if(match_cons(t, sym_App_2))
    {
      ATerm p_46 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_28;
  if(match_cons(t, sym_Var_1))
    {
      l_28 = ATgetArgument(t, 0);
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_12 = NULL,r_6 = NULL,s_6 = NULL;
            t = term_v_44;
            s_6 = t;
            t = term_v_44;
            r_6 = t;
            t = SSL_table_get(r_6, m_28);
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                d_12 = ATgetFirst((ATermList) t);
                {
                  ATerm s_46 = (ATerm) ATgetNext((ATermList) t);
                }
              }
            else
              _fail(t);
            t = d_12;
            if(match_cons(t, sym_Defined_1))
              {
                ATerm t_46 = ATgetArgument(t, 0);
                if((ATgetSymbol((ATermAppl) t_46) != ATmakeSymbol("v_0", 0, ATtrue)))
                  _fail(t);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, l_28);
            ;
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm u_46 = t;
              int v_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = t_28(p_28, m_28, t);
                  ;
                  LocalPopChoice(v_46);
                }
              else
                {
                  t = u_46;
                  t = v_28(p_28, m_28, t);
                }
            }
          }
      }
    }
  else
    {
      ATerm w_46 = t;
      int x_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = t_28(p_28, m_28, t);
          ;
          LocalPopChoice(x_46);
        }
      else
        {
          t = w_46;
          t = v_28(p_28, m_28, t);
        }
    }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm b_29 = NULL,d_29 = NULL,f_29 = NULL;
  if(match_cons(t, sym__2))
    {
      b_29 = ATgetArgument(t, 0);
      d_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_29, d_29);
  {
    ATerm y_46 = t;
    int z_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_12 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm a_47 = ATgetArgument(t, 0);
            ATerm b_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_29, d_29);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_47 = ATgetFirst((ATermList) t);
            h_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = h_12;
        ;
        LocalPopChoice(z_46);
      }
    else
      {
        t = y_46;
        t = (ATerm) ATempty;
      }
    f_29 = t;
    t = SSL_table_put(b_29, d_29, f_29);
    t = (ATerm) ATmakeAppl(sym__2, b_29, d_29);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm x_129 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,n_29 = NULL,p_29 = NULL,r_29 = NULL,c_7 = NULL,i_7 = NULL;
  l_29 = t;
  t = x_129(t);
  n_29 = t;
  {
    ATerm d_47 = t;
    int e_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_6 = NULL,y_6 = NULL;
        y_6 = t;
        t = term_f_47;
        u_6 = t;
        t = SSL_table_get(n_29, u_6);
        ;
        LocalPopChoice(e_47);
      }
    else
      {
        t = d_47;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_29 = ATgetFirst((ATermList) t);
        p_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    i_7 = t;
    t = term_f_47;
    c_7 = t;
    t = SSL_table_put(n_29, c_7, p_29);
    t = r_29;
    {
      ATerm a_27 (ATerm t)
      {
        ATerm s_29 = NULL;
        s_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_29, s_29);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(a_27, t);
      t = l_29;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm v_120 (ATerm), ATerm w_120 (ATerm), ATerm t)
{
  ATerm g_47 = t;
  int h_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_120(t);
      t = w_120(t);
      ;
      LocalPopChoice(h_47);
    }
  else
    {
      t = g_47;
      t = w_120(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm w_129 (ATerm), ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,s_7 = NULL;
  v_29 = t;
  t = w_129(t);
  w_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_29, term_f_47);
  {
    ATerm i_47 = t;
    int j_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_7 = NULL,n_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm k_47 = ATgetArgument(t, 0);
            ATerm l_47 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        n_7 = t;
        t = term_f_47;
        m_7 = t;
        t = SSL_table_get(w_29, m_7);
        ;
        LocalPopChoice(j_47);
      }
    else
      {
        t = i_47;
        t = (ATerm) ATempty;
      }
    x_29 = t;
    q_7 = t;
    t = term_f_47;
    o_7 = t;
    t = q_7;
    s_7 = t;
    t = (ATerm) ATinsert(CheckATermList(x_29), (ATerm) ATempty);
    p_7 = t;
    t = SSL_table_put(w_29, o_7, p_7);
    t = v_29;
  }
  return(t);
}
ATerm scope_2_0 (ATerm y_129 (ATerm), ATerm z_129 (ATerm), ATerm t)
{
  t = begin_scope_1_0(y_129, t);
  {
    ATerm e_27 (ATerm t)
    {
      t = end_scope_1_0(y_129, t);
      return(t);
    }
    t = restore_always_2_0(z_129, e_27, t);
  }
  return(t);
}
ATerm m_27 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm o_27 (ATerm t)
{
  ATerm n_30 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      n_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, n_30);
  return(t);
}
ATerm p_27 (ATerm t)
{
  ATerm m_47 = t;
  int n_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(n_47);
    }
  else
    {
      t = m_47;
      {
        ATerm r_30 = NULL,t_30 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            r_30 = ATgetArgument(t, 0);
            t = r_30;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm o_47 = t;
            int p_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm q_47 = ATgetArgument(t, 0);
                    ATerm r_47 = ATgetArgument(t, 1);
                    t_30 = ATgetArgument(t, 2);
                    {
                      ATerm s_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(p_47);
                t = t_30;
                t = map_1_0(s_27, t);
              }
            else
              {
                t = o_47;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm t_47 = ATgetArgument(t, 0);
                    ATerm u_47 = ATgetArgument(t, 1);
                    t_30 = ATgetArgument(t, 2);
                    {
                      ATerm v_47 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = t_30;
                t = map_1_0(t_27, t);
              }
          }
      }
    }
  return(t);
}
ATerm s_27 (ATerm t)
{
  ATerm g_31 = NULL;
  ATerm w_47 = t;
  int x_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_31 = ATgetArgument(t, 0);
          {
            ATerm y_47 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(x_47);
      t = g_31;
    }
  else
    {
      t = w_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_31;
    }
  return(t);
}
ATerm t_27 (ATerm t)
{
  ATerm s_31 = NULL;
  ATerm z_47 = t;
  int a_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          s_31 = ATgetArgument(t, 0);
          {
            ATerm b_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(a_48);
      t = s_31;
    }
  else
    {
      t = z_47;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_31 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = s_31;
    }
  return(t);
}
ATerm v_27 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm replace_application_0_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL;
  if(match_cons(t, sym__3))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
      h_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  {
    ATerm n_27 (ATerm t)
    {
      t = g_30;
      t = free_vars_3_0(o_27, p_27, tboundin_3_0, t);
      {
        ATerm u_27 (ATerm t)
        {
          ATerm z_31 = NULL;
          z_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, f_30, (ATerm) ATmakeAppl(sym_Var_1, z_31)), term_d_48);
          t = assert_1_0(v_27, t);
          t = z_31;
          return(t);
        }
        t = map_1_0(u_27, t);
        t = h_30;
        t = alltd_1_0(Replace_0_0, t);
        if(((i_30 != NULL) && (i_30 != t)))
          _fail(t);
        else
          i_30 = t;
      }
      return(t);
    }
    t = scope_2_0(m_27, n_27, t);
    t = not_null(i_30);
  }
  return(t);
}
ATerm w_27 (ATerm t)
{
  ATerm o_13 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      o_13 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, o_13);
  return(t);
}
ATerm x_27 (ATerm t)
{
  ATerm e_48 = t;
  int f_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(f_48);
    }
  else
    {
      t = e_48;
      {
        ATerm q_13 = NULL,s_13 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            q_13 = ATgetArgument(t, 0);
            t = q_13;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm g_48 = t;
            int h_48 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm i_48 = ATgetArgument(t, 0);
                    ATerm j_48 = ATgetArgument(t, 1);
                    s_13 = ATgetArgument(t, 2);
                    {
                      ATerm k_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(h_48);
                t = s_13;
                t = map_1_0(y_27, t);
              }
            else
              {
                t = g_48;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm l_48 = ATgetArgument(t, 0);
                    ATerm m_48 = ATgetArgument(t, 1);
                    s_13 = ATgetArgument(t, 2);
                    {
                      ATerm n_48 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = s_13;
                t = map_1_0(z_27, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_27 (ATerm t)
{
  ATerm a_14 = NULL;
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_14 = ATgetArgument(t, 0);
          {
            ATerm q_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_48);
      t = a_14;
    }
  else
    {
      t = o_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          a_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_14;
    }
  return(t);
}
ATerm z_27 (ATerm t)
{
  ATerm g_14 = NULL;
  ATerm r_48 = t;
  int s_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          g_14 = ATgetArgument(t, 0);
          {
            ATerm t_48 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(s_48);
      t = g_14;
    }
  else
    {
      t = r_48;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          g_14 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = g_14;
    }
  return(t);
}
ATerm a_28 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm f_28 (ATerm t)
{
  t = term_v_44;
  return(t);
}
ATerm BottomupToVarIsId_UnCond_0_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL,d_35 = NULL,e_35 = NULL;
  u_34 = t;
  if(match_cons(t, sym_Seq_2))
    {
      v_34 = ATgetArgument(t, 0);
      a_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_34;
  if(match_cons(t, sym_CallT_3))
    {
      w_34 = ATgetArgument(t, 0);
      y_34 = ATgetArgument(t, 1);
      z_34 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_34;
  if(match_cons(t, sym_SVar_1))
    {
      x_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_34;
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
    _fail(t);
  t = y_34;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = z_34;
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = a_35;
  if(match_cons(t, sym_Seq_2))
    {
      b_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_35;
  if(match_cons(t, sym_Match_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_35;
  if(match_cons(t, sym_Build_1))
    {
      e_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_48 = t;
    int v_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_12 = NULL,y_12 = NULL,e_13 = NULL,t_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL;
        t = term_w_48;
        x_7 = t;
        t = term_w_48;
        t_7 = t;
        t = x_7;
        y_7 = t;
        t = term_y_48;
        w_7 = t;
        t = SSL_table_get(t_7, w_7);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_13 = ATgetFirst((ATermList) t);
            {
              ATerm z_48 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = e_13;
        if(match_cons(t, sym_Defined_2))
          {
            ATerm a_49 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_49) != ATmakeSymbol("p_0", 0, ATtrue)))
              _fail(t);
            x_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__3, x_12, c_35, e_35);
        t = replace_application_0_0(t);
        y_12 = t;
        t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_35), (ATerm) ATmakeAppl(sym_Build_1, y_12));
        ;
        LocalPopChoice(v_48);
      }
    else
      {
        t = u_48;
        {
          ATerm m_13 = NULL,n_13 = NULL,p_14 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL,e_8 = NULL;
          t = term_w_48;
          d_8 = t;
          t = term_w_48;
          b_8 = t;
          t = d_8;
          e_8 = t;
          t = term_y_48;
          c_8 = t;
          t = SSL_table_get(b_8, c_8);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_14 = ATgetFirst((ATermList) t);
              {
                ATerm b_49 = (ATerm) ATgetNext((ATermList) t);
              }
            }
          else
            _fail(t);
          t = p_14;
          if(match_cons(t, sym_Defined_2))
            {
              ATerm c_49 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) c_49) != ATmakeSymbol("f_0", 0, ATtrue)))
                _fail(t);
              m_13 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = c_35;
          t = free_vars_3_0(w_27, x_27, tboundin_3_0, t);
          {
            ATerm b_28 (ATerm t)
            {
              ATerm c_28 (ATerm t)
              {
                ATerm j_14 = NULL;
                j_14 = t;
                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_App_2, m_13, (ATerm) ATmakeAppl(sym_Var_1, j_14)), term_e_49);
                t = assert_1_0(f_28, t);
                t = (ATerm) ATmakeAppl(sym_Var_1, j_14);
                return(t);
              }
              t = map_1_0(c_28, t);
              t = e_35;
              t = alltd_1_0(Replace_0_0, t);
              if(((n_13 != NULL) && (n_13 != t)))
                _fail(t);
              else
                n_13 = t;
              return(t);
            }
            t = scope_2_0(a_28, b_28, t);
            t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, c_35), (ATerm) ATmakeAppl(sym_Build_1, not_null(n_13)));
          }
        }
      }
  }
  return(t);
}
ATerm fuse_with_bottomup_0_0 (ATerm t)
{
  ATerm g_28 (ATerm t)
  {
    ATerm f_49 = t;
    int g_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
        i_36 = t;
        if(match_cons(t, sym_Seq_2))
          {
            j_36 = ATgetArgument(t, 0);
            q_36 = ATgetArgument(t, 1);
            t = j_36;
            if(match_cons(t, sym_Choice_2))
              {
                k_36 = ATgetArgument(t, 0);
                m_36 = ATgetArgument(t, 1);
                {
                  ATerm b_16 = NULL,f_8 = NULL,g_8 = NULL,k_8 = NULL,l_8 = NULL;
                  t = term_h_49;
                  k_8 = t;
                  t = term_h_49;
                  f_8 = t;
                  t = k_8;
                  l_8 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, term_i_49, q_36);
                  g_8 = t;
                  t = SSL_table_get(f_8, g_8);
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      b_16 = ATgetFirst((ATermList) t);
                      {
                        ATerm j_49 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = b_16;
                  if(match_cons(t, sym_Defined_1))
                    {
                      ATerm k_49 = ATgetArgument(t, 0);
                      if((ATgetSymbol((ATermAppl) k_49) != ATmakeSymbol("d_2", 0, ATtrue)))
                        _fail(t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_36, q_36), (ATerm) ATmakeAppl(sym_Seq_2, m_36, q_36));
                  t = bottomup_1_0(g_28, t);
                }
              }
            else
              {
                if(match_cons(t, sym_LChoice_2))
                  {
                    k_36 = ATgetArgument(t, 0);
                    m_36 = ATgetArgument(t, 1);
                    {
                      ATerm f_17 = NULL,m_8 = NULL,n_8 = NULL,o_8 = NULL,p_8 = NULL;
                      t = term_l_49;
                      o_8 = t;
                      t = term_l_49;
                      m_8 = t;
                      t = o_8;
                      p_8 = t;
                      t = (ATerm) ATmakeAppl(sym_Seq_2, term_m_49, q_36);
                      n_8 = t;
                      t = SSL_table_get(m_8, n_8);
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          f_17 = ATgetFirst((ATermList) t);
                          {
                            ATerm n_49 = (ATerm) ATgetNext((ATermList) t);
                          }
                        }
                      else
                        _fail(t);
                      t = f_17;
                      if(match_cons(t, sym_Defined_1))
                        {
                          ATerm o_49 = ATgetArgument(t, 0);
                          if((ATgetSymbol((ATermAppl) o_49) != ATmakeSymbol("f_2", 0, ATtrue)))
                            _fail(t);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, k_36, q_36), (ATerm) ATmakeAppl(sym_Seq_2, m_36, q_36));
                      t = bottomup_1_0(g_28, t);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        k_36 = ATgetArgument(t, 0);
                        m_36 = ATgetArgument(t, 1);
                        {
                          ATerm w_36 = NULL;
                          t = (ATerm) ATmakeAppl(sym_Seq_2, m_36, q_36);
                          t = g_28(t);
                          w_36 = t;
                          t = (ATerm) ATmakeAppl(sym_Scope_2, k_36, w_36);
                          t = g_28(t);
                        }
                      }
                    else
                      {
                        if(match_cons(t, sym_Seq_2))
                          {
                            k_36 = ATgetArgument(t, 0);
                            m_36 = ATgetArgument(t, 1);
                            {
                              ATerm g_37 = NULL;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, m_36, q_36);
                              t = g_28(t);
                              g_37 = t;
                              t = (ATerm) ATmakeAppl(sym_Seq_2, k_36, g_37);
                              t = g_28(t);
                            }
                          }
                        else
                          {
                            ATerm j_37 = NULL;
                            if(match_cons(t, sym_Build_1))
                              {
                                k_36 = ATgetArgument(t, 0);
                              }
                            else
                              _fail(t);
                            t = (ATerm) ATmakeAppl(sym_App_2, q_36, k_36);
                            t = g_28(t);
                            j_37 = t;
                            t = (ATerm) ATmakeAppl(sym_Build_1, j_37);
                            t = g_28(t);
                          }
                      }
                  }
              }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                j_36 = ATgetArgument(t, 0);
                q_36 = ATgetArgument(t, 1);
                {
                  ATerm q_37 = NULL;
                  t = j_36;
                  if(match_cons(t, sym_LChoice_2))
                    {
                      k_36 = ATgetArgument(t, 0);
                      m_36 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, m_36, q_36);
                  t = g_28(t);
                  q_37 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, k_36, q_37);
                  t = g_28(t);
                }
              }
            else
              {
                if(match_cons(t, sym_Choice_2))
                  {
                    j_36 = ATgetArgument(t, 0);
                    q_36 = ATgetArgument(t, 1);
                    {
                      ATerm u_37 = NULL;
                      t = j_36;
                      if(match_cons(t, sym_Choice_2))
                        {
                          k_36 = ATgetArgument(t, 0);
                          m_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = (ATerm) ATmakeAppl(sym_Choice_2, m_36, q_36);
                      t = g_28(t);
                      u_37 = t;
                      t = (ATerm) ATmakeAppl(sym_Choice_2, k_36, u_37);
                      t = g_28(t);
                    }
                  }
                else
                  {
                    ATerm e_38 = NULL;
                    if(match_cons(t, sym_App_2))
                      {
                        j_36 = ATgetArgument(t, 0);
                        q_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = j_36;
                    if(match_cons(t, sym_CallT_3))
                      {
                        k_36 = ATgetArgument(t, 0);
                        m_36 = ATgetArgument(t, 1);
                        p_36 = ATgetArgument(t, 2);
                      }
                    else
                      _fail(t);
                    t = k_36;
                    if(match_cons(t, sym_SVar_1))
                      {
                        l_36 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = l_36;
                    if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                      _fail(t);
                    t = m_36;
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        n_36 = ATgetFirst((ATermList) t);
                        o_36 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = o_36;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = p_36;
                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                      _fail(t);
                    t = q_36;
                    if(match_cons(t, sym_Op_2))
                      {
                        r_36 = ATgetArgument(t, 0);
                        s_36 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = s_36;
                    {
                      ATerm j_28 (ATerm t)
                      {
                        ATerm f_38 = NULL;
                        f_38 = t;
                        t = (ATerm) ATmakeAppl(sym_App_2, (ATerm)ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, n_36), (ATerm) ATempty), f_38);
                        return(t);
                      }
                      t = map_1_0(j_28, t);
                      e_38 = t;
                      t = (ATerm) ATmakeAppl(sym_App_2, n_36, (ATerm) ATmakeAppl(sym_Op_2, r_36, e_38));
                      t = bottomup_1_0(g_28, t);
                    }
                  }
              }
          }
        ;
        LocalPopChoice(g_49);
      }
    else
      {
        t = f_49;
      }
    return(t);
  }
  t = bottomup_1_0(g_28, t);
  return(t);
}
ATerm bottomup_1_0 (ATerm p_117 (ATerm), ATerm t)
{
  ATerm k_28 (ATerm t)
  {
    t = bottomup_1_0(p_117, t);
    return(t);
  }
  t = SRTS_all(k_28, t);
  t = p_117(t);
  return(t);
}
ATerm propagate_mark_0_0 (ATerm t)
{
  ATerm n_28 (ATerm t)
  {
    ATerm r_49 = t;
    int s_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
        if(match_cons(t, sym_Seq_2))
          {
            p_38 = ATgetArgument(t, 0);
            q_38 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_38;
        if(match_cons(t, sym_Choice_2))
          {
            r_38 = ATgetArgument(t, 0);
            s_38 = ATgetArgument(t, 1);
            {
              ATerm w_38 = NULL,x_38 = NULL;
              t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, r_38);
              t = n_28(t);
              w_38 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, s_38);
              t = n_28(t);
              x_38 = t;
              t = (ATerm) ATmakeAppl(sym_Choice_2, w_38, x_38);
              t = n_28(t);
            }
          }
        else
          {
            if(match_cons(t, sym_LChoice_2))
              {
                r_38 = ATgetArgument(t, 0);
                s_38 = ATgetArgument(t, 1);
                {
                  ATerm b_39 = NULL,c_39 = NULL;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, r_38);
                  t = n_28(t);
                  b_39 = t;
                  t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, s_38);
                  t = n_28(t);
                  c_39 = t;
                  t = (ATerm) ATmakeAppl(sym_LChoice_2, b_39, c_39);
                  t = n_28(t);
                }
              }
            else
              {
                ATerm g_39 = NULL;
                if(match_cons(t, sym_Scope_2))
                  {
                    r_38 = ATgetArgument(t, 0);
                    s_38 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Seq_2, p_38, s_38);
                t = n_28(t);
                g_39 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, r_38, g_39);
                t = n_28(t);
              }
          }
        ;
        LocalPopChoice(s_49);
      }
    else
      {
        t = r_49;
      }
    return(t);
  }
  t = bottomup_1_0(n_28, t);
  return(t);
}
ATerm Build_1_0 (ATerm m_107 (ATerm), ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,q_8 = NULL,r_8 = NULL;
  l_39 = t;
  if(match_cons(t, sym_Build_1))
    {
      j_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_39);
  i_39 = t;
  t = j_39;
  t = m_107(t);
  k_39 = t;
  r_8 = t;
  t = (ATerm) ATmakeAppl(sym_Build_1, k_39);
  q_8 = t;
  t = SSLsetAnnotations(q_8, i_39);
  return(t);
}
ATerm Seq_2_0 (ATerm s_107 (ATerm), ATerm t_107 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,s_8 = NULL,t_8 = NULL;
  t_39 = t;
  if(match_cons(t, sym_Seq_2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  o_39 = t;
  t = p_39;
  t = s_107(t);
  r_39 = t;
  t = q_39;
  t = t_107(t);
  s_39 = t;
  t_8 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, r_39, s_39);
  s_8 = t;
  t = SSLsetAnnotations(s_8, o_39);
  return(t);
}
ATerm Match_1_0 (ATerm l_107 (ATerm), ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL,u_8 = NULL,v_8 = NULL;
  z_39 = t;
  if(match_cons(t, sym_Match_1))
    {
      x_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_39);
  w_39 = t;
  t = x_39;
  t = l_107(t);
  y_39 = t;
  v_8 = t;
  t = (ATerm) ATmakeAppl(sym_Match_1, y_39);
  u_8 = t;
  t = SSLsetAnnotations(u_8, w_39);
  return(t);
}
ATerm LChoice_2_0 (ATerm u_107 (ATerm), ATerm v_107 (ATerm), ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,w_8 = NULL,x_8 = NULL;
  h_40 = t;
  if(match_cons(t, sym_LChoice_2))
    {
      d_40 = ATgetArgument(t, 0);
      e_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_40);
  c_40 = t;
  t = d_40;
  t = u_107(t);
  f_40 = t;
  t = e_40;
  t = v_107(t);
  g_40 = t;
  x_8 = t;
  t = (ATerm) ATmakeAppl(sym_LChoice_2, f_40, g_40);
  w_8 = t;
  t = SSLsetAnnotations(w_8, c_40);
  return(t);
}
ATerm Choice_2_0 (ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,r_40 = NULL,s_40 = NULL,v_40 = NULL,y_8 = NULL,z_8 = NULL;
  v_40 = t;
  if(match_cons(t, sym_Choice_2))
    {
      l_40 = ATgetArgument(t, 0);
      m_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  k_40 = t;
  t = l_40;
  t = s_106(t);
  r_40 = t;
  t = m_40;
  t = t_106(t);
  s_40 = t;
  z_8 = t;
  t = (ATerm) ATmakeAppl(sym_Choice_2, r_40, s_40);
  y_8 = t;
  t = SSLsetAnnotations(y_8, k_40);
  return(t);
}
ATerm o_28 (ATerm t)
{
  t = Seq_2_0(q_28, r_28, t);
  return(t);
}
ATerm q_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm r_28 (ATerm t)
{
  t = Build_1_0(_id, t);
  return(t);
}
ATerm s_28 (ATerm t)
{
  t = Seq_2_0(u_28, w_28, t);
  return(t);
}
ATerm u_28 (ATerm t)
{
  t = Match_1_0(_id, t);
  return(t);
}
ATerm w_28 (ATerm t)
{
  t = Seq_2_0(_id, y_28, t);
  return(t);
}
ATerm y_28 (ATerm t)
{
  t = Build_1_0(_id, t);
  return(t);
}
ATerm inline_rules_0_0 (ATerm t)
{
  ATerm t_49 = t;
  int u_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_49 = t;
      int w_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Simplify_0_0(t);
          ;
          LocalPopChoice(w_49);
        }
      else
        {
          t = v_49;
          {
            ATerm c_50 = t;
            int d_50 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Choice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                ;
                LocalPopChoice(d_50);
              }
            else
              {
                t = c_50;
                {
                  ATerm g_50 = t;
                  int h_50 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = LChoice_2_0(inline_rules_0_0, inline_rules_0_0, t);
                      ;
                      LocalPopChoice(h_50);
                    }
                  else
                    {
                      t = g_50;
                      {
                        ATerm j_51 = t;
                        int k_51 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Scope_2_0(_id, o_28, t);
                            ;
                            LocalPopChoice(k_51);
                          }
                        else
                          {
                            t = j_51;
                            {
                              ATerm l_51 = t;
                              int m_51 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Scope_2_0(_id, s_28, t);
                                  ;
                                  LocalPopChoice(m_51);
                                }
                              else
                                {
                                  t = l_51;
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
      LocalPopChoice(u_49);
    }
  else
    {
      t = t_49;
    }
  return(t);
}
ATerm z_28 (ATerm t)
{
  t = term_w_48;
  return(t);
}
ATerm a_29 (ATerm t)
{
  t = term_y_44;
  return(t);
}
ATerm bottomup_to_var_0_0 (ATerm t)
{
  ATerm z_40 = NULL;
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_48, (ATerm) ATmakeAppl(sym_Defined_2, term_p_51, z_40));
  t = assert_1_0(z_28, t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_45, (ATerm) ATmakeAppl(sym_Defined_2, term_q_51, z_40));
  t = assert_1_0(a_29, t);
  t = z_40;
  return(t);
}
ATerm e_29 (ATerm t)
{
  t = term_h_49;
  return(t);
}
ATerm g_29 (ATerm t)
{
  t = term_l_49;
  return(t);
}
ATerm seq_over_choice_0_0 (ATerm t)
{
  ATerm a_41 = NULL;
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_i_49, a_41), term_t_51);
  t = assert_1_0(e_29, t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Seq_2, term_m_49, a_41), term_f_52);
  t = assert_1_0(g_29, t);
  t = a_41;
  return(t);
}
ATerm h_29 (ATerm t)
{
  ATerm i_42 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL,g_9 = NULL;
  i_42 = t;
  c_9 = t;
  t = term_g_38;
  a_9 = t;
  t = c_9;
  g_9 = t;
  t = (ATerm) ATinsert(ATempty, term_k_52);
  b_9 = t;
  t = SSL_printnl(a_9, b_9);
  t = i_42;
  return(t);
}
ATerm i_29 (ATerm t)
{
  ATerm l_52 = t;
  int m_52 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = BottomupToVarIsId_UnCond_0_0(t);
      ;
      LocalPopChoice(m_52);
    }
  else
    {
      t = l_52;
      {
        ATerm o_52 = t;
        int p_52 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = BottomupToVarIsId_Cond_0_0(t);
            ;
            LocalPopChoice(p_52);
          }
        else
          {
            t = o_52;
            {
              ATerm m_42 = NULL,n_42 = NULL,q_42 = NULL,t_42 = NULL;
              if(match_cons(t, sym_CallT_3))
                {
                  m_42 = ATgetArgument(t, 0);
                  q_42 = ATgetArgument(t, 1);
                  t_42 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = m_42;
              if(match_cons(t, sym_SVar_1))
                {
                  n_42 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = n_42;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("mark", 0, ATtrue)))
                _fail(t);
              t = q_42;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_42;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_41;
            }
          }
      }
    }
  return(t);
}
ATerm j_29 (ATerm t)
{
  if(match_cons(t, sym_CallT_3))
    {
      ATerm q_52 = ATgetArgument(t, 0);
      if(match_cons(q_52, sym_SVar_1))
        {
          ATerm v_52 = ATgetArgument(q_52, 0);
          if((ATgetSymbol((ATermAppl) v_52) != ATmakeSymbol("mark", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm r_52 = ATgetArgument(t, 1);
        if(((ATgetType(r_52) != AT_LIST) || !(ATisEmpty(r_52))))
          _fail(t);
      }
      {
        ATerm s_52 = ATgetArgument(t, 2);
        if(((ATgetType(s_52) != AT_LIST) || !(ATisEmpty(s_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm k_29 (ATerm t)
{
  ATerm y_42 = NULL,l_9 = NULL,n_9 = NULL,o_9 = NULL,p_9 = NULL;
  y_42 = t;
  o_9 = t;
  t = term_g_38;
  l_9 = t;
  t = o_9;
  p_9 = t;
  t = (ATerm) ATinsert(ATempty, term_w_52);
  n_9 = t;
  t = SSL_printnl(l_9, n_9);
  t = y_42;
  return(t);
}
ATerm innermost_fusion_0_0 (ATerm t)
{
  ATerm u_41 = NULL,e_42 = NULL,f_42 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm x_52 = ATgetArgument(t, 0);
      if(match_cons(x_52, sym_SVar_1))
        {
          ATerm b_53 = ATgetArgument(x_52, 0);
          if((ATgetSymbol((ATermAppl) b_53) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm y_52 = ATgetArgument(t, 1);
        if(((ATgetType(y_52) == AT_LIST) && !(ATisEmpty(y_52))))
          {
            u_41 = ATgetFirst((ATermList) y_52);
            {
              ATerm d_53 = (ATerm) ATgetNext((ATermList) y_52);
              if(((ATgetType(d_53) != AT_LIST) || !(ATisEmpty(d_53))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
      {
        ATerm z_52 = ATgetArgument(t, 2);
        if(((ATgetType(z_52) != AT_LIST) || !(ATisEmpty(z_52))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = if_verbose2_1_0(h_29, t);
  t = new_0_0(t);
  e_42 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_42), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = seq_over_choice_0_0(t);
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_42), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
  t = bottomup_to_var_0_0(t);
  t = u_41;
  t = inline_rules_0_0(t);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Rec_2, e_42, (ATerm) ATmakeAppl(sym_LChoice_2, (ATerm)ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seq_2, term_b_45, f_42), (ATerm) ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, e_42), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty)), term_y_41))), (ATerm) ATempty);
  t = propagate_mark_0_0(t);
  t = fuse_with_bottomup_0_0(t);
  t = alltd_1_0(i_29, t);
  {
    ATerm h_53 = t;
    if((PushChoice() == 0))
      {
        ATerm u_42 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
        t = oncetd_1_0(j_29, t);
        u_42 = t;
        j_9 = t;
        t = term_g_38;
        h_9 = t;
        t = j_9;
        k_9 = t;
        t = (ATerm) ATinsert(ATempty, term_i_53);
        i_9 = t;
        t = SSL_printnl(h_9, i_9);
        t = u_42;
        PopChoice();
        _fail(t);
      }
    else
      {
        t = h_53;
      }
    t = desugar_0_0(t);
    t = if_verbose1_1_0(k_29, t);
  }
  return(t);
}
ATerm alltd_1_0 (ATerm g_119 (ATerm), ATerm t)
{
  ATerm z_42 (ATerm t)
  {
    ATerm j_53 = t;
    int k_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_119(t);
        ;
        LocalPopChoice(k_53);
      }
    else
      {
        t = j_53;
        t = SRTS_all(z_42, t);
      }
    return(t);
  }
  t = z_42(t);
  return(t);
}
ATerm m_29 (ATerm t)
{
  ATerm o_45 = NULL,q_9 = NULL,r_9 = NULL,s_9 = NULL,t_9 = NULL;
  o_45 = t;
  s_9 = t;
  t = term_g_38;
  q_9 = t;
  t = s_9;
  t_9 = t;
  t = (ATerm) ATinsert(ATempty, term_l_53);
  r_9 = t;
  t = SSL_printnl(q_9, r_9);
  t = o_45;
  return(t);
}
ATerm o_29 (ATerm t)
{
  ATerm j_17 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,a_10 = NULL;
  j_17 = t;
  t = term_m_53;
  w_9 = t;
  t = term_g_38;
  u_9 = t;
  t = w_9;
  a_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_17), term_m_53);
  v_9 = t;
  t = SSL_printnl(u_9, v_9);
  t = j_17;
  return(t);
}
ATerm t_29 (ATerm t)
{
  ATerm n_46 = NULL,b_10 = NULL,c_10 = NULL,e_10 = NULL,f_10 = NULL;
  n_46 = t;
  e_10 = t;
  t = term_g_38;
  b_10 = t;
  t = e_10;
  f_10 = t;
  t = (ATerm) ATinsert(ATempty, term_n_53);
  c_10 = t;
  t = SSL_printnl(b_10, c_10);
  t = n_46;
  return(t);
}
ATerm check_that_bottomup_is_bottomup_0_0 (ATerm t)
{
  ATerm k_45 = NULL,n_45 = NULL;
  k_45 = t;
  t = new_0_0(t);
  n_45 = t;
  {
    ATerm o_53 = t;
    int p_53 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_q_49, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, n_45), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(p_53);
      }
    else
      {
        t = o_53;
        t = if_verbose2_1_0(m_29, t);
        _fail(t);
      }
    {
      ATerm r_53 = t;
      int x_53 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,f_46 = NULL,g_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
          p_45 = t;
          if(match_cons(t, sym_Seq_2))
            {
              q_45 = ATgetArgument(t, 0);
              f_46 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = q_45;
          if(match_cons(t, sym_All_1))
            {
              r_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_45;
          if(match_cons(t, sym_CallT_3))
            {
              s_45 = ATgetArgument(t, 0);
              u_45 = ATgetArgument(t, 1);
              c_46 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = s_45;
          if(match_cons(t, sym_SVar_1))
            {
              t_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_45;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = u_45;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_45 = ATgetFirst((ATermList) t);
              b_46 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_45;
          if(match_cons(t, sym_CallT_3))
            {
              w_45 = ATgetArgument(t, 0);
              z_45 = ATgetArgument(t, 1);
              a_46 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = w_45;
          if(match_cons(t, sym_SVar_1))
            {
              y_45 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = z_45;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = a_46;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = b_46;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = c_46;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = f_46;
          if(match_cons(t, sym_CallT_3))
            {
              g_46 = ATgetArgument(t, 0);
              l_46 = ATgetArgument(t, 1);
              m_46 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = g_46;
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
          t = y_45;
          if((n_45 != t))
            {
              _fail(t);
            }
          t = k_46;
          if((y_45 != t))
            {
              _fail(t);
            }
          t = p_45;
          ;
          LocalPopChoice(x_53);
        }
      else
        {
          t = r_53;
          t = if_verbose1_1_0(o_29, t);
          _fail(t);
        }
      t = if_verbose2_1_0(t_29, t);
      t = k_45;
    }
  }
  return(t);
}
ATerm u_29 (ATerm t)
{
  ATerm z_49 = NULL,g_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
  z_49 = t;
  j_10 = t;
  t = term_g_38;
  g_10 = t;
  t = j_10;
  k_10 = t;
  t = (ATerm) ATinsert(ATempty, term_y_53);
  i_10 = t;
  t = SSL_printnl(g_10, i_10);
  t = z_49;
  return(t);
}
ATerm y_29 (ATerm t)
{
  ATerm p_17 = NULL,l_10 = NULL,m_10 = NULL,o_10 = NULL,p_10 = NULL;
  p_17 = t;
  t = term_c_54;
  o_10 = t;
  t = term_g_38;
  l_10 = t;
  t = o_10;
  p_10 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_17), term_c_54);
  m_10 = t;
  t = SSL_printnl(l_10, m_10);
  t = p_17;
  return(t);
}
ATerm z_29 (ATerm t)
{
  ATerm n_52 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL;
  n_52 = t;
  s_10 = t;
  t = term_g_38;
  q_10 = t;
  t = s_10;
  t_10 = t;
  t = (ATerm) ATinsert(ATempty, term_j_54);
  r_10 = t;
  t = SSL_printnl(q_10, r_10);
  t = n_52;
  return(t);
}
ATerm check_that_innermost_is_innermost_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL;
  x_49 = t;
  t = new_0_0(t);
  y_49 = t;
  {
    ATerm k_54 = t;
    int l_54 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_n_54, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, y_49), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(l_54);
      }
    else
      {
        t = k_54;
        t = if_verbose2_1_0(u_29, t);
        _fail(t);
      }
    {
      ATerm o_54 = t;
      int p_54 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_50 = NULL,b_50 = NULL,e_50 = NULL,f_50 = NULL,i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,n_51 = NULL,o_51 = NULL,s_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL,g_52 = NULL,h_52 = NULL,i_52 = NULL,j_52 = NULL;
          z_50 = t;
          if(match_cons(t, sym_CallT_3))
            {
              a_51 = ATgetArgument(t, 0);
              c_51 = ATgetArgument(t, 1);
              j_52 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = a_51;
          if(match_cons(t, sym_SVar_1))
            {
              b_51 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_51;
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
            _fail(t);
          t = c_51;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              d_51 = ATgetFirst((ATermList) t);
              i_52 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = d_51;
          if(match_cons(t, sym_CallT_3))
            {
              e_51 = ATgetArgument(t, 0);
              f_51 = ATgetArgument(t, 1);
              b_50 = ATgetArgument(t, 2);
              t = e_51;
              if(match_cons(t, sym_SVar_1))
                {
                  a_50 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = a_50;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                _fail(t);
              t = f_51;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  g_51 = ATgetFirst((ATermList) t);
                  h_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_51;
              if(match_cons(t, sym_Seq_2))
                {
                  h_51 = ATgetArgument(t, 0);
                  v_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = h_51;
              if(match_cons(t, sym_CallT_3))
                {
                  i_51 = ATgetArgument(t, 0);
                  o_51 = ATgetArgument(t, 1);
                  s_51 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = i_51;
              if(match_cons(t, sym_SVar_1))
                {
                  n_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = o_51;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_51;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_51;
              if(match_cons(t, sym_CallT_3))
                {
                  w_51 = ATgetArgument(t, 0);
                  y_51 = ATgetArgument(t, 1);
                  g_52 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_51;
              if(match_cons(t, sym_SVar_1))
                {
                  x_51 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = x_51;
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("innermost_1_0", 0, ATtrue)))
                _fail(t);
              t = y_51;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_51 = ATgetFirst((ATermList) t);
                  e_52 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = z_51;
              if(match_cons(t, sym_CallT_3))
                {
                  a_52 = ATgetArgument(t, 0);
                  c_52 = ATgetArgument(t, 1);
                  d_52 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = a_52;
              if(match_cons(t, sym_SVar_1))
                {
                  b_52 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = c_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = d_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = e_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_50;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = j_52;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_51;
              if((y_49 != t))
                {
                  _fail(t);
                }
              t = b_52;
              if((n_51 != t))
                {
                  _fail(t);
                }
              t = z_50;
            }
          else
            {
              if(match_cons(t, sym_Rec_2))
                {
                  e_51 = ATgetArgument(t, 0);
                  f_51 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = f_51;
              if(match_cons(t, sym_CallT_3))
                {
                  g_51 = ATgetArgument(t, 0);
                  h_52 = ATgetArgument(t, 1);
                  y_50 = ATgetArgument(t, 2);
                  t = g_51;
                  if(match_cons(t, sym_SVar_1))
                    {
                      h_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = h_51;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("try_1_0", 0, ATtrue)))
                    _fail(t);
                  t = h_52;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_50 = ATgetFirst((ATermList) t);
                      x_50 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = e_50;
                  if(match_cons(t, sym_Seq_2))
                    {
                      f_50 = ATgetArgument(t, 0);
                      m_50 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = f_50;
                  if(match_cons(t, sym_CallT_3))
                    {
                      i_50 = ATgetArgument(t, 0);
                      k_50 = ATgetArgument(t, 1);
                      l_50 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = i_50;
                  if(match_cons(t, sym_SVar_1))
                    {
                      j_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = k_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = l_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = m_50;
                  if(match_cons(t, sym_CallT_3))
                    {
                      n_50 = ATgetArgument(t, 0);
                      p_50 = ATgetArgument(t, 1);
                      w_50 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = n_50;
                  if(match_cons(t, sym_SVar_1))
                    {
                      o_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_50;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = p_50;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      q_50 = ATgetFirst((ATermList) t);
                      v_50 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = q_50;
                  if(match_cons(t, sym_CallT_3))
                    {
                      r_50 = ATgetArgument(t, 0);
                      t_50 = ATgetArgument(t, 1);
                      u_50 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = r_50;
                  if(match_cons(t, sym_SVar_1))
                    {
                      s_50 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = t_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = u_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = w_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = x_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = y_50;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = i_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_50;
                  if((y_49 != t))
                    {
                      _fail(t);
                    }
                  t = s_50;
                  if((e_51 != t))
                    {
                      _fail(t);
                    }
                  t = z_50;
                }
              else
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      g_51 = ATgetArgument(t, 0);
                      h_52 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = g_51;
                  if(match_cons(t, sym_Seq_2))
                    {
                      h_51 = ATgetArgument(t, 0);
                      v_51 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = h_51;
                  if(match_cons(t, sym_CallT_3))
                    {
                      i_51 = ATgetArgument(t, 0);
                      o_51 = ATgetArgument(t, 1);
                      s_51 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = i_51;
                  if(match_cons(t, sym_SVar_1))
                    {
                      n_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = o_51;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = s_51;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = v_51;
                  if(match_cons(t, sym_CallT_3))
                    {
                      w_51 = ATgetArgument(t, 0);
                      y_51 = ATgetArgument(t, 1);
                      g_52 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = w_51;
                  if(match_cons(t, sym_SVar_1))
                    {
                      x_51 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = x_51;
                  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("bottomup_1_0", 0, ATtrue)))
                    _fail(t);
                  t = y_51;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      z_51 = ATgetFirst((ATermList) t);
                      e_52 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = z_51;
                  if(match_cons(t, sym_CallT_3))
                    {
                      a_52 = ATgetArgument(t, 0);
                      c_52 = ATgetArgument(t, 1);
                      d_52 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = a_52;
                  if(match_cons(t, sym_SVar_1))
                    {
                      b_52 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = c_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = d_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = e_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = g_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = h_52;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = i_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = j_52;
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = n_51;
                  if((y_49 != t))
                    {
                      _fail(t);
                    }
                  t = b_52;
                  if((e_51 != t))
                    {
                      _fail(t);
                    }
                  t = z_50;
                }
            }
          ;
          LocalPopChoice(p_54);
        }
      else
        {
          t = o_54;
          t = if_verbose1_1_0(y_29, t);
          _fail(t);
        }
      t = if_verbose2_1_0(z_29, t);
      t = x_49;
    }
  }
  return(t);
}
ATerm BuildPrim_0_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,a_53 = NULL,c_53 = NULL,e_53 = NULL,f_53 = NULL,g_53 = NULL;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      c_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_53;
  if(match_cons(t, sym_Build_1))
    {
      ATerm q_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_53;
  if(match_cons(t, sym_Where_1))
    {
      e_53 = ATgetArgument(t, 0);
      t = e_53;
      if(match_cons(t, sym_Prim_2))
        {
          t_52 = ATgetArgument(t, 0);
          u_52 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Prim_2, t_52, u_52);
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          e_53 = ATgetArgument(t, 0);
          f_53 = ATgetArgument(t, 1);
          t = (ATerm) ATmakeAppl(sym_Prim_2, e_53, f_53);
        }
      else
        {
          if(match_cons(t, sym_PrimT_3))
            {
              e_53 = ATgetArgument(t, 0);
              f_53 = ATgetArgument(t, 1);
              g_53 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_PrimT_3, e_53, f_53, g_53);
        }
    }
  return(t);
}
ATerm a_30 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_54 = ATgetArgument(t, 0);
      if(((ATgetType(r_54) != AT_LIST) || !(ATisEmpty(r_54))))
        _fail(t);
      {
        ATerm s_54 = ATgetArgument(t, 1);
        if(((ATgetType(s_54) != AT_LIST) || !(ATisEmpty(s_54))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_30 (ATerm t)
{
  ATerm v_53 = NULL,w_53 = NULL,z_53 = NULL,a_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_54 = ATgetArgument(t, 0);
      if(((ATgetType(t_54) == AT_LIST) && !(ATisEmpty(t_54))))
        {
          v_53 = ATgetFirst((ATermList) t_54);
          z_53 = (ATerm) ATgetNext((ATermList) t_54);
        }
      else
        _fail(t);
      {
        ATerm u_54 = ATgetArgument(t, 1);
        if(((ATgetType(u_54) == AT_LIST) && !(ATisEmpty(u_54))))
          {
            w_53 = ATgetFirst((ATermList) u_54);
            a_54 = (ATerm) ATgetNext((ATermList) u_54);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, v_53, w_53), (ATerm) ATmakeAppl(sym__2, z_53, a_54));
  return(t);
}
ATerm c_30 (ATerm t)
{
  ATerm b_54 = NULL,d_54 = NULL;
  if(match_cons(t, sym__2))
    {
      b_54 = ATgetArgument(t, 0);
      d_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(d_54), b_54);
  return(t);
}
ATerm e_30 (ATerm t)
{
  ATerm e_54 = NULL,f_54 = NULL;
  if(match_cons(t, sym__2))
    {
      e_54 = ATgetArgument(t, 0);
      f_54 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_54), (ATerm) ATmakeAppl(sym_Match_1, f_54));
  return(t);
}
ATerm BuildMatchFusion_0_0 (ATerm t)
{
  ATerm q_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_54 = ATgetArgument(t, 0);
      if(match_cons(v_54, sym_Build_1))
        {
          ATerm x_54 = ATgetArgument(v_54, 0);
          if(match_cons(x_54, sym_Op_2))
            {
              s_53 = ATgetArgument(x_54, 0);
              q_53 = ATgetArgument(x_54, 1);
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm w_54 = ATgetArgument(t, 1);
        if(match_cons(w_54, sym_Match_1))
          {
            ATerm y_54 = ATgetArgument(w_54, 0);
            if(match_cons(y_54, sym_Op_2))
              {
                if((s_53 != ATgetArgument(y_54, 0)))
                  {
                    _fail(ATgetArgument(y_54, 0));
                  }
                t_53 = ATgetArgument(y_54, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, q_53, t_53);
  t = genzip_4_0(a_30, b_30, c_30, e_30, t);
  u_53 = t;
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, u_53), (ATerm) ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Op_2, s_53, q_53)));
  return(t);
}
ATerm MisMatch_0_0 (ATerm t)
{
  ATerm g_54 = NULL,h_54 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_54 = ATgetArgument(t, 0);
      if(match_cons(z_54, sym_Build_1))
        {
          ATerm b_55 = ATgetArgument(z_54, 0);
          if(match_cons(b_55, sym_Op_2))
            {
              g_54 = ATgetArgument(b_55, 0);
              {
                ATerm c_55 = ATgetArgument(b_55, 1);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      {
        ATerm a_55 = ATgetArgument(t, 1);
        if(match_cons(a_55, sym_Match_1))
          {
            ATerm d_55 = ATgetArgument(a_55, 0);
            if(match_cons(d_55, sym_Op_2))
              {
                h_54 = ATgetArgument(d_55, 0);
                {
                  ATerm e_55 = ATgetArgument(d_55, 1);
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
  t = (ATerm) ATmakeAppl(sym__2, g_54, h_54);
  {
    ATerm f_55 = t;
    if((PushChoice() == 0))
      {
        ATerm i_54 = NULL;
        if(match_cons(t, sym__2))
          {
            i_54 = ATgetArgument(t, 0);
            if((i_54 != ATgetArgument(t, 1)))
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
        t = f_55;
      }
    t = term_g_55;
  }
  return(t);
}
ATerm q_58 (ATerm h_57, ATerm i_57, ATerm n_57, ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, h_57, i_57);
  {
    ATerm h_55 = t;
    int i_55 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MisMatch_0_0(t);
        ;
        LocalPopChoice(i_55);
      }
    else
      {
        t = h_55;
        {
          ATerm j_55 = t;
          int k_55 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = BuildMatchFusion_0_0(t);
              ;
              LocalPopChoice(k_55);
            }
          else
            {
              t = j_55;
              {
                ATerm l_55 = t;
                int m_55 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm x_57 = NULL;
                    if(match_cons(t, sym__2))
                      {
                        ATerm n_55 = ATgetArgument(t, 0);
                        ATerm o_55 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = h_57;
                    if(match_cons(t, sym_Build_1))
                      {
                        ATerm p_55 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = i_57;
                    if(match_cons(t, sym_Build_1))
                      {
                        x_57 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Build_1, x_57);
                    ;
                    LocalPopChoice(m_55);
                  }
                else
                  {
                    t = l_55;
                    {
                      ATerm q_55 = t;
                      int r_55 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = BuildPrim_0_0(t);
                          ;
                          LocalPopChoice(r_55);
                        }
                      else
                        {
                          t = q_55;
                          {
                            ATerm b_58 = NULL,c_58 = NULL,e_58 = NULL,f_58 = NULL;
                            if(match_cons(t, sym__2))
                              {
                                ATerm s_55 = ATgetArgument(t, 0);
                                ATerm t_55 = ATgetArgument(t, 1);
                              }
                            else
                              _fail(t);
                            t = h_57;
                            if(match_cons(t, sym_Match_1))
                              {
                                b_58 = ATgetArgument(t, 0);
                                t = i_57;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    e_58 = ATgetArgument(t, 0);
                                    t = e_58;
                                    if((b_58 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, b_58);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Build_1))
                                      {
                                        e_58 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = b_58;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        c_58 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = e_58;
                                    if(match_cons(t, sym_Var_1))
                                      {
                                        f_58 = ATgetArgument(t, 0);
                                      }
                                    else
                                      _fail(t);
                                    t = f_58;
                                    if((c_58 != t))
                                      {
                                        _fail(t);
                                      }
                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, c_58));
                                  }
                              }
                            else
                              {
                                if(match_cons(t, sym_Build_1))
                                  {
                                    b_58 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = i_57;
                                if(match_cons(t, sym_Match_1))
                                  {
                                    e_58 = ATgetArgument(t, 0);
                                  }
                                else
                                  _fail(t);
                                t = e_58;
                                if((b_58 != t))
                                  {
                                    _fail(t);
                                  }
                                t = (ATerm) ATmakeAppl(sym_Build_1, b_58);
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
  ATerm j_58 = NULL,k_58 = NULL,l_58 = NULL,n_58 = NULL,o_58 = NULL;
  l_58 = t;
  if(match_cons(t, sym_Seq_2))
    {
      n_58 = ATgetArgument(t, 0);
      o_58 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_58;
  if(match_cons(t, sym_Seq_2))
    {
      j_58 = ATgetArgument(t, 0);
      k_58 = ATgetArgument(t, 1);
      {
        ATerm u_55 = t;
        int v_55 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_58, j_58);
            {
              ATerm w_55 = t;
              int x_55 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = MisMatch_0_0(t);
                  ;
                  LocalPopChoice(x_55);
                }
              else
                {
                  t = w_55;
                  {
                    ATerm y_55 = t;
                    int z_55 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = BuildMatchFusion_0_0(t);
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
                              ATerm n_18 = NULL;
                              if(match_cons(t, sym__2))
                                {
                                  ATerm c_56 = ATgetArgument(t, 0);
                                  ATerm d_56 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              t = n_58;
                              if(match_cons(t, sym_Build_1))
                                {
                                  ATerm e_56 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = j_58;
                              if(match_cons(t, sym_Build_1))
                                {
                                  n_18 = ATgetArgument(t, 0);
                                }
                              else
                                _fail(t);
                              t = (ATerm) ATmakeAppl(sym_Build_1, n_18);
                              ;
                              LocalPopChoice(b_56);
                            }
                          else
                            {
                              t = a_56;
                              {
                                ATerm f_56 = t;
                                int g_56 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = BuildPrim_0_0(t);
                                    ;
                                    LocalPopChoice(g_56);
                                  }
                                else
                                  {
                                    t = f_56;
                                    {
                                      ATerm r_18 = NULL,s_18 = NULL,v_18 = NULL,z_18 = NULL;
                                      if(match_cons(t, sym__2))
                                        {
                                          ATerm h_56 = ATgetArgument(t, 0);
                                          ATerm i_56 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = n_58;
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          r_18 = ATgetArgument(t, 0);
                                          t = j_58;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              v_18 = ATgetArgument(t, 0);
                                              t = v_18;
                                              if((r_18 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, r_18);
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_Build_1))
                                                {
                                                  v_18 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = r_18;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  s_18 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = v_18;
                                              if(match_cons(t, sym_Var_1))
                                                {
                                                  z_18 = ATgetArgument(t, 0);
                                                }
                                              else
                                                _fail(t);
                                              t = z_18;
                                              if((s_18 != t))
                                                {
                                                  _fail(t);
                                                }
                                              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_18));
                                            }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_Build_1))
                                            {
                                              r_18 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = j_58;
                                          if(match_cons(t, sym_Match_1))
                                            {
                                              v_18 = ATgetArgument(t, 0);
                                            }
                                          else
                                            _fail(t);
                                          t = v_18;
                                          if((r_18 != t))
                                            {
                                              _fail(t);
                                            }
                                          t = (ATerm) ATmakeAppl(sym_Build_1, r_18);
                                        }
                                    }
                                  }
                              }
                            }
                        }
                      }
                  }
                }
              c_18 = t;
              t = (ATerm) ATmakeAppl(sym_Seq_2, c_18, k_58);
            }
            ;
            LocalPopChoice(v_55);
          }
        else
          {
            t = u_55;
            t = q_58(n_58, o_58, l_58, t);
          }
      }
    }
  else
    {
      t = q_58(n_58, o_58, l_58, t);
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm s_118 (ATerm), ATerm t)
{
  ATerm r_58 (ATerm t)
  {
    ATerm j_56 = t;
    int k_56 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_118(t);
        ;
        LocalPopChoice(k_56);
      }
    else
      {
        t = j_56;
        t = SRTS_one(r_58, t);
      }
    return(t);
  }
  t = r_58(t);
  return(t);
}
ATerm LetHoist_0_0 (ATerm t)
{
  ATerm s_58 = NULL,t_58 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      ATerm l_56 = ATgetArgument(t, 0);
      if(((ATgetType(l_56) == AT_LIST) && !(ATisEmpty(l_56))))
        {
          ATerm n_56 = ATgetFirst((ATermList) l_56);
          if(match_cons(n_56, sym_SDefT_4))
            {
              t_58 = ATgetArgument(n_56, 0);
              {
                ATerm p_56 = ATgetArgument(n_56, 1);
                if(((ATgetType(p_56) != AT_LIST) || !(ATisEmpty(p_56))))
                  _fail(t);
              }
              {
                ATerm q_56 = ATgetArgument(n_56, 2);
                if(((ATgetType(q_56) != AT_LIST) || !(ATisEmpty(q_56))))
                  _fail(t);
              }
              s_58 = ATgetArgument(n_56, 3);
            }
          else
            _fail(t);
          {
            ATerm o_56 = (ATerm) ATgetNext((ATermList) l_56);
            if(((ATgetType(o_56) != AT_LIST) || !(ATisEmpty(o_56))))
              _fail(t);
          }
        }
      else
        _fail(t);
      {
        ATerm m_56 = ATgetArgument(t, 1);
        if(match_cons(m_56, sym_CallT_3))
          {
            ATerm r_56 = ATgetArgument(m_56, 0);
            if(match_cons(r_56, sym_SVar_1))
              {
                if((t_58 != ATgetArgument(r_56, 0)))
                  {
                    _fail(ATgetArgument(r_56, 0));
                  }
              }
            else
              _fail(t);
            {
              ATerm s_56 = ATgetArgument(m_56, 1);
              if(((ATgetType(s_56) != AT_LIST) || !(ATisEmpty(s_56))))
                _fail(t);
            }
            {
              ATerm t_56 = ATgetArgument(m_56, 2);
              if(((ATgetType(t_56) != AT_LIST) || !(ATisEmpty(t_56))))
                _fail(t);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_58;
  {
    ATerm u_56 = t;
    if((PushChoice() == 0))
      {
        ATerm j_30 (ATerm t)
        {
          if(match_cons(t, sym_CallT_3))
            {
              ATerm v_56 = ATgetArgument(t, 0);
              if(match_cons(v_56, sym_SVar_1))
                {
                  if((t_58 != ATgetArgument(v_56, 0)))
                    {
                      _fail(ATgetArgument(v_56, 0));
                    }
                }
              else
                _fail(t);
              {
                ATerm w_56 = ATgetArgument(t, 1);
                if(((ATgetType(w_56) != AT_LIST) || !(ATisEmpty(w_56))))
                  _fail(t);
              }
              {
                ATerm x_56 = ATgetArgument(t, 2);
                if(((ATgetType(x_56) != AT_LIST) || !(ATisEmpty(x_56))))
                  _fail(t);
              }
            }
          else
            _fail(t);
          return(t);
        }
        t = oncetd_1_0(j_30, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_56;
      }
    t = s_58;
  }
  return(t);
}
ATerm Idempotency_0_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,i_59 = NULL,j_59 = NULL;
  if(match_cons(t, sym_Where_1))
    {
      i_59 = ATgetArgument(t, 0);
      t = i_59;
      if(match_cons(t, sym_Seq_2))
        {
          g_59 = ATgetArgument(t, 0);
          c_59 = ATgetArgument(t, 1);
          t = g_59;
          if(match_cons(t, sym_Where_1))
            {
              b_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_59;
          if(match_cons(t, sym_Seq_2))
            {
              d_59 = ATgetArgument(t, 0);
              f_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = d_59;
          if(match_cons(t, sym_Build_1))
            {
              e_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, b_59, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_59), f_59)));
        }
      else
        {
          if(match_cons(t, sym_Where_1))
            {
              g_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Where_1, g_59);
        }
    }
  else
    {
      if(match_cons(t, sym_Test_1))
        {
          i_59 = ATgetArgument(t, 0);
          t = i_59;
          if(match_cons(t, sym_Test_1))
            {
              g_59 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Test_1, g_59);
        }
      else
        {
          if(match_cons(t, sym_Not_1))
            {
              i_59 = ATgetArgument(t, 0);
              t = i_59;
              if(match_cons(t, sym_Not_1))
                {
                  g_59 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Test_1, g_59);
            }
          else
            {
              if(match_cons(t, sym_LChoice_2))
                {
                  i_59 = ATgetArgument(t, 0);
                  j_59 = ATgetArgument(t, 1);
                  t = j_59;
                  if((i_59 != t))
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(t, sym_Choice_2))
                    {
                      i_59 = ATgetArgument(t, 0);
                      j_59 = ATgetArgument(t, 1);
                    }
                  else
                    _fail(t);
                  t = j_59;
                  if((i_59 != t))
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
  ATerm x_59 = NULL,y_59 = NULL,z_59 = NULL,a_60 = NULL;
  if(match_cons(t, sym_LChoice_2))
    {
      x_59 = ATgetArgument(t, 0);
      a_60 = ATgetArgument(t, 1);
      t = x_59;
      if(match_cons(t, sym_LChoice_2))
        {
          y_59 = ATgetArgument(t, 0);
          z_59 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_LChoice_2, y_59, (ATerm) ATmakeAppl(sym_LChoice_2, z_59, a_60));
    }
  else
    {
      if(match_cons(t, sym_Seq_2))
        {
          x_59 = ATgetArgument(t, 0);
          a_60 = ATgetArgument(t, 1);
          t = x_59;
          if(match_cons(t, sym_Seq_2))
            {
              y_59 = ATgetArgument(t, 0);
              z_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Seq_2, y_59, (ATerm) ATmakeAppl(sym_Seq_2, z_59, a_60));
        }
      else
        {
          if(match_cons(t, sym_Choice_2))
            {
              x_59 = ATgetArgument(t, 0);
              a_60 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_59;
          if(match_cons(t, sym_Choice_2))
            {
              y_59 = ATgetArgument(t, 0);
              z_59 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym_Choice_2, y_59, (ATerm) ATmakeAppl(sym_Choice_2, z_59, a_60));
        }
    }
  return(t);
}
ATerm map1_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm y_56 = t;
  int z_56 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Cons_2_0(n_0, _id, t);
      {
        ATerm k_30 (ATerm t)
        {
          ATerm a_57 = t;
          int b_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = map1_1_0(n_0, t);
              ;
              LocalPopChoice(b_57);
            }
          else
            {
              t = a_57;
            }
          return(t);
        }
        t = Cons_2_0(_id, k_30, t);
      }
      ;
      LocalPopChoice(z_56);
    }
  else
    {
      t = y_56;
      {
        ATerm l_30 (ATerm t)
        {
          t = map1_1_0(n_0, t);
          return(t);
        }
        t = Cons_2_0(_id, l_30, t);
      }
    }
  return(t);
}
ATerm m_30 (ATerm t)
{
  ATerm t_61 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      t_61 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, t_61, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_57), term_e_57));
  return(t);
}
ATerm o_30 (ATerm t)
{
  ATerm f_57 = t;
  int g_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_61 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_61 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, v_61, term_e_57);
      ;
      LocalPopChoice(g_57);
    }
  else
    {
      t = f_57;
    }
  return(t);
}
ATerm p_30 (ATerm t)
{
  ATerm d_62 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      d_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, d_62, term_e_57);
  return(t);
}
ATerm q_30 (ATerm t)
{
  ATerm j_57 = t;
  int k_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_62 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          f_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, f_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_57), term_e_57));
      ;
      LocalPopChoice(k_57);
    }
  else
    {
      t = j_57;
    }
  return(t);
}
ATerm s_30 (ATerm t)
{
  ATerm n_62 = NULL;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      n_62 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_VarDec_2, n_62, (ATerm) ATmakeAppl(sym_FunType_2, (ATerm)ATinsert(ATempty, term_e_57), term_e_57));
  return(t);
}
ATerm u_30 (ATerm t)
{
  ATerm l_57 = t;
  int m_57 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_62 = NULL;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          s_62 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_VarDec_2, s_62, term_e_57);
      ;
      LocalPopChoice(m_57);
    }
  else
    {
      t = l_57;
    }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_60 = NULL,y_60 = NULL,a_61 = NULL,b_61 = NULL,d_61 = NULL,e_61 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      d_61 = ATgetArgument(t, 0);
      e_61 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, d_61, e_61);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          d_61 = ATgetArgument(t, 0);
          t = d_61;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_60 = ATgetFirst((ATermList) t);
              y_60 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_60, (ATerm) ATmakeAppl(sym_LChoices_1, y_60));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_g_55;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              d_61 = ATgetArgument(t, 0);
              t = d_61;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_60 = ATgetFirst((ATermList) t);
                  y_60 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_60, (ATerm) ATmakeAppl(sym_Choices_1, y_60));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_g_55;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  d_61 = ATgetArgument(t, 0);
                  t = d_61;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_60 = ATgetFirst((ATermList) t);
                      y_60 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_60, (ATerm) ATmakeAppl(sym_Seqs_1, y_60));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_y_41;
                    }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      d_61 = ATgetArgument(t, 0);
                      e_61 = ATgetArgument(t, 1);
                      b_61 = ATgetArgument(t, 2);
                      a_61 = ATgetArgument(t, 3);
                      {
                        ATerm r_61 = NULL,s_61 = NULL;
                        t = e_61;
                        t = map1_1_0(m_30, t);
                        r_61 = t;
                        t = b_61;
                        t = map1_1_0(o_30, t);
                        s_61 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_61, r_61, s_61, a_61);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SDefT_4))
                        {
                          d_61 = ATgetArgument(t, 0);
                          e_61 = ATgetArgument(t, 1);
                          b_61 = ATgetArgument(t, 2);
                          a_61 = ATgetArgument(t, 3);
                          {
                            ATerm o_57 = t;
                            int p_57 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm b_62 = NULL,c_62 = NULL;
                                t = b_61;
                                t = map1_1_0(p_30, t);
                                b_62 = t;
                                t = e_61;
                                t = map_1_0(q_30, t);
                                c_62 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, d_61, c_62, b_62, a_61);
                                ;
                                LocalPopChoice(p_57);
                              }
                            else
                              {
                                t = o_57;
                                {
                                  ATerm l_62 = NULL,m_62 = NULL;
                                  t = e_61;
                                  t = map1_1_0(s_30, t);
                                  l_62 = t;
                                  t = b_61;
                                  t = map_1_0(u_30, t);
                                  m_62 = t;
                                  t = (ATerm) ATmakeAppl(sym_SDefT_4, d_61, l_62, m_62, a_61);
                                }
                              }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_InfixApp_3))
                            {
                              d_61 = ATgetArgument(t, 0);
                              e_61 = ATgetArgument(t, 1);
                              b_61 = ATgetArgument(t, 2);
                              t = (ATerm) ATmakeAppl(sym_App_2, e_61, (ATerm) ATmakeAppl(sym_Op_2, term_i_40, (ATerm) ATinsert(ATinsert(ATempty, b_61), d_61)));
                            }
                          else
                            {
                              if(match_cons(t, sym_BAM_3))
                                {
                                  d_61 = ATgetArgument(t, 0);
                                  e_61 = ATgetArgument(t, 1);
                                  b_61 = ATgetArgument(t, 2);
                                  t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, b_61)), d_61), (ATerm) ATmakeAppl(sym_Build_1, e_61)));
                                }
                              else
                                {
                                  if(match_cons(t, sym_AM_2))
                                    {
                                      d_61 = ATgetArgument(t, 0);
                                      e_61 = ATgetArgument(t, 1);
                                      t = (ATerm) ATmakeAppl(sym_Seq_2, d_61, (ATerm) ATmakeAppl(sym_Match_1, e_61));
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_MA_2))
                                        {
                                          d_61 = ATgetArgument(t, 0);
                                          e_61 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_61), e_61);
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_BA_2))
                                            {
                                              d_61 = ATgetArgument(t, 0);
                                              e_61 = ATgetArgument(t, 1);
                                            }
                                          else
                                            _fail(t);
                                          t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, e_61), d_61);
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
ATerm v_30 (ATerm t)
{
  if(!(match_cons(t, sym_Fail_0)))
    _fail(t);
  return(t);
}
ATerm ElimFail_0_0 (ATerm t)
{
  ATerm d_64 = NULL,f_64 = NULL,g_64 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      d_64 = ATgetArgument(t, 0);
      t = d_64;
      if(!(match_cons(t, sym_Fail_0)))
        _fail(t);
      t = term_g_55;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          d_64 = ATgetArgument(t, 0);
          t = d_64;
          if(!(match_cons(t, sym_Fail_0)))
            _fail(t);
          t = term_y_41;
        }
      else
        {
          ATerm q_57 = t;
          int r_57 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_Seq_2))
                {
                  d_64 = ATgetArgument(t, 0);
                  {
                    ATerm s_57 = ATgetArgument(t, 1);
                  }
                }
              else
                _fail(t);
              LocalPopChoice(r_57);
              t = d_64;
              if(!(match_cons(t, sym_Fail_0)))
                _fail(t);
              t = term_g_55;
            }
          else
            {
              t = q_57;
              {
                ATerm t_57 = t;
                int u_57 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_Scope_2))
                      {
                        ATerm v_57 = ATgetArgument(t, 0);
                        f_64 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_57);
                    t = f_64;
                    if(!(match_cons(t, sym_Fail_0)))
                      _fail(t);
                    t = term_g_55;
                  }
                else
                  {
                    t = t_57;
                    {
                      ATerm w_57 = t;
                      int y_57 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_Rec_2))
                            {
                              ATerm z_57 = ATgetArgument(t, 0);
                              f_64 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          LocalPopChoice(y_57);
                          t = f_64;
                          if(!(match_cons(t, sym_Fail_0)))
                            _fail(t);
                          t = term_g_55;
                        }
                      else
                        {
                          t = w_57;
                          if(match_cons(t, sym_Some_1))
                            {
                              d_64 = ATgetArgument(t, 0);
                              t = d_64;
                              if(!(match_cons(t, sym_Fail_0)))
                                _fail(t);
                              t = term_g_55;
                            }
                          else
                            {
                              if(match_cons(t, sym_One_1))
                                {
                                  d_64 = ATgetArgument(t, 0);
                                  t = d_64;
                                  if(!(match_cons(t, sym_Fail_0)))
                                    _fail(t);
                                  t = term_g_55;
                                }
                              else
                                {
                                  ATerm a_58 = t;
                                  int d_58 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      if(match_cons(t, sym_Path_2))
                                        {
                                          ATerm g_58 = ATgetArgument(t, 0);
                                          f_64 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      LocalPopChoice(d_58);
                                      t = f_64;
                                      if(!(match_cons(t, sym_Fail_0)))
                                        _fail(t);
                                      t = term_g_55;
                                    }
                                  else
                                    {
                                      t = a_58;
                                      {
                                        ATerm h_58 = t;
                                        int i_58 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            if(match_cons(t, sym_Cong_2))
                                              {
                                                ATerm m_58 = ATgetArgument(t, 0);
                                                f_64 = ATgetArgument(t, 1);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(i_58);
                                            t = f_64;
                                            t = fetch_1_0(v_30, t);
                                            t = term_g_55;
                                          }
                                        else
                                          {
                                            t = h_58;
                                            if(match_cons(t, sym_Choice_2))
                                              {
                                                d_64 = ATgetArgument(t, 0);
                                                f_64 = ATgetArgument(t, 1);
                                                t = f_64;
                                                if(match_cons(t, sym_Fail_0))
                                                  {
                                                    t = d_64;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        ATerm p_58 = t;
                                                        int u_58 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = f_64;
                                                            ;
                                                            LocalPopChoice(u_58);
                                                          }
                                                        else
                                                          {
                                                            t = p_58;
                                                            t = d_64;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = d_64;
                                                      }
                                                  }
                                                else
                                                  {
                                                    t = d_64;
                                                    if(!(match_cons(t, sym_Fail_0)))
                                                      _fail(t);
                                                    t = f_64;
                                                  }
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_LChoice_2))
                                                  {
                                                    d_64 = ATgetArgument(t, 0);
                                                    f_64 = ATgetArgument(t, 1);
                                                    t = f_64;
                                                    if(match_cons(t, sym_Fail_0))
                                                      {
                                                        t = d_64;
                                                        if(match_cons(t, sym_Fail_0))
                                                          {
                                                            ATerm v_58 = t;
                                                            int w_58 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = f_64;
                                                                ;
                                                                LocalPopChoice(w_58);
                                                              }
                                                            else
                                                              {
                                                                t = v_58;
                                                                t = d_64;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = d_64;
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = d_64;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = f_64;
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_Where_1))
                                                      {
                                                        d_64 = ATgetArgument(t, 0);
                                                        t = d_64;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = term_g_55;
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_GuardedLChoice_3))
                                                          {
                                                            d_64 = ATgetArgument(t, 0);
                                                            f_64 = ATgetArgument(t, 1);
                                                            g_64 = ATgetArgument(t, 2);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = g_64;
                                                        if(!(match_cons(t, sym_Fail_0)))
                                                          _fail(t);
                                                        t = (ATerm) ATmakeAppl(sym_Seq_2, d_64, f_64);
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
  ATerm t_65 = NULL,a_66 = NULL;
  if(match_cons(t, sym_Test_1))
    {
      a_66 = ATgetArgument(t, 0);
      t = a_66;
      if(!(match_cons(t, sym_Id_0)))
        _fail(t);
      t = term_y_41;
    }
  else
    {
      if(match_cons(t, sym_Not_1))
        {
          a_66 = ATgetArgument(t, 0);
          t = a_66;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = term_g_55;
        }
      else
        {
          if(match_cons(t, sym_Seq_2))
            {
              a_66 = ATgetArgument(t, 0);
              t_65 = ATgetArgument(t, 1);
              t = t_65;
              if(match_cons(t, sym_Id_0))
                {
                  t = a_66;
                  if(match_cons(t, sym_Id_0))
                    {
                      ATerm x_58 = t;
                      int y_58 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = t_65;
                          ;
                          LocalPopChoice(y_58);
                        }
                      else
                        {
                          t = x_58;
                          t = a_66;
                        }
                    }
                  else
                    {
                      t = a_66;
                    }
                }
              else
                {
                  t = a_66;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = t_65;
                }
            }
          else
            {
              ATerm z_58 = t;
              int a_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_LChoice_2))
                    {
                      a_66 = ATgetArgument(t, 0);
                      {
                        ATerm h_59 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_59);
                  t = a_66;
                  if(!(match_cons(t, sym_Id_0)))
                    _fail(t);
                  t = term_y_41;
                }
              else
                {
                  t = z_58;
                  {
                    ATerm k_59 = t;
                    int l_59 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Scope_2))
                          {
                            ATerm m_59 = ATgetArgument(t, 0);
                            t_65 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(l_59);
                        t = t_65;
                        if(!(match_cons(t, sym_Id_0)))
                          _fail(t);
                        t = term_y_41;
                      }
                    else
                      {
                        t = k_59;
                        {
                          ATerm n_59 = t;
                          int o_59 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Rec_2))
                                {
                                  ATerm p_59 = ATgetArgument(t, 0);
                                  t_65 = ATgetArgument(t, 1);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(o_59);
                              t = t_65;
                              if(!(match_cons(t, sym_Id_0)))
                                _fail(t);
                              t = term_y_41;
                            }
                          else
                            {
                              t = n_59;
                              if(match_cons(t, sym_All_1))
                                {
                                  a_66 = ATgetArgument(t, 0);
                                  t = a_66;
                                  if(!(match_cons(t, sym_Id_0)))
                                    _fail(t);
                                  t = term_y_41;
                                }
                              else
                                {
                                  if(match_cons(t, sym_Where_1))
                                    {
                                      a_66 = ATgetArgument(t, 0);
                                      t = a_66;
                                      if(!(match_cons(t, sym_Id_0)))
                                        _fail(t);
                                      t = term_y_41;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Match_1))
                                        {
                                          a_66 = ATgetArgument(t, 0);
                                        }
                                      else
                                        _fail(t);
                                      t = a_66;
                                      if(!(match_cons(t, sym_Wld_0)))
                                        _fail(t);
                                      t = term_y_41;
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
  ATerm q_59 = t;
  int r_59 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ElimId_0_0(t);
      ;
      LocalPopChoice(r_59);
    }
  else
    {
      t = q_59;
      {
        ATerm s_59 = t;
        int t_59 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ElimFail_0_0(t);
            ;
            LocalPopChoice(t_59);
          }
        else
          {
            t = s_59;
            {
              ATerm u_59 = t;
              int v_59 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  ;
                  LocalPopChoice(v_59);
                }
              else
                {
                  t = u_59;
                  {
                    ATerm w_59 = t;
                    int b_60 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = AssociateR_0_0(t);
                        ;
                        LocalPopChoice(b_60);
                      }
                    else
                      {
                        t = w_59;
                        {
                          ATerm c_60 = t;
                          int d_60 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = Idempotency_0_0(t);
                              ;
                              LocalPopChoice(d_60);
                            }
                          else
                            {
                              t = c_60;
                              {
                                ATerm e_60 = t;
                                int f_60 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm u_66 = NULL,v_66 = NULL;
                                    if(match_cons(t, sym_Scope_2))
                                      {
                                        u_66 = ATgetArgument(t, 0);
                                        v_66 = ATgetArgument(t, 1);
                                        t = u_66;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_66;
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_Let_2))
                                          {
                                            u_66 = ATgetArgument(t, 0);
                                            v_66 = ATgetArgument(t, 1);
                                          }
                                        else
                                          _fail(t);
                                        t = u_66;
                                        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                          _fail(t);
                                        t = v_66;
                                      }
                                    ;
                                    LocalPopChoice(f_60);
                                  }
                                else
                                  {
                                    t = e_60;
                                    {
                                      ATerm g_60 = t;
                                      int h_60 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = LetHoist_0_0(t);
                                          ;
                                          LocalPopChoice(h_60);
                                        }
                                      else
                                        {
                                          t = g_60;
                                          {
                                            ATerm i_60 = t;
                                            int j_60 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = BuildMatch_0_0(t);
                                                ;
                                                LocalPopChoice(j_60);
                                              }
                                            else
                                              {
                                                t = i_60;
                                                {
                                                  ATerm z_66 = NULL,a_67 = NULL;
                                                  if(match_cons(t, sym_As_2))
                                                    {
                                                      z_66 = ATgetArgument(t, 0);
                                                      a_67 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_66;
                                                  if(!(match_cons(t, sym_Wld_0)))
                                                    _fail(t);
                                                  t = a_67;
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
ATerm repeat_1_0 (ATerm t_130 (ATerm), ATerm t)
{
  ATerm c_67 (ATerm t)
  {
    ATerm k_60 = t;
    int l_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_130(t);
        t = c_67(t);
        ;
        LocalPopChoice(l_60);
      }
    else
      {
        t = k_60;
      }
    return(t);
  }
  t = c_67(t);
  return(t);
}
ATerm downup_1_0 (ATerm q_117 (ATerm), ATerm t)
{
  t = q_117(t);
  {
    ATerm w_30 (ATerm t)
    {
      t = downup_1_0(q_117, t);
      return(t);
    }
    t = SRTS_all(w_30, t);
    t = q_117(t);
  }
  return(t);
}
ATerm genzip_4_0 (ATerm c_124 (ATerm), ATerm d_124 (ATerm), ATerm e_124 (ATerm), ATerm f_124 (ATerm), ATerm t)
{
  ATerm d_67 (ATerm t)
  {
    ATerm m_60 = t;
    int n_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_124(t);
        ;
        LocalPopChoice(n_60);
      }
    else
      {
        t = m_60;
        t = d_124(t);
        t = _2_0(f_124, d_67, t);
        t = e_124(t);
      }
    return(t);
  }
  t = d_67(t);
  return(t);
}
ATerm x_30 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm o_60 = ATgetArgument(t, 0);
      if(((ATgetType(o_60) != AT_LIST) || !(ATisEmpty(o_60))))
        _fail(t);
      {
        ATerm p_60 = ATgetArgument(t, 1);
        if(((ATgetType(p_60) != AT_LIST) || !(ATisEmpty(p_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm y_30 (ATerm t)
{
  ATerm q_67 = NULL,r_67 = NULL,s_67 = NULL,t_67 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_60 = ATgetArgument(t, 0);
      if(((ATgetType(q_60) == AT_LIST) && !(ATisEmpty(q_60))))
        {
          q_67 = ATgetFirst((ATermList) q_60);
          s_67 = (ATerm) ATgetNext((ATermList) q_60);
        }
      else
        _fail(t);
      {
        ATerm r_60 = ATgetArgument(t, 1);
        if(((ATgetType(r_60) == AT_LIST) && !(ATisEmpty(r_60))))
          {
            r_67 = ATgetFirst((ATermList) r_60);
            t_67 = (ATerm) ATgetNext((ATermList) r_60);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, q_67, r_67), (ATerm) ATmakeAppl(sym__2, s_67, t_67));
  return(t);
}
ATerm z_30 (ATerm t)
{
  ATerm u_67 = NULL,v_67 = NULL;
  if(match_cons(t, sym__2))
    {
      u_67 = ATgetArgument(t, 0);
      v_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(v_67), u_67);
  return(t);
}
ATerm subs_args_0_0 (ATerm t)
{
  ATerm i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  i_67 = t;
  {
    ATerm s_60 = t;
    int t_60 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_60 = ATgetArgument(t, 0);
            ATerm v_60 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        LocalPopChoice(t_60);
        t = i_67;
      }
    else
      {
        t = s_60;
        {
          ATerm p_67 = NULL;
          if(match_cons(t, sym__3))
            {
              j_67 = ATgetArgument(t, 0);
              k_67 = ATgetArgument(t, 1);
              l_67 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = (ATerm) ATmakeAppl(sym__2, j_67, k_67);
          t = genzip_4_0(x_30, y_30, z_30, _id, t);
          p_67 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_67, l_67);
        }
      }
  }
  return(t);
}
ATerm substitute_2_0 (ATerm i_143 (ATerm), ATerm j_143 (ATerm), ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL;
  t = subs_args_0_0(t);
  if(match_cons(t, sym__2))
    {
      x_67 = ATgetArgument(t, 0);
      w_67 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_67;
  {
    ATerm a_31 (ATerm t)
    {
      ATerm l_19 = NULL;
      t = i_143(t);
      l_19 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_19, x_67);
      t = lookup_0_0(t);
      t = j_143(t);
      return(t);
    }
    t = alltd_1_0(a_31, t);
  }
  return(t);
}
ATerm c_31 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_60 = ATgetArgument(t, 0);
      if(((ATgetType(w_60) != AT_LIST) || !(ATisEmpty(w_60))))
        _fail(t);
      {
        ATerm z_60 = ATgetArgument(t, 1);
        if(((ATgetType(z_60) != AT_LIST) || !(ATisEmpty(z_60))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_31 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL,j_68 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_61 = ATgetArgument(t, 0);
      if(((ATgetType(c_61) == AT_LIST) && !(ATisEmpty(c_61))))
        {
          g_68 = ATgetFirst((ATermList) c_61);
          i_68 = (ATerm) ATgetNext((ATermList) c_61);
        }
      else
        _fail(t);
      {
        ATerm f_61 = ATgetArgument(t, 1);
        if(((ATgetType(f_61) == AT_LIST) && !(ATisEmpty(f_61))))
          {
            h_68 = ATgetFirst((ATermList) f_61);
            j_68 = (ATerm) ATgetNext((ATermList) f_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, g_68, h_68), (ATerm) ATmakeAppl(sym__2, i_68, j_68));
  return(t);
}
ATerm e_31 (ATerm t)
{
  ATerm k_68 = NULL,l_68 = NULL;
  if(match_cons(t, sym__2))
    {
      k_68 = ATgetArgument(t, 0);
      l_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(l_68), k_68);
  return(t);
}
ATerm f_31 (ATerm t)
{
  ATerm n_68 = NULL,p_68 = NULL,q_68 = NULL,r_68 = NULL,s_68 = NULL;
  if(match_cons(t, sym__2))
    {
      n_68 = ATgetArgument(t, 0);
      s_68 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_68;
  {
    ATerm g_61 = t;
    int h_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_SDef_3))
          {
            ATerm i_61 = ATgetArgument(t, 0);
            p_68 = ATgetArgument(t, 1);
            q_68 = ATgetArgument(t, 2);
          }
        else
          _fail(t);
        LocalPopChoice(h_61);
        t = (ATerm) ATmakeAppl(sym_SDef_3, s_68, p_68, q_68);
      }
    else
      {
        t = g_61;
        if(match_cons(t, sym_SDefT_4))
          {
            ATerm j_61 = ATgetArgument(t, 0);
            p_68 = ATgetArgument(t, 1);
            q_68 = ATgetArgument(t, 2);
            r_68 = ATgetArgument(t, 3);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_SDefT_4, s_68, p_68, q_68, r_68);
      }
  }
  return(t);
}
ATerm j_31 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm k_61 = ATgetArgument(t, 0);
      if(((ATgetType(k_61) != AT_LIST) || !(ATisEmpty(k_61))))
        _fail(t);
      {
        ATerm l_61 = ATgetArgument(t, 1);
        if(((ATgetType(l_61) != AT_LIST) || !(ATisEmpty(l_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_31 (ATerm t)
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL,d_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_61 = ATgetArgument(t, 0);
      if(((ATgetType(m_61) == AT_LIST) && !(ATisEmpty(m_61))))
        {
          a_69 = ATgetFirst((ATermList) m_61);
          c_69 = (ATerm) ATgetNext((ATermList) m_61);
        }
      else
        _fail(t);
      {
        ATerm n_61 = ATgetArgument(t, 1);
        if(((ATgetType(n_61) == AT_LIST) && !(ATisEmpty(n_61))))
          {
            b_69 = ATgetFirst((ATermList) n_61);
            d_69 = (ATerm) ATgetNext((ATermList) n_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, a_69, b_69), (ATerm) ATmakeAppl(sym__2, c_69, d_69));
  return(t);
}
ATerm l_31 (ATerm t)
{
  ATerm e_69 = NULL,f_69 = NULL;
  if(match_cons(t, sym__2))
    {
      e_69 = ATgetArgument(t, 0);
      f_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(f_69), e_69);
  return(t);
}
ATerm m_31 (ATerm t)
{
  ATerm h_69 = NULL,j_69 = NULL,k_69 = NULL;
  if(match_cons(t, sym__2))
    {
      h_69 = ATgetArgument(t, 0);
      k_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_69;
  {
    ATerm o_61 = t;
    int p_61 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm q_61 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(p_61);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_69);
      }
    else
      {
        t = o_61;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm u_61 = ATgetArgument(t, 0);
            j_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, k_69, j_69);
      }
  }
  return(t);
}
ATerm o_31 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm w_61 = ATgetArgument(t, 0);
      if(((ATgetType(w_61) != AT_LIST) || !(ATisEmpty(w_61))))
        _fail(t);
      {
        ATerm x_61 = ATgetArgument(t, 1);
        if(((ATgetType(x_61) != AT_LIST) || !(ATisEmpty(x_61))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_31 (ATerm t)
{
  ATerm o_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_61 = ATgetArgument(t, 0);
      if(((ATgetType(y_61) == AT_LIST) && !(ATisEmpty(y_61))))
        {
          o_69 = ATgetFirst((ATermList) y_61);
          r_69 = (ATerm) ATgetNext((ATermList) y_61);
        }
      else
        _fail(t);
      {
        ATerm z_61 = ATgetArgument(t, 1);
        if(((ATgetType(z_61) == AT_LIST) && !(ATisEmpty(z_61))))
          {
            q_69 = ATgetFirst((ATermList) z_61);
            s_69 = (ATerm) ATgetNext((ATermList) z_61);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, o_69, q_69), (ATerm) ATmakeAppl(sym__2, r_69, s_69));
  return(t);
}
ATerm q_31 (ATerm t)
{
  ATerm t_69 = NULL,u_69 = NULL;
  if(match_cons(t, sym__2))
    {
      t_69 = ATgetArgument(t, 0);
      u_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_69), t_69);
  return(t);
}
ATerm r_31 (ATerm t)
{
  ATerm w_69 = NULL,y_69 = NULL,z_69 = NULL;
  if(match_cons(t, sym__2))
    {
      w_69 = ATgetArgument(t, 0);
      z_69 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_69;
  {
    ATerm a_62 = t;
    int e_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm g_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(e_62);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_69);
      }
    else
      {
        t = a_62;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm h_62 = ATgetArgument(t, 0);
            y_69 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_69, y_69);
      }
  }
  return(t);
}
ATerm u_31 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm i_62 = ATgetArgument(t, 0);
      if(((ATgetType(i_62) != AT_LIST) || !(ATisEmpty(i_62))))
        _fail(t);
      {
        ATerm j_62 = ATgetArgument(t, 1);
        if(((ATgetType(j_62) != AT_LIST) || !(ATisEmpty(j_62))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_31 (ATerm t)
{
  ATerm d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_62 = ATgetArgument(t, 0);
      if(((ATgetType(k_62) == AT_LIST) && !(ATisEmpty(k_62))))
        {
          d_70 = ATgetFirst((ATermList) k_62);
          f_70 = (ATerm) ATgetNext((ATermList) k_62);
        }
      else
        _fail(t);
      {
        ATerm o_62 = ATgetArgument(t, 1);
        if(((ATgetType(o_62) == AT_LIST) && !(ATisEmpty(o_62))))
          {
            e_70 = ATgetFirst((ATermList) o_62);
            g_70 = (ATerm) ATgetNext((ATermList) o_62);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_70, e_70), (ATerm) ATmakeAppl(sym__2, f_70, g_70));
  return(t);
}
ATerm x_31 (ATerm t)
{
  ATerm h_70 = NULL,i_70 = NULL;
  if(match_cons(t, sym__2))
    {
      h_70 = ATgetArgument(t, 0);
      i_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(i_70), h_70);
  return(t);
}
ATerm y_31 (ATerm t)
{
  ATerm k_70 = NULL,m_70 = NULL,n_70 = NULL;
  if(match_cons(t, sym__2))
    {
      k_70 = ATgetArgument(t, 0);
      n_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_70;
  {
    ATerm p_62 = t;
    int q_62 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm r_62 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(q_62);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_70);
      }
    else
      {
        t = p_62;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm t_62 = ATgetArgument(t, 0);
            m_70 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, n_70, m_70);
      }
  }
  return(t);
}
ATerm spaste_1_0 (ATerm x_146 (ATerm), ATerm t)
{
  ATerm u_62 = t;
  int v_62 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_31 (ATerm t)
      {
        ATerm r_19 = NULL,t_19 = NULL;
        r_19 = t;
        t = x_146(t);
        t_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_19, t_19);
        t = genzip_4_0(c_31, d_31, e_31, f_31, t);
        return(t);
      }
      t = Let_2_0(b_31, _id, t);
      ;
      LocalPopChoice(v_62);
    }
  else
    {
      t = u_62;
      {
        ATerm w_62 = t;
        int x_62 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_31 (ATerm t)
            {
              ATerm a_20 = NULL,c_20 = NULL;
              a_20 = t;
              t = x_146(t);
              c_20 = t;
              t = (ATerm) ATmakeAppl(sym__2, a_20, c_20);
              t = genzip_4_0(j_31, k_31, l_31, m_31, t);
              return(t);
            }
            t = SDef_3_0(_id, h_31, _id, t);
            ;
            LocalPopChoice(x_62);
          }
        else
          {
            t = w_62;
            {
              ATerm y_62 = t;
              int z_62 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_31 (ATerm t)
                  {
                    ATerm f_20 = NULL,h_20 = NULL;
                    f_20 = t;
                    t = x_146(t);
                    h_20 = t;
                    t = (ATerm) ATmakeAppl(sym__2, f_20, h_20);
                    t = genzip_4_0(o_31, p_31, q_31, r_31, t);
                    return(t);
                  }
                  t = SDefT_4_0(_id, n_31, _id, _id, t);
                  ;
                  LocalPopChoice(z_62);
                }
              else
                {
                  t = y_62;
                  {
                    ATerm a_63 = t;
                    int b_63 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm t_31 (ATerm t)
                        {
                          ATerm l_20 = NULL,q_20 = NULL;
                          l_20 = t;
                          t = x_146(t);
                          q_20 = t;
                          t = (ATerm) ATmakeAppl(sym__2, l_20, q_20);
                          t = genzip_4_0(u_31, v_31, x_31, y_31, t);
                          return(t);
                        }
                        t = RDefT_4_0(_id, t_31, _id, _id, t);
                        ;
                        LocalPopChoice(b_63);
                      }
                    else
                      {
                        t = a_63;
                        {
                          ATerm a_32 (ATerm t)
                          {
                            ATerm r_70 = NULL;
                            t = x_146(t);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                r_70 = ATgetFirst((ATermList) t);
                                {
                                  ATerm c_63 = (ATerm) ATgetNext((ATermList) t);
                                }
                              }
                            else
                              _fail(t);
                            t = r_70;
                            return(t);
                          }
                          t = Rec_2_0(a_32, _id, t);
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
ATerm Rec_2_0 (ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t)
{
  ATerm s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,v_10 = NULL,w_10 = NULL;
  x_70 = t;
  if(match_cons(t, sym_Rec_2))
    {
      t_70 = ATgetArgument(t, 0);
      u_70 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_70);
  s_70 = t;
  t = t_70;
  t = b_108(t);
  v_70 = t;
  t = u_70;
  t = c_108(t);
  w_70 = t;
  w_10 = t;
  t = (ATerm) ATmakeAppl(sym_Rec_2, v_70, w_70);
  v_10 = t;
  t = SSLsetAnnotations(v_10, s_70);
  return(t);
}
ATerm SDef_3_0 (ATerm t_109 (ATerm), ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm t)
{
  ATerm a_71 = NULL,d_71 = NULL,f_71 = NULL,g_71 = NULL,h_71 = NULL,i_71 = NULL,j_71 = NULL,k_71 = NULL,y_10 = NULL,z_10 = NULL;
  k_71 = t;
  if(match_cons(t, sym_SDef_3))
    {
      d_71 = ATgetArgument(t, 0);
      f_71 = ATgetArgument(t, 1);
      g_71 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_71);
  a_71 = t;
  t = d_71;
  t = t_109(t);
  h_71 = t;
  t = f_71;
  t = u_109(t);
  i_71 = t;
  t = g_71;
  t = v_109(t);
  j_71 = t;
  z_10 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, h_71, i_71, j_71);
  y_10 = t;
  t = SSLsetAnnotations(y_10, a_71);
  return(t);
}
ATerm Let_2_0 (ATerm e_107 (ATerm), ATerm f_107 (ATerm), ATerm t)
{
  ATerm q_71 = NULL,s_71 = NULL,t_71 = NULL,u_71 = NULL,v_71 = NULL,w_71 = NULL,a_11 = NULL,b_11 = NULL;
  w_71 = t;
  if(match_cons(t, sym_Let_2))
    {
      s_71 = ATgetArgument(t, 0);
      t_71 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_71);
  q_71 = t;
  t = s_71;
  t = e_107(t);
  u_71 = t;
  t = t_71;
  t = f_107(t);
  v_71 = t;
  b_11 = t;
  t = (ATerm) ATmakeAppl(sym_Let_2, u_71, v_71);
  a_11 = t;
  t = SSLsetAnnotations(a_11, q_71);
  return(t);
}
ATerm sboundin_3_0 (ATerm y_146 (ATerm), ATerm z_146 (ATerm), ATerm a_147 (ATerm), ATerm t)
{
  ATerm d_63 = t;
  int e_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Let_2_0(y_146, y_146, t);
      ;
      LocalPopChoice(e_63);
    }
  else
    {
      t = d_63;
      {
        ATerm f_63 = t;
        int g_63 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDef_3_0(a_147, a_147, y_146, t);
            ;
            LocalPopChoice(g_63);
          }
        else
          {
            t = f_63;
            {
              ATerm h_63 = t;
              int i_63 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SDefT_4_0(a_147, a_147, a_147, y_146, t);
                  ;
                  LocalPopChoice(i_63);
                }
              else
                {
                  t = h_63;
                  t = Rec_2_0(a_147, y_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm c_32 (ATerm t)
{
  ATerm c_72 = NULL;
  ATerm j_63 = t;
  int k_63 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_SDef_3))
        {
          c_72 = ATgetArgument(t, 0);
          {
            ATerm l_63 = ATgetArgument(t, 1);
          }
          {
            ATerm m_63 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      LocalPopChoice(k_63);
      t = c_72;
    }
  else
    {
      t = j_63;
      if(match_cons(t, sym_SDefT_4))
        {
          c_72 = ATgetArgument(t, 0);
          {
            ATerm n_63 = ATgetArgument(t, 1);
          }
          {
            ATerm o_63 = ATgetArgument(t, 2);
          }
          {
            ATerm p_63 = ATgetArgument(t, 3);
          }
        }
      else
        _fail(t);
      t = c_72;
    }
  return(t);
}
ATerm Bind1_0_0 (ATerm t)
{
  ATerm a_72 = NULL;
  if(match_cons(t, sym_Let_2))
    {
      a_72 = ATgetArgument(t, 0);
      {
        ATerm q_63 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = a_72;
  t = map_1_0(c_32, t);
  return(t);
}
ATerm SVar_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,c_11 = NULL,d_11 = NULL;
  l_72 = t;
  if(match_cons(t, sym_SVar_1))
    {
      j_72 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_72);
  i_72 = t;
  t = j_72;
  t = d_107(t);
  k_72 = t;
  d_11 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, k_72);
  c_11 = t;
  t = SSLsetAnnotations(c_11, i_72);
  return(t);
}
ATerm DistBinding_2_0 (ATerm k_144 (ATerm), ATerm l_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm o_72 = NULL,p_72 = NULL,q_72 = NULL;
  if(match_cons(t, sym__3))
    {
      o_72 = ATgetArgument(t, 0);
      p_72 = ATgetArgument(t, 1);
      q_72 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = o_72;
  {
    ATerm d_32 (ATerm t)
    {
      ATerm r_72 = NULL;
      r_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_72, q_72);
      t = k_144(t);
      return(t);
    }
    ATerm f_32 (ATerm t)
    {
      ATerm s_72 = NULL;
      s_72 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_72, p_72);
      t = k_144(t);
      return(t);
    }
    t = l_144(d_32, f_32, _id, t);
  }
  return(t);
}
ATerm g_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_63 = ATgetArgument(t, 0);
      if(((ATgetType(r_63) != AT_LIST) || !(ATisEmpty(r_63))))
        _fail(t);
      {
        ATerm s_63 = ATgetArgument(t, 1);
        if(((ATgetType(s_63) != AT_LIST) || !(ATisEmpty(s_63))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_32 (ATerm t)
{
  ATerm b_73 = NULL,c_73 = NULL,d_73 = NULL,e_73 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_63 = ATgetArgument(t, 0);
      if(((ATgetType(t_63) == AT_LIST) && !(ATisEmpty(t_63))))
        {
          b_73 = ATgetFirst((ATermList) t_63);
          d_73 = (ATerm) ATgetNext((ATermList) t_63);
        }
      else
        _fail(t);
      {
        ATerm u_63 = ATgetArgument(t, 1);
        if(((ATgetType(u_63) == AT_LIST) && !(ATisEmpty(u_63))))
          {
            c_73 = ATgetFirst((ATermList) u_63);
            e_73 = (ATerm) ATgetNext((ATermList) u_63);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, b_73, c_73), (ATerm) ATmakeAppl(sym__2, d_73, e_73));
  return(t);
}
ATerm i_32 (ATerm t)
{
  ATerm f_73 = NULL,g_73 = NULL;
  if(match_cons(t, sym__2))
    {
      f_73 = ATgetArgument(t, 0);
      g_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(g_73), f_73);
  return(t);
}
ATerm RnBinding_2_0 (ATerm e_144 (ATerm), ATerm f_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm u_72 = NULL,v_72 = NULL,w_72 = NULL,x_72 = NULL,y_72 = NULL,z_72 = NULL,a_73 = NULL;
  if(match_cons(t, sym__2))
    {
      u_72 = ATgetArgument(t, 0);
      v_72 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_72;
  t = e_144(t);
  w_72 = t;
  t = map_1_0(new_0_0, t);
  x_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_72, x_72);
  t = genzip_4_0(g_32, h_32, i_32, _id, t);
  y_72 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_72, v_72);
  {
    ATerm v_63 = t;
    int w_63 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_63 = ATgetArgument(t, 0);
            ATerm y_63 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_72;
        {
          ATerm j_32 (ATerm t)
          {
            t = v_72;
            return(t);
          }
          t = at_end_1_0(j_32, t);
        }
        ;
        LocalPopChoice(w_63);
      }
    else
      {
        t = v_63;
        {
          ATerm z_20 = NULL,f_11 = NULL,g_11 = NULL;
          g_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_72, v_72);
          f_11 = t;
          t = SSL_explode_term(f_11);
          if(match_cons(t, sym__2))
            {
              ATerm z_63 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) z_63) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              z_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_20;
          t = concat_0_0(t);
        }
      }
    z_72 = t;
    t = u_72;
    {
      ATerm k_32 (ATerm t)
      {
        t = x_72;
        return(t);
      }
      t = f_144(k_32, t);
      a_73 = t;
      t = (ATerm) ATmakeAppl(sym__3, a_73, v_72, z_72);
    }
  }
  return(t);
}
ATerm lookup_0_0 (ATerm t)
{
  ATerm n_73 = NULL,o_73 = NULL,q_73 = NULL,r_73 = NULL,s_73 = NULL,t_73 = NULL;
  if(match_cons(t, sym__2))
    {
      q_73 = ATgetArgument(t, 0);
      r_73 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_73;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_73 = ATgetFirst((ATermList) t);
      t_73 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = s_73;
  if(match_cons(t, sym__2))
    {
      n_73 = ATgetArgument(t, 0);
      o_73 = ATgetArgument(t, 1);
      {
        ATerm a_64 = t;
        int b_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_73;
            if((q_73 != t))
              {
                _fail(t);
              }
            t = o_73;
            ;
            LocalPopChoice(b_64);
          }
        else
          {
            t = a_64;
            t = (ATerm) ATmakeAppl(sym__2, q_73, t_73);
            t = lookup_0_0(t);
          }
      }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, q_73, t_73);
      t = lookup_0_0(t);
    }
  return(t);
}
ATerm env_alltd_1_0 (ATerm p_133 (ATerm), ATerm t)
{
  ATerm i_74 (ATerm t)
  {
    ATerm c_64 = t;
    int e_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_133(t);
        ;
        LocalPopChoice(e_64);
      }
    else
      {
        t = c_64;
        {
          ATerm f_21 = NULL,g_21 = NULL;
          ATerm l_32 (ATerm t)
          {
            ATerm h_21 = NULL;
            h_21 = t;
            t = (ATerm) ATmakeAppl(sym__2, h_21, not_null(g_21));
            t = i_74(t);
            return(t);
          }
          if(match_cons(t, sym__2))
            {
              if(((f_21 != NULL) && (f_21 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_21 = ATgetArgument(t, 0);
              if(((g_21 != NULL) && (g_21 != ATgetArgument(t, 1))))
                _fail(ATgetArgument(t, 1));
              else
                g_21 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = not_null(f_21);
          t = SRTS_all(l_32, t);
        }
      }
    return(t);
  }
  t = i_74(t);
  return(t);
}
ATerm rename_4_0 (ATerm z_143 (ATerm (ATerm), ATerm), ATerm a_144 (ATerm), ATerm b_144 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm c_144 (ATerm (ATerm), ATerm), ATerm t)
{
  ATerm j_74 = NULL;
  j_74 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_74, (ATerm) ATempty);
  {
    ATerm k_74 (ATerm t)
    {
      ATerm m_32 (ATerm t)
      {
        ATerm h_64 = t;
        int i_64 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_21 = NULL,k_21 = NULL;
            ATerm n_32 (ATerm t)
            {
              ATerm m_21 = NULL;
              m_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, m_21, not_null(k_21));
              t = lookup_0_0(t);
              return(t);
            }
            if(match_cons(t, sym__2))
              {
                if(((j_21 != NULL) && (j_21 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  j_21 = ATgetArgument(t, 0);
                if(((k_21 != NULL) && (k_21 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  k_21 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = not_null(j_21);
            t = z_143(n_32, t);
            ;
            LocalPopChoice(i_64);
          }
        else
          {
            t = h_64;
            t = RnBinding_2_0(a_144, c_144, t);
            t = DistBinding_2_0(k_74, b_144, t);
          }
        return(t);
      }
      t = env_alltd_1_0(m_32, t);
      return(t);
    }
    t = k_74(t);
  }
  return(t);
}
ATerm p_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm j_64 = ATgetArgument(t, 0);
      if(((ATgetType(j_64) != AT_LIST) || !(ATisEmpty(j_64))))
        _fail(t);
      {
        ATerm k_64 = ATgetArgument(t, 1);
        if(((ATgetType(k_64) != AT_LIST) || !(ATisEmpty(k_64))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_32 (ATerm t)
{
  ATerm p_74 = NULL,q_74 = NULL,r_74 = NULL,s_74 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_64 = ATgetArgument(t, 0);
      if(((ATgetType(l_64) == AT_LIST) && !(ATisEmpty(l_64))))
        {
          p_74 = ATgetFirst((ATermList) l_64);
          r_74 = (ATerm) ATgetNext((ATermList) l_64);
        }
      else
        _fail(t);
      {
        ATerm m_64 = ATgetArgument(t, 1);
        if(((ATgetType(m_64) == AT_LIST) && !(ATisEmpty(m_64))))
          {
            q_74 = ATgetFirst((ATermList) m_64);
            s_74 = (ATerm) ATgetNext((ATermList) m_64);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, p_74, q_74), (ATerm) ATmakeAppl(sym__2, r_74, s_74));
  return(t);
}
ATerm r_32 (ATerm t)
{
  ATerm t_74 = NULL,u_74 = NULL;
  if(match_cons(t, sym__2))
    {
      t_74 = ATgetArgument(t, 0);
      u_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(u_74), t_74);
  return(t);
}
ATerm s_32 (ATerm t)
{
  ATerm w_74 = NULL,y_74 = NULL,z_74 = NULL;
  if(match_cons(t, sym__2))
    {
      w_74 = ATgetArgument(t, 0);
      z_74 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_74;
  {
    ATerm n_64 = t;
    int o_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm p_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(o_64);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_74);
      }
    else
      {
        t = n_64;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm q_64 = ATgetArgument(t, 0);
            y_74 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, z_74, y_74);
      }
  }
  return(t);
}
ATerm u_32 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm r_64 = ATgetArgument(t, 0);
      if(((ATgetType(r_64) != AT_LIST) || !(ATisEmpty(r_64))))
        _fail(t);
      {
        ATerm s_64 = ATgetArgument(t, 1);
        if(((ATgetType(s_64) != AT_LIST) || !(ATisEmpty(s_64))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_32 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,g_75 = NULL,h_75 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_64 = ATgetArgument(t, 0);
      if(((ATgetType(t_64) == AT_LIST) && !(ATisEmpty(t_64))))
        {
          d_75 = ATgetFirst((ATermList) t_64);
          g_75 = (ATerm) ATgetNext((ATermList) t_64);
        }
      else
        _fail(t);
      {
        ATerm u_64 = ATgetArgument(t, 1);
        if(((ATgetType(u_64) == AT_LIST) && !(ATisEmpty(u_64))))
          {
            e_75 = ATgetFirst((ATermList) u_64);
            h_75 = (ATerm) ATgetNext((ATermList) u_64);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, d_75, e_75), (ATerm) ATmakeAppl(sym__2, g_75, h_75));
  return(t);
}
ATerm w_32 (ATerm t)
{
  ATerm i_75 = NULL,j_75 = NULL;
  if(match_cons(t, sym__2))
    {
      i_75 = ATgetArgument(t, 0);
      j_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_75), i_75);
  return(t);
}
ATerm x_32 (ATerm t)
{
  ATerm l_75 = NULL,n_75 = NULL,o_75 = NULL;
  if(match_cons(t, sym__2))
    {
      l_75 = ATgetArgument(t, 0);
      o_75 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_75;
  {
    ATerm v_64 = t;
    int w_64 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym_DefaultVarDec_1))
          {
            ATerm x_64 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        LocalPopChoice(w_64);
        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_75);
      }
    else
      {
        t = v_64;
        if(match_cons(t, sym_VarDec_2))
          {
            ATerm y_64 = ATgetArgument(t, 0);
            n_75 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_75, n_75);
      }
  }
  return(t);
}
ATerm tpaste_1_0 (ATerm t_146 (ATerm), ATerm t)
{
  ATerm z_64 = t;
  int a_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(t_146, _id, t);
      ;
      LocalPopChoice(a_65);
    }
  else
    {
      t = z_64;
      {
        ATerm b_65 = t;
        int c_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_32 (ATerm t)
            {
              ATerm r_21 = NULL,t_21 = NULL;
              r_21 = t;
              t = t_146(t);
              t_21 = t;
              t = (ATerm) ATmakeAppl(sym__2, r_21, t_21);
              t = genzip_4_0(p_32, q_32, r_32, s_32, t);
              return(t);
            }
            t = SDefT_4_0(_id, _id, o_32, _id, t);
            ;
            LocalPopChoice(c_65);
          }
        else
          {
            t = b_65;
            {
              ATerm t_32 (ATerm t)
              {
                ATerm w_21 = NULL,y_21 = NULL;
                w_21 = t;
                t = t_146(t);
                y_21 = t;
                t = (ATerm) ATmakeAppl(sym__2, w_21, y_21);
                t = genzip_4_0(u_32, v_32, w_32, x_32, t);
                return(t);
              }
              t = RDefT_4_0(_id, _id, t_32, _id, t);
            }
          }
      }
    }
  return(t);
}
ATerm DynamicRules_1_0 (ATerm l_106 (ATerm), ATerm t)
{
  ATerm s_75 = NULL,t_75 = NULL,u_75 = NULL,v_75 = NULL,h_11 = NULL,i_11 = NULL;
  v_75 = t;
  if(match_cons(t, sym_DynamicRules_1))
    {
      t_75 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_75);
  s_75 = t;
  t = t_75;
  t = l_106(t);
  u_75 = t;
  i_11 = t;
  t = (ATerm) ATmakeAppl(sym_DynamicRules_1, u_75);
  h_11 = t;
  t = SSLsetAnnotations(h_11, s_75);
  return(t);
}
ATerm RDefT_4_0 (ATerm c_106 (ATerm), ATerm d_106 (ATerm), ATerm e_106 (ATerm), ATerm f_106 (ATerm), ATerm t)
{
  ATerm y_75 = NULL,z_75 = NULL,a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL,f_76 = NULL,g_76 = NULL,h_76 = NULL,j_11 = NULL,k_11 = NULL;
  h_76 = t;
  if(match_cons(t, sym_RDefT_4))
    {
      z_75 = ATgetArgument(t, 0);
      a_76 = ATgetArgument(t, 1);
      b_76 = ATgetArgument(t, 2);
      c_76 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_76);
  y_75 = t;
  t = z_75;
  t = c_106(t);
  d_76 = t;
  t = a_76;
  t = d_106(t);
  e_76 = t;
  t = b_76;
  t = e_106(t);
  f_76 = t;
  t = c_76;
  t = f_106(t);
  g_76 = t;
  k_11 = t;
  t = (ATerm) ATmakeAppl(sym_RDefT_4, d_76, e_76, f_76, g_76);
  j_11 = t;
  t = SSLsetAnnotations(j_11, y_75);
  return(t);
}
ATerm SDefT_4_0 (ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm), ATerm z_109 (ATerm), ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL,n_76 = NULL,o_76 = NULL,p_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL,l_11 = NULL,m_11 = NULL;
  v_76 = t;
  if(match_cons(t, sym_SDefT_4))
    {
      l_76 = ATgetArgument(t, 0);
      m_76 = ATgetArgument(t, 1);
      n_76 = ATgetArgument(t, 2);
      o_76 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_76);
  k_76 = t;
  t = l_76;
  t = w_109(t);
  p_76 = t;
  t = m_76;
  t = x_109(t);
  s_76 = t;
  t = n_76;
  t = y_109(t);
  t_76 = t;
  t = o_76;
  t = z_109(t);
  u_76 = t;
  m_11 = t;
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_76, s_76, t_76, u_76);
  l_11 = t;
  t = SSLsetAnnotations(l_11, k_76);
  return(t);
}
ATerm Scope_2_0 (ATerm o_107 (ATerm), ATerm p_107 (ATerm), ATerm t)
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL,b_77 = NULL,c_77 = NULL,d_77 = NULL,o_11 = NULL,p_11 = NULL;
  d_77 = t;
  if(match_cons(t, sym_Scope_2))
    {
      z_76 = ATgetArgument(t, 0);
      a_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_77);
  y_76 = t;
  t = z_76;
  t = o_107(t);
  b_77 = t;
  t = a_77;
  t = p_107(t);
  c_77 = t;
  p_11 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, b_77, c_77);
  o_11 = t;
  t = SSLsetAnnotations(o_11, y_76);
  return(t);
}
ATerm tboundin_3_0 (ATerm u_146 (ATerm), ATerm v_146 (ATerm), ATerm w_146 (ATerm), ATerm t)
{
  ATerm d_65 = t;
  int e_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Scope_2_0(w_146, u_146, t);
      ;
      LocalPopChoice(e_65);
    }
  else
    {
      t = d_65;
      {
        ATerm f_65 = t;
        int g_65 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SDefT_4_0(w_146, w_146, w_146, u_146, t);
            ;
            LocalPopChoice(g_65);
          }
        else
          {
            t = f_65;
            {
              ATerm h_65 = t;
              int i_65 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDefT_4_0(w_146, w_146, w_146, u_146, t);
                  ;
                  LocalPopChoice(i_65);
                }
              else
                {
                  t = h_65;
                  t = DynamicRules_1_0(u_146, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm y_32 (ATerm t)
{
  ATerm l_77 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      l_77 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, l_77);
  return(t);
}
ATerm z_32 (ATerm t)
{
  ATerm j_65 = t;
  int k_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(k_65);
    }
  else
    {
      t = j_65;
      {
        ATerm n_77 = NULL,p_77 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            n_77 = ATgetArgument(t, 0);
            t = n_77;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm l_65 = t;
            int m_65 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm n_65 = ATgetArgument(t, 0);
                    ATerm o_65 = ATgetArgument(t, 1);
                    p_77 = ATgetArgument(t, 2);
                    {
                      ATerm p_65 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(m_65);
                t = p_77;
                t = map_1_0(a_33, t);
              }
            else
              {
                t = l_65;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm q_65 = ATgetArgument(t, 0);
                    ATerm r_65 = ATgetArgument(t, 1);
                    p_77 = ATgetArgument(t, 2);
                    {
                      ATerm s_65 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = p_77;
                t = map_1_0(b_33, t);
              }
          }
      }
    }
  return(t);
}
ATerm a_33 (ATerm t)
{
  ATerm v_77 = NULL;
  ATerm u_65 = t;
  int v_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          v_77 = ATgetArgument(t, 0);
          {
            ATerm w_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(v_65);
      t = v_77;
    }
  else
    {
      t = u_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          v_77 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = v_77;
    }
  return(t);
}
ATerm b_33 (ATerm t)
{
  ATerm d_78 = NULL;
  ATerm x_65 = t;
  int y_65 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          d_78 = ATgetArgument(t, 0);
          {
            ATerm z_65 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_65);
      t = d_78;
    }
  else
    {
      t = x_65;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          d_78 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = d_78;
    }
  return(t);
}
ATerm tvars_0_0 (ATerm t)
{
  t = free_vars_3_0(y_32, z_32, tboundin_3_0, t);
  return(t);
}
ATerm union_1_0 (ATerm d_126 (ATerm), ATerm t)
{
  ATerm g_78 = NULL,h_78 = NULL;
  if(match_cons(t, sym__2))
    {
      g_78 = ATgetArgument(t, 0);
      h_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_78;
  {
    ATerm i_78 (ATerm t)
    {
      ATerm b_66 = t;
      int c_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = h_78;
          ;
          LocalPopChoice(c_66);
        }
      else
        {
          t = b_66;
          {
            ATerm d_66 = t;
            int e_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_22 = NULL,c_22 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    b_22 = ATgetFirst((ATermList) t);
                    c_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = h_78;
                {
                  ATerm c_33 (ATerm t)
                  {
                    ATerm d_22 = NULL;
                    d_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_22, d_22);
                    t = d_126(t);
                    return(t);
                  }
                  t = fetch_1_0(c_33, t);
                  t = c_22;
                  t = i_78(t);
                }
                ;
                LocalPopChoice(e_66);
              }
            else
              {
                t = d_66;
                t = Cons_2_0(_id, i_78, t);
              }
          }
        }
      return(t);
    }
    t = i_78(t);
  }
  return(t);
}
ATerm foldr_3_0 (ATerm r_128 (ATerm), ATerm s_128 (ATerm), ATerm t_128 (ATerm), ATerm t)
{
  ATerm f_66 = t;
  int g_66 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = r_128(t);
      ;
      LocalPopChoice(g_66);
    }
  else
    {
      t = f_66;
      {
        ATerm l_78 = NULL,m_78 = NULL,p_78 = NULL,r_78 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_78 = ATgetFirst((ATermList) t);
            m_78 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_78;
        t = t_128(t);
        p_78 = t;
        t = m_78;
        t = foldr_3_0(r_128, s_128, t_128, t);
        r_78 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_78, r_78);
        t = s_128(t);
      }
    }
  return(t);
}
ATerm diff_1_0 (ATerm y_125 (ATerm), ATerm t)
{
  ATerm x_78 = NULL,y_78 = NULL;
  if(match_cons(t, sym__2))
    {
      x_78 = ATgetArgument(t, 0);
      y_78 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_78;
  {
    ATerm z_78 (ATerm t)
    {
      ATerm h_66 = t;
      int i_66 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(i_66);
        }
      else
        {
          t = h_66;
          {
            ATerm j_66 = t;
            int k_66 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_22 = NULL,h_22 = NULL;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    g_22 = ATgetFirst((ATermList) t);
                    h_22 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = y_78;
                {
                  ATerm d_33 (ATerm t)
                  {
                    ATerm i_22 = NULL;
                    i_22 = t;
                    t = (ATerm) ATmakeAppl(sym__2, g_22, i_22);
                    t = y_125(t);
                    return(t);
                  }
                  t = fetch_1_0(d_33, t);
                  t = h_22;
                  t = z_78(t);
                }
                ;
                LocalPopChoice(k_66);
              }
            else
              {
                t = j_66;
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
ATerm e_33 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm l_66 = ATgetArgument(t, 0);
      if(((ATgetType(l_66) != AT_LIST) || !(ATisEmpty(l_66))))
        _fail(t);
      {
        ATerm m_66 = ATgetArgument(t, 1);
        if(((ATgetType(m_66) != AT_LIST) || !(ATisEmpty(m_66))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_33 (ATerm t)
{
  ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,p_79 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_66 = ATgetArgument(t, 0);
      if(((ATgetType(n_66) == AT_LIST) && !(ATisEmpty(n_66))))
        {
          i_79 = ATgetFirst((ATermList) n_66);
          k_79 = (ATerm) ATgetNext((ATermList) n_66);
        }
      else
        _fail(t);
      {
        ATerm o_66 = ATgetArgument(t, 1);
        if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
          {
            j_79 = ATgetFirst((ATermList) o_66);
            p_79 = (ATerm) ATgetNext((ATermList) o_66);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_79, j_79), (ATerm) ATmakeAppl(sym__2, k_79, p_79));
  return(t);
}
ATerm g_33 (ATerm t)
{
  ATerm q_79 = NULL,r_79 = NULL;
  if(match_cons(t, sym__2))
    {
      q_79 = ATgetArgument(t, 0);
      r_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_79), q_79);
  return(t);
}
ATerm UfDecompose_0_0 (ATerm t)
{
  ATerm b_79 = NULL,c_79 = NULL,d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL,h_79 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm p_66 = ATgetFirst((ATermList) t);
      if(match_cons(p_66, sym__2))
        {
          b_79 = ATgetArgument(p_66, 0);
          c_79 = ATgetArgument(p_66, 1);
        }
      else
        _fail(t);
      d_79 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_explode_term(c_79);
  if(match_cons(t, sym__2))
    {
      e_79 = ATgetArgument(t, 0);
      f_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_explode_term(b_79);
  if(match_cons(t, sym__2))
    {
      if((e_79 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      g_79 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_79, f_79);
  t = genzip_4_0(e_33, f_33, g_33, _id, t);
  h_79 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_79, d_79);
  {
    ATerm q_66 = t;
    int r_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_66 = ATgetArgument(t, 0);
            ATerm t_66 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_79;
        {
          ATerm h_33 (ATerm t)
          {
            t = d_79;
            return(t);
          }
          t = at_end_1_0(h_33, t);
        }
        ;
        LocalPopChoice(r_66);
      }
    else
      {
        t = q_66;
        {
          ATerm o_22 = NULL,q_11 = NULL,s_11 = NULL;
          s_11 = t;
          t = (ATerm) ATmakeAppl(sym__2, h_79, d_79);
          q_11 = t;
          t = SSL_explode_term(q_11);
          if(match_cons(t, sym__2))
            {
              ATerm w_66 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) w_66) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_22 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_22;
          t = concat_0_0(t);
        }
      }
  }
  return(t);
}
ATerm while_not_2_0 (ATerm i_131 (ATerm), ATerm j_131 (ATerm), ATerm t)
{
  ATerm v_79 (ATerm t)
  {
    ATerm x_66 = t;
    int y_66 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_131(t);
        ;
        LocalPopChoice(y_66);
      }
    else
      {
        t = x_66;
        t = j_131(t);
        t = v_79(t);
      }
    return(t);
  }
  t = v_79(t);
  return(t);
}
ATerm for_3_0 (ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm t)
{
  t = l_131(t);
  t = while_not_2_0(m_131, n_131, t);
  return(t);
}
ATerm i_33 (ATerm t)
{
  ATerm a_80 = NULL;
  a_80 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, a_80);
  return(t);
}
ATerm j_33 (ATerm t)
{
  t = _2_0(_id, l_33, t);
  return(t);
}
ATerm k_33 (ATerm t)
{
  ATerm b_67 = t;
  int e_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = _2_0(_id, m_33, t);
      ;
      LocalPopChoice(e_67);
    }
  else
    {
      t = b_67;
      {
        ATerm p_80 = NULL,r_80 = NULL,s_80 = NULL,t_80 = NULL;
        if(match_cons(t, sym__2))
          {
            p_80 = ATgetArgument(t, 0);
            r_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = r_80;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_80 = ATgetFirst((ATermList) t);
            t_80 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(p_80), s_80), t_80);
      }
    }
  return(t);
}
ATerm l_33 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm m_33 (ATerm t)
{
  ATerm f_67 = t;
  int g_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_80 = ATgetFirst((ATermList) t);
          k_80 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_80;
      if(match_cons(t, sym__2))
        {
          i_80 = ATgetArgument(t, 0);
          j_80 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_80;
      if((i_80 != t))
        {
          _fail(t);
        }
      t = k_80;
      ;
      LocalPopChoice(g_67);
    }
  else
    {
      t = f_67;
      t = UfDecompose_0_0(t);
    }
  return(t);
}
ATerm n_33 (ATerm t)
{
  ATerm x_80 = NULL;
  if(match_cons(t, sym__2))
    {
      x_80 = ATgetArgument(t, 0);
      if((x_80 != ATgetArgument(t, 1)))
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
  ATerm h_67 = t;
  int m_67 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = for_3_0(i_33, j_33, k_33, t);
      ;
      LocalPopChoice(m_67);
    }
  else
    {
      t = h_67;
      t = diff_1_0(n_33, t);
    }
  return(t);
}
ATerm p_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_33 (ATerm t)
{
  t = union_1_0(s_33, t);
  return(t);
}
ATerm s_33 (ATerm t)
{
  ATerm g_23 = NULL;
  if(match_cons(t, sym__2))
    {
      g_23 = ATgetArgument(t, 0);
      if((g_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm t_33 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_33 (ATerm t)
{
  t = union_1_0(v_33, t);
  return(t);
}
ATerm v_33 (ATerm t)
{
  ATerm p_23 = NULL;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      if((p_23 != ATgetArgument(t, 1)))
        {
          _fail(ATgetArgument(t, 1));
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm free_vars_3_0 (ATerm p_145 (ATerm), ATerm q_145 (ATerm), ATerm r_145 (ATerm (ATerm), ATerm (ATerm), ATerm (ATerm), ATerm), ATerm t)
{
  ATerm d_81 (ATerm t)
  {
    ATerm n_67 = t;
    int o_67 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_145(t);
        ;
        LocalPopChoice(o_67);
      }
    else
      {
        t = n_67;
        {
          ATerm y_67 = t;
          int z_67 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_80 = NULL,a_81 = NULL,w_22 = NULL,y_22 = NULL;
              y_80 = t;
              t = q_145(t);
              a_81 = t;
              t = y_80;
              {
                ATerm o_33 (ATerm t)
                {
                  ATerm q_22 = NULL;
                  t = d_81(t);
                  q_22 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_22, a_81);
                  t = diff_0_0(t);
                  return(t);
                }
                t = r_145(o_33, d_81, p_33, t);
                w_22 = t;
                t = SSL_explode_term(w_22);
                if(match_cons(t, sym__2))
                  {
                    ATerm a_68 = ATgetArgument(t, 0);
                    y_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = y_22;
                t = foldr_3_0(q_33, r_33, _id, t);
              }
              ;
              LocalPopChoice(z_67);
            }
          else
            {
              t = y_67;
              {
                ATerm h_23 = NULL,i_23 = NULL;
                h_23 = t;
                t = SSL_explode_term(h_23);
                if(match_cons(t, sym__2))
                  {
                    ATerm b_68 = ATgetArgument(t, 0);
                    i_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = i_23;
                t = foldr_3_0(t_33, u_33, d_81, t);
              }
            }
        }
      }
    return(t);
  }
  t = d_81(t);
  return(t);
}
ATerm w_33 (ATerm t)
{
  ATerm s_81 = NULL;
  if(match_cons(t, sym_Var_1))
    {
      s_81 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATempty, s_81);
  return(t);
}
ATerm x_33 (ATerm t)
{
  ATerm c_68 = t;
  int d_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(d_68);
    }
  else
    {
      t = c_68;
      {
        ATerm u_81 = NULL,w_81 = NULL;
        if(match_cons(t, sym_DynamicRules_1))
          {
            u_81 = ATgetArgument(t, 0);
            t = u_81;
            t = tvars_0_0(t);
          }
        else
          {
            ATerm e_68 = t;
            int f_68 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_SDefT_4))
                  {
                    ATerm m_68 = ATgetArgument(t, 0);
                    ATerm o_68 = ATgetArgument(t, 1);
                    w_81 = ATgetArgument(t, 2);
                    {
                      ATerm t_68 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                LocalPopChoice(f_68);
                t = w_81;
                t = map_1_0(y_33, t);
              }
            else
              {
                t = e_68;
                if(match_cons(t, sym_RDefT_4))
                  {
                    ATerm u_68 = ATgetArgument(t, 0);
                    ATerm v_68 = ATgetArgument(t, 1);
                    w_81 = ATgetArgument(t, 2);
                    {
                      ATerm w_68 = ATgetArgument(t, 3);
                    }
                  }
                else
                  _fail(t);
                t = w_81;
                t = map_1_0(z_33, t);
              }
          }
      }
    }
  return(t);
}
ATerm y_33 (ATerm t)
{
  ATerm c_82 = NULL;
  ATerm x_68 = t;
  int y_68 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          c_82 = ATgetArgument(t, 0);
          {
            ATerm z_68 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(y_68);
      t = c_82;
    }
  else
    {
      t = x_68;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          c_82 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = c_82;
    }
  return(t);
}
ATerm z_33 (ATerm t)
{
  ATerm i_82 = NULL;
  ATerm g_69 = t;
  int i_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          i_82 = ATgetArgument(t, 0);
          {
            ATerm l_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_69);
      t = i_82;
    }
  else
    {
      t = g_69;
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
ATerm Bind0_0_0 (ATerm t)
{
  ATerm j_81 = NULL,p_81 = NULL;
  if(match_cons(t, sym_LRule_1))
    {
      p_81 = ATgetArgument(t, 0);
      t = p_81;
      if(match_cons(t, sym_Rule_3))
        {
          j_81 = ATgetArgument(t, 0);
          {
            ATerm m_69 = ATgetArgument(t, 1);
          }
          {
            ATerm n_69 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = j_81;
      t = free_vars_3_0(w_33, x_33, tboundin_3_0, t);
    }
  else
    {
      if(match_cons(t, sym_Scope_2))
        {
          p_81 = ATgetArgument(t, 0);
          {
            ATerm p_69 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      t = p_81;
    }
  return(t);
}
ATerm Var_1_0 (ATerm u_103 (ATerm), ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,v_82 = NULL,t_11 = NULL,u_11 = NULL;
  v_82 = t;
  if(match_cons(t, sym_Var_1))
    {
      o_82 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_82);
  n_82 = t;
  t = o_82;
  t = u_103(t);
  p_82 = t;
  u_11 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, p_82);
  t_11 = t;
  t = SSLsetAnnotations(t_11, n_82);
  return(t);
}
ATerm a_34 (ATerm t)
{
  ATerm v_69 = t;
  int x_69 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind0_0_0(t);
      ;
      LocalPopChoice(x_69);
    }
  else
    {
      t = v_69;
      {
        ATerm o_83 = NULL;
        ATerm a_70 = t;
        int b_70 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDefT_4))
              {
                ATerm c_70 = ATgetArgument(t, 0);
                ATerm j_70 = ATgetArgument(t, 1);
                o_83 = ATgetArgument(t, 2);
                {
                  ATerm l_70 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            LocalPopChoice(b_70);
            t = o_83;
            t = map_1_0(b_34, t);
          }
        else
          {
            t = a_70;
            if(match_cons(t, sym_RDefT_4))
              {
                ATerm o_70 = ATgetArgument(t, 0);
                ATerm p_70 = ATgetArgument(t, 1);
                o_83 = ATgetArgument(t, 2);
                {
                  ATerm q_70 = ATgetArgument(t, 3);
                }
              }
            else
              _fail(t);
            t = o_83;
            t = map_1_0(c_34, t);
          }
      }
    }
  return(t);
}
ATerm b_34 (ATerm t)
{
  ATerm j_84 = NULL;
  ATerm y_70 = t;
  int z_70 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          j_84 = ATgetArgument(t, 0);
          {
            ATerm b_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(z_70);
      t = j_84;
    }
  else
    {
      t = y_70;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          j_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = j_84;
    }
  return(t);
}
ATerm c_34 (ATerm t)
{
  ATerm p_84 = NULL;
  ATerm c_71 = t;
  int e_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          p_84 = ATgetArgument(t, 0);
          {
            ATerm l_71 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(e_71);
      t = p_84;
    }
  else
    {
      t = c_71;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          p_84 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = p_84;
    }
  return(t);
}
ATerm d_34 (ATerm t)
{
  ATerm m_71 = t;
  int n_71 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Bind1_0_0(t);
      ;
      LocalPopChoice(n_71);
    }
  else
    {
      t = m_71;
      {
        ATerm t_84 = NULL,u_84 = NULL;
        ATerm o_71 = t;
        int p_71 = stack_ptr;
        if((PushChoice() == 0))
          {
            if(match_cons(t, sym_SDef_3))
              {
                ATerm r_71 = ATgetArgument(t, 0);
                u_84 = ATgetArgument(t, 1);
                {
                  ATerm x_71 = ATgetArgument(t, 2);
                }
              }
            else
              _fail(t);
            LocalPopChoice(p_71);
            t = u_84;
            t = map_1_0(e_34, t);
          }
        else
          {
            t = o_71;
            {
              ATerm y_71 = t;
              int z_71 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Rec_2))
                    {
                      t_84 = ATgetArgument(t, 0);
                      {
                        ATerm b_72 = ATgetArgument(t, 1);
                      }
                    }
                  else
                    _fail(t);
                  LocalPopChoice(z_71);
                  t = (ATerm) ATinsert(ATempty, t_84);
                }
              else
                {
                  t = y_71;
                  {
                    ATerm d_72 = t;
                    int e_72 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_SDefT_4))
                          {
                            ATerm f_72 = ATgetArgument(t, 0);
                            u_84 = ATgetArgument(t, 1);
                            {
                              ATerm g_72 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm h_72 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        LocalPopChoice(e_72);
                        t = u_84;
                        t = map_1_0(f_34, t);
                      }
                    else
                      {
                        t = d_72;
                        if(match_cons(t, sym_RDefT_4))
                          {
                            ATerm m_72 = ATgetArgument(t, 0);
                            u_84 = ATgetArgument(t, 1);
                            {
                              ATerm n_72 = ATgetArgument(t, 2);
                            }
                            {
                              ATerm t_72 = ATgetArgument(t, 3);
                            }
                          }
                        else
                          _fail(t);
                        t = u_84;
                        t = map_1_0(g_34, t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm e_34 (ATerm t)
{
  ATerm a_85 = NULL;
  ATerm h_73 = t;
  int i_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          a_85 = ATgetArgument(t, 0);
          {
            ATerm j_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(i_73);
      t = a_85;
    }
  else
    {
      t = h_73;
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
ATerm f_34 (ATerm t)
{
  ATerm h_85 = NULL;
  ATerm k_73 = t;
  int l_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          h_85 = ATgetArgument(t, 0);
          {
            ATerm m_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(l_73);
      t = h_85;
    }
  else
    {
      t = k_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          h_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = h_85;
    }
  return(t);
}
ATerm g_34 (ATerm t)
{
  ATerm n_85 = NULL;
  ATerm p_73 = t;
  int u_73 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_cons(t, sym_VarDec_2))
        {
          n_85 = ATgetArgument(t, 0);
          {
            ATerm v_73 = ATgetArgument(t, 1);
          }
        }
      else
        _fail(t);
      LocalPopChoice(u_73);
      t = n_85;
    }
  else
    {
      t = p_73;
      if(match_cons(t, sym_DefaultVarDec_1))
        {
          n_85 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = n_85;
    }
  return(t);
}
ATerm strename_0_0 (ATerm t)
{
  t = rename_4_0(Var_1_0, a_34, tboundin_3_0, tpaste_1_0, t);
  t = rename_4_0(SVar_1_0, d_34, sboundin_3_0, spaste_1_0, t);
  return(t);
}
ATerm h_34 (ATerm t)
{
  ATerm z_87 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      z_87 = ATgetArgument(t, 0);
      {
        ATerm w_73 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = z_87;
  return(t);
}
ATerm i_34 (ATerm t)
{
  ATerm a_88 = NULL,c_88 = NULL,d_88 = NULL,e_88 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      c_88 = ATgetArgument(t, 0);
      e_88 = ATgetArgument(t, 1);
      a_88 = ATgetArgument(t, 2);
      t = c_88;
      if(match_cons(t, sym_SVar_1))
        {
          d_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = a_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_88;
    }
  else
    {
      if(match_cons(t, sym_Call_2))
        {
          c_88 = ATgetArgument(t, 0);
          e_88 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_88;
      if(match_cons(t, sym_SVar_1))
        {
          d_88 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = e_88;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = d_88;
    }
  return(t);
}
ATerm j_34 (ATerm t)
{
  ATerm h_88 = NULL;
  if(match_cons(t, sym_VarDec_2))
    {
      h_88 = ATgetArgument(t, 0);
      {
        ATerm x_73 = ATgetArgument(t, 1);
      }
    }
  else
    _fail(t);
  t = h_88;
  return(t);
}
ATerm k_34 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm y_73 = ATgetArgument(t, 0);
      if(((ATgetType(y_73) != AT_LIST) || !(ATisEmpty(y_73))))
        _fail(t);
      {
        ATerm z_73 = ATgetArgument(t, 1);
        if(((ATgetType(z_73) != AT_LIST) || !(ATisEmpty(z_73))))
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_34 (ATerm t)
{
  ATerm i_88 = NULL,j_88 = NULL,k_88 = NULL,t_88 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_74 = ATgetArgument(t, 0);
      if(((ATgetType(a_74) == AT_LIST) && !(ATisEmpty(a_74))))
        {
          i_88 = ATgetFirst((ATermList) a_74);
          k_88 = (ATerm) ATgetNext((ATermList) a_74);
        }
      else
        _fail(t);
      {
        ATerm b_74 = ATgetArgument(t, 1);
        if(((ATgetType(b_74) == AT_LIST) && !(ATisEmpty(b_74))))
          {
            j_88 = ATgetFirst((ATermList) b_74);
            t_88 = (ATerm) ATgetNext((ATermList) b_74);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, i_88, j_88), (ATerm) ATmakeAppl(sym__2, k_88, t_88));
  return(t);
}
ATerm m_34 (ATerm t)
{
  ATerm d_89 = NULL,e_89 = NULL;
  if(match_cons(t, sym__2))
    {
      d_89 = ATgetArgument(t, 0);
      e_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(e_89), d_89);
  return(t);
}
ATerm n_34 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL;
  if(match_cons(t, sym__2))
    {
      f_89 = ATgetArgument(t, 0);
      g_89 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_89), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, g_89)));
  return(t);
}
ATerm o_34 (ATerm t)
{
  t = repeat_1_0(Simplify_0_0, t);
  return(t);
}
ATerm InlineStrat_0_0 (ATerm t)
{
  ATerm p_86 = NULL,q_86 = NULL,r_86 = NULL,t_86 = NULL,u_86 = NULL,v_86 = NULL,w_86 = NULL,x_86 = NULL,y_86 = NULL,z_86 = NULL,a_87 = NULL,b_87 = NULL,v_23 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL;
  if(match_cons(t, sym_CallT_3))
    {
      ATerm c_74 = ATgetArgument(t, 0);
      if(match_cons(c_74, sym_SVar_1))
        {
          p_86 = ATgetArgument(c_74, 0);
        }
      else
        _fail(t);
      q_86 = ATgetArgument(t, 1);
      r_86 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = term_d_74;
  x_11 = t;
  t = term_d_74;
  v_11 = t;
  t = x_11;
  y_11 = t;
  t = (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, p_86), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty));
  w_11 = t;
  t = SSL_table_get(v_11, w_11);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_23 = ATgetFirst((ATermList) t);
      {
        ATerm e_74 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_23;
  if(match_cons(t, sym_Defined_4))
    {
      ATerm f_74 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_74) != ATmakeSymbol("b_0", 0, ATtrue)))
        _fail(t);
      t_86 = ATgetArgument(t, 1);
      u_86 = ATgetArgument(t, 2);
      v_86 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, p_86, t_86, v_86, u_86);
  t = strename_0_0(t);
  if(match_cons(t, sym_SDefT_4))
    {
      if((p_86 != ATgetArgument(t, 0)))
        {
          _fail(ATgetArgument(t, 0));
        }
      w_86 = ATgetArgument(t, 1);
      {
        ATerm g_74 = ATgetArgument(t, 2);
      }
      x_86 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = w_86;
  t = map_1_0(h_34, t);
  y_86 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_86, q_86, x_86);
  t = substitute_2_0(i_34, _id, t);
  z_86 = t;
  t = v_86;
  t = map_1_0(j_34, t);
  a_87 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_86, a_87);
  t = genzip_4_0(k_34, l_34, m_34, n_34, t);
  b_87 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, a_87, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, b_87), z_86));
  t = downup_1_0(o_34, t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm p_34 (ATerm t)
{
  ATerm j_92 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
  j_92 = t;
  b_12 = t;
  t = term_g_38;
  z_11 = t;
  t = b_12;
  c_12 = t;
  t = (ATerm) ATinsert(ATempty, term_h_74);
  a_12 = t;
  t = SSL_printnl(z_11, a_12);
  t = j_92;
  return(t);
}
ATerm q_34 (ATerm t)
{
  ATerm b_24 = NULL,e_12 = NULL,f_12 = NULL,g_12 = NULL,i_12 = NULL;
  b_24 = t;
  t = term_l_74;
  g_12 = t;
  t = term_g_38;
  e_12 = t;
  t = g_12;
  i_12 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, b_24), term_l_74);
  f_12 = t;
  t = SSL_printnl(e_12, f_12);
  t = b_24;
  return(t);
}
ATerm r_34 (ATerm t)
{
  ATerm r_92 = NULL,j_12 = NULL,k_12 = NULL,l_12 = NULL,m_12 = NULL;
  r_92 = t;
  l_12 = t;
  t = term_g_38;
  j_12 = t;
  t = l_12;
  m_12 = t;
  t = (ATerm) ATinsert(ATempty, term_m_74);
  k_12 = t;
  t = SSL_printnl(j_12, k_12);
  t = r_92;
  return(t);
}
ATerm check_that_try_is_try_0_0 (ATerm t)
{
  ATerm z_91 = NULL,a_92 = NULL;
  z_91 = t;
  t = new_0_0(t);
  a_92 = t;
  {
    ATerm n_74 = t;
    int o_74 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym_CallT_3, term_x_74, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, a_92), (ATerm)ATempty, (ATerm) ATempty)), (ATerm) ATempty);
        t = InlineStrat_0_0(t);
        ;
        LocalPopChoice(o_74);
      }
    else
      {
        t = n_74;
        t = if_verbose2_1_0(p_34, t);
        _fail(t);
      }
    {
      ATerm a_75 = t;
      int b_75 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_92 = NULL,l_92 = NULL,m_92 = NULL,n_92 = NULL,o_92 = NULL,p_92 = NULL,q_92 = NULL;
          k_92 = t;
          if(match_cons(t, sym_LChoice_2))
            {
              l_92 = ATgetArgument(t, 0);
              q_92 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = l_92;
          if(match_cons(t, sym_CallT_3))
            {
              m_92 = ATgetArgument(t, 0);
              o_92 = ATgetArgument(t, 1);
              p_92 = ATgetArgument(t, 2);
            }
          else
            _fail(t);
          t = m_92;
          if(match_cons(t, sym_SVar_1))
            {
              n_92 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = o_92;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = p_92;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = q_92;
          if(!(match_cons(t, sym_Id_0)))
            _fail(t);
          t = n_92;
          if((a_92 != t))
            {
              _fail(t);
            }
          t = k_92;
          ;
          LocalPopChoice(b_75);
        }
      else
        {
          t = a_75;
          t = if_verbose1_1_0(q_34, t);
          _fail(t);
        }
      t = if_verbose2_1_0(r_34, t);
      t = z_91;
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
ATerm assert_1_0 (ATerm a_130 (ATerm), ATerm t)
{
  ATerm s_92 = NULL,t_92 = NULL,u_92 = NULL,v_92 = NULL,w_92 = NULL,p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      s_92 = ATgetArgument(t, 0);
      t_92 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_130(t);
  u_92 = t;
  t = (ATerm) ATmakeAppl(sym__3, u_92, s_92, t_92);
  t = table_push_0_0(t);
  {
    ATerm c_75 = t;
    int f_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_12 = NULL,o_12 = NULL;
        o_12 = t;
        t = term_f_47;
        n_12 = t;
        t = SSL_table_get(u_92, n_12);
        ;
        LocalPopChoice(f_75);
      }
    else
      {
        t = c_75;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_92 = ATgetFirst((ATermList) t);
        w_92 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    r_12 = t;
    t = term_f_47;
    p_12 = t;
    t = r_12;
    s_12 = t;
    t = (ATerm) ATinsert(CheckATermList(w_92), (ATerm) ATinsert(CheckATermList(v_92), s_92));
    q_12 = t;
    t = SSL_table_put(u_92, p_12, q_12);
    t = (ATerm) ATmakeAppl(sym__2, s_92, t_92);
  }
  return(t);
}
ATerm s_34 (ATerm t)
{
  t = term_d_74;
  return(t);
}
ATerm declare_inline_rule_0_0 (ATerm t)
{
  ATerm x_92 = NULL,y_92 = NULL,z_92 = NULL,a_93 = NULL;
  if(match_cons(t, sym_SDefT_4))
    {
      x_92 = ATgetArgument(t, 0);
      y_92 = ATgetArgument(t, 1);
      z_92 = ATgetArgument(t, 2);
      a_93 = ATgetArgument(t, 3);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_CallT_3, (ATerm)ATmakeAppl(sym_SVar_1, x_92), (ATerm)ATinsert(ATempty, (ATerm) ATempty), (ATerm) ATinsert(ATempty, (ATerm) ATempty)), (ATerm) ATmakeAppl(sym_Defined_4, term_k_75, y_92, a_93, z_92));
  t = assert_1_0(s_34, t);
  t = (ATerm) ATmakeAppl(sym_SDefT_4, x_92, y_92, z_92, a_93);
  return(t);
}
ATerm map_1_0 (ATerm y_121 (ATerm), ATerm t)
{
  ATerm b_93 (ATerm t)
  {
    ATerm m_75 = t;
    int p_75 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(p_75);
      }
    else
      {
        t = m_75;
        t = Cons_2_0(y_121, b_93, t);
      }
    return(t);
  }
  t = b_93(t);
  return(t);
}
ATerm Strategies_1_0 (ATerm w_102 (ATerm), ATerm t)
{
  ATerm d_93 = NULL,e_93 = NULL,g_93 = NULL,i_93 = NULL,t_12 = NULL,u_12 = NULL;
  i_93 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      e_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_93);
  d_93 = t;
  t = e_93;
  t = w_102(t);
  g_93 = t;
  u_12 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, g_93);
  t_12 = t;
  t = SSLsetAnnotations(t_12, d_93);
  return(t);
}
ATerm Cons_2_0 (ATerm s_102 (ATerm), ATerm t_102 (ATerm), ATerm t)
{
  ATerm l_93 = NULL,m_93 = NULL,n_93 = NULL,o_93 = NULL,p_93 = NULL,q_93 = NULL,v_12 = NULL,w_12 = NULL;
  q_93 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_93 = ATgetFirst((ATermList) t);
      n_93 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_93);
  l_93 = t;
  t = m_93;
  t = s_102(t);
  o_93 = t;
  t = n_93;
  t = t_102(t);
  p_93 = t;
  w_12 = t;
  t = (ATerm) ATinsert(CheckATermList(p_93), o_93);
  v_12 = t;
  t = SSLsetAnnotations(v_12, l_93);
  return(t);
}
ATerm Signature_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm t_93 = NULL,u_93 = NULL,v_93 = NULL,w_93 = NULL,z_12 = NULL,a_13 = NULL;
  w_93 = t;
  if(match_cons(t, sym_Signature_1))
    {
      u_93 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_93);
  t_93 = t;
  t = u_93;
  t = x_102(t);
  v_93 = t;
  a_13 = t;
  t = (ATerm) ATmakeAppl(sym_Signature_1, v_93);
  z_12 = t;
  t = SSLsetAnnotations(z_12, t_93);
  return(t);
}
ATerm Specification_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  ATerm z_93 = NULL,a_94 = NULL,b_94 = NULL,c_94 = NULL,b_13 = NULL,c_13 = NULL;
  c_94 = t;
  if(match_cons(t, sym_Specification_1))
    {
      a_94 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_94);
  z_93 = t;
  t = a_94;
  t = b_103(t);
  b_94 = t;
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, b_94);
  b_13 = t;
  t = SSLsetAnnotations(b_13, z_93);
  return(t);
}
ATerm _2_0 (ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm t)
{
  ATerm f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,d_13 = NULL,f_13 = NULL;
  k_94 = t;
  if(match_cons(t, sym__2))
    {
      g_94 = ATgetArgument(t, 0);
      h_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_94);
  f_94 = t;
  t = g_94;
  t = d_98(t);
  i_94 = t;
  t = h_94;
  t = e_98(t);
  j_94 = t;
  f_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_94, j_94);
  d_13 = t;
  t = SSLsetAnnotations(d_13, f_94);
  return(t);
}
ATerm WriteToFile_1_0 (ATerm q_137 (ATerm), ATerm t)
{
  ATerm n_94 = NULL,o_94 = NULL,p_94 = NULL;
  if(match_cons(t, sym__2))
    {
      n_94 = ATgetArgument(t, 0);
      o_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_94, term_q_75);
  t = open_stream_0_0(t);
  p_94 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_94, o_94);
  t = q_137(t);
  t = fclose_0_0(t);
  t = o_94;
  return(t);
}
ATerm h_35 (ATerm t)
{
  t = fetch_1_0(j_35, t);
  return(t);
}
ATerm i_35 (ATerm t)
{
  t = WriteToFile_1_0(k_35, t);
  return(t);
}
ATerm j_35 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm k_35 (ATerm t)
{
  ATerm s_94 = NULL,t_94 = NULL,u_94 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_75 = ATgetArgument(t, 0);
      if(match_cons(r_75, sym_Stream_1))
        {
          s_94 = ATgetArgument(r_75, 0);
        }
      else
        _fail(t);
      t_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_baf(s_94, t_94);
  u_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_94);
  return(t);
}
ATerm l_35 (ATerm t)
{
  t = WriteToFile_1_0(m_35, t);
  return(t);
}
ATerm m_35 (ATerm t)
{
  ATerm v_94 = NULL,w_94 = NULL,x_94 = NULL,y_94 = NULL,g_13 = NULL,h_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_75 = ATgetArgument(t, 0);
      if(match_cons(w_75, sym_Stream_1))
        {
          v_94 = ATgetArgument(w_75, 0);
        }
      else
        _fail(t);
      w_94 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSL_write_term_to_stream_text(v_94, w_94);
  x_94 = t;
  h_13 = t;
  t = term_x_75;
  g_13 = t;
  t = SSL_fputc(g_13, x_94);
  y_94 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_94);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm q_94 = NULL,r_94 = NULL;
  q_94 = t;
  {
    ATerm t_34 (ATerm t)
    {
      ATerm i_76 = t;
      int j_76 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_35 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((r_94 != NULL) && (r_94 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  r_94 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(f_35, t);
          ;
          LocalPopChoice(j_76);
        }
      else
        {
          t = i_76;
          t = term_q_76;
          if(((r_94 != NULL) && (r_94 != t)))
            _fail(t);
          else
            r_94 = t;
        }
      return(t);
    }
    t = _2_0(t_34, _id, t);
    t = q_94;
    {
      ATerm g_35 (ATerm t)
      {
        ATerm h_24 = NULL;
        h_24 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_94), h_24);
        return(t);
      }
      t = _2_0(_id, g_35, t);
      {
        ATerm r_76 = t;
        int w_76 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(h_35, i_35, t);
            ;
            LocalPopChoice(w_76);
          }
        else
          {
            t = r_76;
            t = _2_0(_id, l_35, t);
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
ATerm apply_strategy_1_0 (ATerm c_139 (ATerm), ATerm t)
{
  ATerm z_94 = NULL,a_95 = NULL,b_95 = NULL,c_95 = NULL,d_95 = NULL;
  z_94 = t;
  t = dtime_0_0(t);
  t = z_94;
  t = c_139(t);
  a_95 = t;
  t = dtime_0_0(t);
  b_95 = t;
  t = a_95;
  if(match_cons(t, sym__2))
    {
      c_95 = ATgetArgument(t, 0);
      d_95 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_95), (ATerm) ATmakeAppl(sym_Runtime_1, b_95)), d_95);
  return(t);
}
ATerm r_95 (ATerm l_95, ATerm t)
{
  t = SSL_fclose(l_95);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_95 = NULL,p_95 = NULL;
  p_95 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_95 = ATgetArgument(t, 0);
      {
        ATerm x_76 = t;
        int e_77 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_95);
            ;
            LocalPopChoice(e_77);
          }
        else
          {
            t = x_76;
            t = r_95(p_95, t);
          }
      }
    }
  else
    {
      t = r_95(p_95, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm s_95 = NULL;
  t = SSL_stdin_stream();
  s_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_95);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_95 = NULL;
  t = SSL_stdout_stream();
  t_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_95);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_95 = NULL;
  t = SSL_stderr_stream();
  u_95 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_95);
  return(t);
}
ATerm n_35 (ATerm t)
{
  ATerm c_96 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      c_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_96;
  return(t);
}
ATerm o_35 (ATerm t)
{
  ATerm g_96 = NULL;
  g_96 = t;
  t = SSL_is_string(g_96);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm f_77 = ATgetArgument(t, 0);
      ATerm g_77 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_77 = t;
    int i_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_25 = NULL,h_25 = NULL;
        g_25 = t;
        t = SSL_explode_term(g_25);
        if(match_cons(t, sym__2))
          {
            ATerm j_77 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) j_77) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm k_77 = ATgetArgument(t, 1);
              if(((ATgetType(k_77) == AT_LIST) && !(ATisEmpty(k_77))))
                {
                  h_25 = ATgetFirst((ATermList) k_77);
                  {
                    ATerm m_77 = (ATerm) ATgetNext((ATermList) k_77);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_25;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_25;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_25;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_25;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(i_77);
      }
    else
      {
        t = h_77;
        {
          ATerm o_77 = t;
          int q_77 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_95 = NULL,a_96 = NULL,b_96 = NULL;
              t = _2_0(n_35, _id, t);
              if(match_cons(t, sym__2))
                {
                  z_95 = ATgetArgument(t, 0);
                  a_96 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(z_95, a_96);
              b_96 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, b_96);
              ;
              LocalPopChoice(q_77);
            }
          else
            {
              t = o_77;
              {
                ATerm d_96 = NULL,e_96 = NULL,f_96 = NULL;
                t = _2_0(o_35, _id, t);
                if(match_cons(t, sym__2))
                  {
                    d_96 = ATgetArgument(t, 0);
                    e_96 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(d_96, e_96);
                f_96 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, f_96);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_96 = NULL,i_96 = NULL,j_96 = NULL;
  ATerm r_77 = t;
  int s_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_96 = NULL;
      k_96 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_96, term_t_77);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_77);
    }
  else
    {
      t = r_77;
      {
        ATerm i_25 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL;
        i_25 = t;
        t = term_u_77;
        k_13 = t;
        t = term_g_38;
        i_13 = t;
        t = k_13;
        l_13 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, i_25), term_u_77);
        j_13 = t;
        t = SSL_printnl(i_13, j_13);
        t = i_25;
        _fail(t);
      }
    }
  h_96 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_96 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(j_96);
  i_96 = t;
  t = h_96;
  t = fclose_0_0(t);
  t = i_96;
  return(t);
}
ATerm fetch_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  ATerm p_96 (ATerm t)
  {
    ATerm w_77 = t;
    int x_77 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(j_122, _id, t);
        ;
        LocalPopChoice(x_77);
      }
    else
      {
        t = w_77;
        t = Cons_2_0(_id, p_96, t);
      }
    return(t);
  }
  t = p_96(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_77 = t;
  int z_77 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_77);
    }
  else
    {
      t = y_77;
      {
        ATerm s_96 = NULL,t_96 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_96 = ATgetFirst((ATermList) t);
            t_96 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = s_96;
        {
          ATerm p_35 (ATerm t)
          {
            t = t_96;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_35, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm p_122 (ATerm), ATerm t)
{
  ATerm z_96 (ATerm t)
  {
    ATerm a_78 = t;
    int b_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, z_96, t);
        ;
        LocalPopChoice(b_78);
      }
    else
      {
        t = a_78;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_122(t);
      }
    return(t);
  }
  t = z_96(t);
  return(t);
}
ATerm q_35 (ATerm t)
{
  ATerm c_97 = NULL;
  c_97 = t;
  t = SSL_explode_string(c_97);
  return(t);
}
ATerm r_35 (ATerm t)
{
  ATerm d_97 = NULL;
  d_97 = t;
  t = SSL_explode_string(d_97);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm b_97 = NULL;
  t = _2_0(q_35, r_35, t);
  {
    ATerm c_78 = t;
    int e_78 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_97 = NULL,g_97 = NULL;
        if(match_cons(t, sym__2))
          {
            f_97 = ATgetArgument(t, 0);
            g_97 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = f_97;
        {
          ATerm s_35 (ATerm t)
          {
            t = g_97;
            return(t);
          }
          t = at_end_1_0(s_35, t);
        }
        ;
        LocalPopChoice(e_78);
      }
    else
      {
        t = c_78;
        {
          ATerm q_25 = NULL,r_25 = NULL;
          q_25 = t;
          t = SSL_explode_term(q_25);
          if(match_cons(t, sym__2))
            {
              ATerm f_78 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) f_78) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_25 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_25;
          t = concat_0_0(t);
        }
      }
    b_97 = t;
    t = SSL_implode_string(b_97);
  }
  return(t);
}
ATerm t_35 (ATerm t)
{
  ATerm j_78 = t;
  int k_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_78);
    }
  else
    {
      t = j_78;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm n_78 = t;
  int o_78 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_97 = NULL;
      r_97 = t;
      t = SSL_is_string(r_97);
      ;
      LocalPopChoice(o_78);
    }
  else
    {
      t = n_78;
      {
        ATerm q_78 = t;
        int s_78 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(t_35, t);
            ;
            LocalPopChoice(s_78);
          }
        else
          {
            t = q_78;
            {
              ATerm v_97 = NULL,w_97 = NULL,x_97 = NULL;
              v_97 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_97 = ATgetArgument(t, 0);
                  t = w_97;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_97 = ATgetArgument(t, 0);
                      t = w_97;
                      {
                        ATerm t_78 = t;
                        int u_78 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_13 = NULL,r_13 = NULL;
                            r_13 = t;
                            t = term_m_39;
                            p_13 = t;
                            t = SSL_table_get(p_13, w_97);
                            {
                              ATerm v_78 = t;
                              int w_78 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_26 = NULL,t_13 = NULL,u_13 = NULL;
                                  t = eval_config_0_0(t);
                                  n_26 = t;
                                  u_13 = t;
                                  t = term_m_39;
                                  t_13 = t;
                                  t = SSL_table_put(t_13, w_97, n_26);
                                  t = n_26;
                                  ;
                                  LocalPopChoice(w_78);
                                }
                              else
                                {
                                  t = v_78;
                                }
                            }
                            ;
                            LocalPopChoice(u_78);
                          }
                        else
                          {
                            t = t_78;
                            {
                              ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
                              t = term_a_79;
                              x_13 = t;
                              t = term_g_38;
                              v_13 = t;
                              t = x_13;
                              y_13 = t;
                              t = (ATerm) ATinsert(ATinsert(ATempty, w_97), term_a_79);
                              w_13 = t;
                              t = SSL_printnl(v_13, w_13);
                              t = w_97;
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm b_98 = NULL,c_98 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_97 = ATgetArgument(t, 0);
                          x_97 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_97;
                      t = eval_config_0_0(t);
                      b_98 = t;
                      t = x_97;
                      t = eval_config_0_0(t);
                      c_98 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_98, c_98);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm u_35 (ATerm t)
{
  ATerm k_98 = NULL;
  k_98 = t;
  if(match_string(t, "-k"))
    {
      t = k_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = k_98;
    }
  return(t);
}
ATerm v_35 (ATerm t)
{
  ATerm l_98 = NULL,m_98 = NULL,z_13 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  l_98 = t;
  t = SSL_string_to_int(l_98);
  m_98 = t;
  c_14 = t;
  t = term_m_39;
  z_13 = t;
  t = c_14;
  d_14 = t;
  t = term_l_79;
  b_14 = t;
  t = SSL_table_put(z_13, b_14, m_98);
  t = l_98;
  return(t);
}
ATerm w_35 (ATerm t)
{
  t = term_m_79;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_35, v_35, w_35, t);
  return(t);
}
ATerm x_35 (ATerm t)
{
  ATerm o_98 = NULL;
  o_98 = t;
  if(match_string(t, "-S"))
    {
      t = o_98;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_98;
    }
  return(t);
}
ATerm y_35 (ATerm t)
{
  ATerm e_14 = NULL,f_14 = NULL,h_14 = NULL,i_14 = NULL,k_14 = NULL,l_14 = NULL;
  i_14 = t;
  t = term_m_39;
  e_14 = t;
  t = i_14;
  k_14 = t;
  t = term_h_39;
  f_14 = t;
  t = k_14;
  l_14 = t;
  t = term_n_79;
  h_14 = t;
  t = SSL_table_put(e_14, f_14, h_14);
  t = term_o_79;
  return(t);
}
ATerm z_35 (ATerm t)
{
  t = term_s_79;
  return(t);
}
ATerm a_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_36 (ATerm t)
{
  ATerm p_98 = NULL,q_98 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,q_14 = NULL;
  p_98 = t;
  t = SSL_string_to_int(p_98);
  q_98 = t;
  o_14 = t;
  t = term_m_39;
  m_14 = t;
  t = o_14;
  q_14 = t;
  t = term_h_39;
  n_14 = t;
  t = SSL_table_put(m_14, n_14, q_98);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, p_98);
  return(t);
}
ATerm c_36 (ATerm t)
{
  t = term_t_79;
  return(t);
}
ATerm d_36 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_36 (ATerm t)
{
  ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL;
  u_14 = t;
  t = term_m_39;
  r_14 = t;
  t = u_14;
  v_14 = t;
  t = term_u_79;
  s_14 = t;
  t = v_14;
  w_14 = t;
  t = term_z_19;
  t_14 = t;
  t = SSL_table_put(r_14, s_14, t_14);
  t = term_w_79;
  return(t);
}
ATerm f_36 (ATerm t)
{
  t = term_x_79;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_79 = t;
  int z_79 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_35, y_35, z_35, t);
      ;
      LocalPopChoice(z_79);
    }
  else
    {
      t = y_79;
      {
        ATerm b_80 = t;
        int d_80 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(a_36, b_36, c_36, t);
            ;
            LocalPopChoice(d_80);
          }
        else
          {
            t = b_80;
            t = Option_3_0(d_36, e_36, f_36, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm t_98 = NULL,u_98 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_98 = NULL;
      t = term_z_19;
      t = d_0(t);
      v_98 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, v_98);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm y_98 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_98 = ATgetFirst((ATermList) t);
          u_98 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_98;
      t = a_0(t);
      t = term_z_19;
      t = c_0(t);
      y_98 = t;
      t = (ATerm) ATinsert(CheckATermList(u_98), y_98);
    }
  return(t);
}
ATerm g_36 (ATerm t)
{
  ATerm a_99 = NULL;
  a_99 = t;
  if(match_string(t, "-o"))
    {
      t = a_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = a_99;
    }
  return(t);
}
ATerm h_36 (ATerm t)
{
  ATerm b_99 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  b_99 = t;
  z_14 = t;
  t = term_m_39;
  x_14 = t;
  t = z_14;
  a_15 = t;
  t = term_g_80;
  y_14 = t;
  t = SSL_table_put(x_14, y_14, b_99);
  t = (ATerm) ATmakeAppl(sym_Output_1, b_99);
  return(t);
}
ATerm t_36 (ATerm t)
{
  t = term_h_80;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_36, h_36, t_36, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm e_99 = NULL,f_99 = NULL,g_99 = NULL,h_99 = NULL,b_15 = NULL,c_15 = NULL;
  if(match_cons(t, sym__3))
    {
      e_99 = ATgetArgument(t, 0);
      f_99 = ATgetArgument(t, 1);
      g_99 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_99, f_99);
  {
    ATerm l_80 = t;
    int m_80 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_80 = ATgetArgument(t, 0);
            ATerm o_80 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(e_99, f_99);
        ;
        LocalPopChoice(m_80);
      }
    else
      {
        t = l_80;
        t = (ATerm) ATempty;
      }
    h_99 = t;
    c_15 = t;
    t = (ATerm) ATinsert(CheckATermList(h_99), g_99);
    b_15 = t;
    t = SSL_table_put(e_99, f_99, b_15);
    t = (ATerm) ATmakeAppl(sym__3, e_99, f_99, g_99);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm p_99 = NULL,q_99 = NULL,r_99 = NULL,s_99 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm t_99 = NULL;
      t = term_z_19;
      t = l_0(t);
      t_99 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_80, term_f_80, t_99);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm x_99 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_99 = ATgetFirst((ATermList) t);
          q_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_99;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_99 = ATgetFirst((ATermList) t);
          s_99 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_99;
      t = i_0(t);
      t = r_99;
      t = k_0(t);
      x_99 = t;
      t = (ATerm) ATinsert(CheckATermList(s_99), x_99);
    }
  return(t);
}
ATerm u_36 (ATerm t)
{
  ATerm z_99 = NULL;
  z_99 = t;
  if(match_string(t, "-i"))
    {
      t = z_99;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_99;
    }
  return(t);
}
ATerm v_36 (ATerm t)
{
  ATerm a_100 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  a_100 = t;
  f_15 = t;
  t = term_m_39;
  d_15 = t;
  t = f_15;
  g_15 = t;
  t = term_q_80;
  e_15 = t;
  t = SSL_table_put(d_15, e_15, a_100);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_100);
  return(t);
}
ATerm x_36 (ATerm t)
{
  t = term_u_80;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(u_36, v_36, x_36, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm b_100 = NULL,l_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,m_15 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_19;
  t = whoami_0_0(t);
  b_100 = t;
  j_15 = t;
  t = term_g_38;
  h_15 = t;
  t = j_15;
  k_15 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_80), b_100);
  i_15 = t;
  t = SSL_printnl(h_15, i_15);
  m_15 = t;
  t = term_d_39;
  l_15 = t;
  t = SSL_exit(l_15);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL;
  t = term_w_80;
  p_15 = t;
  t = term_m_39;
  n_15 = t;
  t = p_15;
  q_15 = t;
  t = term_w_80;
  o_15 = t;
  t = SSL_table_get(n_15, o_15);
  {
    ATerm z_80 = t;
    int b_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_27 = NULL,r_15 = NULL,s_15 = NULL,u_15 = NULL,y_15 = NULL;
        t = eval_config_0_0(t);
        g_27 = t;
        u_15 = t;
        t = term_m_39;
        r_15 = t;
        t = u_15;
        y_15 = t;
        t = term_w_80;
        s_15 = t;
        t = SSL_table_put(r_15, s_15, g_27);
        t = g_27;
        ;
        LocalPopChoice(b_81);
      }
    else
      {
        t = z_80;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm p_128 (ATerm), ATerm q_128 (ATerm), ATerm t)
{
  ATerm c_81 = t;
  int e_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = p_128(t);
      ;
      LocalPopChoice(e_81);
    }
  else
    {
      t = c_81;
      {
        ATerm e_100 = NULL,f_100 = NULL,i_100 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_100 = ATgetFirst((ATermList) t);
            f_100 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_100;
        t = foldr_2_0(p_128, q_128, t);
        i_100 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_100, i_100);
        t = q_128(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm y_36 (ATerm t)
{
  t = term_n_79;
  return(t);
}
ATerm z_36 (ATerm t)
{
  ATerm q_27 = NULL,r_27 = NULL;
  if(match_cons(t, sym__2))
    {
      q_27 = ATgetArgument(t, 0);
      r_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_81 = t;
    int g_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(q_27, r_27);
        ;
        LocalPopChoice(g_81);
      }
    else
      {
        t = f_81;
        t = SSL_addr(q_27, r_27);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_100 = NULL,i_27 = NULL,k_27 = NULL;
  t = times_0_0(t);
  i_27 = t;
  t = SSL_explode_term(i_27);
  if(match_cons(t, sym__2))
    {
      ATerm h_81 = ATgetArgument(t, 0);
      k_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_27;
  t = foldr_2_0(y_36, z_36, t);
  l_100 = t;
  t = SSL_TicksToSeconds(l_100);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_100 = NULL,x_100 = NULL,y_100 = NULL;
  w_100 = t;
  if(match_cons(t, sym__2))
    {
      x_100 = ATgetArgument(t, 0);
      y_100 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_81 = t;
    int k_81 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_100;
        if((x_100 != t))
          {
            _fail(t);
          }
        t = w_100;
        ;
        LocalPopChoice(k_81);
      }
    else
      {
        t = i_81;
        t = w_100;
        {
          ATerm l_81 = t;
          int m_81 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_100, y_100);
              ;
              LocalPopChoice(m_81);
            }
          else
            {
              t = l_81;
              t = SSL_gtr(x_100, y_100);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_100, y_100);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_147 (ATerm), ATerm t)
{
  ATerm n_81 = t;
  int o_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_101 = NULL,d_101 = NULL,z_15 = NULL,a_16 = NULL,c_16 = NULL,d_16 = NULL;
      b_101 = t;
      t = term_h_39;
      c_16 = t;
      t = term_m_39;
      z_15 = t;
      t = c_16;
      d_16 = t;
      t = term_h_39;
      a_16 = t;
      t = SSL_table_get(z_15, a_16);
      {
        ATerm q_81 = t;
        int r_81 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_28 = NULL,e_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL;
            t = eval_config_0_0(t);
            x_28 = t;
            h_16 = t;
            t = term_m_39;
            e_16 = t;
            t = h_16;
            i_16 = t;
            t = term_h_39;
            g_16 = t;
            t = SSL_table_put(e_16, g_16, x_28);
            t = x_28;
            ;
            LocalPopChoice(r_81);
          }
        else
          {
            t = q_81;
          }
        d_101 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_101, term_d_39);
        t = geq_0_0(t);
        t = b_101;
        t = p_147(t);
      }
      ;
      LocalPopChoice(o_81);
    }
  else
    {
      t = n_81;
    }
  return(t);
}
ATerm a_37 (ATerm t)
{
  ATerm f_101 = NULL,g_101 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL;
  t = run_time_0_0(t);
  f_101 = t;
  t = term_z_19;
  t = whoami_0_0(t);
  g_101 = t;
  m_16 = t;
  t = term_g_38;
  k_16 = t;
  t = m_16;
  n_16 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_81), f_101), term_t_81), g_101);
  l_16 = t;
  t = SSL_printnl(k_16, l_16);
  t = (ATerm) ATmakeAppl(sym__2, term_g_38, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_81), f_101), term_t_81), g_101));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(a_37, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL;
  t = report_run_time_0_0(t);
  t_16 = t;
  t = term_n_79;
  s_16 = t;
  t = SSL_exit(s_16);
  return(t);
}
ATerm b_37 (ATerm t)
{
  ATerm x_81 = t;
  int y_81 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_81);
    }
  else
    {
      t = x_81;
      {
        ATerm z_81 = t;
        int a_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(a_82);
          }
        else
          {
            t = z_81;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_140 (ATerm), ATerm t)
{
  ATerm b_82 = t;
  int d_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
      t = term_e_82;
      w_16 = t;
      t = term_m_39;
      u_16 = t;
      t = w_16;
      x_16 = t;
      t = term_e_82;
      v_16 = t;
      t = SSL_table_get(u_16, v_16);
      {
        ATerm f_82 = t;
        int g_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_29 = NULL,y_16 = NULL,e_17 = NULL,i_17 = NULL,k_17 = NULL;
            t = eval_config_0_0(t);
            c_29 = t;
            i_17 = t;
            t = term_m_39;
            y_16 = t;
            t = i_17;
            k_17 = t;
            t = term_e_82;
            e_17 = t;
            t = SSL_table_put(y_16, e_17, c_29);
            t = c_29;
            ;
            LocalPopChoice(g_82);
          }
        else
          {
            t = f_82;
          }
      }
      ;
      LocalPopChoice(d_82);
    }
  else
    {
      t = b_82;
      t = fetch_1_0(b_37, t);
    }
  t = a_140(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm i_101 = NULL,j_101 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_101 = ATgetFirst((ATermList) t);
      j_101 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_101 = NULL,o_101 = NULL;
        t = j_101;
        t = g_0(t);
        n_101 = t;
        t = i_101;
        t = e_0(t);
        o_101 = t;
        t = j_101;
        {
          ATerm c_37 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(n_101), o_101);
            return(t);
          }
          t = reverse_acc_2_0(e_0, c_37, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_19;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm r_116 (ATerm), ATerm t)
{
  ATerm p_101 = NULL,q_101 = NULL,r_101 = NULL,s_101 = NULL,l_17 = NULL,n_17 = NULL;
  s_101 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_101);
  p_101 = t;
  t = q_101;
  t = r_116(t);
  r_101 = t;
  n_17 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_101);
  l_17 = t;
  t = SSLsetAnnotations(l_17, p_101);
  return(t);
}
ATerm d_37 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm e_37 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm f_37 (ATerm t)
{
  ATerm v_101 = NULL;
  v_101 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_101), term_h_82);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL;
  ATerm j_82 = t;
  int k_82 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
      t = term_w_80;
      r_17 = t;
      t = term_m_39;
      o_17 = t;
      t = r_17;
      s_17 = t;
      t = term_w_80;
      q_17 = t;
      t = SSL_table_get(o_17, q_17);
      {
        ATerm l_82 = t;
        int m_82 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_29 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,w_17 = NULL;
            t = eval_config_0_0(t);
            q_29 = t;
            v_17 = t;
            t = term_m_39;
            t_17 = t;
            t = v_17;
            w_17 = t;
            t = term_w_80;
            u_17 = t;
            t = SSL_table_put(t_17, u_17, q_29);
            t = q_29;
            ;
            LocalPopChoice(m_82);
          }
        else
          {
            t = l_82;
          }
      }
      ;
      LocalPopChoice(k_82);
    }
  else
    {
      t = j_82;
      t = fetch_1_0(d_37, t);
    }
  t = term_q_82;
  t = echo_0_0(t);
  b_18 = t;
  t = term_e_80;
  x_17 = t;
  t = b_18;
  d_18 = t;
  t = term_f_80;
  a_18 = t;
  t = SSL_table_get(x_17, a_18);
  t = reverse_acc_2_0(_id, e_37, t);
  t = map_1_0(f_37, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm s_116 (ATerm), ATerm t)
{
  ATerm w_101 = NULL,x_101 = NULL,y_101 = NULL,z_101 = NULL,e_18 = NULL,h_18 = NULL;
  z_101 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      x_101 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_101);
  w_101 = t;
  t = x_101;
  t = s_116(t);
  y_101 = t;
  h_18 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_101);
  e_18 = t;
  t = SSLsetAnnotations(e_18, w_101);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_102 = NULL,e_102 = NULL,i_18 = NULL,j_18 = NULL;
  d_102 = t;
  {
    ATerm r_82 = t;
    int s_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_102;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm t_82 = ATgetFirst((ATermList) t);
                ATerm u_82 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_102;
          }
        ;
        LocalPopChoice(s_82);
      }
    else
      {
        t = r_82;
        t = (ATerm) ATinsert(ATempty, d_102);
      }
    e_102 = t;
    j_18 = t;
    t = term_q_76;
    i_18 = t;
    t = SSL_printnl(i_18, e_102);
    t = d_102;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL;
  t = term_w_80;
  m_18 = t;
  t = term_m_39;
  k_18 = t;
  t = m_18;
  o_18 = t;
  t = term_w_80;
  l_18 = t;
  t = SSL_table_get(k_18, l_18);
  {
    ATerm w_82 = t;
    int x_82 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_30 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL;
        t = eval_config_0_0(t);
        d_30 = t;
        t_18 = t;
        t = term_m_39;
        p_18 = t;
        t = t_18;
        u_18 = t;
        t = term_w_80;
        q_18 = t;
        t = SSL_table_put(p_18, q_18, d_30);
        t = d_30;
        ;
        LocalPopChoice(x_82);
      }
    else
      {
        t = w_82;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm h_37 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_37 (ATerm t)
{
  ATerm w_18 = NULL,a_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  t = term_m_39;
  w_18 = t;
  t = f_19;
  g_19 = t;
  t = term_y_82;
  a_19 = t;
  t = g_19;
  h_19 = t;
  t = term_z_19;
  e_19 = t;
  t = SSL_table_put(w_18, a_19, e_19);
  t = term_z_82;
  return(t);
}
ATerm k_37 (ATerm t)
{
  t = term_a_83;
  return(t);
}
ATerm l_37 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_37 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,m_19 = NULL,n_19 = NULL,q_19 = NULL,s_19 = NULL,u_19 = NULL,y_19 = NULL,b_20 = NULL,d_20 = NULL,e_20 = NULL;
  m_19 = t;
  t = term_m_39;
  i_19 = t;
  t = m_19;
  n_19 = t;
  t = term_y_82;
  j_19 = t;
  t = n_19;
  q_19 = t;
  t = term_z_19;
  k_19 = t;
  t = SSL_table_put(i_19, j_19, k_19);
  b_20 = t;
  t = term_m_39;
  s_19 = t;
  t = b_20;
  d_20 = t;
  t = term_b_83;
  u_19 = t;
  t = d_20;
  e_20 = t;
  t = term_z_19;
  y_19 = t;
  t = SSL_table_put(s_19, u_19, y_19);
  t = term_c_83;
  return(t);
}
ATerm n_37 (ATerm t)
{
  t = term_d_83;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_83 = t;
  int f_83 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_37, i_37, k_37, t);
      ;
      LocalPopChoice(f_83);
    }
  else
    {
      t = e_83;
      t = Option_3_0(l_37, m_37, n_37, t);
    }
  return(t);
}
ATerm o_37 (ATerm t)
{
  ATerm k_102 = NULL,g_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  k_102 = t;
  j_20 = t;
  t = term_m_39;
  g_20 = t;
  t = j_20;
  k_20 = t;
  t = term_w_80;
  i_20 = t;
  t = SSL_table_put(g_20, i_20, k_102);
  t = (ATerm) ATmakeAppl(sym_Program_1, k_102);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm f_143 (ATerm), ATerm t)
{
  ATerm j_102 = NULL;
  j_102 = t;
  {
    ATerm g_83 = t;
    int h_83 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_83;
        t = f_143(t);
        ;
        LocalPopChoice(h_83);
      }
    else
      {
        t = g_83;
      }
    t = j_102;
    {
      ATerm p_37 (ATerm t)
      {
        ATerm j_83 = t;
        int k_83 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_83 = t;
            int m_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_83);
              }
            else
              {
                t = l_83;
                t = f_143(t);
                t = Cons_2_0(_id, p_37, t);
              }
            ;
            LocalPopChoice(k_83);
          }
        else
          {
            t = j_83;
            {
              ATerm m_102 = NULL,n_102 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_102 = ATgetFirst((ATermList) t);
                  n_102 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(n_102), (ATerm) ATmakeAppl(sym_Undefined_1, m_102));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_37, p_37, t);
    }
  }
  return(t);
}
ATerm s_37 (ATerm t)
{
  ATerm c_103 = NULL;
  c_103 = t;
  if(match_string(t, "--help"))
    {
      t = c_103;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = c_103;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = c_103;
        }
    }
  return(t);
}
ATerm t_37 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
  a_21 = t;
  t = term_m_39;
  w_20 = t;
  t = a_21;
  b_21 = t;
  t = term_e_82;
  x_20 = t;
  t = b_21;
  c_21 = t;
  t = term_z_19;
  y_20 = t;
  t = SSL_table_put(w_20, x_20, y_20);
  t = term_n_83;
  return(t);
}
ATerm v_37 (ATerm t)
{
  t = term_p_83;
  return(t);
}
ATerm w_37 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm e_143 (ATerm), ATerm t)
{
  ATerm y_102 = NULL,z_102 = NULL,a_103 = NULL,n_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,v_22 = NULL,x_22 = NULL;
  y_102 = t;
  t_20 = t;
  t = term_e_80;
  n_20 = t;
  t = t_20;
  u_20 = t;
  t = term_f_80;
  r_20 = t;
  t = u_20;
  v_20 = t;
  t = (ATerm) ATempty;
  s_20 = t;
  t = SSL_table_put(n_20, r_20, s_20);
  t = y_102;
  {
    ATerm r_37 (ATerm t)
    {
      ATerm q_83 = t;
      int r_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_143(t);
          ;
          LocalPopChoice(r_83);
        }
      else
        {
          t = q_83;
          {
            ATerm s_83 = t;
            int t_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(s_37, t_37, v_37, t);
                ;
                LocalPopChoice(t_83);
              }
            else
              {
                t = s_83;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_37, t);
    {
      ATerm u_83 = t;
      int v_83 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_103 = NULL;
          h_103 = t;
          {
            ATerm w_83 = t;
            int x_83 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_21 = NULL,u_21 = NULL;
                t = h_103;
                {
                  ATerm y_83 = t;
                  int z_83 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_21 = NULL,e_21 = NULL,i_21 = NULL,l_21 = NULL;
                      t = term_e_82;
                      i_21 = t;
                      t = term_m_39;
                      d_21 = t;
                      t = i_21;
                      l_21 = t;
                      t = term_e_82;
                      e_21 = t;
                      t = SSL_table_get(d_21, e_21);
                      {
                        ATerm a_84 = t;
                        int b_84 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_31 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL;
                            t = eval_config_0_0(t);
                            i_31 = t;
                            p_21 = t;
                            t = term_m_39;
                            n_21 = t;
                            t = p_21;
                            q_21 = t;
                            t = term_e_82;
                            o_21 = t;
                            t = SSL_table_put(n_21, o_21, i_31);
                            t = i_31;
                            ;
                            LocalPopChoice(b_84);
                          }
                        else
                          {
                            t = a_84;
                          }
                      }
                      ;
                      LocalPopChoice(z_83);
                    }
                  else
                    {
                      t = y_83;
                      t = fetch_1_0(w_37, t);
                    }
                  t = h_103;
                  t = default_system_usage_0_0(t);
                  u_21 = t;
                  t = term_n_79;
                  s_21 = t;
                  t = SSL_exit(s_21);
                }
                ;
                LocalPopChoice(x_83);
              }
            else
              {
                t = w_83;
                {
                  ATerm v_21 = NULL,x_21 = NULL,z_21 = NULL,a_22 = NULL,l_22 = NULL,m_22 = NULL;
                  t = term_y_82;
                  z_21 = t;
                  t = term_m_39;
                  v_21 = t;
                  t = z_21;
                  a_22 = t;
                  t = term_y_82;
                  x_21 = t;
                  t = SSL_table_get(v_21, x_21);
                  {
                    ATerm c_84 = t;
                    int d_84 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_31 = NULL,e_22 = NULL,f_22 = NULL,j_22 = NULL,k_22 = NULL;
                        t = eval_config_0_0(t);
                        w_31 = t;
                        j_22 = t;
                        t = term_m_39;
                        e_22 = t;
                        t = j_22;
                        k_22 = t;
                        t = term_y_82;
                        f_22 = t;
                        t = SSL_table_put(e_22, f_22, w_31);
                        t = w_31;
                        ;
                        LocalPopChoice(d_84);
                      }
                    else
                      {
                        t = c_84;
                      }
                    t = h_103;
                    t = default_system_about_0_0(t);
                    m_22 = t;
                    t = term_n_79;
                    l_22 = t;
                    t = SSL_exit(l_22);
                  }
                }
              }
          }
          ;
          LocalPopChoice(v_83);
        }
      else
        {
          t = u_83;
          {
            ATerm e_84 = t;
            int f_84 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_22 = NULL,p_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL;
                ATerm x_37 (ATerm t)
                {
                  ATerm y_37 (ATerm t)
                  {
                    if(((z_102 != NULL) && (z_102 != t)))
                      _fail(t);
                    else
                      z_102 = t;
                    return(t);
                  }
                  t = Undefined_1_0(y_37, t);
                  return(t);
                }
                t = fetch_1_0(x_37, t);
                r_22 = t;
                t = term_g_38;
                n_22 = t;
                t = r_22;
                s_22 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_102)), term_g_84);
                p_22 = t;
                t = SSL_printnl(n_22, p_22);
                t = (ATerm) ATmakeAppl(sym__2, term_g_38, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_102)), term_g_84));
                t = default_system_usage_0_0(t);
                u_22 = t;
                t = term_d_39;
                t_22 = t;
                t = SSL_exit(t_22);
                ;
                LocalPopChoice(f_84);
              }
            else
              {
                t = e_84;
              }
          }
        }
      a_103 = t;
      x_22 = t;
      t = term_e_80;
      v_22 = t;
      t = SSL_table_destroy(v_22);
      t = a_103;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_140 (ATerm), ATerm d_140 (ATerm), ATerm e_140 (ATerm), ATerm f_140 (ATerm), ATerm t)
{
  ATerm k_103 = NULL,z_22 = NULL,a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t = parse_options_1_0(c_140, t);
  k_103 = t;
  a_23 = t;
  t = term_h_84;
  z_22 = t;
  t = SSL_table_create(z_22);
  d_23 = t;
  t = term_h_84;
  b_23 = t;
  t = d_23;
  e_23 = t;
  t = term_i_84;
  c_23 = t;
  t = SSL_table_put(b_23, c_23, k_103);
  t = k_103;
  t = e_140(t);
  {
    ATerm k_84 = t;
    int l_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_140, t);
        ;
        LocalPopChoice(l_84);
      }
    else
      {
        t = k_84;
        {
          ATerm m_84 = t;
          int n_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_140(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(n_84);
            }
          else
            {
              t = m_84;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm a_38 (ATerm t)
{
  t = if_verbose2_1_0(i_38, t);
  return(t);
}
ATerm c_38 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm d_38 (ATerm t)
{
  ATerm f_23 = NULL,j_23 = NULL,k_23 = NULL,l_23 = NULL,m_23 = NULL,n_23 = NULL;
  l_23 = t;
  t = term_m_39;
  f_23 = t;
  t = l_23;
  m_23 = t;
  t = term_o_84;
  j_23 = t;
  t = m_23;
  n_23 = t;
  t = term_z_19;
  k_23 = t;
  t = SSL_table_put(f_23, j_23, k_23);
  t = term_q_84;
  return(t);
}
ATerm h_38 (ATerm t)
{
  t = term_r_84;
  return(t);
}
ATerm i_38 (ATerm t)
{
  ATerm l_103 = NULL,m_103 = NULL,o_23 = NULL,q_23 = NULL,r_23 = NULL,s_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,c_24 = NULL;
  l_103 = t;
  t = term_w_80;
  r_23 = t;
  t = term_m_39;
  o_23 = t;
  t = r_23;
  s_23 = t;
  t = term_w_80;
  q_23 = t;
  t = SSL_table_get(o_23, q_23);
  {
    ATerm s_84 = t;
    int v_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_32 = NULL,t_23 = NULL,u_23 = NULL,w_23 = NULL,x_23 = NULL;
        t = eval_config_0_0(t);
        b_32 = t;
        w_23 = t;
        t = term_m_39;
        t_23 = t;
        t = w_23;
        x_23 = t;
        t = term_w_80;
        u_23 = t;
        t = SSL_table_put(t_23, u_23, b_32);
        t = b_32;
        ;
        LocalPopChoice(v_84);
      }
    else
      {
        t = s_84;
      }
    m_103 = t;
    a_24 = t;
    t = term_g_38;
    y_23 = t;
    t = a_24;
    c_24 = t;
    t = (ATerm) ATinsert(ATempty, m_103);
    z_23 = t;
    t = SSL_printnl(y_23, z_23);
    t = l_103;
  }
  return(t);
}
ATerm iowrap_3_0 (ATerm l_139 (ATerm), ATerm m_139 (ATerm), ATerm n_139 (ATerm), ATerm t)
{
  ATerm z_37 (ATerm t)
  {
    ATerm w_84 = t;
    int x_84 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_139(t);
        ;
        LocalPopChoice(x_84);
      }
    else
      {
        t = w_84;
        {
          ATerm y_84 = t;
          int z_84 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(z_84);
            }
          else
            {
              t = y_84;
              {
                ATerm b_85 = t;
                int c_85 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(c_85);
                  }
                else
                  {
                    t = b_85;
                    {
                      ATerm d_85 = t;
                      int e_85 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_38, d_38, h_38, t);
                          ;
                          LocalPopChoice(e_85);
                        }
                      else
                        {
                          t = d_85;
                          {
                            ATerm f_85 = t;
                            int g_85 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(g_85);
                              }
                            else
                              {
                                t = f_85;
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
  ATerm b_38 (ATerm t)
  {
    ATerm n_103 = NULL,o_103 = NULL,e_32 = NULL;
    n_103 = t;
    {
      ATerm i_85 = t;
      int j_85 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_38 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_103 != NULL) && (o_103 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_103 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(j_38, t);
          ;
          LocalPopChoice(j_85);
        }
      else
        {
          t = i_85;
          t = term_k_85;
          o_103 = t;
        }
      t = not_null(o_103);
      t = ReadFromFile_0_0(t);
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_103, e_32);
      t = apply_strategy_1_0(l_139, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(z_37, n_139, a_38, b_38, t);
  return(t);
}
ATerm k_38 (ATerm t)
{
  t = _2_0(_id, l_38, t);
  return(t);
}
ATerm l_38 (ATerm t)
{
  ATerm l_85 = t;
  int m_85 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Specification_1_0(m_38, t);
      t = check_library_definitions_0_0(t);
      t = alltd_1_0(innermost_fusion_0_0, t);
      ;
      LocalPopChoice(m_85);
    }
  else
    {
      t = l_85;
      t = if_verbose2_1_0(y_38, t);
    }
  return(t);
}
ATerm m_38 (ATerm t)
{
  t = Cons_2_0(n_38, o_38, t);
  return(t);
}
ATerm n_38 (ATerm t)
{
  t = Signature_1_0(_id, t);
  return(t);
}
ATerm o_38 (ATerm t)
{
  t = Cons_2_0(t_38, u_38, t);
  return(t);
}
ATerm t_38 (ATerm t)
{
  t = Strategies_1_0(v_38, t);
  return(t);
}
ATerm u_38 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm v_38 (ATerm t)
{
  t = map_1_0(declare_inline_rule_0_0, t);
  return(t);
}
ATerm y_38 (ATerm t)
{
  ATerm p_103 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL;
  p_103 = t;
  f_24 = t;
  t = term_g_38;
  d_24 = t;
  t = f_24;
  g_24 = t;
  t = (ATerm) ATinsert(ATempty, term_o_85);
  e_24 = t;
  t = SSL_printnl(d_24, e_24);
  t = p_103;
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(k_38, _fail, default_usage_0_0, t);
  return(t);
}
