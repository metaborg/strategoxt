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
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_CallNoArgs_1;
Symbol sym_RChoice_2;
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_Match_1;
Symbol sym_LChoice_2;
Symbol sym_GuardedLChoice_3;
Symbol sym_CondChoice_3;
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
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
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
  sym_CondChoice_3 = ATmakeSymbol("CondChoice", 3, ATfalse);
  ATprotectSymbol(sym_CondChoice_3);
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
}
ATerm term_t_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_n_17;
ATerm term_m_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_q_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_r_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_u_14;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_j_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_t_5;
ATerm term_s_5;
ATerm term_q_5;
ATerm term_p_5;
ATerm term_o_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Op_2, term_b_7, (ATerm) ATempty);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_b_7, (ATerm) ATempty);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_7);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_7);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Call_2, term_p_8, (ATerm) ATempty);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Call_2, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_Call_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_9);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_j_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym__2, term_j_11, term_p_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_o_5);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_a_13);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_s_13);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym__2, term_k_12, term_l_12);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_j_14, term_o_5);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_p_14, term_o_5);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_s_13, term_o_5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_j_14);
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_o_5);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm v_99 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm r_90 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t);
static ATerm o_26 (ATerm d_14, ATerm g_14, ATerm t);
static ATerm p_26 (ATerm s_14, ATerm t_14, ATerm t);
static ATerm q_26 (ATerm z_14, ATerm d_15, ATerm e_15, ATerm f_15, ATerm t);
static ATerm r_26 (ATerm x_15, ATerm y_15, ATerm t);
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
ATerm repeat_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm d_83 (ATerm), ATerm t);
static ATerm y_4 (ATerm p_40, ATerm q_40, ATerm t);
static ATerm z_4 (ATerm k_25, ATerm l_25, ATerm t);
static ATerm b_5 (ATerm g_89 (ATerm), ATerm u_174, ATerm q_25, ATerm t);
static ATerm a_5 (ATerm g_25, ATerm h_25, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm p_106 (ATerm), ATerm t);
static ATerm c_31 (ATerm w_30, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm c_5 (ATerm m_25, ATerm t);
static ATerm d_5 (ATerm i_39, ATerm j_39, ATerm t);
static ATerm e_5 (ATerm r_40, ATerm s_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_32 (ATerm m_31, ATerm t);
static ATerm q_32 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t);
static ATerm r_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t);
static ATerm f_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm z_89 (ATerm), ATerm t);
static ATerm i_5 (ATerm u_56, ATerm v_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm y_104 (ATerm), ATerm t);
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
static ATerm l_5 (ATerm i_50, ATerm j_50, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_5 (ATerm d_55, ATerm e_55, ATerm c_55, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm g_5 (ATerm l_43, ATerm m_43, ATerm t);
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_104 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm need_help_1_0 (ATerm n_107 (ATerm), ATerm t);
ATerm map_1_0 (ATerm p_89 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm q_109 (ATerm), ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm parse_options_1_0 (ATerm p_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm iowrap_3_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
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
  t = term_o_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_p_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_5), f_0), term_q_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_t_5;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm v_99 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm u_5 = t;
    int x_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_99(t);
        LocalPopChoice(x_5);
      }
    else
      {
        t = u_5;
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
          t = (ATerm) ATinsert(CheckATermList(z_1), term_z_5);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_a_6);
            }
          else
            {
              if(match_int(t, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_d_6);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 114)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(z_1), term_f_6);
                }
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL,a_9 = NULL,b_9 = NULL;
  x_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      a_9 = ATgetArgument(t, 0);
      {
        ATerm g_9 = NULL,r_1 = NULL,s_1 = NULL,n_1 = NULL;
        t = SSL_explode_string(a_9);
        t = unquote_chars_2_0(a_0, h_0, t);
        n_1 = t;
        t = SSL_implode_string(n_1);
        s_1 = t;
        t = SSL_explode_string(s_1);
        t = unescape_chars_1_0(m_0, t);
        r_1 = t;
        t = SSL_implode_string(r_1);
        g_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, g_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          a_9 = ATgetArgument(t, 0);
          {
            ATerm i_2 = NULL;
            t = SSL_string_to_real(a_9);
            i_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, i_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              a_9 = ATgetArgument(t, 0);
              {
                ATerm o_2 = NULL;
                t = SSL_string_to_int(a_9);
                o_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, o_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  a_9 = ATgetArgument(t, 0);
                  b_9 = ATgetArgument(t, 1);
                  w_8 = ATgetArgument(t, 2);
                  t = SSL_is_string(w_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_9, b_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_8), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      a_9 = ATgetArgument(t, 0);
                      {
                        ATerm j_3 = NULL,r_3 = NULL,s_3 = NULL,b_1 = NULL;
                        t = SSLgetAnnotations(x_8);
                        j_3 = t;
                        t = SSL_explode_string(a_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                              _fail(t);
                            r_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(r_3);
                        s_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_3);
                        b_1 = t;
                        t = SSLsetAnnotations(b_1, j_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          a_9 = ATgetArgument(t, 0);
                          b_9 = ATgetArgument(t, 1);
                          w_8 = ATgetArgument(t, 2);
                          {
                            ATerm k_4 = NULL,o_4 = NULL,s_4 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(x_8);
                            k_4 = t;
                            t = SSL_explode_string(a_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm i_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                  _fail(t);
                                o_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(o_4);
                            s_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, s_4, b_9, w_8);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, k_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              a_9 = ATgetArgument(t, 0);
                              b_9 = ATgetArgument(t, 1);
                              w_8 = ATgetArgument(t, 2);
                              {
                                ATerm v_5 = NULL,c_6 = NULL,e_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(x_8);
                                v_5 = t;
                                t = SSL_explode_string(a_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm j_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(j_6) != AT_INT) || (ATgetInt((ATermInt) j_6) != 39)))
                                      _fail(t);
                                    c_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(c_6);
                                e_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, e_6, b_9, w_8);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, v_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  a_9 = ATgetArgument(t, 0);
                                  b_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_7 = NULL,q_7 = NULL,v_7 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(x_8);
                                    m_7 = t;
                                    t = SSL_explode_string(a_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm l_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                                          _fail(t);
                                        q_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(q_7);
                                    v_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, v_7, b_9);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, m_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      a_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm y_8 = NULL,d_9 = NULL,e_9 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(x_8);
                                        y_8 = t;
                                        t = SSL_explode_string(a_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm n_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                              _fail(t);
                                            d_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(d_9);
                                        e_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, e_9);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, y_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          a_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm u_9 = NULL,x_9 = NULL,d_10 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(x_8);
                                            u_9 = t;
                                            t = SSL_explode_string(a_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm p_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                                  _fail(t);
                                                x_9 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(x_9);
                                            d_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, d_10);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, u_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              a_9 = ATgetArgument(t, 0);
                                              b_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm r_10 = NULL,y_10 = NULL,z_10 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(x_8);
                                                r_10 = t;
                                                t = SSL_explode_string(a_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm q_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                                      _fail(t);
                                                    y_10 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(y_10);
                                                z_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, z_10, b_9);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, r_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm u_11 = NULL,a_12 = NULL,b_12 = NULL,p_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  a_9 = ATgetArgument(t, 0);
                                                  b_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(x_8);
                                              u_11 = t;
                                              t = SSL_explode_string(a_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm r_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                                    _fail(t);
                                                  a_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(a_12);
                                              b_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, b_12, b_9);
                                              p_1 = t;
                                              t = SSLsetAnnotations(p_1, u_11);
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
ATerm at_last_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  static ATerm v_11 (ATerm t)
  {
    ATerm o_11 = NULL,s_11 = NULL,t_11 = NULL;
    o_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        s_11 = ATgetFirst((ATermList) t);
        t_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm s_6 = t;
      int t_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = NULL,k_3 = NULL;
          t = SSLgetAnnotations(o_11);
          w_12 = t;
          t = t_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(t_11), s_11);
          k_3 = t;
          t = SSLsetAnnotations(k_3, w_12);
          t = r_90(t);
          LocalPopChoice(t_6);
        }
      else
        {
          t = s_6;
          {
            ATerm g_13 = NULL,j_13 = NULL,m_3 = NULL;
            t = SSLgetAnnotations(o_11);
            g_13 = t;
            t = t_11;
            t = v_11(t);
            j_13 = t;
            t = (ATerm) ATinsert(CheckATermList(j_13), s_11);
            m_3 = t;
            t = SSLsetAnnotations(m_3, g_13);
          }
        }
    }
    return(t);
  }
  t = v_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm f_12 = NULL,i_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_12 = ATgetFirst((ATermList) t);
      i_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_12;
    }
  else
    {
      t = i_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm t_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_6 = ATgetFirst((ATermList) t);
      t_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = t_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm h_99 (ATerm), ATerm i_99 (ATerm), ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
  p_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_12 = ATgetFirst((ATermList) t);
      {
        ATerm v_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = r_12;
  t = h_99(t);
  t = p_12;
  t = last_0_0(t);
  t = i_99(t);
  t = p_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_6 = ATgetFirst((ATermList) t);
      q_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = q_12;
  t = at_last_1_0(r_0, t);
  return(t);
}
static ATerm o_26 (ATerm d_14, ATerm g_14, ATerm t)
{
  t = d_14;
  {
    ATerm x_6 = t;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,o_14 = NULL,q_14 = NULL,r_14 = NULL,p_3 = NULL;
        r_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_14 = ATgetFirst((ATermList) t);
            q_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_14);
        i_14 = t;
        t = q_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_14), o_14);
        p_3 = t;
        t = SSLsetAnnotations(p_3, i_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_6, d_14);
  return(t);
}
static ATerm p_26 (ATerm s_14, ATerm t_14, ATerm t)
{
  t = s_14;
  {
    ATerm z_6 = t;
    if((PushChoice() == 0))
      {
        ATerm v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,q_3 = NULL;
        y_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_14 = ATgetFirst((ATermList) t);
            x_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_14);
        v_14 = t;
        t = x_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_14), w_14);
        q_3 = t;
        t = SSLsetAnnotations(q_3, v_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_a_7, s_14);
  return(t);
}
static ATerm q_26 (ATerm z_14, ATerm d_15, ATerm e_15, ATerm f_15, ATerm t)
{
  ATerm k_15 = NULL,t_15 = NULL;
  t = SSL_explode_string(z_14);
  t = unquote_chars_2_0(s_0, u_0, t);
  t_15 = t;
  t = SSL_implode_string(t_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, k_15, d_15, e_15);
  return(t);
}
static ATerm r_26 (ATerm x_15, ATerm y_15, ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL;
  t = SSL_explode_string(x_15);
  t = unquote_chars_2_0(v_0, w_0, t);
  g_16 = t;
  t = SSL_implode_string(g_16);
  f_16 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, f_16, (ATerm) ATempty);
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
  t = term_c_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm r_17 = NULL,t_17 = NULL,q_13 = NULL;
  r_17 = t;
  t = SSL_explode_term(r_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_7 = ATgetArgument(t, 1);
        if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
          {
            t_17 = ATgetFirst((ATermList) e_7);
            {
              ATerm f_7 = (ATerm) ATgetNext((ATermList) e_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_17);
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_7 = ATgetArgument(t, 1);
        if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
          {
            ATerm i_7 = ATgetFirst((ATermList) h_7);
            ATerm j_7 = (ATerm) ATgetNext((ATermList) h_7);
            if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
              {
                q_13 = ATgetFirst((ATermList) j_7);
                {
                  ATerm k_7 = (ATerm) ATgetNext((ATermList) j_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, q_13), t_17));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,f_14 = NULL;
  f_18 = t;
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm o_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) o_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm p_7 = ATgetArgument(t, 1);
        if(((ATgetType(p_7) == AT_LIST) && !(ATisEmpty(p_7))))
          {
            g_18 = ATgetFirst((ATermList) p_7);
            {
              ATerm r_7 = (ATerm) ATgetNext((ATermList) p_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(f_18);
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            ATerm u_7 = ATgetFirst((ATermList) t_7);
            ATerm w_7 = (ATerm) ATgetNext((ATermList) t_7);
            if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
              {
                f_14 = ATgetFirst((ATermList) w_7);
                {
                  ATerm x_7 = (ATerm) ATgetNext((ATermList) w_7);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, f_14), g_18));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,k_14 = NULL;
  n_18 = t;
  t = SSL_explode_term(n_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            o_18 = ATgetFirst((ATermList) z_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) z_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_18);
  if(match_cons(t, sym__2))
    {
      ATerm b_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_8 = ATgetArgument(t, 1);
        if(((ATgetType(c_8) == AT_LIST) && !(ATisEmpty(c_8))))
          {
            ATerm d_8 = ATgetFirst((ATermList) c_8);
            ATerm e_8 = (ATerm) ATgetNext((ATermList) c_8);
            if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
              {
                k_14 = ATgetFirst((ATermList) e_8);
                {
                  ATerm f_8 = (ATerm) ATgetNext((ATermList) e_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, k_14), o_18));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,m_14 = NULL;
  w_18 = t;
  t = SSL_explode_term(w_18);
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_8 = ATgetArgument(t, 1);
        if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
          {
            x_18 = ATgetFirst((ATermList) h_8);
            {
              ATerm i_8 = (ATerm) ATgetNext((ATermList) h_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(w_18);
  if(match_cons(t, sym__2))
    {
      ATerm j_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_8 = ATgetArgument(t, 1);
        if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
          {
            ATerm l_8 = ATgetFirst((ATermList) k_8);
            ATerm m_8 = (ATerm) ATgetNext((ATermList) k_8);
            if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
              {
                m_14 = ATgetFirst((ATermList) m_8);
                {
                  ATerm n_8 = (ATerm) ATgetNext((ATermList) m_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, m_14), x_18));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm l_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, o_19), l_19));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm s_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, t_19), s_19));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm w_23 = NULL,x_23 = NULL;
  if(match_cons(t, sym__2))
    {
      w_23 = ATgetArgument(t, 0);
      x_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, x_23), w_23));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_q_8;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm z_23 = NULL,a_24 = NULL;
  if(match_cons(t, sym__2))
    {
      z_23 = ATgetArgument(t, 0);
      a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, a_24), z_23));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,s_16 = NULL,w_16 = NULL,b_17 = NULL,d_17 = NULL;
  w_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_17 = ATgetArgument(t, 0);
      d_17 = ATgetArgument(t, 1);
      {
        ATerm l_17 = NULL;
        t = d_17;
        t = foldr_2_0(x_0, z_0, t);
        l_17 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_17, l_17);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          b_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, b_17, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              b_17 = ATgetArgument(t, 0);
              {
                ATerm y_13 = NULL;
                t = b_17;
                {
                  ATerm r_8 = t;
                  int s_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_t_8;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_f_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_d_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_a_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_u_8;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(s_8);
                    }
                  else
                    {
                      t = r_8;
                      {
                        ATerm a_14 = NULL;
                        t = SSL_explode_string(b_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm v_8 = ATgetFirst((ATermList) t);
                            if(((ATgetType(v_8) != AT_INT) || (ATgetInt((ATermInt) v_8) != 39)))
                              _fail(t);
                            {
                              ATerm z_8 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
                                {
                                  a_14 = ATgetFirst((ATermList) z_8);
                                  {
                                    ATerm c_9 = (ATerm) ATgetNext((ATermList) z_8);
                                    if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                                      {
                                        ATerm f_9 = ATgetFirst((ATermList) c_9);
                                        if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_9 = (ATerm) ATgetNext((ATermList) c_9);
                                          if(((ATgetType(h_9) != AT_LIST) || !(ATisEmpty(h_9))))
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
                  b_17 = ATgetArgument(t, 0);
                  {
                    ATerm d_18 = NULL;
                    t = b_17;
                    t = foldr_2_0(a_1, m_1, t);
                    d_18 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_i_9, (ATerm) ATinsert(ATempty, d_18));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      b_17 = ATgetArgument(t, 0);
                      d_17 = ATgetArgument(t, 1);
                      {
                        static ATerm o_1 (ATerm t)
                        {
                          t = d_17;
                          return(t);
                        }
                        t = b_17;
                        t = foldr_2_0(o_1, q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          b_17 = ATgetArgument(t, 0);
                          t = b_17;
                          t = foldr_2_0(t_1, u_1, t);
                        }
                      else
                        {
                          ATerm j_9 = t;
                          int k_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  b_17 = ATgetArgument(t, 0);
                                  {
                                    ATerm l_9 = ATgetArgument(t, 1);
                                  }
                                  s_16 = ATgetArgument(t, 2);
                                  j_16 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, b_17, s_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, j_16), (ATerm) ATempty));
                            }
                          else
                            {
                              t = j_9;
                              {
                                ATerm m_9 = t;
                                int n_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Con3_3))
                                      {
                                        b_17 = ATgetArgument(t, 0);
                                        {
                                          ATerm o_9 = ATgetArgument(t, 1);
                                        }
                                        s_16 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(n_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, b_17, s_16, term_r_9);
                                  }
                                else
                                  {
                                    t = m_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        b_17 = ATgetArgument(t, 0);
                                        d_17 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, b_17, d_17, term_r_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            b_17 = ATgetArgument(t, 0);
                                            d_17 = ATgetArgument(t, 1);
                                            {
                                              static ATerm v_1 (ATerm t)
                                              {
                                                t = d_17;
                                                return(t);
                                              }
                                              t = b_17;
                                              t = foldr_2_0(v_1, a_2, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                b_17 = ATgetArgument(t, 0);
                                                t = b_17;
                                                t = foldr_2_0(b_2, c_2, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    b_17 = ATgetArgument(t, 0);
                                                    t = b_17;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        k_16 = ATgetFirst((ATermList) t);
                                                        l_16 = (ATerm) ATgetNext((ATermList) t);
                                                        t = l_16;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm s_9 = t;
                                                            int t_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_26(b_17, w_16, t);
                                                                LocalPopChoice(t_9);
                                                              }
                                                            else
                                                              {
                                                                t = s_9;
                                                                t = k_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = o_26(b_17, w_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_26(b_17, w_16, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        b_17 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_17));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            b_17 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_17));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                b_17 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_17));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    b_17 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_17));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        b_17 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_17), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            b_17 = ATgetArgument(t, 0);
                                                                            d_17 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_17), d_17);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                b_17 = ATgetArgument(t, 0);
                                                                                d_17 = ATgetArgument(t, 1);
                                                                                {
                                                                                  static ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = d_17;
                                                                                    return(t);
                                                                                  }
                                                                                  t = b_17;
                                                                                  t = foldr_2_0(d_2, e_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    b_17 = ATgetArgument(t, 0);
                                                                                    t = b_17;
                                                                                    t = foldr_2_0(f_2, g_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        b_17 = ATgetArgument(t, 0);
                                                                                        d_17 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_a_7, (ATerm) ATinsert(CheckATermList(d_17), b_17));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            b_17 = ATgetArgument(t, 0);
                                                                                            t = b_17;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                k_16 = ATgetFirst((ATermList) t);
                                                                                                l_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = l_16;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm v_9 = t;
                                                                                                    int w_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = p_26(b_17, w_16, t);
                                                                                                        LocalPopChoice(w_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = v_9;
                                                                                                        t = k_16;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = p_26(b_17, w_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_26(b_17, w_16, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_y_9;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    b_17 = ATgetArgument(t, 0);
                                                                                                    d_17 = ATgetArgument(t, 1);
                                                                                                    t = d_17;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        m_16 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_a_10, (ATerm) ATinsert(ATinsert(ATempty, m_16), b_17));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        b_17 = ATgetArgument(t, 0);
                                                                                                        t = b_17;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            b_17 = ATgetArgument(t, 0);
                                                                                                            d_17 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, b_17, d_17, term_b_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                b_17 = ATgetArgument(t, 0);
                                                                                                                d_17 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, b_17, d_17, term_b_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    b_17 = ATgetArgument(t, 0);
                                                                                                                    d_17 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, b_17, (ATerm)ATempty, d_17);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_CondChoice_3))
                                                                                                                      {
                                                                                                                        b_17 = ATgetArgument(t, 0);
                                                                                                                        d_17 = ATgetArgument(t, 1);
                                                                                                                        s_16 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_GuardedLChoice_3, (ATerm)ATmakeAppl(sym_Where_1, b_17), d_17, s_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                                          {
                                                                                                                            b_17 = ATgetArgument(t, 0);
                                                                                                                            d_17 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, d_17, b_17);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimT_3))
                                                                                                                              {
                                                                                                                                b_17 = ATgetArgument(t, 0);
                                                                                                                                d_17 = ATgetArgument(t, 1);
                                                                                                                                s_16 = ATgetArgument(t, 2);
                                                                                                                                t = q_26(b_17, d_17, s_16, w_16, t);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                                  {
                                                                                                                                    b_17 = ATgetArgument(t, 0);
                                                                                                                                    t = r_26(b_17, w_16, t);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                      {
                                                                                                                                        b_17 = ATgetArgument(t, 0);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, b_17, (ATerm) ATempty);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            b_17 = ATgetArgument(t, 0);
                                                                                                                                            d_17 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDef_3, b_17, (ATerm)ATempty, d_17);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                                              {
                                                                                                                                                b_17 = ATgetArgument(t, 0);
                                                                                                                                                d_17 = ATgetArgument(t, 1);
                                                                                                                                                s_16 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, b_17, d_17, s_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    b_17 = ATgetArgument(t, 0);
                                                                                                                                                    d_17 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDef_3, b_17, (ATerm)ATempty, d_17);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                      {
                                                                                                                                                        b_17 = ATgetArgument(t, 0);
                                                                                                                                                        d_17 = ATgetArgument(t, 1);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, b_17, (ATerm)ATempty, d_17);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      {
                                                                                                                                                        if(match_cons(t, sym_Module_2))
                                                                                                                                                          {
                                                                                                                                                            ATerm c_10 = ATgetArgument(t, 0);
                                                                                                                                                            d_17 = ATgetArgument(t, 1);
                                                                                                                                                          }
                                                                                                                                                        else
                                                                                                                                                          _fail(t);
                                                                                                                                                        t = (ATerm) ATmakeAppl(sym_Specification_1, d_17);
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
ATerm repeat_2_0 (ATerm d_82 (ATerm), ATerm e_82 (ATerm), ATerm t)
{
  static ATerm v_26 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_82(t);
        t = v_26(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        t = e_82(t);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm d_83 (ATerm), ATerm t)
{
  static ATerm h_2 (ATerm t)
  {
    t = topdown_1_0(d_83, t);
    return(t);
  }
  t = d_83(t);
  t = SRTS_all(h_2, t);
  return(t);
}
static ATerm y_4 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_fputc(p_40, q_40);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
static ATerm z_4 (ATerm k_25, ATerm l_25, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_write_term_to_stream_text(k_25, l_25);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
static ATerm b_5 (ATerm g_89 (ATerm), ATerm u_174, ATerm q_25, ATerm t)
{
  ATerm a_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_174, term_g_10);
  t = f_5(t);
  a_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_27, q_25);
  t = g_89(t);
  t = fclose_0_0(t);
  t = q_25;
  return(t);
}
static ATerm a_5 (ATerm g_25, ATerm h_25, ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_write_term_to_stream_baf(g_25, h_25);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
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
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          p_15 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(p_15, q_15, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm h_16 = NULL,i_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          o_16 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      p_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(o_16, p_16, t);
  h_16 = t;
  t = term_a_6;
  i_16 = t;
  t = h_16;
  if(match_cons(t, sym_Stream_1))
    {
      n_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_6, h_16);
  t = y_4(i_16, n_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,q_27 = NULL,r_27 = NULL,u_27 = NULL,x_27 = NULL,b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_30 = NULL,g_30 = NULL,x_3 = NULL,w_3 = NULL;
  n_27 = t;
  if(match_cons(t, sym__2))
    {
      c_28 = ATgetArgument(t, 0);
      d_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  b_28 = t;
  t = c_28;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_27 != NULL) && (k_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_2, t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = term_l_10;
        k_27 = t;
      }
  }
  e_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, d_28);
  w_3 = t;
  t = SSLsetAnnotations(w_3, b_28);
  t = n_27;
  if(match_cons(t, sym__2))
    {
      r_27 = ATgetArgument(t, 0);
      u_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, (ATerm) ATmakeAppl(sym__2, not_null(k_27), u_27));
  x_3 = t;
  t = SSLsetAnnotations(x_3, q_27);
  x_27 = t;
  if(match_cons(t, sym__2))
    {
      f_30 = ATgetArgument(t, 0);
      g_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_15 = NULL,l_15 = NULL,m_15 = NULL,n_15 = NULL,o_15 = NULL,a_4 = NULL;
        t = SSLgetAnnotations(x_27);
        b_15 = t;
        t = f_30;
        t = fetch_1_0(k_2, t);
        l_15 = t;
        t = g_30;
        if(match_cons(t, sym__2))
          {
            n_15 = ATgetArgument(t, 0);
            o_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = b_5(l_2, n_15, o_15, t);
        m_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_15, m_15);
        a_4 = t;
        t = SSLsetAnnotations(a_4, b_15);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        {
          ATerm w_15 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,b_4 = NULL;
          t = SSLgetAnnotations(x_27);
          w_15 = t;
          t = g_30;
          if(match_cons(t, sym__2))
            {
              c_16 = ATgetArgument(t, 0);
              d_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = b_5(m_2, c_16, d_16, t);
          b_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, f_30, b_16);
          b_4 = t;
          t = SSLsetAnnotations(b_4, w_15);
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
ATerm apply_strategy_1_0 (ATerm p_106 (ATerm), ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
  n_30 = t;
  t = dtime_0_0(t);
  t = n_30;
  t = p_106(t);
  m_30 = t;
  t = dtime_0_0(t);
  j_30 = t;
  t = m_30;
  if(match_cons(t, sym__2))
    {
      k_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(k_30), (ATerm) ATmakeAppl(sym_Runtime_1, j_30)), l_30);
  return(t);
}
static ATerm c_31 (ATerm w_30, ATerm t)
{
  t = SSL_fclose(w_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_30 = ATgetArgument(t, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_30);
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = c_31(a_31, t);
          }
      }
    }
  else
    {
      t = c_31(a_31, t);
    }
  return(t);
}
static ATerm c_5 (ATerm m_25, ATerm t)
{
  t = SSL_read_term_from_stream(m_25);
  return(t);
}
static ATerm d_5 (ATerm i_39, ATerm j_39, ATerm t)
{
  t = SSL_strcat(i_39, j_39);
  return(t);
}
static ATerm e_5 (ATerm r_40, ATerm s_40, ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_fopen(r_40, s_40);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = SSL_stdin_stream();
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_31 = NULL;
  t = SSL_stdout_stream();
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_stderr_stream();
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_31);
  return(t);
}
static ATerm n_32 (ATerm m_31, ATerm t)
{
  ATerm n_31 = NULL;
  t = SSL_explode_term(m_31);
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_10 = ATgetArgument(t, 1);
        if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
          {
            n_31 = ATgetFirst((ATermList) s_10);
            {
              ATerm t_10 = (ATerm) ATgetNext((ATermList) s_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm q_32 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,y_31 = NULL,p_4 = NULL;
  t = SSLgetAnnotations(s_31);
  v_31 = t;
  t = q_31;
  if(match_cons(t, sym_Path_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_31, r_31);
  p_4 = t;
  t = SSLsetAnnotations(p_4, v_31);
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(t_31, u_31, t);
  return(t);
}
static ATerm r_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,i_32 = NULL,q_4 = NULL;
  t = SSLgetAnnotations(c_32);
  f_32 = t;
  t = SSL_is_string(a_32);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_32, b_32);
  q_4 = t;
  t = SSLsetAnnotations(q_4, f_32);
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(d_32, e_32, t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_32(k_32, t);
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_32(l_32, m_32, k_32, t);
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  t = r_32(l_32, m_32, k_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_32(k_32, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,a_33 = NULL;
  a_33 = t;
  {
    ATerm a_11 = t;
    int b_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, a_33, term_c_11);
        t = f_5(t);
        LocalPopChoice(b_11);
      }
    else
      {
        t = a_11;
        {
          ATerm e_17 = NULL,f_17 = NULL;
          t = term_d_11;
          f_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_d_11, a_33);
          t = d_5(f_17, a_33, t);
          e_17 = t;
          t = SSL_perror(e_17);
          _fail(t);
        }
      }
  }
  u_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(v_32, t);
  t_32 = t;
  t = u_32;
  t = fclose_0_0(t);
  t = t_32;
  return(t);
}
ATerm fetch_1_0 (ATerm z_89 (ATerm), ATerm t)
{
  static ATerm z_33 (ATerm t)
  {
    ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
    w_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_33 = ATgetFirst((ATermList) t);
        y_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_11 = t;
      int f_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_17 = NULL,s_17 = NULL,x_4 = NULL;
          t = SSLgetAnnotations(w_33);
          o_17 = t;
          t = x_33;
          t = z_89(t);
          s_17 = t;
          t = (ATerm) ATinsert(CheckATermList(y_33), s_17);
          x_4 = t;
          t = SSLsetAnnotations(x_4, o_17);
          LocalPopChoice(f_11);
        }
      else
        {
          t = e_11;
          {
            ATerm i_18 = NULL,q_18 = NULL,h_5 = NULL;
            t = SSLgetAnnotations(w_33);
            i_18 = t;
            t = y_33;
            t = z_33(t);
            q_18 = t;
            t = (ATerm) ATinsert(CheckATermList(q_18), x_33);
            h_5 = t;
            t = SSLsetAnnotations(h_5, i_18);
          }
        }
    }
    return(t);
  }
  t = z_33(t);
  return(t);
}
static ATerm i_5 (ATerm u_56, ATerm v_56, ATerm t)
{
  t = SSL_table_get(u_56, v_56);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm y_104 (ATerm), ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
        t = term_i_11;
        g_34 = t;
        t = term_j_11;
        h_34 = t;
        t = term_k_11;
        t = i_5(g_34, h_34, t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_l_11);
        t = geq_0_0(t);
        t = d_34;
        t = y_104(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = d_34;
      }
  }
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm l_34 = NULL;
  l_34 = t;
  if(match_string(t, "-k"))
    {
      t = l_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_34;
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  t = SSL_string_to_int(m_34);
  n_34 = t;
  t = term_m_11;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, n_34);
  t = l_5(o_34, n_34, t);
  t = m_34;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_2, p_2, q_2, t);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm q_34 = NULL;
  q_34 = t;
  if(match_string(t, "-S"))
    {
      t = q_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_34;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm r_34 = NULL,s_34 = NULL;
  t = term_j_11;
  r_34 = t;
  t = term_p_11;
  s_34 = t;
  t = term_q_11;
  t = l_5(r_34, s_34, t);
  t = term_r_11;
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
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  t = SSL_string_to_int(t_34);
  u_34 = t;
  t = term_j_11;
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, u_34);
  t = l_5(v_34, u_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_34);
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
  ATerm w_34 = NULL,x_34 = NULL;
  t = term_y_11;
  w_34 = t;
  t = term_o_5;
  x_34 = t;
  t = term_z_11;
  t = l_5(w_34, x_34, t);
  t = term_c_12;
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_d_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm e_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_2, s_2, t_2, t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = e_12;
      {
        ATerm h_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(u_2, v_2, w_2, t);
            LocalPopChoice(j_12);
          }
        else
          {
            t = h_12;
            t = Option_3_0(x_2, y_2, z_2, t);
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm i_50, ATerm j_50, ATerm t)
{
  ATerm y_34 = NULL;
  t = term_i_11;
  y_34 = t;
  t = SSL_table_put(y_34, i_50, j_50);
  t = (ATerm) ATmakeAppl(sym__3, term_i_11, i_50, j_50);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
      t = term_o_5;
      t = e_0(t);
      d_35 = t;
      t = term_k_12;
      e_35 = t;
      t = term_l_12;
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, d_35);
      t = j_5(e_35, f_35, d_35, t);
      _fail(t);
    }
  else
    {
      ATerm i_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_35 = ATgetFirst((ATermList) t);
          c_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_35;
      t = c_0(t);
      t = term_o_5;
      t = d_0(t);
      i_35 = t;
      t = (ATerm) ATinsert(CheckATermList(c_35), i_35);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "-o"))
    {
      t = k_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_35;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  l_35 = t;
  t = term_m_12;
  m_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, l_35);
  t = l_5(m_35, l_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_35);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
