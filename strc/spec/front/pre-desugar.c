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
Symbol sym_Hashtable_1;
Symbol sym_Specification_1;
Symbol sym_Module_2;
Symbol sym_Overlay_3;
Symbol sym_OverlayNoArgs_2;
Symbol sym_Con4_4;
Symbol sym_Con3_3;
Symbol sym_Con_3;
Symbol sym_Con1_2;
Symbol sym_ListTail_2;
Symbol sym_List_1;
Symbol sym_Tuple_1;
Symbol sym_Anno_2;
Symbol sym_Op_2;
Symbol sym_Char_1;
Symbol sym_Str_1;
Symbol sym_Real_1;
Symbol sym_Int_1;
Symbol sym_Var_1;
Symbol sym_Var_1;
Symbol sym_StrategyCurly_1;
Symbol sym_SVar_1;
Symbol sym_RChoice_2;
Symbol sym_CallNoArgs_1;
Symbol sym_ListCong_2;
Symbol sym_ListCongNoTail_1;
Symbol sym_ModCong_2;
Symbol sym_ModCongNoArgs_1;
Symbol sym_TupleCong_2;
Symbol sym_EmptyTupleCong_0;
Symbol sym_AnnoCong_2;
Symbol sym_CharCong_1;
Symbol sym_RealCong_1;
Symbol sym_IntCong_1;
Symbol sym_StrCong_1;
Symbol sym_Path_2;
Symbol sym_PrimT_3;
Symbol sym_Prim_2;
Symbol sym_PrimNoArgs_1;
Symbol sym_LChoice_2;
Symbol sym_Match_1;
Symbol sym_CallT_3;
Symbol sym_Call_2;
Symbol sym_Id_0;
Symbol sym_ParenStrat_1;
Symbol sym_VarDec_2;
Symbol sym_DefaultVarDec_1;
Symbol sym_SDefT_4;
Symbol sym_SDef_3;
Symbol sym_SDefNoArgs_2;
Symbol sym_OpDecl_2;
Symbol sym_Sort_2;
Symbol sym_SortNoArgs_1;
Symbol sym_StratRule_3;
Symbol sym_StratRuleNoCond_2;
Symbol sym_Rule_3;
Symbol sym_RuleNoCond_2;
Symbol sym_SRDefT_4;
Symbol sym_SRDef_3;
Symbol sym_SRDefNoArgs_2;
Symbol sym_RDefT_4;
Symbol sym_RDef_3;
Symbol sym_RDefNoArgs_2;
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
  sym_Specification_1 = ATmakeSymbol("Specification", 1, ATfalse);
  ATprotectSymbol(sym_Specification_1);
  sym_Module_2 = ATmakeSymbol("Module", 2, ATfalse);
  ATprotectSymbol(sym_Module_2);
  sym_Overlay_3 = ATmakeSymbol("Overlay", 3, ATfalse);
  ATprotectSymbol(sym_Overlay_3);
  sym_OverlayNoArgs_2 = ATmakeSymbol("OverlayNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_OverlayNoArgs_2);
  sym_Con4_4 = ATmakeSymbol("Con4", 4, ATfalse);
  ATprotectSymbol(sym_Con4_4);
  sym_Con3_3 = ATmakeSymbol("Con3", 3, ATfalse);
  ATprotectSymbol(sym_Con3_3);
  sym_Con_3 = ATmakeSymbol("Con", 3, ATfalse);
  ATprotectSymbol(sym_Con_3);
  sym_Con1_2 = ATmakeSymbol("Con1", 2, ATfalse);
  ATprotectSymbol(sym_Con1_2);
  sym_ListTail_2 = ATmakeSymbol("ListTail", 2, ATfalse);
  ATprotectSymbol(sym_ListTail_2);
  sym_List_1 = ATmakeSymbol("List", 1, ATfalse);
  ATprotectSymbol(sym_List_1);
  sym_Tuple_1 = ATmakeSymbol("Tuple", 1, ATfalse);
  ATprotectSymbol(sym_Tuple_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Op_2 = ATmakeSymbol("Op", 2, ATfalse);
  ATprotectSymbol(sym_Op_2);
  sym_Char_1 = ATmakeSymbol("Char", 1, ATfalse);
  ATprotectSymbol(sym_Char_1);
  sym_Str_1 = ATmakeSymbol("Str", 1, ATfalse);
  ATprotectSymbol(sym_Str_1);
  sym_Real_1 = ATmakeSymbol("Real", 1, ATfalse);
  ATprotectSymbol(sym_Real_1);
  sym_Int_1 = ATmakeSymbol("Int", 1, ATfalse);
  ATprotectSymbol(sym_Int_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_StrategyCurly_1 = ATmakeSymbol("StrategyCurly", 1, ATfalse);
  ATprotectSymbol(sym_StrategyCurly_1);
  sym_SVar_1 = ATmakeSymbol("SVar", 1, ATfalse);
  ATprotectSymbol(sym_SVar_1);
  sym_RChoice_2 = ATmakeSymbol("RChoice", 2, ATfalse);
  ATprotectSymbol(sym_RChoice_2);
  sym_CallNoArgs_1 = ATmakeSymbol("CallNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_CallNoArgs_1);
  sym_ListCong_2 = ATmakeSymbol("ListCong", 2, ATfalse);
  ATprotectSymbol(sym_ListCong_2);
  sym_ListCongNoTail_1 = ATmakeSymbol("ListCongNoTail", 1, ATfalse);
  ATprotectSymbol(sym_ListCongNoTail_1);
  sym_ModCong_2 = ATmakeSymbol("ModCong", 2, ATfalse);
  ATprotectSymbol(sym_ModCong_2);
  sym_ModCongNoArgs_1 = ATmakeSymbol("ModCongNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_ModCongNoArgs_1);
  sym_TupleCong_2 = ATmakeSymbol("TupleCong", 2, ATfalse);
  ATprotectSymbol(sym_TupleCong_2);
  sym_EmptyTupleCong_0 = ATmakeSymbol("EmptyTupleCong", 0, ATfalse);
  ATprotectSymbol(sym_EmptyTupleCong_0);
  sym_AnnoCong_2 = ATmakeSymbol("AnnoCong", 2, ATfalse);
  ATprotectSymbol(sym_AnnoCong_2);
  sym_CharCong_1 = ATmakeSymbol("CharCong", 1, ATfalse);
  ATprotectSymbol(sym_CharCong_1);
  sym_RealCong_1 = ATmakeSymbol("RealCong", 1, ATfalse);
  ATprotectSymbol(sym_RealCong_1);
  sym_IntCong_1 = ATmakeSymbol("IntCong", 1, ATfalse);
  ATprotectSymbol(sym_IntCong_1);
  sym_StrCong_1 = ATmakeSymbol("StrCong", 1, ATfalse);
  ATprotectSymbol(sym_StrCong_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PrimT_3 = ATmakeSymbol("PrimT", 3, ATfalse);
  ATprotectSymbol(sym_PrimT_3);
  sym_Prim_2 = ATmakeSymbol("Prim", 2, ATfalse);
  ATprotectSymbol(sym_Prim_2);
  sym_PrimNoArgs_1 = ATmakeSymbol("PrimNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_PrimNoArgs_1);
  sym_LChoice_2 = ATmakeSymbol("LChoice", 2, ATfalse);
  ATprotectSymbol(sym_LChoice_2);
  sym_Match_1 = ATmakeSymbol("Match", 1, ATfalse);
  ATprotectSymbol(sym_Match_1);
  sym_CallT_3 = ATmakeSymbol("CallT", 3, ATfalse);
  ATprotectSymbol(sym_CallT_3);
  sym_Call_2 = ATmakeSymbol("Call", 2, ATfalse);
  ATprotectSymbol(sym_Call_2);
  sym_Id_0 = ATmakeSymbol("Id", 0, ATfalse);
  ATprotectSymbol(sym_Id_0);
  sym_ParenStrat_1 = ATmakeSymbol("ParenStrat", 1, ATfalse);
  ATprotectSymbol(sym_ParenStrat_1);
  sym_VarDec_2 = ATmakeSymbol("VarDec", 2, ATfalse);
  ATprotectSymbol(sym_VarDec_2);
  sym_DefaultVarDec_1 = ATmakeSymbol("DefaultVarDec", 1, ATfalse);
  ATprotectSymbol(sym_DefaultVarDec_1);
  sym_SDefT_4 = ATmakeSymbol("SDefT", 4, ATfalse);
  ATprotectSymbol(sym_SDefT_4);
  sym_SDef_3 = ATmakeSymbol("SDef", 3, ATfalse);
  ATprotectSymbol(sym_SDef_3);
  sym_SDefNoArgs_2 = ATmakeSymbol("SDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SDefNoArgs_2);
  sym_OpDecl_2 = ATmakeSymbol("OpDecl", 2, ATfalse);
  ATprotectSymbol(sym_OpDecl_2);
  sym_Sort_2 = ATmakeSymbol("Sort", 2, ATfalse);
  ATprotectSymbol(sym_Sort_2);
  sym_SortNoArgs_1 = ATmakeSymbol("SortNoArgs", 1, ATfalse);
  ATprotectSymbol(sym_SortNoArgs_1);
  sym_StratRule_3 = ATmakeSymbol("StratRule", 3, ATfalse);
  ATprotectSymbol(sym_StratRule_3);
  sym_StratRuleNoCond_2 = ATmakeSymbol("StratRuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_StratRuleNoCond_2);
  sym_Rule_3 = ATmakeSymbol("Rule", 3, ATfalse);
  ATprotectSymbol(sym_Rule_3);
  sym_RuleNoCond_2 = ATmakeSymbol("RuleNoCond", 2, ATfalse);
  ATprotectSymbol(sym_RuleNoCond_2);
  sym_SRDefT_4 = ATmakeSymbol("SRDefT", 4, ATfalse);
  ATprotectSymbol(sym_SRDefT_4);
  sym_SRDef_3 = ATmakeSymbol("SRDef", 3, ATfalse);
  ATprotectSymbol(sym_SRDef_3);
  sym_SRDefNoArgs_2 = ATmakeSymbol("SRDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_SRDefNoArgs_2);
  sym_RDefT_4 = ATmakeSymbol("RDefT", 4, ATfalse);
  ATprotectSymbol(sym_RDefT_4);
  sym_RDef_3 = ATmakeSymbol("RDef", 3, ATfalse);
  ATprotectSymbol(sym_RDef_3);
  sym_RDefNoArgs_2 = ATmakeSymbol("RDefNoArgs", 2, ATfalse);
  ATprotectSymbol(sym_RDefNoArgs_2);
}
ATerm term_f_15;
ATerm term_p_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_d_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_l_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_s_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_u_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_l_4));
  term_l_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_m_4));
  term_m_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_4));
  term_n_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_m_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATempty);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_Call_2, term_i_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_8);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_Call_2, term_k_8, (ATerm) ATempty);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, (ATerm) ATempty);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_8);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_a_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_a_10, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_g_10);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_u_2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_g_11);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_w_11);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_u_2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_u_2);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_u_2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, (ATerm) ATempty);
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_m_12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_u_2);
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm f_105 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm n_27 (ATerm g_17, ATerm h_17, ATerm t);
static ATerm o_27 (ATerm t_17, ATerm a_18, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm r_97 (ATerm), ATerm t);
static ATerm w_4 (ATerm f_42, ATerm g_42, ATerm t);
static ATerm x_4 (ATerm x_26, ATerm y_26, ATerm t);
static ATerm z_4 (ATerm u_103 (ATerm), ATerm j_185, ATerm d_27, ATerm t);
static ATerm y_4 (ATerm t_26, ATerm u_26, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm s_122 (ATerm), ATerm t);
static ATerm g_32 (ATerm a_32, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm a_5 (ATerm z_26, ATerm t);
static ATerm b_5 (ATerm v_40, ATerm w_40, ATerm t);
static ATerm c_5 (ATerm h_42, ATerm i_42, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm r_33 (ATerm q_32, ATerm t);
static ATerm s_33 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t);
static ATerm t_33 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm t);
static ATerm d_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm n_104 (ATerm), ATerm t);
static ATerm i_5 (ATerm d_67, ATerm e_67, ATerm t);
ATerm if_verbose2_1_0 (ATerm b_121 (ATerm), ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm l_5 (ATerm p_60, ATerm q_60, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm j_5 (ATerm k_65, ATerm l_65, ATerm j_65, ATerm t);
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm e_5 (ATerm b_45, ATerm c_45, ATerm t);
ATerm foldr_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm a_121 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm need_help_1_0 (ATerm q_123 (ATerm), ATerm t);
static ATerm m_5 (ATerm c_70, ATerm d_70, ATerm e_70, ATerm t);
static ATerm n_5 (ATerm f_70, ATerm g_70, ATerm t);
ATerm lookup_table_0_1 (ATerm w_66, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_70, ATerm l_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm g_5 (ATerm h_70, ATerm i_70, ATerm t);
static ATerm h_5 (ATerm m_70, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm d_104 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm t_125 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm parse_options_1_0 (ATerm s_125 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm iowrap_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,f_0 = NULL,i_0 = NULL;
  a_0 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_l_4;
  f_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_4), c_0), term_m_4);
  i_0 = t;
  t = SSL_printnl(f_0, i_0);
  t = term_o_4;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm f_105 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t);
  static ATerm f_2 (ATerm t)
  {
    ATerm w_1 = NULL,b_2 = NULL,d_2 = NULL;
    w_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_2 = ATgetFirst((ATermList) t);
        d_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_4 = t;
      int q_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(w_1);
          q_0 = t;
          t = d_2;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(d_2), b_2);
          r_0 = t;
          t = SSLsetAnnotations(r_0, q_0);
          t = f_105(t);
          LocalPopChoice(q_4);
        }
      else
        {
          t = p_4;
          {
            ATerm p_1 = NULL,s_1 = NULL,s_0 = NULL;
            t = SSLgetAnnotations(w_1);
            p_1 = t;
            t = d_2;
            t = f_2(t);
            s_1 = t;
            t = (ATerm) ATinsert(CheckATermList(s_1), b_2);
            s_0 = t;
            t = SSLsetAnnotations(s_0, p_1);
          }
        }
    }
    return(t);
  }
  t = f_2(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_2 = ATgetFirst((ATermList) t);
      p_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_2;
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
  ATerm z_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_4 = ATgetFirst((ATermList) t);
      z_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = z_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm f_114 (ATerm), ATerm g_114 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,x_2 = NULL;
  v_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      x_2 = ATgetFirst((ATermList) t);
      {
        ATerm u_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = x_2;
  t = f_114(t);
  t = v_2;
  t = last_0_0(t);
  t = g_114(t);
  t = v_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_4 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_2;
  t = at_last_1_0(b_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm e_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,k_14 = NULL,o_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym_Real_1))
    {
      k_14 = ATgetArgument(t, 0);
      {
        ATerm c_2 = NULL;
        t = SSL_string_to_real(k_14);
        c_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, c_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          k_14 = ATgetArgument(t, 0);
          {
            ATerm n_2 = NULL;
            t = SSL_string_to_int(k_14);
            n_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, n_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              k_14 = ATgetArgument(t, 0);
              o_14 = ATgetArgument(t, 1);
              c_14 = ATgetArgument(t, 2);
              t = SSL_is_string(c_14);
              t = (ATerm) ATmakeAppl(sym_Con_3, k_14, o_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_14), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  k_14 = ATgetArgument(t, 0);
                  o_14 = ATgetArgument(t, 1);
                  c_14 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = k_14;
                    {
                      ATerm f_5 = t;
                      int k_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(k_14);
                          t = unquote_chars_2_0(k_0, n_0, t);
                          t_3 = t;
                          t = SSL_implode_string(t_3);
                          LocalPopChoice(k_5);
                        }
                      else
                        {
                          t = f_5;
                        }
                    }
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, o_14, c_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      k_14 = ATgetArgument(t, 0);
                      o_14 = ATgetArgument(t, 1);
                      {
                        ATerm f_4 = NULL;
                        t = k_14;
                        {
                          ATerm o_5 = t;
                          int p_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 = NULL;
                              t = SSL_explode_string(k_14);
                              t = unquote_chars_2_0(t_0, u_0, t);
                              g_4 = t;
                              t = SSL_implode_string(g_4);
                              LocalPopChoice(p_5);
                            }
                          else
                            {
                              t = o_5;
                            }
                        }
                        f_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, (ATerm)ATempty, o_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          k_14 = ATgetArgument(t, 0);
                          {
                            ATerm r_4 = NULL;
                            t = k_14;
                            {
                              ATerm q_5 = t;
                              int r_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_4 = NULL;
                                  t = SSL_explode_string(k_14);
                                  t = unquote_chars_2_0(v_0, e_1, t);
                                  s_4 = t;
                                  t = SSL_implode_string(s_4);
                                  LocalPopChoice(r_5);
                                }
                              else
                                {
                                  t = q_5;
                                }
                            }
                            r_4 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, r_4, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              k_14 = ATgetArgument(t, 0);
                              {
                                ATerm x_5 = NULL,a_6 = NULL,b_6 = NULL,w_0 = NULL;
                                t = SSLgetAnnotations(d_14);
                                x_5 = t;
                                t = SSL_explode_string(k_14);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm s_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(s_5) != AT_INT) || (ATgetInt((ATermInt) s_5) != 39)))
                                      _fail(t);
                                    a_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(a_6);
                                b_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, b_6);
                                w_0 = t;
                                t = SSLsetAnnotations(w_0, x_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  k_14 = ATgetArgument(t, 0);
                                  o_14 = ATgetArgument(t, 1);
                                  c_14 = ATgetArgument(t, 2);
                                  b_14 = ATgetArgument(t, 3);
                                  {
                                    ATerm c_7 = NULL,k_7 = NULL,m_7 = NULL,x_0 = NULL;
                                    t = SSLgetAnnotations(d_14);
                                    c_7 = t;
                                    t = SSL_explode_string(k_14);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm t_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(t_5) != AT_INT) || (ATgetInt((ATermInt) t_5) != 39)))
                                          _fail(t);
                                        k_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(k_7);
                                    m_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, m_7, o_14, c_14, b_14);
                                    x_0 = t;
                                    t = SSLsetAnnotations(x_0, c_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      k_14 = ATgetArgument(t, 0);
                                      o_14 = ATgetArgument(t, 1);
                                      c_14 = ATgetArgument(t, 2);
                                      {
                                        ATerm p_8 = NULL,y_8 = NULL,z_8 = NULL,y_0 = NULL;
                                        t = SSLgetAnnotations(d_14);
                                        p_8 = t;
                                        t = SSL_explode_string(k_14);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm w_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(w_5) != AT_INT) || (ATgetInt((ATermInt) w_5) != 39)))
                                              _fail(t);
                                            y_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(y_8);
                                        z_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, z_8, o_14, c_14);
                                        y_0 = t;
                                        t = SSLsetAnnotations(y_0, p_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          k_14 = ATgetArgument(t, 0);
                                          o_14 = ATgetArgument(t, 1);
                                          c_14 = ATgetArgument(t, 2);
                                          b_14 = ATgetArgument(t, 3);
                                          {
                                            ATerm c_10 = NULL,q_10 = NULL,s_10 = NULL,z_0 = NULL;
                                            t = SSLgetAnnotations(d_14);
                                            c_10 = t;
                                            t = SSL_explode_string(k_14);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm y_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                                  _fail(t);
                                                q_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(q_10);
                                            s_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_10, o_14, c_14, b_14);
                                            z_0 = t;
                                            t = SSLsetAnnotations(z_0, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              k_14 = ATgetArgument(t, 0);
                                              o_14 = ATgetArgument(t, 1);
                                              c_14 = ATgetArgument(t, 2);
                                              {
                                                ATerm t_11 = NULL,c_12 = NULL,d_13 = NULL,a_1 = NULL;
                                                t = SSLgetAnnotations(d_14);
                                                t_11 = t;
                                                t = SSL_explode_string(k_14);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm z_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                                      _fail(t);
                                                    c_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(c_12);
                                                d_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, d_13, o_14, c_14);
                                                a_1 = t;
                                                t = SSLsetAnnotations(a_1, t_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  k_14 = ATgetArgument(t, 0);
                                                  o_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm o_13 = NULL,t_13 = NULL,u_13 = NULL,b_1 = NULL;
                                                    t = SSLgetAnnotations(d_14);
                                                    o_13 = t;
                                                    t = SSL_explode_string(k_14);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm e_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(e_6) != AT_INT) || (ATgetInt((ATermInt) e_6) != 39)))
                                                          _fail(t);
                                                        t_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(t_13);
                                                    u_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, u_13, o_14);
                                                    b_1 = t;
                                                    t = SSLsetAnnotations(b_1, o_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      k_14 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm h_14 = NULL,j_14 = NULL,l_14 = NULL,c_1 = NULL;
                                                        t = SSLgetAnnotations(d_14);
                                                        h_14 = t;
                                                        t = SSL_explode_string(k_14);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm h_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 39)))
                                                              _fail(t);
                                                            j_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(j_14);
                                                        l_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, l_14);
                                                        c_1 = t;
                                                        t = SSLsetAnnotations(c_1, h_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          k_14 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm z_14 = NULL,c_15 = NULL,e_15 = NULL,d_1 = NULL;
                                                            t = SSLgetAnnotations(d_14);
                                                            z_14 = t;
                                                            t = SSL_explode_string(k_14);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm i_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                                                  _fail(t);
                                                                c_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(c_15);
                                                            e_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, e_15);
                                                            d_1 = t;
                                                            t = SSLsetAnnotations(d_1, z_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              k_14 = ATgetArgument(t, 0);
                                                              o_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,f_1 = NULL;
                                                                t = SSLgetAnnotations(d_14);
                                                                p_15 = t;
                                                                t = SSL_explode_string(k_14);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm j_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(j_6) != AT_INT) || (ATgetInt((ATermInt) j_6) != 39)))
                                                                      _fail(t);
                                                                    u_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(u_15);
                                                                v_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_15, o_14);
                                                                f_1 = t;
                                                                t = SSLsetAnnotations(f_1, p_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL,l_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  k_14 = ATgetArgument(t, 0);
                                                                  o_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(d_14);
                                                              g_16 = t;
                                                              t = SSL_explode_string(k_14);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm k_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(k_6) != AT_INT) || (ATgetInt((ATermInt) k_6) != 39)))
                                                                    _fail(t);
                                                                  j_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(j_16);
                                                              k_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_16, o_14);
                                                              l_1 = t;
                                                              t = SSLsetAnnotations(l_1, g_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm n_27 (ATerm g_17, ATerm h_17, ATerm t)
{
  t = g_17;
  {
    ATerm l_6 = t;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL,m_17 = NULL,o_17 = NULL,p_17 = NULL,u_5 = NULL;
        p_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_17 = ATgetFirst((ATermList) t);
            o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(p_17);
        l_17 = t;
        t = o_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_17), m_17);
        u_5 = t;
        t = SSLsetAnnotations(u_5, l_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, g_17);
  return(t);
}
static ATerm o_27 (ATerm t_17, ATerm a_18, ATerm t)
{
  t = t_17;
  {
    ATerm n_6 = t;
    if((PushChoice() == 0))
      {
        ATerm e_18 = NULL,g_18 = NULL,j_18 = NULL,k_18 = NULL,v_5 = NULL;
        k_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_18 = ATgetFirst((ATermList) t);
            j_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_18);
        e_18 = t;
        t = j_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_18), g_18);
        v_5 = t;
        t = SSLsetAnnotations(v_5, e_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, t_17);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm c_19 = NULL,e_19 = NULL,p_16 = NULL;
  c_19 = t;
  t = SSL_explode_term(c_19);
  if(match_cons(t, sym__2))
    {
      ATerm t_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            e_19 = ATgetFirst((ATermList) u_6);
            {
              ATerm x_6 = (ATerm) ATgetNext((ATermList) u_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(c_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_6 = ATgetArgument(t, 1);
        if(((ATgetType(z_6) == AT_LIST) && !(ATisEmpty(z_6))))
          {
            ATerm b_7 = ATgetFirst((ATermList) z_6);
            ATerm e_7 = (ATerm) ATgetNext((ATermList) z_6);
            if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
              {
                p_16 = ATgetFirst((ATermList) e_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, p_16), e_19));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, b_20), a_20));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL;
  if(match_cons(t, sym__2))
    {
      g_20 = ATgetArgument(t, 0);
      h_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, h_20), g_20));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm d_21 = NULL,h_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, h_21), d_21));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_l_7;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL;
  if(match_cons(t, sym__2))
    {
      j_21 = ATgetArgument(t, 0);
      k_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, k_21), j_21));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,q_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      w_18 = ATgetArgument(t, 0);
      x_18 = ATgetArgument(t, 1);
      {
        ATerm a_19 = NULL;
        t = x_18;
        t = foldr_2_0(g_1, h_1, t);
        a_19 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, w_18, a_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          w_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, w_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              w_18 = ATgetArgument(t, 0);
              {
                ATerm u_16 = NULL;
                t = w_18;
                {
                  ATerm n_7 = t;
                  int p_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_r_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_s_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_u_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_w_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_x_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(p_7);
                    }
                  else
                    {
                      t = n_7;
                      {
                        ATerm z_16 = NULL;
                        t = SSL_explode_string(w_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm y_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(y_7) != AT_INT) || (ATgetInt((ATermInt) y_7) != 39)))
                              _fail(t);
                            {
                              ATerm z_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
                                {
                                  z_16 = ATgetFirst((ATermList) z_7);
                                  {
                                    ATerm a_8 = (ATerm) ATgetNext((ATermList) z_7);
                                    if(((ATgetType(a_8) == AT_LIST) && !(ATisEmpty(a_8))))
                                      {
                                        ATerm b_8 = ATgetFirst((ATermList) a_8);
                                        if(((ATgetType(b_8) != AT_INT) || (ATgetInt((ATermInt) b_8) != 39)))
                                          _fail(t);
                                        {
                                          ATerm c_8 = (ATerm) ATgetNext((ATermList) a_8);
                                          if(((ATgetType(c_8) != AT_LIST) || !(ATisEmpty(c_8))))
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
                        t = z_16;
                      }
                    }
                }
                u_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, u_16);
              }
            }
          else
            {
              ATerm d_8 = t;
              int e_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      w_18 = ATgetArgument(t, 0);
                      {
                        ATerm f_8 = ATgetArgument(t, 1);
                      }
                      u_18 = ATgetArgument(t, 2);
                      n_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, w_18, u_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_18), (ATerm) ATempty));
                }
              else
                {
                  t = d_8;
                  {
                    ATerm g_8 = t;
                    int h_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            w_18 = ATgetArgument(t, 0);
                            {
                              ATerm i_8 = ATgetArgument(t, 1);
                            }
                            u_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, w_18, u_18, term_l_8);
                      }
                    else
                      {
                        t = g_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            w_18 = ATgetArgument(t, 0);
                            x_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, w_18, x_18, term_l_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                w_18 = ATgetArgument(t, 0);
                                x_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t);
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = x_18;
                                    return(t);
                                  }
                                  t = w_18;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    w_18 = ATgetArgument(t, 0);
                                    t = w_18;
                                    t = foldr_2_0(k_1, m_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        w_18 = ATgetArgument(t, 0);
                                        t = w_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            p_18 = ATgetFirst((ATermList) t);
                                            q_18 = (ATerm) ATgetNext((ATermList) t);
                                            t = q_18;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm m_8 = t;
                                                int n_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_27(w_18, v_18, t);
                                                    LocalPopChoice(n_8);
                                                  }
                                                else
                                                  {
                                                    t = m_8;
                                                    t = p_18;
                                                  }
                                              }
                                            else
                                              {
                                                t = n_27(w_18, v_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = n_27(w_18, v_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            w_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, w_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                w_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, w_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    w_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, w_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        w_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, w_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            w_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                w_18 = ATgetArgument(t, 0);
                                                                x_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, w_18), x_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    w_18 = ATgetArgument(t, 0);
                                                                    x_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm n_1 (ATerm t);
                                                                      static ATerm n_1 (ATerm t)
                                                                      {
                                                                        t = x_18;
                                                                        return(t);
                                                                      }
                                                                      t = w_18;
                                                                      t = foldr_2_0(n_1, o_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        w_18 = ATgetArgument(t, 0);
                                                                        t = w_18;
                                                                        t = foldr_2_0(q_1, r_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            w_18 = ATgetArgument(t, 0);
                                                                            x_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, (ATerm) ATinsert(CheckATermList(x_18), w_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                w_18 = ATgetArgument(t, 0);
                                                                                t = w_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    p_18 = ATgetFirst((ATermList) t);
                                                                                    q_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = q_18;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm o_8 = t;
                                                                                        int q_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = o_27(w_18, v_18, t);
                                                                                            LocalPopChoice(q_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = o_8;
                                                                                            t = p_18;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_27(w_18, v_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_27(w_18, v_18, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_r_8;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        w_18 = ATgetArgument(t, 0);
                                                                                        x_18 = ATgetArgument(t, 1);
                                                                                        t = x_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            t_18 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, t_18), w_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            w_18 = ATgetArgument(t, 0);
                                                                                            t = w_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                w_18 = ATgetArgument(t, 0);
                                                                                                x_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, w_18, x_18, term_u_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    w_18 = ATgetArgument(t, 0);
                                                                                                    x_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, w_18, x_18, term_u_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        w_18 = ATgetArgument(t, 0);
                                                                                                        x_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, w_18, (ATerm)ATempty, x_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            w_18 = ATgetArgument(t, 0);
                                                                                                            x_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, x_18, w_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                w_18 = ATgetArgument(t, 0);
                                                                                                                x_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, w_18, x_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    w_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, w_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        w_18 = ATgetArgument(t, 0);
                                                                                                                        x_18 = ATgetArgument(t, 1);
                                                                                                                        u_18 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, w_18, x_18, (ATerm)ATempty, u_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            w_18 = ATgetArgument(t, 0);
                                                                                                                            x_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_18, (ATerm)ATempty, (ATerm)ATempty, x_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                w_18 = ATgetArgument(t, 0);
                                                                                                                                x_18 = ATgetArgument(t, 1);
                                                                                                                                u_18 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_18, x_18, (ATerm)ATempty, u_18);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    w_18 = ATgetArgument(t, 0);
                                                                                                                                    x_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, w_18, (ATerm)ATempty, (ATerm)ATempty, x_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        w_18 = ATgetArgument(t, 0);
                                                                                                                                        x_18 = ATgetArgument(t, 1);
                                                                                                                                        u_18 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, w_18, x_18, (ATerm)ATempty, u_18);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            w_18 = ATgetArgument(t, 0);
                                                                                                                                            x_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, w_18, (ATerm)ATempty, (ATerm)ATempty, x_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm v_8 = ATgetArgument(t, 0);
                                                                                                                                                x_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, x_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm r_96 (ATerm), ATerm s_96 (ATerm), ATerm t)
{
  static ATerm r_27 (ATerm t);
  static ATerm r_27 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_96(t);
        t = r_27(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = s_96(t);
      }
    return(t);
  }
  t = r_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm r_97 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(r_97, t);
    return(t);
  }
  t = r_97(t);
  t = SRTS_all(t_1, t);
  return(t);
}
static ATerm w_4 (ATerm f_42, ATerm g_42, ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_fputc(f_42, g_42);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_27);
  return(t);
}
static ATerm x_4 (ATerm x_26, ATerm y_26, ATerm t)
{
  ATerm u_27 = NULL;
  t = SSL_write_term_to_stream_text(x_26, y_26);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_27);
  return(t);
}
static ATerm z_4 (ATerm u_103 (ATerm), ATerm j_185, ATerm d_27, ATerm t)
{
  ATerm v_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, j_185, term_a_9);
  t = d_5(t);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, d_27);
  t = u_103(t);
  t = fclose_0_0(t);
  t = d_27;
  return(t);
}
static ATerm y_4 (ATerm t_26, ATerm u_26, ATerm t)
{
  ATerm x_27 = NULL;
  t = SSL_write_term_to_stream_baf(t_26, u_26);
  x_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_27);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          w_17 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = y_4(w_17, x_17, t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,d_19 = NULL,k_19 = NULL,l_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          k_19 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      l_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(k_19, l_19, t);
  r_18 = t;
  t = term_w_7;
  s_18 = t;
  t = r_18;
  if(match_cons(t, sym_Stream_1))
    {
      d_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_w_7, r_18);
  t = w_4(s_18, d_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,q_28 = NULL,r_28 = NULL,u_28 = NULL,w_28 = NULL,z_28 = NULL,x_30 = NULL,d_31 = NULL,d_6 = NULL,c_6 = NULL;
  l_28 = t;
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      w_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  r_28 = t;
  t = u_28;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm u_1 (ATerm t);
        static ATerm u_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((k_28 != NULL) && (k_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                k_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(u_1, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = term_f_9;
        k_28 = t;
      }
  }
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_28, w_28);
  c_6 = t;
  t = SSLsetAnnotations(c_6, r_28);
  t = l_28;
  if(match_cons(t, sym__2))
    {
      n_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_28);
  m_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_28, (ATerm) ATmakeAppl(sym__2, not_null(k_28), o_28));
  d_6 = t;
  t = SSLsetAnnotations(d_6, m_28);
  q_28 = t;
  if(match_cons(t, sym__2))
    {
      x_30 = ATgetArgument(t, 0);
      d_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_17 = NULL,r_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL,f_6 = NULL;
        t = SSLgetAnnotations(q_28);
        j_17 = t;
        t = x_30;
        t = fetch_1_0(v_1, t);
        r_17 = t;
        t = d_31;
        if(match_cons(t, sym__2))
          {
            u_17 = ATgetArgument(t, 0);
            v_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_4(x_1, u_17, v_17, t);
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, s_17);
        f_6 = t;
        t = SSLsetAnnotations(f_6, j_17);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        {
          ATerm f_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL,g_6 = NULL;
          t = SSLgetAnnotations(q_28);
          f_18 = t;
          t = d_31;
          if(match_cons(t, sym__2))
            {
              m_18 = ATgetArgument(t, 0);
              o_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = z_4(y_1, m_18, o_18, t);
          l_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, x_30, l_18);
          g_6 = t;
          t = SSLsetAnnotations(g_6, f_18);
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
ATerm apply_strategy_1_0 (ATerm s_122 (ATerm), ATerm t)
{
  ATerm g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,m_31 = NULL;
  m_31 = t;
  t = dtime_0_0(t);
  t = m_31;
  t = s_122(t);
  j_31 = t;
  t = dtime_0_0(t);
  g_31 = t;
  t = j_31;
  if(match_cons(t, sym__2))
    {
      h_31 = ATgetArgument(t, 0);
      i_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_31), (ATerm) ATmakeAppl(sym_Runtime_1, g_31)), i_31);
  return(t);
}
static ATerm g_32 (ATerm a_32, ATerm t)
{
  t = SSL_fclose(a_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL;
  e_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      d_32 = ATgetArgument(t, 0);
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(d_32);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            t = g_32(e_32, t);
          }
      }
    }
  else
    {
      t = g_32(e_32, t);
    }
  return(t);
}
static ATerm a_5 (ATerm z_26, ATerm t)
{
  t = SSL_read_term_from_stream(z_26);
  return(t);
}
static ATerm b_5 (ATerm v_40, ATerm w_40, ATerm t)
{
  t = SSL_strcat(v_40, w_40);
  return(t);
}
static ATerm c_5 (ATerm h_42, ATerm i_42, ATerm t)
{
  ATerm h_32 = NULL;
  t = SSL_fopen(h_42, i_42);
  h_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_stdin_stream();
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_stdout_stream();
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm k_32 = NULL;
  t = SSL_stderr_stream();
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_32);
  return(t);
}
static ATerm r_33 (ATerm q_32, ATerm t)
{
  ATerm r_32 = NULL;
  t = SSL_explode_term(q_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            r_32 = ATgetFirst((ATermList) l_9);
            {
              ATerm m_9 = (ATerm) ATgetNext((ATermList) l_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = r_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = r_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = r_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = r_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm s_33 (ATerm u_32, ATerm v_32, ATerm w_32, ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,c_33 = NULL,q_6 = NULL;
  t = SSLgetAnnotations(w_32);
  z_32 = t;
  t = u_32;
  if(match_cons(t, sym_Path_1))
    {
      c_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_33, v_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, z_32);
  if(match_cons(t, sym__2))
    {
      x_32 = ATgetArgument(t, 0);
      y_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(x_32, y_32, t);
  return(t);
}
static ATerm t_33 (ATerm e_33, ATerm f_33, ATerm g_33, ATerm t)
{
  ATerm h_33 = NULL,i_33 = NULL,j_33 = NULL,m_33 = NULL,r_6 = NULL;
  t = SSLgetAnnotations(g_33);
  j_33 = t;
  t = SSL_is_string(e_33);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_33, f_33);
  r_6 = t;
  t = SSLsetAnnotations(r_6, j_33);
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      i_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(h_33, i_33, t);
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
  o_33 = t;
  if(match_cons(t, sym__2))
    {
      p_33 = ATgetArgument(t, 0);
      q_33 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_33(o_33, t);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm p_9 = t;
              int q_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = s_33(p_33, q_33, o_33, t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  t = t_33(p_33, q_33, o_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = r_33(o_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm v_33 = NULL,w_33 = NULL,x_33 = NULL,e_34 = NULL;
  e_34 = t;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, e_34, term_t_9);
        t = d_5(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          ATerm e_20 = NULL,i_20 = NULL;
          t = term_u_9;
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_9, e_34);
          t = b_5(i_20, e_34, t);
          e_20 = t;
          t = SSL_perror(e_20);
          _fail(t);
        }
      }
  }
  w_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_5(x_33, t);
  v_33 = t;
  t = w_33;
  t = fclose_0_0(t);
  t = v_33;
  return(t);
}
ATerm fetch_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm d_35 (ATerm t);
  static ATerm d_35 (ATerm t)
  {
    ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
    a_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_35 = ATgetFirst((ATermList) t);
        c_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_20 = NULL,v_20 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(a_35);
          p_20 = t;
          t = b_35;
          t = n_104(t);
          v_20 = t;
          t = (ATerm) ATinsert(CheckATermList(c_35), v_20);
          v_6 = t;
          t = SSLsetAnnotations(v_6, p_20);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm p_21 = NULL,w_21 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(a_35);
            p_21 = t;
            t = c_35;
            t = d_35(t);
            w_21 = t;
            t = (ATerm) ATinsert(CheckATermList(w_21), b_35);
            w_6 = t;
            t = SSLsetAnnotations(w_6, p_21);
          }
        }
    }
    return(t);
  }
  t = d_35(t);
  return(t);
}
static ATerm i_5 (ATerm d_67, ATerm e_67, ATerm t)
{
  ATerm g_35 = NULL;
  t = lookup_table_0_1(d_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_5(e_67, g_35, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm b_121 (ATerm), ATerm t)
{
  ATerm j_35 = NULL;
  j_35 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_35 = NULL,m_35 = NULL,n_35 = NULL;
        t = term_z_9;
        m_35 = t;
        t = term_a_10;
        n_35 = t;
        t = term_b_10;
        t = i_5(m_35, n_35, t);
        l_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_35, term_d_10);
        t = geq_0_0(t);
        t = j_35;
        t = b_121(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = j_35;
      }
  }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_35 = NULL;
  q_35 = t;
  if(match_string(t, "-k"))
    {
      t = q_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = q_35;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  t = SSL_string_to_int(r_35);
  s_35 = t;
  t = term_e_10;
  t_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, s_35);
  t = l_5(t_35, s_35, t);
  t = r_35;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(z_1, a_2, e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm v_35 = NULL;
  v_35 = t;
  if(match_string(t, "-S"))
    {
      t = v_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = v_35;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  t = term_a_10;
  x_35 = t;
  t = term_g_10;
  y_35 = t;
  t = term_h_10;
  t = l_5(x_35, y_35, t);
  t = term_i_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_j_10;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_2 (ATerm t)
{
  ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
  z_35 = t;
  t = SSL_string_to_int(z_35);
  a_36 = t;
  t = term_a_10;
  b_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, a_36);
  t = l_5(b_36, a_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, z_35);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm c_36 = NULL,d_36 = NULL;
  t = term_l_10;
  c_36 = t;
  t = term_u_2;
  d_36 = t;
  t = term_m_10;
  t = l_5(c_36, d_36, t);
  t = term_n_10;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_o_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, i_2, t);
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      {
        ATerm t_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_2, k_2, l_2, t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = t_10;
            t = Option_3_0(m_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm l_5 (ATerm p_60, ATerm q_60, ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL;
  t = term_z_9;
  e_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, p_60, q_60);
  t = lookup_table_0_1(e_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(p_60, q_60, f_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, p_60, q_60);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
      t = term_u_2;
      t = h_0(t);
      l_36 = t;
      t = term_v_10;
      m_36 = t;
      t = term_w_10;
      n_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, l_36);
      t = j_5(m_36, n_36, l_36, t);
      _fail(t);
    }
  else
    {
      ATerm q_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          k_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_36;
      t = d_0(t);
      t = term_u_2;
      t = g_0(t);
      q_36 = t;
      t = (ATerm) ATinsert(CheckATermList(k_36), q_36);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm s_36 = NULL;
  s_36 = t;
  if(match_string(t, "-o"))
    {
      t = s_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = s_36;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t_36 = t;
  t = term_x_10;
  u_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, t_36);
  t = l_5(u_36, t_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, t_36);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, y_2, t);
  return(t);
}
static ATerm j_5 (ATerm k_65, ATerm l_65, ATerm j_65, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_11 = ATgetArgument(t, 0);
            ATerm c_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_65, l_65);
        t = i_5(k_65, l_65, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
  }
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_65, l_65, (ATerm) ATinsert(CheckATermList(x_36), j_65));
  t = lookup_table_0_1(k_65, t);
  a_37 = t;
  t = (ATerm) ATinsert(CheckATermList(x_36), j_65);
  y_36 = t;
  t = a_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(l_65, y_36, z_36, t);
  t = w_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL,k_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
      t = term_u_2;
      t = p_0(t);
      l_37 = t;
      t = term_v_10;
      m_37 = t;
      t = term_w_10;
      n_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, l_37);
      t = j_5(m_37, n_37, l_37, t);
      _fail(t);
    }
  else
    {
      ATerm r_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_37 = ATgetFirst((ATermList) t);
          i_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_37 = ATgetFirst((ATermList) t);
          k_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_37;
      t = m_0(t);
      t = j_37;
      t = o_0(t);
      r_37 = t;
      t = (ATerm) ATinsert(CheckATermList(k_37), r_37);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  if(match_string(t, "-i"))
    {
      t = t_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = t_37;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL;
  u_37 = t;
  t = term_d_11;
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, u_37);
  t = l_5(v_37, u_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, u_37);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, b_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL,z_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_2;
  t = whoami_0_0(t);
  w_37 = t;
  t = term_l_4;
  y_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_11), w_37);
  z_37 = t;
  t = SSL_printnl(y_37, z_37);
  t = term_o_4;
  x_37 = t;
  t = SSL_exit(x_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm a_38 = NULL,b_38 = NULL;
  t = term_z_9;
  a_38 = t;
  t = term_g_11;
  b_38 = t;
  t = term_h_11;
  t = i_5(a_38, b_38, t);
  return(t);
}
static ATerm e_5 (ATerm b_45, ATerm c_45, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(b_45, c_45);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(b_45, c_45);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm c_111 (ATerm), ATerm d_111 (ATerm), ATerm t)
{
  ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
  d_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_38;
      t = c_111(t);
    }
  else
    {
      ATerm i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_38 = ATgetFirst((ATermList) t);
          f_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_38;
      t = foldr_2_0(c_111, d_111, t);
      i_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_38, i_38);
      t = d_111(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm k_22 = NULL,l_22 = NULL;
  if(match_cons(t, sym__2))
    {
      k_22 = ATgetArgument(t, 0);
      l_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_5(k_22, l_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm l_38 = NULL,g_22 = NULL,h_22 = NULL;
  t = times_0_0(t);
  h_22 = t;
  t = SSL_explode_term(h_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      g_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_22;
  t = foldr_2_0(d_3, e_3, t);
  l_38 = t;
  t = SSL_TicksToSeconds(l_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
  w_38 = t;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_38;
        if((x_38 != t))
          {
            _fail(t);
          }
        t = w_38;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_38, y_38);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(x_38, y_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, x_38, y_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm a_121 (ATerm), ATerm t)
{
  ATerm c_39 = NULL;
  c_39 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
        t = term_z_9;
        f_39 = t;
        t = term_a_10;
        g_39 = t;
        t = term_b_10;
        t = i_5(f_39, g_39, t);
        e_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_39, term_o_4);
        t = geq_0_0(t);
        t = c_39;
        t = a_121(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = c_39;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm i_39 = NULL,j_39 = NULL,l_39 = NULL,m_39 = NULL;
  t = run_time_0_0(t);
  i_39 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  j_39 = t;
  t = term_l_4;
  l_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), i_39), term_r_11), j_39);
  m_39 = t;
  t = SSL_printnl(l_39, m_39);
  t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), i_39), term_r_11), j_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm n_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_10;
  n_39 = t;
  t = SSL_exit(n_39);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  y_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = y_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          x_39 = ATgetArgument(t, 0);
          {
            ATerm x_22 = NULL,a_7 = NULL;
            t = SSLgetAnnotations(y_39);
            x_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, x_39);
            a_7 = t;
            t = SSLsetAnnotations(a_7, x_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = y_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm q_123 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_39 = NULL,r_39 = NULL;
      t = term_z_9;
      q_39 = t;
      t = term_w_11;
      r_39 = t;
      t = term_x_11;
      t = i_5(q_39, r_39, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(g_3, t);
    }
  t = q_123(t);
  return(t);
}
static ATerm m_5 (ATerm c_70, ATerm d_70, ATerm e_70, ATerm t)
{
  ATerm a_40 = NULL;
  t = SSL_hashtable_put(e_70, c_70, d_70);
  a_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_40);
  return(t);
}
static ATerm n_5 (ATerm f_70, ATerm g_70, ATerm t)
{
  t = SSL_hashtable_get(g_70, f_70);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_66, ATerm t)
{
  ATerm j_40 = NULL;
  t = table_hashtable_0_0(t);
  j_40 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_23 = NULL;
        t = j_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            d_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = n_5(w_66, d_23, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm i_23 = NULL;
          t = w_66;
          t = table_create_0_0(t);
          t = j_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              i_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_5(w_66, i_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_70, ATerm l_70, ATerm t)
{
  ATerm m_40 = NULL;
  t = SSL_hashtable_create(k_70, l_70);
  m_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, m_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,r_40 = NULL,s_40 = NULL;
  n_40 = t;
  t = term_a_12;
  r_40 = t;
  t = term_b_12;
  s_40 = t;
  t = n_40;
  t = new_hashtable_0_2(r_40, s_40, t);
  o_40 = t;
  t = n_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      p_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(n_40, o_40, p_40, t);
  t = n_40;
  return(t);
}
static ATerm g_5 (ATerm h_70, ATerm i_70, ATerm t)
{
  ATerm t_40 = NULL;
  t = SSL_hashtable_remove(i_70, h_70);
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, t_40);
  return(t);
}
static ATerm h_5 (ATerm m_70, ATerm t)
{
  ATerm u_40 = NULL;
  t = SSL_hashtable_destroy(m_70);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_40 = NULL;
  t = SSL_table_hashtable();
  x_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL;
  y_40 = t;
  t = table_hashtable_0_0(t);
  z_40 = t;
  t = lookup_table_0_1(y_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_5(b_41, t);
  t = z_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(y_40, a_41, t);
  t = y_40;
  return(t);
}
ATerm map_1_0 (ATerm d_104 (ATerm), ATerm t)
{
  static ATerm q_41 (ATerm t);
  static ATerm q_41 (ATerm t)
  {
    ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
    n_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = n_41;
      }
    else
      {
        ATerm n_23 = NULL,q_23 = NULL,r_23 = NULL,d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_41 = ATgetFirst((ATermList) t);
            p_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_41);
        n_23 = t;
        t = o_41;
        t = d_104(t);
        q_23 = t;
        t = p_41;
        t = q_41(t);
        r_23 = t;
        t = (ATerm) ATinsert(CheckATermList(r_23), q_23);
        d_7 = t;
        t = SSLsetAnnotations(d_7, n_23);
      }
    return(t);
  }
  t = q_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_41 = ATgetFirst((ATermList) t);
      u_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_41 = NULL,z_41 = NULL;
        static ATerm h_3 (ATerm t);
        static ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(y_41)), not_null(z_41));
          return(t);
        }
        t = u_41;
        t = l_0(t);
        if(((y_41 != NULL) && (y_41 != t)))
          _fail(t);
        else
          y_41 = t;
        t = t_41;
        t = j_0(t);
        if(((z_41 != NULL) && (z_41 != t)))
          _fail(t);
        else
          z_41 = t;
        t = u_41;
        t = reverse_acc_2_0(j_0, h_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_2;
      t = l_0(t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,j_7 = NULL;
  n_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      m_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_42);
  l_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, m_42);
  j_7 = t;
  t = SSLsetAnnotations(j_7, l_42);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm q_42 = NULL;
  q_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_42), term_d_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_42 = NULL,e_42 = NULL;
      t = term_z_9;
      d_42 = t;
      t = term_g_11;
      e_42 = t;
      t = term_h_11;
      t = i_5(d_42, e_42, t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = fetch_1_0(i_3, t);
    }
  t = term_g_12;
  t = echo_0_0(t);
  t = term_v_10;
  b_42 = t;
  t = term_w_10;
  c_42 = t;
  t = term_h_12;
  t = i_5(b_42, c_42, t);
  t = reverse_acc_2_0(_id, j_3, t);
  t = map_1_0(k_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL,u_42 = NULL;
  s_42 = t;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = s_42;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_12 = ATgetFirst((ATermList) t);
                ATerm l_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = s_42;
          }
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATinsert(ATempty, s_42);
      }
  }
  t_42 = t;
  t = term_f_9;
  u_42 = t;
  t = SSL_printnl(u_42, t_42);
  t = s_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL;
  t = term_z_9;
  y_42 = t;
  t = term_g_11;
  z_42 = t;
  t = term_h_11;
  t = i_5(y_42, z_42, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm a_43 = NULL,b_43 = NULL;
  t = term_m_12;
  a_43 = t;
  t = term_u_2;
  b_43 = t;
  t = term_n_12;
  t = l_5(a_43, b_43, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,f_43 = NULL;
  t = term_m_12;
  e_43 = t;
  t = term_u_2;
  f_43 = t;
  t = term_n_12;
  t = l_5(e_43, f_43, t);
  t = term_p_12;
  c_43 = t;
  t = term_u_2;
  d_43 = t;
  t = term_q_12;
  t = l_5(c_43, d_43, t);
  t = term_r_12;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_s_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      t = Option_3_0(o_3, p_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_74 (ATerm), ATerm f_74 (ATerm), ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,o_7 = NULL;
  l_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_43 = ATgetFirst((ATermList) t);
      i_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_43);
  g_43 = t;
  t = h_43;
  t = e_74(t);
  j_43 = t;
  t = i_43;
  t = f_74(t);
  k_43 = t;
  t = (ATerm) ATinsert(CheckATermList(k_43), j_43);
  o_7 = t;
  t = SSLsetAnnotations(o_7, g_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm t_125 (ATerm), ATerm t)
{
  ATerm q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,v_43 = NULL,w_43 = NULL,q_7 = NULL;
  q_43 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_12;
        t = t_125(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  t = q_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_43 = ATgetFirst((ATermList) t);
      t_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_43);
  r_43 = t;
  t = term_g_11;
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, s_43);
  t = l_5(w_43, s_43, t);
  t = t_43;
  {
    static ATerm g_44 (ATerm t);
    static ATerm g_44 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_43 = NULL;
              z_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_43;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              t = t_125(t);
              t = Cons_2_0(_id, g_44, t);
            }
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm c_44 = NULL,d_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                c_44 = ATgetFirst((ATermList) t);
                d_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(d_44), (ATerm) ATmakeAppl(sym_Undefined_1, c_44));
          }
        }
      return(t);
    }
    t = g_44(t);
  }
  v_43 = t;
  t = (ATerm) ATinsert(CheckATermList(v_43), (ATerm) ATmakeAppl(sym_Program_1, s_43));
  q_7 = t;
  t = SSLsetAnnotations(q_7, r_43);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  if(match_string(t, "--help"))
    {
      t = t_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = t_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = t_44;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  t = term_w_11;
  u_44 = t;
  t = term_u_2;
  v_44 = t;
  t = term_c_13;
  t = l_5(u_44, v_44, t);
  t = term_e_13;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_f_13;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm s_125 (ATerm), ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
  n_44 = t;
  t = term_v_10;
  o_44 = t;
  t = term_g_13;
  t = lookup_table_0_1(o_44, t);
  s_44 = t;
  t = term_w_10;
  p_44 = t;
  t = (ATerm) ATempty;
  q_44 = t;
  t = s_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(p_44, q_44, r_44, t);
  t = n_44;
  {
    static ATerm r_3 (ATerm t);
    static ATerm r_3 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_125(t);
          LocalPopChoice(i_13);
        }
      else
        {
          t = h_13;
          {
            ATerm j_13 = t;
            int k_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(u_3, v_3, w_3, t);
                LocalPopChoice(k_13);
              }
            else
              {
                t = j_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
  }
  {
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_45 = NULL;
        i_45 = t;
        {
          ATerm n_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_23 = NULL;
              t = i_45;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm z_23 = NULL,a_24 = NULL;
                    t = term_z_9;
                    z_23 = t;
                    t = term_w_11;
                    a_24 = t;
                    t = term_x_11;
                    t = i_5(z_23, a_24, t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    t = fetch_1_0(x_3, t);
                  }
              }
              t = i_45;
              t = default_system_usage_0_0(t);
              t = term_g_10;
              y_23 = t;
              t = SSL_exit(y_23);
              LocalPopChoice(p_13);
            }
          else
            {
              t = n_13;
              {
                ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                t = term_z_9;
                f_24 = t;
                t = term_m_12;
                g_24 = t;
                t = term_s_13;
                t = i_5(f_24, g_24, t);
                t = i_45;
                t = default_system_about_0_0(t);
                t = term_g_10;
                e_24 = t;
                t = SSL_exit(e_24);
              }
            }
        }
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
        {
          ATerm v_13 = t;
          int w_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
              static ATerm y_3 (ATerm t);
              static ATerm y_3 (ATerm t)
              {
                ATerm m_45 = NULL,n_45 = NULL,o_45 = NULL,t_7 = NULL;
                o_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_45);
                m_45 = t;
                t = n_45;
                if(((l_44 != NULL) && (l_44 != t)))
                  _fail(t);
                else
                  l_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_45);
                t_7 = t;
                t = SSLsetAnnotations(t_7, m_45);
                return(t);
              }
              t = fetch_1_0(y_3, t);
              t = term_l_4;
              k_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_44)), term_x_13);
              l_45 = t;
              t = SSL_printnl(k_45, l_45);
              t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_44)), term_x_13));
              t = default_system_usage_0_0(t);
              t = term_o_4;
              j_45 = t;
              t = SSL_exit(j_45);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
            }
        }
      }
  }
  m_44 = t;
  t = term_v_10;
  t = table_destroy_0_0(t);
  t = m_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm s_123 (ATerm), ATerm t_123 (ATerm), ATerm u_123 (ATerm), ATerm v_123 (ATerm), ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL;
  t = parse_options_1_0(s_123, t);
  t_45 = t;
  t = term_y_13;
  t = table_create_0_0(t);
  t = term_y_13;
  u_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_z_13, t_45);
  t = lookup_table_0_1(u_45, t);
  x_45 = t;
  t = term_z_13;
  v_45 = t;
  t = x_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(v_45, t_45, w_45, t);
  t = t_45;
  t = u_123(t);
  {
    ATerm a_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(t_123, t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = a_14;
        {
          ATerm f_14 = t;
          int g_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_123(t);
              t = report_success_0_0(t);
              LocalPopChoice(g_14);
            }
          else
            {
              t = f_14;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm a_4 (ATerm t)
{
  t = if_verbose2_1_0(h_4, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm y_45 = NULL,z_45 = NULL;
  t = term_i_14;
  y_45 = t;
  t = term_u_2;
  z_45 = t;
  t = term_m_14;
  t = l_5(y_45, z_45, t);
  t = term_n_14;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL;
  a_46 = t;
  t = term_z_9;
  e_46 = t;
  t = term_g_11;
  f_46 = t;
  t = term_h_11;
  t = i_5(e_46, f_46, t);
  b_46 = t;
  t = term_l_4;
  c_46 = t;
  t = (ATerm) ATinsert(ATempty, b_46);
  d_46 = t;
  t = SSL_printnl(c_46, d_46);
  t = a_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm b_123 (ATerm), ATerm c_123 (ATerm), ATerm d_123 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t);
  static ATerm b_4 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_123(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        {
          ATerm s_14 = t;
          int t_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(t_14);
            }
          else
            {
              t = s_14;
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    {
                      ATerm w_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(c_4, d_4, e_4, t);
                          LocalPopChoice(x_14);
                        }
                      else
                        {
                          t = w_14;
                          {
                            ATerm y_14 = t;
                            int a_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(a_15);
                              }
                            else
                              {
                                t = y_14;
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
  static ATerm b_4 (ATerm t)
  {
    ATerm g_46 = NULL,i_46 = NULL,j_46 = NULL;
    i_46 = t;
    {
      ATerm b_15 = t;
      int d_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_4 (ATerm t);
          static ATerm i_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((g_46 != NULL) && (g_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  g_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_4, t);
          LocalPopChoice(d_15);
        }
      else
        {
          t = b_15;
          t = term_f_15;
          g_46 = t;
        }
    }
    t = not_null(g_46);
    t = ReadFromFile_0_0(t);
    j_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, i_46, j_46);
    t = apply_strategy_1_0(b_123, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_3, d_123, a_4, b_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,v_7 = NULL;
  q_46 = t;
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_46);
  m_46 = t;
  t = o_46;
  t = topdown_1_0(k_4, t);
  p_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_46, p_46);
  v_7 = t;
  t = SSLsetAnnotations(v_7, m_46);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(j_4, _fail, default_usage_0_0, t);
  return(t);
}
