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
Symbol sym_Prefix_2;
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
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
ATerm term_g_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_f_23;
ATerm term_y_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_f_22;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_a_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_f_19;
ATerm term_u_18;
ATerm term_t_18;
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
ATerm term_f_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_c_17;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_u_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_f_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_a_8;
ATerm term_w_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_v_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_Op_2, term_y_6, (ATerm) ATempty);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_8);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Call_2, term_c_9, (ATerm) ATempty);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATempty);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_mkterm", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL_explode_term", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLgetAnnotations", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSLsetAnnotations", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_Fail_0);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATempty);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("not a definition: ", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_k_18, term_l_18);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_18);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_d_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_t_19, term_u_19);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym__2, term_q_22, term_d_18);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_d_18);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_d_18);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_c_17, term_d_18);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm u_7 (ATerm c_1, ATerm d_1, ATerm t);
static ATerm v_7 (ATerm j_1, ATerm m_1, ATerm t);
static ATerm e_0 (ATerm t);
static ATerm f_0 (ATerm t);
static ATerm j_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm Expl_0_0 (ATerm t);
ATerm Mapp2_0_0 (ATerm t);
ATerm pat_td_1_0 (ATerm j_89 (ATerm), ATerm t);
ATerm Bapp_0_0 (ATerm t);
ATerm HL_0_0 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm n_4 (ATerm b_26, ATerm c_26, ATerm d_26, ATerm t);
ATerm genzip_4_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm b_104 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_24 (ATerm o_23, ATerm t);
ATerm LiftPrimArg_0_0 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
ATerm LiftPrimArgs_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
ATerm buildterm_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm pureterm_0_0 (ATerm t);
ATerm RtoS_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_92 (ATerm), ATerm t);
ATerm new_0_0 (ATerm t);
static ATerm r_4 (ATerm x_20, ATerm a_21, ATerm b_21, ATerm t);
ATerm desugarRule_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_91 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm desugar_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
ATerm desugar_spec_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t);
static ATerm s_4 (ATerm u_35, ATerm v_35, ATerm t);
static ATerm t_4 (ATerm p_34, ATerm q_34, ATerm t);
static ATerm v_4 (ATerm n_98 (ATerm), ATerm r_232, ATerm t_34, ATerm t);
static ATerm u_4 (ATerm l_34, ATerm m_34, ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm output_1_0 (ATerm t_118 (ATerm), ATerm t);
static ATerm w_41 (ATerm q_41, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_4 (ATerm r_34, ATerm t);
static ATerm x_4 (ATerm w_35, ATerm x_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_43 (ATerm g_42, ATerm t);
static ATerm k_43 (ATerm k_42, ATerm n_42, ATerm o_42, ATerm t);
static ATerm l_43 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm u_118 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm a_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm g_5 (ATerm o_39, ATerm p_39, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm h_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm e_5 (ATerm d_45, ATerm e_45, ATerm c_45, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_4 (ATerm l_42, ATerm m_42, ATerm t);
ATerm foldr_2_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_100 (ATerm), ATerm t);
static ATerm o_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm need_help_1_0 (ATerm k_118 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm v_103 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_5 (ATerm o_58, ATerm p_58, ATerm t);
ATerm debug_1_0 (ATerm l_98 (ATerm), ATerm t);
ATerm map_1_0 (ATerm l_103 (ATerm), ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm d_5 (ATerm u_46, ATerm v_46, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
static ATerm z_5 (ATerm t);
static ATerm a_6 (ATerm t);
static ATerm b_6 (ATerm t);
static ATerm c_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm parse_options_p__1_0 (ATerm n_120 (ATerm), ATerm t);
static ATerm e_6 (ATerm t);
static ATerm f_6 (ATerm t);
static ATerm g_6 (ATerm t);
static ATerm h_6 (ATerm t);
ATerm parse_options_1_0 (ATerm m_120 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t);
static ATerm j_6 (ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm n_6 (ATerm t);
static ATerm o_6 (ATerm t);
static ATerm q_6 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm u_7 (ATerm c_1, ATerm d_1, ATerm t)
{
  t = c_1;
  {
    ATerm u_6 = t;
    if((PushChoice() == 0))
      {
        ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,a_0 = NULL;
        i_1 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_1 = ATgetFirst((ATermList) t);
            h_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_1);
        f_1 = t;
        t = h_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_1), g_1);
        a_0 = t;
        t = SSLsetAnnotations(a_0, f_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_v_6, c_1);
  return(t);
}
static ATerm v_7 (ATerm j_1, ATerm m_1, ATerm t)
{
  t = j_1;
  {
    ATerm w_6 = t;
    if((PushChoice() == 0))
      {
        ATerm r_1 = NULL,s_1 = NULL,x_1 = NULL,a_2 = NULL,c_0 = NULL;
        a_2 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_1 = ATgetFirst((ATermList) t);
            x_1 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_2);
        r_1 = t;
        t = x_1;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_1), s_1);
        c_0 = t;
        t = SSLsetAnnotations(c_0, r_1);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, j_1);
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm f_0 (ATerm t)
{
  ATerm s_2 = NULL,t_2 = NULL,b_0 = NULL;
  s_2 = t;
  t = SSL_explode_term(s_2);
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_7 = ATgetArgument(t, 1);
        if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
          {
            t_2 = ATgetFirst((ATermList) b_7);
            {
              ATerm c_7 = (ATerm) ATgetNext((ATermList) b_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_2);
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_7 = ATgetArgument(t, 1);
        if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
          {
            ATerm f_7 = ATgetFirst((ATermList) e_7);
            ATerm g_7 = (ATerm) ATgetNext((ATermList) e_7);
            if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
              {
                b_0 = ATgetFirst((ATermList) g_7);
                {
                  ATerm h_7 = (ATerm) ATgetNext((ATermList) g_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, b_0), t_2));
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm l_3 = NULL,m_3 = NULL;
  if(match_cons(t, sym__2))
    {
      l_3 = ATgetArgument(t, 0);
      m_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, m_3), l_3));
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = term_z_6;
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm p_3 = NULL,r_3 = NULL;
  if(match_cons(t, sym__2))
    {
      p_3 = ATgetArgument(t, 0);
      r_3 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_i_7, (ATerm) ATinsert(ATinsert(ATempty, r_3), p_3));
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm e_4 = NULL,j_4 = NULL;
  if(match_cons(t, sym__2))
    {
      e_4 = ATgetArgument(t, 0);
      j_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, j_4), e_4));
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL;
  if(match_cons(t, sym__2))
    {
      o_4 = ATgetArgument(t, 0);
      p_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, p_4), o_4));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,f_2 = NULL,g_2 = NULL,h_2 = NULL,j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  if(match_cons(t, sym_Anno_2))
    {
      k_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      {
        ATerm p_2 = NULL;
        t = l_2;
        t = foldr_2_0(e_0, f_0, t);
        p_2 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, k_2, p_2);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          k_2 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, k_2, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              k_2 = ATgetArgument(t, 0);
              {
                ATerm m_0 = NULL;
                t = k_2;
                {
                  ATerm n_7 = t;
                  int o_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_q_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_r_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_t_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_w_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_a_8;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(o_7);
                    }
                  else
                    {
                      t = n_7;
                      {
                        ATerm r_0 = NULL;
                        t = SSL_explode_string(k_2);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm b_8 = ATgetFirst((ATermList) t);
                            if(((ATgetType(b_8) != AT_INT) || (ATgetInt((ATermInt) b_8) != 39)))
                              _fail(t);
                            {
                              ATerm d_8 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
                                {
                                  r_0 = ATgetFirst((ATermList) d_8);
                                  {
                                    ATerm e_8 = (ATerm) ATgetNext((ATermList) d_8);
                                    if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
                                      {
                                        ATerm f_8 = ATgetFirst((ATermList) e_8);
                                        if(((ATgetType(f_8) != AT_INT) || (ATgetInt((ATermInt) f_8) != 39)))
                                          _fail(t);
                                        {
                                          ATerm g_8 = (ATerm) ATgetNext((ATermList) e_8);
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
                        t = r_0;
                      }
                    }
                }
                m_0 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_0);
              }
            }
          else
            {
              ATerm j_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      k_2 = ATgetArgument(t, 0);
                      {
                        ATerm n_8 = ATgetArgument(t, 1);
                      }
                      h_2 = ATgetArgument(t, 2);
                      c_2 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(m_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, k_2, h_2, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_2), (ATerm) ATempty));
                }
              else
                {
                  t = j_8;
                  {
                    ATerm q_8 = t;
                    int r_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            k_2 = ATgetArgument(t, 0);
                            {
                              ATerm t_8 = ATgetArgument(t, 1);
                            }
                            h_2 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(r_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, k_2, h_2, term_f_9);
                      }
                    else
                      {
                        t = q_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            k_2 = ATgetArgument(t, 0);
                            l_2 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, k_2, l_2, term_f_9);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                k_2 = ATgetArgument(t, 0);
                                l_2 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_0 (ATerm t)
                                  {
                                    t = l_2;
                                    return(t);
                                  }
                                  t = k_2;
                                  t = foldr_2_0(h_0, j_0, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    k_2 = ATgetArgument(t, 0);
                                    t = k_2;
                                    t = foldr_2_0(q_0, s_0, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        k_2 = ATgetArgument(t, 0);
                                        t = k_2;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            d_2 = ATgetFirst((ATermList) t);
                                            f_2 = (ATerm) ATgetNext((ATermList) t);
                                            t = f_2;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_9 = t;
                                                int j_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = u_7(k_2, j_2, t);
                                                    LocalPopChoice(j_9);
                                                  }
                                                else
                                                  {
                                                    t = i_9;
                                                    t = d_2;
                                                  }
                                              }
                                            else
                                              {
                                                t = u_7(k_2, j_2, t);
                                              }
                                          }
                                        else
                                          {
                                            t = u_7(k_2, j_2, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            k_2 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, k_2));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                k_2 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, k_2));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    k_2 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, k_2));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        k_2 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, k_2));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            k_2 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_2), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                k_2 = ATgetArgument(t, 0);
                                                                l_2 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_2), l_2);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    k_2 = ATgetArgument(t, 0);
                                                                    l_2 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm t_0 (ATerm t)
                                                                      {
                                                                        t = l_2;
                                                                        return(t);
                                                                      }
                                                                      t = k_2;
                                                                      t = foldr_2_0(t_0, u_0, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        k_2 = ATgetArgument(t, 0);
                                                                        t = k_2;
                                                                        t = foldr_2_0(v_0, w_0, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            k_2 = ATgetArgument(t, 0);
                                                                            l_2 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATinsert(CheckATermList(l_2), k_2));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                k_2 = ATgetArgument(t, 0);
                                                                                t = k_2;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    d_2 = ATgetFirst((ATermList) t);
                                                                                    f_2 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = f_2;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm l_9 = t;
                                                                                        int n_9 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = v_7(k_2, j_2, t);
                                                                                            LocalPopChoice(n_9);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = l_9;
                                                                                            t = d_2;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = v_7(k_2, j_2, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = v_7(k_2, j_2, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_o_9;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        k_2 = ATgetArgument(t, 0);
                                                                                        l_2 = ATgetArgument(t, 1);
                                                                                        t = l_2;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            g_2 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATinsert(ATinsert(ATempty, g_2), k_2));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            k_2 = ATgetArgument(t, 0);
                                                                                            t = k_2;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                k_2 = ATgetArgument(t, 0);
                                                                                                l_2 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, k_2, l_2, term_u_9);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    k_2 = ATgetArgument(t, 0);
                                                                                                    l_2 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, k_2, l_2, term_u_9);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        k_2 = ATgetArgument(t, 0);
                                                                                                        l_2 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, k_2, (ATerm)ATempty, l_2);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            k_2 = ATgetArgument(t, 0);
                                                                                                            l_2 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, l_2, k_2);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                k_2 = ATgetArgument(t, 0);
                                                                                                                l_2 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, k_2, l_2, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    k_2 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, k_2, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        k_2 = ATgetArgument(t, 0);
                                                                                                                        l_2 = ATgetArgument(t, 1);
                                                                                                                        h_2 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, k_2, l_2, (ATerm)ATempty, h_2);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            k_2 = ATgetArgument(t, 0);
                                                                                                                            l_2 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, k_2, (ATerm)ATempty, (ATerm)ATempty, l_2);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                k_2 = ATgetArgument(t, 0);
                                                                                                                                l_2 = ATgetArgument(t, 1);
                                                                                                                                h_2 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_2, l_2, (ATerm)ATempty, h_2);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    k_2 = ATgetArgument(t, 0);
                                                                                                                                    l_2 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, k_2, (ATerm)ATempty, (ATerm)ATempty, l_2);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        k_2 = ATgetArgument(t, 0);
                                                                                                                                        l_2 = ATgetArgument(t, 1);
                                                                                                                                        h_2 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, k_2, l_2, (ATerm)ATempty, h_2);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            k_2 = ATgetArgument(t, 0);
                                                                                                                                            l_2 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, k_2, (ATerm)ATempty, (ATerm)ATempty, l_2);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm v_9 = ATgetArgument(t, 0);
                                                                                                                                                l_2 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, l_2);
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
  ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL;
  y_7 = t;
  if(match_cons(t, sym_ExplodeCong_2))
    {
      z_7 = ATgetArgument(t, 0);
      x_7 = ATgetArgument(t, 1);
      {
        ATerm c_8 = NULL,h_8 = NULL,i_8 = NULL,l_8 = NULL;
        t = y_7;
        t = new_0_0(t);
        c_8 = t;
        t = new_0_0(t);
        h_8 = t;
        t = new_0_0(t);
        i_8 = t;
        t = new_0_0(t);
        l_8 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATempty, l_8), i_8), h_8), c_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Explode_2, (ATerm)ATmakeAppl(sym_Var_1, c_8), (ATerm) ATmakeAppl(sym_Var_1, i_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_BAM_3, z_7, (ATerm)ATmakeAppl(sym_Var_1, c_8), (ATerm) ATmakeAppl(sym_Var_1, h_8)), (ATerm) ATmakeAppl(sym_BAM_3, x_7, (ATerm)ATmakeAppl(sym_Var_1, i_8), (ATerm) ATmakeAppl(sym_Var_1, l_8)))), (ATerm) ATmakeAppl(sym_PrimT_3, term_x_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, l_8)), (ATerm) ATmakeAppl(sym_Var_1, h_8))))));
      }
    }
  else
    {
      if(match_cons(t, sym_Build_1))
        {
          z_7 = ATgetArgument(t, 0);
          {
            ATerm p_8 = NULL,s_8 = NULL,u_8 = NULL,v_8 = NULL;
            t = y_7;
            t = new_0_0(t);
            u_8 = t;
            t = z_7;
            {
              static ATerm x_0 (ATerm t)
              {
                if(match_cons(t, sym_Explode_2))
                  {
                    if(((p_8 != NULL) && (p_8 != ATgetArgument(t, 0))))
                      _fail(ATgetArgument(t, 0));
                    else
                      p_8 = ATgetArgument(t, 0);
                    if(((s_8 != NULL) && (s_8 != ATgetArgument(t, 1))))
                      _fail(ATgetArgument(t, 1));
                    else
                      s_8 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
                return(t);
              }
              t = oncetd_1_0(x_0, t);
            }
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, u_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_x_9, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_8)), not_null(p_8))), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, u_8)), (ATerm) ATmakeAppl(sym_Build_1, v_8))));
          }
        }
      else
        {
          ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL;
          if(match_cons(t, sym_Match_1))
            {
              z_7 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = y_7;
          t = new_0_0(t);
          z_8 = t;
          t = new_0_0(t);
          a_9 = t;
          t = z_7;
          {
            static ATerm e_1 (ATerm t)
            {
              if(match_cons(t, sym_Explode_2))
                {
                  if(((x_8 != NULL) && (x_8 != ATgetArgument(t, 0))))
                    _fail(ATgetArgument(t, 0));
                  else
                    x_8 = ATgetArgument(t, 0);
                  if(((y_8 != NULL) && (y_8 != ATgetArgument(t, 1))))
                    _fail(ATgetArgument(t, 1));
                  else
                    y_8 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym_Var_1, z_8);
              return(t);
            }
            t = oncetd_1_0(e_1, t);
          }
          b_9 = t;
          t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, z_8), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_9), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, a_9)), (ATerm) ATmakeAppl(sym_PrimT_3, term_t_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, a_9))))), (ATerm)ATmakeAppl(sym_Var_1, z_8), (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_8)), not_null(x_8)))))));
        }
    }
  return(t);
}
ATerm Mapp2_0_0 (ATerm t)
{
  ATerm d_9 = NULL,e_9 = NULL;
  d_9 = t;
  if(match_cons(t, sym_Match_1))
    {
      e_9 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_9 = NULL,h_9 = NULL,k_9 = NULL,m_9 = NULL;
        t = d_9;
        t = new_0_0(t);
        k_9 = t;
        t = e_9;
        {
          static ATerm k_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((g_9 != NULL) && (g_9 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_9 = ATgetArgument(t, 0);
                if(((h_9 != NULL) && (h_9 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  h_9 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_As_2, (ATerm)ATmakeAppl(sym_Var_1, k_9), g_9);
            return(t);
          }
          t = pat_td_1_0(k_1, t);
        }
        m_9 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, k_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, m_9), (ATerm) ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_w_10, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Var_1, k_9))), (ATerm) ATmakeAppl(sym_Match_1, not_null(h_9))))));
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_9 = NULL,r_9 = NULL,s_9 = NULL;
              t = d_9;
              t = new_0_0(t);
              r_9 = t;
              t = e_9;
              {
                static ATerm n_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((q_9 != NULL) && (q_9 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        q_9 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, r_9);
                  return(t);
                }
                t = pat_td_1_0(n_1, t);
              }
              s_9 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, r_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, s_9), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, r_9)), not_null(q_9))));
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
              {
                ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL,b_10 = NULL;
                t = d_9;
                t = new_0_0(t);
                a_10 = t;
                t = e_9;
                {
                  static ATerm o_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((z_9 != NULL) && (z_9 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          z_9 = ATgetArgument(t, 0);
                        if(((y_9 != NULL) && (y_9 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          y_9 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, a_10);
                    return(t);
                  }
                  t = pat_td_1_0(o_1, t);
                }
                b_10 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, a_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, b_10), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, (ATerm) ATmakeAppl(sym_Var_1, a_10)), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, not_null(y_9)), not_null(z_9)))));
              }
            }
        }
      }
  }
  return(t);
}
ATerm pat_td_1_0 (ATerm j_89 (ATerm), ATerm t)
{
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = j_89(t);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm e_14 = NULL,f_14 = NULL,i_14 = NULL,k_14 = NULL;
        f_14 = t;
        if(match_cons(t, sym_Op_2))
          {
            i_14 = ATgetArgument(t, 0);
            k_14 = ATgetArgument(t, 1);
            {
              ATerm l_1 = NULL,q_1 = NULL,y_0 = NULL;
              t = SSLgetAnnotations(f_14);
              l_1 = t;
              t = k_14;
              {
                static ATerm p_1 (ATerm t)
                {
                  t = pat_td_1_0(j_89, t);
                  return(t);
                }
                t = fetch_1_0(p_1, t);
              }
              q_1 = t;
              t = (ATerm) ATmakeAppl(sym_Op_2, i_14, q_1);
              y_0 = t;
              t = SSLsetAnnotations(y_0, l_1);
            }
          }
        else
          {
            if(match_cons(t, sym_Explode_2))
              {
                i_14 = ATgetArgument(t, 0);
                k_14 = ATgetArgument(t, 1);
                {
                  ATerm l_11 = t;
                  int m_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 = NULL,r_2 = NULL,z_0 = NULL;
                      t = SSLgetAnnotations(f_14);
                      e_2 = t;
                      t = k_14;
                      t = pat_td_1_0(j_89, t);
                      r_2 = t;
                      t = (ATerm) ATmakeAppl(sym_Explode_2, i_14, r_2);
                      z_0 = t;
                      t = SSLsetAnnotations(z_0, e_2);
                      LocalPopChoice(m_11);
                    }
                  else
                    {
                      t = l_11;
                      {
                        ATerm q_3 = NULL,f_4 = NULL,a_1 = NULL;
                        t = SSLgetAnnotations(f_14);
                        q_3 = t;
                        t = i_14;
                        t = pat_td_1_0(j_89, t);
                        f_4 = t;
                        t = (ATerm) ATmakeAppl(sym_Explode_2, f_4, k_14);
                        a_1 = t;
                        t = SSLsetAnnotations(a_1, q_3);
                      }
                    }
                }
              }
            else
              {
                if(match_cons(t, sym_PrimT_3))
                  {
                    i_14 = ATgetArgument(t, 0);
                    k_14 = ATgetArgument(t, 1);
                    e_14 = ATgetArgument(t, 2);
                    {
                      ATerm k_5 = NULL,w_5 = NULL,b_1 = NULL;
                      t = SSLgetAnnotations(f_14);
                      k_5 = t;
                      t = e_14;
                      {
                        static ATerm t_1 (ATerm t)
                        {
                          t = pat_td_1_0(j_89, t);
                          return(t);
                        }
                        t = fetch_1_0(t_1, t);
                      }
                      w_5 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, i_14, k_14, w_5);
                      b_1 = t;
                      t = SSLsetAnnotations(b_1, k_5);
                    }
                  }
                else
                  {
                    if(match_cons(t, sym_CallT_3))
                      {
                        i_14 = ATgetArgument(t, 0);
                        k_14 = ATgetArgument(t, 1);
                        e_14 = ATgetArgument(t, 2);
                        {
                          ATerm k_6 = NULL,p_6 = NULL,p_7 = NULL;
                          t = SSLgetAnnotations(f_14);
                          k_6 = t;
                          t = e_14;
                          {
                            static ATerm u_1 (ATerm t)
                            {
                              t = pat_td_1_0(j_89, t);
                              return(t);
                            }
                            t = fetch_1_0(u_1, t);
                          }
                          p_6 = t;
                          t = (ATerm) ATmakeAppl(sym_CallT_3, i_14, k_14, p_6);
                          p_7 = t;
                          t = SSLsetAnnotations(p_7, k_6);
                        }
                      }
                    else
                      {
                        ATerm l_7 = NULL,s_7 = NULL,s_10 = NULL;
                        if(match_cons(t, sym_As_2))
                          {
                            i_14 = ATgetArgument(t, 0);
                            k_14 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = SSLgetAnnotations(f_14);
                        l_7 = t;
                        t = k_14;
                        t = pat_td_1_0(j_89, t);
                        s_7 = t;
                        t = (ATerm) ATmakeAppl(sym_As_2, i_14, s_7);
                        s_10 = t;
                        t = SSLsetAnnotations(s_10, l_7);
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
  ATerm g_15 = NULL,i_15 = NULL;
  g_15 = t;
  if(match_cons(t, sym_Build_1))
    {
      i_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm o_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_15 = NULL,n_15 = NULL,s_15 = NULL,u_15 = NULL;
        t = g_15;
        t = new_0_0(t);
        s_15 = t;
        t = i_15;
        {
          static ATerm v_1 (ATerm t)
          {
            if(match_cons(t, sym_Anno_2))
              {
                if(((m_15 != NULL) && (m_15 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_15 = ATgetArgument(t, 0);
                if(((n_15 != NULL) && (n_15 != ATgetArgument(t, 1))))
                  _fail(ATgetArgument(t, 1));
                else
                  n_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = (ATerm) ATmakeAppl(sym_Var_1, s_15);
            return(t);
          }
          t = pat_td_1_0(v_1, t);
        }
        u_15 = t;
        t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, s_15), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_PrimT_3, term_u_11, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_15)), not_null(m_15))), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, s_15)))), (ATerm) ATmakeAppl(sym_Build_1, u_15)));
        LocalPopChoice(q_11);
      }
    else
      {
        t = o_11;
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_15 = NULL,d_16 = NULL,e_16 = NULL;
              t = g_15;
              t = new_0_0(t);
              d_16 = t;
              t = i_15;
              {
                static ATerm w_1 (ATerm t)
                {
                  if(match_cons(t, sym_RootApp_1))
                    {
                      if(((x_15 != NULL) && (x_15 != ATgetArgument(t, 0))))
                        _fail(ATgetArgument(t, 0));
                      else
                        x_15 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym_Var_1, d_16);
                  return(t);
                }
                t = pat_td_1_0(w_1, t);
              }
              e_16 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, d_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, not_null(x_15), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, d_16)))), (ATerm) ATmakeAppl(sym_Build_1, e_16)));
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              {
                ATerm h_16 = NULL,l_16 = NULL,o_16 = NULL,q_16 = NULL;
                t = g_15;
                t = new_0_0(t);
                o_16 = t;
                t = i_15;
                {
                  static ATerm y_1 (ATerm t)
                  {
                    if(match_cons(t, sym_App_2))
                      {
                        if(((h_16 != NULL) && (h_16 != ATgetArgument(t, 0))))
                          _fail(ATgetArgument(t, 0));
                        else
                          h_16 = ATgetArgument(t, 0);
                        if(((l_16 != NULL) && (l_16 != ATgetArgument(t, 1))))
                          _fail(ATgetArgument(t, 1));
                        else
                          l_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    t = (ATerm) ATmakeAppl(sym_Var_1, o_16);
                    return(t);
                  }
                  t = pat_td_1_0(y_1, t);
                }
                q_16 = t;
                t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, o_16), (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_BAM_3, not_null(h_16), not_null(l_16), (ATerm) ATmakeAppl(sym_Var_1, o_16))), (ATerm) ATmakeAppl(sym_Build_1, q_16)));
              }
            }
        }
      }
  }
  return(t);
}
ATerm HL_0_0 (ATerm t)
{
  ATerm x_16 = NULL,z_16 = NULL,a_17 = NULL,e_17 = NULL,f_17 = NULL;
  if(match_cons(t, sym_Lets_2))
    {
      e_17 = ATgetArgument(t, 0);
      f_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_Let_2, e_17, f_17);
    }
  else
    {
      if(match_cons(t, sym_LChoices_1))
        {
          e_17 = ATgetArgument(t, 0);
          t = e_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              x_16 = ATgetFirst((ATermList) t);
              z_16 = (ATerm) ATgetNext((ATermList) t);
              t = (ATerm) ATmakeAppl(sym_LChoice_2, x_16, (ATerm) ATmakeAppl(sym_LChoices_1, z_16));
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = term_y_11;
            }
        }
      else
        {
          if(match_cons(t, sym_Choices_1))
            {
              e_17 = ATgetArgument(t, 0);
              t = e_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  x_16 = ATgetFirst((ATermList) t);
                  z_16 = (ATerm) ATgetNext((ATermList) t);
                  t = (ATerm) ATmakeAppl(sym_Choice_2, x_16, (ATerm) ATmakeAppl(sym_Choices_1, z_16));
                }
              else
                {
                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                    _fail(t);
                  t = term_y_11;
                }
            }
          else
            {
              if(match_cons(t, sym_Seqs_1))
                {
                  e_17 = ATgetArgument(t, 0);
                  t = e_17;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      x_16 = ATgetFirst((ATermList) t);
                      z_16 = (ATerm) ATgetNext((ATermList) t);
                      t = (ATerm) ATmakeAppl(sym_Seq_2, x_16, (ATerm) ATmakeAppl(sym_Seqs_1, z_16));
                    }
                  else
                    {
                      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                        _fail(t);
                      t = term_u_9;
                    }
                }
              else
                {
                  if(match_cons(t, sym_InfixApp_3))
                    {
                      e_17 = ATgetArgument(t, 0);
                      f_17 = ATgetArgument(t, 1);
                      a_17 = ATgetArgument(t, 2);
                      t = (ATerm) ATmakeAppl(sym_App_2, f_17, (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATinsert(ATinsert(ATempty, a_17), e_17)));
                    }
                  else
                    {
                      if(match_cons(t, sym_BAM_3))
                        {
                          e_17 = ATgetArgument(t, 0);
                          f_17 = ATgetArgument(t, 1);
                          a_17 = ATgetArgument(t, 2);
                          t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Match_1, a_17)), e_17), (ATerm) ATmakeAppl(sym_Build_1, f_17)));
                        }
                      else
                        {
                          if(match_cons(t, sym_AM_2))
                            {
                              e_17 = ATgetArgument(t, 0);
                              f_17 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Seq_2, e_17, (ATerm) ATmakeAppl(sym_Match_1, f_17));
                            }
                          else
                            {
                              if(match_cons(t, sym_MA_2))
                                {
                                  e_17 = ATgetArgument(t, 0);
                                  f_17 = ATgetArgument(t, 1);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Match_1, e_17), f_17);
                                }
                              else
                                {
                                  if(match_cons(t, sym_BA_2))
                                    {
                                      e_17 = ATgetArgument(t, 0);
                                      f_17 = ATgetArgument(t, 1);
                                    }
                                  else
                                    _fail(t);
                                  t = (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, f_17), e_17);
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
static ATerm z_1 (ATerm t)
{
  ATerm z_11 = t;
  if((PushChoice() == 0))
    {
      ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,z_10 = NULL;
      l_19 = t;
      if(match_cons(t, sym_Var_1))
        {
          j_19 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(l_19);
      i_19 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, j_19);
      z_10 = t;
      t = SSLsetAnnotations(z_10, i_19);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = z_11;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_19 = ATgetFirst((ATermList) t);
      n_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_19, n_19);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(match_cons(b_12, sym__2))
        {
          o_19 = ATgetArgument(b_12, 0);
          p_19 = ATgetArgument(b_12, 1);
        }
      else
        _fail(t);
      {
        ATerm d_12 = ATgetArgument(t, 1);
        if(match_cons(d_12, sym__2))
          {
            q_19 = ATgetArgument(d_12, 0);
            r_19 = ATgetArgument(d_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_19), o_19), (ATerm) ATinsert(CheckATermList(r_19), p_19));
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  ATerm s_19 = NULL,v_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_19 = ATgetFirst((ATermList) t);
      v_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_19, v_19);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(match_cons(e_12, sym__2))
        {
          w_19 = ATgetArgument(e_12, 0);
          x_19 = ATgetArgument(e_12, 1);
        }
      else
        _fail(t);
      {
        ATerm f_12 = ATgetArgument(t, 1);
        if(match_cons(f_12, sym__2))
          {
            y_19 = ATgetArgument(f_12, 0);
            z_19 = ATgetArgument(f_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_19), w_19), (ATerm) ATinsert(CheckATermList(z_19), x_19));
  return(t);
}
static ATerm n_4 (ATerm b_26, ATerm c_26, ATerm d_26, ATerm t)
{
  ATerm s_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,c_19 = NULL,d_19 = NULL,e_19 = NULL,g_19 = NULL,h_19 = NULL,e_11 = NULL;
  t = d_26;
  t = fetch_1_0(z_1, t);
  t = d_26;
  t = genzip_4_0(b_2, i_2, m_2, LiftPrimArg_0_0, t);
  h_19 = t;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_19);
  x_18 = t;
  t = c_19;
  t = concat_0_0(t);
  e_19 = t;
  t = d_19;
  t = genzip_4_0(n_2, o_2, q_2, _id, t);
  g_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_19, g_19);
  e_11 = t;
  t = SSLsetAnnotations(e_11, x_18);
  if(match_cons(t, sym__2))
    {
      s_18 = ATgetArgument(t, 0);
      {
        ATerm g_12 = ATgetArgument(t, 1);
        if(match_cons(g_12, sym__2))
          {
            v_18 = ATgetArgument(g_12, 0);
            w_18 = ATgetArgument(g_12, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Scope_2, s_18, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_18), (ATerm) ATmakeAppl(sym_CallT_3, b_26, c_26, w_18)));
  return(t);
}
ATerm genzip_4_0 (ATerm p_95 (ATerm), ATerm q_95 (ATerm), ATerm r_95 (ATerm), ATerm s_95 (ATerm), ATerm t)
{
  static ATerm n_20 (ATerm t)
  {
    ATerm h_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_95(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = h_12;
        {
          ATerm d_20 = NULL,f_20 = NULL,i_20 = NULL,j_20 = NULL,l_20 = NULL,m_20 = NULL,h_11 = NULL;
          t = q_95(t);
          m_20 = t;
          if(match_cons(t, sym__2))
            {
              f_20 = ATgetArgument(t, 0);
              i_20 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(m_20);
          d_20 = t;
          t = f_20;
          t = s_95(t);
          j_20 = t;
          t = i_20;
          t = n_20(t);
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_20, l_20);
          h_11 = t;
          t = SSLsetAnnotations(h_11, d_20);
          t = r_95(t);
        }
      }
    return(t);
  }
  t = n_20(t);
  return(t);
}
ATerm at_end_1_0 (ATerm b_104 (ATerm), ATerm t)
{
  static ATerm y_21 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
    x_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_21 = ATgetFirst((ATermList) t);
        w_21 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm k_8 = NULL,o_8 = NULL,n_11 = NULL;
          t = SSLgetAnnotations(x_21);
          k_8 = t;
          t = w_21;
          t = y_21(t);
          o_8 = t;
          t = (ATerm) ATinsert(CheckATermList(o_8), v_21);
          n_11 = t;
          t = SSLsetAnnotations(n_11, k_8);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = x_21;
        t = b_104(t);
      }
    return(t);
  }
  t = y_21(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_22 = NULL,g_22 = NULL,h_22 = NULL;
  c_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_22;
    }
  else
    {
      static ATerm u_2 (ATerm t)
      {
        t = not_null(h_22);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_22 = ATgetFirst((ATermList) t);
          if(((h_22 != NULL) && (h_22 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            h_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_22;
      t = at_end_1_0(u_2, t);
    }
  return(t);
}
static ATerm v_24 (ATerm o_23, ATerm t)
{
  ATerm q_23 = NULL;
  t = o_23;
  {
    ATerm l_12 = t;
    if((PushChoice() == 0))
      {
        ATerm u_23 = NULL,x_23 = NULL,a_24 = NULL,p_11 = NULL;
        a_24 = t;
        if(match_cons(t, sym_Var_1))
          {
            x_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_24);
        u_23 = t;
        t = (ATerm) ATmakeAppl(sym_Var_1, x_23);
        p_11 = t;
        t = SSLsetAnnotations(p_11, u_23);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_12;
      }
  }
  t = new_0_0(t);
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, q_23), (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_Where_1, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Build_1, o_23), (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Var_1, q_23)))), (ATerm) ATmakeAppl(sym_Var_1, q_23)));
  return(t);
}
ATerm LiftPrimArg_0_0 (ATerm t)
{
  ATerm c_24 = NULL,i_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym_Var_1))
    {
      i_24 = ATgetArgument(t, 0);
      {
        ATerm n_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = v_24(c_24, t);
            LocalPopChoice(s_12);
          }
        else
          {
            t = n_12;
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, (ATerm) ATmakeAppl(sym__2, term_u_9, (ATerm) ATmakeAppl(sym_Var_1, i_24)));
          }
      }
    }
  else
    {
      t = v_24(c_24, t);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_12 = t;
  if((PushChoice() == 0))
    {
      ATerm k_10 = NULL,l_10 = NULL,m_10 = NULL,r_11 = NULL;
      m_10 = t;
      if(match_cons(t, sym_Var_1))
        {
          l_10 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_10);
      k_10 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, l_10);
      r_11 = t;
      t = SSLsetAnnotations(r_11, k_10);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = t_12;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_10 = ATgetFirst((ATermList) t);
      o_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_10, o_10);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,a_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(match_cons(b_13, sym__2))
        {
          p_10 = ATgetArgument(b_13, 0);
          q_10 = ATgetArgument(b_13, 1);
        }
      else
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
        if(match_cons(c_13, sym__2))
          {
            r_10 = ATgetArgument(c_13, 0);
            a_11 = ATgetArgument(c_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(r_10), p_10), (ATerm) ATinsert(CheckATermList(a_11), q_10));
  return(t);
}
static ATerm z_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm b_11 = NULL,c_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_11 = ATgetFirst((ATermList) t);
      c_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_11, c_11);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm d_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm d_13 = ATgetArgument(t, 0);
      if(match_cons(d_13, sym__2))
        {
          d_11 = ATgetArgument(d_13, 0);
          i_11 = ATgetArgument(d_13, 1);
        }
      else
        _fail(t);
      {
        ATerm n_13 = ATgetArgument(t, 1);
        if(match_cons(n_13, sym__2))
          {
            j_11 = ATgetArgument(n_13, 0);
            k_11 = ATgetArgument(n_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(j_11), d_11), (ATerm) ATinsert(CheckATermList(k_11), i_11));
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm r_13 = t;
  if((PushChoice() == 0))
    {
      ATerm g_13 = NULL,h_13 = NULL,i_13 = NULL,t_11 = NULL;
      i_13 = t;
      if(match_cons(t, sym_Var_1))
        {
          h_13 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_13);
      g_13 = t;
      t = (ATerm) ATmakeAppl(sym_Var_1, h_13);
      t_11 = t;
      t = SSLsetAnnotations(t_11, g_13);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_13;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm e_3 (ATerm t)
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
static ATerm f_3 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL,o_13 = NULL,p_13 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      if(match_cons(u_13, sym__2))
        {
          l_13 = ATgetArgument(u_13, 0);
          m_13 = ATgetArgument(u_13, 1);
        }
      else
        _fail(t);
      {
        ATerm v_13 = ATgetArgument(t, 1);
        if(match_cons(v_13, sym__2))
          {
            o_13 = ATgetArgument(v_13, 0);
            p_13 = ATgetArgument(v_13, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_13), l_13), (ATerm) ATinsert(CheckATermList(p_13), m_13));
  return(t);
}
static ATerm g_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  t = term_a_12;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm w_13 = NULL,x_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_13 = ATgetFirst((ATermList) t);
      x_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_13, x_13);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_13 = NULL,g_14 = NULL,h_14 = NULL,j_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_14 = ATgetArgument(t, 0);
      if(match_cons(a_14, sym__2))
        {
          z_13 = ATgetArgument(a_14, 0);
          g_14 = ATgetArgument(a_14, 1);
        }
      else
        _fail(t);
      {
        ATerm c_14 = ATgetArgument(t, 1);
        if(match_cons(c_14, sym__2))
          {
            h_14 = ATgetArgument(c_14, 0);
            j_14 = ATgetArgument(c_14, 1);
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_14), z_13), (ATerm) ATinsert(CheckATermList(j_14), g_14));
  return(t);
}
ATerm LiftPrimArgs_0_0 (ATerm t)
{
  ATerm t_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      y_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      t_31 = ATgetArgument(t, 2);
      {
        ATerm w_9 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,s_11 = NULL;
        t = t_31;
        t = fetch_1_0(v_2, t);
        t = t_31;
        t = genzip_4_0(w_2, x_2, y_2, LiftPrimArg_0_0, t);
        j_10 = t;
        if(match_cons(t, sym__2))
          {
            f_10 = ATgetArgument(t, 0);
            g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_10);
        e_10 = t;
        t = f_10;
        t = concat_0_0(t);
        h_10 = t;
        t = g_10;
        t = genzip_4_0(z_2, a_3, b_3, _id, t);
        i_10 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_10, i_10);
        s_11 = t;
        t = SSLsetAnnotations(s_11, e_10);
        if(match_cons(t, sym__2))
          {
            w_9 = ATgetArgument(t, 0);
            {
              ATerm l_14 = ATgetArgument(t, 1);
              if(match_cons(l_14, sym__2))
                {
                  c_10 = ATgetArgument(l_14, 0);
                  d_10 = ATgetArgument(l_14, 1);
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym_Scope_2, w_9, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, c_10), (ATerm) ATmakeAppl(sym_PrimT_3, y_31, z_31, d_10)));
      }
    }
  else
    {
      ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,e_13 = NULL,f_13 = NULL,v_11 = NULL;
      if(match_cons(t, sym_Prim_2))
        {
          y_31 = ATgetArgument(t, 0);
          z_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_31;
      t = fetch_1_0(c_3, t);
      t = z_31;
      t = genzip_4_0(d_3, e_3, f_3, LiftPrimArg_0_0, t);
      f_13 = t;
      if(match_cons(t, sym__2))
        {
          y_12 = ATgetArgument(t, 0);
          z_12 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(f_13);
      x_12 = t;
      t = y_12;
      t = concat_0_0(t);
      a_13 = t;
      t = z_12;
      t = genzip_4_0(g_3, h_3, i_3, _id, t);
      e_13 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_13, e_13);
      v_11 = t;
      t = SSLsetAnnotations(v_11, x_12);
      if(match_cons(t, sym__2))
        {
          u_12 = ATgetArgument(t, 0);
          {
            ATerm m_14 = ATgetArgument(t, 1);
            if(match_cons(m_14, sym__2))
              {
                v_12 = ATgetArgument(m_14, 0);
                w_12 = ATgetArgument(m_14, 1);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Scope_2, u_12, (ATerm) ATmakeAppl(sym_Seq_2, (ATerm)ATmakeAppl(sym_Seqs_1, v_12), (ATerm) ATmakeAppl(sym_PrimT_3, y_31, (ATerm)ATempty, w_12)));
    }
  return(t);
}
ATerm repeat_2_0 (ATerm y_96 (ATerm), ATerm z_96 (ATerm), ATerm t)
{
  static ATerm h_32 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_96(t);
        t = h_32(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = z_96(t);
      }
    return(t);
  }
  t = h_32(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  m_33 = t;
  if(match_cons(t, sym_Con_3))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      l_33 = ATgetArgument(t, 2);
      {
        ATerm y_14 = NULL,c_12 = NULL;
        t = SSLgetAnnotations(m_33);
        y_14 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, j_33, k_33, l_33);
        c_12 = t;
        t = SSLsetAnnotations(c_12, y_14);
      }
    }
  else
    {
      if(!(match_cons(t, sym_Wld_0)))
        _fail(t);
      t = m_33;
    }
  return(t);
}
ATerm buildterm_0_0 (ATerm t)
{
  ATerm q_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(j_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = q_14;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  if(match_cons(t, sym_Con_3))
    {
      f_35 = ATgetArgument(t, 0);
      g_35 = ATgetArgument(t, 1);
      d_35 = ATgetArgument(t, 2);
      {
        ATerm r_15 = NULL,i_12 = NULL;
        t = SSLgetAnnotations(e_35);
        r_15 = t;
        t = (ATerm) ATmakeAppl(sym_Con_3, f_35, g_35, d_35);
        i_12 = t;
        t = SSLsetAnnotations(i_12, r_15);
      }
    }
  else
    {
      ATerm k_16 = NULL,j_12 = NULL;
      if(match_cons(t, sym_App_2))
        {
          f_35 = ATgetArgument(t, 0);
          g_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(e_35);
      k_16 = t;
      t = (ATerm) ATmakeAppl(sym_App_2, f_35, g_35);
      j_12 = t;
      t = SSLsetAnnotations(j_12, k_16);
    }
  return(t);
}
ATerm pureterm_0_0 (ATerm t)
{
  ATerm r_14 = t;
  if((PushChoice() == 0))
    {
      t = topdown_1_0(k_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_14;
    }
  return(t);
}
ATerm RtoS_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  if(match_cons(t, sym_SRule_1))
    {
      m_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_35;
  if(match_cons(t, sym_StratRule_3))
    {
      n_35 = ATgetArgument(t, 0);
      o_35 = ATgetArgument(t, 1);
      p_35 = ATgetArgument(t, 2);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, o_35), (ATerm) ATmakeAppl(sym_Where_1, p_35)), n_35));
    }
  else
    {
      if(match_cons(t, sym_Rule_3))
        {
          n_35 = ATgetArgument(t, 0);
          o_35 = ATgetArgument(t, 1);
          p_35 = ATgetArgument(t, 2);
        }
      else
        _fail(t);
      t = n_35;
      t = pureterm_0_0(t);
      t = o_35;
      t = buildterm_0_0(t);
      t = (ATerm) ATmakeAppl(sym_Seqs_1, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_Build_1, o_35)), (ATerm) ATmakeAppl(sym_Where_1, p_35)), (ATerm) ATmakeAppl(sym_Match_1, n_35)));
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm h_92 (ATerm), ATerm t)
{
  static ATerm c_36 (ATerm t)
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_92(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
        t = SRTS_one(c_36, t);
      }
    return(t);
  }
  t = c_36(t);
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
static ATerm r_4 (ATerm x_20, ATerm a_21, ATerm b_21, ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
  t = new_0_0(t);
  h_36 = t;
  t = x_20;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm v_14 = ATgetArgument(t, 0);
          if(match_cons(v_14, sym_Var_1))
            {
              if(((g_36 != NULL) && (g_36 != ATgetArgument(v_14, 0))))
                _fail(ATgetArgument(v_14, 0));
              else
                g_36 = ATgetArgument(v_14, 0);
            }
          else
            _fail(t);
          if(((e_36 != NULL) && (e_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            e_36 = ATgetArgument(t, 1);
          {
            ATerm w_14 = ATgetArgument(t, 2);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, g_36);
      return(t);
    }
    t = oncetd_1_0(n_3, t);
  }
  i_36 = t;
  t = a_21;
  {
    static ATerm o_3 (ATerm t)
    {
      if(match_cons(t, sym_Con_3))
        {
          ATerm x_14 = ATgetArgument(t, 0);
          if(match_cons(x_14, sym_Var_1))
            {
              if(((g_36 != NULL) && (g_36 != ATgetArgument(x_14, 0))))
                _fail(ATgetArgument(x_14, 0));
              else
                g_36 = ATgetArgument(x_14, 0);
            }
          else
            _fail(t);
          if(((f_36 != NULL) && (f_36 != ATgetArgument(t, 1))))
            _fail(ATgetArgument(t, 1));
          else
            f_36 = ATgetArgument(t, 1);
          {
            ATerm z_14 = ATgetArgument(t, 2);
            if(match_cons(z_14, sym_CallT_3))
              {
                if(((d_36 != NULL) && (d_36 != ATgetArgument(z_14, 0))))
                  _fail(ATgetArgument(z_14, 0));
                else
                  d_36 = ATgetArgument(z_14, 0);
                {
                  ATerm a_15 = ATgetArgument(z_14, 1);
                  if(((ATgetType(a_15) != AT_LIST) || !(ATisEmpty(a_15))))
                    _fail(t);
                }
                {
                  ATerm b_15 = ATgetArgument(z_14, 2);
                  if(((ATgetType(b_15) != AT_LIST) || !(ATisEmpty(b_15))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_Var_1, h_36);
      return(t);
    }
    t = oncetd_1_0(o_3, t);
  }
  j_36 = t;
  t = (ATerm) ATmakeAppl(sym_Scope_2, (ATerm)ATinsert(ATempty, h_36), (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, i_36, j_36, (ATerm) ATmakeAppl(sym_Seq_2, b_21, (ATerm) ATmakeAppl(sym_BAM_3, (ATerm)ATmakeAppl(sym_CallT_3, not_null(d_36), (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SRule_1, (ATerm) ATmakeAppl(sym_Rule_3, not_null(e_36), not_null(f_36), term_u_9))), (ATerm) ATempty), (ATerm)ATmakeAppl(sym_Var_1, not_null(g_36)), (ATerm) ATmakeAppl(sym_Var_1, h_36))))));
  return(t);
}
ATerm desugarRule_0_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_15 = t;
      int h_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
          z_36 = t;
          if(match_cons(t, sym_SRule_1))
            {
              a_37 = ATgetArgument(t, 0);
              t = a_37;
              if(match_cons(t, sym_Rule_3))
                {
                  w_36 = ATgetArgument(t, 0);
                  x_36 = ATgetArgument(t, 1);
                  y_36 = ATgetArgument(t, 2);
                }
              else
                _fail(t);
              t = z_36;
              t = r_4(w_36, x_36, y_36, t);
              t = desugarRule_0_0(t);
            }
          else
            {
              ATerm b_17 = NULL,h_17 = NULL,m_12 = NULL;
              if(match_cons(t, sym_Scope_2))
                {
                  a_37 = ATgetArgument(t, 0);
                  b_37 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSLgetAnnotations(z_36);
              b_17 = t;
              t = b_37;
              t = desugarRule_0_0(t);
              h_17 = t;
              t = (ATerm) ATmakeAppl(sym_Scope_2, a_37, h_17);
              m_12 = t;
              t = SSLsetAnnotations(m_12, b_17);
            }
          LocalPopChoice(h_15);
        }
      else
        {
          t = f_15;
          t = RtoS_0_0(t);
        }
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
    }
  return(t);
}
ATerm topdown_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  static ATerm s_3 (ATerm t)
  {
    t = topdown_1_0(d_91, t);
    return(t);
  }
  t = d_91(t);
  t = SRTS_all(s_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm j_15 = t;
  int k_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = desugarRule_0_0(t);
      LocalPopChoice(k_15);
    }
  else
    {
      t = j_15;
    }
  t = repeat_2_0(u_3, _id, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = LiftPrimArgs_0_0(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = l_15;
      {
        ATerm p_15 = t;
        int q_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
            q_37 = t;
            if(match_cons(t, sym_CallT_3))
              {
                r_37 = ATgetArgument(t, 0);
                s_37 = ATgetArgument(t, 1);
                t_37 = ATgetArgument(t, 2);
              }
            else
              _fail(t);
            t = q_37;
            t = n_4(r_37, s_37, t_37, t);
            LocalPopChoice(q_15);
          }
        else
          {
            t = p_15;
            {
              ATerm t_15 = t;
              int v_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = HL_0_0(t);
                  LocalPopChoice(v_15);
                }
              else
                {
                  t = t_15;
                  {
                    ATerm w_15 = t;
                    int y_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = Bapp_0_0(t);
                        LocalPopChoice(y_15);
                      }
                    else
                      {
                        t = w_15;
                        {
                          ATerm z_15 = t;
                          int a_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_16 = t;
                              int c_16 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
                                  if(match_cons(t, sym_Match_1))
                                    {
                                      y_37 = ATgetArgument(t, 0);
                                    }
                                  else
                                    _fail(t);
                                  t = y_37;
                                  if(match_cons(t, sym_RootApp_1))
                                    {
                                      z_37 = ATgetArgument(t, 0);
                                      t = z_37;
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_App_2))
                                        {
                                          z_37 = ATgetArgument(t, 0);
                                          a_38 = ATgetArgument(t, 1);
                                        }
                                      else
                                        _fail(t);
                                      t = (ATerm) ATmakeAppl(sym_BA_2, z_37, a_38);
                                    }
                                  LocalPopChoice(c_16);
                                }
                              else
                                {
                                  t = b_16;
                                  t = Mapp2_0_0(t);
                                }
                              LocalPopChoice(a_16);
                            }
                          else
                            {
                              t = z_15;
                              {
                                ATerm f_16 = t;
                                int g_16 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Expl_0_0(t);
                                    LocalPopChoice(g_16);
                                  }
                                else
                                  {
                                    t = f_16;
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
  t = topdown_1_0(t_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
      h_40 = t;
      if(match_cons(t, sym_SDef_3))
        {
          i_40 = ATgetArgument(t, 0);
          j_40 = ATgetArgument(t, 1);
          k_40 = ATgetArgument(t, 2);
          {
            ATerm q_17 = NULL,c_18 = NULL,o_12 = NULL;
            t = SSLgetAnnotations(h_40);
            q_17 = t;
            t = k_40;
            t = desugar_0_0(t);
            c_18 = t;
            t = (ATerm) ATmakeAppl(sym_SDef_3, i_40, j_40, c_18);
            o_12 = t;
            t = SSLsetAnnotations(o_12, q_17);
          }
        }
      else
        {
          if(match_cons(t, sym_SDefT_4))
            {
              i_40 = ATgetArgument(t, 0);
              j_40 = ATgetArgument(t, 1);
              k_40 = ATgetArgument(t, 2);
              l_40 = ATgetArgument(t, 3);
              {
                ATerm k_19 = NULL,e_20 = NULL,p_12 = NULL;
                t = SSLgetAnnotations(h_40);
                k_19 = t;
                t = l_40;
                t = desugar_0_0(t);
                e_20 = t;
                t = (ATerm) ATmakeAppl(sym_SDefT_4, i_40, j_40, k_40, e_20);
                p_12 = t;
                t = SSLsetAnnotations(p_12, k_19);
              }
            }
          else
            {
              if(match_cons(t, sym_ExtSDef_3))
                {
                  i_40 = ATgetArgument(t, 0);
                  j_40 = ATgetArgument(t, 1);
                  k_40 = ATgetArgument(t, 2);
                  {
                    ATerm v_20 = NULL,q_12 = NULL;
                    t = SSLgetAnnotations(h_40);
                    v_20 = t;
                    t = (ATerm) ATmakeAppl(sym_ExtSDef_3, i_40, j_40, k_40);
                    q_12 = t;
                    t = SSLsetAnnotations(q_12, v_20);
                  }
                }
              else
                {
                  ATerm u_21 = NULL,r_12 = NULL;
                  if(match_cons(t, sym_ExtSDefInl_4))
                    {
                      i_40 = ATgetArgument(t, 0);
                      j_40 = ATgetArgument(t, 1);
                      k_40 = ATgetArgument(t, 2);
                      l_40 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(h_40);
                  u_21 = t;
                  t = (ATerm) ATmakeAppl(sym_ExtSDefInl_4, i_40, j_40, k_40, l_40);
                  r_12 = t;
                  t = SSLsetAnnotations(r_12, u_21);
                }
            }
        }
      LocalPopChoice(j_16);
    }
  else
    {
      t = i_16;
      t = debug_1_0(w_3, t);
      _fail(t);
    }
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm desugar_spec_0_0 (ATerm t)
{
  t = map_1_0(v_3, t);
  return(t);
}
ATerm Cons_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,q_13 = NULL;
  v_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_40 = ATgetFirst((ATermList) t);
      s_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  q_40 = t;
  t = r_40;
  t = z_76(t);
  t_40 = t;
  t = s_40;
  t = a_77(t);
  u_40 = t;
  t = (ATerm) ATinsert(CheckATermList(u_40), t_40);
  q_13 = t;
  t = SSLsetAnnotations(q_13, q_40);
  return(t);
}
static ATerm s_4 (ATerm u_35, ATerm v_35, ATerm t)
{
  ATerm w_40 = NULL;
  t = SSL_fputc(u_35, v_35);
  w_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_40);
  return(t);
}
static ATerm t_4 (ATerm p_34, ATerm q_34, ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_write_term_to_stream_text(p_34, q_34);
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_40);
  return(t);
}
static ATerm v_4 (ATerm n_98 (ATerm), ATerm r_232, ATerm t_34, ATerm t)
{
  ATerm y_40 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_232, term_n_16);
  t = y_4(t);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_40, t_34);
  t = n_98(t);
  t = fclose_0_0(t);
  t = t_34;
  return(t);
}
static ATerm u_4 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm z_40 = NULL;
  t = SSL_write_term_to_stream_baf(l_34, m_34);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_40);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_16 = ATgetArgument(t, 0);
      if(match_cons(p_16, sym_Stream_1))
        {
          c_41 = ATgetArgument(p_16, 0);
        }
      else
        _fail(t);
      d_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(c_41, d_41, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if(match_cons(r_16, sym_Stream_1))
        {
          h_41 = ATgetArgument(r_16, 0);
        }
      else
        _fail(t);
      i_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(h_41, i_41, t);
  e_41 = t;
  t = term_w_7;
  f_41 = t;
  t = e_41;
  if(match_cons(t, sym_Stream_1))
    {
      g_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, e_41);
  t = s_4(f_41, g_41, t);
  return(t);
}
ATerm output_1_0 (ATerm t_118 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL;
  t = t_118(t);
  b_41 = t;
  {
    ATerm s_16 = t;
    int t_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_16;
        t = get_config_0_0(t);
        LocalPopChoice(t_16);
      }
    else
      {
        t = s_16;
        t = term_v_16;
      }
  }
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
  {
    ATerm w_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_17;
        t = get_config_0_0(t);
        t = (ATerm) ATmakeAppl(sym__2, a_41, b_41);
        LocalPopChoice(y_16);
        if(match_cons(t, sym__2))
          {
            ATerm d_17 = ATgetArgument(t, 0);
            ATerm g_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_4(x_3, a_41, b_41, t);
      }
    else
      {
        t = w_16;
        if(match_cons(t, sym__2))
          {
            ATerm i_17 = ATgetArgument(t, 0);
            ATerm j_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_4(y_3, a_41, b_41, t);
      }
  }
  return(t);
}
static ATerm w_41 (ATerm q_41, ATerm t)
{
  t = SSL_fclose(q_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  u_41 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_41 = ATgetArgument(t, 0);
      {
        ATerm k_17 = t;
        int l_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_41);
            LocalPopChoice(l_17);
          }
        else
          {
            t = k_17;
            t = w_41(u_41, t);
          }
      }
    }
  else
    {
      t = w_41(u_41, t);
    }
  return(t);
}
static ATerm w_4 (ATerm r_34, ATerm t)
{
  t = SSL_read_term_from_stream(r_34);
  return(t);
}
static ATerm x_4 (ATerm w_35, ATerm x_35, ATerm t)
{
  ATerm x_41 = NULL;
  t = SSL_fopen(w_35, x_35);
  x_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_41);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_41 = NULL;
  t = SSL_stdin_stream();
  y_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_41);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_41 = NULL;
  t = SSL_stdout_stream();
  z_41 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_41);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_42 = NULL;
  t = SSL_stderr_stream();
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_42);
  return(t);
}
static ATerm j_43 (ATerm g_42, ATerm t)
{
  ATerm h_42 = NULL;
  t = SSL_explode_term(g_42);
  if(match_cons(t, sym__2))
    {
      ATerm m_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_17 = ATgetArgument(t, 1);
        if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
          {
            h_42 = ATgetFirst((ATermList) n_17);
            {
              ATerm o_17 = (ATerm) ATgetNext((ATermList) n_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_43 (ATerm k_42, ATerm n_42, ATerm o_42, ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,u_42 = NULL,s_13 = NULL;
  t = SSLgetAnnotations(o_42);
  r_42 = t;
  t = k_42;
  if(match_cons(t, sym_Path_1))
    {
      u_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_42, n_42);
  s_13 = t;
  t = SSLsetAnnotations(s_13, r_42);
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(p_42, q_42, t);
  return(t);
}
static ATerm l_43 (ATerm w_42, ATerm x_42, ATerm y_42, ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,e_43 = NULL,t_13 = NULL;
  t = SSLgetAnnotations(y_42);
  b_43 = t;
  t = SSL_is_string(w_42);
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_43, x_42);
  t_13 = t;
  t = SSLsetAnnotations(t_13, b_43);
  if(match_cons(t, sym__2))
    {
      z_42 = ATgetArgument(t, 0);
      a_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(z_42, a_43, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
  g_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
      {
        ATerm p_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_43(g_43, t);
            LocalPopChoice(r_17);
          }
        else
          {
            t = p_17;
            {
              ATerm s_17 = t;
              int t_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_43(h_43, i_43, g_43, t);
                  LocalPopChoice(t_17);
                }
              else
                {
                  t = s_17;
                  t = l_43(h_43, i_43, g_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_43(g_43, t);
    }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_u_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_43 = NULL;
      p_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_43, term_x_17);
      t = y_4(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      t = debug_1_0(z_3, t);
      _fail(t);
    }
  n_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(o_43, t);
  m_43 = t;
  t = n_43;
  t = fclose_0_0(t);
  t = m_43;
  return(t);
}
ATerm input_1_0 (ATerm u_118 (ATerm), ATerm t)
{
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_a_18;
      t = get_config_0_0(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      t = term_b_18;
    }
  t = ReadFromFile_0_0(t);
  t = u_118(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  t_43 = t;
  t = term_e_18;
  v_43 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_18), t_43), term_f_18);
  w_43 = t;
  t = SSL_printnl(v_43, w_43);
  t = term_h_18;
  u_43 = t;
  t = SSL_exit(u_43);
  t = s_43;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm y_43 = NULL;
  y_43 = t;
  if(match_string(t, "-k"))
    {
      t = y_43;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_43;
    }
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL;
  z_43 = t;
  t = SSL_string_to_int(z_43);
  a_44 = t;
  t = term_i_18;
  b_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_18, a_44);
  t = g_5(b_44, a_44, t);
  t = z_43;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm d_44 = NULL;
  d_44 = t;
  if(match_string(t, "-S"))
    {
      t = d_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = d_44;
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL;
  t = term_k_18;
  e_44 = t;
  t = term_l_18;
  f_44 = t;
  t = term_m_18;
  t = g_5(e_44, f_44, t);
  t = term_n_18;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_o_18;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  t = SSL_string_to_int(g_44);
  h_44 = t;
  t = term_k_18;
  i_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_18, h_44);
  t = g_5(i_44, h_44, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, g_44);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm j_44 = NULL,k_44 = NULL;
  t = term_q_18;
  j_44 = t;
  t = term_d_18;
  k_44 = t;
  t = term_r_18;
  t = g_5(j_44, k_44, t);
  t = term_t_18;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_u_18;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, g_4, h_4, t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_4, k_4, l_4, t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            t = Option_3_0(m_4, q_4, a_5, t);
          }
      }
    }
  return(t);
}
static ATerm g_5 (ATerm o_39, ATerm p_39, ATerm t)
{
  ATerm l_44 = NULL;
  t = term_f_19;
  l_44 = t;
  t = SSL_table_put(l_44, o_39, p_39);
  t = (ATerm) ATmakeAppl(sym__3, term_f_19, o_39, p_39);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,p_44 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
      t = term_d_18;
      t = i_0(t);
      q_44 = t;
      t = term_t_19;
      r_44 = t;
      t = term_u_19;
      s_44 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_19, term_u_19, q_44);
      t = e_5(r_44, s_44, q_44, t);
      _fail(t);
    }
  else
    {
      ATerm v_44 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_44 = ATgetFirst((ATermList) t);
          p_44 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_44;
      t = d_0(t);
      t = term_d_18;
      t = g_0(t);
      v_44 = t;
      t = (ATerm) ATinsert(CheckATermList(p_44), v_44);
    }
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  if(match_string(t, "-o"))
    {
      t = x_44;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = x_44;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  y_44 = t;
  t = term_u_16;
  z_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_16, y_44);
  t = g_5(z_44, y_44, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, y_44);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_a_20;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, f_5, h_5, t);
  return(t);
}
static ATerm e_5 (ATerm d_45, ATerm e_45, ATerm c_45, ATerm t)
{
  ATerm b_45 = NULL,f_45 = NULL,g_45 = NULL;
  b_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
  {
    ATerm b_20 = t;
    int c_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_45, e_45);
        t = d_5(d_45, e_45, t);
        LocalPopChoice(c_20);
      }
    else
      {
        t = b_20;
        t = (ATerm) ATempty;
      }
  }
  f_45 = t;
  t = (ATerm) ATinsert(CheckATermList(f_45), c_45);
  g_45 = t;
  t = SSL_table_put(d_45, e_45, g_45);
  t = b_45;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL,q_45 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL;
      t = term_d_18;
      t = p_0(t);
      r_45 = t;
      t = term_t_19;
      s_45 = t;
      t = term_u_19;
      t_45 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_t_19, term_u_19, r_45);
      t = e_5(s_45, t_45, r_45, t);
      _fail(t);
    }
  else
    {
      ATerm x_45 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_45 = ATgetFirst((ATermList) t);
          o_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_45;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_45 = ATgetFirst((ATermList) t);
          q_45 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_45;
      t = n_0(t);
      t = p_45;
      t = o_0(t);
      x_45 = t;
      t = (ATerm) ATinsert(CheckATermList(q_45), x_45);
    }
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm z_45 = NULL;
  z_45 = t;
  if(match_string(t, "-i"))
    {
      t = z_45;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = z_45;
    }
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL;
  a_46 = t;
  t = term_a_18;
  b_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_18, a_46);
  t = g_5(b_46, a_46, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, a_46);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_k_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_5, j_5, l_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  t = report_run_time_0_0(t);
  t = term_d_18;
  t = whoami_0_0(t);
  c_46 = t;
  t = term_e_18;
  e_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_20), c_46);
  f_46 = t;
  t = SSL_printnl(e_46, f_46);
  t = term_h_18;
  d_46 = t;
  t = SSL_exit(d_46);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm l_42, ATerm m_42, ATerm t)
{
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_42, m_42);
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      t = SSL_addr(l_42, m_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_108 (ATerm), ATerm n_108 (ATerm), ATerm t)
{
  ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
  h_46 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_46;
      t = m_108(t);
    }
  else
    {
      ATerm m_46 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_46 = ATgetFirst((ATermList) t);
          j_46 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_46;
      t = foldr_2_0(m_108, n_108, t);
      m_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_46, m_46);
      t = n_108(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm m_5 (ATerm t)
{
  t = term_l_18;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL;
  if(match_cons(t, sym__2))
    {
      a_23 = ATgetArgument(t, 0);
      b_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(a_23, b_23, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_46 = NULL,w_22 = NULL,x_22 = NULL;
  t = times_0_0(t);
  x_22 = t;
  t = SSL_explode_term(x_22);
  if(match_cons(t, sym__2))
    {
      ATerm s_20 = ATgetArgument(t, 0);
      w_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_22;
  t = foldr_2_0(m_5, n_5, t);
  p_46 = t;
  t = SSL_TicksToSeconds(p_46);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm c_47 = NULL,d_47 = NULL,e_47 = NULL;
  c_47 = t;
  if(match_cons(t, sym__2))
    {
      d_47 = ATgetArgument(t, 0);
      e_47 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_47;
        if((d_47 != t))
          {
            _fail(t);
          }
        t = c_47;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
        {
          ATerm w_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(d_47, e_47);
              LocalPopChoice(z_20);
            }
          else
            {
              t = w_20;
              t = SSL_gtr(d_47, e_47);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, d_47, e_47);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm i_47 = NULL;
  i_47 = t;
  {
    ATerm c_21 = t;
    int d_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_47 = NULL;
        t = term_k_18;
        t = get_config_0_0(t);
        k_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_47, term_h_18);
        t = geq_0_0(t);
        t = i_47;
        t = d_100(t);
        LocalPopChoice(d_21);
      }
    else
      {
        t = c_21;
        t = i_47;
      }
  }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,r_47 = NULL,s_47 = NULL;
  t = run_time_0_0(t);
  o_47 = t;
  t = term_d_18;
  t = whoami_0_0(t);
  p_47 = t;
  t = term_e_18;
  r_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_21), o_47), term_e_21), p_47);
  s_47 = t;
  t = SSL_printnl(r_47, s_47);
  t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_21), o_47), term_e_21), p_47));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(o_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_47 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_18;
  t_47 = t;
  t = SSL_exit(t_47);
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm d_48 = NULL,e_48 = NULL;
  e_48 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_48;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_48 = ATgetArgument(t, 0);
          {
            ATerm n_23 = NULL,y_13 = NULL;
            t = SSLgetAnnotations(e_48);
            n_23 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_48);
            y_13 = t;
            t = SSLsetAnnotations(y_13, n_23);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_48;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_118 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int h_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_i_21;
      t = get_config_0_0(t);
      LocalPopChoice(h_21);
    }
  else
    {
      t = g_21;
      t = fetch_1_0(p_5, t);
    }
  t = k_118(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_48 = ATgetFirst((ATermList) t);
      i_48 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_48 = NULL,n_48 = NULL;
        static ATerm q_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_48)), not_null(n_48));
          return(t);
        }
        t = i_48;
        t = l_0(t);
        if(((m_48 != NULL) && (m_48 != t)))
          _fail(t);
        else
          m_48 = t;
        t = h_48;
        t = k_0(t);
        if(((n_48 != NULL) && (n_48 != t)))
          _fail(t);
        else
          n_48 = t;
        t = i_48;
        t = reverse_acc_2_0(k_0, q_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_d_18;
      t = l_0(t);
    }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL,t_48 = NULL,b_14 = NULL;
  t_48 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_48 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_48);
  r_48 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_48);
  b_14 = t;
  t = SSLsetAnnotations(b_14, r_48);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm v_48 = NULL;
  v_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_48), term_j_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_48 = NULL,q_48 = NULL;
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_20;
      t = get_config_0_0(t);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      t = fetch_1_0(r_5, t);
    }
  t = term_n_21;
  t = echo_0_0(t);
  t = term_t_19;
  p_48 = t;
  t = term_u_19;
  q_48 = t;
  t = term_q_21;
  t = d_5(p_48, q_48, t);
  t = reverse_acc_2_0(_id, s_5, t);
  t = map_1_0(t_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm v_103 (ATerm), ATerm t)
{
  static ATerm t_49 (ATerm t)
  {
    ATerm p_49 = NULL,q_49 = NULL,r_49 = NULL;
    p_49 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_49 = ATgetFirst((ATermList) t);
        r_49 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_24 = NULL,f_24 = NULL,d_14 = NULL;
          t = SSLgetAnnotations(p_49);
          b_24 = t;
          t = q_49;
          t = v_103(t);
          f_24 = t;
          t = (ATerm) ATinsert(CheckATermList(r_49), f_24);
          d_14 = t;
          t = SSLsetAnnotations(d_14, b_24);
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm o_24 = NULL,r_24 = NULL,n_14 = NULL;
            t = SSLgetAnnotations(p_49);
            o_24 = t;
            t = r_49;
            t = t_49(t);
            r_24 = t;
            t = (ATerm) ATinsert(CheckATermList(r_24), q_49);
            n_14 = t;
            t = SSLsetAnnotations(n_14, o_24);
          }
        }
    }
    return(t);
  }
  t = t_49(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  {
    ATerm t_21 = t;
    int z_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_49;
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
            t = x_49;
          }
        LocalPopChoice(z_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATinsert(ATempty, x_49);
      }
  }
  y_49 = t;
  t = term_v_16;
  z_49 = t;
  t = SSL_printnl(z_49, y_49);
  t = x_49;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_5 (ATerm o_58, ATerm p_58, ATerm t)
{
  t = SSL_strcat(o_58, p_58);
  return(t);
}
ATerm debug_1_0 (ATerm l_98 (ATerm), ATerm t)
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL,g_50 = NULL;
  d_50 = t;
  t = l_98(t);
  e_50 = t;
  t = term_e_18;
  f_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_50), e_50);
  g_50 = t;
  t = SSL_printnl(f_50, g_50);
  t = d_50;
  return(t);
}
ATerm map_1_0 (ATerm l_103 (ATerm), ATerm t)
{
  static ATerm x_50 (ATerm t)
  {
    ATerm s_50 = NULL,t_50 = NULL,w_50 = NULL;
    s_50 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = s_50;
      }
    else
      {
        ATerm b_25 = NULL,e_25 = NULL,f_25 = NULL,u_14 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_50 = ATgetFirst((ATermList) t);
            w_50 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(s_50);
        b_25 = t;
        t = t_50;
        t = l_103(t);
        e_25 = t;
        t = w_50;
        t = x_50(t);
        f_25 = t;
        t = (ATerm) ATinsert(CheckATermList(f_25), e_25);
        u_14 = t;
        t = SSLsetAnnotations(u_14, b_25);
      }
    return(t);
  }
  t = x_50(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm d_22 = t;
  int e_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(e_22);
    }
  else
    {
      t = d_22;
    }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_51 = NULL;
      f_51 = t;
      t = SSL_is_string(f_51);
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(u_5, t);
            LocalPopChoice(l_22);
          }
        else
          {
            t = k_22;
            {
              ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL;
              l_51 = t;
              if(match_cons(t, sym_Path_1))
                {
                  m_51 = ATgetArgument(t, 0);
                  t = m_51;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      m_51 = ATgetArgument(t, 0);
                      t = m_51;
                      {
                        ATerm m_22 = t;
                        int n_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(n_22);
                          }
                        else
                          {
                            t = m_22;
                            t = debug_1_0(v_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_51 = NULL,s_51 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          m_51 = ATgetArgument(t, 0);
                          n_51 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = m_51;
                      t = eval_config_0_0(t);
                      r_51 = t;
                      t = n_51;
                      t = eval_config_0_0(t);
                      s_51 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_51, s_51);
                      t = c_5(r_51, s_51, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm d_5 (ATerm u_46, ATerm v_46, ATerm t)
{
  t = SSL_table_get(u_46, v_46);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm w_51 = NULL,x_51 = NULL;
  w_51 = t;
  t = term_f_19;
  x_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_19, w_51);
  t = d_5(x_51, w_51, t);
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_51 = NULL,z_51 = NULL;
        t = eval_config_0_0(t);
        y_51 = t;
        t = term_f_19;
        z_51 = t;
        t = SSL_table_put(z_51, w_51, y_51);
        t = y_51;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
  }
  return(t);
}
static ATerm x_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_5 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL;
  t = term_q_22;
  c_52 = t;
  t = term_d_18;
  d_52 = t;
  t = term_r_22;
  t = g_5(c_52, d_52, t);
  return(t);
}
static ATerm z_5 (ATerm t)
{
  t = term_s_22;
  return(t);
}
static ATerm a_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_6 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL,g_52 = NULL,h_52 = NULL;
  t = term_q_22;
  g_52 = t;
  t = term_d_18;
  h_52 = t;
  t = term_r_22;
  t = g_5(g_52, h_52, t);
  t = term_t_22;
  e_52 = t;
  t = term_d_18;
  f_52 = t;
  t = term_u_22;
  t = g_5(e_52, f_52, t);
  t = term_v_22;
  return(t);
}
static ATerm c_6 (ATerm t)
{
  t = term_y_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_22 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_5, y_5, z_5, t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = z_22;
      t = Option_3_0(a_6, b_6, c_6, t);
    }
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_120 (ATerm), ATerm t)
{
  ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL,p_52 = NULL,r_52 = NULL,s_52 = NULL,c_15 = NULL;
  m_52 = t;
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_23;
        t = n_120(t);
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
      }
  }
  t = m_52;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_52 = ATgetFirst((ATermList) t);
      p_52 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_52);
  n_52 = t;
  t = term_p_20;
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_20, o_52);
  t = g_5(s_52, o_52, t);
  t = p_52;
  {
    static ATerm c_53 (ATerm t)
    {
      ATerm g_23 = t;
      int h_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_23 = t;
          int j_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_52 = NULL;
              v_52 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = v_52;
              LocalPopChoice(j_23);
            }
          else
            {
              t = i_23;
              t = n_120(t);
              t = Cons_2_0(_id, c_53, t);
            }
          LocalPopChoice(h_23);
        }
      else
        {
          t = g_23;
          {
            ATerm y_52 = NULL,z_52 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                y_52 = ATgetFirst((ATermList) t);
                z_52 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(z_52), (ATerm) ATmakeAppl(sym_Undefined_1, y_52));
          }
        }
      return(t);
    }
    t = c_53(t);
  }
  r_52 = t;
  t = (ATerm) ATinsert(CheckATermList(r_52), (ATerm) ATmakeAppl(sym_Program_1, o_52));
  c_15 = t;
  t = SSLsetAnnotations(c_15, n_52);
  return(t);
}
static ATerm e_6 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  if(match_string(t, "--help"))
    {
      t = o_53;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = o_53;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = o_53;
        }
    }
  return(t);
}
static ATerm f_6 (ATerm t)
{
  ATerm p_53 = NULL,q_53 = NULL;
  t = term_i_21;
  p_53 = t;
  t = term_d_18;
  q_53 = t;
  t = term_k_23;
  t = g_5(p_53, q_53, t);
  t = term_l_23;
  return(t);
}
static ATerm g_6 (ATerm t)
{
  t = term_m_23;
  return(t);
}
static ATerm h_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_120 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL,l_53 = NULL,m_53 = NULL,n_53 = NULL;
  j_53 = t;
  t = term_t_19;
  l_53 = t;
  t = term_u_19;
  m_53 = t;
  t = (ATerm) ATempty;
  n_53 = t;
  t = SSL_table_put(l_53, m_53, n_53);
  t = j_53;
  {
    static ATerm d_6 (ATerm t)
    {
      ATerm p_23 = t;
      int r_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_120(t);
          LocalPopChoice(r_23);
        }
      else
        {
          t = p_23;
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(e_6, f_6, g_6, t);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(d_6, t);
  }
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_53 = NULL;
        x_53 = t;
        {
          ATerm y_23 = t;
          int z_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_25 = NULL;
              t = x_53;
              {
                ATerm d_24 = t;
                int e_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_i_21;
                    t = get_config_0_0(t);
                    LocalPopChoice(e_24);
                  }
                else
                  {
                    t = d_24;
                    t = fetch_1_0(h_6, t);
                  }
              }
              t = x_53;
              t = default_system_usage_0_0(t);
              t = term_l_18;
              u_25 = t;
              t = SSL_exit(u_25);
              LocalPopChoice(z_23);
            }
          else
            {
              t = y_23;
              {
                ATerm y_25 = NULL;
                t = term_q_22;
                t = get_config_0_0(t);
                t = x_53;
                t = default_system_about_0_0(t);
                t = term_l_18;
                y_25 = t;
                t = SSL_exit(y_25);
              }
            }
        }
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          ATerm g_24 = t;
          int h_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
              static ATerm i_6 (ATerm t)
              {
                ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL,y_20 = NULL;
                d_54 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_54 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_54);
                b_54 = t;
                t = c_54;
                if(((h_53 != NULL) && (h_53 != t)))
                  _fail(t);
                else
                  h_53 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_54);
                y_20 = t;
                t = SSLsetAnnotations(y_20, b_54);
                return(t);
              }
              t = fetch_1_0(i_6, t);
              t = term_e_18;
              z_53 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_53)), term_j_24);
              a_54 = t;
              t = SSL_printnl(z_53, a_54);
              t = (ATerm) ATmakeAppl(sym__2, term_e_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_53)), term_j_24));
              t = default_system_usage_0_0(t);
              t = term_h_18;
              y_53 = t;
              t = SSL_exit(y_53);
              LocalPopChoice(h_24);
            }
          else
            {
              t = g_24;
            }
        }
      }
  }
  i_53 = t;
  t = term_t_19;
  k_53 = t;
  t = SSL_table_destroy(k_53);
  t = i_53;
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_118 (ATerm), ATerm n_118 (ATerm), ATerm o_118 (ATerm), ATerm p_118 (ATerm), ATerm t)
{
  ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL,l_54 = NULL;
  t = parse_options_1_0(m_118, t);
  i_54 = t;
  t = term_k_24;
  l_54 = t;
  t = SSL_table_create(l_54);
  t = term_k_24;
  j_54 = t;
  t = term_l_24;
  k_54 = t;
  t = SSL_table_put(j_54, k_54, i_54);
  t = i_54;
  t = o_118(t);
  {
    ATerm m_24 = t;
    int n_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_118, t);
        LocalPopChoice(n_24);
      }
    else
      {
        t = m_24;
        {
          ATerm p_24 = t;
          int q_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_118(t);
              t = report_success_0_0(t);
              LocalPopChoice(q_24);
            }
          else
            {
              t = p_24;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm u_24 = t;
        int w_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(w_24);
          }
        else
          {
            t = u_24;
            {
              ATerm x_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(m_6, n_6, o_6, t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = x_24;
                  {
                    ATerm z_24 = t;
                    int a_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(a_25);
                      }
                    else
                      {
                        t = z_24;
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
static ATerm l_6 (ATerm t)
{
  t = input_1_0(q_6, t);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_6 (ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL;
  t = term_c_17;
  n_54 = t;
  t = term_d_18;
  o_54 = t;
  t = term_c_25;
  t = g_5(n_54, o_54, t);
  t = term_d_25;
  return(t);
}
static ATerm o_6 (ATerm t)
{
  t = term_g_25;
  return(t);
}
static ATerm q_6 (ATerm t)
{
  t = output_1_0(r_6, t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL,w_54 = NULL,x_54 = NULL,p_21 = NULL,o_21 = NULL;
  x_54 = t;
  if(match_cons(t, sym_Specification_1))
    {
      r_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_54);
  q_54 = t;
  t = r_54;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_54 = ATgetFirst((ATermList) t);
      u_54 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_54);
  s_54 = t;
  t = u_54;
  t = Cons_2_0(s_6, t_6, t);
  v_54 = t;
  t = (ATerm) ATinsert(CheckATermList(v_54), t_54);
  o_21 = t;
  t = SSLsetAnnotations(o_21, s_54);
  w_54 = t;
  t = (ATerm) ATmakeAppl(sym_Specification_1, w_54);
  p_21 = t;
  t = SSLsetAnnotations(p_21, q_54);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL,b_55 = NULL,m_21 = NULL;
  b_55 = t;
  if(match_cons(t, sym_Strategies_1))
    {
      z_54 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_55);
  y_54 = t;
  t = z_54;
  t = desugar_spec_0_0(t);
  a_55 = t;
  t = (ATerm) ATmakeAppl(sym_Strategies_1, a_55);
  m_21 = t;
  t = SSLsetAnnotations(m_21, y_54);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(j_6, default_usage_0_0, _id, l_6, t);
  return(t);
}
