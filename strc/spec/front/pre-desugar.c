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
ATerm term_d_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_g_13;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_w_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_r_6;
ATerm term_c_5;
ATerm term_z_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_s_2;
void init_constant_terms (void)
{
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_5));
  term_c_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_6);
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Op_2, term_v_6, (ATerm) ATempty);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_v_6);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Call_2, term_m_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Call_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_o_10);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_o_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_s_2);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_c_11, term_f_11);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_s_2);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_s_2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__2, term_d_12, term_s_2);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_s_2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
ATerm default_usage_0_0 (ATerm);
ATerm at_last_1_0 (ATerm l_82 (ATerm), ATerm);
ATerm last_0_0 (ATerm);
ATerm b_0 (ATerm);
ATerm unquote_chars_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm);
ATerm o_0 (ATerm);
ATerm p_0 (ATerm);
ATerm s_0 (ATerm);
ATerm u_0 (ATerm);
ATerm v_0 (ATerm);
ATerm d_1 (ATerm);
ATerm DesugarOnce_0_0 (ATerm);
ATerm o_26 (ATerm m_16, ATerm n_16, ATerm);
ATerm p_26 (ATerm z_16, ATerm a_17, ATerm);
ATerm h_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm n_1 (ATerm);
ATerm o_1 (ATerm);
ATerm s_1 (ATerm);
ATerm u_1 (ATerm);
ATerm v_1 (ATerm);
ATerm Desugar_0_0 (ATerm);
ATerm repeat_1_0 (ATerm v_74 (ATerm), ATerm);
ATerm topdown_1_0 (ATerm t_75 (ATerm), ATerm);
ATerm r_4 (ATerm p_41, ATerm q_41, ATerm);
ATerm s_4 (ATerm d_45, ATerm e_45, ATerm);
ATerm u_4 (ATerm h_94 (ATerm), ATerm m_430, ATerm h_45, ATerm);
ATerm t_4 (ATerm z_44, ATerm a_45, ATerm);
ATerm z_1 (ATerm);
ATerm a_2 (ATerm);
ATerm b_2 (ATerm);
ATerm output_file_0_0 (ATerm);
ATerm dtime_0_0 (ATerm);
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm);
ATerm o_30 (ATerm i_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm v_4 (ATerm f_45, ATerm);
ATerm w_4 (ATerm r_41, ATerm s_41, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm a_32 (ATerm y_30, ATerm);
ATerm b_32 (ATerm c_31, ATerm d_31, ATerm f_31, ATerm);
ATerm c_32 (ATerm n_31, ATerm o_31, ATerm p_31, ATerm);
ATerm x_4 (ATerm);
ATerm c_2 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm q_4 (ATerm e_36, ATerm f_36, ATerm);
ATerm debug_1_0 (ATerm f_94 (ATerm), ATerm);
ATerm d_2 (ATerm);
ATerm e_2 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm s_95 (ATerm), ATerm);
ATerm f_2 (ATerm);
ATerm h_2 (ATerm);
ATerm i_2 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm j_2 (ATerm);
ATerm k_2 (ATerm);
ATerm n_2 (ATerm);
ATerm o_2 (ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm x_2 (ATerm);
ATerm z_2 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm d_5 (ATerm g_46, ATerm h_46, ATerm);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm b_5 (ATerm e_51, ATerm f_51, ATerm d_51, ATerm);
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm);
ATerm d_3 (ATerm);
ATerm e_3 (ATerm);
ATerm f_3 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm y_4 (ATerm p_38, ATerm q_38, ATerm);
ATerm foldr_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm r_95 (ATerm), ATerm);
ATerm i_3 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm a_5 (ATerm v_52, ATerm w_52, ATerm);
ATerm l_3 (ATerm);
ATerm m_3 (ATerm);
ATerm n_3 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm r_3 (ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm);
ATerm x_3 (ATerm);
ATerm y_3 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm);
ATerm d_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,f_0 = NULL,l_0 = NULL,m_0 = NULL,n_0 = NULL;
  a_0 = t;
  t = term_s_2;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_o_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_4), f_0), term_p_4);
  n_0 = t;
  t = SSL_printnl(m_0, n_0);
  t = term_c_5;
  l_0 = t;
  t = SSL_exit(l_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm l_82 (ATerm), ATerm t)
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
      ATerm g_5 = t;
      int h_5 = stack_ptr;
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
          t = l_82(t);
          ;
          LocalPopChoice(h_5);
        }
      else
        {
          t = g_5;
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
      ATerm i_5 = ATgetFirst((ATermList) t);
      y_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = y_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_2 = ATgetFirst((ATermList) t);
      {
        ATerm j_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_2;
  t = t_90(t);
  t = u_2;
  t = last_0_0(t);
  t = u_90(t);
  t = u_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_5 = ATgetFirst((ATermList) t);
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
  ATerm b_13 = NULL,c_13 = NULL,k_13 = NULL,l_13 = NULL,p_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_Real_1))
    {
      l_13 = ATgetArgument(t, 0);
      {
        ATerm g_2 = NULL;
        t = SSL_string_to_real(l_13);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, g_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          l_13 = ATgetArgument(t, 0);
          {
            ATerm t_2 = NULL;
            t = SSL_string_to_int(l_13);
            t_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, t_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              l_13 = ATgetArgument(t, 0);
              p_13 = ATgetArgument(t, 1);
              c_13 = ATgetArgument(t, 2);
              t = SSL_is_string(c_13);
              t = (ATerm) ATmakeAppl(sym_Con_3, l_13, p_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_13), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  l_13 = ATgetArgument(t, 0);
                  p_13 = ATgetArgument(t, 1);
                  c_13 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = l_13;
                    {
                      ATerm m_5 = t;
                      int r_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(l_13);
                          t = unquote_chars_2_0(o_0, p_0, t);
                          t_3 = t;
                          t = SSL_implode_string(t_3);
                          ;
                          LocalPopChoice(r_5);
                        }
                      else
                        {
                          t = m_5;
                        }
                      s_3 = t;
                      t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, p_13, c_13);
                    }
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      p_13 = ATgetArgument(t, 1);
                      {
                        ATerm j_4 = NULL;
                        t = l_13;
                        {
                          ATerm t_5 = t;
                          int u_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_4 = NULL;
                              t = SSL_explode_string(l_13);
                              t = unquote_chars_2_0(s_0, u_0, t);
                              l_4 = t;
                              t = SSL_implode_string(l_4);
                              ;
                              LocalPopChoice(u_5);
                            }
                          else
                            {
                              t = t_5;
                            }
                          j_4 = t;
                          t = (ATerm) ATmakeAppl(sym_PrimT_3, j_4, (ATerm)ATempty, p_13);
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          l_13 = ATgetArgument(t, 0);
                          {
                            ATerm l_5 = NULL;
                            t = l_13;
                            {
                              ATerm v_5 = t;
                              int w_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm p_5 = NULL;
                                  t = SSL_explode_string(l_13);
                                  t = unquote_chars_2_0(v_0, d_1, t);
                                  p_5 = t;
                                  t = SSL_implode_string(p_5);
                                  ;
                                  LocalPopChoice(w_5);
                                }
                              else
                                {
                                  t = v_5;
                                }
                              l_5 = t;
                              t = (ATerm) ATmakeAppl(sym_PrimT_3, l_5, (ATerm)ATempty, (ATerm) ATempty);
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              l_13 = ATgetArgument(t, 0);
                              {
                                ATerm f_6 = NULL,j_6 = NULL,k_6 = NULL,w_0 = NULL;
                                t = SSLgetAnnotations(k_13);
                                f_6 = t;
                                t = SSL_explode_string(l_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm x_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(x_5) != AT_INT) || (ATgetInt((ATermInt) x_5) != 39)))
                                      _fail(t);
                                    j_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(j_6);
                                k_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, k_6);
                                w_0 = t;
                                t = SSLsetAnnotations(w_0, f_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  l_13 = ATgetArgument(t, 0);
                                  p_13 = ATgetArgument(t, 1);
                                  c_13 = ATgetArgument(t, 2);
                                  b_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm i_7 = NULL,v_7 = NULL,w_7 = NULL,x_0 = NULL;
                                    t = SSLgetAnnotations(k_13);
                                    i_7 = t;
                                    t = SSL_explode_string(l_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm y_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                          _fail(t);
                                        v_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(v_7);
                                    w_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_7, p_13, c_13, b_13);
                                    x_0 = t;
                                    t = SSLsetAnnotations(x_0, i_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      l_13 = ATgetArgument(t, 0);
                                      p_13 = ATgetArgument(t, 1);
                                      c_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm x_8 = NULL,k_9 = NULL,l_9 = NULL,y_0 = NULL;
                                        t = SSLgetAnnotations(k_13);
                                        x_8 = t;
                                        t = SSL_explode_string(l_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm z_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                              _fail(t);
                                            k_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(k_9);
                                        l_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, l_9, p_13, c_13);
                                        y_0 = t;
                                        t = SSLsetAnnotations(y_0, x_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          l_13 = ATgetArgument(t, 0);
                                          p_13 = ATgetArgument(t, 1);
                                          c_13 = ATgetArgument(t, 2);
                                          b_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm r_10 = NULL,d_11 = NULL,e_11 = NULL,z_0 = NULL;
                                            t = SSLgetAnnotations(k_13);
                                            r_10 = t;
                                            t = SSL_explode_string(l_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm a_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(a_6) != AT_INT) || (ATgetInt((ATermInt) a_6) != 39)))
                                                  _fail(t);
                                                d_11 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(d_11);
                                            e_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_11, p_13, c_13, b_13);
                                            z_0 = t;
                                            t = SSLsetAnnotations(z_0, r_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              l_13 = ATgetArgument(t, 0);
                                              p_13 = ATgetArgument(t, 1);
                                              c_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm d_13 = NULL,h_13 = NULL,i_13 = NULL,a_1 = NULL;
                                                t = SSLgetAnnotations(k_13);
                                                d_13 = t;
                                                t = SSL_explode_string(l_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm c_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(c_6) != AT_INT) || (ATgetInt((ATermInt) c_6) != 39)))
                                                      _fail(t);
                                                    h_13 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(h_13);
                                                i_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, i_13, p_13, c_13);
                                                a_1 = t;
                                                t = SSLsetAnnotations(a_1, d_13);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  l_13 = ATgetArgument(t, 0);
                                                  p_13 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm v_13 = NULL,e_14 = NULL,f_14 = NULL,b_1 = NULL;
                                                    t = SSLgetAnnotations(k_13);
                                                    v_13 = t;
                                                    t = SSL_explode_string(l_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm e_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(e_6) != AT_INT) || (ATgetInt((ATermInt) e_6) != 39)))
                                                          _fail(t);
                                                        e_14 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(e_14);
                                                    f_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_14, p_13);
                                                    b_1 = t;
                                                    t = SSLsetAnnotations(b_1, v_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      l_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm s_14 = NULL,u_14 = NULL,x_14 = NULL,c_1 = NULL;
                                                        t = SSLgetAnnotations(k_13);
                                                        s_14 = t;
                                                        t = SSL_explode_string(l_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm g_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                                                              _fail(t);
                                                            u_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(u_14);
                                                        x_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, x_14);
                                                        c_1 = t;
                                                        t = SSLsetAnnotations(c_1, s_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          l_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL,e_1 = NULL;
                                                            t = SSLgetAnnotations(k_13);
                                                            g_15 = t;
                                                            t = SSL_explode_string(l_13);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm i_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                                                  _fail(t);
                                                                i_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(i_15);
                                                            j_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, j_15);
                                                            e_1 = t;
                                                            t = SSLsetAnnotations(e_1, g_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              l_13 = ATgetArgument(t, 0);
                                                              p_13 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL,f_1 = NULL;
                                                                t = SSLgetAnnotations(k_13);
                                                                q_15 = t;
                                                                t = SSL_explode_string(l_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm m_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(m_6) != AT_INT) || (ATgetInt((ATermInt) m_6) != 39)))
                                                                      _fail(t);
                                                                    t_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(t_15);
                                                                u_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_15, p_13);
                                                                f_1 = t;
                                                                t = SSLsetAnnotations(f_1, q_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm h_16 = NULL,k_16 = NULL,o_16 = NULL,g_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  l_13 = ATgetArgument(t, 0);
                                                                  p_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(k_13);
                                                              h_16 = t;
                                                              t = SSL_explode_string(l_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm n_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                                                    _fail(t);
                                                                  k_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(k_16);
                                                              o_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, o_16, p_13);
                                                              g_1 = t;
                                                              t = SSLsetAnnotations(g_1, h_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm o_26 (ATerm m_16, ATerm n_16, ATerm t)
{
  t = m_16;
  {
    ATerm p_6 = t;
    if((PushChoice() == 0))
      {
        ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL,v_16 = NULL,e_5 = NULL;
        v_16 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_16 = ATgetFirst((ATermList) t);
            u_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_16);
        s_16 = t;
        t = u_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(u_16), t_16);
        e_5 = t;
        t = SSLsetAnnotations(e_5, s_16);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_6;
      }
    t = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, m_16);
  }
  return(t);
}
ATerm p_26 (ATerm z_16, ATerm a_17, ATerm t)
{
  t = z_16;
  {
    ATerm s_6 = t;
    if((PushChoice() == 0))
      {
        ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL,j_17 = NULL,f_5 = NULL;
        j_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_17 = ATgetFirst((ATermList) t);
            g_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_17);
        e_17 = t;
        t = g_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(g_17), f_17);
        f_5 = t;
        t = SSLsetAnnotations(f_5, e_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_6;
      }
    t = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, z_16);
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
  ATerm k_18 = NULL,l_18 = NULL,y_16 = NULL;
  k_18 = t;
  t = SSL_explode_term(k_18);
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_6 = ATgetArgument(t, 1);
        if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
          {
            l_18 = ATgetFirst((ATermList) z_6);
            {
              ATerm a_7 = (ATerm) ATgetNext((ATermList) z_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_18);
  if(match_cons(t, sym__2))
    {
      ATerm c_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_7 = ATgetArgument(t, 1);
        if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
          {
            ATerm e_7 = ATgetFirst((ATermList) d_7);
            ATerm g_7 = (ATerm) ATgetNext((ATermList) d_7);
            if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
              {
                y_16 = ATgetFirst((ATermList) g_7);
                {
                  ATerm h_7 = (ATerm) ATgetNext((ATermList) g_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, y_16), l_18));
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm j_22 = NULL,k_22 = NULL;
  if(match_cons(t, sym__2))
    {
      j_22 = ATgetArgument(t, 0);
      k_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, k_22), j_22));
  return(t);
}
ATerm n_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm n_22 = NULL,q_22 = NULL;
  if(match_cons(t, sym__2))
    {
      n_22 = ATgetArgument(t, 0);
      q_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, q_22), n_22));
  return(t);
}
ATerm s_1 (ATerm t)
{
  ATerm i_23 = NULL,l_23 = NULL;
  if(match_cons(t, sym__2))
    {
      i_23 = ATgetArgument(t, 0);
      l_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, l_23), i_23));
  return(t);
}
ATerm u_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm p_23 = NULL,q_23 = NULL;
  if(match_cons(t, sym__2))
    {
      p_23 = ATgetArgument(t, 0);
      q_23 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_l_7, (ATerm) ATinsert(ATinsert(ATempty, q_23), p_23));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm l_17 = NULL,s_17 = NULL,t_17 = NULL,y_17 = NULL,z_17 = NULL,b_18 = NULL,d_18 = NULL,e_18 = NULL;
  b_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      d_18 = ATgetArgument(t, 0);
      e_18 = ATgetArgument(t, 1);
      {
        ATerm i_18 = NULL;
        t = e_18;
        t = foldr_2_0(h_1, k_1, t);
        i_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, d_18, i_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          d_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, d_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              d_18 = ATgetArgument(t, 0);
              {
                ATerm k_17 = NULL;
                t = d_18;
                {
                  ATerm o_7 = t;
                  int p_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_q_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_r_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_s_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_t_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_u_7;
                                    }
                                }
                            }
                        }
                      ;
                      LocalPopChoice(p_7);
                    }
                  else
                    {
                      t = o_7;
                      {
                        ATerm n_17 = NULL;
                        t = SSL_explode_string(d_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                              _fail(t);
                            {
                              ATerm y_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
                                {
                                  n_17 = ATgetFirst((ATermList) y_7);
                                  {
                                    ATerm z_7 = (ATerm) ATgetNext((ATermList) y_7);
                                    if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
                                      {
                                        ATerm a_8 = ATgetFirst((ATermList) z_7);
                                        if(((ATgetType(a_8) != AT_INT) || (ATgetInt((ATermInt) a_8) != 39)))
                                          _fail(t);
                                        {
                                          ATerm b_8 = (ATerm) ATgetNext((ATermList) z_7);
                                          if(((ATgetType(b_8) != AT_LIST) || !(ATisEmpty(b_8))))
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
                        t = n_17;
                      }
                    }
                  k_17 = t;
                  t = (ATerm) ATmakeAppl(sym_Int_1, k_17);
                }
              }
            }
          else
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      d_18 = ATgetArgument(t, 0);
                      {
                        ATerm e_8 = ATgetArgument(t, 1);
                      }
                      z_17 = ATgetArgument(t, 2);
                      l_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, d_18, z_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, l_17), (ATerm) ATempty));
                }
              else
                {
                  t = c_8;
                  {
                    ATerm f_8 = t;
                    int g_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            d_18 = ATgetArgument(t, 0);
                            {
                              ATerm h_8 = ATgetArgument(t, 1);
                            }
                            z_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, d_18, z_17, term_k_8);
                      }
                    else
                      {
                        t = f_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            d_18 = ATgetArgument(t, 0);
                            e_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, d_18, e_18, term_k_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                d_18 = ATgetArgument(t, 0);
                                e_18 = ATgetArgument(t, 1);
                                {
                                  ATerm l_1 (ATerm t)
                                  {
                                    t = e_18;
                                    return(t);
                                  }
                                  t = d_18;
                                  t = foldr_2_0(l_1, m_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    d_18 = ATgetArgument(t, 0);
                                    t = d_18;
                                    t = foldr_2_0(n_1, o_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        d_18 = ATgetArgument(t, 0);
                                        t = d_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_17 = ATgetFirst((ATermList) t);
                                            t_17 = (ATerm) ATgetNext((ATermList) t);
                                            t = t_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm l_8 = t;
                                                int m_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_26(d_18, b_18, t);
                                                    ;
                                                    LocalPopChoice(m_8);
                                                  }
                                                else
                                                  {
                                                    t = l_8;
                                                    t = s_17;
                                                  }
                                              }
                                            else
                                              {
                                                t = o_26(d_18, b_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_26(d_18, b_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            d_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, d_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                d_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, d_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    d_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, d_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        d_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, d_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            d_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                d_18 = ATgetArgument(t, 0);
                                                                e_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_18), e_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    d_18 = ATgetArgument(t, 0);
                                                                    e_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      ATerm q_1 (ATerm t)
                                                                      {
                                                                        t = e_18;
                                                                        return(t);
                                                                      }
                                                                      t = d_18;
                                                                      t = foldr_2_0(q_1, s_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        d_18 = ATgetArgument(t, 0);
                                                                        t = d_18;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            d_18 = ATgetArgument(t, 0);
                                                                            e_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_u_6, (ATerm) ATinsert(CheckATermList(e_18), d_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                d_18 = ATgetArgument(t, 0);
                                                                                t = d_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_17 = ATgetFirst((ATermList) t);
                                                                                    t_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = t_17;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm n_8 = t;
                                                                                        int o_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_26(d_18, b_18, t);
                                                                                            ;
                                                                                            LocalPopChoice(o_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_8;
                                                                                            t = s_17;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_26(d_18, b_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_26(d_18, b_18, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_p_8;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        d_18 = ATgetArgument(t, 0);
                                                                                        e_18 = ATgetArgument(t, 1);
                                                                                        t = e_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            y_17 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, y_17), d_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            d_18 = ATgetArgument(t, 0);
                                                                                            t = d_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                d_18 = ATgetArgument(t, 0);
                                                                                                e_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, d_18, e_18, term_s_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    d_18 = ATgetArgument(t, 0);
                                                                                                    e_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, d_18, e_18, term_s_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        d_18 = ATgetArgument(t, 0);
                                                                                                        e_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, d_18, (ATerm)ATempty, e_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            d_18 = ATgetArgument(t, 0);
                                                                                                            e_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, e_18, d_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                d_18 = ATgetArgument(t, 0);
                                                                                                                e_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, d_18, e_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    d_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, d_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        d_18 = ATgetArgument(t, 0);
                                                                                                                        e_18 = ATgetArgument(t, 1);
                                                                                                                        z_17 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, d_18, e_18, (ATerm)ATempty, z_17);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            d_18 = ATgetArgument(t, 0);
                                                                                                                            e_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, d_18, (ATerm)ATempty, (ATerm)ATempty, e_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                d_18 = ATgetArgument(t, 0);
                                                                                                                                e_18 = ATgetArgument(t, 1);
                                                                                                                                z_17 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, d_18, e_18, (ATerm)ATempty, z_17);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    d_18 = ATgetArgument(t, 0);
                                                                                                                                    e_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, d_18, (ATerm)ATempty, (ATerm)ATempty, e_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        d_18 = ATgetArgument(t, 0);
                                                                                                                                        e_18 = ATgetArgument(t, 1);
                                                                                                                                        z_17 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, d_18, e_18, (ATerm)ATempty, z_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            d_18 = ATgetArgument(t, 0);
                                                                                                                                            e_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, d_18, (ATerm)ATempty, (ATerm)ATempty, e_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm t_8 = ATgetArgument(t, 0);
                                                                                                                                                e_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, e_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_1_0 (ATerm v_74 (ATerm), ATerm t)
{
  ATerm w_26 (ATerm t)
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_74(t);
        t = w_26(t);
        ;
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm t_75 (ATerm), ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    t = topdown_1_0(t_75, t);
    return(t);
  }
  t = t_75(t);
  t = SRTS_all(w_1, t);
  return(t);
}
ATerm r_4 (ATerm p_41, ATerm q_41, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_fputc(p_41, q_41);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
ATerm s_4 (ATerm d_45, ATerm e_45, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_write_term_to_stream_text(d_45, e_45);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
ATerm u_4 (ATerm h_94 (ATerm), ATerm m_430, ATerm h_45, ATerm t)
{
  ATerm f_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_430, term_w_8);
  t = x_4(t);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_27, h_45);
  t = h_94(t);
  t = fclose_0_0(t);
  t = h_45;
  return(t);
}
ATerm t_4 (ATerm z_44, ATerm a_45, ATerm t)
{
  ATerm g_27 = NULL;
  t = SSL_write_term_to_stream_baf(z_44, a_45);
  g_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_27);
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
  ATerm m_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if(match_cons(y_8, sym_Stream_1))
        {
          m_18 = ATgetArgument(y_8, 0);
        }
      else
        _fail(t);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(m_18, n_18, t);
  return(t);
}
ATerm b_2 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(match_cons(z_8, sym_Stream_1))
        {
          b_19 = ATgetArgument(z_8, 0);
        }
      else
        _fail(t);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(b_19, c_19, t);
  y_18 = t;
  t = term_t_7;
  z_18 = t;
  t = y_18;
  if(match_cons(t, sym_Stream_1))
    {
      a_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_t_7, y_18);
  t = r_4(z_18, a_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_27 = NULL,n_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,z_27 = NULL,a_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL,s_29 = NULL,t_29 = NULL,o_5 = NULL,n_5 = NULL;
  n_27 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_27);
  a_28 = t;
  t = g_28;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 (ATerm t)
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
        t = fetch_1_0(x_1, t);
        ;
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = term_c_9;
        k_27 = t;
      }
    i_28 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_28, h_28);
    n_5 = t;
    t = SSLsetAnnotations(n_5, a_28);
    t = n_27;
    if(match_cons(t, sym__2))
      {
        q_27 = ATgetArgument(t, 0);
        r_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_27);
    p_27 = t;
    t = (ATerm) ATmakeAppl(sym__2, q_27, (ATerm) ATmakeAppl(sym__2, not_null(k_27), r_27));
    o_5 = t;
    t = SSLsetAnnotations(o_5, p_27);
    z_27 = t;
    if(match_cons(t, sym__2))
      {
        s_29 = ATgetArgument(t, 0);
        t_29 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_17 = NULL,x_17 = NULL,a_18 = NULL,c_18 = NULL,h_18 = NULL,q_5 = NULL;
          t = SSLgetAnnotations(z_27);
          u_17 = t;
          t = s_29;
          t = fetch_1_0(z_1, t);
          x_17 = t;
          t = t_29;
          if(match_cons(t, sym__2))
            {
              c_18 = ATgetArgument(t, 0);
              h_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = u_4(a_2, c_18, h_18, t);
          a_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_17, a_18);
          q_5 = t;
          t = SSLsetAnnotations(q_5, u_17);
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          {
            ATerm s_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,s_5 = NULL;
            t = SSLgetAnnotations(z_27);
            s_18 = t;
            t = t_29;
            if(match_cons(t, sym__2))
              {
                w_18 = ATgetArgument(t, 0);
                x_18 = ATgetArgument(t, 1);
              }
            else
              _fail(t);
            t = u_4(b_2, w_18, x_18, t);
            v_18 = t;
            t = (ATerm) ATmakeAppl(sym__2, s_29, v_18);
            s_5 = t;
            t = SSLsetAnnotations(s_5, s_18);
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
ATerm apply_strategy_1_0 (ATerm j_97 (ATerm), ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
  a_30 = t;
  t = dtime_0_0(t);
  t = a_30;
  t = j_97(t);
  z_29 = t;
  t = dtime_0_0(t);
  w_29 = t;
  t = z_29;
  if(match_cons(t, sym__2))
    {
      x_29 = ATgetArgument(t, 0);
      y_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(x_29), (ATerm) ATmakeAppl(sym_Runtime_1, w_29)), y_29);
  return(t);
}
ATerm o_30 (ATerm i_30, ATerm t)
{
  t = SSL_fclose(i_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm l_30 = NULL,m_30 = NULL;
  m_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      l_30 = ATgetArgument(t, 0);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(l_30);
            ;
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = o_30(m_30, t);
          }
      }
    }
  else
    {
      t = o_30(m_30, t);
    }
  return(t);
}
ATerm v_4 (ATerm f_45, ATerm t)
{
  t = SSL_read_term_from_stream(f_45);
  return(t);
}
ATerm w_4 (ATerm r_41, ATerm s_41, ATerm t)
{
  ATerm p_30 = NULL;
  t = SSL_fopen(r_41, s_41);
  p_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_30 = NULL;
  t = SSL_stdin_stream();
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_30 = NULL;
  t = SSL_stdout_stream();
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_30 = NULL;
  t = SSL_stderr_stream();
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_30);
  return(t);
}
ATerm a_32 (ATerm y_30, ATerm t)
{
  ATerm z_30 = NULL;
  t = SSL_explode_term(y_30);
  if(match_cons(t, sym__2))
    {
      ATerm h_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) h_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm i_9 = ATgetArgument(t, 1);
        if(((ATgetType(i_9) == AT_LIST) && !(ATisEmpty(i_9))))
          {
            z_30 = ATgetFirst((ATermList) i_9);
            {
              ATerm j_9 = (ATerm) ATgetNext((ATermList) i_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = z_30;
  if(match_cons(t, sym_stderr_0))
    {
      t = z_30;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = z_30;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = z_30;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm b_32 (ATerm c_31, ATerm d_31, ATerm f_31, ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,l_31 = NULL,b_6 = NULL;
  t = SSLgetAnnotations(f_31);
  i_31 = t;
  t = c_31;
  if(match_cons(t, sym_Path_1))
    {
      l_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_31, d_31);
  b_6 = t;
  t = SSLsetAnnotations(b_6, i_31);
  if(match_cons(t, sym__2))
    {
      g_31 = ATgetArgument(t, 0);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(g_31, h_31, t);
  return(t);
}
ATerm c_32 (ATerm n_31, ATerm o_31, ATerm p_31, ATerm t)
{
  ATerm q_31 = NULL,r_31 = NULL,s_31 = NULL,v_31 = NULL,d_6 = NULL;
  t = SSLgetAnnotations(p_31);
  s_31 = t;
  t = SSL_is_string(n_31);
  v_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_31, o_31);
  d_6 = t;
  t = SSLsetAnnotations(d_6, s_31);
  if(match_cons(t, sym__2))
    {
      q_31 = ATgetArgument(t, 0);
      r_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(q_31, r_31, t);
  return(t);
}
ATerm x_4 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  if(match_cons(t, sym__2))
    {
      y_31 = ATgetArgument(t, 0);
      z_31 = ATgetArgument(t, 1);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = a_32(x_31, t);
            ;
            LocalPopChoice(n_9);
          }
        else
          {
            t = m_9;
            {
              ATerm o_9 = t;
              int p_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = b_32(y_31, z_31, x_31, t);
                  ;
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = c_32(y_31, z_31, x_31, t);
                }
            }
          }
      }
    }
  else
    {
      t = a_32(x_31, t);
    }
  return(t);
}
ATerm c_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL;
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_32 = NULL;
      g_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_32, term_t_9);
      t = x_4(t);
      ;
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  e_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      f_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = v_4(f_32, t);
  d_32 = t;
  t = e_32;
  t = fclose_0_0(t);
  t = d_32;
  return(t);
}
ATerm fetch_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm e_33 (ATerm t)
  {
    ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
    b_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_33 = ATgetFirst((ATermList) t);
        d_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_19 = NULL,r_19 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(b_33);
          o_19 = t;
          t = c_33;
          t = u_81(t);
          r_19 = t;
          t = (ATerm) ATinsert(CheckATermList(d_33), r_19);
          h_6 = t;
          t = SSLsetAnnotations(h_6, o_19);
          ;
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            ATerm z_19 = NULL,c_20 = NULL,l_6 = NULL;
            t = SSLgetAnnotations(b_33);
            z_19 = t;
            t = d_33;
            t = e_33(t);
            c_20 = t;
            t = (ATerm) ATinsert(CheckATermList(c_20), c_33);
            l_6 = t;
            t = SSLsetAnnotations(l_6, z_19);
          }
        }
    }
    return(t);
  }
  t = e_33(t);
  return(t);
}
ATerm q_4 (ATerm e_36, ATerm f_36, ATerm t)
{
  t = SSL_strcat(e_36, f_36);
  return(t);
}
ATerm debug_1_0 (ATerm f_94 (ATerm), ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  h_33 = t;
  t = f_94(t);
  i_33 = t;
  t = term_o_4;
  j_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_33), i_33);
  k_33 = t;
  t = SSL_printnl(j_33, k_33);
  t = h_33;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
    }
  return(t);
}
ATerm e_2 (ATerm t)
{
  t = term_y_9;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_33 = NULL;
      r_33 = t;
      t = SSL_is_string(r_33);
      ;
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_2, t);
            ;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL;
              x_33 = t;
              if(match_cons(t, sym_Path_1))
                {
                  y_33 = ATgetArgument(t, 0);
                  t = y_33;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      y_33 = ATgetArgument(t, 0);
                      t = y_33;
                      {
                        ATerm d_10 = t;
                        int e_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_10);
                          }
                        else
                          {
                            t = d_10;
                            t = debug_1_0(e_2, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm d_34 = NULL,e_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          y_33 = ATgetArgument(t, 0);
                          z_33 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = y_33;
                      t = eval_config_0_0(t);
                      d_34 = t;
                      t = z_33;
                      t = eval_config_0_0(t);
                      e_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, d_34, e_34);
                      t = q_4(d_34, e_34, t);
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
  ATerm i_34 = NULL,j_34 = NULL;
  i_34 = t;
  t = term_f_10;
  j_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, i_34);
  t = a_5(j_34, i_34, t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_34 = NULL,l_34 = NULL;
        t = eval_config_0_0(t);
        k_34 = t;
        t = term_f_10;
        l_34 = t;
        t = SSL_table_put(l_34, i_34, k_34);
        t = k_34;
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_95 (ATerm), ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_34 = NULL;
        t = term_k_10;
        t = get_config_0_0(t);
        r_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_34, term_l_10);
        t = geq_0_0(t);
        t = p_34;
        t = s_95(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = p_34;
      }
  }
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-k"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm h_2 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  t = SSL_string_to_int(v_34);
  w_34 = t;
  t = term_m_10;
  x_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, w_34);
  t = d_5(x_34, w_34, t);
  t = v_34;
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
ATerm j_2 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-S"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
ATerm k_2 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_k_10;
  a_35 = t;
  t = term_o_10;
  b_35 = t;
  t = term_p_10;
  t = d_5(a_35, b_35, t);
  t = term_q_10;
  return(t);
}
ATerm n_2 (ATerm t)
{
  t = term_s_10;
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
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  t = SSL_string_to_int(c_35);
  d_35 = t;
  t = term_k_10;
  e_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, d_35);
  t = d_5(e_35, d_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, c_35);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_u_10;
  f_35 = t;
  t = term_s_2;
  g_35 = t;
  t = term_v_10;
  t = d_5(f_35, g_35, t);
  t = term_w_10;
  return(t);
}
ATerm z_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, k_2, n_2, t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(o_2, p_2, q_2, t);
            ;
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            t = Option_3_0(r_2, x_2, z_2, t);
          }
      }
    }
  return(t);
}
ATerm d_5 (ATerm g_46, ATerm h_46, ATerm t)
{
  ATerm h_35 = NULL;
  t = term_f_10;
  h_35 = t;
  t = SSL_table_put(h_35, g_46, h_46);
  t = (ATerm) ATmakeAppl(sym__3, term_f_10, g_46, h_46);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
      t = term_s_2;
      t = e_0(t);
      m_35 = t;
      t = term_c_11;
      n_35 = t;
      t = term_f_11;
      o_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_f_11, m_35);
      t = b_5(n_35, o_35, m_35, t);
      _fail(t);
    }
  else
    {
      ATerm r_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_35 = ATgetFirst((ATermList) t);
          l_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_35;
      t = c_0(t);
      t = term_s_2;
      t = d_0(t);
      r_35 = t;
      t = (ATerm) ATinsert(CheckATermList(l_35), r_35);
    }
  return(t);
}
ATerm a_3 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  if(match_string(t, "-o"))
    {
      t = t_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_35;
    }
  return(t);
}
ATerm b_3 (ATerm t)
{
  ATerm u_35 = NULL,v_35 = NULL;
  u_35 = t;
  t = term_g_11;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, u_35);
  t = d_5(v_35, u_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_35);
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm b_5 (ATerm e_51, ATerm f_51, ATerm d_51, ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_51, f_51);
  {
    ATerm i_11 = t;
    int j_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm k_11 = ATgetArgument(t, 0);
            ATerm l_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, e_51, f_51);
        t = a_5(e_51, f_51, t);
        ;
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATempty;
      }
    y_35 = t;
    t = (ATerm) ATinsert(CheckATermList(y_35), d_51);
    z_35 = t;
    t = SSL_table_put(e_51, f_51, z_35);
    t = x_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,m_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
      t = term_s_2;
      t = k_0(t);
      n_36 = t;
      t = term_c_11;
      o_36 = t;
      t = term_f_11;
      p_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_11, term_f_11, n_36);
      t = b_5(o_36, p_36, n_36, t);
      _fail(t);
    }
  else
    {
      ATerm t_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_36 = ATgetFirst((ATermList) t);
          j_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_36 = ATgetFirst((ATermList) t);
          m_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_36;
      t = i_0(t);
      t = k_36;
      t = j_0(t);
      t_36 = t;
      t = (ATerm) ATinsert(CheckATermList(m_36), t_36);
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  if(match_string(t, "-i"))
    {
      t = v_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = v_36;
    }
  return(t);
}
ATerm e_3 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  t = term_m_11;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, w_36);
  t = d_5(x_36, w_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_36);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_3, e_3, f_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_s_2;
  t = whoami_0_0(t);
  y_36 = t;
  t = term_o_4;
  a_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_11), y_36);
  b_37 = t;
  t = SSL_printnl(a_37, b_37);
  t = term_c_5;
  z_36 = t;
  t = SSL_exit(z_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  return(t);
}
ATerm y_4 (ATerm p_38, ATerm q_38, ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(p_38, q_38);
      ;
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = SSL_addr(p_38, q_38);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm n_87 (ATerm), ATerm o_87 (ATerm), ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_37;
      t = n_87(t);
    }
  else
    {
      ATerm i_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_37 = ATgetFirst((ATermList) t);
          f_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_37;
      t = foldr_2_0(n_87, o_87, t);
      i_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_37, i_37);
      t = o_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm h_3 (ATerm t)
{
  ATerm t_20 = NULL,u_20 = NULL;
  if(match_cons(t, sym__2))
    {
      t_20 = ATgetArgument(t, 0);
      u_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(t_20, u_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_37 = NULL,p_20 = NULL,q_20 = NULL;
  t = times_0_0(t);
  q_20 = t;
  t = SSL_explode_term(q_20);
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_20;
  t = foldr_2_0(g_3, h_3, t);
  l_37 = t;
  t = SSL_TicksToSeconds(l_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_37;
        if((x_37 != t))
          {
            _fail(t);
          }
        t = w_37;
        ;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, x_37, y_37);
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_37, y_37);
              ;
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              t = SSL_gtr(x_37, y_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_37, y_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_95 (ATerm), ATerm t)
{
  ATerm c_38 = NULL;
  c_38 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_38 = NULL;
        t = term_k_10;
        t = get_config_0_0(t);
        e_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_38, term_c_5);
        t = geq_0_0(t);
        t = c_38;
        t = r_95(t);
        ;
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = c_38;
      }
  }
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,j_38 = NULL,k_38 = NULL;
  t = run_time_0_0(t);
  g_38 = t;
  t = term_s_2;
  t = whoami_0_0(t);
  h_38 = t;
  t = term_o_4;
  j_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), g_38), term_z_11), h_38);
  k_38 = t;
  t = SSL_printnl(j_38, k_38);
  t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), g_38), term_z_11), h_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm l_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_10;
  l_38 = t;
  t = SSL_exit(l_38);
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  w_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = w_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          v_38 = ATgetArgument(t, 0);
          {
            ATerm g_21 = NULL,o_6 = NULL;
            t = SSLgetAnnotations(w_38);
            g_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, v_38);
            o_6 = t;
            t = SSLsetAnnotations(o_6, g_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = w_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_98 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_12;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = fetch_1_0(j_3, t);
    }
  t = h_98(t);
  return(t);
}
ATerm map_1_0 (ATerm k_81 (ATerm), ATerm t)
{
  ATerm m_39 (ATerm t)
  {
    ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
    j_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = j_39;
      }
    else
      {
        ATerm p_21 = NULL,w_21 = NULL,x_21 = NULL,q_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_39 = ATgetFirst((ATermList) t);
            l_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_39);
        p_21 = t;
        t = k_39;
        t = k_81(t);
        w_21 = t;
        t = l_39;
        t = m_39(t);
        x_21 = t;
        t = (ATerm) ATinsert(CheckATermList(x_21), w_21);
        q_6 = t;
        t = SSLsetAnnotations(q_6, p_21);
      }
    return(t);
  }
  t = m_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm p_39 = NULL,q_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_39 = ATgetFirst((ATermList) t);
      q_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm u_39 = NULL,w_39 = NULL;
        ATerm k_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(u_39)), not_null(w_39));
          return(t);
        }
        t = q_39;
        t = h_0(t);
        if(((u_39 != NULL) && (u_39 != t)))
          _fail(t);
        else
          u_39 = t;
        t = p_39;
        t = g_0(t);
        if(((w_39 != NULL) && (w_39 != t)))
          _fail(t);
        else
          w_39 = t;
        t = q_39;
        t = reverse_acc_2_0(g_0, k_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_s_2;
      t = h_0(t);
    }
  return(t);
}
ATerm a_5 (ATerm v_52, ATerm w_52, ATerm t)
{
  t = SSL_table_get(v_52, w_52);
  return(t);
}
ATerm l_3 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,c_40 = NULL,t_6 = NULL;
  c_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_40);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_40);
  t_6 = t;
  t = SSLsetAnnotations(t_6, a_40);
  return(t);
}
ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm n_3 (ATerm t)
{
  ATerm e_40 = NULL;
  e_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_40), term_e_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_39 = NULL,z_39 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_11;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = fetch_1_0(l_3, t);
    }
  t = term_h_12;
  t = echo_0_0(t);
  t = term_c_11;
  y_39 = t;
  t = term_f_11;
  z_39 = t;
  t = term_i_12;
  t = a_5(y_39, z_39, t);
  t = reverse_acc_2_0(_id, m_3, t);
  t = map_1_0(n_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL;
  g_40 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_12 = ATgetFirst((ATermList) t);
                ATerm m_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = g_40;
          }
        ;
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, g_40);
      }
    h_40 = t;
    t = term_c_9;
    i_40 = t;
    t = SSL_printnl(i_40, h_40);
    t = g_40;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm m_40 = NULL,n_40 = NULL;
  t = term_n_12;
  m_40 = t;
  t = term_s_2;
  n_40 = t;
  t = term_o_12;
  t = d_5(m_40, n_40, t);
  return(t);
}
ATerm q_3 (ATerm t)
{
  t = term_p_12;
  return(t);
}
ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_3 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL;
  t = term_n_12;
  q_40 = t;
  t = term_s_2;
  r_40 = t;
  t = term_o_12;
  t = d_5(q_40, r_40, t);
  t = term_q_12;
  o_40 = t;
  t = term_s_2;
  p_40 = t;
  t = term_r_12;
  t = d_5(o_40, p_40, t);
  t = term_s_12;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = term_t_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = Option_3_0(r_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm t)
{
  ATerm s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL,x_40 = NULL,x_6 = NULL;
  x_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_40 = ATgetFirst((ATermList) t);
      u_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_40);
  s_40 = t;
  t = t_40;
  t = l_60(t);
  v_40 = t;
  t = u_40;
  t = m_60(t);
  w_40 = t;
  t = (ATerm) ATinsert(CheckATermList(w_40), v_40);
  x_6 = t;
  t = SSLsetAnnotations(x_6, s_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_100 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,h_41 = NULL,i_41 = NULL,b_7 = NULL;
  c_41 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_12;
        t = k_100(t);
        ;
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
      }
    t = c_41;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_41 = ATgetFirst((ATermList) t);
        f_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_41);
    d_41 = t;
    t = term_p_11;
    i_41 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, e_41);
    t = d_5(i_41, e_41, t);
    t = f_41;
    {
      ATerm y_41 (ATerm t)
      {
        ATerm z_12 = t;
        int a_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_13 = t;
            int f_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm l_41 = NULL;
                l_41 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = l_41;
                ;
                LocalPopChoice(f_13);
              }
            else
              {
                t = e_13;
                t = k_100(t);
                t = Cons_2_0(_id, y_41, t);
              }
            ;
            LocalPopChoice(a_13);
          }
        else
          {
            t = z_12;
            {
              ATerm o_41 = NULL,v_41 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_41 = ATgetFirst((ATermList) t);
                  v_41 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(v_41), (ATerm) ATmakeAppl(sym_Undefined_1, o_41));
            }
          }
        return(t);
      }
      t = y_41(t);
      h_41 = t;
      t = (ATerm) ATinsert(CheckATermList(h_41), (ATerm) ATmakeAppl(sym_Program_1, e_41));
      b_7 = t;
      t = SSLsetAnnotations(b_7, d_41);
    }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  ATerm k_42 = NULL;
  k_42 = t;
  if(match_string(t, "--help"))
    {
      t = k_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_42;
        }
    }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL;
  t = term_d_12;
  l_42 = t;
  t = term_s_2;
  m_42 = t;
  t = term_g_13;
  t = d_5(l_42, m_42, t);
  t = term_j_13;
  return(t);
}
ATerm z_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL;
  f_42 = t;
  t = term_c_11;
  h_42 = t;
  t = term_f_11;
  i_42 = t;
  t = (ATerm) ATempty;
  j_42 = t;
  t = SSL_table_put(h_42, i_42, j_42);
  t = f_42;
  {
    ATerm w_3 (ATerm t)
    {
      ATerm n_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_100(t);
          ;
          LocalPopChoice(o_13);
        }
      else
        {
          t = n_13;
          {
            ATerm q_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_3, y_3, z_3, t);
                ;
                LocalPopChoice(r_13);
              }
            else
              {
                t = q_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
    {
      ATerm s_13 = t;
      int t_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_42 = NULL;
          t_42 = t;
          {
            ATerm u_13 = t;
            int w_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_22 = NULL;
                t = t_42;
                {
                  ATerm x_13 = t;
                  int y_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_d_12;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(y_13);
                    }
                  else
                    {
                      t = x_13;
                      t = fetch_1_0(a_4, t);
                    }
                  t = t_42;
                  t = default_system_usage_0_0(t);
                  t = term_o_10;
                  o_22 = t;
                  t = SSL_exit(o_22);
                }
                ;
                LocalPopChoice(w_13);
              }
            else
              {
                t = u_13;
                {
                  ATerm t_22 = NULL;
                  t = term_n_12;
                  t = get_config_0_0(t);
                  t = t_42;
                  t = default_system_about_0_0(t);
                  t = term_o_10;
                  t_22 = t;
                  t = SSL_exit(t_22);
                }
              }
          }
          ;
          LocalPopChoice(t_13);
        }
      else
        {
          t = s_13;
          {
            ATerm z_13 = t;
            int a_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL;
                ATerm b_4 (ATerm t)
                {
                  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,f_7 = NULL;
                  z_42 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      y_42 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(z_42);
                  x_42 = t;
                  t = y_42;
                  if(((d_42 != NULL) && (d_42 != t)))
                    _fail(t);
                  else
                    d_42 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, y_42);
                  f_7 = t;
                  t = SSLsetAnnotations(f_7, x_42);
                  return(t);
                }
                t = fetch_1_0(b_4, t);
                t = term_o_4;
                v_42 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_42)), term_b_14);
                w_42 = t;
                t = SSL_printnl(v_42, w_42);
                t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_42)), term_b_14));
                t = default_system_usage_0_0(t);
                t = term_c_5;
                u_42 = t;
                t = SSL_exit(u_42);
                ;
                LocalPopChoice(a_14);
              }
            else
              {
                t = z_13;
              }
          }
        }
      e_42 = t;
      t = term_c_11;
      g_42 = t;
      t = SSL_table_destroy(g_42);
      t = e_42;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_98 (ATerm), ATerm k_98 (ATerm), ATerm l_98 (ATerm), ATerm m_98 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
  t = parse_options_1_0(j_98, t);
  e_43 = t;
  t = term_c_14;
  h_43 = t;
  t = SSL_table_create(h_43);
  t = term_c_14;
  f_43 = t;
  t = term_d_14;
  g_43 = t;
  t = SSL_table_put(f_43, g_43, e_43);
  t = e_43;
  t = l_98(t);
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_98, t);
        ;
        LocalPopChoice(h_14);
      }
    else
      {
        t = g_14;
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = m_98(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_14);
            }
          else
            {
              t = i_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm d_4 (ATerm t)
{
  t = if_verbose2_1_0(i_4, t);
  return(t);
}
ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  t = term_k_14;
  i_43 = t;
  t = term_s_2;
  j_43 = t;
  t = term_l_14;
  t = d_5(i_43, j_43, t);
  t = term_m_14;
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_n_14;
  return(t);
}
ATerm i_4 (ATerm t)
{
  ATerm k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL;
  k_43 = t;
  t = term_p_11;
  t = get_config_0_0(t);
  l_43 = t;
  t = term_o_4;
  m_43 = t;
  t = (ATerm) ATinsert(ATempty, l_43);
  n_43 = t;
  t = SSL_printnl(m_43, n_43);
  t = k_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_97 (ATerm), ATerm t_97 (ATerm), ATerm u_97 (ATerm), ATerm t)
{
  ATerm c_4 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_97(t);
        ;
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              {
                ATerm t_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    ;
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = t_14;
                    {
                      ATerm w_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_4, g_4, h_4, t);
                          ;
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = w_14;
                          {
                            ATerm z_14 = t;
                            int a_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                ;
                                LocalPopChoice(a_15);
                              }
                            else
                              {
                                t = z_14;
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
  ATerm e_4 (ATerm t)
  {
    ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL;
    p_43 = t;
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_43 != NULL) && (o_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(k_4, t);
          ;
          LocalPopChoice(c_15);
        }
      else
        {
          t = b_15;
          t = term_d_15;
          o_43 = t;
        }
      t = not_null(o_43);
      t = ReadFromFile_0_0(t);
      q_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_43, q_43);
      t = apply_strategy_1_0(s_97, t);
      t = output_file_0_0(t);
    }
    return(t);
  }
  t = option_wrap_4_0(c_4, u_97, d_4, e_4, t);
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,k_7 = NULL;
  w_43 = t;
  if(match_cons(t, sym__2))
    {
      t_43 = ATgetArgument(t, 0);
      u_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_43);
  s_43 = t;
  t = u_43;
  t = topdown_1_0(n_4, t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_43, v_43);
  k_7 = t;
  t = SSLsetAnnotations(k_7, s_43);
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = repeat_1_0(Desugar_0_0, t);
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        ;
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_4, _fail, default_usage_0_0, t);
  return(t);
}