static ATerm j_5 (ATerm d_55, ATerm e_55, ATerm c_55, ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
  {
    ATerm o_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_12 = ATgetArgument(t, 0);
            ATerm v_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, d_55, e_55);
        t = i_5(d_55, e_55, t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = o_12;
        t = (ATerm) ATempty;
      }
  }
  p_35 = t;
  t = (ATerm) ATinsert(CheckATermList(p_35), c_55);
  q_35 = t;
  t = SSL_table_put(d_55, e_55, q_35);
  t = o_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL;
      t = term_o_5;
      t = n_0(t);
      b_36 = t;
      t = term_k_12;
      c_36 = t;
      t = term_l_12;
      d_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_k_12, term_l_12, b_36);
      t = j_5(c_36, d_36, b_36, t);
      _fail(t);
    }
  else
    {
      ATerm h_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_35;
      t = k_0(t);
      t = z_35;
      t = l_0(t);
      h_36 = t;
      t = (ATerm) ATinsert(CheckATermList(a_36), h_36);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  if(match_string(t, "-i"))
    {
      t = j_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_36;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  k_36 = t;
  t = term_x_12;
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_12, k_36);
  t = l_5(l_36, k_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_36);
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
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_5;
  t = whoami_0_0(t);
  m_36 = t;
  t = term_p_5;
  o_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_z_12), m_36);
  p_36 = t;
  t = SSL_printnl(o_36, p_36);
  t = term_t_5;
  n_36 = t;
  t = SSL_exit(n_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  t = term_i_11;
  q_36 = t;
  t = term_a_13;
  r_36 = t;
  t = term_b_13;
  t = i_5(q_36, r_36, t);
  return(t);
}
static ATerm g_5 (ATerm l_43, ATerm m_43, ATerm t)
{
  ATerm c_13 = t;
  int d_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_43, m_43);
      LocalPopChoice(d_13);
    }
  else
    {
      t = c_13;
      t = SSL_addr(l_43, m_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_96 (ATerm), ATerm h_96 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_36;
      t = g_96(t);
    }
  else
    {
      ATerm y_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_36 = ATgetFirst((ATermList) t);
          v_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_36;
      t = foldr_2_0(g_96, h_96, t);
      y_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_36, y_36);
      t = h_96(t);
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
  t = term_p_11;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm n_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(n_19, q_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_37 = NULL,a_19 = NULL,h_19 = NULL;
  t = times_0_0(t);
  h_19 = t;
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      ATerm e_13 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_19;
  t = foldr_2_0(g_3, h_3, t);
  b_37 = t;
  t = SSL_TicksToSeconds(b_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  if(match_cons(t, sym__2))
    {
      n_37 = ATgetArgument(t, 0);
      o_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_37;
        if((n_37 != t))
          {
            _fail(t);
          }
        t = m_37;
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
        {
          ATerm i_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_37, o_37);
              LocalPopChoice(k_13);
            }
          else
            {
              t = i_13;
              t = SSL_gtr(n_37, o_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_104 (ATerm), ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
        t = term_i_11;
        v_37 = t;
        t = term_j_11;
        w_37 = t;
        t = term_k_11;
        t = i_5(v_37, w_37, t);
        u_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_37, term_t_5);
        t = geq_0_0(t);
        t = s_37;
        t = x_104(t);
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        t = s_37;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,b_38 = NULL,c_38 = NULL;
  t = run_time_0_0(t);
  y_37 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  z_37 = t;
  t = term_p_5;
  b_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), y_37), term_n_13), z_37);
  c_38 = t;
  t = SSL_printnl(b_38, c_38);
  t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_13), y_37), term_n_13), z_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm d_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_11;
  d_38 = t;
  t = SSL_exit(d_38);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  o_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = o_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          n_38 = ATgetArgument(t, 0);
          {
            ATerm n_20 = NULL,r_5 = NULL;
            t = SSLgetAnnotations(o_38);
            n_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_38);
            r_5 = t;
            t = SSLsetAnnotations(r_5, n_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = o_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm n_107 (ATerm), ATerm t)
{
  ATerm p_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_38 = NULL,h_38 = NULL;
      t = term_i_11;
      g_38 = t;
      t = term_s_13;
      h_38 = t;
      t = term_t_13;
      t = i_5(g_38, h_38, t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = p_13;
      t = fetch_1_0(l_3, t);
    }
  t = n_107(t);
  return(t);
}
ATerm map_1_0 (ATerm p_89 (ATerm), ATerm t)
{
  static ATerm e_39 (ATerm t)
  {
    ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL;
    b_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = b_39;
      }
    else
      {
        ATerm w_20 = NULL,z_20 = NULL,a_21 = NULL,w_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_39 = ATgetFirst((ATermList) t);
            d_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_39);
        w_20 = t;
        t = c_39;
        t = p_89(t);
        z_20 = t;
        t = d_39;
        t = e_39(t);
        a_21 = t;
        t = (ATerm) ATinsert(CheckATermList(a_21), z_20);
        w_5 = t;
        t = SSLsetAnnotations(w_5, w_20);
      }
    return(t);
  }
  t = e_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_39 = NULL,k_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_39 = ATgetFirst((ATermList) t);
      k_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm o_39 = NULL,p_39 = NULL;
        static ATerm n_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(o_39)), not_null(p_39));
          return(t);
        }
        t = k_39;
        t = i_0(t);
        if(((o_39 != NULL) && (o_39 != t)))
          _fail(t);
        else
          o_39 = t;
        t = h_39;
        t = g_0(t);
        if(((p_39 != NULL) && (p_39 != t)))
          _fail(t);
        else
          p_39 = t;
        t = k_39;
        t = reverse_acc_2_0(g_0, n_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm o_3 (ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,b_6 = NULL;
  x_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_39);
  v_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_39);
  b_6 = t;
  t = SSLsetAnnotations(b_6, v_39);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm z_39 = NULL;
  z_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_39), term_u_13);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = NULL,u_39 = NULL;
      t = term_i_11;
      t_39 = t;
      t = term_a_13;
      u_39 = t;
      t = term_b_13;
      t = i_5(t_39, u_39, t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      t = fetch_1_0(o_3, t);
    }
  t = term_x_13;
  t = echo_0_0(t);
  t = term_k_12;
  r_39 = t;
  t = term_l_12;
  s_39 = t;
  t = term_z_13;
  t = i_5(r_39, s_39, t);
  t = reverse_acc_2_0(_id, t_3, t);
  t = map_1_0(u_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL;
  b_40 = t;
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm e_14 = ATgetFirst((ATermList) t);
                ATerm h_14 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_40;
          }
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        t = (ATerm) ATinsert(ATempty, b_40);
      }
  }
  c_40 = t;
  t = term_l_10;
  d_40 = t;
  t = SSL_printnl(d_40, c_40);
  t = b_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL;
  t = term_i_11;
  h_40 = t;
  t = term_a_13;
  i_40 = t;
  t = term_b_13;
  t = i_5(h_40, i_40, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL;
  t = term_j_14;
  j_40 = t;
  t = term_o_5;
  k_40 = t;
  t = term_l_14;
  t = l_5(j_40, k_40, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL,o_40 = NULL;
  t = term_j_14;
  n_40 = t;
  t = term_o_5;
  o_40 = t;
  t = term_l_14;
  t = l_5(n_40, o_40, t);
  t = term_p_14;
  l_40 = t;
  t = term_o_5;
  m_40 = t;
  t = term_u_14;
  t = l_5(l_40, m_40, t);
  t = term_a_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_c_15;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm g_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(v_3, y_3, z_3, t);
      LocalPopChoice(h_15);
    }
  else
    {
      t = g_15;
      t = Option_3_0(c_4, d_4, e_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm f_61 (ATerm), ATerm g_61 (ATerm), ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,a_41 = NULL,b_41 = NULL,h_6 = NULL;
  b_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_40 = ATgetFirst((ATermList) t);
      x_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_41);
  v_40 = t;
  t = w_40;
  t = f_61(t);
  y_40 = t;
  t = x_40;
  t = g_61(t);
  a_41 = t;
  t = (ATerm) ATinsert(CheckATermList(a_41), y_40);
  h_6 = t;
  t = SSLsetAnnotations(h_6, v_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm q_109 (ATerm), ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,l_41 = NULL,m_41 = NULL,k_6 = NULL;
  g_41 = t;
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_r_15;
        t = q_109(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
      }
  }
  t = g_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_41 = ATgetFirst((ATermList) t);
      j_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_41);
  h_41 = t;
  t = term_a_13;
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_13, i_41);
  t = l_5(m_41, i_41, t);
  t = j_41;
  {
    static ATerm w_41 (ATerm t)
    {
      ATerm s_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_41 = NULL;
              p_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = p_41;
              LocalPopChoice(z_15);
            }
          else
            {
              t = v_15;
              t = q_109(t);
              t = Cons_2_0(_id, w_41, t);
            }
          LocalPopChoice(u_15);
        }
      else
        {
          t = s_15;
          {
            ATerm s_41 = NULL,t_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                s_41 = ATgetFirst((ATermList) t);
                t_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(t_41), (ATerm) ATmakeAppl(sym_Undefined_1, s_41));
          }
        }
      return(t);
    }
    t = w_41(t);
  }
  l_41 = t;
  t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Program_1, i_41));
  k_6 = t;
  t = SSLsetAnnotations(k_6, h_41);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm i_42 = NULL;
  i_42 = t;
  if(match_string(t, "--help"))
    {
      t = i_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = i_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = i_42;
        }
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_s_13;
  j_42 = t;
  t = term_o_5;
  k_42 = t;
  t = term_a_16;
  t = l_5(j_42, k_42, t);
  t = term_e_16;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_q_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm p_109 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  d_42 = t;
  t = term_k_12;
  f_42 = t;
  t = term_l_12;
  g_42 = t;
  t = (ATerm) ATempty;
  h_42 = t;
  t = SSL_table_put(f_42, g_42, h_42);
  t = d_42;
  {
    static ATerm f_4 (ATerm t)
    {
      ATerm r_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_109(t);
          LocalPopChoice(t_16);
        }
      else
        {
          t = r_16;
          {
            ATerm u_16 = t;
            int v_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(g_4, h_4, i_4, t);
                LocalPopChoice(v_16);
              }
            else
              {
                t = u_16;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(f_4, t);
  }
  {
    ATerm x_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_42 = NULL;
        v_42 = t;
        {
          ATerm z_16 = t;
          int a_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_21 = NULL;
              t = v_42;
              {
                ATerm c_17 = t;
                int g_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_21 = NULL,j_21 = NULL;
                    t = term_i_11;
                    i_21 = t;
                    t = term_s_13;
                    j_21 = t;
                    t = term_t_13;
                    t = i_5(i_21, j_21, t);
                    LocalPopChoice(g_17);
                  }
                else
                  {
                    t = c_17;
                    t = fetch_1_0(j_4, t);
                  }
              }
              t = v_42;
              t = default_system_usage_0_0(t);
              t = term_p_11;
              h_21 = t;
              t = SSL_exit(h_21);
              LocalPopChoice(a_17);
            }
          else
            {
              t = z_16;
              {
                ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
                t = term_i_11;
                o_21 = t;
                t = term_j_14;
                p_21 = t;
                t = term_h_17;
                t = i_5(o_21, p_21, t);
                t = v_42;
                t = default_system_about_0_0(t);
                t = term_p_11;
                n_21 = t;
                t = SSL_exit(n_21);
              }
            }
        }
        LocalPopChoice(y_16);
      }
    else
      {
        t = x_16;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
              static ATerm l_4 (ATerm t)
              {
                ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,m_6 = NULL;
                b_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    a_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(b_43);
                z_42 = t;
                t = a_43;
                if(((b_42 != NULL) && (b_42 != t)))
                  _fail(t);
                else
                  b_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, a_43);
                m_6 = t;
                t = SSLsetAnnotations(m_6, z_42);
                return(t);
              }
              t = fetch_1_0(l_4, t);
              t = term_p_5;
              x_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), term_k_17);
              y_42 = t;
              t = SSL_printnl(x_42, y_42);
              t = (ATerm) ATmakeAppl(sym__2, term_p_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), term_k_17));
              t = default_system_usage_0_0(t);
              t = term_t_5;
              w_42 = t;
              t = SSL_exit(w_42);
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
            }
        }
      }
  }
  c_42 = t;
  t = term_k_12;
  e_42 = t;
  t = SSL_table_destroy(e_42);
  t = c_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm p_107 (ATerm), ATerm q_107 (ATerm), ATerm r_107 (ATerm), ATerm s_107 (ATerm), ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
  t = parse_options_1_0(p_107, t);
  g_43 = t;
  t = term_m_17;
  j_43 = t;
  t = SSL_table_create(j_43);
  t = term_m_17;
  h_43 = t;
  t = term_n_17;
  i_43 = t;
  t = SSL_table_put(h_43, i_43, g_43);
  t = g_43;
  t = r_107(t);
  {
    ATerm p_17 = t;
    int q_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(q_107, t);
        LocalPopChoice(q_17);
      }
    else
      {
        t = p_17;
        {
          ATerm u_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = s_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_17);
            }
          else
            {
              t = u_17;
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
  ATerm k_43 = NULL,n_43 = NULL;
  t = term_w_17;
  k_43 = t;
  t = term_o_5;
  n_43 = t;
  t = term_x_17;
  t = l_5(k_43, n_43, t);
  t = term_y_17;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_z_17;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
  o_43 = t;
  t = term_i_11;
  s_43 = t;
  t = term_a_13;
  t_43 = t;
  t = term_b_13;
  t = i_5(s_43, t_43, t);
  p_43 = t;
  t = term_p_5;
  q_43 = t;
  t = (ATerm) ATinsert(ATempty, p_43);
  r_43 = t;
  t = SSL_printnl(q_43, r_43);
  t = o_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm y_106 (ATerm), ATerm z_106 (ATerm), ATerm a_107 (ATerm), ATerm t)
{
  static ATerm m_4 (ATerm t)
  {
    ATerm a_18 = t;
    int b_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_106(t);
        LocalPopChoice(b_18);
      }
    else
      {
        t = a_18;
        {
          ATerm c_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(e_18);
            }
          else
            {
              t = c_18;
              {
                ATerm h_18 = t;
                int j_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(j_18);
                  }
                else
                  {
                    t = h_18;
                    {
                      ATerm k_18 = t;
                      int l_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(t_4, u_4, v_4, t);
                          LocalPopChoice(l_18);
                        }
                      else
                        {
                          t = k_18;
                          {
                            ATerm m_18 = t;
                            int p_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(p_18);
                              }
                            else
                              {
                                t = m_18;
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
  static ATerm r_4 (ATerm t)
  {
    ATerm u_43 = NULL,v_43 = NULL,w_43 = NULL;
    v_43 = t;
    {
      ATerm r_18 = t;
      int s_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm k_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_43 != NULL) && (u_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_5, t);
          LocalPopChoice(s_18);
        }
      else
        {
          t = r_18;
          t = term_t_18;
          u_43 = t;
        }
    }
    t = not_null(u_43);
    t = ReadFromFile_0_0(t);
    w_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_43, w_43);
    t = apply_strategy_1_0(y_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(m_4, a_107, n_4, r_4, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,o_6 = NULL;
  e_44 = t;
  if(match_cons(t, sym__2))
    {
      b_44 = ATgetArgument(t, 0);
      c_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_44);
  a_44 = t;
  t = c_44;
  {
    ATerm u_18 = t;
    int v_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_44 = NULL;
        t = SSL_explode_term(c_44);
        if(match_cons(t, sym__2))
          {
            ATerm y_18 = ATgetArgument(t, 0);
            ATerm z_18 = ATgetArgument(t, 1);
            if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
              {
                f_44 = ATgetFirst((ATermList) z_18);
                {
                  ATerm b_19 = (ATerm) ATgetNext((ATermList) z_18);
                  if(((ATgetType(b_19) != AT_LIST) || !(ATisEmpty(b_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = f_44;
        LocalPopChoice(v_18);
      }
    else
      {
        t = u_18;
      }
  }
  t = topdown_1_0(n_5, t);
  d_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_44, d_44);
  o_6 = t;
  t = SSLsetAnnotations(o_6, a_44);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm c_19 = t;
    int d_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(d_19);
      }
    else
      {
        t = c_19;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(m_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
