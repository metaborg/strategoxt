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
ATerm term_x_14;
ATerm term_k_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_f_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_w_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_n_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_i_5;
ATerm term_g_5;
ATerm term_f_5;
ATerm term_e_5;
ATerm term_s_2;
void init_constant_terms (void)
{
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_5));
  term_g_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_5));
  term_i_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATempty);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_6);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_Call_2, term_i_7, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Call_2, term_g_8, (ATerm) ATempty);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_n_8);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_l_10);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_10);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym__2, term_r_10, term_s_2);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_c_11);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_s_2);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_s_2);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(sym__2, term_b_12, term_s_2);
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__2, term_f_14, term_s_2);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm at_last_1_0 (ATerm s_81 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm unquote_chars_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm d_1 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm m_26 (ATerm n_16, ATerm o_16, ATerm);
ATerm n_26 (ATerm x_16, ATerm a_17, ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm a_75 (ATerm), ATerm);
ATerm r_4 (ATerm e_41, ATerm f_41, ATerm);
ATerm s_4 (ATerm s_44, ATerm t_44, ATerm);
ATerm u_4 (ATerm o_93 (ATerm), ATerm z_425, ATerm w_44, ATerm);
ATerm t_4 (ATerm o_44, ATerm p_44, ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm q_96 (ATerm), ATerm);
ATerm m_30 (ATerm g_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_4 (ATerm u_44, ATerm);
ATerm w_4 (ATerm g_41, ATerm h_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm y_31 (ATerm x_30, ATerm);
ATerm z_31 (ATerm b_31, ATerm c_31, ATerm d_31, ATerm);
ATerm a_32 (ATerm l_31, ATerm m_31, ATerm n_31, ATerm);
ATerm x_4 (ATerm);
ATerm c_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm b_81 (ATerm), ATerm);
ATerm q_4 (ATerm u_35, ATerm v_35, ATerm);
ATerm debug_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm z_94 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm h_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm t_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_5 (ATerm v_45, ATerm w_45, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm d_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_5 (ATerm t_50, ATerm u_50, ATerm s_50, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_4 (ATerm e_38, ATerm f_38, ATerm);
ATerm foldr_2_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm h_3 (ATerm);
ATerm j_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm k_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm l_3 (ATerm);
ATerm need_help_1_0 (ATerm o_97 (ATerm), ATerm);
ATerm map_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm a_5 (ATerm k_52, ATerm l_52, ATerm);
ATerm n_3 (ATerm);
ATerm o_3 (ATerm);
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
ATerm Cons_2_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm r_99 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm parse_options_1_0 (ATerm q_99 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm);
ATerm f_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm iowrap_3_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm c_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_s_2;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_e_5;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_5), c_0), term_f_5);
  n_0 = t;
  t = SSL_printnl(f_0, n_0);
  t = term_i_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm s_81 (ATerm), ATerm t)
{
  ATerm r_1 (ATerm t)
  {
    ATerm i_1 = NULL,j_1 = NULL,p_1 = NULL;
    i_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_1 = ATgetFirst((ATermList) t);
        p_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_5 = t;
      int k_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(i_1);
          q_0 = t;
          t = p_1;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(p_1), j_1);
          r_0 = t;
          t = SSLsetAnnotations(r_0, q_0);
          t = s_81(t);
          ;
          LocalPopChoice(k_5);
        }
      else
        {
          t = j_5;
          {
            ATerm t_1 = NULL,y_1 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(i_1);
            t_1 = t;
            t = p_1;
            t = r_1(t);
            y_1 = t;
            t = (ATerm) ATinsert(CheckATermList(y_1), j_1);
            t_0 = t;
            t = SSLsetAnnotations(t_0, t_1);
          }
        }
    }
    return(t);
  }
  t = r_1(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm l_2 = NULL,m_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      m_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = m_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = l_2;
    }
  else
    {
      t = m_2;
      t = last_0_0(t);
    }
  return(t);
}
ATerm b_0 (ATerm t)
{
  ATerm y_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_5 = ATgetFirst((ATermList) t);
      y_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_2 = ATgetFirst((ATermList) t);
      {
        ATerm n_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_2;
  t = a_90(t);
  t = u_2;
  t = last_0_0(t);
  t = b_90(t);
  t = u_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm o_5 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_2;
  t = at_last_1_0(b_0, t);
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
ATerm s_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm v_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm d_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm g_13 = NULL,h_13 = NULL,l_13 = NULL,m_13 = NULL,s_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_Real_1))
    {
      m_13 = ATgetArgument(t, 0);
      {
        ATerm c_3 = NULL;
        t = SSL_string_to_real(m_13);
        c_3 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, c_3);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          m_13 = ATgetArgument(t, 0);
          {
            ATerm i_3 = NULL;
            t = SSL_string_to_int(m_13);
            i_3 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, i_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              m_13 = ATgetArgument(t, 0);
              s_13 = ATgetArgument(t, 1);
              h_13 = ATgetArgument(t, 2);
              t = SSL_is_string(h_13);
              t = (ATerm) ATmakeAppl(sym_Con_3, m_13, s_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, h_13), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  m_13 = ATgetArgument(t, 0);
                  s_13 = ATgetArgument(t, 1);
                  h_13 = ATgetArgument(t, 2);
                  {
                    ATerm e_4 = NULL;
                    t = m_13;
                    {
                      ATerm r_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_4 = NULL;
                          t = SSL_explode_string(m_13);
                          t = unquote_chars_2_0(o_0, p_0, t);
                          n_4 = t;
                          t = SSL_implode_string(n_4);
                          ;
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = r_5;
                        }
                      e_4 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, e_4, s_13, h_13);
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      m_13 = ATgetArgument(t, 0);
                      s_13 = ATgetArgument(t, 1);
                      {
                        ATerm p_5 = NULL;
                        t = m_13;
                        {
                          ATerm u_5 = t;
                          int v_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_6 = NULL;
                              t = SSL_explode_string(m_13);
                              t = unquote_chars_2_0(s_0, u_0, t);
                              c_6 = t;
                              t = SSL_implode_string(c_6);
                              ;
                              LocalPopChoice(v_5);
                            }
                          else
                            {
                              t = u_5;
                            }
                          p_5 = t;
                          t = (ATerm) ATmakeAppl(sym_PrimT_3, p_5, (ATerm)ATempty, s_13);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          m_13 = ATgetArgument(t, 0);
                          {
                            ATerm p_6 = NULL;
                            t = m_13;
                            {
                              ATerm x_5 = t;
                              int y_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm d_7 = NULL;
                                  t = SSL_explode_string(m_13);
                                  t = unquote_chars_2_0(v_0, d_1, t);
                                  d_7 = t;
                                  t = SSL_implode_string(d_7);
                                  ;
                                  LocalPopChoice(y_5);
                                }
                              else
                                {
                                  t = x_5;
                                }
                              p_6 = t;
                              t = (ATerm) ATmakeAppl(sym_PrimT_3, p_6, (ATerm)ATempty, (ATerm) ATempty);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              m_13 = ATgetArgument(t, 0);
                              {
                                ATerm q_7 = NULL,v_7 = NULL,x_7 = NULL,w_0 = NULL;
                                t = SSLgetAnnotations(l_13);
                                q_7 = t;
                                t = SSL_explode_string(m_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm z_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                      _fail(t);
                                    v_7 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(v_7);
                                x_7 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_7);
                                w_0 = t;
                                t = SSLsetAnnotations(w_0, q_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  m_13 = ATgetArgument(t, 0);
                                  s_13 = ATgetArgument(t, 1);
                                  h_13 = ATgetArgument(t, 2);
                                  g_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm s_8 = NULL,f_9 = NULL,g_9 = NULL,x_0 = NULL;
                                    t = SSLgetAnnotations(l_13);
                                    s_8 = t;
                                    t = SSL_explode_string(m_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm a_6 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(a_6) != AT_INT) || (ATgetInt((ATermInt) a_6) != 39)))
                                          _fail(t);
                                        f_9 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(f_9);
                                    g_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, g_9, s_13, h_13, g_13);
                                    x_0 = t;
                                    t = SSLsetAnnotations(x_0, s_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      m_13 = ATgetArgument(t, 0);
                                      s_13 = ATgetArgument(t, 1);
                                      h_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm n_10 = NULL,u_10 = NULL,y_10 = NULL,y_0 = NULL;
                                        t = SSLgetAnnotations(l_13);
                                        n_10 = t;
                                        t = SSL_explode_string(m_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm d_6 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(d_6) != AT_INT) || (ATgetInt((ATermInt) d_6) != 39)))
                                              _fail(t);
                                            u_10 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(u_10);
                                        y_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, y_10, s_13, h_13);
                                        y_0 = t;
                                        t = SSLsetAnnotations(y_0, n_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          m_13 = ATgetArgument(t, 0);
                                          s_13 = ATgetArgument(t, 1);
                                          h_13 = ATgetArgument(t, 2);
                                          g_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm w_11 = NULL,d_13 = NULL,e_13 = NULL,z_0 = NULL;
                                            t = SSLgetAnnotations(l_13);
                                            w_11 = t;
                                            t = SSL_explode_string(m_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm f_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(f_6) != AT_INT) || (ATgetInt((ATermInt) f_6) != 39)))
                                                  _fail(t);
                                                d_13 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(d_13);
                                            e_13 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_13, s_13, h_13, g_13);
                                            z_0 = t;
                                            t = SSLsetAnnotations(z_0, w_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              m_13 = ATgetArgument(t, 0);
                                              s_13 = ATgetArgument(t, 1);
                                              h_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm v_13 = NULL,h_14 = NULL,i_14 = NULL,a_1 = NULL;
                                                t = SSLgetAnnotations(l_13);
                                                v_13 = t;
                                                t = SSL_explode_string(m_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm g_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                                                      _fail(t);
                                                    h_14 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(h_14);
                                                i_14 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, i_14, s_13, h_13);
                                                a_1 = t;
                                                t = SSLsetAnnotations(a_1, v_13);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  m_13 = ATgetArgument(t, 0);
                                                  s_13 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm z_14 = NULL,d_15 = NULL,e_15 = NULL,b_1 = NULL;
                                                    t = SSLgetAnnotations(l_13);
                                                    z_14 = t;
                                                    t = SSL_explode_string(m_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm i_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                                          _fail(t);
                                                        d_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(d_15);
                                                    e_15 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, e_15, s_13);
                                                    b_1 = t;
                                                    t = SSLsetAnnotations(b_1, z_14);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      m_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL,c_1 = NULL;
                                                        t = SSLgetAnnotations(l_13);
                                                        l_15 = t;
                                                        t = SSL_explode_string(m_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm j_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(j_6) != AT_INT) || (ATgetInt((ATermInt) j_6) != 39)))
                                                              _fail(t);
                                                            n_15 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(n_15);
                                                        o_15 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, o_15);
                                                        c_1 = t;
                                                        t = SSLsetAnnotations(c_1, l_15);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          m_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm u_15 = NULL,w_15 = NULL,x_15 = NULL,e_1 = NULL;
                                                            t = SSLgetAnnotations(l_13);
                                                            u_15 = t;
                                                            t = SSL_explode_string(m_13);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm k_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                                                                  _fail(t);
                                                                w_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(w_15);
                                                            x_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, x_15);
                                                            e_1 = t;
                                                            t = SSLsetAnnotations(e_1, u_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              m_13 = ATgetArgument(t, 0);
                                                              s_13 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm k_16 = NULL,s_16 = NULL,t_16 = NULL,f_1 = NULL;
                                                                t = SSLgetAnnotations(l_13);
                                                                k_16 = t;
                                                                t = SSL_explode_string(m_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm l_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(l_6) != AT_INT) || (ATgetInt((ATermInt) l_6) != 39)))
                                                                      _fail(t);
                                                                    s_16 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(s_16);
                                                                t_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_16, s_13);
                                                                f_1 = t;
                                                                t = SSLsetAnnotations(f_1, k_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm j_17 = NULL,m_17 = NULL,n_17 = NULL,g_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  m_13 = ATgetArgument(t, 0);
                                                                  s_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(l_13);
                                                              j_17 = t;
                                                              t = SSL_explode_string(m_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm n_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                                                    _fail(t);
                                                                  m_17 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(m_17);
                                                              n_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, n_17, s_13);
                                                              g_1 = t;
                                                              t = SSLsetAnnotations(g_1, j_17);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm m_26 (ATerm n_16, ATerm o_16, ATerm t)
{
  t = n_16;
  {
    ATerm q_6 = t;
    if((PushChoice() == 0))
      {
        ATerm q_16 = NULL,r_16 = NULL,v_16 = NULL,w_16 = NULL,n_2 = NULL;
        w_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            r_16 = ATgetFirst((ATermList) t);
            v_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_16);
        q_16 = t;
        t = v_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(v_16), r_16);
        n_2 = t;
        t = SSLsetAnnotations(n_2, q_16);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_6;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_s_6, n_16);
  }
  return(t);
}
ATerm n_26 (ATerm x_16, ATerm a_17, ATerm t)
{
  t = x_16;
  {
    ATerm t_6 = t;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL,f_17 = NULL,h_17 = NULL,o_17 = NULL,r_2 = NULL;
        o_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_17 = ATgetFirst((ATermList) t);
            h_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_17);
        c_17 = t;
        t = h_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(h_17), f_17);
        r_2 = t;
        t = SSLsetAnnotations(r_2, c_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = t_6;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, x_16);
  }
  return(t);
}
ATerm h_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm k_1 (ATerm t)
{
  ATerm m_21 = NULL,o_21 = NULL,w_17 = NULL;
  m_21 = t;
  t = SSL_explode_term(m_21);
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            o_21 = ATgetFirst((ATermList) y_6);
            {
              ATerm z_6 = (ATerm) ATgetNext((ATermList) y_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(m_21);
  if(match_cons(t, sym__2))
    {
      ATerm a_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_7 = ATgetArgument(t, 1);
        if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
          {
            ATerm c_7 = ATgetFirst((ATermList) b_7);
            ATerm e_7 = (ATerm) ATgetNext((ATermList) b_7);
            if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
              {
                w_17 = ATgetFirst((ATermList) e_7);
                {
                  ATerm f_7 = (ATerm) ATgetNext((ATermList) e_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, w_17), o_21));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, j_22), i_22));
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, r_22), q_22));
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm k_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      k_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, l_23), k_23));
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_j_7;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm n_23 = NULL,r_23 = NULL;
  if(match_cons(t, sym__2))
    {
      n_23 = ATgetArgument(t, 0);
      r_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, r_23), n_23));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_17 = NULL,u_17 = NULL,v_17 = NULL,x_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      b_18 = ATgetArgument(t, 0);
      c_18 = ATgetArgument(t, 1);
      {
        ATerm k_21 = NULL;
        t = c_18;
        t = foldr_2_0(h_1, k_1, t);
        k_21 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, b_18, k_21);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          b_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, b_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              b_18 = ATgetArgument(t, 0);
              {
                ATerm h_18 = NULL;
                t = b_18;
                {
                  ATerm k_7 = t;
                  int l_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_m_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_n_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_o_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_p_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_r_7;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(l_7);
                    }
                  else
                    {
                      t = k_7;
                      {
                        ATerm j_18 = NULL;
                        t = SSL_explode_string(b_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm s_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(s_7) != AT_INT) || (ATgetInt((ATermInt) s_7) != 39)))
                              _fail(t);
                            {
                              ATerm t_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
                                {
                                  j_18 = ATgetFirst((ATermList) t_7);
                                  {
                                    ATerm u_7 = (ATerm) ATgetNext((ATermList) t_7);
                                    if(((ATgetType(u_7) == AT_LIST) && !(ATisEmpty(u_7))))
                                      {
                                        ATerm w_7 = ATgetFirst((ATermList) u_7);
                                        if(((ATgetType(w_7) != AT_INT) || (ATgetInt((ATermInt) w_7) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_7 = (ATerm) ATgetNext((ATermList) u_7);
                                          if(((ATgetType(y_7) != AT_LIST) || !(ATisEmpty(y_7))))
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
                        t = j_18;
                      }
                    }
                  h_18 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, h_18);
                }
              }
            }
          else
            {
              ATerm z_7 = t;
              int a_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      b_18 = ATgetArgument(t, 0);
                      {
                        ATerm b_8 = ATgetArgument(t, 1);
                      }
                      z_17 = ATgetArgument(t, 2);
                      p_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, b_18, z_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_17), (ATerm) ATempty));
                }
              else
                {
                  t = z_7;
                  {
                    ATerm c_8 = t;
                    int d_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            b_18 = ATgetArgument(t, 0);
                            {
                              ATerm e_8 = ATgetArgument(t, 1);
                            }
                            z_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, b_18, z_17, term_h_8);
                      }
                    else
                      {
                        t = c_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            b_18 = ATgetArgument(t, 0);
                            c_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, b_18, c_18, term_h_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                b_18 = ATgetArgument(t, 0);
                                c_18 = ATgetArgument(t, 1);
                                {
                                  ATerm l_1 (ATerm t)
                                  {
                                    t = c_18;
                                    return(t);
                                  }
                                  t = b_18;
                                  t = foldr_2_0(l_1, m_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    b_18 = ATgetArgument(t, 0);
                                    t = b_18;
                                    t = foldr_2_0(n_1, o_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        b_18 = ATgetArgument(t, 0);
                                        t = b_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            u_17 = ATgetFirst((ATermList) t);
                                            v_17 = (ATerm) ATgetNext((ATermList) t);
                                            t = v_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_8 = t;
                                                int j_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = m_26(b_18, a_18, t);
                                                    ;
                                                    LocalPopChoice(j_8);
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    t = u_17;
                                                  }
                                              }
                                            else
                                              {
                                                t = m_26(b_18, a_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = m_26(b_18, a_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            b_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, b_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                b_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, b_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    b_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, b_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        b_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, b_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            b_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                b_18 = ATgetArgument(t, 0);
                                                                c_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, b_18), c_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    b_18 = ATgetArgument(t, 0);
                                                                    c_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm q_1 (ATerm t)
                                                                      {
                                                                        t = c_18;
                                                                        return(t);
                                                                      }
                                                                      t = b_18;
                                                                      t = foldr_2_0(q_1, s_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        b_18 = ATgetArgument(t, 0);
                                                                        t = b_18;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            b_18 = ATgetArgument(t, 0);
                                                                            c_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, (ATerm) ATinsert(CheckATermList(c_18), b_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                b_18 = ATgetArgument(t, 0);
                                                                                t = b_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    u_17 = ATgetFirst((ATermList) t);
                                                                                    v_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = v_17;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm k_8 = t;
                                                                                        int l_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = n_26(b_18, a_18, t);
                                                                                            ;
                                                                                            LocalPopChoice(l_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_8;
                                                                                            t = u_17;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = n_26(b_18, a_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = n_26(b_18, a_18, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_m_8;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        b_18 = ATgetArgument(t, 0);
                                                                                        c_18 = ATgetArgument(t, 1);
                                                                                        t = c_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            x_17 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, x_17), b_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            b_18 = ATgetArgument(t, 0);
                                                                                            t = b_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                b_18 = ATgetArgument(t, 0);
                                                                                                c_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, b_18, c_18, term_p_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    b_18 = ATgetArgument(t, 0);
                                                                                                    c_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, b_18, c_18, term_p_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        b_18 = ATgetArgument(t, 0);
                                                                                                        c_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, b_18, (ATerm)ATempty, c_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            b_18 = ATgetArgument(t, 0);
                                                                                                            c_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, c_18, b_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                b_18 = ATgetArgument(t, 0);
                                                                                                                c_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, b_18, c_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    b_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, b_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        b_18 = ATgetArgument(t, 0);
                                                                                                                        c_18 = ATgetArgument(t, 1);
                                                                                                                        z_17 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, b_18, c_18, (ATerm)ATempty, z_17);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            b_18 = ATgetArgument(t, 0);
                                                                                                                            c_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, b_18, (ATerm)ATempty, (ATerm)ATempty, c_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                b_18 = ATgetArgument(t, 0);
                                                                                                                                c_18 = ATgetArgument(t, 1);
                                                                                                                                z_17 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_18, c_18, (ATerm)ATempty, z_17);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    b_18 = ATgetArgument(t, 0);
                                                                                                                                    c_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, b_18, (ATerm)ATempty, (ATerm)ATempty, c_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        b_18 = ATgetArgument(t, 0);
                                                                                                                                        c_18 = ATgetArgument(t, 1);
                                                                                                                                        z_17 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, b_18, c_18, (ATerm)ATempty, z_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            b_18 = ATgetArgument(t, 0);
                                                                                                                                            c_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, b_18, (ATerm)ATempty, (ATerm)ATempty, c_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm q_8 = ATgetArgument(t, 0);
                                                                                                                                                c_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, c_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm u_26 (ATerm t)
  {
    ATerm r_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_74(t);
        t = u_26(t);
        ;
        LocalPopChoice(t_8);
      }
    else
      {
        t = r_8;
      }
    return(t);
  }
  t = u_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm a_75 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = topdown_1_0(a_75, t);
    return(t);
  }
  t = a_75(t);
  t = SRTS_all(w_1, t);
  return(t);
}
ATerm r_4 (ATerm e_41, ATerm f_41, ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_fputc(e_41, f_41);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
ATerm s_4 (ATerm s_44, ATerm t_44, ATerm t)
{
  ATerm c_27 = NULL;
  t = SSL_write_term_to_stream_text(s_44, t_44);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_27);
  return(t);
}
ATerm u_4 (ATerm o_93 (ATerm), ATerm z_425, ATerm w_44, ATerm t)
{
  ATerm d_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, z_425, term_u_8);
  t = x_4(t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_27, w_44);
  t = o_93(t);
  t = fclose_0_0(t);
  t = w_44;
  return(t);
}
ATerm t_4 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm e_27 = NULL;
  t = SSL_write_term_to_stream_baf(o_44, p_44);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_27);
  return(t);
}
ATerm z_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_Stream_1))
        {
          v_18 = ATgetArgument(v_8, 0);
        }
      else
        _fail(t);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(v_18, w_18, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if(match_cons(w_8, sym_Stream_1))
        {
          k_19 = ATgetArgument(w_8, 0);
        }
      else
        _fail(t);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(k_19, l_19, t);
  h_19 = t;
  t = term_p_7;
  i_19 = t;
  t = h_19;
  if(match_cons(t, sym_Stream_1))
    {
      j_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_7, h_19);
  t = r_4(i_19, j_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL,n_27 = NULL,u_27 = NULL,v_27 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,q_29 = NULL,r_29 = NULL,h_4 = NULL,d_4 = NULL;
  m_27 = t;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_27);
  d_28 = t;
  t = e_28;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_27 != NULL) && (l_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(x_1, t);
        ;
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = term_z_8;
        l_27 = t;
      }
    g_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, g_28, f_28);
    d_4 = t;
    t = SSLsetAnnotations(d_4, d_28);
    t = m_27;
    if(match_cons(t, sym__2))
      {
        u_27 = ATgetArgument(t, 0);
        v_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_27);
    n_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATmakeAppl(sym__2, not_null(l_27), v_27));
    h_4 = t;
    t = SSLsetAnnotations(h_4, n_27);
    c_28 = t;
    if(match_cons(t, sym__2))
      {
        q_29 = ATgetArgument(t, 0);
        r_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm a_9 = t;
      int b_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,k_4 = NULL;
          t = SSLgetAnnotations(c_28);
          o_18 = t;
          t = q_29;
          t = fetch_1_0(z_1, t);
          r_18 = t;
          t = r_29;
          if(match_cons(t, sym__2))
            {
              t_18 = ATgetArgument(t, 0);
              u_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_4(a_2, t_18, u_18, t);
          s_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, r_18, s_18);
          k_4 = t;
          t = SSLsetAnnotations(k_4, o_18);
          ;
          LocalPopChoice(b_9);
        }
      else
        {
          t = a_9;
          {
            ATerm b_19 = NULL,e_19 = NULL,f_19 = NULL,g_19 = NULL,p_4 = NULL;
            t = SSLgetAnnotations(c_28);
            b_19 = t;
            t = r_29;
            if(match_cons(t, sym__2))
              {
                f_19 = ATgetArgument(t, 0);
                g_19 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_4(b_2, f_19, g_19, t);
            e_19 = t;
            t = (ATerm) ATmakeAppl(sym__2, q_29, e_19);
            p_4 = t;
            t = SSLsetAnnotations(p_4, b_19);
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
ATerm apply_strategy_1_0 (ATerm q_96 (ATerm), ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL;
  y_29 = t;
  t = dtime_0_0(t);
  t = y_29;
  t = q_96(t);
  x_29 = t;
  t = dtime_0_0(t);
  u_29 = t;
  t = x_29;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_29), (ATerm) ATmakeAppl(sym_Runtime_1, u_29)), w_29);
  return(t);
}
ATerm m_30 (ATerm g_30, ATerm t)
{
  t = SSL_fclose(g_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm j_30 = NULL,k_30 = NULL;
  k_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_30 = ATgetArgument(t, 0);
      {
        ATerm c_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(j_30);
            ;
            LocalPopChoice(d_9);
          }
        else
          {
            t = c_9;
            t = m_30(k_30, t);
          }
      }
    }
  else
    {
      t = m_30(k_30, t);
    }
  return(t);
}
ATerm v_4 (ATerm u_44, ATerm t)
{
  t = SSL_read_term_from_stream(u_44);
  return(t);
}
ATerm w_4 (ATerm g_41, ATerm h_41, ATerm t)
{
  ATerm n_30 = NULL;
  t = SSL_fopen(g_41, h_41);
  n_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_30 = NULL;
  t = SSL_stdin_stream();
  o_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_stdout_stream();
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_30 = NULL;
  t = SSL_stderr_stream();
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_30);
  return(t);
}
ATerm y_31 (ATerm x_30, ATerm t)
{
  ATerm y_30 = NULL;
  t = SSL_explode_term(x_30);
  if(match_cons(t, sym__2))
    {
      ATerm e_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) e_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_9 = ATgetArgument(t, 1);
        if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
          {
            y_30 = ATgetFirst((ATermList) h_9);
            {
              ATerm i_9 = (ATerm) ATgetNext((ATermList) h_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = y_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = y_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = y_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = y_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm z_31 (ATerm b_31, ATerm c_31, ATerm d_31, ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,j_31 = NULL,h_5 = NULL;
  t = SSLgetAnnotations(d_31);
  g_31 = t;
  t = b_31;
  if(match_cons(t, sym_Path_1))
    {
      j_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_31, c_31);
  h_5 = t;
  t = SSLsetAnnotations(h_5, g_31);
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(e_31, f_31, t);
  return(t);
}
ATerm a_32 (ATerm l_31, ATerm m_31, ATerm n_31, ATerm t)
{
  ATerm o_31 = NULL,p_31 = NULL,q_31 = NULL,t_31 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(n_31);
  q_31 = t;
  t = SSL_is_string(l_31);
  t_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_31, m_31);
  m_5 = t;
  t = SSLsetAnnotations(m_5, q_31);
  if(match_cons(t, sym__2))
    {
      o_31 = ATgetArgument(t, 0);
      p_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(o_31, p_31, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = y_31(v_31, t);
            ;
            LocalPopChoice(k_9);
          }
        else
          {
            t = j_9;
            {
              ATerm l_9 = t;
              int m_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_31(w_31, x_31, v_31, t);
                  ;
                  LocalPopChoice(m_9);
                }
              else
                {
                  t = l_9;
                  t = a_32(w_31, x_31, v_31, t);
                }
            }
          }
      }
    }
  else
    {
      t = y_31(v_31, t);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_n_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm b_32 = NULL,c_32 = NULL,d_32 = NULL;
  ATerm o_9 = t;
  int p_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_32 = NULL;
      e_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_32, term_q_9);
      t = x_4(t);
      ;
      LocalPopChoice(p_9);
    }
  else
    {
      t = o_9;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  c_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(d_32, t);
  b_32 = t;
  t = c_32;
  t = fclose_0_0(t);
  t = b_32;
  return(t);
}
ATerm fetch_1_0 (ATerm b_81 (ATerm), ATerm t)
{
  ATerm c_33 (ATerm t)
  {
    ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
    z_32 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_33 = ATgetFirst((ATermList) t);
        b_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_19 = NULL,a_20 = NULL,q_5 = NULL;
          t = SSLgetAnnotations(z_32);
          x_19 = t;
          t = a_33;
          t = b_81(t);
          a_20 = t;
          t = (ATerm) ATinsert(CheckATermList(b_33), a_20);
          q_5 = t;
          t = SSLsetAnnotations(q_5, x_19);
          ;
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm i_20 = NULL,l_20 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(z_32);
            i_20 = t;
            t = b_33;
            t = c_33(t);
            l_20 = t;
            t = (ATerm) ATinsert(CheckATermList(l_20), a_33);
            s_5 = t;
            t = SSLsetAnnotations(s_5, i_20);
          }
        }
    }
    return(t);
  }
  t = c_33(t);
  return(t);
}
ATerm q_4 (ATerm u_35, ATerm v_35, ATerm t)
{
  t = SSL_strcat(u_35, v_35);
  return(t);
}
ATerm debug_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL;
  f_33 = t;
  t = m_93(t);
  g_33 = t;
  t = term_e_5;
  h_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, f_33), g_33);
  i_33 = t;
  t = SSL_printnl(h_33, i_33);
  t = f_33;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_v_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_33 = NULL;
      p_33 = t;
      t = SSL_is_string(p_33);
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
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL;
              v_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  w_33 = ATgetArgument(t, 0);
                  t = w_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      w_33 = ATgetArgument(t, 0);
                      t = w_33;
                      {
                        ATerm a_10 = t;
                        int b_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(b_10);
                          }
                        else
                          {
                            t = a_10;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm b_34 = NULL,c_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          w_33 = ATgetArgument(t, 0);
                          x_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = w_33;
                      t = eval_config_0_0(t);
                      b_34 = t;
                      t = x_33;
                      t = eval_config_0_0(t);
                      c_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, b_34, c_34);
                      t = q_4(b_34, c_34, t);
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
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  t = term_c_10;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_10, g_34);
  t = a_5(h_34, g_34, t);
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_34 = NULL,j_34 = NULL;
        t = eval_config_0_0(t);
        i_34 = t;
        t = term_c_10;
        j_34 = t;
        t = SSL_table_put(j_34, g_34, i_34);
        t = i_34;
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm z_94 (ATerm), ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  {
    ATerm f_10 = t;
    int g_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        p_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_34, term_i_10);
        t = geq_0_0(t);
        t = n_34;
        t = z_94(t);
        ;
        LocalPopChoice(g_10);
      }
    else
      {
        t = f_10;
        t = n_34;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm s_34 = NULL;
  s_34 = t;
  if(match_string(t, "-k"))
    {
      t = s_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_34;
    }
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  t = SSL_string_to_int(t_34);
  u_34 = t;
  t = term_j_10;
  v_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_10, u_34);
  t = d_5(v_34, u_34, t);
  t = t_34;
  return(t);
}
ATerm h_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, g_2, h_2, t);
  return(t);
}
ATerm i_2 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  if(match_string(t, "-S"))
    {
      t = x_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_34;
    }
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm y_34 = NULL,z_34 = NULL;
  t = term_h_10;
  y_34 = t;
  t = term_l_10;
  z_34 = t;
  t = term_m_10;
  t = d_5(y_34, z_34, t);
  t = term_o_10;
  return(t);
}
ATerm k_2 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_2 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  t = SSL_string_to_int(a_35);
  b_35 = t;
  t = term_h_10;
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_10, b_35);
  t = d_5(c_35, b_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_35);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_q_10;
  return(t);
}
ATerm t_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm d_35 = NULL,e_35 = NULL;
  t = term_r_10;
  d_35 = t;
  t = term_s_2;
  e_35 = t;
  t = term_s_10;
  t = d_5(d_35, e_35, t);
  t = term_t_10;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_v_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm w_10 = t;
  int x_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, j_2, k_2, t);
      ;
      LocalPopChoice(x_10);
    }
  else
    {
      t = w_10;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            t = Option_3_0(t_2, x_2, z_2, t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm v_45, ATerm w_45, ATerm t)
{
  ATerm f_35 = NULL;
  t = term_c_10;
  f_35 = t;
  t = SSL_table_put(f_35, v_45, w_45);
  t = (ATerm) ATmakeAppl(sym__3, term_c_10, v_45, w_45);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
      t = term_s_2;
      t = h_0(t);
      k_35 = t;
      t = term_b_11;
      l_35 = t;
      t = term_c_11;
      m_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_c_11, k_35);
      t = b_5(l_35, m_35, k_35, t);
      _fail(t);
    }
  else
    {
      ATerm p_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_35 = ATgetFirst((ATermList) t);
          j_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_35;
      t = d_0(t);
      t = term_s_2;
      t = g_0(t);
      p_35 = t;
      t = (ATerm) ATinsert(CheckATermList(j_35), p_35);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm r_35 = NULL;
  r_35 = t;
  if(match_string(t, "-o"))
    {
      t = r_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = r_35;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  s_35 = t;
  t = term_d_11;
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, s_35);
  t = d_5(t_35, s_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, s_35);
  return(t);
}
ATerm d_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, d_3, t);
  return(t);
}
ATerm b_5 (ATerm t_50, ATerm u_50, ATerm s_50, ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
  {
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_11 = ATgetArgument(t, 0);
            ATerm i_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_50, u_50);
        t = a_5(t_50, u_50, t);
        ;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATempty;
      }
    y_35 = t;
    t = (ATerm) ATinsert(CheckATermList(y_35), s_50);
    z_35 = t;
    t = SSL_table_put(t_50, u_50, z_35);
    t = x_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL,j_36 = NULL,k_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
      t = term_s_2;
      t = m_0(t);
      l_36 = t;
      t = term_b_11;
      m_36 = t;
      t = term_c_11;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_b_11, term_c_11, l_36);
      t = b_5(m_36, n_36, l_36, t);
      _fail(t);
    }
  else
    {
      ATerm r_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_36 = ATgetFirst((ATermList) t);
          i_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          k_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_36;
      t = k_0(t);
      t = j_36;
      t = l_0(t);
      r_36 = t;
      t = (ATerm) ATinsert(CheckATermList(k_36), r_36);
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  if(match_string(t, "-i"))
    {
      t = t_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_36;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t = term_j_11;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_11, u_36);
  t = d_5(v_36, u_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_36);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_3, f_3, g_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_2;
  t = whoami_0_0(t);
  w_36 = t;
  t = term_e_5;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_11), w_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = term_i_5;
  x_36 = t;
  t = SSL_exit(x_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_m_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_4 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_38, f_38);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = SSL_addr(e_38, f_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm u_86 (ATerm), ATerm v_86 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL,d_37 = NULL;
  b_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_37;
      t = u_86(t);
    }
  else
    {
      ATerm g_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_37 = ATgetFirst((ATermList) t);
          d_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_37;
      t = foldr_2_0(u_86, v_86, t);
      g_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_37, g_37);
      t = v_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm h_3 (ATerm t)
{
  t = term_l_10;
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(d_21, e_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm j_37 = NULL,y_20 = NULL,z_20 = NULL;
  t = times_0_0(t);
  z_20 = t;
  t = SSL_explode_term(z_20);
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_20;
  t = foldr_2_0(h_3, j_3, t);
  j_37 = t;
  t = SSL_TicksToSeconds(j_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_37;
        if((v_37 != t))
          {
            _fail(t);
          }
        t = u_37;
        ;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(v_37, w_37);
              ;
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              t = SSL_gtr(v_37, w_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, v_37, w_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm a_38 = NULL;
  a_38 = t;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_38 = NULL;
        t = term_h_10;
        t = get_config_0_0(t);
        c_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, c_38, term_i_5);
        t = geq_0_0(t);
        t = a_38;
        t = y_94(t);
        ;
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = a_38;
      }
  }
  return(t);
}
ATerm k_3 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = run_time_0_0(t);
  g_38 = t;
  t = term_s_2;
  t = whoami_0_0(t);
  h_38 = t;
  t = term_e_5;
  j_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_11), g_38), term_x_11), h_38);
  k_38 = t;
  t = SSL_printnl(j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_11), g_38), term_x_11), h_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(k_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_l_10;
  l_38 = t;
  t = SSL_exit(l_38);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm t_38 = NULL,u_38 = NULL;
  u_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = u_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          t_38 = ATgetArgument(t, 0);
          {
            ATerm x_21 = NULL,w_5 = NULL;
            t = SSLgetAnnotations(u_38);
            x_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, t_38);
            w_5 = t;
            t = SSLsetAnnotations(w_5, x_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = u_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm o_97 (ATerm), ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = fetch_1_0(l_3, t);
    }
  t = o_97(t);
  return(t);
}
ATerm map_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm l_39 (ATerm t)
  {
    ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
    h_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_39;
      }
    else
      {
        ATerm s_22 = NULL,z_22 = NULL,f_23 = NULL,b_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_39 = ATgetFirst((ATermList) t);
            j_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_39);
        s_22 = t;
        t = i_39;
        t = r_80(t);
        z_22 = t;
        t = j_39;
        t = l_39(t);
        f_23 = t;
        t = (ATerm) ATinsert(CheckATermList(f_23), z_22);
        b_6 = t;
        t = SSLsetAnnotations(b_6, s_22);
      }
    return(t);
  }
  t = l_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_39 = ATgetFirst((ATermList) t);
      p_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_39 = NULL,u_39 = NULL;
        ATerm m_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_39)), not_null(u_39));
          return(t);
        }
        t = p_39;
        t = j_0(t);
        if(((t_39 != NULL) && (t_39 != t)))
          _fail(t);
        else
          t_39 = t;
        t = o_39;
        t = i_0(t);
        if(((u_39 != NULL) && (u_39 != t)))
          _fail(t);
        else
          u_39 = t;
        t = p_39;
        t = reverse_acc_2_0(i_0, m_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_2;
      t = j_0(t);
    }
  return(t);
}
ATerm a_5 (ATerm k_52, ATerm l_52, ATerm t)
{
  t = SSL_table_get(k_52, l_52);
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,e_6 = NULL;
  a_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      z_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_40);
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, z_39);
  e_6 = t;
  t = SSLsetAnnotations(e_6, y_39);
  return(t);
}
ATerm o_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_40), term_c_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_39 = NULL,x_39 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = fetch_1_0(n_3, t);
    }
  t = term_f_12;
  t = echo_0_0(t);
  t = term_b_11;
  w_39 = t;
  t = term_c_11;
  x_39 = t;
  t = term_g_12;
  t = a_5(w_39, x_39, t);
  t = reverse_acc_2_0(_id, o_3, t);
  t = map_1_0(p_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm j_12 = ATgetFirst((ATermList) t);
                ATerm k_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_40;
          }
        ;
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = (ATerm) ATinsert(ATempty, e_40);
      }
    f_40 = t;
    t = term_z_8;
    g_40 = t;
    t = SSL_printnl(g_40, f_40);
    t = e_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_m_11;
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
  ATerm k_40 = NULL,l_40 = NULL;
  t = term_l_12;
  k_40 = t;
  t = term_s_2;
  l_40 = t;
  t = term_m_12;
  t = d_5(k_40, l_40, t);
  return(t);
}
ATerm s_3 (ATerm t)
{
  t = term_n_12;
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
  ATerm m_40 = NULL,n_40 = NULL,o_40 = NULL,p_40 = NULL;
  t = term_l_12;
  o_40 = t;
  t = term_s_2;
  p_40 = t;
  t = term_m_12;
  t = d_5(o_40, p_40, t);
  t = term_o_12;
  m_40 = t;
  t = term_s_2;
  n_40 = t;
  t = term_p_12;
  t = d_5(m_40, n_40, t);
  t = term_q_12;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_r_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_3, r_3, s_3, t);
      ;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      t = Option_3_0(t_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm a_60 (ATerm), ATerm b_60 (ATerm), ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,h_6 = NULL;
  v_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_40 = ATgetFirst((ATermList) t);
      s_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_40);
  q_40 = t;
  t = r_40;
  t = a_60(t);
  t_40 = t;
  t = s_40;
  t = b_60(t);
  u_40 = t;
  t = (ATerm) ATinsert(CheckATermList(u_40), t_40);
  h_6 = t;
  t = SSLsetAnnotations(h_6, q_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm r_99 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,l_41 = NULL,m_41 = NULL,m_6 = NULL;
  a_41 = t;
  {
    ATerm u_12 = t;
    int v_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_12;
        t = r_99(t);
        ;
        LocalPopChoice(v_12);
      }
    else
      {
        t = u_12;
      }
    t = a_41;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_41 = ATgetFirst((ATermList) t);
        d_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(a_41);
    b_41 = t;
    t = term_m_11;
    m_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_m_11, c_41);
    t = d_5(m_41, c_41, t);
    t = d_41;
    {
      ATerm w_41 (ATerm t)
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_12 = t;
            int a_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_41 = NULL;
                p_41 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_41;
                ;
                LocalPopChoice(a_13);
              }
            else
              {
                t = z_12;
                t = r_99(t);
                t = Cons_2_0(_id, w_41, t);
              }
            ;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
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
      l_41 = t;
      t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Program_1, c_41));
      m_6 = t;
      t = SSLsetAnnotations(m_6, b_41);
    }
  }
  return(t);
}
ATerm x_3 (ATerm t)
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
ATerm y_3 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  t = term_b_12;
  j_42 = t;
  t = term_s_2;
  k_42 = t;
  t = term_b_13;
  t = d_5(j_42, k_42, t);
  t = term_c_13;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm q_99 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  d_42 = t;
  t = term_b_11;
  f_42 = t;
  t = term_c_11;
  g_42 = t;
  t = (ATerm) ATempty;
  h_42 = t;
  t = SSL_table_put(f_42, g_42, h_42);
  t = d_42;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm i_13 = t;
      int j_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_99(t);
          ;
          LocalPopChoice(j_13);
        }
      else
        {
          t = i_13;
          {
            ATerm k_13 = t;
            int n_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_3, y_3, z_3, t);
                ;
                LocalPopChoice(n_13);
              }
            else
              {
                t = k_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
    {
      ATerm o_13 = t;
      int p_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_42 = NULL;
          r_42 = t;
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_23 = NULL;
                t = r_42;
                {
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_b_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
                      t = fetch_1_0(a_4, t);
                    }
                  t = r_42;
                  t = default_system_usage_0_0(t);
                  t = term_l_10;
                  s_23 = t;
                  t = SSL_exit(s_23);
                }
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                {
                  ATerm y_23 = NULL;
                  t = term_l_12;
                  t = get_config_0_0(t);
                  t = r_42;
                  t = default_system_about_0_0(t);
                  t = term_l_10;
                  y_23 = t;
                  t = SSL_exit(y_23);
                }
              }
          }
          ;
          LocalPopChoice(p_13);
        }
      else
        {
          t = o_13;
          {
            ATerm w_13 = t;
            int x_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
                ATerm b_4 (ATerm t)
                {
                  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,o_6 = NULL;
                  x_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      w_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(x_42);
                  v_42 = t;
                  t = w_42;
                  if(((b_42 != NULL) && (b_42 != t)))
                    _fail(t);
                  else
                    b_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, w_42);
                  o_6 = t;
                  t = SSLsetAnnotations(o_6, v_42);
                  return(t);
                }
                t = fetch_1_0(b_4, t);
                t = term_e_5;
                t_42 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), term_y_13);
                u_42 = t;
                t = SSL_printnl(t_42, u_42);
                t = (ATerm) ATmakeAppl(sym__2, term_e_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), term_y_13));
                t = default_system_usage_0_0(t);
                t = term_i_5;
                s_42 = t;
                t = SSL_exit(s_42);
                ;
                LocalPopChoice(x_13);
              }
            else
              {
                t = w_13;
              }
          }
        }
      c_42 = t;
      t = term_b_11;
      e_42 = t;
      t = SSL_table_destroy(e_42);
      t = c_42;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm q_97 (ATerm), ATerm r_97 (ATerm), ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  t = parse_options_1_0(q_97, t);
  c_43 = t;
  t = term_z_13;
  f_43 = t;
  t = SSL_table_create(f_43);
  t = term_z_13;
  d_43 = t;
  t = term_a_14;
  e_43 = t;
  t = SSL_table_put(d_43, e_43, c_43);
  t = c_43;
  t = s_97(t);
  {
    ATerm b_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(r_97, t);
        ;
        LocalPopChoice(c_14);
      }
    else
      {
        t = b_14;
        {
          ATerm d_14 = t;
          int e_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = t_97(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(e_14);
            }
          else
            {
              t = d_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = if_verbose2_1_0(m_4, t);
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
  ATerm g_43 = NULL,h_43 = NULL;
  t = term_f_14;
  g_43 = t;
  t = term_s_2;
  h_43 = t;
  t = term_g_14;
  t = d_5(g_43, h_43, t);
  t = term_j_14;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_k_14;
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  i_43 = t;
  t = term_m_11;
  t = get_config_0_0(t);
  j_43 = t;
  t = term_e_5;
  k_43 = t;
  t = (ATerm) ATinsert(ATempty, j_43);
  l_43 = t;
  t = SSL_printnl(k_43, l_43);
  t = i_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm z_96 (ATerm), ATerm a_97 (ATerm), ATerm b_97 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_97(t);
        ;
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        {
          ATerm n_14 = t;
          int o_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(o_14);
            }
          else
            {
              t = n_14;
              {
                ATerm p_14 = t;
                int q_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(q_14);
                  }
                else
                  {
                    t = p_14;
                    {
                      ATerm r_14 = t;
                      int s_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(i_4, j_4, l_4, t);
                          ;
                          LocalPopChoice(s_14);
                        }
                      else
                        {
                          t = r_14;
                          {
                            ATerm t_14 = t;
                            int u_14 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(u_14);
                              }
                            else
                              {
                                t = t_14;
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
  ATerm g_4 (ATerm t)
  {
    ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
    n_43 = t;
    {
      ATerm v_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((m_43 != NULL) && (m_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  m_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(o_4, t);
          ;
          LocalPopChoice(w_14);
        }
      else
        {
          t = v_14;
          t = term_x_14;
          m_43 = t;
        }
      t = not_null(m_43);
      t = ReadFromFile_0_0(t);
      o_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_43, o_43);
      t = apply_strategy_1_0(z_96, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_4, b_97, f_4, g_4, t);
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,r_6 = NULL;
  u_43 = t;
  if(match_cons(t, sym__2))
    {
      r_43 = ATgetArgument(t, 0);
      s_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_43);
  q_43 = t;
  t = s_43;
  t = topdown_1_0(c_5, t);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_43, t_43);
  r_6 = t;
  t = SSLsetAnnotations(r_6, q_43);
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm y_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(a_15);
      }
    else
      {
        t = y_14;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(z_4, _fail, default_usage_0_0, t);
  return(t);
}
