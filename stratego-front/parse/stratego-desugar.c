#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
Symbol sym_RDecNoArgs_1;
Symbol sym_RDec_2;
Symbol sym_RDecT_3;
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
  sym_RDecNoArgs_1 = ATmakeSymbol("RDecNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_RDecNoArgs_1);
  sym_RDec_2 = ATmakeSymbol("RDec", 2, ATfalse);
  ATprotectSymbol(sym_RDec_2);
  sym_RDecT_3 = ATmakeSymbol("RDecT", 3, ATfalse);
  ATprotectSymbol(sym_RDecT_3);
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
ATerm term_e_19;
ATerm term_k_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_f_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_r_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_c_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_n_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_u_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_w_13;
ATerm term_t_13;
ATerm term_r_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
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
ATerm term_x_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_l_9;
ATerm term_b_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_z_5;
ATerm term_g_5;
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
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(9);
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
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_7);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Call_2, term_u_8, (ATerm) ATempty);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_9);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_Call_2, term_v_9, (ATerm) ATempty);
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
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_n_11, term_s_11);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_s_11);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_c_5);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
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
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_p_12);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(sym__2, term_u_14, term_c_5);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_c_5);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym__2, term_w_13, term_c_5);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, (ATerm) ATempty);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(sym__2, term_m_11, term_u_14);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
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
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm c_103 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm q_93 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm t);
static ATerm c_27 (ATerm j_14, ATerm k_14, ATerm t);
static ATerm e_27 (ATerm z_14, ATerm c_15, ATerm t);
static ATerm i_27 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t);
static ATerm n_27 (ATerm w_15, ATerm x_15, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm c_86 (ATerm), ATerm t);
static ATerm l_5 (ATerm h_41, ATerm i_41, ATerm t);
static ATerm m_5 (ATerm c_26, ATerm d_26, ATerm t);
static ATerm o_5 (ATerm f_92 (ATerm), ATerm f_178, ATerm i_26, ATerm t);
static ATerm n_5 (ATerm y_25, ATerm z_25, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm w_109 (ATerm), ATerm t);
static ATerm x_31 (ATerm r_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm p_5 (ATerm e_26, ATerm t);
static ATerm q_5 (ATerm a_40, ATerm b_40, ATerm t);
static ATerm r_5 (ATerm j_41, ATerm k_41, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_33 (ATerm p_32, ATerm t);
static ATerm x_33 (ATerm w_32, ATerm x_32, ATerm y_32, ATerm t);
static ATerm y_33 (ATerm i_33, ATerm j_33, ATerm k_33, ATerm t);
static ATerm s_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_92 (ATerm), ATerm t);
static ATerm x_5 (ATerm o_57, ATerm p_57, ATerm t);
ATerm if_verbose2_1_0 (ATerm f_108 (ATerm), ATerm t);
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
static ATerm a_6 (ATerm a_51, ATerm b_51, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm y_5 (ATerm v_55, ATerm w_55, ATerm u_55, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm t_5 (ATerm d_44, ATerm e_44, ATerm t);
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm e_108 (ATerm), ATerm t);
static ATerm j_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm m_3 (ATerm t);
ATerm need_help_1_0 (ATerm u_110 (ATerm), ATerm t);
static ATerm b_6 (ATerm n_59, ATerm o_59, ATerm p_59, ATerm t);
static ATerm c_6 (ATerm q_59, ATerm r_59, ATerm t);
ATerm lookup_table_0_1 (ATerm h_57, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_59, ATerm w_59, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm v_5 (ATerm s_59, ATerm t_59, ATerm t);
static ATerm w_5 (ATerm x_59, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm x_112 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm parse_options_1_0 (ATerm w_112 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm iowrap_3_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm b_5 (ATerm t);
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
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_d_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_5), c_0), term_e_5);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_g_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm i_5 = t;
    int u_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_103(t);
        LocalPopChoice(u_5);
      }
    else
      {
        t = i_5;
      }
    j_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_1 = ATgetFirst((ATermList) t);
        i_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm q_0 = NULL,t_0 = NULL,x_0 = NULL;
          t = SSLgetAnnotations(j_1);
          q_0 = t;
          t = i_1;
          t = k_1(t);
          t_0 = t;
          t = (ATerm) ATinsert(CheckATermList(t_0), h_1);
          x_0 = t;
          t = SSLsetAnnotations(x_0, q_0);
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
      t = (ATerm) ATinsert(CheckATermList(z_1), term_z_5);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_1), term_d_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_e_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_i_6);
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
  ATerm e_9 = NULL,f_9 = NULL,i_9 = NULL,j_9 = NULL;
  f_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      i_9 = ATgetArgument(t, 0);
      {
        ATerm o_9 = NULL,s_1 = NULL,t_1 = NULL,o_1 = NULL;
        t = SSL_explode_string(i_9);
        t = unquote_chars_2_0(a_0, h_0, t);
        o_1 = t;
        t = SSL_implode_string(o_1);
        t_1 = t;
        t = SSL_explode_string(t_1);
        t = unescape_chars_1_0(m_0, t);
        s_1 = t;
        t = SSL_implode_string(s_1);
        o_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, o_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          i_9 = ATgetArgument(t, 0);
          {
            ATerm i_2 = NULL;
            t = SSL_string_to_real(i_9);
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              i_9 = ATgetArgument(t, 0);
              {
                ATerm o_2 = NULL;
                t = SSL_string_to_int(i_9);
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, o_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  i_9 = ATgetArgument(t, 0);
                  j_9 = ATgetArgument(t, 1);
                  e_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(e_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, i_9, j_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      i_9 = ATgetArgument(t, 0);
                      {
                        ATerm k_3 = NULL,n_3 = NULL,o_3 = NULL,a_1 = NULL;
                        t = SSLgetAnnotations(f_9);
                        k_3 = t;
                        t = SSL_explode_string(i_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                              _fail(t);
                            n_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(n_3);
                        o_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_3);
                        a_1 = t;
                        t = SSLsetAnnotations(a_1, k_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          i_9 = ATgetArgument(t, 0);
                          j_9 = ATgetArgument(t, 1);
                          e_9 = ATgetArgument(t, 2);
                          {
                            ATerm l_4 = NULL,s_4 = NULL,t_4 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(f_9);
                            l_4 = t;
                            t = SSL_explode_string(i_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm m_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                                  _fail(t);
                                s_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(s_4);
                            t_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, t_4, j_9, e_9);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, l_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              i_9 = ATgetArgument(t, 0);
                              j_9 = ATgetArgument(t, 1);
                              e_9 = ATgetArgument(t, 2);
                              {
                                ATerm j_5 = NULL,g_6 = NULL,h_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(f_9);
                                j_5 = t;
                                t = SSL_explode_string(i_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm n_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                      _fail(t);
                                    g_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(g_6);
                                h_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, h_6, j_9, e_9);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, j_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  i_9 = ATgetArgument(t, 0);
                                  j_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_6 = NULL,u_7 = NULL,x_7 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(f_9);
                                    x_6 = t;
                                    t = SSL_explode_string(i_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm o_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 39)))
                                          _fail(t);
                                        u_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(u_7);
                                    x_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, x_7, j_9);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, x_6);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      i_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm p_8 = NULL,v_8 = NULL,y_8 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(f_9);
                                        p_8 = t;
                                        t = SSL_explode_string(i_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm q_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                              _fail(t);
                                            v_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(v_8);
                                        y_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, y_8);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, p_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          i_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm p_9 = NULL,w_9 = NULL,y_9 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(f_9);
                                            p_9 = t;
                                            t = SSL_explode_string(i_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm r_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                                  _fail(t);
                                                w_9 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(w_9);
                                            y_9 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, y_9);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, p_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              i_9 = ATgetArgument(t, 0);
                                              j_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm u_10 = NULL,x_10 = NULL,z_10 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(f_9);
                                                u_10 = t;
                                                t = SSL_explode_string(i_9);
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
                                                z_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_10, j_9);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, u_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm w_11 = NULL,z_11 = NULL,a_12 = NULL,m_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  i_9 = ATgetArgument(t, 0);
                                                  j_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(f_9);
                                              w_11 = t;
                                              t = SSL_explode_string(i_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm t_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                                    _fail(t);
                                                  z_11 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(z_11);
                                              a_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, a_12, j_9);
                                              m_1 = t;
                                              t = SSLsetAnnotations(m_1, w_11);
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
ATerm at_last_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  static ATerm e_12 (ATerm t)
  {
    ATerm v_11 = NULL,b_12 = NULL,c_12 = NULL;
    v_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_12 = ATgetFirst((ATermList) t);
        c_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_6 = t;
      int w_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(v_11);
          t_12 = t;
          t = c_12;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_12), b_12);
          i_3 = t;
          t = SSLsetAnnotations(i_3, t_12);
          t = q_93(t);
          LocalPopChoice(w_6);
        }
      else
        {
          t = u_6;
          {
            ATerm k_13 = NULL,n_13 = NULL,l_3 = NULL;
            t = SSLgetAnnotations(v_11);
            k_13 = t;
            t = c_12;
            t = e_12(t);
            n_13 = t;
            t = (ATerm) ATinsert(CheckATermList(n_13), b_12);
            l_3 = t;
            t = SSLsetAnnotations(l_3, k_13);
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
  ATerm m_12 = NULL,n_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_12 = ATgetFirst((ATermList) t);
      n_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_12;
    }
  else
    {
      t = n_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm d_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm z_6 = ATgetFirst((ATermList) t);
      d_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_13;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm o_102 (ATerm), ATerm p_102 (ATerm), ATerm t)
{
  ATerm z_12 = NULL,b_13 = NULL,c_13 = NULL;
  z_12 = t;
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
  t = o_102(t);
  t = z_12;
  t = last_0_0(t);
  t = p_102(t);
  t = z_12;
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
static ATerm c_27 (ATerm j_14, ATerm k_14, ATerm t)
{
  t = j_14;
  {
    ATerm c_7 = t;
    if((PushChoice() == 0))
      {
        ATerm q_14 = NULL,r_14 = NULL,x_14 = NULL,y_14 = NULL,s_3 = NULL;
        y_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_14 = ATgetFirst((ATermList) t);
            x_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_14);
        q_14 = t;
        t = x_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_14), r_14);
        s_3 = t;
        t = SSLsetAnnotations(s_3, q_14);
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
static ATerm e_27 (ATerm z_14, ATerm c_15, ATerm t)
{
  t = z_14;
  {
    ATerm e_7 = t;
    if((PushChoice() == 0))
      {
        ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL,t_3 = NULL;
        i_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_15 = ATgetFirst((ATermList) t);
            h_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_15);
        f_15 = t;
        t = h_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_15), g_15);
        t_3 = t;
        t = SSLsetAnnotations(t_3, f_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = e_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, z_14);
  return(t);
}
static ATerm i_27 (ATerm j_15, ATerm k_15, ATerm l_15, ATerm m_15, ATerm t)
{
  ATerm u_15 = NULL,v_15 = NULL;
  t = SSL_explode_string(j_15);
  t = unquote_chars_2_0(s_0, u_0, t);
  v_15 = t;
  t = SSL_implode_string(v_15);
  u_15 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, u_15, k_15, l_15);
  return(t);
}
static ATerm n_27 (ATerm w_15, ATerm x_15, ATerm t)
{
  ATerm d_16 = NULL,j_16 = NULL;
  t = SSL_explode_string(w_15);
  t = unquote_chars_2_0(v_0, w_0, t);
  j_16 = t;
  t = SSL_implode_string(j_16);
  d_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, d_16, (ATerm) ATempty);
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
static ATerm y_0 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm v_17 = NULL,x_17 = NULL,s_13 = NULL;
  v_17 = t;
  t = SSL_explode_term(v_17);
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_7 = ATgetArgument(t, 1);
        if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
          {
            x_17 = ATgetFirst((ATermList) j_7);
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
  t = SSL_explode_term(v_17);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, s_13), x_17));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL,i_14 = NULL;
  m_18 = t;
  t = SSL_explode_term(m_18);
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            n_18 = ATgetFirst((ATermList) t_7);
            {
              ATerm v_7 = (ATerm) ATgetNext((ATermList) t_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_18);
  if(match_cons(t, sym__2))
    {
      ATerm w_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            ATerm z_7 = ATgetFirst((ATermList) y_7);
            ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
              {
                i_14 = ATgetFirst((ATermList) a_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, i_14), n_18));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,n_14 = NULL;
  u_18 = t;
  t = SSL_explode_term(u_18);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            v_18 = ATgetFirst((ATermList) d_8);
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
  t = SSL_explode_term(u_18);
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
                n_14 = ATgetFirst((ATermList) i_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, n_14), v_18));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_r_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,p_14 = NULL;
  a_19 = t;
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            b_19 = ATgetFirst((ATermList) l_8);
            {
              ATerm m_8 = (ATerm) ATgetNext((ATermList) l_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm n_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) n_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_8 = ATgetArgument(t, 1);
        if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
          {
            ATerm q_8 = ATgetFirst((ATermList) o_8);
            ATerm r_8 = (ATerm) ATgetNext((ATermList) o_8);
            if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
              {
                p_14 = ATgetFirst((ATermList) r_8);
                {
                  ATerm s_8 = (ATerm) ATgetNext((ATermList) r_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, p_14), b_19));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      v_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, w_19), v_19));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_h_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_7, (ATerm) ATinsert(ATinsert(ATempty, b_20), a_20));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm u_20 = NULL,b_21 = NULL;
  if(match_cons(t, sym__2))
    {
      u_20 = ATgetArgument(t, 0);
      b_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, b_21), u_20));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL;
  if(match_cons(t, sym__2))
    {
      e_21 = ATgetArgument(t, 0);
      f_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, f_21), e_21));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm k_16 = NULL,l_16 = NULL,o_16 = NULL,p_16 = NULL,v_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL;
  x_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_17 = ATgetArgument(t, 0);
      b_17 = ATgetArgument(t, 1);
      {
        ATerm n_17 = NULL;
        t = b_17;
        t = foldr_2_0(y_0, z_0, t);
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_17, n_17);
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
                ATerm z_13 = NULL;
                t = a_17;
                {
                  ATerm x_8 = t;
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
                                  t = term_i_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_e_6;
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
                      t = x_8;
                      {
                        ATerm b_14 = NULL;
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
                                  b_14 = ATgetFirst((ATermList) d_9);
                                  {
                                    ATerm g_9 = (ATerm) ATgetNext((ATermList) d_9);
                                    if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
                                      {
                                        ATerm h_9 = ATgetFirst((ATermList) g_9);
                                        if(((ATgetType(h_9) != AT_INT) || (ATgetInt((ATermInt) h_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm k_9 = (ATerm) ATgetNext((ATermList) g_9);
                                          if(((ATgetType(k_9) != AT_LIST) || !(ATisEmpty(k_9))))
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
                        t = b_14;
                      }
                    }
                }
                z_13 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, z_13);
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  a_17 = ATgetArgument(t, 0);
                  {
                    ATerm i_18 = NULL;
                    t = a_17;
                    t = foldr_2_0(b_1, n_1, t);
                    i_18 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_9, (ATerm) ATinsert(ATempty, i_18));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      a_17 = ATgetArgument(t, 0);
                      b_17 = ATgetArgument(t, 1);
                      {
                        static ATerm p_1 (ATerm t)
                        {
                          t = b_17;
                          return(t);
                        }
                        t = a_17;
                        t = foldr_2_0(p_1, q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          a_17 = ATgetArgument(t, 0);
                          t = a_17;
                          t = foldr_2_0(r_1, u_1, t);
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
                                    ATerm q_9 = ATgetArgument(t, 1);
                                  }
                                  v_16 = ATgetArgument(t, 2);
                                  k_16 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, a_17, v_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_16), (ATerm) ATempty));
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
                                          ATerm t_9 = ATgetArgument(t, 1);
                                        }
                                        v_16 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(s_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, a_17, v_16, term_x_9);
                                  }
                                else
                                  {
                                    t = r_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        a_17 = ATgetArgument(t, 0);
                                        b_17 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, a_17, b_17, term_x_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            a_17 = ATgetArgument(t, 0);
                                            b_17 = ATgetArgument(t, 1);
                                            {
                                              static ATerm v_1 (ATerm t)
                                              {
                                                t = b_17;
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
                                                        l_16 = ATgetFirst((ATermList) t);
                                                        o_16 = (ATerm) ATgetNext((ATermList) t);
                                                        t = o_16;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm z_9 = t;
                                                            int a_10 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_27(a_17, x_16, t);
                                                                LocalPopChoice(a_10);
                                                              }
                                                            else
                                                              {
                                                                t = z_9;
                                                                t = l_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = c_27(a_17, x_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_27(a_17, x_16, t);
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
                                                                            b_17 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_17), b_17);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                a_17 = ATgetArgument(t, 0);
                                                                                b_17 = ATgetArgument(t, 1);
                                                                                {
                                                                                  static ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = b_17;
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
                                                                                        b_17 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATinsert(CheckATermList(b_17), a_17));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                            t = a_17;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                l_16 = ATgetFirst((ATermList) t);
                                                                                                o_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = o_16;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm b_10 = t;
                                                                                                    int c_10 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = e_27(a_17, x_16, t);
                                                                                                        LocalPopChoice(c_10);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = b_10;
                                                                                                        t = l_16;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = e_27(a_17, x_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = e_27(a_17, x_16, t);
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
                                                                                                    b_17 = ATgetArgument(t, 1);
                                                                                                    t = b_17;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        p_16 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_f_10, (ATerm) ATinsert(ATinsert(ATempty, p_16), a_17));
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
                                                                                                            b_17 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, a_17, b_17, term_g_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                b_17 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, a_17, b_17, term_g_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                    b_17 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, a_17, (ATerm)ATempty, b_17);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_CondChoice_3))
                                                                                                                      {
                                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                                        b_17 = ATgetArgument(t, 1);
                                                                                                                        v_16 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, a_17), b_17, v_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                                          {
                                                                                                                            a_17 = ATgetArgument(t, 0);
                                                                                                                            b_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, b_17, a_17);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimT_3))
                                                                                                                              {
                                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                                b_17 = ATgetArgument(t, 1);
                                                                                                                                v_16 = ATgetArgument(t, 2);
                                                                                                                                t = i_27(a_17, b_17, v_16, x_16, t);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                  {
                                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                                    t = n_27(a_17, x_16, t);
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
                                                                                                                                            b_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDef_3, a_17, (ATerm)ATempty, b_17);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                                              {
                                                                                                                                                a_17 = ATgetArgument(t, 0);
                                                                                                                                                b_17 = ATgetArgument(t, 1);
                                                                                                                                                v_16 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, a_17, b_17, v_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    a_17 = ATgetArgument(t, 0);
                                                                                                                                                    b_17 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDef_3, a_17, (ATerm)ATempty, b_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_RDec_2))
                                                                                                                                                      {
                                                                                                                                                        a_17 = ATgetArgument(t, 0);
                                                                                                                                                        b_17 = ATgetArgument(t, 1);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDecT_3, a_17, b_17, (ATerm) ATempty);
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
                                                                                                                                                                b_17 = ATgetArgument(t, 1);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, a_17, (ATerm)ATempty, b_17);
                                                                                                                                                              }
                                                                                                                                                            else
                                                                                                                                                              {
                                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                                  {
                                                                                                                                                                    ATerm h_10 = ATgetArgument(t, 0);
                                                                                                                                                                    b_17 = ATgetArgument(t, 1);
                                                                                                                                                                  }
                                                                                                                                                                else
                                                                                                                                                                  _fail(t);
                                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, b_17);
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
ATerm repeat_2_0 (ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm t)
{
  static ATerm q_27 (ATerm t)
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_85(t);
        t = q_27(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = d_85(t);
      }
    return(t);
  }
  t = q_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_86 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t)
  {
    t = topdown_1_0(c_86, t);
    return(t);
  }
  t = c_86(t);
  t = SRTS_all(h_2, t);
  return(t);
}
static ATerm l_5 (ATerm h_41, ATerm i_41, ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_fputc(h_41, i_41);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
static ATerm m_5 (ATerm c_26, ATerm d_26, ATerm t)
{
  ATerm s_27 = NULL;
  t = SSL_write_term_to_stream_text(c_26, d_26);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_27);
  return(t);
}
static ATerm o_5 (ATerm f_92 (ATerm), ATerm f_178, ATerm i_26, ATerm t)
{
  ATerm t_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, f_178, term_k_10);
  t = s_5(t);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_27, i_26);
  t = f_92(t);
  t = fclose_0_0(t);
  t = i_26;
  return(t);
}
static ATerm n_5 (ATerm y_25, ATerm z_25, ATerm t)
{
  ATerm u_27 = NULL;
  t = SSL_write_term_to_stream_baf(y_25, z_25);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_27);
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
  ATerm q_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          q_15 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      t_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(q_15, t_15, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm n_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      if(match_cons(m_10, sym_Stream_1))
        {
          s_16 = ATgetArgument(m_10, 0);
        }
      else
        _fail(t);
      t_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(s_16, t_16, t);
  n_16 = t;
  t = term_e_6;
  q_16 = t;
  t = n_16;
  if(match_cons(t, sym_Stream_1))
    {
      r_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_e_6, n_16);
  t = l_5(q_16, r_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm z_27 = NULL,a_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL,o_28 = NULL,r_30 = NULL,u_30 = NULL,z_3 = NULL,y_3 = NULL;
  a_28 = t;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_28);
  j_28 = t;
  t = k_28;
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((z_27 != NULL) && (z_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                z_27 = ATgetArgument(t, 0);
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
        z_27 = t;
      }
  }
  o_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, l_28);
  y_3 = t;
  t = SSLsetAnnotations(y_3, j_28);
  t = a_28;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_28);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, (ATerm) ATmakeAppl(sym__2, not_null(z_27), f_28));
  z_3 = t;
  t = SSLsetAnnotations(z_3, d_28);
  i_28 = t;
  if(match_cons(t, sym__2))
    {
      r_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL,b_15 = NULL,d_15 = NULL,o_15 = NULL,p_15 = NULL,b_4 = NULL;
        t = SSLgetAnnotations(i_28);
        v_14 = t;
        t = r_30;
        t = fetch_1_0(k_2, t);
        b_15 = t;
        t = u_30;
        if(match_cons(t, sym__2))
          {
            o_15 = ATgetArgument(t, 0);
            p_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = o_5(l_2, o_15, p_15, t);
        d_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_15, d_15);
        b_4 = t;
        t = SSLsetAnnotations(b_4, v_14);
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        {
          ATerm e_16 = NULL,h_16 = NULL,i_16 = NULL,m_16 = NULL,c_4 = NULL;
          t = SSLgetAnnotations(i_28);
          e_16 = t;
          t = u_30;
          if(match_cons(t, sym__2))
            {
              i_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_5(m_2, i_16, m_16, t);
          h_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_30, h_16);
          c_4 = t;
          t = SSLsetAnnotations(c_4, e_16);
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
ATerm apply_strategy_1_0 (ATerm w_109 (ATerm), ATerm t)
{
  ATerm z_30 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL,f_31 = NULL;
  f_31 = t;
  t = dtime_0_0(t);
  t = f_31;
  t = w_109(t);
  d_31 = t;
  t = dtime_0_0(t);
  z_30 = t;
  t = d_31;
  if(match_cons(t, sym__2))
    {
      b_31 = ATgetArgument(t, 0);
      c_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_31), (ATerm) ATmakeAppl(sym_Runtime_1, z_30)), c_31);
  return(t);
}
static ATerm x_31 (ATerm r_31, ATerm t)
{
  t = SSL_fclose(r_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  v_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_31 = ATgetArgument(t, 0);
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_31);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = x_31(v_31, t);
          }
      }
    }
  else
    {
      t = x_31(v_31, t);
    }
  return(t);
}
static ATerm p_5 (ATerm e_26, ATerm t)
{
  t = SSL_read_term_from_stream(e_26);
  return(t);
}
static ATerm q_5 (ATerm a_40, ATerm b_40, ATerm t)
{
  t = SSL_strcat(a_40, b_40);
  return(t);
}
static ATerm r_5 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_fopen(j_41, k_41);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_stdin_stream();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_stdout_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm f_32 = NULL;
  t = SSL_stderr_stream();
  f_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_32);
  return(t);
}
static ATerm w_33 (ATerm p_32, ATerm t)
{
  ATerm s_32 = NULL;
  t = SSL_explode_term(p_32);
  if(match_cons(t, sym__2))
    {
      ATerm v_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_10 = ATgetArgument(t, 1);
        if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
          {
            s_32 = ATgetFirst((ATermList) w_10);
            {
              ATerm y_10 = (ATerm) ATgetNext((ATermList) w_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_33 (ATerm w_32, ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,e_33 = NULL,k_4 = NULL;
  t = SSLgetAnnotations(y_32);
  b_33 = t;
  t = w_32;
  if(match_cons(t, sym_Path_1))
    {
      e_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_33, x_32);
  k_4 = t;
  t = SSLsetAnnotations(k_4, b_33);
  if(match_cons(t, sym__2))
    {
      z_32 = ATgetArgument(t, 0);
      a_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(z_32, a_33, t);
  return(t);
}
static ATerm y_33 (ATerm i_33, ATerm j_33, ATerm k_33, ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,r_33 = NULL,o_4 = NULL;
  t = SSLgetAnnotations(k_33);
  o_33 = t;
  t = SSL_is_string(i_33);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, j_33);
  o_4 = t;
  t = SSLsetAnnotations(o_4, o_33);
  if(match_cons(t, sym__2))
    {
      m_33 = ATgetArgument(t, 0);
      n_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_5(m_33, n_33, t);
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  if(match_cons(t, sym__2))
    {
      u_33 = ATgetArgument(t, 0);
      v_33 = ATgetArgument(t, 1);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_33(t_33, t);
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
                  t = x_33(u_33, v_33, t_33, t);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  t = y_33(u_33, v_33, t_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_33(t_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,h_34 = NULL;
  h_34 = t;
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_34, term_g_11);
        t = s_5(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        {
          ATerm k_17 = NULL,l_17 = NULL;
          t = term_h_11;
          l_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_11, h_34);
          t = q_5(l_17, h_34, t);
          k_17 = t;
          t = SSL_perror(k_17);
          _fail(t);
        }
      }
  }
  b_34 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_5(c_34, t);
  a_34 = t;
  t = b_34;
  t = fclose_0_0(t);
  t = a_34;
  return(t);
}
ATerm fetch_1_0 (ATerm y_92 (ATerm), ATerm t)
{
  static ATerm h_35 (ATerm t)
  {
    ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
    e_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_35 = ATgetFirst((ATermList) t);
        g_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_11 = t;
      int j_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_17 = NULL,w_17 = NULL,z_4 = NULL;
          t = SSLgetAnnotations(e_35);
          s_17 = t;
          t = f_35;
          t = y_92(t);
          w_17 = t;
          t = (ATerm) ATinsert(CheckATermList(g_35), w_17);
          z_4 = t;
          t = SSLsetAnnotations(z_4, s_17);
          LocalPopChoice(j_11);
        }
      else
        {
          t = i_11;
          {
            ATerm j_18 = NULL,p_18 = NULL,a_5 = NULL;
            t = SSLgetAnnotations(e_35);
            j_18 = t;
            t = g_35;
            t = h_35(t);
            p_18 = t;
            t = (ATerm) ATinsert(CheckATermList(p_18), f_35);
            a_5 = t;
            t = SSLsetAnnotations(a_5, j_18);
          }
        }
    }
    return(t);
  }
  t = h_35(t);
  return(t);
}
static ATerm x_5 (ATerm o_57, ATerm p_57, ATerm t)
{
  ATerm k_35 = NULL;
  t = lookup_table_0_1(o_57, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      k_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_6(p_57, k_35, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_108 (ATerm), ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
        t = term_m_11;
        q_35 = t;
        t = term_n_11;
        r_35 = t;
        t = term_o_11;
        t = x_5(q_35, r_35, t);
        p_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_35, term_p_11);
        t = geq_0_0(t);
        t = n_35;
        t = f_108(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        t = n_35;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  if(match_string(t, "-k"))
    {
      t = u_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_35;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL;
  v_35 = t;
  t = SSL_string_to_int(v_35);
  w_35 = t;
  t = term_q_11;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_11, w_35);
  t = a_6(x_35, w_35, t);
  t = v_35;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_r_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, p_2, q_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  if(match_string(t, "-S"))
    {
      t = z_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_35;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL;
  t = term_n_11;
  a_36 = t;
  t = term_s_11;
  b_36 = t;
  t = term_t_11;
  t = a_6(a_36, b_36, t);
  t = term_u_11;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_x_11;
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
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  t = SSL_string_to_int(c_36);
  d_36 = t;
  t = term_n_11;
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_11, d_36);
  t = a_6(e_36, d_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_36);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_y_11;
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
  ATerm f_36 = NULL,g_36 = NULL;
  t = term_d_12;
  f_36 = t;
  t = term_c_5;
  g_36 = t;
  t = term_f_12;
  t = a_6(f_36, g_36, t);
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
static ATerm a_6 (ATerm a_51, ATerm b_51, ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL;
  t = term_m_11;
  h_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_m_11, a_51, b_51);
  t = lookup_table_0_1(h_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(a_51, b_51, i_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_m_11, a_51, b_51);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
      t = term_c_5;
      t = i_0(t);
      o_36 = t;
      t = term_o_12;
      p_36 = t;
      t = term_p_12;
      q_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, o_36);
      t = y_5(p_36, q_36, o_36, t);
      _fail(t);
    }
  else
    {
      ATerm t_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_36 = ATgetFirst((ATermList) t);
          n_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_36;
      t = d_0(t);
      t = term_c_5;
      t = g_0(t);
      t_36 = t;
      t = (ATerm) ATinsert(CheckATermList(n_36), t_36);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  if(match_string(t, "-o"))
    {
      t = v_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_36;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  t = term_q_12;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_12, w_36);
  t = a_6(x_36, w_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_36);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm y_5 (ATerm v_55, ATerm w_55, ATerm u_55, ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
  {
    ATerm s_12 = t;
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
        t = (ATerm) ATmakeAppl(sym__2, v_55, w_55);
        t = x_5(v_55, w_55, t);
        LocalPopChoice(u_12);
      }
    else
      {
        t = s_12;
        t = (ATerm) ATempty;
      }
  }
  a_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, v_55, w_55, (ATerm) ATinsert(CheckATermList(a_37), u_55));
  t = lookup_table_0_1(v_55, t);
  d_37 = t;
  t = (ATerm) ATinsert(CheckATermList(a_37), u_55);
  b_37 = t;
  t = d_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      c_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(w_55, b_37, c_37, t);
  t = z_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
      t = term_c_5;
      t = p_0(t);
      o_37 = t;
      t = term_o_12;
      p_37 = t;
      t = term_p_12;
      q_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, o_37);
      t = y_5(p_37, q_37, o_37, t);
      _fail(t);
    }
  else
    {
      ATerm u_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_37 = ATgetFirst((ATermList) t);
          l_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_37 = ATgetFirst((ATermList) t);
          n_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_37;
      t = n_0(t);
      t = m_37;
      t = o_0(t);
      u_37 = t;
      t = (ATerm) ATinsert(CheckATermList(n_37), u_37);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  if(match_string(t, "-i"))
    {
      t = w_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_37;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL;
  x_37 = t;
  t = term_x_12;
  y_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, x_37);
  t = a_6(y_37, x_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_37);
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
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_5;
  t = whoami_0_0(t);
  z_37 = t;
  t = term_d_5;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_a_13), z_37);
  c_38 = t;
  t = SSL_printnl(b_38, c_38);
  t = term_g_5;
  a_38 = t;
  t = SSL_exit(a_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL;
  t = term_m_11;
  d_38 = t;
  t = term_e_13;
  e_38 = t;
  t = term_f_13;
  t = x_5(d_38, e_38, t);
  return(t);
}
static ATerm t_5 (ATerm d_44, ATerm e_44, ATerm t)
{
  ATerm g_13 = t;
  int h_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(d_44, e_44);
      LocalPopChoice(h_13);
    }
  else
    {
      t = g_13;
      t = SSL_addr(d_44, e_44);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_99 (ATerm), ATerm o_99 (ATerm), ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_38;
      t = n_99(t);
    }
  else
    {
      ATerm l_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_38 = ATgetFirst((ATermList) t);
          i_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_38;
      t = foldr_2_0(n_99, o_99, t);
      l_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_38, l_38);
      t = o_99(t);
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
  t = term_s_11;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm k_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_5(k_19, o_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_38 = NULL,g_19 = NULL,h_19 = NULL;
  t = times_0_0(t);
  h_19 = t;
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_13 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_19;
  t = foldr_2_0(g_3, h_3, t);
  o_38 = t;
  t = SSL_TicksToSeconds(o_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  z_38 = t;
  if(match_cons(t, sym__2))
    {
      a_39 = ATgetArgument(t, 0);
      b_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_39;
        if((a_39 != t))
          {
            _fail(t);
          }
        t = z_38;
        LocalPopChoice(l_13);
      }
    else
      {
        t = j_13;
        t = (ATerm) ATmakeAppl(sym__2, a_39, b_39);
        {
          ATerm m_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_39, b_39);
              LocalPopChoice(o_13);
            }
          else
            {
              t = m_13;
              t = SSL_gtr(a_39, b_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_39, b_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_108 (ATerm), ATerm t)
{
  ATerm f_39 = NULL;
  f_39 = t;
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
        t = term_m_11;
        i_39 = t;
        t = term_n_11;
        j_39 = t;
        t = term_o_11;
        t = x_5(i_39, j_39, t);
        h_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_39, term_g_5);
        t = geq_0_0(t);
        t = f_39;
        t = e_108(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = f_39;
      }
  }
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,o_39 = NULL,p_39 = NULL;
  t = run_time_0_0(t);
  l_39 = t;
  t = term_c_5;
  t = whoami_0_0(t);
  m_39 = t;
  t = term_d_5;
  o_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_13), l_39), term_r_13), m_39);
  p_39 = t;
  t = SSL_printnl(o_39, p_39);
  t = (ATerm) ATmakeAppl(sym__2, term_d_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_13), l_39), term_r_13), m_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(j_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_11;
  q_39 = t;
  t = SSL_exit(q_39);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_40 = NULL,d_40 = NULL;
  d_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = d_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          c_40 = ATgetArgument(t, 0);
          {
            ATerm q_20 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(d_40);
            q_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, c_40);
            h_5 = t;
            t = SSLsetAnnotations(h_5, q_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = d_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm u_110 (ATerm), ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = NULL,u_39 = NULL;
      t = term_m_11;
      t_39 = t;
      t = term_w_13;
      u_39 = t;
      t = term_x_13;
      t = x_5(t_39, u_39, t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      t = fetch_1_0(m_3, t);
    }
  t = u_110(t);
  return(t);
}
static ATerm b_6 (ATerm n_59, ATerm o_59, ATerm p_59, ATerm t)
{
  ATerm f_40 = NULL;
  t = SSL_hashtable_put(p_59, n_59, o_59);
  f_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_40);
  return(t);
}
static ATerm c_6 (ATerm q_59, ATerm r_59, ATerm t)
{
  t = SSL_hashtable_get(r_59, q_59);
  return(t);
}
ATerm lookup_table_0_1 (ATerm h_57, ATerm t)
{
  ATerm o_40 = NULL;
  t = table_hashtable_0_0(t);
  o_40 = t;
  {
    ATerm y_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_20 = NULL;
        t = o_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            z_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = c_6(h_57, z_20, t);
        LocalPopChoice(a_14);
      }
    else
      {
        t = y_13;
        {
          ATerm i_21 = NULL;
          t = h_57;
          t = table_create_0_0(t);
          t = o_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_6(h_57, i_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_59, ATerm w_59, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_hashtable_create(v_59, w_59);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,w_40 = NULL,x_40 = NULL;
  s_40 = t;
  t = term_c_14;
  w_40 = t;
  t = term_d_14;
  x_40 = t;
  t = s_40;
  t = new_hashtable_0_2(w_40, x_40, t);
  t_40 = t;
  t = s_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(s_40, t_40, u_40, t);
  t = s_40;
  return(t);
}
static ATerm v_5 (ATerm s_59, ATerm t_59, ATerm t)
{
  ATerm y_40 = NULL;
  t = SSL_hashtable_remove(t_59, s_59);
  y_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, y_40);
  return(t);
}
static ATerm w_5 (ATerm x_59, ATerm t)
{
  ATerm z_40 = NULL;
  t = SSL_hashtable_destroy(x_59);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_table_hashtable();
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL;
  b_41 = t;
  t = table_hashtable_0_0(t);
  c_41 = t;
  t = lookup_table_0_1(b_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_5(e_41, t);
  t = c_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      d_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_5(b_41, d_41, t);
  t = b_41;
  return(t);
}
ATerm map_1_0 (ATerm o_92 (ATerm), ATerm t)
{
  static ATerm a_42 (ATerm t)
  {
    ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL;
    x_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = x_41;
      }
    else
      {
        ATerm n_21 = NULL,q_21 = NULL,r_21 = NULL,k_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_41 = ATgetFirst((ATermList) t);
            z_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_41);
        n_21 = t;
        t = y_41;
        t = o_92(t);
        q_21 = t;
        t = z_41;
        t = a_42(t);
        r_21 = t;
        t = (ATerm) ATinsert(CheckATermList(r_21), q_21);
        k_5 = t;
        t = SSLsetAnnotations(k_5, n_21);
      }
    return(t);
  }
  t = a_42(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_42 = ATgetFirst((ATermList) t);
      e_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm i_42 = NULL,j_42 = NULL;
        static ATerm p_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(j_42));
          return(t);
        }
        t = e_42;
        t = l_0(t);
        if(((i_42 != NULL) && (i_42 != t)))
          _fail(t);
        else
          i_42 = t;
        t = d_42;
        t = k_0(t);
        if(((j_42 != NULL) && (j_42 != t)))
          _fail(t);
        else
          j_42 = t;
        t = e_42;
        t = reverse_acc_2_0(k_0, p_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_c_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL,f_6 = NULL;
  r_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_42);
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_42);
  f_6 = t;
  t = SSLsetAnnotations(f_6, p_42);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_42), term_e_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  ATerm f_14 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_42 = NULL,o_42 = NULL;
      t = term_m_11;
      n_42 = t;
      t = term_e_13;
      o_42 = t;
      t = term_f_13;
      t = x_5(n_42, o_42, t);
      LocalPopChoice(g_14);
    }
  else
    {
      t = f_14;
      t = fetch_1_0(q_3, t);
    }
  t = term_h_14;
  t = echo_0_0(t);
  t = term_o_12;
  l_42 = t;
  t = term_p_12;
  m_42 = t;
  t = term_l_14;
  t = x_5(l_42, m_42, t);
  t = reverse_acc_2_0(_id, r_3, t);
  t = map_1_0(u_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
  v_42 = t;
  {
    ATerm m_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_14 = ATgetFirst((ATermList) t);
                ATerm t_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_42;
          }
        LocalPopChoice(o_14);
      }
    else
      {
        t = m_14;
        t = (ATerm) ATinsert(ATempty, v_42);
      }
  }
  w_42 = t;
  t = term_p_10;
  x_42 = t;
  t = SSL_printnl(x_42, w_42);
  t = v_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL;
  t = term_m_11;
  b_43 = t;
  t = term_e_13;
  c_43 = t;
  t = term_f_13;
  t = x_5(b_43, c_43, t);
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
  ATerm d_43 = NULL,e_43 = NULL;
  t = term_u_14;
  d_43 = t;
  t = term_c_5;
  e_43 = t;
  t = term_w_14;
  t = a_6(d_43, e_43, t);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_a_15;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,i_43 = NULL;
  t = term_u_14;
  h_43 = t;
  t = term_c_5;
  i_43 = t;
  t = term_w_14;
  t = a_6(h_43, i_43, t);
  t = term_e_15;
  f_43 = t;
  t = term_c_5;
  g_43 = t;
  t = term_n_15;
  t = a_6(f_43, g_43, t);
  t = term_r_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm y_15 = t;
  int z_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, w_3, x_3, t);
      LocalPopChoice(z_15);
    }
  else
    {
      t = y_15;
      t = Option_3_0(a_4, d_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_63 (ATerm), ATerm q_63 (ATerm), ATerm t)
{
  ATerm j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,k_6 = NULL;
  o_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_43 = ATgetFirst((ATermList) t);
      l_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  j_43 = t;
  t = k_43;
  t = p_63(t);
  m_43 = t;
  t = l_43;
  t = q_63(t);
  n_43 = t;
  t = (ATerm) ATinsert(CheckATermList(n_43), m_43);
  k_6 = t;
  t = SSLsetAnnotations(k_6, j_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm x_112 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,y_43 = NULL,z_43 = NULL,p_6 = NULL;
  t_43 = t;
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_c_16;
        t = x_112(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
      }
  }
  t = t_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_43 = ATgetFirst((ATermList) t);
      w_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_43);
  u_43 = t;
  t = term_e_13;
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, v_43);
  t = a_6(z_43, v_43, t);
  t = w_43;
  {
    static ATerm l_44 (ATerm t)
    {
      ATerm f_16 = t;
      int g_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = t;
          int w_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_44 = NULL;
              c_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_44;
              LocalPopChoice(w_16);
            }
          else
            {
              t = u_16;
              t = x_112(t);
              t = Cons_2_0(_id, l_44, t);
            }
          LocalPopChoice(g_16);
        }
      else
        {
          t = f_16;
          {
            ATerm h_44 = NULL,i_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                h_44 = ATgetFirst((ATermList) t);
                i_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(i_44), (ATerm) ATmakeAppl(sym_Undefined_1, h_44));
          }
        }
      return(t);
    }
    t = l_44(t);
  }
  y_43 = t;
  t = (ATerm) ATinsert(CheckATermList(y_43), (ATerm) ATmakeAppl(sym_Program_1, v_43));
  p_6 = t;
  t = SSLsetAnnotations(p_6, u_43);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm y_44 = NULL;
  y_44 = t;
  if(match_string(t, "--help"))
    {
      t = y_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_44;
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  t = term_w_13;
  z_44 = t;
  t = term_c_5;
  a_45 = t;
  t = term_y_16;
  t = a_6(z_44, a_45, t);
  t = term_z_16;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_c_17;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm w_112 (ATerm), ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL;
  s_44 = t;
  t = term_o_12;
  t_44 = t;
  t = term_d_17;
  t = lookup_table_0_1(t_44, t);
  x_44 = t;
  t = term_p_12;
  u_44 = t;
  t = (ATerm) ATempty;
  v_44 = t;
  t = x_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(u_44, v_44, w_44, t);
  t = s_44;
  {
    static ATerm f_4 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_112(t);
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm g_17 = t;
            int h_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_4, h_4, i_4, t);
                LocalPopChoice(h_17);
              }
            else
              {
                t = g_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_4, t);
  }
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_45 = NULL;
        m_45 = t;
        {
          ATerm m_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_21 = NULL;
              t = m_45;
              {
                ATerm p_17 = t;
                int q_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_21 = NULL,a_22 = NULL;
                    t = term_m_11;
                    z_21 = t;
                    t = term_w_13;
                    a_22 = t;
                    t = term_x_13;
                    t = x_5(z_21, a_22, t);
                    LocalPopChoice(q_17);
                  }
                else
                  {
                    t = p_17;
                    t = fetch_1_0(j_4, t);
                  }
              }
              t = m_45;
              t = default_system_usage_0_0(t);
              t = term_s_11;
              y_21 = t;
              t = SSL_exit(y_21);
              LocalPopChoice(o_17);
            }
          else
            {
              t = m_17;
              {
                ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
                t = term_m_11;
                f_22 = t;
                t = term_u_14;
                g_22 = t;
                t = term_r_17;
                t = x_5(f_22, g_22, t);
                t = m_45;
                t = default_system_about_0_0(t);
                t = term_s_11;
                e_22 = t;
                t = SSL_exit(e_22);
              }
            }
        }
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
              static ATerm m_4 (ATerm t)
              {
                ATerm q_45 = NULL,r_45 = NULL,s_45 = NULL,v_6 = NULL;
                s_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    r_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(s_45);
                q_45 = t;
                t = r_45;
                if(((q_44 != NULL) && (q_44 != t)))
                  _fail(t);
                else
                  q_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, r_45);
                v_6 = t;
                t = SSLsetAnnotations(v_6, q_45);
                return(t);
              }
              t = fetch_1_0(m_4, t);
              t = term_d_5;
              o_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_44)), term_y_17);
              p_45 = t;
              t = SSL_printnl(o_45, p_45);
              t = (ATerm) ATmakeAppl(sym__2, term_d_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_44)), term_y_17));
              t = default_system_usage_0_0(t);
              t = term_g_5;
              n_45 = t;
              t = SSL_exit(n_45);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
            }
        }
      }
  }
  r_44 = t;
  t = term_o_12;
  t = table_destroy_0_0(t);
  t = r_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm w_110 (ATerm), ATerm x_110 (ATerm), ATerm y_110 (ATerm), ATerm z_110 (ATerm), ATerm t)
{
  ATerm x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL;
  t = parse_options_1_0(w_110, t);
  x_45 = t;
  t = term_z_17;
  t = table_create_0_0(t);
  t = term_z_17;
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_17, term_a_18, x_45);
  t = lookup_table_0_1(y_45, t);
  b_46 = t;
  t = term_a_18;
  z_45 = t;
  t = b_46;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = b_6(z_45, x_45, a_46, t);
  t = x_45;
  t = y_110(t);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(x_110, t);
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
              t = z_110(t);
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
static ATerm p_4 (ATerm t)
{
  t = if_verbose2_1_0(w_4, t);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL;
  t = term_f_18;
  c_46 = t;
  t = term_c_5;
  d_46 = t;
  t = term_g_18;
  t = a_6(c_46, d_46, t);
  t = term_h_18;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_k_18;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL;
  e_46 = t;
  t = term_m_11;
  i_46 = t;
  t = term_e_13;
  j_46 = t;
  t = term_f_13;
  t = x_5(i_46, j_46, t);
  f_46 = t;
  t = term_d_5;
  g_46 = t;
  t = (ATerm) ATinsert(ATempty, f_46);
  h_46 = t;
  t = SSL_printnl(g_46, h_46);
  t = e_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm f_110 (ATerm), ATerm g_110 (ATerm), ATerm h_110 (ATerm), ATerm t)
{
  static ATerm n_4 (ATerm t)
  {
    ATerm l_18 = t;
    int o_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_110(t);
        LocalPopChoice(o_18);
      }
    else
      {
        t = l_18;
        {
          ATerm q_18 = t;
          int r_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(r_18);
            }
          else
            {
              t = q_18;
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
                      ATerm w_18 = t;
                      int x_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(r_4, u_4, v_4, t);
                          LocalPopChoice(x_18);
                        }
                      else
                        {
                          t = w_18;
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
  static ATerm q_4 (ATerm t)
  {
    ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL;
    l_46 = t;
    {
      ATerm c_19 = t;
      int d_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm x_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((k_46 != NULL) && (k_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  k_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(x_4, t);
          LocalPopChoice(d_19);
        }
      else
        {
          t = c_19;
          t = term_e_19;
          k_46 = t;
        }
    }
    t = not_null(k_46);
    t = ReadFromFile_0_0(t);
    m_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, l_46, m_46);
    t = apply_strategy_1_0(f_110, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(n_4, h_110, p_4, q_4, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL,y_6 = NULL;
  u_46 = t;
  if(match_cons(t, sym__2))
    {
      r_46 = ATgetArgument(t, 0);
      s_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_46);
  q_46 = t;
  t = s_46;
  {
    ATerm f_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_46 = NULL;
        t = SSL_explode_term(s_46);
        if(match_cons(t, sym__2))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
            if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
              {
                v_46 = ATgetFirst((ATermList) l_19);
                {
                  ATerm m_19 = (ATerm) ATgetNext((ATermList) l_19);
                  if(((ATgetType(m_19) != AT_LIST) || !(ATisEmpty(m_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = v_46;
        LocalPopChoice(i_19);
      }
    else
      {
        t = f_19;
      }
  }
  t = topdown_1_0(b_5, t);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_46, t_46);
  y_6 = t;
  t = SSLsetAnnotations(y_6, q_46);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm n_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(p_19);
      }
    else
      {
        t = n_19;
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
