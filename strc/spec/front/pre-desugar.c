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
ATerm term_u_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_v_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_j_13;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_t_12;
ATerm term_n_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_f_12;
ATerm term_e_12;
ATerm term_d_12;
ATerm term_c_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_n_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_k_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_z_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_m_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_m_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_k_6;
ATerm term_a_5;
ATerm term_z_4;
ATerm term_y_4;
ATerm term_x_4;
ATerm term_u_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_4));
  term_y_4 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_5));
  term_a_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_k_6);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATempty);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_d_7);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_Call_2, term_f_7, (ATerm) ATempty);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_f_8);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_Call_2, term_g_8, (ATerm) ATempty);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, (ATerm) ATempty);
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
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym__2, term_w_9, term_b_10);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_b_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym__2, term_g_10, term_u_2);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_c_11);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_r_11);
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym__2, term_p_10, term_q_10);
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym__2, term_c_12, term_u_2);
  ATprotect(&(term_e_12));
  term_e_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym__2, term_f_12, term_u_2);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym__2, term_r_11, term_u_2);
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_c_12);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym__2, term_v_13, term_u_2);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm default_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t);
static ATerm h_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm k_27 (ATerm x_16, ATerm y_16, ATerm t);
static ATerm l_27 (ATerm r_17, ATerm v_17, ATerm t);
static ATerm d_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm r_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm w_82 (ATerm), ATerm t);
static ATerm j_4 (ATerm n_40, ATerm o_40, ATerm t);
static ATerm k_4 (ATerm i_25, ATerm j_25, ATerm t);
static ATerm m_4 (ATerm z_88 (ATerm), ATerm m_170, ATerm o_25, ATerm t);
static ATerm l_4 (ATerm e_25, ATerm f_25, ATerm t);
static ATerm u_1 (ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm i_106 (ATerm), ATerm t);
static ATerm f_31 (ATerm z_30, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm n_4 (ATerm k_25, ATerm t);
static ATerm o_4 (ATerm g_39, ATerm h_39, ATerm t);
static ATerm p_4 (ATerm p_40, ATerm q_40, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm s_32 (ATerm p_31, ATerm t);
static ATerm t_32 (ATerm t_31, ATerm u_31, ATerm v_31, ATerm t);
static ATerm u_32 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm t);
static ATerm q_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm s_89 (ATerm), ATerm t);
static ATerm t_4 (ATerm s_56, ATerm t_56, ATerm t);
ATerm if_verbose2_1_0 (ATerm r_104 (ATerm), ATerm t);
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
static ATerm w_4 (ATerm g_50, ATerm h_50, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm u_4 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm r_4 (ATerm j_43, ATerm k_43, ATerm t);
ATerm foldr_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm e_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm q_104 (ATerm), ATerm t);
static ATerm f_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm g_3 (ATerm t);
ATerm need_help_1_0 (ATerm g_107 (ATerm), ATerm t);
ATerm map_1_0 (ATerm i_89 (ATerm), ATerm t);
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
ATerm Cons_2_0 (ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm j_109 (ATerm), ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
ATerm parse_options_1_0 (ATerm i_109 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
ATerm iowrap_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm v_4 (ATerm t);
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
  t = term_x_4;
  m_0 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_4), f_0), term_y_4);
  o_0 = t;
  t = SSL_printnl(m_0, o_0);
  t = term_a_5;
  j_0 = t;
  t = SSL_exit(j_0);
  t = a_0;
  return(t);
}
ATerm at_last_1_0 (ATerm k_90 (ATerm), ATerm t)
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
      ATerm b_5 = t;
      int c_5 = stack_ptr;
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
          t = k_90(t);
          LocalPopChoice(c_5);
        }
      else
        {
          t = b_5;
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
      ATerm d_5 = ATgetFirst((ATermList) t);
      b_3 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = b_3;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm a_99 (ATerm), ATerm b_99 (ATerm), ATerm t)
{
  ATerm v_2 = NULL,w_2 = NULL,z_2 = NULL;
  v_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_2 = ATgetFirst((ATermList) t);
      {
        ATerm g_5 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = z_2;
  t = a_99(t);
  t = v_2;
  t = last_0_0(t);
  t = b_99(t);
  t = v_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm h_5 = ATgetFirst((ATermList) t);
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
  ATerm x_13 = NULL,d_14 = NULL,e_14 = NULL,g_14 = NULL,h_14 = NULL;
  e_14 = t;
  if(match_cons(t, sym_Real_1))
    {
      g_14 = ATgetArgument(t, 0);
      {
        ATerm a_2 = NULL;
        t = SSL_string_to_real(g_14);
        a_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, a_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          g_14 = ATgetArgument(t, 0);
          {
            ATerm m_2 = NULL;
            t = SSL_string_to_int(g_14);
            m_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, m_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              g_14 = ATgetArgument(t, 0);
              h_14 = ATgetArgument(t, 1);
              d_14 = ATgetArgument(t, 2);
              t = SSL_is_string(d_14);
              t = (ATerm) ATmakeAppl(sym_Con_3, g_14, h_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, d_14), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  g_14 = ATgetArgument(t, 0);
                  h_14 = ATgetArgument(t, 1);
                  d_14 = ATgetArgument(t, 2);
                  {
                    ATerm s_3 = NULL;
                    t = g_14;
                    {
                      ATerm i_5 = t;
                      int j_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm t_3 = NULL;
                          t = SSL_explode_string(g_14);
                          t = unquote_chars_2_0(h_0, p_0, t);
                          t_3 = t;
                          t = SSL_implode_string(t_3);
                          LocalPopChoice(j_5);
                        }
                      else
                        {
                          t = i_5;
                        }
                    }
                    s_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, s_3, h_14, d_14);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      g_14 = ATgetArgument(t, 0);
                      h_14 = ATgetArgument(t, 1);
                      {
                        ATerm f_4 = NULL;
                        t = g_14;
                        {
                          ATerm k_5 = t;
                          int l_5 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_4 = NULL;
                              t = SSL_explode_string(g_14);
                              t = unquote_chars_2_0(r_0, s_0, t);
                              g_4 = t;
                              t = SSL_implode_string(g_4);
                              LocalPopChoice(l_5);
                            }
                          else
                            {
                              t = k_5;
                            }
                        }
                        f_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, (ATerm)ATempty, h_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          g_14 = ATgetArgument(t, 0);
                          {
                            ATerm e_5 = NULL;
                            t = g_14;
                            {
                              ATerm n_5 = t;
                              int p_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm f_5 = NULL;
                                  t = SSL_explode_string(g_14);
                                  t = unquote_chars_2_0(v_0, w_0, t);
                                  f_5 = t;
                                  t = SSL_implode_string(f_5);
                                  LocalPopChoice(p_5);
                                }
                              else
                                {
                                  t = n_5;
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
                              g_14 = ATgetArgument(t, 0);
                              {
                                ATerm y_5 = NULL,c_6 = NULL,d_6 = NULL,x_0 = NULL;
                                t = SSLgetAnnotations(e_14);
                                y_5 = t;
                                t = SSL_explode_string(g_14);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm q_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(q_5) != AT_INT) || (ATgetInt((ATermInt) q_5) != 39)))
                                      _fail(t);
                                    c_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(c_6);
                                d_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, d_6);
                                x_0 = t;
                                t = SSLsetAnnotations(x_0, y_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  g_14 = ATgetArgument(t, 0);
                                  h_14 = ATgetArgument(t, 1);
                                  d_14 = ATgetArgument(t, 2);
                                  x_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm b_7 = NULL,o_7 = NULL,p_7 = NULL,y_0 = NULL;
                                    t = SSLgetAnnotations(e_14);
                                    b_7 = t;
                                    t = SSL_explode_string(g_14);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm r_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(r_5) != AT_INT) || (ATgetInt((ATermInt) r_5) != 39)))
                                          _fail(t);
                                        o_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(o_7);
                                    p_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, p_7, h_14, d_14, x_13);
                                    y_0 = t;
                                    t = SSLsetAnnotations(y_0, b_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      g_14 = ATgetArgument(t, 0);
                                      h_14 = ATgetArgument(t, 1);
                                      d_14 = ATgetArgument(t, 2);
                                      {
                                        ATerm q_8 = NULL,b_9 = NULL,d_9 = NULL,z_0 = NULL;
                                        t = SSLgetAnnotations(e_14);
                                        q_8 = t;
                                        t = SSL_explode_string(g_14);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm s_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(s_5) != AT_INT) || (ATgetInt((ATermInt) s_5) != 39)))
                                              _fail(t);
                                            b_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(b_9);
                                        d_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, d_9, h_14, d_14);
                                        z_0 = t;
                                        t = SSLsetAnnotations(z_0, q_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          g_14 = ATgetArgument(t, 0);
                                          h_14 = ATgetArgument(t, 1);
                                          d_14 = ATgetArgument(t, 2);
                                          x_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm j_10 = NULL,s_10 = NULL,w_10 = NULL,a_1 = NULL;
                                            t = SSLgetAnnotations(e_14);
                                            j_10 = t;
                                            t = SSL_explode_string(g_14);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm v_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(v_5) != AT_INT) || (ATgetInt((ATermInt) v_5) != 39)))
                                                  _fail(t);
                                                s_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(s_10);
                                            w_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, w_10, h_14, d_14, x_13);
                                            a_1 = t;
                                            t = SSLsetAnnotations(a_1, j_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              g_14 = ATgetArgument(t, 0);
                                              h_14 = ATgetArgument(t, 1);
                                              d_14 = ATgetArgument(t, 2);
                                              {
                                                ATerm p_12 = NULL,u_12 = NULL,v_12 = NULL,b_1 = NULL;
                                                t = SSLgetAnnotations(e_14);
                                                p_12 = t;
                                                t = SSL_explode_string(g_14);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm z_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(z_5) != AT_INT) || (ATgetInt((ATermInt) z_5) != 39)))
                                                      _fail(t);
                                                    u_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(u_12);
                                                v_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, v_12, h_14, d_14);
                                                b_1 = t;
                                                t = SSLsetAnnotations(b_1, p_12);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  g_14 = ATgetArgument(t, 0);
                                                  h_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm i_13 = NULL,p_13 = NULL,q_13 = NULL,c_1 = NULL;
                                                    t = SSLgetAnnotations(e_14);
                                                    i_13 = t;
                                                    t = SSL_explode_string(g_14);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm a_6 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(a_6) != AT_INT) || (ATgetInt((ATermInt) a_6) != 39)))
                                                          _fail(t);
                                                        p_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(p_13);
                                                    q_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, q_13, h_14);
                                                    c_1 = t;
                                                    t = SSLsetAnnotations(c_1, i_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      g_14 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm b_14 = NULL,f_14 = NULL,i_14 = NULL,e_1 = NULL;
                                                        t = SSLgetAnnotations(e_14);
                                                        b_14 = t;
                                                        t = SSL_explode_string(g_14);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm b_6 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(b_6) != AT_INT) || (ATgetInt((ATermInt) b_6) != 39)))
                                                              _fail(t);
                                                            f_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(f_14);
                                                        i_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, i_14);
                                                        e_1 = t;
                                                        t = SSLsetAnnotations(e_1, b_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          g_14 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm r_14 = NULL,y_14 = NULL,z_14 = NULL,f_1 = NULL;
                                                            t = SSLgetAnnotations(e_14);
                                                            r_14 = t;
                                                            t = SSL_explode_string(g_14);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm e_6 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(e_6) != AT_INT) || (ATgetInt((ATermInt) e_6) != 39)))
                                                                  _fail(t);
                                                                y_14 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(y_14);
                                                            z_14 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, z_14);
                                                            f_1 = t;
                                                            t = SSLsetAnnotations(f_1, r_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              g_14 = ATgetArgument(t, 0);
                                                              h_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm q_15 = NULL,t_15 = NULL,u_15 = NULL,m_1 = NULL;
                                                                t = SSLgetAnnotations(e_14);
                                                                q_15 = t;
                                                                t = SSL_explode_string(g_14);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm f_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(f_6) != AT_INT) || (ATgetInt((ATermInt) f_6) != 39)))
                                                                      _fail(t);
                                                                    t_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(t_15);
                                                                u_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, u_15, h_14);
                                                                m_1 = t;
                                                                t = SSLsetAnnotations(m_1, q_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL,v_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  g_14 = ATgetArgument(t, 0);
                                                                  h_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(e_14);
                                                              c_16 = t;
                                                              t = SSL_explode_string(g_14);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm g_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(g_6) != AT_INT) || (ATgetInt((ATermInt) g_6) != 39)))
                                                                    _fail(t);
                                                                  f_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(f_16);
                                                              g_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, g_16, h_14);
                                                              v_1 = t;
                                                              t = SSLsetAnnotations(v_1, c_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm k_27 (ATerm x_16, ATerm y_16, ATerm t)
{
  t = x_16;
  {
    ATerm j_6 = t;
    if((PushChoice() == 0))
      {
        ATerm f_17 = NULL,k_17 = NULL,l_17 = NULL,q_17 = NULL,m_5 = NULL;
        q_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_17 = ATgetFirst((ATermList) t);
            l_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_17);
        f_17 = t;
        t = l_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_17), k_17);
        m_5 = t;
        t = SSLsetAnnotations(m_5, f_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_k_6, x_16);
  return(t);
}
static ATerm l_27 (ATerm r_17, ATerm v_17, ATerm t)
{
  t = r_17;
  {
    ATerm l_6 = t;
    if((PushChoice() == 0))
      {
        ATerm z_17 = NULL,b_18 = NULL,c_18 = NULL,d_18 = NULL,o_5 = NULL;
        d_18 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_18 = ATgetFirst((ATermList) t);
            c_18 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(d_18);
        z_17 = t;
        t = c_18;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(c_18), b_18);
        o_5 = t;
        t = SSLsetAnnotations(o_5, z_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, r_17);
  return(t);
}
static ATerm d_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL,l_16 = NULL;
  a_19 = t;
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm r_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_6 = ATgetArgument(t, 1);
        if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
          {
            b_19 = ATgetFirst((ATermList) s_6);
            {
              ATerm u_6 = (ATerm) ATgetNext((ATermList) s_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(a_19);
  if(match_cons(t, sym__2))
    {
      ATerm v_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_6 = ATgetArgument(t, 1);
        if(((ATgetType(w_6) == AT_LIST) && !(ATisEmpty(w_6))))
          {
            ATerm y_6 = ATgetFirst((ATermList) w_6);
            ATerm a_7 = (ATerm) ATgetNext((ATermList) w_6);
            if(((ATgetType(a_7) == AT_LIST) && !(ATisEmpty(a_7))))
              {
                l_16 = ATgetFirst((ATermList) a_7);
                {
                  ATerm c_7 = (ATerm) ATgetNext((ATermList) a_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, l_16), b_19));
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  if(match_cons(t, sym__2))
    {
      u_19 = ATgetArgument(t, 0);
      v_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, v_19), u_19));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  t = term_q_6;
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm x_19 = NULL,y_19 = NULL;
  if(match_cons(t, sym__2))
    {
      x_19 = ATgetArgument(t, 0);
      y_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_d_7, (ATerm) ATinsert(ATinsert(ATempty, y_19), x_19));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL;
  if(match_cons(t, sym__2))
    {
      c_24 = ATgetArgument(t, 0);
      d_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, d_24), c_24));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  t = term_g_7;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm j_24 = NULL,o_24 = NULL;
  if(match_cons(t, sym__2))
    {
      j_24 = ATgetArgument(t, 0);
      o_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_e_7, (ATerm) ATinsert(ATinsert(ATempty, o_24), j_24));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm f_18 = NULL,g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,t_18 = NULL,u_18 = NULL;
  k_18 = t;
  if(match_cons(t, sym_Anno_2))
    {
      t_18 = ATgetArgument(t, 0);
      u_18 = ATgetArgument(t, 1);
      {
        ATerm y_18 = NULL;
        t = u_18;
        t = foldr_2_0(d_1, g_1, t);
        y_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, t_18, y_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          t_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, t_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              t_18 = ATgetArgument(t, 0);
              {
                ATerm w_16 = NULL;
                t = t_18;
                {
                  ATerm i_7 = t;
                  int k_7 = stack_ptr;
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
                              t = term_q_7;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_r_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_s_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_t_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(k_7);
                    }
                  else
                    {
                      t = i_7;
                      {
                        ATerm a_17 = NULL;
                        t = SSL_explode_string(t_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm u_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(u_7) != AT_INT) || (ATgetInt((ATermInt) u_7) != 39)))
                              _fail(t);
                            {
                              ATerm v_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
                                {
                                  a_17 = ATgetFirst((ATermList) v_7);
                                  {
                                    ATerm w_7 = (ATerm) ATgetNext((ATermList) v_7);
                                    if(((ATgetType(w_7) == AT_LIST) && !(ATisEmpty(w_7))))
                                      {
                                        ATerm x_7 = ATgetFirst((ATermList) w_7);
                                        if(((ATgetType(x_7) != AT_INT) || (ATgetInt((ATermInt) x_7) != 39)))
                                          _fail(t);
                                        {
                                          ATerm y_7 = (ATerm) ATgetNext((ATermList) w_7);
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
                        t = a_17;
                      }
                    }
                }
                w_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, w_16);
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
                      t_18 = ATgetArgument(t, 0);
                      {
                        ATerm b_8 = ATgetArgument(t, 1);
                      }
                      j_18 = ATgetArgument(t, 2);
                      f_18 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(a_8);
                  t = (ATerm) ATmakeAppl(sym_Con_3, t_18, j_18, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, f_18), (ATerm) ATempty));
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
                            t_18 = ATgetArgument(t, 0);
                            {
                              ATerm e_8 = ATgetArgument(t, 1);
                            }
                            j_18 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(d_8);
                        t = (ATerm) ATmakeAppl(sym_Con_3, t_18, j_18, term_h_8);
                      }
                    else
                      {
                        t = c_8;
                        if(match_cons(t, sym_Con1_2))
                          {
                            t_18 = ATgetArgument(t, 0);
                            u_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, t_18, u_18, term_h_8);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                t_18 = ATgetArgument(t, 0);
                                u_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm h_1 (ATerm t)
                                  {
                                    t = u_18;
                                    return(t);
                                  }
                                  t = t_18;
                                  t = foldr_2_0(h_1, i_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    t_18 = ATgetArgument(t, 0);
                                    t = t_18;
                                    t = foldr_2_0(j_1, k_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        t_18 = ATgetArgument(t, 0);
                                        t = t_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            g_18 = ATgetFirst((ATermList) t);
                                            h_18 = (ATerm) ATgetNext((ATermList) t);
                                            t = h_18;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm i_8 = t;
                                                int j_8 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = k_27(t_18, k_18, t);
                                                    LocalPopChoice(j_8);
                                                  }
                                                else
                                                  {
                                                    t = i_8;
                                                    t = g_18;
                                                  }
                                              }
                                            else
                                              {
                                                t = k_27(t_18, k_18, t);
                                              }
                                          }
                                        else
                                          {
                                            t = k_27(t_18, k_18, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            t_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, t_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                t_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, t_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    t_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, t_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        t_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, t_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            t_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                t_18 = ATgetArgument(t, 0);
                                                                u_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, t_18), u_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    t_18 = ATgetArgument(t, 0);
                                                                    u_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm l_1 (ATerm t)
                                                                      {
                                                                        t = u_18;
                                                                        return(t);
                                                                      }
                                                                      t = t_18;
                                                                      t = foldr_2_0(l_1, o_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        t_18 = ATgetArgument(t, 0);
                                                                        t = t_18;
                                                                        t = foldr_2_0(p_1, r_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            t_18 = ATgetArgument(t, 0);
                                                                            u_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_o_6, (ATerm) ATinsert(CheckATermList(u_18), t_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                t_18 = ATgetArgument(t, 0);
                                                                                t = t_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    g_18 = ATgetFirst((ATermList) t);
                                                                                    h_18 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = h_18;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm k_8 = t;
                                                                                        int l_8 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = l_27(t_18, k_18, t);
                                                                                            LocalPopChoice(l_8);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = k_8;
                                                                                            t = g_18;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = l_27(t_18, k_18, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = l_27(t_18, k_18, t);
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
                                                                                        t_18 = ATgetArgument(t, 0);
                                                                                        u_18 = ATgetArgument(t, 1);
                                                                                        t = u_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            i_18 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATinsert(ATinsert(ATempty, i_18), t_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            t_18 = ATgetArgument(t, 0);
                                                                                            t = t_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                t_18 = ATgetArgument(t, 0);
                                                                                                u_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, t_18, u_18, term_p_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    t_18 = ATgetArgument(t, 0);
                                                                                                    u_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, t_18, u_18, term_p_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        t_18 = ATgetArgument(t, 0);
                                                                                                        u_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, t_18, (ATerm)ATempty, u_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            t_18 = ATgetArgument(t, 0);
                                                                                                            u_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, u_18, t_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                t_18 = ATgetArgument(t, 0);
                                                                                                                u_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, t_18, u_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    t_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, t_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        t_18 = ATgetArgument(t, 0);
                                                                                                                        u_18 = ATgetArgument(t, 1);
                                                                                                                        j_18 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, t_18, u_18, (ATerm)ATempty, j_18);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            t_18 = ATgetArgument(t, 0);
                                                                                                                            u_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, t_18, (ATerm)ATempty, (ATerm)ATempty, u_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                t_18 = ATgetArgument(t, 0);
                                                                                                                                u_18 = ATgetArgument(t, 1);
                                                                                                                                j_18 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_18, u_18, (ATerm)ATempty, j_18);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    t_18 = ATgetArgument(t, 0);
                                                                                                                                    u_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, t_18, (ATerm)ATempty, (ATerm)ATempty, u_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        t_18 = ATgetArgument(t, 0);
                                                                                                                                        u_18 = ATgetArgument(t, 1);
                                                                                                                                        j_18 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, t_18, u_18, (ATerm)ATempty, j_18);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            t_18 = ATgetArgument(t, 0);
                                                                                                                                            u_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, t_18, (ATerm)ATempty, (ATerm)ATempty, u_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm r_8 = ATgetArgument(t, 0);
                                                                                                                                                u_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, u_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm w_81 (ATerm), ATerm x_81 (ATerm), ATerm t)
{
  static ATerm m_27 (ATerm t)
  {
    ATerm s_8 = t;
    int t_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_81(t);
        t = m_27(t);
        LocalPopChoice(t_8);
      }
    else
      {
        t = s_8;
        t = x_81(t);
      }
    return(t);
  }
  t = m_27(t);
  return(t);
}
ATerm topdown_1_0 (ATerm w_82 (ATerm), ATerm t)
{
  static ATerm s_1 (ATerm t)
  {
    t = topdown_1_0(w_82, t);
    return(t);
  }
  t = w_82(t);
  t = SRTS_all(s_1, t);
  return(t);
}
static ATerm j_4 (ATerm n_40, ATerm o_40, ATerm t)
{
  ATerm p_27 = NULL;
  t = SSL_fputc(n_40, o_40);
  p_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_27);
  return(t);
}
static ATerm k_4 (ATerm i_25, ATerm j_25, ATerm t)
{
  ATerm r_27 = NULL;
  t = SSL_write_term_to_stream_text(i_25, j_25);
  r_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_27);
  return(t);
}
static ATerm m_4 (ATerm z_88 (ATerm), ATerm m_170, ATerm o_25, ATerm t)
{
  ATerm s_27 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, m_170, term_u_8);
  t = q_4(t);
  s_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_27, o_25);
  t = z_88(t);
  t = fclose_0_0(t);
  t = o_25;
  return(t);
}
static ATerm l_4 (ATerm e_25, ATerm f_25, ATerm t)
{
  ATerm t_27 = NULL;
  t = SSL_write_term_to_stream_baf(e_25, f_25);
  t_27 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_27);
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
  ATerm s_17 = NULL,t_17 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm v_8 = ATgetArgument(t, 0);
      if(match_cons(v_8, sym_Stream_1))
        {
          s_17 = ATgetArgument(v_8, 0);
        }
      else
        _fail(t);
      t_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_4(s_17, t_17, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,x_18 = NULL,c_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_8 = ATgetArgument(t, 0);
      if(match_cons(w_8, sym_Stream_1))
        {
          x_18 = ATgetArgument(w_8, 0);
        }
      else
        _fail(t);
      c_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_4(x_18, c_19, t);
  q_18 = t;
  t = term_s_7;
  r_18 = t;
  t = q_18;
  if(match_cons(t, sym_Stream_1))
    {
      s_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_s_7, q_18);
  t = j_4(r_18, s_18, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL,i_28 = NULL,k_28 = NULL,m_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,b_29 = NULL,j_30 = NULL,k_30 = NULL,u_5 = NULL,t_5 = NULL;
  e_28 = t;
  if(match_cons(t, sym__2))
    {
      u_28 = ATgetArgument(t, 0);
      v_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  t_28 = t;
  t = u_28;
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm t_1 (ATerm t)
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
        t = fetch_1_0(t_1, t);
        LocalPopChoice(y_8);
      }
    else
      {
        t = x_8;
        t = term_z_8;
        d_28 = t;
      }
  }
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, v_28);
  t_5 = t;
  t = SSLsetAnnotations(t_5, t_28);
  t = e_28;
  if(match_cons(t, sym__2))
    {
      i_28 = ATgetArgument(t, 0);
      k_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_28);
  f_28 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_28, (ATerm) ATmakeAppl(sym__2, not_null(d_28), k_28));
  u_5 = t;
  t = SSLsetAnnotations(u_5, f_28);
  m_28 = t;
  if(match_cons(t, sym__2))
    {
      j_30 = ATgetArgument(t, 0);
      k_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm a_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,w_5 = NULL;
        t = SSLgetAnnotations(m_28);
        h_17 = t;
        t = j_30;
        t = fetch_1_0(u_1, t);
        m_17 = t;
        t = k_30;
        if(match_cons(t, sym__2))
          {
            o_17 = ATgetArgument(t, 0);
            p_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = m_4(w_1, o_17, p_17, t);
        n_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_17, n_17);
        w_5 = t;
        t = SSLsetAnnotations(w_5, h_17);
        LocalPopChoice(c_9);
      }
    else
      {
        t = a_9;
        {
          ATerm e_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,x_5 = NULL;
          t = SSLgetAnnotations(m_28);
          e_18 = t;
          t = k_30;
          if(match_cons(t, sym__2))
            {
              o_18 = ATgetArgument(t, 0);
              p_18 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = m_4(x_1, o_18, p_18, t);
          n_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, j_30, n_18);
          x_5 = t;
          t = SSLsetAnnotations(x_5, e_18);
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
ATerm apply_strategy_1_0 (ATerm i_106 (ATerm), ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,q_30 = NULL,r_30 = NULL;
  r_30 = t;
  t = dtime_0_0(t);
  t = r_30;
  t = i_106(t);
  q_30 = t;
  t = dtime_0_0(t);
  n_30 = t;
  t = q_30;
  if(match_cons(t, sym__2))
    {
      o_30 = ATgetArgument(t, 0);
      p_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_30), (ATerm) ATmakeAppl(sym_Runtime_1, n_30)), p_30);
  return(t);
}
static ATerm f_31 (ATerm z_30, ATerm t)
{
  t = SSL_fclose(z_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL;
  d_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_31 = ATgetArgument(t, 0);
      {
        ATerm e_9 = t;
        int f_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(c_31);
            LocalPopChoice(f_9);
          }
        else
          {
            t = e_9;
            t = f_31(d_31, t);
          }
      }
    }
  else
    {
      t = f_31(d_31, t);
    }
  return(t);
}
static ATerm n_4 (ATerm k_25, ATerm t)
{
  t = SSL_read_term_from_stream(k_25);
  return(t);
}
static ATerm o_4 (ATerm g_39, ATerm h_39, ATerm t)
{
  t = SSL_strcat(g_39, h_39);
  return(t);
}
static ATerm p_4 (ATerm p_40, ATerm q_40, ATerm t)
{
  ATerm g_31 = NULL;
  t = SSL_fopen(p_40, q_40);
  g_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm h_31 = NULL;
  t = SSL_stdin_stream();
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm i_31 = NULL;
  t = SSL_stdout_stream();
  i_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm j_31 = NULL;
  t = SSL_stderr_stream();
  j_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_31);
  return(t);
}
static ATerm s_32 (ATerm p_31, ATerm t)
{
  ATerm q_31 = NULL;
  t = SSL_explode_term(p_31);
  if(match_cons(t, sym__2))
    {
      ATerm g_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_9 = ATgetArgument(t, 1);
        if(((ATgetType(h_9) == AT_LIST) && !(ATisEmpty(h_9))))
          {
            q_31 = ATgetFirst((ATermList) h_9);
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
  t = q_31;
  if(match_cons(t, sym_stderr_0))
    {
      t = q_31;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = q_31;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = q_31;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm t_32 (ATerm t_31, ATerm u_31, ATerm v_31, ATerm t)
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL,b_32 = NULL,h_6 = NULL;
  t = SSLgetAnnotations(v_31);
  y_31 = t;
  t = t_31;
  if(match_cons(t, sym_Path_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_32, u_31);
  h_6 = t;
  t = SSLsetAnnotations(h_6, y_31);
  if(match_cons(t, sym__2))
    {
      w_31 = ATgetArgument(t, 0);
      x_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(w_31, x_31, t);
  return(t);
}
static ATerm u_32 (ATerm d_32, ATerm e_32, ATerm f_32, ATerm t)
{
  ATerm g_32 = NULL,h_32 = NULL,i_32 = NULL,l_32 = NULL,i_6 = NULL;
  t = SSLgetAnnotations(f_32);
  i_32 = t;
  t = SSL_is_string(d_32);
  l_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_32, e_32);
  i_6 = t;
  t = SSLsetAnnotations(i_6, i_32);
  if(match_cons(t, sym__2))
    {
      g_32 = ATgetArgument(t, 0);
      h_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_4(g_32, h_32, t);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
      {
        ATerm j_9 = t;
        int k_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = s_32(p_32, t);
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
                  t = t_32(q_32, r_32, p_32, t);
                  LocalPopChoice(m_9);
                }
              else
                {
                  t = l_9;
                  t = u_32(q_32, r_32, p_32, t);
                }
            }
          }
      }
    }
  else
    {
      t = s_32(p_32, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm w_32 = NULL,x_32 = NULL,y_32 = NULL,d_33 = NULL;
  d_33 = t;
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, d_33, term_p_9);
        t = q_4(t);
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm j_20 = NULL,l_20 = NULL;
          t = term_q_9;
          l_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_q_9, d_33);
          t = o_4(l_20, d_33, t);
          j_20 = t;
          t = SSL_perror(j_20);
          _fail(t);
        }
      }
  }
  x_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      y_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = n_4(y_32, t);
  w_32 = t;
  t = x_32;
  t = fclose_0_0(t);
  t = w_32;
  return(t);
}
ATerm fetch_1_0 (ATerm s_89 (ATerm), ATerm t)
{
  static ATerm c_34 (ATerm t)
  {
    ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
    z_33 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_34 = ATgetFirst((ATermList) t);
        b_34 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_20 = NULL,v_20 = NULL,m_6 = NULL;
          t = SSLgetAnnotations(z_33);
          s_20 = t;
          t = a_34;
          t = s_89(t);
          v_20 = t;
          t = (ATerm) ATinsert(CheckATermList(b_34), v_20);
          m_6 = t;
          t = SSLsetAnnotations(m_6, s_20);
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm d_21 = NULL,g_21 = NULL,n_6 = NULL;
            t = SSLgetAnnotations(z_33);
            d_21 = t;
            t = b_34;
            t = c_34(t);
            g_21 = t;
            t = (ATerm) ATinsert(CheckATermList(g_21), a_34);
            n_6 = t;
            t = SSLsetAnnotations(n_6, d_21);
          }
        }
    }
    return(t);
  }
  t = c_34(t);
  return(t);
}
static ATerm t_4 (ATerm s_56, ATerm t_56, ATerm t)
{
  t = SSL_table_get(s_56, t_56);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm r_104 (ATerm), ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  {
    ATerm t_9 = t;
    int u_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL;
        t = term_v_9;
        k_34 = t;
        t = term_w_9;
        l_34 = t;
        t = term_x_9;
        t = t_4(k_34, l_34, t);
        j_34 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_34, term_y_9);
        t = geq_0_0(t);
        t = g_34;
        t = r_104(t);
        LocalPopChoice(u_9);
      }
    else
      {
        t = t_9;
        t = g_34;
      }
  }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm o_34 = NULL;
  o_34 = t;
  if(match_string(t, "-k"))
    {
      t = o_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_34;
    }
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  t = SSL_string_to_int(p_34);
  q_34 = t;
  t = term_z_9;
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, q_34);
  t = w_4(r_34, q_34, t);
  t = p_34;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_a_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_1, z_1, d_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm t_34 = NULL;
  t_34 = t;
  if(match_string(t, "-S"))
    {
      t = t_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_34;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL;
  t = term_w_9;
  u_34 = t;
  t = term_b_10;
  v_34 = t;
  t = term_c_10;
  t = w_4(u_34, v_34, t);
  t = term_d_10;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  t = term_e_10;
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
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  t = SSL_string_to_int(w_34);
  x_34 = t;
  t = term_w_9;
  y_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, x_34);
  t = w_4(y_34, x_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_34);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  t = term_f_10;
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
  ATerm z_34 = NULL,a_35 = NULL;
  t = term_g_10;
  z_34 = t;
  t = term_u_2;
  a_35 = t;
  t = term_h_10;
  t = w_4(z_34, a_35, t);
  t = term_i_10;
  return(t);
}
static ATerm r_2 (ATerm t)
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
      t = Option_3_0(g_2, h_2, i_2, t);
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
            t = ArgOption_3_0(j_2, k_2, l_2, t);
            LocalPopChoice(o_10);
          }
        else
          {
            t = n_10;
            t = Option_3_0(n_2, q_2, r_2, t);
          }
      }
    }
  return(t);
}
static ATerm w_4 (ATerm g_50, ATerm h_50, ATerm t)
{
  ATerm b_35 = NULL;
  t = term_v_9;
  b_35 = t;
  t = SSL_table_put(b_35, g_50, h_50);
  t = (ATerm) ATmakeAppl(sym__3, term_v_9, g_50, h_50);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_35 = NULL,h_35 = NULL,i_35 = NULL;
      t = term_u_2;
      t = e_0(t);
      g_35 = t;
      t = term_p_10;
      h_35 = t;
      t = term_q_10;
      i_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, g_35);
      t = u_4(h_35, i_35, g_35, t);
      _fail(t);
    }
  else
    {
      ATerm l_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_35 = ATgetFirst((ATermList) t);
          f_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_35;
      t = c_0(t);
      t = term_u_2;
      t = d_0(t);
      l_35 = t;
      t = (ATerm) ATinsert(CheckATermList(f_35), l_35);
    }
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm n_35 = NULL;
  n_35 = t;
  if(match_string(t, "-o"))
    {
      t = n_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = n_35;
    }
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  o_35 = t;
  t = term_r_10;
  p_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_10, o_35);
  t = w_4(p_35, o_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, o_35);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_2, t_2, x_2, t);
  return(t);
}
static ATerm u_4 (ATerm b_55, ATerm c_55, ATerm a_55, ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm x_10 = ATgetArgument(t, 0);
            ATerm y_10 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, b_55, c_55);
        t = t_4(b_55, c_55, t);
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        t = (ATerm) ATempty;
      }
  }
  s_35 = t;
  t = (ATerm) ATinsert(CheckATermList(s_35), a_55);
  t_35 = t;
  t = SSL_table_put(b_55, c_55, t_35);
  t = r_35;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL,d_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
      t = term_u_2;
      t = n_0(t);
      e_36 = t;
      t = term_p_10;
      f_36 = t;
      t = term_q_10;
      g_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_10, term_q_10, e_36);
      t = u_4(f_36, g_36, e_36, t);
      _fail(t);
    }
  else
    {
      ATerm k_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          a_36 = ATgetFirst((ATermList) t);
          b_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_36 = ATgetFirst((ATermList) t);
          d_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_36;
      t = k_0(t);
      t = c_36;
      t = l_0(t);
      k_36 = t;
      t = (ATerm) ATinsert(CheckATermList(d_36), k_36);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  if(match_string(t, "-i"))
    {
      t = m_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = m_36;
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL;
  n_36 = t;
  t = term_z_10;
  o_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, n_36);
  t = w_4(o_36, n_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, n_36);
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, a_3, c_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL,s_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_u_2;
  t = whoami_0_0(t);
  p_36 = t;
  t = term_x_4;
  r_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_11), p_36);
  s_36 = t;
  t = SSL_printnl(r_36, s_36);
  t = term_a_5;
  q_36 = t;
  t = SSL_exit(q_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL;
  t = term_v_9;
  t_36 = t;
  t = term_c_11;
  u_36 = t;
  t = term_d_11;
  t = t_4(t_36, u_36, t);
  return(t);
}
static ATerm r_4 (ATerm j_43, ATerm k_43, ATerm t)
{
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(j_43, k_43);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      t = SSL_addr(j_43, k_43);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_95 (ATerm), ATerm a_96 (ATerm), ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL;
  w_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_36;
      t = z_95(t);
    }
  else
    {
      ATerm b_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_36 = ATgetFirst((ATermList) t);
          y_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_36;
      t = foldr_2_0(z_95, a_96, t);
      b_37 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_36, b_37);
      t = a_96(t);
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
  t = term_b_10;
  return(t);
}
static ATerm e_3 (ATerm t)
{
  ATerm p_21 = NULL,q_21 = NULL;
  if(match_cons(t, sym__2))
    {
      p_21 = ATgetArgument(t, 0);
      q_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_4(p_21, q_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_37 = NULL,l_21 = NULL,m_21 = NULL;
  t = times_0_0(t);
  m_21 = t;
  t = SSL_explode_term(m_21);
  if(match_cons(t, sym__2))
    {
      ATerm g_11 = ATgetArgument(t, 0);
      l_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = l_21;
  t = foldr_2_0(d_3, e_3, t);
  e_37 = t;
  t = SSL_TicksToSeconds(e_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
  p_37 = t;
  if(match_cons(t, sym__2))
    {
      q_37 = ATgetArgument(t, 0);
      r_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_37;
        if((q_37 != t))
          {
            _fail(t);
          }
        t = p_37;
        LocalPopChoice(i_11);
      }
    else
      {
        t = h_11;
        t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_37, r_37);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = SSL_gtr(q_37, r_37);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, q_37, r_37);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm q_104 (ATerm), ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
        t = term_v_9;
        y_37 = t;
        t = term_w_9;
        z_37 = t;
        t = term_x_9;
        t = t_4(y_37, z_37, t);
        x_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_37, term_a_5);
        t = geq_0_0(t);
        t = v_37;
        t = q_104(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = v_37;
      }
  }
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL,e_38 = NULL,f_38 = NULL;
  t = run_time_0_0(t);
  b_38 = t;
  t = term_u_2;
  t = whoami_0_0(t);
  c_38 = t;
  t = term_x_4;
  e_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), b_38), term_n_11), c_38);
  f_38 = t;
  t = SSL_printnl(e_38, f_38);
  t = (ATerm) ATmakeAppl(sym__2, term_x_4, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_11), b_38), term_n_11), c_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(f_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm g_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_b_10;
  g_38 = t;
  t = SSL_exit(g_38);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm q_38 = NULL,r_38 = NULL;
  r_38 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = r_38;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          q_38 = ATgetArgument(t, 0);
          {
            ATerm c_22 = NULL,t_6 = NULL;
            t = SSLgetAnnotations(r_38);
            c_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, q_38);
            t_6 = t;
            t = SSLsetAnnotations(t_6, c_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = r_38;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm g_107 (ATerm), ATerm t)
{
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,k_38 = NULL;
      t = term_v_9;
      j_38 = t;
      t = term_r_11;
      k_38 = t;
      t = term_s_11;
      t = t_4(j_38, k_38, t);
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = fetch_1_0(g_3, t);
    }
  t = g_107(t);
  return(t);
}
ATerm map_1_0 (ATerm i_89 (ATerm), ATerm t)
{
  static ATerm j_39 (ATerm t)
  {
    ATerm e_39 = NULL,f_39 = NULL,i_39 = NULL;
    e_39 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_39;
      }
    else
      {
        ATerm k_22 = NULL,n_22 = NULL,o_22 = NULL,x_6 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_39 = ATgetFirst((ATermList) t);
            i_39 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_39);
        k_22 = t;
        t = f_39;
        t = i_89(t);
        n_22 = t;
        t = i_39;
        t = j_39(t);
        o_22 = t;
        t = (ATerm) ATinsert(CheckATermList(o_22), n_22);
        x_6 = t;
        t = SSLsetAnnotations(x_6, k_22);
      }
    return(t);
  }
  t = j_39(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm m_39 = NULL,n_39 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_39 = ATgetFirst((ATermList) t);
      n_39 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm r_39 = NULL,s_39 = NULL;
        static ATerm h_3 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(r_39)), not_null(s_39));
          return(t);
        }
        t = n_39;
        t = i_0(t);
        if(((r_39 != NULL) && (r_39 != t)))
          _fail(t);
        else
          r_39 = t;
        t = m_39;
        t = g_0(t);
        if(((s_39 != NULL) && (s_39 != t)))
          _fail(t);
        else
          s_39 = t;
        t = n_39;
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL,z_6 = NULL;
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
  z_6 = t;
  t = SSLsetAnnotations(z_6, y_39);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm c_40 = NULL;
  c_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, c_40), term_t_11);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_39 = NULL,x_39 = NULL;
      t = term_v_9;
      w_39 = t;
      t = term_c_11;
      x_39 = t;
      t = term_d_11;
      t = t_4(w_39, x_39, t);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = fetch_1_0(i_3, t);
    }
  t = term_w_11;
  t = echo_0_0(t);
  t = term_p_10;
  u_39 = t;
  t = term_q_10;
  v_39 = t;
  t = term_x_11;
  t = t_4(u_39, v_39, t);
  t = reverse_acc_2_0(_id, j_3, t);
  t = map_1_0(k_3, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  {
    ATerm y_11 = t;
    int z_11 = stack_ptr;
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
                ATerm a_12 = ATgetFirst((ATermList) t);
                ATerm b_12 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_40;
          }
        LocalPopChoice(z_11);
      }
    else
      {
        t = y_11;
        t = (ATerm) ATinsert(ATempty, e_40);
      }
  }
  f_40 = t;
  t = term_z_8;
  g_40 = t;
  t = SSL_printnl(g_40, f_40);
  t = e_40;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm k_40 = NULL,l_40 = NULL;
  t = term_v_9;
  k_40 = t;
  t = term_c_11;
  l_40 = t;
  t = term_d_11;
  t = t_4(k_40, l_40, t);
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
  ATerm m_40 = NULL,t_40 = NULL;
  t = term_c_12;
  m_40 = t;
  t = term_u_2;
  t_40 = t;
  t = term_d_12;
  t = w_4(m_40, t_40, t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  t = term_e_12;
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
  ATerm u_40 = NULL,v_40 = NULL,w_40 = NULL,y_40 = NULL;
  t = term_c_12;
  w_40 = t;
  t = term_u_2;
  y_40 = t;
  t = term_d_12;
  t = w_4(w_40, y_40, t);
  t = term_f_12;
  u_40 = t;
  t = term_u_2;
  v_40 = t;
  t = term_g_12;
  t = w_4(u_40, v_40, t);
  t = term_h_12;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  t = term_i_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(l_3, m_3, n_3, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = Option_3_0(o_3, p_3, q_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_61 (ATerm), ATerm c_61 (ATerm), ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,h_7 = NULL;
  e_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_41 = ATgetFirst((ATermList) t);
      b_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_41);
  z_40 = t;
  t = a_41;
  t = b_61(t);
  c_41 = t;
  t = b_41;
  t = c_61(t);
  d_41 = t;
  t = (ATerm) ATinsert(CheckATermList(d_41), c_41);
  h_7 = t;
  t = SSLsetAnnotations(h_7, z_40);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm j_109 (ATerm), ATerm t)
{
  ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,o_41 = NULL,p_41 = NULL,j_7 = NULL;
  j_41 = t;
  {
    ATerm l_12 = t;
    int m_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_12;
        t = j_109(t);
        LocalPopChoice(m_12);
      }
    else
      {
        t = l_12;
      }
  }
  t = j_41;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_41 = ATgetFirst((ATermList) t);
      m_41 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_41);
  k_41 = t;
  t = term_c_11;
  p_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, l_41);
  t = w_4(p_41, l_41, t);
  t = m_41;
  {
    static ATerm z_41 (ATerm t)
    {
      ATerm o_12 = t;
      int q_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_12 = t;
          int s_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_41 = NULL;
              s_41 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = s_41;
              LocalPopChoice(s_12);
            }
          else
            {
              t = r_12;
              t = j_109(t);
              t = Cons_2_0(_id, z_41, t);
            }
          LocalPopChoice(q_12);
        }
      else
        {
          t = o_12;
          {
            ATerm v_41 = NULL,w_41 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                v_41 = ATgetFirst((ATermList) t);
                w_41 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(w_41), (ATerm) ATmakeAppl(sym_Undefined_1, v_41));
          }
        }
      return(t);
    }
    t = z_41(t);
  }
  o_41 = t;
  t = (ATerm) ATinsert(CheckATermList(o_41), (ATerm) ATmakeAppl(sym_Program_1, l_41));
  j_7 = t;
  t = SSLsetAnnotations(j_7, k_41);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  if(match_string(t, "--help"))
    {
      t = l_42;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = l_42;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = l_42;
        }
    }
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm m_42 = NULL,n_42 = NULL;
  t = term_r_11;
  m_42 = t;
  t = term_u_2;
  n_42 = t;
  t = term_t_12;
  t = w_4(m_42, n_42, t);
  t = term_w_12;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_x_12;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm i_109 (ATerm), ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL;
  g_42 = t;
  t = term_p_10;
  i_42 = t;
  t = term_q_10;
  j_42 = t;
  t = (ATerm) ATempty;
  k_42 = t;
  t = SSL_table_put(i_42, j_42, k_42);
  t = g_42;
  {
    static ATerm r_3 (ATerm t)
    {
      ATerm y_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_109(t);
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
                t = Option_3_0(u_3, v_3, w_3, t);
                LocalPopChoice(b_13);
              }
            else
              {
                t = a_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(r_3, t);
  }
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_42 = NULL;
        y_42 = t;
        {
          ATerm e_13 = t;
          int f_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_22 = NULL;
              t = y_42;
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm w_22 = NULL,x_22 = NULL;
                    t = term_v_9;
                    w_22 = t;
                    t = term_r_11;
                    x_22 = t;
                    t = term_s_11;
                    t = t_4(w_22, x_22, t);
                    LocalPopChoice(h_13);
                  }
                else
                  {
                    t = g_13;
                    t = fetch_1_0(x_3, t);
                  }
              }
              t = y_42;
              t = default_system_usage_0_0(t);
              t = term_b_10;
              v_22 = t;
              t = SSL_exit(v_22);
              LocalPopChoice(f_13);
            }
          else
            {
              t = e_13;
              {
                ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
                t = term_v_9;
                c_23 = t;
                t = term_c_12;
                d_23 = t;
                t = term_j_13;
                t = t_4(c_23, d_23, t);
                t = y_42;
                t = default_system_about_0_0(t);
                t = term_b_10;
                b_23 = t;
                t = SSL_exit(b_23);
              }
            }
        }
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
        {
          ATerm k_13 = t;
          int l_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
              static ATerm y_3 (ATerm t)
              {
                ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL,l_7 = NULL;
                e_43 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    d_43 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(e_43);
                c_43 = t;
                t = d_43;
                if(((e_42 != NULL) && (e_42 != t)))
                  _fail(t);
                else
                  e_42 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, d_43);
                l_7 = t;
                t = SSLsetAnnotations(l_7, c_43);
                return(t);
              }
              t = fetch_1_0(y_3, t);
              t = term_x_4;
              a_43 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_42)), term_m_13);
              b_43 = t;
              t = SSL_printnl(a_43, b_43);
              t = (ATerm) ATmakeAppl(sym__2, term_x_4, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_42)), term_m_13));
              t = default_system_usage_0_0(t);
              t = term_a_5;
              z_42 = t;
              t = SSL_exit(z_42);
              LocalPopChoice(l_13);
            }
          else
            {
              t = k_13;
            }
        }
      }
  }
  f_42 = t;
  t = term_p_10;
  h_42 = t;
  t = SSL_table_destroy(h_42);
  t = f_42;
  return(t);
}
ATerm option_wrap_4_0 (ATerm i_107 (ATerm), ATerm j_107 (ATerm), ATerm k_107 (ATerm), ATerm l_107 (ATerm), ATerm t)
{
  ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL;
  t = parse_options_1_0(i_107, t);
  l_43 = t;
  t = term_n_13;
  o_43 = t;
  t = SSL_table_create(o_43);
  t = term_n_13;
  m_43 = t;
  t = term_o_13;
  n_43 = t;
  t = SSL_table_put(m_43, n_43, l_43);
  t = l_43;
  t = k_107(t);
  {
    ATerm r_13 = t;
    int s_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(j_107, t);
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
              t = l_107(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_13);
            }
          else
            {
              t = t_13;
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
  ATerm p_43 = NULL,q_43 = NULL;
  t = term_v_13;
  p_43 = t;
  t = term_u_2;
  q_43 = t;
  t = term_w_13;
  t = w_4(p_43, q_43, t);
  t = term_y_13;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = term_z_13;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  r_43 = t;
  t = term_v_9;
  v_43 = t;
  t = term_c_11;
  w_43 = t;
  t = term_d_11;
  t = t_4(v_43, w_43, t);
  s_43 = t;
  t = term_x_4;
  t_43 = t;
  t = (ATerm) ATinsert(ATempty, s_43);
  u_43 = t;
  t = SSL_printnl(t_43, u_43);
  t = r_43;
  return(t);
}
ATerm iowrap_3_0 (ATerm r_106 (ATerm), ATerm s_106 (ATerm), ATerm t_106 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t)
  {
    ATerm a_14 = t;
    int c_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_106(t);
        LocalPopChoice(c_14);
      }
    else
      {
        t = a_14;
        {
          ATerm j_14 = t;
          int k_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(k_14);
            }
          else
            {
              t = j_14;
              {
                ATerm l_14 = t;
                int m_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
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
                          t = Option_3_0(c_4, d_4, e_4, t);
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
                                t = verbose_option_0_0(t);
                                LocalPopChoice(q_14);
                              }
                            else
                              {
                                t = p_14;
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
    ATerm x_43 = NULL,y_43 = NULL,z_43 = NULL;
    y_43 = t;
    {
      ATerm s_14 = t;
      int t_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_4 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((x_43 != NULL) && (x_43 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  x_43 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_4, t);
          LocalPopChoice(t_14);
        }
      else
        {
          t = s_14;
          t = term_u_14;
          x_43 = t;
        }
    }
    t = not_null(x_43);
    t = ReadFromFile_0_0(t);
    z_43 = t;
    t = (ATerm) ATmakeAppl(sym__2, y_43, z_43);
    t = apply_strategy_1_0(r_106, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_4_0(z_3, t_106, a_4, b_4, t);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,n_7 = NULL;
  g_44 = t;
  if(match_cons(t, sym__2))
    {
      d_44 = ATgetArgument(t, 0);
      e_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_44);
  c_44 = t;
  t = e_44;
  t = topdown_1_0(v_4, t);
  f_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_44, f_44);
  n_7 = t;
  t = SSLsetAnnotations(n_7, c_44);
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm v_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(w_14);
      }
    else
      {
        t = v_14;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(s_4, _fail, default_usage_0_0, t);
  return(t);
}
