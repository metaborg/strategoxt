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
ATerm term_x_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_g_18;
ATerm term_e_18;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_n_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_s_15;
ATerm term_q_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_n_14;
ATerm term_l_14;
ATerm term_q_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_k_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_b_13;
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
ATerm term_j_12;
ATerm term_i_12;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_i_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_x_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_a_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_s_5;
ATerm term_r_5;
void init_constant_terms (void)
{
  ATprotect(&(term_r_5));
  term_r_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(9);
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
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Sort_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_7);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATempty);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_9);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym_Call_2, term_q_9, (ATerm) ATempty);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATempty);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_n_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_s_12, term_r_5);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_b_13, term_c_13);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_r_5);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym__2, term_v_15, term_r_5);
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_b_15, term_r_5);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(sym__2, term_e_18, term_r_5);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm unescape_chars_1_0 (ATerm d_90 (ATerm), ATerm);
ATerm a_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm l_81 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm unquote_chars_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm);
ATerm a_24 (ATerm l_13, ATerm m_13, ATerm);
ATerm h_24 (ATerm y_13, ATerm a_14, ATerm);
ATerm t_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm l_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm q_1 (ATerm);
ATerm t_1 (ATerm);
ATerm u_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_74 (ATerm), ATerm);
ATerm e_5 (ATerm x_40, ATerm y_40, ATerm);
ATerm f_5 (ATerm l_44, ATerm m_44, ATerm);
ATerm h_5 (ATerm h_93 (ATerm), ATerm s_428, ATerm p_44, ATerm);
ATerm g_5 (ATerm h_44, ATerm i_44, ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_96 (ATerm), ATerm);
ATerm g_29 (ATerm a_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_5 (ATerm n_44, ATerm);
ATerm j_5 (ATerm z_40, ATerm a_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm t_30 (ATerm r_29, ATerm);
ATerm u_30 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm);
ATerm v_30 (ATerm f_30, ATerm g_30, ATerm h_30, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm l_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_80 (ATerm), ATerm);
ATerm d_5 (ATerm n_35, ATerm o_35, ATerm);
ATerm debug_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_94 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_5 (ATerm o_45, ATerm p_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_5 (ATerm m_50, ATerm n_50, ATerm l_50, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm i_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_5 (ATerm x_37, ATerm y_37, ATerm);
ATerm foldr_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_94 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm need_help_1_0 (ATerm h_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm m_5 (ATerm d_52, ATerm e_52, ATerm);
ATerm r_3 (ATerm);
ATerm w_3 (ATerm);
ATerm z_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_99 (ATerm), ATerm);
ATerm j_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm parse_options_1_0 (ATerm j_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm w_4 (ATerm);
ATerm a_5 (ATerm);
ATerm b_5 (ATerm);
ATerm iowrap_3_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm stratego_desugar_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm b_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,o_0 = NULL;
  b_0 = t;
  t = term_r_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_s_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_5), c_0), term_u_5);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_w_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm d_90 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
    ATerm x_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_90(t);
        ;
        LocalPopChoice(z_5);
      }
    else
      {
        t = x_5;
      }
    i_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_1 = ATgetFirst((ATermList) t);
        h_1 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm r_0 = NULL,x_0 = NULL,n_0 = NULL;
          t = SSLgetAnnotations(i_1);
          r_0 = t;
          t = h_1;
          t = j_1(t);
          x_0 = t;
          t = (ATerm) ATinsert(CheckATermList(x_0), g_1);
          n_0 = t;
          t = SSLsetAnnotations(n_0, r_0);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = i_1;
      }
    return(t);
  }
  t = j_1(t);
  return(t);
}
ATerm a_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm p_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,y_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_1 = ATgetFirst((ATermList) t);
      w_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
    _fail(t);
  t = w_1;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_1 = ATgetFirst((ATermList) t);
      y_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_1;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(CheckATermList(y_1), term_a_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(y_1), term_c_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(y_1), term_d_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_1), term_f_6);
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm r_8 = NULL,s_8 = NULL,t_8 = NULL,w_8 = NULL;
  s_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      t_8 = ATgetArgument(t, 0);
      {
        ATerm a_9 = NULL,r_1 = NULL,s_1 = NULL,o_1 = NULL;
        t = SSL_explode_string(t_8);
        t = unquote_chars_2_0(a_0, p_0, t);
        o_1 = t;
        t = SSL_implode_string(o_1);
        s_1 = t;
        t = SSL_explode_string(s_1);
        t = unescape_chars_1_0(q_0, t);
        r_1 = t;
        t = SSL_implode_string(r_1);
        a_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, a_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          t_8 = ATgetArgument(t, 0);
          {
            ATerm g_2 = NULL;
            t = SSL_string_to_real(t_8);
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, g_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              t_8 = ATgetArgument(t, 0);
              {
                ATerm m_2 = NULL;
                t = SSL_string_to_int(t_8);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  t_8 = ATgetArgument(t, 0);
                  w_8 = ATgetArgument(t, 1);
                  r_8 = ATgetArgument(t, 2);
                  t = SSL_is_string(r_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_8, w_8, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_8), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      t_8 = ATgetArgument(t, 0);
                      {
                        ATerm p_3 = NULL,x_3 = NULL,y_3 = NULL,y_0 = NULL;
                        t = SSLgetAnnotations(s_8);
                        p_3 = t;
                        t = SSL_explode_string(t_8);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm g_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                              _fail(t);
                            x_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(x_3);
                        y_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, y_3);
                        y_0 = t;
                        t = SSLsetAnnotations(y_0, p_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          t_8 = ATgetArgument(t, 0);
                          w_8 = ATgetArgument(t, 1);
                          r_8 = ATgetArgument(t, 2);
                          {
                            ATerm q_4 = NULL,x_4 = NULL,z_4 = NULL,z_0 = NULL;
                            t = SSLgetAnnotations(s_8);
                            q_4 = t;
                            t = SSL_explode_string(t_8);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm k_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                                  _fail(t);
                                x_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(x_4);
                            z_4 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, z_4, w_8, r_8);
                            z_0 = t;
                            t = SSLsetAnnotations(z_0, q_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              t_8 = ATgetArgument(t, 0);
                              w_8 = ATgetArgument(t, 1);
                              r_8 = ATgetArgument(t, 2);
                              {
                                ATerm b_6 = NULL,i_6 = NULL,j_6 = NULL,b_1 = NULL;
                                t = SSLgetAnnotations(s_8);
                                b_6 = t;
                                t = SSL_explode_string(t_8);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm l_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                                      _fail(t);
                                    i_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(i_6);
                                j_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, j_6, w_8, r_8);
                                b_1 = t;
                                t = SSLsetAnnotations(b_1, b_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  t_8 = ATgetArgument(t, 0);
                                  w_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm u_7 = NULL,g_8 = NULL,k_8 = NULL,c_1 = NULL;
                                    t = SSLgetAnnotations(s_8);
                                    u_7 = t;
                                    t = SSL_explode_string(t_8);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm m_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                                          _fail(t);
                                        g_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(g_8);
                                    k_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, k_8, w_8);
                                    c_1 = t;
                                    t = SSLsetAnnotations(c_1, u_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      t_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm x_8 = NULL,f_9 = NULL,g_9 = NULL,d_1 = NULL;
                                        t = SSLgetAnnotations(s_8);
                                        x_8 = t;
                                        t = SSL_explode_string(t_8);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm n_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                              _fail(t);
                                            f_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(f_9);
                                        g_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_9);
                                        d_1 = t;
                                        t = SSLsetAnnotations(d_1, x_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          t_8 = ATgetArgument(t, 0);
                                          {
                                            ATerm c_10 = NULL,e_10 = NULL,f_10 = NULL,e_1 = NULL;
                                            t = SSLgetAnnotations(s_8);
                                            c_10 = t;
                                            t = SSL_explode_string(t_8);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm o_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 39)))
                                                  _fail(t);
                                                e_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(e_10);
                                            f_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, f_10);
                                            e_1 = t;
                                            t = SSLsetAnnotations(e_1, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              t_8 = ATgetArgument(t, 0);
                                              w_8 = ATgetArgument(t, 1);
                                              {
                                                ATerm y_10 = NULL,f_11 = NULL,g_11 = NULL,f_1 = NULL;
                                                t = SSLgetAnnotations(s_8);
                                                y_10 = t;
                                                t = SSL_explode_string(t_8);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm p_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                                      _fail(t);
                                                    f_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(f_11);
                                                g_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, g_11, w_8);
                                                f_1 = t;
                                                t = SSLsetAnnotations(f_1, y_10);
                                              }
                                            }
                                          else
                                            {
                                              ATerm u_11 = NULL,g_12 = NULL,l_12 = NULL,k_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  t_8 = ATgetArgument(t, 0);
                                                  w_8 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(s_8);
                                              u_11 = t;
                                              t = SSL_explode_string(t_8);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm q_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                                    _fail(t);
                                                  g_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(g_12);
                                              l_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, l_12, w_8);
                                              k_1 = t;
                                              t = SSLsetAnnotations(k_1, u_11);
                                            }
                                        }
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
ATerm at_last_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm e_11 = NULL,i_11 = NULL,j_11 = NULL;
    e_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_11 = ATgetFirst((ATermList) t);
        j_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_6 = t;
      int s_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_12 = NULL,g_3 = NULL;
          t = SSLgetAnnotations(e_11);
          u_12 = t;
          t = j_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(j_11), i_11);
          g_3 = t;
          t = SSLsetAnnotations(g_3, u_12);
          t = l_81(t);
          ;
          LocalPopChoice(s_6);
        }
      else
        {
          t = r_6;
          {
            ATerm j_13 = NULL,p_13 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(e_11);
            j_13 = t;
            t = j_11;
            t = l_11(t);
            p_13 = t;
            t = (ATerm) ATinsert(CheckATermList(p_13), i_11);
            h_3 = t;
            t = SSLsetAnnotations(h_3, j_13);
          }
        }
    }
    return(t);
  }
  t = l_11(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm v_11 = NULL,w_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_11 = ATgetFirst((ATermList) t);
      w_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_11;
    }
  else
    {
      t = w_11;
      t = last_0_0(t);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm h_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_6 = ATgetFirst((ATermList) t);
      h_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm t_89 (ATerm), ATerm u_89 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      f_12 = ATgetFirst((ATermList) t);
      {
        ATerm u_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = f_12;
  t = t_89(t);
  t = d_12;
  t = last_0_0(t);
  t = u_89(t);
  t = d_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_6 = ATgetFirst((ATermList) t);
      e_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = e_12;
  t = at_last_1_0(s_0, t);
  return(t);
}
ATerm a_24 (ATerm l_13, ATerm m_13, ATerm t)
{
  t = l_13;
  {
    ATerm w_6 = t;
    if((PushChoice() == 0))
      {
        ATerm s_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,k_3 = NULL;
        x_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_13 = ATgetFirst((ATermList) t);
            v_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_13);
        s_13 = t;
        t = v_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
        k_3 = t;
        t = SSLsetAnnotations(k_3, s_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_6;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_x_6, l_13);
  }
  return(t);
}
ATerm h_24 (ATerm y_13, ATerm a_14, ATerm t)
{
  t = y_13;
  {
    ATerm y_6 = t;
    if((PushChoice() == 0))
      {
        ATerm c_14 = NULL,g_14 = NULL,h_14 = NULL,o_14 = NULL,l_3 = NULL;
        o_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_14 = ATgetFirst((ATermList) t);
            h_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_14);
        c_14 = t;
        t = h_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_14), g_14);
        l_3 = t;
        t = SSLsetAnnotations(l_3, c_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = y_6;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, y_13);
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,d_14 = NULL;
  f_15 = t;
  t = SSL_explode_term(f_15);
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
          {
            g_15 = ATgetFirst((ATermList) d_7);
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
  t = SSL_explode_term(f_15);
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
                d_14 = ATgetFirst((ATermList) i_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, d_14), g_15));
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,r_14 = NULL;
  b_16 = t;
  t = SSL_explode_term(b_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) m_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm n_7 = ATgetArgument(t, 1);
        if(((ATgetType(n_7) == AT_LIST) && !(ATisEmpty(n_7))))
          {
            c_16 = ATgetFirst((ATermList) n_7);
            {
              ATerm o_7 = (ATerm) ATgetNext((ATermList) n_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(b_16);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_7 = ATgetArgument(t, 1);
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            ATerm r_7 = ATgetFirst((ATermList) q_7);
            ATerm s_7 = (ATerm) ATgetNext((ATermList) q_7);
            if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
              {
                r_14 = ATgetFirst((ATermList) s_7);
                {
                  ATerm t_7 = (ATerm) ATgetNext((ATermList) s_7);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, r_14), c_16));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm i_16 = NULL,l_16 = NULL,u_14 = NULL;
  i_16 = t;
  t = SSL_explode_term(i_16);
  if(match_cons(t, sym__2))
    {
      ATerm v_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_7 = ATgetArgument(t, 1);
        if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
          {
            l_16 = ATgetFirst((ATermList) w_7);
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
  t = SSL_explode_term(i_16);
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
                u_14 = ATgetFirst((ATermList) b_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, u_14), l_16));
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm u_16 = NULL,z_16 = NULL,k_15 = NULL;
  u_16 = t;
  t = SSL_explode_term(u_16);
  if(match_cons(t, sym__2))
    {
      ATerm d_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) d_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm e_8 = ATgetArgument(t, 1);
        if(((ATgetType(e_8) == AT_LIST) && !(ATisEmpty(e_8))))
          {
            z_16 = ATgetFirst((ATermList) e_8);
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
  t = SSL_explode_term(u_16);
  if(match_cons(t, sym__2))
    {
      ATerm h_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_8 = ATgetArgument(t, 1);
        if(((ATgetType(i_8) == AT_LIST) && !(ATisEmpty(i_8))))
          {
            ATerm j_8 = ATgetFirst((ATermList) i_8);
            ATerm l_8 = (ATerm) ATgetNext((ATermList) i_8);
            if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
              {
                k_15 = ATgetFirst((ATermList) l_8);
                {
                  ATerm m_8 = (ATerm) ATgetNext((ATermList) l_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, k_15), z_16));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm r_17 = NULL,u_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      u_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, u_17), r_17));
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm c_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      c_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, d_18), c_18));
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL;
  if(match_cons(t, sym__2))
    {
      a_22 = ATgetArgument(t, 0);
      b_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, b_22), a_22));
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_p_8;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm d_22 = NULL,e_22 = NULL;
  if(match_cons(t, sym__2))
    {
      d_22 = ATgetArgument(t, 0);
      e_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, e_22), d_22));
  return(t);
}
ATerm d_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm e_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_14 = NULL,t_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  y_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      z_14 = ATgetArgument(t, 0);
      a_15 = ATgetArgument(t, 1);
      {
        ATerm d_15 = NULL;
        t = a_15;
        t = foldr_2_0(t_0, u_0, t);
        d_15 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, z_14, d_15);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          z_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, z_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              z_14 = ATgetArgument(t, 0);
              {
                ATerm k_14 = NULL;
                t = z_14;
                {
                  ATerm q_8 = t;
                  int u_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_v_8;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_8;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_f_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_d_6;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_z_8;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(u_8);
                    }
                  else
                    {
                      t = q_8;
                      {
                        ATerm m_14 = NULL;
                        t = SSL_explode_string(z_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm b_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(b_9) != AT_INT) || (ATgetInt((ATermInt) b_9) != 39)))
                              _fail(t);
                            {
                              ATerm c_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(c_9) == AT_LIST) && !(ATisEmpty(c_9))))
                                {
                                  m_14 = ATgetFirst((ATermList) c_9);
                                  {
                                    ATerm d_9 = (ATerm) ATgetNext((ATermList) c_9);
                                    if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
                                      {
                                        ATerm e_9 = ATgetFirst((ATermList) d_9);
                                        if(((ATgetType(e_9) != AT_INT) || (ATgetInt((ATermInt) e_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_9 = (ATerm) ATgetNext((ATermList) d_9);
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
                        t = m_14;
                      }
                    }
                  k_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, k_14);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  z_14 = ATgetArgument(t, 0);
                  {
                    ATerm r_15 = NULL;
                    t = z_14;
                    t = foldr_2_0(v_0, w_0, t);
                    r_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_i_9, (ATerm) ATinsert(ATempty, r_15));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      z_14 = ATgetArgument(t, 0);
                      a_15 = ATgetArgument(t, 1);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = a_15;
                          return(t);
                        }
                        t = z_14;
                        t = foldr_2_0(a_1, l_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          z_14 = ATgetArgument(t, 0);
                          t = z_14;
                          t = foldr_2_0(m_1, n_1, t);
                        }
                      else
                        {
                          ATerm j_9 = t;
                          int k_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  z_14 = ATgetArgument(t, 0);
                                  {
                                    ATerm l_9 = ATgetArgument(t, 1);
                                  }
                                  x_14 = ATgetArgument(t, 2);
                                  p_14 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(k_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, z_14, x_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_14), (ATerm) ATempty));
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
                                        z_14 = ATgetArgument(t, 0);
                                        {
                                          ATerm o_9 = ATgetArgument(t, 1);
                                        }
                                        x_14 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(n_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, z_14, x_14, term_r_9);
                                  }
                                else
                                  {
                                    t = m_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        z_14 = ATgetArgument(t, 0);
                                        a_15 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, z_14, a_15, term_r_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            z_14 = ATgetArgument(t, 0);
                                            a_15 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_1 (ATerm t)
                                              {
                                                t = a_15;
                                                return(t);
                                              }
                                              t = z_14;
                                              t = foldr_2_0(p_1, q_1, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                z_14 = ATgetArgument(t, 0);
                                                t = z_14;
                                                t = foldr_2_0(t_1, u_1, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    z_14 = ATgetArgument(t, 0);
                                                    t = z_14;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        t_14 = ATgetFirst((ATermList) t);
                                                        v_14 = (ATerm) ATgetNext((ATermList) t);
                                                        t = v_14;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm s_9 = t;
                                                            int t_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = a_24(z_14, y_14, t);
                                                                ;
                                                                LocalPopChoice(t_9);
                                                              }
                                                            else
                                                              {
                                                                t = s_9;
                                                                t = t_14;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = a_24(z_14, y_14, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = a_24(z_14, y_14, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        z_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, z_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            z_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_14));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                z_14 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_14));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    z_14 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_14));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        z_14 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_14), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            z_14 = ATgetArgument(t, 0);
                                                                            a_15 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_14), a_15);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                z_14 = ATgetArgument(t, 0);
                                                                                a_15 = ATgetArgument(t, 1);
                                                                                {
                                                                                  ATerm z_1 (ATerm t)
                                                                                  {
                                                                                    t = a_15;
                                                                                    return(t);
                                                                                  }
                                                                                  t = z_14;
                                                                                  t = foldr_2_0(z_1, a_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    z_14 = ATgetArgument(t, 0);
                                                                                    t = z_14;
                                                                                    t = foldr_2_0(b_2, c_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        z_14 = ATgetArgument(t, 0);
                                                                                        a_15 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_6, (ATerm) ATinsert(CheckATermList(a_15), z_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            z_14 = ATgetArgument(t, 0);
                                                                                            t = z_14;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                t_14 = ATgetFirst((ATermList) t);
                                                                                                v_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = v_14;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm u_9 = t;
                                                                                                    int v_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = h_24(z_14, y_14, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(v_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = u_9;
                                                                                                        t = t_14;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = h_24(z_14, y_14, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = h_24(z_14, y_14, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_w_9;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    z_14 = ATgetArgument(t, 0);
                                                                                                    a_15 = ATgetArgument(t, 1);
                                                                                                    t = a_15;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        w_14 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_y_9, (ATerm) ATinsert(ATinsert(ATempty, w_14), z_14));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        z_14 = ATgetArgument(t, 0);
                                                                                                        t = z_14;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            z_14 = ATgetArgument(t, 0);
                                                                                                            a_15 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, z_14, a_15, term_z_9);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                z_14 = ATgetArgument(t, 0);
                                                                                                                a_15 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, z_14, a_15, term_z_9);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    z_14 = ATgetArgument(t, 0);
                                                                                                                    a_15 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, z_14, (ATerm)ATempty, a_15);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        z_14 = ATgetArgument(t, 0);
                                                                                                                        a_15 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, a_15, z_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                          {
                                                                                                                            z_14 = ATgetArgument(t, 0);
                                                                                                                            {
                                                                                                                              ATerm c_23 = NULL,m_15 = NULL;
                                                                                                                              t = SSL_explode_string(z_14);
                                                                                                                              t = unquote_chars_2_0(d_2, e_2, t);
                                                                                                                              m_15 = t;
                                                                                                                              t = SSL_implode_string(m_15);
                                                                                                                              c_23 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Prim_2, c_23, (ATerm) ATempty);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                              {
                                                                                                                                z_14 = ATgetArgument(t, 0);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, z_14, (ATerm) ATempty);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    z_14 = ATgetArgument(t, 0);
                                                                                                                                    a_15 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, z_14, (ATerm)ATempty, a_15);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        z_14 = ATgetArgument(t, 0);
                                                                                                                                        a_15 = ATgetArgument(t, 1);
                                                                                                                                        x_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, z_14, a_15, x_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            z_14 = ATgetArgument(t, 0);
                                                                                                                                            a_15 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, z_14, (ATerm)ATempty, a_15);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                z_14 = ATgetArgument(t, 0);
                                                                                                                                                a_15 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, z_14, (ATerm)ATempty, a_15);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                  {
                                                                                                                                                    ATerm a_10 = ATgetArgument(t, 0);
                                                                                                                                                    a_15 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  _fail(t);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, a_15);
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm m_24 (ATerm t)
  {
    ATerm b_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        t = m_24(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = b_10;
      }
    return(t);
  }
  t = m_24(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_74 (ATerm), ATerm t)
{
  ATerm f_2 (ATerm t)
  {
    t = topdown_1_0(t_74, t);
    return(t);
  }
  t = t_74(t);
  t = SRTS_all(f_2, t);
  return(t);
}
ATerm e_5 (ATerm x_40, ATerm y_40, ATerm t)
{
  ATerm n_24 = NULL;
  t = SSL_fputc(x_40, y_40);
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_24);
  return(t);
}
ATerm f_5 (ATerm l_44, ATerm m_44, ATerm t)
{
  ATerm o_24 = NULL;
  t = SSL_write_term_to_stream_text(l_44, m_44);
  o_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_24);
  return(t);
}
ATerm h_5 (ATerm h_93 (ATerm), ATerm s_428, ATerm p_44, ATerm t)
{
  ATerm r_24 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, s_428, term_g_10);
  t = open_stream_0_0(t);
  r_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_24, p_44);
  t = h_93(t);
  t = fclose_0_0(t);
  t = p_44;
  return(t);
}
ATerm g_5 (ATerm h_44, ATerm i_44, ATerm t)
{
  ATerm v_24 = NULL;
  t = SSL_write_term_to_stream_baf(h_44, i_44);
  v_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_24);
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_10 = ATgetArgument(t, 0);
      if(match_cons(h_10, sym_Stream_1))
        {
          d_16 = ATgetArgument(h_10, 0);
        }
      else
        _fail(t);
      e_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(d_16, e_16, t);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL,a_17 = NULL,g_17 = NULL,i_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm i_10 = ATgetArgument(t, 0);
      if(match_cons(i_10, sym_Stream_1))
        {
          g_17 = ATgetArgument(i_10, 0);
        }
      else
        _fail(t);
      i_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(g_17, i_17, t);
  x_16 = t;
  t = term_d_6;
  y_16 = t;
  t = x_16;
  if(match_cons(t, sym_Stream_1))
    {
      a_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_d_6, x_16);
  t = e_5(y_16, a_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm a_25 = NULL,d_25 = NULL,e_25 = NULL,f_25 = NULL,j_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,q_25 = NULL,t_25 = NULL,x_27 = NULL,y_27 = NULL,t_3 = NULL,s_3 = NULL;
  d_25 = t;
  if(match_cons(t, sym__2))
    {
      n_25 = ATgetArgument(t, 0);
      q_25 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_25);
  m_25 = t;
  t = n_25;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((a_25 != NULL) && (a_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                a_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(h_2, t);
        ;
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = term_l_10;
        a_25 = t;
      }
    if(((t_25 != NULL) && (t_25 != t)))
      _fail(t);
    else
      t_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_25, q_25);
    if(((s_3 != NULL) && (s_3 != t)))
      _fail(t);
    else
      s_3 = t;
    t = SSLsetAnnotations(s_3, m_25);
    t = d_25;
    if(match_cons(t, sym__2))
      {
        if(((f_25 != NULL) && (f_25 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          f_25 = ATgetArgument(t, 0);
        if(((j_25 != NULL) && (j_25 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          j_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_25);
    if(((e_25 != NULL) && (e_25 != t)))
      _fail(t);
    else
      e_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, f_25, (ATerm) ATmakeAppl(sym__2, not_null(a_25), j_25));
    if(((t_3 != NULL) && (t_3 != t)))
      _fail(t);
    else
      t_3 = t;
    t = SSLsetAnnotations(t_3, e_25);
    if(((l_25 != NULL) && (l_25 != t)))
      _fail(t);
    else
      l_25 = t;
    if(match_cons(t, sym__2))
      {
        if(((x_27 != NULL) && (x_27 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          x_27 = ATgetArgument(t, 0);
        if(((y_27 != NULL) && (y_27 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          y_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm m_10 = t;
      int n_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,u_3 = NULL;
          t = SSLgetAnnotations(l_25);
          t_15 = t;
          t = x_27;
          t = fetch_1_0(i_2, t);
          x_15 = t;
          t = y_27;
          if(match_cons(t, sym__2))
            {
              z_15 = ATgetArgument(t, 0);
              a_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = h_5(j_2, z_15, a_16, t);
          y_15 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_15, y_15);
          u_3 = t;
          t = SSLsetAnnotations(u_3, t_15);
          ;
          LocalPopChoice(n_10);
        }
      else
        {
          t = m_10;
          {
            ATerm q_16 = NULL,t_16 = NULL,v_16 = NULL,w_16 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(l_25);
            q_16 = t;
            t = y_27;
            if(match_cons(t, sym__2))
              {
                v_16 = ATgetArgument(t, 0);
                w_16 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = h_5(k_2, v_16, w_16, t);
            t_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, x_27, t_16);
            v_3 = t;
            t = SSLsetAnnotations(v_3, q_16);
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
ATerm apply_strategy_1_0 (ATerm j_96 (ATerm), ATerm t)
{
  ATerm d_28 = NULL,h_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  l_28 = t;
  t = dtime_0_0(t);
  t = l_28;
  t = j_96(t);
  k_28 = t;
  t = dtime_0_0(t);
  d_28 = t;
  t = k_28;
  if(match_cons(t, sym__2))
    {
      h_28 = ATgetArgument(t, 0);
      j_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_28), (ATerm) ATmakeAppl(sym_Runtime_1, d_28)), j_28);
  return(t);
}
ATerm g_29 (ATerm a_29, ATerm t)
{
  t = SSL_fclose(a_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL;
  e_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_29 = ATgetArgument(t, 0);
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_29);
            ;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = g_29(e_29, t);
          }
      }
    }
  else
    {
      t = g_29(e_29, t);
    }
  return(t);
}
ATerm i_5 (ATerm n_44, ATerm t)
{
  t = SSL_read_term_from_stream(n_44);
  return(t);
}
ATerm j_5 (ATerm z_40, ATerm a_41, ATerm t)
{
  ATerm h_29 = NULL;
  t = SSL_fopen(z_40, a_41);
  h_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_29 = NULL;
  t = SSL_stdin_stream();
  i_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_stdout_stream();
  j_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_29 = NULL;
  t = SSL_stderr_stream();
  k_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_29);
  return(t);
}
ATerm t_30 (ATerm r_29, ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_explode_term(r_29);
  if(match_cons(t, sym__2))
    {
      ATerm q_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_10 = ATgetArgument(t, 1);
        if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
          {
            s_29 = ATgetFirst((ATermList) r_10);
            {
              ATerm s_10 = (ATerm) ATgetNext((ATermList) r_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = s_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = s_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = s_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = s_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm u_30 (ATerm v_29, ATerm w_29, ATerm x_29, ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,d_30 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(x_29);
  a_30 = t;
  t = v_29;
  if(match_cons(t, sym_Path_1))
    {
      d_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, d_30, w_29);
  d_4 = t;
  t = SSLsetAnnotations(d_4, a_30);
  if(match_cons(t, sym__2))
    {
      y_29 = ATgetArgument(t, 0);
      z_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(y_29, z_29, t);
  return(t);
}
ATerm v_30 (ATerm f_30, ATerm g_30, ATerm h_30, ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL,n_30 = NULL,g_4 = NULL;
  t = SSLgetAnnotations(h_30);
  k_30 = t;
  t = SSL_is_string(f_30);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_30, g_30);
  g_4 = t;
  t = SSLsetAnnotations(g_4, k_30);
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_5(i_30, j_30, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm q_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      ATerm u_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  q_30 = t;
  if(match_cons(t, sym__2))
    {
      r_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = t_30(q_30, t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_30(r_30, s_30, q_30, t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  t = v_30(r_30, s_30, q_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = t_30(q_30, t);
    }
  return(t);
}
ATerm l_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_30 = NULL;
      z_30 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_30, term_d_11);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = debug_1_0(l_2, t);
      _fail(t);
    }
  x_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(y_30, t);
  w_30 = t;
  t = x_30;
  t = fclose_0_0(t);
  t = w_30;
  return(t);
}
ATerm fetch_1_0 (ATerm u_80 (ATerm), ATerm t)
{
  ATerm x_31 (ATerm t)
  {
    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
    u_31 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_31 = ATgetFirst((ATermList) t);
        w_31 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_18 = NULL,f_18 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(u_31);
          a_18 = t;
          t = v_31;
          t = u_80(t);
          f_18 = t;
          t = (ATerm) ATinsert(CheckATermList(w_31), f_18);
          k_4 = t;
          t = SSLsetAnnotations(k_4, a_18);
          ;
          LocalPopChoice(k_11);
        }
      else
        {
          t = h_11;
          {
            ATerm n_18 = NULL,q_18 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(u_31);
            n_18 = t;
            t = w_31;
            t = x_31(t);
            q_18 = t;
            t = (ATerm) ATinsert(CheckATermList(q_18), v_31);
            l_4 = t;
            t = SSLsetAnnotations(l_4, n_18);
          }
        }
    }
    return(t);
  }
  t = x_31(t);
  return(t);
}
ATerm d_5 (ATerm n_35, ATerm o_35, ATerm t)
{
  t = SSL_strcat(n_35, o_35);
  return(t);
}
ATerm debug_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  a_32 = t;
  t = f_93(t);
  b_32 = t;
  t = term_s_5;
  c_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_32), b_32);
  d_32 = t;
  t = SSL_printnl(c_32, d_32);
  t = a_32;
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm m_11 = t;
  int n_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_11);
    }
  else
    {
      t = m_11;
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_o_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32 = NULL;
      k_32 = t;
      t = SSL_is_string(k_32);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(n_2, t);
            ;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            {
              ATerm q_32 = NULL,r_32 = NULL,s_32 = NULL;
              q_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  r_32 = ATgetArgument(t, 0);
                  t = r_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      r_32 = ATgetArgument(t, 0);
                      t = r_32;
                      {
                        ATerm t_11 = t;
                        int x_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(x_11);
                          }
                        else
                          {
                            t = t_11;
                            t = debug_1_0(o_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm w_32 = NULL,x_32 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          r_32 = ATgetArgument(t, 0);
                          s_32 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = r_32;
                      t = eval_config_0_0(t);
                      w_32 = t;
                      t = s_32;
                      t = eval_config_0_0(t);
                      x_32 = t;
                      t = (ATerm) ATmakeAppl(sym__2, w_32, x_32);
                      t = d_5(w_32, x_32, t);
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
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  t = term_y_11;
  c_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_11, b_33);
  t = m_5(c_33, b_33, t);
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_33 = NULL,e_33 = NULL;
        t = eval_config_0_0(t);
        d_33 = t;
        t = term_y_11;
        e_33 = t;
        t = SSL_table_put(e_33, b_33, d_33);
        t = d_33;
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_94 (ATerm), ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_33 = NULL;
        t = term_i_12;
        t = get_config_0_0(t);
        k_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_33, term_j_12);
        t = geq_0_0(t);
        t = i_33;
        t = s_94(t);
        ;
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        t = i_33;
      }
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm n_33 = NULL;
  n_33 = t;
  if(match_string(t, "-k"))
    {
      t = n_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = n_33;
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  t = SSL_string_to_int(o_33);
  p_33 = t;
  t = term_k_12;
  q_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_12, p_33);
  t = p_5(q_33, p_33, t);
  t = o_33;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, r_2, t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm s_33 = NULL;
  s_33 = t;
  if(match_string(t, "-S"))
    {
      t = s_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = s_33;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t = term_i_12;
  t_33 = t;
  t = term_n_12;
  u_33 = t;
  t = term_o_12;
  t = p_5(t_33, u_33, t);
  t = term_p_12;
  return(t);
}
ATerm u_2 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm v_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
  v_33 = t;
  t = SSL_string_to_int(v_33);
  w_33 = t;
  t = term_i_12;
  x_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_12, w_33);
  t = p_5(x_33, w_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_33);
  return(t);
}
ATerm x_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm y_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm z_2 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL;
  t = term_s_12;
  y_33 = t;
  t = term_r_5;
  z_33 = t;
  t = term_t_12;
  t = p_5(y_33, z_33, t);
  t = term_v_12;
  return(t);
}
ATerm a_3 (ATerm t)
{
  t = term_w_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(s_2, t_2, u_2, t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(v_2, w_2, x_2, t);
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            t = Option_3_0(y_2, z_2, a_3, t);
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm o_45, ATerm p_45, ATerm t)
{
  ATerm a_34 = NULL;
  t = term_y_11;
  a_34 = t;
  t = SSL_table_put(a_34, o_45, p_45);
  t = (ATerm) ATmakeAppl(sym__3, term_y_11, o_45, p_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
      t = term_r_5;
      t = h_0(t);
      f_34 = t;
      t = term_b_13;
      g_34 = t;
      t = term_c_13;
      h_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_13, term_c_13, f_34);
      t = n_5(g_34, h_34, f_34, t);
      _fail(t);
    }
  else
    {
      ATerm k_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_34 = ATgetFirst((ATermList) t);
          e_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_34;
      t = d_0(t);
      t = term_r_5;
      t = g_0(t);
      k_34 = t;
      t = (ATerm) ATinsert(CheckATermList(e_34), k_34);
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  if(match_string(t, "-o"))
    {
      t = m_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = m_34;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  n_34 = t;
  t = term_d_13;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_13, n_34);
  t = p_5(o_34, n_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, n_34);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_3, c_3, d_3, t);
  return(t);
}
ATerm n_5 (ATerm m_50, ATerm n_50, ATerm l_50, ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
  {
    ATerm f_13 = t;
    int g_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_13 = ATgetArgument(t, 0);
            ATerm i_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_50, n_50);
        t = m_5(m_50, n_50, t);
        ;
        LocalPopChoice(g_13);
      }
    else
      {
        t = f_13;
        t = (ATerm) ATempty;
      }
    r_34 = t;
    t = (ATerm) ATinsert(CheckATermList(r_34), l_50);
    s_34 = t;
    t = SSL_table_put(m_50, n_50, s_34);
    t = q_34;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL,c_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL;
      t = term_r_5;
      t = m_0(t);
      d_35 = t;
      t = term_b_13;
      e_35 = t;
      t = term_c_13;
      f_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_13, term_c_13, d_35);
      t = n_5(e_35, f_35, d_35, t);
      _fail(t);
    }
  else
    {
      ATerm j_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_34 = ATgetFirst((ATermList) t);
          a_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_35 = ATgetFirst((ATermList) t);
          c_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_34;
      t = k_0(t);
      t = b_35;
      t = l_0(t);
      j_35 = t;
      t = (ATerm) ATinsert(CheckATermList(c_35), j_35);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  if(match_string(t, "-i"))
    {
      t = l_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_35;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm m_35 = NULL,p_35 = NULL;
  m_35 = t;
  t = term_k_13;
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, m_35);
  t = p_5(p_35, m_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_35);
  return(t);
}
ATerm i_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, i_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_5;
  t = whoami_0_0(t);
  q_35 = t;
  t = term_s_5;
  s_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_13), q_35);
  t_35 = t;
  t = SSL_printnl(s_35, t_35);
  t = term_w_5;
  r_35 = t;
  t = SSL_exit(r_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_5 (ATerm x_37, ATerm y_37, ATerm t)
{
  ATerm r_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_37, y_37);
      ;
      LocalPopChoice(t_13);
    }
  else
    {
      t = r_13;
      t = SSL_addr(x_37, y_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm t)
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_35;
      t = n_86(t);
    }
  else
    {
      ATerm b_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_35;
      t = foldr_2_0(n_86, o_86, t);
      b_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_35, b_36);
      t = o_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm j_3 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL;
  if(match_cons(t, sym__2))
    {
      h_19 = ATgetArgument(t, 0);
      i_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(h_19, i_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_36 = NULL,d_19 = NULL,e_19 = NULL;
  t = times_0_0(t);
  e_19 = t;
  t = SSL_explode_term(e_19);
  if(match_cons(t, sym__2))
    {
      ATerm w_13 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  t = foldr_2_0(j_3, m_3, t);
  e_36 = t;
  t = SSL_TicksToSeconds(e_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  if(match_cons(t, sym__2))
    {
      q_36 = ATgetArgument(t, 0);
      r_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_13 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_36;
        if((q_36 != t))
          {
            _fail(t);
          }
        t = p_36;
        ;
        LocalPopChoice(b_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_36, r_36);
              ;
              LocalPopChoice(f_14);
            }
          else
            {
              t = e_14;
              t = SSL_gtr(q_36, r_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_36, r_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_94 (ATerm), ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  {
    ATerm i_14 = t;
    int j_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_36 = NULL;
        t = term_i_12;
        t = get_config_0_0(t);
        x_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_36, term_w_5);
        t = geq_0_0(t);
        t = v_36;
        t = r_94(t);
        ;
        LocalPopChoice(j_14);
      }
    else
      {
        t = i_14;
        t = v_36;
      }
  }
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL,c_37 = NULL,d_37 = NULL;
  t = run_time_0_0(t);
  z_36 = t;
  t = term_r_5;
  t = whoami_0_0(t);
  a_37 = t;
  t = term_s_5;
  c_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), z_36), term_l_14), a_37);
  d_37 = t;
  t = SSL_printnl(c_37, d_37);
  t = (ATerm) ATmakeAppl(sym__2, term_s_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_14), z_36), term_l_14), a_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(n_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm e_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_12;
  e_37 = t;
  t = SSL_exit(e_37);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm m_37 = NULL,n_37 = NULL;
  n_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = n_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          m_37 = ATgetArgument(t, 0);
          {
            ATerm u_19 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(n_37);
            u_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, m_37);
            v_4 = t;
            t = SSLsetAnnotations(v_4, u_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = n_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_97 (ATerm), ATerm t)
{
  ATerm q_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = q_14;
      t = fetch_1_0(o_3, t);
    }
  t = h_97(t);
  return(t);
}
ATerm map_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm f_38 (ATerm t)
  {
    ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
    c_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = c_38;
      }
    else
      {
        ATerm c_20 = NULL,f_20 = NULL,g_20 = NULL,y_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_38 = ATgetFirst((ATermList) t);
            e_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_38);
        c_20 = t;
        t = d_38;
        t = k_80(t);
        f_20 = t;
        t = e_38;
        t = f_38(t);
        g_20 = t;
        t = (ATerm) ATinsert(CheckATermList(g_20), f_20);
        y_4 = t;
        t = SSLsetAnnotations(y_4, c_20);
      }
    return(t);
  }
  t = f_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_38 = ATgetFirst((ATermList) t);
      j_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_38 = NULL,o_38 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_38)), not_null(o_38));
          return(t);
        }
        t = j_38;
        t = j_0(t);
        if(((n_38 != NULL) && (n_38 != t)))
          _fail(t);
        else
          n_38 = t;
        t = i_38;
        t = i_0(t);
        if(((o_38 != NULL) && (o_38 != t)))
          _fail(t);
        else
          o_38 = t;
        t = j_38;
        t = reverse_acc_2_0(i_0, q_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_r_5;
      t = j_0(t);
    }
  return(t);
}
ATerm m_5 (ATerm d_52, ATerm e_52, ATerm t)
{
  t = SSL_table_get(d_52, e_52);
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,l_5 = NULL;
  u_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_38);
  s_38 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_38);
  l_5 = t;
  t = SSLsetAnnotations(l_5, s_38);
  return(t);
}
ATerm w_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_38), term_c_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  ATerm e_15 = t;
  int h_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_15);
    }
  else
    {
      t = e_15;
      t = fetch_1_0(r_3, t);
    }
  t = term_i_15;
  t = echo_0_0(t);
  t = term_b_13;
  q_38 = t;
  t = term_c_13;
  r_38 = t;
  t = term_j_15;
  t = m_5(q_38, r_38, t);
  t = reverse_acc_2_0(_id, w_3, t);
  t = map_1_0(z_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  y_38 = t;
  {
    ATerm l_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = y_38;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_15 = ATgetFirst((ATermList) t);
                ATerm p_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = y_38;
          }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = l_15;
        t = (ATerm) ATinsert(ATempty, y_38);
      }
    z_38 = t;
    t = term_l_10;
    a_39 = t;
    t = SSL_printnl(a_39, z_38);
    t = y_38;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_13;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm f_39 = NULL,g_39 = NULL;
  t = term_q_15;
  f_39 = t;
  t = term_r_5;
  g_39 = t;
  t = term_s_15;
  t = p_5(f_39, g_39, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_u_15;
  return(t);
}
ATerm e_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL,k_39 = NULL;
  t = term_q_15;
  j_39 = t;
  t = term_r_5;
  k_39 = t;
  t = term_s_15;
  t = p_5(j_39, k_39, t);
  t = term_v_15;
  h_39 = t;
  t = term_r_5;
  i_39 = t;
  t = term_w_15;
  t = p_5(h_39, i_39, t);
  t = term_f_16;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_g_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm h_16 = t;
  int j_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(a_4, b_4, c_4, t);
      ;
      LocalPopChoice(j_16);
    }
  else
    {
      t = h_16;
      t = Option_3_0(e_4, f_4, h_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_59 (ATerm), ATerm u_59 (ATerm), ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL,t_5 = NULL;
  q_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_39 = ATgetFirst((ATermList) t);
      n_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_39);
  l_39 = t;
  t = m_39;
  t = t_59(t);
  o_39 = t;
  t = n_39;
  t = u_59(t);
  p_39 = t;
  t = (ATerm) ATinsert(CheckATermList(p_39), o_39);
  t_5 = t;
  t = SSLsetAnnotations(t_5, l_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_99 (ATerm), ATerm t)
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,a_40 = NULL,b_40 = NULL,y_5 = NULL;
  v_39 = t;
  {
    ATerm k_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_16;
        t = k_99(t);
        ;
        LocalPopChoice(m_16);
      }
    else
      {
        t = k_16;
      }
    t = v_39;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_39 = ATgetFirst((ATermList) t);
        y_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_39);
    w_39 = t;
    t = term_q_13;
    b_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_13, x_39);
    t = p_5(b_40, x_39, t);
    t = y_39;
    {
      ATerm l_40 (ATerm t)
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_40 = NULL;
                e_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = e_40;
                ;
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                t = k_99(t);
                t = Cons_2_0(_id, l_40, t);
              }
            ;
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm h_40 = NULL,i_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  h_40 = ATgetFirst((ATermList) t);
                  i_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(i_40), (ATerm) ATmakeAppl(sym_Undefined_1, h_40));
            }
          }
        return(t);
      }
      t = l_40(t);
      if(((a_40 != NULL) && (a_40 != t)))
        _fail(t);
      else
        a_40 = t;
      t = (ATerm) ATinsert(CheckATermList(a_40), (ATerm) ATmakeAppl(sym_Program_1, x_39));
      if(((y_5 != NULL) && (y_5 != t)))
        _fail(t);
      else
        y_5 = t;
      t = SSLsetAnnotations(y_5, w_39);
    }
  }
  return(t);
}
ATerm j_4 (ATerm t)
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
ATerm m_4 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL;
  t = term_b_15;
  e_41 = t;
  t = term_r_5;
  f_41 = t;
  t = term_b_17;
  t = p_5(e_41, f_41, t);
  t = term_c_17;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm o_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_99 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  s_40 = t;
  t = term_b_13;
  u_40 = t;
  t = term_c_13;
  v_40 = t;
  t = (ATerm) ATempty;
  w_40 = t;
  t = SSL_table_put(u_40, v_40, w_40);
  t = s_40;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_99(t);
          ;
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
          {
            ATerm h_17 = t;
            int j_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(j_4, m_4, n_4, t);
                ;
                LocalPopChoice(j_17);
              }
            else
              {
                t = h_17;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_4, t);
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_41 = NULL;
          m_41 = t;
          {
            ATerm m_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_20 = NULL;
                t = m_41;
                {
                  ATerm o_17 = t;
                  int p_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(p_17);
                    }
                  else
                    {
                      t = o_17;
                      t = fetch_1_0(o_4, t);
                    }
                  t = m_41;
                  t = default_system_usage_0_0(t);
                  t = term_n_12;
                  n_20 = t;
                  t = SSL_exit(n_20);
                }
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = m_17;
                {
                  ATerm r_20 = NULL;
                  t = term_q_15;
                  t = get_config_0_0(t);
                  t = m_41;
                  t = default_system_about_0_0(t);
                  t = term_n_12;
                  r_20 = t;
                  t = SSL_exit(r_20);
                }
              }
          }
          ;
          LocalPopChoice(l_17);
        }
      else
        {
          t = k_17;
          {
            ATerm q_17 = t;
            int s_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
                ATerm p_4 (ATerm t)
                {
                  ATerm q_41 = NULL,r_41 = NULL,s_41 = NULL,e_6 = NULL;
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
                  if(((q_40 != NULL) && (q_40 != t)))
                    _fail(t);
                  else
                    q_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_41);
                  e_6 = t;
                  t = SSLsetAnnotations(e_6, q_41);
                  return(t);
                }
                t = fetch_1_0(p_4, t);
                t = term_s_5;
                if(((o_41 != NULL) && (o_41 != t)))
                  _fail(t);
                else
                  o_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_40)), term_t_17);
                if(((p_41 != NULL) && (p_41 != t)))
                  _fail(t);
                else
                  p_41 = t;
                t = SSL_printnl(o_41, p_41);
                t = (ATerm) ATmakeAppl(sym__2, term_s_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_40)), term_t_17));
                t = default_system_usage_0_0(t);
                t = term_w_5;
                if(((n_41 != NULL) && (n_41 != t)))
                  _fail(t);
                else
                  n_41 = t;
                t = SSL_exit(n_41);
                ;
                LocalPopChoice(s_17);
              }
            else
              {
                t = q_17;
              }
          }
        }
      if(((r_40 != NULL) && (r_40 != t)))
        _fail(t);
      else
        r_40 = t;
      t = term_b_13;
      if(((t_40 != NULL) && (t_40 != t)))
        _fail(t);
      else
        t_40 = t;
      t = SSL_table_destroy(t_40);
      t = r_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_97 (ATerm), ATerm k_97 (ATerm), ATerm l_97 (ATerm), ATerm m_97 (ATerm), ATerm t)
{
  ATerm x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  t = parse_options_1_0(j_97, t);
  x_41 = t;
  t = term_v_17;
  a_42 = t;
  t = SSL_table_create(a_42);
  t = term_v_17;
  y_41 = t;
  t = term_w_17;
  z_41 = t;
  t = SSL_table_put(y_41, z_41, x_41);
  t = x_41;
  t = l_97(t);
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_97, t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          ATerm z_17 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = z_17;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = if_verbose2_1_0(b_5, t);
  return(t);
}
ATerm u_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_e_18;
  b_42 = t;
  t = term_r_5;
  c_42 = t;
  t = term_g_18;
  t = p_5(b_42, c_42, t);
  t = term_h_18;
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_i_18;
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
  d_42 = t;
  t = term_q_13;
  t = get_config_0_0(t);
  e_42 = t;
  t = term_s_5;
  f_42 = t;
  t = (ATerm) ATinsert(ATempty, e_42);
  g_42 = t;
  t = SSL_printnl(f_42, g_42);
  t = d_42;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_96 (ATerm), ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm j_18 = t;
    int k_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_96(t);
        ;
        LocalPopChoice(k_18);
      }
    else
      {
        t = j_18;
        {
          ATerm l_18 = t;
          int m_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(m_18);
            }
          else
            {
              t = l_18;
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
                      ATerm r_18 = t;
                      int s_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(u_4, w_4, a_5, t);
                          ;
                          LocalPopChoice(s_18);
                        }
                      else
                        {
                          t = r_18;
                          {
                            ATerm t_18 = t;
                            int u_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_18);
                              }
                            else
                              {
                                t = t_18;
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
  ATerm t_4 (ATerm t)
  {
    ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
    i_42 = t;
    {
      ATerm v_18 = t;
      int w_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_5 (ATerm t)
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
          t = fetch_1_0(c_5, t);
          ;
          LocalPopChoice(w_18);
        }
      else
        {
          t = v_18;
          t = term_x_18;
          h_42 = t;
        }
      t = not_null(h_42);
      t = ReadFromFile_0_0(t);
      if(((j_42 != NULL) && (j_42 != t)))
        _fail(t);
      else
        j_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_42, j_42);
      t = apply_strategy_1_0(s_96, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(r_4, u_96, s_4, t_4, t);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,h_6 = NULL;
  q_42 = t;
  if(match_cons(t, sym__2))
    {
      n_42 = ATgetArgument(t, 0);
      o_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_42);
  m_42 = t;
  t = o_42;
  {
    ATerm y_18 = t;
    int z_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_42 = NULL;
        t = SSL_explode_term(o_42);
        if(match_cons(t, sym__2))
          {
            ATerm a_19 = ATgetArgument(t, 0);
            ATerm b_19 = ATgetArgument(t, 1);
            if(((ATgetType(b_19) == AT_LIST) && !(ATisEmpty(b_19))))
              {
                r_42 = ATgetFirst((ATermList) b_19);
                {
                  ATerm c_19 = (ATerm) ATgetNext((ATermList) b_19);
                  if(((ATgetType(c_19) != AT_LIST) || !(ATisEmpty(c_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = r_42;
        ;
        LocalPopChoice(z_18);
      }
    else
      {
        t = y_18;
      }
    t = topdown_1_0(q_5, t);
    p_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_42, p_42);
    h_6 = t;
    t = SSLsetAnnotations(h_6, m_42);
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm f_19 = t;
    int g_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(g_19);
      }
    else
      {
        t = f_19;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(o_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
