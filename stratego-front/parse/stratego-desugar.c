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
ATerm term_y_22;
ATerm term_t_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_o_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_o_18;
ATerm term_l_18;
ATerm term_d_18;
ATerm term_c_18;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_t_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_l_15;
ATerm term_h_15;
ATerm term_o_14;
ATerm term_f_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_u_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_c_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_q_11;
ATerm term_p_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_c_11;
ATerm term_y_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_j_7;
void init_constant_terms (void)
{
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(sym_Op_2, term_f_11, (ATerm) ATempty);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(sym_Sort_2, term_f_11, (ATerm) ATempty);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_11);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_11);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Call_2, term_q_12, (ATerm) ATempty);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Tuple", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_13);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_Call_2, term_k_13, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_Call_2, term_e_11, (ATerm) ATempty);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_13);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(sym__2, term_g_16, term_k_16);
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_16);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym__2, term_t_16, term_j_7);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_b_17, term_c_17);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym__2, term_x_18, term_j_7);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_j_7);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_l_18, term_j_7);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_j_7);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm Op_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm);
ATerm OpDecl_2_0 (ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm);
ATerm SVar_1_0 (ATerm n_83 (ATerm), ATerm);
ATerm Var_1_0 (ATerm a_78 (ATerm), ATerm);
ATerm VarDec_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm SDef_3_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm);
ATerm RDef_3_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm);
ATerm DefaultVarDec_1_0 (ATerm x_85 (ATerm), ATerm);
ATerm unescape_chars_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm l_2 (ATerm);
ATerm m_2 (ATerm);
ATerm n_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm t_2 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm u_2 (ATerm);
ATerm at_last_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm unquote_chars_1_0 (ATerm c_103 (ATerm), ATerm);
ATerm c_19 (ATerm l_13, ATerm n_13, ATerm);
ATerm f_19 (ATerm t_13, ATerm w_13, ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm d_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm);
ATerm _2_0 (ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm);
ATerm e_5 (ATerm l_54, ATerm m_54, ATerm);
ATerm f_5 (ATerm z_57, ATerm a_58, ATerm);
ATerm h_5 (ATerm p_106 (ATerm), ATerm l_459, ATerm d_58, ATerm);
ATerm g_5 (ATerm v_57, ATerm w_57, ATerm);
ATerm w_4 (ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm c_5 (ATerm);
ATerm l_5 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm r_109 (ATerm), ATerm);
ATerm z_21 (ATerm s_21, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm i_5 (ATerm b_58, ATerm);
ATerm j_5 (ATerm n_54, ATerm o_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm o_5 (ATerm);
ATerm q_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm i_94 (ATerm), ATerm);
ATerm d_5 (ATerm b_49, ATerm c_49, ATerm);
ATerm debug_1_0 (ATerm n_106 (ATerm), ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm b_6 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm h_6 (ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm p_5 (ATerm c_59, ATerm d_59, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_6 (ATerm);
ATerm o_6 (ATerm);
ATerm p_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm n_5 (ATerm a_64, ATerm b_64, ATerm z_63, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm r_6 (ATerm);
ATerm s_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_5 (ATerm l_51, ATerm m_51, ATerm);
ATerm foldr_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm u_6 (ATerm);
ATerm v_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm w_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm x_6 (ATerm);
ATerm need_help_1_0 (ATerm p_110 (ATerm), ATerm);
ATerm map_1_0 (ATerm y_93 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm m_5 (ATerm r_65, ATerm s_65, ATerm);
ATerm Program_1_0 (ATerm b_79 (ATerm), ATerm);
ATerm e_7 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm c_79 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm h_7 (ATerm);
ATerm i_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm m_7 (ATerm);
ATerm n_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm);
ATerm o_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm s_112 (ATerm), ATerm);
ATerm r_7 (ATerm);
ATerm s_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm r_112 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm);
ATerm y_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm d_8 (ATerm);
ATerm iowrap_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm);
ATerm f_8 (ATerm);
ATerm g_8 (ATerm);
ATerm h_8 (ATerm);
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
  t = term_j_7;
  t = whoami_0_0(t);
  k_0 = t;
  t = term_i_8;
  l_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_8), k_0), term_j_8);
  m_0 = t;
  t = SSL_printnl(l_0, m_0);
  t = term_l_8;
  o_0 = t;
  t = SSL_exit(o_0);
  t = f_0;
  return(t);
}
ATerm Op_2_0 (ATerm p_80 (ATerm), ATerm q_80 (ATerm), ATerm t)
{
  ATerm p_0 = NULL,q_0 = NULL,s_0 = NULL,t_0 = NULL,u_0 = NULL,w_0 = NULL,b_0 = NULL,n_0 = NULL;
  w_0 = t;
  if(match_cons(t, sym_Op_2))
    {
      q_0 = ATgetArgument(t, 0);
      s_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_0);
  p_0 = t;
  t = q_0;
  t = p_80(t);
  t_0 = t;
  t = s_0;
  t = q_80(t);
  u_0 = t;
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, t_0, u_0);
  b_0 = t;
  t = SSLsetAnnotations(b_0, p_0);
  return(t);
}
ATerm OpDecl_2_0 (ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm t)
{
  ATerm a_1 = NULL,c_1 = NULL,d_1 = NULL,e_1 = NULL,g_1 = NULL,h_1 = NULL,v_0 = NULL,x_0 = NULL;
  h_1 = t;
  if(match_cons(t, sym_OpDecl_2))
    {
      c_1 = ATgetArgument(t, 0);
      d_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_1);
  a_1 = t;
  t = c_1;
  t = v_79(t);
  e_1 = t;
  t = d_1;
  t = w_79(t);
  g_1 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_OpDecl_2, e_1, g_1);
  v_0 = t;
  t = SSLsetAnnotations(v_0, a_1);
  return(t);
}
ATerm SVar_1_0 (ATerm n_83 (ATerm), ATerm t)
{
  ATerm l_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL,z_0 = NULL,f_1 = NULL;
  p_1 = t;
  if(match_cons(t, sym_SVar_1))
    {
      n_1 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_1);
  l_1 = t;
  t = n_1;
  t = n_83(t);
  o_1 = t;
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym_SVar_1, o_1);
  z_0 = t;
  t = SSLsetAnnotations(z_0, l_1);
  return(t);
}
ATerm Var_1_0 (ATerm a_78 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,o_2 = NULL,s_2 = NULL,i_1 = NULL,j_1 = NULL;
  s_2 = t;
  if(match_cons(t, sym_Var_1))
    {
      g_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_2);
  f_2 = t;
  t = g_2;
  t = a_78(t);
  o_2 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym_Var_1, o_2);
  i_1 = t;
  t = SSLsetAnnotations(i_1, f_2);
  return(t);
}
ATerm VarDec_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL,a_3 = NULL,c_3 = NULL,d_3 = NULL,k_1 = NULL,m_1 = NULL;
  d_3 = t;
  if(match_cons(t, sym_VarDec_2))
    {
      x_2 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_3);
  w_2 = t;
  t = x_2;
  t = y_85(t);
  a_3 = t;
  t = z_2;
  t = z_85(t);
  c_3 = t;
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym_VarDec_2, a_3, c_3);
  k_1 = t;
  t = SSLsetAnnotations(k_1, w_2);
  return(t);
}
ATerm SDef_3_0 (ATerm c_86 (ATerm), ATerm d_86 (ATerm), ATerm e_86 (ATerm), ATerm t)
{
  ATerm h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,q_3 = NULL,s_3 = NULL,t_3 = NULL,q_1 = NULL,r_1 = NULL;
  t_3 = t;
  if(match_cons(t, sym_SDef_3))
    {
      i_3 = ATgetArgument(t, 0);
      j_3 = ATgetArgument(t, 1);
      k_3 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_3);
  h_3 = t;
  t = i_3;
  t = c_86(t);
  l_3 = t;
  t = j_3;
  t = d_86(t);
  q_3 = t;
  t = k_3;
  t = e_86(t);
  s_3 = t;
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym_SDef_3, l_3, q_3, s_3);
  q_1 = t;
  t = SSLsetAnnotations(q_1, h_3);
  return(t);
}
ATerm RDef_3_0 (ATerm j_82 (ATerm), ATerm k_82 (ATerm), ATerm l_82 (ATerm), ATerm t)
{
  ATerm w_3 = NULL,a_4 = NULL,b_4 = NULL,c_4 = NULL,e_4 = NULL,f_4 = NULL,g_4 = NULL,h_4 = NULL,t_1 = NULL,u_1 = NULL;
  h_4 = t;
  if(match_cons(t, sym_RDef_3))
    {
      a_4 = ATgetArgument(t, 0);
      b_4 = ATgetArgument(t, 1);
      c_4 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_4);
  w_3 = t;
  t = a_4;
  t = j_82(t);
  e_4 = t;
  t = b_4;
  t = k_82(t);
  f_4 = t;
  t = c_4;
  t = l_82(t);
  g_4 = t;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym_RDef_3, e_4, f_4, g_4);
  t_1 = t;
  t = SSLsetAnnotations(t_1, w_3);
  return(t);
}
ATerm DefaultVarDec_1_0 (ATerm x_85 (ATerm), ATerm t)
{
  ATerm u_4 = NULL,b_5 = NULL,v_5 = NULL,g_6 = NULL,v_1 = NULL,w_1 = NULL;
  g_6 = t;
  if(match_cons(t, sym_DefaultVarDec_1))
    {
      b_5 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_6);
  u_4 = t;
  t = b_5;
  t = x_85(t);
  v_5 = t;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, v_5);
  v_1 = t;
  t = SSLsetAnnotations(v_1, u_4);
  return(t);
}
ATerm unescape_chars_0_0 (ATerm t)
{
  ATerm m_8 = t;
  int o_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_6 = ATgetFirst((ATermList) t);
          z_6 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_6;
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 92)))
        _fail(t);
      t = z_6;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_7 = ATgetFirst((ATermList) t);
          b_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_7;
      if(match_int(t, 34))
        {
          t = (ATerm) ATinsert(CheckATermList(b_7), term_s_8);
        }
      else
        {
          if(match_int(t, 92))
            {
              t = (ATerm) ATinsert(CheckATermList(b_7), term_t_8);
            }
          else
            {
              if(match_int(t, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(b_7), term_u_8);
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 116)))
                    _fail(t);
                  t = (ATerm) ATinsert(CheckATermList(b_7), term_y_8);
                }
            }
        }
      ;
      LocalPopChoice(o_8);
    }
  else
    {
      t = m_8;
    }
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, unescape_chars_0_0, t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm w_8 = NULL,x_8 = NULL;
  w_8 = t;
  t = SSL_explode_string(w_8);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_9) != AT_INT) || (ATgetInt((ATermInt) b_9) != 39)))
        _fail(t);
      x_8 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(x_8);
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm c_9 = NULL,g_9 = NULL;
  c_9 = t;
  t = SSL_explode_string(c_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_9) != AT_INT) || (ATgetInt((ATermInt) d_9) != 39)))
        _fail(t);
      g_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(g_9);
  return(t);
}
ATerm l_2 (ATerm t)
{
  ATerm h_9 = NULL,j_9 = NULL;
  h_9 = t;
  t = SSL_explode_string(h_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(e_9) != AT_INT) || (ATgetInt((ATermInt) e_9) != 39)))
        _fail(t);
      j_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(j_9);
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm k_9 = NULL,o_9 = NULL;
  k_9 = t;
  t = SSL_explode_string(k_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 39)))
        _fail(t);
      o_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(o_9);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm p_9 = NULL,r_9 = NULL;
  p_9 = t;
  t = SSL_explode_string(p_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(i_9) != AT_INT) || (ATgetInt((ATermInt) i_9) != 39)))
        _fail(t);
      r_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(r_9);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm s_9 = NULL,u_9 = NULL;
  s_9 = t;
  t = SSL_explode_string(s_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(l_9) != AT_INT) || (ATgetInt((ATermInt) l_9) != 39)))
        _fail(t);
      u_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(u_9);
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm v_9 = NULL,a_10 = NULL;
  v_9 = t;
  t = SSL_explode_string(v_9);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(m_9) != AT_INT) || (ATgetInt((ATermInt) m_9) != 39)))
        _fail(t);
      a_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(a_10);
  return(t);
}
ATerm t_2 (ATerm t)
{
  ATerm b_10 = NULL,c_10 = NULL;
  b_10 = t;
  t = SSL_explode_string(b_10);
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm n_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(n_9) != AT_INT) || (ATgetInt((ATermInt) n_9) != 39)))
        _fail(t);
      c_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSL_implode_string(c_10);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm q_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
      n_8 = t;
      if(match_cons(t, sym_Str_1))
        {
          p_8 = ATgetArgument(t, 0);
          {
            ATerm v_8 = NULL,r_0 = NULL,y_0 = NULL,b_1 = NULL;
            t = SSL_explode_string(p_8);
            t = unquote_chars_1_0(i_2, t);
            r_0 = t;
            t = SSL_implode_string(r_0);
            y_0 = t;
            t = SSL_explode_string(y_0);
            t = unescape_chars_0_0(t);
            b_1 = t;
            t = SSL_implode_string(b_1);
            v_8 = t;
            t = (ATerm) ATmakeAppl(sym_Str_1, v_8);
          }
        }
      else
        {
          if(match_cons(t, sym_Real_1))
            {
              p_8 = ATgetArgument(t, 0);
              {
                ATerm s_1 = NULL;
                t = SSL_string_to_real(p_8);
                s_1 = t;
                t = (ATerm) ATmakeAppl(sym_Real_1, s_1);
              }
            }
          else
            {
              if(match_cons(t, sym_Int_1))
                {
                  p_8 = ATgetArgument(t, 0);
                  {
                    ATerm y_1 = NULL;
                    t = SSL_string_to_int(p_8);
                    y_1 = t;
                    t = (ATerm) ATmakeAppl(sym_Int_1, y_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Con_3))
                    {
                      p_8 = ATgetArgument(t, 0);
                      q_8 = ATgetArgument(t, 1);
                      r_8 = ATgetArgument(t, 2);
                    }
                  else
                    _fail(t);
                  t = SSL_is_string(r_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, p_8, q_8, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_8), (ATerm) ATempty));
                }
            }
        }
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = q_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = DefaultVarDec_1_0(j_2, t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = RDef_3_0(k_2, _id, _id, t);
                  ;
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm d_10 = t;
                    int e_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = SDef_3_0(l_2, _id, _id, t);
                        ;
                        LocalPopChoice(e_10);
                      }
                    else
                      {
                        t = d_10;
                        {
                          ATerm f_10 = t;
                          int g_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = VarDec_2_0(m_2, _id, t);
                              ;
                              LocalPopChoice(g_10);
                            }
                          else
                            {
                              t = f_10;
                              {
                                ATerm h_10 = t;
                                int j_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = Var_1_0(n_2, t);
                                    ;
                                    LocalPopChoice(j_10);
                                  }
                                else
                                  {
                                    t = h_10;
                                    {
                                      ATerm k_10 = t;
                                      int l_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = SVar_1_0(p_2, t);
                                          ;
                                          LocalPopChoice(l_10);
                                        }
                                      else
                                        {
                                          t = k_10;
                                          {
                                            ATerm n_10 = t;
                                            int p_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = OpDecl_2_0(q_2, _id, t);
                                                ;
                                                LocalPopChoice(p_10);
                                              }
                                            else
                                              {
                                                t = n_10;
                                                t = Op_2_0(t_2, _id, t);
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm u_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm i_10 (ATerm t)
  {
    ATerm q_10 = t;
    int r_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, u_2, t);
        t = z_94(t);
        ;
        LocalPopChoice(r_10);
      }
    else
      {
        t = q_10;
        t = Cons_2_0(_id, i_10, t);
      }
    return(t);
  }
  t = i_10(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm m_10 = NULL,o_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_10 = ATgetFirst((ATermList) t);
      o_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_10;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm s_10 = t;
      int t_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_10;
          ;
          LocalPopChoice(t_10);
        }
      else
        {
          t = s_10;
          t = o_10;
          t = last_0_0(t);
        }
    }
  else
    {
      t = o_10;
      t = last_0_0(t);
    }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm y_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm x_10 = ATgetFirst((ATermList) t);
      y_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_10;
  return(t);
}
ATerm unquote_chars_1_0 (ATerm c_103 (ATerm), ATerm t)
{
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
  u_10 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_10 = ATgetFirst((ATermList) t);
      {
        ATerm z_10 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_10;
  t = c_103(t);
  t = u_10;
  t = last_0_0(t);
  t = c_103(t);
  t = u_10;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_11 = ATgetFirst((ATermList) t);
      w_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_10;
  t = at_last_1_0(v_2, t);
  return(t);
}
ATerm c_19 (ATerm l_13, ATerm n_13, ATerm t)
{
  t = l_13;
  {
    ATerm b_11 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, y_2, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_11;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_c_11, l_13);
  }
  return(t);
}
ATerm f_19 (ATerm t_13, ATerm w_13, ATerm t)
{
  t = t_13;
  {
    ATerm d_11 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, b_3, t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_11;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_e_11, t_13);
  }
  return(t);
}
ATerm y_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm g_3 (ATerm t)
{
  ATerm r_14 = NULL,w_14 = NULL,r_2 = NULL;
  r_14 = t;
  t = SSL_explode_term(r_14);
  if(match_cons(t, sym__2))
    {
      ATerm h_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_11 = ATgetArgument(t, 1);
        if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
          {
            w_14 = ATgetFirst((ATermList) i_11);
            {
              ATerm j_11 = (ATerm) ATgetNext((ATermList) i_11);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(r_14);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_11 = ATgetArgument(t, 1);
        if(((ATgetType(l_11) == AT_LIST) && !(ATisEmpty(l_11))))
          {
            ATerm m_11 = ATgetFirst((ATermList) l_11);
            ATerm n_11 = (ATerm) ATgetNext((ATermList) l_11);
            if(((ATgetType(n_11) == AT_LIST) && !(ATisEmpty(n_11))))
              {
                r_2 = ATgetFirst((ATermList) n_11);
                {
                  ATerm o_11 = (ATerm) ATgetNext((ATermList) n_11);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, r_2), w_14));
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm f_15 = NULL,k_15 = NULL,x_3 = NULL;
  f_15 = t;
  t = SSL_explode_term(f_15);
  if(match_cons(t, sym__2))
    {
      ATerm r_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_11 = ATgetArgument(t, 1);
        if(((ATgetType(s_11) == AT_LIST) && !(ATisEmpty(s_11))))
          {
            k_15 = ATgetFirst((ATermList) s_11);
            {
              ATerm t_11 = (ATerm) ATgetNext((ATermList) s_11);
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
      ATerm u_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
        if(((ATgetType(v_11) == AT_LIST) && !(ATisEmpty(v_11))))
          {
            ATerm w_11 = ATgetFirst((ATermList) v_11);
            ATerm x_11 = (ATerm) ATgetNext((ATermList) v_11);
            if(((ATgetType(x_11) == AT_LIST) && !(ATisEmpty(x_11))))
              {
                x_3 = ATgetFirst((ATermList) x_11);
                {
                  ATerm y_11 = (ATerm) ATgetNext((ATermList) x_11);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, x_3), k_15));
  return(t);
}
ATerm r_3 (ATerm t)
{
  ATerm o_15 = NULL,q_15 = NULL,z_3 = NULL;
  o_15 = t;
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm z_11 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) z_11) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_12 = ATgetArgument(t, 1);
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            q_15 = ATgetFirst((ATermList) a_12);
            {
              ATerm b_12 = (ATerm) ATgetNext((ATermList) a_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_15);
  if(match_cons(t, sym__2))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_12 = ATgetArgument(t, 1);
        if(((ATgetType(d_12) == AT_LIST) && !(ATisEmpty(d_12))))
          {
            ATerm e_12 = ATgetFirst((ATermList) d_12);
            ATerm f_12 = (ATerm) ATgetNext((ATermList) d_12);
            if(((ATgetType(f_12) == AT_LIST) && !(ATisEmpty(f_12))))
              {
                z_3 = ATgetFirst((ATermList) f_12);
                {
                  ATerm g_12 = (ATerm) ATgetNext((ATermList) f_12);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, z_3), q_15));
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm v_3 (ATerm t)
{
  ATerm u_15 = NULL,w_15 = NULL,i_4 = NULL;
  u_15 = t;
  t = SSL_explode_term(u_15);
  if(match_cons(t, sym__2))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_12 = ATgetArgument(t, 1);
        if(((ATgetType(i_12) == AT_LIST) && !(ATisEmpty(i_12))))
          {
            w_15 = ATgetFirst((ATermList) i_12);
            {
              ATerm j_12 = (ATerm) ATgetNext((ATermList) i_12);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(u_15);
  if(match_cons(t, sym__2))
    {
      ATerm k_12 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_12) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_12 = ATgetArgument(t, 1);
        if(((ATgetType(l_12) == AT_LIST) && !(ATisEmpty(l_12))))
          {
            ATerm m_12 = ATgetFirst((ATermList) l_12);
            ATerm n_12 = (ATerm) ATgetNext((ATermList) l_12);
            if(((ATgetType(n_12) == AT_LIST) && !(ATisEmpty(n_12))))
              {
                i_4 = ATgetFirst((ATermList) n_12);
                {
                  ATerm o_12 = (ATerm) ATgetNext((ATermList) n_12);
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
  t = (ATerm) ATmakeAppl(sym_Sort_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, i_4), w_15));
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm m_16 = NULL,n_16 = NULL;
  if(match_cons(t, sym__2))
    {
      m_16 = ATgetArgument(t, 0);
      n_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, n_16), m_16));
  return(t);
}
ATerm j_4 (ATerm t)
{
  t = term_g_11;
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm r_16 = NULL,s_16 = NULL;
  if(match_cons(t, sym__2))
    {
      r_16 = ATgetArgument(t, 0);
      s_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_11, (ATerm) ATinsert(ATinsert(ATempty, s_16), r_16));
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL;
  if(match_cons(t, sym__2))
    {
      g_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, h_17), g_17));
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      l_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_p_12, (ATerm) ATinsert(ATinsert(ATempty, m_17), l_17));
  return(t);
}
ATerm q_4 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm y_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
  l_14 = t;
  if(match_cons(t, sym_Anno_2))
    {
      m_14 = ATgetArgument(t, 0);
      n_14 = ATgetArgument(t, 1);
      {
        ATerm q_14 = NULL;
        t = n_14;
        t = foldr_2_0(f_3, g_3, t);
        q_14 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, m_14, q_14);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          m_14 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, m_14, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              m_14 = ATgetArgument(t, 0);
              {
                ATerm e_3 = NULL;
                t = m_14;
                {
                  ATerm s_12 = t;
                  int t_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_u_12;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_v_12;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_y_8;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_u_8;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_w_12;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(t_12);
                    }
                  else
                    {
                      t = s_12;
                      {
                        ATerm n_3 = NULL;
                        t = SSL_explode_string(m_14);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_12 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_12) != AT_INT) || (ATgetInt((ATermInt) x_12) != 39)))
                              _fail(t);
                            {
                              ATerm y_12 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(y_12) == AT_LIST) && !(ATisEmpty(y_12))))
                                {
                                  n_3 = ATgetFirst((ATermList) y_12);
                                  {
                                    ATerm z_12 = (ATerm) ATgetNext((ATermList) y_12);
                                    if(((ATgetType(z_12) == AT_LIST) && !(ATisEmpty(z_12))))
                                      {
                                        ATerm a_13 = ATgetFirst((ATermList) z_12);
                                        if(((ATgetType(a_13) != AT_INT) || (ATgetInt((ATermInt) a_13) != 39)))
                                          _fail(t);
                                        {
                                          ATerm b_13 = (ATerm) ATgetNext((ATermList) z_12);
                                          if(((ATgetType(b_13) != AT_LIST) || !(ATisEmpty(b_13))))
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
                        t = n_3;
                      }
                    }
                  e_3 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, e_3);
                }
              }
            }
          else
            {
              if(match_cons(t, sym_SortTuple_1))
                {
                  m_14 = ATgetArgument(t, 0);
                  {
                    ATerm e_15 = NULL;
                    t = m_14;
                    t = foldr_2_0(m_3, o_3, t);
                    e_15 = t;
                    t = (ATerm) ATmakeAppl(sym_Sort_2, term_c_13, (ATerm) ATinsert(ATempty, e_15));
                  }
                }
              else
                {
                  if(match_cons(t, sym_SortListTl_2))
                    {
                      m_14 = ATgetArgument(t, 0);
                      n_14 = ATgetArgument(t, 1);
                      {
                        ATerm p_3 (ATerm t)
                        {
                          t = n_14;
                          return(t);
                        }
                        t = m_14;
                        t = foldr_2_0(p_3, r_3, t);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_SortList_1))
                        {
                          m_14 = ATgetArgument(t, 0);
                          t = m_14;
                          t = foldr_2_0(u_3, v_3, t);
                        }
                      else
                        {
                          ATerm d_13 = t;
                          int e_13 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(match_cons(t, sym_Con4_4))
                                {
                                  m_14 = ATgetArgument(t, 0);
                                  {
                                    ATerm f_13 = ATgetArgument(t, 1);
                                  }
                                  k_14 = ATgetArgument(t, 2);
                                  y_13 = ATgetArgument(t, 3);
                                }
                              else
                                _fail(t);
                              LocalPopChoice(e_13);
                              t = (ATerm) ATmakeAppl(sym_Con_3, m_14, k_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, y_13), (ATerm) ATempty));
                            }
                          else
                            {
                              t = d_13;
                              {
                                ATerm g_13 = t;
                                int h_13 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    if(match_cons(t, sym_Con3_3))
                                      {
                                        m_14 = ATgetArgument(t, 0);
                                        {
                                          ATerm i_13 = ATgetArgument(t, 1);
                                        }
                                        k_14 = ATgetArgument(t, 2);
                                      }
                                    else
                                      _fail(t);
                                    LocalPopChoice(h_13);
                                    t = (ATerm) ATmakeAppl(sym_Con_3, m_14, k_14, term_m_13);
                                  }
                                else
                                  {
                                    t = g_13;
                                    if(match_cons(t, sym_Con1_2))
                                      {
                                        m_14 = ATgetArgument(t, 0);
                                        n_14 = ATgetArgument(t, 1);
                                        t = (ATerm) ATmakeAppl(sym_Con_3, m_14, n_14, term_m_13);
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_ListTail_2))
                                          {
                                            m_14 = ATgetArgument(t, 0);
                                            n_14 = ATgetArgument(t, 1);
                                            {
                                              ATerm y_3 (ATerm t)
                                              {
                                                t = n_14;
                                                return(t);
                                              }
                                              t = m_14;
                                              t = foldr_2_0(y_3, d_4, t);
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_List_1))
                                              {
                                                m_14 = ATgetArgument(t, 0);
                                                t = m_14;
                                                t = foldr_2_0(j_4, k_4, t);
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_Tuple_1))
                                                  {
                                                    m_14 = ATgetArgument(t, 0);
                                                    t = m_14;
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        a_14 = ATgetFirst((ATermList) t);
                                                        b_14 = (ATerm) ATgetNext((ATermList) t);
                                                        t = b_14;
                                                        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                          {
                                                            ATerm o_13 = t;
                                                            int p_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = c_19(m_14, l_14, t);
                                                                ;
                                                                LocalPopChoice(p_13);
                                                              }
                                                            else
                                                              {
                                                                t = o_13;
                                                                t = a_14;
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t = c_19(m_14, l_14, t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        t = c_19(m_14, l_14, t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_CharCong_1))
                                                      {
                                                        m_14 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, m_14));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_RealCong_1))
                                                          {
                                                            m_14 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, m_14));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_IntCong_1))
                                                              {
                                                                m_14 = ATgetArgument(t, 0);
                                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, m_14));
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_StrCong_1))
                                                                  {
                                                                    m_14 = ATgetArgument(t, 0);
                                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, m_14));
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ModCongNoArgs_1))
                                                                      {
                                                                        m_14 = ATgetArgument(t, 0);
                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_14), (ATerm) ATempty);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_ModCong_2))
                                                                          {
                                                                            m_14 = ATgetArgument(t, 0);
                                                                            n_14 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_14), n_14);
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_ListCong_2))
                                                                              {
                                                                                m_14 = ATgetArgument(t, 0);
                                                                                n_14 = ATgetArgument(t, 1);
                                                                                {
                                                                                  ATerm l_4 (ATerm t)
                                                                                  {
                                                                                    t = n_14;
                                                                                    return(t);
                                                                                  }
                                                                                  t = m_14;
                                                                                  t = foldr_2_0(l_4, n_4, t);
                                                                                }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_ListCongNoTail_1))
                                                                                  {
                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                    t = m_14;
                                                                                    t = foldr_2_0(o_4, p_4, t);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_TupleCong_2))
                                                                                      {
                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_e_11, (ATerm) ATinsert(CheckATermList(n_14), m_14));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_TupleCong_1))
                                                                                          {
                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                            t = m_14;
                                                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                              {
                                                                                                a_14 = ATgetFirst((ATermList) t);
                                                                                                b_14 = (ATerm) ATgetNext((ATermList) t);
                                                                                                t = b_14;
                                                                                                if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                  {
                                                                                                    ATerm q_13 = t;
                                                                                                    int r_13 = stack_ptr;
                                                                                                    if((PushChoice() == 0))
                                                                                                      {
                                                                                                        t = f_19(m_14, l_14, t);
                                                                                                        ;
                                                                                                        LocalPopChoice(r_13);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        t = q_13;
                                                                                                        t = a_14;
                                                                                                      }
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    t = f_19(m_14, l_14, t);
                                                                                                  }
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                t = f_19(m_14, l_14, t);
                                                                                              }
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                              {
                                                                                                t = term_s_13;
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_AnnoCong_2))
                                                                                                  {
                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                    t = n_14;
                                                                                                    if(match_cons(t, sym_StrategyCurly_1))
                                                                                                      {
                                                                                                        c_14 = ATgetArgument(t, 0);
                                                                                                      }
                                                                                                    else
                                                                                                      _fail(t);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Call_2, term_v_13, (ATerm) ATinsert(ATinsert(ATempty, c_14), m_14));
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_ParenStrat_1))
                                                                                                      {
                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                        t = m_14;
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                                          {
                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_StratRule_3, m_14, n_14, term_x_13);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_RuleNoCond_2))
                                                                                                              {
                                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_Rule_3, m_14, n_14, term_x_13);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                                  {
                                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_Overlay_3, m_14, (ATerm)ATempty, n_14);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_RChoice_2))
                                                                                                                      {
                                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_LChoice_2, n_14, m_14);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                          {
                                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                                            {
                                                                                                                              ATerm k_18 = NULL,m_4 = NULL;
                                                                                                                              t = SSL_explode_string(m_14);
                                                                                                                              t = unquote_chars_1_0(q_4, t);
                                                                                                                              m_4 = t;
                                                                                                                              t = SSL_implode_string(m_4);
                                                                                                                              k_18 = t;
                                                                                                                              t = (ATerm) ATmakeAppl(sym_Prim_2, k_18, (ATerm) ATempty);
                                                                                                                            }
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                              {
                                                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_Call_2, m_14, (ATerm) ATempty);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    m_14 = ATgetArgument(t, 0);
                                                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDef_3, m_14, (ATerm)ATempty, n_14);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        m_14 = ATgetArgument(t, 0);
                                                                                                                                        n_14 = ATgetArgument(t, 1);
                                                                                                                                        k_14 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDef_3, m_14, n_14, k_14);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            m_14 = ATgetArgument(t, 0);
                                                                                                                                            n_14 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDef_3, m_14, (ATerm)ATempty, n_14);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                              {
                                                                                                                                                m_14 = ATgetArgument(t, 0);
                                                                                                                                                n_14 = ATgetArgument(t, 1);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDef_3, m_14, (ATerm)ATempty, n_14);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_Module_2))
                                                                                                                                                  {
                                                                                                                                                    ATerm z_13 = ATgetArgument(t, 0);
                                                                                                                                                    n_14 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  _fail(t);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_Specification_1, n_14);
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  ATerm g_19 (ATerm t)
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_87(t);
        t = g_19(t);
        ;
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
      }
    return(t);
  }
  t = g_19(t);
  return(t);
}
ATerm topdown_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  t = h_88(t);
  {
    ATerm r_4 (ATerm t)
    {
      t = topdown_1_0(h_88, t);
      return(t);
    }
    t = SRTS_all(r_4, t);
  }
  return(t);
}
ATerm _2_0 (ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,p_19 = NULL,s_19 = NULL,v_19 = NULL,x_1 = NULL,z_1 = NULL;
  v_19 = t;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_19);
  h_19 = t;
  t = i_19;
  t = s_68(t);
  p_19 = t;
  t = j_19;
  t = t_68(t);
  s_19 = t;
  z_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_19, s_19);
  x_1 = t;
  t = SSLsetAnnotations(x_1, h_19);
  return(t);
}
ATerm e_5 (ATerm l_54, ATerm m_54, ATerm t)
{
  ATerm a_20 = NULL;
  t = SSL_fputc(l_54, m_54);
  a_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_20);
  return(t);
}
ATerm f_5 (ATerm z_57, ATerm a_58, ATerm t)
{
  ATerm b_20 = NULL;
  t = SSL_write_term_to_stream_text(z_57, a_58);
  b_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_20);
  return(t);
}
ATerm h_5 (ATerm p_106 (ATerm), ATerm l_459, ATerm d_58, ATerm t)
{
  ATerm c_20 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_459, term_f_14);
  t = open_stream_0_0(t);
  c_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_20, d_58);
  t = p_106(t);
  t = fclose_0_0(t);
  t = d_58;
  return(t);
}
ATerm g_5 (ATerm v_57, ATerm w_57, ATerm t)
{
  ATerm g_20 = NULL;
  t = SSL_write_term_to_stream_baf(v_57, w_57);
  g_20 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_20);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = fetch_1_0(z_4, t);
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL;
  if(match_cons(t, sym__2))
    {
      n_20 = ATgetArgument(t, 0);
      o_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(a_5, n_20, o_20, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_14 = ATgetArgument(t, 0);
      if(match_cons(g_14, sym_Stream_1))
        {
          p_20 = ATgetArgument(g_14, 0);
        }
      else
        _fail(t);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_5(p_20, q_20, t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm r_20 = NULL,s_20 = NULL;
  if(match_cons(t, sym__2))
    {
      r_20 = ATgetArgument(t, 0);
      s_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_5(l_5, r_20, s_20, t);
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL,x_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm h_14 = ATgetArgument(t, 0);
      if(match_cons(h_14, sym_Stream_1))
        {
          u_20 = ATgetArgument(h_14, 0);
        }
      else
        _fail(t);
      v_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_5(u_20, v_20, t);
  t_20 = t;
  t = term_u_8;
  w_20 = t;
  t = t_20;
  if(match_cons(t, sym_Stream_1))
    {
      x_20 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, t_20);
  t = e_5(w_20, x_20, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm i_20 = NULL,l_20 = NULL;
  i_20 = t;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_4 (ATerm t)
          {
            if(match_cons(t, sym_Output_1))
              {
                if(((l_20 != NULL) && (l_20 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  l_20 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(t_4, t);
          ;
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          t = term_o_14;
          if(((l_20 != NULL) && (l_20 != t)))
            _fail(t);
          else
            l_20 = t;
        }
      return(t);
    }
    t = _2_0(s_4, _id, t);
    t = i_20;
    {
      ATerm v_4 (ATerm t)
      {
        ATerm m_20 = NULL;
        m_20 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_20), m_20);
        return(t);
      }
      t = _2_0(_id, v_4, t);
      {
        ATerm p_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = _2_0(w_4, y_4, t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = p_14;
            t = _2_0(_id, c_5, t);
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
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL,b_21 = NULL,d_21 = NULL;
  y_20 = t;
  t = dtime_0_0(t);
  t = y_20;
  t = r_109(t);
  z_20 = t;
  t = dtime_0_0(t);
  a_21 = t;
  t = z_20;
  if(match_cons(t, sym__2))
    {
      b_21 = ATgetArgument(t, 0);
      d_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_21), (ATerm) ATmakeAppl(sym_Runtime_1, a_21)), d_21);
  return(t);
}
ATerm z_21 (ATerm s_21, ATerm t)
{
  t = SSL_fclose(s_21);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_21 = NULL,x_21 = NULL;
  x_21 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_21 = ATgetArgument(t, 0);
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_21);
            ;
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            t = z_21(x_21, t);
          }
      }
    }
  else
    {
      t = z_21(x_21, t);
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
  ATerm a_22 = NULL;
  t = SSL_fopen(n_54, o_54);
  a_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_22);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_22 = NULL;
  t = SSL_stdin_stream();
  b_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_22);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_22 = NULL;
  t = SSL_stdout_stream();
  c_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_22);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_22 = NULL;
  t = SSL_stderr_stream();
  d_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_22);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm o_22 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      o_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_22;
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm s_22 = NULL;
  s_22 = t;
  t = SSL_is_string(s_22);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm v_14 = ATgetArgument(t, 0);
      ATerm x_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm y_14 = t;
    int z_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_22 = NULL,x_4 = NULL;
        k_22 = t;
        t = SSL_explode_term(k_22);
        if(match_cons(t, sym__2))
          {
            ATerm a_15 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) a_15) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm b_15 = ATgetArgument(t, 1);
              if(((ATgetType(b_15) == AT_LIST) && !(ATisEmpty(b_15))))
                {
                  x_4 = ATgetFirst((ATermList) b_15);
                  {
                    ATerm c_15 = (ATerm) ATgetNext((ATermList) b_15);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = x_4;
        if(match_cons(t, sym_stderr_0))
          {
            t = x_4;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = x_4;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = x_4;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(z_14);
      }
    else
      {
        t = y_14;
        {
          ATerm d_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_22 = NULL,n_22 = NULL;
              t = _2_0(o_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  l_22 = ATgetArgument(t, 0);
                  n_22 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = j_5(l_22, n_22, t);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = d_15;
              {
                ATerm q_22 = NULL,r_22 = NULL;
                t = _2_0(q_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_22 = ATgetArgument(t, 0);
                    r_22 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = j_5(q_22, r_22, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm r_5 (ATerm t)
{
  t = term_h_15;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
  ATerm i_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_22 = NULL;
      x_22 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_22, term_l_15);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = i_15;
      t = debug_1_0(r_5, t);
      _fail(t);
    }
  u_22 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = i_5(w_22, t);
  v_22 = t;
  t = u_22;
  t = fclose_0_0(t);
  t = v_22;
  return(t);
}
ATerm fetch_1_0 (ATerm i_94 (ATerm), ATerm t)
{
  ATerm z_22 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(i_94, _id, t);
        ;
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = Cons_2_0(_id, z_22, t);
      }
    return(t);
  }
  t = z_22(t);
  return(t);
}
ATerm d_5 (ATerm b_49, ATerm c_49, ATerm t)
{
  t = SSL_strcat(b_49, c_49);
  return(t);
}
ATerm debug_1_0 (ATerm n_106 (ATerm), ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL,d_23 = NULL;
  a_23 = t;
  t = n_106(t);
  b_23 = t;
  t = term_i_8;
  c_23 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_23), b_23);
  d_23 = t;
  t = SSL_printnl(c_23, d_23);
  t = a_23;
  return(t);
}
ATerm s_5 (ATerm t)
{
  ATerm p_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_15);
    }
  else
    {
      t = p_15;
    }
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = term_s_15;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_15 = t;
  int v_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_23 = NULL;
      j_23 = t;
      t = SSL_is_string(j_23);
      ;
      LocalPopChoice(v_15);
    }
  else
    {
      t = t_15;
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm n_23 = NULL,o_23 = NULL,p_23 = NULL;
              n_23 = t;
              if(match_cons(t, sym_Path_1))
                {
                  o_23 = ATgetArgument(t, 0);
                  t = o_23;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      o_23 = ATgetArgument(t, 0);
                      t = o_23;
                      {
                        ATerm z_15 = t;
                        int a_16 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(a_16);
                          }
                        else
                          {
                            t = z_15;
                            t = debug_1_0(t_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm t_23 = NULL,u_23 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          o_23 = ATgetArgument(t, 0);
                          p_23 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = o_23;
                      t = eval_config_0_0(t);
                      t_23 = t;
                      t = p_23;
                      t = eval_config_0_0(t);
                      u_23 = t;
                      t = (ATerm) ATmakeAppl(sym__2, t_23, u_23);
                      t = d_5(t_23, u_23, t);
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
  ATerm x_23 = NULL,y_23 = NULL;
  x_23 = t;
  t = term_b_16;
  y_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_16, x_23);
  t = m_5(y_23, x_23, t);
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_23 = NULL,a_24 = NULL;
        t = eval_config_0_0(t);
        z_23 = t;
        t = term_b_16;
        a_24 = t;
        t = SSL_table_put(a_24, x_23, z_23);
        t = z_23;
        ;
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_24 = NULL,d_24 = NULL;
      b_24 = t;
      t = term_g_16;
      t = get_config_0_0(t);
      d_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_24, term_h_16);
      t = geq_0_0(t);
      t = b_24;
      t = a_108(t);
      ;
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
    }
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm f_24 = NULL;
  f_24 = t;
  if(match_string(t, "-k"))
    {
      t = f_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_24;
    }
  return(t);
}
ATerm y_5 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL,i_24 = NULL;
  g_24 = t;
  t = SSL_string_to_int(g_24);
  h_24 = t;
  t = term_i_16;
  i_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_16, h_24);
  t = p_5(i_24, h_24, t);
  t = g_24;
  return(t);
}
ATerm b_6 (ATerm t)
{
  t = term_j_16;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_5, y_5, b_6, t);
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm k_24 = NULL;
  k_24 = t;
  if(match_string(t, "-S"))
    {
      t = k_24;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_24;
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  ATerm l_24 = NULL,m_24 = NULL;
  t = term_g_16;
  l_24 = t;
  t = term_k_16;
  m_24 = t;
  t = term_l_16;
  t = p_5(l_24, m_24, t);
  t = term_o_16;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_p_16;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_6 (ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
  n_24 = t;
  t = SSL_string_to_int(n_24);
  o_24 = t;
  t = term_g_16;
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_16, o_24);
  t = p_5(p_24, o_24, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_24);
  return(t);
}
ATerm i_6 (ATerm t)
{
  t = term_q_16;
  return(t);
}
ATerm j_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  t = term_t_16;
  q_24 = t;
  t = term_j_7;
  r_24 = t;
  t = term_u_16;
  t = p_5(q_24, r_24, t);
  t = term_v_16;
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = term_w_16;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(c_6, d_6, e_6, t);
      ;
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm z_16 = t;
        int a_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(f_6, h_6, i_6, t);
            ;
            LocalPopChoice(a_17);
          }
        else
          {
            t = z_16;
            t = Option_3_0(j_6, k_6, l_6, t);
          }
      }
    }
  return(t);
}
ATerm p_5 (ATerm c_59, ATerm d_59, ATerm t)
{
  ATerm s_24 = NULL;
  t = term_b_16;
  s_24 = t;
  t = SSL_table_put(s_24, c_59, d_59);
  t = (ATerm) ATmakeAppl(sym__3, term_b_16, c_59, d_59);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm v_24 = NULL,w_24 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
      t = term_j_7;
      t = d_0(t);
      x_24 = t;
      t = term_b_17;
      y_24 = t;
      t = term_c_17;
      z_24 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_17, term_c_17, x_24);
      t = n_5(y_24, z_24, x_24, t);
      _fail(t);
    }
  else
    {
      ATerm c_25 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_24 = ATgetFirst((ATermList) t);
          w_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_24;
      t = a_0(t);
      t = term_j_7;
      t = c_0(t);
      c_25 = t;
      t = (ATerm) ATinsert(CheckATermList(w_24), c_25);
    }
  return(t);
}
ATerm m_6 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  if(match_string(t, "-o"))
    {
      t = e_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_25;
    }
  return(t);
}
ATerm o_6 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL;
  f_25 = t;
  t = term_d_17;
  g_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_17, f_25);
  t = p_5(g_25, f_25, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_25);
  return(t);
}
ATerm p_6 (ATerm t)
{
  t = term_e_17;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_6, o_6, p_6, t);
  return(t);
}
ATerm n_5 (ATerm a_64, ATerm b_64, ATerm z_63, ATerm t)
{
  ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL;
  i_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
  {
    ATerm f_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm j_17 = ATgetArgument(t, 0);
            ATerm k_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, a_64, b_64);
        t = m_5(a_64, b_64, t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = f_17;
        t = (ATerm) ATempty;
      }
    j_25 = t;
    t = (ATerm) ATinsert(CheckATermList(j_25), z_63);
    k_25 = t;
    t = SSL_table_put(a_64, b_64, k_25);
    t = i_25;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL,u_25 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
      t = term_j_7;
      t = j_0(t);
      v_25 = t;
      t = term_b_17;
      w_25 = t;
      t = term_c_17;
      x_25 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_17, term_c_17, v_25);
      t = n_5(w_25, x_25, v_25, t);
      _fail(t);
    }
  else
    {
      ATerm b_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_25 = ATgetFirst((ATermList) t);
          s_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_25;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_25 = ATgetFirst((ATermList) t);
          u_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_25;
      t = h_0(t);
      t = t_25;
      t = i_0(t);
      b_26 = t;
      t = (ATerm) ATinsert(CheckATermList(u_25), b_26);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm d_26 = NULL;
  d_26 = t;
  if(match_string(t, "-i"))
    {
      t = d_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = d_26;
    }
  return(t);
}
ATerm r_6 (ATerm t)
{
  ATerm e_26 = NULL,f_26 = NULL;
  e_26 = t;
  t = term_n_17;
  f_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_17, e_26);
  t = p_5(f_26, e_26, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, e_26);
  return(t);
}
ATerm s_6 (ATerm t)
{
  t = term_o_17;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, r_6, s_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_7;
  t = whoami_0_0(t);
  g_26 = t;
  t = term_i_8;
  h_26 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_p_17), g_26);
  i_26 = t;
  t = SSL_printnl(h_26, i_26);
  t = term_l_8;
  j_26 = t;
  t = SSL_exit(j_26);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_q_17;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_5 (ATerm l_51, ATerm m_51, ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_51, m_51);
      ;
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = SSL_addr(l_51, m_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm b_100 (ATerm), ATerm c_100 (ATerm), ATerm t)
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = b_100(t);
      ;
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
        ATerm m_26 = NULL,n_26 = NULL,q_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_26 = ATgetFirst((ATermList) t);
            n_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_26;
        t = foldr_2_0(b_100, c_100, t);
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_26, q_26);
        t = c_100(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_k_16;
  return(t);
}
ATerm v_6 (ATerm t)
{
  ATerm z_5 = NULL,a_6 = NULL;
  if(match_cons(t, sym__2))
    {
      z_5 = ATgetArgument(t, 0);
      a_6 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_5(z_5, a_6, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm t_26 = NULL,u_5 = NULL,w_5 = NULL;
  t = times_0_0(t);
  u_5 = t;
  t = SSL_explode_term(u_5);
  if(match_cons(t, sym__2))
    {
      ATerm v_17 = ATgetArgument(t, 0);
      w_5 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_5;
  t = foldr_2_0(u_6, v_6, t);
  t_26 = t;
  t = SSL_TicksToSeconds(t_26);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL;
  e_27 = t;
  if(match_cons(t, sym__2))
    {
      f_27 = ATgetArgument(t, 0);
      g_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_27;
        if((f_27 != t))
          {
            _fail(t);
          }
        t = e_27;
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        {
          ATerm y_17 = t;
          int z_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(f_27, g_27);
              ;
              LocalPopChoice(z_17);
            }
          else
            {
              t = y_17;
              t = SSL_gtr(f_27, g_27);
            }
          t = (ATerm) ATmakeAppl(sym__2, f_27, g_27);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_27 = NULL,l_27 = NULL;
      j_27 = t;
      t = term_g_16;
      t = get_config_0_0(t);
      l_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_27, term_l_8);
      t = geq_0_0(t);
      t = j_27;
      t = z_107(t);
      ;
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
    }
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL;
  t = run_time_0_0(t);
  n_27 = t;
  t = term_j_7;
  t = whoami_0_0(t);
  o_27 = t;
  t = term_i_8;
  p_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), n_27), term_c_18), o_27);
  q_27 = t;
  t = SSL_printnl(p_27, q_27);
  t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_18), n_27), term_c_18), o_27));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm r_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_16;
  r_27 = t;
  t = SSL_exit(r_27);
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm e_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(f_18);
    }
  else
    {
      t = e_18;
      {
        ATerm g_18 = t;
        int h_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(h_18);
          }
        else
          {
            t = g_18;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_110 (ATerm), ATerm t)
{
  ATerm i_18 = t;
  int j_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(j_18);
    }
  else
    {
      t = i_18;
      t = fetch_1_0(x_6, t);
    }
  t = p_110(t);
  return(t);
}
ATerm map_1_0 (ATerm y_93 (ATerm), ATerm t)
{
  ATerm s_27 (ATerm t)
  {
    ATerm m_18 = t;
    int n_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(n_18);
      }
    else
      {
        t = m_18;
        t = Cons_2_0(y_93, s_27, t);
      }
    return(t);
  }
  t = s_27(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm u_27 = NULL,v_27 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_27 = ATgetFirst((ATermList) t);
      v_27 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_27 = NULL,a_28 = NULL;
        t = v_27;
        t = g_0(t);
        z_27 = t;
        t = u_27;
        t = e_0(t);
        a_28 = t;
        t = v_27;
        {
          ATerm d_7 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(z_27), a_28);
            return(t);
          }
          t = reverse_acc_2_0(e_0, d_7, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_j_7;
      t = g_0(t);
    }
  return(t);
}
ATerm m_5 (ATerm r_65, ATerm s_65, ATerm t)
{
  t = SSL_table_get(r_65, s_65);
  return(t);
}
ATerm Program_1_0 (ATerm b_79 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,a_2 = NULL,b_2 = NULL;
  e_28 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  b_28 = t;
  t = c_28;
  t = b_79(t);
  d_28 = t;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, d_28);
  a_2 = t;
  t = SSLsetAnnotations(a_2, b_28);
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm f_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm j_28 = NULL;
  j_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_28), term_o_18);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL;
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_17;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      t = fetch_1_0(e_7, t);
    }
  t = term_r_18;
  t = echo_0_0(t);
  t = term_b_17;
  h_28 = t;
  t = term_c_17;
  i_28 = t;
  t = term_s_18;
  t = m_5(h_28, i_28, t);
  t = reverse_acc_2_0(_id, f_7, t);
  t = map_1_0(g_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm c_79 (ATerm), ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,c_2 = NULL,d_2 = NULL;
  n_28 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      l_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_28);
  k_28 = t;
  t = l_28;
  t = c_79(t);
  m_28 = t;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, m_28);
  c_2 = t;
  t = SSLsetAnnotations(c_2, k_28);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
  r_28 = t;
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_28;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_18 = ATgetFirst((ATermList) t);
                ATerm w_18 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_28;
          }
        ;
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATinsert(ATempty, r_28);
      }
    s_28 = t;
    t = term_o_14;
    t_28 = t;
    t = SSL_printnl(t_28, s_28);
    t = r_28;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_q_17;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm h_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  ATerm x_28 = NULL,y_28 = NULL;
  t = term_x_18;
  x_28 = t;
  t = term_j_7;
  y_28 = t;
  t = term_y_18;
  t = p_5(x_28, y_28, t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm l_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  t = term_x_18;
  z_28 = t;
  t = term_j_7;
  a_29 = t;
  t = term_y_18;
  t = p_5(z_28, a_29, t);
  t = term_a_19;
  b_29 = t;
  t = term_j_7;
  c_29 = t;
  t = term_b_19;
  t = p_5(b_29, c_29, t);
  t = term_d_19;
  return(t);
}
ATerm n_7 (ATerm t)
{
  t = term_e_19;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_7, i_7, k_7, t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      t = Option_3_0(l_7, m_7, n_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm h_73 (ATerm), ATerm i_73 (ATerm), ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,e_2 = NULL,h_2 = NULL;
  i_29 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_29 = ATgetFirst((ATermList) t);
      f_29 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_29);
  d_29 = t;
  t = e_29;
  t = h_73(t);
  g_29 = t;
  t = f_29;
  t = i_73(t);
  h_29 = t;
  h_2 = t;
  t = (ATerm) ATinsert(CheckATermList(h_29), g_29);
  e_2 = t;
  t = SSLsetAnnotations(e_2, d_29);
  return(t);
}
ATerm o_7 (ATerm t)
{
  ATerm n_29 = NULL,o_29 = NULL;
  n_29 = t;
  t = term_q_17;
  o_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_17, n_29);
  t = p_5(o_29, n_29, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, n_29);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_112 (ATerm), ATerm t)
{
  ATerm m_29 = NULL;
  m_29 = t;
  {
    ATerm m_19 = t;
    int n_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_o_19;
        t = s_112(t);
        ;
        LocalPopChoice(n_19);
      }
    else
      {
        t = m_19;
      }
    t = m_29;
    {
      ATerm p_7 (ATerm t)
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_19 = t;
            int u_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(u_19);
              }
            else
              {
                t = t_19;
                t = s_112(t);
                t = Cons_2_0(_id, p_7, t);
              }
            ;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            {
              ATerm q_29 = NULL,r_29 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  q_29 = ATgetFirst((ATermList) t);
                  r_29 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(r_29), (ATerm) ATmakeAppl(sym_Undefined_1, q_29));
            }
          }
        return(t);
      }
      t = Cons_2_0(o_7, p_7, t);
    }
  }
  return(t);
}
ATerm r_7 (ATerm t)
{
  ATerm f_30 = NULL;
  f_30 = t;
  if(match_string(t, "--help"))
    {
      t = f_30;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = f_30;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = f_30;
        }
    }
  return(t);
}
ATerm s_7 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL;
  t = term_l_18;
  g_30 = t;
  t = term_j_7;
  h_30 = t;
  t = term_w_19;
  t = p_5(g_30, h_30, t);
  t = term_x_19;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_y_19;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm r_112 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL;
  y_29 = t;
  t = term_b_17;
  b_30 = t;
  t = term_c_17;
  c_30 = t;
  t = (ATerm) ATempty;
  d_30 = t;
  t = SSL_table_put(b_30, c_30, d_30);
  t = y_29;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm z_19 = t;
      int d_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_112(t);
          ;
          LocalPopChoice(d_20);
        }
      else
        {
          t = z_19;
          {
            ATerm e_20 = t;
            int f_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(r_7, s_7, t_7, t);
                ;
                LocalPopChoice(f_20);
              }
            else
              {
                t = e_20;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(q_7, t);
    {
      ATerm h_20 = t;
      int j_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_30 = NULL;
          o_30 = t;
          {
            ATerm k_20 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_6 = NULL;
                t = o_30;
                {
                  ATerm e_21 = t;
                  int f_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_l_18;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(f_21);
                    }
                  else
                    {
                      t = e_21;
                      t = fetch_1_0(u_7, t);
                    }
                  t = o_30;
                  t = default_system_usage_0_0(t);
                  t = term_k_16;
                  n_6 = t;
                  t = SSL_exit(n_6);
                }
                ;
                LocalPopChoice(c_21);
              }
            else
              {
                t = k_20;
                {
                  ATerm t_6 = NULL;
                  t = term_x_18;
                  t = get_config_0_0(t);
                  t = o_30;
                  t = default_system_about_0_0(t);
                  t = term_k_16;
                  t_6 = t;
                  t = SSL_exit(t_6);
                }
              }
          }
          ;
          LocalPopChoice(j_20);
        }
      else
        {
          t = h_20;
          {
            ATerm g_21 = t;
            int h_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm w_7 (ATerm t)
                  {
                    if(((z_29 != NULL) && (z_29 != t)))
                      _fail(t);
                    else
                      z_29 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_7, t);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_i_8;
                p_30 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_29)), term_i_21);
                q_30 = t;
                t = SSL_printnl(p_30, q_30);
                t = (ATerm) ATmakeAppl(sym__2, term_i_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_29)), term_i_21));
                t = default_system_usage_0_0(t);
                t = term_l_8;
                r_30 = t;
                t = SSL_exit(r_30);
                ;
                LocalPopChoice(h_21);
              }
            else
              {
                t = g_21;
              }
          }
        }
      a_30 = t;
      t = term_b_17;
      e_30 = t;
      t = SSL_table_destroy(e_30);
      t = a_30;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_110 (ATerm), ATerm s_110 (ATerm), ATerm t_110 (ATerm), ATerm u_110 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL,x_30 = NULL;
  t = parse_options_1_0(r_110, t);
  u_30 = t;
  t = term_j_21;
  v_30 = t;
  t = SSL_table_create(v_30);
  t = term_j_21;
  w_30 = t;
  t = term_k_21;
  x_30 = t;
  t = SSL_table_put(w_30, x_30, u_30);
  t = u_30;
  t = t_110(t);
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_110, t);
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_110(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm y_7 (ATerm t)
{
  t = if_verbose2_1_0(d_8, t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm b_8 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  t = term_p_21;
  y_30 = t;
  t = term_j_7;
  z_30 = t;
  t = term_q_21;
  t = p_5(y_30, z_30, t);
  t = term_r_21;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm d_8 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL,d_31 = NULL;
  a_31 = t;
  t = term_q_17;
  t = get_config_0_0(t);
  b_31 = t;
  t = term_i_8;
  c_31 = t;
  t = (ATerm) ATinsert(ATempty, b_31);
  d_31 = t;
  t = SSL_printnl(c_31, d_31);
  t = a_31;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_110 (ATerm), ATerm b_110 (ATerm), ATerm c_110 (ATerm), ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_110(t);
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
        {
          ATerm y_21 = t;
          int e_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(e_22);
            }
          else
            {
              t = y_21;
              {
                ATerm f_22 = t;
                int g_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(g_22);
                  }
                else
                  {
                    t = f_22;
                    {
                      ATerm h_22 = t;
                      int i_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(a_8, b_8, c_8, t);
                          ;
                          LocalPopChoice(i_22);
                        }
                      else
                        {
                          t = h_22;
                          {
                            ATerm j_22 = t;
                            int m_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(m_22);
                              }
                            else
                              {
                                t = j_22;
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
  ATerm z_7 (ATerm t)
  {
    ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
    e_31 = t;
    {
      ATerm p_22 = t;
      int t_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_8 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((f_31 != NULL) && (f_31 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  f_31 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(e_8, t);
          ;
          LocalPopChoice(t_22);
        }
      else
        {
          t = p_22;
          t = term_y_22;
          f_31 = t;
        }
      t = not_null(f_31);
      t = ReadFromFile_0_0(t);
      g_31 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_31, g_31);
      t = apply_strategy_1_0(a_110, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(x_7, c_110, y_7, z_7, t);
  return(t);
}
ATerm f_8 (ATerm t)
{
  t = _2_0(_id, g_8, t);
  return(t);
}
ATerm g_8 (ATerm t)
{
  ATerm e_23 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_31 = NULL,c_7 = NULL;
      l_31 = t;
      t = SSL_explode_term(l_31);
      if(match_cons(t, sym__2))
        {
          ATerm g_23 = ATgetArgument(t, 0);
          ATerm h_23 = ATgetArgument(t, 1);
          if(((ATgetType(h_23) == AT_LIST) && !(ATisEmpty(h_23))))
            {
              c_7 = ATgetFirst((ATermList) h_23);
              {
                ATerm i_23 = (ATerm) ATgetNext((ATermList) h_23);
                if(((ATgetType(i_23) != AT_LIST) || !(ATisEmpty(i_23))))
                  _fail(t);
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
      t = c_7;
      ;
      LocalPopChoice(f_23);
    }
  else
    {
      t = e_23;
    }
  t = topdown_1_0(h_8, t);
  return(t);
}
ATerm h_8 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
      }
  }
  return(t);
}
ATerm stratego_desugar_0_0 (ATerm t)
{
  t = iowrap_3_0(f_8, _fail, default_usage_0_0, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = stratego_desugar_0_0(t);
  return(t);
}
