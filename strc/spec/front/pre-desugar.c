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
ATerm term_w_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_a_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_q_13;
ATerm term_p_13;
ATerm term_o_13;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_t_11;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_i_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_n_10;
ATerm term_i_10;
ATerm term_e_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_u_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_t_8;
ATerm term_q_8;
ATerm term_o_8;
ATerm term_n_8;
ATerm term_l_8;
ATerm term_w_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_r_7;
ATerm term_k_6;
ATerm term_e_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_s_5;
ATerm term_p_5;
ATerm term_o_5;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_5));
  term_o_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_5));
  term_s_5 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym__2, term_s_5, term_v_5);
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_6));
  term_e_6 = (ATerm) ATmakeAppl(sym__2, term_c_6, term_d_6);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(sym_SVar_1, term_r_7);
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(sym_Op_2, term_u_7, (ATerm) ATempty);
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_l_8);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym_SVar_1, term_u_7);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_Call_2, term_o_8, (ATerm) ATempty);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeInt(32);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeInt(13);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("oncetd", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_SVar_1, term_s_9);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_Call_2, term_t_9, (ATerm) ATempty);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_Call_2, term_t_7, (ATerm) ATempty);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("Anno_Cong__", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(sym_SVar_1, term_c_10);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_Id_0);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(sym__2, term_s_5, term_i_11);
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym__2, term_i_11, term_t_11);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_o_5);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeInt(117);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(75);
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_o_5);
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_13));
  term_o_13 = (ATerm) ATmakeAppl(sym__2, term_n_13, term_o_5);
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_c_14, term_o_5);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym__3, term_c_6, term_d_6, (ATerm) ATempty);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym__2, term_s_5, term_c_14);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(sym__2, term_s_5, term_k_13);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym__2, term_e_15, term_o_5);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(sym_stdin_0);
}
#include <srts/init-stratego-application.h>
ATerm map_1_0 (ATerm a_112 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t);
static ATerm b_0 (ATerm t);
static ATerm c_0 (ATerm t);
static ATerm k_0 (ATerm t);
ATerm default_system_usage_2_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm c_113 (ATerm), ATerm t);
ATerm last_0_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm unquote_chars_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm e_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm DesugarOnce_0_0 (ATerm t);
static ATerm n_30 (ATerm j_20, ATerm m_20, ATerm t);
static ATerm o_30 (ATerm x_20, ATerm y_20, ATerm t);
static ATerm g_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm p_1 (ATerm t);
static ATerm t_1 (ATerm t);
static ATerm u_1 (ATerm t);
ATerm Desugar_0_0 (ATerm t);
ATerm repeat_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t);
ATerm topdown_1_0 (ATerm o_105 (ATerm), ATerm t);
static ATerm u_4 (ATerm m_53, ATerm n_53, ATerm t);
static ATerm v_4 (ATerm r_37, ATerm s_37, ATerm t);
static ATerm x_4 (ATerm r_111 (ATerm), ATerm w_265, ATerm x_37, ATerm t);
static ATerm w_4 (ATerm n_37, ATerm o_37, ATerm t);
static ATerm x_1 (ATerm t);
static ATerm y_1 (ATerm t);
static ATerm z_1 (ATerm t);
ATerm output_file_0_0 (ATerm t);
ATerm dtime_0_0 (ATerm t);
ATerm apply_strategy_1_0 (ATerm e_130 (ATerm), ATerm t);
static ATerm l_33 (ATerm f_33, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm y_4 (ATerm t_37, ATerm t);
static ATerm z_4 (ATerm q_51, ATerm r_51, ATerm t);
static ATerm a_5 (ATerm o_53, ATerm p_53, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm w_34 (ATerm v_33, ATerm t);
static ATerm x_34 (ATerm z_33, ATerm a_34, ATerm b_34, ATerm t);
static ATerm y_34 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm t);
static ATerm b_5 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm k_112 (ATerm), ATerm t);
static ATerm g_5 (ATerm m_60, ATerm n_60, ATerm t);
ATerm if_verbose2_1_0 (ATerm n_128 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_2 (ATerm t);
static ATerm g_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm m_2 (ATerm t);
static ATerm q_2 (ATerm t);
static ATerm r_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm w_2 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm j_5 (ATerm d_72, ATerm e_72, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm h_5 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm t);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm g_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm j_3 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm c_5 (ATerm c_57, ATerm d_57, ATerm t);
ATerm foldr_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm k_3 (ATerm t);
static ATerm l_3 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm m_128 (ATerm), ATerm t);
static ATerm m_3 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm k_5 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t);
static ATerm l_5 (ATerm h_63, ATerm i_63, ATerm t);
ATerm lookup_table_0_1 (ATerm f_60, ATerm t);
ATerm new_hashtable_0_2 (ATerm m_63, ATerm n_63, ATerm t);
ATerm table_create_0_0 (ATerm t);
static ATerm e_5 (ATerm j_63, ATerm k_63, ATerm t);
static ATerm f_5 (ATerm o_63, ATerm t);
ATerm table_hashtable_0_0 (ATerm t);
ATerm table_destroy_0_0 (ATerm t);
static ATerm o_3 (ATerm t);
static ATerm p_3 (ATerm t);
static ATerm s_3 (ATerm t);
static ATerm w_3 (ATerm t);
static ATerm a_4 (ATerm t);
static ATerm b_4 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm k_133 (ATerm), ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
ATerm parse_options_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm t);
ATerm option_wrap_5_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t);
static ATerm l_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm iowrap_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm map_1_0 (ATerm a_112 (ATerm), ATerm t)
{
  static ATerm z_0 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm w_0 = NULL,x_0 = NULL,y_0 = NULL;
    w_0 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_0;
      }
    else
      {
        ATerm e_0 = NULL,h_1 = NULL,i_1 = NULL,i_0 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_0 = ATgetFirst((ATermList) t);
            y_0 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_0);
        e_0 = t;
        t = x_0;
        t = a_112(t);
        h_1 = t;
        t = y_0;
        t = z_0(t);
        i_1 = t;
        t = (ATerm) ATinsert(CheckATermList(i_1), h_1);
        i_0 = t;
        t = SSLsetAnnotations(i_0, e_0);
      }
    return(t);
  }
  t = z_0(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm m_0 (ATerm), ATerm o_0 (ATerm), ATerm t)
{
  ATerm c_1 = NULL,d_1 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_1 = ATgetFirst((ATermList) t);
      d_1 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_1 = NULL,s_1 = NULL;
        static ATerm a_0 (ATerm t);
        static ATerm a_0 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(q_1)), not_null(s_1));
          return(t);
        }
        t = d_1;
        t = o_0(t);
        if(((q_1 != NULL) && (q_1 != t)))
          _fail(t);
        else
          q_1 = t;
        t = c_1;
        t = m_0(t);
        if(((s_1 != NULL) && (s_1 != t)))
          _fail(t);
        else
          s_1 = t;
        t = d_1;
        t = reverse_acc_2_0(m_0, a_0, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_o_5;
      t = o_0(t);
    }
  return(t);
}
static ATerm b_0 (ATerm t)
{
  ATerm n_2 = NULL,o_2 = NULL,p_2 = NULL,n_0 = NULL;
  p_2 = t;
  if(match_cons(t, sym_Program_1))
    {
      o_2 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_2);
  n_2 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, o_2);
  n_0 = t;
  t = SSLsetAnnotations(n_0, n_2);
  return(t);
}
static ATerm c_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm k_0 (ATerm t)
{
  ATerm u_2 = NULL;
  u_2 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, u_2), term_p_5);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_2_0 (ATerm p_133 (ATerm), ATerm q_133 (ATerm), ATerm t)
{
  ATerm h_2 = NULL,i_2 = NULL;
  ATerm q_5 = t;
  int r_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_2 = NULL,l_2 = NULL;
      t = term_s_5;
      k_2 = t;
      t = term_v_5;
      l_2 = t;
      t = term_w_5;
      t = g_5(k_2, l_2, t);
      LocalPopChoice(r_5);
    }
  else
    {
      t = q_5;
      t = fetch_1_0(b_0, t);
    }
  {
    ATerm x_5 = t;
    int z_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_133(t);
        t = echo_0_0(t);
        LocalPopChoice(z_5);
      }
    else
      {
        t = x_5;
      }
  }
  t = term_b_6;
  t = echo_0_0(t);
  t = term_c_6;
  h_2 = t;
  t = term_d_6;
  i_2 = t;
  t = term_e_6;
  t = g_5(h_2, i_2, t);
  t = reverse_acc_2_0(_id, c_0, t);
  t = map_1_0(k_0, t);
  {
    ATerm f_6 = t;
    int h_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_2 = NULL;
        t = q_133(t);
        v_2 = t;
        t = (ATerm) ATinsert(CheckATermList(v_2), term_k_6);
        t = echo_0_0(t);
        LocalPopChoice(h_6);
      }
    else
      {
        t = f_6;
      }
  }
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm d_3 = NULL,e_3 = NULL,f_3 = NULL,q_0 = NULL;
  f_3 = t;
  if(match_cons(t, sym_Program_1))
    {
      e_3 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(f_3);
  d_3 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, e_3);
  q_0 = t;
  t = SSLsetAnnotations(q_0, d_3);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm z_2 = NULL;
  z_2 = t;
  {
    ATerm m_6 = t;
    int n_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_3 = NULL,c_3 = NULL;
        t = term_s_5;
        b_3 = t;
        t = term_v_5;
        c_3 = t;
        t = term_w_5;
        t = g_5(b_3, c_3, t);
        LocalPopChoice(n_6);
      }
    else
      {
        t = m_6;
        t = fetch_1_0(p_0, t);
      }
  }
  t = z_2;
  t = default_system_usage_2_0(_fail, _fail, t);
  return(t);
}
ATerm at_last_1_0 (ATerm c_113 (ATerm), ATerm t)
{
  static ATerm t_4 (ATerm t);
  static ATerm t_4 (ATerm t)
  {
    ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL;
    q_4 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_4 = ATgetFirst((ATermList) t);
        s_4 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm o_6 = t;
      int p_6 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_1 = NULL,t_0 = NULL;
          t = SSLgetAnnotations(q_4);
          r_1 = t;
          t = s_4;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(s_4), r_4);
          t_0 = t;
          t = SSLsetAnnotations(t_0, r_1);
          t = c_113(t);
          LocalPopChoice(p_6);
        }
      else
        {
          t = o_6;
          {
            ATerm c_2 = NULL,f_2 = NULL,u_0 = NULL;
            t = SSLgetAnnotations(q_4);
            c_2 = t;
            t = s_4;
            t = t_4(t);
            f_2 = t;
            t = (ATerm) ATinsert(CheckATermList(f_2), r_4);
            u_0 = t;
            t = SSLsetAnnotations(u_0, c_2);
          }
        }
    }
    return(t);
  }
  t = t_4(t);
  return(t);
}
ATerm last_0_0 (ATerm t)
{
  ATerm y_5 = NULL,a_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_5 = ATgetFirst((ATermList) t);
      a_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = a_6;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = y_5;
    }
  else
    {
      t = a_6;
      t = last_0_0(t);
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm l_6 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_6 = ATgetFirst((ATermList) t);
      l_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = l_6;
  return(t);
}
ATerm unquote_chars_2_0 (ATerm c_122 (ATerm), ATerm d_122 (ATerm), ATerm t)
{
  ATerm g_6 = NULL,i_6 = NULL,j_6 = NULL;
  g_6 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_6 = ATgetFirst((ATermList) t);
      {
        ATerm t_6 = (ATerm) ATgetNext((ATermList) t);
      }
    }
  else
    _fail(t);
  t = j_6;
  t = c_122(t);
  t = g_6;
  t = last_0_0(t);
  t = d_122(t);
  t = g_6;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm u_6 = ATgetFirst((ATermList) t);
      i_6 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = i_6;
  t = at_last_1_0(r_0, t);
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
static ATerm e_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm DesugarOnce_0_0 (ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL;
  q_17 = t;
  if(match_cons(t, sym_Real_1))
    {
      r_17 = ATgetArgument(t, 0);
      {
        ATerm h_3 = NULL;
        t = SSL_string_to_real(r_17);
        h_3 = t;
        t = (ATerm) ATmakeAppl(sym_Real_1, h_3);
      }
    }
  else
    {
      if(match_cons(t, sym_Int_1))
        {
          r_17 = ATgetArgument(t, 0);
          {
            ATerm n_3 = NULL;
            t = SSL_string_to_int(r_17);
            n_3 = t;
            t = (ATerm) ATmakeAppl(sym_Int_1, n_3);
          }
        }
      else
        {
          if(match_cons(t, sym_Con_3))
            {
              r_17 = ATgetArgument(t, 0);
              s_17 = ATgetArgument(t, 1);
              m_17 = ATgetArgument(t, 2);
              t = SSL_is_string(m_17);
              t = (ATerm) ATmakeAppl(sym_Con_3, r_17, s_17, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, m_17), (ATerm) ATempty));
            }
          else
            {
              if(match_cons(t, sym_PrimT_3))
                {
                  r_17 = ATgetArgument(t, 0);
                  s_17 = ATgetArgument(t, 1);
                  m_17 = ATgetArgument(t, 2);
                  {
                    ATerm t_5 = NULL;
                    t = r_17;
                    {
                      ATerm v_6 = t;
                      int w_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm u_5 = NULL;
                          t = SSL_explode_string(r_17);
                          t = unquote_chars_2_0(s_0, v_0, t);
                          u_5 = t;
                          t = SSL_implode_string(u_5);
                          LocalPopChoice(w_6);
                        }
                      else
                        {
                          t = v_6;
                        }
                    }
                    t_5 = t;
                    t = (ATerm) ATmakeAppl(sym_PrimT_3, t_5, s_17, m_17);
                  }
                }
              else
                {
                  if(match_cons(t, sym_Prim_2))
                    {
                      r_17 = ATgetArgument(t, 0);
                      s_17 = ATgetArgument(t, 1);
                      {
                        ATerm r_6 = NULL;
                        t = r_17;
                        {
                          ATerm x_6 = t;
                          int y_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_6 = NULL;
                              t = SSL_explode_string(r_17);
                              t = unquote_chars_2_0(a_1, b_1, t);
                              s_6 = t;
                              t = SSL_implode_string(s_6);
                              LocalPopChoice(y_6);
                            }
                          else
                            {
                              t = x_6;
                            }
                        }
                        r_6 = t;
                        t = (ATerm) ATmakeAppl(sym_PrimT_3, r_6, (ATerm)ATempty, s_17);
                      }
                    }
                  else
                    {
                      if(match_cons(t, sym_PrimNoArgs_1))
                        {
                          r_17 = ATgetArgument(t, 0);
                          {
                            ATerm b_7 = NULL;
                            t = r_17;
                            {
                              ATerm z_6 = t;
                              int a_7 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm c_7 = NULL;
                                  t = SSL_explode_string(r_17);
                                  t = unquote_chars_2_0(e_1, f_1, t);
                                  c_7 = t;
                                  t = SSL_implode_string(c_7);
                                  LocalPopChoice(a_7);
                                }
                              else
                                {
                                  t = z_6;
                                }
                            }
                            b_7 = t;
                            t = (ATerm) ATmakeAppl(sym_PrimT_3, b_7, (ATerm)ATempty, (ATerm) ATempty);
                          }
                        }
                      else
                        {
                          if(match_cons(t, sym_DefaultVarDec_1))
                            {
                              r_17 = ATgetArgument(t, 0);
                              {
                                ATerm j_7 = NULL,l_7 = NULL,m_7 = NULL,q_3 = NULL;
                                t = SSLgetAnnotations(q_17);
                                j_7 = t;
                                t = SSL_explode_string(r_17);
                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                  {
                                    ATerm d_7 = ATgetFirst((ATermList) t);
                                    if(((ATgetType(d_7) != AT_INT) || (ATgetInt((ATermInt) d_7) != 39)))
                                      _fail(t);
                                    l_7 = (ATerm) ATgetNext((ATermList) t);
                                  }
                                else
                                  _fail(t);
                                t = SSL_implode_string(l_7);
                                m_7 = t;
                                t = (ATerm) ATmakeAppl(sym_DefaultVarDec_1, m_7);
                                q_3 = t;
                                t = SSLsetAnnotations(q_3, j_7);
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_RDefT_4))
                                {
                                  r_17 = ATgetArgument(t, 0);
                                  s_17 = ATgetArgument(t, 1);
                                  m_17 = ATgetArgument(t, 2);
                                  l_17 = ATgetArgument(t, 3);
                                  {
                                    ATerm v_7 = NULL,j_8 = NULL,k_8 = NULL,r_3 = NULL;
                                    t = SSLgetAnnotations(q_17);
                                    v_7 = t;
                                    t = SSL_explode_string(r_17);
                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                      {
                                        ATerm e_7 = ATgetFirst((ATermList) t);
                                        if(((ATgetType(e_7) != AT_INT) || (ATgetInt((ATermInt) e_7) != 39)))
                                          _fail(t);
                                        j_8 = (ATerm) ATgetNext((ATermList) t);
                                      }
                                    else
                                      _fail(t);
                                    t = SSL_implode_string(j_8);
                                    k_8 = t;
                                    t = (ATerm) ATmakeAppl(sym_RDefT_4, k_8, s_17, m_17, l_17);
                                    r_3 = t;
                                    t = SSLsetAnnotations(r_3, v_7);
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_RDef_3))
                                    {
                                      r_17 = ATgetArgument(t, 0);
                                      s_17 = ATgetArgument(t, 1);
                                      m_17 = ATgetArgument(t, 2);
                                      {
                                        ATerm m_9 = NULL,x_9 = NULL,y_9 = NULL,t_3 = NULL;
                                        t = SSLgetAnnotations(q_17);
                                        m_9 = t;
                                        t = SSL_explode_string(r_17);
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            ATerm f_7 = ATgetFirst((ATermList) t);
                                            if(((ATgetType(f_7) != AT_INT) || (ATgetInt((ATermInt) f_7) != 39)))
                                              _fail(t);
                                            x_9 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSL_implode_string(x_9);
                                        y_9 = t;
                                        t = (ATerm) ATmakeAppl(sym_RDef_3, y_9, s_17, m_17);
                                        t_3 = t;
                                        t = SSLsetAnnotations(t_3, m_9);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_SDefT_4))
                                        {
                                          r_17 = ATgetArgument(t, 0);
                                          s_17 = ATgetArgument(t, 1);
                                          m_17 = ATgetArgument(t, 2);
                                          l_17 = ATgetArgument(t, 3);
                                          {
                                            ATerm d_11 = NULL,n_11 = NULL,o_11 = NULL,u_3 = NULL;
                                            t = SSLgetAnnotations(q_17);
                                            d_11 = t;
                                            t = SSL_explode_string(r_17);
                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                              {
                                                ATerm g_7 = ATgetFirst((ATermList) t);
                                                if(((ATgetType(g_7) != AT_INT) || (ATgetInt((ATermInt) g_7) != 39)))
                                                  _fail(t);
                                                n_11 = (ATerm) ATgetNext((ATermList) t);
                                              }
                                            else
                                              _fail(t);
                                            t = SSL_implode_string(n_11);
                                            o_11 = t;
                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, o_11, s_17, m_17, l_17);
                                            u_3 = t;
                                            t = SSLsetAnnotations(u_3, d_11);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_SDef_3))
                                            {
                                              r_17 = ATgetArgument(t, 0);
                                              s_17 = ATgetArgument(t, 1);
                                              m_17 = ATgetArgument(t, 2);
                                              {
                                                ATerm i_12 = NULL,p_12 = NULL,q_12 = NULL,v_3 = NULL;
                                                t = SSLgetAnnotations(q_17);
                                                i_12 = t;
                                                t = SSL_explode_string(r_17);
                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                  {
                                                    ATerm h_7 = ATgetFirst((ATermList) t);
                                                    if(((ATgetType(h_7) != AT_INT) || (ATgetInt((ATermInt) h_7) != 39)))
                                                      _fail(t);
                                                    p_12 = (ATerm) ATgetNext((ATermList) t);
                                                  }
                                                else
                                                  _fail(t);
                                                t = SSL_implode_string(p_12);
                                                q_12 = t;
                                                t = (ATerm) ATmakeAppl(sym_SDef_3, q_12, s_17, m_17);
                                                v_3 = t;
                                                t = SSLsetAnnotations(v_3, i_12);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_VarDec_2))
                                                {
                                                  r_17 = ATgetArgument(t, 0);
                                                  s_17 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_13 = NULL,t_13 = NULL,u_13 = NULL,x_3 = NULL;
                                                    t = SSLgetAnnotations(q_17);
                                                    g_13 = t;
                                                    t = SSL_explode_string(r_17);
                                                    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                      {
                                                        ATerm i_7 = ATgetFirst((ATermList) t);
                                                        if(((ATgetType(i_7) != AT_INT) || (ATgetInt((ATermInt) i_7) != 39)))
                                                          _fail(t);
                                                        t_13 = (ATerm) ATgetNext((ATermList) t);
                                                      }
                                                    else
                                                      _fail(t);
                                                    t = SSL_implode_string(t_13);
                                                    u_13 = t;
                                                    t = (ATerm) ATmakeAppl(sym_VarDec_2, u_13, s_17);
                                                    x_3 = t;
                                                    t = SSLsetAnnotations(x_3, g_13);
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_Var_1))
                                                    {
                                                      r_17 = ATgetArgument(t, 0);
                                                      {
                                                        ATerm h_14 = NULL,m_14 = NULL,r_14 = NULL,y_3 = NULL;
                                                        t = SSLgetAnnotations(q_17);
                                                        h_14 = t;
                                                        t = SSL_explode_string(r_17);
                                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                          {
                                                            ATerm k_7 = ATgetFirst((ATermList) t);
                                                            if(((ATgetType(k_7) != AT_INT) || (ATgetInt((ATermInt) k_7) != 39)))
                                                              _fail(t);
                                                            m_14 = (ATerm) ATgetNext((ATermList) t);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = SSL_implode_string(m_14);
                                                        r_14 = t;
                                                        t = (ATerm) ATmakeAppl(sym_Var_1, r_14);
                                                        y_3 = t;
                                                        t = SSLsetAnnotations(y_3, h_14);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(t, sym_SVar_1))
                                                        {
                                                          r_17 = ATgetArgument(t, 0);
                                                          {
                                                            ATerm b_15 = NULL,l_15 = NULL,n_15 = NULL,z_3 = NULL;
                                                            t = SSLgetAnnotations(q_17);
                                                            b_15 = t;
                                                            t = SSL_explode_string(r_17);
                                                            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                              {
                                                                ATerm n_7 = ATgetFirst((ATermList) t);
                                                                if(((ATgetType(n_7) != AT_INT) || (ATgetInt((ATermInt) n_7) != 39)))
                                                                  _fail(t);
                                                                l_15 = (ATerm) ATgetNext((ATermList) t);
                                                              }
                                                            else
                                                              _fail(t);
                                                            t = SSL_implode_string(l_15);
                                                            n_15 = t;
                                                            t = (ATerm) ATmakeAppl(sym_SVar_1, n_15);
                                                            z_3 = t;
                                                            t = SSLsetAnnotations(z_3, b_15);
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(t, sym_OpDecl_2))
                                                            {
                                                              r_17 = ATgetArgument(t, 0);
                                                              s_17 = ATgetArgument(t, 1);
                                                              {
                                                                ATerm x_15 = NULL,b_16 = NULL,c_16 = NULL,c_4 = NULL;
                                                                t = SSLgetAnnotations(q_17);
                                                                x_15 = t;
                                                                t = SSL_explode_string(r_17);
                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                  {
                                                                    ATerm o_7 = ATgetFirst((ATermList) t);
                                                                    if(((ATgetType(o_7) != AT_INT) || (ATgetInt((ATermInt) o_7) != 39)))
                                                                      _fail(t);
                                                                    b_16 = (ATerm) ATgetNext((ATermList) t);
                                                                  }
                                                                else
                                                                  _fail(t);
                                                                t = SSL_implode_string(b_16);
                                                                c_16 = t;
                                                                t = (ATerm) ATmakeAppl(sym_OpDecl_2, c_16, s_17);
                                                                c_4 = t;
                                                                t = SSLsetAnnotations(c_4, x_15);
                                                              }
                                                            }
                                                          else
                                                            {
                                                              ATerm b_17 = NULL,g_17 = NULL,h_17 = NULL,d_4 = NULL;
                                                              if(match_cons(t, sym_Op_2))
                                                                {
                                                                  r_17 = ATgetArgument(t, 0);
                                                                  s_17 = ATgetArgument(t, 1);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSLgetAnnotations(q_17);
                                                              b_17 = t;
                                                              t = SSL_explode_string(r_17);
                                                              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                {
                                                                  ATerm p_7 = ATgetFirst((ATermList) t);
                                                                  if(((ATgetType(p_7) != AT_INT) || (ATgetInt((ATermInt) p_7) != 39)))
                                                                    _fail(t);
                                                                  g_17 = (ATerm) ATgetNext((ATermList) t);
                                                                }
                                                              else
                                                                _fail(t);
                                                              t = SSL_implode_string(g_17);
                                                              h_17 = t;
                                                              t = (ATerm) ATmakeAppl(sym_Op_2, h_17, s_17);
                                                              d_4 = t;
                                                              t = SSLsetAnnotations(d_4, b_17);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
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
static ATerm n_30 (ATerm j_20, ATerm m_20, ATerm t)
{
  t = j_20;
  {
    ATerm q_7 = t;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL,t_20 = NULL,z_7 = NULL;
        t_20 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_20 = ATgetFirst((ATermList) t);
            q_20 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(t_20);
        o_20 = t;
        t = q_20;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(q_20), p_20);
        z_7 = t;
        t = SSLsetAnnotations(z_7, o_20);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = q_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Op_2, term_r_7, j_20);
  return(t);
}
static ATerm o_30 (ATerm x_20, ATerm y_20, ATerm t)
{
  t = x_20;
  {
    ATerm s_7 = t;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL,b_21 = NULL,e_21 = NULL,h_21 = NULL,b_8 = NULL;
        h_21 = t;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            b_21 = ATgetFirst((ATermList) t);
            e_21 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_21);
        a_21 = t;
        t = e_21;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = (ATerm) ATinsert(CheckATermList(e_21), b_21);
        b_8 = t;
        t = SSLsetAnnotations(b_8, a_21);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = s_7;
      }
  }
  t = (ATerm) ATmakeAppl(sym_Call_2, term_t_7, x_20);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = term_w_7;
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm d_22 = NULL,f_22 = NULL,v_17 = NULL;
  d_22 = t;
  t = SSL_explode_term(d_22);
  if(match_cons(t, sym__2))
    {
      ATerm x_7 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) x_7) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm y_7 = ATgetArgument(t, 1);
        if(((ATgetType(y_7) == AT_LIST) && !(ATisEmpty(y_7))))
          {
            f_22 = ATgetFirst((ATermList) y_7);
            {
              ATerm a_8 = (ATerm) ATgetNext((ATermList) y_7);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = SSL_explode_term(d_22);
  if(match_cons(t, sym__2))
    {
      ATerm c_8 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) c_8) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm d_8 = ATgetArgument(t, 1);
        if(((ATgetType(d_8) == AT_LIST) && !(ATisEmpty(d_8))))
          {
            ATerm e_8 = ATgetFirst((ATermList) d_8);
            ATerm f_8 = (ATerm) ATgetNext((ATermList) d_8);
            if(((ATgetType(f_8) == AT_LIST) && !(ATisEmpty(f_8))))
              {
                v_17 = ATgetFirst((ATermList) f_8);
                {
                  ATerm i_8 = (ATerm) ATgetNext((ATermList) f_8);
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
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, v_17), f_22));
  return(t);
}
static ATerm l_1 (ATerm t)
{
  ATerm o_26 = NULL,p_26 = NULL;
  if(match_cons(t, sym__2))
    {
      o_26 = ATgetArgument(t, 0);
      p_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, p_26), o_26));
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_w_7;
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm r_26 = NULL,u_26 = NULL;
  if(match_cons(t, sym__2))
    {
      r_26 = ATgetArgument(t, 0);
      u_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Op_2, term_l_8, (ATerm) ATinsert(ATinsert(ATempty, u_26), r_26));
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm l_27 = NULL,m_27 = NULL;
  if(match_cons(t, sym__2))
    {
      l_27 = ATgetArgument(t, 0);
      m_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, m_27), l_27));
  return(t);
}
static ATerm t_1 (ATerm t)
{
  t = term_q_8;
  return(t);
}
static ATerm u_1 (ATerm t)
{
  ATerm o_27 = NULL,s_27 = NULL;
  if(match_cons(t, sym__2))
    {
      o_27 = ATgetArgument(t, 0);
      s_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym_Call_2, term_n_8, (ATerm) ATinsert(ATinsert(ATempty, s_27), o_27));
  return(t);
}
ATerm Desugar_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,n_21 = NULL,o_21 = NULL,p_21 = NULL,q_21 = NULL,t_21 = NULL;
  p_21 = t;
  if(match_cons(t, sym_Anno_2))
    {
      q_21 = ATgetArgument(t, 0);
      t_21 = ATgetArgument(t, 1);
      {
        ATerm z_21 = NULL;
        t = t_21;
        t = foldr_2_0(g_1, j_1, t);
        z_21 = t;
        t = (ATerm) ATmakeAppl(sym_Anno_2, q_21, z_21);
      }
    }
  else
    {
      if(match_cons(t, sym_SortNoArgs_1))
        {
          q_21 = ATgetArgument(t, 0);
          t = (ATerm) ATmakeAppl(sym_Sort_2, q_21, (ATerm) ATempty);
        }
      else
        {
          if(match_cons(t, sym_Char_1))
            {
              q_21 = ATgetArgument(t, 0);
              {
                ATerm f_18 = NULL;
                t = q_21;
                {
                  ATerm r_8 = t;
                  int s_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      if(match_string(t, "'\\ '"))
                        {
                          t = term_t_8;
                        }
                      else
                        {
                          if(match_string(t, "'\\r'"))
                            {
                              t = term_w_8;
                            }
                          else
                            {
                              if(match_string(t, "'\\t'"))
                                {
                                  t = term_x_8;
                                }
                              else
                                {
                                  if(match_string(t, "'\\n'"))
                                    {
                                      t = term_y_8;
                                    }
                                  else
                                    {
                                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("'\\''", 0, ATtrue)))
                                        _fail(t);
                                      t = term_z_8;
                                    }
                                }
                            }
                        }
                      LocalPopChoice(s_8);
                    }
                  else
                    {
                      t = r_8;
                      {
                        ATerm k_18 = NULL;
                        t = SSL_explode_string(q_21);
                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                          {
                            ATerm b_9 = ATgetFirst((ATermList) t);
                            if(((ATgetType(b_9) != AT_INT) || (ATgetInt((ATermInt) b_9) != 39)))
                              _fail(t);
                            {
                              ATerm d_9 = (ATerm) ATgetNext((ATermList) t);
                              if(((ATgetType(d_9) == AT_LIST) && !(ATisEmpty(d_9))))
                                {
                                  k_18 = ATgetFirst((ATermList) d_9);
                                  {
                                    ATerm e_9 = (ATerm) ATgetNext((ATermList) d_9);
                                    if(((ATgetType(e_9) == AT_LIST) && !(ATisEmpty(e_9))))
                                      {
                                        ATerm f_9 = ATgetFirst((ATermList) e_9);
                                        if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 39)))
                                          _fail(t);
                                        {
                                          ATerm g_9 = (ATerm) ATgetNext((ATermList) e_9);
                                          if(((ATgetType(g_9) != AT_LIST) || !(ATisEmpty(g_9))))
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
                        t = k_18;
                      }
                    }
                }
                f_18 = t;
                t = (ATerm) ATmakeAppl(sym_Int_1, f_18);
              }
            }
          else
            {
              ATerm i_9 = t;
              int j_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  if(match_cons(t, sym_Con4_4))
                    {
                      q_21 = ATgetArgument(t, 0);
                      {
                        ATerm l_9 = ATgetArgument(t, 1);
                      }
                      o_21 = ATgetArgument(t, 2);
                      i_21 = ATgetArgument(t, 3);
                    }
                  else
                    _fail(t);
                  LocalPopChoice(j_9);
                  t = (ATerm) ATmakeAppl(sym_Con_3, q_21, o_21, (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, i_21), (ATerm) ATempty));
                }
              else
                {
                  t = i_9;
                  {
                    ATerm n_9 = t;
                    int p_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym_Con3_3))
                          {
                            q_21 = ATgetArgument(t, 0);
                            {
                              ATerm q_9 = ATgetArgument(t, 1);
                            }
                            o_21 = ATgetArgument(t, 2);
                          }
                        else
                          _fail(t);
                        LocalPopChoice(p_9);
                        t = (ATerm) ATmakeAppl(sym_Con_3, q_21, o_21, term_u_9);
                      }
                    else
                      {
                        t = n_9;
                        if(match_cons(t, sym_Con1_2))
                          {
                            q_21 = ATgetArgument(t, 0);
                            t_21 = ATgetArgument(t, 1);
                            t = (ATerm) ATmakeAppl(sym_Con_3, q_21, t_21, term_u_9);
                          }
                        else
                          {
                            if(match_cons(t, sym_ListTail_2))
                              {
                                q_21 = ATgetArgument(t, 0);
                                t_21 = ATgetArgument(t, 1);
                                {
                                  static ATerm k_1 (ATerm t);
                                  static ATerm k_1 (ATerm t)
                                  {
                                    t = t_21;
                                    return(t);
                                  }
                                  t = q_21;
                                  t = foldr_2_0(k_1, l_1, t);
                                }
                              }
                            else
                              {
                                if(match_cons(t, sym_List_1))
                                  {
                                    q_21 = ATgetArgument(t, 0);
                                    t = q_21;
                                    t = foldr_2_0(m_1, n_1, t);
                                  }
                                else
                                  {
                                    if(match_cons(t, sym_Tuple_1))
                                      {
                                        q_21 = ATgetArgument(t, 0);
                                        t = q_21;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            j_21 = ATgetFirst((ATermList) t);
                                            k_21 = (ATerm) ATgetNext((ATermList) t);
                                            t = k_21;
                                            if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                              {
                                                ATerm v_9 = t;
                                                int w_9 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    t = n_30(q_21, p_21, t);
                                                    LocalPopChoice(w_9);
                                                  }
                                                else
                                                  {
                                                    t = v_9;
                                                    t = j_21;
                                                  }
                                              }
                                            else
                                              {
                                                t = n_30(q_21, p_21, t);
                                              }
                                          }
                                        else
                                          {
                                            t = n_30(q_21, p_21, t);
                                          }
                                      }
                                    else
                                      {
                                        if(match_cons(t, sym_CharCong_1))
                                          {
                                            q_21 = ATgetArgument(t, 0);
                                            t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Char_1, q_21));
                                          }
                                        else
                                          {
                                            if(match_cons(t, sym_RealCong_1))
                                              {
                                                q_21 = ATgetArgument(t, 0);
                                                t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Real_1, q_21));
                                              }
                                            else
                                              {
                                                if(match_cons(t, sym_IntCong_1))
                                                  {
                                                    q_21 = ATgetArgument(t, 0);
                                                    t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Int_1, q_21));
                                                  }
                                                else
                                                  {
                                                    if(match_cons(t, sym_StrCong_1))
                                                      {
                                                        q_21 = ATgetArgument(t, 0);
                                                        t = (ATerm) ATmakeAppl(sym_Match_1, (ATerm) ATmakeAppl(sym_Str_1, q_21));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_ModCongNoArgs_1))
                                                          {
                                                            q_21 = ATgetArgument(t, 0);
                                                            t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_21), (ATerm) ATempty);
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_ModCong_2))
                                                              {
                                                                q_21 = ATgetArgument(t, 0);
                                                                t_21 = ATgetArgument(t, 1);
                                                                t = (ATerm) ATmakeAppl(sym_Call_2, (ATerm)ATmakeAppl(sym_SVar_1, q_21), t_21);
                                                              }
                                                            else
                                                              {
                                                                if(match_cons(t, sym_ListCong_2))
                                                                  {
                                                                    q_21 = ATgetArgument(t, 0);
                                                                    t_21 = ATgetArgument(t, 1);
                                                                    {
                                                                      static ATerm o_1 (ATerm t);
                                                                      static ATerm o_1 (ATerm t)
                                                                      {
                                                                        t = t_21;
                                                                        return(t);
                                                                      }
                                                                      t = q_21;
                                                                      t = foldr_2_0(o_1, p_1, t);
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    if(match_cons(t, sym_ListCongNoTail_1))
                                                                      {
                                                                        q_21 = ATgetArgument(t, 0);
                                                                        t = q_21;
                                                                        t = foldr_2_0(t_1, u_1, t);
                                                                      }
                                                                    else
                                                                      {
                                                                        if(match_cons(t, sym_TupleCong_2))
                                                                          {
                                                                            q_21 = ATgetArgument(t, 0);
                                                                            t_21 = ATgetArgument(t, 1);
                                                                            t = (ATerm) ATmakeAppl(sym_Call_2, term_t_7, (ATerm) ATinsert(CheckATermList(t_21), q_21));
                                                                          }
                                                                        else
                                                                          {
                                                                            if(match_cons(t, sym_TupleCong_1))
                                                                              {
                                                                                q_21 = ATgetArgument(t, 0);
                                                                                t = q_21;
                                                                                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                                                                  {
                                                                                    j_21 = ATgetFirst((ATermList) t);
                                                                                    k_21 = (ATerm) ATgetNext((ATermList) t);
                                                                                    t = k_21;
                                                                                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                                                                                      {
                                                                                        ATerm z_9 = t;
                                                                                        int a_10 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = o_30(q_21, p_21, t);
                                                                                            LocalPopChoice(a_10);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = z_9;
                                                                                            t = j_21;
                                                                                          }
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        t = o_30(q_21, p_21, t);
                                                                                      }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    t = o_30(q_21, p_21, t);
                                                                                  }
                                                                              }
                                                                            else
                                                                              {
                                                                                if(match_cons(t, sym_EmptyTupleCong_0))
                                                                                  {
                                                                                    t = term_b_10;
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    if(match_cons(t, sym_AnnoCong_2))
                                                                                      {
                                                                                        q_21 = ATgetArgument(t, 0);
                                                                                        t_21 = ATgetArgument(t, 1);
                                                                                        t = t_21;
                                                                                        if(match_cons(t, sym_StrategyCurly_1))
                                                                                          {
                                                                                            n_21 = ATgetArgument(t, 0);
                                                                                          }
                                                                                        else
                                                                                          _fail(t);
                                                                                        t = (ATerm) ATmakeAppl(sym_Call_2, term_d_10, (ATerm) ATinsert(ATinsert(ATempty, n_21), q_21));
                                                                                      }
                                                                                    else
                                                                                      {
                                                                                        if(match_cons(t, sym_ParenStrat_1))
                                                                                          {
                                                                                            q_21 = ATgetArgument(t, 0);
                                                                                            t = q_21;
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            if(match_cons(t, sym_StratRuleNoCond_2))
                                                                                              {
                                                                                                q_21 = ATgetArgument(t, 0);
                                                                                                t_21 = ATgetArgument(t, 1);
                                                                                                t = (ATerm) ATmakeAppl(sym_StratRule_3, q_21, t_21, term_e_10);
                                                                                              }
                                                                                            else
                                                                                              {
                                                                                                if(match_cons(t, sym_RuleNoCond_2))
                                                                                                  {
                                                                                                    q_21 = ATgetArgument(t, 0);
                                                                                                    t_21 = ATgetArgument(t, 1);
                                                                                                    t = (ATerm) ATmakeAppl(sym_Rule_3, q_21, t_21, term_e_10);
                                                                                                  }
                                                                                                else
                                                                                                  {
                                                                                                    if(match_cons(t, sym_OverlayNoArgs_2))
                                                                                                      {
                                                                                                        q_21 = ATgetArgument(t, 0);
                                                                                                        t_21 = ATgetArgument(t, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_Overlay_3, q_21, (ATerm)ATempty, t_21);
                                                                                                      }
                                                                                                    else
                                                                                                      {
                                                                                                        if(match_cons(t, sym_RChoice_2))
                                                                                                          {
                                                                                                            q_21 = ATgetArgument(t, 0);
                                                                                                            t_21 = ATgetArgument(t, 1);
                                                                                                            t = (ATerm) ATmakeAppl(sym_LChoice_2, t_21, q_21);
                                                                                                          }
                                                                                                        else
                                                                                                          {
                                                                                                            if(match_cons(t, sym_Call_2))
                                                                                                              {
                                                                                                                q_21 = ATgetArgument(t, 0);
                                                                                                                t_21 = ATgetArgument(t, 1);
                                                                                                                t = (ATerm) ATmakeAppl(sym_CallT_3, q_21, t_21, (ATerm) ATempty);
                                                                                                              }
                                                                                                            else
                                                                                                              {
                                                                                                                if(match_cons(t, sym_CallNoArgs_1))
                                                                                                                  {
                                                                                                                    q_21 = ATgetArgument(t, 0);
                                                                                                                    t = (ATerm) ATmakeAppl(sym_CallT_3, q_21, (ATerm)ATempty, (ATerm) ATempty);
                                                                                                                  }
                                                                                                                else
                                                                                                                  {
                                                                                                                    if(match_cons(t, sym_SDef_3))
                                                                                                                      {
                                                                                                                        q_21 = ATgetArgument(t, 0);
                                                                                                                        t_21 = ATgetArgument(t, 1);
                                                                                                                        o_21 = ATgetArgument(t, 2);
                                                                                                                        t = (ATerm) ATmakeAppl(sym_SDefT_4, q_21, t_21, (ATerm)ATempty, o_21);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        if(match_cons(t, sym_SDefNoArgs_2))
                                                                                                                          {
                                                                                                                            q_21 = ATgetArgument(t, 0);
                                                                                                                            t_21 = ATgetArgument(t, 1);
                                                                                                                            t = (ATerm) ATmakeAppl(sym_SDefT_4, q_21, (ATerm)ATempty, (ATerm)ATempty, t_21);
                                                                                                                          }
                                                                                                                        else
                                                                                                                          {
                                                                                                                            if(match_cons(t, sym_SRDef_3))
                                                                                                                              {
                                                                                                                                q_21 = ATgetArgument(t, 0);
                                                                                                                                t_21 = ATgetArgument(t, 1);
                                                                                                                                o_21 = ATgetArgument(t, 2);
                                                                                                                                t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_21, t_21, (ATerm)ATempty, o_21);
                                                                                                                              }
                                                                                                                            else
                                                                                                                              {
                                                                                                                                if(match_cons(t, sym_SRDefNoArgs_2))
                                                                                                                                  {
                                                                                                                                    q_21 = ATgetArgument(t, 0);
                                                                                                                                    t_21 = ATgetArgument(t, 1);
                                                                                                                                    t = (ATerm) ATmakeAppl(sym_SRDefT_4, q_21, (ATerm)ATempty, (ATerm)ATempty, t_21);
                                                                                                                                  }
                                                                                                                                else
                                                                                                                                  {
                                                                                                                                    if(match_cons(t, sym_RDef_3))
                                                                                                                                      {
                                                                                                                                        q_21 = ATgetArgument(t, 0);
                                                                                                                                        t_21 = ATgetArgument(t, 1);
                                                                                                                                        o_21 = ATgetArgument(t, 2);
                                                                                                                                        t = (ATerm) ATmakeAppl(sym_RDefT_4, q_21, t_21, (ATerm)ATempty, o_21);
                                                                                                                                      }
                                                                                                                                    else
                                                                                                                                      {
                                                                                                                                        if(match_cons(t, sym_RDefNoArgs_2))
                                                                                                                                          {
                                                                                                                                            q_21 = ATgetArgument(t, 0);
                                                                                                                                            t_21 = ATgetArgument(t, 1);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_RDefT_4, q_21, (ATerm)ATempty, (ATerm)ATempty, t_21);
                                                                                                                                          }
                                                                                                                                        else
                                                                                                                                          {
                                                                                                                                            if(match_cons(t, sym_Module_2))
                                                                                                                                              {
                                                                                                                                                ATerm f_10 = ATgetArgument(t, 0);
                                                                                                                                                t_21 = ATgetArgument(t, 1);
                                                                                                                                              }
                                                                                                                                            else
                                                                                                                                              _fail(t);
                                                                                                                                            t = (ATerm) ATmakeAppl(sym_Specification_1, t_21);
                                                                                                                                          }
                                                                                                                                      }
                                                                                                                                  }
                                                                                                                              }
                                                                                                                          }
                                                                                                                      }
                                                                                                                  }
                                                                                                              }
                                                                                                          }
                                                                                                      }
                                                                                                  }
                                                                                              }
                                                                                          }
                                                                                      }
                                                                                  }
                                                                              }
                                                                          }
                                                                      }
                                                                  }
                                                              }
                                                          }
                                                      }
                                                  }
                                              }
                                          }
                                      }
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
ATerm repeat_2_0 (ATerm o_104 (ATerm), ATerm p_104 (ATerm), ATerm t)
{
  static ATerm p_30 (ATerm t);
  static ATerm p_30 (ATerm t)
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_104(t);
        t = p_30(t);
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        t = p_104(t);
      }
    return(t);
  }
  t = p_30(t);
  return(t);
}
ATerm topdown_1_0 (ATerm o_105 (ATerm), ATerm t)
{
  static ATerm v_1 (ATerm t);
  static ATerm v_1 (ATerm t)
  {
    t = topdown_1_0(o_105, t);
    return(t);
  }
  t = o_105(t);
  t = SRTS_all(v_1, t);
  return(t);
}
static ATerm u_4 (ATerm m_53, ATerm n_53, ATerm t)
{
  ATerm q_30 = NULL;
  t = SSL_fputc(m_53, n_53);
  q_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_30);
  return(t);
}
static ATerm v_4 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm t_30 = NULL;
  t = SSL_write_term_to_stream_text(r_37, s_37);
  t_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_30);
  return(t);
}
static ATerm x_4 (ATerm r_111 (ATerm), ATerm w_265, ATerm x_37, ATerm t)
{
  ATerm v_30 = NULL;
  t = (ATerm) ATmakeAppl(sym__2, w_265, term_i_10);
  t = b_5(t);
  v_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_30, x_37);
  t = r_111(t);
  t = fclose_0_0(t);
  t = x_37;
  return(t);
}
static ATerm w_4 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm w_30 = NULL;
  t = SSL_write_term_to_stream_baf(n_37, o_37);
  w_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_30);
  return(t);
}
static ATerm x_1 (ATerm t)
{
  if(!(match_cons(t, sym_Binary_0)))
    _fail(t);
  return(t);
}
static ATerm y_1 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm j_10 = ATgetArgument(t, 0);
      if(match_cons(j_10, sym_Stream_1))
        {
          e_19 = ATgetArgument(j_10, 0);
        }
      else
        _fail(t);
      f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_4(e_19, f_19, t);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm k_10 = ATgetArgument(t, 0);
      if(match_cons(k_10, sym_Stream_1))
        {
          t_19 = ATgetArgument(k_10, 0);
        }
      else
        _fail(t);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_4(t_19, u_19, t);
  q_19 = t;
  t = term_y_8;
  r_19 = t;
  t = q_19;
  if(match_cons(t, sym_Stream_1))
    {
      s_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, q_19);
  t = u_4(r_19, s_19, t);
  return(t);
}
ATerm output_file_0_0 (ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,j_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,p_32 = NULL,q_32 = NULL,h_8 = NULL,g_8 = NULL;
  g_31 = t;
  if(match_cons(t, sym__2))
    {
      n_31 = ATgetArgument(t, 0);
      o_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_31);
  m_31 = t;
  t = n_31;
  {
    ATerm l_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        static ATerm w_1 (ATerm t);
        static ATerm w_1 (ATerm t)
        {
          if(match_cons(t, sym_Output_1))
            {
              if(((f_31 != NULL) && (f_31 != ATgetArgument(t, 0))))
                _fail(ATgetArgument(t, 0));
              else
                f_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          return(t);
        }
        t = fetch_1_0(w_1, t);
        LocalPopChoice(m_10);
      }
    else
      {
        t = l_10;
        t = term_n_10;
        f_31 = t;
      }
  }
  p_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_31, o_31);
  g_8 = t;
  t = SSLsetAnnotations(g_8, m_31);
  t = g_31;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_31);
  h_31 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_31, (ATerm) ATmakeAppl(sym__2, not_null(f_31), j_31));
  h_8 = t;
  t = SSLsetAnnotations(h_8, h_31);
  l_31 = t;
  if(match_cons(t, sym__2))
    {
      p_32 = ATgetArgument(t, 0);
      q_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL,m_8 = NULL;
        t = SSLgetAnnotations(l_31);
        x_18 = t;
        t = p_32;
        t = fetch_1_0(x_1, t);
        a_19 = t;
        t = q_32;
        if(match_cons(t, sym__2))
          {
            c_19 = ATgetArgument(t, 0);
            d_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = x_4(y_1, c_19, d_19, t);
        b_19 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_19, b_19);
        m_8 = t;
        t = SSLsetAnnotations(m_8, x_18);
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        {
          ATerm k_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL,p_8 = NULL;
          t = SSLgetAnnotations(l_31);
          k_19 = t;
          t = q_32;
          if(match_cons(t, sym__2))
            {
              o_19 = ATgetArgument(t, 0);
              p_19 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_4(z_1, o_19, p_19, t);
          n_19 = t;
          t = (ATerm) ATmakeAppl(sym__2, p_32, n_19);
          p_8 = t;
          t = SSLsetAnnotations(p_8, k_19);
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
ATerm apply_strategy_1_0 (ATerm e_130 (ATerm), ATerm t)
{
  ATerm t_32 = NULL,u_32 = NULL,v_32 = NULL,w_32 = NULL,x_32 = NULL;
  x_32 = t;
  t = dtime_0_0(t);
  t = x_32;
  t = e_130(t);
  w_32 = t;
  t = dtime_0_0(t);
  t_32 = t;
  t = w_32;
  if(match_cons(t, sym__2))
    {
      u_32 = ATgetArgument(t, 0);
      v_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(u_32), (ATerm) ATmakeAppl(sym_Runtime_1, t_32)), v_32);
  return(t);
}
static ATerm l_33 (ATerm f_33, ATerm t)
{
  t = SSL_fclose(f_33);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL;
  j_33 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_33 = ATgetArgument(t, 0);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_33);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = l_33(j_33, t);
          }
      }
    }
  else
    {
      t = l_33(j_33, t);
    }
  return(t);
}
static ATerm y_4 (ATerm t_37, ATerm t)
{
  t = SSL_read_term_from_stream(t_37);
  return(t);
}
static ATerm z_4 (ATerm q_51, ATerm r_51, ATerm t)
{
  t = SSL_strcat(q_51, r_51);
  return(t);
}
static ATerm a_5 (ATerm o_53, ATerm p_53, ATerm t)
{
  ATerm m_33 = NULL;
  t = SSL_fopen(o_53, p_53);
  m_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_33);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_33 = NULL;
  t = SSL_stdin_stream();
  n_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_33);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm o_33 = NULL;
  t = SSL_stdout_stream();
  o_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_33);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm p_33 = NULL;
  t = SSL_stderr_stream();
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_33);
  return(t);
}
static ATerm w_34 (ATerm v_33, ATerm t)
{
  ATerm w_33 = NULL;
  t = SSL_explode_term(v_33);
  if(match_cons(t, sym__2))
    {
      ATerm s_10 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_10) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm t_10 = ATgetArgument(t, 1);
        if(((ATgetType(t_10) == AT_LIST) && !(ATisEmpty(t_10))))
          {
            w_33 = ATgetFirst((ATermList) t_10);
            {
              ATerm u_10 = (ATerm) ATgetNext((ATermList) t_10);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = w_33;
  if(match_cons(t, sym_stderr_0))
    {
      t = w_33;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = w_33;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = w_33;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm x_34 (ATerm z_33, ATerm a_34, ATerm b_34, ATerm t)
{
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL,h_34 = NULL,u_8 = NULL;
  t = SSLgetAnnotations(b_34);
  e_34 = t;
  t = z_33;
  if(match_cons(t, sym_Path_1))
    {
      h_34 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, h_34, a_34);
  u_8 = t;
  t = SSLsetAnnotations(u_8, e_34);
  if(match_cons(t, sym__2))
    {
      c_34 = ATgetArgument(t, 0);
      d_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(c_34, d_34, t);
  return(t);
}
static ATerm y_34 (ATerm j_34, ATerm k_34, ATerm l_34, ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,r_34 = NULL,v_8 = NULL;
  t = SSLgetAnnotations(l_34);
  o_34 = t;
  t = SSL_is_string(j_34);
  r_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_34, k_34);
  v_8 = t;
  t = SSLsetAnnotations(v_8, o_34);
  if(match_cons(t, sym__2))
    {
      m_34 = ATgetArgument(t, 0);
      n_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = a_5(m_34, n_34, t);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  if(match_cons(t, sym__2))
    {
      u_34 = ATgetArgument(t, 0);
      v_34 = ATgetArgument(t, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = w_34(t_34, t);
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_10 = t;
              int y_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_34(u_34, v_34, t_34, t);
                  LocalPopChoice(y_10);
                }
              else
                {
                  t = x_10;
                  t = y_34(u_34, v_34, t_34, t);
                }
            }
          }
      }
    }
  else
    {
      t = w_34(t_34, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL,h_35 = NULL;
  h_35 = t;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, h_35, term_b_11);
        t = b_5(t);
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm r_20 = NULL,s_20 = NULL;
          t = term_c_11;
          s_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, h_35);
          t = z_4(s_20, h_35, t);
          r_20 = t;
          t = SSL_perror(r_20);
          _fail(t);
        }
      }
  }
  b_35 = t;
  if(match_cons(t, sym_Stream_1))
    {
      c_35 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = y_4(c_35, t);
  a_35 = t;
  t = b_35;
  t = fclose_0_0(t);
  t = a_35;
  return(t);
}
ATerm fetch_1_0 (ATerm k_112 (ATerm), ATerm t)
{
  static ATerm g_36 (ATerm t);
  static ATerm g_36 (ATerm t)
  {
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    d_36 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_36 = ATgetFirst((ATermList) t);
        f_36 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_11 = t;
      int f_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_21 = NULL,l_21 = NULL,a_9 = NULL;
          t = SSLgetAnnotations(d_36);
          d_21 = t;
          t = e_36;
          t = k_112(t);
          l_21 = t;
          t = (ATerm) ATinsert(CheckATermList(f_36), l_21);
          a_9 = t;
          t = SSLsetAnnotations(a_9, d_21);
          LocalPopChoice(f_11);
        }
      else
        {
          t = e_11;
          {
            ATerm b_22 = NULL,h_22 = NULL,c_9 = NULL;
            t = SSLgetAnnotations(d_36);
            b_22 = t;
            t = f_36;
            t = g_36(t);
            h_22 = t;
            t = (ATerm) ATinsert(CheckATermList(h_22), e_36);
            c_9 = t;
            t = SSLsetAnnotations(c_9, b_22);
          }
        }
    }
    return(t);
  }
  t = g_36(t);
  return(t);
}
static ATerm g_5 (ATerm m_60, ATerm n_60, ATerm t)
{
  ATerm j_36 = NULL;
  t = lookup_table_0_1(m_60, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      j_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = l_5(n_60, j_36, t);
  return(t);
}
ATerm if_verbose2_1_0 (ATerm n_128 (ATerm), ATerm t)
{
  ATerm m_36 = NULL;
  m_36 = t;
  {
    ATerm g_11 = t;
    int h_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_36 = NULL,p_36 = NULL,q_36 = NULL;
        t = term_s_5;
        p_36 = t;
        t = term_i_11;
        q_36 = t;
        t = term_j_11;
        t = g_5(p_36, q_36, t);
        o_36 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_36, term_k_11);
        t = geq_0_0(t);
        t = m_36;
        t = n_128(t);
        LocalPopChoice(h_11);
      }
    else
      {
        t = g_11;
        t = m_36;
      }
  }
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm t_36 = NULL,u_36 = NULL,v_36 = NULL;
  t_36 = t;
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = t_36;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm p_11 = ATgetFirst((ATermList) t);
                ATerm q_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = t_36;
          }
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        t = (ATerm) ATinsert(ATempty, t_36);
      }
  }
  u_36 = t;
  t = term_n_10;
  v_36 = t;
  t = SSL_printnl(v_36, u_36);
  t = t_36;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm z_36 = NULL,a_37 = NULL;
  t = term_s_5;
  z_36 = t;
  t = term_v_5;
  a_37 = t;
  t = term_w_5;
  t = g_5(z_36, a_37, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm c_37 = NULL;
  c_37 = t;
  if(match_string(t, "-k"))
    {
      t = c_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = c_37;
    }
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  t = SSL_string_to_int(d_37);
  e_37 = t;
  t = term_r_11;
  f_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_11, e_37);
  t = j_5(f_37, e_37, t);
  t = d_37;
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = term_s_11;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_2, b_2, d_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  ATerm h_37 = NULL;
  h_37 = t;
  if(match_string(t, "-S"))
    {
      t = h_37;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_37;
    }
  return(t);
}
static ATerm g_2 (ATerm t)
{
  ATerm i_37 = NULL,j_37 = NULL;
  t = term_i_11;
  i_37 = t;
  t = term_t_11;
  j_37 = t;
  t = term_u_11;
  t = j_5(i_37, j_37, t);
  t = term_v_11;
  return(t);
}
static ATerm j_2 (ATerm t)
{
  t = term_w_11;
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
  ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
  k_37 = t;
  t = SSL_string_to_int(k_37);
  l_37 = t;
  t = term_i_11;
  m_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_11, l_37);
  t = j_5(m_37, l_37, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, k_37);
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = term_x_11;
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
  ATerm p_37 = NULL,q_37 = NULL;
  t = term_y_11;
  p_37 = t;
  t = term_o_5;
  q_37 = t;
  t = term_z_11;
  t = j_5(p_37, q_37, t);
  t = term_a_12;
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_b_12;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_12 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_2, g_2, j_2, t);
      LocalPopChoice(d_12);
    }
  else
    {
      t = c_12;
      {
        ATerm e_12 = t;
        int f_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(m_2, q_2, r_2, t);
            LocalPopChoice(f_12);
          }
        else
          {
            t = e_12;
            t = Option_3_0(s_2, t_2, w_2, t);
          }
      }
    }
  return(t);
}
static ATerm j_5 (ATerm d_72, ATerm e_72, ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL;
  t = term_s_5;
  u_37 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_s_5, d_72, e_72);
  t = lookup_table_0_1(u_37, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      v_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(d_72, e_72, v_37, t);
  t = (ATerm) ATmakeAppl(sym__3, term_s_5, d_72, e_72);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_38 = NULL,c_38 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
      t = term_o_5;
      t = g_0(t);
      d_38 = t;
      t = term_c_6;
      e_38 = t;
      t = term_d_6;
      f_38 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_6, term_d_6, d_38);
      t = h_5(e_38, f_38, d_38, t);
      _fail(t);
    }
  else
    {
      ATerm i_38 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_38 = ATgetFirst((ATermList) t);
          c_38 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_38;
      t = d_0(t);
      t = term_o_5;
      t = f_0(t);
      i_38 = t;
      t = (ATerm) ATinsert(CheckATermList(c_38), i_38);
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm k_38 = NULL;
  k_38 = t;
  if(match_string(t, "-o"))
    {
      t = k_38;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = k_38;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  l_38 = t;
  t = term_g_12;
  m_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_12, l_38);
  t = j_5(m_38, l_38, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, l_38);
  return(t);
}
static ATerm a_3 (ATerm t)
{
  t = term_h_12;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(x_2, y_2, a_3, t);
  return(t);
}
static ATerm h_5 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL,r_38 = NULL,s_38 = NULL;
  o_38 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
  {
    ATerm j_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm l_12 = ATgetArgument(t, 0);
            ATerm m_12 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        t = g_5(t_58, u_58, t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = j_12;
        t = (ATerm) ATempty;
      }
  }
  p_38 = t;
  t = (ATerm) ATmakeAppl(sym__3, t_58, u_58, (ATerm) ATinsert(CheckATermList(p_38), s_58));
  t = lookup_table_0_1(t_58, t);
  s_38 = t;
  t = (ATerm) ATinsert(CheckATermList(p_38), s_58);
  q_38 = t;
  t = s_38;
  if(match_cons(t, sym_Hashtable_1))
    {
      r_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(u_58, q_38, r_38, t);
  t = o_38;
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm j_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,d_39 = NULL,e_39 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_39 = NULL,g_39 = NULL,h_39 = NULL;
      t = term_o_5;
      t = l_0(t);
      f_39 = t;
      t = term_c_6;
      g_39 = t;
      t = term_d_6;
      h_39 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_6, term_d_6, f_39);
      t = h_5(g_39, h_39, f_39, t);
      _fail(t);
    }
  else
    {
      ATerm l_39 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_38 = ATgetFirst((ATermList) t);
          a_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_39;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_39 = ATgetFirst((ATermList) t);
          e_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_38;
      t = h_0(t);
      t = d_39;
      t = j_0(t);
      l_39 = t;
      t = (ATerm) ATinsert(CheckATermList(e_39), l_39);
    }
  return(t);
}
static ATerm g_3 (ATerm t)
{
  ATerm n_39 = NULL;
  n_39 = t;
  if(match_string(t, "-i"))
    {
      t = n_39;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_39;
    }
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  o_39 = t;
  t = term_n_12;
  p_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_12, o_39);
  t = j_5(p_39, o_39, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_39);
  return(t);
}
static ATerm j_3 (ATerm t)
{
  t = term_o_12;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(g_3, i_3, j_3, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL;
  t = report_run_time_0_0(t);
  t = term_o_5;
  t = whoami_0_0(t);
  q_39 = t;
  t = term_r_12;
  s_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_12), q_39);
  t_39 = t;
  t = SSL_printnl(s_39, t_39);
  t = term_t_12;
  r_39 = t;
  t = SSL_exit(r_39);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm u_39 = NULL,v_39 = NULL;
  t = term_s_5;
  u_39 = t;
  t = term_v_5;
  v_39 = t;
  t = term_w_5;
  t = g_5(u_39, v_39, t);
  return(t);
}
static ATerm c_5 (ATerm c_57, ATerm d_57, ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(c_57, d_57);
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      t = SSL_addr(c_57, d_57);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_118 (ATerm), ATerm a_119 (ATerm), ATerm t)
{
  ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
  x_39 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_39;
      t = z_118(t);
    }
  else
    {
      ATerm c_40 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_39 = ATgetFirst((ATermList) t);
          z_39 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_39;
      t = foldr_2_0(z_118, a_119, t);
      c_40 = t;
      t = (ATerm) ATmakeAppl(sym__2, y_39, c_40);
      t = a_119(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm k_3 (ATerm t)
{
  t = term_t_11;
  return(t);
}
static ATerm l_3 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL;
  if(match_cons(t, sym__2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_5(q_22, r_22, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm f_40 = NULL,m_22 = NULL,n_22 = NULL;
  t = times_0_0(t);
  n_22 = t;
  t = SSL_explode_term(n_22);
  if(match_cons(t, sym__2))
    {
      ATerm w_12 = ATgetArgument(t, 0);
      m_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_22;
  t = foldr_2_0(k_3, l_3, t);
  f_40 = t;
  t = SSL_TicksToSeconds(f_40);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL;
  q_40 = t;
  if(match_cons(t, sym__2))
    {
      r_40 = ATgetArgument(t, 0);
      s_40 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm x_12 = t;
    int y_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_40;
        if((r_40 != t))
          {
            _fail(t);
          }
        t = q_40;
        LocalPopChoice(y_12);
      }
    else
      {
        t = x_12;
        t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
        {
          ATerm z_12 = t;
          int a_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(r_40, s_40);
              LocalPopChoice(a_13);
            }
          else
            {
              t = z_12;
              t = SSL_gtr(r_40, s_40);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, r_40, s_40);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm m_128 (ATerm), ATerm t)
{
  ATerm w_40 = NULL;
  w_40 = t;
  {
    ATerm b_13 = t;
    int c_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
        t = term_s_5;
        z_40 = t;
        t = term_i_11;
        a_41 = t;
        t = term_j_11;
        t = g_5(z_40, a_41, t);
        y_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_40, term_t_12);
        t = geq_0_0(t);
        t = w_40;
        t = m_128(t);
        LocalPopChoice(c_13);
      }
    else
      {
        t = b_13;
        t = w_40;
      }
  }
  return(t);
}
static ATerm m_3 (ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL,f_41 = NULL,g_41 = NULL;
  t = run_time_0_0(t);
  c_41 = t;
  t = term_o_5;
  t = whoami_0_0(t);
  d_41 = t;
  t = term_r_12;
  f_41 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), c_41), term_d_13), d_41);
  g_41 = t;
  t = SSL_printnl(f_41, g_41);
  t = (ATerm) ATmakeAppl(sym__2, term_r_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_13), c_41), term_d_13), d_41));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(m_3, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm h_41 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_11;
  h_41 = t;
  t = SSL_exit(h_41);
  return(t);
}
static ATerm k_5 (ATerm e_63, ATerm f_63, ATerm g_63, ATerm t)
{
  ATerm i_41 = NULL;
  t = SSL_hashtable_put(g_63, e_63, f_63);
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, i_41);
  return(t);
}
static ATerm l_5 (ATerm h_63, ATerm i_63, ATerm t)
{
  t = SSL_hashtable_get(i_63, h_63);
  return(t);
}
ATerm lookup_table_0_1 (ATerm f_60, ATerm t)
{
  ATerm r_41 = NULL;
  t = table_hashtable_0_0(t);
  r_41 = t;
  {
    ATerm f_13 = t;
    int h_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_23 = NULL;
        t = r_41;
        if(match_cons(t, sym_Hashtable_1))
          {
            c_23 = ATgetArgument(t, 0);
          }
        else
          _fail(t);
        t = l_5(f_60, c_23, t);
        LocalPopChoice(h_13);
      }
    else
      {
        t = f_13;
        {
          ATerm h_23 = NULL;
          t = f_60;
          t = table_create_0_0(t);
          t = r_41;
          if(match_cons(t, sym_Hashtable_1))
            {
              h_23 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = l_5(f_60, h_23, t);
        }
      }
  }
  return(t);
}
ATerm new_hashtable_0_2 (ATerm m_63, ATerm n_63, ATerm t)
{
  ATerm u_41 = NULL;
  t = SSL_hashtable_create(m_63, n_63);
  u_41 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, u_41);
  return(t);
}
ATerm table_create_0_0 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,z_41 = NULL,a_42 = NULL;
  v_41 = t;
  t = term_i_13;
  z_41 = t;
  t = term_j_13;
  a_42 = t;
  t = v_41;
  t = new_hashtable_0_2(z_41, a_42, t);
  w_41 = t;
  t = v_41;
  t = table_hashtable_0_0(t);
  if(match_cons(t, sym_Hashtable_1))
    {
      x_41 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(v_41, w_41, x_41, t);
  t = v_41;
  return(t);
}
static ATerm e_5 (ATerm j_63, ATerm k_63, ATerm t)
{
  ATerm b_42 = NULL;
  t = SSL_hashtable_remove(k_63, j_63);
  b_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, b_42);
  return(t);
}
static ATerm f_5 (ATerm o_63, ATerm t)
{
  ATerm c_42 = NULL;
  t = SSL_hashtable_destroy(o_63);
  c_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, c_42);
  return(t);
}
ATerm table_hashtable_0_0 (ATerm t)
{
  ATerm d_42 = NULL;
  t = SSL_table_hashtable();
  d_42 = t;
  t = (ATerm) ATmakeAppl(sym_Hashtable_1, d_42);
  return(t);
}
ATerm table_destroy_0_0 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL;
  e_42 = t;
  t = table_hashtable_0_0(t);
  f_42 = t;
  t = lookup_table_0_1(e_42, t);
  if(match_cons(t, sym_Hashtable_1))
    {
      h_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_5(h_42, t);
  t = f_42;
  if(match_cons(t, sym_Hashtable_1))
    {
      g_42 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_5(e_42, g_42, t);
  t = e_42;
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
  ATerm i_42 = NULL,j_42 = NULL;
  t = term_k_13;
  i_42 = t;
  t = term_o_5;
  j_42 = t;
  t = term_l_13;
  t = j_5(i_42, j_42, t);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_m_13;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL;
  t = term_k_13;
  m_42 = t;
  t = term_o_5;
  n_42 = t;
  t = term_l_13;
  t = j_5(m_42, n_42, t);
  t = term_n_13;
  k_42 = t;
  t = term_o_5;
  l_42 = t;
  t = term_o_13;
  t = j_5(k_42, l_42, t);
  t = term_p_13;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  t = term_q_13;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm r_13 = t;
  int s_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_3, p_3, s_3, t);
      LocalPopChoice(s_13);
    }
  else
    {
      t = r_13;
      t = Option_3_0(w_3, a_4, b_4, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm e_84 (ATerm), ATerm f_84 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL,h_9 = NULL;
  t_42 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      p_42 = ATgetFirst((ATermList) t);
      q_42 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_42);
  o_42 = t;
  t = p_42;
  t = e_84(t);
  r_42 = t;
  t = q_42;
  t = f_84(t);
  s_42 = t;
  t = (ATerm) ATinsert(CheckATermList(s_42), r_42);
  h_9 = t;
  t = SSLsetAnnotations(h_9, o_42);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm k_133 (ATerm), ATerm t)
{
  ATerm y_42 = NULL,z_42 = NULL,a_43 = NULL,b_43 = NULL,d_43 = NULL,e_43 = NULL,k_9 = NULL;
  y_42 = t;
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_x_13;
        t = k_133(t);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
      }
  }
  t = y_42;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_43 = ATgetFirst((ATermList) t);
      b_43 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(y_42);
  z_42 = t;
  t = term_v_5;
  e_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, a_43);
  t = j_5(e_43, a_43, t);
  t = b_43;
  {
    static ATerm o_43 (ATerm t);
    static ATerm o_43 (ATerm t)
    {
      ATerm y_13 = t;
      int z_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_14 = t;
          int b_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_43 = NULL;
              h_43 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_43;
              LocalPopChoice(b_14);
            }
          else
            {
              t = a_14;
              t = k_133(t);
              t = Cons_2_0(_id, o_43, t);
            }
          LocalPopChoice(z_13);
        }
      else
        {
          t = y_13;
          {
            ATerm k_43 = NULL,l_43 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                k_43 = ATgetFirst((ATermList) t);
                l_43 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(l_43), (ATerm) ATmakeAppl(sym_Undefined_1, k_43));
          }
        }
      return(t);
    }
    t = o_43(t);
  }
  d_43 = t;
  t = (ATerm) ATinsert(CheckATermList(d_43), (ATerm) ATmakeAppl(sym_Program_1, a_43));
  k_9 = t;
  t = SSLsetAnnotations(k_9, z_42);
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm b_44 = NULL;
  b_44 = t;
  if(match_string(t, "--help"))
    {
      t = b_44;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = b_44;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = b_44;
        }
    }
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm c_44 = NULL,d_44 = NULL;
  t = term_c_14;
  c_44 = t;
  t = term_o_5;
  d_44 = t;
  t = term_d_14;
  t = j_5(c_44, d_44, t);
  t = term_e_14;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  t = term_f_14;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_3_0 (ATerm h_133 (ATerm), ATerm i_133 (ATerm), ATerm j_133 (ATerm), ATerm t)
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL;
  v_43 = t;
  t = term_c_6;
  w_43 = t;
  t = term_g_14;
  t = lookup_table_0_1(w_43, t);
  a_44 = t;
  t = term_d_6;
  x_43 = t;
  t = (ATerm) ATempty;
  y_43 = t;
  t = a_44;
  if(match_cons(t, sym_Hashtable_1))
    {
      z_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(x_43, y_43, z_43, t);
  t = v_43;
  {
    static ATerm e_4 (ATerm t);
    static ATerm e_4 (ATerm t)
    {
      ATerm i_14 = t;
      int j_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_133(t);
          LocalPopChoice(j_14);
        }
      else
        {
          t = i_14;
          {
            ATerm k_14 = t;
            int l_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(f_4, g_4, h_4, t);
                LocalPopChoice(l_14);
              }
            else
              {
                t = k_14;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(e_4, t);
  }
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_44 = NULL;
        o_44 = t;
        {
          ATerm p_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_23 = NULL;
              t = o_44;
              {
                ATerm s_14 = t;
                int t_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm m_23 = NULL,n_23 = NULL;
                    t = term_s_5;
                    m_23 = t;
                    t = term_c_14;
                    n_23 = t;
                    t = term_u_14;
                    t = g_5(m_23, n_23, t);
                    LocalPopChoice(t_14);
                  }
                else
                  {
                    t = s_14;
                    t = fetch_1_0(i_4, t);
                  }
              }
              t = o_44;
              t = i_133(t);
              t = term_t_11;
              l_23 = t;
              t = SSL_exit(l_23);
              LocalPopChoice(q_14);
            }
          else
            {
              t = p_14;
              {
                ATerm r_23 = NULL,s_23 = NULL,t_23 = NULL;
                t = term_s_5;
                s_23 = t;
                t = term_k_13;
                t_23 = t;
                t = term_v_14;
                t = g_5(s_23, t_23, t);
                t = o_44;
                t = j_133(t);
                t = term_t_11;
                r_23 = t;
                t = SSL_exit(r_23);
              }
            }
        }
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
          ATerm w_14 = t;
          int x_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL;
              static ATerm j_4 (ATerm t);
              static ATerm j_4 (ATerm t)
              {
                ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,o_9 = NULL;
                u_44 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    t_44 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(u_44);
                s_44 = t;
                t = t_44;
                if(((t_43 != NULL) && (t_43 != t)))
                  _fail(t);
                else
                  t_43 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, t_44);
                o_9 = t;
                t = SSLsetAnnotations(o_9, s_44);
                return(t);
              }
              t = fetch_1_0(j_4, t);
              t = term_r_12;
              q_44 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_43)), term_y_14);
              r_44 = t;
              t = SSL_printnl(q_44, r_44);
              t = (ATerm) ATmakeAppl(sym__2, term_r_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_43)), term_y_14));
              t = i_133(t);
              t = term_t_12;
              p_44 = t;
              t = SSL_exit(p_44);
              LocalPopChoice(x_14);
            }
          else
            {
              t = w_14;
            }
        }
      }
  }
  u_43 = t;
  t = term_c_6;
  t = table_destroy_0_0(t);
  t = u_43;
  return(t);
}
ATerm option_wrap_5_0 (ATerm k_131 (ATerm), ATerm l_131 (ATerm), ATerm m_131 (ATerm), ATerm n_131 (ATerm), ATerm o_131 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  t = parse_options_3_0(k_131, l_131, m_131, t);
  b_45 = t;
  t = term_z_14;
  t = table_create_0_0(t);
  t = term_z_14;
  c_45 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_z_14, term_a_15, b_45);
  t = lookup_table_0_1(c_45, t);
  f_45 = t;
  t = term_a_15;
  d_45 = t;
  t = f_45;
  if(match_cons(t, sym_Hashtable_1))
    {
      e_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = k_5(d_45, b_45, e_45, t);
  t = b_45;
  t = n_131(t);
  {
    ATerm c_15 = t;
    int d_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_131(t);
        t = report_success_0_0(t);
        LocalPopChoice(d_15);
      }
    else
      {
        t = c_15;
        t = report_failure_0_0(t);
      }
  }
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = if_verbose2_1_0(d_5, t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm g_45 = NULL,h_45 = NULL;
  t = term_e_15;
  g_45 = t;
  t = term_o_5;
  h_45 = t;
  t = term_f_15;
  t = j_5(g_45, h_45, t);
  t = term_g_15;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_h_15;
  return(t);
}
static ATerm d_5 (ATerm t)
{
  ATerm i_45 = NULL,j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  i_45 = t;
  t = term_s_5;
  m_45 = t;
  t = term_v_5;
  n_45 = t;
  t = term_w_5;
  t = g_5(m_45, n_45, t);
  j_45 = t;
  t = term_r_12;
  k_45 = t;
  t = (ATerm) ATinsert(ATempty, j_45);
  l_45 = t;
  t = SSL_printnl(k_45, l_45);
  t = i_45;
  return(t);
}
ATerm iowrap_3_0 (ATerm n_130 (ATerm), ATerm o_130 (ATerm), ATerm p_130 (ATerm), ATerm t)
{
  static ATerm k_4 (ATerm t);
  static ATerm m_4 (ATerm t);
  static ATerm k_4 (ATerm t)
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_130(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        {
          ATerm k_15 = t;
          int m_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = input_option_0_0(t);
              LocalPopChoice(m_15);
            }
          else
            {
              t = k_15;
              {
                ATerm o_15 = t;
                int p_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = output_option_0_0(t);
                    LocalPopChoice(p_15);
                  }
                else
                  {
                    t = o_15;
                    {
                      ATerm q_15 = t;
                      int r_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Option_3_0(n_4, o_4, p_4, t);
                          LocalPopChoice(r_15);
                        }
                      else
                        {
                          t = q_15;
                          {
                            ATerm s_15 = t;
                            int t_15 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = verbose_option_0_0(t);
                                LocalPopChoice(t_15);
                              }
                            else
                              {
                                t = s_15;
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
  static ATerm m_4 (ATerm t)
  {
    ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL;
    p_45 = t;
    {
      ATerm u_15 = t;
      int v_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          static ATerm i_5 (ATerm t);
          static ATerm i_5 (ATerm t)
          {
            if(match_cons(t, sym_Input_1))
              {
                if(((o_45 != NULL) && (o_45 != ATgetArgument(t, 0))))
                  _fail(ATgetArgument(t, 0));
                else
                  o_45 = ATgetArgument(t, 0);
              }
            else
              _fail(t);
            return(t);
          }
          t = fetch_1_0(i_5, t);
          LocalPopChoice(v_15);
        }
      else
        {
          t = u_15;
          t = term_w_15;
          o_45 = t;
        }
    }
    t = not_null(o_45);
    t = ReadFromFile_0_0(t);
    q_45 = t;
    t = (ATerm) ATmakeAppl(sym__2, p_45, q_45);
    t = apply_strategy_1_0(n_130, t);
    t = output_file_0_0(t);
    return(t);
  }
  t = option_wrap_5_0(k_4, p_130, default_system_about_0_0, l_4, m_4, t);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL,w_45 = NULL,x_45 = NULL,r_9 = NULL;
  x_45 = t;
  if(match_cons(t, sym__2))
    {
      u_45 = ATgetArgument(t, 0);
      v_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(x_45);
  t_45 = t;
  t = v_45;
  t = topdown_1_0(n_5, t);
  w_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_45, w_45);
  r_9 = t;
  t = SSLsetAnnotations(r_9, t_45);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = repeat_2_0(Desugar_0_0, _id, t);
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = DesugarOnce_0_0(t);
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = iowrap_3_0(m_5, _fail, default_system_usage_0_0, t);
  return(t);
}
