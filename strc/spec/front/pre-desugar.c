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
ATerm term_b_14;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_i_13;
ATerm term_f_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_d_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_t_8;
ATerm term_o_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_f_6;
ATerm term_h_4;
ATerm term_g_4;
ATerm term_d_4;
ATerm term_c_4;
ATerm term_r_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_4));
  term_d_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_g_4));
  term_g_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_6);
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(sym_Op_2, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_6);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Call_2, term_a_7, (ATerm) ATempty);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_z_7);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_Call_2, term_a_8, (ATerm) ATempty);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATempty);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_8);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_q_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_x_9);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym__2, term_q_9, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_10);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym__2, term_h_10, term_r_2);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(sym__2, term_s_11, term_r_2);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_v_11, term_r_2);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_r_2);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, (ATerm) ATempty);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_i_12);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym__2, term_p_9, term_s_11);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_i_13, term_r_2);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm b_112 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm i_27 (ATerm d_17, ATerm e_17, ATerm t);
static ATerm j_27 (ATerm q_17, ATerm s_17, ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm n_104 (ATerm), ATerm t);
static ATerm m_4 (ATerm d_54, ATerm e_54, ATerm t);
static ATerm n_4 (ATerm i_38, ATerm j_38, ATerm t);
static ATerm p_4 (ATerm q_110 (ATerm), ATerm c_260, ATerm o_38, ATerm t);
static ATerm o_4 (ATerm e_38, ATerm f_38, ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm o_128 (ATerm), ATerm t);
static ATerm c_31 (ATerm w_30, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_4 (ATerm k_38, ATerm t);
static ATerm r_4 (ATerm h_52, ATerm i_52, ATerm t);
static ATerm s_4 (ATerm f_54, ATerm g_54, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm n_32 (ATerm m_31, ATerm t);
static ATerm o_32 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t);
static ATerm p_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t);
static ATerm t_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm j_111 (ATerm), ATerm t);
static ATerm y_4 (ATerm d_61, ATerm e_61, ATerm t);
ATerm if_verbose2_1_0 (ATerm x_126 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm k_2 (ATerm t);
static ATerm n_2 (ATerm t);
static ATerm o_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm b_5 (ATerm b_73, ATerm c_73, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm z_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_4 (ATerm t_57, ATerm u_57, ATerm t);
ATerm foldr_2_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm w_126 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm c_5 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t);
static ATerm d_5 (ATerm f_64, ATerm g_64, ATerm t);
ATerm lookup_table_0_1 (ATerm w_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_4 (ATerm h_64, ATerm i_64, ATerm t);
static ATerm x_4 (ATerm m_64, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm u_131 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm parse_options_3_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t);
static ATerm t_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm iowrap_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
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
  t = term_r_2;
  t = whoami_0_0(t);
  c_0 = t;
  t = term_c_4;
  i_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_4), c_0), term_d_4);
  k_0 = t;
  t = SSL_printnl(i_0, k_0);
  t = term_h_4;
  e_0 = t;
  t = SSL_exit(e_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm b_112 (ATerm), ATerm t)
{
  static ATerm c_2 (ATerm t);
  static ATerm c_2 (ATerm t)
  {
    ATerm x_1 = NULL,z_1 = NULL,a_2 = NULL;
    x_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_1 = ATgetFirst((ATermList) t);
        a_2 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_4 = t;
      int j_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_0 = NULL,o_0 = NULL;
          t = SSLgetAnnotations(x_1);
          q_0 = t;
          t = a_2;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_2), z_1);
          o_0 = t;
          t = SSLsetAnnotations(o_0, q_0);
          t = b_112(t);
          LocalPopChoice(j_4);
        }
      else
        {
          t = i_4;
          {
            ATerm n_1 = NULL,q_1 = NULL,p_0 = NULL;
            t = SSLgetAnnotations(x_1);
            n_1 = t;
            t = a_2;
            t = c_2(t);
            q_1 = t;
            t = (ATerm) ATinsert(CheckATermList(q_1), z_1);
            p_0 = t;
            t = SSLsetAnnotations(p_0, n_1);
          }
        }
    }
    return(t);
  }
  t = c_2(t);
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
static ATerm b_0 (ATerm t)
{
  ATerm w_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_4 = ATgetFirst((ATermList) t);
      w_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = w_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm b_121 (ATerm), ATerm c_121 (ATerm), ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL,v_2 = NULL;
  t_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_2 = ATgetFirst((ATermList) t);
      {
        ATerm l_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = v_2;
  t = b_121(t);
  t = t_2;
  t = last_0_0(t);
  t = c_121(t);
  t = t_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm v_4 = ATgetFirst((ATermList) t);
      u_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_2;
  t = at_last_1_0(b_0, t);
  return(t);
}
static ATerm m_0 (ATerm t)
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
static ATerm b_1 (ATerm t)
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
  ATerm j_14 = NULL,k_14 = NULL,m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  if(match_cons(t, sym_Real_1))
    {
      n_14 = ATgetArgument(t, 0);
      {
        ATerm e_2 = NULL;
        t = SSL_string_to_real(n_14);
        e_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, e_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          n_14 = ATgetArgument(t, 0);
          {
            ATerm s_2 = NULL;
            t = SSL_string_to_int(n_14);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, s_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              n_14 = ATgetArgument(t, 0);
              o_14 = ATgetArgument(t, 1);
              k_14 = ATgetArgument(t, 2);
              t = SSL_is_string(k_14);
              t = (ATerm) ATmakeAppl(sym_Con_3, n_14, o_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, k_14), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  n_14 = ATgetArgument(t, 0);
                  o_14 = ATgetArgument(t, 1);
                  k_14 = ATgetArgument(t, 2);
                  {
                    ATerm r_3 = NULL;
                    t = n_14;
                    {
                      ATerm a_5 = t;
                      int f_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm s_3 = NULL;
                          t = SSL_explode_string(n_14);
                          t = unquote_chars_2_0(m_0, n_0, t);
                          s_3 = t;
                          t = SSL_implode_string(s_3);
                          LocalPopChoice(f_5);
                        }
                      else
                        {
                          t = a_5;
                        }
                    }
                    r_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, r_3, o_14, k_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      n_14 = ATgetArgument(t, 0);
                      o_14 = ATgetArgument(t, 1);
                      {
                        ATerm e_4 = NULL;
                        t = n_14;
                        {
                          ATerm h_5 = t;
                          int i_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm f_4 = NULL;
                              t = SSL_explode_string(n_14);
                              t = unquote_chars_2_0(r_0, s_0, t);
                              f_4 = t;
                              t = SSL_implode_string(f_4);
                              LocalPopChoice(i_5);
                            }
                          else
                            {
                              t = h_5;
                            }
                        }
                        e_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, e_4, (ATerm)ATempty, o_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          n_14 = ATgetArgument(t, 0);
                          {
                            ATerm e_5 = NULL;
                            t = n_14;
                            {
                              ATerm j_5 = t;
                              int k_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm g_5 = NULL;
                                  t = SSL_explode_string(n_14);
                                  t = unquote_chars_2_0(b_1, e_1, t);
                                  g_5 = t;
                                  t = SSL_implode_string(g_5);
                                  LocalPopChoice(k_5);
                                }
                              else
                                {
                                  t = j_5;
                                }
                            }
                            e_5 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, e_5, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              n_14 = ATgetArgument(t, 0);
                              {
                                ATerm u_5 = NULL,y_5 = NULL,z_5 = NULL,t_0 = NULL;
                                t = SSLgetAnnotations(m_14);
                                u_5 = t;
                                t = SSL_explode_string(n_14);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm l_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(l_5) != AT_INT) || (ATgetInt((ATermInt) l_5) != 39)))
                                      _fail(t);
                                    y_5 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(y_5);
                                z_5 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, z_5);
                                t_0 = t;
                                t = SSLsetAnnotations(t_0, u_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  n_14 = ATgetArgument(t, 0);
                                  o_14 = ATgetArgument(t, 1);
                                  k_14 = ATgetArgument(t, 2);
                                  j_14 = ATgetArgument(t, 3);
                                  {
                                    ATerm y_6 = NULL,i_7 = NULL,j_7 = NULL,u_0 = NULL;
                                    t = SSLgetAnnotations(m_14);
                                    y_6 = t;
                                    t = SSL_explode_string(n_14);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm m_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(m_5) != AT_INT) || (ATgetInt((ATermInt) m_5) != 39)))
                                          _fail(t);
                                        i_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(i_7);
                                    j_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, j_7, o_14, k_14, j_14);
                                    u_0 = t;
                                    t = SSLsetAnnotations(u_0, y_6);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      n_14 = ATgetArgument(t, 0);
                                      o_14 = ATgetArgument(t, 1);
                                      k_14 = ATgetArgument(t, 2);
                                      {
                                        ATerm m_8 = NULL,w_8 = NULL,x_8 = NULL,v_0 = NULL;
                                        t = SSLgetAnnotations(m_14);
                                        m_8 = t;
                                        t = SSL_explode_string(n_14);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm n_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(n_5) != AT_INT) || (ATgetInt((ATermInt) n_5) != 39)))
                                              _fail(t);
                                            w_8 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(w_8);
                                        x_8 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, x_8, o_14, k_14);
                                        v_0 = t;
                                        t = SSLsetAnnotations(v_0, m_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          n_14 = ATgetArgument(t, 0);
                                          o_14 = ATgetArgument(t, 1);
                                          k_14 = ATgetArgument(t, 2);
                                          j_14 = ATgetArgument(t, 3);
                                          {
                                            ATerm a_10 = NULL,r_10 = NULL,s_10 = NULL,w_0 = NULL;
                                            t = SSLgetAnnotations(m_14);
                                            a_10 = t;
                                            t = SSL_explode_string(n_14);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm o_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(o_5) != AT_INT) || (ATgetInt((ATermInt) o_5) != 39)))
                                                  _fail(t);
                                                r_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(r_10);
                                            s_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, s_10, o_14, k_14, j_14);
                                            w_0 = t;
                                            t = SSLsetAnnotations(w_0, a_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              n_14 = ATgetArgument(t, 0);
                                              o_14 = ATgetArgument(t, 1);
                                              k_14 = ATgetArgument(t, 2);
                                              {
                                                ATerm n_11 = NULL,w_12 = NULL,x_12 = NULL,x_0 = NULL;
                                                t = SSLgetAnnotations(m_14);
                                                n_11 = t;
                                                t = SSL_explode_string(n_14);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm p_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(p_5) != AT_INT) || (ATgetInt((ATermInt) p_5) != 39)))
                                                      _fail(t);
                                                    w_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(w_12);
                                                x_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, x_12, o_14, k_14);
                                                x_0 = t;
                                                t = SSLsetAnnotations(x_0, n_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  n_14 = ATgetArgument(t, 0);
                                                  o_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm j_13 = NULL,m_13 = NULL,p_13 = NULL,y_0 = NULL;
                                                    t = SSLgetAnnotations(m_14);
                                                    j_13 = t;
                                                    t = SSL_explode_string(n_14);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm q_5 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(q_5) != AT_INT) || (ATgetInt((ATermInt) q_5) != 39)))
                                                          _fail(t);
                                                        m_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(m_13);
                                                    p_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, p_13, o_14);
                                                    y_0 = t;
                                                    t = SSLsetAnnotations(y_0, j_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      n_14 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm c_14 = NULL,f_14 = NULL,g_14 = NULL,z_0 = NULL;
                                                        t = SSLgetAnnotations(m_14);
                                                        c_14 = t;
                                                        t = SSL_explode_string(n_14);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm r_5 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(r_5) != AT_INT) || (ATgetInt((ATermInt) r_5) != 39)))
                                                              _fail(t);
                                                            f_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(f_14);
                                                        g_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_14);
                                                        z_0 = t;
                                                        t = SSLsetAnnotations(z_0, c_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          n_14 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm s_14 = NULL,w_14 = NULL,x_14 = NULL,a_1 = NULL;
                                                            t = SSLgetAnnotations(m_14);
                                                            s_14 = t;
                                                            t = SSL_explode_string(n_14);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm v_5 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(v_5) != AT_INT) || (ATgetInt((ATermInt) v_5) != 39)))
                                                                  _fail(t);
                                                                w_14 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(w_14);
                                                            x_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, x_14);
                                                            a_1 = t;
                                                            t = SSLsetAnnotations(a_1, s_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              n_14 = ATgetArgument(t, 0);
                                                              o_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm l_15 = NULL,w_15 = NULL,x_15 = NULL,c_1 = NULL;
                                                                t = SSLgetAnnotations(m_14);
                                                                l_15 = t;
                                                                t = SSL_explode_string(n_14);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm w_5 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(w_5) != AT_INT) || (ATgetInt((ATermInt) w_5) != 39)))
                                                                      _fail(t);
                                                                    w_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(w_15);
                                                                x_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, x_15, o_14);
                                                                c_1 = t;
                                                                t = SSLsetAnnotations(c_1, l_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm f_16 = NULL,i_16 = NULL,j_16 = NULL,d_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  n_14 = ATgetArgument(t, 0);
                                                                  o_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(m_14);
                                                              f_16 = t;
                                                              t = SSL_explode_string(n_14);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm x_5 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(x_5) != AT_INT) || (ATgetInt((ATermInt) x_5) != 39)))
                                                                    _fail(t);
                                                                  i_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(i_16);
                                                              j_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, j_16, o_14);
                                                              d_1 = t;
                                                              t = SSLsetAnnotations(d_1, f_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm i_27 (ATerm d_17, ATerm e_17, ATerm t)
{
  t = d_17;
  {
    ATerm c_6 = t;
    if((PushChoice() == 0))
      {
        ATerm i_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,s_5 = NULL;
        n_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_17 = ATgetFirst((ATermList) t);
            m_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_17);
        i_17 = t;
        t = m_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_17), l_17);
        s_5 = t;
        t = SSLsetAnnotations(s_5, i_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = c_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_f_6, d_17);
  return(t);
}
static ATerm j_27 (ATerm q_17, ATerm s_17, ATerm t)
{
  t = q_17;
  {
    ATerm g_6 = t;
    if((PushChoice() == 0))
      {
        ATerm b_18 = NULL,d_18 = NULL,e_18 = NULL,m_18 = NULL,t_5 = NULL;
        m_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_18 = ATgetFirst((ATermList) t);
            e_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_18);
        b_18 = t;
        t = e_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_18), d_18);
        t_5 = t;
        t = SSLsetAnnotations(t_5, b_18);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, q_17);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm k_19 = NULL,l_19 = NULL,o_16 = NULL;
  k_19 = t;
  t = SSL_explode_term(k_19);
  if(match_cons(t, sym__2))
    {
      ATerm k_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) k_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm l_6 = ATgetArgument(t, 1);
        if(((ATgetType(l_6) == AT_LIST) && !(ATisEmpty(l_6))))
          {
            l_19 = ATgetFirst((ATermList) l_6);
            {
              ATerm m_6 = (ATerm) ATgetNext((ATermList) l_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(k_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) p_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm q_6 = ATgetArgument(t, 1);
        if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
          {
            ATerm s_6 = ATgetFirst((ATermList) q_6);
            ATerm u_6 = (ATerm) ATgetNext((ATermList) q_6);
            if(((ATgetType(u_6) == AT_LIST) && !(ATisEmpty(u_6))))
              {
                o_16 = ATgetFirst((ATermList) u_6);
                {
                  ATerm v_6 = (ATerm) ATgetNext((ATermList) u_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, o_16), l_19));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm a_20 = NULL,b_20 = NULL;
  if(match_cons(t, sym__2))
    {
      a_20 = ATgetArgument(t, 0);
      b_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, b_20), a_20));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_j_6;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(match_cons(t, sym__2))
    {
      d_20 = ATgetArgument(t, 0);
      e_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_w_6, (ATerm) ATinsert(ATinsert(ATempty, e_20), d_20));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  ATerm x_20 = NULL,y_20 = NULL;
  if(match_cons(t, sym__2))
    {
      x_20 = ATgetArgument(t, 0);
      y_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, y_20), x_20));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_b_7;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm d_21 = NULL,e_21 = NULL;
  if(match_cons(t, sym__2))
    {
      d_21 = ATgetArgument(t, 0);
      e_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_x_6, (ATerm) ATinsert(ATinsert(ATempty, e_21), d_21));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,z_18 = NULL;
  u_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      v_18 = ATgetArgument(t, 0);
      z_18 = ATgetArgument(t, 1);
      {
        ATerm i_19 = NULL;
        t = z_18;
        t = foldr_2_0(f_1, g_1, t);
        i_19 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, v_18, i_19);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          v_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, v_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              v_18 = ATgetArgument(t, 0);
              {
                ATerm t_16 = NULL;
                t = v_18;
                {
                  ATerm c_7 = t;
                  int d_7 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_f_7;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_h_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_k_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_m_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_n_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(d_7);
                    }
                  else
                    {
                      t = c_7;
                      {
                        ATerm a_17 = NULL;
                        t = SSL_explode_string(v_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm o_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(o_7) != AT_INT) || (ATgetInt((ATermInt) o_7) != 39)))
                              _fail(t);
                            {
                              ATerm p_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(p_7) == AT_LIST) && !(ATisEmpty(p_7))))
                                {
                                  a_17 = ATgetFirst((ATermList) p_7);
                                  {
                                    ATerm q_7 = (ATerm) ATgetNext((ATermList) p_7);
                                    if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
                                      {
                                        ATerm r_7 = ATgetFirst((ATermList) q_7);
                                        if(((ATgetType(r_7) != AT_INT) || (ATgetInt((ATermInt) r_7) != 39)))
                                          _fail(t);
                                        {
                                          ATerm s_7 = (ATerm) ATgetNext((ATermList) q_7);
                                          if(((ATgetType(s_7) != AT_LIST) || !(ATisEmpty(s_7))))
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
                        t = a_17;
                      }
                    }
                }
                t_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, t_16);
              }
            }
          else
            {
              ATerm t_7 = t;
              int u_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      v_18 = ATgetArgument(t, 0);
                      {
                        ATerm v_7 = ATgetArgument(t, 1);
                      }
                      t_18 = ATgetArgument(t, 2);
                      p_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(u_7);
                  t = (ATerm) ATmakeAppl(sym_Con_3, v_18, t_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, p_18), (ATerm) ATempty));
                }
              else
                {
                  t = t_7;
                  {
                    ATerm w_7 = t;
                    int x_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            v_18 = ATgetArgument(t, 0);
                            {
                              ATerm y_7 = ATgetArgument(t, 1);
                            }
                            t_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(x_7);
                        t = (ATerm) ATmakeAppl(sym_Con_3, v_18, t_18, term_b_8);
                      }
                    else
                      {
                        t = w_7;
                        if(match_cons(t, sym_Con1_2))
                          {
                            v_18 = ATgetArgument(t, 0);
                            z_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, v_18, z_18, term_b_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                v_18 = ATgetArgument(t, 0);
                                z_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t);
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = z_18;
                                    return(t);
                                  }
                                  t = v_18;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    v_18 = ATgetArgument(t, 0);
                                    t = v_18;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        v_18 = ATgetArgument(t, 0);
                                        t = v_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            q_18 = ATgetFirst((ATermList) t);
                                            r_18 = (ATerm) ATgetNext((ATermList) t);
                                            t = r_18;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm c_8 = t;
                                                int d_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = i_27(v_18, u_18, t);
                                                    LocalPopChoice(d_8);
                                                  }
                                                else
                                                  {
                                                    t = c_8;
                                                    t = q_18;
                                                  }
                                              }
                                            else
                                              {
                                                t = i_27(v_18, u_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = i_27(v_18, u_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            v_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, v_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                v_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, v_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    v_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, v_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        v_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, v_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            v_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                v_18 = ATgetArgument(t, 0);
                                                                z_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_18), z_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    v_18 = ATgetArgument(t, 0);
                                                                    z_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t);
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = z_18;
                                                                        return(t);
                                                                      }
                                                                      t = v_18;
                                                                      t = foldr_2_0(l_1, m_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        v_18 = ATgetArgument(t, 0);
                                                                        t = v_18;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            v_18 = ATgetArgument(t, 0);
                                                                            z_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_h_6, (ATerm) ATinsert(CheckATermList(z_18), v_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                v_18 = ATgetArgument(t, 0);
                                                                                t = v_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    q_18 = ATgetFirst((ATermList) t);
                                                                                    r_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = r_18;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm e_8 = t;
                                                                                        int f_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = j_27(v_18, u_18, t);
                                                                                            LocalPopChoice(f_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = e_8;
                                                                                            t = q_18;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = j_27(v_18, u_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = j_27(v_18, u_18, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_g_8;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        v_18 = ATgetArgument(t, 0);
                                                                                        z_18 = ATgetArgument(t, 1);
                                                                                        t = z_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            s_18 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_i_8, (ATerm) ATinsert(ATinsert(ATempty, s_18), v_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            v_18 = ATgetArgument(t, 0);
                                                                                            t = v_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                v_18 = ATgetArgument(t, 0);
                                                                                                z_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, v_18, z_18, term_j_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    v_18 = ATgetArgument(t, 0);
                                                                                                    z_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, v_18, z_18, term_j_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        v_18 = ATgetArgument(t, 0);
                                                                                                        z_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, v_18, (ATerm)ATempty, z_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            v_18 = ATgetArgument(t, 0);
                                                                                                            z_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, z_18, v_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                v_18 = ATgetArgument(t, 0);
                                                                                                                z_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, v_18, z_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    v_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, v_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        v_18 = ATgetArgument(t, 0);
                                                                                                                        z_18 = ATgetArgument(t, 1);
                                                                                                                        t_18 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, v_18, z_18, (ATerm)ATempty, t_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            v_18 = ATgetArgument(t, 0);
                                                                                                                            z_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, v_18, (ATerm)ATempty, (ATerm)ATempty, z_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                v_18 = ATgetArgument(t, 0);
                                                                                                                                z_18 = ATgetArgument(t, 1);
                                                                                                                                t_18 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, v_18, z_18, (ATerm)ATempty, t_18);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    v_18 = ATgetArgument(t, 0);
                                                                                                                                    z_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, v_18, (ATerm)ATempty, (ATerm)ATempty, z_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        v_18 = ATgetArgument(t, 0);
                                                                                                                                        z_18 = ATgetArgument(t, 1);
                                                                                                                                        t_18 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, v_18, z_18, (ATerm)ATempty, t_18);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            v_18 = ATgetArgument(t, 0);
                                                                                                                                            z_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, v_18, (ATerm)ATempty, (ATerm)ATempty, z_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm k_8 = ATgetArgument(t, 0);
                                                                                                                                                z_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, z_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm n_103 (ATerm), ATerm o_103 (ATerm), ATerm t)
{
  static ATerm k_27 (ATerm t);
  static ATerm k_27 (ATerm t)
  {
    ATerm l_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_103(t);
        t = k_27(t);
        LocalPopChoice(n_8);
      }
    else
      {
        t = l_8;
        t = o_103(t);
      }
    return(t);
  }
  t = k_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm n_104 (ATerm), ATerm t)
{
  static ATerm r_1 (ATerm t);
  static ATerm r_1 (ATerm t)
  {
    t = topdown_1_0(n_104, t);
    return(t);
  }
  t = n_104(t);
  t = SRTS_all(r_1, t);
  return(t);
}
static ATerm m_4 (ATerm d_54, ATerm e_54, ATerm t)
{
  ATerm q_27 = NULL;
  t = SSL_fputc(d_54, e_54);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_27);
  return(t);
}
static ATerm n_4 (ATerm i_38, ATerm j_38, ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_write_term_to_stream_text(i_38, j_38);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
static ATerm p_4 (ATerm q_110 (ATerm), ATerm c_260, ATerm o_38, ATerm t)
{
  ATerm u_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, c_260, term_o_8);
  t = t_4(t);
  u_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_27, o_38);
  t = q_110(t);
  t = fclose_0_0(t);
  t = o_38;
  return(t);
}
static ATerm o_4 (ATerm e_38, ATerm f_38, ATerm t)
{
  ATerm v_27 = NULL;
  t = SSL_write_term_to_stream_baf(e_38, f_38);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_27);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm w_17 = NULL,x_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if(match_cons(p_8, sym_Stream_1))
        {
          w_17 = ATgetArgument(p_8, 0);
        }
      else
        _fail(t);
      x_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(w_17, x_17, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm q_8 = ATgetArgument(t, 0);
      if(match_cons(q_8, sym_Stream_1))
        {
          x_18 = ATgetArgument(q_8, 0);
        }
      else
        _fail(t);
      y_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(x_18, y_18, t);
  n_18 = t;
  t = term_m_7;
  o_18 = t;
  t = n_18;
  if(match_cons(t, sym_Stream_1))
    {
      w_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_m_7, n_18);
  t = m_4(o_18, w_18, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,i_28 = NULL,k_28 = NULL,l_28 = NULL,p_28 = NULL,q_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,g_30 = NULL,h_30 = NULL,b_6 = NULL,a_6 = NULL;
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  q_28 = t;
  t = w_28;
  {
    ATerm r_8 = t;
    int s_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm s_1 (ATerm t);
        static ATerm s_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((d_28 != NULL) && (d_28 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                d_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(s_1, t);
        LocalPopChoice(s_8);
      }
    else
      {
        t = r_8;
        t = term_t_8;
        d_28 = t;
      }
  }
  y_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_28, x_28);
  a_6 = t;
  t = SSLsetAnnotations(a_6, q_28);
  t = e_28;
  if(match_cons(t, sym__2))
    {
      k_28 = ATgetArgument(t, 0);
      l_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  i_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_28, (ATerm) ATmakeAppl(sym__2, not_null(d_28), l_28));
  b_6 = t;
  t = SSLsetAnnotations(b_6, i_28);
  p_28 = t;
  if(match_cons(t, sym__2))
    {
      g_30 = ATgetArgument(t, 0);
      h_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_8 = t;
    int v_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL,r_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,d_6 = NULL;
        t = SSLgetAnnotations(p_28);
        k_17 = t;
        t = g_30;
        t = fetch_1_0(t_1, t);
        r_17 = t;
        t = h_30;
        if(match_cons(t, sym__2))
          {
            u_17 = ATgetArgument(t, 0);
            v_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(u_1, u_17, v_17, t);
        t_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_17, t_17);
        d_6 = t;
        t = SSLsetAnnotations(d_6, k_17);
        LocalPopChoice(v_8);
      }
    else
      {
        t = u_8;
        {
          ATerm g_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,e_6 = NULL;
          t = SSLgetAnnotations(p_28);
          g_18 = t;
          t = h_30;
          if(match_cons(t, sym__2))
            {
              k_18 = ATgetArgument(t, 0);
              l_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = p_4(v_1, k_18, l_18, t);
          j_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, g_30, j_18);
          e_6 = t;
          t = SSLsetAnnotations(e_6, g_18);
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
ATerm apply_strategy_1_0 (ATerm o_128 (ATerm), ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL,o_30 = NULL;
  o_30 = t;
  t = dtime_0_0(t);
  t = o_30;
  t = o_128(t);
  n_30 = t;
  t = dtime_0_0(t);
  k_30 = t;
  t = n_30;
  if(match_cons(t, sym__2))
    {
      l_30 = ATgetArgument(t, 0);
      m_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_30), (ATerm) ATmakeAppl(sym_Runtime_1, k_30)), m_30);
  return(t);
}
static ATerm c_31 (ATerm w_30, ATerm t)
{
  t = SSL_fclose(w_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm z_30 = NULL,a_31 = NULL;
  a_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      z_30 = ATgetArgument(t, 0);
      {
        ATerm y_8 = t;
        int z_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(z_30);
            LocalPopChoice(z_8);
          }
        else
          {
            t = y_8;
            t = c_31(a_31, t);
          }
      }
    }
  else
    {
      t = c_31(a_31, t);
    }
  return(t);
}
static ATerm q_4 (ATerm k_38, ATerm t)
{
  t = SSL_read_term_from_stream(k_38);
  return(t);
}
static ATerm r_4 (ATerm h_52, ATerm i_52, ATerm t)
{
  t = SSL_strcat(h_52, i_52);
  return(t);
}
static ATerm s_4 (ATerm f_54, ATerm g_54, ATerm t)
{
  ATerm d_31 = NULL;
  t = SSL_fopen(f_54, g_54);
  d_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm e_31 = NULL;
  t = SSL_stdin_stream();
  e_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm f_31 = NULL;
  t = SSL_stdout_stream();
  f_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_stderr_stream();
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_31);
  return(t);
}
static ATerm n_32 (ATerm m_31, ATerm t)
{
  ATerm n_31 = NULL;
  t = SSL_explode_term(m_31);
  if(match_cons(t, sym__2))
    {
      ATerm a_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm b_9 = ATgetArgument(t, 1);
        if(((ATgetType(b_9) == AT_LIST) && !(ATisEmpty(b_9))))
          {
            n_31 = ATgetFirst((ATermList) b_9);
            {
              ATerm c_9 = (ATerm) ATgetNext((ATermList) b_9);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = n_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm o_32 (ATerm q_31, ATerm r_31, ATerm s_31, ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,y_31 = NULL,n_6 = NULL;
  t = SSLgetAnnotations(s_31);
  v_31 = t;
  t = q_31;
  if(match_cons(t, sym_Path_1))
    {
      y_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_31, r_31);
  n_6 = t;
  t = SSLsetAnnotations(n_6, v_31);
  if(match_cons(t, sym__2))
    {
      t_31 = ATgetArgument(t, 0);
      u_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(t_31, u_31, t);
  return(t);
}
static ATerm p_32 (ATerm a_32, ATerm b_32, ATerm c_32, ATerm t)
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,i_32 = NULL,o_6 = NULL;
  t = SSLgetAnnotations(c_32);
  f_32 = t;
  t = SSL_is_string(a_32);
  i_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_32, b_32);
  o_6 = t;
  t = SSLsetAnnotations(o_6, f_32);
  if(match_cons(t, sym__2))
    {
      d_32 = ATgetArgument(t, 0);
      e_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(d_32, e_32, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL,m_32 = NULL;
  k_32 = t;
  if(match_cons(t, sym__2))
    {
      l_32 = ATgetArgument(t, 0);
      m_32 = ATgetArgument(t, 1);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = n_32(k_32, t);
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_32(l_32, m_32, k_32, t);
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                  t = p_32(l_32, m_32, k_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = n_32(k_32, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,y_32 = NULL;
  y_32 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_32, term_j_9);
        t = t_4(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          ATerm h_20 = NULL,j_20 = NULL;
          t = term_k_9;
          j_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_9, y_32);
          t = r_4(j_20, y_32, t);
          h_20 = t;
          t = SSL_perror(h_20);
          _fail(t);
        }
      }
  }
  s_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(t_32, t);
  r_32 = t;
  t = s_32;
  t = fclose_0_0(t);
  t = r_32;
  return(t);
}
ATerm fetch_1_0 (ATerm j_111 (ATerm), ATerm t)
{
  static ATerm x_33 (ATerm t);
  static ATerm x_33 (ATerm t)
  {
    ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL;
    u_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_33 = ATgetFirst((ATermList) t);
        w_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm l_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_20 = NULL,c_21 = NULL,r_6 = NULL;
          t = SSLgetAnnotations(u_33);
          w_20 = t;
          t = v_33;
          t = j_111(t);
          c_21 = t;
          t = (ATerm) ATinsert(CheckATermList(w_33), c_21);
          r_6 = t;
          t = SSLsetAnnotations(r_6, w_20);
          LocalPopChoice(m_9);
        }
      else
        {
          t = l_9;
          {
            ATerm q_21 = NULL,v_21 = NULL,t_6 = NULL;
            t = SSLgetAnnotations(u_33);
            q_21 = t;
            t = w_33;
            t = x_33(t);
            v_21 = t;
            t = (ATerm) ATinsert(CheckATermList(v_21), v_33);
            t_6 = t;
            t = SSLsetAnnotations(t_6, q_21);
          }
        }
    }
    return(t);
  }
  t = x_33(t);
  return(t);
}
static ATerm y_4 (ATerm d_61, ATerm e_61, ATerm t)
{
  ATerm a_34 = NULL;
  t = lookup_table_0_1(d_61, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(e_61, a_34, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm x_126 (ATerm), ATerm t)
{
  ATerm d_34 = NULL;
  d_34 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
        t = term_p_9;
        g_34 = t;
        t = term_q_9;
        h_34 = t;
        t = term_r_9;
        t = y_4(g_34, h_34, t);
        f_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_34, term_s_9);
        t = geq_0_0(t);
        t = d_34;
        t = x_126(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        t = d_34;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm v_9 = ATgetFirst((ATermList) t);
                ATerm w_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_34;
          }
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = (ATerm) ATinsert(ATempty, k_34);
      }
  }
  l_34 = t;
  t = term_t_8;
  m_34 = t;
  t = SSL_printnl(m_34, l_34);
  t = k_34;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL;
  t = term_p_9;
  q_34 = t;
  t = term_x_9;
  r_34 = t;
  t = term_y_9;
  t = y_4(q_34, r_34, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  if(match_string(t, "-k"))
    {
      t = t_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = t_34;
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  t = SSL_string_to_int(u_34);
  v_34 = t;
  t = term_z_9;
  w_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, v_34);
  t = b_5(w_34, v_34, t);
  t = u_34;
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = term_b_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(w_1, y_1, b_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  if(match_string(t, "-S"))
    {
      t = y_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = y_34;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL;
  t = term_q_9;
  z_34 = t;
  t = term_c_10;
  a_35 = t;
  t = term_d_10;
  t = b_5(z_34, a_35, t);
  t = term_e_10;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_f_10;
  return(t);
}
static ATerm h_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  t = SSL_string_to_int(b_35);
  c_35 = t;
  t = term_q_9;
  d_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, c_35);
  t = b_5(d_35, c_35, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, b_35);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_g_10;
  return(t);
}
static ATerm k_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  t = term_h_10;
  e_35 = t;
  t = term_r_2;
  f_35 = t;
  t = term_i_10;
  t = b_5(e_35, f_35, t);
  t = term_j_10;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_k_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_2, f_2, g_2, t);
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm n_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_2, i_2, j_2, t);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = Option_3_0(k_2, n_2, o_2, t);
          }
      }
    }
  return(t);
}
static ATerm b_5 (ATerm b_73, ATerm c_73, ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  t = term_p_9;
  g_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, b_73, c_73);
  t = lookup_table_0_1(g_35, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(b_73, c_73, h_35, t);
  t = (ATerm) ATmakeAppl(sym__3, term_p_9, b_73, c_73);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_35 = NULL,m_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
      t = term_r_2;
      t = g_0(t);
      n_35 = t;
      t = term_p_10;
      o_35 = t;
      t = term_q_10;
      p_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, n_35);
      t = z_4(o_35, p_35, n_35, t);
      _fail(t);
    }
  else
    {
      ATerm s_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_35 = ATgetFirst((ATermList) t);
          m_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_35;
      t = d_0(t);
      t = term_r_2;
      t = f_0(t);
      s_35 = t;
      t = (ATerm) ATinsert(CheckATermList(m_35), s_35);
    }
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm u_35 = NULL;
  u_35 = t;
  if(match_string(t, "-o"))
    {
      t = u_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = u_35;
    }
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL;
  v_35 = t;
  t = term_t_10;
  w_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_10, v_35);
  t = b_5(w_35, v_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, v_35);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_u_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_2, q_2, x_2, t);
  return(t);
}
static ATerm z_4 (ATerm k_59, ATerm l_59, ATerm j_59, ATerm t)
{
  ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  y_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
  {
    ATerm v_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_10 = ATgetArgument(t, 0);
            ATerm y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, k_59, l_59);
        t = y_4(k_59, l_59, t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = v_10;
        t = (ATerm) ATempty;
      }
  }
  z_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_59, l_59, (ATerm) ATinsert(CheckATermList(z_35), j_59));
  t = lookup_table_0_1(k_59, t);
  c_36 = t;
  t = (ATerm) ATinsert(CheckATermList(z_35), j_59);
  a_36 = t;
  t = c_36;
  if(match_cons(t, sym_Hashtable_1))
    {
      b_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(l_59, a_36, b_36, t);
  t = y_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
      t = term_r_2;
      t = l_0(t);
      n_36 = t;
      t = term_p_10;
      o_36 = t;
      t = term_q_10;
      p_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, n_36);
      t = z_4(o_36, p_36, n_36, t);
      _fail(t);
    }
  else
    {
      ATerm t_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          j_36 = ATgetFirst((ATermList) t);
          k_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          l_36 = ATgetFirst((ATermList) t);
          m_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_36;
      t = h_0(t);
      t = l_36;
      t = j_0(t);
      t_36 = t;
      t = (ATerm) ATinsert(CheckATermList(m_36), t_36);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
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
static ATerm z_2 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  w_36 = t;
  t = term_z_10;
  x_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, w_36);
  t = b_5(x_36, w_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, w_36);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm y_36 = NULL,z_36 = NULL,a_37 = NULL,b_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_2;
  t = whoami_0_0(t);
  y_36 = t;
  t = term_c_4;
  a_37 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_11), y_36);
  b_37 = t;
  t = SSL_printnl(a_37, b_37);
  t = term_h_4;
  z_36 = t;
  t = SSL_exit(z_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm c_37 = NULL,d_37 = NULL;
  t = term_p_9;
  c_37 = t;
  t = term_x_9;
  d_37 = t;
  t = term_y_9;
  t = y_4(c_37, d_37, t);
  return(t);
}
static ATerm u_4 (ATerm t_57, ATerm u_57, ATerm t)
{
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_57, u_57);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      t = SSL_addr(t_57, u_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm y_117 (ATerm), ATerm z_117 (ATerm), ATerm t)
{
  ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL;
  f_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_37;
      t = y_117(t);
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
      t = foldr_2_0(y_117, z_117, t);
      k_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_37, k_37);
      t = z_117(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm b_3 (ATerm t)
{
  t = term_c_10;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm i_22 = NULL,j_22 = NULL;
  if(match_cons(t, sym__2))
    {
      i_22 = ATgetArgument(t, 0);
      j_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(i_22, j_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm n_37 = NULL,d_22 = NULL,e_22 = NULL;
  t = times_0_0(t);
  e_22 = t;
  t = SSL_explode_term(e_22);
  if(match_cons(t, sym__2))
    {
      ATerm e_11 = ATgetArgument(t, 0);
      d_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_22;
  t = foldr_2_0(b_3, c_3, t);
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
    ATerm f_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_38;
        if((z_37 != t))
          {
            _fail(t);
          }
        t = y_37;
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
        {
          ATerm h_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(z_37, a_38);
              LocalPopChoice(i_11);
            }
          else
            {
              t = h_11;
              t = SSL_gtr(z_37, a_38);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, z_37, a_38);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm w_126 (ATerm), ATerm t)
{
  ATerm g_38 = NULL;
  g_38 = t;
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_38 = NULL,m_38 = NULL,p_38 = NULL;
        t = term_p_9;
        m_38 = t;
        t = term_q_9;
        p_38 = t;
        t = term_r_9;
        t = y_4(m_38, p_38, t);
        l_38 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_38, term_h_4);
        t = geq_0_0(t);
        t = g_38;
        t = w_126(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        t = g_38;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm r_38 = NULL,s_38 = NULL,u_38 = NULL,v_38 = NULL;
  t = run_time_0_0(t);
  r_38 = t;
  t = term_r_2;
  t = whoami_0_0(t);
  s_38 = t;
  t = term_c_4;
  u_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_11), r_38), term_l_11), s_38);
  v_38 = t;
  t = SSL_printnl(u_38, v_38);
  t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_11), r_38), term_l_11), s_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_10;
  w_38 = t;
  t = SSL_exit(w_38);
  return(t);
}
static ATerm c_5 (ATerm c_64, ATerm d_64, ATerm e_64, ATerm t)
{
  ATerm x_38 = NULL;
  t = SSL_hashtable_put(e_64, c_64, d_64);
  x_38 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_38);
  return(t);
}
static ATerm d_5 (ATerm f_64, ATerm g_64, ATerm t)
{
  t = SSL_hashtable_get(g_64, f_64);
  return(t);
}
ATerm lookup_table_0_1 (ATerm w_60, ATerm t)
{
  ATerm g_39 = NULL;
  t = table_hashtable_0_0(t);
  g_39 = t;
  {
    ATerm o_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_22 = NULL;
        t = g_39;
        if(match_cons(t, sym_Hashtable_1))
          {
            u_22 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = d_5(w_60, u_22, t);
        LocalPopChoice(p_11);
      }
    else
      {
        t = o_11;
        {
          ATerm z_22 = NULL;
          t = w_60;
          t = table_create_0_0(t);
          t = g_39;
          if(match_cons(t, sym_Hashtable_1))
            {
              z_22 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = d_5(w_60, z_22, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm k_64, ATerm l_64, ATerm t)
{
  ATerm j_39 = NULL;
  t = SSL_hashtable_create(k_64, l_64);
  j_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, j_39);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm k_39 = NULL,l_39 = NULL,m_39 = NULL,o_39 = NULL,p_39 = NULL;
  k_39 = t;
  t = term_q_11;
  o_39 = t;
  t = term_r_11;
  p_39 = t;
  t = k_39;
  t = new_hashtable_0_2(o_39, p_39, t);
  l_39 = t;
  t = k_39;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      m_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(k_39, l_39, m_39, t);
  t = k_39;
  return(t);
}
static ATerm w_4 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm q_39 = NULL;
  t = SSL_hashtable_remove(i_64, h_64);
  q_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, q_39);
  return(t);
}
static ATerm x_4 (ATerm m_64, ATerm t)
{
  ATerm r_39 = NULL;
  t = SSL_hashtable_destroy(m_64);
  r_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, r_39);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm s_39 = NULL;
  t = SSL_table_hashtable();
  s_39 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_39);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL;
  t_39 = t;
  t = table_hashtable_0_0(t);
  u_39 = t;
  t = lookup_table_0_1(t_39, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      w_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(w_39, t);
  t = u_39;
  if(match_cons(t, sym_Hashtable_1))
    {
      v_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(t_39, v_39, t);
  t = t_39;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL;
  t = term_s_11;
  x_39 = t;
  t = term_r_2;
  y_39 = t;
  t = term_t_11;
  t = b_5(x_39, y_39, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL;
  t = term_s_11;
  b_40 = t;
  t = term_r_2;
  c_40 = t;
  t = term_t_11;
  t = b_5(b_40, c_40, t);
  t = term_v_11;
  z_39 = t;
  t = term_r_2;
  a_40 = t;
  t = term_w_11;
  t = b_5(z_39, a_40, t);
  t = term_x_11;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_y_11;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_3, f_3, g_3, t);
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = Option_3_0(h_3, i_3, j_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm p_83 (ATerm), ATerm q_83 (ATerm), ATerm t)
{
  ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,z_6 = NULL;
  i_40 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      e_40 = ATgetFirst((ATermList) t);
      f_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_40);
  d_40 = t;
  t = e_40;
  t = p_83(t);
  g_40 = t;
  t = f_40;
  t = q_83(t);
  h_40 = t;
  t = (ATerm) ATinsert(CheckATermList(h_40), g_40);
  z_6 = t;
  t = SSLsetAnnotations(z_6, d_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm u_131 (ATerm), ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,s_40 = NULL,t_40 = NULL,e_7 = NULL;
  n_40 = t;
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_12;
        t = u_131(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
      }
  }
  t = n_40;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_40 = ATgetFirst((ATermList) t);
      q_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_40);
  o_40 = t;
  t = term_x_9;
  t_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_9, p_40);
  t = b_5(t_40, p_40, t);
  t = q_40;
  {
    static ATerm d_41 (ATerm t);
    static ATerm d_41 (ATerm t)
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_12 = t;
          int h_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_40 = NULL;
              w_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = w_40;
              LocalPopChoice(h_12);
            }
          else
            {
              t = g_12;
              t = u_131(t);
              t = Cons_2_0(_id, d_41, t);
            }
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm z_40 = NULL,a_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                z_40 = ATgetFirst((ATermList) t);
                a_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(a_41), (ATerm) ATmakeAppl(sym_Undefined_1, z_40));
          }
        }
      return(t);
    }
    t = d_41(t);
  }
  s_40 = t;
  t = (ATerm) ATinsert(CheckATermList(s_40), (ATerm) ATmakeAppl(sym_Program_1, p_40));
  e_7 = t;
  t = SSLsetAnnotations(e_7, o_40);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm q_41 = NULL;
  q_41 = t;
  if(match_string(t, "--help"))
    {
      t = q_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = q_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = q_41;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm r_41 = NULL,s_41 = NULL;
  t = term_i_12;
  r_41 = t;
  t = term_r_2;
  s_41 = t;
  t = term_j_12;
  t = b_5(r_41, s_41, t);
  t = term_k_12;
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_l_12;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm r_131 (ATerm), ATerm s_131 (ATerm), ATerm t_131 (ATerm), ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL;
  k_41 = t;
  t = term_p_10;
  l_41 = t;
  t = term_m_12;
  t = lookup_table_0_1(l_41, t);
  p_41 = t;
  t = term_q_10;
  m_41 = t;
  t = (ATerm) ATempty;
  n_41 = t;
  t = p_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      o_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(m_41, n_41, o_41, t);
  t = k_41;
  {
    static ATerm k_3 (ATerm t);
    static ATerm k_3 (ATerm t)
    {
      ATerm n_12 = t;
      int o_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = r_131(t);
          LocalPopChoice(o_12);
        }
      else
        {
          t = n_12;
          {
            ATerm p_12 = t;
            int q_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_3, m_3, n_3, t);
                LocalPopChoice(q_12);
              }
            else
              {
                t = p_12;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_3, t);
  }
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_42 = NULL;
        d_42 = t;
        {
          ATerm t_12 = t;
          int u_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_23 = NULL;
              t = d_42;
              {
                ATerm v_12 = t;
                int y_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_23 = NULL,f_23 = NULL;
                    t = term_p_9;
                    e_23 = t;
                    t = term_i_12;
                    f_23 = t;
                    t = term_z_12;
                    t = y_4(e_23, f_23, t);
                    LocalPopChoice(y_12);
                  }
                else
                  {
                    t = v_12;
                    t = fetch_1_0(o_3, t);
                  }
              }
              t = d_42;
              t = s_131(t);
              t = term_c_10;
              d_23 = t;
              t = SSL_exit(d_23);
              LocalPopChoice(u_12);
            }
          else
            {
              t = t_12;
              {
                ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
                t = term_p_9;
                k_23 = t;
                t = term_s_11;
                l_23 = t;
                t = term_a_13;
                t = y_4(k_23, l_23, t);
                t = d_42;
                t = t_131(t);
                t = term_c_10;
                j_23 = t;
                t = SSL_exit(j_23);
              }
            }
        }
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
              static ATerm p_3 (ATerm t);
              static ATerm p_3 (ATerm t)
              {
                ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL,g_7 = NULL;
                j_42 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    i_42 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(j_42);
                h_42 = t;
                t = i_42;
                if(((i_41 != NULL) && (i_41 != t)))
                  _fail(t);
                else
                  i_41 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, i_42);
                g_7 = t;
                t = SSLsetAnnotations(g_7, h_42);
                return(t);
              }
              t = fetch_1_0(p_3, t);
              t = term_c_4;
              f_42 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_41)), term_d_13);
              g_42 = t;
              t = SSL_printnl(f_42, g_42);
              t = (ATerm) ATmakeAppl(sym__2, term_c_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_41)), term_d_13));
              t = s_131(t);
              t = term_h_4;
              e_42 = t;
              t = SSL_exit(e_42);
              LocalPopChoice(c_13);
            }
          else
            {
              t = b_13;
            }
        }
      }
  }
  j_41 = t;
  t = term_p_10;
  t = table_destroy_0_0(t);
  t = j_41;
  return(t);
}
ATerm option_wrap_5_0 (ATerm u_129 (ATerm), ATerm v_129 (ATerm), ATerm w_129 (ATerm), ATerm x_129 (ATerm), ATerm y_129 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
  t = parse_options_3_0(u_129, v_129, w_129, t);
  o_42 = t;
  t = term_e_13;
  t = table_create_0_0(t);
  t = term_e_13;
  p_42 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_e_13, term_f_13, o_42);
  t = lookup_table_0_1(p_42, t);
  s_42 = t;
  t = term_f_13;
  q_42 = t;
  t = s_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = c_5(q_42, o_42, r_42, t);
  t = o_42;
  t = x_129(t);
  {
    ATerm g_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_129(t);
        t = report_success_0_0(t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = g_13;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = if_verbose2_1_0(y_3, t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_3 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL;
  t = term_i_13;
  t_42 = t;
  t = term_r_2;
  u_42 = t;
  t = term_k_13;
  t = b_5(t_42, u_42, t);
  t = term_l_13;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = term_n_13;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL;
  v_42 = t;
  t = term_p_9;
  z_42 = t;
  t = term_x_9;
  a_43 = t;
  t = term_y_9;
  t = y_4(z_42, a_43, t);
  w_42 = t;
  t = term_c_4;
  x_42 = t;
  t = (ATerm) ATinsert(ATempty, w_42);
  y_42 = t;
  t = SSL_printnl(x_42, y_42);
  t = v_42;
  return(t);
}
ATerm iowrap_3_0 (ATerm x_128 (ATerm), ATerm y_128 (ATerm), ATerm z_128 (ATerm), ATerm t)
{
  static ATerm q_3 (ATerm t);
  static ATerm u_3 (ATerm t);
  static ATerm q_3 (ATerm t)
  {
    ATerm o_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_128(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = o_13;
        {
          ATerm r_13 = t;
          int s_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(s_13);
            }
          else
            {
              t = r_13;
              {
                ATerm t_13 = t;
                int u_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(u_13);
                  }
                else
                  {
                    t = t_13;
                    {
                      ATerm v_13 = t;
                      int w_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(v_3, w_3, x_3, t);
                          LocalPopChoice(w_13);
                        }
                      else
                        {
                          t = v_13;
                          {
                            ATerm x_13 = t;
                            int y_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(y_13);
                              }
                            else
                              {
                                t = x_13;
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
  static ATerm u_3 (ATerm t)
  {
    ATerm b_43 = NULL,c_43 = NULL,d_43 = NULL;
    c_43 = t;
    {
      ATerm z_13 = t;
      int a_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm z_3 (ATerm t);
          static ATerm z_3 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((b_43 != NULL) && (b_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  b_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(z_3, t);
          LocalPopChoice(a_14);
        }
      else
        {
          t = z_13;
          t = term_b_14;
          b_43 = t;
        }
    }
    t = not_null(b_43);
    t = ReadFromFile_0_0(t);
    d_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, c_43, d_43);
    t = apply_strategy_1_0(x_128, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(q_3, z_128, default_system_about_0_0, t_3, u_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_7 = NULL;
  k_43 = t;
  if(match_cons(t, sym__2))
    {
      h_43 = ATgetArgument(t, 0);
      i_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_43);
  g_43 = t;
  t = i_43;
  t = topdown_1_0(b_4, t);
  j_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_43, j_43);
  l_7 = t;
  t = SSLsetAnnotations(l_7, g_43);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm d_14 = t;
    int e_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(e_14);
      }
    else
      {
        t = d_14;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(a_4, _fail, default_usage_0_0, t);
  return(t);
}
