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
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
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
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_TupleCong_1 = ATmakeSymbol("TupleCong", 1, ATfalse);
  ATprotectSymbol(sym_TupleCong_1);
  sym_TupleCong_0 = ATmakeSymbol("TupleCong", 0, ATfalse);
  ATprotectSymbol(sym_TupleCong_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_w_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_p_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_e_16;
ATerm term_b_16;
ATerm term_a_16;
ATerm term_z_15;
ATerm term_n_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_q_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_h_14;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_x_11;
ATerm term_q_11;
ATerm term_l_11;
ATerm term_i_11;
ATerm term_r_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_j_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_u_6;
ATerm term_w_5;
ATerm term_t_5;
ATerm term_o_5;
ATerm term_a_5;
ATerm term_t_4;
ATerm term_s_4;
ATerm term_r_4;
ATerm term_p_4;
ATerm term_k_3;
void init_constant_terms (void)
{
  ATprotect(&(term_k_3));
  term_k_3 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_4));
  term_r_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_7);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_Call_2, term_x_8, (ATerm) ATempty);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Call_2, term_r_9, (ATerm) ATempty);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_m_12);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_k_3);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_h_13);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_n_15, term_k_3);
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(sym__2, term_b_16, term_k_3);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym__2, term_m_14, term_k_3);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_g_18, term_k_3);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm p_0 (ATerm);
ATerm unquote_chars_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm j_22 (ATerm n_14, ATerm p_14, ATerm);
ATerm n_22 (ATerm f_15, ATerm g_15, ATerm);
ATerm q_0 (ATerm);
ATerm s_0 (ATerm);
ATerm t_0 (ATerm);
ATerm v_0 (ATerm);
ATerm x_0 (ATerm);
ATerm y_0 (ATerm);
ATerm a_1 (ATerm);
ATerm f_1 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm o_1 (ATerm);
ATerm p_1 (ATerm);
ATerm q_1 (ATerm);
ATerm s_1 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm e_5 (ATerm l_54, ATerm m_54, ATerm);
ATerm f_5 (ATerm z_57, ATerm a_58, ATerm);
ATerm h_5 (ATerm p_106 (ATerm), ATerm l_459, ATerm d_58, ATerm);
ATerm g_5 (ATerm v_57, ATerm w_57, ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm u_26 (ATerm o_26, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_5 (ATerm b_58, ATerm);
ATerm j_5 (ATerm n_54, ATerm o_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_28 (ATerm e_27, ATerm);
ATerm g_28 (ATerm i_27, ATerm j_27, ATerm k_27, ATerm);
ATerm h_28 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm y_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm d_5 (ATerm b_49, ATerm c_49, ATerm);
ATerm debug_1_0 (ATerm n_106 (ATerm), ATerm);
ATerm z_1 (ATerm);
ATerm b_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_5 (ATerm c_59, ATerm d_59, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_5 (ATerm a_64, ATerm b_64, ATerm z_63, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_5 (ATerm l_51, ATerm m_51, ATerm);
ATerm foldr_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm w_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm need_help_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_5 (ATerm r_65, ATerm s_65, ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm p_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm s_3 (ATerm);
ATerm t_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm s_112 (ATerm), ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm parse_options_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm iowrap_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_0 = NULL,k_0 = NULL,l_0 = NULL,m_0 = NULL,o_0 = NULL;
  f_0 = t;
  t = term_k_3;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_p_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_4), k_0), term_r_4);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_t_4;
  l_0 = t;
  t = SSL_exit(l_0);
  t = f_0;
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,g_1 = NULL,h_1 = NULL,i_1 = NULL,j_1 = NULL,k_1 = NULL;
  k_1 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_1 = ATgetFirst((ATermList) t);
      h_1 = (ATerm) ATgetNext((ATermList) t);
      t = h_1;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_1 = ATgetFirst((ATermList) t);
          j_1 = (ATerm) ATgetNext((ATermList) t);
          t = i_1;
          if(match_int(t, 34))
            {
              t = g_1;
              if(match_int(t, 92))
                {
                  ATerm u_4 = t;
                  int y_4 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(CheckATermList(j_1), term_a_5);
                      ;
                      LocalPopChoice(y_4);
                    }
                  else
                    {
                      t = u_4;
                      t = k_1;
                    }
                }
              else
                {
                  t = k_1;
                }
            }
          else
            {
              if(match_int(t, 92))
                {
                  t = g_1;
                  if(match_int(t, 92))
                    {
                      ATerm b_5 = t;
                      int c_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = (ATerm) ATinsert(CheckATermList(j_1), term_o_5);
                          ;
                          LocalPopChoice(c_5);
                        }
                      else
                        {
                          t = b_5;
                          t = k_1;
                        }
                    }
                  else
                    {
                      t = k_1;
                    }
                }
              else
                {
                  if(match_int(t, 110))
                    {
                      t = g_1;
                      if(match_int(t, 92))
                        {
                          ATerm r_5 = t;
                          int s_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = (ATerm) ATinsert(CheckATermList(j_1), term_t_5);
                              ;
                              LocalPopChoice(s_5);
                            }
                          else
                            {
                              t = r_5;
                              t = k_1;
                            }
                        }
                      else
                        {
                          t = k_1;
                        }
                    }
                  else
                    {
                      if(match_int(t, 116))
                        {
                          t = g_1;
                          if(match_int(t, 92))
                            {
                              ATerm u_5 = t;
                              int v_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = (ATerm) ATinsert(CheckATermList(j_1), term_w_5);
                                  ;
                                  LocalPopChoice(v_5);
                                }
                              else
                                {
                                  t = u_5;
                                  t = k_1;
                                }
                            }
                          else
                            {
                              t = k_1;
                            }
                        }
                      else
                        {
                          t = k_1;
                        }
                    }
                }
            }
        }
      else
        {
          t = k_1;
        }
    }
  else
    {
      t = k_1;
    }
  j_3 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_3 = ATgetFirst((ATermList) t);
      i_3 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_0 = NULL,u_0 = NULL,n_0 = NULL;
        t = SSLgetAnnotations(j_3);
        r_0 = t;
        t = i_3;
        t = unescape_chars_0_0(t);
        u_0 = t;
        t = (ATerm) ATinsert(CheckATermList(u_0), h_3);
        n_0 = t;
        t = SSLsetAnnotations(n_0, r_0);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_3;
    }
  return(t);
}
ATerm b_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm x_9 = NULL,z_9 = NULL,b_10 = NULL,c_10 = NULL;
  z_9 = t;
  if(match_cons(t, sym_Str_1))
    {
      b_10 = ATgetArgument(t, 0);
      {
        ATerm f_10 = NULL,c_1 = NULL,d_1 = NULL,z_0 = NULL;
        t = SSL_explode_string(b_10);
        t = unquote_chars_1_0(b_0, t);
        z_0 = t;
        t = SSL_implode_string(z_0);
        d_1 = t;
        t = SSL_explode_string(d_1);
        t = unescape_chars_0_0(t);
        c_1 = t;
        t = SSL_implode_string(c_1);
        f_10 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, f_10);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          b_10 = ATgetArgument(t, 0);
          {
            ATerm r_1 = NULL;
            t = SSL_string_to_real(b_10);
            r_1 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, r_1);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              b_10 = ATgetArgument(t, 0);
              {
                ATerm a_2 = NULL;
                t = SSL_string_to_int(b_10);
                a_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, a_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  b_10 = ATgetArgument(t, 0);
                  c_10 = ATgetArgument(t, 1);
                  x_9 = ATgetArgument(t, 2);
                  t = SSL_is_string(x_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_10, c_10, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_9), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      b_10 = ATgetArgument(t, 0);
                      {
                        ATerm f_3 = NULL,n_3 = NULL,o_3 = NULL,e_1 = NULL;
                        t = SSLgetAnnotations(z_9);
                        f_3 = t;
                        t = SSL_explode_string(b_10);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_5 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_5) != AT_INT) || (ATgetInt((ATermInt) x_5) != 39)))
                              _fail(t);
                            n_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(n_3);
                        o_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, o_3);
                        e_1 = t;
                        t = SSLsetAnnotations(e_1, f_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          b_10 = ATgetArgument(t, 0);
                          c_10 = ATgetArgument(t, 1);
                          x_9 = ATgetArgument(t, 2);
                          {
                            ATerm w_3 = NULL,a_4 = NULL,b_4 = NULL,x_2 = NULL;
                            t = SSLgetAnnotations(z_9);
                            w_3 = t;
                            t = SSL_explode_string(b_10);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm b_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(b_6) != AT_INT) || (ATgetInt((ATermInt) b_6) != 39)))
                                  _fail(t);
                                a_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(a_4);
                            b_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, b_4, c_10, x_9);
                            x_2 = t;
                            t = SSLsetAnnotations(x_2, w_3);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              b_10 = ATgetArgument(t, 0);
                              c_10 = ATgetArgument(t, 1);
                              x_9 = ATgetArgument(t, 2);
                              {
                                ATerm q_4 = NULL,x_4 = NULL,z_4 = NULL,y_2 = NULL;
                                t = SSLgetAnnotations(z_9);
                                q_4 = t;
                                t = SSL_explode_string(b_10);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm c_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(c_6) != AT_INT) || (ATgetInt((ATermInt) c_6) != 39)))
                                      _fail(t);
                                    x_4 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(x_4);
                                z_4 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, z_4, c_10, x_9);
                                y_2 = t;
                                t = SSLsetAnnotations(y_2, q_4);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  b_10 = ATgetArgument(t, 0);
                                  c_10 = ATgetArgument(t, 1);
                                  {
                                    ATerm z_5 = NULL,d_6 = NULL,g_6 = NULL,a_3 = NULL;
                                    t = SSLgetAnnotations(z_9);
                                    z_5 = t;
                                    t = SSL_explode_string(b_10);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm h_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 39)))
                                          _fail(t);
                                        d_6 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(d_6);
                                    g_6 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, g_6, c_10);
                                    a_3 = t;
                                    t = SSLsetAnnotations(a_3, z_5);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      b_10 = ATgetArgument(t, 0);
                                      {
                                        ATerm w_6 = NULL,g_7 = NULL,h_7 = NULL,b_3 = NULL;
                                        t = SSLgetAnnotations(z_9);
                                        w_6 = t;
                                        t = SSL_explode_string(b_10);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm i_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                              _fail(t);
                                            g_7 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(g_7);
                                        h_7 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, h_7);
                                        b_3 = t;
                                        t = SSLsetAnnotations(b_3, w_6);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          b_10 = ATgetArgument(t, 0);
                                          {
                                            ATerm h_8 = NULL,o_8 = NULL,u_8 = NULL,c_3 = NULL;
                                            t = SSLgetAnnotations(z_9);
                                            h_8 = t;
                                            t = SSL_explode_string(b_10);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm j_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(j_6) != AT_INT) || (ATgetInt((ATermInt) j_6) != 39)))
                                                  _fail(t);
                                                o_8 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(o_8);
                                            u_8 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, u_8);
                                            c_3 = t;
                                            t = SSLsetAnnotations(c_3, h_8);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              b_10 = ATgetArgument(t, 0);
                                              c_10 = ATgetArgument(t, 1);
                                              {
                                                ATerm u_9 = NULL,a_10 = NULL,d_10 = NULL,d_3 = NULL;
                                                t = SSLgetAnnotations(z_9);
                                                u_9 = t;
                                                t = SSL_explode_string(b_10);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm k_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                                                      _fail(t);
                                                    a_10 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(a_10);
                                                d_10 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, d_10, c_10);
                                                d_3 = t;
                                                t = SSLsetAnnotations(d_3, u_9);
                                              }
                                            }
                                          else
                                            {
                                              ATerm t_10 = NULL,b_11 = NULL,c_11 = NULL,e_3 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  b_10 = ATgetArgument(t, 0);
                                                  c_10 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(z_9);
                                              t_10 = t;
                                              t = SSL_explode_string(b_10);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm l_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                                                    _fail(t);
                                                  b_11 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(b_11);
                                              c_11 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, c_11, c_10);
                                              e_3 = t;
                                              t = SSLsetAnnotations(e_3, t_10);
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
ATerm at_last_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm d_12 (ATerm t)
  {
    ATerm y_11 = NULL,z_11 = NULL,c_12 = NULL;
    y_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_11 = ATgetFirst((ATermList) t);
        c_12 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_6 = t;
      int n_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_12 = NULL,v_4 = NULL;
          t = SSLgetAnnotations(y_11);
          b_12 = t;
          t = c_12;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_12), z_11);
          v_4 = t;
          t = SSLsetAnnotations(v_4, b_12);
          t = z_94(t);
          ;
          LocalPopChoice(n_6);
        }
      else
        {
          t = m_6;
          {
            ATerm x_12 = NULL,f_13 = NULL,w_4 = NULL;
            t = SSLgetAnnotations(y_11);
            x_12 = t;
            t = c_12;
            t = d_12(t);
            f_13 = t;
            t = (ATerm) ATinsert(CheckATermList(f_13), z_11);
            w_4 = t;
            t = SSLsetAnnotations(w_4, x_12);
          }
        }
    }
    return(t);
  }
  t = d_12(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm k_12 = NULL,p_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_12 = ATgetFirst((ATermList) t);
      p_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_12;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_12;
    }
  else
    {
      t = p_12;
      t = last_0_0(t);
    }
  return(t);
}
ATerm p_0 (ATerm t)
{
  ATerm a_13 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_6 = ATgetFirst((ATermList) t);
      a_13 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_13;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,y_12 = NULL,z_12 = NULL;
  w_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_12 = ATgetFirst((ATermList) t);
      {
        ATerm q_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_12;
  t = c_103(t);
  t = w_12;
  t = last_0_0(t);
  t = c_103(t);
  t = w_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm s_6 = ATgetFirst((ATermList) t);
      y_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_12;
  t = at_last_1_0(p_0, t);
  return(t);
}
ATerm j_22 (ATerm n_14, ATerm p_14, ATerm t)
{
  t = n_14;
  {
    ATerm t_6 = t;
    if((PushChoice() == 0))
      {
        ATerm z_14 = NULL,a_15 = NULL,d_15 = NULL,e_15 = NULL,l_5 = NULL;
        e_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_15 = ATgetFirst((ATermList) t);
            d_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_15);
        z_14 = t;
        t = d_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(d_15), a_15);
        l_5 = t;
        t = SSLsetAnnotations(l_5, z_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_6;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_u_6, n_14);
  }
  return(t);
}
ATerm n_22 (ATerm f_15, ATerm g_15, ATerm t)
{
  t = f_15;
  {
    ATerm y_6 = t;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL,s_15 = NULL,x_15 = NULL,y_15 = NULL,q_5 = NULL;
        y_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            s_15 = ATgetFirst((ATermList) t);
            x_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_15);
        k_15 = t;
        t = x_15;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(x_15), s_15);
        q_5 = t;
        t = SSLsetAnnotations(q_5, k_15);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_6;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, f_15);
  }
  return(t);
}
ATerm q_0 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm a_17 = NULL,b_17 = NULL,m_13 = NULL;
  a_17 = t;
  t = SSL_explode_term(a_17);
  if(match_cons(t, sym__2))
    {
      ATerm e_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_7 = ATgetArgument(t, 1);
        if(((ATgetType(i_7) == AT_LIST) && !(ATisEmpty(i_7))))
          {
            b_17 = ATgetFirst((ATermList) i_7);
            {
              ATerm k_7 = (ATerm) ATgetNext((ATermList) i_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_17);
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm o_7 = ATgetArgument(t, 1);
        if(((ATgetType(o_7) == AT_LIST) && !(ATisEmpty(o_7))))
          {
            ATerm p_7 = ATgetFirst((ATermList) o_7);
            ATerm q_7 = (ATerm) ATgetNext((ATermList) o_7);
            if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
              {
                m_13 = ATgetFirst((ATermList) q_7);
                {
                  ATerm s_7 = (ATerm) ATgetNext((ATermList) q_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, m_13), b_17));
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm v_0 (ATerm t)
{
  ATerm n_17 = NULL,o_17 = NULL,w_13 = NULL;
  n_17 = t;
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            o_17 = ATgetFirst((ATermList) w_7);
            {
              ATerm x_7 = (ATerm) ATgetNext((ATermList) w_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(n_17);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            ATerm a_8 = ATgetFirst((ATermList) z_7);
            ATerm b_8 = (ATerm) ATgetNext((ATermList) z_7);
            if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
              {
                w_13 = ATgetFirst((ATermList) b_8);
                {
                  ATerm c_8 = (ATerm) ATgetNext((ATermList) b_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, w_13), o_17));
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm u_17 = NULL,v_17 = NULL,y_13 = NULL;
  u_17 = t;
  t = SSL_explode_term(u_17);
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_8 = ATgetArgument(t, 1);
        if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
          {
            v_17 = ATgetFirst((ATermList) e_8);
            {
              ATerm f_8 = (ATerm) ATgetNext((ATermList) e_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_17);
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            ATerm j_8 = ATgetFirst((ATermList) i_8);
            ATerm k_8 = (ATerm) ATgetNext((ATermList) i_8);
            if(((ATgetType(k_8) == AT_LIST) && !(ATisEmpty(k_8))))
              {
                y_13 = ATgetFirst((ATermList) k_8);
                {
                  ATerm l_8 = (ATerm) ATgetNext((ATermList) k_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, y_13), v_17));
  return(t);
}
ATerm y_0 (ATerm t)
{
  t = term_u_7;
  return(t);
}
ATerm a_1 (ATerm t)
{
  ATerm y_17 = NULL,c_18 = NULL,g_14 = NULL;
  y_17 = t;
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm m_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_8 = ATgetArgument(t, 1);
        if(((ATgetType(n_8) == AT_LIST) && !(ATisEmpty(n_8))))
          {
            c_18 = ATgetFirst((ATermList) n_8);
            {
              ATerm p_8 = (ATerm) ATgetNext((ATermList) n_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(y_17);
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_8 = ATgetArgument(t, 1);
        if(((ATgetType(r_8) == AT_LIST) && !(ATisEmpty(r_8))))
          {
            ATerm s_8 = ATgetFirst((ATermList) r_8);
            ATerm t_8 = (ATerm) ATgetNext((ATermList) r_8);
            if(((ATgetType(t_8) == AT_LIST) && !(ATisEmpty(t_8))))
              {
                g_14 = ATgetFirst((ATermList) t_8);
                {
                  ATerm v_8 = (ATerm) ATgetNext((ATermList) t_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, g_14), c_18));
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm x_18 = NULL,a_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, a_19), x_18));
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm c_19 = NULL,d_19 = NULL;
  if(match_cons(t, sym__2))
    {
      c_19 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_7, (ATerm) ATinsert(ATinsert(ATempty, d_19), c_19));
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, y_19), x_19));
  return(t);
}
ATerm p_1 (ATerm t)
{
  t = term_y_8;
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm d_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_w_8, (ATerm) ATinsert(ATinsert(ATempty, f_20), d_20));
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,f_16 = NULL,i_16 = NULL,k_16 = NULL,o_16 = NULL,q_16 = NULL,s_16 = NULL;
  o_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
      {
        ATerm y_16 = NULL;
        t = s_16;
        t = foldr_2_0(q_0, s_0, t);
        y_16 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_16, y_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_16 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_16, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_16 = ATgetArgument(t, 0);
              {
                ATerm r_13 = NULL;
                t = q_16;
                {
                  ATerm z_8 = t;
                  int a_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_b_9;
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
                                  t = term_w_5;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_t_5;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_d_9;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(a_9);
                    }
                  else
                    {
                      t = z_8;
                      {
                        ATerm t_13 = NULL;
                        t = SSL_explode_string(q_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_9) != AT_INT) || (ATgetInt((ATermInt) e_9) != 39)))
                              _fail(t);
                            {
                              ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
                                {
                                  t_13 = ATgetFirst((ATermList) f_9);
                                  {
                                    ATerm g_9 = (ATerm) ATgetNext((ATermList) f_9);
                                    if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
                                      {
                                        ATerm h_9 = ATgetFirst((ATermList) g_9);
                                        if(((ATgetType(h_9) != AT_INT) || (ATgetInt((ATermInt) h_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm i_9 = (ATerm) ATgetNext((ATermList) g_9);
                                          if(((ATgetType(i_9) != AT_LIST) || !(ATisEmpty(i_9))))
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
                        t = t_13;
                      }
                    }
                  r_13 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, r_13);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  q_16 = ATgetArgument(t, 0);
                  {
                    ATerm h_17 = NULL;
                    t = q_16;
                    t = foldr_2_0(t_0, v_0, t);
                    h_17 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_j_9, (ATerm) ATinsert(ATempty, h_17));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      q_16 = ATgetArgument(t, 0);
                      s_16 = ATgetArgument(t, 1);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = not_null(s_16);
                          return(t);
                        }
                        t = not_null(q_16);
                        t = foldr_2_0(w_0, x_0, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          q_16 = ATgetArgument(t, 0);
                          t = q_16;
                          t = foldr_2_0(y_0, a_1, t);
                        }
                      else
                        {
                          ATerm k_9 = t;
                          int l_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  q_16 = ATgetArgument(t, 0);
                                  {
                                    ATerm m_9 = ATgetArgument(t, 1);
                                  }
                                  k_16 = ATgetArgument(t, 2);
                                  c_16 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(l_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, q_16, k_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_16), (ATerm) ATempty));
                            }
                          else
                            {
                              t = k_9;
                              {
                                ATerm n_9 = t;
                                int o_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Con3_3))
                                      {
                                        q_16 = ATgetArgument(t, 0);
                                        {
                                          ATerm p_9 = ATgetArgument(t, 1);
                                        }
                                        k_16 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(o_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, q_16, k_16, term_s_9);
                                  }
                                else
                                  {
                                    t = n_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        q_16 = ATgetArgument(t, 0);
                                        s_16 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, q_16, s_16, term_s_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            q_16 = ATgetArgument(t, 0);
                                            s_16 = ATgetArgument(t, 1);
                                            {
                                              ATerm b_1 (ATerm t)
                                              {
                                                t = not_null(s_16);
                                                return(t);
                                              }
                                              t = not_null(q_16);
                                              t = foldr_2_0(b_1, f_1, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                q_16 = ATgetArgument(t, 0);
                                                t = q_16;
                                                t = foldr_2_0(l_1, m_1, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    q_16 = ATgetArgument(t, 0);
                                                    t = q_16;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        d_16 = ATgetFirst((ATermList) t);
                                                        f_16 = (ATerm) ATgetNext((ATermList) t);
                                                        t = f_16;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm t_9 = t;
                                                            int v_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = j_22(q_16, o_16, t);
                                                                ;
                                                                LocalPopChoice(v_9);
                                                              }
                                                            else
                                                              {
                                                                t = t_9;
                                                                t = d_16;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = j_22(q_16, o_16, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = j_22(q_16, o_16, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        q_16 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_16));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            q_16 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_16));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                q_16 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_16));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    q_16 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_16));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        q_16 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_16), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            q_16 = ATgetArgument(t, 0);
                                                                            s_16 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_16), s_16);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                q_16 = ATgetArgument(t, 0);
                                                                                s_16 = ATgetArgument(t, 1);
                                                                                {
                                                                                  ATerm n_1 (ATerm t)
                                                                                  {
                                                                                    t = not_null(s_16);
                                                                                    return(t);
                                                                                  }
                                                                                  t = not_null(q_16);
                                                                                  t = foldr_2_0(n_1, o_1, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    q_16 = ATgetArgument(t, 0);
                                                                                    t = q_16;
                                                                                    t = foldr_2_0(p_1, q_1, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        q_16 = ATgetArgument(t, 0);
                                                                                        s_16 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATinsert(CheckATermList(s_16), q_16));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            q_16 = ATgetArgument(t, 0);
                                                                                            t = q_16;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                d_16 = ATgetFirst((ATermList) t);
                                                                                                f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = f_16;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm w_9 = t;
                                                                                                    int y_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = n_22(q_16, o_16, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(y_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = w_9;
                                                                                                        t = d_16;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = n_22(q_16, o_16, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = n_22(q_16, o_16, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_e_10;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    q_16 = ATgetArgument(t, 0);
                                                                                                    s_16 = ATgetArgument(t, 1);
                                                                                                    t = s_16;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        i_16 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_h_10, (ATerm) ATinsert(ATinsert(ATempty, i_16), q_16));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        q_16 = ATgetArgument(t, 0);
                                                                                                        t = q_16;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            q_16 = ATgetArgument(t, 0);
                                                                                                            s_16 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, q_16, s_16, term_i_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                q_16 = ATgetArgument(t, 0);
                                                                                                                s_16 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, q_16, s_16, term_i_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    q_16 = ATgetArgument(t, 0);
                                                                                                                    s_16 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, q_16, (ATerm)ATempty, s_16);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        q_16 = ATgetArgument(t, 0);
                                                                                                                        s_16 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, s_16, q_16);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                          {
                                                                                                                            q_16 = ATgetArgument(t, 0);
                                                                                                                            {
                                                                                                                              ATerm i_21 = NULL,i_14 = NULL;
                                                                                                                              t = SSL_explode_string(q_16);
                                                                                                                              t = unquote_chars_1_0(s_1, t);
                                                                                                                              i_14 = t;
                                                                                                                              t = SSL_implode_string(i_14);
                                                                                                                              i_21 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Prim_2, i_21, (ATerm) ATempty);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                              {
                                                                                                                                q_16 = ATgetArgument(t, 0);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, q_16, (ATerm) ATempty);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_16 = ATgetArgument(t, 0);
                                                                                                                                    s_16 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, q_16, (ATerm)ATempty, s_16);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        q_16 = ATgetArgument(t, 0);
                                                                                                                                        s_16 = ATgetArgument(t, 1);
                                                                                                                                        k_16 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, q_16, s_16, k_16);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_16 = ATgetArgument(t, 0);
                                                                                                                                            s_16 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, q_16, (ATerm)ATempty, s_16);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                q_16 = ATgetArgument(t, 0);
                                                                                                                                                s_16 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, q_16, (ATerm)ATempty, s_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                  {
                                                                                                                                                    ATerm j_10 = ATgetArgument(t, 0);
                                                                                                                                                    s_16 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  _fail(t);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, s_16);
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
ATerm repeat_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm t_22 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_87(t);
        t = t_22(t);
        ;
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(h_88, t);
    return(t);
  }
  t = h_88(t);
  t = SRTS_all(t_1, t);
  return(t);
}
ATerm e_5 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm v_22 = NULL;
  t = SSL_fputc(l_54, m_54);
  v_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_22);
  return(t);
}
ATerm f_5 (ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm w_22 = NULL;
  t = SSL_write_term_to_stream_text(z_57, a_58);
  w_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_22);
  return(t);
}
ATerm h_5 (ATerm p_106 (ATerm), ATerm l_459, ATerm d_58, ATerm t)
{
  ATerm x_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_459, term_m_10);
  t = open_stream_0_0(t);
  x_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_22, d_58);
  t = p_106(t);
  t = fclose_0_0(t);
  t = d_58;
  return(t);
}
ATerm g_5 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm e_23 = NULL;
  t = SSL_write_term_to_stream_baf(v_57, w_57);
  e_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_23);
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm w_1 (ATerm t)
{
  ATerm x_14 = NULL,y_14 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_10 = ATgetArgument(t, 0);
      if(match_cons(n_10, sym_Stream_1))
        {
          x_14 = ATgetArgument(n_10, 0);
        }
      else
        _fail(t);
      y_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(x_14, y_14, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm r_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_10 = ATgetArgument(t, 0);
      if(match_cons(o_10, sym_Stream_1))
        {
          v_15 = ATgetArgument(o_10, 0);
        }
      else
        _fail(t);
      w_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(v_15, w_15, t);
  r_15 = t;
  t = term_t_5;
  t_15 = t;
  t = r_15;
  if(match_cons(t, sym_Stream_1))
    {
      u_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_5, r_15);
  t = e_5(t_15, u_15, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm m_23 = NULL,p_23 = NULL,q_23 = NULL,r_23 = NULL,u_23 = NULL,x_23 = NULL,y_23 = NULL,z_23 = NULL,a_24 = NULL,b_24 = NULL,y_25 = NULL,z_25 = NULL,a_6 = NULL,y_5 = NULL;
  if(((p_23 != NULL) && (p_23 != t)))
    _fail(t);
  else
    p_23 = t;
  if(match_cons(t, sym__2))
    {
      if(((z_23 != NULL) && (z_23 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        z_23 = ATgetArgument(t, 0);
      if(((a_24 != NULL) && (a_24 != ATgetArgument(t, 1))))
        _fail(ATgetArgument(t, 1));
      else
        a_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(not_null(p_23));
  if(((y_23 != NULL) && (y_23 != t)))
    _fail(t);
  else
    y_23 = t;
  t = not_null(z_23);
  {
    ATerm p_10 = t;
    int q_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((m_23 != NULL) && (m_23 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                m_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_1, t);
        ;
        LocalPopChoice(q_10);
      }
    else
      {
        t = p_10;
        t = term_r_10;
        if(((m_23 != NULL) && (m_23 != t)))
          _fail(t);
        else
          m_23 = t;
      }
    if(((b_24 != NULL) && (b_24 != t)))
      _fail(t);
    else
      b_24 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_24), not_null(a_24));
    if(((y_5 != NULL) && (y_5 != t)))
      _fail(t);
    else
      y_5 = t;
    t = SSLsetAnnotations(not_null(y_5), not_null(y_23));
    t = not_null(p_23);
    if(match_cons(t, sym__2))
      {
        if(((r_23 != NULL) && (r_23 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          r_23 = ATgetArgument(t, 0);
        if(((u_23 != NULL) && (u_23 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          u_23 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(p_23));
    if(((q_23 != NULL) && (q_23 != t)))
      _fail(t);
    else
      q_23 = t;
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_23), (ATerm) ATmakeAppl(sym__2, not_null(m_23), not_null(u_23)));
    if(((a_6 != NULL) && (a_6 != t)))
      _fail(t);
    else
      a_6 = t;
    t = SSLsetAnnotations(not_null(a_6), not_null(q_23));
    if(((x_23 != NULL) && (x_23 != t)))
      _fail(t);
    else
      x_23 = t;
    if(match_cons(t, sym__2))
      {
        if(((y_25 != NULL) && (y_25 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          y_25 = ATgetArgument(t, 0);
        if(((z_25 != NULL) && (z_25 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          z_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm s_10 = t;
      int u_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_14 = NULL,s_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,e_6 = NULL;
          t = SSLgetAnnotations(not_null(x_23));
          o_14 = t;
          t = not_null(y_25);
          t = fetch_1_0(v_1, t);
          s_14 = t;
          t = not_null(z_25);
          if(match_cons(t, sym__2))
            {
              v_14 = ATgetArgument(t, 0);
              w_14 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_5(w_1, v_14, w_14, t);
          u_14 = t;
          t = (ATerm) ATmakeAppl(sym__2, s_14, u_14);
          e_6 = t;
          t = SSLsetAnnotations(e_6, o_14);
          ;
          LocalPopChoice(u_10);
        }
      else
        {
          t = s_10;
          {
            ATerm l_15 = NULL,o_15 = NULL,p_15 = NULL,q_15 = NULL,f_6 = NULL;
            t = SSLgetAnnotations(not_null(x_23));
            l_15 = t;
            t = not_null(z_25);
            if(match_cons(t, sym__2))
              {
                p_15 = ATgetArgument(t, 0);
                q_15 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_5(x_1, p_15, q_15, t);
            o_15 = t;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_25), o_15);
            f_6 = t;
            t = SSLsetAnnotations(f_6, l_15);
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
ATerm apply_strategy_1_0 (ATerm r_109 (ATerm), ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  g_26 = t;
  t = dtime_0_0(t);
  t = g_26;
  t = r_109(t);
  f_26 = t;
  t = dtime_0_0(t);
  c_26 = t;
  t = f_26;
  if(match_cons(t, sym__2))
    {
      d_26 = ATgetArgument(t, 0);
      e_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_26), (ATerm) ATmakeAppl(sym_Runtime_1, c_26)), e_26);
  return(t);
}
ATerm u_26 (ATerm o_26, ATerm t)
{
  t = SSL_fclose(o_26);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_26 = NULL,s_26 = NULL;
  s_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_26 = ATgetArgument(t, 0);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_26);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            t = u_26(s_26, t);
          }
      }
    }
  else
    {
      t = u_26(s_26, t);
    }
  return(t);
}
ATerm i_5 (ATerm b_58, ATerm t)
{
  t = SSL_read_term_from_stream(b_58);
  return(t);
}
ATerm j_5 (ATerm n_54, ATerm o_54, ATerm t)
{
  ATerm v_26 = NULL;
  t = SSL_fopen(n_54, o_54);
  v_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_26);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_stdin_stream();
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_stdout_stream();
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_stderr_stream();
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm f_28 (ATerm e_27, ATerm t)
{
  ATerm f_27 = NULL;
  t = SSL_explode_term(e_27);
  if(match_cons(t, sym__2))
    {
      ATerm x_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_10 = ATgetArgument(t, 1);
        if(((ATgetType(y_10) == AT_LIST) && !(ATisEmpty(y_10))))
          {
            f_27 = ATgetFirst((ATermList) y_10);
            {
              ATerm z_10 = (ATerm) ATgetNext((ATermList) y_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = f_27;
  if(match_cons(t, sym_stderr_0))
    {
      t = f_27;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = f_27;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = f_27;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_28 (ATerm i_27, ATerm j_27, ATerm k_27, ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,q_27 = NULL,p_6 = NULL;
  t = SSLgetAnnotations(k_27);
  n_27 = t;
  t = i_27;
  if(match_cons(t, sym_Path_1))
    {
      q_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_27, j_27);
  p_6 = t;
  t = SSLsetAnnotations(p_6, n_27);
  if(match_cons(t, sym__2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(l_27, m_27, t);
  return(t);
}
ATerm h_28 (ATerm s_27, ATerm t_27, ATerm u_27, ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,a_28 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(u_27);
  x_27 = t;
  t = SSL_is_string(s_27);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_28, t_27);
  r_6 = t;
  t = SSLsetAnnotations(r_6, x_27);
  if(match_cons(t, sym__2))
    {
      v_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(v_27, w_27, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_11 = ATgetArgument(t, 0);
      ATerm d_11 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      d_28 = ATgetArgument(t, 0);
      e_28 = ATgetArgument(t, 1);
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_28(c_28, t);
            ;
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm g_11 = t;
              int h_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_28(d_28, e_28, c_28, t);
                  ;
                  LocalPopChoice(h_11);
                }
              else
                {
                  t = g_11;
                  t = h_28(d_28, e_28, c_28, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_28(c_28, t);
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_i_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_28 = NULL;
      l_28 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_28, term_l_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = debug_1_0(y_1, t);
      _fail(t);
    }
  j_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(k_28, t);
  i_28 = t;
  t = j_28;
  t = fclose_0_0(t);
  t = i_28;
  return(t);
}
ATerm fetch_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm j_29 (ATerm t)
  {
    ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
    g_29 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_29 = ATgetFirst((ATermList) t);
        i_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm m_11 = t;
      int n_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_16 = NULL,x_16 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(g_29);
          r_16 = t;
          t = h_29;
          t = i_94(t);
          x_16 = t;
          t = (ATerm) ATinsert(CheckATermList(i_29), x_16);
          v_6 = t;
          t = SSLsetAnnotations(v_6, r_16);
          ;
          LocalPopChoice(n_11);
        }
      else
        {
          t = m_11;
          {
            ATerm t_17 = NULL,b_18 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(g_29);
            t_17 = t;
            t = i_29;
            t = j_29(t);
            b_18 = t;
            t = (ATerm) ATinsert(CheckATermList(b_18), h_29);
            x_6 = t;
            t = SSLsetAnnotations(x_6, t_17);
          }
        }
    }
    return(t);
  }
  t = j_29(t);
  return(t);
}
ATerm d_5 (ATerm b_49, ATerm c_49, ATerm t)
{
  t = SSL_strcat(b_49, c_49);
  return(t);
}
ATerm debug_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL;
  m_29 = t;
  t = n_106(t);
  n_29 = t;
  t = term_p_4;
  o_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_29), n_29);
  p_29 = t;
  t = SSL_printnl(o_29, p_29);
  t = m_29;
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
    }
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_29 = NULL;
      w_29 = t;
      t = SSL_is_string(w_29);
      ;
      LocalPopChoice(s_11);
    }
  else
    {
      t = r_11;
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(z_1, t);
            ;
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            {
              ATerm c_30 = NULL,d_30 = NULL,e_30 = NULL;
              c_30 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_30 = ATgetArgument(t, 0);
                  t = d_30;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_30 = ATgetArgument(t, 0);
                      t = d_30;
                      {
                        ATerm v_11 = t;
                        int w_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(w_11);
                          }
                        else
                          {
                            t = v_11;
                            t = debug_1_0(b_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm i_30 = NULL,j_30 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_30 = ATgetArgument(t, 0);
                          e_30 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_30;
                      t = eval_config_0_0(t);
                      i_30 = t;
                      t = e_30;
                      t = eval_config_0_0(t);
                      j_30 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_30, j_30);
                      t = d_5(i_30, j_30, t);
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
  ATerm n_30 = NULL,o_30 = NULL;
  n_30 = t;
  t = term_x_11;
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, n_30);
  t = m_5(o_30, n_30, t);
  {
    ATerm a_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_30 = NULL,q_30 = NULL;
        t = eval_config_0_0(t);
        p_30 = t;
        t = term_x_11;
        q_30 = t;
        t = SSL_table_put(q_30, n_30, p_30);
        t = p_30;
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = a_12;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm u_30 = NULL;
  u_30 = t;
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_30 = NULL;
        t = term_h_12;
        t = get_config_0_0(t);
        w_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_30, term_i_12);
        t = geq_0_0(t);
        t = u_30;
        t = a_108(t);
        ;
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = u_30;
      }
  }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  if(match_string(t, "-k"))
    {
      t = z_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_30;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  t = SSL_string_to_int(a_31);
  b_31 = t;
  t = term_j_12;
  c_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, b_31);
  t = p_5(c_31, b_31, t);
  t = a_31;
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_l_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  if(match_string(t, "-S"))
    {
      t = e_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_31;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL;
  t = term_h_12;
  f_31 = t;
  t = term_m_12;
  g_31 = t;
  t = term_n_12;
  t = p_5(f_31, g_31, t);
  t = term_o_12;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm i_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  t = SSL_string_to_int(h_31);
  i_31 = t;
  t = term_h_12;
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, i_31);
  t = p_5(j_31, i_31, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_31);
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm l_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL;
  t = term_s_12;
  k_31 = t;
  t = term_k_3;
  l_31 = t;
  t = term_t_12;
  t = p_5(k_31, l_31, t);
  t = term_u_12;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_v_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_2, g_2, h_2, t);
      ;
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(i_2, j_2, k_2, t);
            ;
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            t = Option_3_0(l_2, m_2, n_2, t);
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm m_31 = NULL;
  t = term_x_11;
  m_31 = t;
  t = SSL_table_put(m_31, c_59, d_59);
  t = (ATerm) ATmakeAppl(sym__3, term_x_11, c_59, d_59);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm p_31 = NULL,q_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
      t = term_k_3;
      t = d_0(t);
      r_31 = t;
      t = term_g_13;
      s_31 = t;
      t = term_h_13;
      t_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_13, term_h_13, r_31);
      t = n_5(s_31, t_31, r_31, t);
      _fail(t);
    }
  else
    {
      ATerm u_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_31 = ATgetFirst((ATermList) t);
          q_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_31;
      t = a_0(t);
      t = term_k_3;
      t = c_0(t);
      u_34 = t;
      t = (ATerm) ATinsert(CheckATermList(q_31), u_34);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  if(match_string(t, "-o"))
    {
      t = w_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = w_34;
    }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  x_34 = t;
  t = term_i_13;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_13, x_34);
  t = p_5(y_34, x_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, x_34);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_j_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_2, p_2, q_2, t);
  return(t);
}
ATerm n_5 (ATerm a_64, ATerm b_64, ATerm z_63, ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm n_13 = ATgetArgument(t, 0);
            ATerm o_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
        t = m_5(a_64, b_64, t);
        ;
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        t = (ATerm) ATempty;
      }
    b_35 = t;
    t = (ATerm) ATinsert(CheckATermList(b_35), z_63);
    c_35 = t;
    t = SSL_table_put(a_64, b_64, c_35);
    t = a_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
      t = term_k_3;
      t = j_0(t);
      n_35 = t;
      t = term_g_13;
      o_35 = t;
      t = term_h_13;
      p_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_g_13, term_h_13, n_35);
      t = n_5(o_35, p_35, n_35, t);
      _fail(t);
    }
  else
    {
      ATerm t_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_35 = ATgetFirst((ATermList) t);
          k_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_35 = ATgetFirst((ATermList) t);
          m_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_35;
      t = h_0(t);
      t = l_35;
      t = i_0(t);
      t_35 = t;
      t = (ATerm) ATinsert(CheckATermList(m_35), t_35);
    }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  if(match_string(t, "-i"))
    {
      t = v_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_35;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL;
  w_35 = t;
  t = term_p_13;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_13, w_35);
  t = p_5(x_35, w_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_35);
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_3;
  t = whoami_0_0(t);
  y_35 = t;
  t = term_p_4;
  a_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_13), y_35);
  b_36 = t;
  t = SSL_printnl(a_36, b_36);
  t = term_t_4;
  z_35 = t;
  t = SSL_exit(z_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_u_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_5 (ATerm l_51, ATerm m_51, ATerm t)
{
  ATerm v_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_51, m_51);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = v_13;
      t = SSL_addr(l_51, m_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
  d_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_36;
      t = b_100(t);
    }
  else
    {
      ATerm i_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_36 = ATgetFirst((ATermList) t);
          f_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_36;
      t = foldr_2_0(b_100, c_100, t);
      i_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_36, i_36);
      t = c_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(p_19, q_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_36 = NULL,z_18 = NULL,g_19 = NULL;
  t = times_0_0(t);
  g_19 = t;
  t = SSL_explode_term(g_19);
  if(match_cons(t, sym__2))
    {
      ATerm z_13 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_18;
  t = foldr_2_0(u_2, v_2, t);
  l_36 = t;
  t = SSL_TicksToSeconds(l_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,a_37 = NULL;
  w_36 = t;
  if(match_cons(t, sym__2))
    {
      x_36 = ATgetArgument(t, 0);
      a_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_37;
        if((x_36 != t))
          {
            _fail(t);
          }
        t = w_36;
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        t = (ATerm) ATmakeAppl(sym__2, x_36, a_37);
        {
          ATerm c_14 = t;
          int d_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_36, a_37);
              ;
              LocalPopChoice(d_14);
            }
          else
            {
              t = c_14;
              t = SSL_gtr(x_36, a_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_36, a_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_37 = NULL;
        t = term_h_12;
        t = get_config_0_0(t);
        g_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_37, term_t_4);
        t = geq_0_0(t);
        t = e_37;
        t = z_107(t);
        ;
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        t = e_37;
      }
  }
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,l_37 = NULL,m_37 = NULL;
  t = run_time_0_0(t);
  i_37 = t;
  t = term_k_3;
  t = whoami_0_0(t);
  j_37 = t;
  t = term_p_4;
  l_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), i_37), term_h_14), j_37);
  m_37 = t;
  t = SSL_printnl(l_37, m_37);
  t = (ATerm) ATmakeAppl(sym__2, term_p_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_14), i_37), term_h_14), j_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_m_12;
  n_37 = t;
  t = SSL_exit(n_37);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_37 = ATgetArgument(t, 0);
          {
            ATerm l_20 = NULL,b_7 = NULL;
            t = SSLgetAnnotations(w_37);
            l_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_37);
            b_7 = t;
            t = SSLsetAnnotations(b_7, l_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm k_14 = t;
  int l_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_14;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_14);
    }
  else
    {
      t = k_14;
      t = fetch_1_0(z_2, t);
    }
  t = p_110(t);
  return(t);
}
ATerm map_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm m_38 (ATerm t)
  {
    ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
    j_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_38;
      }
    else
      {
        ATerm f_21 = NULL,m_21 = NULL,n_21 = NULL,d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_38 = ATgetFirst((ATermList) t);
            l_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_38);
        f_21 = t;
        t = k_38;
        t = y_93(t);
        m_21 = t;
        t = l_38;
        t = m_38(t);
        n_21 = t;
        t = (ATerm) ATinsert(CheckATermList(n_21), m_21);
        d_7 = t;
        t = SSLsetAnnotations(d_7, f_21);
      }
    return(t);
  }
  t = m_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm p_38 = NULL,q_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_38 = ATgetFirst((ATermList) t);
      q_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_38 = NULL,v_38 = NULL;
        ATerm g_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_38)), not_null(v_38));
          return(t);
        }
        t = not_null(q_38);
        t = g_0(t);
        if(((u_38 != NULL) && (u_38 != t)))
          _fail(t);
        else
          u_38 = t;
        t = not_null(p_38);
        t = e_0(t);
        if(((v_38 != NULL) && (v_38 != t)))
          _fail(t);
        else
          v_38 = t;
        t = not_null(q_38);
        t = reverse_acc_2_0(e_0, g_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_3;
      t = g_0(t);
    }
  return(t);
}
ATerm m_5 (ATerm r_65, ATerm s_65, ATerm t)
{
  t = SSL_table_get(r_65, s_65);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL,f_7 = NULL;
  b_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_39);
  z_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, a_39);
  f_7 = t;
  t = SSLsetAnnotations(f_7, z_38);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, d_39), term_q_14);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  ATerm r_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(t_14);
    }
  else
    {
      t = r_14;
      t = fetch_1_0(l_3, t);
    }
  t = term_b_15;
  t = echo_0_0(t);
  t = term_g_13;
  x_38 = t;
  t = term_h_13;
  y_38 = t;
  t = term_c_15;
  t = m_5(x_38, y_38, t);
  t = reverse_acc_2_0(_id, m_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
  f_39 = t;
  {
    ATerm h_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = f_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_15 = ATgetFirst((ATermList) t);
                ATerm m_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = f_39;
          }
        ;
        LocalPopChoice(i_15);
      }
    else
      {
        t = h_15;
        t = (ATerm) ATinsert(ATempty, f_39);
      }
    g_39 = t;
    t = term_r_10;
    h_39 = t;
    t = SSL_printnl(h_39, g_39);
    t = f_39;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_u_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL;
  t = term_n_15;
  l_39 = t;
  t = term_k_3;
  m_39 = t;
  t = term_z_15;
  t = p_5(l_39, m_39, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_a_16;
  return(t);
}
ATerm t_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  t = term_n_15;
  p_39 = t;
  t = term_k_3;
  q_39 = t;
  t = term_z_15;
  t = p_5(p_39, q_39, t);
  t = term_b_16;
  n_39 = t;
  t = term_k_3;
  o_39 = t;
  t = term_e_16;
  t = p_5(n_39, o_39, t);
  t = term_g_16;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_h_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_3, r_3, s_3, t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = j_16;
      t = Option_3_0(t_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,j_7 = NULL;
  w_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_39 = ATgetFirst((ATermList) t);
      t_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_39);
  r_39 = t;
  t = s_39;
  t = h_73(t);
  u_39 = t;
  t = t_39;
  t = i_73(t);
  v_39 = t;
  t = (ATerm) ATinsert(CheckATermList(v_39), u_39);
  j_7 = t;
  t = SSLsetAnnotations(j_7, r_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,g_40 = NULL,h_40 = NULL,l_7 = NULL;
  if(((b_40 != NULL) && (b_40 != t)))
    _fail(t);
  else
    b_40 = t;
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_16;
        t = s_112(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
      }
    t = not_null(b_40);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_40 != NULL) && (d_40 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_40 = ATgetFirst((ATermList) t);
        if(((e_40 != NULL) && (e_40 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_40));
    if(((c_40 != NULL) && (c_40 != t)))
      _fail(t);
    else
      c_40 = t;
    t = term_u_13;
    if(((h_40 != NULL) && (h_40 != t)))
      _fail(t);
    else
      h_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_u_13, not_null(d_40));
    t = p_5(not_null(h_40), not_null(d_40), t);
    t = not_null(e_40);
    {
      ATerm r_40 (ATerm t)
      {
        ATerm t_16 = t;
        int u_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = t;
            int w_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_40 = NULL;
                k_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_40;
                ;
                LocalPopChoice(w_16);
              }
            else
              {
                t = v_16;
                t = s_112(t);
                t = Cons_2_0(_id, r_40, t);
              }
            ;
            LocalPopChoice(u_16);
          }
        else
          {
            t = t_16;
            {
              ATerm n_40 = NULL,o_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_40 = ATgetFirst((ATermList) t);
                  o_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_40), (ATerm) ATmakeAppl(sym_Undefined_1, n_40));
            }
          }
        return(t);
      }
      t = r_40(t);
      if(((g_40 != NULL) && (g_40 != t)))
        _fail(t);
      else
        g_40 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_40)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_40)));
      if(((l_7 != NULL) && (l_7 != t)))
        _fail(t);
      else
        l_7 = t;
      t = SSLsetAnnotations(not_null(l_7), not_null(c_40));
    }
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  if(match_string(t, "--help"))
    {
      t = d_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_41;
        }
    }
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_m_14;
  e_41 = t;
  t = term_k_3;
  f_41 = t;
  t = term_z_16;
  t = p_5(e_41, f_41, t);
  t = term_c_17;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm d_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL;
  if(((y_40 != NULL) && (y_40 != t)))
    _fail(t);
  else
    y_40 = t;
  t = term_g_13;
  if(((a_41 != NULL) && (a_41 != t)))
    _fail(t);
  else
    a_41 = t;
  t = term_h_13;
  if(((b_41 != NULL) && (b_41 != t)))
    _fail(t);
  else
    b_41 = t;
  t = (ATerm) ATempty;
  if(((c_41 != NULL) && (c_41 != t)))
    _fail(t);
  else
    c_41 = t;
  t = SSL_table_put(not_null(a_41), not_null(b_41), not_null(c_41));
  t = not_null(y_40);
  {
    ATerm x_3 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_112(t);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm g_17 = t;
            int i_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_3, z_3, c_4, t);
                ;
                LocalPopChoice(i_17);
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
    t = parse_options_p__1_0(x_3, t);
    {
      ATerm j_17 = t;
      int k_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_41 = NULL;
          m_41 = t;
          {
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm b_22 = NULL;
                t = m_41;
                {
                  ATerm p_17 = t;
                  int q_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_m_14;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(q_17);
                    }
                  else
                    {
                      t = p_17;
                      t = fetch_1_0(d_4, t);
                    }
                  t = m_41;
                  t = default_system_usage_0_0(t);
                  t = term_m_12;
                  b_22 = t;
                  t = SSL_exit(b_22);
                }
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                {
                  ATerm i_22 = NULL;
                  t = term_n_15;
                  t = get_config_0_0(t);
                  t = m_41;
                  t = default_system_about_0_0(t);
                  t = term_m_12;
                  i_22 = t;
                  t = SSL_exit(i_22);
                }
              }
          }
          ;
          LocalPopChoice(k_17);
        }
      else
        {
          t = j_17;
          {
            ATerm r_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
                ATerm e_4 (ATerm t)
                {
                  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,n_7 = NULL;
                  s_41 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_41);
                  q_41 = t;
                  t = r_41;
                  if(((w_40 != NULL) && (w_40 != t)))
                    _fail(t);
                  else
                    w_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_41);
                  n_7 = t;
                  t = SSLsetAnnotations(n_7, q_41);
                  return(t);
                }
                t = fetch_1_0(e_4, t);
                t = term_p_4;
                if(((o_41 != NULL) && (o_41 != t)))
                  _fail(t);
                else
                  o_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_40)), term_w_17);
                if(((p_41 != NULL) && (p_41 != t)))
                  _fail(t);
                else
                  p_41 = t;
                t = SSL_printnl(not_null(o_41), not_null(p_41));
                t = (ATerm) ATmakeAppl(sym__2, term_p_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_40)), term_w_17));
                t = default_system_usage_0_0(t);
                t = term_t_4;
                if(((n_41 != NULL) && (n_41 != t)))
                  _fail(t);
                else
                  n_41 = t;
                t = SSL_exit(not_null(n_41));
                ;
                LocalPopChoice(s_17);
              }
            else
              {
                t = r_17;
              }
          }
        }
      if(((x_40 != NULL) && (x_40 != t)))
        _fail(t);
      else
        x_40 = t;
      t = term_g_13;
      if(((z_40 != NULL) && (z_40 != t)))
        _fail(t);
      else
        z_40 = t;
      t = SSL_table_destroy(not_null(z_40));
      t = not_null(x_40);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  t = parse_options_1_0(r_110, t);
  x_41 = t;
  t = term_x_17;
  a_42 = t;
  t = SSL_table_create(a_42);
  t = term_x_17;
  y_41 = t;
  t = term_z_17;
  z_41 = t;
  t = SSL_table_put(y_41, z_41, x_41);
  t = x_41;
  t = t_110(t);
  {
    ATerm a_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_110, t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = a_18;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = if_verbose2_1_0(l_4, t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_4 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_g_18;
  b_42 = t;
  t = term_k_3;
  c_42 = t;
  t = term_h_18;
  t = p_5(b_42, c_42, t);
  t = term_i_18;
  return(t);
}
ATerm k_4 (ATerm t)
{
  t = term_j_18;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  d_42 = t;
  t = term_u_13;
  t = get_config_0_0(t);
  e_42 = t;
  t = term_p_4;
  f_42 = t;
  t = (ATerm) ATinsert(ATempty, e_42);
  g_42 = t;
  t = SSL_printnl(f_42, g_42);
  t = d_42;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm k_18 = t;
    int l_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_110(t);
        ;
        LocalPopChoice(l_18);
      }
    else
      {
        t = k_18;
        {
          ATerm m_18 = t;
          int n_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(n_18);
            }
          else
            {
              t = m_18;
              {
                ATerm o_18 = t;
                int p_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(p_18);
                  }
                else
                  {
                    t = o_18;
                    {
                      ATerm q_18 = t;
                      int r_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_4, j_4, k_4, t);
                          ;
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
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(t_18);
                              }
                            else
                              {
                                t = s_18;
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
  ATerm h_4 (ATerm t)
  {
    ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
    if(((i_42 != NULL) && (i_42 != t)))
      _fail(t);
    else
      i_42 = t;
    {
      ATerm u_18 = t;
      int v_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((h_42 != NULL) && (h_42 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  h_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(m_4, t);
          ;
          LocalPopChoice(v_18);
        }
      else
        {
          t = u_18;
          t = term_w_18;
          if(((h_42 != NULL) && (h_42 != t)))
            _fail(t);
          else
            h_42 = t;
        }
      t = not_null(h_42);
      t = ReadFromFile_0_0(t);
      if(((j_42 != NULL) && (j_42 != t)))
        _fail(t);
      else
        j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_42), not_null(j_42));
      t = apply_strategy_1_0(a_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(f_4, c_110, g_4, h_4, t);
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,r_7 = NULL;
  s_42 = t;
  if(match_cons(t, sym__2))
    {
      p_42 = ATgetArgument(t, 0);
      q_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  o_42 = t;
  t = q_42;
  {
    ATerm y_18 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_42 = NULL;
        t = SSL_explode_term(q_42);
        if(match_cons(t, sym__2))
          {
            ATerm e_19 = ATgetArgument(t, 0);
            ATerm f_19 = ATgetArgument(t, 1);
            if(((ATgetType(f_19) == AT_LIST) && !(ATisEmpty(f_19))))
              {
                t_42 = ATgetFirst((ATermList) f_19);
                {
                  ATerm h_19 = (ATerm) ATgetNext((ATermList) f_19);
                  if(((ATgetType(h_19) != AT_LIST) || !(ATisEmpty(h_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = t_42;
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = y_18;
      }
    t = topdown_1_0(o_4, t);
    r_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_42, r_42);
    r_7 = t;
    t = SSLsetAnnotations(r_7, o_42);
  }
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(n_4, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
