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
ATerm term_f_15;
ATerm term_o_14;
ATerm term_m_14;
ATerm term_l_14;
ATerm term_h_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
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
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_h_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_p_10;
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
ATerm term_c_10;
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
ATerm term_m_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_r_6;
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
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATempty);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_Call_2, term_i_7, (ATerm) ATempty);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_j_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Call_2, term_k_8, (ATerm) ATempty);
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
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_a_10);
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
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_w_11);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_v_10, term_w_10);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_n_12, term_u_2);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_u_2);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_u_2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, (ATerm) ATempty);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_n_12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(sym__2, term_h_14, term_u_2);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm t_91 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm t_27 (ATerm j_17, ATerm k_17, ATerm t);
static ATerm u_27 (ATerm a_18, ATerm b_18, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm f_84 (ATerm), ATerm t);
static ATerm v_4 (ATerm n_40, ATerm o_40, ATerm t);
static ATerm w_4 (ATerm i_25, ATerm j_25, ATerm t);
static ATerm y_4 (ATerm i_90 (ATerm), ATerm v_171, ATerm o_25, ATerm t);
static ATerm x_4 (ATerm e_25, ATerm f_25, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm r_107 (ATerm), ATerm t);
static ATerm h_32 (ATerm b_32, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_4 (ATerm k_25, ATerm t);
static ATerm a_5 (ATerm g_39, ATerm h_39, ATerm t);
static ATerm b_5 (ATerm p_40, ATerm q_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm u_33 (ATerm t_32, ATerm t);
static ATerm v_33 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t);
static ATerm w_33 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm t);
static ATerm c_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm t);
static ATerm h_5 (ATerm u_56, ATerm v_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm a_106 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_5 (ATerm g_50, ATerm h_50, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_5 (ATerm j_43, ATerm k_43, ATerm t);
ATerm foldr_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm z_105 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm need_help_1_0 (ATerm p_108 (ATerm), ATerm t);
static ATerm l_5 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t);
static ATerm m_5 (ATerm l_58, ATerm m_58, ATerm t);
ATerm lookup_table_0_1 (ATerm n_56, ATerm t);
ATerm new_hashtable_0_2 (ATerm q_58, ATerm r_58, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm f_5 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm g_5 (ATerm s_58, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm s_110 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm parse_options_1_0 (ATerm r_110 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm iowrap_3_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,f_0 = NULL,j_0 = NULL,m_0 = NULL,o_0 = NULL;
  a_0 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  f_0 = t;
  t = term_l_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_4), f_0), term_m_4);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_o_4;
  j_0 = t;
  t = SSL_exit(j_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm t_91 (ATerm), ATerm t)
{
  static ATerm f_2 (ATerm t)
  {
    ATerm b_2 = NULL,c_2 = NULL,e_2 = NULL;
    b_2 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_2 = ATgetFirst((ATermList) t);
        e_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_4 = t;
      int s_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(b_2);
          q_0 = t;
          t = e_2;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(e_2), c_2);
          t_0 = t;
          t = SSLsetAnnotations(t_0, q_0);
          t = t_91(t);
          LocalPopChoice(s_4);
        }
      else
        {
          t = p_4;
          {
            ATerm n_1 = NULL,q_1 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(b_2);
            n_1 = t;
            t = e_2;
            t = f_2(t);
            q_1 = t;
            t = (ATerm) ATinsert(CheckATermList(q_1), c_2);
            u_0 = t;
            t = SSLsetAnnotations(u_0, n_1);
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
  ATerm b_3 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_4 = ATgetFirst((ATermList) t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_3;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm j_100 (ATerm), ATerm k_100 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,z_2 = NULL;
  v_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_2 = ATgetFirst((ATermList) t);
      {
        ATerm u_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_2;
  t = j_100(t);
  t = v_2;
  t = last_0_0(t);
  t = k_100(t);
  t = v_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_5 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_2;
  t = at_last_1_0(b_0, t);
  return(t);
}
static ATerm h_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm p_0 (ATerm t)
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
static ATerm s_0 (ATerm t)
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
  ATerm c_14 = NULL,d_14 = NULL,j_14 = NULL,n_14 = NULL,r_14 = NULL;
  j_14 = t;
  if(match_cons(t, sym_Real_1))
    {
      n_14 = ATgetArgument(t, 0);
      {
        ATerm a_2 = NULL;
        t = SSL_string_to_real(n_14);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, a_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm m_2 = NULL;
            t = SSL_string_to_int(n_14);
            m_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              n_14 = ATgetArgument(t, 0);
              r_14 = ATgetArgument(t, 1);
              d_14 = ATgetArgument(t, 2);
              t = SSL_is_string(d_14);
              t = (ATerm) ATmakeAppl(sym_Con_3, n_14, r_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_14), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  n_14 = ATgetArgument(t, 0);
                  r_14 = ATgetArgument(t, 1);
                  d_14 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = n_14;
                    {
                      ATerm j_5 = t;
                      int n_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(n_14);
                          t = unquote_chars_2_0(h_0, p_0, t);
                          t_3 = t;
                          t = SSL_implode_string(t_3);
                          LocalPopChoice(n_5);
                        }
                      else
                        {
                          t = j_5;
                        }
                    }
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, r_14, d_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      n_14 = ATgetArgument(t, 0);
                      r_14 = ATgetArgument(t, 1);
                      {
                        ATerm f_4 = NULL;
                        t = n_14;
                        {
                          ATerm o_5 = t;
                          int p_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 = NULL;
                              t = SSL_explode_string(n_14);
                              t = unquote_chars_2_0(r_0, s_0, t);
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
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, (ATerm)ATempty, r_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          n_14 = ATgetArgument(t, 0);
                          {
                            ATerm q_4 = NULL;
                            t = n_14;
                            {
                              ATerm q_5 = t;
                              int r_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm r_4 = NULL;
                                  t = SSL_explode_string(n_14);
                                  t = unquote_chars_2_0(v_0, w_0, t);
                                  r_4 = t;
                                  t = SSL_implode_string(r_4);
                                  LocalPopChoice(r_5);
                                }
                              else
                                {
                                  t = q_5;
                                }
                            }
                            q_4 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, q_4, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              n_14 = ATgetArgument(t, 0);
                              {
                                ATerm t_5 = NULL,z_5 = NULL,a_6 = NULL,x_0 = NULL;
                                t = SSLgetAnnotations(j_14);
                                t_5 = t;
                                t = SSL_explode_string(n_14);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm s_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(s_5) != AT_INT) || (ATgetInt((ATermInt) s_5) != 39)))
                                      _fail(t);
                                    z_5 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(z_5);
                                a_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, a_6);
                                x_0 = t;
                                t = SSLsetAnnotations(x_0, t_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  n_14 = ATgetArgument(t, 0);
                                  r_14 = ATgetArgument(t, 1);
                                  d_14 = ATgetArgument(t, 2);
                                  c_14 = ATgetArgument(t, 3);
                                  {
                                    ATerm a_7 = NULL,j_7 = NULL,l_7 = NULL,y_0 = NULL;
                                    t = SSLgetAnnotations(j_14);
                                    a_7 = t;
                                    t = SSL_explode_string(n_14);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm u_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(u_5) != AT_INT) || (ATgetInt((ATermInt) u_5) != 39)))
                                          _fail(t);
                                        j_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(j_7);
                                    l_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, l_7, r_14, d_14, c_14);
                                    y_0 = t;
                                    t = SSLsetAnnotations(y_0, a_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      n_14 = ATgetArgument(t, 0);
                                      r_14 = ATgetArgument(t, 1);
                                      d_14 = ATgetArgument(t, 2);
                                      {
                                        ATerm l_8 = NULL,x_8 = NULL,y_8 = NULL,z_0 = NULL;
                                        t = SSLgetAnnotations(j_14);
                                        l_8 = t;
                                        t = SSL_explode_string(n_14);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm x_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(x_5) != AT_INT) || (ATgetInt((ATermInt) x_5) != 39)))
                                              _fail(t);
                                            x_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(x_8);
                                        y_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, y_8, r_14, d_14);
                                        z_0 = t;
                                        t = SSLsetAnnotations(z_0, l_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          n_14 = ATgetArgument(t, 0);
                                          r_14 = ATgetArgument(t, 1);
                                          d_14 = ATgetArgument(t, 2);
                                          c_14 = ATgetArgument(t, 3);
                                          {
                                            ATerm b_10 = NULL,o_10 = NULL,r_10 = NULL,a_1 = NULL;
                                            t = SSLgetAnnotations(j_14);
                                            b_10 = t;
                                            t = SSL_explode_string(n_14);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm y_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                                  _fail(t);
                                                o_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(o_10);
                                            r_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, r_10, r_14, d_14, c_14);
                                            a_1 = t;
                                            t = SSLsetAnnotations(a_1, b_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              n_14 = ATgetArgument(t, 0);
                                              r_14 = ATgetArgument(t, 1);
                                              d_14 = ATgetArgument(t, 2);
                                              {
                                                ATerm q_11 = NULL,a_12 = NULL,b_12 = NULL,b_1 = NULL;
                                                t = SSLgetAnnotations(j_14);
                                                q_11 = t;
                                                t = SSL_explode_string(n_14);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm b_6 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(b_6) != AT_INT) || (ATgetInt((ATermInt) b_6) != 39)))
                                                      _fail(t);
                                                    a_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(a_12);
                                                b_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, b_12, r_14, d_14);
                                                b_1 = t;
                                                t = SSLsetAnnotations(b_1, q_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  n_14 = ATgetArgument(t, 0);
                                                  r_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm n_13 = NULL,r_13 = NULL,s_13 = NULL,c_1 = NULL;
                                                    t = SSLgetAnnotations(j_14);
                                                    n_13 = t;
                                                    t = SSL_explode_string(n_14);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm d_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(d_6) != AT_INT) || (ATgetInt((ATermInt) d_6) != 39)))
                                                          _fail(t);
                                                        r_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(r_13);
                                                    s_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, s_13, r_14);
                                                    c_1 = t;
                                                    t = SSLsetAnnotations(c_1, n_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      n_14 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm g_14 = NULL,i_14 = NULL,k_14 = NULL,e_1 = NULL;
                                                        t = SSLgetAnnotations(j_14);
                                                        g_14 = t;
                                                        t = SSL_explode_string(n_14);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm g_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                                                              _fail(t);
                                                            i_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(i_14);
                                                        k_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, k_14);
                                                        e_1 = t;
                                                        t = SSLsetAnnotations(e_1, g_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          n_14 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm t_14 = NULL,a_15 = NULL,b_15 = NULL,f_1 = NULL;
                                                            t = SSLgetAnnotations(j_14);
                                                            t_14 = t;
                                                            t = SSL_explode_string(n_14);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm h_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 39)))
                                                                  _fail(t);
                                                                a_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(a_15);
                                                            b_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, b_15);
                                                            f_1 = t;
                                                            t = SSLsetAnnotations(f_1, t_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              n_14 = ATgetArgument(t, 0);
                                                              r_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm o_15 = NULL,t_15 = NULL,u_15 = NULL,m_1 = NULL;
                                                                t = SSLgetAnnotations(j_14);
                                                                o_15 = t;
                                                                t = SSL_explode_string(n_14);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm i_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                                                      _fail(t);
                                                                    t_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(t_15);
                                                                u_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_15, r_14);
                                                                m_1 = t;
                                                                t = SSLsetAnnotations(m_1, o_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL,v_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  n_14 = ATgetArgument(t, 0);
                                                                  r_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(j_14);
                                                              g_16 = t;
                                                              t = SSL_explode_string(n_14);
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
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_16, r_14);
                                                              v_1 = t;
                                                              t = SSLsetAnnotations(v_1, g_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm t_27 (ATerm j_17, ATerm k_17, ATerm t)
{
  t = j_17;
  {
    ATerm l_6 = t;
    if((PushChoice() == 0))
      {
        ATerm n_17 = NULL,o_17 = NULL,r_17 = NULL,t_17 = NULL,v_5 = NULL;
        t_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            o_17 = ATgetFirst((ATermList) t);
            r_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_17);
        n_17 = t;
        t = r_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(r_17), o_17);
        v_5 = t;
        t = SSLsetAnnotations(v_5, n_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_m_6, j_17);
  return(t);
}
static ATerm u_27 (ATerm a_18, ATerm b_18, ATerm t)
{
  t = a_18;
  {
    ATerm n_6 = t;
    if((PushChoice() == 0))
      {
        ATerm f_18 = NULL,i_18 = NULL,j_18 = NULL,n_18 = NULL,w_5 = NULL;
        n_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_18 = ATgetFirst((ATermList) t);
            j_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_18);
        f_18 = t;
        t = j_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(j_18), i_18);
        w_5 = t;
        t = SSLsetAnnotations(w_5, f_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = n_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, a_18);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,p_16 = NULL;
  e_19 = t;
  t = SSL_explode_term(e_19);
  if(match_cons(t, sym__2))
    {
      ATerm s_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_6 = ATgetArgument(t, 1);
        if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
          {
            f_19 = ATgetFirst((ATermList) u_6);
            {
              ATerm v_6 = (ATerm) ATgetNext((ATermList) u_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(e_19);
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
            ATerm d_7 = (ATerm) ATgetNext((ATermList) z_6);
            if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
              {
                p_16 = ATgetFirst((ATermList) d_7);
                {
                  ATerm e_7 = (ATerm) ATgetNext((ATermList) d_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, p_16), f_19));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm e_20 = NULL,f_20 = NULL;
  if(match_cons(t, sym__2))
    {
      e_20 = ATgetArgument(t, 0);
      f_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, f_20), e_20));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_r_6;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm h_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      h_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, j_20), h_20));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm m_24 = NULL,n_24 = NULL;
  if(match_cons(t, sym__2))
    {
      m_24 = ATgetArgument(t, 0);
      n_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, n_24), m_24));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_m_7;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm q_24 = NULL,r_24 = NULL;
  if(match_cons(t, sym__2))
    {
      q_24 = ATgetArgument(t, 0);
      r_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, r_24), q_24));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      x_18 = ATgetArgument(t, 0);
      y_18 = ATgetArgument(t, 1);
      {
        ATerm b_19 = NULL;
        t = y_18;
        t = foldr_2_0(d_1, g_1, t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, x_18, b_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          x_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, x_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              x_18 = ATgetArgument(t, 0);
              {
                ATerm u_16 = NULL;
                t = x_18;
                {
                  ATerm n_7 = t;
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
                                  t = term_t_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_v_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_w_7;
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
                        ATerm x_16 = NULL;
                        t = SSL_explode_string(x_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm x_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                              _fail(t);
                            {
                              ATerm z_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
                                {
                                  x_16 = ATgetFirst((ATermList) z_7);
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
                        t = x_16;
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
                      x_18 = ATgetArgument(t, 0);
                      {
                        ATerm f_8 = ATgetArgument(t, 1);
                      }
                      v_18 = ATgetArgument(t, 2);
                      p_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(e_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, x_18, v_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_18), (ATerm) ATempty));
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
                            x_18 = ATgetArgument(t, 0);
                            {
                              ATerm i_8 = ATgetArgument(t, 1);
                            }
                            v_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(h_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, x_18, v_18, term_m_8);
                      }
                    else
                      {
                        t = g_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            x_18 = ATgetArgument(t, 0);
                            y_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, x_18, y_18, term_m_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                x_18 = ATgetArgument(t, 0);
                                y_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = y_18;
                                    return(t);
                                  }
                                  t = x_18;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    x_18 = ATgetArgument(t, 0);
                                    t = x_18;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        x_18 = ATgetArgument(t, 0);
                                        t = x_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_18 = ATgetFirst((ATermList) t);
                                            t_18 = (ATerm) ATgetNext((ATermList) t);
                                            t = t_18;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm n_8 = t;
                                                int o_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = t_27(x_18, w_18, t);
                                                    LocalPopChoice(o_8);
                                                  }
                                                else
                                                  {
                                                    t = n_8;
                                                    t = s_18;
                                                  }
                                              }
                                            else
                                              {
                                                t = t_27(x_18, w_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = t_27(x_18, w_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            x_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, x_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                x_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, x_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    x_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, x_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        x_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, x_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            x_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                x_18 = ATgetArgument(t, 0);
                                                                y_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, x_18), y_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    x_18 = ATgetArgument(t, 0);
                                                                    y_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = y_18;
                                                                        return(t);
                                                                      }
                                                                      t = x_18;
                                                                      t = foldr_2_0(l_1, o_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        x_18 = ATgetArgument(t, 0);
                                                                        t = x_18;
                                                                        t = foldr_2_0(p_1, r_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            x_18 = ATgetArgument(t, 0);
                                                                            y_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, (ATerm) ATinsert(CheckATermList(y_18), x_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                x_18 = ATgetArgument(t, 0);
                                                                                t = x_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_18 = ATgetFirst((ATermList) t);
                                                                                    t_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = t_18;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm p_8 = t;
                                                                                        int q_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = u_27(x_18, w_18, t);
                                                                                            LocalPopChoice(q_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_8;
                                                                                            t = s_18;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = u_27(x_18, w_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = u_27(x_18, w_18, t);
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
                                                                                        x_18 = ATgetArgument(t, 0);
                                                                                        y_18 = ATgetArgument(t, 1);
                                                                                        t = y_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            u_18 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_t_8, (ATerm) ATinsert(ATinsert(ATempty, u_18), x_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            x_18 = ATgetArgument(t, 0);
                                                                                            t = x_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                x_18 = ATgetArgument(t, 0);
                                                                                                y_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, x_18, y_18, term_u_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    x_18 = ATgetArgument(t, 0);
                                                                                                    y_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, x_18, y_18, term_u_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        x_18 = ATgetArgument(t, 0);
                                                                                                        y_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, x_18, (ATerm)ATempty, y_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            x_18 = ATgetArgument(t, 0);
                                                                                                            y_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, y_18, x_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                x_18 = ATgetArgument(t, 0);
                                                                                                                y_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, x_18, y_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    x_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, x_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        x_18 = ATgetArgument(t, 0);
                                                                                                                        y_18 = ATgetArgument(t, 1);
                                                                                                                        v_18 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, x_18, y_18, (ATerm)ATempty, v_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            x_18 = ATgetArgument(t, 0);
                                                                                                                            y_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, x_18, (ATerm)ATempty, (ATerm)ATempty, y_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                x_18 = ATgetArgument(t, 0);
                                                                                                                                y_18 = ATgetArgument(t, 1);
                                                                                                                                v_18 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, x_18, y_18, (ATerm)ATempty, v_18);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    x_18 = ATgetArgument(t, 0);
                                                                                                                                    y_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, x_18, (ATerm)ATempty, (ATerm)ATempty, y_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        x_18 = ATgetArgument(t, 0);
                                                                                                                                        y_18 = ATgetArgument(t, 1);
                                                                                                                                        v_18 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, x_18, y_18, (ATerm)ATempty, v_18);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            x_18 = ATgetArgument(t, 0);
                                                                                                                                            y_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, x_18, (ATerm)ATempty, (ATerm)ATempty, y_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm v_8 = ATgetArgument(t, 0);
                                                                                                                                                y_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, y_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm f_83 (ATerm), ATerm g_83 (ATerm), ATerm t)
{
  static ATerm x_27 (ATerm t)
  {
    ATerm w_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_83(t);
        t = x_27(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = w_8;
        t = g_83(t);
      }
    return(t);
  }
  t = x_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm f_84 (ATerm), ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    t = topdown_1_0(f_84, t);
    return(t);
  }
  t = f_84(t);
  t = SRTS_all(s_1, t);
  return(t);
}
static ATerm v_4 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm z_27 = NULL;
  t = SSL_fputc(n_40, o_40);
  z_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_27);
  return(t);
}
static ATerm w_4 (ATerm i_25, ATerm j_25, ATerm t)
{
  ATerm a_28 = NULL;
  t = SSL_write_term_to_stream_text(i_25, j_25);
  a_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_28);
  return(t);
}
static ATerm y_4 (ATerm i_90 (ATerm), ATerm v_171, ATerm o_25, ATerm t)
{
  ATerm b_28 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, v_171, term_a_9);
  t = c_5(t);
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_28, o_25);
  t = i_90(t);
  t = fclose_0_0(t);
  t = o_25;
  return(t);
}
static ATerm x_4 (ATerm e_25, ATerm f_25, ATerm t)
{
  ATerm d_28 = NULL;
  t = SSL_write_term_to_stream_baf(e_25, f_25);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_28);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm v_17 = NULL,w_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          v_17 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      w_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(v_17, w_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm o_18 = NULL,q_18 = NULL,r_18 = NULL,c_19 = NULL,j_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm c_9 = ATgetArgument(t, 0);
      if(match_cons(c_9, sym_Stream_1))
        {
          c_19 = ATgetArgument(c_9, 0);
        }
      else
        _fail(t);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(c_19, j_19, t);
  o_18 = t;
  t = term_v_7;
  q_18 = t;
  t = o_18;
  if(match_cons(t, sym_Stream_1))
    {
      r_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, o_18);
  t = v_4(q_18, r_18, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,r_28 = NULL,u_28 = NULL,w_28 = NULL,z_28 = NULL,a_29 = NULL,d_31 = NULL,e_31 = NULL,e_6 = NULL,c_6 = NULL;
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      z_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  u_28 = t;
  t = w_28;
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((l_28 != NULL) && (l_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                l_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(t_1, t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = term_f_9;
        l_28 = t;
      }
  }
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_29, z_28);
  c_6 = t;
  t = SSLsetAnnotations(c_6, u_28);
  t = m_28;
  if(match_cons(t, sym__2))
    {
      o_28 = ATgetArgument(t, 0);
      p_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(m_28);
  n_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_28, (ATerm) ATmakeAppl(sym__2, not_null(l_28), p_28));
  e_6 = t;
  t = SSLsetAnnotations(e_6, n_28);
  r_28 = t;
  if(match_cons(t, sym__2))
    {
      d_31 = ATgetArgument(t, 0);
      e_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL,p_17 = NULL,q_17 = NULL,s_17 = NULL,u_17 = NULL,f_6 = NULL;
        t = SSLgetAnnotations(r_28);
        h_17 = t;
        t = d_31;
        t = fetch_1_0(u_1, t);
        p_17 = t;
        t = e_31;
        if(match_cons(t, sym__2))
          {
            s_17 = ATgetArgument(t, 0);
            u_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_4(w_1, s_17, u_17, t);
        q_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_17, q_17);
        f_6 = t;
        t = SSLsetAnnotations(f_6, h_17);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        {
          ATerm e_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,j_6 = NULL;
          t = SSLgetAnnotations(r_28);
          e_18 = t;
          t = e_31;
          if(match_cons(t, sym__2))
            {
              l_18 = ATgetArgument(t, 0);
              m_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_4(x_1, l_18, m_18, t);
          k_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, d_31, k_18);
          j_6 = t;
          t = SSLsetAnnotations(j_6, e_18);
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
ATerm apply_strategy_1_0 (ATerm r_107 (ATerm), ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL,m_31 = NULL,o_31 = NULL;
  o_31 = t;
  t = dtime_0_0(t);
  t = o_31;
  t = r_107(t);
  m_31 = t;
  t = dtime_0_0(t);
  h_31 = t;
  t = m_31;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_Runtime_1, h_31)), j_31);
  return(t);
}
static ATerm h_32 (ATerm b_32, ATerm t)
{
  t = SSL_fclose(b_32);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm e_32 = NULL,f_32 = NULL;
  f_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      e_32 = ATgetArgument(t, 0);
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(e_32);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            t = h_32(f_32, t);
          }
      }
    }
  else
    {
      t = h_32(f_32, t);
    }
  return(t);
}
static ATerm z_4 (ATerm k_25, ATerm t)
{
  t = SSL_read_term_from_stream(k_25);
  return(t);
}
static ATerm a_5 (ATerm g_39, ATerm h_39, ATerm t)
{
  t = SSL_strcat(g_39, h_39);
  return(t);
}
static ATerm b_5 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_fopen(p_40, q_40);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_32 = NULL;
  t = SSL_stdin_stream();
  j_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_32 = NULL;
  t = SSL_stdout_stream();
  k_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_stderr_stream();
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_32);
  return(t);
}
static ATerm u_33 (ATerm t_32, ATerm t)
{
  ATerm u_32 = NULL;
  t = SSL_explode_term(t_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            u_32 = ATgetFirst((ATermList) l_9);
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
  t = u_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = u_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = u_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = u_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm v_33 (ATerm x_32, ATerm y_32, ATerm z_32, ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,f_33 = NULL,q_6 = NULL;
  t = SSLgetAnnotations(z_32);
  c_33 = t;
  t = x_32;
  if(match_cons(t, sym_Path_1))
    {
      f_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_33, y_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, c_33);
  if(match_cons(t, sym__2))
    {
      a_33 = ATgetArgument(t, 0);
      b_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(a_33, b_33, t);
  return(t);
}
static ATerm w_33 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL,p_33 = NULL,t_6 = NULL;
  t = SSLgetAnnotations(j_33);
  m_33 = t;
  t = SSL_is_string(h_33);
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, i_33);
  t_6 = t;
  t = SSLsetAnnotations(t_6, m_33);
  if(match_cons(t, sym__2))
    {
      k_33 = ATgetArgument(t, 0);
      l_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(k_33, l_33, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  if(match_cons(t, sym__2))
    {
      s_33 = ATgetArgument(t, 0);
      t_33 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_33(r_33, t);
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
                  t = v_33(s_33, t_33, r_33, t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  t = w_33(s_33, t_33, r_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = u_33(r_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,f_34 = NULL;
  f_34 = t;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_t_9);
        t = c_5(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          ATerm c_20 = NULL,d_20 = NULL;
          t = term_u_9;
          d_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_9, f_34);
          t = a_5(d_20, f_34, t);
          c_20 = t;
          t = SSL_perror(c_20);
          _fail(t);
        }
      }
  }
  z_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(a_34, t);
  y_33 = t;
  t = z_33;
  t = fclose_0_0(t);
  t = y_33;
  return(t);
}
ATerm fetch_1_0 (ATerm b_91 (ATerm), ATerm t)
{
  static ATerm f_35 (ATerm t)
  {
    ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
    c_35 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_35 = ATgetFirst((ATermList) t);
        e_35 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_20 = NULL,r_20 = NULL,w_6 = NULL;
          t = SSLgetAnnotations(c_35);
          o_20 = t;
          t = d_35;
          t = b_91(t);
          r_20 = t;
          t = (ATerm) ATinsert(CheckATermList(e_35), r_20);
          w_6 = t;
          t = SSLsetAnnotations(w_6, o_20);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm z_20 = NULL,c_21 = NULL,x_6 = NULL;
            t = SSLgetAnnotations(c_35);
            z_20 = t;
            t = e_35;
            t = f_35(t);
            c_21 = t;
            t = (ATerm) ATinsert(CheckATermList(c_21), d_35);
            x_6 = t;
            t = SSLsetAnnotations(x_6, z_20);
          }
        }
    }
    return(t);
  }
  t = f_35(t);
  return(t);
}
static ATerm h_5 (ATerm u_56, ATerm v_56, ATerm t)
{
  ATerm i_35 = NULL;
  t = lookup_table_0_1(u_56, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      i_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(v_56, i_35, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm a_106 (ATerm), ATerm t)
{
  ATerm l_35 = NULL;
  l_35 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
        t = term_z_9;
        o_35 = t;
        t = term_a_10;
        p_35 = t;
        t = term_c_10;
        t = h_5(o_35, p_35, t);
        n_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_35, term_d_10);
        t = geq_0_0(t);
        t = l_35;
        t = a_106(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = l_35;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm s_35 = NULL;
  s_35 = t;
  if(match_string(t, "-k"))
    {
      t = s_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = s_35;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm t_35 = NULL,u_35 = NULL,v_35 = NULL;
  t_35 = t;
  t = SSL_string_to_int(t_35);
  u_35 = t;
  t = term_e_10;
  v_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, u_35);
  t = k_5(v_35, u_35, t);
  t = t_35;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, z_1, d_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm x_35 = NULL;
  x_35 = t;
  if(match_string(t, "-S"))
    {
      t = x_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = x_35;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL;
  t = term_a_10;
  y_35 = t;
  t = term_g_10;
  z_35 = t;
  t = term_h_10;
  t = k_5(y_35, z_35, t);
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
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  t = SSL_string_to_int(a_36);
  b_36 = t;
  t = term_a_10;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, b_36);
  t = k_5(c_36, b_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_36);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm d_36 = NULL,e_36 = NULL;
  t = term_l_10;
  d_36 = t;
  t = term_u_2;
  e_36 = t;
  t = term_m_10;
  t = k_5(d_36, e_36, t);
  t = term_n_10;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_p_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm q_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, i_2, t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = q_10;
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
            t = Option_3_0(n_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL;
  t = term_z_9;
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, g_50, h_50);
  t = lookup_table_0_1(f_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(g_50, h_50, g_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, g_50, h_50);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
      t = term_u_2;
      t = e_0(t);
      m_36 = t;
      t = term_v_10;
      n_36 = t;
      t = term_w_10;
      o_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, m_36);
      t = i_5(n_36, o_36, m_36, t);
      _fail(t);
    }
  else
    {
      ATerm r_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_36 = ATgetFirst((ATermList) t);
          l_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_36;
      t = c_0(t);
      t = term_u_2;
      t = d_0(t);
      r_36 = t;
      t = (ATerm) ATinsert(CheckATermList(l_36), r_36);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  if(match_string(t, "-o"))
    {
      t = t_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_36;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  u_36 = t;
  t = term_x_10;
  v_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, u_36);
  t = k_5(v_36, u_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_36);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, x_2, t);
  return(t);
}
static ATerm i_5 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t)
{
  ATerm x_36 = NULL,y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
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
        t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
        t = h_5(b_55, c_55, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
  }
  y_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, b_55, c_55, (ATerm) ATinsert(CheckATermList(y_36), a_55));
  t = lookup_table_0_1(b_55, t);
  b_37 = t;
  t = (ATerm) ATinsert(CheckATermList(y_36), a_55);
  z_36 = t;
  t = b_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(c_55, z_36, a_37, t);
  t = x_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
      t = term_u_2;
      t = n_0(t);
      m_37 = t;
      t = term_v_10;
      n_37 = t;
      t = term_w_10;
      o_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_v_10, term_w_10, m_37);
      t = i_5(n_37, o_37, m_37, t);
      _fail(t);
    }
  else
    {
      ATerm s_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_37 = ATgetFirst((ATermList) t);
          j_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_37;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_37 = ATgetFirst((ATermList) t);
          l_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_37;
      t = k_0(t);
      t = k_37;
      t = l_0(t);
      s_37 = t;
      t = (ATerm) ATinsert(CheckATermList(l_37), s_37);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm u_37 = NULL;
  u_37 = t;
  if(match_string(t, "-i"))
    {
      t = u_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = u_37;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL;
  v_37 = t;
  t = term_d_11;
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, v_37);
  t = k_5(w_37, v_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, v_37);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, a_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_2;
  t = whoami_0_0(t);
  x_37 = t;
  t = term_l_4;
  z_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_11), x_37);
  a_38 = t;
  t = SSL_printnl(z_37, a_38);
  t = term_o_4;
  y_37 = t;
  t = SSL_exit(y_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  t = term_z_9;
  b_38 = t;
  t = term_g_11;
  c_38 = t;
  t = term_h_11;
  t = h_5(b_38, c_38, t);
  return(t);
}
static ATerm d_5 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_43, k_43);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(j_43, k_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm i_97 (ATerm), ATerm j_97 (ATerm), ATerm t)
{
  ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
  e_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_38;
      t = i_97(t);
    }
  else
    {
      ATerm j_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_38 = ATgetFirst((ATermList) t);
          g_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_38;
      t = foldr_2_0(i_97, j_97, t);
      j_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, f_38, j_38);
      t = j_97(t);
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
  ATerm l_21 = NULL,m_21 = NULL;
  if(match_cons(t, sym__2))
    {
      l_21 = ATgetArgument(t, 0);
      m_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(l_21, m_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm m_38 = NULL,h_21 = NULL,i_21 = NULL;
  t = times_0_0(t);
  i_21 = t;
  t = SSL_explode_term(i_21);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_21;
  t = foldr_2_0(d_3, e_3, t);
  m_38 = t;
  t = SSL_TicksToSeconds(m_38);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  x_38 = t;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_38;
        if((y_38 != t))
          {
            _fail(t);
          }
        t = x_38;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(y_38, z_38);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(y_38, z_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, y_38, z_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm z_105 (ATerm), ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  {
    ATerm p_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_39 = NULL,i_39 = NULL,j_39 = NULL;
        t = term_z_9;
        i_39 = t;
        t = term_a_10;
        j_39 = t;
        t = term_c_10;
        t = h_5(i_39, j_39, t);
        f_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_39, term_o_4);
        t = geq_0_0(t);
        t = d_39;
        t = z_105(t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = p_11;
        t = d_39;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,o_39 = NULL,p_39 = NULL;
  t = run_time_0_0(t);
  l_39 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  m_39 = t;
  t = term_l_4;
  o_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), l_39), term_s_11), m_39);
  p_39 = t;
  t = SSL_printnl(o_39, p_39);
  t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_11), l_39), term_s_11), m_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_10;
  q_39 = t;
  t = SSL_exit(q_39);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL;
  b_40 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_40;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_40 = ATgetArgument(t, 0);
          {
            ATerm y_21 = NULL,c_7 = NULL;
            t = SSLgetAnnotations(b_40);
            y_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_40);
            c_7 = t;
            t = SSLsetAnnotations(c_7, y_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_40;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm p_108 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = NULL,u_39 = NULL;
      t = term_z_9;
      t_39 = t;
      t = term_w_11;
      u_39 = t;
      t = term_x_11;
      t = h_5(t_39, u_39, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(g_3, t);
    }
  t = p_108(t);
  return(t);
}
static ATerm l_5 (ATerm i_58, ATerm j_58, ATerm k_58, ATerm t)
{
  ATerm d_40 = NULL;
  t = SSL_hashtable_put(k_58, i_58, j_58);
  d_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_40);
  return(t);
}
static ATerm m_5 (ATerm l_58, ATerm m_58, ATerm t)
{
  t = SSL_hashtable_get(m_58, l_58);
  return(t);
}
ATerm lookup_table_0_1 (ATerm n_56, ATerm t)
{
  ATerm m_40 = NULL;
  t = table_hashtable_0_0(t);
  m_40 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_22 = NULL;
        t = m_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_5(n_56, e_22, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm j_22 = NULL;
          t = n_56;
          t = table_create_0_0(t);
          t = m_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_5(n_56, j_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm q_58, ATerm r_58, ATerm t)
{
  ATerm v_40 = NULL;
  t = SSL_hashtable_create(q_58, r_58);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm w_40 = NULL,y_40 = NULL,z_40 = NULL,b_41 = NULL,c_41 = NULL;
  w_40 = t;
  t = term_c_12;
  b_41 = t;
  t = term_d_12;
  c_41 = t;
  t = w_40;
  t = new_hashtable_0_2(b_41, c_41, t);
  y_40 = t;
  t = w_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      z_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(w_40, y_40, z_40, t);
  t = w_40;
  return(t);
}
static ATerm f_5 (ATerm n_58, ATerm o_58, ATerm t)
{
  ATerm d_41 = NULL;
  t = SSL_hashtable_remove(o_58, n_58);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_41);
  return(t);
}
static ATerm g_5 (ATerm s_58, ATerm t)
{
  ATerm e_41 = NULL;
  t = SSL_hashtable_destroy(s_58);
  e_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, e_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm f_41 = NULL;
  t = SSL_table_hashtable();
  f_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, f_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL;
  g_41 = t;
  t = table_hashtable_0_0(t);
  h_41 = t;
  t = lookup_table_0_1(g_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(j_41, t);
  t = h_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(g_41, i_41, t);
  t = g_41;
  return(t);
}
ATerm map_1_0 (ATerm r_90 (ATerm), ATerm t)
{
  static ATerm y_41 (ATerm t)
  {
    ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL;
    v_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_41;
      }
    else
      {
        ATerm o_22 = NULL,r_22 = NULL,s_22 = NULL,f_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_41 = ATgetFirst((ATermList) t);
            x_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_41);
        o_22 = t;
        t = w_41;
        t = r_90(t);
        r_22 = t;
        t = x_41;
        t = y_41(t);
        s_22 = t;
        t = (ATerm) ATinsert(CheckATermList(s_22), r_22);
        f_7 = t;
        t = SSLsetAnnotations(f_7, o_22);
      }
    return(t);
  }
  t = y_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_42 = ATgetFirst((ATermList) t);
      c_42 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_42 = NULL,h_42 = NULL;
        static ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_42)), not_null(h_42));
          return(t);
        }
        t = c_42;
        t = i_0(t);
        if(((g_42 != NULL) && (g_42 != t)))
          _fail(t);
        else
          g_42 = t;
        t = b_42;
        t = g_0(t);
        if(((h_42 != NULL) && (h_42 != t)))
          _fail(t);
        else
          h_42 = t;
        t = c_42;
        t = reverse_acc_2_0(g_0, h_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_u_2;
      t = i_0(t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,k_7 = NULL;
  p_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_42);
  n_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_42);
  k_7 = t;
  t = SSLsetAnnotations(k_7, n_42);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm r_42 = NULL;
  r_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_42), term_e_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_42 = NULL,m_42 = NULL;
      t = term_z_9;
      l_42 = t;
      t = term_g_11;
      m_42 = t;
      t = term_h_11;
      t = h_5(l_42, m_42, t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      t = fetch_1_0(i_3, t);
    }
  t = term_h_12;
  t = echo_0_0(t);
  t = term_v_10;
  j_42 = t;
  t = term_w_10;
  k_42 = t;
  t = term_i_12;
  t = h_5(j_42, k_42, t);
  t = reverse_acc_2_0(_id, j_3, t);
  t = map_1_0(k_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_42;
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
            t = t_42;
          }
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATinsert(ATempty, t_42);
      }
  }
  u_42 = t;
  t = term_f_9;
  v_42 = t;
  t = SSL_printnl(v_42, u_42);
  t = t_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL;
  t = term_z_9;
  z_42 = t;
  t = term_g_11;
  a_43 = t;
  t = term_h_11;
  t = h_5(z_42, a_43, t);
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
  ATerm b_43 = NULL,c_43 = NULL;
  t = term_n_12;
  b_43 = t;
  t = term_u_2;
  c_43 = t;
  t = term_o_12;
  t = k_5(b_43, c_43, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_p_12;
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
  ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL;
  t = term_n_12;
  f_43 = t;
  t = term_u_2;
  g_43 = t;
  t = term_o_12;
  t = k_5(f_43, g_43, t);
  t = term_q_12;
  d_43 = t;
  t = term_u_2;
  e_43 = t;
  t = term_r_12;
  t = k_5(d_43, e_43, t);
  t = term_s_12;
  return(t);
}
static ATerm q_3 (ATerm t)
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
      t = Option_3_0(l_3, m_3, n_3, t);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = Option_3_0(o_3, p_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm k_62 (ATerm), ATerm l_62 (ATerm), ATerm t)
{
  ATerm h_43 = NULL,i_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,o_7 = NULL;
  o_43 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_43 = ATgetFirst((ATermList) t);
      l_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_43);
  h_43 = t;
  t = i_43;
  t = k_62(t);
  m_43 = t;
  t = l_43;
  t = l_62(t);
  n_43 = t;
  t = (ATerm) ATinsert(CheckATermList(n_43), m_43);
  o_7 = t;
  t = SSLsetAnnotations(o_7, h_43);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm s_110 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,y_43 = NULL,z_43 = NULL,s_7 = NULL;
  t_43 = t;
  {
    ATerm w_12 = t;
    int x_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_12;
        t = s_110(t);
        LocalPopChoice(x_12);
      }
    else
      {
        t = w_12;
      }
  }
  t = t_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_43 = ATgetFirst((ATermList) t);
      w_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_43);
  u_43 = t;
  t = term_g_11;
  z_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, v_43);
  t = k_5(z_43, v_43, t);
  t = w_43;
  {
    static ATerm j_44 (ATerm t)
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_44 = NULL;
              c_44 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_44;
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
              t = s_110(t);
              t = Cons_2_0(_id, j_44, t);
            }
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            ATerm f_44 = NULL,g_44 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_44 = ATgetFirst((ATermList) t);
                g_44 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_44), (ATerm) ATmakeAppl(sym_Undefined_1, f_44));
          }
        }
      return(t);
    }
    t = j_44(t);
  }
  y_43 = t;
  t = (ATerm) ATinsert(CheckATermList(y_43), (ATerm) ATmakeAppl(sym_Program_1, v_43));
  s_7 = t;
  t = SSLsetAnnotations(s_7, u_43);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm x_44 = NULL;
  x_44 = t;
  if(match_string(t, "--help"))
    {
      t = x_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = x_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = x_44;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL;
  t = term_w_11;
  y_44 = t;
  t = term_u_2;
  z_44 = t;
  t = term_d_13;
  t = k_5(y_44, z_44, t);
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
ATerm parse_options_1_0 (ATerm r_110 (ATerm), ATerm t)
{
  ATerm o_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL;
  r_44 = t;
  t = term_v_10;
  s_44 = t;
  t = term_g_13;
  t = lookup_table_0_1(s_44, t);
  w_44 = t;
  t = term_w_10;
  t_44 = t;
  t = (ATerm) ATempty;
  u_44 = t;
  t = w_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(t_44, u_44, v_44, t);
  t = r_44;
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_110(t);
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
        ATerm k_45 = NULL;
        k_45 = t;
        {
          ATerm o_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_22 = NULL;
              t = k_45;
              {
                ATerm q_13 = t;
                int t_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_23 = NULL,b_23 = NULL;
                    t = term_z_9;
                    a_23 = t;
                    t = term_w_11;
                    b_23 = t;
                    t = term_x_11;
                    t = h_5(a_23, b_23, t);
                    LocalPopChoice(t_13);
                  }
                else
                  {
                    t = q_13;
                    t = fetch_1_0(x_3, t);
                  }
              }
              t = k_45;
              t = default_system_usage_0_0(t);
              t = term_g_10;
              z_22 = t;
              t = SSL_exit(z_22);
              LocalPopChoice(p_13);
            }
          else
            {
              t = o_13;
              {
                ATerm f_23 = NULL,g_23 = NULL,h_23 = NULL;
                t = term_z_9;
                g_23 = t;
                t = term_n_12;
                h_23 = t;
                t = term_u_13;
                t = h_5(g_23, h_23, t);
                t = k_45;
                t = default_system_about_0_0(t);
                t = term_g_10;
                f_23 = t;
                t = SSL_exit(f_23);
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
              ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
              static ATerm y_3 (ATerm t)
              {
                ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,u_7 = NULL;
                q_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    p_45 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(q_45);
                o_45 = t;
                t = p_45;
                if(((o_44 != NULL) && (o_44 != t)))
                  _fail(t);
                else
                  o_44 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, p_45);
                u_7 = t;
                t = SSLsetAnnotations(u_7, o_45);
                return(t);
              }
              t = fetch_1_0(y_3, t);
              t = term_l_4;
              m_45 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), term_x_13);
              n_45 = t;
              t = SSL_printnl(m_45, n_45);
              t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_44)), term_x_13));
              t = default_system_usage_0_0(t);
              t = term_o_4;
              l_45 = t;
              t = SSL_exit(l_45);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
            }
        }
      }
  }
  q_44 = t;
  t = term_v_10;
  t = table_destroy_0_0(t);
  t = q_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm r_108 (ATerm), ATerm s_108 (ATerm), ATerm t_108 (ATerm), ATerm u_108 (ATerm), ATerm t)
{
  ATerm v_45 = NULL,w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL;
  t = parse_options_1_0(r_108, t);
  v_45 = t;
  t = term_y_13;
  t = table_create_0_0(t);
  t = term_y_13;
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_z_13, v_45);
  t = lookup_table_0_1(w_45, t);
  z_45 = t;
  t = term_z_13;
  x_45 = t;
  t = z_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(x_45, v_45, y_45, t);
  t = v_45;
  t = t_108(t);
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(s_108, t);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm e_14 = t;
          int f_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_108(t);
              t = report_success_0_0(t);
              LocalPopChoice(f_14);
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
  ATerm a_46 = NULL,b_46 = NULL;
  t = term_h_14;
  a_46 = t;
  t = term_u_2;
  b_46 = t;
  t = term_l_14;
  t = k_5(a_46, b_46, t);
  t = term_m_14;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_o_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL;
  c_46 = t;
  t = term_z_9;
  g_46 = t;
  t = term_g_11;
  h_46 = t;
  t = term_h_11;
  t = h_5(g_46, h_46, t);
  d_46 = t;
  t = term_l_4;
  e_46 = t;
  t = (ATerm) ATinsert(ATempty, d_46);
  f_46 = t;
  t = SSL_printnl(e_46, f_46);
  t = c_46;
  return(t);
}
ATerm iowrap_3_0 (ATerm a_108 (ATerm), ATerm b_108 (ATerm), ATerm c_108 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_108(t);
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        {
          ATerm s_14 = t;
          int u_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(u_14);
            }
          else
            {
              t = s_14;
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
                          t = Option_3_0(c_4, d_4, e_4, t);
                          LocalPopChoice(y_14);
                        }
                      else
                        {
                          t = x_14;
                          {
                            ATerm z_14 = t;
                            int c_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(c_15);
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
  static ATerm b_4 (ATerm t)
  {
    ATerm i_46 = NULL,j_46 = NULL,k_46 = NULL;
    j_46 = t;
    {
      ATerm d_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((i_46 != NULL) && (i_46 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  i_46 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_4, t);
          LocalPopChoice(e_15);
        }
      else
        {
          t = d_15;
          t = term_f_15;
          i_46 = t;
        }
    }
    t = not_null(i_46);
    t = ReadFromFile_0_0(t);
    k_46 = t;
    t = (ATerm) ATmakeAppl(sym__2, j_46, k_46);
    t = apply_strategy_1_0(a_108, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_3, c_108, a_4, b_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL,y_7 = NULL;
  r_46 = t;
  if(match_cons(t, sym__2))
    {
      o_46 = ATgetArgument(t, 0);
      p_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_46);
  n_46 = t;
  t = p_46;
  t = topdown_1_0(k_4, t);
  q_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_46, q_46);
  y_7 = t;
  t = SSLsetAnnotations(y_7, n_46);
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
