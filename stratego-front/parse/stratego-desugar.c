#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_RDecNoArgs_1;
Symbol sym_RDec_2;
Symbol sym_RDecT_3;
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
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Hashtable_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_OpDecl_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
Symbol sym_SortList_1;
Symbol sym_SortListTl_2;
Symbol sym_SortTuple_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_Int_1;
Symbol sym_Real_1;
Symbol sym_Str_1;
Symbol sym_Char_1;
Symbol sym_Op_2;
Symbol sym_Anno_2;
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
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_CallNoArgs_1;
Symbol sym_RChoice_2;
Symbol sym_CondChoice_3;
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_Where_1;
Symbol sym_PrimNoArgs_1;
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
Symbol sym_DefaultVarDec_1;
Symbol sym_VarDec_2;
Symbol sym_SDefNoArgs_2;
Symbol sym_SDef_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
static void init_module_constructors (void)
{
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
  sym_RDecNoArgs_1 = ATmakeSymbol("RDecNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_RDecNoArgs_1);
  sym_RDec_2 = ATmakeSymbol("RDec", 2, ATfalse);
  ATprotectSymbol(sym_RDec_2);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortList_1 = ATmakeSymbol("SortList", 1, ATfalse);
  ATprotectSymbol(sym_SortList_1);
  sym_SortListTl_2 = ATmakeSymbol("SortListTl", 2, ATfalse);
  ATprotectSymbol(sym_SortListTl_2);
  sym_SortTuple_1 = ATmakeSymbol("SortTuple", 1, ATfalse);
  ATprotectSymbol(sym_SortTuple_1);
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
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
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
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_CondChoice_3 = ATmakeSymbol("CondChoice", 3, ATfalse);
  ATprotectSymbol(sym_CondChoice_3);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_GuardedLChoice_3 = ATmakeSymbol("GuardedLChoice", 3, ATfalse);
  ATprotectSymbol(sym_GuardedLChoice_3);
  sym_Where_1 = ATmakeSymbol("Where", 1, ATfalse);
  ATprotectSymbol(sym_Where_1);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
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
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
}
ATerm term_g_19;
ATerm term_j_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_s_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_d_16;
ATerm term_t_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_f_15;
ATerm term_z_14;
ATerm term_v_14;
ATerm term_t_14;
ATerm term_l_14;
ATerm term_i_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_c_6;
ATerm term_y_5;
ATerm term_h_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_d_5;
ATerm term_c_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_5));
  term_d_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_5));
  term_h_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_g_7, (ATerm) ATempty);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_7);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_Call_2, term_w_8, (ATerm) ATempty);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Call_2, term_w_9, (ATerm) ATempty);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATempty);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_e_10);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_n_11);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_c_5);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_e_13);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_w_13);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_n_12);
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_t_14, term_c_5);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym__2, term_f_15, term_c_5);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_c_5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, (ATerm) ATempty);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_t_14);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_c_5);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm a_102 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t);
static ATerm f_27 (ATerm j_14, ATerm k_14, ATerm t);
static ATerm k_27 (ATerm c_15, ATerm e_15, ATerm t);
static ATerm o_27 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm n_15, ATerm t);
static ATerm q_27 (ATerm x_15, ATerm y_15, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm a_85 (ATerm), ATerm t);
static ATerm k_5 (ATerm t_40, ATerm u_40, ATerm t);
static ATerm l_5 (ATerm o_25, ATerm p_25, ATerm t);
static ATerm n_5 (ATerm d_91 (ATerm), ATerm r_177, ATerm u_25, ATerm t);
static ATerm m_5 (ATerm k_25, ATerm l_25, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm u_108 (ATerm), ATerm t);
static ATerm y_31 (ATerm s_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm o_5 (ATerm q_25, ATerm t);
static ATerm p_5 (ATerm m_39, ATerm n_39, ATerm t);
static ATerm q_5 (ATerm v_40, ATerm w_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm x_33 (ATerm u_32, ATerm t);
static ATerm y_33 (ATerm z_32, ATerm a_33, ATerm b_33, ATerm t);
static ATerm z_33 (ATerm j_33, ATerm k_33, ATerm m_33, ATerm t);
static ATerm r_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm t);
static ATerm w_5 (ATerm a_57, ATerm b_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm d_107 (ATerm), ATerm t);
static ATerm n_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm z_5 (ATerm m_50, ATerm n_50, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm x_5 (ATerm h_55, ATerm i_55, ATerm g_55, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm s_5 (ATerm p_43, ATerm q_43, ATerm t);
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm c_107 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm need_help_1_0 (ATerm s_109 (ATerm), ATerm t);
static ATerm a_6 (ATerm z_58, ATerm a_59, ATerm b_59, ATerm t);
static ATerm b_6 (ATerm c_59, ATerm d_59, ATerm t);
ATerm lookup_table_0_1 (ATerm t_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm h_59, ATerm i_59, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm u_5 (ATerm e_59, ATerm f_59, ATerm t);
static ATerm v_5 (ATerm j_59, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_111 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm parse_options_1_0 (ATerm u_111 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm iowrap_3_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm z_4 (ATerm t);
ATerm stratego_desugar_0_0 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,f_0 = NULL,j_0 = NULL,o_0 = NULL,p_0 = NULL;
  b_0 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_d_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_5), f_0), term_e_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_h_5;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm a_102 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm j_5 = t;
    int t_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_102(t);
        LocalPopChoice(t_5);
      }
    else
      {
        t = j_5;
      }
    j_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_1 = ATgetFirst((ATermList) t);
        i_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_0 = NULL,t_0 = NULL,y_0 = NULL;
          t = SSLgetAnnotations(j_1);
          q_0 = t;
          t = i_1;
          t = k_1(t);
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), h_1);
          y_0 = t;
          t = SSLsetAnnotations(y_0, q_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = j_1;
      }
    return(t);
  }
  t = k_1(t);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm w_1 = NULL,x_1 = NULL,y_1 = NULL,z_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_1 = ATgetFirst((ATermList) t);
      x_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = x_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_1 = ATgetFirst((ATermList) t);
      z_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_1;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(z_1), term_y_5);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_1), term_c_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_f_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_h_6);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_j_6);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      j_9 = ATgetArgument(t, 0);
      {
        ATerm q_9 = NULL,r_1 = NULL,s_1 = NULL,n_1 = NULL;
        t = SSL_explode_string(j_9);
        t = unquote_chars_2_0(a_0, h_0, t);
        n_1 = t;
        t = SSL_implode_string(n_1);
        s_1 = t;
        t = SSL_explode_string(s_1);
        t = unescape_chars_1_0(m_0, t);
        r_1 = t;
        t = SSL_implode_string(r_1);
        q_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, q_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          j_9 = ATgetArgument(t, 0);
          {
            ATerm i_2 = NULL;
            t = SSL_string_to_real(j_9);
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              j_9 = ATgetArgument(t, 0);
              {
                ATerm o_2 = NULL;
                t = SSL_string_to_int(j_9);
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, o_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  j_9 = ATgetArgument(t, 0);
                  k_9 = ATgetArgument(t, 1);
                  h_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(h_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, j_9, k_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      j_9 = ATgetArgument(t, 0);
                      {
                        ATerm j_3 = NULL,m_3 = NULL,n_3 = NULL,b_1 = NULL;
                        t = SSLgetAnnotations(i_9);
                        j_3 = t;
                        t = SSL_explode_string(j_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm k_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                              _fail(t);
                            m_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(m_3);
                        n_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, n_3);
                        b_1 = t;
                        t = SSLsetAnnotations(b_1, j_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          j_9 = ATgetArgument(t, 0);
                          k_9 = ATgetArgument(t, 1);
                          h_9 = ATgetArgument(t, 2);
                          {
                            ATerm h_4 = NULL,q_4 = NULL,r_4 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(i_9);
                            h_4 = t;
                            t = SSL_explode_string(j_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm l_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                                  _fail(t);
                                q_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(q_4);
                            r_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, r_4, k_9, h_9);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, h_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              j_9 = ATgetArgument(t, 0);
                              k_9 = ATgetArgument(t, 1);
                              h_9 = ATgetArgument(t, 2);
                              {
                                ATerm g_5 = NULL,e_6 = NULL,g_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(i_9);
                                g_5 = t;
                                t = SSL_explode_string(j_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm m_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                                      _fail(t);
                                    e_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(e_6);
                                g_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, g_6, k_9, h_9);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, g_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  j_9 = ATgetArgument(t, 0);
                                  k_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_6 = NULL,t_7 = NULL,u_7 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(i_9);
                                    u_6 = t;
                                    t = SSL_explode_string(j_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm n_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                          _fail(t);
                                        t_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(t_7);
                                    u_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, u_7, k_9);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, u_6);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      j_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm l_8 = NULL,r_8 = NULL,u_8 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(i_9);
                                        l_8 = t;
                                        t = SSL_explode_string(j_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm p_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                              _fail(t);
                                            r_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(r_8);
                                        u_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_8);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, l_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          j_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm o_9 = NULL,t_9 = NULL,x_9 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(i_9);
                                            o_9 = t;
                                            t = SSL_explode_string(j_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm q_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                                  _fail(t);
                                                t_9 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(t_9);
                                            x_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, x_9);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, o_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              j_9 = ATgetArgument(t, 0);
                                              k_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm t_10 = NULL,x_10 = NULL,y_10 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(i_9);
                                                t_10 = t;
                                                t = SSL_explode_string(j_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm s_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(s_6) != AT_INT) || (ATgetInt((ATermInt) s_6) != 39)))
                                                      _fail(t);
                                                    x_10 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(x_10);
                                                y_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, y_10, k_9);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, t_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm q_11 = NULL,y_11 = NULL,z_11 = NULL,p_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  j_9 = ATgetArgument(t, 0);
                                                  k_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(i_9);
                                              q_11 = t;
                                              t = SSL_explode_string(j_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm t_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                                    _fail(t);
                                                  y_11 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(y_11);
                                              z_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, z_11, k_9);
                                              p_1 = t;
                                              t = SSLsetAnnotations(p_1, q_11);
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
ATerm at_last_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  static ATerm e_12 (ATerm t)
  {
    ATerm a_12 = NULL,b_12 = NULL,d_12 = NULL;
    a_12 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_12 = ATgetFirst((ATermList) t);
        d_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_6 = t;
      int x_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_12 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(a_12);
          r_12 = t;
          t = d_12;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(d_12), b_12);
          k_3 = t;
          t = SSLsetAnnotations(k_3, r_12);
          t = o_92(t);
          LocalPopChoice(x_6);
        }
      else
        {
          t = v_6;
          {
            ATerm k_13 = NULL,n_13 = NULL,p_3 = NULL;
            t = SSLgetAnnotations(a_12);
            k_13 = t;
            t = d_12;
            t = e_12(t);
            n_13 = t;
            t = (ATerm) ATinsert(CheckATermList(n_13), b_12);
            p_3 = t;
            t = SSLsetAnnotations(p_3, k_13);
          }
        }
    }
    return(t);
  }
  t = e_12(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_12 = ATgetFirst((ATermList) t);
      p_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_12;
    }
  else
    {
      t = p_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm d_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_13;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm m_101 (ATerm), ATerm n_101 (ATerm), ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_13 = ATgetFirst((ATermList) t);
      {
        ATerm a_7 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = c_13;
  t = m_101(t);
  t = a_13;
  t = last_0_0(t);
  t = n_101(t);
  t = a_13;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_7 = ATgetFirst((ATermList) t);
      b_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_13;
  t = at_last_1_0(r_0, t);
  return(t);
}
static ATerm f_27 (ATerm j_14, ATerm k_14, ATerm t)
{
  t = j_14;
  {
    ATerm c_7 = t;
    if((PushChoice() == 0))
      {
        ATerm r_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,s_3 = NULL;
        y_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_14 = ATgetFirst((ATermList) t);
            x_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_14);
        r_14 = t;
        t = x_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
        s_3 = t;
        t = SSLsetAnnotations(s_3, r_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_7, j_14);
  return(t);
}
static ATerm k_27 (ATerm c_15, ATerm e_15, ATerm t)
{
  t = c_15;
  {
    ATerm e_7 = t;
    if((PushChoice() == 0))
      {
        ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL,j_15 = NULL,t_3 = NULL;
        j_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_15 = ATgetFirst((ATermList) t);
            i_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_15);
        g_15 = t;
        t = i_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_15), h_15);
        t_3 = t;
        t = SSLsetAnnotations(t_3, g_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, c_15);
  return(t);
}
static ATerm o_27 (ATerm k_15, ATerm l_15, ATerm m_15, ATerm n_15, ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL;
  t = SSL_explode_string(k_15);
  t = unquote_chars_2_0(s_0, u_0, t);
  w_15 = t;
  t = SSL_implode_string(w_15);
  v_15 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, v_15, l_15, m_15);
  return(t);
}
static ATerm q_27 (ATerm x_15, ATerm y_15, ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL;
  t = SSL_explode_string(x_15);
  t = unquote_chars_2_0(v_0, w_0, t);
  k_16 = t;
  t = SSL_implode_string(k_16);
  j_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, j_16, (ATerm) ATempty);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm w_17 = NULL,y_17 = NULL,s_13 = NULL;
  w_17 = t;
  t = SSL_explode_term(w_17);
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_7 = ATgetArgument(t, 1);
        if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
          {
            y_17 = ATgetFirst((ATermList) j_7);
            {
              ATerm k_7 = (ATerm) ATgetNext((ATermList) j_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_17);
  if(match_cons(t, sym__2))
    {
      ATerm l_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_7 = ATgetArgument(t, 1);
        if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
          {
            ATerm n_7 = ATgetFirst((ATermList) m_7);
            ATerm o_7 = (ATerm) ATgetNext((ATermList) m_7);
            if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
              {
                s_13 = ATgetFirst((ATermList) o_7);
                {
                  ATerm p_7 = (ATerm) ATgetNext((ATermList) o_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, s_13), y_17));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm p_18 = NULL,r_18 = NULL,h_14 = NULL;
  p_18 = t;
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_7 = ATgetArgument(t, 1);
        if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
          {
            r_18 = ATgetFirst((ATermList) v_7);
            {
              ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            ATerm z_7 = ATgetFirst((ATermList) y_7);
            ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
              {
                h_14 = ATgetFirst((ATermList) a_8);
                {
                  ATerm b_8 = (ATerm) ATgetNext((ATermList) a_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, h_14), r_18));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,m_14 = NULL;
  v_18 = t;
  t = SSL_explode_term(v_18);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            w_18 = ATgetFirst((ATermList) d_8);
            {
              ATerm e_8 = (ATerm) ATgetNext((ATermList) d_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_18);
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_8 = ATgetArgument(t, 1);
        if(((ATgetType(g_8) == AT_LIST) && !(ATisEmpty(g_8))))
          {
            ATerm h_8 = ATgetFirst((ATermList) g_8);
            ATerm i_8 = (ATerm) ATgetNext((ATermList) g_8);
            if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
              {
                m_14 = ATgetFirst((ATermList) i_8);
                {
                  ATerm j_8 = (ATerm) ATgetNext((ATermList) i_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, m_14), w_18));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm b_19 = NULL,d_19 = NULL,o_14 = NULL;
  b_19 = t;
  t = SSL_explode_term(b_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            d_19 = ATgetFirst((ATermList) m_8);
            {
              ATerm n_8 = (ATerm) ATgetNext((ATermList) m_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_19);
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_8 = ATgetArgument(t, 1);
        if(((ATgetType(p_8) == AT_LIST) && !(ATisEmpty(p_8))))
          {
            ATerm q_8 = ATgetFirst((ATermList) p_8);
            ATerm s_8 = (ATerm) ATgetNext((ATermList) p_8);
            if(((ATgetType(s_8) == AT_LIST) && !(ATisEmpty(s_8))))
              {
                o_14 = ATgetFirst((ATermList) s_8);
                {
                  ATerm t_8 = (ATerm) ATgetNext((ATermList) s_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, o_14), d_19));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_19 = NULL,z_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, z_19), v_19));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm b_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, e_20), b_20));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm a_24 = NULL,j_24 = NULL;
  if(match_cons(t, sym__2))
    {
      a_24 = ATgetArgument(t, 0);
      j_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, j_24), a_24));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_x_8;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  if(match_cons(t, sym__2))
    {
      l_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_8, (ATerm) ATinsert(ATinsert(ATempty, m_24), l_24));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,z_16 = NULL,a_17 = NULL,i_17 = NULL;
  z_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_17 = ATgetArgument(t, 0);
      i_17 = ATgetArgument(t, 1);
      {
        ATerm r_17 = NULL;
        t = i_17;
        t = foldr_2_0(x_0, z_0, t);
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_17, r_17);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_17, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_17 = ATgetArgument(t, 0);
              {
                ATerm y_13 = NULL;
                t = a_17;
                {
                  ATerm y_8 = t;
                  int z_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_a_9;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_j_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_h_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_f_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_b_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(z_8);
                    }
                  else
                    {
                      t = y_8;
                      {
                        ATerm a_14 = NULL;
                        t = SSL_explode_string(a_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_9) != AT_INT) || (ATgetInt((ATermInt) c_9) != 39)))
                              _fail(t);
                            {
                              ATerm d_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
                                {
                                  a_14 = ATgetFirst((ATermList) d_9);
                                  {
                                    ATerm e_9 = (ATerm) ATgetNext((ATermList) d_9);
                                    if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
                                      {
                                        ATerm f_9 = ATgetFirst((ATermList) e_9);
                                        if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm g_9 = (ATerm) ATgetNext((ATermList) e_9);
                                          if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
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
                        t = a_14;
                      }
                    }
                }
                y_13 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, y_13);
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  a_17 = ATgetArgument(t, 0);
                  {
                    ATerm l_18 = NULL;
                    t = a_17;
                    t = foldr_2_0(a_1, m_1, t);
                    l_18 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_9, (ATerm) ATinsert(ATempty, l_18));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      a_17 = ATgetArgument(t, 0);
                      i_17 = ATgetArgument(t, 1);
                      {
                        static ATerm o_1 (ATerm t)
                        {
                          t = i_17;
                          return(t);
                        }
                        t = a_17;
                        t = foldr_2_0(o_1, q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          a_17 = ATgetArgument(t, 0);
                          t = a_17;
                          t = foldr_2_0(t_1, u_1, t);
                        }
                      else
                        {
                          ATerm m_9 = t;
                          int n_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  a_17 = ATgetArgument(t, 0);
                                  {
                                    ATerm p_9 = ATgetArgument(t, 1);
                                  }
                                  w_16 = ATgetArgument(t, 2);
                                  n_16 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, a_17, w_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_16), (ATerm) ATempty));
                            }
                          else
                            {
                              t = m_9;
                              {
                                ATerm r_9 = t;
                                int s_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Con3_3))
                                      {
                                        a_17 = ATgetArgument(t, 0);
                                        {
                                          ATerm u_9 = ATgetArgument(t, 1);
                                        }
                                        w_16 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, a_17, w_16, term_y_9);
                                  }
                                else
                                  {
                                    t = r_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        a_17 = ATgetArgument(t, 0);
                                        i_17 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, a_17, i_17, term_y_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            a_17 = ATgetArgument(t, 0);
                                            i_17 = ATgetArgument(t, 1);
                                            {
                                              static ATerm v_1 (ATerm t)
                                              {
                                                t = i_17;
                                                return(t);
                                              }
                                              t = a_17;
                                              t = foldr_2_0(v_1, a_2, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                a_17 = ATgetArgument(t, 0);
                                                t = a_17;
                                                t = foldr_2_0(b_2, c_2, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    a_17 = ATgetArgument(t, 0);
                                                    t = a_17;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        o_16 = ATgetFirst((ATermList) t);
                                                        u_16 = (ATerm) ATgetNext((ATermList) t);
                                                        t = u_16;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm z_9 = t;
                                                            int a_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = f_27(a_17, z_16, t);
                                                                LocalPopChoice(a_10);
                                                              }
                                                            else
                                                              {
                                                                t = z_9;
                                                                t = o_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = f_27(a_17, z_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = f_27(a_17, z_16, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        a_17 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_17));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            a_17 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_17));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                a_17 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_17));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    a_17 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_17));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        a_17 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_17), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            a_17 = ATgetArgument(t, 0);
                                                                            i_17 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_17), i_17);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                a_17 = ATgetArgument(t, 0);
                                                                                i_17 = ATgetArgument(t, 1);
                                                                                {
                                                                                  static ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = i_17;
                                                                                    return(t);
                                                                                  }
                                                                                  t = a_17;
                                                                                  t = foldr_2_0(d_2, e_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                    t = a_17;
                                                                                    t = foldr_2_0(f_2, g_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                        i_17 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATinsert(CheckATermList(i_17), a_17));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                            t = a_17;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                o_16 = ATgetFirst((ATermList) t);
                                                                                                u_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = u_16;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm b_10 = t;
                                                                                                    int c_10 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = k_27(a_17, z_16, t);
                                                                                                        LocalPopChoice(c_10);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_10;
                                                                                                        t = o_16;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = k_27(a_17, z_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = k_27(a_17, z_16, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_d_10;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                    i_17 = ATgetArgument(t, 1);
                                                                                                    t = i_17;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        v_16 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, v_16), a_17));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                        t = a_17;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                                            i_17 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, a_17, i_17, term_g_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                i_17 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, a_17, i_17, term_g_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                    i_17 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, a_17, (ATerm)ATempty, i_17);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_CondChoice_3))
                                                                                                                      {
                                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                                        i_17 = ATgetArgument(t, 1);
                                                                                                                        w_16 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, a_17), i_17, w_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                                          {
                                                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                                                            i_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, i_17, a_17);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimT_3))
                                                                                                                              {
                                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                                i_17 = ATgetArgument(t, 1);
                                                                                                                                w_16 = ATgetArgument(t, 2);
                                                                                                                                t = o_27(a_17, i_17, w_16, z_16, t);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                  {
                                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                                    t = q_27(a_17, z_16, t);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                      {
                                                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, a_17, (ATerm) ATempty);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                                                                            i_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDef_3, a_17, (ATerm)ATempty, i_17);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                                              {
                                                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                                                i_17 = ATgetArgument(t, 1);
                                                                                                                                                w_16 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, a_17, i_17, w_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                                                    i_17 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDef_3, a_17, (ATerm)ATempty, i_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_RDec_2))
                                                                                                                                                      {
                                                                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                                                                        i_17 = ATgetArgument(t, 1);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDecT_3, a_17, i_17, (ATerm) ATempty);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_RDecNoArgs_1))
                                                                                                                                                          {
                                                                                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDec_2, a_17, (ATerm) ATempty);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          {
                                                                                                                                                            if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                              {
                                                                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                                                                i_17 = ATgetArgument(t, 1);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, a_17, (ATerm)ATempty, i_17);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm h_10 = ATgetArgument(t, 0);
                                                                                                                                                                    i_17 = ATgetArgument(t, 1);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, i_17);
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
                    }
                }
            }
        }
    }
  return(t);
}
ATerm repeat_2_0 (ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm t)
{
  static ATerm r_27 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_84(t);
        t = r_27(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = b_84(t);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_85 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t)
  {
    t = topdown_1_0(a_85, t);
    return(t);
  }
  t = a_85(t);
  t = SRTS_all(h_2, t);
  return(t);
}
static ATerm k_5 (ATerm t_40, ATerm u_40, ATerm t)
{
  ATerm s_27 = NULL;
  t = SSL_fputc(t_40, u_40);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_27);
  return(t);
}
static ATerm l_5 (ATerm o_25, ATerm p_25, ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_write_term_to_stream_text(o_25, p_25);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_27);
  return(t);
}
static ATerm n_5 (ATerm d_91 (ATerm), ATerm r_177, ATerm u_25, ATerm t)
{
  ATerm u_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, r_177, term_k_10);
  t = r_5(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, u_25);
  t = d_91(t);
  t = fclose_0_0(t);
  t = u_25;
  return(t);
}
static ATerm m_5 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm w_27 = NULL;
  t = SSL_write_term_to_stream_baf(k_25, l_25);
  w_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_27);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_15 = NULL,q_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          p_15 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(p_15, q_15, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm l_16 = NULL,m_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym_Stream_1))
        {
          q_16 = ATgetArgument(m_10, 0);
        }
      else
        _fail(t);
      r_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(q_16, r_16, t);
  l_16 = t;
  t = term_f_6;
  m_16 = t;
  t = l_16;
  if(match_cons(t, sym_Stream_1))
    {
      p_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, l_16);
  t = k_5(m_16, p_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,o_28 = NULL,r_28 = NULL,u_30 = NULL,v_30 = NULL,a_4 = NULL,y_3 = NULL;
  d_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  k_28 = t;
  t = l_28;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_28 != NULL) && (a_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_2, t);
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = term_p_10;
        a_28 = t;
      }
  }
  r_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_28, o_28);
  y_3 = t;
  t = SSLsetAnnotations(y_3, k_28);
  t = d_28;
  if(match_cons(t, sym__2))
    {
      f_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_28);
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_28, (ATerm) ATmakeAppl(sym__2, not_null(a_28), h_28));
  a_4 = t;
  t = SSLsetAnnotations(a_4, e_28);
  j_28 = t;
  if(match_cons(t, sym__2))
    {
      u_30 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_14 = NULL,a_15 = NULL,b_15 = NULL,d_15 = NULL,o_15 = NULL,b_4 = NULL;
        t = SSLgetAnnotations(j_28);
        u_14 = t;
        t = u_30;
        t = fetch_1_0(k_2, t);
        a_15 = t;
        t = v_30;
        if(match_cons(t, sym__2))
          {
            d_15 = ATgetArgument(t, 0);
            o_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = n_5(l_2, d_15, o_15, t);
        b_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_15, b_15);
        b_4 = t;
        t = SSLsetAnnotations(b_4, u_14);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL,i_16 = NULL,e_4 = NULL;
          t = SSLgetAnnotations(j_28);
          c_16 = t;
          t = v_30;
          if(match_cons(t, sym__2))
            {
              g_16 = ATgetArgument(t, 0);
              i_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = n_5(m_2, g_16, i_16, t);
          f_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, u_30, f_16);
          e_4 = t;
          t = SSLsetAnnotations(e_4, c_16);
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
ATerm apply_strategy_1_0 (ATerm u_108 (ATerm), ATerm t)
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL,f_31 = NULL,i_31 = NULL;
  i_31 = t;
  t = dtime_0_0(t);
  t = i_31;
  t = u_108(t);
  f_31 = t;
  t = dtime_0_0(t);
  b_31 = t;
  t = f_31;
  if(match_cons(t, sym__2))
    {
      c_31 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_31), (ATerm) ATmakeAppl(sym_Runtime_1, b_31)), d_31);
  return(t);
}
static ATerm y_31 (ATerm s_31, ATerm t)
{
  t = SSL_fclose(s_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL;
  w_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_31 = ATgetArgument(t, 0);
      {
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_31);
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
            t = y_31(w_31, t);
          }
      }
    }
  else
    {
      t = y_31(w_31, t);
    }
  return(t);
}
static ATerm o_5 (ATerm q_25, ATerm t)
{
  t = SSL_read_term_from_stream(q_25);
  return(t);
}
static ATerm p_5 (ATerm m_39, ATerm n_39, ATerm t)
{
  t = SSL_strcat(m_39, n_39);
  return(t);
}
static ATerm q_5 (ATerm v_40, ATerm w_40, ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_fopen(v_40, w_40);
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_stdin_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_stdout_stream();
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_32 = NULL;
  t = SSL_stderr_stream();
  g_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_32);
  return(t);
}
static ATerm x_33 (ATerm u_32, ATerm t)
{
  ATerm v_32 = NULL;
  t = SSL_explode_term(u_32);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
          {
            v_32 = ATgetFirst((ATermList) w_10);
            {
              ATerm z_10 = (ATerm) ATgetNext((ATermList) w_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = v_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = v_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = v_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = v_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm y_33 (ATerm z_32, ATerm a_33, ATerm b_33, ATerm t)
{
  ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL,h_33 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(b_33);
  e_33 = t;
  t = z_32;
  if(match_cons(t, sym_Path_1))
    {
      h_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_33, a_33);
  o_4 = t;
  t = SSLsetAnnotations(o_4, e_33);
  if(match_cons(t, sym__2))
    {
      c_33 = ATgetArgument(t, 0);
      d_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(c_33, d_33, t);
  return(t);
}
static ATerm z_33 (ATerm j_33, ATerm k_33, ATerm m_33, ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL,s_33 = NULL,p_4 = NULL;
  t = SSLgetAnnotations(m_33);
  p_33 = t;
  t = SSL_is_string(j_33);
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_33, k_33);
  p_4 = t;
  t = SSLsetAnnotations(p_4, p_33);
  if(match_cons(t, sym__2))
    {
      n_33 = ATgetArgument(t, 0);
      o_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = q_5(n_33, o_33, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
  u_33 = t;
  if(match_cons(t, sym__2))
    {
      v_33 = ATgetArgument(t, 0);
      w_33 = ATgetArgument(t, 1);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_33(u_33, t);
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_33(v_33, w_33, u_33, t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  t = z_33(v_33, w_33, u_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_33(u_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL,d_34 = NULL,i_34 = NULL;
  i_34 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, i_34, term_g_11);
        t = r_5(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm h_17 = NULL,j_17 = NULL;
          t = term_h_11;
          j_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, i_34);
          t = p_5(j_17, i_34, t);
          h_17 = t;
          t = SSL_perror(h_17);
          _fail(t);
        }
      }
  }
  c_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_5(d_34, t);
  b_34 = t;
  t = c_34;
  t = fclose_0_0(t);
  t = b_34;
  return(t);
}
ATerm fetch_1_0 (ATerm w_91 (ATerm), ATerm t)
{
  static ATerm i_35 (ATerm t)
  {
    ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
    f_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_35 = ATgetFirst((ATermList) t);
        h_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_11 = t;
      int j_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_17 = NULL,u_17 = NULL,a_5 = NULL;
          t = SSLgetAnnotations(f_35);
          q_17 = t;
          t = g_35;
          t = w_91(t);
          u_17 = t;
          t = (ATerm) ATinsert(CheckATermList(h_35), u_17);
          a_5 = t;
          t = SSLsetAnnotations(a_5, q_17);
          LocalPopChoice(j_11);
        }
      else
        {
          t = i_11;
          {
            ATerm i_18 = NULL,n_18 = NULL,b_5 = NULL;
            t = SSLgetAnnotations(f_35);
            i_18 = t;
            t = h_35;
            t = i_35(t);
            n_18 = t;
            t = (ATerm) ATinsert(CheckATermList(n_18), g_35);
            b_5 = t;
            t = SSLsetAnnotations(b_5, i_18);
          }
        }
    }
    return(t);
  }
  t = i_35(t);
  return(t);
}
static ATerm w_5 (ATerm a_57, ATerm b_57, ATerm t)
{
  ATerm l_35 = NULL;
  t = lookup_table_0_1(a_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      l_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(b_57, l_35, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm d_107 (ATerm), ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
        t = term_m_11;
        r_35 = t;
        t = term_n_11;
        s_35 = t;
        t = term_o_11;
        t = w_5(r_35, s_35, t);
        q_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_35, term_p_11);
        t = geq_0_0(t);
        t = o_35;
        t = d_107(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = o_35;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  if(match_string(t, "-k"))
    {
      t = v_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_35;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  t = SSL_string_to_int(w_35);
  x_35 = t;
  t = term_r_11;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, x_35);
  t = z_5(y_35, x_35, t);
  t = w_35;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, p_2, q_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm a_36 = NULL;
  a_36 = t;
  if(match_string(t, "-S"))
    {
      t = a_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_36;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL;
  t = term_n_11;
  b_36 = t;
  t = term_t_11;
  c_36 = t;
  t = term_u_11;
  t = z_5(b_36, c_36, t);
  t = term_v_11;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  t = SSL_string_to_int(d_36);
  e_36 = t;
  t = term_n_11;
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, e_36);
  t = z_5(f_36, e_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_36);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_36 = NULL,h_36 = NULL;
  t = term_c_12;
  g_36 = t;
  t = term_c_5;
  h_36 = t;
  t = term_f_12;
  t = z_5(g_36, h_36, t);
  t = term_g_12;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_2, s_2, t_2, t);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_2, v_2, w_2, t);
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = Option_3_0(x_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm z_5 (ATerm m_50, ATerm n_50, ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL;
  t = term_m_11;
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_11, m_50, n_50);
  t = lookup_table_0_1(i_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(m_50, n_50, j_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_11, m_50, n_50);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
      t = term_c_5;
      t = e_0(t);
      p_36 = t;
      t = term_m_12;
      q_36 = t;
      t = term_n_12;
      r_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, p_36);
      t = x_5(q_36, r_36, p_36, t);
      _fail(t);
    }
  else
    {
      ATerm u_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_36 = ATgetFirst((ATermList) t);
          o_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_36;
      t = c_0(t);
      t = term_c_5;
      t = d_0(t);
      u_36 = t;
      t = (ATerm) ATinsert(CheckATermList(o_36), u_36);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm w_36 = NULL;
  w_36 = t;
  if(match_string(t, "-o"))
    {
      t = w_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_36;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL;
  x_36 = t;
  t = term_q_12;
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, x_36);
  t = z_5(y_36, x_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_36);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm x_5 (ATerm h_55, ATerm i_55, ATerm g_55, ATerm t)
{
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL;
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_55, i_55);
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm v_12 = ATgetArgument(t, 0);
            ATerm w_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_55, i_55);
        t = w_5(h_55, i_55, t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = (ATerm) ATempty;
      }
  }
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, h_55, i_55, (ATerm) ATinsert(CheckATermList(b_37), g_55));
  t = lookup_table_0_1(h_55, t);
  e_37 = t;
  t = (ATerm) ATinsert(CheckATermList(b_37), g_55);
  c_37 = t;
  t = e_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(i_55, c_37, d_37, t);
  t = a_37;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL,o_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
      t = term_c_5;
      t = n_0(t);
      p_37 = t;
      t = term_m_12;
      q_37 = t;
      t = term_n_12;
      r_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_m_12, term_n_12, p_37);
      t = x_5(q_37, r_37, p_37, t);
      _fail(t);
    }
  else
    {
      ATerm v_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_37 = ATgetFirst((ATermList) t);
          m_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_37 = ATgetFirst((ATermList) t);
          o_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_37;
      t = k_0(t);
      t = n_37;
      t = l_0(t);
      v_37 = t;
      t = (ATerm) ATinsert(CheckATermList(o_37), v_37);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm x_37 = NULL;
  x_37 = t;
  if(match_string(t, "-i"))
    {
      t = x_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_37;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL;
  y_37 = t;
  t = term_x_12;
  z_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, y_37);
  t = z_5(z_37, y_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_37);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_y_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,c_38 = NULL,d_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_5;
  t = whoami_0_0(t);
  a_38 = t;
  t = term_d_5;
  c_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_12), a_38);
  d_38 = t;
  t = SSL_printnl(c_38, d_38);
  t = term_h_5;
  b_38 = t;
  t = SSL_exit(b_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL;
  t = term_m_11;
  e_38 = t;
  t = term_e_13;
  f_38 = t;
  t = term_f_13;
  t = w_5(e_38, f_38, t);
  return(t);
}
static ATerm s_5 (ATerm p_43, ATerm q_43, ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_43, q_43);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = SSL_addr(p_43, q_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
  h_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = h_38;
      t = l_98(t);
    }
  else
    {
      ATerm m_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_38 = ATgetFirst((ATermList) t);
          j_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_38;
      t = foldr_2_0(l_98, m_98, t);
      m_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_38, m_38);
      t = m_98(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_5(i_19, j_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm p_38 = NULL,c_19 = NULL,f_19 = NULL;
  t = times_0_0(t);
  f_19 = t;
  t = SSL_explode_term(f_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_19;
  t = foldr_2_0(g_3, h_3, t);
  p_38 = t;
  t = SSL_TicksToSeconds(p_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym__2))
    {
      b_39 = ATgetArgument(t, 0);
      c_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_39;
        if((b_39 != t))
          {
            _fail(t);
          }
        t = a_39;
        LocalPopChoice(l_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
        {
          ATerm m_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(b_39, c_39);
              LocalPopChoice(o_13);
            }
          else
            {
              t = m_13;
              t = SSL_gtr(b_39, c_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, b_39, c_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm c_107 (ATerm), ATerm t)
{
  ATerm g_39 = NULL;
  g_39 = t;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL;
        t = term_m_11;
        j_39 = t;
        t = term_n_11;
        k_39 = t;
        t = term_o_11;
        t = w_5(j_39, k_39, t);
        i_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_39, term_h_5);
        t = geq_0_0(t);
        t = g_39;
        t = c_107(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = g_39;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = run_time_0_0(t);
  o_39 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  p_39 = t;
  t = term_d_5;
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_13), o_39), term_r_13), p_39);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = (ATerm) ATmakeAppl(sym__2, term_d_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_13), o_39), term_r_13), p_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm t_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_11;
  t_39 = t;
  t = SSL_exit(t_39);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL;
  e_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_40 = ATgetArgument(t, 0);
          {
            ATerm p_20 = NULL,i_5 = NULL;
            t = SSLgetAnnotations(e_40);
            p_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_40);
            i_5 = t;
            t = SSLsetAnnotations(i_5, p_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm s_109 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_39 = NULL,x_39 = NULL;
      t = term_m_11;
      w_39 = t;
      t = term_w_13;
      x_39 = t;
      t = term_x_13;
      t = w_5(w_39, x_39, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = fetch_1_0(l_3, t);
    }
  t = s_109(t);
  return(t);
}
static ATerm a_6 (ATerm z_58, ATerm a_59, ATerm b_59, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_hashtable_put(b_59, z_58, a_59);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_40);
  return(t);
}
static ATerm b_6 (ATerm c_59, ATerm d_59, ATerm t)
{
  t = SSL_hashtable_get(d_59, c_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm t_56, ATerm t)
{
  ATerm p_40 = NULL;
  t = table_hashtable_0_0(t);
  p_40 = t;
  {
    ATerm z_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_20 = NULL;
        t = p_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            x_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = b_6(t_56, x_20, t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = z_13;
        {
          ATerm c_21 = NULL;
          t = t_56;
          t = table_create_0_0(t);
          t = p_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              c_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_6(t_56, c_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm h_59, ATerm i_59, ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_hashtable_create(h_59, i_59);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,e_41 = NULL,f_41 = NULL;
  z_40 = t;
  t = term_c_14;
  e_41 = t;
  t = term_d_14;
  f_41 = t;
  t = z_40;
  t = new_hashtable_0_2(e_41, f_41, t);
  a_41 = t;
  t = z_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(z_40, a_41, b_41, t);
  t = z_40;
  return(t);
}
static ATerm u_5 (ATerm e_59, ATerm f_59, ATerm t)
{
  ATerm g_41 = NULL;
  t = SSL_hashtable_remove(f_59, e_59);
  g_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_41);
  return(t);
}
static ATerm v_5 (ATerm j_59, ATerm t)
{
  ATerm h_41 = NULL;
  t = SSL_hashtable_destroy(j_59);
  h_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, h_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm i_41 = NULL;
  t = SSL_table_hashtable();
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL;
  j_41 = t;
  t = table_hashtable_0_0(t);
  k_41 = t;
  t = lookup_table_0_1(j_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(m_41, t);
  t = k_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      l_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = u_5(j_41, l_41, t);
  t = j_41;
  return(t);
}
ATerm map_1_0 (ATerm m_91 (ATerm), ATerm t)
{
  static ATerm b_42 (ATerm t)
  {
    ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL;
    y_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_41;
      }
    else
      {
        ATerm h_21 = NULL,k_21 = NULL,l_21 = NULL,d_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_41 = ATgetFirst((ATermList) t);
            a_42 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_41);
        h_21 = t;
        t = z_41;
        t = m_91(t);
        k_21 = t;
        t = a_42;
        t = b_42(t);
        l_21 = t;
        t = (ATerm) ATinsert(CheckATermList(l_21), k_21);
        d_6 = t;
        t = SSLsetAnnotations(d_6, h_21);
      }
    return(t);
  }
  t = b_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_42 = ATgetFirst((ATermList) t);
      f_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm j_42 = NULL,k_42 = NULL;
        static ATerm o_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(j_42)), not_null(k_42));
          return(t);
        }
        t = f_42;
        t = i_0(t);
        if(((j_42 != NULL) && (j_42 != t)))
          _fail(t);
        else
          j_42 = t;
        t = e_42;
        t = g_0(t);
        if(((k_42 != NULL) && (k_42 != t)))
          _fail(t);
        else
          k_42 = t;
        t = f_42;
        t = reverse_acc_2_0(g_0, o_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,i_6 = NULL;
  s_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  q_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_42);
  i_6 = t;
  t = SSLsetAnnotations(i_6, q_42);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm u_42 = NULL;
  u_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_42), term_e_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_42 = NULL,p_42 = NULL;
      t = term_m_11;
      o_42 = t;
      t = term_e_13;
      p_42 = t;
      t = term_f_13;
      t = w_5(o_42, p_42, t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      t = fetch_1_0(q_3, t);
    }
  t = term_i_14;
  t = echo_0_0(t);
  t = term_m_12;
  m_42 = t;
  t = term_n_12;
  n_42 = t;
  t = term_l_14;
  t = w_5(m_42, n_42, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(u_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  {
    ATerm n_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_14 = ATgetFirst((ATermList) t);
                ATerm s_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_42;
          }
        LocalPopChoice(p_14);
      }
    else
      {
        t = n_14;
        t = (ATerm) ATinsert(ATempty, w_42);
      }
  }
  x_42 = t;
  t = term_p_10;
  y_42 = t;
  t = SSL_printnl(y_42, x_42);
  t = w_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL;
  t = term_m_11;
  c_43 = t;
  t = term_e_13;
  d_43 = t;
  t = term_f_13;
  t = w_5(c_43, d_43, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  t = term_t_14;
  e_43 = t;
  t = term_c_5;
  f_43 = t;
  t = term_v_14;
  t = z_5(e_43, f_43, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_z_14;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  t = term_t_14;
  i_43 = t;
  t = term_c_5;
  j_43 = t;
  t = term_v_14;
  t = z_5(i_43, j_43, t);
  t = term_f_15;
  g_43 = t;
  t = term_c_5;
  h_43 = t;
  t = term_r_15;
  t = z_5(g_43, h_43, t);
  t = term_s_15;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_t_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = u_15;
      t = Option_3_0(z_3, c_4, d_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_63 (ATerm), ATerm i_63 (ATerm), ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,r_43 = NULL,o_6 = NULL;
  r_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_43 = ATgetFirst((ATermList) t);
      m_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_43);
  k_43 = t;
  t = l_43;
  t = h_63(t);
  n_43 = t;
  t = m_43;
  t = i_63(t);
  o_43 = t;
  t = (ATerm) ATinsert(CheckATermList(o_43), n_43);
  o_6 = t;
  t = SSLsetAnnotations(o_6, k_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_111 (ATerm), ATerm t)
{
  ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,b_44 = NULL,c_44 = NULL,r_6 = NULL;
  w_43 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_16;
        t = v_111(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
      }
  }
  t = w_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_43 = ATgetFirst((ATermList) t);
      z_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_43);
  x_43 = t;
  t = term_e_13;
  c_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, y_43);
  t = z_5(c_44, y_43, t);
  t = z_43;
  {
    static ATerm m_44 (ATerm t)
    {
      ATerm e_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_16 = t;
          int t_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_44 = NULL;
              f_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_44;
              LocalPopChoice(t_16);
            }
          else
            {
              t = s_16;
              t = v_111(t);
              t = Cons_2_0(_id, m_44, t);
            }
          LocalPopChoice(h_16);
        }
      else
        {
          t = e_16;
          {
            ATerm i_44 = NULL,j_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_44 = ATgetFirst((ATermList) t);
                j_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_44), (ATerm) ATmakeAppl(sym_Undefined_1, i_44));
          }
        }
      return(t);
    }
    t = m_44(t);
  }
  b_44 = t;
  t = (ATerm) ATinsert(CheckATermList(b_44), (ATerm) ATmakeAppl(sym_Program_1, y_43));
  r_6 = t;
  t = SSLsetAnnotations(r_6, x_43);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm a_45 = NULL;
  a_45 = t;
  if(match_string(t, "--help"))
    {
      t = a_45;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_45;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_45;
        }
    }
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL;
  t = term_w_13;
  b_45 = t;
  t = term_c_5;
  c_45 = t;
  t = term_x_16;
  t = z_5(b_45, c_45, t);
  t = term_y_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_b_17;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm u_111 (ATerm), ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
  t_44 = t;
  t = term_m_12;
  u_44 = t;
  t = term_c_17;
  t = lookup_table_0_1(u_44, t);
  z_44 = t;
  t = term_n_12;
  w_44 = t;
  t = (ATerm) ATempty;
  x_44 = t;
  t = z_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(w_44, x_44, y_44, t);
  t = t_44;
  {
    static ATerm f_4 (ATerm t)
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_111(t);
          LocalPopChoice(e_17);
        }
      else
        {
          t = d_17;
          {
            ATerm f_17 = t;
            int g_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_4, i_4, j_4, t);
                LocalPopChoice(g_17);
              }
            else
              {
                t = f_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_4, t);
  }
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_45 = NULL;
        n_45 = t;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_21 = NULL;
              t = n_45;
              {
                ATerm o_17 = t;
                int p_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_21 = NULL,u_21 = NULL;
                    t = term_m_11;
                    t_21 = t;
                    t = term_w_13;
                    u_21 = t;
                    t = term_x_13;
                    t = w_5(t_21, u_21, t);
                    LocalPopChoice(p_17);
                  }
                else
                  {
                    t = o_17;
                    t = fetch_1_0(k_4, t);
                  }
              }
              t = n_45;
              t = default_system_usage_0_0(t);
              t = term_t_11;
              s_21 = t;
              t = SSL_exit(s_21);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              {
                ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
                t = term_m_11;
                z_21 = t;
                t = term_t_14;
                a_22 = t;
                t = term_s_17;
                t = w_5(z_21, a_22, t);
                t = n_45;
                t = default_system_about_0_0(t);
                t = term_t_11;
                y_21 = t;
                t = SSL_exit(y_21);
              }
            }
        }
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm t_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
              static ATerm l_4 (ATerm t)
              {
                ATerm r_45 = NULL,s_45 = NULL,t_45 = NULL,w_6 = NULL;
                t_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    s_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(t_45);
                r_45 = t;
                t = s_45;
                if(((r_44 != NULL) && (r_44 != t)))
                  _fail(t);
                else
                  r_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, s_45);
                w_6 = t;
                t = SSLsetAnnotations(w_6, r_45);
                return(t);
              }
              t = fetch_1_0(l_4, t);
              t = term_d_5;
              p_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_44)), term_x_17);
              q_45 = t;
              t = SSL_printnl(p_45, q_45);
              t = (ATerm) ATmakeAppl(sym__2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_44)), term_x_17));
              t = default_system_usage_0_0(t);
              t = term_h_5;
              o_45 = t;
              t = SSL_exit(o_45);
              LocalPopChoice(v_17);
            }
          else
            {
              t = t_17;
            }
        }
      }
  }
  s_44 = t;
  t = term_m_12;
  t = table_destroy_0_0(t);
  t = s_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm u_109 (ATerm), ATerm v_109 (ATerm), ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL;
  t = parse_options_1_0(u_109, t);
  y_45 = t;
  t = term_z_17;
  t = table_create_0_0(t);
  t = term_z_17;
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_17, term_a_18, y_45);
  t = lookup_table_0_1(z_45, t);
  c_46 = t;
  t = term_a_18;
  a_46 = t;
  t = c_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_6(a_46, y_45, b_46, t);
  t = y_45;
  t = w_109(t);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(v_109, t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = x_109(t);
              t = report_success_0_0(t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = if_verbose2_1_0(w_4, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  t = term_f_18;
  d_46 = t;
  t = term_c_5;
  e_46 = t;
  t = term_g_18;
  t = z_5(d_46, e_46, t);
  t = term_h_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL;
  f_46 = t;
  t = term_m_11;
  j_46 = t;
  t = term_e_13;
  k_46 = t;
  t = term_f_13;
  t = w_5(j_46, k_46, t);
  g_46 = t;
  t = term_d_5;
  h_46 = t;
  t = (ATerm) ATinsert(ATempty, g_46);
  i_46 = t;
  t = SSL_printnl(h_46, i_46);
  t = f_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm d_109 (ATerm), ATerm e_109 (ATerm), ATerm f_109 (ATerm), ATerm t)
{
  static ATerm m_4 (ATerm t)
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_109(t);
        LocalPopChoice(m_18);
      }
    else
      {
        t = k_18;
        {
          ATerm o_18 = t;
          int q_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(q_18);
            }
          else
            {
              t = o_18;
              {
                ATerm s_18 = t;
                int t_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(t_18);
                  }
                else
                  {
                    t = s_18;
                    {
                      ATerm u_18 = t;
                      int x_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_4, u_4, v_4, t);
                          LocalPopChoice(x_18);
                        }
                      else
                        {
                          t = u_18;
                          {
                            ATerm y_18 = t;
                            int z_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(z_18);
                              }
                            else
                              {
                                t = y_18;
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
  static ATerm s_4 (ATerm t)
  {
    ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL;
    m_46 = t;
    {
      ATerm a_19 = t;
      int e_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((l_46 != NULL) && (l_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_4, t);
          LocalPopChoice(e_19);
        }
      else
        {
          t = a_19;
          t = term_g_19;
          l_46 = t;
        }
    }
    t = not_null(l_46);
    t = ReadFromFile_0_0(t);
    n_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, m_46, n_46);
    t = apply_strategy_1_0(d_109, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_4, f_109, n_4, s_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,z_6 = NULL;
  v_46 = t;
  if(match_cons(t, sym__2))
    {
      s_46 = ATgetArgument(t, 0);
      t_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_46);
  r_46 = t;
  t = t_46;
  {
    ATerm h_19 = t;
    int k_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_46 = NULL;
        t = SSL_explode_term(t_46);
        if(match_cons(t, sym__2))
          {
            ATerm l_19 = ATgetArgument(t, 0);
            ATerm m_19 = ATgetArgument(t, 1);
            if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
              {
                w_46 = ATgetFirst((ATermList) m_19);
                {
                  ATerm n_19 = (ATerm) ATgetNext((ATermList) m_19);
                  if(((ATgetType(n_19) != AT_LIST) || !(ATisEmpty(n_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = w_46;
        LocalPopChoice(k_19);
      }
    else
      {
        t = h_19;
      }
  }
  t = topdown_1_0(z_4, t);
  u_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, u_46);
  z_6 = t;
  t = SSLsetAnnotations(z_6, r_46);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(y_4, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
