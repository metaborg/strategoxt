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
ATerm term_m_18;
ATerm term_l_18;
ATerm term_f_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_l_17;
ATerm term_i_17;
ATerm term_g_17;
ATerm term_b_17;
ATerm term_m_16;
ATerm term_l_16;
ATerm term_j_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_c_16;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_p_14;
ATerm term_o_14;
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
ATerm term_e_12;
ATerm term_x_11;
ATerm term_p_11;
ATerm term_g_11;
ATerm term_b_11;
ATerm term_o_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_l_9;
ATerm term_e_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_l_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_u_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(9);
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
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, (ATerm) ATempty);
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_10);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_o_12);
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
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_d_13);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym__2, term_c_16, term_u_5);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_u_5);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_u_5);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_u_5);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm unescape_chars_1_0 (ATerm l_97 (ATerm), ATerm t);
static ATerm a_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm u_88 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t);
static ATerm m_25 (ATerm q_13, ATerm r_13, ATerm t);
static ATerm o_25 (ATerm e_14, ATerm f_14, ATerm t);
static ATerm p_25 (ATerm u_14, ATerm v_14, ATerm z_14, ATerm b_15, ATerm t);
static ATerm q_25 (ATerm h_15, ATerm i_15, ATerm t);
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
ATerm repeat_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm h_81 (ATerm), ATerm t);
static ATerm g_5 (ATerm w_39, ATerm x_39, ATerm t);
static ATerm h_5 (ATerm d_25, ATerm e_25, ATerm t);
static ATerm j_5 (ATerm k_87 (ATerm), ATerm l_171, ATerm h_25, ATerm t);
static ATerm i_5 (ATerm z_24, ATerm a_25, ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm f_104 (ATerm), ATerm t);
static ATerm f_30 (ATerm z_29, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm k_5 (ATerm f_25, ATerm t);
static ATerm l_5 (ATerm y_39, ATerm z_39, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm q_31 (ATerm p_30, ATerm t);
static ATerm r_31 (ATerm t_30, ATerm u_30, ATerm v_30, ATerm t);
static ATerm s_31 (ATerm d_31, ATerm e_31, ATerm f_31, ATerm t);
static ATerm m_5 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t);
static ATerm f_5 (ATerm q_38, ATerm r_38, ATerm t);
ATerm debug_1_0 (ATerm i_87 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm o_102 (ATerm), ATerm t);
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
static ATerm s_5 (ATerm o_49, ATerm p_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm q_5 (ATerm o_54, ATerm p_54, ATerm n_54, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_5 (ATerm r_42, ATerm s_42, ATerm t);
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm n_102 (ATerm), ATerm t);
static ATerm q_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm need_help_1_0 (ATerm d_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm f_56, ATerm g_56, ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm g_107 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm parse_options_1_0 (ATerm f_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm iowrap_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
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
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL;
  b_0 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_w_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_5), c_0), term_x_5);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_z_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm l_97 (ATerm), ATerm t)
{
  static ATerm k_1 (ATerm t)
  {
    ATerm h_1 = NULL,i_1 = NULL,j_1 = NULL;
    ATerm c_6 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_97(t);
        LocalPopChoice(d_6);
      }
    else
      {
        t = c_6;
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
      t = (ATerm) ATinsert(CheckATermList(z_1), term_e_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(z_1), term_f_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(z_1), term_h_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(z_1), term_l_6);
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,y_8 = NULL,z_8 = NULL;
  v_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      y_8 = ATgetArgument(t, 0);
      {
        ATerm d_9 = NULL,s_1 = NULL,t_1 = NULL,o_1 = NULL;
        t = SSL_explode_string(y_8);
        t = unquote_chars_2_0(a_0, h_0, t);
        o_1 = t;
        t = SSL_implode_string(o_1);
        t_1 = t;
        t = SSL_explode_string(t_1);
        t = unescape_chars_1_0(m_0, t);
        s_1 = t;
        t = SSL_implode_string(s_1);
        d_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, d_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          y_8 = ATgetArgument(t, 0);
          {
            ATerm h_2 = NULL;
            t = SSL_string_to_real(y_8);
            h_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, h_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              y_8 = ATgetArgument(t, 0);
              {
                ATerm n_2 = NULL;
                t = SSL_string_to_int(y_8);
                n_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, n_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  y_8 = ATgetArgument(t, 0);
                  z_8 = ATgetArgument(t, 1);
                  u_8 = ATgetArgument(t, 2);
                  t = SSL_is_string(u_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, y_8, z_8, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_8), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      y_8 = ATgetArgument(t, 0);
                      {
                        ATerm p_3 = NULL,r_3 = NULL,t_3 = NULL,a_1 = NULL;
                        t = SSLgetAnnotations(v_8);
                        p_3 = t;
                        t = SSL_explode_string(y_8);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm m_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                              _fail(t);
                            r_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(r_3);
                        t_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, t_3);
                        a_1 = t;
                        t = SSLsetAnnotations(a_1, p_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          y_8 = ATgetArgument(t, 0);
                          z_8 = ATgetArgument(t, 1);
                          u_8 = ATgetArgument(t, 2);
                          {
                            ATerm q_4 = NULL,u_4 = NULL,y_4 = NULL,c_1 = NULL;
                            t = SSLgetAnnotations(v_8);
                            q_4 = t;
                            t = SSL_explode_string(y_8);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm n_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                  _fail(t);
                                u_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(u_4);
                            y_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, y_4, z_8, u_8);
                            c_1 = t;
                            t = SSLsetAnnotations(c_1, q_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              y_8 = ATgetArgument(t, 0);
                              z_8 = ATgetArgument(t, 1);
                              u_8 = ATgetArgument(t, 2);
                              {
                                ATerm b_6 = NULL,i_6 = NULL,k_6 = NULL,d_1 = NULL;
                                t = SSLgetAnnotations(v_8);
                                b_6 = t;
                                t = SSL_explode_string(y_8);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm o_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 39)))
                                      _fail(t);
                                    i_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(i_6);
                                k_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, k_6, z_8, u_8);
                                d_1 = t;
                                t = SSLsetAnnotations(d_1, b_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  y_8 = ATgetArgument(t, 0);
                                  z_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_7 = NULL,g_8 = NULL,i_8 = NULL,e_1 = NULL;
                                    t = SSLgetAnnotations(v_8);
                                    u_7 = t;
                                    t = SSL_explode_string(y_8);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm p_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                          _fail(t);
                                        g_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(g_8);
                                    i_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, i_8, z_8);
                                    e_1 = t;
                                    t = SSLsetAnnotations(e_1, u_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      y_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_8 = NULL,b_9 = NULL,i_9 = NULL,f_1 = NULL;
                                        t = SSLgetAnnotations(v_8);
                                        x_8 = t;
                                        t = SSL_explode_string(y_8);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm q_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                              _fail(t);
                                            b_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(b_9);
                                        i_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_9);
                                        f_1 = t;
                                        t = SSLsetAnnotations(f_1, x_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          y_8 = ATgetArgument(t, 0);
                                          {
                                            ATerm e_10 = NULL,g_10 = NULL,h_10 = NULL,g_1 = NULL;
                                            t = SSLgetAnnotations(v_8);
                                            e_10 = t;
                                            t = SSL_explode_string(y_8);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm r_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                                  _fail(t);
                                                g_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(g_10);
                                            h_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, h_10);
                                            g_1 = t;
                                            t = SSLsetAnnotations(g_1, e_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              y_8 = ATgetArgument(t, 0);
                                              z_8 = ATgetArgument(t, 1);
                                              {
                                                ATerm v_10 = NULL,c_11 = NULL,f_11 = NULL,l_1 = NULL;
                                                t = SSLgetAnnotations(v_8);
                                                v_10 = t;
                                                t = SSL_explode_string(y_8);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm s_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(s_6) != AT_INT) || (ATgetInt((ATermInt) s_6) != 39)))
                                                      _fail(t);
                                                    c_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(c_11);
                                                f_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, f_11, z_8);
                                                l_1 = t;
                                                t = SSLsetAnnotations(l_1, v_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm v_11 = NULL,h_12 = NULL,l_12 = NULL,m_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  y_8 = ATgetArgument(t, 0);
                                                  z_8 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(v_8);
                                              v_11 = t;
                                              t = SSL_explode_string(y_8);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm t_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                                    _fail(t);
                                                  h_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(h_12);
                                              l_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, l_12, z_8);
                                              m_1 = t;
                                              t = SSLsetAnnotations(m_1, v_11);
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
ATerm at_last_1_0 (ATerm u_88 (ATerm), ATerm t)
{
  static ATerm o_11 (ATerm t)
  {
    ATerm j_11 = NULL,l_11 = NULL,m_11 = NULL;
    j_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_11 = ATgetFirst((ATermList) t);
        m_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 = NULL,i_3 = NULL;
          t = SSLgetAnnotations(j_11);
          u_12 = t;
          t = m_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(m_11), l_11);
          i_3 = t;
          t = SSLsetAnnotations(i_3, u_12);
          t = u_88(t);
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
          {
            ATerm e_13 = NULL,k_13 = NULL,j_3 = NULL;
            t = SSLgetAnnotations(j_11);
            e_13 = t;
            t = m_11;
            t = o_11(t);
            k_13 = t;
            t = (ATerm) ATinsert(CheckATermList(k_13), l_11);
            j_3 = t;
            t = SSLsetAnnotations(j_3, e_13);
          }
        }
    }
    return(t);
  }
  t = o_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_11 = NULL,z_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_11 = ATgetFirst((ATermList) t);
      z_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_11;
    }
  else
    {
      t = z_11;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm j_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_6 = ATgetFirst((ATermList) t);
      j_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = j_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm x_96 (ATerm), ATerm y_96 (ATerm), ATerm t)
{
  ATerm f_12 = NULL,g_12 = NULL,i_12 = NULL;
  f_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_12 = ATgetFirst((ATermList) t);
      {
        ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = i_12;
  t = x_96(t);
  t = f_12;
  t = last_0_0(t);
  t = y_96(t);
  t = f_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      g_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = g_12;
  t = at_last_1_0(r_0, t);
  return(t);
}
static ATerm m_25 (ATerm q_13, ATerm r_13, ATerm t)
{
  t = q_13;
  {
    ATerm z_6 = t;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,b_14 = NULL,m_3 = NULL;
        b_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_13 = ATgetFirst((ATermList) t);
            z_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_14);
        x_13 = t;
        t = z_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(z_13), y_13);
        m_3 = t;
        t = SSLsetAnnotations(m_3, x_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, q_13);
  return(t);
}
static ATerm o_25 (ATerm e_14, ATerm f_14, ATerm t)
{
  t = e_14;
  {
    ATerm b_7 = t;
    if((PushChoice() == 0))
      {
        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,n_14 = NULL,n_3 = NULL;
        n_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_14 = ATgetFirst((ATermList) t);
            k_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_14);
        i_14 = t;
        t = k_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(k_14), j_14);
        n_3 = t;
        t = SSLsetAnnotations(n_3, i_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, e_14);
  return(t);
}
static ATerm p_25 (ATerm u_14, ATerm v_14, ATerm z_14, ATerm b_15, ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL;
  t = SSL_explode_string(u_14);
  t = unquote_chars_2_0(s_0, u_0, t);
  g_15 = t;
  t = SSL_implode_string(g_15);
  f_15 = t;
  t = (ATerm) ATmakeAppl(sym_PrimT_3, f_15, v_14, z_14);
  return(t);
}
static ATerm q_25 (ATerm h_15, ATerm i_15, ATerm t)
{
  ATerm k_15 = NULL,l_15 = NULL;
  t = SSL_explode_string(h_15);
  t = unquote_chars_2_0(v_0, w_0, t);
  l_15 = t;
  t = SSL_implode_string(l_15);
  k_15 = t;
  t = (ATerm) ATmakeAppl(sym_Prim_2, k_15, (ATerm) ATempty);
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
  t = term_e_7;
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL,v_13 = NULL;
  r_16 = t;
  t = SSL_explode_term(r_16);
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            s_16 = ATgetFirst((ATermList) g_7);
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
  t = SSL_explode_term(r_16);
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
                v_13 = ATgetFirst((ATermList) l_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, v_13), s_16));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_17 = NULL,k_17 = NULL,q_14 = NULL;
  j_17 = t;
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_7 = ATgetArgument(t, 1);
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            k_17 = ATgetFirst((ATermList) q_7);
            {
              ATerm r_7 = (ATerm) ATgetNext((ATermList) q_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(j_17);
  if(match_cons(t, sym__2))
    {
      ATerm s_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_7 = ATgetArgument(t, 1);
        if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
          {
            ATerm v_7 = ATgetFirst((ATermList) t_7);
            ATerm w_7 = (ATerm) ATgetNext((ATermList) t_7);
            if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
              {
                q_14 = ATgetFirst((ATermList) w_7);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, q_14), k_17));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm s_17 = NULL,w_17 = NULL,s_14 = NULL;
  s_17 = t;
  t = SSL_explode_term(s_17);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            w_17 = ATgetFirst((ATermList) z_7);
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
  t = SSL_explode_term(s_17);
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
                s_14 = ATgetFirst((ATermList) e_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, s_14), w_17));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm e_18 = NULL,g_18 = NULL,w_14 = NULL;
  e_18 = t;
  t = SSL_explode_term(e_18);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_8 = ATgetArgument(t, 1);
        if(((ATgetType(j_8) == AT_LIST) && !(ATisEmpty(j_8))))
          {
            g_18 = ATgetFirst((ATermList) j_8);
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
  t = SSL_explode_term(e_18);
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
                w_14 = ATgetFirst((ATermList) o_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, w_14), g_18));
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      e_19 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, f_19), e_19));
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm h_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, k_19), h_19));
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, b_20), a_20));
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_s_8;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm f_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      f_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, j_20), f_20));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL,w_15 = NULL,x_15 = NULL,b_16 = NULL,h_16 = NULL,i_16 = NULL;
  b_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      h_16 = ATgetArgument(t, 0);
      i_16 = ATgetArgument(t, 1);
      {
        ATerm n_16 = NULL;
        t = i_16;
        t = foldr_2_0(y_0, z_0, t);
        n_16 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, h_16, n_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          h_16 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, h_16, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              h_16 = ATgetArgument(t, 0);
              {
                ATerm g_14 = NULL;
                t = h_16;
                {
                  ATerm t_8 = t;
                  int w_8 = stack_ptr;
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
                              t = term_c_9;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_l_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_h_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_e_9;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(w_8);
                    }
                  else
                    {
                      t = t_8;
                      {
                        ATerm m_14 = NULL;
                        t = SSL_explode_string(h_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm f_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 39)))
                              _fail(t);
                            {
                              ATerm g_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
                                {
                                  m_14 = ATgetFirst((ATermList) g_9);
                                  {
                                    ATerm h_9 = (ATerm) ATgetNext((ATermList) g_9);
                                    if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
                                      {
                                        ATerm j_9 = ATgetFirst((ATermList) h_9);
                                        if(((ATgetType(j_9) != AT_INT) || (ATgetInt((ATermInt) j_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm k_9 = (ATerm) ATgetNext((ATermList) h_9);
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
                        t = m_14;
                      }
                    }
                }
                g_14 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, g_14);
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  h_16 = ATgetArgument(t, 0);
                  {
                    ATerm h_17 = NULL;
                    t = h_16;
                    t = foldr_2_0(b_1, n_1, t);
                    h_17 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_9, (ATerm) ATinsert(ATempty, h_17));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      h_16 = ATgetArgument(t, 0);
                      i_16 = ATgetArgument(t, 1);
                      {
                        static ATerm p_1 (ATerm t)
                        {
                          t = i_16;
                          return(t);
                        }
                        t = h_16;
                        t = foldr_2_0(p_1, q_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          h_16 = ATgetArgument(t, 0);
                          t = h_16;
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
                                  h_16 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_9 = ATgetArgument(t, 1);
                                  }
                                  x_15 = ATgetArgument(t, 2);
                                  m_15 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, h_16, x_15, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_15), (ATerm) ATempty));
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
                                        h_16 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_9 = ATgetArgument(t, 1);
                                        }
                                        x_15 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, h_16, x_15, term_u_9);
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        h_16 = ATgetArgument(t, 0);
                                        i_16 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, h_16, i_16, term_u_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            h_16 = ATgetArgument(t, 0);
                                            i_16 = ATgetArgument(t, 1);
                                            {
                                              static ATerm v_1 (ATerm t)
                                              {
                                                t = i_16;
                                                return(t);
                                              }
                                              t = h_16;
                                              t = foldr_2_0(v_1, a_2, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                h_16 = ATgetArgument(t, 0);
                                                t = h_16;
                                                t = foldr_2_0(b_2, c_2, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    h_16 = ATgetArgument(t, 0);
                                                    t = h_16;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        n_15 = ATgetFirst((ATermList) t);
                                                        o_15 = (ATerm) ATgetNext((ATermList) t);
                                                        t = o_15;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm v_9 = t;
                                                            int w_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = m_25(h_16, b_16, t);
                                                                LocalPopChoice(w_9);
                                                              }
                                                            else
                                                              {
                                                                t = v_9;
                                                                t = n_15;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = m_25(h_16, b_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = m_25(h_16, b_16, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        h_16 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, h_16));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            h_16 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, h_16));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                h_16 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, h_16));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    h_16 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, h_16));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        h_16 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_16), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            h_16 = ATgetArgument(t, 0);
                                                                            i_16 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_16), i_16);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                h_16 = ATgetArgument(t, 0);
                                                                                i_16 = ATgetArgument(t, 1);
                                                                                {
                                                                                  static ATerm d_2 (ATerm t)
                                                                                  {
                                                                                    t = i_16;
                                                                                    return(t);
                                                                                  }
                                                                                  t = h_16;
                                                                                  t = foldr_2_0(d_2, e_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    h_16 = ATgetArgument(t, 0);
                                                                                    t = h_16;
                                                                                    t = foldr_2_0(f_2, g_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        h_16 = ATgetArgument(t, 0);
                                                                                        i_16 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, (ATerm) ATinsert(CheckATermList(i_16), h_16));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            h_16 = ATgetArgument(t, 0);
                                                                                            t = h_16;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                n_15 = ATgetFirst((ATermList) t);
                                                                                                o_15 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = o_15;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm x_9 = t;
                                                                                                    int y_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = o_25(h_16, b_16, t);
                                                                                                        LocalPopChoice(y_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = x_9;
                                                                                                        t = n_15;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = o_25(h_16, b_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = o_25(h_16, b_16, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_z_9;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    h_16 = ATgetArgument(t, 0);
                                                                                                    i_16 = ATgetArgument(t, 1);
                                                                                                    t = i_16;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        w_15 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, w_15), h_16));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        h_16 = ATgetArgument(t, 0);
                                                                                                        t = h_16;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            h_16 = ATgetArgument(t, 0);
                                                                                                            i_16 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, h_16, i_16, term_c_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                h_16 = ATgetArgument(t, 0);
                                                                                                                i_16 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, h_16, i_16, term_c_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    h_16 = ATgetArgument(t, 0);
                                                                                                                    i_16 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, h_16, (ATerm)ATempty, i_16);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        h_16 = ATgetArgument(t, 0);
                                                                                                                        i_16 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, i_16, h_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimT_3))
                                                                                                                          {
                                                                                                                            h_16 = ATgetArgument(t, 0);
                                                                                                                            i_16 = ATgetArgument(t, 1);
                                                                                                                            x_15 = ATgetArgument(t, 2);
                                                                                                                            t = p_25(h_16, i_16, x_15, b_16, t);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                              {
                                                                                                                                h_16 = ATgetArgument(t, 0);
                                                                                                                                t = q_25(h_16, b_16, t);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                  {
                                                                                                                                    h_16 = ATgetArgument(t, 0);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, h_16, (ATerm) ATempty);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                      {
                                                                                                                                        h_16 = ATgetArgument(t, 0);
                                                                                                                                        i_16 = ATgetArgument(t, 1);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, h_16, (ATerm)ATempty, i_16);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                                          {
                                                                                                                                            h_16 = ATgetArgument(t, 0);
                                                                                                                                            i_16 = ATgetArgument(t, 1);
                                                                                                                                            x_15 = ATgetArgument(t, 2);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, h_16, i_16, x_15);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                h_16 = ATgetArgument(t, 0);
                                                                                                                                                i_16 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, h_16, (ATerm)ATempty, i_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    h_16 = ATgetArgument(t, 0);
                                                                                                                                                    i_16 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, h_16, (ATerm)ATempty, i_16);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm d_10 = ATgetArgument(t, 0);
                                                                                                                                                        i_16 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, i_16);
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
ATerm repeat_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  static ATerm r_25 (ATerm t)
  {
    ATerm f_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        t = r_25(t);
        LocalPopChoice(i_10);
      }
    else
      {
        t = f_10;
        t = i_80(t);
      }
    return(t);
  }
  t = r_25(t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  static ATerm i_2 (ATerm t)
  {
    t = topdown_1_0(h_81, t);
    return(t);
  }
  t = h_81(t);
  t = SRTS_all(i_2, t);
  return(t);
}
static ATerm g_5 (ATerm w_39, ATerm x_39, ATerm t)
{
  ATerm u_25 = NULL;
  t = SSL_fputc(w_39, x_39);
  u_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_25);
  return(t);
}
static ATerm h_5 (ATerm d_25, ATerm e_25, ATerm t)
{
  ATerm v_25 = NULL;
  t = SSL_write_term_to_stream_text(d_25, e_25);
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_25);
  return(t);
}
static ATerm j_5 (ATerm k_87 (ATerm), ATerm l_171, ATerm h_25, ATerm t)
{
  ATerm w_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_171, term_j_10);
  t = m_5(t);
  w_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_25, h_25);
  t = k_87(t);
  t = fclose_0_0(t);
  t = h_25;
  return(t);
}
static ATerm i_5 (ATerm z_24, ATerm a_25, ATerm t)
{
  ATerm x_25 = NULL;
  t = SSL_write_term_to_stream_baf(z_24, a_25);
  x_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_25);
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
  ATerm y_15 = NULL,z_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          y_15 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_5(y_15, z_15, t);
  return(t);
}
static ATerm m_2 (ATerm t)
{
  ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          x_16 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(x_16, y_16, t);
  u_16 = t;
  t = term_h_6;
  v_16 = t;
  t = u_16;
  if(match_cons(t, sym_Stream_1))
    {
      w_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_h_6, u_16);
  t = g_5(v_16, w_16, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL,k_26 = NULL,r_26 = NULL,a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,g_27 = NULL,d_29 = NULL,h_29 = NULL,v_3 = NULL,u_3 = NULL;
  g_26 = t;
  if(match_cons(t, sym__2))
    {
      c_27 = ATgetArgument(t, 0);
      d_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_26);
  b_27 = t;
  t = c_27;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_26 != NULL) && (f_26 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_26 = ATgetArgument(t, 0);
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
        f_26 = t;
      }
  }
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_27, d_27);
  u_3 = t;
  t = SSLsetAnnotations(u_3, b_27);
  t = g_26;
  if(match_cons(t, sym__2))
    {
      k_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_26);
  h_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_26, (ATerm) ATmakeAppl(sym__2, not_null(f_26), r_26));
  v_3 = t;
  t = SSLsetAnnotations(v_3, h_26);
  a_27 = t;
  if(match_cons(t, sym__2))
    {
      d_29 = ATgetArgument(t, 0);
      h_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_3 = NULL;
        t = SSLgetAnnotations(a_27);
        p_15 = t;
        t = d_29;
        t = fetch_1_0(k_2, t);
        s_15 = t;
        t = h_29;
        if(match_cons(t, sym__2))
          {
            u_15 = ATgetArgument(t, 0);
            v_15 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = j_5(l_2, u_15, v_15, t);
        t_15 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_15, t_15);
        w_3 = t;
        t = SSLsetAnnotations(w_3, p_15);
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        {
          ATerm f_16 = NULL,k_16 = NULL,p_16 = NULL,q_16 = NULL,x_3 = NULL;
          t = SSLgetAnnotations(a_27);
          f_16 = t;
          t = h_29;
          if(match_cons(t, sym__2))
            {
              p_16 = ATgetArgument(t, 0);
              q_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = j_5(m_2, p_16, q_16, t);
          k_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_29, k_16);
          x_3 = t;
          t = SSLsetAnnotations(x_3, f_16);
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
ATerm apply_strategy_1_0 (ATerm f_104 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,p_29 = NULL,q_29 = NULL,r_29 = NULL;
  r_29 = t;
  t = dtime_0_0(t);
  t = r_29;
  t = f_104(t);
  q_29 = t;
  t = dtime_0_0(t);
  m_29 = t;
  t = q_29;
  if(match_cons(t, sym__2))
    {
      n_29 = ATgetArgument(t, 0);
      p_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(n_29), (ATerm) ATmakeAppl(sym_Runtime_1, m_29)), p_29);
  return(t);
}
static ATerm f_30 (ATerm z_29, ATerm t)
{
  t = SSL_fclose(z_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_30 = NULL,d_30 = NULL;
  d_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_30 = ATgetArgument(t, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_30);
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = f_30(d_30, t);
          }
      }
    }
  else
    {
      t = f_30(d_30, t);
    }
  return(t);
}
static ATerm k_5 (ATerm f_25, ATerm t)
{
  t = SSL_read_term_from_stream(f_25);
  return(t);
}
static ATerm l_5 (ATerm y_39, ATerm z_39, ATerm t)
{
  ATerm g_30 = NULL;
  t = SSL_fopen(y_39, z_39);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_30 = NULL;
  t = SSL_stdin_stream();
  h_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_30 = NULL;
  t = SSL_stdout_stream();
  i_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_30 = NULL;
  t = SSL_stderr_stream();
  j_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_30);
  return(t);
}
static ATerm q_31 (ATerm p_30, ATerm t)
{
  ATerm q_30 = NULL;
  t = SSL_explode_term(p_30);
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_10 = ATgetArgument(t, 1);
        if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
          {
            q_30 = ATgetFirst((ATermList) u_10);
            {
              ATerm w_10 = (ATerm) ATgetNext((ATermList) u_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = q_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm r_31 (ATerm t_30, ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,b_31 = NULL,f_4 = NULL;
  t = SSLgetAnnotations(v_30);
  y_30 = t;
  t = t_30;
  if(match_cons(t, sym_Path_1))
    {
      b_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_31, u_30);
  f_4 = t;
  t = SSLsetAnnotations(f_4, y_30);
  if(match_cons(t, sym__2))
    {
      w_30 = ATgetArgument(t, 0);
      x_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(w_30, x_30, t);
  return(t);
}
static ATerm s_31 (ATerm d_31, ATerm e_31, ATerm f_31, ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,l_31 = NULL,h_4 = NULL;
  t = SSLgetAnnotations(f_31);
  i_31 = t;
  t = SSL_is_string(d_31);
  l_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_31, e_31);
  h_4 = t;
  t = SSLsetAnnotations(h_4, i_31);
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_5(g_31, h_31, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm n_31 = NULL,o_31 = NULL,p_31 = NULL;
  n_31 = t;
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_31(n_31, t);
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
                  t = r_31(o_31, p_31, n_31, t);
                  LocalPopChoice(a_11);
                }
              else
                {
                  t = z_10;
                  t = s_31(o_31, p_31, n_31, t);
                }
            }
          }
      }
    }
  else
    {
      t = q_31(n_31, t);
    }
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_31 = NULL;
      y_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_31, term_g_11);
      t = m_5(t);
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      t = debug_1_0(o_2, t);
      _fail(t);
    }
  u_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(v_31, t);
  t_31 = t;
  t = u_31;
  t = fclose_0_0(t);
  t = t_31;
  return(t);
}
ATerm fetch_1_0 (ATerm d_88 (ATerm), ATerm t)
{
  static ATerm w_32 (ATerm t)
  {
    ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL;
    t_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_32 = ATgetFirst((ATermList) t);
        v_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_11 = t;
      int i_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_17 = NULL,z_17 = NULL,l_4 = NULL;
          t = SSLgetAnnotations(t_32);
          u_17 = t;
          t = u_32;
          t = d_88(t);
          z_17 = t;
          t = (ATerm) ATinsert(CheckATermList(v_32), z_17);
          l_4 = t;
          t = SSLsetAnnotations(l_4, u_17);
          LocalPopChoice(i_11);
        }
      else
        {
          t = h_11;
          {
            ATerm n_18 = NULL,t_18 = NULL,m_4 = NULL;
            t = SSLgetAnnotations(t_32);
            n_18 = t;
            t = v_32;
            t = w_32(t);
            t_18 = t;
            t = (ATerm) ATinsert(CheckATermList(t_18), u_32);
            m_4 = t;
            t = SSLsetAnnotations(m_4, n_18);
          }
        }
    }
    return(t);
  }
  t = w_32(t);
  return(t);
}
static ATerm f_5 (ATerm q_38, ATerm r_38, ATerm t)
{
  t = SSL_strcat(q_38, r_38);
  return(t);
}
ATerm debug_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
  z_32 = t;
  t = i_87(t);
  a_33 = t;
  t = term_w_5;
  b_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_32), a_33);
  c_33 = t;
  t = SSL_printnl(b_33, c_33);
  t = z_32;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm k_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(n_11);
    }
  else
    {
      t = k_11;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_33 = NULL;
      j_33 = t;
      t = SSL_is_string(j_33);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
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
              ATerm p_33 = NULL,q_33 = NULL,s_33 = NULL;
              p_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_33 = ATgetArgument(t, 0);
                  t = q_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_33 = ATgetArgument(t, 0);
                      t = q_33;
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
                      ATerm w_33 = NULL,x_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_33 = ATgetArgument(t, 0);
                          s_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_33;
                      t = eval_config_0_0(t);
                      w_33 = t;
                      t = s_33;
                      t = eval_config_0_0(t);
                      x_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_33, x_33);
                      t = f_5(w_33, x_33, t);
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
  ATerm b_34 = NULL,c_34 = NULL;
  b_34 = t;
  t = term_x_11;
  c_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, b_34);
  t = p_5(c_34, b_34, t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_34 = NULL,e_34 = NULL;
        t = eval_config_0_0(t);
        d_34 = t;
        t = term_x_11;
        e_34 = t;
        t = SSL_table_put(e_34, b_34, d_34);
        t = d_34;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm o_102 (ATerm), ATerm t)
{
  ATerm i_34 = NULL;
  i_34 = t;
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL;
        t = term_e_12;
        t = get_config_0_0(t);
        k_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_34, term_k_12);
        t = geq_0_0(t);
        t = i_34;
        t = o_102(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = i_34;
      }
  }
  return(t);
}
static ATerm r_2 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  if(match_string(t, "-k"))
    {
      t = n_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_34;
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  t = SSL_string_to_int(o_34);
  p_34 = t;
  t = term_m_12;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_12, p_34);
  t = s_5(q_34, p_34, t);
  t = o_34;
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
  ATerm s_34 = NULL;
  s_34 = t;
  if(match_string(t, "-S"))
    {
      t = s_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_34;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL;
  t = term_e_12;
  t_34 = t;
  t = term_o_12;
  u_34 = t;
  t = term_p_12;
  t = s_5(t_34, u_34, t);
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
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = SSL_string_to_int(v_34);
  w_34 = t;
  t = term_e_12;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_12, w_34);
  t = s_5(x_34, w_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_34);
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
  ATerm y_34 = NULL,z_34 = NULL;
  t = term_t_12;
  y_34 = t;
  t = term_u_5;
  z_34 = t;
  t = term_v_12;
  t = s_5(y_34, z_34, t);
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
static ATerm s_5 (ATerm o_49, ATerm p_49, ATerm t)
{
  ATerm a_35 = NULL;
  t = term_x_11;
  a_35 = t;
  t = SSL_table_put(a_35, o_49, p_49);
  t = (ATerm) ATmakeAppl(sym__3, term_x_11, o_49, p_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
      t = term_u_5;
      t = i_0(t);
      f_35 = t;
      t = term_c_13;
      g_35 = t;
      t = term_d_13;
      h_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, f_35);
      t = q_5(g_35, h_35, f_35, t);
      _fail(t);
    }
  else
    {
      ATerm k_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_35 = ATgetFirst((ATermList) t);
          e_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_35;
      t = d_0(t);
      t = term_u_5;
      t = g_0(t);
      k_35 = t;
      t = (ATerm) ATinsert(CheckATermList(e_35), k_35);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm m_35 = NULL;
  m_35 = t;
  if(match_string(t, "-o"))
    {
      t = m_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_35;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  n_35 = t;
  t = term_f_13;
  o_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_13, n_35);
  t = s_5(o_35, n_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_35);
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
static ATerm q_5 (ATerm o_54, ATerm p_54, ATerm n_54, ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_13 = ATgetArgument(t, 0);
            ATerm l_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, o_54, p_54);
        t = p_5(o_54, p_54, t);
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        t = (ATerm) ATempty;
      }
  }
  r_35 = t;
  t = (ATerm) ATinsert(CheckATermList(r_35), n_54);
  s_35 = t;
  t = SSL_table_put(o_54, p_54, s_35);
  t = q_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
      t = term_u_5;
      t = p_0(t);
      d_36 = t;
      t = term_c_13;
      e_36 = t;
      t = term_d_13;
      f_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, d_36);
      t = q_5(e_36, f_36, d_36, t);
      _fail(t);
    }
  else
    {
      ATerm j_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_35 = ATgetFirst((ATermList) t);
          a_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_35;
      t = n_0(t);
      t = b_36;
      t = o_0(t);
      j_36 = t;
      t = (ATerm) ATinsert(CheckATermList(c_36), j_36);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  if(match_string(t, "-i"))
    {
      t = l_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_36;
    }
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL;
  m_36 = t;
  t = term_m_13;
  n_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_13, m_36);
  t = s_5(n_36, m_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_36);
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
  ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_5;
  t = whoami_0_0(t);
  o_36 = t;
  t = term_w_5;
  q_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_13), o_36);
  r_36 = t;
  t = SSL_printnl(q_36, r_36);
  t = term_z_5;
  p_36 = t;
  t = SSL_exit(p_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_13;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_5 (ATerm r_42, ATerm s_42, ATerm t)
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(r_42, s_42);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      t = SSL_addr(r_42, s_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_93 (ATerm), ATerm x_93 (ATerm), ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_36;
      t = w_93(t);
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
      t = foldr_2_0(w_93, x_93, t);
      y_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, u_36, y_36);
      t = x_93(t);
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
static ATerm o_3 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_5(g_20, h_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm b_37 = NULL,t_19 = NULL,u_19 = NULL;
  t = times_0_0(t);
  u_19 = t;
  t = SSL_explode_term(u_19);
  if(match_cons(t, sym__2))
    {
      ATerm u_13 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_19;
  t = foldr_2_0(l_3, o_3, t);
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
    ATerm w_13 = t;
    int a_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_37;
        if((n_37 != t))
          {
            _fail(t);
          }
        t = m_37;
        LocalPopChoice(a_14);
      }
    else
      {
        t = w_13;
        t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(n_37, o_37);
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              t = SSL_gtr(n_37, o_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, n_37, o_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm n_102 (ATerm), ATerm t)
{
  ATerm s_37 = NULL;
  s_37 = t;
  {
    ATerm h_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_37 = NULL;
        t = term_e_12;
        t = get_config_0_0(t);
        u_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_37, term_z_5);
        t = geq_0_0(t);
        t = s_37;
        t = n_102(t);
        LocalPopChoice(l_14);
      }
    else
      {
        t = h_14;
        t = s_37;
      }
  }
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = run_time_0_0(t);
  w_37 = t;
  t = term_u_5;
  t = whoami_0_0(t);
  x_37 = t;
  t = term_w_5;
  z_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), w_37), term_o_14), x_37);
  a_38 = t;
  t = SSL_printnl(z_37, a_38);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), w_37), term_o_14), x_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(q_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_12;
  b_38 = t;
  t = SSL_exit(b_38);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm j_38 = NULL,k_38 = NULL;
  k_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = k_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          j_38 = ATgetArgument(t, 0);
          {
            ATerm x_20 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(k_38);
            x_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, j_38);
            w_4 = t;
            t = SSLsetAnnotations(w_4, x_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = k_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm d_105 (ATerm), ATerm t)
{
  ATerm r_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_14;
      t = get_config_0_0(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = r_14;
      t = fetch_1_0(s_3, t);
    }
  t = d_105(t);
  return(t);
}
ATerm map_1_0 (ATerm t_87 (ATerm), ATerm t)
{
  static ATerm c_39 (ATerm t)
  {
    ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
    z_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = z_38;
      }
    else
      {
        ATerm f_21 = NULL,i_21 = NULL,j_21 = NULL,z_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_39 = ATgetFirst((ATermList) t);
            b_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(z_38);
        f_21 = t;
        t = a_39;
        t = t_87(t);
        i_21 = t;
        t = b_39;
        t = c_39(t);
        j_21 = t;
        t = (ATerm) ATinsert(CheckATermList(j_21), i_21);
        z_4 = t;
        t = SSLsetAnnotations(z_4, f_21);
      }
    return(t);
  }
  t = c_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_39 = ATgetFirst((ATermList) t);
      g_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm k_39 = NULL,l_39 = NULL;
        static ATerm y_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(k_39)), not_null(l_39));
          return(t);
        }
        t = g_39;
        t = l_0(t);
        if(((k_39 != NULL) && (k_39 != t)))
          _fail(t);
        else
          k_39 = t;
        t = f_39;
        t = k_0(t);
        if(((l_39 != NULL) && (l_39 != t)))
          _fail(t);
        else
          l_39 = t;
        t = g_39;
        t = reverse_acc_2_0(k_0, y_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_5;
      t = l_0(t);
    }
  return(t);
}
static ATerm p_5 (ATerm f_56, ATerm g_56, ATerm t)
{
  t = SSL_table_get(f_56, g_56);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,e_5 = NULL;
  r_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      q_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_39);
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, q_39);
  e_5 = t;
  t = SSLsetAnnotations(e_5, p_39);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm t_39 = NULL;
  t_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_39), term_y_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  ATerm a_15 = t;
  int c_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_13;
      t = get_config_0_0(t);
      LocalPopChoice(c_15);
    }
  else
    {
      t = a_15;
      t = fetch_1_0(z_3, t);
    }
  t = term_d_15;
  t = echo_0_0(t);
  t = term_c_13;
  n_39 = t;
  t = term_d_13;
  o_39 = t;
  t = term_e_15;
  t = p_5(n_39, o_39, t);
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm v_39 = NULL,c_40 = NULL,d_40 = NULL;
  v_39 = t;
  {
    ATerm j_15 = t;
    int q_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = v_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm r_15 = ATgetFirst((ATermList) t);
                ATerm a_16 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = v_39;
          }
        LocalPopChoice(q_15);
      }
    else
      {
        t = j_15;
        t = (ATerm) ATinsert(ATempty, v_39);
      }
  }
  c_40 = t;
  t = term_o_10;
  d_40 = t;
  t = SSL_printnl(d_40, c_40);
  t = v_39;
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
  ATerm i_40 = NULL,j_40 = NULL;
  t = term_c_16;
  i_40 = t;
  t = term_u_5;
  j_40 = t;
  t = term_d_16;
  t = s_5(i_40, j_40, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_e_16;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,n_40 = NULL;
  t = term_c_16;
  m_40 = t;
  t = term_u_5;
  n_40 = t;
  t = term_d_16;
  t = s_5(m_40, n_40, t);
  t = term_g_16;
  k_40 = t;
  t = term_u_5;
  l_40 = t;
  t = term_j_16;
  t = s_5(k_40, l_40, t);
  t = term_l_16;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_m_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm o_16 = t;
  int t_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, d_4, e_4, t);
      LocalPopChoice(t_16);
    }
  else
    {
      t = o_16;
      t = Option_3_0(g_4, i_4, j_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm n_59 (ATerm), ATerm o_59 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,v_5 = NULL;
  t_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_40 = ATgetFirst((ATermList) t);
      q_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_40);
  o_40 = t;
  t = p_40;
  t = n_59(t);
  r_40 = t;
  t = q_40;
  t = o_59(t);
  s_40 = t;
  t = (ATerm) ATinsert(CheckATermList(s_40), r_40);
  v_5 = t;
  t = SSLsetAnnotations(v_5, o_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,d_41 = NULL,e_41 = NULL,a_6 = NULL;
  y_40 = t;
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_17;
        t = g_107(t);
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
      }
  }
  t = y_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_40);
  z_40 = t;
  t = term_p_13;
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, a_41);
  t = s_5(e_41, a_41, t);
  t = b_41;
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
              ATerm h_41 = NULL;
              h_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_41;
              LocalPopChoice(f_17);
            }
          else
            {
              t = e_17;
              t = g_107(t);
              t = Cons_2_0(_id, o_41, t);
            }
          LocalPopChoice(d_17);
        }
      else
        {
          t = c_17;
          {
            ATerm k_41 = NULL,l_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_41 = ATgetFirst((ATermList) t);
                l_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Undefined_1, k_41));
          }
        }
      return(t);
    }
    t = o_41(t);
  }
  d_41 = t;
  t = (ATerm) ATinsert(CheckATermList(d_41), (ATerm) ATmakeAppl(sym_Program_1, a_41));
  a_6 = t;
  t = SSLsetAnnotations(a_6, z_40);
  return(t);
}
static ATerm n_4 (ATerm t)
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
static ATerm o_4 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_x_14;
  b_42 = t;
  t = term_u_5;
  c_42 = t;
  t = term_g_17;
  t = s_5(b_42, c_42, t);
  t = term_i_17;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_l_17;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm f_107 (ATerm), ATerm t)
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
          t = f_107(t);
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
                t = Option_3_0(n_4, o_4, p_4, t);
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
          ATerm t_17 = t;
          int v_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_21 = NULL;
              t = j_42;
              {
                ATerm x_17 = t;
                int y_17 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_14;
                    t = get_config_0_0(t);
                    LocalPopChoice(y_17);
                  }
                else
                  {
                    t = x_17;
                    t = fetch_1_0(r_4, t);
                  }
              }
              t = j_42;
              t = default_system_usage_0_0(t);
              t = term_o_12;
              q_21 = t;
              t = SSL_exit(q_21);
              LocalPopChoice(v_17);
            }
          else
            {
              t = t_17;
              {
                ATerm u_21 = NULL;
                t = term_c_16;
                t = get_config_0_0(t);
                t = j_42;
                t = default_system_about_0_0(t);
                t = term_o_12;
                u_21 = t;
                t = SSL_exit(u_21);
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
                ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,g_6 = NULL;
                p_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_42);
                n_42 = t;
                t = o_42;
                if(((t_41 != NULL) && (t_41 != t)))
                  _fail(t);
                else
                  t_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_42);
                g_6 = t;
                t = SSLsetAnnotations(g_6, n_42);
                return(t);
              }
              t = fetch_1_0(s_4, t);
              t = term_w_5;
              l_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_18);
              m_42 = t;
              t = SSL_printnl(l_42, m_42);
              t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_18));
              t = default_system_usage_0_0(t);
              t = term_z_5;
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
ATerm option_wrap_4_0 (ATerm f_105 (ATerm), ATerm g_105 (ATerm), ATerm h_105 (ATerm), ATerm i_105 (ATerm), ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  t = parse_options_1_0(f_105, t);
  w_42 = t;
  t = term_d_18;
  z_42 = t;
  t = SSL_table_create(z_42);
  t = term_d_18;
  x_42 = t;
  t = term_f_18;
  y_42 = t;
  t = SSL_table_put(x_42, y_42, w_42);
  t = w_42;
  t = h_105(t);
  {
    ATerm h_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(g_105, t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = h_18;
        {
          ATerm j_18 = t;
          int k_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_105(t);
              t = report_success_0_0(t);
              LocalPopChoice(k_18);
            }
          else
            {
              t = j_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = if_verbose2_1_0(d_5, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_l_18;
  a_43 = t;
  t = term_u_5;
  b_43 = t;
  t = term_m_18;
  t = s_5(a_43, b_43, t);
  t = term_o_18;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  t = term_p_18;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  c_43 = t;
  t = term_p_13;
  t = get_config_0_0(t);
  d_43 = t;
  t = term_w_5;
  e_43 = t;
  t = (ATerm) ATinsert(ATempty, d_43);
  f_43 = t;
  t = SSL_printnl(e_43, f_43);
  t = c_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm q_104 (ATerm), ATerm t)
{
  static ATerm t_4 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_104(t);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        {
          ATerm s_18 = t;
          int u_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_18);
            }
          else
            {
              t = s_18;
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
                          t = Option_3_0(a_5, b_5, c_5, t);
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
  static ATerm x_4 (ATerm t)
  {
    ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL;
    h_43 = t;
    {
      ATerm b_19 = t;
      int c_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm o_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_43 != NULL) && (g_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_5, t);
          LocalPopChoice(c_19);
        }
      else
        {
          t = b_19;
          t = term_d_19;
          g_43 = t;
        }
    }
    t = not_null(g_43);
    t = ReadFromFile_0_0(t);
    i_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, h_43, i_43);
    t = apply_strategy_1_0(o_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(t_4, q_104, v_4, x_4, t);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL,j_6 = NULL;
  q_43 = t;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  m_43 = t;
  t = o_43;
  {
    ATerm g_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_43 = NULL;
        t = SSL_explode_term(o_43);
        if(match_cons(t, sym__2))
          {
            ATerm j_19 = ATgetArgument(t, 0);
            ATerm l_19 = ATgetArgument(t, 1);
            if(((ATgetType(l_19) == AT_LIST) && !(ATisEmpty(l_19))))
              {
                r_43 = ATgetFirst((ATermList) l_19);
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
        t = r_43;
        LocalPopChoice(i_19);
      }
    else
      {
        t = g_19;
      }
  }
  t = topdown_1_0(t_5, t);
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_43, p_43);
  j_6 = t;
  t = SSLsetAnnotations(j_6, m_43);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
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
  t = iowrap_3_0(r_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
