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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Cons_1;
Symbol sym_Nil_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Cons_1 = ATmakeSymbol("Cons", 1, ATfalse);
  ATprotectSymbol(sym_Cons_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
ATerm term_r_14;
ATerm term_q_14;
ATerm term_p_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_y_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_c_13;
ATerm term_b_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_12;
ATerm term_c_12;
ATerm term_z_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_s_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_5);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(sym_Op_2, term_w_5, (ATerm) ATempty);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_6);
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_w_5);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_Call_2, term_s_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_p_7);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Call_2, term_q_7, (ATerm) ATempty);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATempty);
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_y_7);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_k_8);
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_p_8);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_n_9);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_q_9);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__2, term_d_10, term_e_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_o_10, term_p_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_Verbose_1, term_p_10);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__2, term_u_10, term_w_9);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_o_10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym__2, term_i_12, term_w_9);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(sym__2, term_l_12, term_w_9);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym__2, term_y_12, term_w_9);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_b_13));
  term_b_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, (ATerm) ATempty);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_y_12);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_i_12);
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_w_9);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm at_last_1_0 (ATerm j_123 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm h_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm n_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm p_26 (ATerm s_16, ATerm t_16, ATerm t);
static ATerm q_26 (ATerm e_17, ATerm f_17, ATerm t);
static ATerm c_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm o_1 (ATerm t);
static ATerm p_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm y_115 (ATerm), ATerm t);
static ATerm m_4 (ATerm h_60, ATerm i_60, ATerm t);
static ATerm n_4 (ATerm o_44, ATerm p_44, ATerm t);
static ATerm p_4 (ATerm b_122 (ATerm), ATerm w_302, ATerm u_44, ATerm t);
static ATerm o_4 (ATerm k_44, ATerm l_44, ATerm t);
static ATerm s_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm output_1_0 (ATerm b_142 (ATerm), ATerm t);
static ATerm z_28 (ATerm t_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_4 (ATerm q_44, ATerm t);
static ATerm r_4 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm s_4 (ATerm j_60, ATerm k_60, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_30 (ATerm j_29, ATerm t);
static ATerm l_30 (ATerm n_29, ATerm o_29, ATerm p_29, ATerm t);
static ATerm m_30 (ATerm x_29, ATerm y_29, ATerm z_29, ATerm t);
static ATerm t_4 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_142 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm j_122 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
static ATerm e_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm c_5 (ATerm d_79, ATerm e_79, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm a_5 (ATerm t_65, ATerm u_65, ATerm s_65, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm u_4 (ATerm c_64, ATerm d_64, ATerm t);
ATerm foldr_2_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_138 (ATerm), ATerm t);
static ATerm d_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm d_5 (ATerm e_70, ATerm f_70, ATerm g_70, ATerm t);
ATerm lookup_table_0_1 (ATerm f_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_70, ATerm n_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm w_4 (ATerm j_70, ATerm k_70, ATerm t);
static ATerm x_4 (ATerm o_70, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm r_122 (ATerm), ATerm t);
static ATerm e_5 (ATerm h_70, ATerm i_70, ATerm t);
static ATerm z_4 (ATerm m_67, ATerm n_67, ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm g_3 (ATerm t);
static ATerm h_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm q_3 (ATerm t);
ATerm parse_options_3_0 (ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
static ATerm v_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_123 (ATerm), ATerm t)
{
  static ATerm h_1 (ATerm t);
  static ATerm h_1 (ATerm t)
  {
    ATerm d_1 = NULL,f_1 = NULL,g_1 = NULL;
    d_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_1 = ATgetFirst((ATermList) t);
        g_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm j_2 = t;
      int a_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_0 = NULL,i_0 = NULL;
          t = SSLgetAnnotations(d_1);
          e_0 = t;
          t = g_1;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(g_1), f_1);
          i_0 = t;
          t = SSLsetAnnotations(i_0, e_0);
          t = j_123(t);
          LocalPopChoice(a_4);
        }
      else
        {
          t = j_2;
          {
            ATerm q_1 = NULL,w_1 = NULL,k_0 = NULL;
            t = SSLgetAnnotations(d_1);
            q_1 = t;
            t = g_1;
            t = h_1(t);
            w_1 = t;
            t = (ATerm) ATinsert(CheckATermList(w_1), f_1);
            k_0 = t;
            t = SSLsetAnnotations(k_0, q_1);
          }
        }
    }
    return(t);
  }
  t = h_1(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm u_1 = NULL,v_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_1 = ATgetFirst((ATermList) t);
      v_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = v_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_1;
    }
  else
    {
      t = v_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm p_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_4 = ATgetFirst((ATermList) t);
      p_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = p_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t)
{
  ATerm k_2 = NULL,l_2 = NULL,n_2 = NULL;
  k_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_2 = ATgetFirst((ATermList) t);
      {
        ATerm e_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = n_2;
  t = m_132(t);
  t = k_2;
  t = last_0_0(t);
  t = n_132(t);
  t = k_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_4 = ATgetFirst((ATermList) t);
      l_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_2;
  t = at_last_1_0(a_0, t);
  return(t);
}
static ATerm b_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
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
static ATerm n_0 (ATerm t)
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
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,b_14 = NULL;
  w_13 = t;
  if(match_cons(t, sym_Real_1))
    {
      x_13 = ATgetArgument(t, 0);
      {
        ATerm f_2 = NULL;
        t = SSL_string_to_real(x_13);
        f_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, f_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          x_13 = ATgetArgument(t, 0);
          {
            ATerm s_2 = NULL;
            t = SSL_string_to_int(x_13);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, s_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              x_13 = ATgetArgument(t, 0);
              b_14 = ATgetArgument(t, 1);
              v_13 = ATgetArgument(t, 2);
              t = SSL_is_string(v_13);
              t = (ATerm) ATmakeAppl(sym_Con_3, x_13, b_14, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, v_13), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  x_13 = ATgetArgument(t, 0);
                  b_14 = ATgetArgument(t, 1);
                  v_13 = ATgetArgument(t, 2);
                  {
                    ATerm n_3 = NULL;
                    t = x_13;
                    {
                      ATerm g_4 = t;
                      int h_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_3 = NULL;
                          t = SSL_explode_string(x_13);
                          t = unquote_chars_2_0(b_0, c_0, t);
                          o_3 = t;
                          t = SSL_implode_string(o_3);
                          LocalPopChoice(h_4);
                        }
                      else
                        {
                          t = g_4;
                        }
                    }
                    n_3 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_3, b_14, v_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      x_13 = ATgetArgument(t, 0);
                      b_14 = ATgetArgument(t, 1);
                      {
                        ATerm b_4 = NULL;
                        t = x_13;
                        {
                          ATerm i_4 = t;
                          int j_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_4 = NULL;
                              t = SSL_explode_string(x_13);
                              t = unquote_chars_2_0(h_0, m_0, t);
                              c_4 = t;
                              t = SSL_implode_string(c_4);
                              LocalPopChoice(j_4);
                            }
                          else
                            {
                              t = i_4;
                            }
                        }
                        b_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, b_4, (ATerm)ATempty, b_14);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          x_13 = ATgetArgument(t, 0);
                          {
                            ATerm h_5 = NULL;
                            t = x_13;
                            {
                              ATerm k_4 = t;
                              int l_4 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm i_5 = NULL;
                                  t = SSL_explode_string(x_13);
                                  t = unquote_chars_2_0(n_0, s_0, t);
                                  i_5 = t;
                                  t = SSL_implode_string(i_5);
                                  LocalPopChoice(l_4);
                                }
                              else
                                {
                                  t = k_4;
                                }
                            }
                            h_5 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, h_5, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              x_13 = ATgetArgument(t, 0);
                              {
                                ATerm y_5 = NULL,d_6 = NULL,g_6 = NULL,q_0 = NULL;
                                t = SSLgetAnnotations(w_13);
                                y_5 = t;
                                t = SSL_explode_string(x_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm v_4 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(v_4) != AT_INT) || (ATgetInt((ATermInt) v_4) != 39)))
                                      _fail(t);
                                    d_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(d_6);
                                g_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, g_6);
                                q_0 = t;
                                t = SSLsetAnnotations(q_0, y_5);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  x_13 = ATgetArgument(t, 0);
                                  b_14 = ATgetArgument(t, 1);
                                  v_13 = ATgetArgument(t, 2);
                                  u_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm z_6 = NULL,o_7 = NULL,t_7 = NULL,t_0 = NULL;
                                    t = SSLgetAnnotations(w_13);
                                    z_6 = t;
                                    t = SSL_explode_string(x_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm y_4 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(y_4) != AT_INT) || (ATgetInt((ATermInt) y_4) != 39)))
                                          _fail(t);
                                        o_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(o_7);
                                    t_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, t_7, b_14, v_13, u_13);
                                    t_0 = t;
                                    t = SSLsetAnnotations(t_0, z_6);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      x_13 = ATgetArgument(t, 0);
                                      b_14 = ATgetArgument(t, 1);
                                      v_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm u_8 = NULL,c_9 = NULL,e_9 = NULL,u_0 = NULL;
                                        t = SSLgetAnnotations(w_13);
                                        u_8 = t;
                                        t = SSL_explode_string(x_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm b_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(b_5) != AT_INT) || (ATgetInt((ATermInt) b_5) != 39)))
                                              _fail(t);
                                            c_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(c_9);
                                        e_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, e_9, b_14, v_13);
                                        u_0 = t;
                                        t = SSLsetAnnotations(u_0, u_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          x_13 = ATgetArgument(t, 0);
                                          b_14 = ATgetArgument(t, 1);
                                          v_13 = ATgetArgument(t, 2);
                                          u_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm j_10 = NULL,w_10 = NULL,z_10 = NULL,v_0 = NULL;
                                            t = SSLgetAnnotations(w_13);
                                            j_10 = t;
                                            t = SSL_explode_string(x_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm f_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(f_5) != AT_INT) || (ATgetInt((ATermInt) f_5) != 39)))
                                                  _fail(t);
                                                w_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(w_10);
                                            z_10 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_10, b_14, v_13, u_13);
                                            v_0 = t;
                                            t = SSLsetAnnotations(v_0, j_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              x_13 = ATgetArgument(t, 0);
                                              b_14 = ATgetArgument(t, 1);
                                              v_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm y_11 = NULL,d_12 = NULL,e_12 = NULL,w_0 = NULL;
                                                t = SSLgetAnnotations(w_13);
                                                y_11 = t;
                                                t = SSL_explode_string(x_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm g_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(g_5) != AT_INT) || (ATgetInt((ATermInt) g_5) != 39)))
                                                      _fail(t);
                                                    d_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(d_12);
                                                e_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, e_12, b_14, v_13);
                                                w_0 = t;
                                                t = SSLsetAnnotations(w_0, y_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  x_13 = ATgetArgument(t, 0);
                                                  b_14 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm l_13 = NULL,o_13 = NULL,s_13 = NULL,x_0 = NULL;
                                                    t = SSLgetAnnotations(w_13);
                                                    l_13 = t;
                                                    t = SSL_explode_string(x_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm l_5 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(l_5) != AT_INT) || (ATgetInt((ATermInt) l_5) != 39)))
                                                          _fail(t);
                                                        o_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(o_13);
                                                    s_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, s_13, b_14);
                                                    x_0 = t;
                                                    t = SSLsetAnnotations(x_0, l_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      x_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm g_14 = NULL,j_14 = NULL,m_14 = NULL,y_0 = NULL;
                                                        t = SSLgetAnnotations(w_13);
                                                        g_14 = t;
                                                        t = SSL_explode_string(x_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm m_5 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(m_5) != AT_INT) || (ATgetInt((ATermInt) m_5) != 39)))
                                                              _fail(t);
                                                            j_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(j_14);
                                                        m_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, m_14);
                                                        y_0 = t;
                                                        t = SSLsetAnnotations(y_0, g_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          x_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm w_14 = NULL,y_14 = NULL,c_15 = NULL,z_0 = NULL;
                                                            t = SSLgetAnnotations(w_13);
                                                            w_14 = t;
                                                            t = SSL_explode_string(x_13);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm n_5 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(n_5) != AT_INT) || (ATgetInt((ATermInt) n_5) != 39)))
                                                                  _fail(t);
                                                                y_14 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(y_14);
                                                            c_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, c_15);
                                                            z_0 = t;
                                                            t = SSLsetAnnotations(z_0, w_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              x_13 = ATgetArgument(t, 0);
                                                              b_14 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,a_1 = NULL;
                                                                t = SSLgetAnnotations(w_13);
                                                                p_15 = t;
                                                                t = SSL_explode_string(x_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm p_5 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(p_5) != AT_INT) || (ATgetInt((ATermInt) p_5) != 39)))
                                                                      _fail(t);
                                                                    s_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(s_15);
                                                                t_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_15, b_14);
                                                                a_1 = t;
                                                                t = SSLsetAnnotations(a_1, p_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,b_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  x_13 = ATgetArgument(t, 0);
                                                                  b_14 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(w_13);
                                                              b_16 = t;
                                                              t = SSL_explode_string(x_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm q_5 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(q_5) != AT_INT) || (ATgetInt((ATermInt) q_5) != 39)))
                                                                    _fail(t);
                                                                  e_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(e_16);
                                                              f_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, f_16, b_14);
                                                              b_1 = t;
                                                              t = SSLsetAnnotations(b_1, b_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm p_26 (ATerm s_16, ATerm t_16, ATerm t)
{
  t = s_16;
  {
    ATerm r_5 = t;
    if((PushChoice() == 0))
      {
        ATerm x_16 = NULL,a_17 = NULL,b_17 = NULL,c_17 = NULL,j_5 = NULL;
        c_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            a_17 = ATgetFirst((ATermList) t);
            b_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(c_17);
        x_16 = t;
        t = b_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(b_17), a_17);
        j_5 = t;
        t = SSLsetAnnotations(j_5, x_16);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_5;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_s_5, s_16);
  return(t);
}
static ATerm q_26 (ATerm e_17, ATerm f_17, ATerm t)
{
  t = e_17;
  {
    ATerm u_5 = t;
    if((PushChoice() == 0))
      {
        ATerm k_17 = NULL,l_17 = NULL,o_17 = NULL,q_17 = NULL,k_5 = NULL;
        q_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_17 = ATgetFirst((ATermList) t);
            o_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(q_17);
        k_17 = t;
        t = o_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(o_17), l_17);
        k_5 = t;
        t = SSLsetAnnotations(k_5, k_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_5;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, e_17);
  return(t);
}
static ATerm c_1 (ATerm t)
{
  t = term_z_5;
  return(t);
}
static ATerm e_1 (ATerm t)
{
  ATerm p_18 = NULL,q_18 = NULL,p_16 = NULL;
  p_18 = t;
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm a_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) a_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm c_6 = ATgetArgument(t, 1);
        if(((ATgetType(c_6) == AT_LIST) && !(ATisEmpty(c_6))))
          {
            q_18 = ATgetFirst((ATermList) c_6);
            {
              ATerm f_6 = (ATerm) ATgetNext((ATermList) c_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(p_18);
  if(match_cons(t, sym__2))
    {
      ATerm j_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_6 = ATgetArgument(t, 1);
        if(((ATgetType(k_6) == AT_LIST) && !(ATisEmpty(k_6))))
          {
            ATerm l_6 = ATgetFirst((ATermList) k_6);
            ATerm n_6 = (ATerm) ATgetNext((ATermList) k_6);
            if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
              {
                p_16 = ATgetFirst((ATermList) n_6);
                {
                  ATerm o_6 = (ATerm) ATgetNext((ATermList) n_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, p_16), q_18));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, p_19), o_19));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_z_5;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      t_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_p_6, (ATerm) ATinsert(ATinsert(ATempty, u_19), t_19));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm k_20 = NULL,n_20 = NULL;
  if(match_cons(t, sym__2))
    {
      k_20 = ATgetArgument(t, 0);
      n_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, n_20), k_20));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_t_6;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_r_6, (ATerm) ATinsert(ATinsert(ATempty, q_20), p_20));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,z_17 = NULL,a_18 = NULL,i_18 = NULL;
  z_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      a_18 = ATgetArgument(t, 0);
      i_18 = ATgetArgument(t, 1);
      {
        ATerm n_18 = NULL;
        t = i_18;
        t = foldr_2_0(c_1, e_1, t);
        n_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, a_18, n_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          a_18 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, a_18, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              a_18 = ATgetArgument(t, 0);
              {
                ATerm z_16 = NULL;
                t = a_18;
                {
                  ATerm v_6 = t;
                  int w_6 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_x_6;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_y_6;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_a_7;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_b_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_c_7;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(w_6);
                    }
                  else
                    {
                      t = v_6;
                      {
                        ATerm h_17 = NULL;
                        t = SSL_explode_string(a_18);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm d_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(d_7) != AT_INT) || (ATgetInt((ATermInt) d_7) != 39)))
                              _fail(t);
                            {
                              ATerm e_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
                                {
                                  h_17 = ATgetFirst((ATermList) e_7);
                                  {
                                    ATerm f_7 = (ATerm) ATgetNext((ATermList) e_7);
                                    if(((ATgetType(f_7) == AT_LIST) && !(ATisEmpty(f_7))))
                                      {
                                        ATerm g_7 = ATgetFirst((ATermList) f_7);
                                        if(((ATgetType(g_7) != AT_INT) || (ATgetInt((ATermInt) g_7) != 39)))
                                          _fail(t);
                                        {
                                          ATerm h_7 = (ATerm) ATgetNext((ATermList) f_7);
                                          if(((ATgetType(h_7) != AT_LIST) || !(ATisEmpty(h_7))))
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
                        t = h_17;
                      }
                    }
                }
                z_16 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, z_16);
              }
            }
          else
            {
              ATerm i_7 = t;
              int j_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      a_18 = ATgetArgument(t, 0);
                      {
                        ATerm k_7 = ATgetArgument(t, 1);
                      }
                      v_17 = ATgetArgument(t, 2);
                      r_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_7);
                  t = (ATerm) ATmakeAppl(sym_Con_3, a_18, v_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_17), (ATerm) ATempty));
                }
              else
                {
                  t = i_7;
                  {
                    ATerm l_7 = t;
                    int m_7 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            a_18 = ATgetArgument(t, 0);
                            {
                              ATerm n_7 = ATgetArgument(t, 1);
                            }
                            v_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_7);
                        t = (ATerm) ATmakeAppl(sym_Con_3, a_18, v_17, term_r_7);
                      }
                    else
                      {
                        t = l_7;
                        if(match_cons(t, sym_Con1_2))
                          {
                            a_18 = ATgetArgument(t, 0);
                            i_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, a_18, i_18, term_r_7);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                a_18 = ATgetArgument(t, 0);
                                i_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t);
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = i_18;
                                    return(t);
                                  }
                                  t = a_18;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    a_18 = ATgetArgument(t, 0);
                                    t = a_18;
                                    t = foldr_2_0(k_1, l_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        a_18 = ATgetArgument(t, 0);
                                        t = a_18;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            s_17 = ATgetFirst((ATermList) t);
                                            t_17 = (ATerm) ATgetNext((ATermList) t);
                                            t = t_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm s_7 = t;
                                                int u_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = p_26(a_18, z_17, t);
                                                    LocalPopChoice(u_7);
                                                  }
                                                else
                                                  {
                                                    t = s_7;
                                                    t = s_17;
                                                  }
                                              }
                                            else
                                              {
                                                t = p_26(a_18, z_17, t);
                                              }
                                          }
                                        else
                                          {
                                            t = p_26(a_18, z_17, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            a_18 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, a_18));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                a_18 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, a_18));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    a_18 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, a_18));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        a_18 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, a_18));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            a_18 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_18), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                a_18 = ATgetArgument(t, 0);
                                                                i_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, a_18), i_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    a_18 = ATgetArgument(t, 0);
                                                                    i_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm m_1 (ATerm t);
                                                                      static ATerm m_1 (ATerm t)
                                                                      {
                                                                        t = i_18;
                                                                        return(t);
                                                                      }
                                                                      t = a_18;
                                                                      t = foldr_2_0(m_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        a_18 = ATgetArgument(t, 0);
                                                                        t = a_18;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            a_18 = ATgetArgument(t, 0);
                                                                            i_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATinsert(CheckATermList(i_18), a_18));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                a_18 = ATgetArgument(t, 0);
                                                                                t = a_18;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    s_17 = ATgetFirst((ATermList) t);
                                                                                    t_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = t_17;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_7 = t;
                                                                                        int w_7 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = q_26(a_18, z_17, t);
                                                                                            LocalPopChoice(w_7);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_7;
                                                                                            t = s_17;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = q_26(a_18, z_17, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = q_26(a_18, z_17, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_x_7;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        a_18 = ATgetArgument(t, 0);
                                                                                        i_18 = ATgetArgument(t, 1);
                                                                                        t = i_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            u_17 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, u_17), a_18));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            a_18 = ATgetArgument(t, 0);
                                                                                            t = a_18;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                a_18 = ATgetArgument(t, 0);
                                                                                                i_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, a_18, i_18, term_a_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    a_18 = ATgetArgument(t, 0);
                                                                                                    i_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, a_18, i_18, term_a_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        a_18 = ATgetArgument(t, 0);
                                                                                                        i_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, a_18, (ATerm)ATempty, i_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            a_18 = ATgetArgument(t, 0);
                                                                                                            i_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, i_18, a_18);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                a_18 = ATgetArgument(t, 0);
                                                                                                                i_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, a_18, i_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    a_18 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, a_18, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        a_18 = ATgetArgument(t, 0);
                                                                                                                        i_18 = ATgetArgument(t, 1);
                                                                                                                        v_17 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, a_18, i_18, (ATerm)ATempty, v_17);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            a_18 = ATgetArgument(t, 0);
                                                                                                                            i_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_18, (ATerm)ATempty, (ATerm)ATempty, i_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                a_18 = ATgetArgument(t, 0);
                                                                                                                                i_18 = ATgetArgument(t, 1);
                                                                                                                                v_17 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_18, i_18, (ATerm)ATempty, v_17);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    a_18 = ATgetArgument(t, 0);
                                                                                                                                    i_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, a_18, (ATerm)ATempty, (ATerm)ATempty, i_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        a_18 = ATgetArgument(t, 0);
                                                                                                                                        i_18 = ATgetArgument(t, 1);
                                                                                                                                        v_17 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, a_18, i_18, (ATerm)ATempty, v_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            a_18 = ATgetArgument(t, 0);
                                                                                                                                            i_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, a_18, (ATerm)ATempty, (ATerm)ATempty, i_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm b_8 = ATgetArgument(t, 0);
                                                                                                                                                i_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, i_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm y_114 (ATerm), ATerm z_114 (ATerm), ATerm t)
{
  static ATerm r_26 (ATerm t);
  static ATerm r_26 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_114(t);
        t = r_26(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = z_114(t);
      }
    return(t);
  }
  t = r_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  static ATerm r_1 (ATerm t);
  static ATerm r_1 (ATerm t)
  {
    t = topdown_1_0(y_115, t);
    return(t);
  }
  t = y_115(t);
  t = SRTS_all(r_1, t);
  return(t);
}
static ATerm m_4 (ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_fputc(h_60, i_60);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_26);
  return(t);
}
static ATerm n_4 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm w_26 = NULL;
  t = SSL_write_term_to_stream_text(o_44, p_44);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
  return(t);
}
static ATerm p_4 (ATerm b_122 (ATerm), ATerm w_302, ATerm u_44, ATerm t)
{
  ATerm x_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_302, term_e_8);
  t = t_4(t);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, u_44);
  t = b_122(t);
  t = fclose_0_0(t);
  t = u_44;
  return(t);
}
static ATerm o_4 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm y_26 = NULL;
  t = SSL_write_term_to_stream_baf(k_44, l_44);
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_26);
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(match_cons(f_8, sym_Stream_1))
        {
          p_27 = ATgetArgument(f_8, 0);
        }
      else
        _fail(t);
      q_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(p_27, q_27, t);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL,i_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          c_28 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      i_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(c_28, i_28, t);
  x_27 = t;
  t = term_b_7;
  y_27 = t;
  t = x_27;
  if(match_cons(t, sym_Stream_1))
    {
      b_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_b_7, x_27);
  t = m_4(y_27, b_28, t);
  return(t);
}
ATerm output_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm d_27 = NULL,f_27 = NULL;
  t = b_142(t);
  f_27 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_27 = NULL,m_27 = NULL;
        t = term_j_8;
        j_27 = t;
        t = term_k_8;
        m_27 = t;
        t = term_l_8;
        t = z_4(j_27, m_27, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_m_8;
      }
  }
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_27, f_27);
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_27 = NULL,o_27 = NULL;
        t = term_j_8;
        n_27 = t;
        t = term_p_8;
        o_27 = t;
        t = term_q_8;
        t = z_4(n_27, o_27, t);
        t = (ATerm) ATmakeAppl(sym__2, d_27, f_27);
        LocalPopChoice(o_8);
        if(match_cons(t, sym__2))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            ATerm s_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(s_1, d_27, f_27, t);
      }
    else
      {
        t = n_8;
        if(match_cons(t, sym__2))
          {
            ATerm t_8 = ATgetArgument(t, 0);
            ATerm v_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(t_1, d_27, f_27, t);
      }
  }
  return(t);
}
static ATerm z_28 (ATerm t_28, ATerm t)
{
  t = SSL_fclose(t_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL;
  x_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_28 = ATgetArgument(t, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(w_28);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = z_28(x_28, t);
          }
      }
    }
  else
    {
      t = z_28(x_28, t);
    }
  return(t);
}
static ATerm q_4 (ATerm q_44, ATerm t)
{
  t = SSL_read_term_from_stream(q_44);
  return(t);
}
static ATerm r_4 (ATerm n_58, ATerm o_58, ATerm t)
{
  t = SSL_strcat(n_58, o_58);
  return(t);
}
static ATerm s_4 (ATerm j_60, ATerm k_60, ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_fopen(j_60, k_60);
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  t = SSL_stdin_stream();
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_stdout_stream();
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm d_29 = NULL;
  t = SSL_stderr_stream();
  d_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_29);
  return(t);
}
static ATerm k_30 (ATerm j_29, ATerm t)
{
  ATerm k_29 = NULL;
  t = SSL_explode_term(j_29);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_8 = ATgetArgument(t, 1);
        if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
          {
            k_29 = ATgetFirst((ATermList) z_8);
            {
              ATerm a_9 = (ATerm) ATgetNext((ATermList) z_8);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = k_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = k_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = k_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = k_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_30 (ATerm n_29, ATerm o_29, ATerm p_29, ATerm t)
{
  ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,v_29 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(p_29);
  s_29 = t;
  t = n_29;
  if(match_cons(t, sym_Path_1))
    {
      v_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_29, o_29);
  o_5 = t;
  t = SSLsetAnnotations(o_5, s_29);
  if(match_cons(t, sym__2))
    {
      q_29 = ATgetArgument(t, 0);
      r_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(q_29, r_29, t);
  return(t);
}
static ATerm m_30 (ATerm x_29, ATerm y_29, ATerm z_29, ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL,f_30 = NULL,t_5 = NULL;
  t = SSLgetAnnotations(z_29);
  c_30 = t;
  t = SSL_is_string(x_29);
  f_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_30, y_29);
  t_5 = t;
  t = SSLsetAnnotations(t_5, c_30);
  if(match_cons(t, sym__2))
    {
      a_30 = ATgetArgument(t, 0);
      b_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(a_30, b_30, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm h_30 = NULL,i_30 = NULL,j_30 = NULL;
  h_30 = t;
  if(match_cons(t, sym__2))
    {
      i_30 = ATgetArgument(t, 0);
      j_30 = ATgetArgument(t, 1);
      {
        ATerm b_9 = t;
        int d_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_30(h_30, t);
            LocalPopChoice(d_9);
          }
        else
          {
            t = b_9;
            {
              ATerm f_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_30(i_30, j_30, h_30, t);
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = f_9;
                  t = m_30(i_30, j_30, h_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_30(h_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL,v_30 = NULL;
  v_30 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_30, term_j_9);
        t = t_4(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          ATerm d_18 = NULL,e_18 = NULL;
          t = term_k_9;
          e_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_9, v_30);
          t = r_4(e_18, v_30, t);
          d_18 = t;
          t = SSL_perror(d_18);
          _fail(t);
        }
      }
  }
  p_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(q_30, t);
  o_30 = t;
  t = p_30;
  t = fclose_0_0(t);
  t = o_30;
  return(t);
}
ATerm input_1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_30 = NULL,z_30 = NULL;
      t = term_j_8;
      y_30 = t;
      t = term_n_9;
      z_30 = t;
      t = term_o_9;
      t = z_4(y_30, z_30, t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      t = term_p_9;
    }
  t = ReadFromFile_0_0(t);
  t = c_142(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  t = term_j_8;
  a_31 = t;
  t = term_q_9;
  b_31 = t;
  t = term_r_9;
  t = z_4(a_31, b_31, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL;
  d_31 = t;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = d_31;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm u_9 = ATgetFirst((ATermList) t);
                ATerm v_9 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = d_31;
          }
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = (ATerm) ATinsert(ATempty, d_31);
      }
  }
  e_31 = t;
  t = term_m_8;
  f_31 = t;
  t = SSL_printnl(f_31, e_31);
  t = d_31;
  return(t);
}
ATerm map_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  static ATerm x_31 (ATerm t);
  static ATerm x_31 (ATerm t)
  {
    ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
    u_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = u_31;
      }
    else
      {
        ATerm k_18 = NULL,u_18 = NULL,x_18 = NULL,x_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            v_31 = ATgetFirst((ATermList) t);
            w_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(u_31);
        k_18 = t;
        t = v_31;
        t = j_122(t);
        u_18 = t;
        t = w_31;
        t = x_31(t);
        x_18 = t;
        t = (ATerm) ATinsert(CheckATermList(x_18), u_18);
        x_5 = t;
        t = SSLsetAnnotations(x_5, k_18);
      }
    return(t);
  }
  t = x_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_32 = ATgetFirst((ATermList) t);
      b_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm f_32 = NULL,g_32 = NULL;
        static ATerm x_1 (ATerm t);
        static ATerm x_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(f_32)), not_null(g_32));
          return(t);
        }
        t = b_32;
        t = r_0(t);
        if(((f_32 != NULL) && (f_32 != t)))
          _fail(t);
        else
          f_32 = t;
        t = a_32;
        t = p_0(t);
        if(((g_32 != NULL) && (g_32 != t)))
          _fail(t);
        else
          g_32 = t;
        t = b_32;
        t = reverse_acc_2_0(p_0, x_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_w_9;
      t = r_0(t);
    }
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL,b_6 = NULL;
  q_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(q_32);
  o_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, p_32);
  b_6 = t;
  t = SSLsetAnnotations(b_6, o_32);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm u_32 = NULL;
  u_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_32), term_x_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t)
{
  ATerm k_32 = NULL,l_32 = NULL;
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_32 = NULL,n_32 = NULL;
      t = term_j_8;
      m_32 = t;
      t = term_q_9;
      n_32 = t;
      t = term_r_9;
      t = z_4(m_32, n_32, t);
      LocalPopChoice(z_9);
    }
  else
    {
      t = y_9;
      t = fetch_1_0(y_1, t);
    }
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_144(t);
        t = echo_0_0(t);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
      }
  }
  t = term_c_10;
  t = echo_0_0(t);
  t = term_d_10;
  k_32 = t;
  t = term_e_10;
  l_32 = t;
  t = term_f_10;
  t = z_4(k_32, l_32, t);
  t = reverse_acc_2_0(_id, z_1, t);
  t = map_1_0(a_2, t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_32 = NULL;
        t = b_144(t);
        v_32 = t;
        t = (ATerm) ATinsert(CheckATermList(v_32), term_i_10);
        t = echo_0_0(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
      }
  }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,e_6 = NULL;
  d_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      c_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_33);
  b_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, c_33);
  e_6 = t;
  t = SSLsetAnnotations(e_6, b_33);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_32 = NULL;
  y_32 = t;
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_32 = NULL,a_33 = NULL;
        t = term_j_8;
        z_32 = t;
        t = term_q_9;
        a_33 = t;
        t = term_r_9;
        t = z_4(z_32, a_33, t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        t = fetch_1_0(b_2, t);
      }
  }
  t = y_32;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm f_33 = NULL;
  f_33 = t;
  if(match_string(t, "-k"))
    {
      t = f_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = f_33;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL;
  g_33 = t;
  t = SSL_string_to_int(g_33);
  h_33 = t;
  t = term_m_10;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_10, h_33);
  t = c_5(i_33, h_33, t);
  t = g_33;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_n_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_33 = NULL;
  k_33 = t;
  if(match_string(t, "-S"))
    {
      t = k_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = k_33;
    }
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm l_33 = NULL,m_33 = NULL;
  t = term_o_10;
  l_33 = t;
  t = term_p_10;
  m_33 = t;
  t = term_q_10;
  t = c_5(l_33, m_33, t);
  t = term_r_10;
  return(t);
}
static ATerm i_2 (ATerm t)
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
static ATerm o_2 (ATerm t)
{
  ATerm n_33 = NULL,o_33 = NULL,p_33 = NULL;
  n_33 = t;
  t = SSL_string_to_int(n_33);
  o_33 = t;
  t = term_o_10;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_10, o_33);
  t = c_5(p_33, o_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_33);
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = term_t_10;
  return(t);
}
static ATerm r_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL;
  t = term_u_10;
  q_33 = t;
  t = term_w_9;
  r_33 = t;
  t = term_v_10;
  t = c_5(q_33, r_33, t);
  t = term_x_10;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  t = term_y_10;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_2, h_2, i_2, t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, o_2, q_2, t);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            t = Option_3_0(r_2, t_2, u_2, t);
          }
      }
    }
  return(t);
}
static ATerm c_5 (ATerm d_79, ATerm e_79, ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL;
  t = term_j_8;
  s_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_79, e_79);
  t = lookup_table_0_1(s_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      t_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(d_79, e_79, t_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_79, e_79);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_33 = NULL,a_34 = NULL,b_34 = NULL;
      t = term_w_9;
      t = g_0(t);
      z_33 = t;
      t = term_d_10;
      a_34 = t;
      t = term_e_10;
      b_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, z_33);
      t = a_5(a_34, b_34, z_33, t);
      _fail(t);
    }
  else
    {
      ATerm e_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_33 = ATgetFirst((ATermList) t);
          y_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_33;
      t = d_0(t);
      t = term_w_9;
      t = f_0(t);
      e_34 = t;
      t = (ATerm) ATinsert(CheckATermList(y_33), e_34);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm g_34 = NULL;
  g_34 = t;
  if(match_string(t, "-o"))
    {
      t = g_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = g_34;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL;
  h_34 = t;
  t = term_k_8;
  i_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, h_34);
  t = c_5(i_34, h_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, h_34);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = term_e_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(v_2, w_2, x_2, t);
  return(t);
}
static ATerm a_5 (ATerm t_65, ATerm u_65, ATerm s_65, ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL,o_34 = NULL;
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
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
        t = (ATerm) ATmakeAppl(sym__2, t_65, u_65);
        t = z_4(t_65, u_65, t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = f_11;
        t = (ATerm) ATempty;
      }
  }
  l_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_65, u_65, (ATerm) ATinsert(CheckATermList(l_34), s_65));
  t = lookup_table_0_1(t_65, t);
  o_34 = t;
  t = (ATerm) ATinsert(CheckATermList(l_34), s_65);
  m_34 = t;
  t = o_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      n_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(u_65, m_34, n_34, t);
  t = k_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
      t = term_w_9;
      t = o_0(t);
      z_34 = t;
      t = term_d_10;
      a_35 = t;
      t = term_e_10;
      b_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, z_34);
      t = a_5(a_35, b_35, z_34, t);
      _fail(t);
    }
  else
    {
      ATerm f_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_34 = ATgetFirst((ATermList) t);
          w_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_34 = ATgetFirst((ATermList) t);
          y_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      t = j_0(t);
      t = x_34;
      t = l_0(t);
      f_35 = t;
      t = (ATerm) ATinsert(CheckATermList(y_34), f_35);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm h_35 = NULL;
  h_35 = t;
  if(match_string(t, "-i"))
    {
      t = h_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = h_35;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm i_35 = NULL,j_35 = NULL;
  i_35 = t;
  t = term_n_9;
  j_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, i_35);
  t = c_5(j_35, i_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, i_35);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_j_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_2, z_2, a_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  t = whoami_0_0(t);
  k_35 = t;
  t = term_k_11;
  m_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_11), k_35);
  n_35 = t;
  t = SSL_printnl(m_35, n_35);
  t = term_m_11;
  l_35 = t;
  t = SSL_exit(l_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL;
  t = term_j_8;
  o_35 = t;
  t = term_q_9;
  p_35 = t;
  t = term_r_9;
  t = z_4(o_35, p_35, t);
  return(t);
}
static ATerm u_4 (ATerm c_64, ATerm d_64, ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_64, d_64);
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = SSL_addr(c_64, d_64);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm g_129 (ATerm), ATerm h_129 (ATerm), ATerm t)
{
  ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
  r_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_35;
      t = g_129(t);
    }
  else
    {
      ATerm w_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_35 = ATgetFirst((ATermList) t);
          t_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_35;
      t = foldr_2_0(g_129, h_129, t);
      w_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_35, w_35);
      t = h_129(t);
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
  t = term_p_10;
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm r_19 = NULL,s_19 = NULL;
  if(match_cons(t, sym__2))
    {
      r_19 = ATgetArgument(t, 0);
      s_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(r_19, s_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_35 = NULL,d_19 = NULL,f_19 = NULL;
  t = times_0_0(t);
  f_19 = t;
  t = SSL_explode_term(f_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      d_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = d_19;
  t = foldr_2_0(b_3, c_3, t);
  z_35 = t;
  t = SSL_TicksToSeconds(z_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym__2))
    {
      l_36 = ATgetArgument(t, 0);
      m_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_36;
        if((l_36 != t))
          {
            _fail(t);
          }
        t = k_36;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(l_36, m_36);
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              t = SSL_gtr(l_36, m_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, l_36, m_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_138 (ATerm), ATerm t)
{
  ATerm q_36 = NULL;
  q_36 = t;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL;
        t = term_j_8;
        t_36 = t;
        t = term_o_10;
        u_36 = t;
        t = term_w_11;
        t = z_4(t_36, u_36, t);
        s_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_36, term_m_11);
        t = geq_0_0(t);
        t = q_36;
        t = x_138(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = q_36;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,z_36 = NULL,a_37 = NULL;
  t = run_time_0_0(t);
  w_36 = t;
  t = term_w_9;
  t = whoami_0_0(t);
  x_36 = t;
  t = term_k_11;
  z_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), w_36), term_x_11), x_36);
  a_37 = t;
  t = SSL_printnl(z_36, a_37);
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_11), w_36), term_x_11), x_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm b_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  b_37 = t;
  t = SSL_exit(b_37);
  return(t);
}
static ATerm d_5 (ATerm e_70, ATerm f_70, ATerm g_70, ATerm t)
{
  ATerm c_37 = NULL;
  t = SSL_hashtable_put(g_70, e_70, f_70);
  c_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_37);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_67, ATerm t)
{
  ATerm l_37 = NULL;
  t = table_hashtable_0_0(t);
  l_37 = t;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        t = l_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            w_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_5(f_67, w_20, t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm d_21 = NULL;
          t = f_67;
          t = table_create_0_0(t);
          t = l_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              d_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_5(f_67, d_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_70, ATerm n_70, ATerm t)
{
  ATerm o_37 = NULL;
  t = SSL_hashtable_create(m_70, n_70);
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, o_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL,t_37 = NULL,u_37 = NULL;
  p_37 = t;
  t = term_c_12;
  t_37 = t;
  t = term_f_12;
  u_37 = t;
  t = p_37;
  t = new_hashtable_0_2(t_37, u_37, t);
  q_37 = t;
  t = p_37;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(p_37, q_37, r_37, t);
  t = p_37;
  return(t);
}
static ATerm w_4 (ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm v_37 = NULL;
  t = SSL_hashtable_remove(k_70, j_70);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_37);
  return(t);
}
static ATerm x_4 (ATerm o_70, ATerm t)
{
  ATerm w_37 = NULL;
  t = SSL_hashtable_destroy(o_70);
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_37);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm x_37 = NULL;
  t = SSL_table_hashtable();
  x_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, x_37);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
  y_37 = t;
  t = table_hashtable_0_0(t);
  z_37 = t;
  t = lookup_table_0_1(y_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(b_38, t);
  t = z_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(y_37, a_38, t);
  t = y_37;
  return(t);
}
ATerm fetch_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  static ATerm y_38 (ATerm t);
  static ATerm y_38 (ATerm t)
  {
    ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
    v_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_38 = ATgetFirst((ATermList) t);
        x_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm g_12 = t;
      int h_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_21 = NULL,p_21 = NULL,h_6 = NULL;
          t = SSLgetAnnotations(v_38);
          l_21 = t;
          t = w_38;
          t = r_122(t);
          p_21 = t;
          t = (ATerm) ATinsert(CheckATermList(x_38), p_21);
          h_6 = t;
          t = SSLsetAnnotations(h_6, l_21);
          LocalPopChoice(h_12);
        }
      else
        {
          t = g_12;
          {
            ATerm d_22 = NULL,k_22 = NULL,i_6 = NULL;
            t = SSLgetAnnotations(v_38);
            d_22 = t;
            t = x_38;
            t = y_38(t);
            k_22 = t;
            t = (ATerm) ATinsert(CheckATermList(k_22), w_38);
            i_6 = t;
            t = SSLsetAnnotations(i_6, d_22);
          }
        }
    }
    return(t);
  }
  t = y_38(t);
  return(t);
}
static ATerm e_5 (ATerm h_70, ATerm i_70, ATerm t)
{
  t = SSL_hashtable_get(i_70, h_70);
  return(t);
}
static ATerm z_4 (ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm b_39 = NULL;
  t = lookup_table_0_1(m_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      b_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(n_67, b_39, t);
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
  ATerm d_39 = NULL,e_39 = NULL;
  t = term_i_12;
  d_39 = t;
  t = term_w_9;
  e_39 = t;
  t = term_j_12;
  t = c_5(d_39, e_39, t);
  return(t);
}
static ATerm g_3 (ATerm t)
{
  t = term_k_12;
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
  ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL,i_39 = NULL;
  t = term_i_12;
  h_39 = t;
  t = term_w_9;
  i_39 = t;
  t = term_j_12;
  t = c_5(h_39, i_39, t);
  t = term_l_12;
  f_39 = t;
  t = term_w_9;
  g_39 = t;
  t = term_m_12;
  t = c_5(f_39, g_39, t);
  t = term_n_12;
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_3, f_3, g_3, t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = Option_3_0(h_3, i_3, j_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_92 (ATerm), ATerm u_92 (ATerm), ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,m_6 = NULL;
  o_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_39 = ATgetFirst((ATermList) t);
      l_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(o_39);
  j_39 = t;
  t = k_39;
  t = t_92(t);
  m_39 = t;
  t = l_39;
  t = u_92(t);
  n_39 = t;
  t = (ATerm) ATinsert(CheckATermList(n_39), m_39);
  m_6 = t;
  t = SSLsetAnnotations(m_6, j_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,y_39 = NULL,z_39 = NULL,q_6 = NULL;
  t_39 = t;
  {
    ATerm r_12 = t;
    int s_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_12;
        t = v_143(t);
        LocalPopChoice(s_12);
      }
    else
      {
        t = r_12;
      }
  }
  t = t_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_39 = ATgetFirst((ATermList) t);
      w_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_39);
  u_39 = t;
  t = term_q_9;
  z_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, v_39);
  t = c_5(z_39, v_39, t);
  t = w_39;
  {
    static ATerm j_40 (ATerm t);
    static ATerm j_40 (ATerm t)
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_40 = NULL;
              c_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_40;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = v_143(t);
              t = Cons_2_0(_id, j_40, t);
            }
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
          {
            ATerm f_40 = NULL,g_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                f_40 = ATgetFirst((ATermList) t);
                g_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(g_40), (ATerm) ATmakeAppl(sym_Undefined_1, f_40));
          }
        }
      return(t);
    }
    t = j_40(t);
  }
  y_39 = t;
  t = (ATerm) ATinsert(CheckATermList(y_39), (ATerm) ATmakeAppl(sym_Program_1, v_39));
  q_6 = t;
  t = SSLsetAnnotations(q_6, u_39);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  if(match_string(t, "--help"))
    {
      t = w_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = w_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = w_40;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL;
  t = term_y_12;
  x_40 = t;
  t = term_w_9;
  y_40 = t;
  t = term_z_12;
  t = c_5(x_40, y_40, t);
  t = term_a_13;
  return(t);
}
static ATerm p_3 (ATerm t)
{
  t = term_b_13;
  return(t);
}
static ATerm q_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm s_143 (ATerm), ATerm t_143 (ATerm), ATerm u_143 (ATerm), ATerm t)
{
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL,v_40 = NULL;
  q_40 = t;
  t = term_d_10;
  r_40 = t;
  t = term_c_13;
  t = lookup_table_0_1(r_40, t);
  v_40 = t;
  t = term_e_10;
  s_40 = t;
  t = (ATerm) ATempty;
  t_40 = t;
  t = v_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      u_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(s_40, t_40, u_40, t);
  t = q_40;
  {
    static ATerm k_3 (ATerm t);
    static ATerm k_3 (ATerm t)
    {
      ATerm d_13 = t;
      int e_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_143(t);
          LocalPopChoice(e_13);
        }
      else
        {
          t = d_13;
          {
            ATerm f_13 = t;
            int g_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_3, m_3, p_3, t);
                LocalPopChoice(g_13);
              }
            else
              {
                t = f_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_3, t);
  }
  {
    ATerm h_13 = t;
    int i_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_41 = NULL;
        j_41 = t;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_23 = NULL;
              t = j_41;
              {
                ATerm m_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_23 = NULL,f_23 = NULL;
                    t = term_j_8;
                    e_23 = t;
                    t = term_y_12;
                    f_23 = t;
                    t = term_p_13;
                    t = z_4(e_23, f_23, t);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = m_13;
                    t = fetch_1_0(q_3, t);
                  }
              }
              t = j_41;
              t = t_143(t);
              t = term_p_10;
              c_23 = t;
              t = SSL_exit(c_23);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
                t = term_j_8;
                k_23 = t;
                t = term_i_12;
                l_23 = t;
                t = term_q_13;
                t = z_4(k_23, l_23, t);
                t = j_41;
                t = u_143(t);
                t = term_p_10;
                j_23 = t;
                t = SSL_exit(j_23);
              }
            }
        }
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm r_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL;
              static ATerm r_3 (ATerm t);
              static ATerm r_3 (ATerm t)
              {
                ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,u_6 = NULL;
                p_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    o_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(p_41);
                n_41 = t;
                t = o_41;
                if(((o_40 != NULL) && (o_40 != t)))
                  _fail(t);
                else
                  o_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, o_41);
                u_6 = t;
                t = SSLsetAnnotations(u_6, n_41);
                return(t);
              }
              t = fetch_1_0(r_3, t);
              t = term_k_11;
              l_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_40)), term_y_13);
              m_41 = t;
              t = SSL_printnl(l_41, m_41);
              t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_40)), term_y_13));
              t = t_143(t);
              t = term_m_11;
              k_41 = t;
              t = SSL_exit(k_41);
              LocalPopChoice(t_13);
            }
          else
            {
              t = r_13;
            }
        }
      }
  }
  p_40 = t;
  t = term_d_10;
  t = table_destroy_0_0(t);
  t = p_40;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t)
{
  ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  t = parse_options_3_0(v_141, w_141, x_141, t);
  u_41 = t;
  t = term_z_13;
  t = table_create_0_0(t);
  t = term_z_13;
  v_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_13, term_a_14, u_41);
  t = lookup_table_0_1(v_41, t);
  y_41 = t;
  t = term_a_14;
  w_41 = t;
  t = y_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(w_41, u_41, x_41, t);
  t = u_41;
  t = y_141(t);
  {
    ATerm c_14 = t;
    int d_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_141(t);
        t = report_success_0_0(t);
        LocalPopChoice(d_14);
      }
    else
      {
        t = c_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_14 = t;
  int f_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(f_14);
    }
  else
    {
      t = e_14;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_3, v_3, w_3, t);
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  {
                    ATerm n_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = n_14;
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
static ATerm t_3 (ATerm t)
{
  t = input_1_0(x_3, t);
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_3 (ATerm t)
{
  ATerm c_42 = NULL,d_42 = NULL;
  t = term_p_8;
  c_42 = t;
  t = term_w_9;
  d_42 = t;
  t = term_p_14;
  t = c_5(c_42, d_42, t);
  t = term_q_14;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_r_14;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  t = output_1_0(y_3, t);
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = topdown_1_0(z_3, t);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm s_14 = t;
    int t_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(t_14);
      }
    else
      {
        t = s_14;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(s_3, default_system_usage_0_0, default_system_about_0_0, _id, t_3, t);
  return(t);
}
