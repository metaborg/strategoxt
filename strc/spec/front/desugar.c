#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Strategies_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Wld_0;
Symbol sym_Op_2;
Symbol sym_Explode_2;
Symbol sym_Anno_2;
Symbol sym_App_2;
Symbol sym_RootApp_1;
Symbol sym_As_2;
Symbol sym_Tuple_1;
Symbol sym_List_1;
Symbol sym_ListTail_2;
Symbol sym_Con1_2;
Symbol sym_Con_3;
Symbol sym_Con3_3;
Symbol sym_Con4_4;
Symbol sym_StratRuleNoCond_2;
Symbol sym_StratRule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_SRDef_3;
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_CallNoArgs_1;
Symbol sym_SRule_1;
Symbol sym_Choice_2;
Symbol sym_RChoice_2;
Symbol sym_AM_2;
Symbol sym_ParenStrat_1;
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
Symbol sym_Where_1;
Symbol sym_Prim_2;
Symbol sym_PrimT_3;
Symbol sym_Path_2;
Symbol sym_StrCong_1;
Symbol sym_IntCong_1;
Symbol sym_RealCong_1;
Symbol sym_CharCong_1;
Symbol sym_AnnoCong_2;
Symbol sym_StrategyCurly_1;
Symbol sym_EmptyTupleCong_0;
Symbol sym_TupleCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_ModCong_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ListCong_2;
Symbol sym_ExplodeCong_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_SDefT_4;
Symbol sym_ExtSDefInl_4;
Symbol sym_ExtSDef_3;
Symbol sym_InfixApp_3;
Symbol sym_MA_2;
Symbol sym_BAM_3;
Symbol sym_Seqs_1;
Symbol sym_Choices_1;
Symbol sym_LChoices_1;
Symbol sym_Lets_2;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
Symbol sym__16;
Symbol sym__17;
Symbol sym__18;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Undefined_0;
Symbol sym_Anno_2;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
static void init_module_constructors (void)
{
  sym_Strategies_1 = ATmakeSymbol("Strategies", 1, ATfalse);
  ATprotectSymbol(sym_Strategies_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
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
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_SRule_1 = ATmakeSymbol("SRule", 1, ATfalse);
  ATprotectSymbol(sym_SRule_1);
  sym_Choice_2 = ATmakeSymbol("Choice", 2, ATfalse);
  ATprotectSymbol(sym_Choice_2);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_AM_2 = ATmakeSymbol("AM", 2, ATfalse);
  ATprotectSymbol(sym_AM_2);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
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
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ExplodeCong_2 = ATmakeSymbol("ExplodeCong", 2, ATfalse);
  ATprotectSymbol(sym_ExplodeCong_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_ExtSDefInl_4 = ATmakeSymbol("ExtSDefInl", 4, ATfalse);
  ATprotectSymbol(sym_ExtSDefInl_4);
  sym_ExtSDef_3 = ATmakeSymbol("ExtSDef", 3, ATfalse);
  ATprotectSymbol(sym_ExtSDef_3);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
}
ATerm term_w_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_v_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_r_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_c_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_m_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_q_11;
ATerm term_a_11;
ATerm term_a_10;
ATerm term_r_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_t_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_v_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Call_2, term_n_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_8);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_v_16);
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_d_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_g_18);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_p_18, term_q_18);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_w_18, term_j_18);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_z_19);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_p_18);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_n_21);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_j_18);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym__2, term_g_22, term_j_18);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym__2, term_n_21, term_j_18);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(sym__2, term_u_16, term_d_22);
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_j_18);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm debug_1_0 (ATerm h_100 (ATerm), ATerm t);
static ATerm a_8 (ATerm h_1, ATerm i_1, ATerm t);
static ATerm b_8 (ATerm t_1, ATerm u_1, ATerm t);
static ATerm h_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm f_91 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm i_4 (ATerm c_26, ATerm d_26, ATerm e_26, ATerm t);
ATerm genzip_4_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm y_105 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm i_27 (ATerm j_24, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm d_94 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm m_4 (ATerm a_21, ATerm b_21, ATerm e_21, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm desugar_spec_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t);
static ATerm n_4 (ATerm j_36, ATerm k_36, ATerm t);
static ATerm o_4 (ATerm b_35, ATerm c_35, ATerm t);
static ATerm q_4 (ATerm j_100 (ATerm), ATerm w_237, ATerm h_35, ATerm t);
static ATerm p_4 (ATerm x_34, ATerm y_34, ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm output_1_0 (ATerm d_121 (ATerm), ATerm t);
static ATerm s_42 (ATerm m_42, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm r_4 (ATerm d_35, ATerm t);
static ATerm s_4 (ATerm t_59, ATerm u_59, ATerm t);
static ATerm t_4 (ATerm l_36, ATerm m_36, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm g_44 (ATerm e_43, ATerm t);
static ATerm h_44 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t);
static ATerm i_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t);
static ATerm u_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm e_121 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm w_4 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm e_40, ATerm f_40, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_4 (ATerm o_45, ATerm p_45, ATerm n_45, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm v_4 (ATerm w_42, ATerm x_42, ATerm t);
ATerm foldr_2_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_101 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
ATerm need_help_1_0 (ATerm u_120 (ATerm), ATerm t);
ATerm map_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_105 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm y_4 (ATerm f_47, ATerm g_47, ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
static ATerm d_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm x_122 (ATerm), ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
static ATerm j_6 (ATerm t);
ATerm parse_options_1_0 (ATerm w_122 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm p_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm debug_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm a_0 = NULL,b_0 = NULL,m_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = h_100(t);
  b_0 = t;
  t = term_v_6;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_0), b_0);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = a_0;
  return(t);
}
static ATerm a_8 (ATerm h_1, ATerm i_1, ATerm t)
{
  t = h_1;
  {
    ATerm w_6 = t;
    if((PushChoice() == 0))
      {
        ATerm k_1 = NULL,l_1 = NULL,o_1 = NULL,q_1 = NULL,p_0 = NULL;
        q_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_1 = ATgetFirst((ATermList) t);
            o_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_1);
        k_1 = t;
        t = o_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_1), l_1);
        p_0 = t;
        t = SSLsetAnnotations(p_0, k_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_x_6, h_1);
  return(t);
}
static ATerm b_8 (ATerm t_1, ATerm u_1, ATerm t)
{
  t = t_1;
  {
    ATerm y_6 = t;
    if((PushChoice() == 0))
      {
        ATerm d_2 = NULL,f_2 = NULL,g_2 = NULL,i_2 = NULL,q_0 = NULL;
        i_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_2 = ATgetFirst((ATermList) t);
            g_2 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_2);
        d_2 = t;
        t = g_2;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_2), f_2);
        q_0 = t;
        t = SSLsetAnnotations(q_0, d_2);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, t_1);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,f_0 = NULL;
  y_2 = t;
  t = SSL_explode_term(y_2);
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
          {
            z_2 = ATgetFirst((ATermList) d_7);
            {
              ATerm e_7 = (ATerm) ATgetNext((ATermList) d_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(y_2);
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            ATerm h_7 = ATgetFirst((ATermList) g_7);
            ATerm i_7 = (ATerm) ATgetNext((ATermList) g_7);
            if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
              {
                f_0 = ATgetFirst((ATermList) i_7);
                {
                  ATerm j_7 = (ATerm) ATgetNext((ATermList) i_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, f_0), z_2));
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm s_3 = NULL,t_3 = NULL;
  if(match_cons(t, sym__2))
    {
      s_3 = ATgetArgument(t, 0);
      t_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, t_3), s_3));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL;
  if(match_cons(t, sym__2))
    {
      w_3 = ATgetArgument(t, 0);
      x_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, x_3), w_3));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm d_5 = NULL,g_5 = NULL;
  if(match_cons(t, sym__2))
    {
      d_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, g_5), d_5));
  return(t);
}
static ATerm z_0 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm i_5 = NULL,l_5 = NULL;
  if(match_cons(t, sym__2))
    {
      i_5 = ATgetArgument(t, 0);
      l_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_m_7, (ATerm) ATinsert(ATinsert(ATempty, l_5), i_5));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL,q_2 = NULL,s_2 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_2 = ATgetArgument(t, 0);
      s_2 = ATgetArgument(t, 1);
      {
        ATerm w_2 = NULL;
        t = s_2;
        t = foldr_2_0(h_0, j_0, t);
        w_2 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_2, w_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_2 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_2, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_2 = ATgetArgument(t, 0);
              {
                ATerm t_0 = NULL;
                t = q_2;
                {
                  ATerm p_7 = t;
                  int q_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_r_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_t_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_u_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_v_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_w_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(q_7);
                    }
                  else
                    {
                      t = p_7;
                      {
                        ATerm v_0 = NULL;
                        t = SSL_explode_string(q_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                              _fail(t);
                            {
                              ATerm y_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
                                {
                                  v_0 = ATgetFirst((ATermList) y_7);
                                  {
                                    ATerm c_8 = (ATerm) ATgetNext((ATermList) y_7);
                                    if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
                                      {
                                        ATerm e_8 = ATgetFirst((ATermList) c_8);
                                        if(((ATgetType(e_8) != AT_INT) || (ATgetInt((ATermInt) e_8) != 39)))
                                          _fail(t);
                                        {
                                          ATerm g_8 = (ATerm) ATgetNext((ATermList) c_8);
                                          if(((ATgetType(g_8) != AT_LIST) || !(ATisEmpty(g_8))))
                                            _fail(t);
                                        }
                                      }
                                    else
                                      _fail(t);
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        else
                          _fail(t);
                        t = v_0;
                      }
                    }
                }
                t_0 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, t_0);
              }
            }
          else
            {
              ATerm h_8 = t;
              int j_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_2 = ATgetArgument(t, 0);
                      {
                        ATerm l_8 = ATgetArgument(t, 1);
                      }
                      o_2 = ATgetArgument(t, 2);
                      j_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_2, o_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_2), (ATerm) ATempty));
                }
              else
                {
                  t = h_8;
                  {
                    ATerm m_8 = t;
                    int o_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_2 = ATgetArgument(t, 0);
                            {
                              ATerm p_8 = ATgetArgument(t, 1);
                            }
                            o_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(o_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_2, o_2, term_t_8);
                      }
                    else
                      {
                        t = m_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_2 = ATgetArgument(t, 0);
                            s_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_2, s_2, term_t_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_2 = ATgetArgument(t, 0);
                                s_2 = ATgetArgument(t, 1);
                                {
                                  static ATerm r_0 (ATerm t)
                                  {
                                    t = s_2;
                                    return(t);
                                  }
                                  t = q_2;
                                  t = foldr_2_0(r_0, s_0, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_2 = ATgetArgument(t, 0);
                                    t = q_2;
                                    t = foldr_2_0(u_0, w_0, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_2 = ATgetArgument(t, 0);
                                        t = q_2;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            k_2 = ATgetFirst((ATermList) t);
                                            m_2 = (ATerm) ATgetNext((ATermList) t);
                                            t = m_2;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm u_8 = t;
                                                int a_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = a_8(q_2, p_2, t);
                                                    LocalPopChoice(a_9);
                                                  }
                                                else
                                                  {
                                                    t = u_8;
                                                    t = k_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = a_8(q_2, p_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = a_8(q_2, p_2, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_2 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_2));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_2 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_2));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_2 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_2));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_2 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_2));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_2 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_2), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_2 = ATgetArgument(t, 0);
                                                                s_2 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_2), s_2);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_2 = ATgetArgument(t, 0);
                                                                    s_2 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm x_0 (ATerm t)
                                                                      {
                                                                        t = s_2;
                                                                        return(t);
                                                                      }
                                                                      t = q_2;
                                                                      t = foldr_2_0(x_0, y_0, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_2 = ATgetArgument(t, 0);
                                                                        t = q_2;
                                                                        t = foldr_2_0(z_0, a_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_2 = ATgetArgument(t, 0);
                                                                            s_2 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATinsert(CheckATermList(s_2), q_2));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_2 = ATgetArgument(t, 0);
                                                                                t = q_2;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    k_2 = ATgetFirst((ATermList) t);
                                                                                    m_2 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = m_2;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm d_9 = t;
                                                                                        int j_9 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = b_8(q_2, p_2, t);
                                                                                            LocalPopChoice(j_9);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = d_9;
                                                                                            t = k_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = b_8(q_2, p_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = b_8(q_2, p_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_l_9;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                        s_2 = ATgetArgument(t, 1);
                                                                                        t = s_2;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            n_2 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_9, (ATerm) ATinsert(ATinsert(ATempty, n_2), q_2));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                            t = q_2;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                s_2 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_2, s_2, term_p_9);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                    s_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_2, s_2, term_p_9);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                        s_2 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_2, (ATerm)ATempty, s_2);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                            s_2 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, s_2, q_2);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                                s_2 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_2, s_2, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_2, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                                        s_2 = ATgetArgument(t, 1);
                                                                                                                        o_2 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_2, s_2, (ATerm)ATempty, o_2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                                            s_2 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, s_2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_2 = ATgetArgument(t, 0);
                                                                                                                                s_2 = ATgetArgument(t, 1);
                                                                                                                                o_2 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_2, s_2, (ATerm)ATempty, o_2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_2 = ATgetArgument(t, 0);
                                                                                                                                    s_2 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, s_2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_2 = ATgetArgument(t, 0);
                                                                                                                                        s_2 = ATgetArgument(t, 1);
                                                                                                                                        o_2 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_2, s_2, (ATerm)ATempty, o_2);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_2 = ATgetArgument(t, 0);
                                                                                                                                            s_2 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_2, (ATerm)ATempty, (ATerm)ATempty, s_2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm q_9 = ATgetArgument(t, 0);
                                                                                                                                                s_2 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, s_2);
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
                      }
                  }
                }
            }
        }
    }
  return(t);
}
ATerm Expl_0_0 (ATerm t)
{
  ATerm d_8 = NULL,f_8 = NULL,k_8 = NULL;
  f_8 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      k_8 = ATgetArgument(t, 0);
      d_8 = ATgetArgument(t, 1);
      {
        ATerm s_8 = NULL,v_8 = NULL,w_8 = NULL,x_8 = NULL;
        t = f_8;
        t = new_0_0(t);
        s_8 = t;
        t = new_0_0(t);
        v_8 = t;
        t = new_0_0(t);
        w_8 = t;
        t = new_0_0(t);
        x_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, x_8), w_8), v_8), s_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, s_8), (ATerm) ATmakeAppl(sym_Var_1, w_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, k_8, (ATerm)ATmakeAppl(sym_Var_1, s_8), (ATerm) ATmakeAppl(sym_Var_1, v_8)), (ATerm) ATmakeAppl(sym_BAM_3, d_8, (ATerm)ATmakeAppl(sym_Var_1, w_8), (ATerm) ATmakeAppl(sym_Var_1, x_8)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_r_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, x_8)), (ATerm) ATmakeAppl(sym_Var_1, v_8))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          k_8 = ATgetArgument(t, 0);
          {
            ATerm y_8 = NULL,z_8 = NULL,b_9 = NULL,c_9 = NULL;
            t = f_8;
            t = new_0_0(t);
            b_9 = t;
            t = k_8;
            {
              static ATerm b_1 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      y_8 = ATgetArgument(t, 0);
                    if(((z_8 != NULL) && (z_8 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      z_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, b_9);
                return(t);
              }
              t = oncetd_1_0(b_1, t);
            }
            c_9 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, b_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_r_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_8)), not_null(y_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, b_9)), (ATerm) ATmakeAppl(sym_Build_1, c_9))));
          }
        }
      else
        {
          ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              k_8 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = f_8;
          t = new_0_0(t);
          g_9 = t;
          t = new_0_0(t);
          h_9 = t;
          t = k_8;
          {
            static ATerm c_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((e_9 != NULL) && (e_9 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    e_9 = ATgetArgument(t, 0);
                  if(((f_9 != NULL) && (f_9 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    f_9 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, g_9);
              return(t);
            }
            t = oncetd_1_0(c_1, t);
          }
          i_9 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, g_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, i_9), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, h_9)), (ATerm) ATmakeAppl(sym_PrimT_3, term_a_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, h_9))))), (ATerm)ATmakeAppl(sym_Var_1, g_9), (ATerm) ATmakeAppl(sym_Op_2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_9)), not_null(e_9)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm k_9 = NULL,n_9 = NULL;
  k_9 = t;
  if(match_cons(t, sym_Match_1))
    {
      n_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm e_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,z_9 = NULL;
        t = k_9;
        t = new_0_0(t);
        u_9 = t;
        t = n_9;
        {
          static ATerm j_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((s_9 != NULL) && (s_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_9 = ATgetArgument(t, 0);
                if(((t_9 != NULL) && (t_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  t_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, u_9), s_9);
            return(t);
          }
          t = pat_td_1_0(j_1, t);
        }
        z_9 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, z_9), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_a_11, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, u_9))), (ATerm) ATmakeAppl(sym_Match_1, not_null(t_9))))));
        LocalPopChoice(z_10);
      }
    else
      {
        t = e_10;
        {
          ATerm b_11 = t;
          int g_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_10 = NULL,c_10 = NULL,d_10 = NULL;
              t = k_9;
              t = new_0_0(t);
              c_10 = t;
              t = n_9;
              {
                static ATerm n_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((b_10 != NULL) && (b_10 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        b_10 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, c_10);
                  return(t);
                }
                t = pat_td_1_0(n_1, t);
              }
              d_10 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, c_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, d_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, c_10)), not_null(b_10))));
              LocalPopChoice(g_11);
            }
          else
            {
              t = b_11;
              {
                ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL,m_10 = NULL;
                t = k_9;
                t = new_0_0(t);
                h_10 = t;
                t = n_9;
                {
                  static ATerm p_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((g_10 != NULL) && (g_10 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          g_10 = ATgetArgument(t, 0);
                        if(((f_10 != NULL) && (f_10 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          f_10 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, h_10);
                    return(t);
                  }
                  t = pat_td_1_0(p_1, t);
                }
                m_10 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, h_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(f_10)), not_null(g_10)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_91(t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm p_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL;
        q_14 = t;
        if(match_cons(t, sym_Op_2))
          {
            t_14 = ATgetArgument(t, 0);
            u_14 = ATgetArgument(t, 1);
            {
              ATerm m_1 = NULL,r_1 = NULL,d_1 = NULL;
              t = SSLgetAnnotations(q_14);
              m_1 = t;
              t = u_14;
              {
                static ATerm s_1 (ATerm t)
                {
                  t = pat_td_1_0(f_91, t);
                  return(t);
                }
                t = fetch_1_0(s_1, t);
              }
              r_1 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, t_14, r_1);
              d_1 = t;
              t = SSLsetAnnotations(d_1, m_1);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                t_14 = ATgetArgument(t, 0);
                u_14 = ATgetArgument(t, 1);
                {
                  ATerm l_11 = t;
                  int m_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_2 = NULL,l_2 = NULL,e_1 = NULL;
                      t = SSLgetAnnotations(q_14);
                      c_2 = t;
                      t = u_14;
                      t = pat_td_1_0(f_91, t);
                      l_2 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, t_14, l_2);
                      e_1 = t;
                      t = SSLsetAnnotations(e_1, c_2);
                      LocalPopChoice(m_11);
                    }
                  else
                    {
                      t = l_11;
                      {
                        ATerm n_3 = NULL,y_3 = NULL,f_1 = NULL;
                        t = SSLgetAnnotations(q_14);
                        n_3 = t;
                        t = t_14;
                        t = pat_td_1_0(f_91, t);
                        y_3 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, y_3, u_14);
                        f_1 = t;
                        t = SSLsetAnnotations(f_1, n_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    t_14 = ATgetArgument(t, 0);
                    u_14 = ATgetArgument(t, 1);
                    p_14 = ATgetArgument(t, 2);
                    {
                      ATerm j_5 = NULL,u_5 = NULL,g_1 = NULL;
                      t = SSLgetAnnotations(q_14);
                      j_5 = t;
                      t = p_14;
                      {
                        static ATerm v_1 (ATerm t)
                        {
                          t = pat_td_1_0(f_91, t);
                          return(t);
                        }
                        t = fetch_1_0(v_1, t);
                      }
                      u_5 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, t_14, u_14, u_5);
                      g_1 = t;
                      t = SSLsetAnnotations(g_1, j_5);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        t_14 = ATgetArgument(t, 0);
                        u_14 = ATgetArgument(t, 1);
                        p_14 = ATgetArgument(t, 2);
                        {
                          ATerm i_6 = NULL,o_6 = NULL,z_7 = NULL;
                          t = SSLgetAnnotations(q_14);
                          i_6 = t;
                          t = p_14;
                          {
                            static ATerm w_1 (ATerm t)
                            {
                              t = pat_td_1_0(f_91, t);
                              return(t);
                            }
                            t = fetch_1_0(w_1, t);
                          }
                          o_6 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, t_14, u_14, o_6);
                          z_7 = t;
                          t = SSLsetAnnotations(z_7, i_6);
                        }
                      }
                    else
                      {
                        ATerm l_7 = NULL,s_7 = NULL,y_10 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            t_14 = ATgetArgument(t, 0);
                            u_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(q_14);
                        l_7 = t;
                        t = u_14;
                        t = pat_td_1_0(f_91, t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, t_14, s_7);
                        y_10 = t;
                        t = SSLsetAnnotations(y_10, l_7);
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
  ATerm s_15 = NULL,t_15 = NULL;
  s_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      t_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm n_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_15 = NULL,y_15 = NULL,a_16 = NULL,e_16 = NULL;
        t = s_15;
        t = new_0_0(t);
        a_16 = t;
        t = t_15;
        {
          static ATerm x_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((u_15 != NULL) && (u_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_15 = ATgetArgument(t, 0);
                if(((y_15 != NULL) && (y_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  y_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, a_16);
            return(t);
          }
          t = pat_td_1_0(x_1, t);
        }
        e_16 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_q_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_15)), not_null(u_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_16)))), (ATerm) ATmakeAppl(sym_Build_1, e_16)));
        LocalPopChoice(p_11);
      }
    else
      {
        t = n_11;
        {
          ATerm s_11 = t;
          int u_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_16 = NULL,l_16 = NULL,n_16 = NULL;
              t = s_15;
              t = new_0_0(t);
              l_16 = t;
              t = t_15;
              {
                static ATerm y_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((h_16 != NULL) && (h_16 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        h_16 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, l_16);
                  return(t);
                }
                t = pat_td_1_0(y_1, t);
              }
              n_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, l_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(h_16), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, l_16)))), (ATerm) ATmakeAppl(sym_Build_1, n_16)));
              LocalPopChoice(u_11);
            }
          else
            {
              t = s_11;
              {
                ATerm q_16 = NULL,s_16 = NULL,a_17 = NULL,b_17 = NULL;
                t = s_15;
                t = new_0_0(t);
                a_17 = t;
                t = t_15;
                {
                  static ATerm z_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((q_16 != NULL) && (q_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          q_16 = ATgetArgument(t, 0);
                        if(((s_16 != NULL) && (s_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          s_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_17);
                    return(t);
                  }
                  t = pat_td_1_0(z_1, t);
                }
                b_17 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_17), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(q_16), not_null(s_16), (ATerm) ATmakeAppl(sym_Var_1, a_17))), (ATerm) ATmakeAppl(sym_Build_1, b_17)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm l_17 = NULL,o_17 = NULL,p_17 = NULL,s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      s_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, s_17, t_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          s_17 = ATgetArgument(t, 0);
          t = s_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_17 = ATgetFirst((ATermList) t);
              o_17 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, l_17, (ATerm) ATmakeAppl(sym_LChoices_1, o_17));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_w_11;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              s_17 = ATgetArgument(t, 0);
              t = s_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_17 = ATgetFirst((ATermList) t);
                  o_17 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, l_17, (ATerm) ATmakeAppl(sym_Choices_1, o_17));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_w_11;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  s_17 = ATgetArgument(t, 0);
                  t = s_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      l_17 = ATgetFirst((ATermList) t);
                      o_17 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, l_17, (ATerm) ATmakeAppl(sym_Seqs_1, o_17));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_p_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      s_17 = ATgetArgument(t, 0);
                      t_17 = ATgetArgument(t, 1);
                      p_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, t_17, (ATerm) ATmakeAppl(sym_Op_2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, p_17), s_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          s_17 = ATgetArgument(t, 0);
                          t_17 = ATgetArgument(t, 1);
                          p_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, p_17)), s_17), (ATerm) ATmakeAppl(sym_Build_1, t_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              s_17 = ATgetArgument(t, 0);
                              t_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, s_17, (ATerm) ATmakeAppl(sym_Match_1, t_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  s_17 = ATgetArgument(t, 0);
                                  t_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_17), t_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      s_17 = ATgetArgument(t, 0);
                                      t_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, t_17), s_17);
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
static ATerm a_2 (ATerm t)
{
  ATerm x_11 = t;
  if((PushChoice() == 0))
    {
      ATerm w_19 = NULL,x_19 = NULL,a_20 = NULL,j_11 = NULL;
      a_20 = t;
      if(match_cons(t, sym_Var_1))
        {
          x_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_20);
      w_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, x_19);
      j_11 = t;
      t = SSLsetAnnotations(j_11, w_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_11;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_20 = NULL,h_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_20 = ATgetFirst((ATermList) t);
      h_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_20, h_20);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm i_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      if(match_cons(z_11, sym__2))
        {
          i_20 = ATgetArgument(z_11, 0);
          k_20 = ATgetArgument(z_11, 1);
        }
      else
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(match_cons(a_12, sym__2))
          {
            l_20 = ATgetArgument(a_12, 0);
            m_20 = ATgetArgument(a_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_20), i_20), (ATerm) ATinsert(CheckATermList(m_20), k_20));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_20 = ATgetFirst((ATermList) t);
      p_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_20, p_20);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_12 = ATgetArgument(t, 0);
      if(match_cons(f_12, sym__2))
        {
          q_20 = ATgetArgument(f_12, 0);
          r_20 = ATgetArgument(f_12, 1);
        }
      else
        _fail(t);
      {
        ATerm g_12 = ATgetArgument(t, 1);
        if(match_cons(g_12, sym__2))
          {
            s_20 = ATgetArgument(g_12, 0);
            t_20 = ATgetArgument(g_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_20), q_20), (ATerm) ATinsert(CheckATermList(t_20), r_20));
  return(t);
}
static ATerm i_4 (ATerm c_26, ATerm d_26, ATerm e_26, ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL,o_11 = NULL;
  t = e_26;
  t = fetch_1_0(a_2, t);
  t = e_26;
  t = genzip_4_0(b_2, e_2, h_2, LiftPrimArg_0_0, t);
  v_19 = t;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  q_19 = t;
  t = r_19;
  t = concat_0_0(t);
  t_19 = t;
  t = s_19;
  t = genzip_4_0(r_2, t_2, u_2, _id, t);
  u_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_19, u_19);
  o_11 = t;
  t = SSLsetAnnotations(o_11, q_19);
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      {
        ATerm h_12 = ATgetArgument(t, 1);
        if(match_cons(h_12, sym__2))
          {
            o_19 = ATgetArgument(h_12, 0);
            p_19 = ATgetArgument(h_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, n_19, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, o_19), (ATerm) ATmakeAppl(sym_CallT_3, c_26, d_26, p_19)));
  return(t);
}
ATerm genzip_4_0 (ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm t)
{
  static ATerm h_21 (ATerm t)
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_97(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        {
          ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL,c_21 = NULL,d_21 = NULL,r_11 = NULL;
          t = m_97(t);
          d_21 = t;
          if(match_cons(t, sym__2))
            {
              x_20 = ATgetArgument(t, 0);
              y_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(d_21);
          w_20 = t;
          t = x_20;
          t = o_97(t);
          z_20 = t;
          t = y_20;
          t = h_21(t);
          c_21 = t;
          t = (ATerm) ATmakeAppl(sym__2, z_20, c_21);
          r_11 = t;
          t = SSLsetAnnotations(r_11, w_20);
          t = n_97(t);
        }
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_105 (ATerm), ATerm t)
{
  static ATerm o_23 (ATerm t)
  {
    ATerm u_22 = NULL,b_23 = NULL,n_23 = NULL;
    n_23 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_22 = ATgetFirst((ATermList) t);
        b_23 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_8 = NULL,n_8 = NULL,t_11 = NULL;
          t = SSLgetAnnotations(n_23);
          i_8 = t;
          t = b_23;
          t = o_23(t);
          n_8 = t;
          t = (ATerm) ATinsert(CheckATermList(n_8), u_22);
          t_11 = t;
          t = SSLsetAnnotations(t_11, i_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_23;
        t = y_105(t);
      }
    return(t);
  }
  t = o_23(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm s_23 = NULL,t_23 = NULL,w_23 = NULL;
  s_23 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = s_23;
    }
  else
    {
      static ATerm v_2 (ATerm t)
      {
        t = not_null(w_23);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_23 = ATgetFirst((ATermList) t);
          if(((w_23 != NULL) && (w_23 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            w_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_23;
      t = at_end_1_0(v_2, t);
    }
  return(t);
}
static ATerm i_27 (ATerm j_24, ATerm t)
{
  ATerm x_24 = NULL;
  t = j_24;
  {
    ATerm l_12 = t;
    if((PushChoice() == 0))
      {
        ATerm y_24 = NULL,e_25 = NULL,f_25 = NULL,v_11 = NULL;
        f_25 = t;
        if(match_cons(t, sym_Var_1))
          {
            e_25 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_25);
        y_24 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, e_25);
        v_11 = t;
        t = SSLsetAnnotations(v_11, y_24);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_12;
      }
  }
  t = new_0_0(t);
  x_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, x_24), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, j_24), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, x_24)))), (ATerm) ATmakeAppl(sym_Var_1, x_24)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm y_26 = NULL,e_27 = NULL;
  y_26 = t;
  if(match_cons(t, sym_Var_1))
    {
      e_27 = ATgetArgument(t, 0);
      {
        ATerm m_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_27(y_26, t);
            LocalPopChoice(o_12);
          }
        else
          {
            t = m_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_p_9, (ATerm) ATmakeAppl(sym_Var_1, e_27)));
          }
      }
    }
  else
    {
      t = i_27(y_26, t);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm r_12 = t;
  if((PushChoice() == 0))
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,b_12 = NULL;
      q_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          p_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(q_10);
      o_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, p_10);
      b_12 = t;
      t = SSLsetAnnotations(b_12, o_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_12;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm b_3 (ATerm t)
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
static ATerm c_3 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm s_12 = ATgetArgument(t, 0);
      if(match_cons(s_12, sym__2))
        {
          t_10 = ATgetArgument(s_12, 0);
          u_10 = ATgetArgument(s_12, 1);
        }
      else
        _fail(t);
      {
        ATerm u_12 = ATgetArgument(t, 1);
        if(match_cons(u_12, sym__2))
          {
            v_10 = ATgetArgument(u_12, 0);
            w_10 = ATgetArgument(u_12, 1);
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
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm x_10 = NULL,c_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_10 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_10, c_11);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_13 = ATgetArgument(t, 0);
      if(match_cons(t_13, sym__2))
        {
          d_11 = ATgetArgument(t_13, 0);
          e_11 = ATgetArgument(t_13, 1);
        }
      else
        _fail(t);
      {
        ATerm u_13 = ATgetArgument(t, 1);
        if(match_cons(u_13, sym__2))
          {
            f_11 = ATgetArgument(u_13, 0);
            k_11 = ATgetArgument(u_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(f_11), d_11), (ATerm) ATinsert(CheckATermList(k_11), e_11));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm v_13 = t;
  if((PushChoice() == 0))
    {
      ATerm d_13 = NULL,h_13 = NULL,i_13 = NULL,d_12 = NULL;
      i_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_13);
      d_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_13);
      d_12 = t;
      t = SSLsetAnnotations(d_12, d_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_13;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_13 = ATgetFirst((ATermList) t);
      k_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_13, k_13);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      if(match_cons(w_13, sym__2))
        {
          l_13 = ATgetArgument(w_13, 0);
          m_13 = ATgetArgument(w_13, 1);
        }
      else
        _fail(t);
      {
        ATerm y_13 = ATgetArgument(t, 1);
        if(match_cons(y_13, sym__2))
          {
            n_13 = ATgetArgument(y_13, 0);
            o_13 = ATgetArgument(y_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_13), l_13), (ATerm) ATinsert(CheckATermList(o_13), m_13));
  return(t);
}
static ATerm k_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_y_11;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm p_13 = NULL,r_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_13 = ATgetFirst((ATermList) t);
      r_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_13, r_13);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm s_13 = NULL,z_13 = NULL,a_14 = NULL,c_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_14 = ATgetArgument(t, 0);
      if(match_cons(e_14, sym__2))
        {
          s_13 = ATgetArgument(e_14, 0);
          z_13 = ATgetArgument(e_14, 1);
        }
      else
        _fail(t);
      {
        ATerm f_14 = ATgetArgument(t, 1);
        if(match_cons(f_14, sym__2))
          {
            a_14 = ATgetArgument(f_14, 0);
            c_14 = ATgetArgument(f_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_14), s_13), (ATerm) ATinsert(CheckATermList(c_14), z_13));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL,z_32 = NULL;
  r_32 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      s_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
      q_32 = ATgetArgument(t, 2);
      {
        ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,n_10 = NULL,c_12 = NULL;
        t = q_32;
        t = fetch_1_0(x_2, t);
        t = q_32;
        t = genzip_4_0(a_3, b_3, c_3, LiftPrimArg_0_0, t);
        n_10 = t;
        if(match_cons(t, sym__2))
          {
            i_10 = ATgetArgument(t, 0);
            j_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_10);
        y_9 = t;
        t = i_10;
        t = concat_0_0(t);
        k_10 = t;
        t = j_10;
        t = genzip_4_0(d_3, e_3, f_3, _id, t);
        l_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_10, l_10);
        c_12 = t;
        t = SSLsetAnnotations(c_12, y_9);
        if(match_cons(t, sym__2))
          {
            v_9 = ATgetArgument(t, 0);
            {
              ATerm h_14 = ATgetArgument(t, 1);
              if(match_cons(h_14, sym__2))
                {
                  w_9 = ATgetArgument(h_14, 0);
                  x_9 = ATgetArgument(h_14, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, v_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, w_9), (ATerm) ATmakeAppl(sym_PrimT_3, s_32, z_32, x_9)));
      }
    }
  else
    {
      ATerm i_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,e_12 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          s_32 = ATgetArgument(t, 0);
          z_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_32;
      t = fetch_1_0(g_3, t);
      t = z_32;
      t = genzip_4_0(h_3, i_3, j_3, LiftPrimArg_0_0, t);
      c_13 = t;
      if(match_cons(t, sym__2))
        {
          y_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_13);
      x_12 = t;
      t = y_12;
      t = concat_0_0(t);
      a_13 = t;
      t = z_12;
      t = genzip_4_0(k_3, l_3, m_3, _id, t);
      b_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_13, b_13);
      e_12 = t;
      t = SSLsetAnnotations(e_12, x_12);
      if(match_cons(t, sym__2))
        {
          i_12 = ATgetArgument(t, 0);
          {
            ATerm j_14 = ATgetArgument(t, 1);
            if(match_cons(j_14, sym__2))
              {
                v_12 = ATgetArgument(j_14, 0);
                w_12 = ATgetArgument(j_14, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, i_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_12), (ATerm) ATmakeAppl(sym_PrimT_3, s_32, (ATerm)ATempty, w_12)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm u_98 (ATerm), ATerm v_98 (ATerm), ATerm t)
{
  static ATerm c_33 (ATerm t)
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_98(t);
        t = c_33(t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = v_98(t);
      }
    return(t);
  }
  t = c_33(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,j_34 = NULL;
  j_34 = t;
  if(match_cons(t, sym_Con_3))
    {
      b_34 = ATgetArgument(t, 0);
      c_34 = ATgetArgument(t, 1);
      d_34 = ATgetArgument(t, 2);
      {
        ATerm z_14 = NULL,n_12 = NULL;
        t = SSLgetAnnotations(j_34);
        z_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, b_34, c_34, d_34);
        n_12 = t;
        t = SSLsetAnnotations(n_12, z_14);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = j_34;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm m_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(o_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_14;
    }
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  b_36 = t;
  if(match_cons(t, sym_Con_3))
    {
      c_36 = ATgetArgument(t, 0);
      d_36 = ATgetArgument(t, 1);
      a_36 = ATgetArgument(t, 2);
      {
        ATerm q_15 = NULL,p_12 = NULL;
        t = SSLgetAnnotations(b_36);
        q_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, c_36, d_36, a_36);
        p_12 = t;
        t = SSLsetAnnotations(p_12, q_15);
      }
    }
  else
    {
      ATerm m_16 = NULL,q_12 = NULL;
      if(match_cons(t, sym_App_2))
        {
          c_36 = ATgetArgument(t, 0);
          d_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_36);
      m_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, c_36, d_36);
      q_12 = t;
      t = SSLsetAnnotations(q_12, m_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm o_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(p_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = o_14;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      p_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_36;
  if(match_cons(t, sym_StratRule_3))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
      s_36 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, r_36), (ATerm) ATmakeAppl(sym_Where_1, s_36)), q_36));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          q_36 = ATgetArgument(t, 0);
          r_36 = ATgetArgument(t, 1);
          s_36 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = q_36;
      t = pureterm_0_0(t);
      t = r_36;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, r_36)), (ATerm) ATmakeAppl(sym_Where_1, s_36)), (ATerm) ATmakeAppl(sym_Match_1, q_36)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm d_94 (ATerm), ATerm t)
{
  static ATerm z_36 (ATerm t)
  {
    ATerm r_14 = t;
    int s_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_94(t);
        LocalPopChoice(s_14);
      }
    else
      {
        t = r_14;
        t = SRTS_one(z_36, t);
      }
    return(t);
  }
  t = z_36(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm m_4 (ATerm a_21, ATerm b_21, ATerm e_21, ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL,g_37 = NULL;
  t = new_0_0(t);
  e_37 = t;
  t = a_21;
  {
    static ATerm q_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_14 = ATgetArgument(t, 0);
          if(match_cons(v_14, sym_Var_1))
            {
              if(((d_37 != NULL) && (d_37 != ATgetArgument(v_14, 0))))
                _fail(ATgetArgument(v_14, 0));
              else
                d_37 = ATgetArgument(v_14, 0);
            }
          else
            _fail(t);
          if(((b_37 != NULL) && (b_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            b_37 = ATgetArgument(t, 1);
          {
            ATerm w_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, d_37);
      return(t);
    }
    t = oncetd_1_0(q_3, t);
  }
  f_37 = t;
  t = b_21;
  {
    static ATerm r_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_14 = ATgetArgument(t, 0);
          if(match_cons(x_14, sym_Var_1))
            {
              if(((d_37 != NULL) && (d_37 != ATgetArgument(x_14, 0))))
                _fail(ATgetArgument(x_14, 0));
              else
                d_37 = ATgetArgument(x_14, 0);
            }
          else
            _fail(t);
          if(((c_37 != NULL) && (c_37 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            c_37 = ATgetArgument(t, 1);
          {
            ATerm a_15 = ATgetArgument(t, 2);
            if(match_cons(a_15, sym_CallT_3))
              {
                if(((a_37 != NULL) && (a_37 != ATgetArgument(a_15, 0))))
                  _fail(ATgetArgument(a_15, 0));
                else
                  a_37 = ATgetArgument(a_15, 0);
                {
                  ATerm b_15 = ATgetArgument(a_15, 1);
                  if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
                    _fail(t);
                }
                {
                  ATerm c_15 = ATgetArgument(a_15, 2);
                  if(((ATgetType(c_15) != AT_LIST) || !(ATisEmpty(c_15))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, e_37);
      return(t);
    }
    t = oncetd_1_0(r_3, t);
  }
  g_37 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, e_37), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, f_37, g_37, (ATerm) ATmakeAppl(sym_Seq_2, e_21, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(a_37), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(b_37), not_null(c_37), term_p_9))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(d_37)), (ATerm) ATmakeAppl(sym_Var_1, e_37))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
          w_37 = t;
          if(match_cons(t, sym_SRule_1))
            {
              x_37 = ATgetArgument(t, 0);
              t = x_37;
              if(match_cons(t, sym_Rule_3))
                {
                  t_37 = ATgetArgument(t, 0);
                  u_37 = ATgetArgument(t, 1);
                  v_37 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = w_37;
              t = m_4(t_37, u_37, v_37, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm c_17 = NULL,f_17 = NULL,t_12 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  x_37 = ATgetArgument(t, 0);
                  y_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(w_37);
              c_17 = t;
              t = y_37;
              t = desugarRule_0_0(t);
              f_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, x_37, f_17);
              t_12 = t;
              t = SSLsetAnnotations(t_12, c_17);
            }
          LocalPopChoice(h_15);
        }
      else
        {
          t = g_15;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  static ATerm u_3 (ATerm t)
  {
    t = topdown_1_0(z_92, t);
    return(t);
  }
  t = z_92(t);
  t = SRTS_all(u_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
    }
  t = repeat_2_0(z_3, _id, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm k_15 = t;
  int l_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
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
            ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL,q_38 = NULL;
            n_38 = t;
            if(match_cons(t, sym_CallT_3))
              {
                o_38 = ATgetArgument(t, 0);
                p_38 = ATgetArgument(t, 1);
                q_38 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = n_38;
            t = i_4(o_38, p_38, q_38, t);
            LocalPopChoice(n_15);
          }
        else
          {
            t = m_15;
            {
              ATerm p_15 = t;
              int r_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(r_15);
                }
              else
                {
                  t = p_15;
                  {
                    ATerm v_15 = t;
                    int w_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(w_15);
                      }
                    else
                      {
                        t = v_15;
                        {
                          ATerm x_15 = t;
                          int z_15 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_16 = t;
                              int c_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      v_38 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = v_38;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      w_38 = ATgetArgument(t, 0);
                                      t = w_38;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          w_38 = ATgetArgument(t, 0);
                                          x_38 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, w_38, x_38);
                                    }
                                  LocalPopChoice(c_16);
                                }
                              else
                                {
                                  t = b_16;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(z_15);
                            }
                          else
                            {
                              t = x_15;
                              {
                                ATerm d_16 = t;
                                int f_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(f_16);
                                  }
                                else
                                  {
                                    t = d_16;
                                    t = Desugar_0_0(t);
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
ATerm desugar_0_0 (ATerm t)
{
  t = topdown_1_0(v_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_16 = t;
  int i_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL;
      z_40 = t;
      if(match_cons(t, sym_SDef_3))
        {
          a_41 = ATgetArgument(t, 0);
          b_41 = ATgetArgument(t, 1);
          c_41 = ATgetArgument(t, 2);
          {
            ATerm u_17 = NULL,d_18 = NULL,e_13 = NULL;
            t = SSLgetAnnotations(z_40);
            u_17 = t;
            t = c_41;
            t = desugar_0_0(t);
            d_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, a_41, b_41, d_18);
            e_13 = t;
            t = SSLsetAnnotations(e_13, u_17);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              a_41 = ATgetArgument(t, 0);
              b_41 = ATgetArgument(t, 1);
              c_41 = ATgetArgument(t, 2);
              d_41 = ATgetArgument(t, 3);
              {
                ATerm u_18 = NULL,e_19 = NULL,f_13 = NULL;
                t = SSLgetAnnotations(z_40);
                u_18 = t;
                t = d_41;
                t = desugar_0_0(t);
                e_19 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, a_41, b_41, c_41, e_19);
                f_13 = t;
                t = SSLsetAnnotations(f_13, u_18);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  a_41 = ATgetArgument(t, 0);
                  b_41 = ATgetArgument(t, 1);
                  c_41 = ATgetArgument(t, 2);
                  {
                    ATerm g_20 = NULL,g_13 = NULL;
                    t = SSLgetAnnotations(z_40);
                    g_20 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDef_3, a_41, b_41, c_41);
                    g_13 = t;
                    t = SSLsetAnnotations(g_13, g_20);
                  }
                }
              else
                {
                  ATerm q_21 = NULL,q_13 = NULL;
                  if(match_cons(t, sym_ExtSDefInl_4))
                    {
                      a_41 = ATgetArgument(t, 0);
                      b_41 = ATgetArgument(t, 1);
                      c_41 = ATgetArgument(t, 2);
                      d_41 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_40);
                  q_21 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, a_41, b_41, c_41, d_41);
                  q_13 = t;
                  t = SSLsetAnnotations(q_13, q_21);
                }
            }
        }
      LocalPopChoice(i_16);
    }
  else
    {
      t = g_16;
      t = debug_1_0(b_4, t);
      _fail(t);
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  t = map_1_0(a_4, t);
  return(t);
}
ATerm Cons_2_0 (ATerm u_78 (ATerm), ATerm v_78 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,x_13 = NULL;
  n_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_41 = ATgetFirst((ATermList) t);
      k_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_41);
  i_41 = t;
  t = j_41;
  t = u_78(t);
  l_41 = t;
  t = k_41;
  t = v_78(t);
  m_41 = t;
  t = (ATerm) ATinsert(CheckATermList(m_41), l_41);
  x_13 = t;
  t = SSLsetAnnotations(x_13, i_41);
  return(t);
}
static ATerm n_4 (ATerm j_36, ATerm k_36, ATerm t)
{
  ATerm o_41 = NULL;
  t = SSL_fputc(j_36, k_36);
  o_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_41);
  return(t);
}
static ATerm o_4 (ATerm b_35, ATerm c_35, ATerm t)
{
  ATerm p_41 = NULL;
  t = SSL_write_term_to_stream_text(b_35, c_35);
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_41);
  return(t);
}
static ATerm q_4 (ATerm j_100 (ATerm), ATerm w_237, ATerm h_35, ATerm t)
{
  ATerm q_41 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_237, term_k_16);
  t = u_4(t);
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, h_35);
  t = j_100(t);
  t = fclose_0_0(t);
  t = h_35;
  return(t);
}
static ATerm p_4 (ATerm x_34, ATerm y_34, ATerm t)
{
  ATerm r_41 = NULL;
  t = SSL_write_term_to_stream_baf(x_34, y_34);
  r_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_41);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm y_41 = NULL,z_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_16 = ATgetArgument(t, 0);
      if(match_cons(o_16, sym_Stream_1))
        {
          y_41 = ATgetArgument(o_16, 0);
        }
      else
        _fail(t);
      z_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(y_41, z_41, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(match_cons(p_16, sym_Stream_1))
        {
          d_42 = ATgetArgument(p_16, 0);
        }
      else
        _fail(t);
      e_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(d_42, e_42, t);
  a_42 = t;
  t = term_v_7;
  b_42 = t;
  t = a_42;
  if(match_cons(t, sym_Stream_1))
    {
      c_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, a_42);
  t = n_4(b_42, c_42, t);
  return(t);
}
ATerm output_1_0 (ATerm d_121 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL;
  t = d_121(t);
  t_41 = t;
  {
    ATerm r_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_41 = NULL,v_41 = NULL;
        t = term_u_16;
        u_41 = t;
        t = term_v_16;
        v_41 = t;
        t = term_w_16;
        t = y_4(u_41, v_41, t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = r_16;
        t = term_x_16;
      }
  }
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
  {
    ATerm y_16 = t;
    int z_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_41 = NULL,x_41 = NULL;
        t = term_u_16;
        w_41 = t;
        t = term_d_17;
        x_41 = t;
        t = term_e_17;
        t = y_4(w_41, x_41, t);
        t = (ATerm) ATmakeAppl(sym__2, s_41, t_41);
        LocalPopChoice(z_16);
        if(match_cons(t, sym__2))
          {
            ATerm g_17 = ATgetArgument(t, 0);
            ATerm h_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_4(c_4, s_41, t_41, t);
      }
    else
      {
        t = y_16;
        if(match_cons(t, sym__2))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            ATerm j_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = q_4(d_4, s_41, t_41, t);
      }
  }
  return(t);
}
static ATerm s_42 (ATerm m_42, ATerm t)
{
  t = SSL_fclose(m_42);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL;
  q_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_42 = ATgetArgument(t, 0);
      {
        ATerm k_17 = t;
        int m_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_42);
            LocalPopChoice(m_17);
          }
        else
          {
            t = k_17;
            t = s_42(q_42, t);
          }
      }
    }
  else
    {
      t = s_42(q_42, t);
    }
  return(t);
}
static ATerm r_4 (ATerm d_35, ATerm t)
{
  t = SSL_read_term_from_stream(d_35);
  return(t);
}
static ATerm s_4 (ATerm t_59, ATerm u_59, ATerm t)
{
  t = SSL_strcat(t_59, u_59);
  return(t);
}
static ATerm t_4 (ATerm l_36, ATerm m_36, ATerm t)
{
  ATerm t_42 = NULL;
  t = SSL_fopen(l_36, m_36);
  t_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_42 = NULL;
  t = SSL_stdin_stream();
  u_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_42 = NULL;
  t = SSL_stdout_stream();
  v_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_42 = NULL;
  t = SSL_stderr_stream();
  y_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_42);
  return(t);
}
static ATerm g_44 (ATerm e_43, ATerm t)
{
  ATerm f_43 = NULL;
  t = SSL_explode_term(e_43);
  if(match_cons(t, sym__2))
    {
      ATerm n_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_17 = ATgetArgument(t, 1);
        if(((ATgetType(q_17) == AT_LIST) && !(ATisEmpty(q_17))))
          {
            f_43 = ATgetFirst((ATermList) q_17);
            {
              ATerm r_17 = (ATerm) ATgetNext((ATermList) q_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_43;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_43;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_43;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_43;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm h_44 (ATerm i_43, ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,q_43 = NULL,b_14 = NULL;
  t = SSLgetAnnotations(k_43);
  n_43 = t;
  t = i_43;
  if(match_cons(t, sym_Path_1))
    {
      q_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_43, j_43);
  b_14 = t;
  t = SSLsetAnnotations(b_14, n_43);
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(l_43, m_43, t);
  return(t);
}
static ATerm i_44 (ATerm s_43, ATerm t_43, ATerm u_43, ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL,a_44 = NULL,d_14 = NULL;
  t = SSLgetAnnotations(u_43);
  x_43 = t;
  t = SSL_is_string(s_43);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_44, t_43);
  d_14 = t;
  t = SSLsetAnnotations(d_14, x_43);
  if(match_cons(t, sym__2))
    {
      v_43 = ATgetArgument(t, 0);
      w_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(v_43, w_43, t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  if(match_cons(t, sym__2))
    {
      e_44 = ATgetArgument(t, 0);
      f_44 = ATgetArgument(t, 1);
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_44(d_44, t);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm x_17 = t;
              int y_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_44(e_44, f_44, d_44, t);
                  LocalPopChoice(y_17);
                }
              else
                {
                  t = x_17;
                  t = i_44(e_44, f_44, d_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = g_44(d_44, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,r_44 = NULL;
  r_44 = t;
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_44, term_b_18);
        t = u_4(t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm q_22 = NULL,s_22 = NULL;
          t = term_c_18;
          s_22 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_18, r_44);
          t = s_4(s_22, r_44, t);
          q_22 = t;
          t = SSL_perror(q_22);
          _fail(t);
        }
      }
  }
  l_44 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_4(m_44, t);
  k_44 = t;
  t = l_44;
  t = fclose_0_0(t);
  t = k_44;
  return(t);
}
ATerm input_1_0 (ATerm e_121 (ATerm), ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_44 = NULL,v_44 = NULL;
      t = term_u_16;
      u_44 = t;
      t = term_g_18;
      v_44 = t;
      t = term_h_18;
      t = y_4(u_44, v_44, t);
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      t = term_i_18;
    }
  t = ReadFromFile_0_0(t);
  t = e_121(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
  w_44 = t;
  t = term_j_18;
  t = whoami_0_0(t);
  x_44 = t;
  t = term_v_6;
  z_44 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_18), x_44), term_k_18);
  a_45 = t;
  t = SSL_printnl(z_44, a_45);
  t = term_m_18;
  y_44 = t;
  t = SSL_exit(y_44);
  t = w_44;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm c_45 = NULL;
  c_45 = t;
  if(match_string(t, "-k"))
    {
      t = c_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_45;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  t = SSL_string_to_int(d_45);
  e_45 = t;
  t = term_n_18;
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_18, e_45);
  t = b_5(f_45, e_45, t);
  t = d_45;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_o_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_4, f_4, g_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm h_45 = NULL;
  h_45 = t;
  if(match_string(t, "-S"))
    {
      t = h_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_45;
    }
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL;
  t = term_p_18;
  i_45 = t;
  t = term_q_18;
  j_45 = t;
  t = term_r_18;
  t = b_5(i_45, j_45, t);
  t = term_s_18;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = term_t_18;
  return(t);
}
static ATerm l_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm k_45 = NULL,l_45 = NULL,m_45 = NULL;
  k_45 = t;
  t = SSL_string_to_int(k_45);
  l_45 = t;
  t = term_p_18;
  m_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_18, l_45);
  t = b_5(m_45, l_45, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_45);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  t = term_v_18;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm q_45 = NULL,r_45 = NULL;
  t = term_w_18;
  q_45 = t;
  t = term_j_18;
  r_45 = t;
  t = term_x_18;
  t = b_5(q_45, r_45, t);
  t = term_y_18;
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_4, j_4, k_4, t);
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(l_4, w_4, x_4, t);
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = Option_3_0(a_5, c_5, e_5, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm e_40, ATerm f_40, ATerm t)
{
  ATerm s_45 = NULL;
  t = term_u_16;
  s_45 = t;
  t = SSL_table_put(s_45, e_40, f_40);
  t = (ATerm) ATmakeAppl(sym__3, term_u_16, e_40, f_40);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL;
      t = term_j_18;
      t = e_0(t);
      x_45 = t;
      t = term_f_19;
      y_45 = t;
      t = term_g_19;
      z_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, x_45);
      t = z_4(y_45, z_45, x_45, t);
      _fail(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_45 = ATgetFirst((ATermList) t);
          w_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_45;
      t = c_0(t);
      t = term_j_18;
      t = d_0(t);
      c_46 = t;
      t = (ATerm) ATinsert(CheckATermList(w_45), c_46);
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm e_46 = NULL;
  e_46 = t;
  if(match_string(t, "-o"))
    {
      t = e_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_46;
    }
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  t = term_v_16;
  g_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_16, f_46);
  t = b_5(g_46, f_46, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_46);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_5, h_5, k_5, t);
  return(t);
}
static ATerm z_4 (ATerm o_45, ATerm p_45, ATerm n_45, ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
  i_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_45, p_45);
        t = y_4(o_45, p_45, t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = (ATerm) ATempty;
      }
  }
  j_46 = t;
  t = (ATerm) ATinsert(CheckATermList(j_46), n_45);
  k_46 = t;
  t = SSL_table_put(o_45, p_45, k_46);
  t = i_46;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
      t = term_j_18;
      t = n_0(t);
      v_46 = t;
      t = term_f_19;
      w_46 = t;
      t = term_g_19;
      x_46 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, v_46);
      t = z_4(w_46, x_46, v_46, t);
      _fail(t);
    }
  else
    {
      ATerm b_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_46 = ATgetFirst((ATermList) t);
          s_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_46;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_46 = ATgetFirst((ATermList) t);
          u_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_46;
      t = k_0(t);
      t = t_46;
      t = l_0(t);
      b_47 = t;
      t = (ATerm) ATinsert(CheckATermList(u_46), b_47);
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm d_47 = NULL;
  d_47 = t;
  if(match_string(t, "-i"))
    {
      t = d_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_47;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm e_47 = NULL,h_47 = NULL;
  e_47 = t;
  t = term_g_18;
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_18, e_47);
  t = b_5(h_47, e_47, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_47);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_m_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_5, n_5, o_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_18;
  t = whoami_0_0(t);
  i_47 = t;
  t = term_v_6;
  k_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_19), i_47);
  l_47 = t;
  t = SSL_printnl(k_47, l_47);
  t = term_m_18;
  j_47 = t;
  t = SSL_exit(j_47);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm m_47 = NULL,n_47 = NULL;
  t = term_u_16;
  m_47 = t;
  t = term_z_19;
  n_47 = t;
  t = term_c_20;
  t = y_4(m_47, n_47, t);
  return(t);
}
static ATerm v_4 (ATerm w_42, ATerm x_42, ATerm t)
{
  ATerm d_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(w_42, x_42);
      LocalPopChoice(e_20);
    }
  else
    {
      t = d_20;
      t = SSL_addr(w_42, x_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = p_47;
      t = w_110(t);
    }
  else
    {
      ATerm u_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_47 = ATgetFirst((ATermList) t);
          r_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_47;
      t = foldr_2_0(w_110, x_110, t);
      u_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_47, u_47);
      t = x_110(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym__2))
    {
      z_22 = ATgetArgument(t, 0);
      a_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(z_22, a_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm x_47 = NULL,v_22 = NULL,w_22 = NULL;
  t = times_0_0(t);
  w_22 = t;
  t = SSL_explode_term(w_22);
  if(match_cons(t, sym__2))
    {
      ATerm f_20 = ATgetArgument(t, 0);
      v_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_22;
  t = foldr_2_0(p_5, q_5, t);
  x_47 = t;
  t = SSL_TicksToSeconds(x_47);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL;
  k_48 = t;
  if(match_cons(t, sym__2))
    {
      l_48 = ATgetArgument(t, 0);
      m_48 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_48;
        if((l_48 != t))
          {
            _fail(t);
          }
        t = k_48;
        LocalPopChoice(n_20);
      }
    else
      {
        t = j_20;
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
        {
          ATerm u_20 = t;
          int v_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_48, m_48);
              LocalPopChoice(v_20);
            }
          else
            {
              t = u_20;
              t = SSL_gtr(l_48, m_48);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_48, m_48);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm q_48 = NULL;
  q_48 = t;
  {
    ATerm f_21 = t;
    int g_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
        t = term_u_16;
        t_48 = t;
        t = term_p_18;
        u_48 = t;
        t = term_i_21;
        t = y_4(t_48, u_48, t);
        s_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_48, term_m_18);
        t = geq_0_0(t);
        t = q_48;
        t = z_101(t);
        LocalPopChoice(g_21);
      }
    else
      {
        t = f_21;
        t = q_48;
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,b_49 = NULL,c_49 = NULL;
  t = run_time_0_0(t);
  w_48 = t;
  t = term_j_18;
  t = whoami_0_0(t);
  x_48 = t;
  t = term_v_6;
  b_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), w_48), term_j_21), x_48);
  c_49 = t;
  t = SSL_printnl(b_49, c_49);
  t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_21), w_48), term_j_21), x_48));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_18;
  d_49 = t;
  t = SSL_exit(d_49);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL;
  o_49 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_49;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_49 = ATgetArgument(t, 0);
          {
            ATerm p_23 = NULL,g_14 = NULL;
            t = SSLgetAnnotations(o_49);
            p_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_49);
            g_14 = t;
            t = SSLsetAnnotations(g_14, p_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_49;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_120 (ATerm), ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_49 = NULL,h_49 = NULL;
      t = term_u_16;
      g_49 = t;
      t = term_n_21;
      h_49 = t;
      t = term_o_21;
      t = y_4(g_49, h_49, t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      t = fetch_1_0(s_5, t);
    }
  t = u_120(t);
  return(t);
}
ATerm map_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  static ATerm e_50 (ATerm t)
  {
    ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
    b_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_50;
      }
    else
      {
        ATerm e_24 = NULL,h_24 = NULL,i_24 = NULL,i_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_50 = ATgetFirst((ATermList) t);
            d_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_50);
        e_24 = t;
        t = c_50;
        t = h_105(t);
        h_24 = t;
        t = d_50;
        t = e_50(t);
        i_24 = t;
        t = (ATerm) ATinsert(CheckATermList(i_24), h_24);
        i_14 = t;
        t = SSLsetAnnotations(i_14, e_24);
      }
    return(t);
  }
  t = e_50(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_50 = ATgetFirst((ATermList) t);
      i_50 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_50 = NULL,n_50 = NULL;
        static ATerm t_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_50)), not_null(n_50));
          return(t);
        }
        t = i_50;
        t = i_0(t);
        if(((m_50 != NULL) && (m_50 != t)))
          _fail(t);
        else
          m_50 = t;
        t = h_50;
        t = g_0(t);
        if(((n_50 != NULL) && (n_50 != t)))
          _fail(t);
        else
          n_50 = t;
        t = i_50;
        t = reverse_acc_2_0(g_0, t_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_18;
      t = i_0(t);
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,v_50 = NULL,n_14 = NULL;
  v_50 = t;
  if(match_cons(t, sym_Program_1))
    {
      u_50 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_50);
  t_50 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_50);
  n_14 = t;
  t = SSLsetAnnotations(n_14, t_50);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm y_50 = NULL;
  y_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_50), term_p_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_50 = NULL,q_50 = NULL;
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_50 = NULL,s_50 = NULL;
      t = term_u_16;
      r_50 = t;
      t = term_z_19;
      s_50 = t;
      t = term_c_20;
      t = y_4(r_50, s_50, t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      t = fetch_1_0(v_5, t);
    }
  t = term_t_21;
  t = echo_0_0(t);
  t = term_f_19;
  p_50 = t;
  t = term_g_19;
  q_50 = t;
  t = term_u_21;
  t = y_4(p_50, q_50, t);
  t = reverse_acc_2_0(_id, w_5, t);
  t = map_1_0(x_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm r_105 (ATerm), ATerm t)
{
  static ATerm v_51 (ATerm t)
  {
    ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
    s_51 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_51 = ATgetFirst((ATermList) t);
        u_51 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_21 = t;
      int w_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_24 = NULL,v_24 = NULL,y_14 = NULL;
          t = SSLgetAnnotations(s_51);
          r_24 = t;
          t = t_51;
          t = r_105(t);
          v_24 = t;
          t = (ATerm) ATinsert(CheckATermList(u_51), v_24);
          y_14 = t;
          t = SSLsetAnnotations(y_14, r_24);
          LocalPopChoice(w_21);
        }
      else
        {
          t = v_21;
          {
            ATerm h_25 = NULL,k_25 = NULL,d_15 = NULL;
            t = SSLgetAnnotations(s_51);
            h_25 = t;
            t = u_51;
            t = v_51(t);
            k_25 = t;
            t = (ATerm) ATinsert(CheckATermList(k_25), t_51);
            d_15 = t;
            t = SSLsetAnnotations(d_15, h_25);
          }
        }
    }
    return(t);
  }
  t = v_51(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_52 = NULL,c_52 = NULL,d_52 = NULL;
  b_52 = t;
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_52;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm a_22 = ATgetFirst((ATermList) t);
                ATerm b_22 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_52;
          }
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
        t = (ATerm) ATinsert(ATempty, b_52);
      }
  }
  c_52 = t;
  t = term_x_16;
  d_52 = t;
  t = SSL_printnl(d_52, c_52);
  t = b_52;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL;
  t = term_u_16;
  h_52 = t;
  t = term_z_19;
  i_52 = t;
  t = term_c_20;
  t = y_4(h_52, i_52, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm y_4 (ATerm f_47, ATerm g_47, ATerm t)
{
  t = SSL_table_get(f_47, g_47);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  ATerm j_52 = NULL,k_52 = NULL;
  t = term_d_22;
  j_52 = t;
  t = term_j_18;
  k_52 = t;
  t = term_e_22;
  t = b_5(j_52, k_52, t);
  return(t);
}
static ATerm a_6 (ATerm t)
{
  t = term_f_22;
  return(t);
}
static ATerm b_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_6 (ATerm t)
{
  ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
  t = term_d_22;
  n_52 = t;
  t = term_j_18;
  o_52 = t;
  t = term_e_22;
  t = b_5(n_52, o_52, t);
  t = term_g_22;
  l_52 = t;
  t = term_j_18;
  m_52 = t;
  t = term_j_22;
  t = b_5(l_52, m_52, t);
  t = term_k_22;
  return(t);
}
static ATerm d_6 (ATerm t)
{
  t = term_l_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(y_5, z_5, a_6, t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = m_22;
      t = Option_3_0(b_6, c_6, d_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_122 (ATerm), ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,y_52 = NULL,z_52 = NULL,o_15 = NULL;
  t_52 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_22;
        t = x_122(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
  }
  t = t_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_52 = ATgetFirst((ATermList) t);
      w_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_52);
  u_52 = t;
  t = term_z_19;
  z_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_19, v_52);
  t = b_5(z_52, v_52, t);
  t = w_52;
  {
    static ATerm j_53 (ATerm t)
    {
      ATerm t_22 = t;
      int x_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_22 = t;
          int c_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_53 = NULL;
              c_53 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_53;
              LocalPopChoice(c_23);
            }
          else
            {
              t = y_22;
              t = x_122(t);
              t = Cons_2_0(_id, j_53, t);
            }
          LocalPopChoice(x_22);
        }
      else
        {
          t = t_22;
          {
            ATerm f_53 = NULL,g_53 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_53 = ATgetFirst((ATermList) t);
                g_53 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_53), (ATerm) ATmakeAppl(sym_Undefined_1, f_53));
          }
        }
      return(t);
    }
    t = j_53(t);
  }
  y_52 = t;
  t = (ATerm) ATinsert(CheckATermList(y_52), (ATerm) ATmakeAppl(sym_Program_1, v_52));
  o_15 = t;
  t = SSLsetAnnotations(o_15, u_52);
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm v_53 = NULL;
  v_53 = t;
  if(match_string(t, "--help"))
    {
      t = v_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_53;
        }
    }
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm w_53 = NULL,x_53 = NULL;
  t = term_n_21;
  w_53 = t;
  t = term_j_18;
  x_53 = t;
  t = term_d_23;
  t = b_5(w_53, x_53, t);
  t = term_e_23;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  t = term_f_23;
  return(t);
}
static ATerm j_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_122 (ATerm), ATerm t)
{
  ATerm o_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL,s_53 = NULL,t_53 = NULL,u_53 = NULL;
  q_53 = t;
  t = term_f_19;
  s_53 = t;
  t = term_g_19;
  t_53 = t;
  t = (ATerm) ATempty;
  u_53 = t;
  t = SSL_table_put(s_53, t_53, u_53);
  t = q_53;
  {
    static ATerm e_6 (ATerm t)
    {
      ATerm g_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_122(t);
          LocalPopChoice(h_23);
        }
      else
        {
          t = g_23;
          {
            ATerm i_23 = t;
            int j_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_6, g_6, h_6, t);
                LocalPopChoice(j_23);
              }
            else
              {
                t = i_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_6, t);
  }
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_54 = NULL;
        i_54 = t;
        {
          ATerm m_23 = t;
          int q_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_25 = NULL;
              t = i_54;
              {
                ATerm r_23 = t;
                int u_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_25 = NULL,t_25 = NULL;
                    t = term_u_16;
                    s_25 = t;
                    t = term_n_21;
                    t_25 = t;
                    t = term_o_21;
                    t = y_4(s_25, t_25, t);
                    LocalPopChoice(u_23);
                  }
                else
                  {
                    t = r_23;
                    t = fetch_1_0(j_6, t);
                  }
              }
              t = i_54;
              t = default_system_usage_0_0(t);
              t = term_q_18;
              r_25 = t;
              t = SSL_exit(r_25);
              LocalPopChoice(q_23);
            }
          else
            {
              t = m_23;
              {
                ATerm x_25 = NULL,y_25 = NULL,z_25 = NULL;
                t = term_u_16;
                y_25 = t;
                t = term_d_22;
                z_25 = t;
                t = term_v_23;
                t = y_4(y_25, z_25, t);
                t = i_54;
                t = default_system_about_0_0(t);
                t = term_q_18;
                x_25 = t;
                t = SSL_exit(x_25);
              }
            }
        }
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_54 = NULL,k_54 = NULL,l_54 = NULL;
              static ATerm k_6 (ATerm t)
              {
                ATerm m_54 = NULL,n_54 = NULL,o_54 = NULL,z_21 = NULL;
                o_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_54);
                m_54 = t;
                t = n_54;
                if(((o_53 != NULL) && (o_53 != t)))
                  _fail(t);
                else
                  o_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_54);
                z_21 = t;
                t = SSLsetAnnotations(z_21, m_54);
                return(t);
              }
              t = fetch_1_0(k_6, t);
              t = term_v_6;
              k_54 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_z_23);
              l_54 = t;
              t = SSL_printnl(k_54, l_54);
              t = (ATerm) ATmakeAppl(sym__2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_53)), term_z_23));
              t = default_system_usage_0_0(t);
              t = term_m_18;
              j_54 = t;
              t = SSL_exit(j_54);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
            }
        }
      }
  }
  p_53 = t;
  t = term_f_19;
  r_53 = t;
  t = SSL_table_destroy(r_53);
  t = p_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_120 (ATerm), ATerm x_120 (ATerm), ATerm y_120 (ATerm), ATerm z_120 (ATerm), ATerm t)
{
  ATerm t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL;
  t = parse_options_1_0(w_120, t);
  t_54 = t;
  t = term_a_24;
  w_54 = t;
  t = SSL_table_create(w_54);
  t = term_a_24;
  u_54 = t;
  t = term_b_24;
  v_54 = t;
  t = SSL_table_put(u_54, v_54, t_54);
  t = t_54;
  t = y_120(t);
  {
    ATerm c_24 = t;
    int d_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_120, t);
        LocalPopChoice(d_24);
      }
    else
      {
        t = c_24;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_120(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
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
            t = output_option_0_0(t);
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
                  t = Option_3_0(n_6, p_6, q_6, t);
                  LocalPopChoice(p_24);
                }
              else
                {
                  t = o_24;
                  {
                    ATerm q_24 = t;
                    int s_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(s_24);
                      }
                    else
                      {
                        t = q_24;
                        t = keep_option_0_0(t);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = input_1_0(r_6, t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL;
  t = term_d_17;
  y_54 = t;
  t = term_j_18;
  z_54 = t;
  t = term_t_24;
  t = b_5(y_54, z_54, t);
  t = term_u_24;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = term_w_24;
  return(t);
}
static ATerm r_6 (ATerm t)
{
  t = output_1_0(s_6, t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL,i_55 = NULL,i_22 = NULL,h_22 = NULL;
  i_55 = t;
  if(match_cons(t, sym_Specification_1))
    {
      c_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_55);
  b_55 = t;
  t = c_55;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_55 = ATgetFirst((ATermList) t);
      f_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_55);
  d_55 = t;
  t = f_55;
  t = Cons_2_0(t_6, u_6, t);
  g_55 = t;
  t = (ATerm) ATinsert(CheckATermList(g_55), e_55);
  h_22 = t;
  t = SSLsetAnnotations(h_22, d_55);
  h_55 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, h_55);
  i_22 = t;
  t = SSLsetAnnotations(i_22, b_55);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  ATerm j_55 = NULL,k_55 = NULL,l_55 = NULL,m_55 = NULL,c_22 = NULL;
  m_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      k_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_55);
  j_55 = t;
  t = k_55;
  t = desugar_spec_0_0(t);
  l_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, l_55);
  c_22 = t;
  t = SSLsetAnnotations(c_22, j_55);
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(l_6, default_usage_0_0, _id, m_6, t);
  return(t);
}
