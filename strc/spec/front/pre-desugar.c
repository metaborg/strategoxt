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
}
ATerm term_d_15;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_k_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_z_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_p_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_m_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_f_10;
ATerm term_y_9;
ATerm term_t_9;
ATerm term_q_9;
ATerm term_c_9;
ATerm term_x_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_q_6;
ATerm term_a_5;
ATerm term_q_4;
ATerm term_p_4;
ATerm term_o_4;
ATerm term_v_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_4));
  term_p_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_4));
  term_q_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Op_2, term_u_6, (ATerm) ATempty);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_6);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_Call_2, term_m_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Call_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Call_2, term_t_6, (ATerm) ATempty);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_8);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_k_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_v_2);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
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
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_f_11);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_v_2);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_r_12, term_v_2);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(sym__2, term_e_12, term_v_2);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_k_14, term_v_2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm y_88 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm w_26 (ATerm n_16, ATerm s_16, ATerm t);
static ATerm x_26 (ATerm b_17, ATerm c_17, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm l_81 (ATerm), ATerm t);
static ATerm s_4 (ATerm a_40, ATerm b_40, ATerm t);
static ATerm t_4 (ATerm h_25, ATerm i_25, ATerm t);
static ATerm v_4 (ATerm o_87 (ATerm), ATerm u_167, ATerm l_25, ATerm t);
static ATerm u_4 (ATerm d_25, ATerm e_25, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm j_104 (ATerm), ATerm t);
static ATerm r_30 (ATerm l_30, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm w_4 (ATerm j_25, ATerm t);
static ATerm x_4 (ATerm c_40, ATerm d_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm e_32 (ATerm b_31, ATerm t);
static ATerm f_32 (ATerm f_31, ATerm g_31, ATerm h_31, ATerm t);
static ATerm g_32 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t);
static ATerm y_4 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm h_88 (ATerm), ATerm t);
static ATerm r_4 (ATerm u_38, ATerm v_38, ATerm t);
ATerm debug_1_0 (ATerm m_87 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
ATerm get_config_0_0 (ATerm t);
ATerm if_verbose2_1_0 (ATerm s_102 (ATerm), ATerm t);
static ATerm f_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm e_5 (ATerm s_49, ATerm t_49, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm c_5 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm z_4 (ATerm v_42, ATerm w_42, ATerm t);
ATerm foldr_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm r_102 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm need_help_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm map_1_0 (ATerm x_87 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm b_5 (ATerm j_56, ATerm k_56, ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_107 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
ATerm parse_options_1_0 (ATerm j_107 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t);
static ATerm d_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm iowrap_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,j_0 = NULL;
  a_0 = t;
  t = term_v_2;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_o_4;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_4), c_0), term_p_4);
  j_0 = t;
  t = SSL_printnl(f_0, j_0);
  t = term_a_5;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm y_88 (ATerm), ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    ATerm j_1 = NULL,n_1 = NULL,q_1 = NULL;
    j_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_1 = ATgetFirst((ATermList) t);
        q_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm d_5 = t;
      int g_5 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,s_0 = NULL;
          t = SSLgetAnnotations(j_1);
          q_0 = t;
          t = q_1;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(q_1), n_1);
          s_0 = t;
          t = SSLsetAnnotations(s_0, q_0);
          t = y_88(t);
          LocalPopChoice(g_5);
        }
      else
        {
          t = d_5;
          {
            ATerm t_1 = NULL,w_1 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(j_1);
            t_1 = t;
            t = q_1;
            t = s_1(t);
            w_1 = t;
            t = (ATerm) ATinsert(CheckATermList(w_1), n_1);
            u_0 = t;
            t = SSLsetAnnotations(u_0, t_1);
          }
        }
    }
    return(t);
  }
  t = s_1(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_2 = NULL,p_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      p_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_2;
    }
  else
    {
      t = p_2;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm a_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm i_5 = ATgetFirst((ATermList) t);
      a_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_3;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm b_97 (ATerm), ATerm c_97 (ATerm), ATerm t)
{
  ATerm w_2 = NULL,x_2 = NULL,z_2 = NULL;
  w_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_2 = ATgetFirst((ATermList) t);
      {
        ATerm j_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_2;
  t = b_97(t);
  t = w_2;
  t = last_0_0(t);
  t = c_97(t);
  t = w_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_5 = ATgetFirst((ATermList) t);
      x_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = x_2;
  t = at_last_1_0(b_0, t);
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
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm t)
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
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm c_13 = NULL,k_13 = NULL,l_13 = NULL,n_13 = NULL,q_13 = NULL;
  l_13 = t;
  if(match_cons(t, sym_Real_1))
    {
      n_13 = ATgetArgument(t, 0);
      {
        ATerm g_2 = NULL;
        t = SSL_string_to_real(n_13);
        g_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, g_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          n_13 = ATgetArgument(t, 0);
          {
            ATerm o_2 = NULL;
            t = SSL_string_to_int(n_13);
            o_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, o_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              n_13 = ATgetArgument(t, 0);
              q_13 = ATgetArgument(t, 1);
              k_13 = ATgetArgument(t, 2);
              t = SSL_is_string(k_13);
              t = (ATerm) ATmakeAppl(sym_Con_3, n_13, q_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_13), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  n_13 = ATgetArgument(t, 0);
                  q_13 = ATgetArgument(t, 1);
                  k_13 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = n_13;
                    {
                      ATerm n_5 = t;
                      int p_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(n_13);
                          t = unquote_chars_2_0(h_0, m_0, t);
                          t_3 = t;
                          t = SSL_implode_string(t_3);
                          LocalPopChoice(p_5);
                        }
                      else
                        {
                          t = n_5;
                        }
                    }
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, q_13, k_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      n_13 = ATgetArgument(t, 0);
                      q_13 = ATgetArgument(t, 1);
                      {
                        ATerm i_4 = NULL;
                        t = n_13;
                        {
                          ATerm r_5 = t;
                          int s_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm j_4 = NULL;
                              t = SSL_explode_string(n_13);
                              t = unquote_chars_2_0(r_0, t_0, t);
                              j_4 = t;
                              t = SSL_implode_string(j_4);
                              LocalPopChoice(s_5);
                            }
                          else
                            {
                              t = r_5;
                            }
                        }
                        i_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, i_4, (ATerm)ATempty, q_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          n_13 = ATgetArgument(t, 0);
                          {
                            ATerm k_5 = NULL;
                            t = n_13;
                            {
                              ATerm v_5 = t;
                              int w_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm l_5 = NULL;
                                  t = SSL_explode_string(n_13);
                                  t = unquote_chars_2_0(v_0, w_0, t);
                                  l_5 = t;
                                  t = SSL_implode_string(l_5);
                                  LocalPopChoice(w_5);
                                }
                              else
                                {
                                  t = v_5;
                                }
                            }
                            k_5 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, k_5, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              n_13 = ATgetArgument(t, 0);
                              {
                                ATerm a_6 = NULL,g_6 = NULL,j_6 = NULL,x_0 = NULL;
                                t = SSLgetAnnotations(l_13);
                                a_6 = t;
                                t = SSL_explode_string(n_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm x_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(x_5) != AT_INT) || (ATgetInt((ATermInt) x_5) != 39)))
                                      _fail(t);
                                    g_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(g_6);
                                j_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, j_6);
                                x_0 = t;
                                t = SSLsetAnnotations(x_0, a_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  n_13 = ATgetArgument(t, 0);
                                  q_13 = ATgetArgument(t, 1);
                                  k_13 = ATgetArgument(t, 2);
                                  c_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm e_7 = NULL,t_7 = NULL,w_7 = NULL,y_0 = NULL;
                                    t = SSLgetAnnotations(l_13);
                                    e_7 = t;
                                    t = SSL_explode_string(n_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm y_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                          _fail(t);
                                        t_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(t_7);
                                    w_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, w_7, q_13, k_13, c_13);
                                    y_0 = t;
                                    t = SSLsetAnnotations(y_0, e_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      n_13 = ATgetArgument(t, 0);
                                      q_13 = ATgetArgument(t, 1);
                                      k_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm v_8 = NULL,f_9 = NULL,j_9 = NULL,z_0 = NULL;
                                        t = SSLgetAnnotations(l_13);
                                        v_8 = t;
                                        t = SSL_explode_string(n_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm z_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                              _fail(t);
                                            f_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(f_9);
                                        j_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, j_9, q_13, k_13);
                                        z_0 = t;
                                        t = SSLsetAnnotations(z_0, v_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          n_13 = ATgetArgument(t, 0);
                                          q_13 = ATgetArgument(t, 1);
                                          k_13 = ATgetArgument(t, 2);
                                          c_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm o_10 = NULL,z_10 = NULL,a_11 = NULL,a_1 = NULL;
                                            t = SSLgetAnnotations(l_13);
                                            o_10 = t;
                                            t = SSL_explode_string(n_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm b_6 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(b_6) != AT_INT) || (ATgetInt((ATermInt) b_6) != 39)))
                                                  _fail(t);
                                                z_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(z_10);
                                            a_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_11, q_13, k_13, c_13);
                                            a_1 = t;
                                            t = SSLsetAnnotations(a_1, o_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              n_13 = ATgetArgument(t, 0);
                                              q_13 = ATgetArgument(t, 1);
                                              k_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm c_12 = NULL,g_13 = NULL,h_13 = NULL,b_1 = NULL;
                                                t = SSLgetAnnotations(l_13);
                                                c_12 = t;
                                                t = SSL_explode_string(n_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm c_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(c_6) != AT_INT) || (ATgetInt((ATermInt) c_6) != 39)))
                                                      _fail(t);
                                                    g_13 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(g_13);
                                                h_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, h_13, q_13, k_13);
                                                b_1 = t;
                                                t = SSLsetAnnotations(b_1, c_12);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  n_13 = ATgetArgument(t, 0);
                                                  q_13 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm v_13 = NULL,a_14 = NULL,f_14 = NULL,c_1 = NULL;
                                                    t = SSLgetAnnotations(l_13);
                                                    v_13 = t;
                                                    t = SSL_explode_string(n_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm d_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(d_6) != AT_INT) || (ATgetInt((ATermInt) d_6) != 39)))
                                                          _fail(t);
                                                        a_14 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(a_14);
                                                    f_14 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, f_14, q_13);
                                                    c_1 = t;
                                                    t = SSLsetAnnotations(c_1, v_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      n_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm r_14 = NULL,t_14 = NULL,u_14 = NULL,d_1 = NULL;
                                                        t = SSLgetAnnotations(l_13);
                                                        r_14 = t;
                                                        t = SSL_explode_string(n_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm h_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 39)))
                                                              _fail(t);
                                                            t_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(t_14);
                                                        u_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, u_14);
                                                        d_1 = t;
                                                        t = SSLsetAnnotations(d_1, r_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          n_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm g_15 = NULL,i_15 = NULL,j_15 = NULL,f_1 = NULL;
                                                            t = SSLgetAnnotations(l_13);
                                                            g_15 = t;
                                                            t = SSL_explode_string(n_13);
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
                                                            f_1 = t;
                                                            t = SSLsetAnnotations(f_1, g_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              n_13 = ATgetArgument(t, 0);
                                                              q_13 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL,g_1 = NULL;
                                                                t = SSLgetAnnotations(l_13);
                                                                q_15 = t;
                                                                t = SSL_explode_string(n_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm k_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                                                                      _fail(t);
                                                                    t_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(t_15);
                                                                u_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_15, q_13);
                                                                g_1 = t;
                                                                t = SSLsetAnnotations(g_1, q_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm d_16 = NULL,j_16 = NULL,k_16 = NULL,h_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  n_13 = ATgetArgument(t, 0);
                                                                  q_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(l_13);
                                                              d_16 = t;
                                                              t = SSL_explode_string(n_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm n_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(n_6) != AT_INT) || (ATgetInt((ATermInt) n_6) != 39)))
                                                                    _fail(t);
                                                                  j_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(j_16);
                                                              k_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_16, q_13);
                                                              h_1 = t;
                                                              t = SSLsetAnnotations(h_1, d_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm w_26 (ATerm n_16, ATerm s_16, ATerm t)
{
  t = n_16;
  {
    ATerm o_6 = t;
    if((PushChoice() == 0))
      {
        ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,a_17 = NULL,f_5 = NULL;
        a_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_16 = ATgetFirst((ATermList) t);
            w_16 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(a_17);
        u_16 = t;
        t = w_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_16), v_16);
        f_5 = t;
        t = SSLsetAnnotations(f_5, u_16);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = o_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_6, n_16);
  return(t);
}
static ATerm x_26 (ATerm b_17, ATerm c_17, ATerm t)
{
  t = b_17;
  {
    ATerm s_6 = t;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL,h_17 = NULL,j_17 = NULL,l_17 = NULL,h_5 = NULL;
        l_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_17 = ATgetFirst((ATermList) t);
            j_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_17);
        g_17 = t;
        t = j_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_17), h_17);
        h_5 = t;
        t = SSLsetAnnotations(h_5, g_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_6, b_17);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,x_16 = NULL;
  l_18 = t;
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm x_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_6 = ATgetArgument(t, 1);
        if(((ATgetType(y_6) == AT_LIST) && !(ATisEmpty(y_6))))
          {
            m_18 = ATgetFirst((ATermList) y_6);
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
  t = SSL_explode_term(l_18);
  if(match_cons(t, sym__2))
    {
      ATerm b_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_7 = ATgetArgument(t, 1);
        if(((ATgetType(c_7) == AT_LIST) && !(ATisEmpty(c_7))))
          {
            ATerm d_7 = ATgetFirst((ATermList) c_7);
            ATerm g_7 = (ATerm) ATgetNext((ATermList) c_7);
            if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
              {
                x_16 = ATgetFirst((ATermList) g_7);
                {
                  ATerm i_7 = (ATerm) ATgetNext((ATermList) g_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, x_16), m_18));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      i_19 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, j_19), i_19));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_w_6;
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm p_19 = NULL,q_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      q_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_j_7, (ATerm) ATinsert(ATinsert(ATempty, q_19), p_19));
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, h_20), g_20));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  t = term_n_7;
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm k_20 = NULL,m_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      m_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_k_7, (ATerm) ATinsert(ATinsert(ATempty, m_20), k_20));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm s_17 = NULL,t_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      e_18 = ATgetArgument(t, 0);
      f_18 = ATgetArgument(t, 1);
      {
        ATerm j_18 = NULL;
        t = f_18;
        t = foldr_2_0(e_1, i_1, t);
        j_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, e_18, j_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          e_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, e_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              e_18 = ATgetArgument(t, 0);
              {
                ATerm i_17 = NULL;
                t = e_18;
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
                                      t = term_u_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_v_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(p_7);
                    }
                  else
                    {
                      t = o_7;
                      {
                        ATerm m_17 = NULL;
                        t = SSL_explode_string(e_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                              _fail(t);
                            {
                              ATerm y_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
                                {
                                  m_17 = ATgetFirst((ATermList) y_7);
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
                        t = m_17;
                      }
                    }
                }
                i_17 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, i_17);
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
                      e_18 = ATgetArgument(t, 0);
                      {
                        ATerm e_8 = ATgetArgument(t, 1);
                      }
                      b_18 = ATgetArgument(t, 2);
                      s_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(d_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, e_18, b_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_17), (ATerm) ATempty));
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
                            e_18 = ATgetArgument(t, 0);
                            {
                              ATerm h_8 = ATgetArgument(t, 1);
                            }
                            b_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(g_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, e_18, b_18, term_k_8);
                      }
                    else
                      {
                        t = f_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            e_18 = ATgetArgument(t, 0);
                            f_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, e_18, f_18, term_k_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                e_18 = ATgetArgument(t, 0);
                                f_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm k_1 (ATerm t)
                                  {
                                    t = f_18;
                                    return(t);
                                  }
                                  t = e_18;
                                  t = foldr_2_0(k_1, l_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    e_18 = ATgetArgument(t, 0);
                                    t = e_18;
                                    t = foldr_2_0(m_1, o_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        e_18 = ATgetArgument(t, 0);
                                        t = e_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            t_17 = ATgetFirst((ATermList) t);
                                            z_17 = (ATerm) ATgetNext((ATermList) t);
                                            t = z_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm l_8 = t;
                                                int m_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = w_26(e_18, d_18, t);
                                                    LocalPopChoice(m_8);
                                                  }
                                                else
                                                  {
                                                    t = l_8;
                                                    t = t_17;
                                                  }
                                              }
                                            else
                                              {
                                                t = w_26(e_18, d_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = w_26(e_18, d_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            e_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, e_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                e_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, e_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    e_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, e_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        e_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, e_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            e_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                e_18 = ATgetArgument(t, 0);
                                                                f_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, e_18), f_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    e_18 = ATgetArgument(t, 0);
                                                                    f_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm p_1 (ATerm t)
                                                                      {
                                                                        t = f_18;
                                                                        return(t);
                                                                      }
                                                                      t = e_18;
                                                                      t = foldr_2_0(p_1, r_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        e_18 = ATgetArgument(t, 0);
                                                                        t = e_18;
                                                                        t = foldr_2_0(u_1, v_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            e_18 = ATgetArgument(t, 0);
                                                                            f_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_t_6, (ATerm) ATinsert(CheckATermList(f_18), e_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                e_18 = ATgetArgument(t, 0);
                                                                                t = e_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    t_17 = ATgetFirst((ATermList) t);
                                                                                    z_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = z_17;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm n_8 = t;
                                                                                        int o_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = x_26(e_18, d_18, t);
                                                                                            LocalPopChoice(o_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_8;
                                                                                            t = t_17;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = x_26(e_18, d_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = x_26(e_18, d_18, t);
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
                                                                                        e_18 = ATgetArgument(t, 0);
                                                                                        f_18 = ATgetArgument(t, 1);
                                                                                        t = f_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            a_18 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_r_8, (ATerm) ATinsert(ATinsert(ATempty, a_18), e_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            e_18 = ATgetArgument(t, 0);
                                                                                            t = e_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                e_18 = ATgetArgument(t, 0);
                                                                                                f_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, e_18, f_18, term_s_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    e_18 = ATgetArgument(t, 0);
                                                                                                    f_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, e_18, f_18, term_s_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        e_18 = ATgetArgument(t, 0);
                                                                                                        f_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, e_18, (ATerm)ATempty, f_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            e_18 = ATgetArgument(t, 0);
                                                                                                            f_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, f_18, e_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                e_18 = ATgetArgument(t, 0);
                                                                                                                f_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, e_18, f_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    e_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, e_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        e_18 = ATgetArgument(t, 0);
                                                                                                                        f_18 = ATgetArgument(t, 1);
                                                                                                                        b_18 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, e_18, f_18, (ATerm)ATempty, b_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            e_18 = ATgetArgument(t, 0);
                                                                                                                            f_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, e_18, (ATerm)ATempty, (ATerm)ATempty, f_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                e_18 = ATgetArgument(t, 0);
                                                                                                                                f_18 = ATgetArgument(t, 1);
                                                                                                                                b_18 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_18, f_18, (ATerm)ATempty, b_18);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    e_18 = ATgetArgument(t, 0);
                                                                                                                                    f_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, e_18, (ATerm)ATempty, (ATerm)ATempty, f_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        e_18 = ATgetArgument(t, 0);
                                                                                                                                        f_18 = ATgetArgument(t, 1);
                                                                                                                                        b_18 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, e_18, f_18, (ATerm)ATempty, b_18);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            e_18 = ATgetArgument(t, 0);
                                                                                                                                            f_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, e_18, (ATerm)ATempty, (ATerm)ATempty, f_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm t_8 = ATgetArgument(t, 0);
                                                                                                                                                f_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, f_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t)
{
  static ATerm y_26 (ATerm t)
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_80(t);
        t = y_26(t);
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        t = m_80(t);
      }
    return(t);
  }
  t = y_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm l_81 (ATerm), ATerm t)
{
  static ATerm x_1 (ATerm t)
  {
    t = topdown_1_0(l_81, t);
    return(t);
  }
  t = l_81(t);
  t = SRTS_all(x_1, t);
  return(t);
}
static ATerm s_4 (ATerm a_40, ATerm b_40, ATerm t)
{
  ATerm b_27 = NULL;
  t = SSL_fputc(a_40, b_40);
  b_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_27);
  return(t);
}
static ATerm t_4 (ATerm h_25, ATerm i_25, ATerm t)
{
  ATerm d_27 = NULL;
  t = SSL_write_term_to_stream_text(h_25, i_25);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
  return(t);
}
static ATerm v_4 (ATerm o_87 (ATerm), ATerm u_167, ATerm l_25, ATerm t)
{
  ATerm e_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, u_167, term_x_8);
  t = y_4(t);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_27, l_25);
  t = o_87(t);
  t = fclose_0_0(t);
  t = l_25;
  return(t);
}
static ATerm u_4 (ATerm d_25, ATerm e_25, ATerm t)
{
  ATerm f_27 = NULL;
  t = SSL_write_term_to_stream_baf(d_25, e_25);
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_27);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm i_18 = NULL,n_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if(match_cons(y_8, sym_Stream_1))
        {
          i_18 = ATgetArgument(y_8, 0);
        }
      else
        _fail(t);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(i_18, n_18, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL,u_19 = NULL,a_20 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm z_8 = ATgetArgument(t, 0);
      if(match_cons(z_8, sym_Stream_1))
        {
          u_19 = ATgetArgument(z_8, 0);
        }
      else
        _fail(t);
      a_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_4(u_19, a_20, t);
  m_19 = t;
  t = term_u_7;
  n_19 = t;
  t = m_19;
  if(match_cons(t, sym_Stream_1))
    {
      o_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, m_19);
  t = s_4(n_19, o_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,r_27 = NULL,u_27 = NULL,w_27 = NULL,y_27 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,n_28 = NULL,v_29 = NULL,w_29 = NULL,q_5 = NULL,o_5 = NULL;
  q_27 = t;
  if(match_cons(t, sym__2))
    {
      g_28 = ATgetArgument(t, 0);
      h_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  f_28 = t;
  t = g_28;
  {
    ATerm a_9 = t;
    int b_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm y_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((p_27 != NULL) && (p_27 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                p_27 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(y_1, t);
        LocalPopChoice(b_9);
      }
    else
      {
        t = a_9;
        t = term_c_9;
        p_27 = t;
      }
  }
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, h_28);
  o_5 = t;
  t = SSLsetAnnotations(o_5, f_28);
  t = q_27;
  if(match_cons(t, sym__2))
    {
      u_27 = ATgetArgument(t, 0);
      w_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_27);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, (ATerm) ATmakeAppl(sym__2, not_null(p_27), w_27));
  q_5 = t;
  t = SSLsetAnnotations(q_5, r_27);
  y_27 = t;
  if(match_cons(t, sym__2))
    {
      v_29 = ATgetArgument(t, 0);
      w_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_17 = NULL,w_17 = NULL,x_17 = NULL,y_17 = NULL,c_18 = NULL,t_5 = NULL;
        t = SSLgetAnnotations(y_27);
        r_17 = t;
        t = v_29;
        t = fetch_1_0(z_1, t);
        w_17 = t;
        t = w_29;
        if(match_cons(t, sym__2))
          {
            y_17 = ATgetArgument(t, 0);
            c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = v_4(a_2, y_17, c_18, t);
        x_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_17, x_17);
        t_5 = t;
        t = SSLsetAnnotations(t_5, r_17);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        {
          ATerm s_18 = NULL,f_19 = NULL,g_19 = NULL,l_19 = NULL,u_5 = NULL;
          t = SSLgetAnnotations(y_27);
          s_18 = t;
          t = w_29;
          if(match_cons(t, sym__2))
            {
              g_19 = ATgetArgument(t, 0);
              l_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = v_4(b_2, g_19, l_19, t);
          f_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, v_29, f_19);
          u_5 = t;
          t = SSLsetAnnotations(u_5, s_18);
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
ATerm apply_strategy_1_0 (ATerm j_104 (ATerm), ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL;
  d_30 = t;
  t = dtime_0_0(t);
  t = d_30;
  t = j_104(t);
  c_30 = t;
  t = dtime_0_0(t);
  z_29 = t;
  t = c_30;
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(a_30), (ATerm) ATmakeAppl(sym_Runtime_1, z_29)), b_30);
  return(t);
}
static ATerm r_30 (ATerm l_30, ATerm t)
{
  t = SSL_fclose(l_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL;
  p_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_30 = ATgetArgument(t, 0);
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(o_30);
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            t = r_30(p_30, t);
          }
      }
    }
  else
    {
      t = r_30(p_30, t);
    }
  return(t);
}
static ATerm w_4 (ATerm j_25, ATerm t)
{
  t = SSL_read_term_from_stream(j_25);
  return(t);
}
static ATerm x_4 (ATerm c_40, ATerm d_40, ATerm t)
{
  ATerm s_30 = NULL;
  t = SSL_fopen(c_40, d_40);
  s_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_30);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm t_30 = NULL;
  t = SSL_stdin_stream();
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_30);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_stdout_stream();
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_30);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm v_30 = NULL;
  t = SSL_stderr_stream();
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_30);
  return(t);
}
static ATerm e_32 (ATerm b_31, ATerm t)
{
  ATerm c_31 = NULL;
  t = SSL_explode_term(b_31);
  if(match_cons(t, sym__2))
    {
      ATerm i_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_9 = ATgetArgument(t, 1);
        if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
          {
            c_31 = ATgetFirst((ATermList) k_9);
            {
              ATerm l_9 = (ATerm) ATgetNext((ATermList) k_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm f_32 (ATerm f_31, ATerm g_31, ATerm h_31, ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,n_31 = NULL,e_6 = NULL;
  t = SSLgetAnnotations(h_31);
  k_31 = t;
  t = f_31;
  if(match_cons(t, sym_Path_1))
    {
      n_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_31, g_31);
  e_6 = t;
  t = SSLsetAnnotations(e_6, k_31);
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(i_31, j_31, t);
  return(t);
}
static ATerm g_32 (ATerm p_31, ATerm q_31, ATerm r_31, ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,x_31 = NULL,f_6 = NULL;
  t = SSLgetAnnotations(r_31);
  u_31 = t;
  t = SSL_is_string(p_31);
  x_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_31, q_31);
  f_6 = t;
  t = SSLsetAnnotations(f_6, u_31);
  if(match_cons(t, sym__2))
    {
      s_31 = ATgetArgument(t, 0);
      t_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(s_31, t_31, t);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm z_31 = NULL,c_32 = NULL,d_32 = NULL;
  z_31 = t;
  if(match_cons(t, sym__2))
    {
      c_32 = ATgetArgument(t, 0);
      d_32 = ATgetArgument(t, 1);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = e_32(z_31, t);
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
                  t = f_32(c_32, d_32, z_31, t);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = g_32(c_32, d_32, z_31, t);
                }
            }
          }
      }
    }
  else
    {
      t = e_32(z_31, t);
    }
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = term_q_9;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_32 = NULL;
      k_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, k_32, term_t_9);
      t = y_4(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      t = debug_1_0(c_2, t);
      _fail(t);
    }
  i_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(j_32, t);
  h_32 = t;
  t = i_32;
  t = fclose_0_0(t);
  t = h_32;
  return(t);
}
ATerm fetch_1_0 (ATerm h_88 (ATerm), ATerm t)
{
  static ATerm i_33 (ATerm t)
  {
    ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
    f_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_33 = ATgetFirst((ATermList) t);
        h_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL,w_20 = NULL,l_6 = NULL;
          t = SSLgetAnnotations(f_33);
          t_20 = t;
          t = g_33;
          t = h_88(t);
          w_20 = t;
          t = (ATerm) ATinsert(CheckATermList(h_33), w_20);
          l_6 = t;
          t = SSLsetAnnotations(l_6, t_20);
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
          {
            ATerm e_21 = NULL,h_21 = NULL,m_6 = NULL;
            t = SSLgetAnnotations(f_33);
            e_21 = t;
            t = h_33;
            t = i_33(t);
            h_21 = t;
            t = (ATerm) ATinsert(CheckATermList(h_21), g_33);
            m_6 = t;
            t = SSLsetAnnotations(m_6, e_21);
          }
        }
    }
    return(t);
  }
  t = i_33(t);
  return(t);
}
static ATerm r_4 (ATerm u_38, ATerm v_38, ATerm t)
{
  t = SSL_strcat(u_38, v_38);
  return(t);
}
ATerm debug_1_0 (ATerm m_87 (ATerm), ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
  l_33 = t;
  t = m_87(t);
  m_33 = t;
  t = term_o_4;
  n_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_33), m_33);
  o_33 = t;
  t = SSL_printnl(n_33, o_33);
  t = l_33;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm w_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = w_9;
    }
  return(t);
}
static ATerm e_2 (ATerm t)
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
      ATerm w_33 = NULL;
      w_33 = t;
      t = SSL_is_string(w_33);
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
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            {
              ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
              c_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  d_34 = ATgetArgument(t, 0);
                  t = d_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      d_34 = ATgetArgument(t, 0);
                      t = d_34;
                      {
                        ATerm d_10 = t;
                        int e_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
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
                      ATerm i_34 = NULL,j_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          d_34 = ATgetArgument(t, 0);
                          e_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = d_34;
                      t = eval_config_0_0(t);
                      i_34 = t;
                      t = e_34;
                      t = eval_config_0_0(t);
                      j_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, i_34, j_34);
                      t = r_4(i_34, j_34, t);
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
  ATerm n_34 = NULL,o_34 = NULL;
  n_34 = t;
  t = term_f_10;
  o_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_f_10, n_34);
  t = b_5(o_34, n_34, t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_34 = NULL,q_34 = NULL;
        t = eval_config_0_0(t);
        p_34 = t;
        t = term_f_10;
        q_34 = t;
        t = SSL_table_put(q_34, n_34, p_34);
        t = p_34;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm s_102 (ATerm), ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  {
    ATerm i_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_34 = NULL;
        t = term_k_10;
        t = get_config_0_0(t);
        w_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_34, term_l_10);
        t = geq_0_0(t);
        t = u_34;
        t = s_102(t);
        LocalPopChoice(j_10);
      }
    else
      {
        t = i_10;
        t = u_34;
      }
  }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_34 = NULL;
  z_34 = t;
  if(match_string(t, "-k"))
    {
      t = z_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_34;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  t = SSL_string_to_int(a_35);
  b_35 = t;
  t = term_m_10;
  c_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, b_35);
  t = e_5(c_35, b_35, t);
  t = a_35;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(f_2, h_2, i_2, t);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm e_35 = NULL;
  e_35 = t;
  if(match_string(t, "-S"))
    {
      t = e_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_35;
    }
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  t = term_k_10;
  f_35 = t;
  t = term_p_10;
  g_35 = t;
  t = term_q_10;
  t = e_5(f_35, g_35, t);
  t = term_r_10;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
  h_35 = t;
  t = SSL_string_to_int(h_35);
  i_35 = t;
  t = term_k_10;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_10, i_35);
  t = e_5(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, h_35);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL;
  t = term_u_10;
  k_35 = t;
  t = term_v_2;
  l_35 = t;
  t = term_v_10;
  t = e_5(k_35, l_35, t);
  t = term_w_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_x_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm y_10 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(j_2, k_2, l_2, t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = y_10;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, q_2, r_2, t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = Option_3_0(s_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm e_5 (ATerm s_49, ATerm t_49, ATerm t)
{
  ATerm m_35 = NULL;
  t = term_f_10;
  m_35 = t;
  t = SSL_table_put(m_35, s_49, t_49);
  t = (ATerm) ATmakeAppl(sym__3, term_f_10, s_49, t_49);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
      t = term_v_2;
      t = i_0(t);
      r_35 = t;
      t = term_e_11;
      s_35 = t;
      t = term_f_11;
      t_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_11, term_f_11, r_35);
      t = c_5(s_35, t_35, r_35, t);
      _fail(t);
    }
  else
    {
      ATerm w_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_35 = ATgetFirst((ATermList) t);
          q_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_35;
      t = d_0(t);
      t = term_v_2;
      t = g_0(t);
      w_35 = t;
      t = (ATerm) ATinsert(CheckATermList(q_35), w_35);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm y_35 = NULL;
  y_35 = t;
  if(match_string(t, "-o"))
    {
      t = y_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_35;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL;
  z_35 = t;
  t = term_g_11;
  a_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, z_35);
  t = e_5(a_36, z_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_35);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_h_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, b_3, c_3, t);
  return(t);
}
static ATerm c_5 (ATerm s_54, ATerm t_54, ATerm r_54, ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
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
        t = (ATerm) ATmakeAppl(sym__2, s_54, t_54);
        t = b_5(s_54, t_54, t);
        LocalPopChoice(j_11);
      }
    else
      {
        t = i_11;
        t = (ATerm) ATempty;
      }
  }
  d_36 = t;
  t = (ATerm) ATinsert(CheckATermList(d_36), r_54);
  e_36 = t;
  t = SSL_table_put(s_54, t_54, e_36);
  t = c_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
      t = term_v_2;
      t = p_0(t);
      p_36 = t;
      t = term_e_11;
      q_36 = t;
      t = term_f_11;
      r_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_e_11, term_f_11, p_36);
      t = c_5(q_36, r_36, p_36, t);
      _fail(t);
    }
  else
    {
      ATerm v_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_36 = ATgetFirst((ATermList) t);
          m_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_36 = ATgetFirst((ATermList) t);
          o_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_36;
      t = n_0(t);
      t = n_36;
      t = o_0(t);
      v_36 = t;
      t = (ATerm) ATinsert(CheckATermList(o_36), v_36);
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  if(match_string(t, "-i"))
    {
      t = x_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = x_36;
    }
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL;
  y_36 = t;
  t = term_m_11;
  z_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_11, y_36);
  t = e_5(z_36, y_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, y_36);
  return(t);
}
static ATerm f_3 (ATerm t)
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
  ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_2;
  t = whoami_0_0(t);
  a_37 = t;
  t = term_o_4;
  c_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_11), a_37);
  d_37 = t;
  t = SSL_printnl(c_37, d_37);
  t = term_a_5;
  b_37 = t;
  t = SSL_exit(b_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  return(t);
}
static ATerm z_4 (ATerm v_42, ATerm w_42, ATerm t)
{
  ATerm q_11 = t;
  int r_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(v_42, w_42);
      LocalPopChoice(r_11);
    }
  else
    {
      t = q_11;
      t = SSL_addr(v_42, w_42);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm a_94 (ATerm), ATerm b_94 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_37;
      t = a_94(t);
    }
  else
    {
      ATerm k_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_37 = ATgetFirst((ATermList) t);
          h_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_37;
      t = foldr_2_0(a_94, b_94, t);
      k_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_37, k_37);
      t = b_94(t);
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
  t = term_p_10;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL;
  if(match_cons(t, sym__2))
    {
      y_21 = ATgetArgument(t, 0);
      z_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(y_21, z_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_37 = NULL,u_21 = NULL,v_21 = NULL;
  t = times_0_0(t);
  v_21 = t;
  t = SSL_explode_term(v_21);
  if(match_cons(t, sym__2))
    {
      ATerm s_11 = ATgetArgument(t, 0);
      u_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_21;
  t = foldr_2_0(g_3, h_3, t);
  n_37 = t;
  t = SSL_TicksToSeconds(n_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  if(match_cons(t, sym__2))
    {
      z_37 = ATgetArgument(t, 0);
      a_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_38;
        if((z_37 != t))
          {
            _fail(t);
          }
        t = y_37;
        LocalPopChoice(u_11);
      }
    else
      {
        t = t_11;
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_37, a_38);
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              t = SSL_gtr(z_37, a_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm r_102 (ATerm), ATerm t)
{
  ATerm e_38 = NULL;
  e_38 = t;
  {
    ATerm x_11 = t;
    int y_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_38 = NULL;
        t = term_k_10;
        t = get_config_0_0(t);
        g_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_38, term_a_5);
        t = geq_0_0(t);
        t = e_38;
        t = r_102(t);
        LocalPopChoice(y_11);
      }
    else
      {
        t = x_11;
        t = e_38;
      }
  }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm i_38 = NULL,j_38 = NULL,l_38 = NULL,m_38 = NULL;
  t = run_time_0_0(t);
  i_38 = t;
  t = term_v_2;
  t = whoami_0_0(t);
  j_38 = t;
  t = term_o_4;
  l_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), i_38), term_z_11), j_38);
  m_38 = t;
  t = SSL_printnl(l_38, m_38);
  t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_12), i_38), term_z_11), j_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(i_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  n_38 = t;
  t = SSL_exit(n_38);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL;
  y_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_38 = ATgetArgument(t, 0);
          {
            ATerm l_22 = NULL,p_6 = NULL;
            t = SSLgetAnnotations(y_38);
            l_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_38);
            p_6 = t;
            t = SSLsetAnnotations(p_6, l_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  ATerm b_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_12;
      t = get_config_0_0(t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = b_12;
      t = fetch_1_0(j_3, t);
    }
  t = h_105(t);
  return(t);
}
ATerm map_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  static ATerm o_39 (ATerm t)
  {
    ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
    l_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_39;
      }
    else
      {
        ATerm t_22 = NULL,w_22 = NULL,x_22 = NULL,r_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_39 = ATgetFirst((ATermList) t);
            n_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_39);
        t_22 = t;
        t = m_39;
        t = x_87(t);
        w_22 = t;
        t = n_39;
        t = o_39(t);
        x_22 = t;
        t = (ATerm) ATinsert(CheckATermList(x_22), w_22);
        r_6 = t;
        t = SSLsetAnnotations(r_6, t_22);
      }
    return(t);
  }
  t = o_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm r_39 = NULL,s_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_39 = ATgetFirst((ATermList) t);
      s_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm w_39 = NULL,x_39 = NULL;
        static ATerm k_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(w_39)), not_null(x_39));
          return(t);
        }
        t = s_39;
        t = l_0(t);
        if(((w_39 != NULL) && (w_39 != t)))
          _fail(t);
        else
          w_39 = t;
        t = r_39;
        t = k_0(t);
        if(((x_39 != NULL) && (x_39 != t)))
          _fail(t);
        else
          x_39 = t;
        t = s_39;
        t = reverse_acc_2_0(k_0, k_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_2;
      t = l_0(t);
    }
  return(t);
}
static ATerm b_5 (ATerm j_56, ATerm k_56, ATerm t)
{
  t = SSL_table_get(j_56, k_56);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm h_40 = NULL,i_40 = NULL,k_40 = NULL,v_6 = NULL;
  k_40 = t;
  if(match_cons(t, sym_Program_1))
    {
      i_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_40);
  h_40 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, i_40);
  v_6 = t;
  t = SSLsetAnnotations(v_6, h_40);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm m_40 = NULL;
  m_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, m_40), term_f_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_39 = NULL,g_40 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_p_11;
      t = get_config_0_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = fetch_1_0(l_3, t);
    }
  t = term_i_12;
  t = echo_0_0(t);
  t = term_e_11;
  z_39 = t;
  t = term_f_11;
  g_40 = t;
  t = term_j_12;
  t = b_5(z_39, g_40, t);
  t = reverse_acc_2_0(_id, m_3, t);
  t = map_1_0(n_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = o_40;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_12 = ATgetFirst((ATermList) t);
                ATerm n_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = o_40;
          }
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        t = (ATerm) ATinsert(ATempty, o_40);
      }
  }
  p_40 = t;
  t = term_c_9;
  q_40 = t;
  t = SSL_printnl(q_40, p_40);
  t = o_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_p_11;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  t = term_o_12;
  u_40 = t;
  t = term_v_2;
  v_40 = t;
  t = term_p_12;
  t = e_5(u_40, v_40, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_q_12;
  return(t);
}
static ATerm r_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  t = term_o_12;
  y_40 = t;
  t = term_v_2;
  z_40 = t;
  t = term_p_12;
  t = e_5(y_40, z_40, t);
  t = term_r_12;
  w_40 = t;
  t = term_v_2;
  x_40 = t;
  t = term_s_12;
  t = e_5(w_40, x_40, t);
  t = term_t_12;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_u_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, q_3, t);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = Option_3_0(r_3, u_3, v_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_59 (ATerm), ATerm s_59 (ATerm), ATerm t)
{
  ATerm a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,a_7 = NULL;
  f_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_41 = ATgetFirst((ATermList) t);
      c_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_41);
  a_41 = t;
  t = b_41;
  t = r_59(t);
  d_41 = t;
  t = c_41;
  t = s_59(t);
  e_41 = t;
  t = (ATerm) ATinsert(CheckATermList(e_41), d_41);
  a_7 = t;
  t = SSLsetAnnotations(a_7, a_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_107 (ATerm), ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,p_41 = NULL,q_41 = NULL,f_7 = NULL;
  k_41 = t;
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_z_12;
        t = k_107(t);
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
      }
  }
  t = k_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_41 = ATgetFirst((ATermList) t);
      n_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_41);
  l_41 = t;
  t = term_p_11;
  q_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_p_11, m_41);
  t = e_5(q_41, m_41, t);
  t = n_41;
  {
    static ATerm a_42 (ATerm t)
    {
      ATerm a_13 = t;
      int b_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_41 = NULL;
              t_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = t_41;
              LocalPopChoice(e_13);
            }
          else
            {
              t = d_13;
              t = k_107(t);
              t = Cons_2_0(_id, a_42, t);
            }
          LocalPopChoice(b_13);
        }
      else
        {
          t = a_13;
          {
            ATerm w_41 = NULL,x_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                w_41 = ATgetFirst((ATermList) t);
                x_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(x_41), (ATerm) ATmakeAppl(sym_Undefined_1, w_41));
          }
        }
      return(t);
    }
    t = a_42(t);
  }
  p_41 = t;
  t = (ATerm) ATinsert(CheckATermList(p_41), (ATerm) ATmakeAppl(sym_Program_1, m_41));
  f_7 = t;
  t = SSLsetAnnotations(f_7, l_41);
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm m_42 = NULL;
  m_42 = t;
  if(match_string(t, "--help"))
    {
      t = m_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = m_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = m_42;
        }
    }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL;
  t = term_e_12;
  n_42 = t;
  t = term_v_2;
  o_42 = t;
  t = term_f_13;
  t = e_5(n_42, o_42, t);
  t = term_i_13;
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_j_13;
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm j_107 (ATerm), ATerm t)
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  h_42 = t;
  t = term_e_11;
  j_42 = t;
  t = term_f_11;
  k_42 = t;
  t = (ATerm) ATempty;
  l_42 = t;
  t = SSL_table_put(j_42, k_42, l_42);
  t = h_42;
  {
    static ATerm w_3 (ATerm t)
    {
      ATerm m_13 = t;
      int o_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_107(t);
          LocalPopChoice(o_13);
        }
      else
        {
          t = m_13;
          {
            ATerm p_13 = t;
            int r_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(x_3, y_3, z_3, t);
                LocalPopChoice(r_13);
              }
            else
              {
                t = p_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_3, t);
  }
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_42 = NULL;
        x_42 = t;
        {
          ATerm u_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_23 = NULL;
              t = x_42;
              {
                ATerm x_13 = t;
                int y_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_e_12;
                    t = get_config_0_0(t);
                    LocalPopChoice(y_13);
                  }
                else
                  {
                    t = x_13;
                    t = fetch_1_0(a_4, t);
                  }
              }
              t = x_42;
              t = default_system_usage_0_0(t);
              t = term_p_10;
              e_23 = t;
              t = SSL_exit(e_23);
              LocalPopChoice(w_13);
            }
          else
            {
              t = u_13;
              {
                ATerm i_23 = NULL;
                t = term_o_12;
                t = get_config_0_0(t);
                t = x_42;
                t = default_system_about_0_0(t);
                t = term_p_10;
                i_23 = t;
                t = SSL_exit(i_23);
              }
            }
        }
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        {
          ATerm z_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL;
              static ATerm b_4 (ATerm t)
              {
                ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL,h_7 = NULL;
                d_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    c_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(d_43);
                b_43 = t;
                t = c_43;
                if(((f_42 != NULL) && (f_42 != t)))
                  _fail(t);
                else
                  f_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, c_43);
                h_7 = t;
                t = SSLsetAnnotations(h_7, b_43);
                return(t);
              }
              t = fetch_1_0(b_4, t);
              t = term_o_4;
              z_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_42)), term_c_14);
              a_43 = t;
              t = SSL_printnl(z_42, a_43);
              t = (ATerm) ATmakeAppl(sym__2, term_o_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_42)), term_c_14));
              t = default_system_usage_0_0(t);
              t = term_a_5;
              y_42 = t;
              t = SSL_exit(y_42);
              LocalPopChoice(b_14);
            }
          else
            {
              t = z_13;
            }
        }
      }
  }
  g_42 = t;
  t = term_e_11;
  i_42 = t;
  t = SSL_table_destroy(i_42);
  t = g_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm j_105 (ATerm), ATerm k_105 (ATerm), ATerm l_105 (ATerm), ATerm m_105 (ATerm), ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL;
  t = parse_options_1_0(j_105, t);
  i_43 = t;
  t = term_d_14;
  l_43 = t;
  t = SSL_table_create(l_43);
  t = term_d_14;
  j_43 = t;
  t = term_e_14;
  k_43 = t;
  t = SSL_table_put(j_43, k_43, i_43);
  t = i_43;
  t = l_105(t);
  {
    ATerm g_14 = t;
    int h_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(k_105, t);
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
              t = m_105(t);
              t = report_success_0_0(t);
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
static ATerm d_4 (ATerm t)
{
  t = if_verbose2_1_0(k_4, t);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  t = term_k_14;
  m_43 = t;
  t = term_v_2;
  n_43 = t;
  t = term_l_14;
  t = e_5(m_43, n_43, t);
  t = term_m_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_n_14;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm o_43 = NULL,p_43 = NULL,q_43 = NULL,r_43 = NULL;
  o_43 = t;
  t = term_p_11;
  t = get_config_0_0(t);
  p_43 = t;
  t = term_o_4;
  q_43 = t;
  t = (ATerm) ATinsert(ATempty, p_43);
  r_43 = t;
  t = SSL_printnl(q_43, r_43);
  t = o_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm s_104 (ATerm), ATerm t_104 (ATerm), ATerm u_104 (ATerm), ATerm t)
{
  static ATerm c_4 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_104(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        {
          ATerm q_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_14);
            }
          else
            {
              t = q_14;
              {
                ATerm v_14 = t;
                int w_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(w_14);
                  }
                else
                  {
                    t = v_14;
                    {
                      ATerm x_14 = t;
                      int y_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(f_4, g_4, h_4, t);
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          {
                            ATerm z_14 = t;
                            int a_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
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
  static ATerm e_4 (ATerm t)
  {
    ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL;
    t_43 = t;
    {
      ATerm b_15 = t;
      int c_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm l_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((s_43 != NULL) && (s_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  s_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(l_4, t);
          LocalPopChoice(c_15);
        }
      else
        {
          t = b_15;
          t = term_d_15;
          s_43 = t;
        }
    }
    t = not_null(s_43);
    t = ReadFromFile_0_0(t);
    u_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, t_43, u_43);
    t = apply_strategy_1_0(s_104, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(c_4, u_104, d_4, e_4, t);
  return(t);
}
static ATerm m_4 (ATerm t)
{
  ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,c_44 = NULL,l_7 = NULL;
  c_44 = t;
  if(match_cons(t, sym__2))
    {
      y_43 = ATgetArgument(t, 0);
      z_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_44);
  x_43 = t;
  t = z_43;
  t = topdown_1_0(n_4, t);
  a_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_43, a_44);
  l_7 = t;
  t = SSLsetAnnotations(l_7, x_43);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
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
