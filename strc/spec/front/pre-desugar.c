#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
Symbol sym_Con_3;
Symbol sym_TupleCong_1;
Symbol sym_TupleCong_0;
Symbol sym_Undefined_0;
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
Symbol sym_Hashtable_1;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
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
  sym_Hashtable_1 = ATmakeSymbol("Hashtable", 1, ATfalse);
  ATprotectSymbol(sym_Hashtable_1);
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
ATerm term_o_14;
ATerm term_m_14;
ATerm term_i_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_x_13;
ATerm term_u_13;
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
ATerm term_c_12;
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
ATerm term_v_10;
ATerm term_u_10;
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
ATerm term_z_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_o_4;
ATerm term_n_4;
ATerm term_m_4;
ATerm term_l_4;
ATerm term_t_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_2));
  term_t_2 = (ATerm) ATmakeAppl(sym__0);
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
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_Op_2, term_r_6, (ATerm) ATempty);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_g_7);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_6);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_Call_2, term_j_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(39);
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
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
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
  term_m_10 = (ATerm) ATmakeAppl(sym__2, term_l_10, term_t_2);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
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
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_v_10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_t_2);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_t_2);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_w_11, term_t_2);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, (ATerm) ATempty);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(sym__2, term_z_9, term_m_12);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym__2, term_i_14, term_t_2);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t);
static ATerm n_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm f_27 (ATerm g_17, ATerm j_17, ATerm t);
static ATerm i_27 (ATerm t_17, ATerm a_18, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm m_104 (ATerm), ATerm t);
static ATerm v_4 (ATerm d_54, ATerm e_54, ATerm t);
static ATerm w_4 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm y_4 (ATerm p_110 (ATerm), ATerm n_259, ATerm o_38, ATerm t);
static ATerm x_4 (ATerm e_38, ATerm f_38, ATerm t);
static ATerm v_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm n_128 (ATerm), ATerm t);
static ATerm x_31 (ATerm r_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm z_4 (ATerm k_38, ATerm t);
static ATerm a_5 (ATerm h_52, ATerm i_52, ATerm t);
static ATerm b_5 (ATerm f_54, ATerm g_54, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm i_33 (ATerm h_32, ATerm t);
static ATerm j_33 (ATerm l_32, ATerm m_32, ATerm n_32, ATerm t);
static ATerm k_33 (ATerm v_32, ATerm w_32, ATerm x_32, ATerm t);
static ATerm c_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm i_111 (ATerm), ATerm t);
static ATerm h_5 (ATerm d_61, ATerm e_61, ATerm t);
ATerm if_verbose2_1_0 (ATerm w_126 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm f_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm r_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm k_5 (ATerm b_73, ATerm c_73, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm i_5 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t);
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm d_5 (ATerm t_57, ATerm u_57, ATerm t);
ATerm foldr_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm v_126 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm need_help_1_0 (ATerm l_129 (ATerm), ATerm t);
static ATerm l_5 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t);
static ATerm m_5 (ATerm f_64, ATerm g_64, ATerm t);
ATerm lookup_table_0_1 (ATerm w_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm f_5 (ATerm h_64, ATerm i_64, ATerm t);
static ATerm g_5 (ATerm m_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm map_1_0 (ATerm y_110 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_131 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm parse_options_1_0 (ATerm i_131 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm iowrap_3_0 (ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t);
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
  ATerm a_0 = NULL,c_0 = NULL,e_0 = NULL,i_0 = NULL,k_0 = NULL;
  a_0 = t;
  t = term_t_2;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_l_4;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_4), c_0), term_m_4);
  k_0 = t;
  t = SSL_printnl(i_0, k_0);
  t = term_o_4;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  static ATerm e_2 (ATerm t);
  static ATerm e_2 (ATerm t)
  {
    ATerm z_1 = NULL,b_2 = NULL,c_2 = NULL;
    z_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_2 = ATgetFirst((ATermList) t);
        c_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm p_4 = t;
      int q_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,r_0 = NULL;
          t = SSLgetAnnotations(z_1);
          q_0 = t;
          t = c_2;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(c_2), b_2);
          r_0 = t;
          t = SSLsetAnnotations(r_0, q_0);
          t = a_112(t);
          LocalPopChoice(q_4);
        }
      else
        {
          t = p_4;
          {
            ATerm o_1 = NULL,r_1 = NULL,t_0 = NULL;
            t = SSLgetAnnotations(z_1);
            o_1 = t;
            t = c_2;
            t = e_2(t);
            r_1 = t;
            t = (ATerm) ATinsert(CheckATermList(r_1), b_2);
            t_0 = t;
            t = SSLsetAnnotations(t_0, o_1);
          }
        }
    }
    return(t);
  }
  t = e_2(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      o_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_2;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_2;
    }
  else
    {
      t = o_2;
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
ATerm unquote_chars_2_0 (ATerm a_121 (ATerm), ATerm b_121 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL,w_2 = NULL;
  u_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_2 = ATgetFirst((ATermList) t);
      {
        ATerm u_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = w_2;
  t = a_121(t);
  t = u_2;
  t = last_0_0(t);
  t = b_121(t);
  t = u_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm e_5 = ATgetFirst((ATermList) t);
      v_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_2;
  t = at_last_1_0(b_0, t);
  return(t);
}
static ATerm n_0 (ATerm t)
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
static ATerm s_0 (ATerm t)
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
static ATerm d_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,j_14 = NULL,n_14 = NULL;
  d_14 = t;
  if(match_cons(t, sym_Real_1))
    {
      j_14 = ATgetArgument(t, 0);
      {
        ATerm d_2 = NULL;
        t = SSL_string_to_real(j_14);
        d_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, d_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          j_14 = ATgetArgument(t, 0);
          {
            ATerm q_2 = NULL;
            t = SSL_string_to_int(j_14);
            q_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, q_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              j_14 = ATgetArgument(t, 0);
              n_14 = ATgetArgument(t, 1);
              c_14 = ATgetArgument(t, 2);
              t = SSL_is_string(c_14);
              t = (ATerm) ATmakeAppl(sym_Con_3, j_14, n_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, c_14), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  j_14 = ATgetArgument(t, 0);
                  n_14 = ATgetArgument(t, 1);
                  c_14 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = j_14;
                    {
                      ATerm j_5 = t;
                      int n_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(j_14);
                          t = unquote_chars_2_0(n_0, p_0, t);
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
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, n_14, c_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      j_14 = ATgetArgument(t, 0);
                      n_14 = ATgetArgument(t, 1);
                      {
                        ATerm f_4 = NULL;
                        t = j_14;
                        {
                          ATerm o_5 = t;
                          int p_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 = NULL;
                              t = SSL_explode_string(j_14);
                              t = unquote_chars_2_0(s_0, u_0, t);
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
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, (ATerm)ATempty, n_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          j_14 = ATgetArgument(t, 0);
                          {
                            ATerm r_4 = NULL;
                            t = j_14;
                            {
                              ATerm q_5 = t;
                              int r_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm s_4 = NULL;
                                  t = SSL_explode_string(j_14);
                                  t = unquote_chars_2_0(v_0, d_1, t);
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
                              j_14 = ATgetArgument(t, 0);
                              {
                                ATerm x_5 = NULL,a_6 = NULL,d_6 = NULL,w_0 = NULL;
                                t = SSLgetAnnotations(d_14);
                                x_5 = t;
                                t = SSL_explode_string(j_14);
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
                                d_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_6);
                                w_0 = t;
                                t = SSLsetAnnotations(w_0, x_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  j_14 = ATgetArgument(t, 0);
                                  n_14 = ATgetArgument(t, 1);
                                  c_14 = ATgetArgument(t, 2);
                                  b_14 = ATgetArgument(t, 3);
                                  {
                                    ATerm b_7 = NULL,l_7 = NULL,m_7 = NULL,x_0 = NULL;
                                    t = SSLgetAnnotations(d_14);
                                    b_7 = t;
                                    t = SSL_explode_string(j_14);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm t_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(t_5) != AT_INT) || (ATgetInt((ATermInt) t_5) != 39)))
                                          _fail(t);
                                        l_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(l_7);
                                    m_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, m_7, n_14, c_14, b_14);
                                    x_0 = t;
                                    t = SSLsetAnnotations(x_0, b_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      j_14 = ATgetArgument(t, 0);
                                      n_14 = ATgetArgument(t, 1);
                                      c_14 = ATgetArgument(t, 2);
                                      {
                                        ATerm o_8 = NULL,y_8 = NULL,c_9 = NULL,y_0 = NULL;
                                        t = SSLgetAnnotations(d_14);
                                        o_8 = t;
                                        t = SSL_explode_string(j_14);
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
                                        c_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, c_9, n_14, c_14);
                                        y_0 = t;
                                        t = SSLsetAnnotations(y_0, o_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          j_14 = ATgetArgument(t, 0);
                                          n_14 = ATgetArgument(t, 1);
                                          c_14 = ATgetArgument(t, 2);
                                          b_14 = ATgetArgument(t, 3);
                                          {
                                            ATerm c_10 = NULL,r_10 = NULL,w_10 = NULL,z_0 = NULL;
                                            t = SSLgetAnnotations(d_14);
                                            c_10 = t;
                                            t = SSL_explode_string(j_14);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm y_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                                  _fail(t);
                                                r_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(r_10);
                                            w_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_10, n_14, c_14, b_14);
                                            z_0 = t;
                                            t = SSLsetAnnotations(z_0, c_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              j_14 = ATgetArgument(t, 0);
                                              n_14 = ATgetArgument(t, 1);
                                              c_14 = ATgetArgument(t, 2);
                                              {
                                                ATerm t_11 = NULL,b_12 = NULL,d_13 = NULL,a_1 = NULL;
                                                t = SSLgetAnnotations(d_14);
                                                t_11 = t;
                                                t = SSL_explode_string(j_14);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm z_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                                      _fail(t);
                                                    b_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(b_12);
                                                d_13 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, d_13, n_14, c_14);
                                                a_1 = t;
                                                t = SSLsetAnnotations(a_1, t_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  j_14 = ATgetArgument(t, 0);
                                                  n_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm o_13 = NULL,s_13 = NULL,t_13 = NULL,b_1 = NULL;
                                                    t = SSLgetAnnotations(d_14);
                                                    o_13 = t;
                                                    t = SSL_explode_string(j_14);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm g_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                                                          _fail(t);
                                                        s_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(s_13);
                                                    t_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, t_13, n_14);
                                                    b_1 = t;
                                                    t = SSLsetAnnotations(b_1, o_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      j_14 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm h_14 = NULL,k_14 = NULL,l_14 = NULL,c_1 = NULL;
                                                        t = SSLgetAnnotations(d_14);
                                                        h_14 = t;
                                                        t = SSL_explode_string(j_14);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm h_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(h_6) != AT_INT) || (ATgetInt((ATermInt) h_6) != 39)))
                                                              _fail(t);
                                                            k_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(k_14);
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
                                                          j_14 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm y_14 = NULL,b_15 = NULL,d_15 = NULL,e_1 = NULL;
                                                            t = SSLgetAnnotations(d_14);
                                                            y_14 = t;
                                                            t = SSL_explode_string(j_14);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm i_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(i_6) != AT_INT) || (ATgetInt((ATermInt) i_6) != 39)))
                                                                  _fail(t);
                                                                b_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(b_15);
                                                            d_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, d_15);
                                                            e_1 = t;
                                                            t = SSLsetAnnotations(e_1, y_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              j_14 = ATgetArgument(t, 0);
                                                              n_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm p_15 = NULL,u_15 = NULL,v_15 = NULL,f_1 = NULL;
                                                                t = SSLgetAnnotations(d_14);
                                                                p_15 = t;
                                                                t = SSL_explode_string(j_14);
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
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, v_15, n_14);
                                                                f_1 = t;
                                                                t = SSLsetAnnotations(f_1, p_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm g_16 = NULL,j_16 = NULL,k_16 = NULL,m_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  j_14 = ATgetArgument(t, 0);
                                                                  n_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(d_14);
                                                              g_16 = t;
                                                              t = SSL_explode_string(j_14);
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
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, k_16, n_14);
                                                              m_1 = t;
                                                              t = SSLsetAnnotations(m_1, g_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm f_27 (ATerm g_17, ATerm j_17, ATerm t)
{
  t = g_17;
  {
    ATerm l_6 = t;
    if((PushChoice() == 0))
      {
        ATerm l_17 = NULL,n_17 = NULL,o_17 = NULL,r_17 = NULL,u_5 = NULL;
        r_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_17 = ATgetFirst((ATermList) t);
            o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(r_17);
        l_17 = t;
        t = o_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_17), n_17);
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
static ATerm i_27 (ATerm t_17, ATerm a_18, ATerm t)
{
  t = t_17;
  {
    ATerm n_6 = t;
    if((PushChoice() == 0))
      {
        ATerm d_18 = NULL,f_18 = NULL,i_18 = NULL,j_18 = NULL,v_5 = NULL;
        j_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_18 = ATgetFirst((ATermList) t);
            i_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(j_18);
        d_18 = t;
        t = i_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(i_18), f_18);
        v_5 = t;
        t = SSLsetAnnotations(v_5, d_18);
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
  ATerm d_19 = NULL,e_19 = NULL,p_16 = NULL;
  d_19 = t;
  t = SSL_explode_term(d_19);
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
  t = SSL_explode_term(d_19);
  if(match_cons(t, sym__2))
    {
      ATerm y_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm a_7 = ATgetArgument(t, 1);
        if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
          {
            ATerm c_7 = ATgetFirst((ATermList) a_7);
            ATerm e_7 = (ATerm) ATgetNext((ATermList) a_7);
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
  ATerm a_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_g_7, (ATerm) ATinsert(ATinsert(ATempty, e_20), a_20));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_s_6;
  return(t);
}
static ATerm l_1 (ATerm t)
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
static ATerm p_1 (ATerm t)
{
  ATerm c_21 = NULL,g_21 = NULL;
  if(match_cons(t, sym__2))
    {
      c_21 = ATgetArgument(t, 0);
      g_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, g_21), c_21));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_k_7;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL;
  if(match_cons(t, sym__2))
    {
      i_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_7, (ATerm) ATinsert(ATinsert(ATempty, j_21), i_21));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm n_18 = NULL,p_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL;
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
                  ATerm o_7 = t;
                  int q_7 = stack_ptr;
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
                      LocalPopChoice(q_7);
                    }
                  else
                    {
                      t = o_7;
                      {
                        ATerm y_16 = NULL;
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
                                  y_16 = ATgetFirst((ATermList) z_7);
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
                        t = y_16;
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
                                    t = foldr_2_0(k_1, l_1, t);
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
                                            s_18 = (ATerm) ATgetNext((ATermList) t);
                                            t = s_18;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm m_8 = t;
                                                int n_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = f_27(w_18, v_18, t);
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
                                                t = f_27(w_18, v_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = f_27(w_18, v_18, t);
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
                                                                      t = foldr_2_0(n_1, p_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        w_18 = ATgetArgument(t, 0);
                                                                        t = w_18;
                                                                        t = foldr_2_0(q_1, s_1, t);
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
                                                                                    s_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = s_18;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm p_8 = t;
                                                                                        int q_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = i_27(w_18, v_18, t);
                                                                                            LocalPopChoice(q_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = p_8;
                                                                                            t = p_18;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = i_27(w_18, v_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = i_27(w_18, v_18, t);
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
ATerm repeat_2_0 (ATerm m_103 (ATerm), ATerm n_103 (ATerm), ATerm t)
{
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm w_8 = t;
    int x_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_103(t);
        t = k_27(t);
        LocalPopChoice(x_8);
      }
    else
      {
        t = w_8;
        t = n_103(t);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm m_104 (ATerm), ATerm t)
{
  static ATerm t_1 (ATerm t);
  static ATerm t_1 (ATerm t)
  {
    t = topdown_1_0(m_104, t);
    return(t);
  }
  t = m_104(t);
  t = SRTS_all(t_1, t);
  return(t);
}
static ATerm v_4 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm l_27 = NULL;
  t = SSL_fputc(d_54, e_54);
  l_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_27);
  return(t);
}
static ATerm w_4 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm m_27 = NULL;
  t = SSL_write_term_to_stream_text(i_38, j_38);
  m_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_27);
  return(t);
}
static ATerm y_4 (ATerm p_110 (ATerm), ATerm n_259, ATerm o_38, ATerm t)
{
  ATerm o_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, n_259, term_z_8);
  t = c_5(t);
  o_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_27, o_38);
  t = p_110(t);
  t = fclose_0_0(t);
  t = o_38;
  return(t);
}
static ATerm x_4 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_write_term_to_stream_baf(e_38, f_38);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if(match_cons(a_9, sym_Stream_1))
        {
          w_17 = ATgetArgument(a_9, 0);
        }
      else
        _fail(t);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = x_4(w_17, x_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,c_19 = NULL,j_19 = NULL,k_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm b_9 = ATgetArgument(t, 0);
      if(match_cons(b_9, sym_Stream_1))
        {
          j_19 = ATgetArgument(b_9, 0);
        }
      else
        _fail(t);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(j_19, k_19, t);
  q_18 = t;
  t = term_v_7;
  r_18 = t;
  t = q_18;
  if(match_cons(t, sym_Stream_1))
    {
      c_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_v_7, q_18);
  t = v_4(r_18, c_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,h_28 = NULL,k_28 = NULL,l_28 = NULL,o_28 = NULL,p_28 = NULL,t_30 = NULL,u_30 = NULL,c_6 = NULL,b_6 = NULL;
  c_28 = t;
  if(match_cons(t, sym__2))
    {
      l_28 = ATgetArgument(t, 0);
      o_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  k_28 = t;
  t = l_28;
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
              if(((b_28 != NULL) && (b_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                b_28 = ATgetArgument(t, 0);
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
        b_28 = t;
      }
  }
  p_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_28, o_28);
  b_6 = t;
  t = SSLsetAnnotations(b_6, k_28);
  t = c_28;
  if(match_cons(t, sym__2))
    {
      e_28 = ATgetArgument(t, 0);
      f_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_28);
  d_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_28, (ATerm) ATmakeAppl(sym__2, not_null(b_28), f_28));
  c_6 = t;
  t = SSLsetAnnotations(c_6, d_28);
  h_28 = t;
  if(match_cons(t, sym__2))
    {
      t_30 = ATgetArgument(t, 0);
      u_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_9 = t;
    int h_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL,q_17 = NULL,s_17 = NULL,u_17 = NULL,v_17 = NULL,e_6 = NULL;
        t = SSLgetAnnotations(h_28);
        i_17 = t;
        t = t_30;
        t = fetch_1_0(v_1, t);
        q_17 = t;
        t = u_30;
        if(match_cons(t, sym__2))
          {
            u_17 = ATgetArgument(t, 0);
            v_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = y_4(w_1, u_17, v_17, t);
        s_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, q_17, s_17);
        e_6 = t;
        t = SSLsetAnnotations(e_6, i_17);
        LocalPopChoice(h_9);
      }
    else
      {
        t = g_9;
        {
          ATerm g_18 = NULL,l_18 = NULL,m_18 = NULL,o_18 = NULL,f_6 = NULL;
          t = SSLgetAnnotations(h_28);
          g_18 = t;
          t = u_30;
          if(match_cons(t, sym__2))
            {
              m_18 = ATgetArgument(t, 0);
              o_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = y_4(x_1, m_18, o_18, t);
          l_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, t_30, l_18);
          f_6 = t;
          t = SSLsetAnnotations(f_6, g_18);
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
ATerm apply_strategy_1_0 (ATerm n_128 (ATerm), ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,c_31 = NULL,e_31 = NULL;
  e_31 = t;
  t = dtime_0_0(t);
  t = e_31;
  t = n_128(t);
  c_31 = t;
  t = dtime_0_0(t);
  x_30 = t;
  t = c_31;
  if(match_cons(t, sym__2))
    {
      y_30 = ATgetArgument(t, 0);
      z_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_30), (ATerm) ATmakeAppl(sym_Runtime_1, x_30)), z_30);
  return(t);
}
static ATerm x_31 (ATerm r_31, ATerm t)
{
  t = SSL_fclose(r_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm u_31 = NULL,v_31 = NULL;
  v_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      u_31 = ATgetArgument(t, 0);
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(u_31);
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            t = x_31(v_31, t);
          }
      }
    }
  else
    {
      t = x_31(v_31, t);
    }
  return(t);
}
static ATerm z_4 (ATerm k_38, ATerm t)
{
  t = SSL_read_term_from_stream(k_38);
  return(t);
}
static ATerm a_5 (ATerm h_52, ATerm i_52, ATerm t)
{
  t = SSL_strcat(h_52, i_52);
  return(t);
}
static ATerm b_5 (ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm y_31 = NULL;
  t = SSL_fopen(f_54, g_54);
  y_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm z_31 = NULL;
  t = SSL_stdin_stream();
  z_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm a_32 = NULL;
  t = SSL_stdout_stream();
  a_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_stderr_stream();
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
static ATerm i_33 (ATerm h_32, ATerm t)
{
  ATerm i_32 = NULL;
  t = SSL_explode_term(h_32);
  if(match_cons(t, sym__2))
    {
      ATerm k_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_9 = ATgetArgument(t, 1);
        if(((ATgetType(l_9) == AT_LIST) && !(ATisEmpty(l_9))))
          {
            i_32 = ATgetFirst((ATermList) l_9);
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
  t = i_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = i_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = i_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = i_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm j_33 (ATerm l_32, ATerm m_32, ATerm n_32, ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,t_32 = NULL,p_6 = NULL;
  t = SSLgetAnnotations(n_32);
  q_32 = t;
  t = l_32;
  if(match_cons(t, sym_Path_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, t_32, m_32);
  p_6 = t;
  t = SSLsetAnnotations(p_6, q_32);
  if(match_cons(t, sym__2))
    {
      o_32 = ATgetArgument(t, 0);
      p_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(o_32, p_32, t);
  return(t);
}
static ATerm k_33 (ATerm v_32, ATerm w_32, ATerm x_32, ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL,d_33 = NULL,q_6 = NULL;
  t = SSLgetAnnotations(x_32);
  a_33 = t;
  t = SSL_is_string(v_32);
  d_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_33, w_32);
  q_6 = t;
  t = SSLsetAnnotations(q_6, a_33);
  if(match_cons(t, sym__2))
    {
      y_32 = ATgetArgument(t, 0);
      z_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(y_32, z_32, t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  if(match_cons(t, sym__2))
    {
      g_33 = ATgetArgument(t, 0);
      h_33 = ATgetArgument(t, 1);
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_33(f_33, t);
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
                  t = j_33(g_33, h_33, f_33, t);
                  LocalPopChoice(q_9);
                }
              else
                {
                  t = p_9;
                  t = k_33(g_33, h_33, f_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = i_33(f_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL,t_33 = NULL;
  t_33 = t;
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, t_33, term_t_9);
        t = c_5(t);
        LocalPopChoice(s_9);
      }
    else
      {
        t = r_9;
        {
          ATerm d_20 = NULL,i_20 = NULL;
          t = term_u_9;
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_u_9, t_33);
          t = a_5(i_20, t_33, t);
          d_20 = t;
          t = SSL_perror(d_20);
          _fail(t);
        }
      }
  }
  n_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = z_4(o_33, t);
  m_33 = t;
  t = n_33;
  t = fclose_0_0(t);
  t = m_33;
  return(t);
}
ATerm fetch_1_0 (ATerm i_111 (ATerm), ATerm t)
{
  static ATerm s_34 (ATerm t);
  static ATerm s_34 (ATerm t)
  {
    ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
    p_34 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        q_34 = ATgetFirst((ATermList) t);
        r_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm v_9 = t;
      int w_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_20 = NULL,a_21 = NULL,v_6 = NULL;
          t = SSLgetAnnotations(p_34);
          p_20 = t;
          t = q_34;
          t = i_111(t);
          a_21 = t;
          t = (ATerm) ATinsert(CheckATermList(r_34), a_21);
          v_6 = t;
          t = SSLsetAnnotations(v_6, p_20);
          LocalPopChoice(w_9);
        }
      else
        {
          t = v_9;
          {
            ATerm p_21 = NULL,a_22 = NULL,w_6 = NULL;
            t = SSLgetAnnotations(p_34);
            p_21 = t;
            t = r_34;
            t = s_34(t);
            a_22 = t;
            t = (ATerm) ATinsert(CheckATermList(a_22), q_34);
            w_6 = t;
            t = SSLsetAnnotations(w_6, p_21);
          }
        }
    }
    return(t);
  }
  t = s_34(t);
  return(t);
}
static ATerm h_5 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm v_34 = NULL;
  t = lookup_table_0_1(d_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = m_5(e_61, v_34, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
        t = term_z_9;
        b_35 = t;
        t = term_a_10;
        c_35 = t;
        t = term_b_10;
        t = h_5(b_35, c_35, t);
        a_35 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_35, term_d_10);
        t = geq_0_0(t);
        t = y_34;
        t = w_126(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = y_34;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm f_35 = NULL;
  f_35 = t;
  if(match_string(t, "-k"))
    {
      t = f_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_35;
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
  g_35 = t;
  t = SSL_string_to_int(g_35);
  h_35 = t;
  t = term_e_10;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_10, h_35);
  t = k_5(i_35, h_35, t);
  t = g_35;
  return(t);
}
static ATerm f_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, a_2, f_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_35 = NULL;
  k_35 = t;
  if(match_string(t, "-S"))
    {
      t = k_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_35;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  t = term_a_10;
  l_35 = t;
  t = term_g_10;
  m_35 = t;
  t = term_h_10;
  t = k_5(l_35, m_35, t);
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
  ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
  n_35 = t;
  t = SSL_string_to_int(n_35);
  o_35 = t;
  t = term_a_10;
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_10, o_35);
  t = k_5(p_35, o_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_35);
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
static ATerm p_2 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  t = term_l_10;
  q_35 = t;
  t = term_t_2;
  r_35 = t;
  t = term_m_10;
  t = k_5(q_35, r_35, t);
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
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, i_2, t);
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm s_10 = t;
        int t_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(j_2, k_2, l_2, t);
            LocalPopChoice(t_10);
          }
        else
          {
            t = s_10;
            t = Option_3_0(m_2, p_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm k_5 (ATerm b_73, ATerm c_73, ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL;
  t = term_z_9;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, b_73, c_73);
  t = lookup_table_0_1(s_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(b_73, c_73, t_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_z_9, b_73, c_73);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_35 = NULL,a_36 = NULL,b_36 = NULL;
      t = term_t_2;
      t = g_0(t);
      z_35 = t;
      t = term_u_10;
      a_36 = t;
      t = term_v_10;
      b_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, z_35);
      t = i_5(a_36, b_36, z_35, t);
      _fail(t);
    }
  else
    {
      ATerm e_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_35 = ATgetFirst((ATermList) t);
          y_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_35;
      t = d_0(t);
      t = term_t_2;
      t = f_0(t);
      e_36 = t;
      t = (ATerm) ATinsert(CheckATermList(y_35), e_36);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm g_36 = NULL;
  g_36 = t;
  if(match_string(t, "-o"))
    {
      t = g_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_36;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm h_36 = NULL,i_36 = NULL;
  h_36 = t;
  t = term_x_10;
  i_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_10, h_36);
  t = k_5(i_36, h_36, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_36);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, x_2, y_2, t);
  return(t);
}
static ATerm i_5 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  k_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
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
        t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
        t = h_5(k_59, l_59, t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        t = (ATerm) ATempty;
      }
  }
  l_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_59, l_59, (ATerm) ATinsert(CheckATermList(l_36), j_59));
  t = lookup_table_0_1(k_59, t);
  o_36 = t;
  t = (ATerm) ATinsert(CheckATermList(l_36), j_59);
  m_36 = t;
  t = o_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(l_59, m_36, n_36, t);
  t = k_36;
  return(t);
}
ATerm ArgOption_3_0 (ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL,y_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_36 = NULL,a_37 = NULL,b_37 = NULL;
      t = term_t_2;
      t = o_0(t);
      z_36 = t;
      t = term_u_10;
      a_37 = t;
      t = term_v_10;
      b_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_10, term_v_10, z_36);
      t = i_5(a_37, b_37, z_36, t);
      _fail(t);
    }
  else
    {
      ATerm f_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_36 = ATgetFirst((ATermList) t);
          w_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_36 = ATgetFirst((ATermList) t);
          y_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_36;
      t = l_0(t);
      t = x_36;
      t = m_0(t);
      f_37 = t;
      t = (ATerm) ATinsert(CheckATermList(y_36), f_37);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  if(match_string(t, "-i"))
    {
      t = h_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_37;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  i_37 = t;
  t = term_d_11;
  j_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_11, i_37);
  t = k_5(j_37, i_37, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_37);
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL,n_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_2;
  t = whoami_0_0(t);
  k_37 = t;
  t = term_l_4;
  m_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_f_11), k_37);
  n_37 = t;
  t = SSL_printnl(m_37, n_37);
  t = term_o_4;
  l_37 = t;
  t = SSL_exit(l_37);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL;
  t = term_z_9;
  o_37 = t;
  t = term_g_11;
  p_37 = t;
  t = term_h_11;
  t = h_5(o_37, p_37, t);
  return(t);
}
static ATerm d_5 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_57, u_57);
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = SSL_addr(t_57, u_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm x_117 (ATerm), ATerm y_117 (ATerm), ATerm t)
{
  ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
  r_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_37;
      t = x_117(t);
    }
  else
    {
      ATerm w_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_37 = ATgetFirst((ATermList) t);
          t_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_37;
      t = foldr_2_0(x_117, y_117, t);
      w_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_37, w_37);
      t = y_117(t);
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
  ATerm l_22 = NULL,m_22 = NULL;
  if(match_cons(t, sym__2))
    {
      l_22 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_5(l_22, m_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_37 = NULL,h_22 = NULL,i_22 = NULL;
  t = times_0_0(t);
  i_22 = t;
  t = SSL_explode_term(i_22);
  if(match_cons(t, sym__2))
    {
      ATerm k_11 = ATgetArgument(t, 0);
      h_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_22;
  t = foldr_2_0(d_3, e_3, t);
  z_37 = t;
  t = SSL_TicksToSeconds(z_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,t_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym__2))
    {
      s_38 = ATgetArgument(t, 0);
      t_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_38;
        if((s_38 != t))
          {
            _fail(t);
          }
        t = r_38;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
        {
          ATerm n_11 = t;
          int o_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(s_38, t_38);
              LocalPopChoice(o_11);
            }
          else
            {
              t = n_11;
              t = SSL_gtr(s_38, t_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, s_38, t_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm v_126 (ATerm), ATerm t)
{
  ATerm x_38 = NULL;
  x_38 = t;
  {
    ATerm p_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
        t = term_z_9;
        a_39 = t;
        t = term_a_10;
        b_39 = t;
        t = term_b_10;
        t = h_5(a_39, b_39, t);
        z_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_38, term_o_4);
        t = geq_0_0(t);
        t = x_38;
        t = v_126(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = p_11;
        t = x_38;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm d_39 = NULL,e_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = run_time_0_0(t);
  d_39 = t;
  t = term_t_2;
  t = whoami_0_0(t);
  e_39 = t;
  t = term_l_4;
  g_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), d_39), term_r_11), e_39);
  h_39 = t;
  t = SSL_printnl(g_39, h_39);
  t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_11), d_39), term_r_11), e_39));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm i_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_g_10;
  i_39 = t;
  t = SSL_exit(i_39);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  v_39 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = v_39;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          u_39 = ATgetArgument(t, 0);
          {
            ATerm y_22 = NULL,z_6 = NULL;
            t = SSLgetAnnotations(v_39);
            y_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, u_39);
            z_6 = t;
            t = SSLsetAnnotations(z_6, y_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = v_39;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm l_129 (ATerm), ATerm t)
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_39 = NULL,m_39 = NULL;
      t = term_z_9;
      l_39 = t;
      t = term_w_11;
      m_39 = t;
      t = term_x_11;
      t = h_5(l_39, m_39, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(g_3, t);
    }
  t = l_129(t);
  return(t);
}
static ATerm l_5 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm x_39 = NULL;
  t = SSL_hashtable_put(e_64, c_64, d_64);
  x_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_39);
  return(t);
}
static ATerm m_5 (ATerm f_64, ATerm g_64, ATerm t)
{
  t = SSL_hashtable_get(g_64, f_64);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_60, ATerm t)
{
  ATerm g_40 = NULL;
  t = table_hashtable_0_0(t);
  g_40 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_23 = NULL;
        t = g_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            e_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = m_5(w_60, e_23, t);
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        {
          ATerm j_23 = NULL;
          t = w_60;
          t = table_create_0_0(t);
          t = g_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              j_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = m_5(w_60, j_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t)
{
  ATerm j_40 = NULL;
  t = SSL_hashtable_create(k_64, l_64);
  j_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL,m_40 = NULL,o_40 = NULL,p_40 = NULL;
  k_40 = t;
  t = term_a_12;
  o_40 = t;
  t = term_c_12;
  p_40 = t;
  t = k_40;
  t = new_hashtable_0_2(o_40, p_40, t);
  l_40 = t;
  t = k_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(k_40, l_40, m_40, t);
  t = k_40;
  return(t);
}
static ATerm f_5 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm q_40 = NULL;
  t = SSL_hashtable_remove(i_64, h_64);
  q_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_40);
  return(t);
}
static ATerm g_5 (ATerm m_64, ATerm t)
{
  ATerm r_40 = NULL;
  t = SSL_hashtable_destroy(m_64);
  r_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_40);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_table_hashtable();
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_40);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t_40 = t;
  t = table_hashtable_0_0(t);
  u_40 = t;
  t = lookup_table_0_1(t_40, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_5(w_40, t);
  t = u_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(t_40, v_40, t);
  t = t_40;
  return(t);
}
ATerm map_1_0 (ATerm y_110 (ATerm), ATerm t)
{
  static ATerm l_41 (ATerm t);
  static ATerm l_41 (ATerm t)
  {
    ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
    i_41 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_41;
      }
    else
      {
        ATerm o_23 = NULL,r_23 = NULL,s_23 = NULL,d_7 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_41 = ATgetFirst((ATermList) t);
            k_41 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_41);
        o_23 = t;
        t = j_41;
        t = y_110(t);
        r_23 = t;
        t = k_41;
        t = l_41(t);
        s_23 = t;
        t = (ATerm) ATinsert(CheckATermList(s_23), r_23);
        d_7 = t;
        t = SSLsetAnnotations(d_7, o_23);
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_41 = NULL,p_41 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_41 = ATgetFirst((ATermList) t);
      p_41 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm t_41 = NULL,u_41 = NULL;
        static ATerm h_3 (ATerm t);
        static ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(u_41));
          return(t);
        }
        t = p_41;
        t = j_0(t);
        if(((t_41 != NULL) && (t_41 != t)))
          _fail(t);
        else
          t_41 = t;
        t = o_41;
        t = h_0(t);
        if(((u_41 != NULL) && (u_41 != t)))
          _fail(t);
        else
          u_41 = t;
        t = p_41;
        t = reverse_acc_2_0(h_0, h_3, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_t_2;
      t = j_0(t);
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL,i_7 = NULL;
  c_42 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_42);
  a_42 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_42);
  i_7 = t;
  t = SSLsetAnnotations(i_7, a_42);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm e_42 = NULL;
  e_42 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, e_42), term_d_12);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL;
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_41 = NULL,z_41 = NULL;
      t = term_z_9;
      y_41 = t;
      t = term_g_11;
      z_41 = t;
      t = term_h_11;
      t = h_5(y_41, z_41, t);
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = fetch_1_0(i_3, t);
    }
  t = term_g_12;
  t = echo_0_0(t);
  t = term_u_10;
  w_41 = t;
  t = term_v_10;
  x_41 = t;
  t = term_h_12;
  t = h_5(w_41, x_41, t);
  t = reverse_acc_2_0(_id, j_3, t);
  t = map_1_0(k_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL;
  g_42 = t;
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = g_42;
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
            t = g_42;
          }
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        t = (ATerm) ATinsert(ATempty, g_42);
      }
  }
  h_42 = t;
  t = term_f_9;
  i_42 = t;
  t = SSL_printnl(i_42, h_42);
  t = g_42;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_z_9;
  m_42 = t;
  t = term_g_11;
  n_42 = t;
  t = term_h_11;
  t = h_5(m_42, n_42, t);
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
  ATerm o_42 = NULL,p_42 = NULL;
  t = term_m_12;
  o_42 = t;
  t = term_t_2;
  p_42 = t;
  t = term_n_12;
  t = k_5(o_42, p_42, t);
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
  t = term_m_12;
  s_42 = t;
  t = term_t_2;
  t_42 = t;
  t = term_n_12;
  t = k_5(s_42, t_42, t);
  t = term_p_12;
  q_42 = t;
  t = term_t_2;
  r_42 = t;
  t = term_q_12;
  t = k_5(q_42, r_42, t);
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
ATerm Cons_2_0 (ATerm o_83 (ATerm), ATerm p_83 (ATerm), ATerm t)
{
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,n_7 = NULL;
  z_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_42 = ATgetFirst((ATermList) t);
      w_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_42);
  u_42 = t;
  t = v_42;
  t = o_83(t);
  x_42 = t;
  t = w_42;
  t = p_83(t);
  y_42 = t;
  t = (ATerm) ATinsert(CheckATermList(y_42), x_42);
  n_7 = t;
  t = SSLsetAnnotations(n_7, u_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_131 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL,j_43 = NULL,k_43 = NULL,p_7 = NULL;
  e_43 = t;
  {
    ATerm v_12 = t;
    int w_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_12;
        t = j_131(t);
        LocalPopChoice(w_12);
      }
    else
      {
        t = v_12;
      }
  }
  t = e_43;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      g_43 = ATgetFirst((ATermList) t);
      h_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_43);
  f_43 = t;
  t = term_g_11;
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_11, g_43);
  t = k_5(k_43, g_43, t);
  t = h_43;
  {
    static ATerm u_43 (ATerm t);
    static ATerm u_43 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_13 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_43 = NULL;
              n_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = n_43;
              LocalPopChoice(b_13);
            }
          else
            {
              t = a_13;
              t = j_131(t);
              t = Cons_2_0(_id, u_43, t);
            }
          LocalPopChoice(z_12);
        }
      else
        {
          t = y_12;
          {
            ATerm q_43 = NULL,r_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_43 = ATgetFirst((ATermList) t);
                r_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(r_43), (ATerm) ATmakeAppl(sym_Undefined_1, q_43));
          }
        }
      return(t);
    }
    t = u_43(t);
  }
  j_43 = t;
  t = (ATerm) ATinsert(CheckATermList(j_43), (ATerm) ATmakeAppl(sym_Program_1, g_43));
  p_7 = t;
  t = SSLsetAnnotations(p_7, f_43);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm h_44 = NULL;
  h_44 = t;
  if(match_string(t, "--help"))
    {
      t = h_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_44;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL;
  t = term_w_11;
  i_44 = t;
  t = term_t_2;
  j_44 = t;
  t = term_c_13;
  t = k_5(i_44, j_44, t);
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
ATerm parse_options_1_0 (ATerm i_131 (ATerm), ATerm t)
{
  ATerm z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL;
  b_44 = t;
  t = term_u_10;
  c_44 = t;
  t = term_g_13;
  t = lookup_table_0_1(c_44, t);
  g_44 = t;
  t = term_v_10;
  d_44 = t;
  t = (ATerm) ATempty;
  e_44 = t;
  t = g_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      f_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(d_44, e_44, f_44, t);
  t = b_44;
  {
    static ATerm r_3 (ATerm t);
    static ATerm r_3 (ATerm t)
    {
      ATerm h_13 = t;
      int i_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_131(t);
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
        ATerm u_44 = NULL;
        u_44 = t;
        {
          ATerm n_13 = t;
          int p_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_23 = NULL;
              t = u_44;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_24 = NULL,b_24 = NULL;
                    t = term_z_9;
                    a_24 = t;
                    t = term_w_11;
                    b_24 = t;
                    t = term_x_11;
                    t = h_5(a_24, b_24, t);
                    LocalPopChoice(r_13);
                  }
                else
                  {
                    t = q_13;
                    t = fetch_1_0(x_3, t);
                  }
              }
              t = u_44;
              t = default_system_usage_0_0(t);
              t = term_g_10;
              z_23 = t;
              t = SSL_exit(z_23);
              LocalPopChoice(p_13);
            }
          else
            {
              t = n_13;
              {
                ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
                t = term_z_9;
                g_24 = t;
                t = term_m_12;
                h_24 = t;
                t = term_u_13;
                t = h_5(g_24, h_24, t);
                t = u_44;
                t = default_system_about_0_0(t);
                t = term_g_10;
                f_24 = t;
                t = SSL_exit(f_24);
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
              ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
              static ATerm y_3 (ATerm t);
              static ATerm y_3 (ATerm t)
              {
                ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,t_7 = NULL;
                a_45 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    z_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(a_45);
                y_44 = t;
                t = z_44;
                if(((z_43 != NULL) && (z_43 != t)))
                  _fail(t);
                else
                  z_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_44);
                t_7 = t;
                t = SSLsetAnnotations(t_7, y_44);
                return(t);
              }
              t = fetch_1_0(y_3, t);
              t = term_l_4;
              w_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_43)), term_x_13);
              x_44 = t;
              t = SSL_printnl(w_44, x_44);
              t = (ATerm) ATmakeAppl(sym__2, term_l_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_43)), term_x_13));
              t = default_system_usage_0_0(t);
              t = term_o_4;
              v_44 = t;
              t = SSL_exit(v_44);
              LocalPopChoice(w_13);
            }
          else
            {
              t = v_13;
            }
        }
      }
  }
  a_44 = t;
  t = term_u_10;
  t = table_destroy_0_0(t);
  t = a_44;
  return(t);
}
ATerm option_wrap_4_0 (ATerm n_129 (ATerm), ATerm o_129 (ATerm), ATerm p_129 (ATerm), ATerm q_129 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  t = parse_options_1_0(n_129, t);
  f_45 = t;
  t = term_y_13;
  t = table_create_0_0(t);
  t = term_y_13;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_y_13, term_z_13, f_45);
  t = lookup_table_0_1(g_45, t);
  j_45 = t;
  t = term_z_13;
  h_45 = t;
  t = j_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(h_45, f_45, i_45, t);
  t = f_45;
  t = p_129(t);
  {
    ATerm a_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(o_129, t);
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
              t = q_129(t);
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
  ATerm k_45 = NULL,l_45 = NULL;
  t = term_i_14;
  k_45 = t;
  t = term_t_2;
  l_45 = t;
  t = term_m_14;
  t = k_5(k_45, l_45, t);
  t = term_o_14;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_p_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm m_45 = NULL,p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
  m_45 = t;
  t = term_z_9;
  s_45 = t;
  t = term_g_11;
  t_45 = t;
  t = term_h_11;
  t = h_5(s_45, t_45, t);
  p_45 = t;
  t = term_l_4;
  q_45 = t;
  t = (ATerm) ATinsert(ATempty, p_45);
  r_45 = t;
  t = SSL_printnl(q_45, r_45);
  t = m_45;
  return(t);
}
ATerm iowrap_3_0 (ATerm w_128 (ATerm), ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t);
  static ATerm b_4 (ATerm t);
  static ATerm z_3 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_128(t);
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
  static ATerm b_4 (ATerm t)
  {
    ATerm u_45 = NULL,v_45 = NULL,w_45 = NULL;
    v_45 = t;
    {
      ATerm c_15 = t;
      int e_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_4 (ATerm t);
          static ATerm i_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((u_45 != NULL) && (u_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  u_45 = ATgetArgument(t, 0);
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
          t = c_15;
          t = term_f_15;
          u_45 = t;
        }
    }
    t = not_null(u_45);
    t = ReadFromFile_0_0(t);
    w_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, v_45, w_45);
    t = apply_strategy_1_0(w_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_3, y_128, a_4, b_4, t);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  ATerm z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,x_7 = NULL;
  d_46 = t;
  if(match_cons(t, sym__2))
    {
      a_46 = ATgetArgument(t, 0);
      b_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_46);
  z_45 = t;
  t = b_46;
  t = topdown_1_0(k_4, t);
  c_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_46, c_46);
  x_7 = t;
  t = SSLsetAnnotations(x_7, z_45);
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
