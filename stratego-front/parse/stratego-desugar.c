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
Symbol sym_Anno_2;
Symbol sym_Undefined_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
ATerm term_d_19;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_e_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_j_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_a_16;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_x_14;
ATerm term_w_14;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_k_12;
ATerm term_f_12;
ATerm term_x_11;
ATerm term_m_11;
ATerm term_g_11;
ATerm term_c_11;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_f_9;
ATerm term_d_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_g_6;
ATerm term_e_6;
ATerm term_a_6;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATempty);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_d_7, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_7);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_7);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, (ATerm) ATempty);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_u_5);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_d_13);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_a_16, term_u_5);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym__2, term_f_16, term_u_5);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_w_14, term_u_5);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_u_5);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm l_96 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t);
static ATerm n_25 (ATerm r_13, ATerm s_13, ATerm t);
static ATerm p_25 (ATerm f_14, ATerm h_14, ATerm t);
static ATerm q_25 (ATerm v_14, ATerm z_14, ATerm b_15, ATerm c_15, ATerm t);
static ATerm r_25 (ATerm i_15, ATerm j_15, ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm m_1 (ATerm t);
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
ATerm repeat_1_0 (ATerm e_79 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm c_80 (ATerm), ATerm t);
static ATerm f_5 (ATerm j_44, ATerm k_44, ATerm t);
static ATerm g_5 (ATerm b_25, ATerm c_25, ATerm t);
static ATerm i_5 (ATerm f_86 (ATerm), ATerm d_170, ATerm f_25, ATerm t);
static ATerm h_5 (ATerm x_24, ATerm y_24, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm v_102 (ATerm), ATerm t);
static ATerm j_30 (ATerm d_30, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm j_5 (ATerm d_25, ATerm t);
static ATerm k_5 (ATerm l_44, ATerm m_44, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_31 (ATerm t_30, ATerm t);
static ATerm x_31 (ATerm x_30, ATerm y_30, ATerm z_30, ATerm t);
static ATerm y_31 (ATerm h_31, ATerm i_31, ATerm j_31, ATerm t);
static ATerm l_5 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm t);
static ATerm e_5 (ATerm q_38, ATerm r_38, ATerm t);
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm r_5 (ATerm m_48, ATerm n_48, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm p_5 (ATerm k_53, ATerm l_53, ATerm j_53, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_5 (ATerm j_41, ATerm k_41, ATerm t);
ATerm foldr_2_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm p_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm need_help_1_0 (ATerm t_103 (ATerm), ATerm t);
ATerm map_1_0 (ATerm o_86 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_5 (ATerm b_55, ATerm c_55, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm w_105 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm parse_options_1_0 (ATerm v_105 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm iowrap_3_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t);
static ATerm q_5 (ATerm t);
static ATerm t_5 (ATerm t);
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
  t = term_u_5;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_v_5;
  o_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_5), f_0), term_w_5);
  p_0 = t;
  t = SSL_printnl(o_0, p_0);
  t = term_a_6;
  j_0 = t;
  t = SSL_exit(j_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm l_96 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm b_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_96(t);
        LocalPopChoice(d_6);
      }
    else
      {
        t = b_6;
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
      t = (ATerm) ATinsert(CheckATermList(z_1), term_e_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_1), term_g_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_j_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_1), term_k_6);
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm v_8 = NULL,y_8 = NULL,b_9 = NULL,c_9 = NULL;
  y_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      b_9 = ATgetArgument(t, 0);
      {
        ATerm e_9 = NULL,s_1 = NULL,t_1 = NULL,n_1 = NULL;
        t = SSL_explode_string(b_9);
        t = unquote_chars_2_0(a_0, h_0, t);
        n_1 = t;
        t = SSL_implode_string(n_1);
        t_1 = t;
        t = SSL_explode_string(t_1);
        t = unescape_chars_1_0(m_0, t);
        s_1 = t;
        t = SSL_implode_string(s_1);
        e_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, e_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          b_9 = ATgetArgument(t, 0);
          {
            ATerm h_2 = NULL;
            t = SSL_string_to_real(b_9);
            h_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, h_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              b_9 = ATgetArgument(t, 0);
              {
                ATerm n_2 = NULL;
                t = SSL_string_to_int(b_9);
                n_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, n_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  b_9 = ATgetArgument(t, 0);
                  c_9 = ATgetArgument(t, 1);
                  v_8 = ATgetArgument(t, 2);
                  t = SSL_is_string(v_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_9, c_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_8), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      b_9 = ATgetArgument(t, 0);
                      {
                        ATerm n_3 = NULL,q_3 = NULL,s_3 = NULL,b_1 = NULL;
                        t = SSLgetAnnotations(y_8);
                        n_3 = t;
                        t = SSL_explode_string(b_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm l_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                              _fail(t);
                            q_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(q_3);
                        s_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_3);
                        b_1 = t;
                        t = SSLsetAnnotations(b_1, n_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          b_9 = ATgetArgument(t, 0);
                          c_9 = ATgetArgument(t, 1);
                          v_8 = ATgetArgument(t, 2);
                          {
                            ATerm o_4 = NULL,t_4 = NULL,u_4 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(y_8);
                            o_4 = t;
                            t = SSL_explode_string(b_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm m_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                                  _fail(t);
                                t_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(t_4);
                            u_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, u_4, c_9, v_8);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, o_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              b_9 = ATgetArgument(t, 0);
                              c_9 = ATgetArgument(t, 1);
                              v_8 = ATgetArgument(t, 2);
                              {
                                ATerm z_5 = NULL,f_6 = NULL,i_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(y_8);
                                z_5 = t;
                                t = SSL_explode_string(b_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm o_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 39)))
                                      _fail(t);
                                    f_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(f_6);
                                i_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, i_6, c_9, v_8);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, z_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  b_9 = ATgetArgument(t, 0);
                                  c_9 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_7 = NULL,z_7 = NULL,h_8 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(y_8);
                                    q_7 = t;
                                    t = SSL_explode_string(b_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm p_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                          _fail(t);
                                        z_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(z_7);
                                    h_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, h_8, c_9);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, q_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      b_9 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_8 = NULL,z_8 = NULL,a_9 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(y_8);
                                        w_8 = t;
                                        t = SSL_explode_string(b_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm q_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                              _fail(t);
                                            z_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(z_8);
                                        a_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, a_9);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, w_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          b_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm w_9 = NULL,e_10 = NULL,h_10 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(y_8);
                                            w_9 = t;
                                            t = SSL_explode_string(b_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm r_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                                  _fail(t);
                                                e_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(e_10);
                                            h_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, h_10);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, w_9);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              b_9 = ATgetArgument(t, 0);
                                              c_9 = ATgetArgument(t, 1);
                                              {
                                                ATerm s_10 = NULL,b_11 = NULL,e_11 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(y_8);
                                                s_10 = t;
                                                t = SSL_explode_string(b_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm s_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(s_6) != AT_INT) || (ATgetInt((ATermInt) s_6) != 39)))
                                                      _fail(t);
                                                    b_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(b_11);
                                                e_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, e_11, c_9);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, s_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm v_11 = NULL,b_12 = NULL,g_12 = NULL,o_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  b_9 = ATgetArgument(t, 0);
                                                  c_9 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(y_8);
                                              v_11 = t;
                                              t = SSL_explode_string(b_9);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm t_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                                    _fail(t);
                                                  b_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(b_12);
                                              g_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, g_12, c_9);
                                              o_1 = t;
                                              t = SSLsetAnnotations(o_1, v_11);
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
ATerm at_last_1_0 (ATerm p_87 (ATerm), ATerm t)
{
  static ATerm q_11 (ATerm t)
  {
    ATerm l_11 = NULL,n_11 = NULL,o_11 = NULL;
    l_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_11 = ATgetFirst((ATermList) t);
        o_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(l_11);
          u_12 = t;
          t = o_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
          i_3 = t;
          t = SSLsetAnnotations(i_3, u_12);
          t = p_87(t);
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
          {
            ATerm e_13 = NULL,j_13 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(l_11);
            e_13 = t;
            t = o_11;
            t = q_11(t);
            j_13 = t;
            t = (ATerm) ATinsert(CheckATermList(j_13), n_11);
            j_3 = t;
            t = SSLsetAnnotations(j_3, e_13);
          }
        }
    }
    return(t);
  }
  t = q_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm z_11 = NULL,a_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_11 = ATgetFirst((ATermList) t);
      a_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = z_11;
    }
  else
    {
      t = a_12;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm l_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_6 = ATgetFirst((ATermList) t);
      l_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm x_95 (ATerm), ATerm y_95 (ATerm), ATerm t)
{
  ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
  h_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_12 = ATgetFirst((ATermList) t);
      {
        ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_12;
  t = x_95(t);
  t = h_12;
  t = last_0_0(t);
  t = y_95(t);
  t = h_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      i_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_12;
  t = at_last_1_0(r_0, t);
  return(t);
}
static ATerm n_25 (ATerm r_13, ATerm s_13, ATerm t)
{
  t = r_13;
  {
    ATerm z_6 = t;
    if((PushChoice() == 0))
      {
        ATerm y_13 = NULL,z_13 = NULL,b_14 = NULL,e_14 = NULL,m_3 = NULL;
        e_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_13 = ATgetFirst((ATermList) t);
            b_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_14);
        y_13 = t;
        t = b_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_14), z_13);
        m_3 = t;
        t = SSLsetAnnotations(m_3, y_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, r_13);
  return(t);
}
static ATerm p_25 (ATerm f_14, ATerm h_14, ATerm t)
{
  t = f_14;
  {
    ATerm b_7 = t;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL,k_14 = NULL,n_14 = NULL,u_14 = NULL,o_3 = NULL;
        u_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_14 = ATgetFirst((ATermList) t);
            n_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_14);
        j_14 = t;
        t = n_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_14), k_14);
        o_3 = t;
        t = SSLsetAnnotations(o_3, j_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, f_14);
  return(t);
}
static ATerm q_25 (ATerm v_14, ATerm z_14, ATerm b_15, ATerm c_15, ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL;
  t = SSL_explode_string(v_14);
  t = unquote_chars_2_0(s_0, u_0, t);
  h_15 = t;
  t = SSL_implode_string(h_15);
  g_15 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, g_15, z_14, b_15);
  return(t);
}
static ATerm r_25 (ATerm i_15, ATerm j_15, ATerm t)
{
  ATerm l_15 = NULL,m_15 = NULL;
  t = SSL_explode_string(i_15);
  t = unquote_chars_2_0(v_0, w_0, t);
  m_15 = t;
  t = SSL_implode_string(m_15);
  l_15 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, l_15, (ATerm) ATempty);
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
  t = term_e_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm s_16 = NULL,t_16 = NULL,u_13 = NULL;
  s_16 = t;
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            t_16 = ATgetFirst((ATermList) g_7);
            {
              ATerm h_7 = (ATerm) ATgetNext((ATermList) g_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(s_16);
  if(match_cons(t, sym__2))
    {
      ATerm i_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_7 = ATgetArgument(t, 1);
        if(((ATgetType(j_7) == AT_LIST) && !(ATisEmpty(j_7))))
          {
            ATerm k_7 = ATgetFirst((ATermList) j_7);
            ATerm l_7 = (ATerm) ATgetNext((ATermList) j_7);
            if(((ATgetType(l_7) == AT_LIST) && !(ATisEmpty(l_7))))
              {
                u_13 = ATgetFirst((ATermList) l_7);
                {
                  ATerm m_7 = (ATerm) ATgetNext((ATermList) l_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, u_13), t_16));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,p_14 = NULL;
  k_17 = t;
  t = SSL_explode_term(k_17);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_7 = ATgetArgument(t, 1);
        if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
          {
            l_17 = ATgetFirst((ATermList) r_7);
            {
              ATerm s_7 = (ATerm) ATgetNext((ATermList) r_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_17);
  if(match_cons(t, sym__2))
    {
      ATerm t_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_7 = ATgetArgument(t, 1);
        if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
          {
            ATerm v_7 = ATgetFirst((ATermList) u_7);
            ATerm w_7 = (ATerm) ATgetNext((ATermList) u_7);
            if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
              {
                p_14 = ATgetFirst((ATermList) w_7);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, p_14), l_17));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL,r_14 = NULL;
  w_17 = t;
  t = SSL_explode_term(w_17);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_8 = ATgetArgument(t, 1);
        if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
          {
            x_17 = ATgetFirst((ATermList) a_8);
            {
              ATerm b_8 = (ATerm) ATgetNext((ATermList) a_8);
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
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            ATerm e_8 = ATgetFirst((ATermList) d_8);
            ATerm f_8 = (ATerm) ATgetNext((ATermList) d_8);
            if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
              {
                r_14 = ATgetFirst((ATermList) f_8);
                {
                  ATerm g_8 = (ATerm) ATgetNext((ATermList) f_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, r_14), x_17));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm g_18 = NULL,j_18 = NULL,t_14 = NULL;
  g_18 = t;
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      ATerm i_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            j_18 = ATgetFirst((ATermList) j_8);
            {
              ATerm k_8 = (ATerm) ATgetNext((ATermList) j_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(g_18);
  if(match_cons(t, sym__2))
    {
      ATerm l_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) l_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm m_8 = ATgetArgument(t, 1);
        if(((ATgetType(m_8) == AT_LIST) && !(ATisEmpty(m_8))))
          {
            ATerm n_8 = ATgetFirst((ATermList) m_8);
            ATerm o_8 = (ATerm) ATgetNext((ATermList) m_8);
            if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
              {
                t_14 = ATgetFirst((ATermList) o_8);
                {
                  ATerm p_8 = (ATerm) ATgetNext((ATermList) o_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, t_14), j_18));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm f_19 = NULL,g_19 = NULL;
  if(match_cons(t, sym__2))
    {
      f_19 = ATgetArgument(t, 0);
      g_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, g_19), f_19));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      k_19 = ATgetArgument(t, 0);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, l_19), k_19));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm b_20 = NULL,c_20 = NULL;
  if(match_cons(t, sym__2))
    {
      b_20 = ATgetArgument(t, 0);
      c_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, c_20), b_20));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, j_20), i_20));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_15 = NULL,o_15 = NULL,w_15 = NULL,x_15 = NULL,b_16 = NULL,h_16 = NULL,i_16 = NULL,l_16 = NULL;
  h_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      i_16 = ATgetArgument(t, 0);
      l_16 = ATgetArgument(t, 1);
      {
        ATerm o_16 = NULL;
        t = l_16;
        t = foldr_2_0(x_0, z_0, t);
        o_16 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, i_16, o_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          i_16 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, i_16, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              i_16 = ATgetArgument(t, 0);
              {
                ATerm d_14 = NULL;
                t = i_16;
                {
                  ATerm t_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_8;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_d_9;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_k_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_j_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_f_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = t_8;
                      {
                        ATerm l_14 = NULL;
                        t = SSL_explode_string(i_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_9) != AT_INT) || (ATgetInt((ATermInt) g_9) != 39)))
                              _fail(t);
                            {
                              ATerm h_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
                                {
                                  l_14 = ATgetFirst((ATermList) h_9);
                                  {
                                    ATerm i_9 = (ATerm) ATgetNext((ATermList) h_9);
                                    if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
                                      {
                                        ATerm j_9 = ATgetFirst((ATermList) i_9);
                                        if(((ATgetType(j_9) != AT_INT) || (ATgetInt((ATermInt) j_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm k_9 = (ATerm) ATgetNext((ATermList) i_9);
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
                        t = l_14;
                      }
                    }
                }
                d_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_14);
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  i_16 = ATgetArgument(t, 0);
                  {
                    ATerm i_17 = NULL;
                    t = i_16;
                    t = foldr_2_0(a_1, m_1, t);
                    i_17 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_9, (ATerm) ATinsert(ATempty, i_17));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      i_16 = ATgetArgument(t, 0);
                      l_16 = ATgetArgument(t, 1);
                      {
                        static ATerm p_1 (ATerm t)
                        {
                          t = l_16;
                          return(t);
                        }
                        t = i_16;
                        t = foldr_2_0(p_1, q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          i_16 = ATgetArgument(t, 0);
                          t = i_16;
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
                                  i_16 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_9 = ATgetArgument(t, 1);
                                  }
                                  b_16 = ATgetArgument(t, 2);
                                  n_15 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, i_16, b_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_15), (ATerm) ATempty));
                            }
                          else
                            {
                              t = m_9;
                              {
                                ATerm p_9 = t;
                                int q_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Con3_3))
                                      {
                                        i_16 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_9 = ATgetArgument(t, 1);
                                        }
                                        b_16 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, i_16, b_16, term_u_9);
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        i_16 = ATgetArgument(t, 0);
                                        l_16 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, i_16, l_16, term_u_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            i_16 = ATgetArgument(t, 0);
                                            l_16 = ATgetArgument(t, 1);
                                            {
                                              static ATerm v_1 (ATerm t)
                                              {
                                                t = l_16;
                                                return(t);
                                              }
                                              t = i_16;
                                              t = foldr_2_0(v_1, a_2, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                i_16 = ATgetArgument(t, 0);
                                                t = i_16;
                                                t = foldr_2_0(b_2, c_2, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    i_16 = ATgetArgument(t, 0);
                                                    t = i_16;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        o_15 = ATgetFirst((ATermList) t);
                                                        w_15 = (ATerm) ATgetNext((ATermList) t);
                                                        t = w_15;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm v_9 = t;
                                                            int x_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = n_25(i_16, h_16, t);
                                                                LocalPopChoice(x_9);
                                                              }
                                                            else
                                                              {
                                                                t = v_9;
                                                                t = o_15;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = n_25(i_16, h_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = n_25(i_16, h_16, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        i_16 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, i_16));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            i_16 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, i_16));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                i_16 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, i_16));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    i_16 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, i_16));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        i_16 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_16), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            i_16 = ATgetArgument(t, 0);
                                                                            l_16 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_16), l_16);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                i_16 = ATgetArgument(t, 0);
                                                                                l_16 = ATgetArgument(t, 1);
                                                                                {
                                                                                  static ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = l_16;
                                                                                    return(t);
                                                                                  }
                                                                                  t = i_16;
                                                                                  t = foldr_2_0(d_2, e_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    i_16 = ATgetArgument(t, 0);
                                                                                    t = i_16;
                                                                                    t = foldr_2_0(f_2, g_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        i_16 = ATgetArgument(t, 0);
                                                                                        l_16 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, (ATerm) ATinsert(CheckATermList(l_16), i_16));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            i_16 = ATgetArgument(t, 0);
                                                                                            t = i_16;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                o_15 = ATgetFirst((ATermList) t);
                                                                                                w_15 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = w_15;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm y_9 = t;
                                                                                                    int z_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = p_25(i_16, h_16, t);
                                                                                                        LocalPopChoice(z_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = y_9;
                                                                                                        t = o_15;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = p_25(i_16, h_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_25(i_16, h_16, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_a_10;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    i_16 = ATgetArgument(t, 0);
                                                                                                    l_16 = ATgetArgument(t, 1);
                                                                                                    t = l_16;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        x_15 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_c_10, (ATerm) ATinsert(ATinsert(ATempty, x_15), i_16));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        i_16 = ATgetArgument(t, 0);
                                                                                                        t = i_16;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            i_16 = ATgetArgument(t, 0);
                                                                                                            l_16 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, i_16, l_16, term_d_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                i_16 = ATgetArgument(t, 0);
                                                                                                                l_16 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, i_16, l_16, term_d_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    i_16 = ATgetArgument(t, 0);
                                                                                                                    l_16 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, i_16, (ATerm)ATempty, l_16);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        i_16 = ATgetArgument(t, 0);
                                                                                                                        l_16 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, l_16, i_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimT_3))
                                                                                                                          {
                                                                                                                            i_16 = ATgetArgument(t, 0);
                                                                                                                            l_16 = ATgetArgument(t, 1);
                                                                                                                            b_16 = ATgetArgument(t, 2);
                                                                                                                            t = q_25(i_16, l_16, b_16, h_16, t);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                              {
                                                                                                                                i_16 = ATgetArgument(t, 0);
                                                                                                                                t = r_25(i_16, h_16, t);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                  {
                                                                                                                                    i_16 = ATgetArgument(t, 0);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, i_16, (ATerm) ATempty);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                      {
                                                                                                                                        i_16 = ATgetArgument(t, 0);
                                                                                                                                        l_16 = ATgetArgument(t, 1);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, i_16, (ATerm)ATempty, l_16);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                                          {
                                                                                                                                            i_16 = ATgetArgument(t, 0);
                                                                                                                                            l_16 = ATgetArgument(t, 1);
                                                                                                                                            b_16 = ATgetArgument(t, 2);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, i_16, l_16, b_16);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                i_16 = ATgetArgument(t, 0);
                                                                                                                                                l_16 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, i_16, (ATerm)ATempty, l_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    i_16 = ATgetArgument(t, 0);
                                                                                                                                                    l_16 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, i_16, (ATerm)ATempty, l_16);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm f_10 = ATgetArgument(t, 0);
                                                                                                                                                        l_16 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, l_16);
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
ATerm repeat_1_0 (ATerm e_79 (ATerm), ATerm t)
{
  static ATerm y_25 (ATerm t)
  {
    ATerm g_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_79(t);
        t = y_25(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = g_10;
      }
    return(t);
  }
  t = y_25(t);
  return(t);
}
ATerm topdown_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  static ATerm i_2 (ATerm t)
  {
    t = topdown_1_0(c_80, t);
    return(t);
  }
  t = c_80(t);
  t = SRTS_all(i_2, t);
  return(t);
}
static ATerm f_5 (ATerm j_44, ATerm k_44, ATerm t)
{
  ATerm z_25 = NULL;
  t = SSL_fputc(j_44, k_44);
  z_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_25);
  return(t);
}
static ATerm g_5 (ATerm b_25, ATerm c_25, ATerm t)
{
  ATerm c_26 = NULL;
  t = SSL_write_term_to_stream_text(b_25, c_25);
  c_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_26);
  return(t);
}
static ATerm i_5 (ATerm f_86 (ATerm), ATerm d_170, ATerm f_25, ATerm t)
{
  ATerm f_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, d_170, term_j_10);
  t = l_5(t);
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_26, f_25);
  t = f_86(t);
  t = fclose_0_0(t);
  t = f_25;
  return(t);
}
static ATerm h_5 (ATerm x_24, ATerm y_24, ATerm t)
{
  ATerm i_26 = NULL;
  t = SSL_write_term_to_stream_baf(x_24, y_24);
  i_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_26);
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
  ATerm v_15 = NULL,y_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          v_15 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      y_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(v_15, y_15, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm q_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          w_16 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(w_16, x_16, t);
  q_16 = t;
  t = term_j_6;
  u_16 = t;
  t = q_16;
  if(match_cons(t, sym_Stream_1))
    {
      v_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_j_6, q_16);
  t = f_5(u_16, v_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm s_26 = NULL,v_26 = NULL,y_26 = NULL,b_27 = NULL,d_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,n_27 = NULL,r_27 = NULL,m_29 = NULL,n_29 = NULL,v_3 = NULL,u_3 = NULL;
  v_26 = t;
  if(match_cons(t, sym__2))
    {
      j_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  i_27 = t;
  t = j_27;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((s_26 != NULL) && (s_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                s_26 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_2, t);
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = term_o_10;
        s_26 = t;
      }
  }
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_27, n_27);
  u_3 = t;
  t = SSLsetAnnotations(u_3, i_27);
  t = v_26;
  if(match_cons(t, sym__2))
    {
      b_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_26);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_27, (ATerm) ATmakeAppl(sym__2, not_null(s_26), d_27));
  v_3 = t;
  t = SSLsetAnnotations(v_3, y_26);
  h_27 = t;
  if(match_cons(t, sym__2))
    {
      m_29 = ATgetArgument(t, 0);
      n_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,w_3 = NULL;
        t = SSLgetAnnotations(h_27);
        a_15 = t;
        t = m_29;
        t = fetch_1_0(k_2, t);
        r_15 = t;
        t = n_29;
        if(match_cons(t, sym__2))
          {
            t_15 = ATgetArgument(t, 0);
            u_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = i_5(l_2, t_15, u_15, t);
        s_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
        w_3 = t;
        t = SSLsetAnnotations(w_3, a_15);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm e_16 = NULL,j_16 = NULL,k_16 = NULL,p_16 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(h_27);
          e_16 = t;
          t = n_29;
          if(match_cons(t, sym__2))
            {
              k_16 = ATgetArgument(t, 0);
              p_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_5(m_2, k_16, p_16, t);
          j_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, m_29, j_16);
          x_3 = t;
          t = SSLsetAnnotations(x_3, e_16);
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
ATerm apply_strategy_1_0 (ATerm v_102 (ATerm), ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL;
  v_29 = t;
  t = dtime_0_0(t);
  t = v_29;
  t = v_102(t);
  u_29 = t;
  t = dtime_0_0(t);
  r_29 = t;
  t = u_29;
  if(match_cons(t, sym__2))
    {
      s_29 = ATgetArgument(t, 0);
      t_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(s_29), (ATerm) ATmakeAppl(sym_Runtime_1, r_29)), t_29);
  return(t);
}
static ATerm j_30 (ATerm d_30, ATerm t)
{
  t = SSL_fclose(d_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  h_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_30 = ATgetArgument(t, 0);
      {
        ATerm r_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(g_30);
            LocalPopChoice(t_10);
          }
        else
          {
            t = r_10;
            t = j_30(h_30, t);
          }
      }
    }
  else
    {
      t = j_30(h_30, t);
    }
  return(t);
}
static ATerm j_5 (ATerm d_25, ATerm t)
{
  t = SSL_read_term_from_stream(d_25);
  return(t);
}
static ATerm k_5 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm k_30 = NULL;
  t = SSL_fopen(l_44, m_44);
  k_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm l_30 = NULL;
  t = SSL_stdin_stream();
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm m_30 = NULL;
  t = SSL_stdout_stream();
  m_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_stderr_stream();
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_30);
  return(t);
}
static ATerm w_31 (ATerm t_30, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_explode_term(t_30);
  if(match_cons(t, sym__2))
    {
      ATerm u_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_10 = ATgetArgument(t, 1);
        if(((ATgetType(v_10) == AT_LIST) && !(ATisEmpty(v_10))))
          {
            u_30 = ATgetFirst((ATermList) v_10);
            {
              ATerm w_10 = (ATerm) ATgetNext((ATermList) v_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = u_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_31 (ATerm x_30, ATerm y_30, ATerm z_30, ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,f_31 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(z_30);
  c_31 = t;
  t = x_30;
  if(match_cons(t, sym_Path_1))
    {
      f_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_31, y_30);
  h_4 = t;
  t = SSLsetAnnotations(h_4, c_31);
  if(match_cons(t, sym__2))
    {
      a_31 = ATgetArgument(t, 0);
      b_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(a_31, b_31, t);
  return(t);
}
static ATerm y_31 (ATerm h_31, ATerm i_31, ATerm j_31, ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,p_31 = NULL,i_4 = NULL;
  t = SSLgetAnnotations(j_31);
  m_31 = t;
  t = SSL_is_string(h_31);
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_31, i_31);
  i_4 = t;
  t = SSLsetAnnotations(i_4, m_31);
  if(match_cons(t, sym__2))
    {
      k_31 = ATgetArgument(t, 0);
      l_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(k_31, l_31, t);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_31(r_31, t);
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm z_10 = t;
              int a_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_31(s_31, t_31, r_31, t);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  t = y_31(s_31, t_31, r_31, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_31(r_31, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_c_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  ATerm d_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_32 = NULL;
      c_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_32, term_g_11);
      t = l_5(t);
      LocalPopChoice(f_11);
    }
  else
    {
      t = d_11;
      t = debug_1_0(o_2, t);
      _fail(t);
    }
  a_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(b_32, t);
  z_31 = t;
  t = a_32;
  t = fclose_0_0(t);
  t = z_31;
  return(t);
}
ATerm fetch_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  static ATerm a_33 (ATerm t)
  {
    ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL;
    x_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_32 = ATgetFirst((ATermList) t);
        z_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_11 = t;
      int i_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_17 = NULL,y_17 = NULL,m_4 = NULL;
          t = SSLgetAnnotations(x_32);
          t_17 = t;
          t = y_32;
          t = y_86(t);
          y_17 = t;
          t = (ATerm) ATinsert(CheckATermList(z_32), y_17);
          m_4 = t;
          t = SSLsetAnnotations(m_4, t_17);
          LocalPopChoice(i_11);
        }
      else
        {
          t = h_11;
          {
            ATerm m_18 = NULL,s_18 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(x_32);
            m_18 = t;
            t = z_32;
            t = a_33(t);
            s_18 = t;
            t = (ATerm) ATinsert(CheckATermList(s_18), y_32);
            p_4 = t;
            t = SSLsetAnnotations(p_4, m_18);
          }
        }
    }
    return(t);
  }
  t = a_33(t);
  return(t);
}
static ATerm e_5 (ATerm q_38, ATerm r_38, ATerm t)
{
  t = SSL_strcat(q_38, r_38);
  return(t);
}
ATerm debug_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL;
  d_33 = t;
  t = d_86(t);
  e_33 = t;
  t = term_v_5;
  f_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_33), e_33);
  g_33 = t;
  t = SSL_printnl(f_33, g_33);
  t = d_33;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_m_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_33 = NULL;
      o_33 = t;
      t = SSL_is_string(o_33);
      LocalPopChoice(r_11);
    }
  else
    {
      t = p_11;
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(p_2, t);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
              u_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_33 = ATgetArgument(t, 0);
                  t = v_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_33 = ATgetArgument(t, 0);
                      t = v_33;
                      {
                        ATerm u_11 = t;
                        int w_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_11);
                          }
                        else
                          {
                            t = u_11;
                            t = debug_1_0(q_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_34 = NULL,b_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_33 = ATgetArgument(t, 0);
                          w_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_33;
                      t = eval_config_0_0(t);
                      a_34 = t;
                      t = w_33;
                      t = eval_config_0_0(t);
                      b_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_34, b_34);
                      t = e_5(a_34, b_34, t);
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
  ATerm f_34 = NULL,g_34 = NULL;
  f_34 = t;
  t = term_x_11;
  g_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, f_34);
  t = o_5(g_34, f_34, t);
  {
    ATerm y_11 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_34 = NULL,i_34 = NULL;
        t = eval_config_0_0(t);
        h_34 = t;
        t = term_x_11;
        i_34 = t;
        t = SSL_table_put(i_34, f_34, h_34);
        t = h_34;
        LocalPopChoice(c_12);
      }
    else
      {
        t = y_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  {
    ATerm d_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_34 = NULL;
        t = term_f_12;
        t = get_config_0_0(t);
        o_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_34, term_k_12);
        t = geq_0_0(t);
        t = m_34;
        t = e_101(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = d_12;
        t = m_34;
      }
  }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  if(match_string(t, "-k"))
    {
      t = r_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = r_34;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  t = SSL_string_to_int(s_34);
  t_34 = t;
  t = term_m_12;
  u_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, t_34);
  t = r_5(u_34, t_34, t);
  t = s_34;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_string(t, "-S"))
    {
      t = w_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = w_34;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  t = term_f_12;
  x_34 = t;
  t = term_o_12;
  y_34 = t;
  t = term_p_12;
  t = r_5(x_34, y_34, t);
  t = term_q_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
static ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  t = SSL_string_to_int(z_34);
  a_35 = t;
  t = term_f_12;
  b_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_12, a_35);
  t = r_5(b_35, a_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_34);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL;
  t = term_t_12;
  c_35 = t;
  t = term_u_5;
  d_35 = t;
  t = term_v_12;
  t = r_5(c_35, d_35, t);
  t = term_w_12;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_x_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(u_2, v_2, w_2, t);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(x_2, y_2, z_2, t);
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            t = Option_3_0(a_3, b_3, c_3, t);
          }
      }
    }
  return(t);
}
static ATerm r_5 (ATerm m_48, ATerm n_48, ATerm t)
{
  ATerm e_35 = NULL;
  t = term_x_11;
  e_35 = t;
  t = SSL_table_put(e_35, m_48, n_48);
  t = (ATerm) ATmakeAppl(sym__3, term_x_11, m_48, n_48);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
      t = term_u_5;
      t = e_0(t);
      j_35 = t;
      t = term_c_13;
      k_35 = t;
      t = term_d_13;
      l_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, j_35);
      t = p_5(k_35, l_35, j_35, t);
      _fail(t);
    }
  else
    {
      ATerm o_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_35 = ATgetFirst((ATermList) t);
          i_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_35;
      t = c_0(t);
      t = term_u_5;
      t = d_0(t);
      o_35 = t;
      t = (ATerm) ATinsert(CheckATermList(i_35), o_35);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  if(match_string(t, "-o"))
    {
      t = q_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = q_35;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  t = term_f_13;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, r_35);
  t = r_5(s_35, r_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, r_35);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  t = term_g_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
static ATerm p_5 (ATerm k_53, ATerm l_53, ATerm j_53, ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL;
  u_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_53, l_53);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_53, l_53);
        t = o_5(k_53, l_53, t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = (ATerm) ATempty;
      }
  }
  v_35 = t;
  t = (ATerm) ATinsert(CheckATermList(v_35), j_53);
  w_35 = t;
  t = SSL_table_put(k_53, l_53, w_35);
  t = u_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL;
      t = term_u_5;
      t = n_0(t);
      h_36 = t;
      t = term_c_13;
      i_36 = t;
      t = term_d_13;
      j_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, h_36);
      t = p_5(i_36, j_36, h_36, t);
      _fail(t);
    }
  else
    {
      ATerm n_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_36 = ATgetFirst((ATermList) t);
          g_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_36;
      t = k_0(t);
      t = f_36;
      t = l_0(t);
      n_36 = t;
      t = (ATerm) ATinsert(CheckATermList(g_36), n_36);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  if(match_string(t, "-i"))
    {
      t = p_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = p_36;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL;
  q_36 = t;
  t = term_m_13;
  r_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, q_36);
  t = r_5(r_36, q_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, q_36);
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, h_3, k_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_5;
  t = whoami_0_0(t);
  s_36 = t;
  t = term_v_5;
  u_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_13), s_36);
  v_36 = t;
  t = SSL_printnl(u_36, v_36);
  t = term_a_6;
  t_36 = t;
  t = SSL_exit(t_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_5 (ATerm j_41, ATerm k_41, ATerm t)
{
  ATerm q_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_41, k_41);
      LocalPopChoice(t_13);
    }
  else
    {
      t = q_13;
      t = SSL_addr(j_41, k_41);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm r_92 (ATerm), ATerm s_92 (ATerm), ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_36;
      t = r_92(t);
    }
  else
    {
      ATerm c_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_36 = ATgetFirst((ATermList) t);
          z_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_36;
      t = foldr_2_0(r_92, s_92, t);
      c_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_36, c_37);
      t = s_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm e_20 = NULL,g_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      g_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(e_20, g_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_37 = NULL,s_19 = NULL,t_19 = NULL;
  t = times_0_0(t);
  t_19 = t;
  t = SSL_explode_term(t_19);
  if(match_cons(t, sym__2))
    {
      ATerm v_13 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_19;
  t = foldr_2_0(l_3, p_3, t);
  f_37 = t;
  t = SSL_TicksToSeconds(f_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  if(match_cons(t, sym__2))
    {
      r_37 = ATgetArgument(t, 0);
      s_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_13 = t;
    int x_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_37;
        if((r_37 != t))
          {
            _fail(t);
          }
        t = q_37;
        LocalPopChoice(x_13);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
        {
          ATerm a_14 = t;
          int c_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_37, s_37);
              LocalPopChoice(c_14);
            }
          else
            {
              t = a_14;
              t = SSL_gtr(r_37, s_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_37, s_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm w_37 = NULL;
  w_37 = t;
  {
    ATerm g_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_37 = NULL;
        t = term_f_12;
        t = get_config_0_0(t);
        y_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_37, term_a_6);
        t = geq_0_0(t);
        t = w_37;
        t = d_101(t);
        LocalPopChoice(i_14);
      }
    else
      {
        t = g_14;
        t = w_37;
      }
  }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL,d_38 = NULL,e_38 = NULL;
  t = run_time_0_0(t);
  a_38 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  b_38 = t;
  t = term_v_5;
  d_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_14), a_38), term_m_14), b_38);
  e_38 = t;
  t = SSL_printnl(d_38, e_38);
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_14), a_38), term_m_14), b_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(r_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_12;
  f_38 = t;
  t = SSL_exit(f_38);
  return(t);
}
static ATerm t_3 (ATerm t)
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
            ATerm v_20 = NULL,x_4 = NULL;
            t = SSLgetAnnotations(o_38);
            v_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, n_38);
            x_4 = t;
            t = SSLsetAnnotations(x_4, v_20);
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
ATerm need_help_1_0 (ATerm t_103 (ATerm), ATerm t)
{
  ATerm q_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_14;
      t = get_config_0_0(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = q_14;
      t = fetch_1_0(t_3, t);
    }
  t = t_103(t);
  return(t);
}
ATerm map_1_0 (ATerm o_86 (ATerm), ATerm t)
{
  static ATerm h_39 (ATerm t)
  {
    ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
    e_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_39;
      }
    else
      {
        ATerm d_21 = NULL,g_21 = NULL,h_21 = NULL,d_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_39 = ATgetFirst((ATermList) t);
            g_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_39);
        d_21 = t;
        t = f_39;
        t = o_86(t);
        g_21 = t;
        t = g_39;
        t = h_39(t);
        h_21 = t;
        t = (ATerm) ATinsert(CheckATermList(h_21), g_21);
        d_5 = t;
        t = SSLsetAnnotations(d_5, d_21);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_39 = NULL,q_39 = NULL;
        static ATerm y_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_39)), not_null(q_39));
          return(t);
        }
        t = l_39;
        t = i_0(t);
        if(((p_39 != NULL) && (p_39 != t)))
          _fail(t);
        else
          p_39 = t;
        t = k_39;
        t = g_0(t);
        if(((q_39 != NULL) && (q_39 != t)))
          _fail(t);
        else
          q_39 = t;
        t = l_39;
        t = reverse_acc_2_0(g_0, y_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_5;
      t = i_0(t);
    }
  return(t);
}
static ATerm o_5 (ATerm b_55, ATerm c_55, ATerm t)
{
  t = SSL_table_get(b_55, c_55);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,s_5 = NULL;
  w_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  u_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_39);
  s_5 = t;
  t = SSLsetAnnotations(s_5, u_39);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_39 = NULL;
  y_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_39), term_x_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL;
  ATerm y_14 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = y_14;
      t = fetch_1_0(z_3, t);
    }
  t = term_e_15;
  t = echo_0_0(t);
  t = term_c_13;
  s_39 = t;
  t = term_d_13;
  t_39 = t;
  t = term_f_15;
  t = o_5(s_39, t_39, t);
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL;
  a_40 = t;
  {
    ATerm k_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm q_15 = ATgetFirst((ATermList) t);
                ATerm z_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_40;
          }
        LocalPopChoice(p_15);
      }
    else
      {
        t = k_15;
        t = (ATerm) ATinsert(ATempty, a_40);
      }
  }
  b_40 = t;
  t = term_o_10;
  c_40 = t;
  t = SSL_printnl(c_40, b_40);
  t = a_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL;
  t = term_a_16;
  g_40 = t;
  t = term_u_5;
  h_40 = t;
  t = term_c_16;
  t = r_5(g_40, h_40, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_d_16;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  t = term_a_16;
  k_40 = t;
  t = term_u_5;
  l_40 = t;
  t = term_c_16;
  t = r_5(k_40, l_40, t);
  t = term_f_16;
  i_40 = t;
  t = term_u_5;
  j_40 = t;
  t = term_g_16;
  t = r_5(i_40, j_40, t);
  t = term_m_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_n_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = r_16;
      t = Option_3_0(f_4, g_4, j_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm j_58 (ATerm), ATerm k_58 (ATerm), ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,x_5 = NULL;
  r_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_40 = ATgetFirst((ATermList) t);
      o_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_40);
  m_40 = t;
  t = n_40;
  t = j_58(t);
  p_40 = t;
  t = o_40;
  t = k_58(t);
  q_40 = t;
  t = (ATerm) ATinsert(CheckATermList(q_40), p_40);
  x_5 = t;
  t = SSLsetAnnotations(x_5, m_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm w_105 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,b_41 = NULL,c_41 = NULL,c_6 = NULL;
  w_40 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_17;
        t = w_105(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
  }
  t = w_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_40);
  x_40 = t;
  t = term_p_13;
  c_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, y_40);
  t = r_5(c_41, y_40, t);
  t = z_40;
  {
    static ATerm o_41 (ATerm t)
    {
      ATerm c_17 = t;
      int d_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_41 = NULL;
              f_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_41;
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = w_105(t);
              t = Cons_2_0(_id, o_41, t);
            }
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm i_41 = NULL,l_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_41 = ATgetFirst((ATermList) t);
                l_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Undefined_1, i_41));
          }
        }
      return(t);
    }
    t = o_41(t);
  }
  b_41 = t;
  t = (ATerm) ATinsert(CheckATermList(b_41), (ATerm) ATmakeAppl(sym_Program_1, y_40));
  c_6 = t;
  t = SSLsetAnnotations(c_6, x_40);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm a_42 = NULL;
  a_42 = t;
  if(match_string(t, "--help"))
    {
      t = a_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_42;
        }
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_w_14;
  b_42 = t;
  t = term_u_5;
  c_42 = t;
  t = term_g_17;
  t = r_5(b_42, c_42, t);
  t = term_h_17;
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_j_17;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm v_105 (ATerm), ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  v_41 = t;
  t = term_c_13;
  x_41 = t;
  t = term_d_13;
  y_41 = t;
  t = (ATerm) ATempty;
  z_41 = t;
  t = SSL_table_put(x_41, y_41, z_41);
  t = v_41;
  {
    static ATerm k_4 (ATerm t)
    {
      ATerm m_17 = t;
      int n_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_105(t);
          LocalPopChoice(n_17);
        }
      else
        {
          t = m_17;
          {
            ATerm o_17 = t;
            int p_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_4, n_4, q_4, t);
                LocalPopChoice(p_17);
              }
            else
              {
                t = o_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_4, t);
  }
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_42 = NULL;
        j_42 = t;
        {
          ATerm s_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_21 = NULL;
              t = j_42;
              {
                ATerm v_17 = t;
                int z_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_w_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(z_17);
                  }
                else
                  {
                    t = v_17;
                    t = fetch_1_0(r_4, t);
                  }
              }
              t = j_42;
              t = default_system_usage_0_0(t);
              t = term_o_12;
              o_21 = t;
              t = SSL_exit(o_21);
              LocalPopChoice(u_17);
            }
          else
            {
              t = s_17;
              {
                ATerm s_21 = NULL;
                t = term_a_16;
                t = get_config_0_0(t);
                t = j_42;
                t = default_system_about_0_0(t);
                t = term_o_12;
                s_21 = t;
                t = SSL_exit(s_21);
              }
            }
        }
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL;
              static ATerm s_4 (ATerm t)
              {
                ATerm n_42 = NULL,o_42 = NULL,q_42 = NULL,h_6 = NULL;
                q_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_42);
                n_42 = t;
                t = o_42;
                if(((t_41 != NULL) && (t_41 != t)))
                  _fail(t);
                else
                  t_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_42);
                h_6 = t;
                t = SSLsetAnnotations(h_6, n_42);
                return(t);
              }
              t = fetch_1_0(s_4, t);
              t = term_v_5;
              l_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_18);
              m_42 = t;
              t = SSL_printnl(l_42, m_42);
              t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_18));
              t = default_system_usage_0_0(t);
              t = term_a_6;
              k_42 = t;
              t = SSL_exit(k_42);
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
            }
        }
      }
  }
  u_41 = t;
  t = term_c_13;
  w_41 = t;
  t = SSL_table_destroy(w_41);
  t = u_41;
  return(t);
}
ATerm option_wrap_4_0 (ATerm v_103 (ATerm), ATerm w_103 (ATerm), ATerm x_103 (ATerm), ATerm y_103 (ATerm), ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  t = parse_options_1_0(v_103, t);
  v_42 = t;
  t = term_d_18;
  y_42 = t;
  t = SSL_table_create(y_42);
  t = term_d_18;
  w_42 = t;
  t = term_e_18;
  x_42 = t;
  t = SSL_table_put(w_42, x_42, v_42);
  t = v_42;
  t = x_103(t);
  {
    ATerm f_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(w_103, t);
        LocalPopChoice(h_18);
      }
    else
      {
        t = f_18;
        {
          ATerm i_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = y_103(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_18);
            }
          else
            {
              t = i_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  t = if_verbose2_1_0(c_5, t);
  return(t);
}
static ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = term_l_18;
  z_42 = t;
  t = term_u_5;
  a_43 = t;
  t = term_n_18;
  t = r_5(z_42, a_43, t);
  t = term_o_18;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,e_43 = NULL;
  b_43 = t;
  t = term_p_13;
  t = get_config_0_0(t);
  c_43 = t;
  t = term_v_5;
  d_43 = t;
  t = (ATerm) ATinsert(ATempty, c_43);
  e_43 = t;
  t = SSL_printnl(d_43, e_43);
  t = b_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm t)
{
  static ATerm v_4 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm t_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_18);
            }
          else
            {
              t = t_18;
              {
                ATerm v_18 = t;
                int w_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_18);
                  }
                else
                  {
                    t = v_18;
                    {
                      ATerm x_18 = t;
                      int y_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_4, a_5, b_5, t);
                          LocalPopChoice(y_18);
                        }
                      else
                        {
                          t = x_18;
                          {
                            ATerm z_18 = t;
                            int a_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_19);
                              }
                            else
                              {
                                t = z_18;
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
  static ATerm y_4 (ATerm t)
  {
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
    g_43 = t;
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm n_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_43 != NULL) && (f_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(n_5, t);
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          t = term_d_19;
          f_43 = t;
        }
    }
    t = not_null(f_43);
    t = ReadFromFile_0_0(t);
    h_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_43, h_43);
    t = apply_strategy_1_0(e_103, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(v_4, g_103, w_4, y_4, t);
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,n_6 = NULL;
  o_43 = t;
  if(match_cons(t, sym__2))
    {
      l_43 = ATgetArgument(t, 0);
      m_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  k_43 = t;
  t = m_43;
  {
    ATerm e_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_43 = NULL;
        t = SSL_explode_term(m_43);
        if(match_cons(t, sym__2))
          {
            ATerm i_19 = ATgetArgument(t, 0);
            ATerm j_19 = ATgetArgument(t, 1);
            if(((ATgetType(j_19) == AT_LIST) && !(ATisEmpty(j_19))))
              {
                p_43 = ATgetFirst((ATermList) j_19);
                {
                  ATerm m_19 = (ATerm) ATgetNext((ATermList) j_19);
                  if(((ATgetType(m_19) != AT_LIST) || !(ATisEmpty(m_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = p_43;
        LocalPopChoice(h_19);
      }
    else
      {
        t = e_19;
      }
  }
  t = topdown_1_0(t_5, t);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_43, n_43);
  n_6 = t;
  t = SSLsetAnnotations(n_6, k_43);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm n_19 = t;
    int o_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(o_19);
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
  t = iowrap_3_0(q_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
