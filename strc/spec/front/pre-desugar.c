#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Con_3;
static Symbol sym_TupleCong_1;
static Symbol sym_TupleCong_0;
static Symbol sym_Undefined_0;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Stream_1;
static Symbol sym_Path_1;
static Symbol sym_stdin_0;
static Symbol sym_stdout_0;
static Symbol sym_stderr_0;
static Symbol sym_Anno_2;
static Symbol sym_Hashtable_1;
static Symbol sym_Var_1;
static Symbol sym_Path_1;
static Symbol sym_Verbose_1;
static Symbol sym_Version_0;
static Symbol sym_Input_1;
static Symbol sym_Output_1;
static Symbol sym_Binary_0;
static Symbol sym_Statistics_0;
static Symbol sym_Help_0;
static Symbol sym_Program_1;
static Symbol sym_Undefined_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_Specification_1;
static Symbol sym_Module_2;
static Symbol sym_Overlay_3;
static Symbol sym_OverlayNoArgs_2;
static Symbol sym_Con4_4;
static Symbol sym_Con3_3;
static Symbol sym_Con_3;
static Symbol sym_Con1_2;
static Symbol sym_ListTail_2;
static Symbol sym_List_1;
static Symbol sym_Tuple_1;
static Symbol sym_Anno_2;
static Symbol sym_OpQ_2;
static Symbol sym_Op_2;
static Symbol sym_Char_1;
static Symbol sym_Str_1;
static Symbol sym_Real_1;
static Symbol sym_Int_1;
static Symbol sym_Var_1;
static Symbol sym_Var_1;
static Symbol sym_StrategyCurly_1;
static Symbol sym_SVar_1;
static Symbol sym_RChoice_2;
static Symbol sym_CallNoArgs_1;
static Symbol sym_ListCong_2;
static Symbol sym_ListCongNoTail_1;
static Symbol sym_ModCong_2;
static Symbol sym_ModCongNoArgs_1;
static Symbol sym_TupleCong_2;
static Symbol sym_EmptyTupleCong_0;
static Symbol sym_AnnoCong_2;
static Symbol sym_CongQ_2;
static Symbol sym_CharCong_1;
static Symbol sym_RealCong_1;
static Symbol sym_IntCong_1;
static Symbol sym_StrCong_1;
static Symbol sym_Path_2;
static Symbol sym_PrimT_3;
static Symbol sym_Prim_2;
static Symbol sym_PrimNoArgs_1;
static Symbol sym_LChoice_2;
static Symbol sym_Match_1;
static Symbol sym_CallT_3;
static Symbol sym_Call_2;
static Symbol sym_Id_0;
static Symbol sym_ParenStrat_1;
static Symbol sym_VarDec_2;
static Symbol sym_DefaultVarDec_1;
static Symbol sym_SDefT_4;
static Symbol sym_SDef_3;
static Symbol sym_SDefNoArgs_2;
static Symbol sym_OpDecl_2;
static Symbol sym_Sort_2;
static Symbol sym_SortNoArgs_1;
static Symbol sym_StratRule_3;
static Symbol sym_StratRuleNoCond_2;
static Symbol sym_Rule_3;
static Symbol sym_RuleNoCond_2;
static Symbol sym_SRDefT_4;
static Symbol sym_SRDef_3;
static Symbol sym_SRDefNoArgs_2;
static Symbol sym_RDefT_4;
static Symbol sym_RDef_3;
static Symbol sym_RDefNoArgs_2;
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
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
  sym_OpQ_2 = ATmakeSymbol("OpQ", 2, ATfalse);
  ATprotectSymbol(sym_OpQ_2);
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
  sym_CongQ_2 = ATmakeSymbol("CongQ", 2, ATfalse);
  ATprotectSymbol(sym_CongQ_2);
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
static ATerm term_b_15;
static ATerm term_y_14;
static ATerm term_x_14;
static ATerm term_k_14;
static ATerm term_j_14;
static ATerm term_i_14;
static ATerm term_f_14;
static ATerm term_e_14;
static ATerm term_s_13;
static ATerm term_o_13;
static ATerm term_l_13;
static ATerm term_k_13;
static ATerm term_j_13;
static ATerm term_e_13;
static ATerm term_z_12;
static ATerm term_y_12;
static ATerm term_x_12;
static ATerm term_w_12;
static ATerm term_v_12;
static ATerm term_u_12;
static ATerm term_t_12;
static ATerm term_q_12;
static ATerm term_p_12;
static ATerm term_k_12;
static ATerm term_j_12;
static ATerm term_i_12;
static ATerm term_x_11;
static ATerm term_w_11;
static ATerm term_v_11;
static ATerm term_u_11;
static ATerm term_p_11;
static ATerm term_k_11;
static ATerm term_j_11;
static ATerm term_i_11;
static ATerm term_h_11;
static ATerm term_g_11;
static ATerm term_f_11;
static ATerm term_e_11;
static ATerm term_d_11;
static ATerm term_c_11;
static ATerm term_b_11;
static ATerm term_a_11;
static ATerm term_z_10;
static ATerm term_r_10;
static ATerm term_p_10;
static ATerm term_o_10;
static ATerm term_n_10;
static ATerm term_m_10;
static ATerm term_g_10;
static ATerm term_f_10;
static ATerm term_a_10;
static ATerm term_z_9;
static ATerm term_y_9;
static ATerm term_x_9;
static ATerm term_w_9;
static ATerm term_t_9;
static ATerm term_s_9;
static ATerm term_a_9;
static ATerm term_z_8;
static ATerm term_w_8;
static ATerm term_v_8;
static ATerm term_u_8;
static ATerm term_s_8;
static ATerm term_n_8;
static ATerm term_k_8;
static ATerm term_j_8;
static ATerm term_i_8;
static ATerm term_v_7;
static ATerm term_u_7;
static ATerm term_s_7;
static ATerm term_r_7;
static ATerm term_f_7;
static ATerm term_e_7;
static ATerm term_d_7;
static ATerm term_c_7;
static ATerm term_b_7;
static ATerm term_a_7;
static ATerm term_z_6;
static ATerm term_y_6;
static ATerm term_x_6;
static ATerm term_w_6;
static ATerm term_q_6;
static ATerm term_p_6;
static ATerm term_o_6;
static ATerm term_n_6;
static ATerm term_m_6;
static ATerm term_i_6;
static ATerm term_h_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym_SVar_1, term_h_6);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeInt(114);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_a_7);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_7);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_Call_2, term_d_7, (ATerm) ATempty);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_Op_2, term_c_7, (ATerm) ATempty);
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(sym_Call_2, term_i_6, (ATerm) ATempty);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_7);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_i_8);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_Call_2, term_j_8, (ATerm) ATempty);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_u_8);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_z_8);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_w_9);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_z_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(sym__2, term_n_10, term_o_10);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym__2, term_b_11, term_c_11);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_11);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(sym__2, term_h_11, term_f_10);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_b_11);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym__2, term_t_12, term_f_10);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(sym__2, term_w_12, term_f_10);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(sym__2, term_j_13, term_f_10);
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, (ATerm) ATempty);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_j_13);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(sym__2, term_s_8, term_t_12);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym__2, term_z_8, term_f_10);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm at_last_1_0 (ATerm p_125 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm a_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
ATerm escape_chars_1_0 (ATerm j_135 (ATerm), ATerm t);
static ATerm p_30 (ATerm y_18, ATerm z_18, ATerm t);
static ATerm q_30 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm t);
static ATerm r_30 (ATerm n_20, ATerm o_20, ATerm t);
static ATerm s_30 (ATerm z_20, ATerm a_21, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm e_118 (ATerm), ATerm t);
static ATerm t_4 (ATerm m_60, ATerm n_60, ATerm t);
static ATerm u_4 (ATerm q_44, ATerm r_44, ATerm t);
static ATerm w_4 (ATerm h_124 (ATerm), ATerm q_307, ATerm w_44, ATerm t);
static ATerm v_4 (ATerm m_44, ATerm n_44, ATerm t);
static ATerm w_1 (ATerm t);
static ATerm x_1 (ATerm t);
ATerm output_1_0 (ATerm b_145 (ATerm), ATerm t);
static ATerm a_32 (ATerm u_31, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm x_4 (ATerm s_44, ATerm t);
static ATerm y_4 (ATerm s_58, ATerm t_58, ATerm t);
static ATerm z_4 (ATerm o_60, ATerm p_60, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm l_33 (ATerm k_32, ATerm t);
static ATerm m_33 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t);
static ATerm n_33 (ATerm y_32, ATerm z_32, ATerm a_33, ATerm t);
static ATerm a_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm input_1_0 (ATerm c_145 (ATerm), ATerm t);
ATerm default_system_about_0_0 (ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm map_1_0 (ATerm p_124 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm default_system_usage_2_0 (ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm f_2 (ATerm t);
static ATerm g_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm i_2 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
static ATerm v_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_5 (ATerm t_80, ATerm u_80, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_5 (ATerm y_65, ATerm z_65, ATerm x_65, ATerm t);
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm a_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm d_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm b_5 (ATerm h_64, ATerm i_64, ATerm t);
ATerm foldr_2_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm e_3 (ATerm t);
static ATerm f_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm x_141 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_5 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t);
ATerm lookup_table_0_1 (ATerm k_67, ATerm t);
ATerm new_hashtable_0_2 (ATerm v_70, ATerm w_70, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm d_5 (ATerm s_70, ATerm t_70, ATerm t);
static ATerm e_5 (ATerm x_70, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm x_124 (ATerm), ATerm t);
static ATerm l_5 (ATerm q_70, ATerm r_70, ATerm t);
static ATerm g_5 (ATerm r_67, ATerm s_67, ATerm t);
static ATerm h_3 (ATerm t);
static ATerm j_3 (ATerm t);
static ATerm l_3 (ATerm t);
static ATerm m_3 (ATerm t);
static ATerm n_3 (ATerm t);
static ATerm o_3 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm parse_options_3_0 (ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm t);
static ATerm x_3 (ATerm t);
static ATerm z_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm at_last_1_0 (ATerm p_125 (ATerm), ATerm t)
{
  static ATerm f_1 (ATerm t);
  static ATerm f_1 (ATerm t)
  {
    ATerm c_1 = NULL,d_1 = NULL,e_1 = NULL;
    c_1 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_1 = ATgetFirst((ATermList) t);
        e_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm h_2 = t;
      int j_4 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_0 = NULL,h_0 = NULL;
          t = SSLgetAnnotations(c_1);
          e_0 = t;
          t = e_1;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(e_1), d_1);
          h_0 = t;
          t = SSLsetAnnotations(h_0, e_0);
          t = p_125(t);
          LocalPopChoice(j_4);
        }
      else
        {
          t = h_2;
          {
            ATerm t_1 = NULL,z_1 = NULL,i_0 = NULL;
            t = SSLgetAnnotations(c_1);
            t_1 = t;
            t = e_1;
            t = f_1(t);
            z_1 = t;
            t = (ATerm) ATinsert(CheckATermList(z_1), d_1);
            i_0 = t;
            t = SSLsetAnnotations(i_0, t_1);
          }
        }
    }
    return(t);
  }
  t = f_1(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm n_1 = NULL,o_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_1 = ATgetFirst((ATermList) t);
      o_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = o_1;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_1;
    }
  else
    {
      t = o_1;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm n_2 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_4 = ATgetFirst((ATermList) t);
      n_2 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = n_2;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm s_134 (ATerm), ATerm t_134 (ATerm), ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL,m_2 = NULL;
  j_2 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_2 = ATgetFirst((ATermList) t);
      {
        ATerm l_4 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = m_2;
  t = s_134(t);
  t = j_2;
  t = last_0_0(t);
  t = t_134(t);
  t = j_2;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm m_4 = ATgetFirst((ATermList) t);
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
static ATerm a_1 (ATerm t)
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
  ATerm m_13 = NULL,n_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  if(match_cons(t, sym_PrimT_3))
    {
      q_13 = ATgetArgument(t, 0);
      r_13 = ATgetArgument(t, 1);
      n_13 = ATgetArgument(t, 2);
      {
        ATerm b_3 = NULL;
        t = q_13;
        {
          ATerm p_4 = t;
          int q_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_3 = NULL;
              t = SSL_explode_string(q_13);
              t = unquote_chars_2_0(b_0, c_0, t);
              i_3 = t;
              t = SSL_implode_string(i_3);
              LocalPopChoice(q_4);
            }
          else
            {
              t = p_4;
            }
        }
        b_3 = t;
        t = (ATerm) ATmakeAppl(sym_PrimT_3, b_3, r_13, n_13);
      }
    }
  else
    {
      if(match_cons(t, sym_Prim_2))
        {
          q_13 = ATgetArgument(t, 0);
          r_13 = ATgetArgument(t, 1);
          {
            ATerm q_3 = NULL;
            t = q_13;
            {
              ATerm s_4 = t;
              int c_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_3 = NULL;
                  t = SSL_explode_string(q_13);
                  t = unquote_chars_2_0(k_0, m_0, t);
                  w_3 = t;
                  t = SSL_implode_string(w_3);
                  LocalPopChoice(c_5);
                }
              else
                {
                  t = s_4;
                }
            }
            q_3 = t;
            t = (ATerm) ATmakeAppl(sym_PrimT_3, q_3, (ATerm)ATempty, r_13);
          }
        }
      else
        {
          if(match_cons(t, sym_PrimNoArgs_1))
            {
              q_13 = ATgetArgument(t, 0);
              {
                ATerm f_4 = NULL;
                t = q_13;
                {
                  ATerm f_5 = t;
                  int i_5 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_4 = NULL;
                      t = SSL_explode_string(q_13);
                      t = unquote_chars_2_0(a_1, b_1, t);
                      o_4 = t;
                      t = SSL_implode_string(o_4);
                      LocalPopChoice(i_5);
                    }
                  else
                    {
                      t = f_5;
                    }
                }
                f_4 = t;
                t = (ATerm) ATmakeAppl(sym_PrimT_3, f_4, (ATerm)ATempty, (ATerm) ATempty);
              }
            }
          else
            {
              if(match_cons(t, sym_Real_1))
                {
                  q_13 = ATgetArgument(t, 0);
                  {
                    ATerm p_5 = NULL;
                    t = SSL_string_to_real(q_13);
                    p_5 = t;
                    t = (ATerm) ATmakeAppl(sym_Real_1, p_5);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Int_1))
                    {
                      q_13 = ATgetArgument(t, 0);
                      {
                        ATerm z_5 = NULL;
                        t = SSL_string_to_int(q_13);
                        z_5 = t;
                        t = (ATerm) ATmakeAppl(sym_Int_1, z_5);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_Con_3))
                        {
                          q_13 = ATgetArgument(t, 0);
                          r_13 = ATgetArgument(t, 1);
                          n_13 = ATgetArgument(t, 2);
                          t = SSL_is_string(n_13);
                          t = (ATerm) ATmakeAppl(sym_Con_3, q_13, r_13, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, n_13), (ATerm) ATempty));
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              q_13 = ATgetArgument(t, 0);
                              {
                                ATerm q_7 = NULL,t_7 = NULL,x_7 = NULL,n_0 = NULL;
                                t = SSLgetAnnotations(p_13);
                                q_7 = t;
                                t = SSL_explode_string(q_13);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm n_5 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(n_5) != AT_INT) || (ATgetInt((ATermInt) n_5) != 39)))
                                      _fail(t);
                                    t_7 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(t_7);
                                x_7 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, x_7);
                                n_0 = t;
                                t = SSLsetAnnotations(n_0, q_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  q_13 = ATgetArgument(t, 0);
                                  r_13 = ATgetArgument(t, 1);
                                  n_13 = ATgetArgument(t, 2);
                                  m_13 = ATgetArgument(t, 3);
                                  {
                                    ATerm t_8 = NULL,h_9 = NULL,i_9 = NULL,q_0 = NULL;
                                    t = SSLgetAnnotations(p_13);
                                    t_8 = t;
                                    t = SSL_explode_string(q_13);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm r_5 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(r_5) != AT_INT) || (ATgetInt((ATermInt) r_5) != 39)))
                                          _fail(t);
                                        h_9 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(h_9);
                                    i_9 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, i_9, r_13, n_13, m_13);
                                    q_0 = t;
                                    t = SSLsetAnnotations(q_0, t_8);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      q_13 = ATgetArgument(t, 0);
                                      r_13 = ATgetArgument(t, 1);
                                      n_13 = ATgetArgument(t, 2);
                                      {
                                        ATerm j_10 = NULL,q_10 = NULL,s_10 = NULL,s_0 = NULL;
                                        t = SSLgetAnnotations(p_13);
                                        j_10 = t;
                                        t = SSL_explode_string(q_13);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm s_5 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(s_5) != AT_INT) || (ATgetInt((ATermInt) s_5) != 39)))
                                              _fail(t);
                                            q_10 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(q_10);
                                        s_10 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, s_10, r_13, n_13);
                                        s_0 = t;
                                        t = SSLsetAnnotations(s_0, j_10);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          q_13 = ATgetArgument(t, 0);
                                          r_13 = ATgetArgument(t, 1);
                                          n_13 = ATgetArgument(t, 2);
                                          m_13 = ATgetArgument(t, 3);
                                          {
                                            ATerm c_12 = NULL,l_12 = NULL,o_12 = NULL,t_0 = NULL;
                                            t = SSLgetAnnotations(p_13);
                                            c_12 = t;
                                            t = SSL_explode_string(q_13);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm t_5 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(t_5) != AT_INT) || (ATgetInt((ATermInt) t_5) != 39)))
                                                  _fail(t);
                                                l_12 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(l_12);
                                            o_12 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_12, r_13, n_13, m_13);
                                            t_0 = t;
                                            t = SSLsetAnnotations(t_0, c_12);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              q_13 = ATgetArgument(t, 0);
                                              r_13 = ATgetArgument(t, 1);
                                              n_13 = ATgetArgument(t, 2);
                                              {
                                                ATerm a_14 = NULL,o_14 = NULL,q_14 = NULL,u_0 = NULL;
                                                t = SSLgetAnnotations(p_13);
                                                a_14 = t;
                                                t = SSL_explode_string(q_13);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm u_5 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(u_5) != AT_INT) || (ATgetInt((ATermInt) u_5) != 39)))
                                                      _fail(t);
                                                    o_14 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(o_14);
                                                q_14 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, q_14, r_13, n_13);
                                                u_0 = t;
                                                t = SSLsetAnnotations(u_0, a_14);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  q_13 = ATgetArgument(t, 0);
                                                  r_13 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm z_14 = NULL,f_15 = NULL,k_15 = NULL,v_0 = NULL;
                                                    t = SSLgetAnnotations(p_13);
                                                    z_14 = t;
                                                    t = SSL_explode_string(q_13);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm v_5 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(v_5) != AT_INT) || (ATgetInt((ATermInt) v_5) != 39)))
                                                          _fail(t);
                                                        f_15 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(f_15);
                                                    k_15 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, k_15, r_13);
                                                    v_0 = t;
                                                    t = SSLsetAnnotations(v_0, z_14);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      q_13 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm c_16 = NULL,f_16 = NULL,g_16 = NULL,w_0 = NULL;
                                                        t = SSLgetAnnotations(p_13);
                                                        c_16 = t;
                                                        t = SSL_explode_string(q_13);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm w_5 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(w_5) != AT_INT) || (ATgetInt((ATermInt) w_5) != 39)))
                                                              _fail(t);
                                                            f_16 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(f_16);
                                                        g_16 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, g_16);
                                                        w_0 = t;
                                                        t = SSLsetAnnotations(w_0, c_16);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          q_13 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm m_16 = NULL,o_16 = NULL,p_16 = NULL,x_0 = NULL;
                                                            t = SSLgetAnnotations(p_13);
                                                            m_16 = t;
                                                            t = SSL_explode_string(q_13);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm y_5 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(y_5) != AT_INT) || (ATgetInt((ATermInt) y_5) != 39)))
                                                                  _fail(t);
                                                                o_16 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(o_16);
                                                            p_16 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, p_16);
                                                            x_0 = t;
                                                            t = SSLsetAnnotations(x_0, m_16);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              q_13 = ATgetArgument(t, 0);
                                                              r_13 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm w_16 = NULL,z_16 = NULL,a_17 = NULL,y_0 = NULL;
                                                                t = SSLgetAnnotations(p_13);
                                                                w_16 = t;
                                                                t = SSL_explode_string(q_13);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm a_6 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(a_6) != AT_INT) || (ATgetInt((ATermInt) a_6) != 39)))
                                                                      _fail(t);
                                                                    z_16 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(z_16);
                                                                a_17 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, a_17, r_13);
                                                                y_0 = t;
                                                                t = SSLsetAnnotations(y_0, w_16);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm i_17 = NULL,l_17 = NULL,m_17 = NULL,z_0 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  q_13 = ATgetArgument(t, 0);
                                                                  r_13 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(p_13);
                                                              i_17 = t;
                                                              t = SSL_explode_string(q_13);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm c_6 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(c_6) != AT_INT) || (ATgetInt((ATermInt) c_6) != 39)))
                                                                    _fail(t);
                                                                  l_17 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(l_17);
                                                              m_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, m_17, r_13);
                                                              z_0 = t;
                                                              t = SSLsetAnnotations(z_0, i_17);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm escape_chars_1_0 (ATerm j_135 (ATerm), ATerm t)
{
  static ATerm a_16 (ATerm t);
  static ATerm a_16 (ATerm t)
  {
    ATerm d_6 = t;
    int f_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_15 = NULL,d_15 = NULL,e_15 = NULL,g_15 = NULL,h_15 = NULL,q_2 = NULL;
        t = j_135(t);
        h_15 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            d_15 = ATgetFirst((ATermList) t);
            e_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_15);
        a_15 = t;
        t = e_15;
        t = Cons_2_0(_id, a_16, t);
        g_15 = t;
        t = (ATerm) ATinsert(CheckATermList(g_15), d_15);
        q_2 = t;
        t = SSLsetAnnotations(q_2, a_15);
        LocalPopChoice(f_6);
      }
    else
      {
        t = d_6;
        {
          ATerm v_15 = NULL,w_15 = NULL,z_15 = NULL;
          z_15 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_15 = ATgetFirst((ATermList) t);
              w_15 = (ATerm) ATgetNext((ATermList) t);
              {
                ATerm u_17 = NULL,z_17 = NULL,r_2 = NULL;
                t = SSLgetAnnotations(z_15);
                u_17 = t;
                t = w_15;
                t = a_16(t);
                z_17 = t;
                t = (ATerm) ATinsert(CheckATermList(z_17), v_15);
                r_2 = t;
                t = SSLsetAnnotations(r_2, u_17);
              }
            }
          else
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = z_15;
            }
        }
      }
    return(t);
  }
  t = a_16(t);
  return(t);
}
static ATerm p_30 (ATerm y_18, ATerm z_18, ATerm t)
{
  t = y_18;
  {
    ATerm g_6 = t;
    if((PushChoice() == 0))
      {
        ATerm g_19 = NULL,h_19 = NULL,m_19 = NULL,n_19 = NULL,k_3 = NULL;
        n_19 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_19 = ATgetFirst((ATermList) t);
            m_19 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(n_19);
        g_19 = t;
        t = m_19;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(m_19), h_19);
        k_3 = t;
        t = SSLsetAnnotations(k_3, g_19);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_i_6, y_18);
  return(t);
}
static ATerm q_30 (ATerm o_19, ATerm p_19, ATerm q_19, ATerm t)
{
  ATerm w_19 = NULL,z_19 = NULL;
  t = SSL_explode_string(o_19);
  t = escape_chars_1_0(g_1, t);
  z_19 = t;
  t = SSL_implode_string(z_19);
  w_19 = t;
  t = (ATerm) ATmakeAppl(sym_Op_2, w_19, p_19);
  return(t);
}
static ATerm r_30 (ATerm n_20, ATerm o_20, ATerm t)
{
  t = n_20;
  {
    ATerm j_6 = t;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL,t_20 = NULL,w_20 = NULL,y_20 = NULL,y_3 = NULL;
        y_20 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            t_20 = ATgetFirst((ATermList) t);
            w_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_20);
        r_20 = t;
        t = w_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(w_20), t_20);
        y_3 = t;
        t = SSLsetAnnotations(y_3, r_20);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = j_6;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_h_6, n_20);
  return(t);
}
static ATerm s_30 (ATerm z_20, ATerm a_21, ATerm t)
{
  ATerm c_21 = NULL;
  t = z_20;
  {
    ATerm k_6 = t;
    int l_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_string(t, "'\\ '"))
          {
            t = term_m_6;
          }
        else
          {
            if(match_string(t, "'\\r'"))
              {
                t = term_n_6;
              }
            else
              {
                if(match_string(t, "'\\t'"))
                  {
                    t = term_o_6;
                  }
                else
                  {
                    if(match_string(t, "'\\n'"))
                      {
                        t = term_p_6;
                      }
                    else
                      {
                        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                          _fail(t);
                        t = term_q_6;
                      }
                  }
              }
          }
        LocalPopChoice(l_6);
      }
    else
      {
        t = k_6;
        {
          ATerm l_21 = NULL;
          t = SSL_explode_string(z_20);
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              ATerm r_6 = ATgetFirst((ATermList) t);
              if(((ATgetType(r_6) != AT_INT) || (ATgetInt((ATermInt) r_6) != 39)))
                _fail(t);
              {
                ATerm s_6 = (ATerm) ATgetNext((ATermList) t);
                if(((ATgetType(s_6) == AT_LIST) && !(ATisEmpty(s_6))))
                  {
                    l_21 = ATgetFirst((ATermList) s_6);
                    {
                      ATerm t_6 = (ATerm) ATgetNext((ATermList) s_6);
                      if(((ATgetType(t_6) == AT_LIST) && !(ATisEmpty(t_6))))
                        {
                          ATerm u_6 = ATgetFirst((ATermList) t_6);
                          if(((ATgetType(u_6) != AT_INT) || (ATgetInt((ATermInt) u_6) != 39)))
                            _fail(t);
                          {
                            ATerm v_6 = (ATerm) ATgetNext((ATermList) t_6);
                            if(((ATgetType(v_6) != AT_LIST) || !(ATisEmpty(v_6))))
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
          t = l_21;
        }
      }
  }
  c_21 = t;
  t = (ATerm) ATmakeAppl(sym_Int_1, c_21);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm d_20 = NULL,e_20 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_20 = ATgetFirst((ATermList) t);
      e_20 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = d_20;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(e_20), term_x_6), term_w_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(e_20), term_w_6), term_w_6);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_20), term_y_6), term_w_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(e_20), term_z_6), term_w_6);
            }
        }
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm a_19 = NULL,b_19 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_19 = ATgetFirst((ATermList) t);
      b_19 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_19;
  if(match_int(t, 34))
    {
      t = (ATerm) ATinsert(ATinsert(CheckATermList(b_19), term_x_6), term_w_6);
    }
  else
    {
      if(match_int(t, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(b_19), term_w_6), term_w_6);
        }
      else
        {
          if(match_int(t, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(b_19), term_y_6), term_w_6);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 13)))
                _fail(t);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(b_19), term_z_6), term_w_6);
            }
        }
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm s_22 = NULL,t_22 = NULL;
  if(match_cons(t, sym__2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, t_22), s_22));
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = term_e_7;
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm x_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym__2))
    {
      x_22 = ATgetArgument(t, 0);
      z_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_b_7, (ATerm) ATinsert(ATinsert(ATempty, z_22), x_22));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm b_29 = NULL,c_29 = NULL;
  if(match_cons(t, sym__2))
    {
      b_29 = ATgetArgument(t, 0);
      c_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, c_29), b_29));
  return(t);
}
static ATerm q_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm g_29 = NULL,i_29 = NULL;
  if(match_cons(t, sym__2))
    {
      g_29 = ATgetArgument(t, 0);
      i_29 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, i_29), g_29));
  return(t);
}
static ATerm s_1 (ATerm t)
{
  t = term_f_7;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm v_29 = NULL,w_29 = NULL,r_19 = NULL;
  v_29 = t;
  t = SSL_explode_term(v_29);
  if(match_cons(t, sym__2))
    {
      ATerm g_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) g_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm h_7 = ATgetArgument(t, 1);
        if(((ATgetType(h_7) == AT_LIST) && !(ATisEmpty(h_7))))
          {
            w_29 = ATgetFirst((ATermList) h_7);
            {
              ATerm i_7 = (ATerm) ATgetNext((ATermList) h_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(v_29);
  if(match_cons(t, sym__2))
    {
      ATerm j_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_7 = ATgetArgument(t, 1);
        if(((ATgetType(k_7) == AT_LIST) && !(ATisEmpty(k_7))))
          {
            ATerm l_7 = ATgetFirst((ATermList) k_7);
            ATerm m_7 = (ATerm) ATgetNext((ATermList) k_7);
            if(((ATgetType(m_7) == AT_LIST) && !(ATisEmpty(m_7))))
              {
                r_19 = ATgetFirst((ATermList) m_7);
                {
                  ATerm n_7 = (ATerm) ATgetNext((ATermList) m_7);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_a_7, (ATerm) ATinsert(ATinsert(ATempty, r_19), w_29));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL,r_21 = NULL,s_21 = NULL,t_21 = NULL,u_21 = NULL,y_21 = NULL;
  t_21 = t;
  if(match_cons(t, sym_CongQ_2))
    {
      u_21 = ATgetArgument(t, 0);
      y_21 = ATgetArgument(t, 1);
      {
        ATerm s_18 = NULL,t_18 = NULL;
        t = SSL_explode_string(u_21);
        t = escape_chars_1_0(h_1, t);
        t_18 = t;
        t = SSL_implode_string(t_18);
        s_18 = t;
        t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, s_18), y_21);
      }
    }
  else
    {
      if(match_cons(t, sym_CharCong_1))
        {
          u_21 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, u_21));
        }
      else
        {
          if(match_cons(t, sym_RealCong_1))
            {
              u_21 = ATgetArgument(t, 0);
              t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, u_21));
            }
          else
            {
              if(match_cons(t, sym_IntCong_1))
                {
                  u_21 = ATgetArgument(t, 0);
                  t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, u_21));
                }
              else
                {
                  if(match_cons(t, sym_StrCong_1))
                    {
                      u_21 = ATgetArgument(t, 0);
                      t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, u_21));
                    }
                  else
                    {
                      if(match_cons(t, sym_ModCongNoArgs_1))
                        {
                          u_21 = ATgetArgument(t, 0);
                          t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_21), (ATerm) ATempty);
                        }
                      else
                        {
                          if(match_cons(t, sym_ModCong_2))
                            {
                              u_21 = ATgetArgument(t, 0);
                              y_21 = ATgetArgument(t, 1);
                              t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, u_21), y_21);
                            }
                          else
                            {
                              if(match_cons(t, sym_ListCong_2))
                                {
                                  u_21 = ATgetArgument(t, 0);
                                  y_21 = ATgetArgument(t, 1);
                                  {
                                    static ATerm i_1 (ATerm t);
                                    static ATerm i_1 (ATerm t)
                                    {
                                      t = y_21;
                                      return(t);
                                    }
                                    t = u_21;
                                    t = foldr_2_0(i_1, j_1, t);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_ListCongNoTail_1))
                                    {
                                      u_21 = ATgetArgument(t, 0);
                                      t = u_21;
                                      t = foldr_2_0(k_1, l_1, t);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_TupleCong_2))
                                        {
                                          u_21 = ATgetArgument(t, 0);
                                          y_21 = ATgetArgument(t, 1);
                                          t = (ATerm) ATmakeAppl(sym_Call_2, term_i_6, (ATerm) ATinsert(CheckATermList(y_21), u_21));
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_TupleCong_1))
                                            {
                                              u_21 = ATgetArgument(t, 0);
                                              t = u_21;
                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                {
                                                  p_21 = ATgetFirst((ATermList) t);
                                                  q_21 = (ATerm) ATgetNext((ATermList) t);
                                                  t = q_21;
                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                    {
                                                      ATerm o_7 = t;
                                                      int p_7 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_30(u_21, t_21, t);
                                                          LocalPopChoice(p_7);
                                                        }
                                                      else
                                                        {
                                                          t = o_7;
                                                          t = p_21;
                                                        }
                                                    }
                                                  else
                                                    {
                                                      t = p_30(u_21, t_21, t);
                                                    }
                                                }
                                              else
                                                {
                                                  t = p_30(u_21, t_21, t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_EmptyTupleCong_0))
                                                {
                                                  t = term_r_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_AnnoCong_2))
                                                    {
                                                      u_21 = ATgetArgument(t, 0);
                                                      y_21 = ATgetArgument(t, 1);
                                                      t = y_21;
                                                      if(match_cons(t, sym_StrategyCurly_1))
                                                        {
                                                          o_21 = ATgetArgument(t, 0);
                                                        }
                                                      else
                                                        _fail(t);
                                                      t = (ATerm) ATmakeAppl(sym_Call_2, term_u_7, (ATerm) ATinsert(ATinsert(ATempty, o_21), u_21));
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_ParenStrat_1))
                                                        {
                                                          u_21 = ATgetArgument(t, 0);
                                                          t = u_21;
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_StratRuleNoCond_2))
                                                            {
                                                              u_21 = ATgetArgument(t, 0);
                                                              y_21 = ATgetArgument(t, 1);
                                                              t = (ATerm) ATmakeAppl(sym_StratRule_3, u_21, y_21, term_v_7);
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(t, sym_RuleNoCond_2))
                                                                {
                                                                  u_21 = ATgetArgument(t, 0);
                                                                  y_21 = ATgetArgument(t, 1);
                                                                  t = (ATerm) ATmakeAppl(sym_Rule_3, u_21, y_21, term_v_7);
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(t, sym_OverlayNoArgs_2))
                                                                    {
                                                                      u_21 = ATgetArgument(t, 0);
                                                                      y_21 = ATgetArgument(t, 1);
                                                                      t = (ATerm) ATmakeAppl(sym_Overlay_3, u_21, (ATerm)ATempty, y_21);
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(t, sym_RChoice_2))
                                                                        {
                                                                          u_21 = ATgetArgument(t, 0);
                                                                          y_21 = ATgetArgument(t, 1);
                                                                          t = (ATerm) ATmakeAppl(sym_LChoice_2, y_21, u_21);
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(t, sym_Call_2))
                                                                            {
                                                                              u_21 = ATgetArgument(t, 0);
                                                                              y_21 = ATgetArgument(t, 1);
                                                                              t = (ATerm) ATmakeAppl(sym_CallT_3, u_21, y_21, (ATerm) ATempty);
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(t, sym_CallNoArgs_1))
                                                                                {
                                                                                  u_21 = ATgetArgument(t, 0);
                                                                                  t = (ATerm) ATmakeAppl(sym_CallT_3, u_21, (ATerm)ATempty, (ATerm) ATempty);
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_cons(t, sym_SDef_3))
                                                                                    {
                                                                                      u_21 = ATgetArgument(t, 0);
                                                                                      y_21 = ATgetArgument(t, 1);
                                                                                      s_21 = ATgetArgument(t, 2);
                                                                                      t = (ATerm) ATmakeAppl(sym_SDefT_4, u_21, y_21, (ATerm)ATempty, s_21);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_cons(t, sym_SDefNoArgs_2))
                                                                                        {
                                                                                          u_21 = ATgetArgument(t, 0);
                                                                                          y_21 = ATgetArgument(t, 1);
                                                                                          t = (ATerm) ATmakeAppl(sym_SDefT_4, u_21, (ATerm)ATempty, (ATerm)ATempty, y_21);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_cons(t, sym_SRDef_3))
                                                                                            {
                                                                                              u_21 = ATgetArgument(t, 0);
                                                                                              y_21 = ATgetArgument(t, 1);
                                                                                              s_21 = ATgetArgument(t, 2);
                                                                                              t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_21, y_21, (ATerm)ATempty, s_21);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                {
                                                                                                  u_21 = ATgetArgument(t, 0);
                                                                                                  y_21 = ATgetArgument(t, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_SRDefT_4, u_21, (ATerm)ATempty, (ATerm)ATempty, y_21);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_cons(t, sym_RDef_3))
                                                                                                    {
                                                                                                      u_21 = ATgetArgument(t, 0);
                                                                                                      y_21 = ATgetArgument(t, 1);
                                                                                                      s_21 = ATgetArgument(t, 2);
                                                                                                      t = (ATerm) ATmakeAppl(sym_RDefT_4, u_21, y_21, (ATerm)ATempty, s_21);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                        {
                                                                                                          u_21 = ATgetArgument(t, 0);
                                                                                                          y_21 = ATgetArgument(t, 1);
                                                                                                          t = (ATerm) ATmakeAppl(sym_RDefT_4, u_21, (ATerm)ATempty, (ATerm)ATempty, y_21);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          ATerm w_7 = t;
                                                                                                          int y_7 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              if(match_cons(t, sym_Module_2))
                                                                                                                {
                                                                                                                  ATerm z_7 = ATgetArgument(t, 0);
                                                                                                                  y_21 = ATgetArgument(t, 1);
                                                                                                                }
                                                                                                              else
                                                                                                                _fail(t);
                                                                                                              LocalPopChoice(y_7);
                                                                                                              t = (ATerm) ATmakeAppl(sym_Specification_1, y_21);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = w_7;
                                                                                                              if(match_cons(t, sym_OpQ_2))
                                                                                                                {
                                                                                                                  u_21 = ATgetArgument(t, 0);
                                                                                                                  y_21 = ATgetArgument(t, 1);
                                                                                                                  t = q_30(u_21, y_21, t_21, t);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_cons(t, sym_ListTail_2))
                                                                                                                    {
                                                                                                                      u_21 = ATgetArgument(t, 0);
                                                                                                                      y_21 = ATgetArgument(t, 1);
                                                                                                                      {
                                                                                                                        static ATerm m_1 (ATerm t);
                                                                                                                        static ATerm m_1 (ATerm t)
                                                                                                                        {
                                                                                                                          t = y_21;
                                                                                                                          return(t);
                                                                                                                        }
                                                                                                                        t = u_21;
                                                                                                                        t = foldr_2_0(m_1, p_1, t);
                                                                                                                      }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_cons(t, sym_List_1))
                                                                                                                        {
                                                                                                                          u_21 = ATgetArgument(t, 0);
                                                                                                                          t = u_21;
                                                                                                                          t = foldr_2_0(q_1, r_1, t);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_cons(t, sym_Tuple_1))
                                                                                                                            {
                                                                                                                              u_21 = ATgetArgument(t, 0);
                                                                                                                              t = u_21;
                                                                                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                                                                {
                                                                                                                                  p_21 = ATgetFirst((ATermList) t);
                                                                                                                                  q_21 = (ATerm) ATgetNext((ATermList) t);
                                                                                                                                  t = q_21;
                                                                                                                                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                                                                    {
                                                                                                                                      ATerm a_8 = t;
                                                                                                                                      int b_8 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = r_30(u_21, t_21, t);
                                                                                                                                          LocalPopChoice(b_8);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = a_8;
                                                                                                                                          t = p_21;
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = r_30(u_21, t_21, t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = r_30(u_21, t_21, t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_cons(t, sym_Anno_2))
                                                                                                                                {
                                                                                                                                  u_21 = ATgetArgument(t, 0);
                                                                                                                                  y_21 = ATgetArgument(t, 1);
                                                                                                                                  {
                                                                                                                                    ATerm p_29 = NULL;
                                                                                                                                    t = y_21;
                                                                                                                                    t = foldr_2_0(s_1, u_1, t);
                                                                                                                                    p_29 = t;
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Anno_2, u_21, p_29);
                                                                                                                                  }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_cons(t, sym_SortNoArgs_1))
                                                                                                                                    {
                                                                                                                                      u_21 = ATgetArgument(t, 0);
                                                                                                                                      t = (ATerm) ATmakeAppl(sym_Sort_2, u_21, (ATerm) ATempty);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_cons(t, sym_Char_1))
                                                                                                                                        {
                                                                                                                                          u_21 = ATgetArgument(t, 0);
                                                                                                                                          t = s_30(u_21, t_21, t);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          ATerm c_8 = t;
                                                                                                                                          int d_8 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              if(match_cons(t, sym_Con4_4))
                                                                                                                                                {
                                                                                                                                                  u_21 = ATgetArgument(t, 0);
                                                                                                                                                  {
                                                                                                                                                    ATerm e_8 = ATgetArgument(t, 1);
                                                                                                                                                  }
                                                                                                                                                  s_21 = ATgetArgument(t, 2);
                                                                                                                                                  r_21 = ATgetArgument(t, 3);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                _fail(t);
                                                                                                                                              LocalPopChoice(d_8);
                                                                                                                                              t = (ATerm) ATmakeAppl(sym_Con_3, u_21, s_21, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, r_21), (ATerm) ATempty));
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
                                                                                                                                                        u_21 = ATgetArgument(t, 0);
                                                                                                                                                        {
                                                                                                                                                          ATerm h_8 = ATgetArgument(t, 1);
                                                                                                                                                        }
                                                                                                                                                        s_21 = ATgetArgument(t, 2);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    LocalPopChoice(g_8);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, u_21, s_21, term_k_8);
                                                                                                                                                  }
                                                                                                                                                else
                                                                                                                                                  {
                                                                                                                                                    t = f_8;
                                                                                                                                                    if(match_cons(t, sym_Con1_2))
                                                                                                                                                      {
                                                                                                                                                        u_21 = ATgetArgument(t, 0);
                                                                                                                                                        y_21 = ATgetArgument(t, 1);
                                                                                                                                                      }
                                                                                                                                                    else
                                                                                                                                                      _fail(t);
                                                                                                                                                    t = (ATerm) ATmakeAppl(sym_Con_3, u_21, y_21, term_k_8);
                                                                                                                                                  }
                                                                                                                                              }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
ATerm repeat_2_0 (ATerm e_117 (ATerm), ATerm f_117 (ATerm), ATerm t)
{
  static ATerm t_30 (ATerm t);
  static ATerm t_30 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_117(t);
        t = t_30(t);
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        t = f_117(t);
      }
    return(t);
  }
  t = t_30(t);
  return(t);
}
ATerm topdown_1_0 (ATerm e_118 (ATerm), ATerm t)
{
  static ATerm v_1 (ATerm t);
  static ATerm v_1 (ATerm t)
  {
    t = topdown_1_0(e_118, t);
    return(t);
  }
  t = e_118(t);
  t = SRTS_all(v_1, t);
  return(t);
}
static ATerm t_4 (ATerm m_60, ATerm n_60, ATerm t)
{
  ATerm u_30 = NULL;
  t = SSL_fputc(m_60, n_60);
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_30);
  return(t);
}
static ATerm u_4 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm v_30 = NULL;
  t = SSL_write_term_to_stream_text(q_44, r_44);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_30);
  return(t);
}
static ATerm w_4 (ATerm h_124 (ATerm), ATerm q_307, ATerm w_44, ATerm t)
{
  ATerm w_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, q_307, term_n_8);
  t = a_5(t);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_30, w_44);
  t = h_124(t);
  t = fclose_0_0(t);
  t = w_44;
  return(t);
}
static ATerm v_4 (ATerm m_44, ATerm n_44, ATerm t)
{
  ATerm x_30 = NULL;
  t = SSL_write_term_to_stream_baf(m_44, n_44);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_30);
  return(t);
}
static ATerm w_1 (ATerm t)
{
  ATerm e_31 = NULL,h_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm o_8 = ATgetArgument(t, 0);
      if(match_cons(o_8, sym_Stream_1))
        {
          e_31 = ATgetArgument(o_8, 0);
        }
      else
        _fail(t);
      h_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(e_31, h_31, t);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm p_8 = ATgetArgument(t, 0);
      if(match_cons(p_8, sym_Stream_1))
        {
          l_31 = ATgetArgument(p_8, 0);
        }
      else
        _fail(t);
      m_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = u_4(l_31, m_31, t);
  i_31 = t;
  t = term_p_6;
  j_31 = t;
  t = i_31;
  if(match_cons(t, sym_Stream_1))
    {
      k_31 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_p_6, i_31);
  t = t_4(j_31, k_31, t);
  return(t);
}
ATerm output_1_0 (ATerm b_145 (ATerm), ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL;
  t = b_145(t);
  z_30 = t;
  {
    ATerm q_8 = t;
    int r_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_31 = NULL,b_31 = NULL;
        t = term_s_8;
        a_31 = t;
        t = term_u_8;
        b_31 = t;
        t = term_v_8;
        t = g_5(a_31, b_31, t);
        LocalPopChoice(r_8);
      }
    else
      {
        t = q_8;
        t = term_w_8;
      }
  }
  y_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
  {
    ATerm x_8 = t;
    int y_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_31 = NULL,d_31 = NULL;
        t = term_s_8;
        c_31 = t;
        t = term_z_8;
        d_31 = t;
        t = term_a_9;
        t = g_5(c_31, d_31, t);
        t = (ATerm) ATmakeAppl(sym__2, y_30, z_30);
        LocalPopChoice(y_8);
        if(match_cons(t, sym__2))
          {
            ATerm b_9 = ATgetArgument(t, 0);
            ATerm c_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_4(w_1, y_30, z_30, t);
      }
    else
      {
        t = x_8;
        if(match_cons(t, sym__2))
          {
            ATerm d_9 = ATgetArgument(t, 0);
            ATerm e_9 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = w_4(x_1, y_30, z_30, t);
      }
  }
  return(t);
}
static ATerm a_32 (ATerm u_31, ATerm t)
{
  t = SSL_fclose(u_31);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm x_31 = NULL,y_31 = NULL;
  y_31 = t;
  if(match_cons(t, sym_Stream_1))
    {
      x_31 = ATgetArgument(t, 0);
      {
        ATerm f_9 = t;
        int g_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(x_31);
            LocalPopChoice(g_9);
          }
        else
          {
            t = f_9;
            t = a_32(y_31, t);
          }
      }
    }
  else
    {
      t = a_32(y_31, t);
    }
  return(t);
}
static ATerm x_4 (ATerm s_44, ATerm t)
{
  t = SSL_read_term_from_stream(s_44);
  return(t);
}
static ATerm y_4 (ATerm s_58, ATerm t_58, ATerm t)
{
  t = SSL_strcat(s_58, t_58);
  return(t);
}
static ATerm z_4 (ATerm o_60, ATerm p_60, ATerm t)
{
  ATerm b_32 = NULL;
  t = SSL_fopen(o_60, p_60);
  b_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, b_32);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm c_32 = NULL;
  t = SSL_stdin_stream();
  c_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, c_32);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm d_32 = NULL;
  t = SSL_stdout_stream();
  d_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, d_32);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm e_32 = NULL;
  t = SSL_stderr_stream();
  e_32 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, e_32);
  return(t);
}
static ATerm l_33 (ATerm k_32, ATerm t)
{
  ATerm l_32 = NULL;
  t = SSL_explode_term(k_32);
  if(match_cons(t, sym__2))
    {
      ATerm j_9 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) j_9) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm k_9 = ATgetArgument(t, 1);
        if(((ATgetType(k_9) == AT_LIST) && !(ATisEmpty(k_9))))
          {
            l_32 = ATgetFirst((ATermList) k_9);
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
  t = l_32;
  if(match_cons(t, sym_stderr_0))
    {
      t = l_32;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = l_32;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = l_32;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm m_33 (ATerm o_32, ATerm p_32, ATerm q_32, ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL,t_32 = NULL,w_32 = NULL,d_4 = NULL;
  t = SSLgetAnnotations(q_32);
  t_32 = t;
  t = o_32;
  if(match_cons(t, sym_Path_1))
    {
      w_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_32, p_32);
  d_4 = t;
  t = SSLsetAnnotations(d_4, t_32);
  if(match_cons(t, sym__2))
    {
      r_32 = ATgetArgument(t, 0);
      s_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(r_32, s_32, t);
  return(t);
}
static ATerm n_33 (ATerm y_32, ATerm z_32, ATerm a_33, ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL,g_33 = NULL,g_4 = NULL;
  t = SSLgetAnnotations(a_33);
  d_33 = t;
  t = SSL_is_string(y_32);
  g_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_33, z_32);
  g_4 = t;
  t = SSLsetAnnotations(g_4, d_33);
  if(match_cons(t, sym__2))
    {
      b_33 = ATgetArgument(t, 0);
      c_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_4(b_33, c_33, t);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
      {
        ATerm m_9 = t;
        int n_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = l_33(i_33, t);
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
                  t = m_33(j_33, k_33, i_33, t);
                  LocalPopChoice(p_9);
                }
              else
                {
                  t = o_9;
                  t = n_33(j_33, k_33, i_33, t);
                }
            }
          }
      }
    }
  else
    {
      t = l_33(i_33, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,w_33 = NULL;
  w_33 = t;
  {
    ATerm q_9 = t;
    int r_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, w_33, term_s_9);
        t = a_5(t);
        LocalPopChoice(r_9);
      }
    else
      {
        t = q_9;
        {
          ATerm j_20 = NULL,q_20 = NULL;
          t = term_t_9;
          q_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_t_9, w_33);
          t = y_4(q_20, w_33, t);
          j_20 = t;
          t = SSL_perror(j_20);
          _fail(t);
        }
      }
  }
  q_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = x_4(r_33, t);
  p_33 = t;
  t = q_33;
  t = fclose_0_0(t);
  t = p_33;
  return(t);
}
ATerm input_1_0 (ATerm c_145 (ATerm), ATerm t)
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_33 = NULL,a_34 = NULL;
      t = term_s_8;
      z_33 = t;
      t = term_w_9;
      a_34 = t;
      t = term_x_9;
      t = g_5(z_33, a_34, t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      t = term_y_9;
    }
  t = ReadFromFile_0_0(t);
  t = c_145(t);
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm b_34 = NULL,c_34 = NULL;
  t = term_s_8;
  b_34 = t;
  t = term_z_9;
  c_34 = t;
  t = term_a_10;
  t = g_5(b_34, c_34, t);
  t = echo_0_0(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
  e_34 = t;
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = e_34;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm d_10 = ATgetFirst((ATermList) t);
                ATerm e_10 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = e_34;
          }
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        t = (ATerm) ATinsert(ATempty, e_34);
      }
  }
  f_34 = t;
  t = term_w_8;
  g_34 = t;
  t = SSL_printnl(g_34, f_34);
  t = e_34;
  return(t);
}
ATerm map_1_0 (ATerm p_124 (ATerm), ATerm t)
{
  static ATerm y_34 (ATerm t);
  static ATerm y_34 (ATerm t)
  {
    ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
    v_34 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_34;
      }
    else
      {
        ATerm e_21 = NULL,h_21 = NULL,i_21 = NULL,n_4 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_34 = ATgetFirst((ATermList) t);
            x_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_34);
        e_21 = t;
        t = w_34;
        t = p_124(t);
        h_21 = t;
        t = x_34;
        t = y_34(t);
        i_21 = t;
        t = (ATerm) ATinsert(CheckATermList(i_21), h_21);
        n_4 = t;
        t = SSLsetAnnotations(n_4, e_21);
      }
    return(t);
  }
  t = y_34(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm p_0 (ATerm), ATerm r_0 (ATerm), ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_35 = ATgetFirst((ATermList) t);
      c_35 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_35 = NULL,h_35 = NULL;
        static ATerm y_1 (ATerm t);
        static ATerm y_1 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(g_35)), not_null(h_35));
          return(t);
        }
        t = c_35;
        t = r_0(t);
        if(((g_35 != NULL) && (g_35 != t)))
          _fail(t);
        else
          g_35 = t;
        t = b_35;
        t = p_0(t);
        if(((h_35 != NULL) && (h_35 != t)))
          _fail(t);
        else
          h_35 = t;
        t = c_35;
        t = reverse_acc_2_0(p_0, y_1, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_10;
      t = r_0(t);
    }
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,r_4 = NULL;
  s_35 = t;
  if(match_cons(t, sym_Program_1))
    {
      r_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_35);
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, r_35);
  r_4 = t;
  t = SSLsetAnnotations(r_4, q_35);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_35), term_g_10);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm a_147 (ATerm), ATerm b_147 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL;
  ATerm h_10 = t;
  int i_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_35 = NULL,p_35 = NULL;
      t = term_s_8;
      o_35 = t;
      t = term_z_9;
      p_35 = t;
      t = term_a_10;
      t = g_5(o_35, p_35, t);
      LocalPopChoice(i_10);
    }
  else
    {
      t = h_10;
      t = fetch_1_0(a_2, t);
    }
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_147(t);
        t = echo_0_0(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
      }
  }
  t = term_m_10;
  t = echo_0_0(t);
  t = term_n_10;
  m_35 = t;
  t = term_o_10;
  n_35 = t;
  t = term_p_10;
  t = g_5(m_35, n_35, t);
  t = reverse_acc_2_0(_id, b_2, t);
  t = map_1_0(c_2, t);
  t = term_r_10;
  t = echo_0_0(t);
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_147(t);
        {
          ATerm v_10 = t;
          int w_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_35 = NULL;
              x_35 = t;
              t = SSL_is_string(x_35);
              t = x_35;
              LocalPopChoice(w_10);
              {
                ATerm y_35 = NULL;
                y_35 = t;
                t = (ATerm) ATinsert(ATempty, y_35);
              }
            }
          else
            {
              t = v_10;
            }
        }
        t = echo_0_0(t);
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
      }
  }
  return(t);
}
static ATerm d_2 (ATerm t)
{
  ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL,m_5 = NULL;
  h_36 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_36);
  f_36 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_36);
  m_5 = t;
  t = SSLsetAnnotations(m_5, f_36);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  {
    ATerm x_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_36 = NULL,e_36 = NULL;
        t = term_s_8;
        d_36 = t;
        t = term_z_9;
        e_36 = t;
        t = term_a_10;
        t = g_5(d_36, e_36, t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = x_10;
        t = fetch_1_0(d_2, t);
      }
  }
  t = c_36;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm j_36 = NULL;
  j_36 = t;
  if(match_string(t, "-k"))
    {
      t = j_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = j_36;
    }
  return(t);
}
static ATerm f_2 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  t = SSL_string_to_int(k_36);
  l_36 = t;
  t = term_z_10;
  m_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_10, l_36);
  t = j_5(m_36, l_36, t);
  t = k_36;
  return(t);
}
static ATerm g_2 (ATerm t)
{
  t = term_a_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(e_2, f_2, g_2, t);
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  if(match_string(t, "-S"))
    {
      t = o_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = o_36;
    }
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL;
  t = term_b_11;
  p_36 = t;
  t = term_c_11;
  q_36 = t;
  t = term_d_11;
  t = j_5(p_36, q_36, t);
  t = term_e_11;
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = term_f_11;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_2 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  t = SSL_string_to_int(r_36);
  s_36 = t;
  t = term_b_11;
  t_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_11, s_36);
  t = j_5(t_36, s_36, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, r_36);
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = term_g_11;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm u_36 = NULL,v_36 = NULL;
  t = term_h_11;
  u_36 = t;
  t = term_f_10;
  v_36 = t;
  t = term_i_11;
  t = j_5(u_36, v_36, t);
  t = term_j_11;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(i_2, l_2, o_2, t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      {
        ATerm n_11 = t;
        int o_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(p_2, s_2, t_2, t);
            LocalPopChoice(o_11);
          }
        else
          {
            t = n_11;
            t = Option_3_0(u_2, v_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm t_80, ATerm u_80, ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL;
  t = term_s_8;
  w_36 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_8, t_80, u_80);
  t = lookup_table_0_1(w_36, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(t_80, u_80, x_36, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_8, t_80, u_80);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_37 = NULL,c_37 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
      t = term_f_10;
      t = g_0(t);
      d_37 = t;
      t = term_n_10;
      e_37 = t;
      t = term_o_10;
      f_37 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, d_37);
      t = h_5(e_37, f_37, d_37, t);
      _fail(t);
    }
  else
    {
      ATerm i_37 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_37 = ATgetFirst((ATermList) t);
          c_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_37;
      t = d_0(t);
      t = term_f_10;
      t = f_0(t);
      i_37 = t;
      t = (ATerm) ATinsert(CheckATermList(c_37), i_37);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_37 = NULL;
  k_37 = t;
  if(match_string(t, "-o"))
    {
      t = k_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_37;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_37 = NULL,m_37 = NULL;
  l_37 = t;
  t = term_u_8;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_8, l_37);
  t = j_5(m_37, l_37, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_37);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  t = term_p_11;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, z_2, t);
  return(t);
}
static ATerm h_5 (ATerm y_65, ATerm z_65, ATerm x_65, ATerm t)
{
  ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL,r_37 = NULL,s_37 = NULL;
  o_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_65, z_65);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_11 = ATgetArgument(t, 0);
            ATerm t_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, y_65, z_65);
        t = g_5(y_65, z_65, t);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = (ATerm) ATempty;
      }
  }
  p_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, y_65, z_65, (ATerm) ATinsert(CheckATermList(p_37), x_65));
  t = lookup_table_0_1(y_65, t);
  s_37 = t;
  t = (ATerm) ATinsert(CheckATermList(p_37), x_65);
  q_37 = t;
  t = s_37;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(z_65, q_37, r_37, t);
  t = o_37;
  return(t);
}
ATerm ArgOption_3_0 (ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm z_37 = NULL,a_38 = NULL,b_38 = NULL,c_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
      t = term_f_10;
      t = o_0(t);
      d_38 = t;
      t = term_n_10;
      e_38 = t;
      t = term_o_10;
      f_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_n_10, term_o_10, d_38);
      t = h_5(e_38, f_38, d_38, t);
      _fail(t);
    }
  else
    {
      ATerm j_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_37 = ATgetFirst((ATermList) t);
          a_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_38;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_38 = ATgetFirst((ATermList) t);
          c_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_37;
      t = j_0(t);
      t = b_38;
      t = l_0(t);
      j_38 = t;
      t = (ATerm) ATinsert(CheckATermList(c_38), j_38);
    }
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm l_38 = NULL;
  l_38 = t;
  if(match_string(t, "-i"))
    {
      t = l_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = l_38;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  ATerm m_38 = NULL,n_38 = NULL;
  m_38 = t;
  t = term_w_9;
  n_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_9, m_38);
  t = j_5(n_38, m_38, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, m_38);
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_u_11;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_3, c_3, d_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_10;
  t = whoami_0_0(t);
  o_38 = t;
  t = term_v_11;
  q_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_w_11), o_38);
  r_38 = t;
  t = SSL_printnl(q_38, r_38);
  t = term_x_11;
  p_38 = t;
  t = SSL_exit(p_38);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL;
  t = term_s_8;
  s_38 = t;
  t = term_z_9;
  t_38 = t;
  t = term_a_10;
  t = g_5(s_38, t_38, t);
  return(t);
}
static ATerm b_5 (ATerm h_64, ATerm i_64, ATerm t)
{
  ATerm y_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_64, i_64);
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      t = SSL_addr(h_64, i_64);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
  v_38 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_38;
      t = m_131(t);
    }
  else
    {
      ATerm a_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_38 = ATgetFirst((ATermList) t);
          x_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_38;
      t = foldr_2_0(m_131, n_131, t);
      a_39 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_38, a_39);
      t = n_131(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm e_3 (ATerm t)
{
  t = term_c_11;
  return(t);
}
static ATerm f_3 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  if(match_cons(t, sym__2))
    {
      b_22 = ATgetArgument(t, 0);
      c_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = b_5(b_22, c_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_39 = NULL,v_21 = NULL,w_21 = NULL;
  t = times_0_0(t);
  w_21 = t;
  t = SSL_explode_term(w_21);
  if(match_cons(t, sym__2))
    {
      ATerm a_12 = ATgetArgument(t, 0);
      v_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_21;
  t = foldr_2_0(e_3, f_3, t);
  d_39 = t;
  t = SSL_TicksToSeconds(d_39);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  if(match_cons(t, sym__2))
    {
      p_39 = ATgetArgument(t, 0);
      q_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm b_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_39;
        if((p_39 != t))
          {
            _fail(t);
          }
        t = o_39;
        LocalPopChoice(d_12);
      }
    else
      {
        t = b_12;
        t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
        {
          ATerm e_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(p_39, q_39);
              LocalPopChoice(f_12);
            }
          else
            {
              t = e_12;
              t = SSL_gtr(p_39, q_39);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, p_39, q_39);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm x_141 (ATerm), ATerm t)
{
  ATerm u_39 = NULL;
  u_39 = t;
  {
    ATerm g_12 = t;
    int h_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_39 = NULL,x_39 = NULL,y_39 = NULL;
        t = term_s_8;
        x_39 = t;
        t = term_b_11;
        y_39 = t;
        t = term_i_12;
        t = g_5(x_39, y_39, t);
        w_39 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_39, term_x_11);
        t = geq_0_0(t);
        t = u_39;
        t = x_141(t);
        LocalPopChoice(h_12);
      }
    else
      {
        t = g_12;
        t = u_39;
      }
  }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm a_40 = NULL,b_40 = NULL,d_40 = NULL,e_40 = NULL;
  t = run_time_0_0(t);
  a_40 = t;
  t = term_f_10;
  t = whoami_0_0(t);
  b_40 = t;
  t = term_v_11;
  d_40 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_12), a_40), term_j_12), b_40);
  e_40 = t;
  t = SSL_printnl(d_40, e_40);
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_12), a_40), term_j_12), b_40));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm f_40 = NULL;
  t = report_run_time_0_0(t);
  t = term_c_11;
  f_40 = t;
  t = SSL_exit(f_40);
  return(t);
}
static ATerm k_5 (ATerm n_70, ATerm o_70, ATerm p_70, ATerm t)
{
  ATerm g_40 = NULL;
  t = SSL_hashtable_put(p_70, n_70, o_70);
  g_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, g_40);
  return(t);
}
ATerm lookup_table_0_1 (ATerm k_67, ATerm t)
{
  ATerm p_40 = NULL;
  t = table_hashtable_0_0(t);
  p_40 = t;
  {
    ATerm m_12 = t;
    int n_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_23 = NULL;
        t = p_40;
        if(match_cons(t, sym_Hashtable_1))
          {
            a_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_5(k_67, a_23, t);
        LocalPopChoice(n_12);
      }
    else
      {
        t = m_12;
        {
          ATerm f_23 = NULL;
          t = k_67;
          t = table_create_0_0(t);
          t = p_40;
          if(match_cons(t, sym_Hashtable_1))
            {
              f_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_5(k_67, f_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm v_70, ATerm w_70, ATerm t)
{
  ATerm s_40 = NULL;
  t = SSL_hashtable_create(v_70, w_70);
  s_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, s_40);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,x_40 = NULL,y_40 = NULL;
  t_40 = t;
  t = term_p_12;
  x_40 = t;
  t = term_q_12;
  y_40 = t;
  t = t_40;
  t = new_hashtable_0_2(x_40, y_40, t);
  u_40 = t;
  t = t_40;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(t_40, u_40, v_40, t);
  t = t_40;
  return(t);
}
static ATerm d_5 (ATerm s_70, ATerm t_70, ATerm t)
{
  ATerm z_40 = NULL;
  t = SSL_hashtable_remove(t_70, s_70);
  z_40 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, z_40);
  return(t);
}
static ATerm e_5 (ATerm x_70, ATerm t)
{
  ATerm a_41 = NULL;
  t = SSL_hashtable_destroy(x_70);
  a_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, a_41);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm b_41 = NULL;
  t = SSL_table_hashtable();
  b_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_41);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
  c_41 = t;
  t = table_hashtable_0_0(t);
  d_41 = t;
  t = lookup_table_0_1(c_41, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(f_41, t);
  t = d_41;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_5(c_41, e_41, t);
  t = c_41;
  return(t);
}
ATerm fetch_1_0 (ATerm x_124 (ATerm), ATerm t)
{
  static ATerm c_42 (ATerm t);
  static ATerm c_42 (ATerm t)
  {
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
    z_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_42 = ATgetFirst((ATermList) t);
        b_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_12 = t;
      int s_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = NULL,n_23 = NULL,o_5 = NULL;
          t = SSLgetAnnotations(z_41);
          k_23 = t;
          t = a_42;
          t = x_124(t);
          n_23 = t;
          t = (ATerm) ATinsert(CheckATermList(b_42), n_23);
          o_5 = t;
          t = SSLsetAnnotations(o_5, k_23);
          LocalPopChoice(s_12);
        }
      else
        {
          t = r_12;
          {
            ATerm w_23 = NULL,z_23 = NULL,q_5 = NULL;
            t = SSLgetAnnotations(z_41);
            w_23 = t;
            t = b_42;
            t = c_42(t);
            z_23 = t;
            t = (ATerm) ATinsert(CheckATermList(z_23), a_42);
            q_5 = t;
            t = SSLsetAnnotations(q_5, w_23);
          }
        }
    }
    return(t);
  }
  t = c_42(t);
  return(t);
}
static ATerm l_5 (ATerm q_70, ATerm r_70, ATerm t)
{
  t = SSL_hashtable_get(r_70, q_70);
  return(t);
}
static ATerm g_5 (ATerm r_67, ATerm s_67, ATerm t)
{
  ATerm f_42 = NULL;
  t = lookup_table_0_1(r_67, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      f_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(s_67, f_42, t);
  return(t);
}
static ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL;
  t = term_t_12;
  h_42 = t;
  t = term_f_10;
  i_42 = t;
  t = term_u_12;
  t = j_5(h_42, i_42, t);
  return(t);
}
static ATerm l_3 (ATerm t)
{
  t = term_v_12;
  return(t);
}
static ATerm m_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_3 (ATerm t)
{
  ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
  t = term_t_12;
  l_42 = t;
  t = term_f_10;
  m_42 = t;
  t = term_u_12;
  t = j_5(l_42, m_42, t);
  t = term_w_12;
  j_42 = t;
  t = term_f_10;
  k_42 = t;
  t = term_x_12;
  t = j_5(j_42, k_42, t);
  t = term_y_12;
  return(t);
}
static ATerm o_3 (ATerm t)
{
  t = term_z_12;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(h_3, j_3, l_3, t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      t = Option_3_0(m_3, n_3, o_3, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm z_94 (ATerm), ATerm a_95 (ATerm), ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,x_5 = NULL;
  s_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      o_42 = ATgetFirst((ATermList) t);
      p_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_42);
  n_42 = t;
  t = o_42;
  t = z_94(t);
  q_42 = t;
  t = p_42;
  t = a_95(t);
  r_42 = t;
  t = (ATerm) ATinsert(CheckATermList(r_42), q_42);
  x_5 = t;
  t = SSLsetAnnotations(x_5, n_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm v_146 (ATerm), ATerm t)
{
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,a_43 = NULL,c_43 = NULL,d_43 = NULL,b_6 = NULL;
  x_42 = t;
  {
    ATerm c_13 = t;
    int d_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_e_13;
        t = v_146(t);
        LocalPopChoice(d_13);
      }
    else
      {
        t = c_13;
      }
  }
  t = x_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_42 = ATgetFirst((ATermList) t);
      a_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_42);
  y_42 = t;
  t = term_z_9;
  d_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_9, z_42);
  t = j_5(d_43, z_42, t);
  t = a_43;
  {
    static ATerm n_43 (ATerm t);
    static ATerm n_43 (ATerm t)
    {
      ATerm f_13 = t;
      int g_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_13 = t;
          int i_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_43 = NULL;
              g_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = g_43;
              LocalPopChoice(i_13);
            }
          else
            {
              t = h_13;
              t = v_146(t);
              t = Cons_2_0(_id, n_43, t);
            }
          LocalPopChoice(g_13);
        }
      else
        {
          t = f_13;
          {
            ATerm j_43 = NULL,k_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                j_43 = ATgetFirst((ATermList) t);
                k_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(k_43), (ATerm) ATmakeAppl(sym_Undefined_1, j_43));
          }
        }
      return(t);
    }
    t = n_43(t);
  }
  c_43 = t;
  t = (ATerm) ATinsert(CheckATermList(c_43), (ATerm) ATmakeAppl(sym_Program_1, z_42));
  b_6 = t;
  t = SSLsetAnnotations(b_6, y_42);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm a_44 = NULL;
  a_44 = t;
  if(match_string(t, "--help"))
    {
      t = a_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = a_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = a_44;
        }
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm b_44 = NULL,c_44 = NULL;
  t = term_j_13;
  b_44 = t;
  t = term_f_10;
  c_44 = t;
  t = term_k_13;
  t = j_5(b_44, c_44, t);
  t = term_l_13;
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_o_13;
  return(t);
}
static ATerm u_3 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm s_146 (ATerm), ATerm t_146 (ATerm), ATerm u_146 (ATerm), ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL;
  u_43 = t;
  t = term_n_10;
  v_43 = t;
  t = term_s_13;
  t = lookup_table_0_1(v_43, t);
  z_43 = t;
  t = term_o_10;
  w_43 = t;
  t = (ATerm) ATempty;
  x_43 = t;
  t = z_43;
  if(match_cons(t, sym_Hashtable_1))
    {
      y_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(w_43, x_43, y_43, t);
  t = u_43;
  {
    static ATerm p_3 (ATerm t);
    static ATerm p_3 (ATerm t)
    {
      ATerm t_13 = t;
      int u_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_146(t);
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
                t = Option_3_0(r_3, s_3, t_3, t);
                LocalPopChoice(w_13);
              }
            else
              {
                t = v_13;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(p_3, t);
  }
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_44 = NULL;
        p_44 = t;
        {
          ATerm z_13 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm g_24 = NULL;
              t = p_44;
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm h_24 = NULL,i_24 = NULL;
                    t = term_s_8;
                    h_24 = t;
                    t = term_j_13;
                    i_24 = t;
                    t = term_e_14;
                    t = g_5(h_24, i_24, t);
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = fetch_1_0(u_3, t);
                  }
              }
              t = p_44;
              t = t_146(t);
              t = term_c_11;
              g_24 = t;
              t = SSL_exit(g_24);
              LocalPopChoice(b_14);
            }
          else
            {
              t = z_13;
              {
                ATerm n_24 = NULL,o_24 = NULL,p_24 = NULL;
                t = term_s_8;
                o_24 = t;
                t = term_t_12;
                p_24 = t;
                t = term_f_14;
                t = g_5(o_24, p_24, t);
                t = p_44;
                t = u_146(t);
                t = term_c_11;
                n_24 = t;
                t = SSL_exit(n_24);
              }
            }
        }
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          ATerm g_14 = t;
          int h_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_44 = NULL,u_44 = NULL,x_44 = NULL;
              static ATerm v_3 (ATerm t);
              static ATerm v_3 (ATerm t)
              {
                ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,e_6 = NULL;
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
                if(((s_43 != NULL) && (s_43 != t)))
                  _fail(t);
                else
                  s_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, z_44);
                e_6 = t;
                t = SSLsetAnnotations(e_6, y_44);
                return(t);
              }
              t = fetch_1_0(v_3, t);
              t = term_v_11;
              u_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_43)), term_i_14);
              x_44 = t;
              t = SSL_printnl(u_44, x_44);
              t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_43)), term_i_14));
              t = t_146(t);
              t = term_x_11;
              t_44 = t;
              t = SSL_exit(t_44);
              LocalPopChoice(h_14);
            }
          else
            {
              t = g_14;
            }
        }
      }
  }
  t_43 = t;
  t = term_n_10;
  t = table_destroy_0_0(t);
  t = t_43;
  return(t);
}
ATerm option_wrap_5_0 (ATerm v_144 (ATerm), ATerm w_144 (ATerm), ATerm x_144 (ATerm), ATerm y_144 (ATerm), ATerm z_144 (ATerm), ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL;
  t = parse_options_3_0(v_144, w_144, x_144, t);
  f_45 = t;
  t = term_j_14;
  t = table_create_0_0(t);
  t = term_j_14;
  g_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_j_14, term_k_14, f_45);
  t = lookup_table_0_1(g_45, t);
  j_45 = t;
  t = term_k_14;
  h_45 = t;
  t = j_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      i_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(h_45, f_45, i_45, t);
  t = f_45;
  t = y_144(t);
  {
    ATerm l_14 = t;
    int m_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_144(t);
        t = report_success_0_0(t);
        LocalPopChoice(m_14);
      }
    else
      {
        t = l_14;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm n_14 = t;
  int p_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(p_14);
    }
  else
    {
      t = n_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
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
                  t = Option_3_0(a_4, b_4, c_4, t);
                  LocalPopChoice(u_14);
                }
              else
                {
                  t = t_14;
                  {
                    ATerm v_14 = t;
                    int w_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(w_14);
                      }
                    else
                      {
                        t = v_14;
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
static ATerm z_3 (ATerm t)
{
  t = input_1_0(e_4, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm n_45 = NULL,o_45 = NULL;
  t = term_z_8;
  n_45 = t;
  t = term_f_10;
  o_45 = t;
  t = term_x_14;
  t = j_5(n_45, o_45, t);
  t = term_y_14;
  return(t);
}
static ATerm c_4 (ATerm t)
{
  t = term_b_15;
  return(t);
}
static ATerm e_4 (ATerm t)
{
  t = output_1_0(h_4, t);
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = topdown_1_0(i_4, t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm c_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = c_15;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_5_0(x_3, default_system_usage_0_0, default_system_about_0_0, _id, z_3, t);
  return(t);
}
