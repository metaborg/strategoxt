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
ATerm term_b_14;
ATerm term_a_14;
ATerm term_z_13;
ATerm term_p_13;
ATerm term_o_13;
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
ATerm term_d_12;
ATerm term_c_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_k_11;
ATerm term_j_11;
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
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_v_5;
ATerm term_t_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_SVar_1, term_t_5);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeAppl(sym_Op_2, term_x_5, (ATerm) ATempty);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_q_6);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_x_5);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(sym_Call_2, term_t_6, (ATerm) ATempty);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_o_7);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(sym_Call_2, term_p_7, (ATerm) ATempty);
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
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_p_10);
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
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
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
  term_w_11 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_n_10);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeInt(75);
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
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_y_12);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym__2, term_j_8, term_i_12);
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
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
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm o_26 (ATerm r_16, ATerm s_16, ATerm t);
static ATerm p_26 (ATerm c_17, ATerm e_17, ATerm t);
static ATerm e_1 (ATerm t);
static ATerm h_1 (ATerm t);
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
static ATerm t_1 (ATerm t);
static ATerm v_1 (ATerm t);
ATerm output_1_0 (ATerm b_142 (ATerm), ATerm t);
static ATerm y_28 (ATerm r_28, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm q_4 (ATerm q_44, ATerm t);
static ATerm r_4 (ATerm n_58, ATerm o_58, ATerm t);
static ATerm s_4 (ATerm j_60, ATerm k_60, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm j_30 (ATerm i_29, ATerm t);
static ATerm k_30 (ATerm m_29, ATerm n_29, ATerm o_29, ATerm t);
static ATerm l_30 (ATerm w_29, ATerm x_29, ATerm y_29, ATerm t);
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
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
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
  static ATerm g_1 (ATerm t);
  static ATerm g_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,f_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_1 = ATgetFirst((ATermList) t);
        f_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_2 = t;
      int a_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_0 = NULL,h_0 = NULL;
          t = SSLgetAnnotations(c_1);
          e_0 = t;
          t = f_1;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(f_1), d_1);
          h_0 = t;
          t = SSLsetAnnotations(h_0, e_0);
          t = j_123(t);
          LocalPopChoice(a_4);
        }
      else
        {
          t = h_2;
          {
            ATerm s_1 = NULL,x_1 = NULL,i_0 = NULL;
            t = SSLgetAnnotations(c_1);
            s_1 = t;
            t = f_1;
            t = g_1(t);
            x_1 = t;
            t = (ATerm) ATinsert(CheckATermList(x_1), d_1);
            i_0 = t;
            t = SSLsetAnnotations(i_0, s_1);
          }
        }
    }
    return(t);
  }
  t = g_1(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm r_1 = NULL,u_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      r_1 = ATgetFirst((ATermList) t);
      u_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = u_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_1;
    }
  else
    {
      t = u_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_4 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm m_132 (ATerm), ATerm n_132 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,l_2 = NULL;
  j_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_2 = ATgetFirst((ATermList) t);
      {
        ATerm d_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = l_2;
  t = m_132(t);
  t = j_2;
  t = last_0_0(t);
  t = n_132(t);
  t = j_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_4 = ATgetFirst((ATermList) t);
      k_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = k_2;
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
static ATerm k_0 (ATerm t)
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
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm r_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL;
  v_13 = t;
  if(match_cons(t, sym_Real_1))
    {
      w_13 = ATgetArgument(t, 0);
      {
        ATerm i_2 = NULL;
        t = SSL_string_to_real(w_13);
        i_2 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, i_2);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          w_13 = ATgetArgument(t, 0);
          {
            ATerm s_2 = NULL;
            t = SSL_string_to_int(w_13);
            s_2 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, s_2);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              w_13 = ATgetArgument(t, 0);
              x_13 = ATgetArgument(t, 1);
              u_13 = ATgetArgument(t, 2);
              t = SSL_is_string(u_13);
              t = (ATerm) ATmakeAppl(sym_Con_3, w_13, x_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_13), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  w_13 = ATgetArgument(t, 0);
                  x_13 = ATgetArgument(t, 1);
                  u_13 = ATgetArgument(t, 2);
                  {
                    ATerm n_3 = NULL;
                    t = w_13;
                    {
                      ATerm g_4 = t;
                      int h_4 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm o_3 = NULL;
                          t = SSL_explode_string(w_13);
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
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, n_3, x_13, u_13);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      w_13 = ATgetArgument(t, 0);
                      x_13 = ATgetArgument(t, 1);
                      {
                        ATerm c_4 = NULL;
                        t = w_13;
                        {
                          ATerm i_4 = t;
                          int j_4 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_4 = NULL;
                              t = SSL_explode_string(w_13);
                              t = unquote_chars_2_0(k_0, m_0, t);
                              e_4 = t;
                              t = SSL_implode_string(e_4);
                              LocalPopChoice(j_4);
                            }
                          else
                            {
                              t = i_4;
                            }
                        }
                        c_4 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, c_4, (ATerm)ATempty, x_13);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          w_13 = ATgetArgument(t, 0);
                          {
                            ATerm i_5 = NULL;
                            t = w_13;
                            {
                              ATerm k_4 = t;
                              int l_4 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm n_5 = NULL;
                                  t = SSL_explode_string(w_13);
                                  t = unquote_chars_2_0(s_0, b_1, t);
                                  n_5 = t;
                                  t = SSL_implode_string(n_5);
                                  LocalPopChoice(l_4);
                                }
                              else
                                {
                                  t = k_4;
                                }
                            }
                            i_5 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, i_5, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              w_13 = ATgetArgument(t, 0);
                              {
                                ATerm a_6 = NULL,g_6 = NULL,l_6 = NULL,n_0 = NULL;
                                t = SSLgetAnnotations(v_13);
                                a_6 = t;
                                t = SSL_explode_string(w_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm v_4 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(v_4) != AT_INT) || (ATgetInt((ATermInt) v_4) != 39)))
                                      _fail(t);
                                    g_6 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(g_6);
                                l_6 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, l_6);
                                n_0 = t;
                                t = SSLsetAnnotations(n_0, a_6);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  w_13 = ATgetArgument(t, 0);
                                  x_13 = ATgetArgument(t, 1);
                                  u_13 = ATgetArgument(t, 2);
                                  r_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm d_7 = NULL,t_7 = NULL,u_7 = NULL,q_0 = NULL;
                                    t = SSLgetAnnotations(v_13);
                                    d_7 = t;
                                    t = SSL_explode_string(w_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm b_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(b_5) != AT_INT) || (ATgetInt((ATermInt) b_5) != 39)))
                                          _fail(t);
                                        t_7 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(t_7);
                                    u_7 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, u_7, x_13, u_13, r_13);
                                    q_0 = t;
                                    t = SSLsetAnnotations(q_0, d_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      w_13 = ATgetArgument(t, 0);
                                      x_13 = ATgetArgument(t, 1);
                                      u_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm v_8 = NULL,e_9 = NULL,f_9 = NULL,t_0 = NULL;
                                        t = SSLgetAnnotations(v_13);
                                        v_8 = t;
                                        t = SSL_explode_string(w_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm f_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(f_5) != AT_INT) || (ATgetInt((ATermInt) f_5) != 39)))
                                              _fail(t);
                                            e_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(e_9);
                                        f_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, f_9, x_13, u_13);
                                        t_0 = t;
                                        t = SSLsetAnnotations(t_0, v_8);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          w_13 = ATgetArgument(t, 0);
                                          x_13 = ATgetArgument(t, 1);
                                          u_13 = ATgetArgument(t, 2);
                                          r_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm o_10 = NULL,z_10 = NULL,a_11 = NULL,u_0 = NULL;
                                            t = SSLgetAnnotations(v_13);
                                            o_10 = t;
                                            t = SSL_explode_string(w_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm g_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(g_5) != AT_INT) || (ATgetInt((ATermInt) g_5) != 39)))
                                                  _fail(t);
                                                z_10 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(z_10);
                                            a_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, a_11, x_13, u_13, r_13);
                                            u_0 = t;
                                            t = SSLsetAnnotations(u_0, o_10);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              w_13 = ATgetArgument(t, 0);
                                              x_13 = ATgetArgument(t, 1);
                                              u_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm z_11 = NULL,e_12 = NULL,h_12 = NULL,v_0 = NULL;
                                                t = SSLgetAnnotations(v_13);
                                                z_11 = t;
                                                t = SSL_explode_string(w_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm h_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(h_5) != AT_INT) || (ATgetInt((ATermInt) h_5) != 39)))
                                                      _fail(t);
                                                    e_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(e_12);
                                                h_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, h_12, x_13, u_13);
                                                v_0 = t;
                                                t = SSLsetAnnotations(v_0, z_11);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  w_13 = ATgetArgument(t, 0);
                                                  x_13 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm m_13 = NULL,s_13 = NULL,t_13 = NULL,w_0 = NULL;
                                                    t = SSLgetAnnotations(v_13);
                                                    m_13 = t;
                                                    t = SSL_explode_string(w_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm k_5 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(k_5) != AT_INT) || (ATgetInt((ATermInt) k_5) != 39)))
                                                          _fail(t);
                                                        s_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(s_13);
                                                    t_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, t_13, x_13);
                                                    w_0 = t;
                                                    t = SSLsetAnnotations(w_0, m_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      w_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm i_14 = NULL,m_14 = NULL,n_14 = NULL,x_0 = NULL;
                                                        t = SSLgetAnnotations(v_13);
                                                        i_14 = t;
                                                        t = SSL_explode_string(w_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm l_5 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(l_5) != AT_INT) || (ATgetInt((ATermInt) l_5) != 39)))
                                                              _fail(t);
                                                            m_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(m_14);
                                                        n_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, n_14);
                                                        x_0 = t;
                                                        t = SSLsetAnnotations(x_0, i_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          w_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm x_14 = NULL,c_15 = NULL,f_15 = NULL,y_0 = NULL;
                                                            t = SSLgetAnnotations(v_13);
                                                            x_14 = t;
                                                            t = SSL_explode_string(w_13);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm p_5 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(p_5) != AT_INT) || (ATgetInt((ATermInt) p_5) != 39)))
                                                                  _fail(t);
                                                                c_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(c_15);
                                                            f_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, f_15);
                                                            y_0 = t;
                                                            t = SSLsetAnnotations(y_0, x_14);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              w_13 = ATgetArgument(t, 0);
                                                              x_13 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm p_15 = NULL,s_15 = NULL,t_15 = NULL,z_0 = NULL;
                                                                t = SSLgetAnnotations(v_13);
                                                                p_15 = t;
                                                                t = SSL_explode_string(w_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm q_5 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(q_5) != AT_INT) || (ATgetInt((ATermInt) q_5) != 39)))
                                                                      _fail(t);
                                                                    s_15 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(s_15);
                                                                t_15 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, t_15, x_13);
                                                                z_0 = t;
                                                                t = SSLsetAnnotations(z_0, p_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm b_16 = NULL,e_16 = NULL,f_16 = NULL,a_1 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  w_13 = ATgetArgument(t, 0);
                                                                  x_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(v_13);
                                                              b_16 = t;
                                                              t = SSL_explode_string(w_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm r_5 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(r_5) != AT_INT) || (ATgetInt((ATermInt) r_5) != 39)))
                                                                    _fail(t);
                                                                  e_16 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(e_16);
                                                              f_16 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, f_16, x_13);
                                                              a_1 = t;
                                                              t = SSLsetAnnotations(a_1, b_16);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm o_26 (ATerm r_16, ATerm s_16, ATerm t)
{
  t = r_16;
  {
    ATerm s_5 = t;
    if((PushChoice() == 0))
      {
        ATerm w_16 = NULL,x_16 = NULL,a_17 = NULL,b_17 = NULL,y_4 = NULL;
        b_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_16 = ATgetFirst((ATermList) t);
            a_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(b_17);
        w_16 = t;
        t = a_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(a_17), x_16);
        y_4 = t;
        t = SSLsetAnnotations(y_4, w_16);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_5;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_t_5, r_16);
  return(t);
}
static ATerm p_26 (ATerm c_17, ATerm e_17, ATerm t)
{
  t = c_17;
  {
    ATerm u_5 = t;
    if((PushChoice() == 0))
      {
        ATerm g_17 = NULL,k_17 = NULL,l_17 = NULL,o_17 = NULL,j_5 = NULL;
        o_17 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            k_17 = ATgetFirst((ATermList) t);
            l_17 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_17);
        g_17 = t;
        t = l_17;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(l_17), k_17);
        j_5 = t;
        t = SSLsetAnnotations(j_5, g_17);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = u_5;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, c_17);
  return(t);
}
static ATerm e_1 (ATerm t)
{
  t = term_y_5;
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_16 = NULL;
  o_18 = t;
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm b_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) b_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_6 = ATgetArgument(t, 1);
        if(((ATgetType(d_6) == AT_LIST) && !(ATisEmpty(d_6))))
          {
            p_18 = ATgetFirst((ATermList) d_6);
            {
              ATerm e_6 = (ATerm) ATgetNext((ATermList) d_6);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(o_18);
  if(match_cons(t, sym__2))
    {
      ATerm i_6 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) i_6) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm j_6 = ATgetArgument(t, 1);
        if(((ATgetType(j_6) == AT_LIST) && !(ATisEmpty(j_6))))
          {
            ATerm m_6 = ATgetFirst((ATermList) j_6);
            ATerm n_6 = (ATerm) ATgetNext((ATermList) j_6);
            if(((ATgetType(n_6) == AT_LIST) && !(ATisEmpty(n_6))))
              {
                q_16 = ATgetFirst((ATermList) n_6);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, q_16), p_18));
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm n_19 = NULL,o_19 = NULL;
  if(match_cons(t, sym__2))
    {
      n_19 = ATgetArgument(t, 0);
      o_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, o_19), n_19));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_y_5;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm q_19 = NULL,t_19 = NULL;
  if(match_cons(t, sym__2))
    {
      q_19 = ATgetArgument(t, 0);
      t_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_q_6, (ATerm) ATinsert(ATinsert(ATempty, t_19), q_19));
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL;
  if(match_cons(t, sym__2))
    {
      j_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, k_20), j_20));
  return(t);
}
static ATerm o_1 (ATerm t)
{
  t = term_u_6;
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm o_20 = NULL,p_20 = NULL;
  if(match_cons(t, sym__2))
    {
      o_20 = ATgetArgument(t, 0);
      p_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_s_6, (ATerm) ATinsert(ATinsert(ATempty, p_20), o_20));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL,v_17 = NULL,z_17 = NULL,a_18 = NULL;
  v_17 = t;
  if(match_cons(t, sym_Anno_2))
    {
      z_17 = ATgetArgument(t, 0);
      a_18 = ATgetArgument(t, 1);
      {
        ATerm m_18 = NULL;
        t = a_18;
        t = foldr_2_0(e_1, h_1, t);
        m_18 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, z_17, m_18);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          z_17 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, z_17, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              z_17 = ATgetArgument(t, 0);
              {
                ATerm d_17 = NULL;
                t = z_17;
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
                                  t = term_z_6;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_a_7;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_b_7;
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
                        ATerm i_17 = NULL;
                        t = SSL_explode_string(z_17);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm c_7 = ATgetFirst((ATermList) t);
                            if(((ATgetType(c_7) != AT_INT) || (ATgetInt((ATermInt) c_7) != 39)))
                              _fail(t);
                            {
                              ATerm e_7 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
                                {
                                  i_17 = ATgetFirst((ATermList) e_7);
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
                        t = i_17;
                      }
                    }
                }
                d_17 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, d_17);
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
                      z_17 = ATgetArgument(t, 0);
                      {
                        ATerm k_7 = ATgetArgument(t, 1);
                      }
                      u_17 = ATgetArgument(t, 2);
                      q_17 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_7);
                  t = (ATerm) ATmakeAppl(sym_Con_3, z_17, u_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_17), (ATerm) ATempty));
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
                            z_17 = ATgetArgument(t, 0);
                            {
                              ATerm n_7 = ATgetArgument(t, 1);
                            }
                            u_17 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(m_7);
                        t = (ATerm) ATmakeAppl(sym_Con_3, z_17, u_17, term_q_7);
                      }
                    else
                      {
                        t = l_7;
                        if(match_cons(t, sym_Con1_2))
                          {
                            z_17 = ATgetArgument(t, 0);
                            a_18 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, z_17, a_18, term_q_7);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                z_17 = ATgetArgument(t, 0);
                                a_18 = ATgetArgument(t, 1);
                                {
                                  static ATerm i_1 (ATerm t);
                                  static ATerm i_1 (ATerm t)
                                  {
                                    t = a_18;
                                    return(t);
                                  }
                                  t = z_17;
                                  t = foldr_2_0(i_1, j_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    z_17 = ATgetArgument(t, 0);
                                    t = z_17;
                                    t = foldr_2_0(k_1, l_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        z_17 = ATgetArgument(t, 0);
                                        t = z_17;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            r_17 = ATgetFirst((ATermList) t);
                                            s_17 = (ATerm) ATgetNext((ATermList) t);
                                            t = s_17;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm r_7 = t;
                                                int s_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = o_26(z_17, v_17, t);
                                                    LocalPopChoice(s_7);
                                                  }
                                                else
                                                  {
                                                    t = r_7;
                                                    t = r_17;
                                                  }
                                              }
                                            else
                                              {
                                                t = o_26(z_17, v_17, t);
                                              }
                                          }
                                        else
                                          {
                                            t = o_26(z_17, v_17, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            z_17 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, z_17));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                z_17 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, z_17));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    z_17 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, z_17));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        z_17 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, z_17));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            z_17 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_17), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                z_17 = ATgetArgument(t, 0);
                                                                a_18 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, z_17), a_18);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    z_17 = ATgetArgument(t, 0);
                                                                    a_18 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm m_1 (ATerm t);
                                                                      static ATerm m_1 (ATerm t)
                                                                      {
                                                                        t = a_18;
                                                                        return(t);
                                                                      }
                                                                      t = z_17;
                                                                      t = foldr_2_0(m_1, n_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        z_17 = ATgetArgument(t, 0);
                                                                        t = z_17;
                                                                        t = foldr_2_0(o_1, p_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            z_17 = ATgetArgument(t, 0);
                                                                            a_18 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_v_5, (ATerm) ATinsert(CheckATermList(a_18), z_17));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                z_17 = ATgetArgument(t, 0);
                                                                                t = z_17;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    r_17 = ATgetFirst((ATermList) t);
                                                                                    s_17 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = s_17;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm v_7 = t;
                                                                                        int w_7 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = p_26(z_17, v_17, t);
                                                                                            LocalPopChoice(w_7);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = v_7;
                                                                                            t = r_17;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = p_26(z_17, v_17, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = p_26(z_17, v_17, t);
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
                                                                                        z_17 = ATgetArgument(t, 0);
                                                                                        a_18 = ATgetArgument(t, 1);
                                                                                        t = a_18;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            t_17 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_z_7, (ATerm) ATinsert(ATinsert(ATempty, t_17), z_17));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            z_17 = ATgetArgument(t, 0);
                                                                                            t = z_17;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                z_17 = ATgetArgument(t, 0);
                                                                                                a_18 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, z_17, a_18, term_a_8);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    z_17 = ATgetArgument(t, 0);
                                                                                                    a_18 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, z_17, a_18, term_a_8);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        z_17 = ATgetArgument(t, 0);
                                                                                                        a_18 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, z_17, (ATerm)ATempty, a_18);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            z_17 = ATgetArgument(t, 0);
                                                                                                            a_18 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, a_18, z_17);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                z_17 = ATgetArgument(t, 0);
                                                                                                                a_18 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, z_17, a_18, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    z_17 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, z_17, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        z_17 = ATgetArgument(t, 0);
                                                                                                                        a_18 = ATgetArgument(t, 1);
                                                                                                                        u_17 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, z_17, a_18, (ATerm)ATempty, u_17);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            z_17 = ATgetArgument(t, 0);
                                                                                                                            a_18 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, z_17, (ATerm)ATempty, (ATerm)ATempty, a_18);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                z_17 = ATgetArgument(t, 0);
                                                                                                                                a_18 = ATgetArgument(t, 1);
                                                                                                                                u_17 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, z_17, a_18, (ATerm)ATempty, u_17);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    z_17 = ATgetArgument(t, 0);
                                                                                                                                    a_18 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, z_17, (ATerm)ATempty, (ATerm)ATempty, a_18);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        z_17 = ATgetArgument(t, 0);
                                                                                                                                        a_18 = ATgetArgument(t, 1);
                                                                                                                                        u_17 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, z_17, a_18, (ATerm)ATempty, u_17);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            z_17 = ATgetArgument(t, 0);
                                                                                                                                            a_18 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, z_17, (ATerm)ATempty, (ATerm)ATempty, a_18);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm b_8 = ATgetArgument(t, 0);
                                                                                                                                                a_18 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, a_18);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
  static ATerm q_26 (ATerm t);
  static ATerm q_26 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_114(t);
        t = q_26(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = z_114(t);
      }
    return(t);
  }
  t = q_26(t);
  return(t);
}
ATerm topdown_1_0 (ATerm y_115 (ATerm), ATerm t)
{
  static ATerm q_1 (ATerm t);
  static ATerm q_1 (ATerm t)
  {
    t = topdown_1_0(y_115, t);
    return(t);
  }
  t = y_115(t);
  t = SRTS_all(q_1, t);
  return(t);
}
static ATerm m_4 (ATerm h_60, ATerm i_60, ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_fputc(h_60, i_60);
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
static ATerm n_4 (ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm u_26 = NULL;
  t = SSL_write_term_to_stream_text(o_44, p_44);
  u_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_26);
  return(t);
}
static ATerm p_4 (ATerm b_122 (ATerm), ATerm w_302, ATerm u_44, ATerm t)
{
  ATerm w_26 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_302, term_e_8);
  t = t_4(t);
  w_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_26, u_44);
  t = b_122(t);
  t = fclose_0_0(t);
  t = u_44;
  return(t);
}
static ATerm o_4 (ATerm k_44, ATerm l_44, ATerm t)
{
  ATerm x_26 = NULL;
  t = SSL_write_term_to_stream_baf(k_44, l_44);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_26);
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm o_27 = NULL,p_27 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm f_8 = ATgetArgument(t, 0);
      if(match_cons(f_8, sym_Stream_1))
        {
          o_27 = ATgetArgument(f_8, 0);
        }
      else
        _fail(t);
      p_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_4(o_27, p_27, t);
  return(t);
}
static ATerm v_1 (ATerm t)
{
  ATerm q_27 = NULL,x_27 = NULL,y_27 = NULL,b_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm g_8 = ATgetArgument(t, 0);
      if(match_cons(g_8, sym_Stream_1))
        {
          b_28 = ATgetArgument(g_8, 0);
        }
      else
        _fail(t);
      c_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_4(b_28, c_28, t);
  q_27 = t;
  t = term_a_7;
  x_27 = t;
  t = q_27;
  if(match_cons(t, sym_Stream_1))
    {
      y_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_a_7, q_27);
  t = m_4(x_27, y_27, t);
  return(t);
}
ATerm output_1_0 (ATerm b_142 (ATerm), ATerm t)
{
  ATerm y_26 = NULL,d_27 = NULL;
  t = b_142(t);
  d_27 = t;
  {
    ATerm h_8 = t;
    int i_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_27 = NULL,j_27 = NULL;
        t = term_j_8;
        f_27 = t;
        t = term_k_8;
        j_27 = t;
        t = term_l_8;
        t = z_4(f_27, j_27, t);
        LocalPopChoice(i_8);
      }
    else
      {
        t = h_8;
        t = term_m_8;
      }
  }
  y_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, d_27);
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_27 = NULL,n_27 = NULL;
        t = term_j_8;
        m_27 = t;
        t = term_p_8;
        n_27 = t;
        t = term_q_8;
        t = z_4(m_27, n_27, t);
        t = (ATerm) ATmakeAppl(sym__2, y_26, d_27);
        LocalPopChoice(o_8);
        if(match_cons(t, sym__2))
          {
            ATerm r_8 = ATgetArgument(t, 0);
            ATerm s_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(t_1, y_26, d_27, t);
      }
    else
      {
        t = n_8;
        if(match_cons(t, sym__2))
          {
            ATerm t_8 = ATgetArgument(t, 0);
            ATerm u_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_4(v_1, y_26, d_27, t);
      }
  }
  return(t);
}
static ATerm y_28 (ATerm r_28, ATerm t)
{
  t = SSL_fclose(r_28);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm v_28 = NULL,w_28 = NULL;
  w_28 = t;
  if(match_cons(t, sym_Stream_1))
    {
      v_28 = ATgetArgument(t, 0);
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(v_28);
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            t = y_28(w_28, t);
          }
      }
    }
  else
    {
      t = y_28(w_28, t);
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
  ATerm z_28 = NULL;
  t = SSL_fopen(j_60, k_60);
  z_28 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_28);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm a_29 = NULL;
  t = SSL_stdin_stream();
  a_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_29);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm b_29 = NULL;
  t = SSL_stdout_stream();
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_29);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm c_29 = NULL;
  t = SSL_stderr_stream();
  c_29 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_29);
  return(t);
}
static ATerm j_30 (ATerm i_29, ATerm t)
{
  ATerm j_29 = NULL;
  t = SSL_explode_term(i_29);
  if(match_cons(t, sym__2))
    {
      ATerm y_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm z_8 = ATgetArgument(t, 1);
        if(((ATgetType(z_8) == AT_LIST) && !(ATisEmpty(z_8))))
          {
            j_29 = ATgetFirst((ATermList) z_8);
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
  t = j_29;
  if(match_cons(t, sym_stderr_0))
    {
      t = j_29;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = j_29;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = j_29;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm k_30 (ATerm m_29, ATerm n_29, ATerm o_29, ATerm t)
{
  ATerm p_29 = NULL,q_29 = NULL,r_29 = NULL,u_29 = NULL,m_5 = NULL;
  t = SSLgetAnnotations(o_29);
  r_29 = t;
  t = m_29;
  if(match_cons(t, sym_Path_1))
    {
      u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_29, n_29);
  m_5 = t;
  t = SSLsetAnnotations(m_5, r_29);
  if(match_cons(t, sym__2))
    {
      p_29 = ATgetArgument(t, 0);
      q_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(p_29, q_29, t);
  return(t);
}
static ATerm l_30 (ATerm w_29, ATerm x_29, ATerm y_29, ATerm t)
{
  ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL,e_30 = NULL,o_5 = NULL;
  t = SSLgetAnnotations(y_29);
  b_30 = t;
  t = SSL_is_string(w_29);
  e_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, e_30, x_29);
  o_5 = t;
  t = SSLsetAnnotations(o_5, b_30);
  if(match_cons(t, sym__2))
    {
      z_29 = ATgetArgument(t, 0);
      a_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_4(z_29, a_30, t);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  if(match_cons(t, sym__2))
    {
      h_30 = ATgetArgument(t, 0);
      i_30 = ATgetArgument(t, 1);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_30(g_30, t);
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm d_9 = t;
              int g_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_30(h_30, i_30, g_30, t);
                  LocalPopChoice(g_9);
                }
              else
                {
                  t = d_9;
                  t = l_30(h_30, i_30, g_30, t);
                }
            }
          }
      }
    }
  else
    {
      t = j_30(g_30, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm n_30 = NULL,o_30 = NULL,p_30 = NULL,u_30 = NULL;
  u_30 = t;
  {
    ATerm h_9 = t;
    int i_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, u_30, term_j_9);
        t = t_4(t);
        LocalPopChoice(i_9);
      }
    else
      {
        t = h_9;
        {
          ATerm e_18 = NULL,f_18 = NULL;
          t = term_k_9;
          f_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_k_9, u_30);
          t = r_4(f_18, u_30, t);
          e_18 = t;
          t = SSL_perror(e_18);
          _fail(t);
        }
      }
  }
  o_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = q_4(p_30, t);
  n_30 = t;
  t = o_30;
  t = fclose_0_0(t);
  t = n_30;
  return(t);
}
ATerm input_1_0 (ATerm c_142 (ATerm), ATerm t)
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_30 = NULL,y_30 = NULL;
      t = term_j_8;
      x_30 = t;
      t = term_n_9;
      y_30 = t;
      t = term_o_9;
      t = z_4(x_30, y_30, t);
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
  ATerm z_30 = NULL,a_31 = NULL;
  t = term_j_8;
  z_30 = t;
  t = term_q_9;
  a_31 = t;
  t = term_r_9;
  t = z_4(z_30, a_31, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_31;
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
            t = c_31;
          }
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        t = (ATerm) ATinsert(ATempty, c_31);
      }
  }
  d_31 = t;
  t = term_m_8;
  e_31 = t;
  t = SSL_printnl(e_31, d_31);
  t = c_31;
  return(t);
}
ATerm map_1_0 (ATerm j_122 (ATerm), ATerm t)
{
  static ATerm w_31 (ATerm t);
  static ATerm w_31 (ATerm t)
  {
    ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL;
    t_31 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = t_31;
      }
    else
      {
        ATerm s_18 = NULL,x_18 = NULL,y_18 = NULL,w_5 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            u_31 = ATgetFirst((ATermList) t);
            v_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_31);
        s_18 = t;
        t = u_31;
        t = j_122(t);
        x_18 = t;
        t = v_31;
        t = w_31(t);
        y_18 = t;
        t = (ATerm) ATinsert(CheckATermList(y_18), x_18);
        w_5 = t;
        t = SSLsetAnnotations(w_5, s_18);
      }
    return(t);
  }
  t = w_31(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm z_31 = NULL,a_32 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_31 = ATgetFirst((ATermList) t);
      a_32 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm e_32 = NULL,f_32 = NULL;
        static ATerm w_1 (ATerm t);
        static ATerm w_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(e_32)), not_null(f_32));
          return(t);
        }
        t = a_32;
        t = r_0(t);
        if(((e_32 != NULL) && (e_32 != t)))
          _fail(t);
        else
          e_32 = t;
        t = z_31;
        t = p_0(t);
        if(((f_32 != NULL) && (f_32 != t)))
          _fail(t);
        else
          f_32 = t;
        t = a_32;
        t = reverse_acc_2_0(p_0, w_1, t);
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
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL,z_5 = NULL;
  p_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_32);
  n_32 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_32);
  z_5 = t;
  t = SSLsetAnnotations(z_5, n_32);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm t_32 = NULL;
  t_32 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, t_32), term_x_9);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm a_144 (ATerm), ATerm b_144 (ATerm), ATerm t)
{
  ATerm j_32 = NULL,k_32 = NULL;
  ATerm y_9 = t;
  int z_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_32 = NULL,m_32 = NULL;
      t = term_j_8;
      l_32 = t;
      t = term_q_9;
      m_32 = t;
      t = term_r_9;
      t = z_4(l_32, m_32, t);
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
  j_32 = t;
  t = term_e_10;
  k_32 = t;
  t = term_f_10;
  t = z_4(j_32, k_32, t);
  t = reverse_acc_2_0(_id, z_1, t);
  t = map_1_0(a_2, t);
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_32 = NULL;
        t = b_144(t);
        u_32 = t;
        t = (ATerm) ATinsert(CheckATermList(u_32), term_i_10);
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
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL,c_6 = NULL;
  c_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_33);
  a_33 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, b_33);
  c_6 = t;
  t = SSLsetAnnotations(c_6, a_33);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm x_32 = NULL;
  x_32 = t;
  {
    ATerm j_10 = t;
    int k_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_32 = NULL,z_32 = NULL;
        t = term_j_8;
        y_32 = t;
        t = term_q_9;
        z_32 = t;
        t = term_r_9;
        t = z_4(y_32, z_32, t);
        LocalPopChoice(k_10);
      }
    else
      {
        t = j_10;
        t = fetch_1_0(b_2, t);
      }
  }
  t = x_32;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  if(match_string(t, "-k"))
    {
      t = e_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = e_33;
    }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  t = SSL_string_to_int(f_33);
  g_33 = t;
  t = term_l_10;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_l_10, g_33);
  t = c_5(h_33, g_33, t);
  t = f_33;
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = term_m_10;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(c_2, d_2, e_2, t);
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm j_33 = NULL;
  j_33 = t;
  if(match_string(t, "-S"))
    {
      t = j_33;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = j_33;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm k_33 = NULL,l_33 = NULL;
  t = term_n_10;
  k_33 = t;
  t = term_p_10;
  l_33 = t;
  t = term_q_10;
  t = c_5(k_33, l_33, t);
  t = term_r_10;
  return(t);
}
static ATerm m_2 (ATerm t)
{
  t = term_s_10;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm p_2 (ATerm t)
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  t = SSL_string_to_int(m_33);
  n_33 = t;
  t = term_n_10;
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_10, n_33);
  t = c_5(o_33, n_33, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, m_33);
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
  ATerm p_33 = NULL,q_33 = NULL;
  t = term_u_10;
  p_33 = t;
  t = term_w_9;
  q_33 = t;
  t = term_v_10;
  t = c_5(p_33, q_33, t);
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
      t = Option_3_0(f_2, g_2, m_2, t);
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
            t = ArgOption_3_0(o_2, p_2, q_2, t);
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
  ATerm r_33 = NULL,s_33 = NULL;
  t = term_j_8;
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_79, e_79);
  t = lookup_table_0_1(r_33, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      s_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(d_79, e_79, s_33, t);
  t = (ATerm) ATmakeAppl(sym__3, term_j_8, d_79, e_79);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
      t = term_w_9;
      t = g_0(t);
      y_33 = t;
      t = term_d_10;
      z_33 = t;
      t = term_e_10;
      a_34 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, y_33);
      t = a_5(z_33, a_34, y_33, t);
      _fail(t);
    }
  else
    {
      ATerm d_34 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_33 = ATgetFirst((ATermList) t);
          x_33 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_33;
      t = d_0(t);
      t = term_w_9;
      t = f_0(t);
      d_34 = t;
      t = (ATerm) ATinsert(CheckATermList(x_33), d_34);
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm f_34 = NULL;
  f_34 = t;
  if(match_string(t, "-o"))
    {
      t = f_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_34;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm g_34 = NULL,h_34 = NULL;
  g_34 = t;
  t = term_k_8;
  h_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_8, g_34);
  t = c_5(h_34, g_34, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_34);
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
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
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
  k_34 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_65, u_65, (ATerm) ATinsert(CheckATermList(k_34), s_65));
  t = lookup_table_0_1(t_65, t);
  n_34 = t;
  t = (ATerm) ATinsert(CheckATermList(k_34), s_65);
  l_34 = t;
  t = n_34;
  if(match_cons(t, sym_Hashtable_1))
    {
      m_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(u_65, l_34, m_34, t);
  t = j_34;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_34 = NULL,z_34 = NULL,a_35 = NULL;
      t = term_w_9;
      t = o_0(t);
      y_34 = t;
      t = term_d_10;
      z_34 = t;
      t = term_e_10;
      a_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_d_10, term_e_10, y_34);
      t = a_5(z_34, a_35, y_34, t);
      _fail(t);
    }
  else
    {
      ATerm e_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_34 = ATgetFirst((ATermList) t);
          v_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_34;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_34 = ATgetFirst((ATermList) t);
          x_34 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = u_34;
      t = j_0(t);
      t = w_34;
      t = l_0(t);
      e_35 = t;
      t = (ATerm) ATinsert(CheckATermList(x_34), e_35);
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm g_35 = NULL;
  g_35 = t;
  if(match_string(t, "-i"))
    {
      t = g_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_35;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_35 = NULL,i_35 = NULL;
  h_35 = t;
  t = term_n_9;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_9, h_35);
  t = c_5(i_35, h_35, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_35);
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
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL,m_35 = NULL;
  t = report_run_time_0_0(t);
  t = term_w_9;
  t = whoami_0_0(t);
  j_35 = t;
  t = term_k_11;
  l_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_11), j_35);
  m_35 = t;
  t = SSL_printnl(l_35, m_35);
  t = term_m_11;
  k_35 = t;
  t = SSL_exit(k_35);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm n_35 = NULL,o_35 = NULL;
  t = term_j_8;
  n_35 = t;
  t = term_q_9;
  o_35 = t;
  t = term_r_9;
  t = z_4(n_35, o_35, t);
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
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL;
  q_35 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = q_35;
      t = g_129(t);
    }
  else
    {
      ATerm v_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_35 = ATgetFirst((ATermList) t);
          s_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_35;
      t = foldr_2_0(g_129, h_129, t);
      v_35 = t;
      t = (ATerm) ATmakeAppl(sym__2, r_35, v_35);
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
  ATerm s_19 = NULL,w_19 = NULL;
  if(match_cons(t, sym__2))
    {
      s_19 = ATgetArgument(t, 0);
      w_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(s_19, w_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_35 = NULL,f_19 = NULL,h_19 = NULL;
  t = times_0_0(t);
  h_19 = t;
  t = SSL_explode_term(h_19);
  if(match_cons(t, sym__2))
    {
      ATerm p_11 = ATgetArgument(t, 0);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_19;
  t = foldr_2_0(b_3, c_3, t);
  y_35 = t;
  t = SSL_TicksToSeconds(y_35);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL;
  j_36 = t;
  if(match_cons(t, sym__2))
    {
      k_36 = ATgetArgument(t, 0);
      l_36 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_36;
        if((k_36 != t))
          {
            _fail(t);
          }
        t = j_36;
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
        {
          ATerm s_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_36, l_36);
              LocalPopChoice(t_11);
            }
          else
            {
              t = s_11;
              t = SSL_gtr(k_36, l_36);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, k_36, l_36);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_138 (ATerm), ATerm t)
{
  ATerm p_36 = NULL;
  p_36 = t;
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
        t = term_j_8;
        s_36 = t;
        t = term_n_10;
        t_36 = t;
        t = term_w_11;
        t = z_4(s_36, t_36, t);
        r_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_36, term_m_11);
        t = geq_0_0(t);
        t = p_36;
        t = x_138(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        t = p_36;
      }
  }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,y_36 = NULL,z_36 = NULL;
  t = run_time_0_0(t);
  v_36 = t;
  t = term_w_9;
  t = whoami_0_0(t);
  w_36 = t;
  t = term_k_11;
  y_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_11), v_36), term_x_11), w_36);
  z_36 = t;
  t = SSL_printnl(y_36, z_36);
  t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_11), v_36), term_x_11), w_36));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(d_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm a_37 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_10;
  a_37 = t;
  t = SSL_exit(a_37);
  return(t);
}
static ATerm d_5 (ATerm e_70, ATerm f_70, ATerm g_70, ATerm t)
{
  ATerm b_37 = NULL;
  t = SSL_hashtable_put(g_70, e_70, f_70);
  b_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_37);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_67, ATerm t)
{
  ATerm k_37 = NULL;
  t = table_hashtable_0_0(t);
  k_37 = t;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_20 = NULL;
        t = k_37;
        if(match_cons(t, sym_Hashtable_1))
          {
            y_20 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = e_5(f_67, y_20, t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm e_21 = NULL;
          t = f_67;
          t = table_create_0_0(t);
          t = k_37;
          if(match_cons(t, sym_Hashtable_1))
            {
              e_21 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_5(f_67, e_21, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_70, ATerm n_70, ATerm t)
{
  ATerm n_37 = NULL;
  t = SSL_hashtable_create(m_70, n_70);
  n_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, n_37);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,s_37 = NULL,t_37 = NULL;
  o_37 = t;
  t = term_c_12;
  s_37 = t;
  t = term_d_12;
  t_37 = t;
  t = o_37;
  t = new_hashtable_0_2(s_37, t_37, t);
  p_37 = t;
  t = o_37;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      q_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(o_37, p_37, q_37, t);
  t = o_37;
  return(t);
}
static ATerm w_4 (ATerm j_70, ATerm k_70, ATerm t)
{
  ATerm u_37 = NULL;
  t = SSL_hashtable_remove(k_70, j_70);
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_37);
  return(t);
}
static ATerm x_4 (ATerm o_70, ATerm t)
{
  ATerm v_37 = NULL;
  t = SSL_hashtable_destroy(o_70);
  v_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, v_37);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm w_37 = NULL;
  t = SSL_table_hashtable();
  w_37 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, w_37);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL,a_38 = NULL;
  x_37 = t;
  t = table_hashtable_0_0(t);
  y_37 = t;
  t = lookup_table_0_1(x_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(a_38, t);
  t = y_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_4(x_37, z_37, t);
  t = x_37;
  return(t);
}
ATerm fetch_1_0 (ATerm r_122 (ATerm), ATerm t)
{
  static ATerm x_38 (ATerm t);
  static ATerm x_38 (ATerm t)
  {
    ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL;
    u_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_38 = ATgetFirst((ATermList) t);
        w_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_21 = NULL,r_21 = NULL,f_6 = NULL;
          t = SSLgetAnnotations(u_38);
          m_21 = t;
          t = v_38;
          t = r_122(t);
          r_21 = t;
          t = (ATerm) ATinsert(CheckATermList(w_38), r_21);
          f_6 = t;
          t = SSLsetAnnotations(f_6, m_21);
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
          {
            ATerm i_22 = NULL,o_22 = NULL,h_6 = NULL;
            t = SSLgetAnnotations(u_38);
            i_22 = t;
            t = w_38;
            t = x_38(t);
            o_22 = t;
            t = (ATerm) ATinsert(CheckATermList(o_22), v_38);
            h_6 = t;
            t = SSLsetAnnotations(h_6, i_22);
          }
        }
    }
    return(t);
  }
  t = x_38(t);
  return(t);
}
static ATerm e_5 (ATerm h_70, ATerm i_70, ATerm t)
{
  t = SSL_hashtable_get(i_70, h_70);
  return(t);
}
static ATerm z_4 (ATerm m_67, ATerm n_67, ATerm t)
{
  ATerm a_39 = NULL;
  t = lookup_table_0_1(m_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      a_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(n_67, a_39, t);
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
  ATerm c_39 = NULL,d_39 = NULL;
  t = term_i_12;
  c_39 = t;
  t = term_w_9;
  d_39 = t;
  t = term_j_12;
  t = c_5(c_39, d_39, t);
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
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL,h_39 = NULL;
  t = term_i_12;
  g_39 = t;
  t = term_w_9;
  h_39 = t;
  t = term_j_12;
  t = c_5(g_39, h_39, t);
  t = term_l_12;
  e_39 = t;
  t = term_w_9;
  f_39 = t;
  t = term_m_12;
  t = c_5(e_39, f_39, t);
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
  ATerm i_39 = NULL,j_39 = NULL,k_39 = NULL,l_39 = NULL,m_39 = NULL,n_39 = NULL,k_6 = NULL;
  n_39 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_39 = ATgetFirst((ATermList) t);
      k_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_39);
  i_39 = t;
  t = j_39;
  t = t_92(t);
  l_39 = t;
  t = k_39;
  t = u_92(t);
  m_39 = t;
  t = (ATerm) ATinsert(CheckATermList(m_39), l_39);
  k_6 = t;
  t = SSLsetAnnotations(k_6, i_39);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_143 (ATerm), ATerm t)
{
  ATerm s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,x_39 = NULL,y_39 = NULL,p_6 = NULL;
  s_39 = t;
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
  t = s_39;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_39 = ATgetFirst((ATermList) t);
      v_39 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_39);
  t_39 = t;
  t = term_q_9;
  y_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_9, u_39);
  t = c_5(y_39, u_39, t);
  t = v_39;
  {
    static ATerm i_40 (ATerm t);
    static ATerm i_40 (ATerm t)
    {
      ATerm u_12 = t;
      int v_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_12 = t;
          int x_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_40 = NULL;
              b_40 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_40;
              LocalPopChoice(x_12);
            }
          else
            {
              t = w_12;
              t = v_143(t);
              t = Cons_2_0(_id, i_40, t);
            }
          LocalPopChoice(v_12);
        }
      else
        {
          t = u_12;
          {
            ATerm e_40 = NULL,f_40 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                e_40 = ATgetFirst((ATermList) t);
                f_40 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(f_40), (ATerm) ATmakeAppl(sym_Undefined_1, e_40));
          }
        }
      return(t);
    }
    t = i_40(t);
  }
  x_39 = t;
  t = (ATerm) ATinsert(CheckATermList(x_39), (ATerm) ATmakeAppl(sym_Program_1, u_39));
  p_6 = t;
  t = SSLsetAnnotations(p_6, t_39);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm v_40 = NULL;
  v_40 = t;
  if(match_string(t, "--help"))
    {
      t = v_40;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = v_40;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = v_40;
        }
    }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm w_40 = NULL,x_40 = NULL;
  t = term_y_12;
  w_40 = t;
  t = term_w_9;
  x_40 = t;
  t = term_z_12;
  t = c_5(w_40, x_40, t);
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
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL,q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  p_40 = t;
  t = term_d_10;
  q_40 = t;
  t = term_c_13;
  t = lookup_table_0_1(q_40, t);
  u_40 = t;
  t = term_e_10;
  r_40 = t;
  t = (ATerm) ATempty;
  s_40 = t;
  t = u_40;
  if(match_cons(t, sym_Hashtable_1))
    {
      t_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(r_40, s_40, t_40, t);
  t = p_40;
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
        ATerm i_41 = NULL;
        i_41 = t;
        {
          ATerm j_13 = t;
          int k_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_23 = NULL;
              t = i_41;
              {
                ATerm l_13 = t;
                int n_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_23 = NULL,g_23 = NULL;
                    t = term_j_8;
                    f_23 = t;
                    t = term_y_12;
                    g_23 = t;
                    t = term_o_13;
                    t = z_4(f_23, g_23, t);
                    LocalPopChoice(n_13);
                  }
                else
                  {
                    t = l_13;
                    t = fetch_1_0(q_3, t);
                  }
              }
              t = i_41;
              t = t_143(t);
              t = term_p_10;
              e_23 = t;
              t = SSL_exit(e_23);
              LocalPopChoice(k_13);
            }
          else
            {
              t = j_13;
              {
                ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
                t = term_j_8;
                l_23 = t;
                t = term_i_12;
                m_23 = t;
                t = term_p_13;
                t = z_4(l_23, m_23, t);
                t = i_41;
                t = u_143(t);
                t = term_p_10;
                k_23 = t;
                t = SSL_exit(k_23);
              }
            }
        }
        LocalPopChoice(i_13);
      }
    else
      {
        t = h_13;
        {
          ATerm q_13 = t;
          int y_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm j_41 = NULL,k_41 = NULL,l_41 = NULL;
              static ATerm r_3 (ATerm t);
              static ATerm r_3 (ATerm t)
              {
                ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,r_6 = NULL;
                o_41 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    n_41 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(o_41);
                m_41 = t;
                t = n_41;
                if(((n_40 != NULL) && (n_40 != t)))
                  _fail(t);
                else
                  n_40 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, n_41);
                r_6 = t;
                t = SSLsetAnnotations(r_6, m_41);
                return(t);
              }
              t = fetch_1_0(r_3, t);
              t = term_k_11;
              k_41 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_40)), term_z_13);
              l_41 = t;
              t = SSL_printnl(k_41, l_41);
              t = (ATerm) ATmakeAppl(sym__2, term_k_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_40)), term_z_13));
              t = t_143(t);
              t = term_m_11;
              j_41 = t;
              t = SSL_exit(j_41);
              LocalPopChoice(y_13);
            }
          else
            {
              t = q_13;
            }
        }
      }
  }
  o_40 = t;
  t = term_d_10;
  t = table_destroy_0_0(t);
  t = o_40;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_141 (ATerm), ATerm w_141 (ATerm), ATerm x_141 (ATerm), ATerm y_141 (ATerm), ATerm z_141 (ATerm), ATerm t)
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL;
  t = parse_options_3_0(v_141, w_141, x_141, t);
  t_41 = t;
  t = term_a_14;
  t = table_create_0_0(t);
  t = term_a_14;
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_a_14, term_b_14, t_41);
  t = lookup_table_0_1(u_41, t);
  x_41 = t;
  t = term_b_14;
  v_41 = t;
  t = x_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      w_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(v_41, t_41, w_41, t);
  t = t_41;
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
        ATerm g_14 = t;
        int h_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(h_14);
          }
        else
          {
            t = g_14;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_3, v_3, w_3, t);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  {
                    ATerm l_14 = t;
                    int o_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(o_14);
                      }
                    else
                      {
                        t = l_14;
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
  ATerm b_42 = NULL,c_42 = NULL;
  t = term_p_8;
  b_42 = t;
  t = term_w_9;
  c_42 = t;
  t = term_p_14;
  t = c_5(b_42, c_42, t);
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
