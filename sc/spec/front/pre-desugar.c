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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Module_2;
Symbol sym_Specification_1;
Symbol sym_OpDecl_2;
Symbol sym_SortNoArgs_1;
Symbol sym_Sort_2;
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
Symbol sym_SRDefT_4;
Symbol sym_RDefNoArgs_2;
Symbol sym_RDef_3;
Symbol sym_RDefT_4;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Overlay_3;
Symbol sym_CallNoArgs_1;
Symbol sym_RChoice_2;
Symbol sym_ParenStrat_1;
Symbol sym_Id_0;
Symbol sym_SVar_1;
Symbol sym_Call_2;
Symbol sym_CallT_3;
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
Symbol sym_SDefT_4;
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
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
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
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_j_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_a_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_y_11;
ATerm term_n_11;
ATerm term_j_11;
ATerm term_f_11;
ATerm term_d_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_n_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_n_8;
ATerm term_u_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_l_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_y_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_e_6;
ATerm term_b_6;
ATerm term_a_6;
ATerm term_z_5;
ATerm term_y_5;
ATerm term_p_5;
ATerm term_o_5;
ATerm term_j_5;
ATerm term_g_5;
void init_constant_terms (void)
{
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_5));
  term_j_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_5);
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym_Op_2, term_o_5, (ATerm) ATempty);
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_5);
  ATprotect(&(term_a_6));
  term_a_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_Call_2, term_a_6, (ATerm) ATempty);
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_6);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Call_2, term_w_6, (ATerm) ATempty);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Call_2, term_j_5, (ATerm) ATempty);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_7);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym__2, term_i_9, term_j_9);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_9);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_x_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_a_10);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_x_8);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_x_8);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_d_11, term_x_8);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_u_7, term_x_8);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm DesugarOnce_0_0 (ATerm);
ATerm at_last_1_0 (ATerm g_95 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm unquote_chars_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm);
ATerm k_21 (ATerm d_14, ATerm h_14, ATerm);
ATerm l_21 (ATerm q_14, ATerm r_14, ATerm);
ATerm m_21 (ATerm x_14, ATerm d_15, ATerm e_15, ATerm);
ATerm t_21 (ATerm l_15, ATerm p_15, ATerm);
ATerm f_0 (ATerm);
ATerm l_0 (ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm w_0 (ATerm);
ATerm y_0 (ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm q_87 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm o_88 (ATerm), ATerm);
ATerm h_4 (ATerm s_54, ATerm t_54, ATerm);
ATerm i_4 (ATerm g_58, ATerm h_58, ATerm);
ATerm k_4 (ATerm b_107 (ATerm), ATerm l_456, ATerm k_58, ATerm);
ATerm j_4 (ATerm c_58, ATerm d_58, ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm output_1_0 (ATerm k_111 (ATerm), ATerm);
ATerm m_23 (ATerm g_23, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm l_4 (ATerm i_58, ATerm);
ATerm m_4 (ATerm u_54, ATerm v_54, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm x_24 (ATerm w_23, ATerm);
ATerm y_24 (ATerm a_24, ATerm b_24, ATerm c_24, ATerm);
ATerm z_24 (ATerm k_24, ATerm l_24, ATerm m_24, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm g_1 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm input_1_0 (ATerm l_111 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm p_1 (ATerm);
ATerm v_1 (ATerm);
ATerm w_1 (ATerm);
ATerm x_1 (ATerm);
ATerm y_1 (ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm u_4 (ATerm j_59, ATerm k_59, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm s_4 (ATerm h_64, ATerm i_64, ATerm g_64, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm n_4 (ATerm s_51, ATerm t_51, ATerm);
ATerm foldr_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm n_2 (ATerm);
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm u_2 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm p_94 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm q_4 (ATerm i_49, ATerm j_49, ATerm);
ATerm debug_1_0 (ATerm z_106 (ATerm), ATerm);
ATerm map_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm v_2 (ATerm);
ATerm y_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_4 (ATerm y_65, ATerm z_65, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm z_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm r_3 (ATerm);
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm u_8 = NULL,v_8 = NULL,z_8 = NULL,a_9 = NULL,c_9 = NULL;
  z_8 = t;
  if(match_cons(t, sym_Real_1))
    {
      a_9 = ATgetArgument(t, 0);
      {
        ATerm m_0 = NULL;
        t = SSL_string_to_real(a_9);
        m_0 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, m_0);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          a_9 = ATgetArgument(t, 0);
          {
            ATerm t_0 = NULL;
            t = SSL_string_to_int(a_9);
            t_0 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, t_0);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              a_9 = ATgetArgument(t, 0);
              c_9 = ATgetArgument(t, 1);
              v_8 = ATgetArgument(t, 2);
              t = SSL_is_string(v_8);
              t = (ATerm) ATmakeAppl(sym_Con_3, a_9, c_9, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_8), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_DefaultVarDec_1))
                {
                  a_9 = ATgetArgument(t, 0);
                  {
                    ATerm n_1 = NULL,q_1 = NULL,s_1 = NULL,k_0 = NULL;
                    t = SSLgetAnnotations(z_8);
                    n_1 = t;
                    t = SSL_explode_string(a_9);
                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                      {
                        ATerm d_4 = ATgetFirst((ATermList) t);
                        if(((ATgetType(d_4) != AT_INT) || (ATgetInt((ATermInt) d_4) != 39)))
                          _fail(t);
                        q_1 = (ATerm) ATgetNext((ATermList) t);
                      }
                    else
                      _fail(t);
                    t = SSL_implode_string(q_1);
                    s_1 = t;
                    t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, s_1);
                    k_0 = t;
                    t = SSLsetAnnotations(k_0, n_1);
                  }
                }
              else
                {
                  if(match_cons(t, sym_RDefT_4))
                    {
                      a_9 = ATgetArgument(t, 0);
                      c_9 = ATgetArgument(t, 1);
                      v_8 = ATgetArgument(t, 2);
                      u_8 = ATgetArgument(t, 3);
                      {
                        ATerm t_2 = NULL,h_3 = NULL,q_3 = NULL,n_0 = NULL;
                        t = SSLgetAnnotations(z_8);
                        t_2 = t;
                        t = SSL_explode_string(a_9);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm e_4 = ATgetFirst((ATermList) t);
                            if(((ATgetType(e_4) != AT_INT) || (ATgetInt((ATermInt) e_4) != 39)))
                              _fail(t);
                            h_3 = (ATerm) ATgetNext((ATermList) t);
                          }
                        else
                          _fail(t);
                        t = SSL_implode_string(h_3);
                        q_3 = t;
                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_3, c_9, v_8, u_8);
                        n_0 = t;
                        t = SSLsetAnnotations(n_0, t_2);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_RDef_3))
                        {
                          a_9 = ATgetArgument(t, 0);
                          c_9 = ATgetArgument(t, 1);
                          v_8 = ATgetArgument(t, 2);
                          {
                            ATerm v_4 = NULL,d_5 = NULL,h_5 = NULL,z_0 = NULL;
                            t = SSLgetAnnotations(z_8);
                            v_4 = t;
                            t = SSL_explode_string(a_9);
                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                              {
                                ATerm f_4 = ATgetFirst((ATermList) t);
                                if(((ATgetType(f_4) != AT_INT) || (ATgetInt((ATermInt) f_4) != 39)))
                                  _fail(t);
                                d_5 = (ATerm) ATgetNext((ATermList) t);
                              }
                            else
                              _fail(t);
                            t = SSL_implode_string(d_5);
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_RDef_3, h_5, c_9, v_8);
                            z_0 = t;
                            t = SSLsetAnnotations(z_0, v_4);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_SDefT_4))
                            {
                              a_9 = ATgetArgument(t, 0);
                              c_9 = ATgetArgument(t, 1);
                              v_8 = ATgetArgument(t, 2);
                              u_8 = ATgetArgument(t, 3);
                              {
                                ATerm g_6 = NULL,x_6 = NULL,b_7 = NULL,a_1 = NULL;
                                t = SSLgetAnnotations(z_8);
                                g_6 = t;
                                t = SSL_explode_string(a_9);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm g_4 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(g_4) != AT_INT) || (ATgetInt((ATermInt) g_4) != 39)))
                                      _fail(t);
                                    x_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(x_6);
                                b_7 = t;
                                t = (ATerm) ATmakeAppl(sym_SDefT_4, b_7, c_9, v_8, u_8);
                                a_1 = t;
                                t = SSLsetAnnotations(a_1, g_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_SDef_3))
                                {
                                  a_9 = ATgetArgument(t, 0);
                                  c_9 = ATgetArgument(t, 1);
                                  v_8 = ATgetArgument(t, 2);
                                  {
                                    ATerm b_8 = NULL,l_8 = NULL,m_8 = NULL,i_1 = NULL;
                                    t = SSLgetAnnotations(z_8);
                                    b_8 = t;
                                    t = SSL_explode_string(a_9);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm o_4 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(o_4) != AT_INT) || (ATgetInt((ATermInt) o_4) != 39)))
                                          _fail(t);
                                        l_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(l_8);
                                    m_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_SDef_3, m_8, c_9, v_8);
                                    i_1 = t;
                                    t = SSLsetAnnotations(i_1, b_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_VarDec_2))
                                    {
                                      a_9 = ATgetArgument(t, 0);
                                      c_9 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_9 = NULL,m_9 = NULL,o_9 = NULL,j_1 = NULL;
                                        t = SSLgetAnnotations(z_8);
                                        h_9 = t;
                                        t = SSL_explode_string(a_9);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm p_4 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(p_4) != AT_INT) || (ATgetInt((ATermInt) p_4) != 39)))
                                              _fail(t);
                                            m_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(m_9);
                                        o_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_VarDec_2, o_9, c_9);
                                        j_1 = t;
                                        t = SSLsetAnnotations(j_1, h_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_Var_1))
                                        {
                                          a_9 = ATgetArgument(t, 0);
                                          {
                                            ATerm c_10 = NULL,x_10 = NULL,y_10 = NULL,o_1 = NULL;
                                            t = SSLgetAnnotations(z_8);
                                            c_10 = t;
                                            t = SSL_explode_string(a_9);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm t_4 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(t_4) != AT_INT) || (ATgetInt((ATermInt) t_4) != 39)))
                                                  _fail(t);
                                                x_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(x_10);
                                            y_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_Var_1, y_10);
                                            o_1 = t;
                                            t = SSLsetAnnotations(o_1, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SVar_1))
                                            {
                                              a_9 = ATgetArgument(t, 0);
                                              {
                                                ATerm i_11 = NULL,l_11 = NULL,m_11 = NULL,r_1 = NULL;
                                                t = SSLgetAnnotations(z_8);
                                                i_11 = t;
                                                t = SSL_explode_string(a_9);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm w_4 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(w_4) != AT_INT) || (ATgetInt((ATermInt) w_4) != 39)))
                                                      _fail(t);
                                                    l_11 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(l_11);
                                                m_11 = t;
                                                t = (ATerm) ATmakeAppl(sym_SVar_1, m_11);
                                                r_1 = t;
                                                t = SSLsetAnnotations(r_1, i_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_OpDecl_2))
                                                {
                                                  a_9 = ATgetArgument(t, 0);
                                                  c_9 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm z_11 = NULL,e_12 = NULL,g_12 = NULL,t_1 = NULL;
                                                    t = SSLgetAnnotations(z_8);
                                                    z_11 = t;
                                                    t = SSL_explode_string(a_9);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm x_4 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(x_4) != AT_INT) || (ATgetInt((ATermInt) x_4) != 39)))
                                                          _fail(t);
                                                        e_12 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(e_12);
                                                    g_12 = t;
                                                    t = (ATerm) ATmakeAppl(sym_OpDecl_2, g_12, c_9);
                                                    t_1 = t;
                                                    t = SSLsetAnnotations(t_1, z_11);
                                                  }
                                                }
                                              else
                                                {
                                                  ATerm r_12 = NULL,u_12 = NULL,v_12 = NULL,u_1 = NULL;
                                                  if(match_cons(t, sym_Op_2))
                                                    {
                                                      a_9 = ATgetArgument(t, 0);
                                                      c_9 = ATgetArgument(t, 1);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSLgetAnnotations(z_8);
                                                  r_12 = t;
                                                  t = SSL_explode_string(a_9);
                                                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                    {
                                                      ATerm y_4 = ATgetFirst((ATermList) t);
                                                      if(((ATgetType(y_4) != AT_INT) || (ATgetInt((ATermInt) y_4) != 39)))
                                                        _fail(t);
                                                      u_12 = (ATerm) ATgetNext((ATermList) t);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = SSL_implode_string(u_12);
                                                  v_12 = t;
                                                  t = (ATerm) ATmakeAppl(sym_Op_2, v_12, c_9);
                                                  u_1 = t;
                                                  t = SSLsetAnnotations(u_1, r_12);
                                                }
                                            }
                                        }
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
ATerm at_last_1_0 (ATerm g_95 (ATerm), ATerm t)
{
  ATerm w_10 (ATerm t)
  {
    ATerm t_10 = NULL,u_10 = NULL,v_10 = NULL;
    t_10 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_10 = ATgetFirst((ATermList) t);
        v_10 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_4 = t;
      int a_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = NULL,k_2 = NULL;
          t = SSLgetAnnotations(t_10);
          d_13 = t;
          t = v_10;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_10), u_10);
          k_2 = t;
          t = SSLsetAnnotations(k_2, d_13);
          t = g_95(t);
          ;
          LocalPopChoice(a_5);
        }
      else
        {
          t = z_4;
          {
            ATerm o_13 = NULL,r_13 = NULL,l_2 = NULL;
            t = SSLgetAnnotations(t_10);
            o_13 = t;
            t = v_10;
            t = w_10(t);
            r_13 = t;
            t = (ATerm) ATinsert(CheckATermList(r_13), u_10);
            l_2 = t;
            t = SSLsetAnnotations(l_2, o_13);
          }
        }
    }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm e_11 = NULL,k_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_11 = ATgetFirst((ATermList) t);
      k_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_11;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_11;
    }
  else
    {
      t = k_11;
      t = last_0_0(t);
    }
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm c_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_5 = ATgetFirst((ATermList) t);
      c_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = c_12;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  ATerm u_11 = NULL,w_11 = NULL,a_12 = NULL;
  u_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_12 = ATgetFirst((ATermList) t);
      {
        ATerm c_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = a_12;
  t = n_103(t);
  t = u_11;
  t = last_0_0(t);
  t = o_103(t);
  t = u_11;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_5 = ATgetFirst((ATermList) t);
      w_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_11;
  t = at_last_1_0(b_0, t);
  return(t);
}
ATerm k_21 (ATerm d_14, ATerm h_14, ATerm t)
{
  t = d_14;
  {
    ATerm f_5 = t;
    if((PushChoice() == 0))
      {
        ATerm j_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL,o_2 = NULL;
        o_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_14 = ATgetFirst((ATermList) t);
            n_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_14);
        j_14 = t;
        t = n_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(n_14), m_14);
        o_2 = t;
        t = SSLsetAnnotations(o_2, j_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_5;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_g_5, d_14);
  }
  return(t);
}
ATerm l_21 (ATerm q_14, ATerm r_14, ATerm t)
{
  t = q_14;
  {
    ATerm i_5 = t;
    if((PushChoice() == 0))
      {
        ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,s_2 = NULL;
        w_14 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_14 = ATgetFirst((ATermList) t);
            v_14 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_14);
        t_14 = t;
        t = v_14;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_14), u_14);
        s_2 = t;
        t = SSLsetAnnotations(s_2, t_14);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = i_5;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_j_5, q_14);
  }
  return(t);
}
ATerm m_21 (ATerm x_14, ATerm d_15, ATerm e_15, ATerm t)
{
  ATerm i_15 = NULL;
  t = x_14;
  {
    ATerm k_5 = t;
    int l_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_13 = NULL;
        t = SSL_explode_string(x_14);
        t = unquote_chars_2_0(f_0, l_0, t);
        x_13 = t;
        t = SSL_implode_string(x_13);
        ;
        LocalPopChoice(l_5);
      }
    else
      {
        t = k_5;
      }
    i_15 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, i_15, (ATerm)ATempty, d_15);
  }
  return(t);
}
ATerm t_21 (ATerm l_15, ATerm p_15, ATerm t)
{
  ATerm r_15 = NULL;
  t = l_15;
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_14 = NULL;
        t = SSL_explode_string(l_15);
        t = unquote_chars_2_0(o_0, p_0, t);
        f_14 = t;
        t = SSL_implode_string(f_14);
        ;
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
      }
    r_15 = t;
    t = (ATerm) ATmakeAppl(sym_PrimT_3, r_15, (ATerm)ATempty, (ATerm) ATempty);
  }
  return(t);
}
ATerm f_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm l_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm o_0 (ATerm t)
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
  t = term_p_5;
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm l_16 = NULL,n_16 = NULL,l_14 = NULL;
  l_16 = t;
  t = SSL_explode_term(l_16);
  if(match_cons(t, sym__2))
    {
      ATerm q_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) q_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm r_5 = ATgetArgument(t, 1);
        if(((ATgetType(r_5) == AT_LIST) && !(ATisEmpty(r_5))))
          {
            n_16 = ATgetFirst((ATermList) r_5);
            {
              ATerm s_5 = (ATerm) ATgetNext((ATermList) r_5);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(l_16);
  if(match_cons(t, sym__2))
    {
      ATerm t_5 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_5) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_5 = ATgetArgument(t, 1);
        if(((ATgetType(u_5) == AT_LIST) && !(ATisEmpty(u_5))))
          {
            ATerm v_5 = ATgetFirst((ATermList) u_5);
            ATerm w_5 = (ATerm) ATgetNext((ATermList) u_5);
            if(((ATgetType(w_5) == AT_LIST) && !(ATisEmpty(w_5))))
              {
                l_14 = ATgetFirst((ATermList) w_5);
                {
                  ATerm x_5 = (ATerm) ATgetNext((ATermList) w_5);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, l_14), n_16));
  return(t);
}
ATerm u_0 (ATerm t)
{
  ATerm i_17 = NULL,m_17 = NULL;
  if(match_cons(t, sym__2))
    {
      i_17 = ATgetArgument(t, 0);
      m_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, m_17), i_17));
  return(t);
}
ATerm v_0 (ATerm t)
{
  t = term_p_5;
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL;
  if(match_cons(t, sym__2))
    {
      r_17 = ATgetArgument(t, 0);
      s_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_y_5, (ATerm) ATinsert(ATinsert(ATempty, s_17), r_17));
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm l_18 = NULL,o_18 = NULL;
  if(match_cons(t, sym__2))
    {
      l_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, o_18), l_18));
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = term_b_6;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL;
  if(match_cons(t, sym__2))
    {
      q_18 = ATgetArgument(t, 0);
      r_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_z_5, (ATerm) ATinsert(ATinsert(ATempty, r_18), q_18));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL,z_15 = NULL,a_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  d_16 = t;
  if(match_cons(t, sym_Anno_2))
    {
      e_16 = ATgetArgument(t, 0);
      f_16 = ATgetArgument(t, 1);
      {
        ATerm j_16 = NULL;
        t = f_16;
        t = foldr_2_0(q_0, r_0, t);
        j_16 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, e_16, j_16);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          e_16 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, e_16, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              e_16 = ATgetArgument(t, 0);
              {
                ATerm b_15 = NULL;
                t = e_16;
                {
                  ATerm c_6 = t;
                  int d_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_e_6;
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
                                  t = term_h_6;
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
                                      t = term_j_6;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(d_6);
                    }
                  else
                    {
                      t = c_6;
                      {
                        ATerm h_15 = NULL;
                        t = SSL_explode_string(e_16);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm k_6 = ATgetFirst((ATermList) t);
                            if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                              _fail(t);
                            {
                              ATerm l_6 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(l_6) == AT_LIST) && !(ATisEmpty(l_6))))
                                {
                                  h_15 = ATgetFirst((ATermList) l_6);
                                  {
                                    ATerm m_6 = (ATerm) ATgetNext((ATermList) l_6);
                                    if(((ATgetType(m_6) == AT_LIST) && !(ATisEmpty(m_6))))
                                      {
                                        ATerm n_6 = ATgetFirst((ATermList) m_6);
                                        if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                          _fail(t);
                                        {
                                          ATerm o_6 = (ATerm) ATgetNext((ATermList) m_6);
                                          if(((ATgetType(o_6) != AT_LIST) || !(ATisEmpty(o_6))))
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
                        t = h_15;
                      }
                    }
                  b_15 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, b_15);
                }
              }
            }
          else
            {
              ATerm p_6 = t;
              int q_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      e_16 = ATgetArgument(t, 0);
                      {
                        ATerm r_6 = ATgetArgument(t, 1);
                      }
                      a_16 = ATgetArgument(t, 2);
                      v_15 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(q_6);
                  t = (ATerm) ATmakeAppl(sym_Con_3, e_16, a_16, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_15), (ATerm) ATempty));
                }
              else
                {
                  t = p_6;
                  {
                    ATerm s_6 = t;
                    int t_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            e_16 = ATgetArgument(t, 0);
                            {
                              ATerm u_6 = ATgetArgument(t, 1);
                            }
                            a_16 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(t_6);
                        t = (ATerm) ATmakeAppl(sym_Con_3, e_16, a_16, term_y_6);
                      }
                    else
                      {
                        t = s_6;
                        if(match_cons(t, sym_Con1_2))
                          {
                            e_16 = ATgetArgument(t, 0);
                            f_16 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, e_16, f_16, term_y_6);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                e_16 = ATgetArgument(t, 0);
                                f_16 = ATgetArgument(t, 1);
                                {
                                  ATerm s_0 (ATerm t)
                                  {
                                    t = not_null(f_16);
                                    return(t);
                                  }
                                  t = not_null(e_16);
                                  t = foldr_2_0(s_0, u_0, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    e_16 = ATgetArgument(t, 0);
                                    t = e_16;
                                    t = foldr_2_0(v_0, w_0, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        e_16 = ATgetArgument(t, 0);
                                        t = e_16;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            w_15 = ATgetFirst((ATermList) t);
                                            x_15 = (ATerm) ATgetNext((ATermList) t);
                                            t = x_15;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm z_6 = t;
                                                int a_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_21(e_16, d_16, t);
                                                    ;
                                                    LocalPopChoice(a_7);
                                                  }
                                                else
                                                  {
                                                    t = z_6;
                                                    t = w_15;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_21(e_16, d_16, t);
                                              }
                                          }
                                        else
                                          {
                                            t = k_21(e_16, d_16, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            e_16 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, e_16));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                e_16 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, e_16));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    e_16 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, e_16));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        e_16 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, e_16));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            e_16 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_16), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                e_16 = ATgetArgument(t, 0);
                                                                f_16 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_16), f_16);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    e_16 = ATgetArgument(t, 0);
                                                                    f_16 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm x_0 (ATerm t)
                                                                      {
                                                                        t = not_null(f_16);
                                                                        return(t);
                                                                      }
                                                                      t = not_null(e_16);
                                                                      t = foldr_2_0(x_0, y_0, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        e_16 = ATgetArgument(t, 0);
                                                                        t = e_16;
                                                                        t = foldr_2_0(b_1, c_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            e_16 = ATgetArgument(t, 0);
                                                                            f_16 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_j_5, (ATerm) ATinsert(CheckATermList(f_16), e_16));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                e_16 = ATgetArgument(t, 0);
                                                                                t = e_16;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    w_15 = ATgetFirst((ATermList) t);
                                                                                    x_15 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = x_15;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm c_7 = t;
                                                                                        int d_7 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = l_21(e_16, d_16, t);
                                                                                            ;
                                                                                            LocalPopChoice(d_7);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_7;
                                                                                            t = w_15;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_21(e_16, d_16, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_21(e_16, d_16, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_e_7;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        e_16 = ATgetArgument(t, 0);
                                                                                        f_16 = ATgetArgument(t, 1);
                                                                                        t = f_16;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            z_15 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, z_15), e_16));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            e_16 = ATgetArgument(t, 0);
                                                                                            t = e_16;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                e_16 = ATgetArgument(t, 0);
                                                                                                f_16 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, e_16, f_16, term_h_7);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    e_16 = ATgetArgument(t, 0);
                                                                                                    f_16 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, e_16, f_16, term_h_7);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        e_16 = ATgetArgument(t, 0);
                                                                                                        f_16 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, e_16, (ATerm)ATempty, f_16);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            e_16 = ATgetArgument(t, 0);
                                                                                                            f_16 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, f_16, e_16);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Prim_2))
                                                                                                              {
                                                                                                                e_16 = ATgetArgument(t, 0);
                                                                                                                f_16 = ATgetArgument(t, 1);
                                                                                                                t = m_21(e_16, f_16, d_16, t);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_PrimNoArgs_1))
                                                                                                                  {
                                                                                                                    e_16 = ATgetArgument(t, 0);
                                                                                                                    t = t_21(e_16, d_16, t);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_Call_2))
                                                                                                                      {
                                                                                                                        e_16 = ATgetArgument(t, 0);
                                                                                                                        f_16 = ATgetArgument(t, 1);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_CallT_3, e_16, f_16, (ATerm) ATempty);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                          {
                                                                                                                            e_16 = ATgetArgument(t, 0);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_CallT_3, e_16, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SDef_3))
                                                                                                                              {
                                                                                                                                e_16 = ATgetArgument(t, 0);
                                                                                                                                f_16 = ATgetArgument(t, 1);
                                                                                                                                a_16 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SDefT_4, e_16, f_16, (ATerm)ATempty, a_16);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    e_16 = ATgetArgument(t, 0);
                                                                                                                                    f_16 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SDefT_4, e_16, (ATerm)ATempty, (ATerm)ATempty, f_16);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_SRDef_3))
                                                                                                                                      {
                                                                                                                                        e_16 = ATgetArgument(t, 0);
                                                                                                                                        f_16 = ATgetArgument(t, 1);
                                                                                                                                        a_16 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_16, f_16, (ATerm)ATempty, a_16);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            e_16 = ATgetArgument(t, 0);
                                                                                                                                            f_16 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_16, (ATerm)ATempty, (ATerm)ATempty, f_16);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_RDef_3))
                                                                                                                                              {
                                                                                                                                                e_16 = ATgetArgument(t, 0);
                                                                                                                                                f_16 = ATgetArgument(t, 1);
                                                                                                                                                a_16 = ATgetArgument(t, 2);
                                                                                                                                                t = (ATerm) ATmakeAppl(sym_RDefT_4, e_16, f_16, (ATerm)ATempty, a_16);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              {
                                                                                                                                                if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                                  {
                                                                                                                                                    e_16 = ATgetArgument(t, 0);
                                                                                                                                                    f_16 = ATgetArgument(t, 1);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, e_16, (ATerm)ATempty, (ATerm)ATempty, f_16);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    if(match_cons(t, sym_Module_2))
                                                                                                                                                      {
                                                                                                                                                        ATerm i_7 = ATgetArgument(t, 0);
                                                                                                                                                        f_16 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Specification_1, f_16);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm q_87 (ATerm), ATerm t)
{
  ATerm d_22 (ATerm t)
  {
    ATerm j_7 = t;
    int k_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_87(t);
        t = d_22(t);
        ;
        LocalPopChoice(k_7);
      }
    else
      {
        t = j_7;
      }
    return(t);
  }
  t = d_22(t);
  return(t);
}
ATerm topdown_1_0 (ATerm o_88 (ATerm), ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    t = topdown_1_0(o_88, t);
    return(t);
  }
  t = o_88(t);
  t = SRTS_all(d_1, t);
  return(t);
}
ATerm h_4 (ATerm s_54, ATerm t_54, ATerm t)
{
  ATerm e_22 = NULL;
  t = SSL_fputc(s_54, t_54);
  e_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_22);
  return(t);
}
ATerm i_4 (ATerm g_58, ATerm h_58, ATerm t)
{
  ATerm k_22 = NULL;
  t = SSL_write_term_to_stream_text(g_58, h_58);
  k_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_22);
  return(t);
}
ATerm k_4 (ATerm b_107 (ATerm), ATerm l_456, ATerm k_58, ATerm t)
{
  ATerm l_22 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, l_456, term_l_7);
  t = open_stream_0_0(t);
  l_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_22, k_58);
  t = b_107(t);
  t = fclose_0_0(t);
  t = k_58;
  return(t);
}
ATerm j_4 (ATerm c_58, ATerm d_58, ATerm t)
{
  ATerm m_22 = NULL;
  t = SSL_write_term_to_stream_baf(c_58, d_58);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_22);
  return(t);
}
ATerm e_1 (ATerm t)
{
  ATerm p_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm m_7 = ATgetArgument(t, 0);
      if(match_cons(m_7, sym_Stream_1))
        {
          p_22 = ATgetArgument(m_7, 0);
        }
      else
        _fail(t);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_4(p_22, q_22, t);
  return(t);
}
ATerm f_1 (ATerm t)
{
  ATerm t_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm n_7 = ATgetArgument(t, 0);
      if(match_cons(n_7, sym_Stream_1))
        {
          x_22 = ATgetArgument(n_7, 0);
        }
      else
        _fail(t);
      y_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_4(x_22, y_22, t);
  t_22 = t;
  t = term_i_6;
  v_22 = t;
  t = t_22;
  if(match_cons(t, sym_Stream_1))
    {
      w_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_i_6, t_22);
  t = h_4(v_22, w_22, t);
  return(t);
}
ATerm output_1_0 (ATerm k_111 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  t = k_111(t);
  o_22 = t;
  {
    ATerm o_7 = t;
    int p_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_7;
        t = get_config_0_0(t);
        ;
        LocalPopChoice(p_7);
      }
    else
      {
        t = o_7;
        t = term_r_7;
      }
    n_22 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
    {
      ATerm s_7 = t;
      int t_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_u_7;
          t = get_config_0_0(t);
          t = (ATerm) ATmakeAppl(sym__2, n_22, o_22);
          LocalPopChoice(t_7);
          if(match_cons(t, sym__2))
            {
              ATerm v_7 = ATgetArgument(t, 0);
              ATerm w_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_4(e_1, n_22, o_22, t);
        }
      else
        {
          t = s_7;
          if(match_cons(t, sym__2))
            {
              ATerm x_7 = ATgetArgument(t, 0);
              ATerm y_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = k_4(f_1, n_22, o_22, t);
        }
    }
  }
  return(t);
}
ATerm m_23 (ATerm g_23, ATerm t)
{
  t = SSL_fclose(g_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_23 = NULL,k_23 = NULL;
  k_23 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_23 = ATgetArgument(t, 0);
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_23);
            ;
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = m_23(k_23, t);
          }
      }
    }
  else
    {
      t = m_23(k_23, t);
    }
  return(t);
}
ATerm l_4 (ATerm i_58, ATerm t)
{
  t = SSL_read_term_from_stream(i_58);
  return(t);
}
ATerm m_4 (ATerm u_54, ATerm v_54, ATerm t)
{
  ATerm n_23 = NULL;
  t = SSL_fopen(u_54, v_54);
  n_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_23);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_23 = NULL;
  t = SSL_stdin_stream();
  o_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_23);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = SSL_stdout_stream();
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_23);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_23 = NULL;
  t = SSL_stderr_stream();
  q_23 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_23);
  return(t);
}
ATerm x_24 (ATerm w_23, ATerm t)
{
  ATerm x_23 = NULL;
  t = SSL_explode_term(w_23);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            x_23 = ATgetFirst((ATermList) d_8);
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
  t = x_23;
  if(match_cons(t, sym_stderr_0))
    {
      t = x_23;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = x_23;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = x_23;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm y_24 (ATerm a_24, ATerm b_24, ATerm c_24, ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL,i_24 = NULL,w_2 = NULL;
  t = SSLgetAnnotations(c_24);
  f_24 = t;
  t = a_24;
  if(match_cons(t, sym_Path_1))
    {
      i_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, i_24, b_24);
  w_2 = t;
  t = SSLsetAnnotations(w_2, f_24);
  if(match_cons(t, sym__2))
    {
      d_24 = ATgetArgument(t, 0);
      e_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(d_24, e_24, t);
  return(t);
}
ATerm z_24 (ATerm k_24, ATerm l_24, ATerm m_24, ATerm t)
{
  ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL,s_24 = NULL,x_2 = NULL;
  t = SSLgetAnnotations(m_24);
  p_24 = t;
  t = SSL_is_string(k_24);
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_24, l_24);
  x_2 = t;
  t = SSLsetAnnotations(x_2, p_24);
  if(match_cons(t, sym__2))
    {
      n_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_4(n_24, o_24, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      ATerm g_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  u_24 = t;
  if(match_cons(t, sym__2))
    {
      v_24 = ATgetArgument(t, 0);
      w_24 = ATgetArgument(t, 1);
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = x_24(u_24, t);
            ;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm j_8 = t;
              int k_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_24(v_24, w_24, u_24, t);
                  ;
                  LocalPopChoice(k_8);
                }
              else
                {
                  t = j_8;
                  t = z_24(v_24, w_24, u_24, t);
                }
            }
          }
      }
    }
  else
    {
      t = x_24(u_24, t);
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  t = term_n_8;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_25 = NULL;
      d_25 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_25, term_q_8);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      t = debug_1_0(g_1, t);
      _fail(t);
    }
  b_25 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_4(c_25, t);
  a_25 = t;
  t = b_25;
  t = fclose_0_0(t);
  t = a_25;
  return(t);
}
ATerm input_1_0 (ATerm l_111 (ATerm), ATerm t)
{
  ATerm r_8 = t;
  int s_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_8;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_8);
    }
  else
    {
      t = r_8;
      t = term_w_8;
    }
  t = ReadFromFile_0_0(t);
  t = l_111(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL,i_25 = NULL,j_25 = NULL;
  f_25 = t;
  t = term_x_8;
  t = whoami_0_0(t);
  g_25 = t;
  t = term_y_8;
  i_25 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_9), g_25), term_b_9);
  j_25 = t;
  t = SSL_printnl(i_25, j_25);
  t = term_e_9;
  h_25 = t;
  t = SSL_exit(h_25);
  t = f_25;
  return(t);
}
ATerm h_1 (ATerm t)
{
  ATerm l_25 = NULL;
  l_25 = t;
  if(match_string(t, "-k"))
    {
      t = l_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = l_25;
    }
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm m_25 = NULL,n_25 = NULL,o_25 = NULL;
  m_25 = t;
  t = SSL_string_to_int(m_25);
  n_25 = t;
  t = term_f_9;
  o_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_9, n_25);
  t = u_4(o_25, n_25, t);
  t = m_25;
  return(t);
}
ATerm l_1 (ATerm t)
{
  t = term_g_9;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(h_1, k_1, l_1, t);
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm q_25 = NULL;
  q_25 = t;
  if(match_string(t, "-S"))
    {
      t = q_25;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = q_25;
    }
  return(t);
}
ATerm p_1 (ATerm t)
{
  ATerm r_25 = NULL,s_25 = NULL;
  t = term_i_9;
  r_25 = t;
  t = term_j_9;
  s_25 = t;
  t = term_k_9;
  t = u_4(r_25, s_25, t);
  t = term_l_9;
  return(t);
}
ATerm v_1 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm w_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  t = SSL_string_to_int(t_25);
  u_25 = t;
  t = term_i_9;
  v_25 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_9, u_25);
  t = u_4(v_25, u_25, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, t_25);
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = term_p_9;
  return(t);
}
ATerm z_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm w_25 = NULL,x_25 = NULL;
  t = term_q_9;
  w_25 = t;
  t = term_x_8;
  x_25 = t;
  t = term_r_9;
  t = u_4(w_25, x_25, t);
  t = term_s_9;
  return(t);
}
ATerm b_2 (ATerm t)
{
  t = term_t_9;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(m_1, p_1, v_1, t);
      ;
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(w_1, x_1, y_1, t);
            ;
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            t = Option_3_0(z_1, a_2, b_2, t);
          }
      }
    }
  return(t);
}
ATerm u_4 (ATerm j_59, ATerm k_59, ATerm t)
{
  ATerm y_25 = NULL;
  t = term_y_9;
  y_25 = t;
  t = SSL_table_put(y_25, j_59, k_59);
  t = (ATerm) ATmakeAppl(sym__3, term_y_9, j_59, k_59);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm b_26 = NULL,c_26 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_26 = NULL,e_26 = NULL,f_26 = NULL;
      t = term_x_8;
      t = d_0(t);
      d_26 = t;
      t = term_z_9;
      e_26 = t;
      t = term_a_10;
      f_26 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_9, term_a_10, d_26);
      t = s_4(e_26, f_26, d_26, t);
      _fail(t);
    }
  else
    {
      ATerm i_26 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_26 = ATgetFirst((ATermList) t);
          c_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_26;
      t = a_0(t);
      t = term_x_8;
      t = c_0(t);
      i_26 = t;
      t = (ATerm) ATinsert(CheckATermList(c_26), i_26);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm k_26 = NULL;
  k_26 = t;
  if(match_string(t, "-o"))
    {
      t = k_26;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_26;
    }
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm l_26 = NULL,m_26 = NULL;
  l_26 = t;
  t = term_q_7;
  m_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_7, l_26);
  t = u_4(m_26, l_26, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_26);
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
ATerm s_4 (ATerm h_64, ATerm i_64, ATerm g_64, ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_64, i_64);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_10 = ATgetArgument(t, 0);
            ATerm g_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, h_64, i_64);
        t = r_4(h_64, i_64, t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        t = (ATerm) ATempty;
      }
    p_26 = t;
    t = (ATerm) ATinsert(CheckATermList(p_26), g_64);
    q_26 = t;
    t = SSL_table_put(h_64, i_64, q_26);
    t = o_26;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
      t = term_x_8;
      t = j_0(t);
      b_27 = t;
      t = term_z_9;
      c_27 = t;
      t = term_a_10;
      d_27 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_z_9, term_a_10, b_27);
      t = s_4(c_27, d_27, b_27, t);
      _fail(t);
    }
  else
    {
      ATerm h_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_26 = ATgetFirst((ATermList) t);
          y_26 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_26;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_26 = ATgetFirst((ATermList) t);
          a_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_26;
      t = h_0(t);
      t = z_26;
      t = i_0(t);
      h_27 = t;
      t = (ATerm) ATinsert(CheckATermList(a_27), h_27);
    }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm j_27 = NULL;
  j_27 = t;
  if(match_string(t, "-i"))
    {
      t = j_27;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = j_27;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm k_27 = NULL,l_27 = NULL;
  k_27 = t;
  t = term_t_8;
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_8, k_27);
  t = u_4(l_27, k_27, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, k_27);
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_h_10;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_8;
  t = whoami_0_0(t);
  m_27 = t;
  t = term_y_8;
  o_27 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_10), m_27);
  p_27 = t;
  t = SSL_printnl(o_27, p_27);
  t = term_e_9;
  n_27 = t;
  t = SSL_exit(n_27);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  return(t);
}
ATerm n_4 (ATerm s_51, ATerm t_51, ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(s_51, t_51);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = SSL_addr(s_51, t_51);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_100 (ATerm), ATerm j_100 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,s_27 = NULL,t_27 = NULL;
  r_27 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_27;
      t = i_100(t);
    }
  else
    {
      ATerm w_27 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_27 = ATgetFirst((ATermList) t);
          t_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_27;
      t = foldr_2_0(i_100, j_100, t);
      w_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_27, w_27);
      t = j_100(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_j_9;
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm x_16 = NULL,y_16 = NULL;
  if(match_cons(t, sym__2))
    {
      x_16 = ATgetArgument(t, 0);
      y_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(x_16, y_16, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_27 = NULL,m_16 = NULL,p_16 = NULL;
  t = times_0_0(t);
  p_16 = t;
  t = SSL_explode_term(p_16);
  if(match_cons(t, sym__2))
    {
      ATerm m_10 = ATgetArgument(t, 0);
      m_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_16;
  t = foldr_2_0(i_2, j_2, t);
  z_27 = t;
  t = SSL_TicksToSeconds(z_27);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_28;
        if((l_28 != t))
          {
            _fail(t);
          }
        t = k_28;
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        {
          ATerm p_10 = t;
          int q_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_28, m_28);
              ;
              LocalPopChoice(q_10);
            }
          else
            {
              t = p_10;
              t = SSL_gtr(l_28, m_28);
            }
          t = (ATerm) ATmakeAppl(sym__2, l_28, m_28);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm q_28 = NULL;
  q_28 = t;
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_28 = NULL;
        t = term_i_9;
        t = get_config_0_0(t);
        s_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_28, term_e_9);
        t = geq_0_0(t);
        t = q_28;
        t = l_108(t);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = q_28;
      }
  }
  return(t);
}
ATerm m_2 (ATerm t)
{
  ATerm u_28 = NULL,v_28 = NULL,x_28 = NULL,y_28 = NULL;
  t = run_time_0_0(t);
  u_28 = t;
  t = term_x_8;
  t = whoami_0_0(t);
  v_28 = t;
  t = term_y_8;
  x_28 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), u_28), term_z_10), v_28);
  y_28 = t;
  t = SSL_printnl(x_28, y_28);
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_11), u_28), term_z_10), v_28));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_2, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm z_28 = NULL;
  t = report_run_time_0_0(t);
  t = term_j_9;
  z_28 = t;
  t = SSL_exit(z_28);
  return(t);
}
ATerm n_2 (ATerm t)
{
  ATerm h_29 = NULL,i_29 = NULL;
  i_29 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = i_29;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          h_29 = ATgetArgument(t, 0);
          {
            ATerm v_17 = NULL,d_3 = NULL;
            t = SSLgetAnnotations(i_29);
            v_17 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, h_29);
            d_3 = t;
            t = SSLsetAnnotations(d_3, v_17);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = i_29;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_111 (ATerm), ATerm t)
{
  ATerm b_11 = t;
  int c_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_11);
    }
  else
    {
      t = b_11;
      t = fetch_1_0(n_2, t);
    }
  t = b_111(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_29 = ATgetFirst((ATermList) t);
      m_29 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_29 = NULL,r_29 = NULL;
        ATerm p_2 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_29)), not_null(r_29));
          return(t);
        }
        t = not_null(m_29);
        t = g_0(t);
        if(((q_29 != NULL) && (q_29 != t)))
          _fail(t);
        else
          q_29 = t;
        t = not_null(l_29);
        t = e_0(t);
        if(((r_29 != NULL) && (r_29 != t)))
          _fail(t);
        else
          r_29 = t;
        t = not_null(m_29);
        t = reverse_acc_2_0(e_0, p_2, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_x_8;
      t = g_0(t);
    }
  return(t);
}
ATerm q_2 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,x_29 = NULL,g_3 = NULL;
  x_29 = t;
  if(match_cons(t, sym_Program_1))
    {
      w_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_29);
  v_29 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, w_29);
  g_3 = t;
  t = SSLsetAnnotations(g_3, v_29);
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm u_2 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, z_29), term_f_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm t_29 = NULL,u_29 = NULL;
  ATerm g_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_10;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(h_11);
    }
  else
    {
      t = g_11;
      t = fetch_1_0(q_2, t);
    }
  t = term_j_11;
  t = echo_0_0(t);
  t = term_z_9;
  t_29 = t;
  t = term_a_10;
  u_29 = t;
  t = term_n_11;
  t = r_4(t_29, u_29, t);
  t = reverse_acc_2_0(_id, r_2, t);
  t = map_1_0(u_2, t);
  return(t);
}
ATerm fetch_1_0 (ATerm p_94 (ATerm), ATerm t)
{
  ATerm w_30 (ATerm t)
  {
    ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
    t_30 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_30 = ATgetFirst((ATermList) t);
        v_30 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_11 = t;
      int p_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_18 = NULL,u_18 = NULL,j_3 = NULL;
          t = SSLgetAnnotations(t_30);
          n_18 = t;
          t = u_30;
          t = p_94(t);
          u_18 = t;
          t = (ATerm) ATinsert(CheckATermList(v_30), u_18);
          j_3 = t;
          t = SSLsetAnnotations(j_3, n_18);
          ;
          LocalPopChoice(p_11);
        }
      else
        {
          t = o_11;
          {
            ATerm i_19 = NULL,o_19 = NULL,k_3 = NULL;
            t = SSLgetAnnotations(t_30);
            i_19 = t;
            t = v_30;
            t = w_30(t);
            o_19 = t;
            t = (ATerm) ATinsert(CheckATermList(o_19), u_30);
            k_3 = t;
            t = SSLsetAnnotations(k_3, i_19);
          }
        }
    }
    return(t);
  }
  t = w_30(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
  a_31 = t;
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = a_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_11 = ATgetFirst((ATermList) t);
                ATerm t_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = a_31;
          }
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATinsert(ATempty, a_31);
      }
    b_31 = t;
    t = term_r_7;
    c_31 = t;
    t = SSL_printnl(c_31, b_31);
    t = a_31;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_10;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm q_4 (ATerm i_49, ATerm j_49, ATerm t)
{
  t = SSL_strcat(i_49, j_49);
  return(t);
}
ATerm debug_1_0 (ATerm z_106 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL;
  g_31 = t;
  t = z_106(t);
  h_31 = t;
  t = term_y_8;
  i_31 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, g_31), h_31);
  j_31 = t;
  t = SSL_printnl(i_31, j_31);
  t = g_31;
  return(t);
}
ATerm map_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm a_35 (ATerm t)
  {
    ATerm q_34 = NULL,y_34 = NULL,z_34 = NULL;
    q_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = q_34;
      }
    else
      {
        ATerm l_20 = NULL,s_20 = NULL,t_20 = NULL,n_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_34 = ATgetFirst((ATermList) t);
            z_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_34);
        l_20 = t;
        t = y_34;
        t = f_94(t);
        s_20 = t;
        t = z_34;
        t = a_35(t);
        t_20 = t;
        t = (ATerm) ATinsert(CheckATermList(t_20), s_20);
        n_3 = t;
        t = SSLsetAnnotations(n_3, l_20);
      }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm v_11 = t;
  int x_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_11);
    }
  else
    {
      t = v_11;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm b_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL;
      i_35 = t;
      t = SSL_is_string(i_35);
      ;
      LocalPopChoice(d_12);
    }
  else
    {
      t = b_12;
      {
        ATerm f_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(v_2, t);
            ;
            LocalPopChoice(h_12);
          }
        else
          {
            t = f_12;
            {
              ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
              o_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_35 = ATgetArgument(t, 0);
                  t = p_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_35 = ATgetArgument(t, 0);
                      t = p_35;
                      {
                        ATerm i_12 = t;
                        int j_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(j_12);
                          }
                        else
                          {
                            t = i_12;
                            t = debug_1_0(y_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm u_35 = NULL,v_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_35 = ATgetArgument(t, 0);
                          q_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_35;
                      t = eval_config_0_0(t);
                      u_35 = t;
                      t = q_35;
                      t = eval_config_0_0(t);
                      v_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_35, v_35);
                      t = q_4(u_35, v_35, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm r_4 (ATerm y_65, ATerm z_65, ATerm t)
{
  t = SSL_table_get(y_65, z_65);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  z_35 = t;
  t = term_y_9;
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_9, z_35);
  t = r_4(a_36, z_35, t);
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_36 = NULL,c_36 = NULL;
        t = eval_config_0_0(t);
        b_36 = t;
        t = term_y_9;
        c_36 = t;
        t = SSL_table_put(c_36, z_35, b_36);
        t = b_36;
        ;
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
      }
  }
  return(t);
}
ATerm z_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  t = term_m_12;
  f_36 = t;
  t = term_x_8;
  g_36 = t;
  t = term_n_12;
  t = u_4(f_36, g_36, t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm c_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  t = term_m_12;
  j_36 = t;
  t = term_x_8;
  k_36 = t;
  t = term_n_12;
  t = u_4(j_36, k_36, t);
  t = term_p_12;
  h_36 = t;
  t = term_x_8;
  i_36 = t;
  t = term_q_12;
  t = u_4(h_36, i_36, t);
  t = term_s_12;
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(z_2, a_3, b_3, t);
      ;
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      t = Option_3_0(c_3, e_3, f_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm o_73 (ATerm), ATerm p_73 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL,q_36 = NULL,p_3 = NULL;
  q_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_36 = ATgetFirst((ATermList) t);
      n_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_36);
  l_36 = t;
  t = m_36;
  t = o_73(t);
  o_36 = t;
  t = n_36;
  t = p_73(t);
  p_36 = t;
  t = (ATerm) ATinsert(CheckATermList(p_36), o_36);
  p_3 = t;
  t = SSLsetAnnotations(p_3, l_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_113 (ATerm), ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL,a_37 = NULL,b_37 = NULL,s_3 = NULL;
  if(((v_36 != NULL) && (v_36 != t)))
    _fail(t);
  else
    v_36 = t;
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_a_13;
        t = e_113(t);
        ;
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
      }
    t = not_null(v_36);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((x_36 != NULL) && (x_36 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          x_36 = ATgetFirst((ATermList) t);
        if(((y_36 != NULL) && (y_36 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          y_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(v_36));
    if(((w_36 != NULL) && (w_36 != t)))
      _fail(t);
    else
      w_36 = t;
    t = term_j_10;
    if(((b_37 != NULL) && (b_37 != t)))
      _fail(t);
    else
      b_37 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_j_10, not_null(x_36));
    t = u_4(not_null(b_37), not_null(x_36), t);
    t = not_null(y_36);
    {
      ATerm n_37 (ATerm t)
      {
        ATerm b_13 = t;
        int c_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_37 = NULL;
                g_37 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = g_37;
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                t = e_113(t);
                t = Cons_2_0(_id, n_37, t);
              }
            ;
            LocalPopChoice(c_13);
          }
        else
          {
            t = b_13;
            {
              ATerm j_37 = NULL,k_37 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  j_37 = ATgetFirst((ATermList) t);
                  k_37 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(k_37), (ATerm) ATmakeAppl(sym_Undefined_1, j_37));
            }
          }
        return(t);
      }
      t = n_37(t);
      if(((a_37 != NULL) && (a_37 != t)))
        _fail(t);
      else
        a_37 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(a_37)), (ATerm) ATmakeAppl(sym_Program_1, not_null(x_36)));
      if(((s_3 != NULL) && (s_3 != t)))
        _fail(t);
      else
        s_3 = t;
      t = SSLsetAnnotations(not_null(s_3), not_null(w_36));
    }
  }
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm z_37 = NULL;
  z_37 = t;
  if(match_string(t, "--help"))
    {
      t = z_37;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_37;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_37;
        }
    }
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  t = term_d_11;
  a_38 = t;
  t = term_x_8;
  b_38 = t;
  t = term_g_13;
  t = u_4(a_38, b_38, t);
  t = term_h_13;
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = term_i_13;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_113 (ATerm), ATerm t)
{
  ATerm s_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL,x_37 = NULL,y_37 = NULL;
  if(((u_37 != NULL) && (u_37 != t)))
    _fail(t);
  else
    u_37 = t;
  t = term_z_9;
  if(((w_37 != NULL) && (w_37 != t)))
    _fail(t);
  else
    w_37 = t;
  t = term_a_10;
  if(((x_37 != NULL) && (x_37 != t)))
    _fail(t);
  else
    x_37 = t;
  t = (ATerm) ATempty;
  if(((y_37 != NULL) && (y_37 != t)))
    _fail(t);
  else
    y_37 = t;
  t = SSL_table_put(not_null(w_37), not_null(x_37), not_null(y_37));
  t = not_null(u_37);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm j_13 = t;
      int k_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_113(t);
          ;
          LocalPopChoice(k_13);
        }
      else
        {
          t = j_13;
          {
            ATerm l_13 = t;
            int m_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_3, m_3, o_3, t);
                ;
                LocalPopChoice(m_13);
              }
            else
              {
                t = l_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(i_3, t);
    {
      ATerm n_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_38 = NULL;
          i_38 = t;
          {
            ATerm q_13 = t;
            int s_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_21 = NULL;
                t = i_38;
                {
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_11;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
                      t = fetch_1_0(r_3, t);
                    }
                  t = i_38;
                  t = default_system_usage_0_0(t);
                  t = term_j_9;
                  r_21 = t;
                  t = SSL_exit(r_21);
                }
                ;
                LocalPopChoice(s_13);
              }
            else
              {
                t = q_13;
                {
                  ATerm x_21 = NULL;
                  t = term_m_12;
                  t = get_config_0_0(t);
                  t = i_38;
                  t = default_system_about_0_0(t);
                  t = term_j_9;
                  x_21 = t;
                  t = SSL_exit(x_21);
                }
              }
          }
          ;
          LocalPopChoice(p_13);
        }
      else
        {
          t = n_13;
          {
            ATerm v_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL;
                ATerm t_3 (ATerm t)
                {
                  ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL,v_3 = NULL;
                  o_38 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      n_38 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(o_38);
                  m_38 = t;
                  t = n_38;
                  if(((s_37 != NULL) && (s_37 != t)))
                    _fail(t);
                  else
                    s_37 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, n_38);
                  v_3 = t;
                  t = SSLsetAnnotations(v_3, m_38);
                  return(t);
                }
                t = fetch_1_0(t_3, t);
                t = term_y_8;
                if(((k_38 != NULL) && (k_38 != t)))
                  _fail(t);
                else
                  k_38 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_37)), term_y_13);
                if(((l_38 != NULL) && (l_38 != t)))
                  _fail(t);
                else
                  l_38 = t;
                t = SSL_printnl(not_null(k_38), not_null(l_38));
                t = (ATerm) ATmakeAppl(sym__2, term_y_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_37)), term_y_13));
                t = default_system_usage_0_0(t);
                t = term_e_9;
                if(((j_38 != NULL) && (j_38 != t)))
                  _fail(t);
                else
                  j_38 = t;
                t = SSL_exit(not_null(j_38));
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
              }
          }
        }
      if(((t_37 != NULL) && (t_37 != t)))
        _fail(t);
      else
        t_37 = t;
      t = term_z_9;
      if(((v_37 != NULL) && (v_37 != t)))
        _fail(t);
      else
        v_37 = t;
      t = SSL_table_destroy(not_null(v_37));
      t = not_null(t_37);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_111 (ATerm), ATerm e_111 (ATerm), ATerm f_111 (ATerm), ATerm g_111 (ATerm), ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL;
  t = parse_options_1_0(d_111, t);
  t_38 = t;
  t = term_z_13;
  w_38 = t;
  t = SSL_table_create(w_38);
  t = term_z_13;
  u_38 = t;
  t = term_a_14;
  v_38 = t;
  t = SSL_table_put(u_38, v_38, t_38);
  t = t_38;
  t = f_111(t);
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_111, t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm e_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_111(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(g_14);
            }
          else
            {
              t = e_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm i_14 = t;
  int k_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(k_14);
    }
  else
    {
      t = i_14;
      {
        ATerm p_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = p_14;
            {
              ATerm y_14 = t;
              int z_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(x_3, y_3, z_3, t);
                  ;
                  LocalPopChoice(z_14);
                }
              else
                {
                  t = y_14;
                  {
                    ATerm a_15 = t;
                    int c_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(c_15);
                      }
                    else
                      {
                        t = a_15;
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
ATerm w_3 (ATerm t)
{
  t = input_1_0(a_4, t);
  return(t);
}
ATerm x_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL;
  t = term_u_7;
  z_38 = t;
  t = term_x_8;
  a_39 = t;
  t = term_f_15;
  t = u_4(z_38, a_39, t);
  t = term_g_15;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_j_15;
  return(t);
}
ATerm a_4 (ATerm t)
{
  t = output_1_0(b_4, t);
  return(t);
}
ATerm b_4 (ATerm t)
{
  t = topdown_1_0(c_4, t);
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm k_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(m_15);
      }
    else
      {
        t = k_15;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(u_3, default_usage_0_0, _id, w_3, t);
  return(t);
}
