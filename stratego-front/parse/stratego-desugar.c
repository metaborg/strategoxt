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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_z_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_f_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_b_17;
ATerm term_y_16;
ATerm term_w_16;
ATerm term_o_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_z_15;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_t_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_k_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_e_11;
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
ATerm term_d_9;
ATerm term_c_9;
ATerm term_a_9;
ATerm term_w_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_a_7;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_w_5;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(9);
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
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATempty);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(39);
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
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_j_12, term_o_12);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_12);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_v_5);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__2, term_c_13, term_d_13);
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_v_5);
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_v_5);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(sym__2, term_c_15, term_v_5);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_f_18, term_v_5);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm unescape_chars_1_0 (ATerm g_90 (ATerm), ATerm);
ATerm a_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm o_81 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm s_0 (ATerm);
ATerm unquote_chars_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm);
ATerm o_24 (ATerm m_13, ATerm n_13, ATerm);
ATerm p_24 (ATerm a_14, ATerm b_14, ATerm);
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
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm w_74 (ATerm), ATerm);
ATerm f_5 (ATerm a_41, ATerm b_41, ATerm);
ATerm g_5 (ATerm o_44, ATerm p_44, ATerm);
ATerm i_5 (ATerm k_93 (ATerm), ATerm q_429, ATerm s_44, ATerm);
ATerm h_5 (ATerm k_44, ATerm l_44, ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm n_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm o_29 (ATerm i_29, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm j_5 (ATerm q_44, ATerm);
ATerm k_5 (ATerm c_41, ATerm d_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_31 (ATerm z_29, ATerm);
ATerm c_31 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm);
ATerm d_31 (ATerm n_30, ATerm o_30, ATerm p_30, ATerm);
ATerm l_5 (ATerm);
ATerm o_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm x_80 (ATerm), ATerm);
ATerm e_5 (ATerm q_35, ATerm r_35, ATerm);
ATerm debug_1_0 (ATerm i_93 (ATerm), ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm v_94 (ATerm), ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_5 (ATerm r_45, ATerm s_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_5 (ATerm p_50, ATerm q_50, ATerm o_50, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm j_3 (ATerm);
ATerm m_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm m_5 (ATerm a_38, ATerm b_38, ATerm);
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm u_94 (ATerm), ATerm);
ATerm p_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm s_3 (ATerm);
ATerm need_help_1_0 (ATerm k_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm o_5 (ATerm g_52, ATerm h_52, ATerm);
ATerm x_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm c_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm n_99 (ATerm), ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm parse_options_1_0 (ATerm m_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm);
ATerm u_4 (ATerm);
ATerm z_4 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm n_5 (ATerm);
ATerm iowrap_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
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
  t = term_v_5;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_w_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_5), c_0), term_y_5);
  o_0 = t;
  t = SSL_printnl(f_0, o_0);
  t = term_a_6;
  e_0 = t;
  t = SSL_exit(e_0);
  t = b_0;
  return(t);
}
ATerm unescape_chars_1_0 (ATerm g_90 (ATerm), ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    ATerm g_1 = NULL,h_1 = NULL,i_1 = NULL;
    ATerm b_6 = t;
    int e_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_90(t);
        ;
        LocalPopChoice(e_6);
      }
    else
      {
        t = b_6;
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
      t = (ATerm) ATinsert(CheckATermList(y_1), term_f_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(CheckATermList(y_1), term_g_6);
        }
      else
        {
          if(match_int(t, 110))
            {
              t = (ATerm) ATinsert(CheckATermList(y_1), term_i_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(y_1), term_j_6);
            }
        }
    }
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm s_8 = NULL,t_8 = NULL,u_8 = NULL,v_8 = NULL;
  t_8 = t;
  if(match_cons(t, sym_Str_1))
    {
      u_8 = ATgetArgument(t, 0);
      {
        ATerm b_9 = NULL,r_1 = NULL,s_1 = NULL,o_1 = NULL;
        t = SSL_explode_string(u_8);
        t = unquote_chars_2_0(a_0, p_0, t);
        o_1 = t;
        t = SSL_implode_string(o_1);
        s_1 = t;
        t = SSL_explode_string(s_1);
        t = unescape_chars_1_0(q_0, t);
        r_1 = t;
        t = SSL_implode_string(r_1);
        b_9 = t;
        t = (ATerm) ATmakeAppl(sym_Str_1, b_9);
      }
    }
  else
    {
      if(match_cons(t, sym_Real_1))
        {
          u_8 = ATgetArgument(t, 0);
          {
            ATerm g_2 = NULL;
            t = SSL_string_to_real(u_8);
            g_2 = t;
            t = (ATerm) ATmakeAppl(sym_Real_1, g_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Int_1))
            {
              u_8 = ATgetArgument(t, 0);
              {
                ATerm m_2 = NULL;
                t = SSL_string_to_int(u_8);
                m_2 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, m_2);
              }
            }
          else
            {
              if(match_cons(t, sym_Con_3))
                {
                  u_8 = ATgetArgument(t, 0);
                  v_8 = ATgetArgument(t, 1);
                  s_8 = ATgetArgument(t, 2);
                  t = SSL_is_string(s_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, u_8, v_8, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_8), (ATerm) ATempty));
                }
              else
                {
                  if(match_cons(t, sym_DefaultVarDec_1))
                    {
                      u_8 = ATgetArgument(t, 0);
                      {
                        ATerm q_3 = NULL,y_3 = NULL,z_3 = NULL,y_0 = NULL;
                        t = SSLgetAnnotations(t_8);
                        q_3 = t;
                        t = SSL_explode_string(u_8);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm m_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                              _fail(t);
                            y_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(y_3);
                        z_3 = t;
                        t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_3);
                        y_0 = t;
                        t = SSLsetAnnotations(y_0, q_3);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          u_8 = ATgetArgument(t, 0);
                          v_8 = ATgetArgument(t, 1);
                          s_8 = ATgetArgument(t, 2);
                          {
                            ATerm r_4 = NULL,y_4 = NULL,a_5 = NULL,z_0 = NULL;
                            t = SSLgetAnnotations(t_8);
                            r_4 = t;
                            t = SSL_explode_string(u_8);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm n_6 = ATgetFirst((ATermList) t);
                                if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                  _fail(t);
                                y_4 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(y_4);
                            a_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, a_5, v_8, s_8);
                            z_0 = t;
                            t = SSLsetAnnotations(z_0, r_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDef_3))
                            {
                              u_8 = ATgetArgument(t, 0);
                              v_8 = ATgetArgument(t, 1);
                              s_8 = ATgetArgument(t, 2);
                              {
                                ATerm d_6 = NULL,k_6 = NULL,l_6 = NULL,b_1 = NULL;
                                t = SSLgetAnnotations(t_8);
                                d_6 = t;
                                t = SSL_explode_string(u_8);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm o_6 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(o_6) != AT_INT) || (ATgetInt((ATermInt) o_6) != 39)))
                                      _fail(t);
                                    k_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(k_6);
                                l_6 = t;
                                t = (ATerm) ATmakeAppl(sym_SDef_3, l_6, v_8, s_8);
                                b_1 = t;
                                t = SSLsetAnnotations(b_1, d_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_VarDec_2))
                                {
                                  u_8 = ATgetArgument(t, 0);
                                  v_8 = ATgetArgument(t, 1);
                                  {
                                    ATerm w_7 = NULL,i_8 = NULL,m_8 = NULL,c_1 = NULL;
                                    t = SSLgetAnnotations(t_8);
                                    w_7 = t;
                                    t = SSL_explode_string(u_8);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm p_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(p_6) != AT_INT) || (ATgetInt((ATermInt) p_6) != 39)))
                                          _fail(t);
                                        i_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(i_8);
                                    m_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, m_8, v_8);
                                    c_1 = t;
                                    t = SSLsetAnnotations(c_1, w_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_Var_1))
                                    {
                                      u_8 = ATgetArgument(t, 0);
                                      {
                                        ATerm z_8 = NULL,h_9 = NULL,i_9 = NULL,d_1 = NULL;
                                        t = SSLgetAnnotations(t_8);
                                        z_8 = t;
                                        t = SSL_explode_string(u_8);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm q_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(q_6) != AT_INT) || (ATgetInt((ATermInt) q_6) != 39)))
                                              _fail(t);
                                            h_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(h_9);
                                        i_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_9);
                                        d_1 = t;
                                        t = SSLsetAnnotations(d_1, z_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SVar_1))
                                        {
                                          u_8 = ATgetArgument(t, 0);
                                          {
                                            ATerm d_10 = NULL,f_10 = NULL,g_10 = NULL,e_1 = NULL;
                                            t = SSLgetAnnotations(t_8);
                                            d_10 = t;
                                            t = SSL_explode_string(u_8);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm r_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                                                  _fail(t);
                                                f_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(f_10);
                                            g_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SVar_1, g_10);
                                            e_1 = t;
                                            t = SSLsetAnnotations(e_1, d_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_OpDecl_2))
                                            {
                                              u_8 = ATgetArgument(t, 0);
                                              v_8 = ATgetArgument(t, 1);
                                              {
                                                ATerm a_11 = NULL,h_11 = NULL,i_11 = NULL,f_1 = NULL;
                                                t = SSLgetAnnotations(t_8);
                                                a_11 = t;
                                                t = SSL_explode_string(u_8);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm s_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(s_6) != AT_INT) || (ATgetInt((ATermInt) s_6) != 39)))
                                                      _fail(t);
                                                    h_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(h_11);
                                                i_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, i_11, v_8);
                                                f_1 = t;
                                                t = SSLsetAnnotations(f_1, a_11);
                                              }
                                            }
                                          else
                                            {
                                              ATerm w_11 = NULL,i_12 = NULL,n_12 = NULL,k_1 = NULL;
                                              if(match_cons(t, sym_Op_2))
                                                {
                                                  u_8 = ATgetArgument(t, 0);
                                                  v_8 = ATgetArgument(t, 1);
                                                }
                                              else
                                                _fail(t);
                                              t = SSLgetAnnotations(t_8);
                                              w_11 = t;
                                              t = SSL_explode_string(u_8);
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  ATerm t_6 = ATgetFirst((ATermList) t);
                                                  if(((ATgetType(t_6) != AT_INT) || (ATgetInt((ATermInt) t_6) != 39)))
                                                    _fail(t);
                                                  i_12 = (ATerm) ATgetNext((ATermList) t);
                                                }
                                              else
                                                _fail(t);
                                              t = SSL_implode_string(i_12);
                                              n_12 = t;
                                              t = (ATerm) ATmakeAppl(sym_Op_2, n_12, v_8);
                                              k_1 = t;
                                              t = SSLsetAnnotations(k_1, w_11);
                                            }
                                        }
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
ATerm at_last_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  ATerm l_11 (ATerm t)
  {
    ATerm f_11 = NULL,g_11 = NULL,k_11 = NULL;
    f_11 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_11 = ATgetFirst((ATermList) t);
        k_11 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_6 = t;
      int v_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_12 = NULL,f_3 = NULL;
          t = SSLgetAnnotations(f_11);
          v_12 = t;
          t = k_11;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(k_11), g_11);
          f_3 = t;
          t = SSLsetAnnotations(f_3, v_12);
          t = o_81(t);
          ;
          LocalPopChoice(v_6);
        }
      else
        {
          t = u_6;
          {
            ATerm l_13 = NULL,r_13 = NULL,h_3 = NULL;
            t = SSLgetAnnotations(f_11);
            l_13 = t;
            t = k_11;
            t = l_11(t);
            r_13 = t;
            t = (ATerm) ATinsert(CheckATermList(r_13), g_11);
            h_3 = t;
            t = SSLsetAnnotations(h_3, l_13);
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
  ATerm v_11 = NULL,x_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_11 = ATgetFirst((ATermList) t);
      x_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_11;
    }
  else
    {
      t = x_11;
      t = last_0_0(t);
    }
  return(t);
}
ATerm s_0 (ATerm t)
{
  ATerm h_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm w_6 = ATgetFirst((ATermList) t);
      h_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = h_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm w_89 (ATerm), ATerm x_89 (ATerm), ATerm t)
{
  ATerm d_12 = NULL,f_12 = NULL,g_12 = NULL;
  d_12 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_12 = ATgetFirst((ATermList) t);
      {
        ATerm x_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = g_12;
  t = w_89(t);
  t = d_12;
  t = last_0_0(t);
  t = x_89(t);
  t = d_12;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm y_6 = ATgetFirst((ATermList) t);
      f_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = f_12;
  t = at_last_1_0(s_0, t);
  return(t);
}
ATerm o_24 (ATerm m_13, ATerm n_13, ATerm t)
{
  t = m_13;
  {
    ATerm z_6 = t;
    if((PushChoice() == 0))
      {
        ATerm t_13 = NULL,u_13 = NULL,v_13 = NULL,x_13 = NULL,k_3 = NULL;
        x_13 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_13 = ATgetFirst((ATermList) t);
            v_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(x_13);
        t_13 = t;
        t = v_13;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_13), u_13);
        k_3 = t;
        t = SSLsetAnnotations(k_3, t_13);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_6;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, m_13);
  }
  return(t);
}
ATerm p_24 (ATerm a_14, ATerm b_14, ATerm t)
{
  t = a_14;
  {
    ATerm b_7 = t;
    if((PushChoice() == 0))
      {
        ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL,j_14 = NULL,l_3 = NULL;
        j_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_14 = ATgetFirst((ATermList) t);
            g_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_14);
        e_14 = t;
        t = g_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_14), f_14);
        l_3 = t;
        t = SSLsetAnnotations(l_3, e_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_7;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, a_14);
  }
  return(t);
}
ATerm t_0 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,c_14 = NULL;
  g_15 = t;
  t = SSL_explode_term(g_15);
  if(match_cons(t, sym__2))
    {
      ATerm f_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) f_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm g_7 = ATgetArgument(t, 1);
        if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
          {
            h_15 = ATgetFirst((ATermList) g_7);
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
  t = SSL_explode_term(g_15);
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
                c_14 = ATgetFirst((ATermList) l_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, c_14), h_15));
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,t_14 = NULL;
  x_15 = t;
  t = SSL_explode_term(x_15);
  if(match_cons(t, sym__2))
    {
      ATerm p_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_7 = ATgetArgument(t, 1);
        if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
          {
            y_15 = ATgetFirst((ATermList) q_7);
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
  t = SSL_explode_term(x_15);
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
            ATerm v_7 = (ATerm) ATgetNext((ATermList) t_7);
            if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
              {
                t_14 = ATgetFirst((ATermList) v_7);
                {
                  ATerm x_7 = (ATerm) ATgetNext((ATermList) v_7);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, t_14), y_15));
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm j_16 = NULL,k_16 = NULL,w_14 = NULL;
  j_16 = t;
  t = SSL_explode_term(j_16);
  if(match_cons(t, sym__2))
    {
      ATerm y_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_7 = ATgetArgument(t, 1);
        if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
          {
            k_16 = ATgetFirst((ATermList) z_7);
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
  t = SSL_explode_term(j_16);
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
                w_14 = ATgetFirst((ATermList) e_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, w_14), k_16));
  return(t);
}
ATerm m_1 (ATerm t)
{
  t = term_o_7;
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm p_16 = NULL,x_16 = NULL,m_15 = NULL;
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_8 = ATgetArgument(t, 1);
        if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
          {
            x_16 = ATgetFirst((ATermList) h_8);
            {
              ATerm j_8 = (ATerm) ATgetNext((ATermList) h_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm k_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_8 = ATgetArgument(t, 1);
        if(((ATgetType(l_8) == AT_LIST) && !(ATisEmpty(l_8))))
          {
            ATerm n_8 = ATgetFirst((ATermList) l_8);
            ATerm o_8 = (ATerm) ATgetNext((ATermList) l_8);
            if(((ATgetType(o_8) == AT_LIST) && !(ATisEmpty(o_8))))
              {
                m_15 = ATgetFirst((ATermList) o_8);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, m_15), x_16));
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm p_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      p_17 = ATgetArgument(t, 0);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, t_17), p_17));
  return(t);
}
ATerm t_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
ATerm u_1 (ATerm t)
{
  ATerm b_18 = NULL,d_18 = NULL;
  if(match_cons(t, sym__2))
    {
      b_18 = ATgetArgument(t, 0);
      d_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_n_7, (ATerm) ATinsert(ATinsert(ATempty, d_18), b_18));
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm c_22 = NULL,d_22 = NULL;
  if(match_cons(t, sym__2))
    {
      c_22 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, d_22), c_22));
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm h_22 = NULL,i_22 = NULL;
  if(match_cons(t, sym__2))
    {
      h_22 = ATgetArgument(t, 0);
      i_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_q_8, (ATerm) ATinsert(ATinsert(ATempty, i_22), h_22));
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
ATerm f_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm h_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm q_14 = NULL,r_14 = NULL,v_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL;
  z_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_15 = ATgetArgument(t, 0);
      b_15 = ATgetArgument(t, 1);
      {
        ATerm e_15 = NULL;
        t = b_15;
        t = foldr_2_0(t_0, u_0, t);
        e_15 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_15, e_15);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_15 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_15, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_15 = ATgetArgument(t, 0);
              {
                ATerm m_14 = NULL;
                t = a_15;
                {
                  ATerm x_8 = t;
                  int y_8 = stack_ptr;
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
                                  t = term_j_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_i_6;
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
                      LocalPopChoice(y_8);
                    }
                  else
                    {
                      t = x_8;
                      {
                        ATerm o_14 = NULL;
                        t = SSL_explode_string(a_15);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_9) != AT_INT) || (ATgetInt((ATermInt) e_9) != 39)))
                              _fail(t);
                            {
                              ATerm f_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(f_9) == AT_LIST) && !(ATisEmpty(f_9))))
                                {
                                  o_14 = ATgetFirst((ATermList) f_9);
                                  {
                                    ATerm g_9 = (ATerm) ATgetNext((ATermList) f_9);
                                    if(((ATgetType(g_9) == AT_LIST) && !(ATisEmpty(g_9))))
                                      {
                                        ATerm j_9 = ATgetFirst((ATermList) g_9);
                                        if(((ATgetType(j_9) != AT_INT) || (ATgetInt((ATermInt) j_9) != 39)))
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
                        t = o_14;
                      }
                    }
                  m_14 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, m_14);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  a_15 = ATgetArgument(t, 0);
                  {
                    ATerm s_15 = NULL;
                    t = a_15;
                    t = foldr_2_0(v_0, w_0, t);
                    s_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_l_9, (ATerm) ATinsert(ATempty, s_15));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      a_15 = ATgetArgument(t, 0);
                      b_15 = ATgetArgument(t, 1);
                      {
                        ATerm a_1 (ATerm t)
                        {
                          t = b_15;
                          return(t);
                        }
                        t = a_15;
                        t = foldr_2_0(a_1, l_1, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          a_15 = ATgetArgument(t, 0);
                          t = a_15;
                          t = foldr_2_0(m_1, n_1, t);
                        }
                      else
                        {
                          ATerm m_9 = t;
                          int n_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  a_15 = ATgetArgument(t, 0);
                                  {
                                    ATerm o_9 = ATgetArgument(t, 1);
                                  }
                                  y_14 = ATgetArgument(t, 2);
                                  q_14 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(n_9);
                              t = (ATerm) ATmakeAppl(sym_Con_3, a_15, y_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_14), (ATerm) ATempty));
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
                                        a_15 = ATgetArgument(t, 0);
                                        {
                                          ATerm r_9 = ATgetArgument(t, 1);
                                        }
                                        y_14 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(q_9);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, a_15, y_14, term_u_9);
                                  }
                                else
                                  {
                                    t = p_9;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        a_15 = ATgetArgument(t, 0);
                                        b_15 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, a_15, b_15, term_u_9);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            a_15 = ATgetArgument(t, 0);
                                            b_15 = ATgetArgument(t, 1);
                                            {
                                              ATerm p_1 (ATerm t)
                                              {
                                                t = b_15;
                                                return(t);
                                              }
                                              t = a_15;
                                              t = foldr_2_0(p_1, q_1, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                a_15 = ATgetArgument(t, 0);
                                                t = a_15;
                                                t = foldr_2_0(t_1, u_1, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    a_15 = ATgetArgument(t, 0);
                                                    t = a_15;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        r_14 = ATgetFirst((ATermList) t);
                                                        v_14 = (ATerm) ATgetNext((ATermList) t);
                                                        t = v_14;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm v_9 = t;
                                                            int w_9 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = o_24(a_15, z_14, t);
                                                                ;
                                                                LocalPopChoice(w_9);
                                                              }
                                                            else
                                                              {
                                                                t = v_9;
                                                                t = r_14;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = o_24(a_15, z_14, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = o_24(a_15, z_14, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        a_15 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_15));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            a_15 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_15));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                a_15 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_15));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    a_15 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_15));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        a_15 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_15), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            a_15 = ATgetArgument(t, 0);
                                                                            b_15 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_15), b_15);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                a_15 = ATgetArgument(t, 0);
                                                                                b_15 = ATgetArgument(t, 1);
                                                                                {
                                                                                  ATerm z_1 (ATerm t)
                                                                                  {
                                                                                    t = b_15;
                                                                                    return(t);
                                                                                  }
                                                                                  t = a_15;
                                                                                  t = foldr_2_0(z_1, a_2, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    a_15 = ATgetArgument(t, 0);
                                                                                    t = a_15;
                                                                                    t = foldr_2_0(b_2, c_2, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        a_15 = ATgetArgument(t, 0);
                                                                                        b_15 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_c_7, (ATerm) ATinsert(CheckATermList(b_15), a_15));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            a_15 = ATgetArgument(t, 0);
                                                                                            t = a_15;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                r_14 = ATgetFirst((ATermList) t);
                                                                                                v_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = v_14;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm x_9 = t;
                                                                                                    int y_9 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = p_24(a_15, z_14, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(y_9);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = x_9;
                                                                                                        t = r_14;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = p_24(a_15, z_14, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = p_24(a_15, z_14, t);
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
                                                                                                    a_15 = ATgetArgument(t, 0);
                                                                                                    b_15 = ATgetArgument(t, 1);
                                                                                                    t = b_15;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        x_14 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_b_10, (ATerm) ATinsert(ATinsert(ATempty, x_14), a_15));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        a_15 = ATgetArgument(t, 0);
                                                                                                        t = a_15;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            a_15 = ATgetArgument(t, 0);
                                                                                                            b_15 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, a_15, b_15, term_c_10);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                a_15 = ATgetArgument(t, 0);
                                                                                                                b_15 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, a_15, b_15, term_c_10);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    a_15 = ATgetArgument(t, 0);
                                                                                                                    b_15 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, a_15, (ATerm)ATempty, b_15);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        a_15 = ATgetArgument(t, 0);
                                                                                                                        b_15 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, b_15, a_15);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimT_3))
                                                                                                                          {
                                                                                                                            a_15 = ATgetArgument(t, 0);
                                                                                                                            b_15 = ATgetArgument(t, 1);
                                                                                                                            y_14 = ATgetArgument(t, 2);
                                                                                                                            {
                                                                                                                              ATerm n_23 = NULL,o_15 = NULL;
                                                                                                                              t = SSL_explode_string(a_15);
                                                                                                                              t = unquote_chars_2_0(d_2, e_2, t);
                                                                                                                              o_15 = t;
                                                                                                                              t = SSL_implode_string(o_15);
                                                                                                                              n_23 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_PrimT_3, n_23, b_15, y_14);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                              {
                                                                                                                                a_15 = ATgetArgument(t, 0);
                                                                                                                                {
                                                                                                                                  ATerm u_23 = NULL,r_15 = NULL;
                                                                                                                                  t = SSL_explode_string(a_15);
                                                                                                                                  t = unquote_chars_2_0(f_2, h_2, t);
                                                                                                                                  r_15 = t;
                                                                                                                                  t = SSL_implode_string(r_15);
                                                                                                                                  u_23 = t;
                                                                                                                                  t = (ATerm) ATmakeAppl(sym_Prim_2, u_23, (ATerm) ATempty);
                                                                                                                                }
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                                  {
                                                                                                                                    a_15 = ATgetArgument(t, 0);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, a_15, (ATerm) ATempty);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                      {
                                                                                                                                        a_15 = ATgetArgument(t, 0);
                                                                                                                                        b_15 = ATgetArgument(t, 1);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDef_3, a_15, (ATerm)ATempty, b_15);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDef_3))
                                                                                                                                          {
                                                                                                                                            a_15 = ATgetArgument(t, 0);
                                                                                                                                            b_15 = ATgetArgument(t, 1);
                                                                                                                                            y_14 = ATgetArgument(t, 2);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDef_3, a_15, b_15, y_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                a_15 = ATgetArgument(t, 0);
                                                                                                                                                b_15 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDef_3, a_15, (ATerm)ATempty, b_15);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    a_15 = ATgetArgument(t, 0);
                                                                                                                                                    b_15 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDef_3, a_15, (ATerm)ATempty, b_15);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm e_10 = ATgetArgument(t, 0);
                                                                                                                                                        b_15 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, b_15);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  ATerm x_24 (ATerm t)
  {
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        t = x_24(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
      }
    return(t);
  }
  t = x_24(t);
  return(t);
}
ATerm topdown_1_0 (ATerm w_74 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    t = topdown_1_0(w_74, t);
    return(t);
  }
  t = w_74(t);
  t = SRTS_all(i_2, t);
  return(t);
}
ATerm f_5 (ATerm a_41, ATerm b_41, ATerm t)
{
  ATerm y_24 = NULL;
  t = SSL_fputc(a_41, b_41);
  y_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_24);
  return(t);
}
ATerm g_5 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm b_25 = NULL;
  t = SSL_write_term_to_stream_text(o_44, p_44);
  b_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_25);
  return(t);
}
ATerm i_5 (ATerm k_93 (ATerm), ATerm q_429, ATerm s_44, ATerm t)
{
  ATerm d_25 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_429, term_j_10);
  t = l_5(t);
  d_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_25, s_44);
  t = k_93(t);
  t = fclose_0_0(t);
  t = s_44;
  return(t);
}
ATerm h_5 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm e_25 = NULL;
  t = SSL_write_term_to_stream_baf(k_44, l_44);
  e_25 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_25);
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm n_16 = NULL,q_16 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          n_16 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      q_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(n_16, q_16, t);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm j_17 = NULL,l_17 = NULL,m_17 = NULL,o_17 = NULL,q_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm l_10 = ATgetArgument(t, 0);
      if(match_cons(l_10, sym_Stream_1))
        {
          o_17 = ATgetArgument(l_10, 0);
        }
      else
        _fail(t);
      q_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(o_17, q_17, t);
  j_17 = t;
  t = term_i_6;
  l_17 = t;
  t = j_17;
  if(match_cons(t, sym_Stream_1))
    {
      m_17 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, j_17);
  t = f_5(l_17, m_17, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_25 = NULL,p_25 = NULL,q_25 = NULL,r_25 = NULL,s_25 = NULL,w_25 = NULL,z_25 = NULL,a_26 = NULL,b_26 = NULL,c_26 = NULL,i_28 = NULL,j_28 = NULL,t_3 = NULL,r_3 = NULL;
  p_25 = t;
  if(match_cons(t, sym__2))
    {
      a_26 = ATgetArgument(t, 0);
      b_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_25);
  z_25 = t;
  t = a_26;
  {
    ATerm m_10 = t;
    int n_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_2 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_25 != NULL) && (l_25 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(j_2, t);
        ;
        LocalPopChoice(n_10);
      }
    else
      {
        t = m_10;
        t = term_o_10;
        l_25 = t;
      }
    c_26 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_26, b_26);
    r_3 = t;
    t = SSLsetAnnotations(r_3, z_25);
    t = p_25;
    if(match_cons(t, sym__2))
      {
        r_25 = ATgetArgument(t, 0);
        s_25 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(p_25);
    q_25 = t;
    t = (ATerm) ATmakeAppl(sym__2, r_25, (ATerm) ATmakeAppl(sym__2, not_null(l_25), s_25));
    t_3 = t;
    t = SSLsetAnnotations(t_3, q_25);
    w_25 = t;
    if(match_cons(t, sym__2))
      {
        i_28 = ATgetArgument(t, 0);
        j_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_16 = NULL,d_16 = NULL,g_16 = NULL,h_16 = NULL,m_16 = NULL,u_3 = NULL;
          t = SSLgetAnnotations(w_25);
          a_16 = t;
          t = i_28;
          t = fetch_1_0(k_2, t);
          d_16 = t;
          t = j_28;
          if(match_cons(t, sym__2))
            {
              h_16 = ATgetArgument(t, 0);
              m_16 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = i_5(l_2, h_16, m_16, t);
          g_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_16, g_16);
          u_3 = t;
          t = SSLsetAnnotations(u_3, a_16);
          ;
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
          {
            ATerm v_16 = NULL,z_16 = NULL,a_17 = NULL,c_17 = NULL,v_3 = NULL;
            t = SSLgetAnnotations(w_25);
            v_16 = t;
            t = j_28;
            if(match_cons(t, sym__2))
              {
                a_17 = ATgetArgument(t, 0);
                c_17 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = i_5(n_2, a_17, c_17, t);
            z_16 = t;
            t = (ATerm) ATmakeAppl(sym__2, i_28, z_16);
            v_3 = t;
            t = SSLsetAnnotations(v_3, v_16);
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
ATerm apply_strategy_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,w_28 = NULL;
  w_28 = t;
  t = dtime_0_0(t);
  t = w_28;
  t = m_96(t);
  s_28 = t;
  t = dtime_0_0(t);
  p_28 = t;
  t = s_28;
  if(match_cons(t, sym__2))
    {
      q_28 = ATgetArgument(t, 0);
      r_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(q_28), (ATerm) ATmakeAppl(sym_Runtime_1, p_28)), r_28);
  return(t);
}
ATerm o_29 (ATerm i_29, ATerm t)
{
  t = SSL_fclose(i_29);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  m_29 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_29 = ATgetArgument(t, 0);
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_29);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            t = o_29(m_29, t);
          }
      }
    }
  else
    {
      t = o_29(m_29, t);
    }
  return(t);
}
ATerm j_5 (ATerm q_44, ATerm t)
{
  t = SSL_read_term_from_stream(q_44);
  return(t);
}
ATerm k_5 (ATerm c_41, ATerm d_41, ATerm t)
{
  ATerm p_29 = NULL;
  t = SSL_fopen(c_41, d_41);
  p_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_29 = NULL;
  t = SSL_stdin_stream();
  q_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_29 = NULL;
  t = SSL_stdout_stream();
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_29 = NULL;
  t = SSL_stderr_stream();
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_29);
  return(t);
}
ATerm b_31 (ATerm z_29, ATerm t)
{
  ATerm a_30 = NULL;
  t = SSL_explode_term(z_29);
  if(match_cons(t, sym__2))
    {
      ATerm t_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_10 = ATgetArgument(t, 1);
        if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
          {
            a_30 = ATgetFirst((ATermList) u_10);
            {
              ATerm v_10 = (ATerm) ATgetNext((ATermList) u_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm c_31 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL,l_30 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(f_30);
  i_30 = t;
  t = d_30;
  if(match_cons(t, sym_Path_1))
    {
      l_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_30, e_30);
  d_4 = t;
  t = SSLsetAnnotations(d_4, i_30);
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(g_30, h_30, t);
  return(t);
}
ATerm d_31 (ATerm n_30, ATerm o_30, ATerm p_30, ATerm t)
{
  ATerm q_30 = NULL,s_30 = NULL,t_30 = NULL,w_30 = NULL,e_4 = NULL;
  t = SSLgetAnnotations(p_30);
  t_30 = t;
  t = SSL_is_string(n_30);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, o_30);
  e_4 = t;
  t = SSLsetAnnotations(e_4, t_30);
  if(match_cons(t, sym__2))
    {
      q_30 = ATgetArgument(t, 0);
      s_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(q_30, s_30, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  y_30 = t;
  if(match_cons(t, sym__2))
    {
      z_30 = ATgetArgument(t, 0);
      a_31 = ATgetArgument(t, 1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_31(y_30, t);
            ;
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm y_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = c_31(z_30, a_31, y_30, t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = y_10;
                  t = d_31(z_30, a_31, y_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_31(y_30, t);
    }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = term_b_11;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_31 = NULL;
      h_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_31, term_e_11);
      t = l_5(t);
      ;
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = debug_1_0(o_2, t);
      _fail(t);
    }
  f_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = j_5(g_31, t);
  e_31 = t;
  t = f_31;
  t = fclose_0_0(t);
  t = e_31;
  return(t);
}
ATerm fetch_1_0 (ATerm x_80 (ATerm), ATerm t)
{
  ATerm f_32 (ATerm t)
  {
    ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
    c_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_32 = ATgetFirst((ATermList) t);
        e_32 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = NULL,j_18 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(c_32);
          g_18 = t;
          t = d_32;
          t = x_80(t);
          j_18 = t;
          t = (ATerm) ATinsert(CheckATermList(e_32), j_18);
          k_4 = t;
          t = SSLsetAnnotations(k_4, g_18);
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = j_11;
          {
            ATerm r_18 = NULL,u_18 = NULL,l_4 = NULL;
            t = SSLgetAnnotations(c_32);
            r_18 = t;
            t = e_32;
            t = f_32(t);
            u_18 = t;
            t = (ATerm) ATinsert(CheckATermList(u_18), d_32);
            l_4 = t;
            t = SSLsetAnnotations(l_4, r_18);
          }
        }
    }
    return(t);
  }
  t = f_32(t);
  return(t);
}
ATerm e_5 (ATerm q_35, ATerm r_35, ATerm t)
{
  t = SSL_strcat(q_35, r_35);
  return(t);
}
ATerm debug_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  i_32 = t;
  t = i_93(t);
  j_32 = t;
  t = term_w_5;
  k_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, i_32), j_32);
  l_32 = t;
  t = SSL_printnl(k_32, l_32);
  t = i_32;
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
    }
  return(t);
}
ATerm q_2 (ATerm t)
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
      ATerm s_32 = NULL;
      s_32 = t;
      t = SSL_is_string(s_32);
      ;
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
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            {
              ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
              y_32 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_32 = ATgetArgument(t, 0);
                  t = z_32;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_32 = ATgetArgument(t, 0);
                      t = z_32;
                      {
                        ATerm u_11 = t;
                        int y_11 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(y_11);
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
                      ATerm e_33 = NULL,f_33 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_32 = ATgetArgument(t, 0);
                          a_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_32;
                      t = eval_config_0_0(t);
                      e_33 = t;
                      t = a_33;
                      t = eval_config_0_0(t);
                      f_33 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_33, f_33);
                      t = e_5(e_33, f_33, t);
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
  ATerm j_33 = NULL,k_33 = NULL;
  j_33 = t;
  t = term_z_11;
  k_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_11, j_33);
  t = o_5(k_33, j_33, t);
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_33 = NULL,m_33 = NULL;
        t = eval_config_0_0(t);
        l_33 = t;
        t = term_z_11;
        m_33 = t;
        t = SSL_table_put(m_33, j_33, l_33);
        t = l_33;
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm v_94 (ATerm), ATerm t)
{
  ATerm q_33 = NULL;
  q_33 = t;
  {
    ATerm c_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_33 = NULL;
        t = term_j_12;
        t = get_config_0_0(t);
        s_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_33, term_k_12);
        t = geq_0_0(t);
        t = q_33;
        t = v_94(t);
        ;
        LocalPopChoice(e_12);
      }
    else
      {
        t = c_12;
        t = q_33;
      }
  }
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm v_33 = NULL;
  v_33 = t;
  if(match_string(t, "-k"))
    {
      t = v_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_33;
    }
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  t = SSL_string_to_int(w_33);
  x_33 = t;
  t = term_l_12;
  y_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_12, x_33);
  t = r_5(y_33, x_33, t);
  t = w_33;
  return(t);
}
ATerm t_2 (ATerm t)
{
  t = term_m_12;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_2, s_2, t_2, t);
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm a_34 = NULL;
  a_34 = t;
  if(match_string(t, "-S"))
    {
      t = a_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = a_34;
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  t = term_j_12;
  b_34 = t;
  t = term_o_12;
  c_34 = t;
  t = term_p_12;
  t = r_5(b_34, c_34, t);
  t = term_q_12;
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm x_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL;
  d_34 = t;
  t = SSL_string_to_int(d_34);
  e_34 = t;
  t = term_j_12;
  f_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_12, e_34);
  t = r_5(f_34, e_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, d_34);
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm a_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  t = term_t_12;
  g_34 = t;
  t = term_v_5;
  h_34 = t;
  t = term_u_12;
  t = r_5(g_34, h_34, t);
  t = term_w_12;
  return(t);
}
ATerm c_3 (ATerm t)
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
      ;
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
            ;
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
ATerm r_5 (ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm i_34 = NULL;
  t = term_z_11;
  i_34 = t;
  t = SSL_table_put(i_34, r_45, s_45);
  t = (ATerm) ATmakeAppl(sym__3, term_z_11, r_45, s_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm l_34 = NULL,m_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
      t = term_v_5;
      t = h_0(t);
      n_34 = t;
      t = term_c_13;
      o_34 = t;
      t = term_d_13;
      p_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, n_34);
      t = p_5(o_34, p_34, n_34, t);
      _fail(t);
    }
  else
    {
      ATerm s_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_34 = ATgetFirst((ATermList) t);
          m_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_34;
      t = d_0(t);
      t = term_v_5;
      t = g_0(t);
      s_34 = t;
      t = (ATerm) ATinsert(CheckATermList(m_34), s_34);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-o"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  v_34 = t;
  t = term_e_13;
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_13, v_34);
  t = r_5(w_34, v_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_34);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, g_3, t);
  return(t);
}
ATerm p_5 (ATerm p_50, ATerm q_50, ATerm o_50, ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_50, q_50);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm i_13 = ATgetArgument(t, 0);
            ATerm j_13 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, p_50, q_50);
        t = o_5(p_50, q_50, t);
        ;
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = (ATerm) ATempty;
      }
    z_34 = t;
    t = (ATerm) ATinsert(CheckATermList(z_34), o_50);
    a_35 = t;
    t = SSL_table_put(p_50, q_50, a_35);
    t = y_34;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL,k_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
      t = term_v_5;
      t = m_0(t);
      l_35 = t;
      t = term_c_13;
      m_35 = t;
      t = term_d_13;
      n_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_13, term_d_13, l_35);
      t = p_5(m_35, n_35, l_35, t);
      _fail(t);
    }
  else
    {
      ATerm t_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_35 = ATgetFirst((ATermList) t);
          i_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_35;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_35 = ATgetFirst((ATermList) t);
          k_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_35;
      t = k_0(t);
      t = j_35;
      t = l_0(t);
      t_35 = t;
      t = (ATerm) ATinsert(CheckATermList(k_35), t_35);
    }
  return(t);
}
ATerm i_3 (ATerm t)
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
ATerm j_3 (ATerm t)
{
  ATerm w_35 = NULL,y_35 = NULL;
  w_35 = t;
  t = term_k_13;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_13, w_35);
  t = r_5(y_35, w_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_35);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(i_3, j_3, m_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_5;
  t = whoami_0_0(t);
  z_35 = t;
  t = term_w_5;
  b_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_13), z_35);
  c_36 = t;
  t = SSL_printnl(b_36, c_36);
  t = term_a_6;
  a_36 = t;
  t = SSL_exit(a_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_13;
  t = get_config_0_0(t);
  return(t);
}
ATerm m_5 (ATerm a_38, ATerm b_38, ATerm t)
{
  ATerm s_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(a_38, b_38);
      ;
      LocalPopChoice(w_13);
    }
  else
    {
      t = s_13;
      t = SSL_addr(a_38, b_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm q_86 (ATerm), ATerm r_86 (ATerm), ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_36;
      t = q_86(t);
    }
  else
    {
      ATerm j_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_36 = ATgetFirst((ATermList) t);
          g_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_36;
      t = foldr_2_0(q_86, r_86, t);
      j_36 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_36, j_36);
      t = r_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm n_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm l_19 = NULL,m_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      m_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_5(l_19, m_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_36 = NULL,h_19 = NULL,i_19 = NULL;
  t = times_0_0(t);
  i_19 = t;
  t = SSL_explode_term(i_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_13 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  t = foldr_2_0(n_3, o_3, t);
  m_36 = t;
  t = SSL_TicksToSeconds(m_36);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL;
  x_36 = t;
  if(match_cons(t, sym__2))
    {
      y_36 = ATgetArgument(t, 0);
      z_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_13 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_36;
        if((y_36 != t))
          {
            _fail(t);
          }
        t = x_36;
        ;
        LocalPopChoice(d_14);
      }
    else
      {
        t = z_13;
        t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_36, z_36);
              ;
              LocalPopChoice(i_14);
            }
          else
            {
              t = h_14;
              t = SSL_gtr(y_36, z_36);
            }
          t = (ATerm) ATmakeAppl(sym__2, y_36, z_36);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm u_94 (ATerm), ATerm t)
{
  ATerm d_37 = NULL;
  d_37 = t;
  {
    ATerm k_14 = t;
    int l_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_37 = NULL;
        t = term_j_12;
        t = get_config_0_0(t);
        f_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_37, term_a_6);
        t = geq_0_0(t);
        t = d_37;
        t = u_94(t);
        ;
        LocalPopChoice(l_14);
      }
    else
      {
        t = k_14;
        t = d_37;
      }
  }
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,k_37 = NULL,l_37 = NULL;
  t = run_time_0_0(t);
  h_37 = t;
  t = term_v_5;
  t = whoami_0_0(t);
  i_37 = t;
  t = term_w_5;
  k_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), h_37), term_n_14), i_37);
  l_37 = t;
  t = SSL_printnl(k_37, l_37);
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_14), h_37), term_n_14), i_37));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(p_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm m_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_12;
  m_37 = t;
  t = SSL_exit(m_37);
  return(t);
}
ATerm s_3 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL;
  v_37 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_37;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_37 = ATgetArgument(t, 0);
          {
            ATerm y_19 = NULL,v_4 = NULL;
            t = SSLgetAnnotations(v_37);
            y_19 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_37);
            v_4 = t;
            t = SSLsetAnnotations(v_4, y_19);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_37;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm k_97 (ATerm), ATerm t)
{
  ATerm s_14 = t;
  int u_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_15;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(u_14);
    }
  else
    {
      t = s_14;
      t = fetch_1_0(s_3, t);
    }
  t = k_97(t);
  return(t);
}
ATerm map_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm n_38 (ATerm t)
  {
    ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
    k_38 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_38;
      }
    else
      {
        ATerm g_20 = NULL,j_20 = NULL,k_20 = NULL,x_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_38 = ATgetFirst((ATermList) t);
            m_38 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_38);
        g_20 = t;
        t = l_38;
        t = n_80(t);
        j_20 = t;
        t = m_38;
        t = n_38(t);
        k_20 = t;
        t = (ATerm) ATinsert(CheckATermList(k_20), j_20);
        x_4 = t;
        t = SSLsetAnnotations(x_4, g_20);
      }
    return(t);
  }
  t = n_38(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_38 = ATgetFirst((ATermList) t);
      r_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm v_38 = NULL,w_38 = NULL;
        ATerm w_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(v_38)), not_null(w_38));
          return(t);
        }
        t = r_38;
        t = j_0(t);
        if(((v_38 != NULL) && (v_38 != t)))
          _fail(t);
        else
          v_38 = t;
        t = q_38;
        t = i_0(t);
        if(((w_38 != NULL) && (w_38 != t)))
          _fail(t);
        else
          w_38 = t;
        t = r_38;
        t = reverse_acc_2_0(i_0, w_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_5;
      t = j_0(t);
    }
  return(t);
}
ATerm o_5 (ATerm g_52, ATerm h_52, ATerm t)
{
  t = SSL_table_get(g_52, h_52);
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_5 = NULL;
  c_39 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_39);
  a_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_39);
  d_5 = t;
  t = SSLsetAnnotations(d_5, a_39);
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm e_39 = NULL;
  e_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_39), term_d_15);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  ATerm f_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_13;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = f_15;
      t = fetch_1_0(x_3, t);
    }
  t = term_j_15;
  t = echo_0_0(t);
  t = term_c_13;
  y_38 = t;
  t = term_d_13;
  z_38 = t;
  t = term_k_15;
  t = o_5(y_38, z_38, t);
  t = reverse_acc_2_0(_id, a_4, t);
  t = map_1_0(b_4, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  h_39 = t;
  {
    ATerm l_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = h_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_15 = ATgetFirst((ATermList) t);
                ATerm q_15 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = h_39;
          }
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = l_15;
        t = (ATerm) ATinsert(ATempty, h_39);
      }
    i_39 = t;
    t = term_o_10;
    j_39 = t;
    t = SSL_printnl(j_39, i_39);
    t = h_39;
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
ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL;
  t = term_t_15;
  n_39 = t;
  t = term_v_5;
  o_39 = t;
  t = term_u_15;
  t = r_5(n_39, o_39, t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  t = term_v_15;
  return(t);
}
ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  t = term_t_15;
  r_39 = t;
  t = term_v_5;
  s_39 = t;
  t = term_u_15;
  t = r_5(r_39, s_39, t);
  t = term_w_15;
  p_39 = t;
  t = term_v_5;
  q_39 = t;
  t = term_z_15;
  t = r_5(p_39, q_39, t);
  t = term_b_16;
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_c_16;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_4, f_4, g_4, t);
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      t = Option_3_0(h_4, i_4, j_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_59 (ATerm), ATerm x_59 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,s_5 = NULL;
  y_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_39);
  t_39 = t;
  t = u_39;
  t = w_59(t);
  w_39 = t;
  t = v_39;
  t = x_59(t);
  x_39 = t;
  t = (ATerm) ATinsert(CheckATermList(x_39), w_39);
  s_5 = t;
  t = SSLsetAnnotations(s_5, t_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm n_99 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,i_40 = NULL,j_40 = NULL,x_5 = NULL;
  d_40 = t;
  {
    ATerm i_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_16;
        t = n_99(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = i_16;
      }
    t = d_40;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_40 = ATgetFirst((ATermList) t);
        g_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_40);
    e_40 = t;
    t = term_q_13;
    j_40 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_q_13, f_40);
    t = r_5(j_40, f_40, t);
    t = g_40;
    {
      ATerm t_40 (ATerm t)
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_16 = t;
            int u_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_40 = NULL;
                m_40 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = m_40;
                ;
                LocalPopChoice(u_16);
              }
            else
              {
                t = t_16;
                t = n_99(t);
                t = Cons_2_0(_id, t_40, t);
              }
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            {
              ATerm p_40 = NULL,q_40 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  p_40 = ATgetFirst((ATermList) t);
                  q_40 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(q_40), (ATerm) ATmakeAppl(sym_Undefined_1, p_40));
            }
          }
        return(t);
      }
      t = t_40(t);
      i_40 = t;
      t = (ATerm) ATinsert(CheckATermList(i_40), (ATerm) ATmakeAppl(sym_Program_1, f_40));
      x_5 = t;
      t = SSLsetAnnotations(x_5, e_40);
    }
  }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm l_41 = NULL;
  l_41 = t;
  if(match_string(t, "--help"))
    {
      t = l_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_41;
        }
    }
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm m_41 = NULL,n_41 = NULL;
  t = term_c_15;
  m_41 = t;
  t = term_v_5;
  n_41 = t;
  t = term_w_16;
  t = r_5(m_41, n_41, t);
  t = term_y_16;
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm m_99 (ATerm), ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  g_41 = t;
  t = term_c_13;
  i_41 = t;
  t = term_d_13;
  j_41 = t;
  t = (ATerm) ATempty;
  k_41 = t;
  t = SSL_table_put(i_41, j_41, k_41);
  t = g_41;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm d_17 = t;
      int e_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_99(t);
          ;
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
                t = Option_3_0(n_4, o_4, p_4, t);
                ;
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
    t = parse_options_p__1_0(m_4, t);
    {
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_41 = NULL;
          u_41 = t;
          {
            ATerm k_17 = t;
            int n_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_20 = NULL;
                t = u_41;
                {
                  ATerm r_17 = t;
                  int s_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_c_15;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(s_17);
                    }
                  else
                    {
                      t = r_17;
                      t = fetch_1_0(q_4, t);
                    }
                  t = u_41;
                  t = default_system_usage_0_0(t);
                  t = term_o_12;
                  r_20 = t;
                  t = SSL_exit(r_20);
                }
                ;
                LocalPopChoice(n_17);
              }
            else
              {
                t = k_17;
                {
                  ATerm v_20 = NULL;
                  t = term_t_15;
                  t = get_config_0_0(t);
                  t = u_41;
                  t = default_system_about_0_0(t);
                  t = term_o_12;
                  v_20 = t;
                  t = SSL_exit(v_20);
                }
              }
          }
          ;
          LocalPopChoice(i_17);
        }
      else
        {
          t = h_17;
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
                ATerm s_4 (ATerm t)
                {
                  ATerm y_41 = NULL,z_41 = NULL,a_42 = NULL,c_6 = NULL;
                  a_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      z_41 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(a_42);
                  y_41 = t;
                  t = z_41;
                  if(((y_40 != NULL) && (y_40 != t)))
                    _fail(t);
                  else
                    y_40 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, z_41);
                  c_6 = t;
                  t = SSLsetAnnotations(c_6, y_41);
                  return(t);
                }
                t = fetch_1_0(s_4, t);
                t = term_w_5;
                w_41 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_w_17);
                x_41 = t;
                t = SSL_printnl(w_41, x_41);
                t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_40)), term_w_17));
                t = default_system_usage_0_0(t);
                t = term_a_6;
                v_41 = t;
                t = SSL_exit(v_41);
                ;
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
              }
          }
        }
      z_40 = t;
      t = term_c_13;
      h_41 = t;
      t = SSL_table_destroy(h_41);
      t = z_40;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm m_97 (ATerm), ATerm n_97 (ATerm), ATerm o_97 (ATerm), ATerm p_97 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  t = parse_options_1_0(m_97, t);
  f_42 = t;
  t = term_x_17;
  i_42 = t;
  t = SSL_table_create(i_42);
  t = term_x_17;
  g_42 = t;
  t = term_y_17;
  h_42 = t;
  t = SSL_table_put(g_42, h_42, f_42);
  t = f_42;
  t = o_97(t);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(n_97, t);
        ;
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        {
          ATerm c_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_18);
            }
          else
            {
              t = c_18;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = if_verbose2_1_0(n_5, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_f_18;
  j_42 = t;
  t = term_v_5;
  k_42 = t;
  t = term_h_18;
  t = r_5(j_42, k_42, t);
  t = term_i_18;
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_k_18;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
  l_42 = t;
  t = term_q_13;
  t = get_config_0_0(t);
  m_42 = t;
  t = term_w_5;
  n_42 = t;
  t = (ATerm) ATinsert(ATempty, m_42);
  o_42 = t;
  t = SSL_printnl(n_42, o_42);
  t = l_42;
  return(t);
}
ATerm iowrap_3_0 (ATerm v_96 (ATerm), ATerm w_96 (ATerm), ATerm x_96 (ATerm), ATerm t)
{
  ATerm t_4 (ATerm t)
  {
    ATerm l_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_96(t);
        ;
        LocalPopChoice(m_18);
      }
    else
      {
        t = l_18;
        {
          ATerm n_18 = t;
          int o_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_18);
            }
          else
            {
              t = n_18;
              {
                ATerm p_18 = t;
                int q_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_18);
                  }
                else
                  {
                    t = p_18;
                    {
                      ATerm s_18 = t;
                      int t_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(z_4, b_5, c_5, t);
                          ;
                          LocalPopChoice(t_18);
                        }
                      else
                        {
                          t = s_18;
                          {
                            ATerm v_18 = t;
                            int w_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(w_18);
                              }
                            else
                              {
                                t = v_18;
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
  ATerm w_4 (ATerm t)
  {
    ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
    q_42 = t;
    {
      ATerm x_18 = t;
      int y_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((p_42 != NULL) && (p_42 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  p_42 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(q_5, t);
          ;
          LocalPopChoice(y_18);
        }
      else
        {
          t = x_18;
          t = term_z_18;
          p_42 = t;
        }
      t = not_null(p_42);
      t = ReadFromFile_0_0(t);
      r_42 = t;
      t = (ATerm) ATmakeAppl(sym__2, q_42, r_42);
      t = apply_strategy_1_0(v_96, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(t_4, x_96, u_4, w_4, t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,h_6 = NULL;
  y_42 = t;
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_42);
  u_42 = t;
  t = w_42;
  {
    ATerm a_19 = t;
    int b_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_42 = NULL;
        t = SSL_explode_term(w_42);
        if(match_cons(t, sym__2))
          {
            ATerm c_19 = ATgetArgument(t, 0);
            ATerm d_19 = ATgetArgument(t, 1);
            if(((ATgetType(d_19) == AT_LIST) && !(ATisEmpty(d_19))))
              {
                z_42 = ATgetFirst((ATermList) d_19);
                {
                  ATerm e_19 = (ATerm) ATgetNext((ATermList) d_19);
                  if(((ATgetType(e_19) != AT_LIST) || !(ATisEmpty(e_19))))
                    _fail(t);
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
        t = z_42;
        ;
        LocalPopChoice(b_19);
      }
    else
      {
        t = a_19;
      }
    t = topdown_1_0(u_5, t);
    x_42 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_42, x_42);
    h_6 = t;
    t = SSLsetAnnotations(h_6, u_42);
  }
  return(t);
}
ATerm u_5 (ATerm t)
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
  t = iowrap_3_0(t_5, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
